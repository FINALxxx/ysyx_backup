#include<stdio.h>
#include<stdint.h>
#include<debug.h>
#include<elf.h>

typedef struct {
	char func_name[32];
	uint32_t start;
	uint32_t end;
} func;


void ftrace_init(FILE* fp);
void parse_elf(const char* fileName);
void fs_init();
int32_t find_func(uint32_t pc);
void call(uint32_t pc_src,uint32_t pc_dst,bool is_rst);
