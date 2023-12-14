#include <common.h>


extern void exec_once();
int is_exit_status_bad();
void init(int argc,char** argv);
int main(int argc,char** argv){
	//for(int it = 0;it<argc;it++)
	//	std::cout<<argv[it]<<std::endl;
	init(argc,argv);
	exec_once()	
	return is_exit_status_bad();
}
