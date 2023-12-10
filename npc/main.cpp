#include "include/sys_npc.h"
#include "include/sdb.h"

using namespace std;

int main(int argc, char** argv) {
	difftest_init(1);
	sim_init(argc,argv);
	//exec(MAX_SIM_TIME);
	sdb_mainloop();

	return is_exit_status_bad();
}
