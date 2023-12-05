#include"sdb.h"

//Warn: strtok切割字符串后，源字符串会被切割

static char* getarg(){
	static char* input_line = NULL;
	if(input_line){//pointer initialize
		free(input_line);
		input_line = NULL;
	}
	
	//Warn: readline是一个动态库，编译的时候需要加上　-lreadline
	input_line = readline("(npc) ");
	
	if(input_line && *input_line){
		add_history(input_line);
	} 

	return input_line;
}

static int cmd_c(char *args) {
	exec(-1);//将-1换成limit.h中的最大值
	return 0;
}


static int cmd_q(char *args)  {
	cpu_status=DEAD;
	return -1;
}


static int cmd_si(char* args){
	char *arg=strtok(NULL," ");	
	if(arg==NULL){      
		exec(1);//single-step
	}else{
		uint64_t n=1;
		assert(sscanf(arg,"%lu",&n));
		exec(n);
	}
	return 0;
}

static int cmd_info(char* args){}

static int cmd_x(char* args){}

static int cmd_p(char* args){}

static int cmd_w(char* args){}

static int cmd_d(char* args){}

static int cmd_help(char *args){
	char *arg = strtok(NULL, " ");//mainloop中已经使用过一次strtok了，这里直接传NULL就能继续切割参数
	int i;

	if (arg == NULL) { 

		/* no argument given */
		for (i = 0; i <  NR_CMD; i ++) {
			printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
		}

	}else { 

		for (i = 0; i <  NR_CMD; i ++) {
			if (strcmp(arg, cmd_table[i].name) == 0) {
				printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
				return 0;
			}
		}
		printf("Unknown command '%s'\n", arg);

	}
	return 0;
}


void init_sdb(){}


void sdb_set_batch_mode() {
	is_batch_mode = true;
}

void sdb_mainloop(){
	if (is_batch_mode) {//决定是否启动批处理模式
		cmd_c(NULL);
		return;
	}

	for (char *str; (str = getarg()) != NULL; ) {
		char *str_end = str + strlen(str);

		/* extract the first token as the command */
		char *cmd = strtok(str, " ");
		if (cmd == NULL) continue;

		/* treat the remaining string as the arguments,
		 * which may need further parsing
		 */
		char *args = cmd + strlen(cmd) + 1;
		if (args >= str_end) {//如果没有参数
			args = NULL;
		}
		if (i == NR_CMD) { 
			printf("Unknown command '%s'\n", cmd); 
		}//找不到命令

	}
}

