#include <cpu.h>
#include <isa.h>
#include <ifetch.h>

CPU_state cpu_data = {};
vluint64_t sim_time = 0;
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

vaddr_t get_pc(){//之后改成DPIC
	return cpu->pc;
}

static void single_inst_debug(){
	//TODO
}

static void exec_once(){
	inst_fetch(get_pc(),)	
}


