#include <string.h>
#include <math.h>
#include "debug.h"
#include "macro.h"
/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>
#include <iostream>
#include "sys_npc.h"

#define MAX(a,b) (a)>(b) ? (a) : (b)

enum {
  TK_NOTYPE = 256, TK_EQ,NUM,L_PAREN,R_PAREN,NOT_EQ,LGC_AND,PTR,REG_NAME,HEX_NUM
  /* TODO: Add more token types */

};


typedef struct token {
  int type;
  char str[32];
} Token;
void init_regex();

//以下函数可以在其他地方使用
uint32_t expr(char *e, bool *success);

int check_paren(int l,int r);

int op(int l,int r);

int eval(int l,int r);
