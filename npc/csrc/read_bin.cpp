#include "read_bin.h"

FILE* fp =NULL;
long fsize=0,cmd_cur=0,cmd_num;
uint32_t* cmd=NULL;

void read_bin(uint32_t* cmd,FILE* fp,const char* fileName){
	fp = fopen(fileName,"rb");
	assert(fp!=NULL);
	fseek(fp,0,SEEK_END);
	fsize = ftell(fp);
	cmd_num = (fsize/4) + (fsize%4);
	rewind(fp);
	cmd = (uint32_t*)malloc(fsize);	
	assert(fread(cmd,sizeof(char),fsize,fp));
}


endian uni_cmd;
uint32_t change_order(uint32_t cmd){//如果运行在大端序cpu上
	uni_cmd.uint_cmd = cmd;
	std::swap(uni_cmd.ch_cmd[0],uni_cmd.ch_cmd[3]);
	std::swap(uni_cmd.ch_cmd[1],uni_cmd.ch_cmd[2]);
	return uni_cmd.uint_cmd;
}


