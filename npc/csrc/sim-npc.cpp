#include <common.h>

int main(int argc,char** argv){
	for(char** it = argv;it!=NULL;it++)
		std::cout<<*it<<std::endl;
}
