// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu__Syms.h"


void Vcpu___024root__trace_chg_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_chg_top_0\n"); );
    // Init
    Vcpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu___024root*>(voidSelf);
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcpu___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vcpu___024root__trace_chg_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<3>/*95:0*/ __Vtemp_h27f5bc9c__0;
    VlWide<4>/*127:0*/ __Vtemp_h2a03d93b__0;
    VlWide<6>/*191:0*/ __Vtemp_hdace3dd2__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list[0]),4);
        bufp->chgCData(oldp+1,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+2,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+3,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+4,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+5,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list[4]),3);
        bufp->chgCData(oldp+6,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list[5]),3);
        bufp->chgCData(oldp+7,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list[6]),3);
        bufp->chgCData(oldp+8,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list[7]),3);
        bufp->chgCData(oldp+9,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+10,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+11,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+12,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+13,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__key_list[4]),3);
        bufp->chgBit(oldp+14,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+15,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__key_list[1]));
        bufp->chgCData(oldp+16,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+17,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+18,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__key_list[2]),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+19,(vlSelf->cpu__DOT__imm),32);
        bufp->chgCData(oldp+20,(vlSelf->cpu__DOT__op_IMM),3);
        bufp->chgBit(oldp+21,(vlSelf->cpu__DOT__op_ALU_Asrc));
        bufp->chgCData(oldp+22,(vlSelf->cpu__DOT__op_ALU_Bsrc),2);
        bufp->chgCData(oldp+23,(vlSelf->cpu__DOT__op_ALU_sel),4);
        bufp->chgBit(oldp+24,((0U != (IData)(vlSelf->cpu__DOT__op_ALU_sel))));
        bufp->chgCData(oldp+25,(vlSelf->cpu__DOT__cu1__DOT__RI_sel),4);
        bufp->chgCData(oldp+26,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__pair_list[0]),7);
        bufp->chgCData(oldp+27,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__pair_list[1]),7);
        bufp->chgCData(oldp+28,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__pair_list[2]),7);
        bufp->chgCData(oldp+29,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__pair_list[3]),7);
        bufp->chgCData(oldp+30,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__pair_list[4]),7);
        bufp->chgCData(oldp+31,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__pair_list[5]),7);
        bufp->chgCData(oldp+32,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__pair_list[6]),7);
        bufp->chgCData(oldp+33,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__pair_list[7]),7);
        bufp->chgCData(oldp+34,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list[0]),4);
        bufp->chgCData(oldp+35,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list[1]),4);
        bufp->chgCData(oldp+36,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list[2]),4);
        bufp->chgCData(oldp+37,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list[3]),4);
        bufp->chgCData(oldp+38,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list[4]),4);
        bufp->chgCData(oldp+39,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list[5]),4);
        bufp->chgCData(oldp+40,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list[6]),4);
        bufp->chgCData(oldp+41,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list[7]),4);
        bufp->chgCData(oldp+42,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__lut_out),4);
        bufp->chgBit(oldp+43,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+44,(vlSelf->cpu__DOT__dimm1__DOT__immI),32);
        bufp->chgQData(oldp+45,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__pair_list[0]),35);
        bufp->chgQData(oldp+47,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__pair_list[1]),35);
        bufp->chgQData(oldp+49,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__pair_list[2]),35);
        bufp->chgQData(oldp+51,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__pair_list[3]),35);
        bufp->chgQData(oldp+53,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__pair_list[4]),35);
        bufp->chgIData(oldp+55,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+56,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+57,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+58,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+59,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+60,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+61,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+62,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+63,(vlSelf->cpu__DOT__src1),32);
        bufp->chgIData(oldp+64,(vlSelf->cpu__DOT__src2),32);
        bufp->chgIData(oldp+65,(vlSelf->cpu__DOT__src_rd),32);
        bufp->chgIData(oldp+66,(vlSelf->cpu__DOT__a),32);
        bufp->chgIData(oldp+67,(vlSelf->cpu__DOT__b),32);
        bufp->chgBit(oldp+68,((1U & (~ (IData)((0U 
                                                != vlSelf->cpu__DOT__alu1__DOT__ADDER_result))))));
        bufp->chgBit(oldp+69,((((vlSelf->cpu__DOT__a 
                                 >> 0x1fU) == (vlSelf->cpu__DOT__alu1__DOT__add1__DOT__add_cin 
                                               >> 0x1fU)) 
                               & ((vlSelf->cpu__DOT__a 
                                   >> 0x1fU) != (vlSelf->cpu__DOT__alu1__DOT__ADDER_result 
                                                 >> 0x1fU)))));
        bufp->chgBit(oldp+70,((1U & (IData)((1ULL & 
                                             (((QData)((IData)(vlSelf->cpu__DOT__a)) 
                                               + (QData)((IData)(vlSelf->cpu__DOT__alu1__DOT__add1__DOT__add_cin))) 
                                              >> 0x20U))))));
        bufp->chgIData(oldp+71,(vlSelf->cpu__DOT__alu1__DOT__ADDER_result),32);
        bufp->chgIData(oldp+72,(vlSelf->cpu__DOT__alu1__DOT__add1__DOT__add_cin),32);
        bufp->chgQData(oldp+73,((QData)((IData)(vlSelf->cpu__DOT__alu1__DOT__ADDER_result))),36);
        bufp->chgQData(oldp+75,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[0]),36);
        bufp->chgIData(oldp+77,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+78,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+79,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__hit));
        __Vtemp_h27f5bc9c__0[0U] = (IData)((0x100000000ULL 
                                            | (QData)((IData)(vlSelf->cpu__DOT__pc1__DOT__tmp_pc))));
        __Vtemp_h27f5bc9c__0[1U] = ((vlSelf->cpu__DOT__src1 
                                     << 1U) | (IData)(
                                                      ((0x100000000ULL 
                                                        | (QData)((IData)(vlSelf->cpu__DOT__pc1__DOT__tmp_pc))) 
                                                       >> 0x20U)));
        __Vtemp_h27f5bc9c__0[2U] = (vlSelf->cpu__DOT__src1 
                                    >> 0x1fU);
        bufp->chgWData(oldp+80,(__Vtemp_h27f5bc9c__0),66);
        bufp->chgQData(oldp+83,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgQData(oldp+85,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgIData(oldp+87,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+88,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+89,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__lut_out),32);
        __Vtemp_h2a03d93b__0[0U] = 4U;
        __Vtemp_h2a03d93b__0[1U] = (2U | (vlSelf->cpu__DOT__imm 
                                          << 2U));
        __Vtemp_h2a03d93b__0[2U] = (4U | ((vlSelf->cpu__DOT__src2 
                                           << 4U) | 
                                          (vlSelf->cpu__DOT__imm 
                                           >> 0x1eU)));
        __Vtemp_h2a03d93b__0[3U] = (vlSelf->cpu__DOT__src2 
                                    >> 0x1cU);
        bufp->chgWData(oldp+90,(__Vtemp_h2a03d93b__0),102);
        bufp->chgQData(oldp+94,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgQData(oldp+96,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+98,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgIData(oldp+100,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+101,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+102,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+103,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+104,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+105,(vlSelf->cpu__DOT__pc1__DOT__tmp_pc),32);
        bufp->chgIData(oldp+106,(((IData)(4U) + vlSelf->cpu__DOT__pc1__DOT__tmp_pc)),32);
        bufp->chgIData(oldp+107,(vlSelf->cpu__DOT__rf1__DOT__rf[0]),32);
        bufp->chgIData(oldp+108,(vlSelf->cpu__DOT__rf1__DOT__rf[1]),32);
        bufp->chgIData(oldp+109,(vlSelf->cpu__DOT__rf1__DOT__rf[2]),32);
        bufp->chgIData(oldp+110,(vlSelf->cpu__DOT__rf1__DOT__rf[3]),32);
        bufp->chgIData(oldp+111,(vlSelf->cpu__DOT__rf1__DOT__rf[4]),32);
        bufp->chgIData(oldp+112,(vlSelf->cpu__DOT__rf1__DOT__rf[5]),32);
        bufp->chgIData(oldp+113,(vlSelf->cpu__DOT__rf1__DOT__rf[6]),32);
        bufp->chgIData(oldp+114,(vlSelf->cpu__DOT__rf1__DOT__rf[7]),32);
        bufp->chgIData(oldp+115,(vlSelf->cpu__DOT__rf1__DOT__rf[8]),32);
        bufp->chgIData(oldp+116,(vlSelf->cpu__DOT__rf1__DOT__rf[9]),32);
        bufp->chgIData(oldp+117,(vlSelf->cpu__DOT__rf1__DOT__rf[10]),32);
        bufp->chgIData(oldp+118,(vlSelf->cpu__DOT__rf1__DOT__rf[11]),32);
        bufp->chgIData(oldp+119,(vlSelf->cpu__DOT__rf1__DOT__rf[12]),32);
        bufp->chgIData(oldp+120,(vlSelf->cpu__DOT__rf1__DOT__rf[13]),32);
        bufp->chgIData(oldp+121,(vlSelf->cpu__DOT__rf1__DOT__rf[14]),32);
        bufp->chgIData(oldp+122,(vlSelf->cpu__DOT__rf1__DOT__rf[15]),32);
        bufp->chgIData(oldp+123,(vlSelf->cpu__DOT__rf1__DOT__rf[16]),32);
        bufp->chgIData(oldp+124,(vlSelf->cpu__DOT__rf1__DOT__rf[17]),32);
        bufp->chgIData(oldp+125,(vlSelf->cpu__DOT__rf1__DOT__rf[18]),32);
        bufp->chgIData(oldp+126,(vlSelf->cpu__DOT__rf1__DOT__rf[19]),32);
        bufp->chgIData(oldp+127,(vlSelf->cpu__DOT__rf1__DOT__rf[20]),32);
        bufp->chgIData(oldp+128,(vlSelf->cpu__DOT__rf1__DOT__rf[21]),32);
        bufp->chgIData(oldp+129,(vlSelf->cpu__DOT__rf1__DOT__rf[22]),32);
        bufp->chgIData(oldp+130,(vlSelf->cpu__DOT__rf1__DOT__rf[23]),32);
        bufp->chgIData(oldp+131,(vlSelf->cpu__DOT__rf1__DOT__rf[24]),32);
        bufp->chgIData(oldp+132,(vlSelf->cpu__DOT__rf1__DOT__rf[25]),32);
        bufp->chgIData(oldp+133,(vlSelf->cpu__DOT__rf1__DOT__rf[26]),32);
        bufp->chgIData(oldp+134,(vlSelf->cpu__DOT__rf1__DOT__rf[27]),32);
        bufp->chgIData(oldp+135,(vlSelf->cpu__DOT__rf1__DOT__rf[28]),32);
        bufp->chgIData(oldp+136,(vlSelf->cpu__DOT__rf1__DOT__rf[29]),32);
        bufp->chgIData(oldp+137,(vlSelf->cpu__DOT__rf1__DOT__rf[30]),32);
        bufp->chgIData(oldp+138,(vlSelf->cpu__DOT__rf1__DOT__rf[31]),32);
    }
    bufp->chgBit(oldp+139,(vlSelf->clk));
    bufp->chgBit(oldp+140,(vlSelf->rst));
    bufp->chgIData(oldp+141,(vlSelf->cmd),32);
    bufp->chgCData(oldp+142,((0x1fU & (vlSelf->cmd 
                                       >> 0xfU))),5);
    bufp->chgCData(oldp+143,((0x1fU & (vlSelf->cmd 
                                       >> 0x14U))),5);
    bufp->chgBit(oldp+144,(((0x67U == (0x7fU & vlSelf->cmd)) 
                            | ((0x6fU == (0x7fU & vlSelf->cmd)) 
                               | ((3U == (0x7fU & vlSelf->cmd)) 
                                  | ((0x33U == (0x7fU 
                                                & vlSelf->cmd)) 
                                     | (IData)(vlSelf->cpu__DOT__cu1__DOT____VdfgTmp_hd4cadad9__0)))))));
    bufp->chgCData(oldp+145,((0x7fU & vlSelf->cmd)),7);
    bufp->chgCData(oldp+146,((7U & (vlSelf->cmd >> 0xcU))),3);
    bufp->chgBit(oldp+147,((1U & (vlSelf->cmd >> 0x1eU))));
    bufp->chgBit(oldp+148,((0x23U == (0x7fU & vlSelf->cmd))));
    bufp->chgBit(oldp+149,(((0x63U == (0x7fU & vlSelf->cmd)) 
                            | (IData)(vlSelf->cpu__DOT__cu1__DOT____VdfgTmp_ha0272f88__0))));
    bufp->chgBit(oldp+150,((3U == (0x7fU & vlSelf->cmd))));
    bufp->chgBit(oldp+151,((0x13U == (0x7fU & vlSelf->cmd))));
    bufp->chgBit(oldp+152,((0x33U == (0x7fU & vlSelf->cmd))));
    bufp->chgBit(oldp+153,((0x6fU == (0x7fU & vlSelf->cmd))));
    bufp->chgBit(oldp+154,((0x63U == (0x7fU & vlSelf->cmd))));
    bufp->chgCData(oldp+155,(((IData)((0x6000U == (0x6000U 
                                                   & vlSelf->cmd)))
                               ? 9U : ((1U & VL_REDXOR_16(
                                                          (0x6000U 
                                                           & vlSelf->cmd)))
                                        ? 8U : 1U))),4);
    bufp->chgBit(oldp+156,((0x67U == (0x7fU & vlSelf->cmd))));
    bufp->chgBit(oldp+157,((0x17U == (0x7fU & vlSelf->cmd))));
    bufp->chgBit(oldp+158,((0x37U == (0x7fU & vlSelf->cmd))));
    bufp->chgQData(oldp+159,((0x714398d40000ULL | (
                                                   ((QData)((IData)(
                                                                    ((IData)(
                                                                             (0x40000033U 
                                                                              == 
                                                                              (0x4000007fU 
                                                                               & vlSelf->cmd)))
                                                                      ? 1U
                                                                      : 0U))) 
                                                    << 0x31U) 
                                                   | (QData)((IData)(
                                                                     (0x32f4U 
                                                                      | (((0x40000000U 
                                                                           & vlSelf->cmd)
                                                                           ? 0xeU
                                                                           : 0xdU) 
                                                                         << 0xeU))))))),56);
    bufp->chgIData(oldp+161,((0xfffff000U & vlSelf->cmd)),32);
    bufp->chgIData(oldp+162,((((- (IData)((vlSelf->cmd 
                                           >> 0x1fU))) 
                               << 0x14U) | ((0xff000U 
                                             & vlSelf->cmd) 
                                            | ((0x800U 
                                                & (vlSelf->cmd 
                                                   >> 9U)) 
                                               | (0x7feU 
                                                  & (vlSelf->cmd 
                                                     >> 0x14U)))))),32);
    bufp->chgIData(oldp+163,((((- (IData)((vlSelf->cmd 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelf->cmd 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->cmd 
                                                 >> 7U))))),32);
    bufp->chgIData(oldp+164,((((- (IData)((vlSelf->cmd 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0x800U 
                                            & (vlSelf->cmd 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlSelf->cmd 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->cmd 
                                                    >> 7U)))))),32);
    __Vtemp_hdace3dd2__0[0U] = (IData)((0x300000000ULL 
                                        | (QData)((IData)(
                                                          (((- (IData)(
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
                                                                       >> 7U)))))))));
    __Vtemp_hdace3dd2__0[1U] = ((0xfffffff8U & (((- (IData)(
                                                            (vlSelf->cmd 
                                                             >> 0x1fU))) 
                                                 << 0xfU) 
                                                | ((0x7f00U 
                                                    & (vlSelf->cmd 
                                                       >> 0x11U)) 
                                                   | (0xf8U 
                                                      & (vlSelf->cmd 
                                                         >> 4U))))) 
                                | (IData)(((0x300000000ULL 
                                            | (QData)((IData)(
                                                              (((- (IData)(
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
                                                                           >> 7U)))))))) 
                                           >> 0x20U)));
    __Vtemp_hdace3dd2__0[2U] = (0x10U | ((0xffffffc0U 
                                          & (((- (IData)(
                                                         (vlSelf->cmd 
                                                          >> 0x1fU))) 
                                              << 0x1aU) 
                                             | ((0x3fc0000U 
                                                 & (vlSelf->cmd 
                                                    << 6U)) 
                                                | ((0x20000U 
                                                    & (vlSelf->cmd 
                                                       >> 3U)) 
                                                   | (0x1ff80U 
                                                      & (vlSelf->cmd 
                                                         >> 0xeU)))))) 
                                         | (7U & ((- (IData)(
                                                             (vlSelf->cmd 
                                                              >> 0x1fU))) 
                                                  >> 0x11U))));
    __Vtemp_hdace3dd2__0[3U] = (0x100U | ((0xffe00000U 
                                           & (vlSelf->cmd 
                                              << 9U)) 
                                          | (0x3fU 
                                             & ((- (IData)(
                                                           (vlSelf->cmd 
                                                            >> 0x1fU))) 
                                                >> 6U))));
    __Vtemp_hdace3dd2__0[4U] = (0x200U | ((vlSelf->cpu__DOT__dimm1__DOT__immI 
                                           << 0xcU) 
                                          | (vlSelf->cmd 
                                             >> 0x17U)));
    __Vtemp_hdace3dd2__0[5U] = (vlSelf->cpu__DOT__dimm1__DOT__immI 
                                >> 0x14U);
    bufp->chgWData(oldp+165,(__Vtemp_hdace3dd2__0),175);
    bufp->chgBit(oldp+171,(((IData)(vlSelf->rst) | 
                            (0U != ((IData)(4U) + vlSelf->cpu__DOT__pc1__DOT__tmp_pc)))));
}

void Vcpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_cleanup\n"); );
    // Init
    Vcpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu___024root*>(voidSelf);
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
