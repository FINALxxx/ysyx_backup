#include "include/sys_npc.h"

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
		exec_once();
		sim_update();
    }

	sim_stop();
    return 0;
}
