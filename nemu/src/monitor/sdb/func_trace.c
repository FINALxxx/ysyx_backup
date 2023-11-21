#include<sdb/func_trace.h>

FuncInfo* func[1024];

Elf32_Ehdr* read_elf_header(FILE* fp){
	char magic[EI_NIDENT];//检测MAGIC，判断是否是elf文件
	rewind(fp);
	Assert(fread(magic,1,EI_NIDENT,fp),"ERROR\n");
	if(magic[0]!=0x7f && magic[1]!=0x45 && magic[2]!=0x4c && magic[3]!=0x46) Assert(0,"ERROR:ELF file cannot be read!\n");
	rewind(fp);
	Elf32_Ehdr* elf_header=(Elf32_Ehdr*)malloc(sizeof(Elf32_Ehdr));
	Assert(fread(elf_header,sizeof(Elf32_Ehdr),1,fp),"ERROR\n");
	rewind(fp);
	return elf_header;
}

//section header table(SHT) = 多个section header(SH)的整体
//每个SH的大小都是一致的，均为e_shentsize

//起始位置：e_shoff
//结束位置：e_shoff + e_shnum * e_shentsize
//SH内是不记名的，它的sh_name属性是.shstrtab表(SHT字符串表)中的偏置


//程序的函数、变量等的信息存在.symtab表中，但它们也是不记名的，他们的name属性是.strtab(字符串表)中的偏置

void read_section(Elf32_Ehdr* elf_header,FILE* fp){
	Elf32_Off SHT_pos = elf_header->e_shoff;
	uint32_t SH_num = elf_header->e_shnum;
	uint32_t SH_size = elf_header->e_shentsize;

	//SH项shstrtab,在SHT中的索引,因此我们能快速找到.shstrtab
	uint32_t SH_shstrtab_index = elf_header->e_shstrndx;	
	
	//获取.shstrtab的SH项
	Elf32_Shdr* SH_shstrtab=(Elf32_Shdr*)malloc(sizeof(Elf32_Shdr));
;
	fseek(fp,SHT_pos + SH_shstrtab_index*SH_size,SEEK_SET);//定位.shstrtab的SH项
	Assert(fread(SH_shstrtab,sizeof(Elf32_Shdr),1,fp),"ERROR\n");
	
	//获取strsym的SH项
	Elf32_Sym* symtab=NULL;
	Elf32_Shdr* SH_search=NULL;
	uint32_t num_symtab_item=0;
	fseek(fp,SHT_pos,SEEK_SET);
	for(int i=0;i<SH_num;i++){//遍历整个SHT，找到SH项
		Assert(fread(SH_search,sizeof(Elf32_Shdr),1,fp),"ERROR\n");
		if(SH_search->sh_type == SHT_SYMTAB){
			//找到strsym的SH项
			num_symtab_item = get_symtab(fp,SH_search,symtab);
		}
	}
	rewind(fp);

	fseek(fp,SHT_pos,SEEK_SET);
	for(int i=0;i<SH_num;i++){//遍历整个SHT，找到SH项
		Assert(fread(SH_search,sizeof(Elf32_Shdr),1,fp),"ERROR\n");
		if(SH_search->sh_type==SHT_STRTAB && i != SH_shstrtab_index){//这里不排除动态STRTAB，之后再说
			//找到strtab的SH项
			get_symtab_name(fp,symtab,SH_search,num_symtab_item);
		}
	}
	rewind(fp);
}

uint32_t get_symtab(FILE* fp,Elf32_Shdr* SH_symtab,Elf32_Sym* symtab){//这里的symtab是回调
	rewind(fp);
	Elf32_Off offset = SH_symtab->sh_offset;
	uint32_t size_total = SH_symtab->sh_size;
	uint32_t size_per_item = SH_symtab->sh_entsize;
	fseek(fp,offset,SEEK_SET);
	symtab = (Elf32_Sym*) malloc(size_total);
	Assert(fread(symtab,size_total,1,fp),"ERROR\n");
	return size_total / size_per_item;//symtab表内的item个数
}

void get_symtab_name(FILE* fp,Elf32_Sym* symtab,Elf32_Shdr* SH_strtab,uint32_t num_symtab_item){//strtab不用单独保存，遍历symtab后，获取name偏置，直接访问对应地址即可获取名字
	rewind(fp);
	
	Elf32_Off offset = SH_strtab->sh_offset;
	fseek(fp,offset,SEEK_SET);
	uint32_t func_index=0;
	for(int i=0;i<num_symtab_item;i++){
		if(ELF32_ST_TYPE(symtab[i].st_info)!=STT_FUNC) continue;

		func[func_index]->start = symtab[i].st_value;
		func[func_index]->size = symtab[i].st_size;
		uint32_t name_offset = symtab[i].st_name;//到strtab中找
		fseek(fp,offset+name_offset,SEEK_SET);
		Assert(fscanf(fp, "%31s", func[func_index]->func_name)!=EOF,"ERROR\n");
		printf("offset = 0x%x, file offset = 0x%x\n", symtab[i].st_name, offset + symtab[i].st_name);
		func_index++;
	}
	rewind(fp);
	func[func_index]->func_name[0] = '\0';
}


void parse_elf(const char* elf_file){
	if (elf_file == NULL || strlen(elf_file) == 0) return;
	FILE *fp = fopen(elf_file, "rb");
	fseek(fp,0,SEEK_END);
	long long file_size = ftell(fp);
	printf("%lld\n",file_size);
	rewind(fp);
	char elf_data[file_size+10];
	memset(elf_data,0,sizeof(char));
	Assert(fread(elf_data,file_size,1,fp),"ERROR\n");
	printf("%s\n",elf_data);
}
