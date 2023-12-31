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

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>

// this should be enough
static char buf[65536] = {};
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned result = %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";

static int cnt=0;
static int choose(unsigned int n){
	return rand()%n;//限制返回值在0~n-1
}

static void gen_rand_op(){
	int n=choose(4);
	switch(n){
		case 0:sprintf(buf+cnt,"%c",'+');break;
		case 1:sprintf(buf+cnt,"%c",'-');break;
		case 2:sprintf(buf+cnt,"%c",'*');break;
		default:sprintf(buf+cnt,"%c",'/');break;
	}
	cnt++;
}

static void gen(char c){
	sprintf(buf+cnt,"%c",c);
	cnt++;
}

static void gen_num(){
	int n=choose(10000);
	//if(!n && buf[cnt-1]=='/') n=1;//避免除0
	sprintf(buf+cnt,"%d",n);
	while(buf[cnt]) cnt++;
}

static void  gen_rand_expr() {
	int n=choose(3);
	if(cnt>10) n=0;//限制一下长度

	switch (n) { 
    	case 0: gen_num(); break;
    	case 1: gen('(');gen_rand_expr();gen(')'); break;
    	default: gen_rand_expr(); gen_rand_op(); gen_rand_expr(); break;
  	}
}

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);//命令行输入一个循环次数
  }
  int i;
  for (i = 0; i < loop; i ++) {
    gen_rand_expr();
	buf[cnt+10]='\0';//改在这里加\0

    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc /tmp/.code.c -o /tmp/.expr");
    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");//popen和pclose：创建子进程，与子进程的SHELL建立IO管道
    assert(fp != NULL);

    int result;
    ret = fscanf(fp, "%d", &result);
    pclose(fp);

    printf("%u %s\n", result, buf);
  }
  return 0;
}
