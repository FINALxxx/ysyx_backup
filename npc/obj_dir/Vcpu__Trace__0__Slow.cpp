// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu__Syms.h"


VL_ATTR_COLD void Vcpu___024root__trace_init_sub__TOP__0(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+140,"clk", false,-1);
    tracep->declBit(c+141,"rst", false,-1);
    tracep->declBus(c+142,"cmd", false,-1, 31,0);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+140,"clk", false,-1);
    tracep->declBit(c+141,"rst", false,-1);
    tracep->declBus(c+142,"cmd", false,-1, 31,0);
    tracep->declBus(c+143,"rs1", false,-1, 4,0);
    tracep->declBus(c+144,"rs2", false,-1, 4,0);
    tracep->declBus(c+172,"rd", false,-1, 4,0);
    tracep->declBus(c+106,"pc", false,-1, 31,0);
    tracep->declBus(c+64,"src1", false,-1, 31,0);
    tracep->declBus(c+65,"src2", false,-1, 31,0);
    tracep->declBus(c+20,"imm", false,-1, 31,0);
    tracep->declBus(c+66,"src_rd", false,-1, 31,0);
    tracep->declBus(c+21,"op_IMM", false,-1, 2,0);
    tracep->declBit(c+22,"op_ALU_Asrc", false,-1);
    tracep->declBus(c+23,"op_ALU_Bsrc", false,-1, 1,0);
    tracep->declBus(c+24,"op_ALU_sel", false,-1, 3,0);
    tracep->declBit(c+145,"en_Wreg", false,-1);
    tracep->declBus(c+67,"a", false,-1, 31,0);
    tracep->declBus(c+68,"b", false,-1, 31,0);
    tracep->pushNamePrefix("alu1 ");
    tracep->declBus(c+24,"sel", false,-1, 3,0);
    tracep->declBus(c+67,"a", false,-1, 31,0);
    tracep->declBus(c+68,"b", false,-1, 31,0);
    tracep->declBus(c+66,"result", false,-1, 31,0);
    tracep->declBit(c+69,"is_zero", false,-1);
    tracep->declBit(c+25,"Sub_Add", false,-1);
    tracep->declBit(c+70,"ADDER_overflow", false,-1);
    tracep->declBit(c+71,"ADDER_carry", false,-1);
    tracep->declBus(c+72,"ADDER_result", false,-1, 31,0);
    tracep->pushNamePrefix("add1 ");
    tracep->declBit(c+25,"mode", false,-1);
    tracep->declBus(c+67,"a", false,-1, 31,0);
    tracep->declBus(c+68,"b", false,-1, 31,0);
    tracep->declBus(c+72,"result", false,-1, 31,0);
    tracep->declBit(c+70,"ADDER_overflow", false,-1);
    tracep->declBit(c+71,"ADDER_carry", false,-1);
    tracep->declBit(c+69,"is_zero", false,-1);
    tracep->declBus(c+73,"add_cin", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux1 ");
    tracep->declBus(c+173,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+174,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+175,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+66,"out", false,-1, 31,0);
    tracep->declBus(c+24,"key", false,-1, 3,0);
    tracep->declBus(c+176,"default_out", false,-1, 31,0);
    tracep->declQuad(c+74,"lut", false,-1, 35,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+173,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+174,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+175,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+173,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+66,"out", false,-1, 31,0);
    tracep->declBus(c+24,"key", false,-1, 3,0);
    tracep->declBus(c+176,"default_out", false,-1, 31,0);
    tracep->declQuad(c+74,"lut", false,-1, 35,0);
    tracep->declBus(c+177,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declQuad(c+76+i*2,"pair_list", true,(i+0), 35,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+78+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+79,"lut_out", false,-1, 31,0);
    tracep->declBit(c+80,"hit", false,-1);
    tracep->declBus(c+178,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("cu1 ");
    tracep->declBus(c+146,"opcode", false,-1, 6,0);
    tracep->declBus(c+147,"funct3", false,-1, 2,0);
    tracep->declBit(c+148,"funct7", false,-1);
    tracep->declBus(c+21,"op_IMM", false,-1, 2,0);
    tracep->declBit(c+145,"en_Wreg", false,-1);
    tracep->declBit(c+149,"en_Wmem", false,-1);
    tracep->declBit(c+150,"branch", false,-1);
    tracep->declBit(c+151,"load", false,-1);
    tracep->declBit(c+22,"op_ALU_Asrc", false,-1);
    tracep->declBus(c+23,"op_ALU_Bsrc", false,-1, 1,0);
    tracep->declBus(c+24,"op_ALU_sel", false,-1, 3,0);
    tracep->declBit(c+152,"I", false,-1);
    tracep->declBit(c+153,"R", false,-1);
    tracep->declBit(c+154,"J", false,-1);
    tracep->declBit(c+149,"S", false,-1);
    tracep->declBit(c+155,"B", false,-1);
    tracep->declBus(c+26,"RI_sel", false,-1, 3,0);
    tracep->declBus(c+156,"B_sel", false,-1, 3,0);
    tracep->declBit(c+151,"I_LOAD", false,-1);
    tracep->declBit(c+157,"I_JALR", false,-1);
    tracep->declBit(c+158,"U_AUIPC", false,-1);
    tracep->declBit(c+159,"U_LUI", false,-1);
    tracep->pushNamePrefix("mux1 ");
    tracep->declBus(c+179,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+180,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+174,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+26,"out", false,-1, 3,0);
    tracep->declBus(c+147,"key", false,-1, 2,0);
    tracep->declBus(c+181,"default_out", false,-1, 3,0);
    tracep->declQuad(c+160,"lut", false,-1, 55,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+179,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+180,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+174,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+173,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+26,"out", false,-1, 3,0);
    tracep->declBus(c+147,"key", false,-1, 2,0);
    tracep->declBus(c+181,"default_out", false,-1, 3,0);
    tracep->declQuad(c+160,"lut", false,-1, 55,0);
    tracep->declBus(c+182,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+27+i*1,"pair_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+2+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+35+i*1,"data_list", true,(i+0), 3,0);
    }
    tracep->declBus(c+43,"lut_out", false,-1, 3,0);
    tracep->declBit(c+44,"hit", false,-1);
    tracep->declBus(c+183,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("dimm1 ");
    tracep->declBus(c+142,"cmd", false,-1, 31,0);
    tracep->declBus(c+21,"op_IMM", false,-1, 2,0);
    tracep->declBus(c+20,"imm", false,-1, 31,0);
    tracep->declBus(c+45,"immI", false,-1, 31,0);
    tracep->declBus(c+162,"immU", false,-1, 31,0);
    tracep->declBus(c+163,"immJ", false,-1, 31,0);
    tracep->declBus(c+164,"immS", false,-1, 31,0);
    tracep->declBus(c+165,"immB", false,-1, 31,0);
    tracep->pushNamePrefix("mux1 ");
    tracep->declBus(c+184,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+180,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+175,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+20,"out", false,-1, 31,0);
    tracep->declBus(c+21,"key", false,-1, 2,0);
    tracep->declBus(c+45,"default_out", false,-1, 31,0);
    tracep->declArray(c+166,"lut", false,-1, 174,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+184,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+180,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+175,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+173,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+20,"out", false,-1, 31,0);
    tracep->declBus(c+21,"key", false,-1, 2,0);
    tracep->declBus(c+45,"default_out", false,-1, 31,0);
    tracep->declArray(c+166,"lut", false,-1, 174,0);
    tracep->declBus(c+185,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+46+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+10+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+56+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+61,"lut_out", false,-1, 31,0);
    tracep->declBit(c+62,"hit", false,-1);
    tracep->declBus(c+186,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("mux1 ");
    tracep->declBus(c+187,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+173,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+175,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+67,"out", false,-1, 31,0);
    tracep->declBus(c+22,"key", false,-1, 0,0);
    tracep->declArray(c+81,"lut", false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+187,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+173,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+175,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+188,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+67,"out", false,-1, 31,0);
    tracep->declBus(c+22,"key", false,-1, 0,0);
    tracep->declBus(c+176,"default_out", false,-1, 31,0);
    tracep->declArray(c+81,"lut", false,-1, 65,0);
    tracep->declBus(c+189,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+84+i*2,"pair_list", true,(i+0), 32,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+15+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+88+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+90,"lut_out", false,-1, 31,0);
    tracep->declBit(c+63,"hit", false,-1);
    tracep->declBus(c+190,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mux2 ");
    tracep->declBus(c+180,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+187,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+175,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+68,"out", false,-1, 31,0);
    tracep->declBus(c+23,"key", false,-1, 1,0);
    tracep->declBus(c+65,"default_out", false,-1, 31,0);
    tracep->declArray(c+91,"lut", false,-1, 101,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+180,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+187,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+175,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+173,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+68,"out", false,-1, 31,0);
    tracep->declBus(c+23,"key", false,-1, 1,0);
    tracep->declBus(c+65,"default_out", false,-1, 31,0);
    tracep->declArray(c+91,"lut", false,-1, 101,0);
    tracep->declBus(c+191,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+95+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+17+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+101+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+104,"lut_out", false,-1, 31,0);
    tracep->declBit(c+105,"hit", false,-1);
    tracep->declBus(c+192,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("pc1 ");
    tracep->declBit(c+140,"clk", false,-1);
    tracep->declBit(c+141,"rst", false,-1);
    tracep->declBus(c+106,"npc", false,-1, 31,0);
    tracep->declBit(c+141,"reset", false,-1);
    tracep->declBus(c+106,"tmp_pc", false,-1, 31,0);
    tracep->declBus(c+107,"result", false,-1, 31,0);
    tracep->pushNamePrefix("pc2snpc ");
    tracep->declBus(c+175,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+193,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+140,"clk", false,-1);
    tracep->declBit(c+141,"rst", false,-1);
    tracep->declBus(c+107,"din", false,-1, 31,0);
    tracep->declBus(c+106,"dout", false,-1, 31,0);
    tracep->declBit(c+194,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("rf1 ");
    tracep->declBus(c+175,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+175,"REG_NUM", false,-1, 31,0);
    tracep->declBus(c+184,"REG_NUM_BIT", false,-1, 31,0);
    tracep->declBit(c+140,"clk", false,-1);
    tracep->declBus(c+143,"raddr_a", false,-1, 4,0);
    tracep->declBus(c+144,"raddr_b", false,-1, 4,0);
    tracep->declBus(c+66,"wdata", false,-1, 31,0);
    tracep->declBus(c+172,"waddr", false,-1, 4,0);
    tracep->declBit(c+145,"wen", false,-1);
    tracep->declBus(c+64,"rdata_a", false,-1, 31,0);
    tracep->declBus(c+65,"rdata_b", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+108+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vcpu___024root__trace_init_top(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_init_top\n"); );
    // Body
    Vcpu___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcpu___024root__trace_register(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vcpu___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vcpu___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vcpu___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcpu___024root__trace_full_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_full_top_0\n"); );
    // Init
    Vcpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu___024root*>(voidSelf);
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcpu___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcpu___024root__trace_full_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_h27f5bc9c__0;
    VlWide<4>/*127:0*/ __Vtemp_h2a03d93b__0;
    VlWide<6>/*191:0*/ __Vtemp_hdace3dd2__0;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list[0]),4);
    bufp->fullCData(oldp+2,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+3,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+4,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+5,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+6,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+7,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list[5]),3);
    bufp->fullCData(oldp+8,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list[6]),3);
    bufp->fullCData(oldp+9,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list[7]),3);
    bufp->fullCData(oldp+10,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+11,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+12,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+13,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+14,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__key_list[4]),3);
    bufp->fullBit(oldp+15,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+16,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__key_list[1]));
    bufp->fullCData(oldp+17,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+18,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+19,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__key_list[2]),2);
    bufp->fullIData(oldp+20,(vlSelf->cpu__DOT__imm),32);
    bufp->fullCData(oldp+21,(vlSelf->cpu__DOT__op_IMM),3);
    bufp->fullBit(oldp+22,(vlSelf->cpu__DOT__op_ALU_Asrc));
    bufp->fullCData(oldp+23,(vlSelf->cpu__DOT__op_ALU_Bsrc),2);
    bufp->fullCData(oldp+24,(vlSelf->cpu__DOT__op_ALU_sel),4);
    bufp->fullBit(oldp+25,((0U != (IData)(vlSelf->cpu__DOT__op_ALU_sel))));
    bufp->fullCData(oldp+26,(vlSelf->cpu__DOT__cu1__DOT__RI_sel),4);
    bufp->fullCData(oldp+27,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__pair_list[0]),7);
    bufp->fullCData(oldp+28,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__pair_list[1]),7);
    bufp->fullCData(oldp+29,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__pair_list[2]),7);
    bufp->fullCData(oldp+30,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__pair_list[3]),7);
    bufp->fullCData(oldp+31,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__pair_list[4]),7);
    bufp->fullCData(oldp+32,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__pair_list[5]),7);
    bufp->fullCData(oldp+33,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__pair_list[6]),7);
    bufp->fullCData(oldp+34,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__pair_list[7]),7);
    bufp->fullCData(oldp+35,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list[0]),4);
    bufp->fullCData(oldp+36,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list[1]),4);
    bufp->fullCData(oldp+37,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list[2]),4);
    bufp->fullCData(oldp+38,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list[3]),4);
    bufp->fullCData(oldp+39,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list[4]),4);
    bufp->fullCData(oldp+40,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list[5]),4);
    bufp->fullCData(oldp+41,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list[6]),4);
    bufp->fullCData(oldp+42,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list[7]),4);
    bufp->fullCData(oldp+43,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__lut_out),4);
    bufp->fullBit(oldp+44,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+45,(vlSelf->cpu__DOT__dimm1__DOT__immI),32);
    bufp->fullQData(oldp+46,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+48,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+50,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+52,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+54,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullIData(oldp+56,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+57,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+58,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+59,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+60,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+61,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+62,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+63,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+64,(vlSelf->cpu__DOT__src1),32);
    bufp->fullIData(oldp+65,(vlSelf->cpu__DOT__src2),32);
    bufp->fullIData(oldp+66,(vlSelf->cpu__DOT__src_rd),32);
    bufp->fullIData(oldp+67,(vlSelf->cpu__DOT__a),32);
    bufp->fullIData(oldp+68,(vlSelf->cpu__DOT__b),32);
    bufp->fullBit(oldp+69,((1U & (~ (IData)((0U != vlSelf->cpu__DOT__alu1__DOT__ADDER_result))))));
    bufp->fullBit(oldp+70,((((vlSelf->cpu__DOT__a >> 0x1fU) 
                             == (vlSelf->cpu__DOT__alu1__DOT__add1__DOT__add_cin 
                                 >> 0x1fU)) & ((vlSelf->cpu__DOT__a 
                                                >> 0x1fU) 
                                               != (vlSelf->cpu__DOT__alu1__DOT__ADDER_result 
                                                   >> 0x1fU)))));
    bufp->fullBit(oldp+71,((1U & (IData)((1ULL & (((QData)((IData)(vlSelf->cpu__DOT__a)) 
                                                   + (QData)((IData)(vlSelf->cpu__DOT__alu1__DOT__add1__DOT__add_cin))) 
                                                  >> 0x20U))))));
    bufp->fullIData(oldp+72,(vlSelf->cpu__DOT__alu1__DOT__ADDER_result),32);
    bufp->fullIData(oldp+73,(vlSelf->cpu__DOT__alu1__DOT__add1__DOT__add_cin),32);
    bufp->fullQData(oldp+74,((QData)((IData)(vlSelf->cpu__DOT__alu1__DOT__ADDER_result))),36);
    bufp->fullQData(oldp+76,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[0]),36);
    bufp->fullIData(oldp+78,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+79,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+80,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__hit));
    __Vtemp_h27f5bc9c__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(vlSelf->cpu__DOT__pc1__DOT__tmp_pc))));
    __Vtemp_h27f5bc9c__0[1U] = ((vlSelf->cpu__DOT__src1 
                                 << 1U) | (IData)((
                                                   (0x100000000ULL 
                                                    | (QData)((IData)(vlSelf->cpu__DOT__pc1__DOT__tmp_pc))) 
                                                   >> 0x20U)));
    __Vtemp_h27f5bc9c__0[2U] = (vlSelf->cpu__DOT__src1 
                                >> 0x1fU);
    bufp->fullWData(oldp+81,(__Vtemp_h27f5bc9c__0),66);
    bufp->fullQData(oldp+84,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+86,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+88,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+89,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+90,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__lut_out),32);
    __Vtemp_h2a03d93b__0[0U] = 4U;
    __Vtemp_h2a03d93b__0[1U] = (2U | (vlSelf->cpu__DOT__imm 
                                      << 2U));
    __Vtemp_h2a03d93b__0[2U] = (4U | ((vlSelf->cpu__DOT__src2 
                                       << 4U) | (vlSelf->cpu__DOT__imm 
                                                 >> 0x1eU)));
    __Vtemp_h2a03d93b__0[3U] = (vlSelf->cpu__DOT__src2 
                                >> 0x1cU);
    bufp->fullWData(oldp+91,(__Vtemp_h2a03d93b__0),102);
    bufp->fullQData(oldp+95,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+97,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+99,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullIData(oldp+101,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+102,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+103,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+104,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+105,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+106,(vlSelf->cpu__DOT__pc1__DOT__tmp_pc),32);
    bufp->fullIData(oldp+107,(((IData)(4U) + vlSelf->cpu__DOT__pc1__DOT__tmp_pc)),32);
    bufp->fullIData(oldp+108,(vlSelf->cpu__DOT__rf1__DOT__rf[0]),32);
    bufp->fullIData(oldp+109,(vlSelf->cpu__DOT__rf1__DOT__rf[1]),32);
    bufp->fullIData(oldp+110,(vlSelf->cpu__DOT__rf1__DOT__rf[2]),32);
    bufp->fullIData(oldp+111,(vlSelf->cpu__DOT__rf1__DOT__rf[3]),32);
    bufp->fullIData(oldp+112,(vlSelf->cpu__DOT__rf1__DOT__rf[4]),32);
    bufp->fullIData(oldp+113,(vlSelf->cpu__DOT__rf1__DOT__rf[5]),32);
    bufp->fullIData(oldp+114,(vlSelf->cpu__DOT__rf1__DOT__rf[6]),32);
    bufp->fullIData(oldp+115,(vlSelf->cpu__DOT__rf1__DOT__rf[7]),32);
    bufp->fullIData(oldp+116,(vlSelf->cpu__DOT__rf1__DOT__rf[8]),32);
    bufp->fullIData(oldp+117,(vlSelf->cpu__DOT__rf1__DOT__rf[9]),32);
    bufp->fullIData(oldp+118,(vlSelf->cpu__DOT__rf1__DOT__rf[10]),32);
    bufp->fullIData(oldp+119,(vlSelf->cpu__DOT__rf1__DOT__rf[11]),32);
    bufp->fullIData(oldp+120,(vlSelf->cpu__DOT__rf1__DOT__rf[12]),32);
    bufp->fullIData(oldp+121,(vlSelf->cpu__DOT__rf1__DOT__rf[13]),32);
    bufp->fullIData(oldp+122,(vlSelf->cpu__DOT__rf1__DOT__rf[14]),32);
    bufp->fullIData(oldp+123,(vlSelf->cpu__DOT__rf1__DOT__rf[15]),32);
    bufp->fullIData(oldp+124,(vlSelf->cpu__DOT__rf1__DOT__rf[16]),32);
    bufp->fullIData(oldp+125,(vlSelf->cpu__DOT__rf1__DOT__rf[17]),32);
    bufp->fullIData(oldp+126,(vlSelf->cpu__DOT__rf1__DOT__rf[18]),32);
    bufp->fullIData(oldp+127,(vlSelf->cpu__DOT__rf1__DOT__rf[19]),32);
    bufp->fullIData(oldp+128,(vlSelf->cpu__DOT__rf1__DOT__rf[20]),32);
    bufp->fullIData(oldp+129,(vlSelf->cpu__DOT__rf1__DOT__rf[21]),32);
    bufp->fullIData(oldp+130,(vlSelf->cpu__DOT__rf1__DOT__rf[22]),32);
    bufp->fullIData(oldp+131,(vlSelf->cpu__DOT__rf1__DOT__rf[23]),32);
    bufp->fullIData(oldp+132,(vlSelf->cpu__DOT__rf1__DOT__rf[24]),32);
    bufp->fullIData(oldp+133,(vlSelf->cpu__DOT__rf1__DOT__rf[25]),32);
    bufp->fullIData(oldp+134,(vlSelf->cpu__DOT__rf1__DOT__rf[26]),32);
    bufp->fullIData(oldp+135,(vlSelf->cpu__DOT__rf1__DOT__rf[27]),32);
    bufp->fullIData(oldp+136,(vlSelf->cpu__DOT__rf1__DOT__rf[28]),32);
    bufp->fullIData(oldp+137,(vlSelf->cpu__DOT__rf1__DOT__rf[29]),32);
    bufp->fullIData(oldp+138,(vlSelf->cpu__DOT__rf1__DOT__rf[30]),32);
    bufp->fullIData(oldp+139,(vlSelf->cpu__DOT__rf1__DOT__rf[31]),32);
    bufp->fullBit(oldp+140,(vlSelf->clk));
    bufp->fullBit(oldp+141,(vlSelf->rst));
    bufp->fullIData(oldp+142,(vlSelf->cmd),32);
    bufp->fullCData(oldp+143,((0x1fU & (vlSelf->cmd 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+144,((0x1fU & (vlSelf->cmd 
                                        >> 0x14U))),5);
    bufp->fullBit(oldp+145,(((IData)(vlSelf->cpu__DOT__cu1__DOT____VdfgTmp_hf442cbef__0) 
                             | ((0x6fU == (0x7fU & vlSelf->cmd)) 
                                | ((3U == (0x7fU & vlSelf->cmd)) 
                                   | ((0x33U == (0x7fU 
                                                 & vlSelf->cmd)) 
                                      | (IData)(vlSelf->cpu__DOT__cu1__DOT____VdfgTmp_hd4cadad9__0)))))));
    bufp->fullCData(oldp+146,((0x7fU & vlSelf->cmd)),7);
    bufp->fullCData(oldp+147,((7U & (vlSelf->cmd >> 0xcU))),3);
    bufp->fullBit(oldp+148,((1U & (vlSelf->cmd >> 0x1eU))));
    bufp->fullBit(oldp+149,((0x23U == (0x7fU & vlSelf->cmd))));
    bufp->fullBit(oldp+150,(((0x63U == (0x7fU & vlSelf->cmd)) 
                             | (IData)(vlSelf->cpu__DOT__cu1__DOT____VdfgTmp_ha0272f88__0))));
    bufp->fullBit(oldp+151,((3U == (0x7fU & vlSelf->cmd))));
    bufp->fullBit(oldp+152,((0x13U == (0x7fU & vlSelf->cmd))));
    bufp->fullBit(oldp+153,((0x33U == (0x7fU & vlSelf->cmd))));
    bufp->fullBit(oldp+154,((0x6fU == (0x7fU & vlSelf->cmd))));
    bufp->fullBit(oldp+155,((0x63U == (0x7fU & vlSelf->cmd))));
    bufp->fullCData(oldp+156,(((IData)((0x6000U == 
                                        (0x6000U & vlSelf->cmd)))
                                ? 9U : ((1U & VL_REDXOR_16(
                                                           (0x6000U 
                                                            & vlSelf->cmd)))
                                         ? 8U : 1U))),4);
    bufp->fullBit(oldp+157,((0x67U == (0x7fU & vlSelf->cmd))));
    bufp->fullBit(oldp+158,((0x17U == (0x7fU & vlSelf->cmd))));
    bufp->fullBit(oldp+159,((0x37U == (0x7fU & vlSelf->cmd))));
    bufp->fullQData(oldp+160,((0x714398d40000ULL | 
                               (((QData)((IData)(((IData)(
                                                          (0x40000033U 
                                                           == 
                                                           (0x4000007fU 
                                                            & vlSelf->cmd)))
                                                   ? 1U
                                                   : 0U))) 
                                 << 0x31U) | (QData)((IData)(
                                                             (0x32f4U 
                                                              | (((0x40000000U 
                                                                   & vlSelf->cmd)
                                                                   ? 0xeU
                                                                   : 0xdU) 
                                                                 << 0xeU))))))),56);
    bufp->fullIData(oldp+162,((0xfffff000U & vlSelf->cmd)),32);
    bufp->fullIData(oldp+163,((((- (IData)((vlSelf->cmd 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->cmd) 
                                             | ((0x800U 
                                                 & (vlSelf->cmd 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->cmd 
                                                      >> 0x14U)))))),32);
    bufp->fullIData(oldp+164,((((- (IData)((vlSelf->cmd 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->cmd 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->cmd 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+165,((((- (IData)((vlSelf->cmd 
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
    bufp->fullWData(oldp+166,(__Vtemp_hdace3dd2__0),175);
    bufp->fullCData(oldp+172,(1U),5);
    bufp->fullIData(oldp+173,(1U),32);
    bufp->fullIData(oldp+174,(4U),32);
    bufp->fullIData(oldp+175,(0x20U),32);
    bufp->fullIData(oldp+176,(0U),32);
    bufp->fullIData(oldp+177,(0x24U),32);
    bufp->fullIData(oldp+178,(1U),32);
    bufp->fullIData(oldp+179,(8U),32);
    bufp->fullIData(oldp+180,(3U),32);
    bufp->fullCData(oldp+181,(0U),4);
    bufp->fullIData(oldp+182,(7U),32);
    bufp->fullIData(oldp+183,(8U),32);
    bufp->fullIData(oldp+184,(5U),32);
    bufp->fullIData(oldp+185,(0x23U),32);
    bufp->fullIData(oldp+186,(5U),32);
    bufp->fullIData(oldp+187,(2U),32);
    bufp->fullIData(oldp+188,(0U),32);
    bufp->fullIData(oldp+189,(0x21U),32);
    bufp->fullIData(oldp+190,(2U),32);
    bufp->fullIData(oldp+191,(0x22U),32);
    bufp->fullIData(oldp+192,(3U),32);
    bufp->fullIData(oldp+193,(0x80000000U),32);
    bufp->fullBit(oldp+194,(1U));
}
