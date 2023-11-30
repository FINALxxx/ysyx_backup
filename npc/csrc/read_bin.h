union endian{
	char ch_cmd[4];
	uint32_t uint_cmd;
};

void read_bin(uint32_t* cmd,FILE* fp,const char* fileName);

uint32_t change_order(uint32_t cmd);
