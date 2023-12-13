#ifndef __COMMON_H__
#define __COMMON_H__

#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>
#include <string.h>
#include <debug-print.h>
#include <iostream>

//通用单位
typedef uint8_t byte_t;
typedef uint32_t uword_t;
typedef int32_t word_t;
typedef uint32_t vaddr_t;
typedef uint32_t paddr_t;
typedef uint16_t ioaddr_t;

//通用输出符
#define FMT_WORD "%#010x"
#define FMT_VADDR "%#010x"

#define REG_NUM 32
#define MAX_SIM_TIME 10000
extern void status_setter(int state,vaddr_t pc,bool halt_ret);
#define NPCTRAP(PC_now,code) status_setter(DEAD,PC_now,code)
#define TARGET_PC 0
#define TARGET_DNPC 1
#define CONFIG_PMEM_MALLOC 1
#define CONFIG_PMEM_RESET_OFFSET 0x0
#define PMEM_ALIGN __attribute((aligned(4096)))

#define PMEM_BASE_VADDR 0x80000000
#define PMEM_SIZE 0x8000000
#define PMEM_LEFT ((vaddr_t)PMEM_BASE_VADDR)
#define PMEM_RIGHT ((vaddr_t)PMEM_BASE_VADDR + PMEM_SIZE -1)
#define PMEM_RESET (PMEM_LEFT + CONFIG_PMEM_RESET_OFFSET)
 


#endif
