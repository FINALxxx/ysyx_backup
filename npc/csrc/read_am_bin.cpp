#include "read_am_bin.h"

long read_init(FILE* fp,const char* fileName){
	fp = fopen(fileName,"rb+");
	assert(fp!=NULL);
	fseek(fp,0,SEEK_END);
	long size = ftell(fp);
	rewind(fp);
	return size;//文件总字节数
}
uint32_t read_4_byte(FILE* fp){	
	rewind(fp);
	uint32_t* data;
	if(fread(data,sizeof(uint32_t),1,fp)) 
		return 0;//若无数据（末尾），则返回0，表示ebreak
	
	//warn:此处没有将fp重置到文件起点，需手动rewind
	return *data;	
}

uint32_t read_total(FILE* fp,long size){	
	rewind(fp);
	long cmd_num = size/4;
	uint32_t data[cmd_num+1];//如果有size%4==1，说明后面有一个1B的00
	for(int i=0; i<=cmd_num;i++){
		data[i] = read_4_byte(fp);
	}
	rewind(fp);
	return data;
}
