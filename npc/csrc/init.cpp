#include <isa.h>
#include <cpu.h>
#include <memory/paddr.h>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vcpu.h"

static char* bin_file = NULL;//img文件
static char* elf_file = NULL;//elf文件
static char* log_file = NULL;//log文件
static char* diff_file = NULL;//diff动态链接库

VerilatedContext* env = NULL;
Vcpu* cpu = NULL;

unsigned char isa_logo[] = {
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5f, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5f, 0x5f, 0x20,
  0x20, 0x5f, 0x5f, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x5f, 0x20, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x28, 0x5f, 0x29, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x7c, 0x20, 0x20, 0x5c, 0x2f, 0x20, 0x20, 0x7c, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7c, 0x20,
  0x7c, 0x0a, 0x20, 0x20, 0x5f, 0x20, 0x5f, 0x5f, 0x20, 0x5f, 0x20, 0x5f,
  0x5f, 0x5f, 0x20, 0x20, 0x5f, 0x5f, 0x5f, 0x20, 0x5f, 0x5f, 0x5f, 0x5f,
  0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x20, 0x20, 0x5f, 0x5f, 0x20, 0x7c, 0x20,
  0x5c, 0x20, 0x20, 0x2f, 0x20, 0x7c, 0x20, 0x5f, 0x5f, 0x20, 0x5f, 0x20,
  0x5f, 0x20, 0x5f, 0x5f, 0x20, 0x20, 0x5f, 0x20, 0x20, 0x20, 0x5f, 0x20,
  0x20, 0x5f, 0x5f, 0x20, 0x5f, 0x7c, 0x20, 0x7c, 0x0a, 0x20, 0x7c, 0x20,
  0x27, 0x5f, 0x5f, 0x7c, 0x20, 0x2f, 0x20, 0x5f, 0x5f, 0x7c, 0x2f, 0x20,
  0x5f, 0x5f, 0x7c, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5f, 0x5c, 0x20, 0x5c,
  0x20, 0x2f, 0x20, 0x2f, 0x20, 0x7c, 0x20, 0x7c, 0x5c, 0x2f, 0x7c, 0x20,
  0x7c, 0x2f, 0x20, 0x5f, 0x60, 0x20, 0x7c, 0x20, 0x27, 0x5f, 0x20, 0x5c,
  0x7c, 0x20, 0x7c, 0x20, 0x7c, 0x20, 0x7c, 0x2f, 0x20, 0x5f, 0x60, 0x20,
  0x7c, 0x20, 0x7c, 0x0a, 0x20, 0x7c, 0x20, 0x7c, 0x20, 0x20, 0x7c, 0x20,
  0x5c, 0x5f, 0x5f, 0x20, 0x5c, 0x20, 0x28, 0x5f, 0x5f, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x5c, 0x20, 0x56, 0x20, 0x2f, 0x20, 0x20,
  0x7c, 0x20, 0x7c, 0x20, 0x20, 0x7c, 0x20, 0x7c, 0x20, 0x28, 0x5f, 0x7c,
  0x20, 0x7c, 0x20, 0x7c, 0x20, 0x7c, 0x20, 0x7c, 0x20, 0x7c, 0x5f, 0x7c,
  0x20, 0x7c, 0x20, 0x28, 0x5f, 0x7c, 0x20, 0x7c, 0x20, 0x7c, 0x0a, 0x20,
  0x7c, 0x5f, 0x7c, 0x20, 0x20, 0x7c, 0x5f, 0x7c, 0x5f, 0x5f, 0x5f, 0x2f,
  0x5c, 0x5f, 0x5f, 0x5f, 0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x5c, 0x5f, 0x2f, 0x20, 0x20, 0x20, 0x7c, 0x5f, 0x7c, 0x20, 0x20,
  0x7c, 0x5f, 0x7c, 0x5c, 0x5f, 0x5f, 0x2c, 0x5f, 0x7c, 0x5f, 0x7c, 0x20,
  0x7c, 0x5f, 0x7c, 0x5c, 0x5f, 0x5f, 0x2c, 0x5f, 0x7c, 0x5c, 0x5f, 0x5f,
  0x2c, 0x5f, 0x7c, 0x5f, 0x7c, 0x0a, '\0'  /* Termination Character is indispensable! */
};


enum mode {STD,SDB};
extern mode launch_mode;
void welcome(){
	printf("\nwelcome to %s-NPC",ANSI_FMT(CONFIG_ISA,ANSI_FG_YELLOW ANSI_BG_RED));
	if(launch_mode == STD){
		printf("\n\n");
	}else{
		printf(ANSI_FMT(" (sdb)",ANSI_FG_GREEN) "\n");
		printf(ANSI_FMT("%s\n\n",ANSI_FG_BLUE),isa_logo);
	}
}

long bin_init(){
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

void clk_update(){//1clk
	cpu->eval();
	cpu->clk^=1;
	cpu->eval();
	cpu->clk^=1;
}

static inline void half_clk_update(){
	cpu->eval();
	cpu->clk^=1;
} 

//下降沿读取
//上升沿执行和写入
void cpu_init(){
	env = new VerilatedContext;
	cpu = new Vcpu(env);
	
	cpu->clk = 0;
	cpu->rst = 1;
	clk_update();
	cpu->rst = 0;
	//clk_update();
	printf(ANSI_FMT("PC_INIT",ANSI_FG_GREEN) ":" FMT_PADDR "\n",cpu->pc);
}

void log_init(const char* log_file);
extern "C" void disasm_init(const char *triple); 
void buffer_init();
void elf_init(const char* fileName);
void std_monitor_init(int argc,char** argv){
	mem_init();
	
	bin_file = argv[1];
	log_file = argv[2];
	elf_file = argv[3];
	bin_init();
	
	//ITRACE INIT	
	log_init(log_file);
	disasm_init("riscv32-pc-linux-gnu");
	buffer_init();
	
	//FTRACE INIT
	elf_init();

	cpu_init();
	welcome();
}


