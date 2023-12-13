#include <common.h>

extern void sim_init(int argc,char** argv);
extern void exec(uword_t cnt);

int main(int argc, char** argv) {
	sim_init(argc,argv);
	exec(MAX_SIM_TIME);
	//sdb_mainloop();

	return is_exit_status_bad();
}
