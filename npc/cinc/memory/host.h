#ifndef __MEMORY_HOST_H__
#define __MEMORY_HOST_H__

#include <common.h>

//使用pmem变量的地址读写len字节的数据

static inline word_t host_read(void *addr, int len) {
  switch (len) {
    case 1: return *(uint8_t  *)addr;
    case 2: return *(uint16_t *)addr;
    case 4: return *(uint32_t *)addr;
    //default: MUXDEF(CONFIG_RT_CHECK, assert(0), return 0);
	default: return 0;
  }
}

static inline void host_write(void *addr, int len, word_t data) {
  switch (len) {
    case 1: *(uint8_t  *)addr = data; return;
    case 2: *(uint16_t *)addr = data; return;
    case 4: *(uint32_t *)addr = data; return;
    //IFDEF(CONFIG_RT_CHECK, default: assert(0));
	default: return;
  }
}

#endif
