#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vcpu.h"
#include <bits/stdc++.h>
#define MAX_SIM_TIME 20

using namespace std;

vluint64_t sim_time=0;

VerilatedContext* env = NULL;
Vcpu* cpu = NULL;

void sim_init(){
	env = new VerilatedContext;
	cpu = new Vcpu(env);
	cpu->rst=1;
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


//int64_t command = 0b00000001000000000000000010010011;
int main(int argc, char** argv) {
	sim_init();
	cpu->clk^=1;
	cpu->cmd=0b000000000001_00000_000_00001_0010011;
	cpu->eval(); 
	while (sim_time < MAX_SIM_TIME) {
		cpu->clk^=1;
		cpu->rst=0;	
		cpu->cmd=0b000000000001_00001_000_00001_0010011;
		cpu->eval();
		sim_update();
    }

	sim_stop();
    return 0;
}
