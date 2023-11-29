#include <stdio.h>
#include <assert.h>
#include <stdint.h>

long read_init(FILE* fp,char const* fileName);

uint32_t read_4_byte(FILE* fp);

void read_total(FILE* fp,uint32_t* data);	
