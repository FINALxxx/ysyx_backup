#ifndef __ISA_DIFF_H__
#include <isa-difftest-def.h>
#include <common.h>

void difftest_skip_ref();
void difftest_skip_dut(int inst_cnt_ref, int inst_cnt_dut);
void difftest_init(const char* ref_so_file, long img_size, int port);
void difftest_step(vaddr_t pc, vaddr_t npc);

#endif
