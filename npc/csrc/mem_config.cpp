#include <memory/config.h>
#include <cpu/data.h>
#include <debug-print.h>

void mem_init(){
	#if defined(CONFIG_PMEM_MALLOC)
		pmem = (byte_t*)malloc(PMEM_SIZE);
		assert(pmem);
	#endif
	//Log("physical memory area [" FMT_VADDR ", " FMT_VADDR "]", PMEM_LEFT, PMEM_RIGHT);
}


static void out_of_bound(vaddr_t addr) {
	//panic("address = " FMT_VADDR " is out of bound of pmem [" FMT_VADDR ", " FMT_VADDR "] at pc = " FMT_WORD,addr, PMEM_LEFT, PMEM_RIGHT, pc_getter(TARGET_PC));
}


static uword_t pmem_read(vaddr_t addr, int size) {
	uword_t ret = inline_read(v_to_mem(addr), size);
	return ret;
}

//static void pmem_write(vaddr_t addr, int size, uword_t data) {
//}



byte_t* v_to_mem(vaddr_t addr){//虚拟转物理地址
	return pmem + (addr - PMEM_BASE_VADDR);
}

vaddr_t mem_to_v(byte_t* mem){
	return (mem - pmem) + PMEM_BASE_VADDR;
}

uword_t vaddr_read(vaddr_t addr,int size){
	if (likely(in_pmem(addr))){
		return pmem_read(addr,size);
	}
	out_of_bound(addr);
	return 0;
}


//void vaddr_write(vaddr_t addr, int size, uword_t data){
//}
