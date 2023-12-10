.PHONY:all sim clean

OBJ_DIR = obj_dir

CFILE = .cpp
HFILE = .h
VFILE = .v
WAVEFILE = wave.vcd

BINSRC ?=
ELFSRC ?=
SOSRC ?=

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
LIBS += -L${NEMU_HOME}/build -lriscv32-nemu-interpreter-so.so

# END


all:
	@echo ${CSRC}
sim:
	@echo TEST = ${LIBS}
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator -Wall --cc --exe -top-module ${VTOP} --build ${CSRC} ${VSRC} --trace -LDFLAGS "${LIBS}"
	make -C obj_dir -f ${TGS}.mk ${TGS}
	ldd ./obj_dir/${TGS}
	./obj_dir/${TGS} ${BINSRC} ${ELFSRC}
	#gtkwave ./${WAVEFILE}

clean:
	@echo remove <NPC>/obj_dir:
	rm obj_dir -rf

include ../Makefile
