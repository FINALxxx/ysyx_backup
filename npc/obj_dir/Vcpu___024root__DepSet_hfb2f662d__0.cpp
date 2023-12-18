// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcpu__Syms.h"
#include "Vcpu___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu___024root___dump_triggers__ico(Vcpu___024root* vlSelf);
#endif  // VL_DEBUG

void Vcpu___024root___eval_triggers__ico(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcpu___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu___024root___dump_triggers__act(Vcpu___024root* vlSelf);
#endif  // VL_DEBUG

void Vcpu___024root___eval_triggers__act(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcpu___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vcpu___024unit____Vdpiimwrap_halt_TOP____024unit(CData/*0:0*/ is_halt);
void Vcpu___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ raddr, IData/*31:0*/ &rdata);
void Vcpu___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);

VL_INLINE_OPT void Vcpu___024root___nba_sequent__TOP__0(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vtask_pmem_read__1__rdata;
    __Vtask_pmem_read__1__rdata = 0;
    CData/*4:0*/ __Vdlyvdim0__cpu__DOT__rf1__DOT__rf__v0;
    __Vdlyvdim0__cpu__DOT__rf1__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__cpu__DOT__rf1__DOT__rf__v0;
    __Vdlyvval__cpu__DOT__rf1__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__rf1__DOT__rf__v0;
    __Vdlyvset__cpu__DOT__rf1__DOT__rf__v0 = 0;
    // Body
    Vcpu___024unit____Vdpiimwrap_halt_TOP____024unit(vlSelf->cpu__DOT__cu1__DOT__is_halt);
    if (VL_UNLIKELY((0xfU == (0x1fU & (vlSelf->cmd 
                                       >> 7U))))) {
        VL_WRITEF("WRITING TO a5,VAL=%b\n",32,((3U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->cmd))
                                                ? vlSelf->cpu__DOT__src_rd_PMEM
                                                : vlSelf->cpu__DOT__src_rd_ALU));
    }
    if (VL_UNLIKELY((0xfU == (0x1fU & (vlSelf->cmd 
                                       >> 0xfU))))) {
        VL_WRITEF("READING TO a5,VAL=%b\n",32,vlSelf->cpu__DOT__src1);
    }
    __Vdlyvset__cpu__DOT__rf1__DOT__rf__v0 = 0U;
    if (VL_UNLIKELY(vlSelf->cpu__DOT__en_PMEM)) {
        Vcpu___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->cpu__DOT__src_rd_ALU, __Vtask_pmem_read__1__rdata);
        vlSelf->cpu__DOT__src_rd_PMEM_origin = __Vtask_pmem_read__1__rdata;
        VL_WRITEF("RESV:%x\n",32,vlSelf->cpu__DOT__src_rd_PMEM_origin);
        if ((0x23U == (0x7fU & vlSelf->cmd))) {
            Vcpu___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->cpu__DOT__src_rd_ALU, vlSelf->cpu__DOT__src2, (IData)(vlSelf->cpu__DOT__op_PMEM));
        }
    } else {
        vlSelf->cpu__DOT__src_rd_PMEM_origin = 0U;
    }
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
        __Vdlyvval__cpu__DOT__rf1__DOT__rf__v0 = ((3U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->cmd))
                                                   ? vlSelf->cpu__DOT__src_rd_PMEM
                                                   : vlSelf->cpu__DOT__src_rd_ALU);
        __Vdlyvset__cpu__DOT__rf1__DOT__rf__v0 = 1U;
        __Vdlyvdim0__cpu__DOT__rf1__DOT__rf__v0 = (0x1fU 
                                                   & (vlSelf->cmd 
                                                      >> 7U));
    }
    vlSelf->pc = ((IData)(vlSelf->rst) ? 0x80000000U
                   : vlSelf->dnpc);
    vlSelf->cpu__DOT__mux5__DOT__i0__DOT__pair_list[0U] 
        = (0x200000000ULL | (QData)((IData)((((- (IData)(
                                                         (1U 
                                                          & (vlSelf->cpu__DOT__src_rd_PMEM_origin 
                                                             >> 0xfU)))) 
                                              << 0x10U) 
                                             | (0xffffU 
                                                & vlSelf->cpu__DOT__src_rd_PMEM_origin)))));
    vlSelf->cpu__DOT__mux5__DOT__i0__DOT__pair_list[1U] 
        = (0x100000000ULL | (QData)((IData)((((- (IData)(
                                                         (1U 
                                                          & (vlSelf->cpu__DOT__src_rd_PMEM_origin 
                                                             >> 7U)))) 
                                              << 8U) 
                                             | (0xffU 
                                                & vlSelf->cpu__DOT__src_rd_PMEM_origin)))));
    vlSelf->cpu__DOT__mux5__DOT__i0__DOT__pair_list[2U] 
        = (QData)((IData)(vlSelf->cpu__DOT__src_rd_PMEM_origin));
    vlSelf->cpu__DOT__mux5__DOT__i0__DOT__data_list[0U] 
        = (((- (IData)((1U & (vlSelf->cpu__DOT__src_rd_PMEM_origin 
                              >> 0xfU)))) << 0x10U) 
           | (0xffffU & vlSelf->cpu__DOT__src_rd_PMEM_origin));
    vlSelf->cpu__DOT__mux5__DOT__i0__DOT__data_list[1U] 
        = (((- (IData)((1U & (vlSelf->cpu__DOT__src_rd_PMEM_origin 
                              >> 7U)))) << 8U) | (0xffU 
                                                  & vlSelf->cpu__DOT__src_rd_PMEM_origin));
    vlSelf->cpu__DOT__mux5__DOT__i0__DOT__data_list[2U] 
        = vlSelf->cpu__DOT__src_rd_PMEM_origin;
    vlSelf->cpu__DOT__cu1__DOT__is_halt = (IData)((0x73U 
                                                   == 
                                                   (0x4000707fU 
                                                    & vlSelf->cmd)));
    if (__Vdlyvset__cpu__DOT__rf1__DOT__rf__v0) {
        vlSelf->cpu__DOT__rf1__DOT__rf[__Vdlyvdim0__cpu__DOT__rf1__DOT__rf__v0] 
            = __Vdlyvval__cpu__DOT__rf1__DOT__rf__v0;
    }
    vlSelf->cpu__DOT__rf1__DOT__rf[0U] = 0U;
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
        = (QData)((IData)(vlSelf->pc));
    vlSelf->cpu__DOT__mux3__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->pc)));
    vlSelf->cpu__DOT__mux2__DOT__i0__DOT__data_list[1U] 
        = vlSelf->pc;
    vlSelf->cpu__DOT__mux3__DOT__i0__DOT__data_list[0U] 
        = vlSelf->pc;
    vlSelf->cpu__DOT__mux2__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->cpu__DOT__src1)));
    vlSelf->cpu__DOT__mux3__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(vlSelf->cpu__DOT__src1));
    vlSelf->cpu__DOT__mux4__DOT__i0__DOT__pair_list[2U] 
        = (QData)((IData)(vlSelf->cpu__DOT__src2));
}
