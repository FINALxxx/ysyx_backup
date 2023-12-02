// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VALU.h for the primary calling header

#ifndef VERILATED_VALU___024ROOT_H_
#define VERILATED_VALU___024ROOT_H_  // guard

#include "verilated.h"

class VALU__Syms;
class VALU___024unit;


class VALU___024root final : public VerilatedModule {
  public:
    // CELLS
    VALU___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        CData/*2:0*/ cpu__DOT__op_IMM;
        CData/*0:0*/ cpu__DOT__op_ALU_Asrc;
        CData/*1:0*/ cpu__DOT__op_ALU_Bsrc;
        CData/*3:0*/ cpu__DOT__op_ALU_sel;
        CData/*0:0*/ cpu__DOT__op_PC_Asrc;
        CData/*0:0*/ cpu__DOT__op_PC_Bsrc;
        CData/*0:0*/ cpu__DOT__LESS;
        CData/*3:0*/ cpu__DOT__cu1__DOT__R_sel;
        CData/*3:0*/ cpu__DOT__cu1__DOT__I_sel;
        CData/*2:0*/ cpu__DOT__cu1__DOT__branch;
        CData/*0:0*/ cpu__DOT__cu1__DOT__is_dead;
        CData/*0:0*/ cpu__DOT__cu1__DOT____VdfgTmp_hf442cbef__0;
        CData/*0:0*/ cpu__DOT__cu1__DOT____VdfgTmp_hd4cadad9__0;
        CData/*0:0*/ cpu__DOT__cu1__DOT____VdfgTmp_ha0272f88__0;
        CData/*0:0*/ cpu__DOT__cu1__DOT____VdfgTmp_h027e2431__0;
        CData/*2:0*/ cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__lut_out;
        CData/*0:0*/ cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__hit;
        CData/*3:0*/ cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__lut_out;
        CData/*0:0*/ cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__hit;
        CData/*3:0*/ cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__lut_out;
        CData/*0:0*/ cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__hit;
        CData/*0:0*/ cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__hit;
        CData/*0:0*/ cpu__DOT__mux1__DOT__i0__DOT__hit;
        CData/*0:0*/ cpu__DOT__mux2__DOT__i0__DOT__hit;
        CData/*0:0*/ cpu__DOT__mux3__DOT__i0__DOT__hit;
        CData/*0:0*/ cpu__DOT__mux4__DOT__i0__DOT__hit;
        CData/*0:0*/ cpu__DOT__pc1__DOT__reset;
        CData/*1:0*/ cpu__DOT__alu1__DOT__shift1__DOT____Vcellinp__mux1____pinNumber2;
        CData/*0:0*/ cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__hit;
        CData/*0:0*/ cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__hit;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __VactContinue;
        VL_IN(cmd,31,0);
        IData/*31:0*/ cpu__DOT__src1;
        IData/*31:0*/ cpu__DOT__src2;
        IData/*31:0*/ cpu__DOT__imm;
        IData/*31:0*/ cpu__DOT__src_rd;
        IData/*31:0*/ cpu__DOT__a0;
        IData/*31:0*/ cpu__DOT__b0;
        IData/*31:0*/ cpu__DOT__a1;
        IData/*31:0*/ cpu__DOT__b1;
        IData/*31:0*/ cpu__DOT__dimm1__DOT__immI;
        IData/*31:0*/ cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__lut_out;
        IData/*31:0*/ cpu__DOT__mux1__DOT__i0__DOT__lut_out;
        IData/*31:0*/ cpu__DOT__mux2__DOT__i0__DOT__lut_out;
        IData/*31:0*/ cpu__DOT__mux3__DOT__i0__DOT__lut_out;
        IData/*31:0*/ cpu__DOT__mux4__DOT__i0__DOT__lut_out;
        IData/*31:0*/ cpu__DOT__pc1__DOT__tmp_pc;
        IData/*31:0*/ cpu__DOT__pc1__DOT__result;
        IData/*31:0*/ cpu__DOT__alu1__DOT__ADDER_result;
        IData/*31:0*/ cpu__DOT__alu1__DOT__SHIFT_result;
        IData/*31:0*/ cpu__DOT__alu1__DOT__add1__DOT__add_cin;
        IData/*31:0*/ cpu__DOT__alu1__DOT__shift1__DOT____Vcellinp__mux1____pinNumber3;
        IData/*31:0*/ cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__lut_out;
        IData/*31:0*/ cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__lut_out;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*5:0*/, 8> cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 8> cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*2:0*/, 8> cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*6:0*/, 8> cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__pair_list;
    };
    struct {
        VlUnpacked<CData/*2:0*/, 8> cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*3:0*/, 8> cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*6:0*/, 8> cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 8> cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*3:0*/, 8> cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*34:0*/, 5> cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 5> cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 5> cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list;
        VlUnpacked<IData/*31:0*/, 32> cpu__DOT__rf1__DOT__rf;
        VlUnpacked<QData/*32:0*/, 2> cpu__DOT__mux1__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*0:0*/, 2> cpu__DOT__mux1__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 2> cpu__DOT__mux1__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*32:0*/, 2> cpu__DOT__mux2__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*0:0*/, 2> cpu__DOT__mux2__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 2> cpu__DOT__mux2__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*32:0*/, 2> cpu__DOT__mux3__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*0:0*/, 2> cpu__DOT__mux3__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 2> cpu__DOT__mux3__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*33:0*/, 3> cpu__DOT__mux4__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 3> cpu__DOT__mux4__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 3> cpu__DOT__mux4__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*33:0*/, 3> cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 3> cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 3> cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*34:0*/, 8> cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 8> cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 8> cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VALU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VALU___024root(VALU__Syms* symsp, const char* v__name);
    ~VALU___024root();
    VL_UNCOPYABLE(VALU___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
