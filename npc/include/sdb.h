#ifndef __SDB_H__
#define __SDB_H__

#include <bits/stdc++.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "macro.h"
#include "sys_npc.h"
#include <assert.h>


extern bool is_batch_mode;

static int cmd_c(char *args);
static int cmd_q(char *args);
static int cmd_si(char* args);
static int cmd_info(char* args);
static int cmd_x(char* args);
static int cmd_p(char* args);
static int cmd_w(char* args);
static int cmd_d(char* args);
static int cmd_help(char *args);



static struct { 
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "\033[0m\033[1;32mhelp\033[0m", "Display information about all supported commands", cmd_help },
  { "\033[0m\033[1;32mc\033[0m", "Continue the execution of the program", cmd_c },
  { "\033[0m\033[1;32mq\033[0m", "Exit NEMU", cmd_q },
  { "\033[0m\033[1;32msi\033[0m", "single-step execution", cmd_si},
  { "\033[0m\033[1;32minfo\033[0m", "check the information of registers or watch points", cmd_info},
  { "\033[0m\033[1;32mx\033[0m", "visit the corresponding contents in memory", cmd_x },
  { "\033[0m\033[1;32mp\033[0m", "match the expr by regex", cmd_p},
  { "\033[0m\033[1;32mw\033[0m", "add a new watchpoint by using EXPR", cmd_w},
  { "\033[0m\033[1;32md\033[0m", "delete a working watchpoint by using NO", cmd_d},
};

#define NR_CMD ARRLEN(cmd_table)


static char* getarg();


void init_sdb();
void sdb_set_batch_mode(); 
void sdb_mainloop();

#endif
