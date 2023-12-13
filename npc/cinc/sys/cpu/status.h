#ifndef __CPU_STATUS__
#define __CPU_STATUS__
#include <sys_common.h>

#define NPCTRAP(PC_now,code) status_setter(DEAD,PC_now,code)
//cpu运行参量，之后设置为static保护
enum STATUS {DEAD,ALIVE,ABORT,STOP,QUIT};
typedef struct {
  int state;
  vaddr_t halt_pc;
  bool halt_ret;
} NPC_STATUS;

extern NPC_STATUS cpu_status;

void status_setter(int state,vaddr_t pc,bool halt_ret);

#endif

