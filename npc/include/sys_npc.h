#ifndef __NPC_SYS__
#define __NPC_SYS__

#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vcpu.h"
#include <stdint.h>
#include <stdlib.h>
#include "read_bin.h"

#define MAX_SIM_TIME 10000
#define BASE_Vaddr 0x80000000
#define NPCTRAP(PC_now,code) status_setter(DEAD,PC_now,code)

extern vluint64_t sim_time;
extern FILE* fp;
extern uint32_t cmd_cur,cmd_num;
extern uint32_t* cmd;

extern VerilatedContext* env;
extern Vcpu* cpu;


//cpu运行参量，之后设置为static保护
enum STATUS {DEAD,ALIVE,ABORT,STOP,QUIT};
typedef struct {
  int state;
  uint32_t halt_pc;
  uint32_t halt_ret;
} NPC_STATUS;

extern NPC_STATUS cpu_status;


void sim_init(int argc,char** argv);
void sim_terminate();
void sim_update();
void exec(uint32_t n);
void exec_once();
static void clk_update();
int is_exit_status_bad();
void status_setter(int state,uint32_t pc,int halt_ret);

uint8_t pc_VtransP(uint32_t pc);
uint32_t read_register(uint8_t n);
uint32_t read_memory(uint32_t pc_Vdst,uint8_t size);



//void cpu_status_setter(STATUS new_status)
//STATUS cpu_status_getter()

#endif
