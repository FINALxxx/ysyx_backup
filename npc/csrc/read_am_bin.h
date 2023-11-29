#include <stdio.h>
#include <assert.h>
#include <stdint.h>

long read_init(FILE* fp,char const* fileName);

char read_one_byte(FILE* fp);

char* read_total(FILE* fp,long size);	
