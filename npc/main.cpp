#include "include/sys_npc.h"

#define MAX_SIM_TIME 100

using namespace std;

int main(int argc, char** argv) {
	sim_init(argc,argv);
	cout<<cpu_status<<endl;	
	while ( sim_time < MAX_SIM_TIME && cpu_status==ALIVE) {
		exec_once();
		sim_update();
    }

	sim_stop();
    return 0;
}
