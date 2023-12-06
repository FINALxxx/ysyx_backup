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
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
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
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[0U] = 0x77U;
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[1U] = 0x66U;
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[3U] = 0x44U;
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[4U] = 0x1aU;
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[5U] = 0x22U;
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[6U] = 0x11U;
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
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__pair_list[1U] = 0x11U;
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__pair_list[2U] = 0x77U;
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__pair_list[3U] = 0x66U;
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__pair_list[4U] = 0x44U;
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__pair_list[5U] = 0x3aU;
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__pair_list[6U] = 0x22U;
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__pair_list[7U] = 0U;
    vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__key_list[0U] = 3U;
    vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__key_list[1U] = 2U;
    vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__key_list[2U] = 4U;
    vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__key_list[3U] = 1U;
    vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__key_list[4U] = 0U;
    vlSelf->cpu__DOT__mux1__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->cpu__DOT__mux1__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelf->cpu__DOT__mux1__DOT__i0__DOT__data_list[1U] = 4U;
    vlSelf->cpu__DOT__mux1__DOT__i0__DOT__pair_list[1U] = 4ULL;
    vlSelf->cpu__DOT__mux2__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->cpu__DOT__mux2__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelf->cpu__DOT__mux3__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->cpu__DOT__mux3__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelf->cpu__DOT__mux4__DOT__i0__DOT__key_list[0U] = 2U;
    vlSelf->cpu__DOT__mux4__DOT__i0__DOT__key_list[1U] = 1U;
    vlSelf->cpu__DOT__mux4__DOT__i0__DOT__key_list[2U] = 0U;
    vlSelf->cpu__DOT__mux4__DOT__i0__DOT__data_list[0U] = 4U;
    vlSelf->cpu__DOT__mux4__DOT__i0__DOT__pair_list[0U] = 0x200000004ULL;
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
    vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__pair_list[1U] = 0xd9U;
    vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__pair_list[2U] = 0xcaU;
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
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__pair_list[0U] = 0x37U;
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__pair_list[1U] = 0x36U;
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__pair_list[2U] = 0x2fU;
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__pair_list[3U] = 0x26U;
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__pair_list[4U] = 0xfU;
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__pair_list[5U] = 0x16U;
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__pair_list[6U] = 0xdU;
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
                VL_FATAL_MT("cpu.v", 2, "", "Settle region did not converge.");
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

VL_ATTR_COLD void Vcpu___024root___stl_sequent__TOP__0(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ cpu__DOT__cu1__DOT____VdfgTmp_ha0272f88__0;
    cpu__DOT__cu1__DOT____VdfgTmp_ha0272f88__0 = 0;
    // Body
    vlSelf->pc = vlSelf->cpu__DOT__pc1__DOT__tmp_pc;
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__pair_list[0U] 
        = (0x50U | ((0x40000000U & vlSelf->cmd) ? 0xdU
                     : 5U));
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[2U] 
        = (0x50U | ((0x40000000U & vlSelf->cmd) ? 0xdU
                     : 5U));
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[7U] 
        = (0x40U | ((0x40000000U & vlSelf->cmd) ? 8U
                     : 0U));
    vlSelf->cpu__DOT__mux2__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(vlSelf->cpu__DOT__pc1__DOT__tmp_pc));
    vlSelf->cpu__DOT__mux3__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->cpu__DOT__pc1__DOT__tmp_pc)));
    vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__pair_list[0U] 
        = (0x300000000ULL | (QData)((IData)((((- (IData)(
                                                         (vlSelf->cmd 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | ((0x800U 
                                                 & (vlSelf->cmd 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->cmd 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->cmd 
                                                         >> 7U))))))));
    vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__pair_list[1U] 
        = (0x200000000ULL | (QData)((IData)((((- (IData)(
                                                         (vlSelf->cmd 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | ((0xfe0U 
                                                 & (vlSelf->cmd 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->cmd 
                                                      >> 7U)))))));
    vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__pair_list[2U] 
        = (0x400000000ULL | (QData)((IData)((((- (IData)(
                                                         (vlSelf->cmd 
                                                          >> 0x1fU))) 
                                              << 0x14U) 
                                             | ((0xff000U 
                                                 & vlSelf->cmd) 
                                                | ((0x800U 
                                                    & (vlSelf->cmd 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->cmd 
                                                         >> 0x14U))))))));
    vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__pair_list[3U] 
        = (0x100000000ULL | (QData)((IData)((0xfffff000U 
                                             & vlSelf->cmd))));
    vlSelf->cpu__DOT__mux2__DOT__i0__DOT__data_list[1U] 
        = vlSelf->cpu__DOT__pc1__DOT__tmp_pc;
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & (vlSelf->cmd >> 0xcU)) 
                       == vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__hit 
        = ((7U & (vlSelf->cmd >> 0xcU)) == vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->cmd >> 0xcU)) 
                          == vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->cmd >> 0xcU)) == vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->cmd >> 0xcU)) 
                          == vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->cmd >> 0xcU)) == vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->cmd >> 0xcU)) 
                          == vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->cmd >> 0xcU)) == vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->cmd >> 0xcU)) 
                          == vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->cmd >> 0xcU)) == vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->cmd >> 0xcU)) 
                          == vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->cmd >> 0xcU)) == vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->cmd >> 0xcU)) 
                          == vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->cmd >> 0xcU)) == vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->cpu__DOT__cu1__DOT__branch_tmp = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__hit)
                                               ? (IData)(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__lut_out)
                                               : 5U);
    if ((0x40000000U & vlSelf->cmd)) {
        vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list[0U] = 0xdU;
        vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[2U] = 0xdU;
        vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[7U] = 8U;
    } else {
        vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list[0U] = 5U;
        vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[2U] = 5U;
        vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[7U] = 0U;
    }
    vlSelf->cpu__DOT__mux3__DOT__i0__DOT__data_list[0U] 
        = vlSelf->cpu__DOT__pc1__DOT__tmp_pc;
    if ((0U == (0x1fU & (vlSelf->cmd >> 0xfU)))) {
        vlSelf->cpu__DOT__src1 = 0U;
        vlSelf->cpu__DOT__mux2__DOT__i0__DOT__data_list[0U] = 0U;
        vlSelf->cpu__DOT__mux3__DOT__i0__DOT__data_list[1U] = 0U;
    } else {
        vlSelf->cpu__DOT__src1 = vlSelf->cpu__DOT__rf1__DOT__rf
            [(0x1fU & (vlSelf->cmd >> 0xfU))];
        vlSelf->cpu__DOT__mux2__DOT__i0__DOT__data_list[0U] 
            = vlSelf->cpu__DOT__rf1__DOT__rf[(0x1fU 
                                              & (vlSelf->cmd 
                                                 >> 0xfU))];
        vlSelf->cpu__DOT__mux3__DOT__i0__DOT__data_list[1U] 
            = vlSelf->cpu__DOT__rf1__DOT__rf[(0x1fU 
                                              & (vlSelf->cmd 
                                                 >> 0xfU))];
    }
    if ((0U == (0x1fU & (vlSelf->cmd >> 0x14U)))) {
        vlSelf->cpu__DOT__mux4__DOT__i0__DOT__data_list[2U] = 0U;
        vlSelf->cpu__DOT__src2 = 0U;
    } else {
        vlSelf->cpu__DOT__mux4__DOT__i0__DOT__data_list[2U] 
            = vlSelf->cpu__DOT__rf1__DOT__rf[(0x1fU 
                                              & (vlSelf->cmd 
                                                 >> 0x14U))];
        vlSelf->cpu__DOT__src2 = vlSelf->cpu__DOT__rf1__DOT__rf
            [(0x1fU & (vlSelf->cmd >> 0x14U))];
    }
    vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list[0U] 
        = (((- (IData)((vlSelf->cmd >> 0x1fU))) << 0xcU) 
           | ((0x800U & (vlSelf->cmd << 4U)) | ((0x7e0U 
                                                 & (vlSelf->cmd 
                                                    >> 0x14U)) 
                                                | (0x1eU 
                                                   & (vlSelf->cmd 
                                                      >> 7U)))));
    vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list[1U] 
        = (((- (IData)((vlSelf->cmd >> 0x1fU))) << 0xcU) 
           | ((0xfe0U & (vlSelf->cmd >> 0x14U)) | (0x1fU 
                                                   & (vlSelf->cmd 
                                                      >> 7U))));
    vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list[2U] 
        = (((- (IData)((vlSelf->cmd >> 0x1fU))) << 0x14U) 
           | ((0xff000U & vlSelf->cmd) | ((0x800U & 
                                           (vlSelf->cmd 
                                            >> 9U)) 
                                          | (0x7feU 
                                             & (vlSelf->cmd 
                                                >> 0x14U)))));
    vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list[3U] 
        = (0xfffff000U & vlSelf->cmd);
    vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list[4U] 
        = (((- (IData)((vlSelf->cmd >> 0x1fU))) << 0xcU) 
           | (vlSelf->cmd >> 0x14U));
    vlSelf->cpu__DOT__cu1__DOT____VdfgTmp_hf442cbef__0 
        = ((0x13U == (0x7fU & vlSelf->cmd)) | (0x67U 
                                               == (0x7fU 
                                                   & vlSelf->cmd)));
    vlSelf->cpu__DOT__cu1__DOT____VdfgTmp_hd4cadad9__0 
        = ((0x17U == (0x7fU & vlSelf->cmd)) | (0x37U 
                                               == (0x7fU 
                                                   & vlSelf->cmd)));
    vlSelf->cpu__DOT__dimm1__DOT__immI = (((- (IData)(
                                                      (vlSelf->cmd 
                                                       >> 0x1fU))) 
                                           << 0xcU) 
                                          | (vlSelf->cmd 
                                             >> 0x14U));
    cpu__DOT__cu1__DOT____VdfgTmp_ha0272f88__0 = ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->cmd)) 
                                                  | (0x67U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->cmd)));
    vlSelf->cpu__DOT__mux2__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->cpu__DOT__src1)));
    vlSelf->cpu__DOT__mux3__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(vlSelf->cpu__DOT__src1));
    vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__pair_list[0U] 
        = (0xc0U | (IData)(vlSelf->cpu__DOT__cu1__DOT__branch_tmp));
    vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list[0U] 
        = vlSelf->cpu__DOT__cu1__DOT__branch_tmp;
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & (vlSelf->cmd >> 0xcU)) 
                       == vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__hit 
        = ((7U & (vlSelf->cmd >> 0xcU)) == vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->cmd >> 0xcU)) 
                          == vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->cmd >> 0xcU)) == vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->cmd >> 0xcU)) 
                          == vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->cmd >> 0xcU)) == vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->cmd >> 0xcU)) 
                          == vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->cmd >> 0xcU)) == vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->cmd >> 0xcU)) 
                          == vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->cmd >> 0xcU)) == vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->cmd >> 0xcU)) 
                          == vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->cmd >> 0xcU)) == vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->cmd >> 0xcU)) 
                          == vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->cmd >> 0xcU)) == vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->cmd >> 0xcU)) 
                          == vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->cmd >> 0xcU)) == vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->cpu__DOT__cu1__DOT__I_sel = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__hit)
                                          ? (IData)(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__lut_out)
                                          : 7U);
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & (vlSelf->cmd >> 0xcU)) 
                       == vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__hit 
        = ((7U & (vlSelf->cmd >> 0xcU)) == vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->cmd >> 0xcU)) 
                          == vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->cmd >> 0xcU)) == vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->cmd >> 0xcU)) 
                          == vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->cmd >> 0xcU)) == vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->cmd >> 0xcU)) 
                          == vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->cmd >> 0xcU)) == vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->cmd >> 0xcU)) 
                          == vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->cmd >> 0xcU)) == vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->cmd >> 0xcU)) 
                          == vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->cmd >> 0xcU)) == vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->cmd >> 0xcU)) 
                          == vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->cmd >> 0xcU)) == vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->cmd >> 0xcU)) 
                          == vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->cmd >> 0xcU)) == vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->cpu__DOT__cu1__DOT__R_sel = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__hit)
                                          ? (IData)(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__lut_out)
                                          : 7U);
    vlSelf->cpu__DOT__mux4__DOT__i0__DOT__pair_list[2U] 
        = (QData)((IData)(vlSelf->cpu__DOT__src2));
    vlSelf->cpu__DOT__op_IMM = (((IData)(vlSelf->cpu__DOT__cu1__DOT____VdfgTmp_hf442cbef__0) 
                                 | (3U == (0x7fU & vlSelf->cmd)))
                                 ? 0U : ((IData)(vlSelf->cpu__DOT__cu1__DOT____VdfgTmp_hd4cadad9__0)
                                          ? 1U : ((0x63U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->cmd))
                                                   ? 3U
                                                   : 
                                                  ((0x23U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->cmd))
                                                    ? 2U
                                                    : 
                                                   ((0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->cmd))
                                                     ? 4U
                                                     : 0U)))));
    vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__pair_list[4U] 
        = (QData)((IData)(vlSelf->cpu__DOT__dimm1__DOT__immI));
    vlSelf->cpu__DOT__op_ALU_Asrc = ((0x17U == (0x7fU 
                                                & vlSelf->cmd)) 
                                     | (IData)(cpu__DOT__cu1__DOT____VdfgTmp_ha0272f88__0));
    vlSelf->cpu__DOT__op_ALU_Bsrc = (((IData)(cpu__DOT__cu1__DOT____VdfgTmp_ha0272f88__0) 
                                      << 1U) | ((0x37U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->cmd)) 
                                                | ((0x17U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->cmd)) 
                                                   | ((0x13U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->cmd)) 
                                                      | ((3U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->cmd)) 
                                                         | (0x23U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->cmd)))))));
    vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x1fU & (vlSelf->cmd >> 2U)) 
                       == vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__hit 
        = ((0x1fU & (vlSelf->cmd >> 2U)) == vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x1fU & (vlSelf->cmd >> 2U)) 
                          == vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->cmd >> 2U)) == vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x1fU & (vlSelf->cmd >> 2U)) 
                          == vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->cmd >> 2U)) == vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->cpu__DOT__cu1__DOT__branch = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__hit)
                                           ? (IData)(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__lut_out)
                                           : 0U);
    vlSelf->cpu__DOT__op_ALU_sel = ((0x13U == (0x7fU 
                                               & vlSelf->cmd))
                                     ? (IData)(vlSelf->cpu__DOT__cu1__DOT__I_sel)
                                     : ((0x33U == (0x7fU 
                                                   & vlSelf->cmd))
                                         ? (IData)(vlSelf->cpu__DOT__cu1__DOT__R_sel)
                                         : 0U));
    vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->cpu__DOT__op_IMM) 
                       == vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__op_IMM) == vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->cpu__DOT__op_IMM) 
                          == vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->cpu__DOT__op_IMM) == 
              vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->cpu__DOT__op_IMM) 
                          == vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->cpu__DOT__op_IMM) == 
              vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->cpu__DOT__op_IMM) 
                          == vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->cpu__DOT__op_IMM) == 
              vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->cpu__DOT__op_IMM) 
                          == vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->cpu__DOT__op_IMM) == 
              vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->cpu__DOT__imm = ((IData)(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__hit)
                              ? vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__lut_out
                              : vlSelf->cpu__DOT__dimm1__DOT__immI);
    vlSelf->cpu__DOT__mux3__DOT__i0__DOT__hit = ((IData)(vlSelf->cpu__DOT__op_ALU_Asrc) 
                                                 == 
                                                 vlSelf->cpu__DOT__mux3__DOT__i0__DOT__key_list
                                                 [0U]);
    vlSelf->cpu__DOT__mux3__DOT__i0__DOT__hit = ((IData)(vlSelf->cpu__DOT__mux3__DOT__i0__DOT__hit) 
                                                 | ((IData)(vlSelf->cpu__DOT__op_ALU_Asrc) 
                                                    == 
                                                    vlSelf->cpu__DOT__mux3__DOT__i0__DOT__key_list
                                                    [1U]));
    vlSelf->cpu__DOT__mux3__DOT__i0__DOT__lut_out = 
        ((- (IData)(((IData)(vlSelf->cpu__DOT__op_ALU_Asrc) 
                     == vlSelf->cpu__DOT__mux3__DOT__i0__DOT__key_list
                     [0U]))) & vlSelf->cpu__DOT__mux3__DOT__i0__DOT__data_list
         [0U]);
    vlSelf->cpu__DOT__mux3__DOT__i0__DOT__lut_out = 
        (vlSelf->cpu__DOT__mux3__DOT__i0__DOT__lut_out 
         | ((- (IData)(((IData)(vlSelf->cpu__DOT__op_ALU_Asrc) 
                        == vlSelf->cpu__DOT__mux3__DOT__i0__DOT__key_list
                        [1U]))) & vlSelf->cpu__DOT__mux3__DOT__i0__DOT__data_list
            [1U]));
    vlSelf->cpu__DOT__a1 = vlSelf->cpu__DOT__mux3__DOT__i0__DOT__lut_out;
    vlSelf->cpu__DOT__cu1__DOT____VdfgTmp_h7f183419__0 
        = (IData)((2U == (6U & (IData)(vlSelf->cpu__DOT__cu1__DOT__branch))));
    vlSelf->cpu__DOT__alu1__DOT__shift1__DOT____Vcellinp__mux1____pinNumber2 
        = (((0xdU != (IData)(vlSelf->cpu__DOT__op_ALU_sel)) 
            << 1U) | (1U != (IData)(vlSelf->cpu__DOT__op_ALU_sel)));
    vlSelf->cpu__DOT__mux1__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->cpu__DOT__imm)));
    vlSelf->cpu__DOT__mux4__DOT__i0__DOT__pair_list[1U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->cpu__DOT__imm)));
    vlSelf->cpu__DOT__mux1__DOT__i0__DOT__data_list[0U] 
        = vlSelf->cpu__DOT__imm;
    vlSelf->cpu__DOT__mux4__DOT__i0__DOT__data_list[1U] 
        = vlSelf->cpu__DOT__imm;
    vlSelf->cpu__DOT__op_PC_Bsrc = ((~ (IData)(vlSelf->cpu__DOT__cu1__DOT__branch)) 
                                    & (IData)(vlSelf->cpu__DOT__cu1__DOT____VdfgTmp_h7f183419__0));
    vlSelf->cpu__DOT__mux4__DOT__i0__DOT__lut_out = 
        ((- (IData)(((IData)(vlSelf->cpu__DOT__op_ALU_Bsrc) 
                     == vlSelf->cpu__DOT__mux4__DOT__i0__DOT__key_list
                     [0U]))) & vlSelf->cpu__DOT__mux4__DOT__i0__DOT__data_list
         [0U]);
    vlSelf->cpu__DOT__mux4__DOT__i0__DOT__hit = ((IData)(vlSelf->cpu__DOT__op_ALU_Bsrc) 
                                                 == 
                                                 vlSelf->cpu__DOT__mux4__DOT__i0__DOT__key_list
                                                 [0U]);
    vlSelf->cpu__DOT__mux4__DOT__i0__DOT__lut_out = 
        (vlSelf->cpu__DOT__mux4__DOT__i0__DOT__lut_out 
         | ((- (IData)(((IData)(vlSelf->cpu__DOT__op_ALU_Bsrc) 
                        == vlSelf->cpu__DOT__mux4__DOT__i0__DOT__key_list
                        [1U]))) & vlSelf->cpu__DOT__mux4__DOT__i0__DOT__data_list
            [1U]));
    vlSelf->cpu__DOT__mux4__DOT__i0__DOT__hit = ((IData)(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__hit) 
                                                 | ((IData)(vlSelf->cpu__DOT__op_ALU_Bsrc) 
                                                    == 
                                                    vlSelf->cpu__DOT__mux4__DOT__i0__DOT__key_list
                                                    [1U]));
    vlSelf->cpu__DOT__mux4__DOT__i0__DOT__lut_out = 
        (vlSelf->cpu__DOT__mux4__DOT__i0__DOT__lut_out 
         | ((- (IData)(((IData)(vlSelf->cpu__DOT__op_ALU_Bsrc) 
                        == vlSelf->cpu__DOT__mux4__DOT__i0__DOT__key_list
                        [2U]))) & vlSelf->cpu__DOT__mux4__DOT__i0__DOT__data_list
            [2U]));
    vlSelf->cpu__DOT__mux4__DOT__i0__DOT__hit = ((IData)(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__hit) 
                                                 | ((IData)(vlSelf->cpu__DOT__op_ALU_Bsrc) 
                                                    == 
                                                    vlSelf->cpu__DOT__mux4__DOT__i0__DOT__key_list
                                                    [2U]));
    vlSelf->cpu__DOT__b1 = ((IData)(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__hit)
                             ? vlSelf->cpu__DOT__mux4__DOT__i0__DOT__lut_out
                             : vlSelf->cpu__DOT__src2);
    vlSelf->cpu__DOT__mux2__DOT__i0__DOT__hit = ((IData)(vlSelf->cpu__DOT__op_PC_Bsrc) 
                                                 == 
                                                 vlSelf->cpu__DOT__mux2__DOT__i0__DOT__key_list
                                                 [0U]);
    vlSelf->cpu__DOT__mux2__DOT__i0__DOT__hit = ((IData)(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__hit) 
                                                 | ((IData)(vlSelf->cpu__DOT__op_PC_Bsrc) 
                                                    == 
                                                    vlSelf->cpu__DOT__mux2__DOT__i0__DOT__key_list
                                                    [1U]));
    vlSelf->cpu__DOT__mux2__DOT__i0__DOT__lut_out = 
        ((- (IData)(((IData)(vlSelf->cpu__DOT__op_PC_Bsrc) 
                     == vlSelf->cpu__DOT__mux2__DOT__i0__DOT__key_list
                     [0U]))) & vlSelf->cpu__DOT__mux2__DOT__i0__DOT__data_list
         [0U]);
    vlSelf->cpu__DOT__mux2__DOT__i0__DOT__lut_out = 
        (vlSelf->cpu__DOT__mux2__DOT__i0__DOT__lut_out 
         | ((- (IData)(((IData)(vlSelf->cpu__DOT__op_PC_Bsrc) 
                        == vlSelf->cpu__DOT__mux2__DOT__i0__DOT__key_list
                        [1U]))) & vlSelf->cpu__DOT__mux2__DOT__i0__DOT__data_list
            [1U]));
    vlSelf->cpu__DOT__b0 = vlSelf->cpu__DOT__mux2__DOT__i0__DOT__lut_out;
    vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__pair_list[1U] 
        = (0x200000000ULL | (QData)((IData)(((0x1fU 
                                              >= vlSelf->cpu__DOT__b1)
                                              ? (vlSelf->cpu__DOT__a1 
                                                 << vlSelf->cpu__DOT__b1)
                                              : 0U))));
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[4U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->cpu__DOT__b1)));
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[0U] 
        = (0x700000000ULL | (QData)((IData)((vlSelf->cpu__DOT__a1 
                                             & vlSelf->cpu__DOT__b1))));
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[1U] 
        = (0x600000000ULL | (QData)((IData)((vlSelf->cpu__DOT__a1 
                                             | vlSelf->cpu__DOT__b1))));
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[3U] 
        = (0x400000000ULL | (QData)((IData)((vlSelf->cpu__DOT__a1 
                                             ^ vlSelf->cpu__DOT__b1))));
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[4U] 
        = vlSelf->cpu__DOT__b1;
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[0U] 
        = (vlSelf->cpu__DOT__a1 & vlSelf->cpu__DOT__b1);
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[1U] 
        = (vlSelf->cpu__DOT__a1 | vlSelf->cpu__DOT__b1);
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[3U] 
        = (vlSelf->cpu__DOT__a1 ^ vlSelf->cpu__DOT__b1);
    if ((0x1fU >= vlSelf->cpu__DOT__b1)) {
        vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__data_list[0U] 
            = (vlSelf->cpu__DOT__a1 >> vlSelf->cpu__DOT__b1);
        vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__data_list[1U] 
            = (vlSelf->cpu__DOT__a1 << vlSelf->cpu__DOT__b1);
        vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__data_list[2U] 
            = (vlSelf->cpu__DOT__a1 >> vlSelf->cpu__DOT__b1);
        vlSelf->cpu__DOT__alu1__DOT__shift1__DOT____Vcellinp__mux1____pinNumber3 
            = (vlSelf->cpu__DOT__a1 >> vlSelf->cpu__DOT__b1);
    } else {
        vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__data_list[0U] = 0U;
        vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__data_list[1U] = 0U;
        vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__data_list[2U] = 0U;
        vlSelf->cpu__DOT__alu1__DOT__shift1__DOT____Vcellinp__mux1____pinNumber3 = 0U;
    }
    vlSelf->cpu__DOT__alu1__DOT__add1__DOT__add_cin 
        = ((vlSelf->cpu__DOT__b1 ^ (- (IData)((0U != (IData)(vlSelf->cpu__DOT__op_ALU_sel))))) 
           + (0U != (IData)(vlSelf->cpu__DOT__op_ALU_sel)));
    vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__pair_list[0U] 
        = (QData)((IData)(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT____Vcellinp__mux1____pinNumber3));
    vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__pair_list[2U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT____Vcellinp__mux1____pinNumber3)));
    vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT____Vcellinp__mux1____pinNumber2) 
                       == vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT____Vcellinp__mux1____pinNumber2) 
           == vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT____Vcellinp__mux1____pinNumber2) 
                          == vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT____Vcellinp__mux1____pinNumber2) 
              == vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT____Vcellinp__mux1____pinNumber2) 
                          == vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT____Vcellinp__mux1____pinNumber2) 
              == vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->cpu__DOT__alu1__DOT__SHIFT_result = ((IData)(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__hit)
                                                  ? vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__lut_out
                                                  : vlSelf->cpu__DOT__alu1__DOT__shift1__DOT____Vcellinp__mux1____pinNumber3);
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[7U] 
        = (vlSelf->cpu__DOT__a1 + vlSelf->cpu__DOT__alu1__DOT__add1__DOT__add_cin);
    vlSelf->cpu__DOT__alu1__DOT__ADDER_result = (vlSelf->cpu__DOT__a1 
                                                 + vlSelf->cpu__DOT__alu1__DOT__add1__DOT__add_cin);
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[2U] 
        = (0x500000000ULL | (QData)((IData)(vlSelf->cpu__DOT__alu1__DOT__SHIFT_result)));
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[6U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->cpu__DOT__alu1__DOT__SHIFT_result)));
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[2U] 
        = vlSelf->cpu__DOT__alu1__DOT__SHIFT_result;
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[6U] 
        = vlSelf->cpu__DOT__alu1__DOT__SHIFT_result;
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[7U] 
        = (QData)((IData)(vlSelf->cpu__DOT__alu1__DOT__ADDER_result));
    vlSelf->cpu__DOT__LESS = (1U & ((2U != (IData)(vlSelf->cpu__DOT__op_ALU_sel))
                                     ? ((0U != (IData)(vlSelf->cpu__DOT__op_ALU_sel)) 
                                        ^ (IData)((1ULL 
                                                   & (((QData)((IData)(vlSelf->cpu__DOT__a1)) 
                                                       + (QData)((IData)(vlSelf->cpu__DOT__alu1__DOT__add1__DOT__add_cin))) 
                                                      >> 0x20U))))
                                     : ((((vlSelf->cpu__DOT__a1 
                                           >> 0x1fU) 
                                          == (vlSelf->cpu__DOT__alu1__DOT__add1__DOT__add_cin 
                                              >> 0x1fU)) 
                                         & ((vlSelf->cpu__DOT__a1 
                                             >> 0x1fU) 
                                            != (vlSelf->cpu__DOT__alu1__DOT__ADDER_result 
                                                >> 0x1fU))) 
                                        ^ (vlSelf->cpu__DOT__alu1__DOT__ADDER_result 
                                           >> 0x1fU))));
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[5U] 
        = (0x200000000ULL | (QData)((IData)(vlSelf->cpu__DOT__LESS)));
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[5U] 
        = vlSelf->cpu__DOT__LESS;
    vlSelf->cpu__DOT__op_PC_Asrc = (1U & ((IData)(vlSelf->cpu__DOT__cu1__DOT____VdfgTmp_h7f183419__0) 
                                          | (((0U != vlSelf->cpu__DOT__alu1__DOT__ADDER_result) 
                                              & (IData)(
                                                        (1U 
                                                         == 
                                                         (3U 
                                                          & (IData)(vlSelf->cpu__DOT__cu1__DOT__branch))))) 
                                             | (((IData)(vlSelf->cpu__DOT__LESS) 
                                                 & (IData)(
                                                           (2U 
                                                            == 
                                                            (3U 
                                                             & (IData)(vlSelf->cpu__DOT__cu1__DOT__branch))))) 
                                                | ((IData)(
                                                           (1U 
                                                            == 
                                                            (5U 
                                                             & (IData)(vlSelf->cpu__DOT__cu1__DOT__branch)))) 
                                                   | (((~ (IData)(
                                                                  (0U 
                                                                   != vlSelf->cpu__DOT__alu1__DOT__ADDER_result))) 
                                                       & (IData)(
                                                                 (4U 
                                                                  == (IData)(vlSelf->cpu__DOT__cu1__DOT__branch)))) 
                                                      | ((~ (IData)(vlSelf->cpu__DOT__LESS)) 
                                                         & (((IData)(vlSelf->cpu__DOT__cu1__DOT__branch) 
                                                             >> 1U) 
                                                            & (IData)(vlSelf->cpu__DOT__cu1__DOT__branch)))))))));
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & (IData)(vlSelf->cpu__DOT__op_ALU_sel)) 
                       == vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__hit 
        = ((7U & (IData)(vlSelf->cpu__DOT__op_ALU_sel)) 
           == vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & (IData)(vlSelf->cpu__DOT__op_ALU_sel)) 
                          == vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__hit) 
           | ((7U & (IData)(vlSelf->cpu__DOT__op_ALU_sel)) 
              == vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & (IData)(vlSelf->cpu__DOT__op_ALU_sel)) 
                          == vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__hit) 
           | ((7U & (IData)(vlSelf->cpu__DOT__op_ALU_sel)) 
              == vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & (IData)(vlSelf->cpu__DOT__op_ALU_sel)) 
                          == vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__hit) 
           | ((7U & (IData)(vlSelf->cpu__DOT__op_ALU_sel)) 
              == vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & (IData)(vlSelf->cpu__DOT__op_ALU_sel)) 
                          == vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__hit) 
           | ((7U & (IData)(vlSelf->cpu__DOT__op_ALU_sel)) 
              == vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & (IData)(vlSelf->cpu__DOT__op_ALU_sel)) 
                          == vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__hit) 
           | ((7U & (IData)(vlSelf->cpu__DOT__op_ALU_sel)) 
              == vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & (IData)(vlSelf->cpu__DOT__op_ALU_sel)) 
                          == vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__hit) 
           | ((7U & (IData)(vlSelf->cpu__DOT__op_ALU_sel)) 
              == vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & (IData)(vlSelf->cpu__DOT__op_ALU_sel)) 
                          == vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__hit) 
           | ((7U & (IData)(vlSelf->cpu__DOT__op_ALU_sel)) 
              == vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->cpu__DOT__src_rd = ((IData)(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__hit)
                                 ? vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__lut_out
                                 : 0U);
    vlSelf->cpu__DOT__mux1__DOT__i0__DOT__hit = ((IData)(vlSelf->cpu__DOT__op_PC_Asrc) 
                                                 == 
                                                 vlSelf->cpu__DOT__mux1__DOT__i0__DOT__key_list
                                                 [0U]);
    vlSelf->cpu__DOT__mux1__DOT__i0__DOT__hit = ((IData)(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__hit) 
                                                 | ((IData)(vlSelf->cpu__DOT__op_PC_Asrc) 
                                                    == 
                                                    vlSelf->cpu__DOT__mux1__DOT__i0__DOT__key_list
                                                    [1U]));
    vlSelf->cpu__DOT__mux1__DOT__i0__DOT__lut_out = 
        ((- (IData)(((IData)(vlSelf->cpu__DOT__op_PC_Asrc) 
                     == vlSelf->cpu__DOT__mux1__DOT__i0__DOT__key_list
                     [0U]))) & vlSelf->cpu__DOT__mux1__DOT__i0__DOT__data_list
         [0U]);
    vlSelf->cpu__DOT__mux1__DOT__i0__DOT__lut_out = 
        (vlSelf->cpu__DOT__mux1__DOT__i0__DOT__lut_out 
         | ((- (IData)(((IData)(vlSelf->cpu__DOT__op_PC_Asrc) 
                        == vlSelf->cpu__DOT__mux1__DOT__i0__DOT__key_list
                        [1U]))) & vlSelf->cpu__DOT__mux1__DOT__i0__DOT__data_list
            [1U]));
    vlSelf->cpu__DOT__a0 = vlSelf->cpu__DOT__mux1__DOT__i0__DOT__lut_out;
    vlSelf->cpu__DOT__pc1__DOT__result = (vlSelf->cpu__DOT__a0 
                                          + vlSelf->cpu__DOT__b0);
}

VL_ATTR_COLD void Vcpu___024root___eval_stl(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vcpu___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu___024root___dump_triggers__ico(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

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
    vlSelf->cmd = VL_RAND_RESET_I(32);
    vlSelf->pc = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__src1 = VL_RAND_RESET_I(32);
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
    vlSelf->cpu__DOT__cu1__DOT____VdfgTmp_h7f183419__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(4);
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(7);
    }
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
        vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(35);
    }
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
        vlSelf->cpu__DOT__mux1__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(33);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->cpu__DOT__mux1__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->cpu__DOT__mux1__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cpu__DOT__mux1__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__mux1__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->cpu__DOT__mux2__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(33);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->cpu__DOT__mux2__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->cpu__DOT__mux2__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cpu__DOT__mux2__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__mux2__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->cpu__DOT__mux3__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(33);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->cpu__DOT__mux3__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->cpu__DOT__mux3__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cpu__DOT__mux3__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__mux3__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->cpu__DOT__mux4__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->cpu__DOT__mux4__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->cpu__DOT__mux4__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cpu__DOT__mux4__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__mux4__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__pc1__DOT__tmp_pc = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__pc1__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__alu1__DOT__ADDER_result = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__alu1__DOT__SHIFT_result = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__alu1__DOT__add1__DOT__add_cin = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__alu1__DOT__shift1__DOT____Vcellinp__mux1____pinNumber3 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__alu1__DOT__shift1__DOT____Vcellinp__mux1____pinNumber2 = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
