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

void Vcpu___024unit____Vdpiimwrap_cmd_getter_TOP____024unit(IData/*31:0*/ pc_now, IData/*31:0*/ &cmd_getter__Vfuncrtn);
void Vcpu___024unit____Vdpiimwrap_halt_TOP____024unit(CData/*0:0*/ is_halt);

VL_ATTR_COLD void Vcpu___024root___stl_sequent__TOP__0(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->cpu__DOT__mux2__DOT__i0__DOT__data_list[1U] 
        = vlSelf->pc;
    vlSelf->cpu__DOT__mux3__DOT__i0__DOT__data_list[0U] 
        = vlSelf->pc;
    Vcpu___024unit____Vdpiimwrap_cmd_getter_TOP____024unit(vlSelf->pc, vlSelf->__Vfunc_cmd_getter__0__Vfuncout);
    vlSelf->cpu__DOT__cmd = vlSelf->__Vfunc_cmd_getter__0__Vfuncout;
    vlSelf->cpu__DOT__cu1__DOT__is_halt = (IData)((0x73U 
                                                   == 
                                                   (0x4000707fU 
                                                    & vlSelf->cpu__DOT__cmd)));
    Vcpu___024unit____Vdpiimwrap_halt_TOP____024unit(vlSelf->cpu__DOT__cu1__DOT__is_halt);
    if ((0U == (0x1fU & (vlSelf->cpu__DOT__cmd >> 0xfU)))) {
        vlSelf->cpu__DOT__mux2__DOT__i0__DOT__data_list[0U] = 0U;
        vlSelf->cpu__DOT__mux3__DOT__i0__DOT__data_list[1U] = 0U;
    } else {
        vlSelf->cpu__DOT__mux2__DOT__i0__DOT__data_list[0U] 
            = vlSelf->cpu__DOT__rf1__DOT__rf[(0x1fU 
                                              & (vlSelf->cpu__DOT__cmd 
                                                 >> 0xfU))];
        vlSelf->cpu__DOT__mux3__DOT__i0__DOT__data_list[1U] 
            = vlSelf->cpu__DOT__rf1__DOT__rf[(0x1fU 
                                              & (vlSelf->cpu__DOT__cmd 
                                                 >> 0xfU))];
    }
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & (vlSelf->cpu__DOT__cmd 
                              >> 0xcU)) == vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__hit 
        = ((7U & (vlSelf->cpu__DOT__cmd >> 0xcU)) == 
           vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->cpu__DOT__cmd 
                                 >> 0xcU)) == vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->cpu__DOT__cmd >> 0xcU)) 
              == vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->cpu__DOT__cmd 
                                 >> 0xcU)) == vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->cpu__DOT__cmd >> 0xcU)) 
              == vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->cpu__DOT__cmd 
                                 >> 0xcU)) == vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->cpu__DOT__cmd >> 0xcU)) 
              == vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->cpu__DOT__cmd 
                                 >> 0xcU)) == vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->cpu__DOT__cmd >> 0xcU)) 
              == vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->cpu__DOT__cmd 
                                 >> 0xcU)) == vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->cpu__DOT__cmd >> 0xcU)) 
              == vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->cpu__DOT__cmd 
                                 >> 0xcU)) == vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->cpu__DOT__cmd >> 0xcU)) 
              == vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->cpu__DOT__cu1__DOT__branch_tmp = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__hit)
                                               ? (IData)(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__lut_out)
                                               : 5U);
    if ((0x40000000U & vlSelf->cpu__DOT__cmd)) {
        vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list[0U] = 0xdU;
        vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[2U] = 0xdU;
        vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[7U] = 8U;
    } else {
        vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list[0U] = 5U;
        vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[2U] = 5U;
        vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[7U] = 0U;
    }
    if ((0U == (0x1fU & (vlSelf->cpu__DOT__cmd >> 0x14U)))) {
        vlSelf->cpu__DOT__src2 = 0U;
        vlSelf->cpu__DOT__mux4__DOT__i0__DOT__data_list[2U] = 0U;
    } else {
        vlSelf->cpu__DOT__src2 = vlSelf->cpu__DOT__rf1__DOT__rf
            [(0x1fU & (vlSelf->cpu__DOT__cmd >> 0x14U))];
        vlSelf->cpu__DOT__mux4__DOT__i0__DOT__data_list[2U] 
            = vlSelf->cpu__DOT__rf1__DOT__rf[(0x1fU 
                                              & (vlSelf->cpu__DOT__cmd 
                                                 >> 0x14U))];
    }
    vlSelf->cpu__DOT__dimm1__DOT__immI = (((- (IData)(
                                                      (vlSelf->cpu__DOT__cmd 
                                                       >> 0x1fU))) 
                                           << 0xcU) 
                                          | (vlSelf->cpu__DOT__cmd 
                                             >> 0x14U));
    vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list[0U] 
        = (((- (IData)((vlSelf->cpu__DOT__cmd >> 0x1fU))) 
            << 0xcU) | ((0x800U & (vlSelf->cpu__DOT__cmd 
                                   << 4U)) | ((0x7e0U 
                                               & (vlSelf->cpu__DOT__cmd 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->cpu__DOT__cmd 
                                                    >> 7U)))));
    vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list[1U] 
        = (((- (IData)((vlSelf->cpu__DOT__cmd >> 0x1fU))) 
            << 0xcU) | ((0xfe0U & (vlSelf->cpu__DOT__cmd 
                                   >> 0x14U)) | (0x1fU 
                                                 & (vlSelf->cpu__DOT__cmd 
                                                    >> 7U))));
    vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list[2U] 
        = (((- (IData)((vlSelf->cpu__DOT__cmd >> 0x1fU))) 
            << 0x14U) | ((0xff000U & vlSelf->cpu__DOT__cmd) 
                         | ((0x800U & (vlSelf->cpu__DOT__cmd 
                                       >> 9U)) | (0x7feU 
                                                  & (vlSelf->cpu__DOT__cmd 
                                                     >> 0x14U)))));
    vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list[3U] 
        = (0xfffff000U & vlSelf->cpu__DOT__cmd);
    vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list[4U] 
        = (((- (IData)((vlSelf->cpu__DOT__cmd >> 0x1fU))) 
            << 0xcU) | (vlSelf->cpu__DOT__cmd >> 0x14U));
    vlSelf->cpu__DOT__cu1__DOT____VdfgTmp_hf442cbef__0 
        = ((0x13U == (0x7fU & vlSelf->cpu__DOT__cmd)) 
           | (0x67U == (0x7fU & vlSelf->cpu__DOT__cmd)));
    vlSelf->cpu__DOT__cu1__DOT____VdfgTmp_hd4cadad9__0 
        = ((0x17U == (0x7fU & vlSelf->cpu__DOT__cmd)) 
           | (0x37U == (0x7fU & vlSelf->cpu__DOT__cmd)));
    vlSelf->cpu__DOT__cu1__DOT____VdfgTmp_ha0272f88__0 
        = ((0x6fU == (0x7fU & vlSelf->cpu__DOT__cmd)) 
           | (0x67U == (0x7fU & vlSelf->cpu__DOT__cmd)));
    vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list[0U] 
        = vlSelf->cpu__DOT__cu1__DOT__branch_tmp;
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & (vlSelf->cpu__DOT__cmd 
                              >> 0xcU)) == vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__hit 
        = ((7U & (vlSelf->cpu__DOT__cmd >> 0xcU)) == 
           vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->cpu__DOT__cmd 
                                 >> 0xcU)) == vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->cpu__DOT__cmd >> 0xcU)) 
              == vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->cpu__DOT__cmd 
                                 >> 0xcU)) == vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->cpu__DOT__cmd >> 0xcU)) 
              == vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->cpu__DOT__cmd 
                                 >> 0xcU)) == vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->cpu__DOT__cmd >> 0xcU)) 
              == vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->cpu__DOT__cmd 
                                 >> 0xcU)) == vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->cpu__DOT__cmd >> 0xcU)) 
              == vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->cpu__DOT__cmd 
                                 >> 0xcU)) == vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->cpu__DOT__cmd >> 0xcU)) 
              == vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->cpu__DOT__cmd 
                                 >> 0xcU)) == vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->cpu__DOT__cmd >> 0xcU)) 
              == vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->cpu__DOT__cmd 
                                 >> 0xcU)) == vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->cpu__DOT__cmd >> 0xcU)) 
              == vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->cpu__DOT__cu1__DOT__I_sel = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__hit)
                                          ? (IData)(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__lut_out)
                                          : 7U);
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & (vlSelf->cpu__DOT__cmd 
                              >> 0xcU)) == vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__hit 
        = ((7U & (vlSelf->cpu__DOT__cmd >> 0xcU)) == 
           vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->cpu__DOT__cmd 
                                 >> 0xcU)) == vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->cpu__DOT__cmd >> 0xcU)) 
              == vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->cpu__DOT__cmd 
                                 >> 0xcU)) == vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->cpu__DOT__cmd >> 0xcU)) 
              == vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->cpu__DOT__cmd 
                                 >> 0xcU)) == vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->cpu__DOT__cmd >> 0xcU)) 
              == vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->cpu__DOT__cmd 
                                 >> 0xcU)) == vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->cpu__DOT__cmd >> 0xcU)) 
              == vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->cpu__DOT__cmd 
                                 >> 0xcU)) == vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->cpu__DOT__cmd >> 0xcU)) 
              == vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->cpu__DOT__cmd 
                                 >> 0xcU)) == vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->cpu__DOT__cmd >> 0xcU)) 
              == vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((7U & (vlSelf->cpu__DOT__cmd 
                                 >> 0xcU)) == vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__hit) 
           | ((7U & (vlSelf->cpu__DOT__cmd >> 0xcU)) 
              == vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->cpu__DOT__cu1__DOT__R_sel = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__hit)
                                          ? (IData)(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__lut_out)
                                          : 7U);
    vlSelf->cpu__DOT__op_IMM = (((IData)(vlSelf->cpu__DOT__cu1__DOT____VdfgTmp_hf442cbef__0) 
                                 | (3U == (0x7fU & vlSelf->cpu__DOT__cmd)))
                                 ? 0U : ((IData)(vlSelf->cpu__DOT__cu1__DOT____VdfgTmp_hd4cadad9__0)
                                          ? 1U : ((0x63U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->cpu__DOT__cmd))
                                                   ? 3U
                                                   : 
                                                  ((0x23U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->cpu__DOT__cmd))
                                                    ? 2U
                                                    : 
                                                   ((0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->cpu__DOT__cmd))
                                                     ? 4U
                                                     : 0U)))));
    vlSelf->cpu__DOT__op_ALU_Asrc = ((0x17U == (0x7fU 
                                                & vlSelf->cpu__DOT__cmd)) 
                                     | (IData)(vlSelf->cpu__DOT__cu1__DOT____VdfgTmp_ha0272f88__0));
    vlSelf->cpu__DOT__op_ALU_Bsrc = (((IData)(vlSelf->cpu__DOT__cu1__DOT____VdfgTmp_ha0272f88__0) 
                                      << 1U) | ((0x37U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->cpu__DOT__cmd)) 
                                                | ((0x17U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->cpu__DOT__cmd)) 
                                                   | ((0x13U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->cpu__DOT__cmd)) 
                                                      | ((3U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->cpu__DOT__cmd)) 
                                                         | (0x23U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->cpu__DOT__cmd)))))));
    vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x1fU & (vlSelf->cpu__DOT__cmd 
                                 >> 2U)) == vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__hit 
        = ((0x1fU & (vlSelf->cpu__DOT__cmd >> 2U)) 
           == vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x1fU & (vlSelf->cpu__DOT__cmd 
                                    >> 2U)) == vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->cpu__DOT__cmd >> 2U)) 
              == vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x1fU & (vlSelf->cpu__DOT__cmd 
                                    >> 2U)) == vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__hit) 
           | ((0x1fU & (vlSelf->cpu__DOT__cmd >> 2U)) 
              == vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->cpu__DOT__cu1__DOT__branch = ((IData)(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__hit)
                                           ? (IData)(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__lut_out)
                                           : 0U);
    vlSelf->cpu__DOT__op_ALU_sel = ((0x13U == (0x7fU 
                                               & vlSelf->cpu__DOT__cmd))
                                     ? (IData)(vlSelf->cpu__DOT__cu1__DOT__I_sel)
                                     : ((0x33U == (0x7fU 
                                                   & vlSelf->cpu__DOT__cmd))
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
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[4U] 
        = vlSelf->cpu__DOT__b1;
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[0U] 
        = (vlSelf->cpu__DOT__a1 & vlSelf->cpu__DOT__b1);
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[1U] 
        = (vlSelf->cpu__DOT__a1 | vlSelf->cpu__DOT__b1);
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[3U] 
        = (vlSelf->cpu__DOT__a1 ^ vlSelf->cpu__DOT__b1);
    if ((0x1fU >= vlSelf->cpu__DOT__b1)) {
        vlSelf->cpu__DOT__alu1__DOT__shift1__DOT____Vcellinp__mux1____pinNumber3 
            = (vlSelf->cpu__DOT__a1 >> vlSelf->cpu__DOT__b1);
        vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__data_list[0U] 
            = (vlSelf->cpu__DOT__a1 >> vlSelf->cpu__DOT__b1);
        vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__data_list[1U] 
            = (vlSelf->cpu__DOT__a1 << vlSelf->cpu__DOT__b1);
        vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__data_list[2U] 
            = (vlSelf->cpu__DOT__a1 >> vlSelf->cpu__DOT__b1);
    } else {
        vlSelf->cpu__DOT__alu1__DOT__shift1__DOT____Vcellinp__mux1____pinNumber3 = 0U;
        vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__data_list[0U] = 0U;
        vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__data_list[1U] = 0U;
        vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__data_list[2U] = 0U;
    }
    vlSelf->cpu__DOT__alu1__DOT__add1__DOT__add_cin 
        = ((vlSelf->cpu__DOT__b1 ^ (- (IData)((0U != (IData)(vlSelf->cpu__DOT__op_ALU_sel))))) 
           + (0U != (IData)(vlSelf->cpu__DOT__op_ALU_sel)));
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
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[2U] 
        = vlSelf->cpu__DOT__alu1__DOT__SHIFT_result;
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[6U] 
        = vlSelf->cpu__DOT__alu1__DOT__SHIFT_result;
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
    vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[5U] 
        = vlSelf->cpu__DOT__LESS;
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
    vlSelf->dnpc = (vlSelf->cpu__DOT__a0 + vlSelf->cpu__DOT__b0);
}
