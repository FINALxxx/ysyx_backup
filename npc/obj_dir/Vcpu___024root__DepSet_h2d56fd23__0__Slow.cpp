// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcpu___024root.h"

VL_ATTR_COLD void Vcpu___024root___eval_static(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vcpu___024root___eval_initial__TOP(Vcpu___024root* vlSelf);

VL_ATTR_COLD void Vcpu___024root___eval_initial(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_initial\n"); );
    // Body
    Vcpu___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vcpu___024root___eval_initial__TOP(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list[0U] = 7U;
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list[1U] = 6U;
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list[2U] = 5U;
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list[3U] = 4U;
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list[4U] = 1U;
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list[5U] = 2U;
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list[6U] = 1U;
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list[7U] = 4U;
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[0U] = 7U;
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[1U] = 6U;
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[3U] = 4U;
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[4U] = 0xaU;
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[5U] = 2U;
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[6U] = 1U;
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list[0U] = 5U;
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list[1U] = 1U;
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list[2U] = 7U;
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list[3U] = 6U;
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list[4U] = 4U;
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list[5U] = 3U;
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list[6U] = 2U;
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list[7U] = 0U;
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list[1U] = 1U;
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list[2U] = 7U;
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list[3U] = 6U;
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list[4U] = 4U;
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list[5U] = 0xaU;
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list[6U] = 2U;
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list[7U] = 0U;
    vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__key_list[0U] = 3U;
    vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__key_list[1U] = 2U;
    vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__key_list[2U] = 4U;
    vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__key_list[3U] = 1U;
    vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__key_list[4U] = 0U;
    vlSelf->cpu__DOT__mux1__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->cpu__DOT__mux1__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelf->cpu__DOT__mux1__DOT__i0__DOT__data_list[1U] = 4U;
    vlSelf->cpu__DOT__mux2__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->cpu__DOT__mux2__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelf->cpu__DOT__mux3__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->cpu__DOT__mux3__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelf->cpu__DOT__mux4__DOT__i0__DOT__key_list[0U] = 2U;
    vlSelf->cpu__DOT__mux4__DOT__i0__DOT__key_list[1U] = 1U;
    vlSelf->cpu__DOT__mux4__DOT__i0__DOT__key_list[2U] = 0U;
    vlSelf->cpu__DOT__mux4__DOT__i0__DOT__data_list[0U] = 4U;
    vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__key_list[0U] = 0U;
    vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__key_list[1U] = 2U;
    vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__key_list[2U] = 3U;
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list[0U] = 7U;
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list[1U] = 6U;
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list[2U] = 5U;
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list[3U] = 4U;
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list[4U] = 3U;
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list[5U] = 2U;
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list[6U] = 1U;
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list[7U] = 0U;
    vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list[0U] = 0x18U;
    vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list[1U] = 0x1bU;
    vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list[2U] = 0x19U;
    vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list[1U] = 1U;
    vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list[2U] = 2U;
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list[0U] = 6U;
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list[1U] = 6U;
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list[2U] = 5U;
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list[3U] = 4U;
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list[4U] = 1U;
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list[5U] = 2U;
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list[6U] = 1U;
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__data_list[0U] = 7U;
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__data_list[1U] = 6U;
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__data_list[2U] = 7U;
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__data_list[3U] = 6U;
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__data_list[4U] = 7U;
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__data_list[5U] = 6U;
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__data_list[6U] = 5U;
}

VL_ATTR_COLD void Vcpu___024root___eval_final(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vcpu___024root___eval_triggers__stl(Vcpu___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu___024root___dump_triggers__stl(Vcpu___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vcpu___024root___eval_stl(Vcpu___024root* vlSelf);

VL_ATTR_COLD void Vcpu___024root___eval_settle(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vcpu___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vcpu___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/finalx/ysyx-workbench/npc/vsrc/cpu.v", 4, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vcpu___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu___024root___dump_triggers__stl(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcpu___024root___stl_sequent__TOP__0(Vcpu___024root* vlSelf);

VL_ATTR_COLD void Vcpu___024root___eval_stl(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vcpu___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu___024root___dump_triggers__act(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu___024root___dump_triggers__nba(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcpu___024root___ctor_var_reset(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->pc = VL_RAND_RESET_I(32);
    vlSelf->dnpc = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__cmd = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__src2 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__src_rd = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__op_IMM = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT__op_ALU_Asrc = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__op_ALU_Bsrc = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__op_ALU_sel = VL_RAND_RESET_I(4);
    vlSelf->cpu__DOT__op_PC_Asrc = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__op_PC_Bsrc = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__LESS = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__a0 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__b0 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__a1 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__b1 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__cu1__DOT__R_sel = VL_RAND_RESET_I(4);
    vlSelf->cpu__DOT__cu1__DOT__I_sel = VL_RAND_RESET_I(4);
    vlSelf->cpu__DOT__cu1__DOT__branch = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT__cu1__DOT__branch_tmp = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT__cu1__DOT__is_halt = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__cu1__DOT____VdfgTmp_hf442cbef__0 = 0;
    vlSelf->cpu__DOT__cu1__DOT____VdfgTmp_hd4cadad9__0 = 0;
    vlSelf->cpu__DOT__cu1__DOT____VdfgTmp_ha0272f88__0 = 0;
    vlSelf->cpu__DOT__cu1__DOT____VdfgTmp_h7f183419__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(4);
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(4);
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__dimm1__DOT__immI = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->cpu__DOT__rf1__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->cpu__DOT__mux1__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->cpu__DOT__mux1__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cpu__DOT__mux1__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->cpu__DOT__mux2__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->cpu__DOT__mux2__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cpu__DOT__mux2__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->cpu__DOT__mux3__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->cpu__DOT__mux3__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cpu__DOT__mux3__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->cpu__DOT__mux4__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->cpu__DOT__mux4__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cpu__DOT__mux4__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__mux4__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__alu1__DOT__ADDER_result = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__alu1__DOT__SHIFT_result = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__alu1__DOT__add1__DOT__add_cin = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__alu1__DOT__shift1__DOT____Vcellinp__mux1____pinNumber3 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__alu1__DOT__shift1__DOT____Vcellinp__mux1____pinNumber2 = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cmd_getter__0__Vfuncout = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
}
