#include <assert.h>

#define Assert(EXPR,STR) if((EXPR)){printf("\033[0m\033[1;31m%s\033[0m",(STR));}
