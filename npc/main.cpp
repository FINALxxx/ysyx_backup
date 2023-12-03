#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vcpu.h"
#include <stdint.h>
#include <bits/stdc++.h>
#define MAX_SIM_TIME 100

using namespace std;

FILE* fp =NULL;
uint32_t cmd_cur=0,cmd_num=0;
uint32_t* cmd=NULL;


vluint64_t sim_time=0;

VerilatedContext* env = NULL;
Vcpu* cpu = NULL;

//cpu运行参量
enum STATUS {DEAD,ALIVE};
STATUS cpu_status=ALIVE;


long read_bin(FILE* fp,const char* fileName){
	cout<<fileName<<endl;
	fp = fopen(fileName,"rb");
	assert(fp!=NULL);
	fseek(fp,0,SEEK_END);
	long fsize = ftell(fp);
	rewind(fp);
	cmd = (uint32_t*)malloc(fsize);	
	assert(fread(cmd,sizeof(char),fsize,fp));

	return (fsize/4) + (fsize%4);
}


void sim_init(int argc,char** argv){
	//for(int i=0;i<argc;i++) cout<<"LOG:"<<argv[i]<<endl;
	env = new VerilatedContext;
	cpu = new Vcpu(env);
	
	cpu->clk=0;
	cpu->rst=1;
	cmd_num = read_bin(fp,argv[1]);
	cpu->eval();
	
	cpu->clk^=1;
	//cpu->rst=0;//debug：严禁在此处复位，此时在下降沿，还没有更改tmp_pc
	cpu->eval();
	
	cpu->clk^=1;
	cpu->rst=0;
	cpu->eval();

	cout<<"[INIT_PC="<<cpu->pc<<"]"<<endl;
	//env->traceEverOn(true);
	//VerilatedVcdC* m_trace = new VerilatedVcdC; 
	//cpu->trace(m_trace,5);
	//m_trace->open("wave.vcd");
} 


void sim_stop(){
	if(cpu_status==DEAD) cout<<"EXIT: \033[0m\033[1;32mHIT GOOD TRAP\033[0m at pc ="<<(cmd_cur+0x80000000)<<endl;
	else cout<<"HIT BAD TRAP"<<endl;
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

int main(int argc, char** argv) {
	sim_init(argc,argv);
	
	while ( sim_time < MAX_SIM_TIME && cpu_status==ALIVE) {
		cpu->eval();
		cpu->clk^=1;
		cpu->eval();
		cpu->clk^=1;

		//cout<<"PC="<<cpu->pc<<endl;
		cmd_cur = (cpu->pc-0x80000000)/4;//虚拟地址转实际地址
		printf("【CUR=%d】\n",cmd_cur);
		cpu->cmd=cmd[cmd_cur];
		printf("【CMD=%#010x】\n",cpu->cmd);
		sim_update();

		
    }

	sim_stop();
    return 0;
}
