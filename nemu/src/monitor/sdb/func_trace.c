/*
#include<stdio.h>
#include<stdint.h>
#include<debug.h>

Elf32_Ehdr* read_elf_header(FILE* fp){
	char magic[EI_NIDENT];//检测MAGIC，判断是否是elf文件
	rewind(fp);
	fread(magic,1,EI_NIDENT,fp);
	if(magic[0]!=0x7f && magic[1]!=0x45 && magic[2]!=04c&& magic[3]!=0x46) Assert(0,"ERROR:ELF file cannot be read!\n");
	rewind(fp);
	Elf32_Ehdr* elf_header;
	fread(elf_header,sizeof(Elf32_Ehdr),1,fp);
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
	Elf32_Shdr* SH_shstrtab;
	fseek(fp,SHT_pos + SH_shstrtab_index*SH_size);//定位strtab的SH项
	fread(SH_shstrtab,sizeof(Elf32_Shdr),1,fp)
	
	//获取strsym的SH项
	Elf32_Sym* symtab;
	Elf32_Shdr* SH_search,;
	fseek(fp,SHT_pos,SEEK_SET);
	for(int i=0;i<SH_num;i++){//遍历整个SHT，找到symtab的SH项
		fread(SH_search,sizeof(Elf32_Shdr),1,fp);
		if(SH_search->sh_type == SHT_SYMTAB){
			//找到strsym的SH项
		}else if(SH_search->sh_type==SHT_STRTAB && ){

		}
	}
	
	return 0;
}*/
