#ifndef __ISA_DIFF_DEF_H__
#define __ISA_DIFF_DEF_H__
#include <common.h>

#define __EXPORT __attribute__((visibility("default")))
enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };

//固定ref的isa类型为riscv32
#define RISCV_GPR_TYPE uint32_t
#define RISCV_GPR_NUM 32
#define DIFFTEST_REG_SIZE (sizeof(RISCV_GPR_TYPE) * (RISCV_GPR_NUM + 1)) //GPRs + pc

#endif
