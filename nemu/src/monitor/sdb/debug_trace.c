#include<sdb/debug_trace.h>

void insert_buffer(){
	buf[cur].pc = buf_lastest_pc;
	uint32_t inst = inst_fetch(&buf_lastest_pc,4);
	buf[cur].inst = inst;
	cur = (cur+1)%MAX_BUF_SIZE;
	is_full = is_full || (cur==MAX_BUF_SIZE-1);
}


void init_buffer(uint32_t pc){
	buf_lastest_pc=pc;
	is_full=false,cur=0;
	while(!is_full){
		insert_buffer();
	}
}

void disp_buffer(uint32_t pc){
	uint32_t disp_ptr = is_full ? (cur+1)%MAX_BUF_SIZE : 0 ;//从0或者从cur+1开始
	while(disp_ptr != cur){
		uint32_t disp_pc = buf[disp_ptr].pc;
		if(disp_pc == pc) printf("-->%x:\t%x\n",disp_pc,buf[disp_ptr].inst);
		else printf("   %x:\t%x\n",disp_pc,buf[disp_ptr].inst);

		disp_ptr = (disp_ptr+1)%MAX_BUF_SIZE;
		
	}
}
