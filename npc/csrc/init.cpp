#include <verilated.h>
#include <verilated_vcd_c.h>
#include <isa.h>
#include <cpu.h>
#include <memory/paddr.h>

static char* bin_file = NULL;//img文件
static char* elf_file = NULL;//elf文件
static char* log_file = NULL;//log文件
static char* diff_file = NULL;//diff动态链接库

vluint64_t sim_time = 0;
VerilatedContext* env;
extern Vcpu* cpu;

static void welcome(){
	printf("welcome to %s-NPC\n",ANSI_FMT(CONFIG_ISA,ANSI_FG_YELLOW ANSI_BG_RED));
}

static long bin_init(){
	Assert(bin_file,"<FILE>: BIN DO NOT EXIST");
	printf("%s:%s\n",ANSI_FMT("READING",ANSI_FG_GREEN),bin_file);
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


void init(int argc,char** argv){
	mem_init();

	bin_file = argv[1];
	bin_init();
	
	cpu_init();
	//welcome();
}


