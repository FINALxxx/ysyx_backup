#include "read_bin.h"


long read_bin(uint32_t* cmd,FILE* fp,const char* fileName){
	fp = fopen(fileName,"rb");
	assert(fp!=NULL);
	fseek(fp,0,SEEK_END);
	long fsize = ftell(fp);
	rewind(fp);
	cmd = (uint32_t*)malloc(fsize);	
	assert(fread(cmd,sizeof(char),fsize,fp));

	return (fsize/4) + (fsize%4);
}


endian uni_cmd;
uint32_t change_order(uint32_t cmd){//如果运行在大端序cpu上
	uni_cmd.uint_cmd = cmd;
	std::swap(uni_cmd.ch_cmd[0],uni_cmd.ch_cmd[3]);
	std::swap(uni_cmd.ch_cmd[1],uni_cmd.ch_cmd[2]);
	return uni_cmd.uint_cmd;
}


