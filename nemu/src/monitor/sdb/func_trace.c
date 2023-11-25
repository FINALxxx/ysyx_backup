#include<sdb/func_trace.h>
#include<elf.h>
#define MAXN 100 //最多MAXN个函数
#define MAXS 32 //最多MAXS层嵌套

func fs[MAXN];

void ftrace_init(FILE* fp){
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
			char func_name[32];
			Assert(fread(func_name,sizeof(char),32,fp),"fread Fail()\n");
			printf("%s\n",func_name);
		}
	}

}

void parse_elf(const char* fileName){
	FILE* fp = fopen(fileName,"r");
	ftrace_init(fp);
}
