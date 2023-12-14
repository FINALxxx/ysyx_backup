#ifndef __MEMORY_VADDR_H__
#define __MEMORY_VADDR_H__

#include <common.h>


//将物理地址转换为虚拟地址，并使用虚拟地址读写（调用paddr_read、paddr_write）
word_t vaddr_read(vaddr_t addr, int len);
void vaddr_write(vaddr_t addr, int len, word_t data);

//调用vaddr_read读取
word_t vaddr_ifetch(vaddr_t addr, int len);

#define PAGE_SHIFT        12
#define PAGE_SIZE         (1ul << PAGE_SHIFT)
#define PAGE_MASK         (PAGE_SIZE - 1)

#endif
