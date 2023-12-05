#include "include/sys_npc.h"

#define MAX_SIM_TIME 100

using namespace sys_args;

int main(int argc, char** argv) {
	sim_init(argc,argv);
	
	while ( sys_args::sim_time < MAX_SIM_TIME && cpu_status==ALIVE) {
		exec_once();
		sim_update();
    }

	sim_stop();
    return 0;
}
