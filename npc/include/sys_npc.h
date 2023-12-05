#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vcpu.h"
#include <stdint.h>
#include <bits/stdc++.h>
#include "read_bin.h"

#ifndef __NPC_SYS__
#define __NPC_SYS__

namespace sys_args{
	vluint64_t sim_time=0;
	FILE* fp =NULL;
	uint32_t cmd_cur=0,cmd_num=0;
	uint32_t* cmd=NULL;

	VerilatedContext* env = NULL;
	Vcpu* cpu = NULL;
}
//cpu运行参量，之后设置为static保护
enum STATUS {DEAD,ALIVE,ABORT};//待添加
STATUS cpu_status=ALIVE;


void sim_init(int argc,char** argv);
void sim_stop();
void sim_update();
void exec(uint32_t n);
void exec_once();
static void clk_update();

//void cpu_status_setter(STATUS new_status)
//STATUS cpu_status_getter()

#endif
