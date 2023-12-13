#ifndef __CPU__
#define __CPU__

#include <isa.h>
#include <Vcpu___024root.h>
#include <sys_npc.h>

#define TARGET_PC 0
#define TARGET_DNPC 1
#define NPCTRAP(PC_now,code) status_setter(DEAD,PC_now,code)

/* DATA */
uword_t reg_getter(byte_t n);
void reg_setter();
void reg_display();
uword_t reg_str2val(const char *s, bool *success);

uword_t pc_getter(bool target);

//pc_setter会很耗时，之后想办法只在get时，才set，其余时候不用set
void pc_setter();//暂时使用cpu->pc，之后使用DPIC

//uword_t inst_getter();
//void inst_setter(uword_t pc);


/* STATUS */
void status_setter(int state,vaddr_t pc,bool halt_ret);


/* EXEC */
void exec(uword_t cnt);
void exec_once();


#endif
