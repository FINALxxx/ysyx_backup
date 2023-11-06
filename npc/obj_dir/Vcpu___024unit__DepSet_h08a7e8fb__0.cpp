// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcpu__Syms.h"
#include "Vcpu___024unit.h"

extern "C" void halt(int is_dead);

VL_INLINE_OPT void Vcpu___024unit____Vdpiimwrap_halt_TOP____024unit(IData/*31:0*/ is_dead) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcpu___024unit____Vdpiimwrap_halt_TOP____024unit\n"); );
    // Body
    int is_dead__Vcvt;
    for (size_t is_dead__Vidx = 0; is_dead__Vidx < 1; ++is_dead__Vidx) is_dead__Vcvt = is_dead;
    halt(is_dead__Vcvt);
}
