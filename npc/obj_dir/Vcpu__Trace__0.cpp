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
    VlWide<3>/*95:0*/ __Vtemp_hfeedee49__0;
    VlWide<9>/*287:0*/ __Vtemp_h0b480982__0;
    VlWide<4>/*127:0*/ __Vtemp_hedab82a1__0;
    VlWide<3>/*95:0*/ __Vtemp_hc856c7a6__0;
    VlWide<3>/*95:0*/ __Vtemp_h27f5bc9c__0;
    VlWide<4>/*127:0*/ __Vtemp_h2a03d93b__0;
    VlWide<6>/*191:0*/ __Vtemp_hdace3dd2__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+1,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+2,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+3,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+4,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list[4]),3);
        bufp->chgCData(oldp+5,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list[5]),3);
        bufp->chgCData(oldp+6,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list[6]),3);
        bufp->chgCData(oldp+7,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list[7]),3);
        bufp->chgCData(oldp+8,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+9,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+10,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+11,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list[0]),5);
        bufp->chgCData(oldp+12,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list[1]),5);
        bufp->chgCData(oldp+13,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list[2]),5);
        bufp->chgCData(oldp+14,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__pair_list[0]),6);
        bufp->chgCData(oldp+15,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__pair_list[1]),6);
        bufp->chgCData(oldp+16,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__pair_list[2]),6);
        bufp->chgCData(oldp+17,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__pair_list[3]),6);
        bufp->chgCData(oldp+18,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__pair_list[4]),6);
        bufp->chgCData(oldp+19,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__pair_list[5]),6);
        bufp->chgCData(oldp+20,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__pair_list[6]),6);
        bufp->chgCData(oldp+21,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+22,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+23,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+24,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+25,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list[4]),3);
        bufp->chgCData(oldp+26,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list[5]),3);
        bufp->chgCData(oldp+27,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list[6]),3);
        bufp->chgCData(oldp+28,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__data_list[0]),3);
        bufp->chgCData(oldp+29,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__data_list[1]),3);
        bufp->chgCData(oldp+30,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__data_list[2]),3);
        bufp->chgCData(oldp+31,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__data_list[3]),3);
        bufp->chgCData(oldp+32,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__data_list[4]),3);
        bufp->chgCData(oldp+33,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__data_list[5]),3);
        bufp->chgCData(oldp+34,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__data_list[6]),3);
        bufp->chgCData(oldp+35,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+36,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+37,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+38,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+39,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list[4]),3);
        bufp->chgCData(oldp+40,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list[5]),3);
        bufp->chgCData(oldp+41,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list[6]),3);
        bufp->chgCData(oldp+42,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list[7]),3);
        bufp->chgCData(oldp+43,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+44,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+45,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+46,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+47,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list[4]),3);
        bufp->chgCData(oldp+48,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list[5]),3);
        bufp->chgCData(oldp+49,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list[6]),3);
        bufp->chgCData(oldp+50,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list[7]),3);
        bufp->chgCData(oldp+51,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+52,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+53,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+54,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+55,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__key_list[4]),3);
        bufp->chgBit(oldp+56,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+57,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__key_list[1]));
        bufp->chgBit(oldp+58,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+59,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__key_list[1]));
        bufp->chgBit(oldp+60,(vlSelf->cpu__DOT__mux3__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+61,(vlSelf->cpu__DOT__mux3__DOT__i0__DOT__key_list[1]));
        bufp->chgCData(oldp+62,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+63,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+64,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__key_list[2]),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+65,(vlSelf->cpu__DOT__imm),32);
        bufp->chgCData(oldp+66,(vlSelf->cpu__DOT__op_IMM),3);
        bufp->chgBit(oldp+67,(vlSelf->cpu__DOT__op_ALU_Asrc));
        bufp->chgCData(oldp+68,(vlSelf->cpu__DOT__op_ALU_Bsrc),2);
        bufp->chgCData(oldp+69,(vlSelf->cpu__DOT__op_ALU_sel),4);
        bufp->chgBit(oldp+70,(vlSelf->cpu__DOT__op_PC_Bsrc));
        bufp->chgBit(oldp+71,((1U != (IData)(vlSelf->cpu__DOT__op_ALU_sel))));
        bufp->chgBit(oldp+72,((2U != (IData)(vlSelf->cpu__DOT__op_ALU_sel))));
        bufp->chgBit(oldp+73,((0xdU != (IData)(vlSelf->cpu__DOT__op_ALU_sel))));
        bufp->chgBit(oldp+74,((0U != (IData)(vlSelf->cpu__DOT__op_ALU_sel))));
        bufp->chgCData(oldp+75,((7U & (IData)(vlSelf->cpu__DOT__op_ALU_sel))),3);
        bufp->chgCData(oldp+76,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT____Vcellinp__mux1____pinNumber2),2);
        bufp->chgCData(oldp+77,(vlSelf->cpu__DOT__cu1__DOT__R_sel),4);
        bufp->chgCData(oldp+78,(vlSelf->cpu__DOT__cu1__DOT__I_sel),4);
        bufp->chgCData(oldp+79,(vlSelf->cpu__DOT__cu1__DOT__branch),3);
        bufp->chgCData(oldp+80,(vlSelf->cpu__DOT__cu1__DOT__branch_tmp),3);
        bufp->chgIData(oldp+81,((0xcad9c0U | (IData)(vlSelf->cpu__DOT__cu1__DOT__branch_tmp))),24);
        bufp->chgCData(oldp+82,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__pair_list[0]),8);
        bufp->chgCData(oldp+83,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__pair_list[1]),8);
        bufp->chgCData(oldp+84,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__pair_list[2]),8);
        bufp->chgCData(oldp+85,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list[0]),3);
        bufp->chgCData(oldp+86,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list[1]),3);
        bufp->chgCData(oldp+87,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list[2]),3);
        bufp->chgCData(oldp+88,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__lut_out),3);
        bufp->chgBit(oldp+89,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+90,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__lut_out),3);
        bufp->chgBit(oldp+91,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+92,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[0]),7);
        bufp->chgCData(oldp+93,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[1]),7);
        bufp->chgCData(oldp+94,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[2]),7);
        bufp->chgCData(oldp+95,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[3]),7);
        bufp->chgCData(oldp+96,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[4]),7);
        bufp->chgCData(oldp+97,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[5]),7);
        bufp->chgCData(oldp+98,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[6]),7);
        bufp->chgCData(oldp+99,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[7]),7);
        bufp->chgCData(oldp+100,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[0]),4);
        bufp->chgCData(oldp+101,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[1]),4);
        bufp->chgCData(oldp+102,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[2]),4);
        bufp->chgCData(oldp+103,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[3]),4);
        bufp->chgCData(oldp+104,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[4]),4);
        bufp->chgCData(oldp+105,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[5]),4);
        bufp->chgCData(oldp+106,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[6]),4);
        bufp->chgCData(oldp+107,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[7]),4);
        bufp->chgCData(oldp+108,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__lut_out),4);
        bufp->chgBit(oldp+109,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+110,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__pair_list[0]),7);
        bufp->chgCData(oldp+111,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__pair_list[1]),7);
        bufp->chgCData(oldp+112,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__pair_list[2]),7);
        bufp->chgCData(oldp+113,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__pair_list[3]),7);
        bufp->chgCData(oldp+114,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__pair_list[4]),7);
        bufp->chgCData(oldp+115,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__pair_list[5]),7);
        bufp->chgCData(oldp+116,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__pair_list[6]),7);
        bufp->chgCData(oldp+117,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__pair_list[7]),7);
        bufp->chgCData(oldp+118,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list[0]),4);
        bufp->chgCData(oldp+119,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list[1]),4);
        bufp->chgCData(oldp+120,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list[2]),4);
        bufp->chgCData(oldp+121,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list[3]),4);
        bufp->chgCData(oldp+122,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list[4]),4);
        bufp->chgCData(oldp+123,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list[5]),4);
        bufp->chgCData(oldp+124,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list[6]),4);
        bufp->chgCData(oldp+125,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list[7]),4);
        bufp->chgCData(oldp+126,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__lut_out),4);
        bufp->chgBit(oldp+127,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+128,(vlSelf->cpu__DOT__dimm1__DOT__immI),32);
        bufp->chgQData(oldp+129,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__pair_list[0]),35);
        bufp->chgQData(oldp+131,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__pair_list[1]),35);
        bufp->chgQData(oldp+133,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__pair_list[2]),35);
        bufp->chgQData(oldp+135,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__pair_list[3]),35);
        bufp->chgQData(oldp+137,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__pair_list[4]),35);
        bufp->chgIData(oldp+139,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+140,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+141,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+142,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+143,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+144,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+145,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__hit));
        __Vtemp_hfeedee49__0[0U] = vlSelf->cpu__DOT__imm;
        __Vtemp_hfeedee49__0[1U] = 9U;
        __Vtemp_hfeedee49__0[2U] = 0U;
        bufp->chgWData(oldp+146,(__Vtemp_hfeedee49__0),66);
        bufp->chgQData(oldp+149,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgQData(oldp+151,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgIData(oldp+153,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+154,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__data_list[1]),32);
        bufp->chgBit(oldp+155,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+156,(vlSelf->cpu__DOT__mux3__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+157,(vlSelf->cpu__DOT__src1),32);
        bufp->chgIData(oldp+158,(vlSelf->cpu__DOT__src2),32);
        bufp->chgIData(oldp+159,(vlSelf->cpu__DOT__src_rd),32);
        bufp->chgBit(oldp+160,(vlSelf->cpu__DOT__op_PC_Asrc));
        bufp->chgBit(oldp+161,(vlSelf->cpu__DOT__LESS));
        bufp->chgBit(oldp+162,((1U & (~ (IData)((0U 
                                                 != vlSelf->cpu__DOT__alu1__DOT__ADDER_result))))));
        bufp->chgIData(oldp+163,(vlSelf->cpu__DOT__a0),32);
        bufp->chgIData(oldp+164,(vlSelf->cpu__DOT__b0),32);
        bufp->chgIData(oldp+165,(vlSelf->cpu__DOT__a1),32);
        bufp->chgIData(oldp+166,(vlSelf->cpu__DOT__b1),32);
        bufp->chgIData(oldp+167,(vlSelf->cpu__DOT__alu1__DOT__ADDER_result),32);
        bufp->chgIData(oldp+168,(vlSelf->cpu__DOT__alu1__DOT__SHIFT_result),32);
        bufp->chgIData(oldp+169,((vlSelf->cpu__DOT__a1 
                                  & vlSelf->cpu__DOT__b1)),32);
        bufp->chgIData(oldp+170,((vlSelf->cpu__DOT__a1 
                                  | vlSelf->cpu__DOT__b1)),32);
        bufp->chgIData(oldp+171,((vlSelf->cpu__DOT__a1 
                                  ^ vlSelf->cpu__DOT__b1)),32);
        bufp->chgBit(oldp+172,((((vlSelf->cpu__DOT__a1 
                                  >> 0x1fU) == (vlSelf->cpu__DOT__alu1__DOT__add1__DOT__add_cin 
                                                >> 0x1fU)) 
                                & ((vlSelf->cpu__DOT__a1 
                                    >> 0x1fU) != (vlSelf->cpu__DOT__alu1__DOT__ADDER_result 
                                                  >> 0x1fU)))));
        bufp->chgBit(oldp+173,((1U & (IData)((1ULL 
                                              & (((QData)((IData)(vlSelf->cpu__DOT__a1)) 
                                                  + (QData)((IData)(vlSelf->cpu__DOT__alu1__DOT__add1__DOT__add_cin))) 
                                                 >> 0x20U))))));
        bufp->chgBit(oldp+174,((1U & ((0U != (IData)(vlSelf->cpu__DOT__op_ALU_sel)) 
                                      ^ (IData)((1ULL 
                                                 & (((QData)((IData)(vlSelf->cpu__DOT__a1)) 
                                                     + (QData)((IData)(vlSelf->cpu__DOT__alu1__DOT__add1__DOT__add_cin))) 
                                                    >> 0x20U)))))));
        bufp->chgBit(oldp+175,((1U & ((((vlSelf->cpu__DOT__a1 
                                         >> 0x1fU) 
                                        == (vlSelf->cpu__DOT__alu1__DOT__add1__DOT__add_cin 
                                            >> 0x1fU)) 
                                       & ((vlSelf->cpu__DOT__a1 
                                           >> 0x1fU) 
                                          != (vlSelf->cpu__DOT__alu1__DOT__ADDER_result 
                                              >> 0x1fU))) 
                                      ^ (vlSelf->cpu__DOT__alu1__DOT__ADDER_result 
                                         >> 0x1fU)))));
        bufp->chgIData(oldp+176,(vlSelf->cpu__DOT__alu1__DOT__add1__DOT__add_cin),32);
        __Vtemp_h0b480982__0[0U] = (IData)((0x700000000ULL 
                                            | (QData)((IData)(
                                                              (vlSelf->cpu__DOT__a1 
                                                               & vlSelf->cpu__DOT__b1)))));
        __Vtemp_h0b480982__0[1U] = (((vlSelf->cpu__DOT__a1 
                                      | vlSelf->cpu__DOT__b1) 
                                     << 3U) | (IData)(
                                                      ((0x700000000ULL 
                                                        | (QData)((IData)(
                                                                          (vlSelf->cpu__DOT__a1 
                                                                           & vlSelf->cpu__DOT__b1)))) 
                                                       >> 0x20U)));
        __Vtemp_h0b480982__0[2U] = (0x30U | ((vlSelf->cpu__DOT__alu1__DOT__SHIFT_result 
                                              << 6U) 
                                             | ((vlSelf->cpu__DOT__a1 
                                                 | vlSelf->cpu__DOT__b1) 
                                                >> 0x1dU)));
        __Vtemp_h0b480982__0[3U] = (0x140U | (((vlSelf->cpu__DOT__a1 
                                                ^ vlSelf->cpu__DOT__b1) 
                                               << 9U) 
                                              | (vlSelf->cpu__DOT__alu1__DOT__SHIFT_result 
                                                 >> 0x1aU)));
        __Vtemp_h0b480982__0[4U] = (0x800U | ((vlSelf->cpu__DOT__b1 
                                               << 0xcU) 
                                              | ((vlSelf->cpu__DOT__a1 
                                                  ^ vlSelf->cpu__DOT__b1) 
                                                 >> 0x17U)));
        __Vtemp_h0b480982__0[5U] = (0x3000U | (((IData)(vlSelf->cpu__DOT__LESS) 
                                                << 0xfU) 
                                               | (vlSelf->cpu__DOT__b1 
                                                  >> 0x14U)));
        __Vtemp_h0b480982__0[6U] = (0x10000U | (vlSelf->cpu__DOT__alu1__DOT__SHIFT_result 
                                                << 0x12U));
        __Vtemp_h0b480982__0[7U] = (0x40000U | ((vlSelf->cpu__DOT__alu1__DOT__ADDER_result 
                                                 << 0x15U) 
                                                | (vlSelf->cpu__DOT__alu1__DOT__SHIFT_result 
                                                   >> 0xeU)));
        __Vtemp_h0b480982__0[8U] = (vlSelf->cpu__DOT__alu1__DOT__ADDER_result 
                                    >> 0xbU);
        bufp->chgWData(oldp+177,(__Vtemp_h0b480982__0),280);
        bufp->chgQData(oldp+186,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[0]),35);
        bufp->chgQData(oldp+188,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[1]),35);
        bufp->chgQData(oldp+190,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[2]),35);
        bufp->chgQData(oldp+192,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[3]),35);
        bufp->chgQData(oldp+194,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[4]),35);
        bufp->chgQData(oldp+196,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[5]),35);
        bufp->chgQData(oldp+198,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[6]),35);
        bufp->chgQData(oldp+200,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[7]),35);
        bufp->chgIData(oldp+202,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+203,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+204,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+205,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+206,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+207,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+208,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+209,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[7]),32);
        bufp->chgIData(oldp+210,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+211,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+212,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT____Vcellinp__mux1____pinNumber3),32);
        __Vtemp_hedab82a1__0[0U] = (IData)((QData)((IData)(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT____Vcellinp__mux1____pinNumber3)));
        __Vtemp_hedab82a1__0[1U] = ((((0x1fU >= vlSelf->cpu__DOT__b1)
                                       ? (vlSelf->cpu__DOT__a1 
                                          << vlSelf->cpu__DOT__b1)
                                       : 0U) << 2U) 
                                    | (IData)(((QData)((IData)(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT____Vcellinp__mux1____pinNumber3)) 
                                               >> 0x20U)));
        __Vtemp_hedab82a1__0[2U] = (8U | ((vlSelf->cpu__DOT__alu1__DOT__shift1__DOT____Vcellinp__mux1____pinNumber3 
                                           << 4U) | 
                                          (((0x1fU 
                                             >= vlSelf->cpu__DOT__b1)
                                             ? (vlSelf->cpu__DOT__a1 
                                                << vlSelf->cpu__DOT__b1)
                                             : 0U) 
                                           >> 0x1eU)));
        __Vtemp_hedab82a1__0[3U] = (0x30U | (vlSelf->cpu__DOT__alu1__DOT__shift1__DOT____Vcellinp__mux1____pinNumber3 
                                             >> 0x1cU));
        bufp->chgWData(oldp+213,(__Vtemp_hedab82a1__0),102);
        bufp->chgQData(oldp+217,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgQData(oldp+219,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+221,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgIData(oldp+223,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+224,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+225,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+226,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+227,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+228,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+229,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__hit));
        __Vtemp_hc856c7a6__0[0U] = (IData)((0x100000000ULL 
                                            | (QData)((IData)(vlSelf->cpu__DOT__src1))));
        __Vtemp_hc856c7a6__0[1U] = ((vlSelf->cpu__DOT__pc1__DOT__tmp_pc 
                                     << 1U) | (IData)(
                                                      ((0x100000000ULL 
                                                        | (QData)((IData)(vlSelf->cpu__DOT__src1))) 
                                                       >> 0x20U)));
        __Vtemp_hc856c7a6__0[2U] = (vlSelf->cpu__DOT__pc1__DOT__tmp_pc 
                                    >> 0x1fU);
        bufp->chgWData(oldp+230,(__Vtemp_hc856c7a6__0),66);
        bufp->chgQData(oldp+233,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgQData(oldp+235,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgIData(oldp+237,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+238,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+239,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__lut_out),32);
        __Vtemp_h27f5bc9c__0[0U] = (IData)((0x100000000ULL 
                                            | (QData)((IData)(vlSelf->cpu__DOT__pc1__DOT__tmp_pc))));
        __Vtemp_h27f5bc9c__0[1U] = ((vlSelf->cpu__DOT__src1 
                                     << 1U) | (IData)(
                                                      ((0x100000000ULL 
                                                        | (QData)((IData)(vlSelf->cpu__DOT__pc1__DOT__tmp_pc))) 
                                                       >> 0x20U)));
        __Vtemp_h27f5bc9c__0[2U] = (vlSelf->cpu__DOT__src1 
                                    >> 0x1fU);
        bufp->chgWData(oldp+240,(__Vtemp_h27f5bc9c__0),66);
        bufp->chgQData(oldp+243,(vlSelf->cpu__DOT__mux3__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgQData(oldp+245,(vlSelf->cpu__DOT__mux3__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgIData(oldp+247,(vlSelf->cpu__DOT__mux3__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+248,(vlSelf->cpu__DOT__mux3__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+249,(vlSelf->cpu__DOT__mux3__DOT__i0__DOT__lut_out),32);
        __Vtemp_h2a03d93b__0[0U] = 4U;
        __Vtemp_h2a03d93b__0[1U] = (2U | (vlSelf->cpu__DOT__imm 
                                          << 2U));
        __Vtemp_h2a03d93b__0[2U] = (4U | ((vlSelf->cpu__DOT__src2 
                                           << 4U) | 
                                          (vlSelf->cpu__DOT__imm 
                                           >> 0x1eU)));
        __Vtemp_h2a03d93b__0[3U] = (vlSelf->cpu__DOT__src2 
                                    >> 0x1cU);
        bufp->chgWData(oldp+250,(__Vtemp_h2a03d93b__0),102);
        bufp->chgQData(oldp+254,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgQData(oldp+256,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+258,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgIData(oldp+260,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+261,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+262,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+263,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+264,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+265,(vlSelf->cpu__DOT__pc1__DOT__result),32);
        bufp->chgBit(oldp+266,((1U & (IData)((1ULL 
                                              & (((QData)((IData)(vlSelf->cpu__DOT__a0)) 
                                                  + (QData)((IData)(vlSelf->cpu__DOT__b0))) 
                                                 >> 0x20U))))));
        bufp->chgBit(oldp+267,((1U & (~ (IData)((0U 
                                                 != vlSelf->cpu__DOT__pc1__DOT__result))))));
        bufp->chgBit(oldp+268,((((vlSelf->cpu__DOT__a0 
                                  >> 0x1fU) == (vlSelf->cpu__DOT__b0 
                                                >> 0x1fU)) 
                                & ((vlSelf->cpu__DOT__a0 
                                    >> 0x1fU) != (vlSelf->cpu__DOT__pc1__DOT__result 
                                                  >> 0x1fU)))));
        bufp->chgBit(oldp+269,((1U & ((((vlSelf->cpu__DOT__a0 
                                         >> 0x1fU) 
                                        == (vlSelf->cpu__DOT__b0 
                                            >> 0x1fU)) 
                                       & ((vlSelf->cpu__DOT__a0 
                                           >> 0x1fU) 
                                          != (vlSelf->cpu__DOT__pc1__DOT__result 
                                              >> 0x1fU))) 
                                      ^ (vlSelf->cpu__DOT__pc1__DOT__result 
                                         >> 0x1fU)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+270,(vlSelf->cpu__DOT__cu1__DOT__is_halt));
        bufp->chgIData(oldp+271,(vlSelf->cpu__DOT__pc1__DOT__tmp_pc),32);
        bufp->chgIData(oldp+272,(vlSelf->cpu__DOT__rf1__DOT__rf[0]),32);
        bufp->chgIData(oldp+273,(vlSelf->cpu__DOT__rf1__DOT__rf[1]),32);
        bufp->chgIData(oldp+274,(vlSelf->cpu__DOT__rf1__DOT__rf[2]),32);
        bufp->chgIData(oldp+275,(vlSelf->cpu__DOT__rf1__DOT__rf[3]),32);
        bufp->chgIData(oldp+276,(vlSelf->cpu__DOT__rf1__DOT__rf[4]),32);
        bufp->chgIData(oldp+277,(vlSelf->cpu__DOT__rf1__DOT__rf[5]),32);
        bufp->chgIData(oldp+278,(vlSelf->cpu__DOT__rf1__DOT__rf[6]),32);
        bufp->chgIData(oldp+279,(vlSelf->cpu__DOT__rf1__DOT__rf[7]),32);
        bufp->chgIData(oldp+280,(vlSelf->cpu__DOT__rf1__DOT__rf[8]),32);
        bufp->chgIData(oldp+281,(vlSelf->cpu__DOT__rf1__DOT__rf[9]),32);
        bufp->chgIData(oldp+282,(vlSelf->cpu__DOT__rf1__DOT__rf[10]),32);
        bufp->chgIData(oldp+283,(vlSelf->cpu__DOT__rf1__DOT__rf[11]),32);
        bufp->chgIData(oldp+284,(vlSelf->cpu__DOT__rf1__DOT__rf[12]),32);
        bufp->chgIData(oldp+285,(vlSelf->cpu__DOT__rf1__DOT__rf[13]),32);
        bufp->chgIData(oldp+286,(vlSelf->cpu__DOT__rf1__DOT__rf[14]),32);
        bufp->chgIData(oldp+287,(vlSelf->cpu__DOT__rf1__DOT__rf[15]),32);
        bufp->chgIData(oldp+288,(vlSelf->cpu__DOT__rf1__DOT__rf[16]),32);
        bufp->chgIData(oldp+289,(vlSelf->cpu__DOT__rf1__DOT__rf[17]),32);
        bufp->chgIData(oldp+290,(vlSelf->cpu__DOT__rf1__DOT__rf[18]),32);
        bufp->chgIData(oldp+291,(vlSelf->cpu__DOT__rf1__DOT__rf[19]),32);
        bufp->chgIData(oldp+292,(vlSelf->cpu__DOT__rf1__DOT__rf[20]),32);
        bufp->chgIData(oldp+293,(vlSelf->cpu__DOT__rf1__DOT__rf[21]),32);
        bufp->chgIData(oldp+294,(vlSelf->cpu__DOT__rf1__DOT__rf[22]),32);
        bufp->chgIData(oldp+295,(vlSelf->cpu__DOT__rf1__DOT__rf[23]),32);
        bufp->chgIData(oldp+296,(vlSelf->cpu__DOT__rf1__DOT__rf[24]),32);
        bufp->chgIData(oldp+297,(vlSelf->cpu__DOT__rf1__DOT__rf[25]),32);
        bufp->chgIData(oldp+298,(vlSelf->cpu__DOT__rf1__DOT__rf[26]),32);
        bufp->chgIData(oldp+299,(vlSelf->cpu__DOT__rf1__DOT__rf[27]),32);
        bufp->chgIData(oldp+300,(vlSelf->cpu__DOT__rf1__DOT__rf[28]),32);
        bufp->chgIData(oldp+301,(vlSelf->cpu__DOT__rf1__DOT__rf[29]),32);
        bufp->chgIData(oldp+302,(vlSelf->cpu__DOT__rf1__DOT__rf[30]),32);
        bufp->chgIData(oldp+303,(vlSelf->cpu__DOT__rf1__DOT__rf[31]),32);
    }
    bufp->chgBit(oldp+304,(vlSelf->clk));
    bufp->chgBit(oldp+305,(vlSelf->rst));
    bufp->chgIData(oldp+306,(vlSelf->cmd),32);
    bufp->chgIData(oldp+307,(vlSelf->pc),32);
    bufp->chgCData(oldp+308,((0x1fU & (vlSelf->cmd 
                                       >> 0xfU))),5);
    bufp->chgCData(oldp+309,((0x1fU & (vlSelf->cmd 
                                       >> 0x14U))),5);
    bufp->chgCData(oldp+310,((0x1fU & (vlSelf->cmd 
                                       >> 7U))),5);
    bufp->chgBit(oldp+311,(((IData)(vlSelf->cpu__DOT__cu1__DOT____VdfgTmp_hf442cbef__0) 
                            | ((0x6fU == (0x7fU & vlSelf->cmd)) 
                               | ((3U == (0x7fU & vlSelf->cmd)) 
                                  | ((0x33U == (0x7fU 
                                                & vlSelf->cmd)) 
                                     | (IData)(vlSelf->cpu__DOT__cu1__DOT____VdfgTmp_hd4cadad9__0)))))));
    bufp->chgCData(oldp+312,((0x7fU & vlSelf->cmd)),7);
    bufp->chgCData(oldp+313,((7U & (vlSelf->cmd >> 0xcU))),3);
    bufp->chgBit(oldp+314,((1U & (vlSelf->cmd >> 0x1eU))));
    bufp->chgBit(oldp+315,((0x23U == (0x7fU & vlSelf->cmd))));
    bufp->chgBit(oldp+316,((3U == (0x7fU & vlSelf->cmd))));
    bufp->chgBit(oldp+317,((0x13U == (0x7fU & vlSelf->cmd))));
    bufp->chgBit(oldp+318,((0x33U == (0x7fU & vlSelf->cmd))));
    bufp->chgBit(oldp+319,((0x6fU == (0x7fU & vlSelf->cmd))));
    bufp->chgBit(oldp+320,((0x63U == (0x7fU & vlSelf->cmd))));
    bufp->chgBit(oldp+321,((0x67U == (0x7fU & vlSelf->cmd))));
    bufp->chgBit(oldp+322,((0x17U == (0x7fU & vlSelf->cmd))));
    bufp->chgBit(oldp+323,((0x37U == (0x7fU & vlSelf->cmd))));
    bufp->chgCData(oldp+324,((0x1fU & (vlSelf->cmd 
                                       >> 2U))),5);
    bufp->chgQData(oldp+325,((0x804511a8940000ULL | 
                              (((QData)((IData)(((0x40000000U 
                                                  & vlSelf->cmd)
                                                  ? 8U
                                                  : 0U))) 
                                << 0x31U) | (QData)((IData)(
                                                            (0x3377U 
                                                             | (((0x40000000U 
                                                                  & vlSelf->cmd)
                                                                  ? 0xdU
                                                                  : 5U) 
                                                                << 0xeU))))))),56);
    bufp->chgQData(oldp+327,((0x89d44cddc8d0ULL | (QData)((IData)(
                                                                  ((0x40000000U 
                                                                    & vlSelf->cmd)
                                                                    ? 0xdU
                                                                    : 5U))))),56);
    bufp->chgIData(oldp+329,((0xfffff000U & vlSelf->cmd)),32);
    bufp->chgIData(oldp+330,((((- (IData)((vlSelf->cmd 
                                           >> 0x1fU))) 
                               << 0x14U) | ((0xff000U 
                                             & vlSelf->cmd) 
                                            | ((0x800U 
                                                & (vlSelf->cmd 
                                                   >> 9U)) 
                                               | (0x7feU 
                                                  & (vlSelf->cmd 
                                                     >> 0x14U)))))),32);
    bufp->chgIData(oldp+331,((((- (IData)((vlSelf->cmd 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelf->cmd 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->cmd 
                                                 >> 7U))))),32);
    bufp->chgIData(oldp+332,((((- (IData)((vlSelf->cmd 
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
    bufp->chgWData(oldp+333,(__Vtemp_hdace3dd2__0),175);
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
