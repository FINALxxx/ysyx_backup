#ifndef __CPU_DATA__
#define __CPU_DATA__

#define REG_NUM 32
#define TARGET_PC 0
#define TARGET_DNPC 1


typedef struct {
	uword_t gpr[REG_NUM];//由reg_setter更新，reg_getter取值
	vaddr_t pc;//由pc_setter更新，pc_getter取值
	vaddr_t nextpc;//由pc_setter更新，pc_getter取值
	uword_t inst;//由inst_setter更新，inst_getter取值
}CPU_state;

extern CPU_state cpu_data;

uword_t reg_getter(byte_t n);
void reg_setter();
void reg_display();
uword_t reg_str2val(const char *s, bool *success);

inline uword_t pc_getter(bool target);

//pc_setter会很耗时，之后想办法只在get时，才set，其余时候不用set
inline void pc_setter();//暂时使用cpu->pc，之后使用DPIC

inline uword_t inst_getter();
inline void inst_setter();


#endif
