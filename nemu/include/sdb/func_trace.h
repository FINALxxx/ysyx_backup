#include<stdio.h>
#include<stdint.h>
#include<debug.h>
#include<elf.h>

typedef struct {
	char func_name[32];
	Elf32_Addr start;
	uint32_t size;
} FuncInfo;

Elf32_Ehdr* read_elf_header(FILE* fp);
void read_section(Elf32_Ehdr* elf_header,FILE* fp);
uint32_t get_symtab(FILE* fp,Elf32_Shdr* SH_symtab,Elf32_Sym* symtab);
void get_symtab_name(FILE* fp, Elf32_Sym* symtab,Elf32_Shdr* SH_strtab,uint32_t num_symtab_item);
void parse_elf(const char* elf_file);

/*
typedef struct funcNode{
	FuncInfo* func_src;//当前函数地址
	FuncInfo* func_dst;//目标函数地址
	int type;
	funcNode* nxt; 
} funcNode;
*/
