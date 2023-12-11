#ifndef __COMMON_H__
#define __COMMON_H__

#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>
#include <string.h>
#include "debug.h"


//通用单位
typedef uint8_t byte_t
typedef uint32_t uword_t;
typedef int32_t word_t;
typedef uint32_t vaddr_t;
typedef uint32_t paddr_t;
typedef uint16_t ioaddr_t;

//通用输出符
#define FMT_WORD "%#010x"
#define FMT_VADDR "%#010x"

#endif
