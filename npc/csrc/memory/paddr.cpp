#include <memory/host.h>
#include <memory/paddr.h>
#include <isa.h>


#ifdef CONFIG_PMEM_MALLOC
static byte_t *pmem = NULL;
#else // CONFIG_PMEM_GARRAY
static byte_t pmem[CONFIG_MSIZE] PG_ALIGN = {};
#endif

byte_t* paddr_to_ptr(paddr_t paddr){
	return pmem + (paddr - PMEM_LEFT);
}

paddr_t ptr_to_paddr(byte_t* ptr){
	return (ptr - pmem) + PMEM_LEFT;
}

static void out_pmem(paddr_t addr){
	Assert(0,"<MEMORY> addr = " FMT_PADDR "is out of bound of pmem [" FMT_PADDR "] at pc =" FMT_WORD, addr, PMEM_LEFT, PMEM_RIGHT, cpu_data.pc);
}



word_t paddr_read(paddr_t addr, int len){
	if(likely(in_pmem(addr))){
		return ptr_read(paddr_to_ptr(addr),len);
	}

	out_pmem(addr);

}

void paddr_write(paddr_t addr, int len, word_t data){
	if(likely(in_pmem(addr))){
		ptr_write(paddr_to_ptr(addr),len,data);
	}
	out_pmem(addr);
}


void mem_init(){
	#ifdef CONFIG_PMEM_MALLOC
	pmem = (byte_t*)malloc(CONFIG_MSIZE);
	assert(pmem);
	#endif
	//TODO:+LOG

}
