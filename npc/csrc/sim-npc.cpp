#include <common.h>

int main(int argc,char** argv){
	for(int it = 0;it<argc;it++)
		std::cout<<argv[it]<<std::endl;
}
