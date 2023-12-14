#include <cpu.h>
#include <isa.h>
#include <memory/vaddr.h>

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

void get_cpu_pc(){//之后加入DPIC
	cpu_data.pc = cpu->pc;
	cpu_data.dnpc = cpu->dnpc;
}

word_t set_cpu_inst(){//之后加入DPIC
	word_t inst = vaddr_read(cpu_data.pc,4);
	cpu->cmd = inst;
	return inst;
}

static void single_inst_debug(){
	//TODO
}

void exec_once(){
	get_cpu_pc();
	printf("%#010x\n",set_cpu_inst());
	

}


