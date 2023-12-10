#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>

__EXPORT void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction);

__EXPORT void difftest_regcpy(void *dut, bool direction);

__EXPORT void difftest_exec(uint64_t n);

__EXPORT void difftest_raise_intr(word_t NO);

__EXPORT void difftest_init(int port);
