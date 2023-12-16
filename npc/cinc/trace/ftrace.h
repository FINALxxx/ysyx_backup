#ifndef __FTRACE_H__
#define __FTRACE_H__

typedef struct {
	char func_name[32];
	uint32_t start;
	uint32_t end;
} func;

void elf_init();
void elf_call(uint32_t pc_src,uint32_t pc_dst,uint32_t cmd);

#endif
