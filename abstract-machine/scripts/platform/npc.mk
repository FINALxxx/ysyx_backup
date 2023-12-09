AM_SRCS := riscv/npc/start.S \
           riscv/npc/trm.c \
           riscv/npc/ioe.c \
           riscv/npc/timer.c \
           riscv/npc/input.c \
           riscv/npc/cte.c \
           riscv/npc/trap.S \
           platform/dummy/vme.c \
           platform/dummy/mpe.c

CFLAGS    += -fdata-sections -ffunction-sections
LDFLAGS   += -T $(AM_HOME)/scripts/linker.ld \
						 --defsym=_pmem_start=0x80000000 --defsym=_entry_offset=0x0
LDFLAGS   += --gc-sections -e _start
CFLAGS += -DMAINARGS=\"$(mainargs)\"
.PHONY: $(AM_HOME)/am/src/riscv/npc/trm.c

image: $(IMAGE).elf
	@$(OBJDUMP) -d $(IMAGE).elf > $(IMAGE).txt
	@echo + OBJCOPY "->" $(IMAGE_REL).bin
	@$(OBJCOPY) -S --set-section-flags .bss=alloc,contents -O binary $(IMAGE).elf $(IMAGE).bin

SOSRC = ${NEMU_HOME}/build/riscv32-nemu-interpreter-so 

run: image
	#@echo TEST = ${SOSRC}
	#@echo cp ${IMAGE}.bin ${NPC_IMAGE}
	make -C ${NPC_HOME} -f Makefile BINSRC=${IMAGE}.bin ELFSRC=${IMAGE}.elf SOSRC=${SOSRC} sim

clean:
	make -C ${NPC_HOME} -f Makefile clean

all:
	#@echo ${BINARY}
	make -C ${NPC_HOME} -f Makefile all
