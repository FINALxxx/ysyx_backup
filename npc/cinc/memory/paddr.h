#ifndef __MEMORY_PADDR_H__
#define __MEMORY_PADDR_H__

#include <common.h>

#define PMEM_LEFT  ((paddr_t)CONFIG_MBASE)
#define PMEM_RIGHT ((paddr_t)CONFIG_MBASE + CONFIG_MSIZE - 1)
#define RESET_VECTOR (PMEM_LEFT + CONFIG_PC_RESET_OFFSET)

//将物理地址(如paddr = 0x80000000)转为物理地址的指针(haddr = pmem + (paddr - PMEM_LEFT))
uint8_t* guest_to_host(paddr_t paddr);

//将物理地址的指针(如haddr = pmem)转为物理地址(paddr = (haddr - pmem) + PMEM_LEFT)
paddr_t host_to_guest(uint8_t *haddr);


static inline bool in_pmem(paddr_t addr) {
  return addr - CONFIG_MBASE < CONFIG_MSIZE;
}

//使用物理地址读写(调用host_read、host_write)
word_t paddr_read(paddr_t addr, int len);
void paddr_write(paddr_t addr, int len, word_t data);

#endif
