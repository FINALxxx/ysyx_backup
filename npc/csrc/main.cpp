#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vcpu.h"
#include "read_bin.h"
#define MAX_SIM_TIME 20

using namespace std;


vluint64_t sim_time=0;

VerilatedContext* env = NULL;
Vcpu* cpu = NULL;
FILE* fp =NULL;
long fsize=0,cmd_cur=0,cmd_num;
uint32_t* cmd=NULL;

void sim_init(int argc,char** argv){
	//for(int i=0;i<argc;i++) cout<<"LOG:"<<argv[i]<<endl;
	env = new VerilatedContext;
	cpu = new Vcpu(env);
	cpu->rst=1;
	read_bin(cmd,fp,argv[1]);
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
	while ( sim_time < MAX_SIM_TIME && cpu_status==ALIVE && cmd_cur<=cmd_num ) {
		cpu->clk^=1;
		cpu->rst=0;
		cpu->cmd=0b00000000000000000000000001110011;
		cout<<"【CUR="<<cmd_cur<<"】"<<endl;
		//cpu->cmd=cmd[cmd_cur++];
		printf("【CMD=%x】\n",cpu->cmd);
		//if(sim_time==10) cpu->cmd=0b00000000000000000000000000000000;
		cpu->eval();
		sim_update();
    }

	sim_stop();
    return 0;
}
