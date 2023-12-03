#ifndef __MACRO_SYS_H__
#define __MACRO_SYS_H__

#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vcpu.h"
#include <stdint.h>
#include <bits/stdc++.h>
#include "read_bin.h"


vluint64_t sim_time=0;
FILE* fp =NULL;
uint32_t cmd_cur=0,cmd_num=0;
uint32_t* cmd=NULL;

VerilatedContext* env = NULL;
Vcpu* cpu = NULL;


//cpu运行参量
enum STATUS {DEAD,ALIVE};
STATUS cpu_status=ALIVE;


void sim_init(int argc,char** argv){
	env = new VerilatedContext;
	cpu = new Vcpu(env);

	/* START 0clk */	
	cpu->clk=0;
	cpu->rst=1;
	cmd = read_bin(&cmd_num,fp,argv[1]);
	cpu->eval();
	/* END 0clk */	
	
	/* START 0.5clk */	
	cpu->clk^=1;
	//cpu->rst=0;//debug：严禁在此处复位，此时在下降沿，还没有更改tmp_pc
	cpu->eval();
	/* END 0.5clk */	
	
	/* START 1clk */	
	cpu->clk^=1;
	cpu->rst=0;
	cpu->eval();
	cout<<"[INIT_PC="<<cpu->pc<<"]"<<endl;
	/* END 1clk */	

	/* 波形调试
	env->traceEverOn(true);
	VerilatedVcdC* m_trace = new VerilatedVcdC; 
	cpu->trace(m_trace,5);
	m_trace->open("wave.vcd");*/
} 

void sim_stop(){
	if(cpu_status==DEAD) printf("\nNPC EXIT: \033[0m\033[1;32mHIT GOOD TRAP\033[0m at pc = %#010x\n\n",cpu->pc);
	else printf("\nNPC EXIT: \033[0m\033[1;31mHIT BAD TRAP\033[0m at pc = %#010x\n\n",cpu->pc);
	//m_trace->close();
	cpu->final();
	delete cpu;
}

void sim_update(){
	//cpu->eval();//在某些情况下，可能会导致一个循环eval多次，这个时候请把这一句删掉
	sim_time++;
}

extern "C" void halt(svBit is_dead){
	if(is_dead){ 
		cpu_status=DEAD;
		return;
	}
}



#endif
