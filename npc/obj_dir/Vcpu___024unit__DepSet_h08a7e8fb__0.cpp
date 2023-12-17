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
