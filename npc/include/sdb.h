#ifndef __SDB_H__
#define __SDB_H__

#include <bits/stdc++.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "macro.h"
#include "sys_npc.h"
#include "debug.h"
#include "sdb_expr.h"
#include "sdb_watchpoint.h"


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
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si", "single-step execution", cmd_si},
  { "info", "check the information of registers or watch points", cmd_info},
  { "x", "visit the corresponding contents in memory", cmd_x },
  { "p", "match the expr by regex", cmd_p},
  { "w", "add a new watchpoint by using EXPR", cmd_w},
  { "d", "delete a working watchpoint by using NO", cmd_d},
};

#define NR_CMD ARRLEN(cmd_table)


static char* getarg();


void sdb_init();
void sdb_set_batch_mode(); 
void sdb_mainloop();

#endif
