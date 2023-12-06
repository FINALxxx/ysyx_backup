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
#include"sdb_expr.h"


static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules. 
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // spaces
  {"\\+", '+'},         // plus
  {"\\-", '-'},			// minus
  {"\\*", '*'},			// times
  {"\\/", '/'},			// devide
  {"\\b[0-9]+\\b", NUM},// DEC number
  {"\\(", L_PAREN},		// left parenthese，parenthese=括弧，你甚至能学到英语hhh
  {"\\)", R_PAREN},		// right parenthese
  {"==", TK_EQ},        // equal
  {"!=", NOT_EQ},		// not equal
  {"&&", LGC_AND},		// logical and
  //{"\\*", PTR},			// pointer
  {"\\$[a-zA-Z0-9]+", REG_NAME},		// register name
  {"0x[0-9A-Fa-f]+", HEX_NUM},		// HEX number
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX;  i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {  
      regerror(ret, &re[i], error_msg, 128);
      //panic(0,"regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}


static Token tokens[32] __attribute__((used)) = {};//匹配的token内容，这里有一个GNU C的__attribute__((...))功能
static int nr_token __attribute__((used))  = 0;//匹配的数量

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0')  {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i  ++) {
      if (regexec(&re[i], e +  position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;//当前子串
        int substr_len = pmatch.rm_eo;//匹配长度
		

        /*Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);
		*/
        position += substr_len;//提前切换到下一个子串开始处

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */
		uint32_t tokstr_pos=0;
        switch (rules[i].token_type) {
			case TK_NOTYPE:break;//不保存空格串
			default: tokens[nr_token].type=rules[i].token_type;
					 strncpy(tokens[nr_token].str,substr_start,substr_len);
					 tokstr_pos=sizeof(tokens[nr_token].str)-1;
					 tokens[nr_token++].str[tokstr_pos]='\0';
        }

        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}


uint32_t expr(char *e, bool *success) {//由于函数的return有其他用途，所以success用指针方式修改
	if (!make_token(e) ) { 
		*success = false;
		return 0;
	}

	/* TODO: Insert codes to evaluate the expression. */
	for(int i =0;i<nr_token;i++){//找到所有的*
		if(tokens[i].type=='*' && (i==0||(tokens[i-1].type!=NUM && tokens[i-1].type!=HEX_NUM && tokens[i-1].type!=R_PAREN))){//同理，也可以区分负数和减法
			tokens[i].type=PTR;
			//printf("IN");
		}
	}

	int l=0,r=nr_token-1;
	*success=true;
	return eval(l,r);
}


//return：
//1=被括号包围
//0=不被括号包围、两端括号不匹配
//-1=括号缺失【报错】
int check_paren(int l,int r){
	if(!(tokens[l].type==L_PAREN) || !(tokens[r].type==R_PAREN)){
		return 0;
	}

	int stk_ptr=l,cnt=0;
	while(stk_ptr<r){//注意这里是<r
		if(tokens[stk_ptr].type==L_PAREN) cnt++;
		else if(tokens[stk_ptr].type==R_PAREN) cnt--;

		if(cnt<1) return 0;
		stk_ptr++;
	}
	if(cnt) return 1;//cnt--后cnt=0时
	else return -1;
}


//这里可以优化
int op(int l,int r){
	int ptr=l,main_op=-1,cnt=0;//cnt用于检测当前运算符是否在括号内
	int main_op_rank=3;//防止被选中
	while(ptr<=r){
		int type=tokens[ptr].type;
		if(type==L_PAREN) cnt++;
		else if(type==R_PAREN) cnt--;
		else if(type!=NUM && type!=HEX_NUM  && !cnt){
			int ptr_rank=2;
			
			//优先级表
			if(type=='*'||type=='/') ptr_rank=0;
			if(type=='+') ptr_rank=-1;//可以拓展减法 
			if(type==PTR) ptr_rank=1;

			if(ptr_rank==main_op_rank){ 
				main_op=MAX(main_op,ptr);//同等级：选择较后的op
				main_op_rank=ptr_rank;
			}else if(ptr_rank<main_op_rank){ 
				main_op=ptr;//选择等级低的
				main_op_rank=ptr_rank;
			}
		}
		ptr++;
	}
	//printf("test:%d\n",main_op);
	Assert(main_op!=-1,"illegal expr:cannot find operator\n");
	return main_op;
}


int eval(int l,int r){
	//printf("l=%d,r=%d\n",l,r);
	if(l>r){ 
		Assert(0,"illegal expr!\n");//bad expr
		return 0;
	}else if(l==r){
		//in this case,it must be a number or register(the smallest expr),and return its value.
		if(tokens[l].type== NUM){
			int val=0;
			sscanf(tokens[l].str,"%d",&val);
			//printf("log:%d\n",val);
			return val;
		}else if(tokens[l].type==HEX_NUM){
			int val=0;
			sscanf(tokens[l].str,"%x",&val);
			//printf("log:%x\n",val);
			return val;
		}else if(tokens[l].type==REG_NAME){
			int val=0;
			bool success=false;
			//printf("LOG:%s\n",tokens[l].str+1);
			val=isa_reg_str2val(tokens[l].str+1,&success);//返回地址
			Assert(success,"illegal expr:cannot find the register!\n");
			return val;
		}
		
		Assert(0,"illegal expr:cannot find the number or register!\n");//if not a number,then return bad expr
	}else if(check_paren(l,r)==1){
		return eval(l+1,r-1);//目的是去掉括号，递归查看内部表达式
	}else if(check_paren(l,r)==-1){
		Assert(0,"illegal expr:parentheses cannot be matched!\n");
		return 0;
	}else{
		int operator=op(l,r);//返回op的下标
		//printf("LOG:%d\n",(tokens[operator].type==PTR));
		int val1=0,val2=0;
		if(tokens[operator].type!=PTR){
			val1=eval(l,operator-1);
			val2=eval(operator+1,r);
		}else{
			//printf("IN\n");
			val1=eval(operator+1,r);
		}
		switch (tokens[operator].type) { 
			case '+': return val1 + val2;
			case '-': return val1 - val2;
			case '*': return val1 * val2;
			case '/': Assert(val2!=0,"illegal expr:division by 0!\n"); return val1 / val2; 
			case PTR:return read_memory(val1,4); 
			default: assert(0);
		}	
	}
}
