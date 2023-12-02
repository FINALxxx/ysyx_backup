// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VALU__Syms.h"
#include "VALU___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VALU___024root___dump_triggers__ico(VALU___024root* vlSelf);
#endif  // VL_DEBUG

void VALU___024root___eval_triggers__ico(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VALU___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void VALU___024unit____Vdpiimwrap_halt_TOP____024unit(CData/*0:0*/ is_dead);

VL_INLINE_OPT void VALU___024root___ico_sequent__TOP__0(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->cpu__DOT__cu1__DOT__is_dead = (IData)((0x73U 
                                                   == 
                                                   (0x4000707fU 
                                                    & vlSelf->cmd)));
    VALU___024unit____Vdpiimwrap_halt_TOP____024unit(vlSelf->cpu__DOT__cu1__DOT__is_dead);
    if ((0x67U == (0x7fU & vlSelf->cmd))) {
        vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__pair_list[7U] = 2U;
        vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list[7U] = 2U;
    } else {
        vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__pair_list[7U] = 4U;
        vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list[7U] = 4U;
    }
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[0U] 
        = (0x50U | ((0x40000000U & vlSelf->cmd) ? 0xdU
                     : 5U));
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__pair_list[2U] 
        = (0x50U | ((0x40000000U & vlSelf->cmd) ? 0xdU
                     : 5U));
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__pair_list[7U] 
        = (0x40U | ((0x40000000U & vlSelf->cmd) ? 8U
                     : 0U));
    vlSelf->cpu__DOT__pc1__DOT__reset = (1U & ((~ (IData)(
                                                          (0U 
                                                           != vlSelf->cpu__DOT__pc1__DOT__tmp_pc))) 
                                               | (IData)(vlSelf->rst)));
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
    if ((0x40000000U & vlSelf->cmd)) {
        vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[0U] = 0xdU;
        vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__data_list[2U] = 0xdU;
        vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__data_list[7U] = 8U;
    } else {
        vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[0U] = 5U;
        vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__data_list[2U] = 5U;
        vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__data_list[7U] = 0U;
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
    vlSelf->cpu__DOT__cu1__DOT____VdfgTmp_ha0272f88__0 
        = ((0x6fU == (0x7fU & vlSelf->cmd)) | (0x67U 
                                               == (0x7fU 
                                                   & vlSelf->cmd)));
    vlSelf->cpu__DOT__mux2__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->cpu__DOT__src1)));
    vlSelf->cpu__DOT__mux3__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(vlSelf->cpu__DOT__src1));
    vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & (vlSelf->cmd >> 0xcU)) 
                       == vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__hit 
        = ((7U & (vlSelf->cmd >> 0xcU)) == vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->cmd >> 0xcU)) 
                          == vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->cmd >> 0xcU)) == vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->cmd >> 0xcU)) 
                          == vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->cmd >> 0xcU)) == vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->cmd >> 0xcU)) 
                          == vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->cmd >> 0xcU)) == vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->cmd >> 0xcU)) 
                          == vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->cmd >> 0xcU)) == vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->cmd >> 0xcU)) 
                          == vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->cmd >> 0xcU)) == vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->cmd >> 0xcU)) 
                          == vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->cmd >> 0xcU)) == vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->cmd >> 0xcU)) 
                          == vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->cmd >> 0xcU)) == vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->cpu__DOT__cu1__DOT__branch = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__hit)
                                           ? (IData)(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__lut_out)
                                           : 1U);
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
    vlSelf->cpu__DOT__cu1__DOT__I_sel = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__hit)
                                          ? (IData)(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__lut_out)
                                          : 7U);
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
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->cmd >> 0xcU)) 
                          == vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->cmd >> 0xcU)) == vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->cpu__DOT__cu1__DOT__R_sel = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__hit)
                                          ? (IData)(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__lut_out)
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
                                     | (IData)(vlSelf->cpu__DOT__cu1__DOT____VdfgTmp_ha0272f88__0));
    vlSelf->cpu__DOT__op_ALU_Bsrc = (((IData)(vlSelf->cpu__DOT__cu1__DOT____VdfgTmp_ha0272f88__0) 
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
    vlSelf->cpu__DOT__cu1__DOT____VdfgTmp_h027e2431__0 
        = (IData)((2U == (3U & (IData)(vlSelf->cpu__DOT__cu1__DOT__branch))));
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
    vlSelf->cpu__DOT__op_PC_Bsrc = ((~ ((IData)(vlSelf->cpu__DOT__cu1__DOT__branch) 
                                        >> 2U)) & (IData)(vlSelf->cpu__DOT__cu1__DOT____VdfgTmp_h027e2431__0));
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

#ifdef VL_DEBUG
VL_ATTR_COLD void VALU___024root___dump_triggers__act(VALU___024root* vlSelf);
#endif  // VL_DEBUG

void VALU___024root___eval_triggers__act(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VALU___024root___dump_triggers__act(vlSelf);
    }
#endif
}
