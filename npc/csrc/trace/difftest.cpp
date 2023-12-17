#include <trace/isa-difftest.h>
#include <dlfcn.h>
#include <common.h>
#include <isa.h>
#include <cpu.h>
#include <memory/paddr.h>

void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;


static bool is_skip_ref = false;
static int skip_inst_cnt_dut = 0;

void difftest_skip_ref(){
	is_skip_ref = true;
	skip_inst_cnt_dut = 0;
}

void difftest_skip_dut(int inst_cnt_ref, int inst_cnt_dut) {
  skip_inst_cnt_dut += inst_cnt_dut;

  while (inst_cnt_ref -- > 0) {
    ref_difftest_exec(1);
  }
}


void difftest_init(const char* ref_so_file, long img_size, int port){
	printf(ANSI_FMT("READING",ANSI_FG_GREEN) ":%s\n", ref_so_file);
	Assert(ref_so_file,"<FILE> REF SO FILE DO NOT EXIST\n");

	void *handle;
	handle = dlopen(ref_so_file, RTLD_LAZY);
	assert(handle);

	ref_difftest_memcpy = (void(*)(paddr_t, void*, size_t, bool))dlsym(handle, "difftest_memcpy");
	assert(ref_difftest_memcpy);

	ref_difftest_regcpy = (void(*)(void*, bool))dlsym(handle, "difftest_regcpy");
	assert(ref_difftest_regcpy);

	ref_difftest_exec = (void(*)(uint64_t))dlsym(handle, "difftest_exec");
	assert(ref_difftest_exec);

	ref_difftest_raise_intr = (void(*)(uint64_t))dlsym(handle, "difftest_raise_intr");
	assert(ref_difftest_raise_intr);

	void (*ref_difftest_init)(int) = (void(*)(int))dlsym(handle, "difftest_init");
	assert(ref_difftest_init);
	
	Log("differential testing: %s\n", ANSI_FMT("ON", ANSI_FG_GREEN));
	ref_difftest_init(port);
	ref_difftest_memcpy(PMEM_RESET, paddr_to_ptr(PMEM_RESET), img_size, DIFFTEST_TO_REF);
	ref_difftest_regcpy(&cpu_data, DIFFTEST_TO_REF);
}

static void checkregs(CPU_state *cpu_data_ref, vaddr_t pc) {
  if (!difftest_checkregs(cpu_data_ref, pc)) {//difftest_checkreg放在了cpu.cpp中
    cpu_status.state = ABORT;
    cpu_status.halt_pc = pc;
    reg_display();
  }
}

void difftest_step(vaddr_t pc, vaddr_t npc) {
	CPU_state cpu_data_ref;

	if (skip_inst_cnt_dut > 0) {
		ref_difftest_regcpy(&cpu_data_ref, DIFFTEST_TO_DUT);//复制reg到dut的cpu_data（dut此处为npc）
		if (cpu_data_ref.pc == npc) {
			skip_inst_cnt_dut = 0;
			checkregs(&cpu_data_ref, npc);
			return;
		}
		skip_inst_cnt_dut --;
		if (skip_inst_cnt_dut == 0)
			panic("can not catch up with ref.pc = " FMT_WORD " at pc = " FMT_WORD, cpu_data_ref.pc, pc);
		return;
	}
	printf("TEST\n");
	if (is_skip_ref) {
		// to skip the checking of an instruction, just copy the reg state to reference design
		ref_difftest_regcpy(&cpu_data, DIFFTEST_TO_REF);//复制reg到cpu_data_ref
		is_skip_ref = false;
		return;
	}

	ref_difftest_exec(1);
	ref_difftest_regcpy(&cpu_data_ref, DIFFTEST_TO_DUT);

	checkregs(&cpu_data_ref, pc);
}


