// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VCPU__DPI_H_
#define VERILATED_VCPU__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/finalx/ysyx-workbench/npc/vsrc/ControlUnit.v:3:30
    extern void halt(svBit is_halt);
    // DPI import at /home/finalx/ysyx-workbench/npc/vsrc/PMEM.v:1:30
    extern void pmem_read(int raddr, int* rdata);
    // DPI import at /home/finalx/ysyx-workbench/npc/vsrc/PMEM.v:6:30
    extern void pmem_write(int waddr, int wdata, char wmask);

#ifdef __cplusplus
}
#endif

#endif  // guard
