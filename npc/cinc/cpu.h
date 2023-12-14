#ifndef __CPU_CPU_H__
#define __CPU_CPU_H__

#include <common.h>

void exec(uint64_t n);

void set_cpu_status(int state, vaddr_t pc, int halt_ret);
//void invalid_inst(vaddr_t thispc);

#define NPCTRAP(thispc, code) set_cpu_status(TERMINATE, thispc, code)
//#define INV(thispc) invalid_inst(thispc)

#endif
