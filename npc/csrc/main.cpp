#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vcpu.h"
#include <bits/stdc++.h>
#define MAX_SIM_TIME 20

using namespace std;


vluint64_t sim_time=0;

VerilatedContext* env = NULL;
Vcpu* cpu = NULL;
FILE* fp =NULL;
long fsize=0;

uint32_t cmd=NULL;
long read_bin(FILE* fp,const char* fileName){
	fp = fopen(fileName,"rb");
	assert(fp!=NULL);
	fseek(fp,0,SEEK_END);
	long fsize = ftell(fp);
	rewind(fp);
	cmd = (uint32_t)malloc(fsize);	
	assert(fread(cmd,sizeof(char),fsize,fp));
	return size;//文件总字节数
}


void sim_init(int argc,char** argv){
	//for(int i=0;i<argc;i++) cout<<"LOG:"<<argv[i]<<endl;
	env = new VerilatedContext;
	cpu = new Vcpu(env);
	cpu->rst=1;
	fsize = read_init(fp,argv[1]);
	cout<<"(LOG)BIN FILE SIZE:"<<fsize<<endl;//读入bin文件

	//env->traceEverOn(true);
	//VerilatedVcdC* m_trace = new VerilatedVcdC; 
	//cpu->trace(m_trace,5);
	//m_trace->open("wave.vcd");
} 


void sim_stop(){
	//m_trace->close();
	cpu->final();
	delete cpu;
}

void sim_update(){
	//cpu->eval();//在某些情况下，可能会导致一个循环eval多次，这个时候请把这一句删掉
	sim_time++;
}

enum STATUS {DEAD,ALIVE};
STATUS cpu_status=ALIVE;
extern "C" void halt(svBit is_dead){
	if(is_dead) cpu_status=DEAD;	
}

int main(int argc, char** argv) {
	sim_init(argc,argv);
	while ( sim_time < MAX_SIM_TIME && cpu_status==ALIVE ) {
		cpu->clk^=1;
		cpu->rst=0;

		//cpu->cmd=0b00000000000100001000000010010011;
		cout<<cpu->cmd<<endl;
		//if(sim_time==10) cpu->cmd=0b00000000000000000000000000000000;
		cpu->eval();
		sim_update();
    }

	sim_stop();
    return 0;
}
