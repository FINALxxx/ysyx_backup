// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VALU___024root.h"

void VALU___024root___ico_sequent__TOP__0(VALU___024root* vlSelf);

void VALU___024root___eval_ico(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VALU___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VALU___024root___eval_act(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_act\n"); );
}

VL_INLINE_OPT void VALU___024root___nba_sequent__TOP__0(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vdlyvval__cpu__DOT__rf1__DOT__rf__v0;
    __Vdlyvval__cpu__DOT__rf1__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__rf1__DOT__rf__v0;
    __Vdlyvset__cpu__DOT__rf1__DOT__rf__v0 = 0;
    // Body
    __Vdlyvset__cpu__DOT__rf1__DOT__rf__v0 = 0U;
    if (((IData)(vlSelf->cpu__DOT__cu1__DOT____VdfgTmp_hf442cbef__0) 
         | ((0x6fU == (0x7fU & vlSelf->cmd)) | ((3U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->cmd)) 
                                                | ((0x33U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->cmd)) 
                                                   | (IData)(vlSelf->cpu__DOT__cu1__DOT____VdfgTmp_hd4cadad9__0)))))) {
        __Vdlyvval__cpu__DOT__rf1__DOT__rf__v0 = vlSelf->cpu__DOT__src_rd;
        __Vdlyvset__cpu__DOT__rf1__DOT__rf__v0 = 1U;
    }
    vlSelf->cpu__DOT__pc1__DOT__tmp_pc = ((IData)(vlSelf->cpu__DOT__pc1__DOT__reset)
                                           ? 0x80000000U
                                           : vlSelf->cpu__DOT__pc1__DOT__result);
    if (__Vdlyvset__cpu__DOT__rf1__DOT__rf__v0) {
        vlSelf->cpu__DOT__rf1__DOT__rf[1U] = __Vdlyvval__cpu__DOT__rf1__DOT__rf__v0;
    }
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
    vlSelf->cpu__DOT__mux2__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(vlSelf->cpu__DOT__pc1__DOT__tmp_pc));
    vlSelf->cpu__DOT__mux3__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->cpu__DOT__pc1__DOT__tmp_pc)));
    vlSelf->cpu__DOT__pc1__DOT__reset = (1U & ((~ (IData)(
                                                          (0U 
                                                           != vlSelf->cpu__DOT__pc1__DOT__tmp_pc))) 
                                               | (IData)(vlSelf->rst)));
    vlSelf->cpu__DOT__mux2__DOT__i0__DOT__data_list[1U] 
        = vlSelf->cpu__DOT__pc1__DOT__tmp_pc;
    vlSelf->cpu__DOT__mux3__DOT__i0__DOT__data_list[0U] 
        = vlSelf->cpu__DOT__pc1__DOT__tmp_pc;
    vlSelf->cpu__DOT__mux2__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->cpu__DOT__src1)));
    vlSelf->cpu__DOT__mux3__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(vlSelf->cpu__DOT__src1));
    vlSelf->cpu__DOT__mux4__DOT__i0__DOT__pair_list[2U] 
        = (QData)((IData)(vlSelf->cpu__DOT__src2));
}

VL_INLINE_OPT void VALU___024root___nba_sequent__TOP__1(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___nba_sequent__TOP__1\n"); );
    // Body
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
    vlSelf->cpu__DOT__op_PC_Asrc = (1U & ((~ ((IData)(vlSelf->cpu__DOT__cu1__DOT__branch) 
                                              >> 2U)) 
                                          | (((0U != vlSelf->cpu__DOT__alu1__DOT__ADDER_result) 
                                              & (IData)(
                                                        (1U 
                                                         == 
                                                         (3U 
                                                          & (IData)(vlSelf->cpu__DOT__cu1__DOT__branch))))) 
                                             | (((IData)(vlSelf->cpu__DOT__LESS) 
                                                 & (IData)(vlSelf->cpu__DOT__cu1__DOT____VdfgTmp_h027e2431__0)) 
                                                | (((~ (IData)(
                                                               (0U 
                                                                != vlSelf->cpu__DOT__alu1__DOT__ADDER_result))) 
                                                    & (IData)(
                                                              (0U 
                                                               == 
                                                               (3U 
                                                                & (IData)(vlSelf->cpu__DOT__cu1__DOT__branch))))) 
                                                   | ((~ (IData)(vlSelf->cpu__DOT__LESS)) 
                                                      & (((IData)(vlSelf->cpu__DOT__cu1__DOT__branch) 
                                                          >> 1U) 
                                                         & (IData)(vlSelf->cpu__DOT__cu1__DOT__branch))))))));
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

void VALU___024root___eval_nba(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VALU___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        VALU___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void VALU___024root___eval_triggers__ico(VALU___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VALU___024root___dump_triggers__ico(VALU___024root* vlSelf);
#endif  // VL_DEBUG
void VALU___024root___eval_triggers__act(VALU___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VALU___024root___dump_triggers__act(VALU___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VALU___024root___dump_triggers__nba(VALU___024root* vlSelf);
#endif  // VL_DEBUG

void VALU___024root___eval(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        VALU___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VALU___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("cpu.v", 2, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VALU___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VALU___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VALU___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("cpu.v", 2, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VALU___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VALU___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("cpu.v", 2, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VALU___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VALU___024root___eval_debug_assertions(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
