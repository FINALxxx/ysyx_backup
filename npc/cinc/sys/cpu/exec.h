#ifndef __CPU_EXEC__
#include <common.h>

extern long inst_exec_cnt;

void exec(uword_t cnt);
void exec_once();
#endif
