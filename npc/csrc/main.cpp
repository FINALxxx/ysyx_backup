#include <sys_npc.h>
#include <cpu/exec.h>
#include <sys/sys_npc.h>
//#include <sdb.h>



int main(int argc, char** argv) {
	sim_init(argc,argv);
	//exec(MAX_SIM_TIME);
	//sdb_mainloop();
	cpu=QUIT;	
	return is_exit_status_bad();
}
