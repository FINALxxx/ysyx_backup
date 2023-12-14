#include <non-isa.h>

NPCState npc_status = { .state = STOP };

int is_exit_status_bad() {
  int good = (npc_status.state == TERMINATE && npc_status.halt_ret == 0) || (npc_status.state == QUIT);
  return !good;
}
