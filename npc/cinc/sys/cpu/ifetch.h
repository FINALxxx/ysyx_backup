#ifndef __CPU_IFETCH__
#define __CPU_IFETCH__

#include <memory/config.h>

static inline uword_t inst_fetch(vaddr_t pc, int size) {
  return vaddr_read(pc, size);
}

#endif
