#ifndef __ISA_RISCV_H__
#define __ISA_RISCV_H__

#include <common.h>

typedef struct {
  word_t gpr[32];
  vaddr_t pc;
  vaddr_t dnpc;
} CPU_state;


#define isa_mmu_check(vaddr, len, type) (MMU_DIRECT)

#endif
