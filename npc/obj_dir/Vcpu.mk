# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f Vcpu.mk

default: Vcpu

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /usr/local/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = Vcpu
# Module prefix (from --prefix)
VM_MODPREFIX = Vcpu
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-I/home/finalx/ysyx-workbench/npc/cinc  -g -w \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	-lreadline -lLLVM-14 -MMD \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	cpu \
	engine \
	init \
	paddr \
	vaddr \
	non-isa \
	expr \
	sdb \
	watchpoint \
	sim-npc \
	difftest \
	disasm \
	ftrace \
	itrace \
	log \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	/home/finalx/ysyx-workbench/npc/csrc \
	/home/finalx/ysyx-workbench/npc/csrc/memory \
	/home/finalx/ysyx-workbench/npc/csrc/sdb \
	/home/finalx/ysyx-workbench/npc/csrc/trace \


### Default rules...
# Include list of all generated classes
include Vcpu_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

cpu.o: /home/finalx/ysyx-workbench/npc/csrc/cpu.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
engine.o: /home/finalx/ysyx-workbench/npc/csrc/engine.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
init.o: /home/finalx/ysyx-workbench/npc/csrc/init.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
paddr.o: /home/finalx/ysyx-workbench/npc/csrc/memory/paddr.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
vaddr.o: /home/finalx/ysyx-workbench/npc/csrc/memory/vaddr.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
non-isa.o: /home/finalx/ysyx-workbench/npc/csrc/non-isa.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
expr.o: /home/finalx/ysyx-workbench/npc/csrc/sdb/expr.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
sdb.o: /home/finalx/ysyx-workbench/npc/csrc/sdb/sdb.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
watchpoint.o: /home/finalx/ysyx-workbench/npc/csrc/sdb/watchpoint.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
sim-npc.o: /home/finalx/ysyx-workbench/npc/csrc/sim-npc.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
difftest.o: /home/finalx/ysyx-workbench/npc/csrc/trace/difftest.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
disasm.o: /home/finalx/ysyx-workbench/npc/csrc/trace/disasm.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
ftrace.o: /home/finalx/ysyx-workbench/npc/csrc/trace/ftrace.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
itrace.o: /home/finalx/ysyx-workbench/npc/csrc/trace/itrace.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
log.o: /home/finalx/ysyx-workbench/npc/csrc/trace/log.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
Vcpu: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-
