#ifndef __COMMON_H__
#define __COMMON_H__

#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>
#include <string.h>
#include <macro.h>
#include <config.h>

#include <assert.h>
#include <stdlib.h>

#include <verilated.h>
#include "Vcpu.h"

typedef uint8_t byte_t;

typedef uint32_t word_t;
typedef int32_t  sword_t;
#define FMT_WORD "0x%08" PRIx32 //等价于"%$010x"

typedef word_t vaddr_t;
typedef uint32_t paddr_t;
#define FMT_PADDR "0x%08" PRIx32 //同上
typedef uint16_t ioaddr_t;

#include <debug.h>

#endif
