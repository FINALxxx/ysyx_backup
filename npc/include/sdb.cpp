#include"sdb.h"

bool is_batch_mode = false;

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


static int cmd_q(char *args){
	cpu_status.state=QUIT;//退出exec()
	return -1;//返回-1表示退出sdb模式
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

static int cmd_info(char* args){
	return 0;
}

static int cmd_x(char* args){
	return 0;

}

static int cmd_p(char* args){
	char* expr_=strtok(NULL,"");
	if(expr_==NULL) printf("Without any argument...\n");
	printf("LOG:%d\n",expr_);
	else{ 
		bool success=true;
		uint32_t result=expr(expr_,&success);
		//if(success) printf("匹配通过\n");
		//else printf("匹配不通过\n");
		printf("the result=%d\n",result);
	}
	return 0;
}

static int cmd_w(char* args){
	return 0;

}

static int cmd_d(char* args){
	return 0;

}

static int cmd_help(char *args){
	char *arg = strtok(NULL, " ");//mainloop中已经使用过一次strtok了，这里直接传NULL就能继续切割参数
	int i;

	if (arg == NULL) { 
		printf("\n");
		/* no argument given */
		for (i = 0; i <  NR_CMD; i ++) {
			printf("\t\033[0m\033[1;32m%s\033[0m - %s\n", cmd_table[i].name, cmd_table[i].description);
		}
		printf("\n");
	}else{ 

		for (i = 0; i <  NR_CMD; i ++) {
			if (strcmp(arg, cmd_table[i].name) == 0) {
				printf("\t\033[0m\033[1;32m%s\033[0m - %s\n", cmd_table[i].name, cmd_table[i].description);
				return 0;
			}
		}
		printf("\033[0m\033[1;32mUnknown command\033[0m '%s'\n", arg);

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
		
		int i;
		for (i = 0; i < NR_CMD; i ++) {
			if (strcmp(cmd, cmd_table[i].name) == 0) {//比较cmd与cmd_table中的预置命令
				if (cmd_table[i].handler(args) < 0) return;//若比较成功，且返回-1，则return
				break;
			}
		}

		if (i == NR_CMD) printf("\033[0m\033[1;31mUnknown command\033[0m '%s'\n", cmd);//找不到命令
	}
}

