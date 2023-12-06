#include <assert.h>

#define Assert(EXPR,STR) if((EXPR)){printf("\033[0;31m %s \033[0m",(STR));assert(0);}
