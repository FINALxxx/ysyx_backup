#ifndef __MEM_CONFIG__
#define __MEM_CONFIG__
#include <common.h>
//#include <cpu.h>
#include <debug-print.h>


#define CONFIG_PMEM_MALLOC 1
#define CONFIG_PMEM_RESET_OFFSET 0x0
#define PMEM_ALIGN __attribute((aligned(4096)))

#define PMEM_BASE_VADDR 0x80000000
#define PMEM_SIZE 0x8000000
#define PMEM_LEFT ((vaddr_t)PMEM_BASE_VADDR)
#define PMEM_RIGHT ((vaddr_t)PMEM_BASE_VADDR + PMEM_SIZE -1)
#define PMEM_RESET (PMEM_LEFT + CONFIG_PMEM_RESET_OFFSET)
 


#if   defined(CONFIG_PMEM_MALLOC)
static byte_t *pmem = NULL;
#else // CONFIG_PMEM_GARRAY
static byte_t pmem[PMEM_SIZE] PMEM_ALIGN = {};
#endif

void mem_init();


//访问路径：不同客户机->不同的虚拟地址->统一为相同的物理地址->主机内存
//由于客户机固定是riscv32，因此不需要paddr，直接使用vaddr即可

//规定size都以byte为单位
uword_t vaddr_read(vaddr_t addr,int size);
byte_t* v_to_mem(vaddr_t addr);
//pmem_read(paddr_t addr, int len); 
static inline uword_t inline_read(void *addr, int len) {
  switch (len) {
    case 1: return *(uint8_t  *)addr;
    case 2: return *(uint16_t *)addr;
    case 4: return *(uint32_t *)addr;
    default: assert(0);
  }
}




void vaddr_write(vaddr_t addr, int size, uword_t data);
vaddr_t mem_to_v(byte_t* mem);
//pmem_write(paddr_t addr, int len, uword_t data);
static inline void inline_write(void *addr, int len, uword_t data) {
  switch (len) {
    case 1: *(uint8_t  *)addr = data; return;
    case 2: *(uint16_t *)addr = data; return;
    case 4: *(uint32_t *)addr = data; return;
    default: assert(0);
  }
}


static inline bool in_pmem(vaddr_t addr) {
  return addr - PMEM_BASE_VADDR < PMEM_SIZE;
}


#endif
