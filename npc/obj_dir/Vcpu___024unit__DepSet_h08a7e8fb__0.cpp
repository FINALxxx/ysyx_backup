// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcpu__Syms.h"
#include "Vcpu___024unit.h"

extern "C" svBitVecVal cmd_getter(const svBitVecVal* pc_now);

VL_INLINE_OPT void Vcpu___024unit____Vdpiimwrap_cmd_getter_TOP____024unit(IData/*31:0*/ pc_now, IData/*31:0*/ &cmd_getter__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcpu___024unit____Vdpiimwrap_cmd_getter_TOP____024unit\n"); );
    // Body
    svBitVecVal pc_now__Vcvt[1];
    for (size_t pc_now__Vidx = 0; pc_now__Vidx < 1; ++pc_now__Vidx) VL_SET_SVBV_I(32, pc_now__Vcvt + 1 * pc_now__Vidx, pc_now);
    svBitVecVal cmd_getter__Vfuncrtn__Vcvt[1];
    cmd_getter__Vfuncrtn__Vcvt[0] = cmd_getter(pc_now__Vcvt);
    cmd_getter__Vfuncrtn = VL_SET_I_SVBV(cmd_getter__Vfuncrtn__Vcvt);
}
