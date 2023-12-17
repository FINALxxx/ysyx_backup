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
	Assert(0,"<MEMORY> addr = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR "," FMT_PADDR "] at pc = " FMT_WORD, addr, PMEM_LEFT, PMEM_RIGHT, cpu_data.pc);

}



word_t paddr_read(paddr_t addr, int len){
	if(likely(in_pmem(addr))){
		return ptr_read(paddr_to_ptr(addr),len);
	}

	out_pmem(addr);
	return 0;
}

void paddr_write(paddr_t addr, int len, word_t data){
	if(likely(in_pmem(addr))){
		ptr_write(paddr_to_ptr(addr),len,data);
		return;
	}
	out_pmem(addr);
}

extern "C" void pmem_read(int raddr, int *rdata) {
	// 总是读取地址为`raddr & ~0x3u`的4字节返回给`rdata`
	printf("PREAD:%x\n",raddr);
	*rdata = paddr_read(raddr & ~0x3u,4);
}
extern "C" void pmem_write(int waddr, int wdata, char wmask) {
	// 总是往地址为`waddr & ~0x3u`的4字节按写掩码`wmask`写入`wdata`
	// `wmask`中每比特表示`wdata`中1个字节的掩码,
	// 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
	printf("PWRITE:%x,%x,%x\n",waddr,wdata,wmask);
	if(wmask == 0x1) paddr_write((waddr & ~0x3u),1,wdata);
	else if(wmask == 0x3) paddr_write((waddr & ~0x3u),2,wdata);
	else paddr_write((waddr & ~0x3u),4,wdata);

}


void mem_init(){
	#ifdef CONFIG_PMEM_MALLOC
	pmem = (byte_t*)malloc(CONFIG_MSIZE);
	assert(pmem);
	#endif
	//TODO:+LOG

}
