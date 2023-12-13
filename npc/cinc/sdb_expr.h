#include <stdint.h>

#define MAX(a,b) (a)>(b) ? (a) : (b)

enum {
  TK_NOTYPE = 256, TK_EQ,NUM,L_PAREN,R_PAREN,NOT_EQ,LGC_AND,PTR,REG_NAME,HEX_NUM
  /* TODO: Add more token types */

};


typedef struct token {
  int type;
  char str[32];
} Token;
void regex_init();

//以下函数可以在其他地方使用
uint32_t expr(char *e, bool *success);

int check_paren(int l,int r);

int op(int l,int r);

int eval(int l,int r);
