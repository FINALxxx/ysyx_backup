#ifndef __CPU_IFETCH__
#define __CPU_IFETCH__

extern uword_t vaddr_read(vaddr_t addr,int size);
static inline uword_t inst_fetch(vaddr_t pc, int size) {
  return vaddr_read(pc, size);
}

#endif
