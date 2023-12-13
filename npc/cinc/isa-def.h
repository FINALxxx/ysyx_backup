#ifndef __ISA_DEF__
#define __ISA_DEF__

#include <common.h>
#define REG_NUM 32

typedef struct {
	uword_t gpr[REG_NUM];//由reg_setter更新，reg_getter取值
	vaddr_t pc;//由pc_setter更新，pc_getter取值
	vaddr_t dnpc;//由pc_setter更新，pc_getter取值
	byte_t logbuf;
}CPU_state;

//cpu运行参量，之后设置为static保护
enum STATUS {DEAD,ALIVE,ABORT,STOP,QUIT};
typedef struct{ 
  int state;
  vaddr_t halt_pc;
  bool halt_ret;
} NPC_STATUS;

