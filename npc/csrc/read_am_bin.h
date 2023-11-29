#include <stdio.h>
#include <assert.h>
#include <stdint.h>

long read_init(FILE* fp,char const* fileName);

uint32_t read_4_byte(FILE* fp);

uint32_t* read_total(FILE* fp,long size);	
