#include<sdb/debug_trace.h>

traceNode buf[MAX_BUF_SIZE];
uint32_t cur=0;
bool is_full=false;//如果未满，就从0开始读取；如果满，就从cur+1开始读取。两者都一直读到cur-1为止


void insert_buffer(uint32_t pc,char* log){
	uint32_t _pc=pc;
	buf[cur].pc = _pc;
	buf[cur].inst = inst_fetch(&_pc,4);
	strncpy(buf[cur].log, log, strlen(log));	
	//printf("%d:%s\n",cur,buf[cur].log);
	cur = (cur+1)%MAX_BUF_SIZE;
	is_full = is_full || (cur==MAX_BUF_SIZE-1);
}


void init_buffer(){
	is_full=false,cur=0;
	//while(!is_full){
	//	insert_buffer();
	//}
}

void disp_buffer(){
	uint32_t disp_ptr = is_full ? (cur+1)%MAX_BUF_SIZE : 0 ;//从0或者从cur+1开始
	while(disp_ptr != cur-1){
		printf("   %#10x:\t%-50s\t:%#010x\n",buf[disp_ptr].pc, buf[disp_ptr].log, buf[disp_ptr].inst);
		disp_ptr = (disp_ptr+1)%MAX_BUF_SIZE;
	}
	printf("-->%#10x:\t%-50s:%#010x\n",buf[cur-1].pc,buf[cur-1].log,buf[cur-1].inst);
}
