// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcpu__Syms.h"
#include "Vcpu___024unit.h"

extern "C" void halt(svBit is_halt);

VL_INLINE_OPT void Vcpu___024unit____Vdpiimwrap_halt_TOP____024unit(CData/*0:0*/ is_halt) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcpu___024unit____Vdpiimwrap_halt_TOP____024unit\n"); );
    // Body
    svBit is_halt__Vcvt;
    for (size_t is_halt__Vidx = 0; is_halt__Vidx < 1; ++is_halt__Vidx) is_halt__Vcvt = is_halt;
    halt(is_halt__Vcvt);
}

extern "C" void pmem_read(int raddr, int* rdata);

VL_INLINE_OPT void Vcpu___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ raddr, IData/*31:0*/ &rdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcpu___024unit____Vdpiimwrap_pmem_read_TOP____024unit\n"); );
    // Body
    int raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    int rdata__Vcvt;
    pmem_read(raddr__Vcvt, &rdata__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void pmem_write(int waddr, int wdata, char wmask);

VL_INLINE_OPT void Vcpu___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcpu___024unit____Vdpiimwrap_pmem_write_TOP____024unit\n"); );
    // Body
    int waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    int wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    pmem_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt);
}
