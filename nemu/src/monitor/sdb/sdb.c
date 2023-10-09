/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <sdb/sdb.h>
#include <stdio.h>
#include <debug.h>
#include <memory/vaddr.h>
#include <sdb/watchpoint.h>
#include <sdb/expr.h>

static int is_batch_mode = false;

void init_regex();
void init_wp_pool();
word_t expr(char* e,bool *success);

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {//获取一行输入，如果指针有指向，且指向的字符串存在，则返回这行输入
  static char *line_read = NULL;

  if (line_read) {//指针初始化
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args)  {
  return -1;//-1表示模拟器退出，正常函数退出return 0就行
}

static int cmd_help(char *args);

static int cmd_si(char* args){
	extern WP* head;
	printf("LOG1:%s\n",head->expr);


	char *arg=strtok(NULL," ");	
	if(arg==NULL){      
		cpu_exec(1);//single-step
	}else{
		uint64_t n=1;
		Assert(sscanf(arg,"%lu",&n),"嗨害嗨");
		cpu_exec(n);
	}
	return 0;
}

static int cmd_info(char* args){
	char *arg=strtok(NULL," ");
	if(arg==NULL){     
		printf("Without any argument...");
	}else{
		if(!strcmp(arg,"r")) isa_reg_display();
		else if(!strcmp(arg,"w")){
			print_w();
		}
		else printf("Unknown argument '%s'\n",arg);
	}

	return 0;
}

static int cmd_x(char* args){
	char* visit_len_s=strtok(NULL," ");
	if(visit_len_s==NULL) printf("Without any argument...");
	else{  
		char* visit_addr_s=strtok(NULL," ");
		if(visit_addr_s==NULL) printf("Incomplete argument...");
		else{ 
			vaddr_t visit_addr;
			int visit_len=0;
			sscanf(visit_addr_s,"%x",&visit_addr);
			sscanf(visit_len_s,"%d",&visit_len);
			for(int i=0 ;i<visit_len;i++){
				//printf("log:%x\n",visit_addr);
				printf("%#x:\t%08x\n",visit_addr,vaddr_read(visit_addr,4));//read后打印(参看read_host)，另外，这里的word_t是uint32_t的
				visit_addr+=4;
			}
		}
	}
	return 0;
}

static int cmd_p(char* args){
	char* expr_s=strtok(NULL,"");
	if(expr_s==NULL) printf("Without any argument...");
	else{ 
		bool success=true;
		uint32_t result=expr(expr_s,&success);
		//if(success) printf("匹配通过\n");
		//else printf("匹配不通过\n");
		printf("the result=%d\n",result);
	}

	return 0;
}

static int cmd_w(char* args){
	char* expr_s=strtok(NULL,"");
	if(expr_s==NULL) printf("Without any argument...");
	else new_wp(expr_s);
	return 0;
}

/*
static int cmd_d(char* args){
	char* no_s=strtok(NULL,"");
	if(no_s==NULL) printf("Without any argument...");
	else{
		int no=-1;
		sscanf(no_s,"%d",&no);
		free_wp(no);
	}

	return 0;
}
*/


static struct { 
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  /* TODO: Add more commands */
  { "si", "single-step execution", cmd_si},
  { "info", "check the information of registers or watch points", cmd_info},
  { "x", "visit the corresponding contents in memory", cmd_x },
  { "p", "match the expr by regex", cmd_p},
  { "w", "add a new watchpoint by using EXPR", cmd_w},
  //{ "d", "delete a working watchpoint by using NO", cmd_d},
};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {//rl_gets会自动获取参数，并由框架传给对应调用的函数
  /* extract the first argument */
  char *arg = strtok(NULL, " ");//mainloop中已经使用过一次strtok了，这里直接传NULL就能继续切割参数
  int i;

  if (arg == NULL) { 
    /* no argument given */
    for (i = 0; i <  NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else { 
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

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }
		
  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {//如果没有参数
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {//比较cmd与cmd_table中的预置命令
        if (cmd_table[i].handler(args) < 0) { return; }//若比较成功，且有相应指向的函数指针（const），则return
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }//找不到命令
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
