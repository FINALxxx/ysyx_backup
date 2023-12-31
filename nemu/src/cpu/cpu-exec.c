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

#include <cpu/cpu.h>
#include <cpu/decode.h>
#include <cpu/difftest.h>
#include <locale.h>
#include <sdb/watchpoint.h>
#include <sdb/sdb.h>
#include <sdb/inst_trace.h>
#include <sdb/mem_trace.h>

/* The assembly code of instructions executed is only output to the screen
 * when the number of instructions executed is less than this value.
 * This is useful when you use the `si' command.
 * You can modify this value as you want.
 */
#define MAX_INST_TO_PRINT 10

CPU_state cpu = {};
uint64_t g_nr_guest_inst = 0;
static uint64_t g_timer = 0; // unit: us
static bool g_print_step = false;

void device_update();

static void single_inst_debug(Decode *_this, vaddr_t dnpc) {

	//itrace
#ifdef CONFIG_ITRACE_COND
  if (ITRACE_COND) { log_write("%s\n", _this->logbuf); }
  
  //iringbuf指令缓冲区
  //insert_buffer(_this->pc,_this->logbuf);//pa2.2:新增trace
#endif

  //打印每一步的指令
  if (g_print_step) { IFDEF(CONFIG_ITRACE, puts(_this->logbuf)); }
  IFDEF(CONFIG_DIFFTEST, difftest_step(_this->pc, dnpc));

  //断点调试
  uint32_t new_result=0;
  WP* wp=check_wp(&new_result);
  if(wp!=NULL){
	nemu_state.state=NEMU_STOP;
	printf("Watchpoint change:In No.%d,[%s],(%d==>%d)\n",wp->NO,wp->expr_s,wp->val,new_result);
	wp->val=new_result;
	//sdb_mainloop(); //不用重新调用mainloop
  }
}

static void exec_once(Decode *s, vaddr_t pc) {
  s->pc = pc;
  s->snpc = pc;
  isa_exec_once(s);
  cpu.pc = s->dnpc;
#ifdef CONFIG_ITRACE

  char *p = s->logbuf;
  p += snprintf(p, sizeof(s->logbuf), FMT_WORD ":", s->pc);
  int ilen = s->snpc - s->pc;
  int i;
  uint8_t *inst = (uint8_t *)&s->isa.inst.val;
  for (i = ilen - 1; i >= 0; i --) {
    p += snprintf(p, 4, " %02x", inst[i]);
  }
  int ilen_max = MUXDEF(CONFIG_ISA_x86, 8, 4);
  int space_len = ilen_max - ilen;
  if (space_len < 0) space_len = 0;
  space_len = space_len * 3 + 1;
  memset(p, ' ', space_len);
  p += space_len;

#ifndef CONFIG_ISA_loongarch32r
  void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
  //printf("\n\nTEST=%ld\n\n",s->logbuf - p);
  disassemble(p, s->logbuf + sizeof(s->logbuf) - p,
      MUXDEF(CONFIG_ISA_x86, s->snpc, s->pc), (uint8_t *)&s->isa.inst.val, ilen);
  insert_buffer(pc,p);//pa2.2:新增trace
#else
  p[0] = '\0'; // the upstream llvm does not support loongarch32r
#endif
#endif
}

static void execute(uint64_t n) {//如果传入很大的值n，for循环将执行n次
  Decode s;
  for (;n > 0; n --) { 
    exec_once(&s, cpu.pc);
    g_nr_guest_inst ++; //记录客户指令的计数器
    //trace_and_difftest(&s, cpu.pc);
	single_inst_debug(&s, cpu.pc);
    if (nemu_state.state != NEMU_RUNNING) break;
    IFDEF(CONFIG_DEVICE, device_update());
  }
}

static void statistic() {
  IFNDEF(CONFIG_TARGET_AM, setlocale(LC_NUMERIC, ""));
#define NUMBERIC_FMT MUXDEF(CONFIG_TARGET_AM, "%", "%'") PRIu64
  Log("host time spent = " NUMBERIC_FMT " us", g_timer);
  Log("total guest instructions = " NUMBERIC_FMT, g_nr_guest_inst);
  if (g_timer > 0) Log("simulation frequency = " NUMBERIC_FMT " inst/s", g_nr_guest_inst * 1000000 / g_timer);
  else Log("Finish running in less than 1 us and can not calculate the simulation frequency");
}

void assert_fail_msg() {
  isa_reg_display();
  statistic();
}

/* Simulate how the CPU works. */
void cpu_exec(uint64_t n) {//如果赋值为-1，会下溢到uint64_t的max值，使得g_print_step为假，execute传入一个很大的值
#ifdef CONFIG_ITRACE
  init_buffer();//pa2.2:缓冲区初始化
#endif
#ifdef CONFIG_MTRACE
  init_mem_buffer();
#endif
  g_print_step = (n < MAX_INST_TO_PRINT);
  switch (nemu_state.state) {
    case NEMU_END: case NEMU_ABORT:
      printf("Program execution has ended. To restart the program, exit NEMU and run again.\n");
      return;
    default: nemu_state.state = NEMU_RUNNING;
  }

  uint64_t timer_start = get_time();

  execute(n);

  uint64_t timer_end = get_time();
  g_timer += timer_end - timer_start;

  switch (nemu_state.state){
    case NEMU_RUNNING: nemu_state.state = NEMU_STOP; break;

    case NEMU_END: case NEMU_ABORT:

	  //if(nemu_state.halt_pc == 0){//HIT GOOD TRAP时，不输出
		#ifdef CONFIG_MTRACE_COND
	      disp_mem_buffer();
		#endif
		#ifdef CONFIG_ITRACE_COND
		  disp_buffer();//pa2.2:缓冲区输出
		#endif
	  //}

	  Log("nemu: %s at pc = " FMT_WORD,
          (nemu_state.state == NEMU_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) :
           (nemu_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :
            ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))),
          nemu_state.halt_pc);
      // fall through
    case NEMU_QUIT: statistic();
  }
}
