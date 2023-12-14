#include <common.h>


int is_exit_status_bad();
extern void welcome();
int main(int argc,char** argv){
	//for(int it = 0;it<argc;it++)
	//	std::cout<<argv[it]<<std::endl;
	welcome();
	
	return is_exit_status_bad();
}
