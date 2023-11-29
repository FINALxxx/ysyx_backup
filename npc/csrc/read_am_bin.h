#include <stdio.h>
#include <assert.h>
#include <stdint.h>

static long read_init(FILE* fp,const char* fileName);

char read_one_byte(FILE* fp);

char* read_total(FILE* fp,long size);	
