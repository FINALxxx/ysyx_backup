#ifndef __NPC_SYS__
#define __NPC_SYS__

#include <verilated.h>
#include "Vcpu.h"
#include <verilated_vcd_c.h>

#include <common.h>
#include <init-load/read_bin.h>

#define MAX_SIM_TIME 10000
#define NPCTRAP(PC_now,code) status_setter(DEAD,PC_now,code)

extern vluint64_t sim_time;
extern VerilatedContext* env;
extern Vcpu* cpu;


extern "C" void halt(svBit is_halt);
extern "C" svBitVecVal* cmd_getter(svBitVecVal* pc_now);


void sim_init(int argc,char** argv);
void sim_terminate();
void sim_update();
void clk_update();
int is_exit_status_bad();



#endif
