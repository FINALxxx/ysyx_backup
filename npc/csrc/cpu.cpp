#include <cpu.h>
#include <isa.h>
#include "Vcpu.h"

CPU_state cpu_data = {};
Vcpu* cpu = NULL;
//下降沿读取
//上升沿执行和写入
void cpu_init(){
	env = new VerilatedContext;
	cpu = new Vcpu(env);
	
	cpu->clk = 1;
	cpu->rst = 1;
	clk_update();
	printf("PC_INIT:" FMT_PADDR "\n",cpu->pc);
}

void cpu_terminate(){
	if(cpu_s tatus.state == ABORT){//ABORT
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

static void exec_once(){
	
}


