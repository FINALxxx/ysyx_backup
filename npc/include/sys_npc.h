#ifndef __NPC_SYS__
#define __NPC_SYS__

#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vcpu.h"
#include <stdint.h>
#include <bits/stdc++.h>
#include "read_bin.h"

#define MAX_SIM_TIME 10000

extern vluint64_t sim_time;
extern FILE* fp;
extern uint32_t cmd_cur,cmd_num;
extern uint32_t* cmd;

extern VerilatedContext* env;
extern Vcpu* cpu;


//cpu运行参量，之后设置为static保护
enum STATUS {DEAD,ALIVE,ABORT};//待添加
extern STATUS cpu_status;


void sim_init(int argc,char** argv);
void sim_stop();
void sim_update();
void exec(uint32_t n);
void exec_once();
static void clk_update();

//void cpu_status_setter(STATUS new_status)
//STATUS cpu_status_getter()

#endif
