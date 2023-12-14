#include <non-isa.h>

NPCState cpu_status = { .state = STOP };

int is_exit_status_bad() {
  int good = (cpu_status.state == TERMINATE && cpu_status.halt_ret == 0) || (cpu_status.state == QUIT);
  return !good;
}
