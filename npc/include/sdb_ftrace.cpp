#include "sdb_ftrace.h"
#include "debug.h"
#include <elf.h>

#define MAXN 100 //最多MAXN个函数
#define MAXS 32 //最多MAXS层嵌套

func fs[MAXN];
uint32_t ptr=0;

//bool READFAIL=1;//默认读取失败，不要输出，除非真的读取到elf文件

void parse_elf(FILE* fp){
	rewind(fp);
	Elf32_Ehdr* elf_header = (Elf32_Ehdr*)malloc(sizeof(Elf32_Ehdr));
	Assert(fread(elf_header,sizeof(Elf32_Ehdr),1,fp),"fread() Fail\n");
	uint32_t shstrtab_index = elf_header->e_shstrndx;
	Elf32_Off SH_pos = elf_header->e_shoff;
	//uint32_t SH_item_size = elf_header->e_shentsize;
	uint32_t SH_item_num = elf_header->e_shnum;
	
	rewind(fp);
	fseek(fp,SH_pos,SEEK_SET);
	Elf32_Shdr* SH_symtab = (Elf32_Shdr*)malloc(sizeof(Elf32_Shdr));	
	for(int i=0;i<SH_item_num;i++){	
		Assert(fread(SH_symtab,sizeof(Elf32_Shdr),1,fp),"fread() Fail\n");
		if(SH_symtab->sh_type==SHT_SYMTAB) break;
	}
	Elf32_Off SYM_pos = SH_symtab->sh_offset;
	uint32_t SYM_item_size = SH_symtab->sh_entsize;
	uint32_t SYM_item_size_total = SH_symtab->sh_size;
	uint32_t SYM_item_num = SYM_item_size_total / SYM_item_size;
	fseek(fp,SYM_pos,SEEK_SET);
	Elf32_Sym* symtab = (Elf32_Sym*)malloc(SYM_item_size_total);
	Assert(fread(symtab,SYM_item_size_total,1,fp),"fread() Fail\n");



	rewind(fp);
	fseek(fp,SH_pos,SEEK_SET);
	Elf32_Shdr* SH_strtab = (Elf32_Shdr*)malloc(sizeof(Elf32_Shdr));	
	for (int i=0;i<SH_item_num;i++){	
		Assert(fread(SH_strtab,sizeof(Elf32_Shdr),1,fp),"fread() Fail\n");
		if(SH_strtab->sh_type==SHT_STRTAB && i!=shstrtab_index) break;
	}
	Elf32_Off STR_pos = SH_strtab->sh_offset;

	rewind(fp);
	for(int i=0;i<SYM_item_num;i++){
		//printf("%u\n",ELF32_ST_TYPE(symtab[i].st_info));
		if(ELF32_ST_TYPE(symtab[i].st_info) == STT_FUNC){
			uint32_t name_pos = symtab[i].st_name + STR_pos;
			fseek(fp,name_pos,SEEK_SET);
			//char func_name[32];
			Assert(fread(fs[ptr].func_name,sizeof(char),32,fp),"fread Fail()\n");
			fs[ptr].start = symtab[i].st_value;
			fs[ptr++].end = symtab[i].st_value + symtab[i].st_size;
		}
	}

}

static void fs_init(){
	ptr=0;
}

void elf_init(const char* fileName){
	fs_init();
	FILE* fp = fopen(fileName,"r");
	Assert(fp!=NULL,"ERROR:NO ELF FILE!\n");
	//READFAIL = 0;
	parse_elf(fp);
}


int32_t find_func(uint32_t pc){//注意，返回值是有符号的
	//printf("CPPTEST_FIND_PC=%x\n",pc);
	for(int i=0;i<ptr;i++){
		if(fs[i].start <= pc && pc <= fs[i].end) {
			return i;//返回func_idx
		}
	}
	return -1;
}

void elf_call(uint32_t pc_src,uint32_t pc_dst,uint32_t cmd){
	
	uint8_t Jflag = (cmd & 0x7F);
	//printf("CPPTEST=%x\n",Jflag);
	bool is_jal_or_jalr = (Jflag==0x6F || Jflag==0x67);
	if(!is_jal_or_jalr) return;
	
	bool is_ret = (cmd == 0x80008067);
	printf("%d===%x\n",is_ret,cmd);
	int32_t rst = find_func(pc_dst);
	char* flag=NULL;
	if(is_ret) flag="\tret";
	else flag="call";
		if(rst>=0) printf("%#010x:\t%s [%s@%#010x]\n\n",pc_src,flag,fs[rst].func_name,fs[rst].start);
		else printf("%#010x:\t%s [???@%#010x]\n\n",pc_src,flag,fs[rst].start);//找不到函数
}
