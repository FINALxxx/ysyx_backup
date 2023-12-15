#include <common.h>
#include <sdb/watchpoint.h>
#include <sdb/expr.h>

static WP wp_pool[NR_WP] = {};//用static修饰可能是为了防止其他文件操作该变量
static WP *head = NULL, *free_ = NULL;//记得改回static

void wp_init() {
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
	
	sprintf(node->expr_s,"%s",expr_s);//DEBUG:不要直接赋值，会赋值成地址，expr_s是一个局部变量！！
	bool success=false;
	uint32_t val=expr(node->expr_s,&success);
	if(success) node->val=val;
	else Assert(0,"illegal expr!\n");
	node->next=head;
	head=node;
	//printf("LOG:In new_wp:%s,%d,%p\n",head->expr_s,head->val,head->expr_s);	
}


void free_wp(int NO){
	Assert(head!=NULL,"Watchpoint free exception:No watchpoint is working.\n");

	Assert(NO>=0,"Watchpoint free exception:Cannot find corresponding watchpoint.\n");

	WP* last=NULL;
	for(WP* it=head;it!=NULL;it=it->next){
		if(it->NO==NO){
			if(last==NULL) head=it->next;//说明要free第一个结点
			else last->next=it->next;

			it->next=free_;
			free_=it;
		}
		last=it;
	}

	
}


WP* check_wp(uint32_t* new_result){//返回产生变化的变量
	for(WP* it=head;it!=NULL;it=it->next){
		//printf("LOG\n");
		bool success=false;
		//printf("LOG:%s\n",head->expr);
		uint32_t result=expr(it->expr_s,&success);
		if(!success){ 
			Assert(0,"illegal expr!\n");
		}else if(result!=it->val) {
			*new_result=result;
			return it;//只返回第一个变化的结点，后续可以再改
		}
	}	
	//printf("LOG:In print_w:%p\n",head->expr_s);
	return NULL;
}

void print_w(){
	//printf("LOG:In print_w:%s,%d,%p\n",head->expr_s,head->val,head->expr_s);
	for(WP* it=head;it!=NULL;it=it->next){
		printf(ANSI_FMT(" watchpoint[%d]:%s\tnow = (DEC)%d\t (HEX)%x\n",ANSI_FG_BLUE),it->NO,it->expr_s,it->val,it->val);
	}
}
