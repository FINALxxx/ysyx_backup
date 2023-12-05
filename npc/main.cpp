#include "include/sys_npc.h"


using namespace std;

int main(int argc, char** argv) {
	sim_init(argc,argv);
	exec(MAX_SIM_TIME);

	sim_stop();
    return 0;
}
