#include <verilated.h>
#include "Vcpu.h"
#include <verilated_vcd_c.h>

#include <isa.h>
#include <memory/paddr.h>

static char* bin_file = NULL;//img文件
static char* elf_file = NULL;//elf文件
static char* log_file = NULL;//log文件
static char* diff_file = NULL;//diff动态链接库

vluint64_t sim_time = 0;
VerilatedContext* env;
Vcpu* cpu;

static void welcome(){
	printf("welcome to %s-NPC\n",ANSI_FMT(CONFIG_ISA,ANSI_FG_YELLOW ANSI_BG_RED));
}

static long bin_init(){
	Assert(bin_file,"<FILE>: BIN DO NOT EXIST");
	printf("%s:%s",ANSI_FMT("READING",ANSI_FG_GREEN),bin_file);
	FILE* fp = fopen(bin_file,"rb");
	Assert(fp,"<FILE>: CANNOT READ FROM BIN\n");
	fseek(fp,0,SEEK_END);
	long fsize = ftell(fp);
	//TODO:+log

	rewind(fp);
	assert(fread(paddr_to_ptr(PMEM_RESET),fsize,1,fp) == 1);
	fclose(fp);

	return fsize;
}

static inline void clk_update(){//1clk
	cpu->clk^=1;
	cpu->eval();
	cpu->clk^=1;
	cpu->eval();
}

static inline void half_clk_update(){
	cpu->clk^=1;
	cpu->eval();
} 

void cpu_init(){
	cpu->clk = 0;
	cpu->rst = 1;
	clk_update();
	printf("PC_INIT:\n" FMT_PADDR,cpu->pc);
}


/*void cpu_terminate(){
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
}*/

void init(int argc,char** argv){
	mem_init();

	bin_file = argv[1];
	bin_init();
	
	//cpu_init();
	//welcome();
}


