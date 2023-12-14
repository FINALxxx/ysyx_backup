#include <cpu.h>
#include <isa.h>
#include <memory/vaddr.h>
#include "Vcpu___024root.h"
#include <svdpi.h>

vluint64_t sim_time = 0;
CPU_state cpu_data = {};
extern Vcpu* cpu;


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
	printf("%#010x\n",set_cpu_inst());
	clk_update();	
}

void exec(uint64_t n){
	for(;n>0;n--){
		exec_once();
		sim_time++;
		//single_inst_debug();
		if(cpu_status.state != ALIVE) break;
	}	
}

extern "C" void halt(svBit is_halt){
	//NPCTRAP(cpu->pc,10号寄存器($a0)的内容);
	get_cpu_pc();
	get_cpu_reg();
	if(is_halt) NPCTRAP(cpu.pc,cpu.gpr[10]);	
	return;
}
