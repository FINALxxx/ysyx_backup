#include <cpu/status.h>

void status_setter(int state, uint32_t pc, int halt_ret) {
  cpu_status.state = state;
  cpu_status.halt_pc = pc;
  cpu_status.halt_ret = halt_ret;
}

