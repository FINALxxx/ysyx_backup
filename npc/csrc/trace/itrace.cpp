#include <common.h>
#include <cpu.h>
#include <isa.h>
#include <trace/itrace.h>

static traceNode buf[CONFIG_MAX_BUF_SIZE];
static uint32_t cur=0;
static bool is_full=false;//如果未满，就从0开始读取；如果满，就从cur+1开始读取。两者都一直读到cur-1为止

extern "C" void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
static void single_cmd_disasm(char* disasm_rst){
	//此处需要先转化为“以byte或uint8_t为单位”存储，对接llvm::arrayref的存储要求
	uint32_t cmd_src[] = {cpu_data.inst};
	vaddr_t pc = cpu_data.pc;
	disassemble(disasm_rst,CONFIG_MAX_INST_LEN,pc,(uint8_t*)cmd_src,4);
	//printf("\t[CMD_ASM:%s]\n",disasm_rst);
}

void buffer_insert(){
	buf[cur].pc = cpu_data.pc;
	buf[cur].inst = cpu_data.inst;
	char log[CONFIG_MAX_INST_LEN];
	single_cmd_disasm(log);
	strncpy(buf[cur].log, log, strlen(log));	
	//使用LOG
	Log("   %#10x:\t%-20s\t:%#010x\n",buf[cur].pc, buf[cur].log, buf[cur].inst);
	cur = (cur+1)%CONFIG_MAX_BUF_SIZE;
	is_full = is_full || (cur==CONFIG_MAX_BUF_SIZE-1);
}

void buffer_init(){
	is_full=false,cur=0;
}

void buffer_disp(){
	printf("\n\t\033[0m\033[1;31m[ITRACE RUNNING]\033[0m\n");
	uint32_t disp_ptr = is_full ? (cur+1)%CONFIG_MAX_BUF_SIZE : 0 ;//从0或者从cur+1开始
	while(disp_ptr != cur-1){
		printf("   %#10x:\t%-40s\t:%#010x\n",buf[disp_ptr].pc, buf[disp_ptr].log, buf[disp_ptr].inst);
		disp_ptr = (disp_ptr+1)%CONFIG_MAX_BUF_SIZE;
	}
	printf("-->%#10x:\t%-40s\t:%#010x\n",buf[cur-1].pc,buf[cur-1].log,buf[cur-1].inst);
	printf("\t\033[0m\033[1;31m[ITRACE TERMINATE]\033[0m\n");
}

