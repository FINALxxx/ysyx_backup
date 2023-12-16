#ifndef __ITRACE_H__
#define __ITRACE_H__
#include <common.h>

typedef struct{
	uint32_t pc;
	uint32_t inst;
	char log[CONFIG_MAX_INST_LEN];
} traceNode;

void buffer_insert();
void buffer_disp();

#endif
