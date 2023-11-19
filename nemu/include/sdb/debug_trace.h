#define MAX_BUF_SIZE 16
#define MAX_INST_LEN 128
#include <cpu/ifetch.h>

typedef struct{
	uint32_t pc;
	uint32_t inst;
	char* log;
} traceNode;


void insert_buffer(uint32_t pc,char* log);
void init_buffer();
void disp_buffer();

