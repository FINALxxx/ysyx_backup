#include <bits/stdc++.h>
#include "sys_npc.h"
#include "sdb_itrace.h"
#include "sdb_disasm.h"

traceNode buf[MAX_BUF_SIZE];
uint32_t cur=0;
bool is_full=false;//如果未满，就从0开始读取；如果满，就从cur+1开始读取。两者都一直读到cur-1为止

void cmd_disasm(uint32_t pc,char* disasm_rst){
	//此处需要先转化为“以byte或uint8_t为单位”存储，对接llvm::arrayref的存储要求
	uint8_t* cmd_src = (uint8_t*)&cmd[pc_VtransP(pc)/4];
	printf("CMD=%x\n",cmd[pc_VtransP(pc)/4]);
	disassemble(disasm_rst,MAX_INST_LEN,pc,cmd_src,4);
	printf("IN CMD_DISASM:%s\n",disasm_rst);
}

void buffer_insert(uint32_t pc){
	//uint32_t _pc=pc;
	buf[cur].pc = pc;
	buf[cur].inst = cmd[pc_VtransP(pc)];
	char log[MAX_INST_LEN];
	cmd_disasm(pc,log);

	strncpy(buf[cur].log, log, strlen(log));	
	//printf("%d:%s\n",cur,buf[cur].log);
	cur = (cur+1)%MAX_BUF_SIZE;
	is_full = is_full || (cur==MAX_BUF_SIZE-1);
}

void buffer_init(){
	is_full=false,cur=0;
	//while(!is_full){
	//	insert_buffer();
	//}
}

void buffer_disp(){
	printf("\n[ITRACE RUNNING]\n");
	uint32_t disp_ptr = is_full ? (cur+1)%MAX_BUF_SIZE : 0 ;//从0或者从cur+1开始
	while(disp_ptr != cur-1){
		printf("   %#10x:\t%-40s\t:%#010x\n",buf[disp_ptr].pc, buf[disp_ptr].log, buf[disp_ptr].inst);
		disp_ptr = (disp_ptr+1)%MAX_BUF_SIZE;
	}
	printf("-->%#10x:\t%-40s\t:%#010x\n",buf[cur-1].pc,buf[cur-1].log,buf[cur-1].inst);
	printf("[ITRACE TERMINATE]\n");
}

