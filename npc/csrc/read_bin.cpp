#include <init-load/read_bin.h>
#include <memory/config.h>
#include <debug-print.h>
void read_bin(const char* fileName){
	std::cout<<"\n\n\033[0m\033[1;32mREADING:\033[0m"<<fileName<<"\n\n";
	FILE* fp = fopen(fileName,"rb");
	Assert(fp!=NULL,"READING ERROR: FILE NOT EXIST\n");
	fseek(fp,0,SEEK_END);
	long fsize = ftell(fp);
	rewind(fp);
	//uint32_t* cmd = (uint32_t*)malloc(fsize);	
	Assert(pmem!=NULL,"READING ERROR: PMEM NOT EXIST\n");
	assert(fread(v_to_mem(PMEM_RESET),fsize,1,fp));
	//*cmd_num = (fsize/4) + (fsize%4);
	fclose(fp);

	//return fsize;
}

