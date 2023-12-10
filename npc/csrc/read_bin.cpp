#include <read_bin.h>

uint32_t* read_bin(uint32_t* cmd_num,FILE* fp,const char* fileName){
	std::cout<<"\n\n\033[0m\033[1;32mREADING:\033[0m"<<fileName<<"\n\n";
	fp = fopen(fileName,"rb");
	assert(fp!=NULL);
	fseek(fp,0,SEEK_END);
	long fsize = ftell(fp);
	rewind(fp);
	uint32_t* cmd = (uint32_t*)malloc(fsize);	
	std::cout<<fsize<<std::endl;
	assert(fread(cmd,sizeof(char),fsize,fp));
	*cmd_num = (fsize/4) + (fsize%4);

	return cmd;
}

