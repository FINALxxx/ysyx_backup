.PHONY:all sim clean

OBJ_DIR = obj_dir

CFILE = .cpp
HFILE = .h
VFILE = .v
WAVEFILE = wave.vcd

BINSRC ?=

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



all:
	@echo ${CSRC}
sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator -Wall --cc --exe -top-module ${VTOP} --build ${CSRC} ${VSRC} --trace -LDFLAGS "${LIBS}"
	make -C obj_dir -f ${TGS}.mk ${TGS}
	./obj_dir/${TGS} ${BINSRC}
	#gtkwave ./${WAVEFILE}

clean:
	rm obj_dir -rf

include ../Makefile
