/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <cpu/difftest.h>
#include "../local-include/reg.h"

#define DIFFER(csr) if(cpu.csr != ref_r->csr) return false;
	
bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
	//dut用的CPU_state是extern的一个cpu，在isa.h中定义
	uint32_t reg_len = sizeof(cpu.gpr)/sizeof(cpu.gpr[0]);
	for(int i=0;i<reg_len;i++){
		if(cpu.gpr[i]!=ref_r->gpr[i]) {
			printf(ANSI_FMT("<DIFFTEST-%s> %#010x(IN dut:NEMU) != %#010x(IN ref:spike)\n",ANSI_FG_YELLOW),reg_name(i),cpu.gpr[i],ref_r->gpr[i]);
			return false;
		}
	}
	DIFFER(mcause);
	DIFFER(mepc);
	DIFFER(mtvec);
	
	return true;
}

void isa_difftest_attach() {
}
