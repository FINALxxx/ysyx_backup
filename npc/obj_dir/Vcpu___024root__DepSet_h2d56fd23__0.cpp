// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "verilated.h"

#include "Vcpu___024root.h"

void Vcpu___024root___eval_act(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vcpu___024root___nba_sequent__TOP__0(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ cpu__DOT__mux3__DOT__i0__DOT__lut_out;
    cpu__DOT__mux3__DOT__i0__DOT__lut_out = 0;
    IData/*31:0*/ __Vdlyvval__cpu__DOT__rf1__DOT__rf__v0;
    __Vdlyvval__cpu__DOT__rf1__DOT__rf__v0 = 0;
    // Body
    __Vdlyvval__cpu__DOT__rf1__DOT__rf__v0 = vlSelf->cpu__DOT__src_rd;
    vlSelf->pc = ((IData)(vlSelf->rst) ? 0x80000000U
                   : vlSelf->dnpc);
    vlSelf->cpu__DOT__rf1__DOT__rf[0U] = __Vdlyvval__cpu__DOT__rf1__DOT__rf__v0;
    vlSelf->cpu__DOT__mux2__DOT__i0__DOT__data_list[0U] 
        = vlSelf->cpu__DOT__rf1__DOT__rf[1U];
    vlSelf->cpu__DOT__mux3__DOT__i0__DOT__data_list[1U] 
        = vlSelf->cpu__DOT__rf1__DOT__rf[1U];
    vlSelf->cpu__DOT__mux2__DOT__i0__DOT__data_list[1U] 
        = vlSelf->pc;
    vlSelf->cpu__DOT__mux3__DOT__i0__DOT__data_list[0U] 
        = vlSelf->pc;
    cpu__DOT__mux3__DOT__i0__DOT__lut_out = ((- (IData)(
                                                        vlSelf->cpu__DOT__mux3__DOT__i0__DOT__key_list
                                                        [0U])) 
                                             & vlSelf->cpu__DOT__mux3__DOT__i0__DOT__data_list
                                             [0U]);
    cpu__DOT__mux3__DOT__i0__DOT__lut_out = (cpu__DOT__mux3__DOT__i0__DOT__lut_out 
                                             | ((- (IData)(
                                                           vlSelf->cpu__DOT__mux3__DOT__i0__DOT__key_list
                                                           [1U])) 
                                                & vlSelf->cpu__DOT__mux3__DOT__i0__DOT__data_list
                                                [1U]));
    vlSelf->cpu__DOT__a1 = cpu__DOT__mux3__DOT__i0__DOT__lut_out;
}

VL_INLINE_OPT void Vcpu___024root___nba_sequent__TOP__1(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ cpu__DOT__op_PC_Asrc;
    cpu__DOT__op_PC_Asrc = 0;
    CData/*0:0*/ cpu__DOT__LESS;
    cpu__DOT__LESS = 0;
    IData/*31:0*/ cpu__DOT__a0;
    cpu__DOT__a0 = 0;
    IData/*31:0*/ cpu__DOT__b0;
    cpu__DOT__b0 = 0;
    IData/*31:0*/ cpu__DOT__mux1__DOT__i0__DOT__lut_out;
    cpu__DOT__mux1__DOT__i0__DOT__lut_out = 0;
    IData/*31:0*/ cpu__DOT__mux2__DOT__i0__DOT__lut_out;
    cpu__DOT__mux2__DOT__i0__DOT__lut_out = 0;
    IData/*31:0*/ cpu__DOT__alu1__DOT__ADDER_result;
    cpu__DOT__alu1__DOT__ADDER_result = 0;
    IData/*31:0*/ cpu__DOT__alu1__DOT__SHIFT_result;
    cpu__DOT__alu1__DOT__SHIFT_result = 0;
    IData/*31:0*/ cpu__DOT__alu1__DOT__shift1__DOT____Vcellinp__mux1____pinNumber3;
    cpu__DOT__alu1__DOT__shift1__DOT____Vcellinp__mux1____pinNumber3 = 0;
    IData/*31:0*/ cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__lut_out;
    cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__lut_out = 0;
    CData/*0:0*/ cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__hit;
    cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__hit = 0;
    IData/*31:0*/ cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__lut_out;
    cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__lut_out = 0;
    CData/*0:0*/ cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__hit;
    cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__hit = 0;
    // Body
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[0U] 
        = (vlSelf->cpu__DOT__a1 & vlSelf->cpu__DOT__b1);
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[1U] 
        = (vlSelf->cpu__DOT__a1 | vlSelf->cpu__DOT__b1);
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[3U] 
        = (vlSelf->cpu__DOT__a1 ^ vlSelf->cpu__DOT__b1);
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[7U] 
        = (vlSelf->cpu__DOT__a1 + vlSelf->cpu__DOT__b1);
    cpu__DOT__alu1__DOT__ADDER_result = (vlSelf->cpu__DOT__a1 
                                         + vlSelf->cpu__DOT__b1);
    cpu__DOT__LESS = (1U & (IData)((1ULL & (((QData)((IData)(vlSelf->cpu__DOT__a1)) 
                                             + (QData)((IData)(vlSelf->cpu__DOT__b1))) 
                                            >> 0x20U))));
    if ((0x1fU >= vlSelf->cpu__DOT__b1)) {
        cpu__DOT__alu1__DOT__shift1__DOT____Vcellinp__mux1____pinNumber3 
            = (vlSelf->cpu__DOT__a1 >> vlSelf->cpu__DOT__b1);
        vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__data_list[0U] 
            = (vlSelf->cpu__DOT__a1 >> vlSelf->cpu__DOT__b1);
        vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__data_list[1U] 
            = (vlSelf->cpu__DOT__a1 << vlSelf->cpu__DOT__b1);
        vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__data_list[2U] 
            = (vlSelf->cpu__DOT__a1 >> vlSelf->cpu__DOT__b1);
    } else {
        cpu__DOT__alu1__DOT__shift1__DOT____Vcellinp__mux1____pinNumber3 = 0U;
        vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__data_list[0U] = 0U;
        vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__data_list[1U] = 0U;
        vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__data_list[2U] = 0U;
    }
    cpu__DOT__mux2__DOT__i0__DOT__lut_out = ((- (IData)(
                                                        ((IData)(vlSelf->cpu__DOT__op_PC_Bsrc) 
                                                         == 
                                                         vlSelf->cpu__DOT__mux2__DOT__i0__DOT__key_list
                                                         [0U]))) 
                                             & vlSelf->cpu__DOT__mux2__DOT__i0__DOT__data_list
                                             [0U]);
    cpu__DOT__mux2__DOT__i0__DOT__lut_out = (cpu__DOT__mux2__DOT__i0__DOT__lut_out 
                                             | ((- (IData)(
                                                           ((IData)(vlSelf->cpu__DOT__op_PC_Bsrc) 
                                                            == 
                                                            vlSelf->cpu__DOT__mux2__DOT__i0__DOT__key_list
                                                            [1U]))) 
                                                & vlSelf->cpu__DOT__mux2__DOT__i0__DOT__data_list
                                                [1U]));
    cpu__DOT__b0 = cpu__DOT__mux2__DOT__i0__DOT__lut_out;
    cpu__DOT__op_PC_Asrc = (1U & ((IData)(vlSelf->cpu__DOT__cu1__DOT____VdfgTmp_h7f183419__0) 
                                  | (((0U != cpu__DOT__alu1__DOT__ADDER_result) 
                                      & (IData)((1U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->cpu__DOT__cu1__DOT__branch))))) 
                                     | (((IData)(cpu__DOT__LESS) 
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
                                                           != cpu__DOT__alu1__DOT__ADDER_result))) 
                                               & (IData)(
                                                         (4U 
                                                          == (IData)(vlSelf->cpu__DOT__cu1__DOT__branch)))) 
                                              | ((~ (IData)(cpu__DOT__LESS)) 
                                                 & (((IData)(vlSelf->cpu__DOT__cu1__DOT__branch) 
                                                     >> 1U) 
                                                    & (IData)(vlSelf->cpu__DOT__cu1__DOT__branch)))))))));
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[5U] 
        = cpu__DOT__LESS;
    cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__lut_out 
        = ((- (IData)((3U == vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__data_list
           [0U]);
    cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__hit 
        = (3U == vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__key_list
           [0U]);
    cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__lut_out 
        = (cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (IData)((3U == vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__data_list
              [1U]));
    cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__hit) 
           | (3U == vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__key_list
              [1U]));
    cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__lut_out 
        = (cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (IData)((3U == vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__data_list
              [2U]));
    cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__hit) 
           | (3U == vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__key_list
              [2U]));
    cpu__DOT__alu1__DOT__SHIFT_result = ((IData)(cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__hit)
                                          ? cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__lut_out
                                          : cpu__DOT__alu1__DOT__shift1__DOT____Vcellinp__mux1____pinNumber3);
    cpu__DOT__mux1__DOT__i0__DOT__lut_out = ((- (IData)(
                                                        ((IData)(cpu__DOT__op_PC_Asrc) 
                                                         == 
                                                         vlSelf->cpu__DOT__mux1__DOT__i0__DOT__key_list
                                                         [0U]))) 
                                             & vlSelf->cpu__DOT__mux1__DOT__i0__DOT__data_list
                                             [0U]);
    cpu__DOT__mux1__DOT__i0__DOT__lut_out = (cpu__DOT__mux1__DOT__i0__DOT__lut_out 
                                             | ((- (IData)(
                                                           ((IData)(cpu__DOT__op_PC_Asrc) 
                                                            == 
                                                            vlSelf->cpu__DOT__mux1__DOT__i0__DOT__key_list
                                                            [1U]))) 
                                                & vlSelf->cpu__DOT__mux1__DOT__i0__DOT__data_list
                                                [1U]));
    cpu__DOT__a0 = cpu__DOT__mux1__DOT__i0__DOT__lut_out;
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[2U] 
        = cpu__DOT__alu1__DOT__SHIFT_result;
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[6U] 
        = cpu__DOT__alu1__DOT__SHIFT_result;
    vlSelf->dnpc = (cpu__DOT__a0 + cpu__DOT__b0);
    cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__lut_out 
        = ((- (IData)((0U == vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list
           [0U]);
    cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__hit = 
        (0U == vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list
         [0U]);
    cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__lut_out 
        = (cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (IData)((0U == vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list
              [1U]));
    cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__hit = 
        ((IData)(cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__hit) 
         | (0U == vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list
            [1U]));
    cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__lut_out 
        = (cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (IData)((0U == vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list
              [2U]));
    cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__hit = 
        ((IData)(cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__hit) 
         | (0U == vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list
            [2U]));
    cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__lut_out 
        = (cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (IData)((0U == vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list
              [3U]));
    cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__hit = 
        ((IData)(cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__hit) 
         | (0U == vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list
            [3U]));
    cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__lut_out 
        = (cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (IData)((0U == vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list
              [4U]));
    cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__hit = 
        ((IData)(cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__hit) 
         | (0U == vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list
            [4U]));
    cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__lut_out 
        = (cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (IData)((0U == vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list
              [5U]));
    cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__hit = 
        ((IData)(cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__hit) 
         | (0U == vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list
            [5U]));
    cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__lut_out 
        = (cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (IData)((0U == vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list
              [6U]));
    cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__hit = 
        ((IData)(cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__hit) 
         | (0U == vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list
            [6U]));
    cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__lut_out 
        = (cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (IData)((0U == vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list
              [7U]));
    cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__hit = 
        ((IData)(cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__hit) 
         | (0U == vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list
            [7U]));
    vlSelf->cpu__DOT__src_rd = ((IData)(cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__hit)
                                 ? cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__lut_out
                                 : 0U);
}

void Vcpu___024root___eval_nba(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vcpu___024root___nba_sequent__TOP__0(vlSelf);
        Vcpu___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void Vcpu___024root___eval_triggers__act(Vcpu___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu___024root___dump_triggers__act(Vcpu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu___024root___dump_triggers__nba(Vcpu___024root* vlSelf);
#endif  // VL_DEBUG

void Vcpu___024root___eval(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vcpu___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vcpu___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/finalx/ysyx-workbench/npc/vsrc/cpu.v", 4, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vcpu___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vcpu___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/finalx/ysyx-workbench/npc/vsrc/cpu.v", 4, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vcpu___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vcpu___024root___eval_debug_assertions(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
