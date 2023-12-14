#include <sys_npc.h>

#include <cpu/ifetch.h>
#include <init-load/read_bin.h>

#include <cpu/status.h>
#include <cpu/data.h>

//#include <sdb.h>
//#include <sdb_watchpoint.h>
//#include <itrace.h>
//#include <ftrace.h>

vluint64_t sim_time=0;

VerilatedContext* env = NULL;
Vcpu* cpu = NULL;
NPC_STATUS cpu_status={ .state = STOP };
CPU_state cpu_data = {};

int is_exit_status_bad() {
  int good = (cpu_status.state == DEAD && cpu_status.halt_ret == 0) || (cpu_status.state == QUIT);
  return !good;
}

void sim_init(int argc,char** argv){
	env = new VerilatedContext;
	cpu = new Vcpu(env);
	mem_init();
	read_bin(argv[1]);

	/* START 0clk */	
	cpu->clk=0;
	cpu->rst=1;
	cpu->eval();//cpu启动
	/* END 0clk */	

	/* START 0.5clk */	
	cpu->clk^=1;
	//cpu->rst=0;//debug：严禁在此处复位，此时在下降沿，还没有dnpc更新为pc
	cpu->eval();
	/* END 0.5clk */	
	
	/* START 0.5clk */	
	cpu->clk^=1;
	cpu->rst=0;
	//cpu->eval();
	printf("\t[INIT_PC=%#010x]\n\n",pc_getter(TARGET_PC));

	/* END 0.5clk */	

	//sdb、itrace、frace初始化，不使用请按需关闭	
	//monitor_init();
	//buffer_init();
	//elf_init(argv[2]);
	//printf("\t[CUR=%d]\n",cmd_cur);
	//printf("\t[CMD_HEX=%#010x]\n",cmd[cmd_cur]);
	//buffer_insert(cpu->pc);

}

void sim_terminate(){
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

void sim_update(){//测试用，一般使用exec
	//cpu->eval();//在某些情况下，可能会导致一个循环eval多次，这个时候请把这一句删掉
	sim_time++;
}

inline void clk_update(){
	/* START 1clk in total */
	cpu->eval(); 
	cpu->clk^=1;
	cpu->eval();
	cpu->clk^=1;
	/* END */
}

extern "C" void halt(svBit is_halt){
	//NPCTRAP(cpu->pc,10号寄存器($a0)的内容);
	if(is_halt) NPCTRAP(pc_getter(TARGET_PC),reg_getter(10));	
	return;
}

//相当于vaddr_ifetch
extern "C" svBitVecVal* cmd_getter(svBitVecVal* pc_now){
	return (svBitVecVal*)inst_fetch(pc_now[0],4);
}



