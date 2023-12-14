#ifndef __CPU_CPU_H__
#define __CPU_CPU_H__

#include <common.h>


/* STATUS */
void set_cpu_status(int state, vaddr_t pc, int halt_ret);
#define NPCTRAP(thispc, code) set_cpu_status(TERMINATE, thispc, code)

/* DATA */
void get_cpu_pc();//之后加入DPIC
word_t set_cpu_inst();//之后加入DPIC
void get_cpu_reg();


/* EXEC */
void exec(uint64_t n);

#endif
