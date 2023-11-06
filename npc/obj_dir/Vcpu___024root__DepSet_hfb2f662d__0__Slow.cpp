// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcpu__Syms.h"
#include "Vcpu___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu___024root___dump_triggers__stl(Vcpu___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcpu___024root___eval_triggers__stl(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcpu___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

void Vcpu___024unit____Vdpiimwrap_halt_TOP____024unit(CData/*0:0*/ is_dead);

VL_ATTR_COLD void Vcpu___024root___stl_sequent__TOP__0(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->cpu__DOT__cu1__DOT__is_dead = (IData)((0U 
                                                   == 
                                                   (0x4000707fU 
                                                    & vlSelf->cmd)));
    Vcpu___024unit____Vdpiimwrap_halt_TOP____024unit(vlSelf->cpu__DOT__cu1__DOT__is_dead);
    vlSelf->cpu__DOT__pc1__DOT__result = ((IData)(4U) 
                                          + vlSelf->cpu__DOT__pc1__DOT__tmp_pc);
    vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__pair_list[2U] 
        = (0x50U | ((0x40000000U & vlSelf->cmd) ? 0xeU
                     : 0xdU));
    vlSelf->cpu__DOT__mux1__DOT__i0__DOT__pair_list[0U] 
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
    vlSelf->cpu__DOT__mux1__DOT__i0__DOT__data_list[0U] 
        = vlSelf->cpu__DOT__pc1__DOT__tmp_pc;
    if ((0U == (0x1fU & (vlSelf->cmd >> 0xfU)))) {
        vlSelf->cpu__DOT__src1 = 0U;
        vlSelf->cpu__DOT__mux1__DOT__i0__DOT__data_list[1U] = 0U;
    } else {
        vlSelf->cpu__DOT__src1 = vlSelf->cpu__DOT__rf1__DOT__rf
            [(0x1fU & (vlSelf->cmd >> 0xfU))];
        vlSelf->cpu__DOT__mux1__DOT__i0__DOT__data_list[1U] 
            = vlSelf->cpu__DOT__rf1__DOT__rf[(0x1fU 
                                              & (vlSelf->cmd 
                                                 >> 0xfU))];
    }
    if ((0U == (0x1fU & (vlSelf->cmd >> 0x14U)))) {
        vlSelf->cpu__DOT__mux2__DOT__i0__DOT__data_list[2U] = 0U;
        vlSelf->cpu__DOT__src2 = 0U;
    } else {
        vlSelf->cpu__DOT__mux2__DOT__i0__DOT__data_list[2U] 
            = vlSelf->cpu__DOT__rf1__DOT__rf[(0x1fU 
                                              & (vlSelf->cmd 
                                                 >> 0x14U))];
        vlSelf->cpu__DOT__src2 = vlSelf->cpu__DOT__rf1__DOT__rf
            [(0x1fU & (vlSelf->cmd >> 0x14U))];
    }
    vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list[2U] 
        = ((0x40000000U & vlSelf->cmd) ? 0xeU : 0xdU);
    if ((0x40000033U == (0x4000007fU & vlSelf->cmd))) {
        vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__pair_list[7U] = 1U;
        vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list[7U] = 1U;
    } else {
        vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__pair_list[7U] = 0U;
        vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list[7U] = 0U;
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
    vlSelf->cpu__DOT__dimm1__DOT__immI = (((- (IData)(
                                                      (vlSelf->cmd 
                                                       >> 0x1fU))) 
                                           << 0xcU) 
                                          | (vlSelf->cmd 
                                             >> 0x14U));
    vlSelf->cpu__DOT__cu1__DOT____VdfgTmp_hf442cbef__0 
        = ((0x13U == (0x7fU & vlSelf->cmd)) | (0x67U 
                                               == (0x7fU 
                                                   & vlSelf->cmd)));
    vlSelf->cpu__DOT__cu1__DOT____VdfgTmp_hd4cadad9__0 
        = ((0x17U == (0x7fU & vlSelf->cmd)) | (0x37U 
                                               == (0x7fU 
                                                   & vlSelf->cmd)));
    vlSelf->cpu__DOT__cu1__DOT____VdfgTmp_ha0272f88__0 
        = ((0x6fU == (0x7fU & vlSelf->cmd)) | (0x67U 
                                               == (0x7fU 
                                                   & vlSelf->cmd)));
    vlSelf->cpu__DOT__mux1__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(vlSelf->cpu__DOT__src1));
    vlSelf->cpu__DOT__mux2__DOT__i0__DOT__pair_list[2U] 
        = (QData)((IData)(vlSelf->cpu__DOT__src2));
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
    vlSelf->cpu__DOT__cu1__DOT__RI_sel = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__hit)
                                           ? (IData)(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__lut_out)
                                           : 0U);
    vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__pair_list[4U] 
        = (QData)((IData)(vlSelf->cpu__DOT__dimm1__DOT__immI));
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
                                                      | (3U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->cmd))))));
    vlSelf->cpu__DOT__op_ALU_sel = ((0x63U == (0x7fU 
                                               & vlSelf->cmd))
                                     ? ((IData)((0x6000U 
                                                 == 
                                                 (0x6000U 
                                                  & vlSelf->cmd)))
                                         ? 9U : ((1U 
                                                  & VL_REDXOR_16(
                                                                 (0x6000U 
                                                                  & vlSelf->cmd)))
                                                  ? 8U
                                                  : 1U))
                                     : (IData)(vlSelf->cpu__DOT__cu1__DOT__RI_sel));
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
    vlSelf->cpu__DOT__mux1__DOT__i0__DOT__hit = ((IData)(vlSelf->cpu__DOT__op_ALU_Asrc) 
                                                 == 
                                                 vlSelf->cpu__DOT__mux1__DOT__i0__DOT__key_list
                                                 [0U]);
    vlSelf->cpu__DOT__mux1__DOT__i0__DOT__hit = ((IData)(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__hit) 
                                                 | ((IData)(vlSelf->cpu__DOT__op_ALU_Asrc) 
                                                    == 
                                                    vlSelf->cpu__DOT__mux1__DOT__i0__DOT__key_list
                                                    [1U]));
    vlSelf->cpu__DOT__mux1__DOT__i0__DOT__lut_out = 
        ((- (IData)(((IData)(vlSelf->cpu__DOT__op_ALU_Asrc) 
                     == vlSelf->cpu__DOT__mux1__DOT__i0__DOT__key_list
                     [0U]))) & vlSelf->cpu__DOT__mux1__DOT__i0__DOT__data_list
         [0U]);
    vlSelf->cpu__DOT__mux1__DOT__i0__DOT__lut_out = 
        (vlSelf->cpu__DOT__mux1__DOT__i0__DOT__lut_out 
         | ((- (IData)(((IData)(vlSelf->cpu__DOT__op_ALU_Asrc) 
                        == vlSelf->cpu__DOT__mux1__DOT__i0__DOT__key_list
                        [1U]))) & vlSelf->cpu__DOT__mux1__DOT__i0__DOT__data_list
            [1U]));
    vlSelf->cpu__DOT__a = vlSelf->cpu__DOT__mux1__DOT__i0__DOT__lut_out;
    vlSelf->cpu__DOT__mux2__DOT__i0__DOT__pair_list[1U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->cpu__DOT__imm)));
    vlSelf->cpu__DOT__mux2__DOT__i0__DOT__data_list[1U] 
        = vlSelf->cpu__DOT__imm;
    vlSelf->cpu__DOT__mux2__DOT__i0__DOT__lut_out = 
        ((- (IData)(((IData)(vlSelf->cpu__DOT__op_ALU_Bsrc) 
                     == vlSelf->cpu__DOT__mux2__DOT__i0__DOT__key_list
                     [0U]))) & vlSelf->cpu__DOT__mux2__DOT__i0__DOT__data_list
         [0U]);
    vlSelf->cpu__DOT__mux2__DOT__i0__DOT__hit = ((IData)(vlSelf->cpu__DOT__op_ALU_Bsrc) 
                                                 == 
                                                 vlSelf->cpu__DOT__mux2__DOT__i0__DOT__key_list
                                                 [0U]);
    vlSelf->cpu__DOT__mux2__DOT__i0__DOT__lut_out = 
        (vlSelf->cpu__DOT__mux2__DOT__i0__DOT__lut_out 
         | ((- (IData)(((IData)(vlSelf->cpu__DOT__op_ALU_Bsrc) 
                        == vlSelf->cpu__DOT__mux2__DOT__i0__DOT__key_list
                        [1U]))) & vlSelf->cpu__DOT__mux2__DOT__i0__DOT__data_list
            [1U]));
    vlSelf->cpu__DOT__mux2__DOT__i0__DOT__hit = ((IData)(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__hit) 
                                                 | ((IData)(vlSelf->cpu__DOT__op_ALU_Bsrc) 
                                                    == 
                                                    vlSelf->cpu__DOT__mux2__DOT__i0__DOT__key_list
                                                    [1U]));
    vlSelf->cpu__DOT__mux2__DOT__i0__DOT__lut_out = 
        (vlSelf->cpu__DOT__mux2__DOT__i0__DOT__lut_out 
         | ((- (IData)(((IData)(vlSelf->cpu__DOT__op_ALU_Bsrc) 
                        == vlSelf->cpu__DOT__mux2__DOT__i0__DOT__key_list
                        [2U]))) & vlSelf->cpu__DOT__mux2__DOT__i0__DOT__data_list
            [2U]));
    vlSelf->cpu__DOT__mux2__DOT__i0__DOT__hit = ((IData)(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__hit) 
                                                 | ((IData)(vlSelf->cpu__DOT__op_ALU_Bsrc) 
                                                    == 
                                                    vlSelf->cpu__DOT__mux2__DOT__i0__DOT__key_list
                                                    [2U]));
    vlSelf->cpu__DOT__b = ((IData)(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__hit)
                            ? vlSelf->cpu__DOT__mux2__DOT__i0__DOT__lut_out
                            : vlSelf->cpu__DOT__src2);
    vlSelf->cpu__DOT__alu1__DOT__add1__DOT__add_cin 
        = ((vlSelf->cpu__DOT__b ^ (- (IData)((0U != (IData)(vlSelf->cpu__DOT__op_ALU_sel))))) 
           + (0U != (IData)(vlSelf->cpu__DOT__op_ALU_sel)));
    vlSelf->cpu__DOT__alu1__DOT__ADDER_result = (vlSelf->cpu__DOT__a 
                                                 + vlSelf->cpu__DOT__alu1__DOT__add1__DOT__add_cin);
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[0U] 
        = (vlSelf->cpu__DOT__a + vlSelf->cpu__DOT__alu1__DOT__add1__DOT__add_cin);
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[0U] 
        = (QData)((IData)(vlSelf->cpu__DOT__alu1__DOT__ADDER_result));
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->cpu__DOT__op_ALU_sel) 
                       == vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__op_ALU_sel) == 
           vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->cpu__DOT__src_rd = ((IData)(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__hit)
                                 ? vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__lut_out
                                 : 0U);
    VL_WRITEF("pc=%x\nrs1=%b\nrs2=%b\nrd=00001\nsel=%b\nop-imm=%b\na=%b\nb=%b\nsrc_rd=%b\n\n\n",
              32,vlSelf->cpu__DOT__pc1__DOT__tmp_pc,
              5,(0x1fU & (vlSelf->cmd >> 0xfU)),5,(0x1fU 
                                                   & (vlSelf->cmd 
                                                      >> 0x14U)),
              4,(IData)(vlSelf->cpu__DOT__op_ALU_sel),
              3,vlSelf->cpu__DOT__op_IMM,32,vlSelf->cpu__DOT__a,
              32,vlSelf->cpu__DOT__b,32,vlSelf->cpu__DOT__src_rd);
}
