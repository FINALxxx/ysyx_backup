#include <common.h>

extern void std_monitor_init(int argc,char** argv);
extern void exec(uint64_t n);
int is_exit_status_bad();
void init(int argc,char** argv);
int main(int argc,char** argv){
	//for(int it = 0;it<argc;it++)
	//	std::cout<<argv[it]<<std::endl;
	std_monitor_init(argc,argv);
	exec(30);	
	return is_exit_status_bad();
}
