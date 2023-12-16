#include <cpu.h>
#include <isa.h>
#include <memory/vaddr.h>
#include "Vcpu___024root.h"
#include <svdpi.h>
#include <trace/itrace.h>
#include <sdb/watchpoint.h>

vluint64_t sim_time = 0;
CPU_state cpu_data = {};
uint64_t inst_cnt =0;
extern Vcpu* cpu;

const char *regs[] = {
	"$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
	"s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
	"a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
	"s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

/* STATUS */

void set_cpu_status(int state, vaddr_t pc, int halt_ret) {
	cpu_status.state = state;
	cpu_status.halt_pc = pc;
	cpu_status.halt_ret = halt_ret;
}

extern "C" void halt(svBit is_halt){
	//NPCTRAP(cpu->pc,10号寄存器($a0)的内容);
	get_cpu_pc();
	get_cpu_reg();
	if(is_halt) NPCTRAP(cpu_data.pc,gpr(10));	
	return;
}

void cpu_terminate(){
	if(cpu_status.state == ABORT){//ABORT
		printf("\nNPC EXIT: \033[0m\033[1;31mABORT\033[0m at pc = %#010x\n\n",cpu_status.halt_pc);
	}else if(cpu_status.halt_ret == 0){//GOOD
		printf("\nNPC EXIT: \033[0m\033[1;32mHIT GOOD TRAP\033[0m at pc = %#010x\n\n",cpu_status.halt_pc);
	}else{//BAD or unexpected situation
		printf("\nNPC EXIT: \033[0m\033[1;31mHIT BAD TRAP\033[0m at pc = %#010x\n\n",cpu_status.halt_pc);	
	}

	//m_trace->close();
	cpu->final();
	delete cpu;
}


/* DATA */

//当前实际的pc
void get_cpu_pc(){//之后写成DPIC
	cpu_data.pc = cpu->pc;
	cpu_data.dnpc = cpu->dnpc;
}

//返回预计将执行的指令
word_t set_cpu_inst(){
	word_t pending_inst = vaddr_read(cpu_data.pc,4);
	cpu->cmd = pending_inst;
	return pending_inst;
}

//当前实际执行的指令
void get_cpu_inst(){//之后写成DPIC
	cpu_data.inst = cpu->cmd;
}

void get_cpu_reg(){
	VlUnpacked<IData,32> rf_struct = cpu->rootp->cpu__DOT__rf1__DOT__rf;
	for(int i=0;i<REG_NUM;i++) gpr(i) = rf_struct.m_storage[i];
}


void reg_display() {
	printf(ANSI_FMT("name   value   name   value   name   value   name   value\n",ANSI_FG_BLUE));
	for(int i=0;i<32;i+=4){
		printf(ANSI_FMT("%3s 0x%08x %3s 0x%08x %3s 0x%08x %3s 0x%08x\n",ANSI_FG_BLUE), regs[i], gpr(i), regs[i+1], gpr(i+1), regs[i+2], gpr(i+2), regs[i+3], gpr(i+3));
	}
}

word_t reg_str2val(const char *s, bool *success) {
	for(int i=0;i<REG_NUM;i++){
		if(!strcmp(regs[i],s)){ 
			*success=true;
			return gpr(i);
		}
	}
	*success=false;
	return 0;
}


/* EXEC */

static void single_inst_debug(){
	
	//watchpoint update
	uint32_t new_result=0;
	WP* wp=check_wp(&new_result);
	if(wp!=NULL){
		cpu_status.state=STOP;
		printf(ANSI_FMT("Watchpoint change",ANSI_FG_GREEN) ":In No.%d,[%s],(%d==>%d)\n",wp->NO,wp->expr_s,wp->val,new_result);
		wp->val=new_result;
	}

}

extern void clk_update();
void exec_once(){
	//cpu_data更新pc
	get_cpu_pc();
	//加载inst
	IFDEF(CONFIG_STEP_PRINT, printf(ANSI_FMT("%#010x:\t%#010x\n",ANSI_FG_BLUE),cpu->pc,set_cpu_inst()), set_cpu_inst());
	//cpu_data更新inst
	get_cpu_inst();
	buffer_insert();
	clk_update();
}

void exec(uint64_t n){
	switch(cpu_status.state){
		case TERMINATE:case ABORT:
			printf("Program execution has ended. To restart the program, exit NPC and run again.\n");
		return;

		default://STOP、ALIVE
			cpu_status.state=ALIVE;
		break;
	}

	for(;n>0;n--){
		exec_once();
		sim_time++;
		inst_cnt++;
		single_inst_debug();
		if(cpu_status.state != ALIVE) break;
	}

	switch(cpu_status.state){
		case ALIVE:
			cpu_status.state = STOP;
		break;

		case TERMINATE: case ABORT:
			if(cpu_status.halt_pc == 0){//运行结束
				//TODO:输出调试信息
				buffer_disp();
			}
			cpu_terminate();
			
		case QUIT://DEAD、ABORT时也成立
			//TODO:输出统计信息
		break;
	}
}


