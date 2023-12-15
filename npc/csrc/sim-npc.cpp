#include <common.h>

#include <sdb/sdb.h>

//void std_monitor_init(int argc,char** argv);
//void exec(uint64_t n);
int is_exit_status_bad();
void init(int argc,char** argv);
int main(int argc,char** argv){
	sdb_monitor_init(argc,argv);
	sdb_mainloop();	
	return is_exit_status_bad();
}
