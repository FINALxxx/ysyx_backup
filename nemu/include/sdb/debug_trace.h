#define MAX_BUF_SIZE 16
#define MAX_INST_LEN 128
#include <cpu/ifetch.h>

typedef struct{
	uint32_t pc;
	uint32_t inst;
} traceNode;

traceNode buf[MAX_BUF_SIZE];
uint32_t buf_lastest_pc=0;//buf最新的pc（不一定是当前指令的pc）
uint32_t cur=0;
bool is_full=false;//如果未满，就从0开始读取；如果满，就从cur+1开始读取。两者都一直读到cur为止

void insert_buffer();
void init_buffer(uint32_t pc);
void disp_buffer(uint32_t pc);

