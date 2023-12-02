#include <assert.h>
#include <stdint.h>
#include <bits/stdc++.h>

union endian{
	char ch_cmd[4];
	uint32_t uint_cmd;
};

long read_bin(uint32_t* cmd,FILE* fp,const char* fileName);

uint32_t change_order(uint32_t cmd);
