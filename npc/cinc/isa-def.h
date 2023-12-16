#ifndef __ISA_RISCV_H__
#define __ISA_RISCV_H__

#include <common.h>

//每次exec后就会更新一次信息
#define REG_NUM 32
typedef struct {
  word_t gpr[REG_NUM];
  vaddr_t pc;
  vaddr_t dnpc;
  word_t inst;
} CPU_state;


#define isa_mmu_check(vaddr, len, type) (MMU_DIRECT)

#endif
