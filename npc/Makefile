.PHONY:all sim clean

OBJ_DIR = obj_dir

CFILE = .cpp
HFILE = .h
VFILE = .v
WAVEFILE = wave.vcd

BINSRC ?=
ELFSRC ?=

CSRC = $(wildcard *${CFILE})
CSRC += $(wildcard include/*${CFILE})
#CSRC += $(wildcard include/**/*${CFILE})
#CSRC += $(wildcard include/**/*.h)

VSRC = $(wildcard *${VFILE})
VTOP = cpu
TGS = V${VTOP}




# START - 链接llvm
CXXSRC = include/sdb_disasm.cpp
CXXFLAGS += $(shell llvm-config --cxxflags) -fPIE
LIBS += -lreadline
LIBS += $(shell llvm-config --libs)

$(OBJ_DIR)/%.o: %.cc
	@echo + CXX $<
	@mkdir -p $(dir $@)
	@$(CXX) $(CFLAGS) $(CXXFLAGS) -c -o $@ $<
	#$(call call_fixdep, $(@:.o=.d), $@)
# END





# START - 链接NEMU difftest

# 已废弃的方式：使用头文件+编译时指定so库
# LIBS += -L${NEMU_HOME}/build -lriscv32-nemu-interpreter-so
# CFLAGS += -I${NEMU_HOME}/include -I${NEMU_HOME}/src/isa/riscv32/include

# nemu中的方式：使用dlopen+so库位置，直接打开so库
LIBS +=ldl
SOSRC ?=

# END





all:
	@echo ${CSRC}
sim:
	@echo LINK_LIBS = ${LIBS}
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator -Wall --cc --exe -top-module ${VTOP} --build ${CSRC} ${VSRC} --trace -LDFLAGS "${LIBS}"
	make -C obj_dir -f ${TGS}.mk ${TGS}
	ldd ./obj_dir/${TGS}
	./obj_dir/${TGS} ${BINSRC} ${ELFSRC} ${SOSRC}
	#gtkwave ./${WAVEFILE}

clean:
	@echo "remove <NPC>/obj_dir":
	rm obj_dir -rf

include ../Makefile
