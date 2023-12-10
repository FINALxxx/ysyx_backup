.PHONY:all sim clean

# START - 基本编译信息
OBJ_DIR = obj_dir

BINSRC ?=
ELFSRC ?=

VSRC = $(shell find $(abspath ./vsrc) -name "*.v")
VINC = $(abspath ./vinc) 
CSRC = $(shell find $(abspath ./csrc) -name "*.cpp")
CINC = $(abspath ./cinc) 

VTOP = cpu
TGS = V${VTOP}
# END



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
#LIBS +=ldl
#SOSRC ?=

# END





all:
	@echo ${VSRC}

sim:
	rm obj_dir -rf
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator -Wall --cc --exe \
	-top-module ${VTOP} \
	-I${VINC} \
	-CFLAGS "-I${CINC}" \
	-LDFLAGS "${LIBS}" \
	--build ${CSRC} ${VSRC}
	make -C obj_dir -f ${TGS}.mk ${TGS}
	#ldd ./obj_dir/${TGS}
	./obj_dir/${TGS} ${BINSRC} ${ELFSRC} 
	#gtkwave ./${WAVEFILE}

clean:
	@echo "remove <NPC>/obj_dir":
	rm obj_dir -rf

include ../Makefile
