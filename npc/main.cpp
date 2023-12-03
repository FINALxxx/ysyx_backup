#include "include/macro_sys.h"

#define MAX_SIM_TIME 100

using namespace std;

vluint64_t sim_time=0;
FILE* fp =NULL;
uint32_t cmd_cur=0,cmd_num=0;
uint32_t* cmd=NULL;

VerilatedContext* env = NULL;
Vcpu* cpu = NULL;


int main(int argc, char** argv) {
	sim_init(argc,argv);
	
	while ( sim_time < MAX_SIM_TIME && cpu_status==ALIVE) {
		cpu->eval();
		cpu->clk^=1;
		cpu->eval();
		cpu->clk^=1;

		//cout<<"PC="<<cpu->pc<<endl;
		cmd_cur = (cpu->pc-0x80000000)/4;//虚拟地址转实际地址
		printf("[CUR=%d]\n",cmd_cur);
		cpu->cmd=cmd[cmd_cur];
		printf("[CMD=%#010x]\n",cpu->cmd);
		sim_update();

		
    }

	sim_stop();
    return 0;
}
