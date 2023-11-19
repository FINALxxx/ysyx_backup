#define MAX_MEM_BUF_SIZE 50 //可以控制内存踪迹区间
#include <stdio.h> 
#include <stdint.h>
#include <stdbool.h>
typedef struct {
	bool status;
	uint32_t addr;
	uint32_t op_size;
	uint32_t data;
} memTraceNode;

void insert_mem_buffer(bool status,uint32_t addr,uint32_t op_size,uint32_t data);

void init_mem_buffer();

void disp_mem_buffer();
