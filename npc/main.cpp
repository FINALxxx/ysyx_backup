#include "include/sys_npc.h"
#include "include/sdb.h"

using namespace std;

int main(int argc, char** argv) {
	sim_init(argc,argv);
	//exec(MAX_SIM_TIME);
	//monitor_init();
	sdb_mainloop();

	return is_exit_status_bad();
}
