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

#include <sdb/sdb.h>
#include <sdb/watchpoint.h>
#include <sdb/expr.h>

#define NR_WP 32


static WP wp_pool[NR_WP] = {};//用static修饰可能是为了防止其他文件操作该变量
static WP *head = NULL, *free_ = NULL;//记得改回static

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;//指向已使用的wp
  free_ = wp_pool;//指向未使用的wp
}

/* TODO: Implement the functionality of watchpoint */

void new_wp(char* expr_s){//从wp_pool删掉空闲结点并返回
	WP* node=free_;
	free_=free_->next;
	
	head=node;
	head->expr_s=expr_s;	
}


WP* check_wp(uint32_t* new_result){//返回产生变化的变量
	return NULL;
}

void print_w(){
	printf("%s\n",head->expr_s);
}
