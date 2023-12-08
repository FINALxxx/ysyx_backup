// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
#include "Vcpu.h"
#include "Vcpu__Syms.h"
#include "verilated_dpi.h"


svBitVecVal Vcpu::cmd_getter() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root::cmd_getter\n"); );
    // Init
    IData/*31:0*/ cmd_getter__Vfuncrtn__Vcvt;
    cmd_getter__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("cmd_getter");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vcpu__Vcb_cmd_getter_t __Vcb = (Vcpu__Vcb_cmd_getter_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vcpu__Syms*)(__Vscopep->symsp()), cmd_getter__Vfuncrtn__Vcvt);
    svBitVecVal cmd_getter__Vfuncrtn[1];
    for (size_t cmd_getter__Vfuncrtn__Vidx = 0; cmd_getter__Vfuncrtn__Vidx < 1; ++cmd_getter__Vfuncrtn__Vidx) VL_SET_SVBV_I(32, cmd_getter__Vfuncrtn + 1 * cmd_getter__Vfuncrtn__Vidx, cmd_getter__Vfuncrtn__Vcvt);
    return cmd_getter__Vfuncrtn[0];
}
