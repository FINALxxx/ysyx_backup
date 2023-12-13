#include<iostream>
#include<stdint.h>

typedef struct {
	char func_name[32];
	uint32_t start;
	uint32_t end;
} func;


void parse_elf(FILE* fp);
void elf_init(const char* fileName);
int32_t find_func(uint32_t pc);
void elf_call(uint32_t pc_src,uint32_t pc_dst,uint32_t cmd);
