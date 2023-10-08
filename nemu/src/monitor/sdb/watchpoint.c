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
static WP *head = NULL, *free_ = NULL;

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
	if(free_==NULL) Assert(0,"Watchpoint new exception:Exceeded the avaliable capacity.\n");
	WP* node=free_;
	free_=free_->next;	
	node->expr=expr_s;
	node->next=head;
	head=node;

	bool success=true;
	uint32_t val=expr(expr_s,&success);
	if(success) node->val=val;
	else Assert(0,"illegal expr!\n");
	//printf("LOG:%s,%u\n",node->expr,node->val);	
}

void free_wp(int NO){
	if(head==NULL) Assert(0,"Watchpoint free exception:No watchpoint is working.\n");

	if(NO<0) Assert(0,"Watchpoint free exception:Cannot find corresponding watchpoint.\n");

	WP* last=NULL;
	for(WP* it=head;it->next!=NULL;it=it->next){
		if(it->NO==NO){
			if(last==NULL) head=it->next;//说明要free第一个结点
			else last->next=it->next;

			it->next=free_;
			free_=it;
		}
		last=it;
	}

	
}

WP* check(uint32_t* new_result){//返回产生变化的变量
	printf("LOG");
	for(WP* it=head;it!=NULL||it->next!=NULL;it=it->next){
		bool success=true;
		uint32_t result=expr(it->expr,&success);
		if(result!=it->val) {
			*new_result=result;
			return it;//只返回第一个变化的结点，后续可以再改
		}
	}
	return NULL;
}

void print_w(){
	for(WP* it=head;it->next!=NULL;it=it->next){
		printf("watchpoint[%d]:%s\tnow=%u\n",it->NO,it->expr,it->val);
	}

}
