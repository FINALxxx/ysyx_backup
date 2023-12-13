#ifndef __NPC_SYS__
#define __NPC_SYS__

#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vcpu.h"
#include <isa-def.h>


extern "C" void halt(svBit is_halt);
extern "C" svBitVecVal* cmd_getter(svBitVecVal* pc_now);


void sim_init(int argc,char** argv);
void sim_terminate();
void sim_update();
static void clk_update();
int is_exit_status_bad();



#endif
