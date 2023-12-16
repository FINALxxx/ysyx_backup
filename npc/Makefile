.PHONY:all sim clean

OBJ_DIR = obj_dir

CFILE = .cpp
HFILE = .h
VFILE = .v
WAVEFILE = wave.vcd

BINSRC ?=
LOGSRC = ${NPC_HOME}/npc-log.txt
ELFSRC ?=

#CSRC = $(wildcard *${CFILE})
#CSRC += $(wildcard include/*${CFILE})
#CSRC += $(wildcard include/**/*${CFILE})
#CSRC += $(wildcard include/**/*.h)
#VSRC = $(wildcard *${VFILE})

VSRC = $(shell find $(abspath ./vsrc) -name "*.v")
VINC = $(abspath ./vinc) 
CSRC = $(shell find $(abspath ./csrc) -name "*.cpp")
CINC += -I$(abspath ./cinc) 


VTOP = cpu
TGS = V${VTOP}

# START - 链接llvm
CXXSRC = csrc/trace/disasm.cpp
CXXFLAGS += $(shell llvm-config --cxxflags) -fPIE
LIBS += -lreadline
LIBS += $(shell llvm-config --libs)

$(OBJ_DIR)/%.o: %.cc
	@echo + CXX $<
	@mkdir -p $(dir $@)
	@$(CXX) $(CFLAGS) $(CXXFLAGS) -c -o $@ $<
	#$(call call_fixdep, $(@:.o=.d), $@)
# END



sim-all:
	@echo ${CSRC}
sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator --cc --exe -top-module ${VTOP} --build \
	-I${VINC} \
	-LDFLAGS "${LIBS} -MMD" \
	-CFLAGS "${CINC} -g" \
	${CSRC} ${VSRC}
	make -C obj_dir -f ${TGS}.mk ${TGS}
	./obj_dir/${TGS} ${BINSRC} ${LOGSRC} ${ELFSRC}
	#gtkwave ./${WAVEFILE}

sim-clean:
	@echo "remove <NPC>/obj_dir:"
	rm obj_dir -rf

include ../Makefile
