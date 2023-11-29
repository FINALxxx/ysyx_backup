#include "read_am_bin.h"

long read_init(FILE* fp,const char* fileName){
	fp = fopen(filename,"rb+");
	assert(fp!=NULL);
	fseek(fp,0,SEEK_END);
	long size = ftell(fp);
	rewind(fp);
	return size;//文件总字节数
}
char read_one_byte(FILE* fp){	
	rewind(fp);
	char* data;
	if(fread(data,sizeof(char),1,fp)) 
		return 0;//若无数据（末尾），则返回0，表示ebreak
	
	//warn:此处没有将fp重置到文件起点，需手动rewind
	return *data;	
}

char* read_total(FILE* fp,long size){	
	rewind(fp);
	char* data[size];
	for(int i=0;i<size;i++){
		data[i] = read_one_byte(fp);
	}
	rewind(fp);
	return data;
}
