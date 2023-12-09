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
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>


//spike有类似的函数，在${HEMU_HOME}/tools/spike-diff/difftest.cc中
__EXPORT void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
	//assert(0);
	/*if(direction == DIFFTEST_TO_REF){
		for(int i=0;i<n;++i){
			paddr_write(addr+i,1, *((int8_t*)buf) );//写入1Byte数据
		}
	}else{
		//spike中也没有具体语句
		assert(0);
	}*/
}

__EXPORT void difftest_regcpy(void *dut, bool direction) {
	//assert(0);
	/*uint32_t reg_len = sizeof(cpu.gpr)/sizeof(cpu.gpr[0]);
	if(direction == DIFFTEST_TO_REF){
		for(int i=0;i<reg_len;i++){
			cpu.gpr[i] = ((uint32_t*)dut)[i];
		}
	}else{//DIFFTEST_TO_DUT
		for(int i=0;i<reg_len;i++){
			((uint32_t*)dut)[i] = cpu.gpr[i];
		}
	}*/

}

__EXPORT void difftest_exec(uint64_t n) {
  //assert(0);
  //cpu_exec(n);
}

__EXPORT void difftest_raise_intr(word_t NO) {
  assert(0);
}

__EXPORT void difftest_init(int port) {
  void init_mem();
  init_mem();
  /* Perform ISA dependent initialization. */
  init_isa();
}
