#include <cpu.h>
#include <isa.h>
#include <memory/vaddr.h>
#include "Vcpu___024root.h"
#include <svdpi.h>

vluint64_t sim_time = 0;
CPU_state cpu_data = {};
extern Vcpu* cpu;

const char *regs[] = {
	"$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
	"s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
	"a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
	"s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

void set_cpu_status(int state, vaddr_t pc, int halt_ret) {
	cpu_status.state = state;
	cpu_status.halt_pc = pc;
	cpu_status.halt_ret = halt_ret;
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

void get_cpu_pc(){//之后加入DPIC
	cpu_data.pc = cpu->pc;
	cpu_data.dnpc = cpu->dnpc;
}

word_t set_cpu_inst(){//之后加入DPIC
	word_t inst = vaddr_read(cpu_data.pc,4);
	cpu->cmd = inst;
	return inst;
}

void get_cpu_reg(){
	VlUnpacked<IData,32> rf_struct = cpu->rootp->cpu__DOT__rf1__DOT__rf;
	for(int i=0;i<32;i++) cpu_data.gpr[i] = rf_struct.m_storage[i];
}

static void single_inst_debug(){
	//TODO
}

extern void clk_update();
void exec_once(){
	get_cpu_pc();
	printf("%#010x:\t%#010x\n",cpu->dnpc,set_cpu_inst());
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
		//single_inst_debug();
		if(cpu_status.state != ALIVE) break;
		//printf("TEST");
	}

	switch(cpu_status.state){
		case ALIVE:
			cpu_status.state = STOP;
		break;

		case TERMINATE: case ABORT:
			//buffer_disp();
			if(cpu_status.halt_pc == 0){//运行结束
				//TODO:输出调试信息
			}
			cpu_terminate();
			
		case QUIT://DEAD、ABORT时也成立
			//TODO:输出统计信息
		break;
	}
}

extern "C" void halt(svBit is_halt){
	//NPCTRAP(cpu->pc,10号寄存器($a0)的内容);
	get_cpu_pc();
	get_cpu_reg();
	if(is_halt) NPCTRAP(cpu_data.pc,cpu_data.gpr[10]);	
	return;
}
