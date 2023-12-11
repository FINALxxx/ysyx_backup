#ifndef __ITRACE__

#define MAX_BUF_SIZE 16
#define MAX_INST_LEN 128

typedef struct{
	uint32_t pc;
	uint32_t inst;
	char log[MAX_INST_LEN];
} traceNode;

void cmd_disasm(uint32_t pc,char* disasm_rst);
void buffer_insert(uint32_t pc);
void buffer_init();
void buffer_disp();

#endif
