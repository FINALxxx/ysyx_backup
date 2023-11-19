#include <sdb/mem_trace.h>
#include <generated/autoconf.h>

#ifdef CONFIG_MTRACE
#ifdef CONFIG_MTRACE_SIZE
memTraceNode membuf[CONFIG_MTRACE_SIZE];
#else
memTraceNode membuf[50];
#endif
uint32_t mem_cur=0;
bool mem_is_full=false;//如果未满，就从0开始读取；如果满，就从cur+1开始读取。两者都一直读到cur-1为止


void insert_mem_buffer(bool status,uint32_t addr,uint32_t op_size,uint32_t data){
	membuf[mem_cur].status=status;
	membuf[mem_cur].addr=addr;
	membuf[mem_cur].op_size=op_size;
	membuf[mem_cur].data=data;
	mem_cur = (mem_cur+1)%CONFIG_MTRACE_SIZE;
	mem_is_full = mem_is_full || (mem_cur==CONFIG_MTRACE_SIZE-1);
}


void init_mem_buffer(){
	mem_is_full=false,mem_cur=0;
}

void disp_mem_buffer(){
	printf("[MTRACE RUNNING]\n");
	uint32_t disp_ptr = mem_is_full ? (mem_cur+1)%CONFIG_MTRACE_SIZE : 0 ;//从0或者从cur+1开始
	while(disp_ptr != mem_cur-1){
		char status = membuf[disp_ptr].status ? 'r' : 'w' ;
		printf("M%c\t%#010x\t%-8d\t(Byte)\t%#010x\n",status,membuf[disp_ptr].addr,membuf[disp_ptr].op_size,membuf[disp_ptr].data);	
		disp_ptr = (disp_ptr+1)%CONFIG_MTRACE_SIZE;
	}
	char status = membuf[mem_cur-1].status ? 'w' : 'r' ;
	printf("M%c\t%#010x\t%-8d\t(Byte)\t%#010x\n",status,membuf[mem_cur-1].addr,membuf[mem_cur-1].op_size,membuf[mem_cur-1].data);
	printf("[MRACE TERMINATE]\n");
}
#endif
