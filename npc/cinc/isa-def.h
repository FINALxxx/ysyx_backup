#ifndef __ISA_RISCV_H__
#define __ISA_RISCV_H__

#include <common.h>

#define REG_NUM 32
typedef struct {
  word_t gpr[REG_NUM];
  vaddr_t pc;
  vaddr_t dnpc;
} CPU_state;


#define isa_mmu_check(vaddr, len, type) (MMU_DIRECT)

#endif
