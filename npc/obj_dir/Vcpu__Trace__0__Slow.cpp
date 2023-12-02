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
    tracep->declBit(c+305,"clk", false,-1);
    tracep->declBit(c+306,"rst", false,-1);
    tracep->declBus(c+307,"cmd", false,-1, 31,0);
    tracep->declBus(c+308,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+305,"clk", false,-1);
    tracep->declBit(c+306,"rst", false,-1);
    tracep->declBus(c+307,"cmd", false,-1, 31,0);
    tracep->declBus(c+308,"pc", false,-1, 31,0);
    tracep->declBus(c+309,"rs1", false,-1, 4,0);
    tracep->declBus(c+310,"rs2", false,-1, 4,0);
    tracep->declBus(c+339,"rd", false,-1, 4,0);
    tracep->declBus(c+158,"src1", false,-1, 31,0);
    tracep->declBus(c+159,"src2", false,-1, 31,0);
    tracep->declBus(c+66,"imm", false,-1, 31,0);
    tracep->declBus(c+160,"src_rd", false,-1, 31,0);
    tracep->declBus(c+67,"op_IMM", false,-1, 2,0);
    tracep->declBit(c+68,"op_ALU_Asrc", false,-1);
    tracep->declBus(c+69,"op_ALU_Bsrc", false,-1, 1,0);
    tracep->declBus(c+70,"op_ALU_sel", false,-1, 3,0);
    tracep->declBit(c+161,"op_PC_Asrc", false,-1);
    tracep->declBit(c+71,"op_PC_Bsrc", false,-1);
    tracep->declBit(c+311,"en_Wreg", false,-1);
    tracep->declBit(c+162,"LESS", false,-1);
    tracep->declBit(c+163,"IS_ZERO", false,-1);
    tracep->declBus(c+164,"a0", false,-1, 31,0);
    tracep->declBus(c+165,"b0", false,-1, 31,0);
    tracep->declBus(c+166,"a1", false,-1, 31,0);
    tracep->declBus(c+167,"b1", false,-1, 31,0);
    tracep->declBit(c+72,"L_R", false,-1);
    tracep->declBit(c+73,"S_U", false,-1);
    tracep->declBit(c+74,"A_L", false,-1);
    tracep->declBit(c+75,"Add_Sub", false,-1);
    tracep->pushNamePrefix("alu1 ");
    tracep->declBus(c+76,"sel", false,-1, 2,0);
    tracep->declBit(c+74,"A_L", false,-1);
    tracep->declBit(c+72,"L_R", false,-1);
    tracep->declBit(c+73,"S_U", false,-1);
    tracep->declBit(c+75,"Add_Sub", false,-1);
    tracep->declBus(c+166,"a", false,-1, 31,0);
    tracep->declBus(c+167,"b", false,-1, 31,0);
    tracep->declBus(c+160,"result", false,-1, 31,0);
    tracep->declBit(c+162,"LESS", false,-1);
    tracep->declBit(c+163,"IS_ZERO", false,-1);
    tracep->declBus(c+168,"ADDER_result", false,-1, 31,0);
    tracep->declBus(c+169,"SHIFT_result", false,-1, 31,0);
    tracep->declBus(c+170,"AND_result", false,-1, 31,0);
    tracep->declBus(c+171,"OR_result", false,-1, 31,0);
    tracep->declBus(c+172,"XOR_result", false,-1, 31,0);
    tracep->pushNamePrefix("add1 ");
    tracep->declBit(c+75,"mode", false,-1);
    tracep->declBus(c+166,"a", false,-1, 31,0);
    tracep->declBus(c+167,"b", false,-1, 31,0);
    tracep->declBit(c+73,"S_U", false,-1);
    tracep->declBus(c+168,"result", false,-1, 31,0);
    tracep->declBit(c+162,"LESS", false,-1);
    tracep->declBit(c+163,"IS_ZERO", false,-1);
    tracep->declBit(c+173,"overflow", false,-1);
    tracep->declBit(c+174,"carry", false,-1);
    tracep->declBit(c+175,"LESS_u", false,-1);
    tracep->declBit(c+176,"LESS_s", false,-1);
    tracep->declBus(c+177,"add_cin", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux1 ");
    tracep->declBus(c+340,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+341,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+342,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+160,"out", false,-1, 31,0);
    tracep->declBus(c+76,"key", false,-1, 2,0);
    tracep->declBus(c+343,"default_out", false,-1, 31,0);
    tracep->declArray(c+178,"lut", false,-1, 279,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+340,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+341,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+342,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+344,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+160,"out", false,-1, 31,0);
    tracep->declBus(c+76,"key", false,-1, 2,0);
    tracep->declBus(c+343,"default_out", false,-1, 31,0);
    tracep->declArray(c+178,"lut", false,-1, 279,0);
    tracep->declBus(c+345,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+187+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+203+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+211,"lut_out", false,-1, 31,0);
    tracep->declBit(c+212,"hit", false,-1);
    tracep->declBus(c+346,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("shift1 ");
    tracep->declBit(c+72,"L_R", false,-1);
    tracep->declBit(c+74,"A_L", false,-1);
    tracep->declBus(c+166,"in", false,-1, 31,0);
    tracep->declBus(c+167,"soffset", false,-1, 31,0);
    tracep->declBus(c+169,"out", false,-1, 31,0);
    tracep->pushNamePrefix("mux1 ");
    tracep->declBus(c+341,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+347,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+342,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+169,"out", false,-1, 31,0);
    tracep->declBus(c+77,"key", false,-1, 1,0);
    tracep->declBus(c+213,"default_out", false,-1, 31,0);
    tracep->declArray(c+214,"lut", false,-1, 101,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+341,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+347,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+342,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+344,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+169,"out", false,-1, 31,0);
    tracep->declBus(c+77,"key", false,-1, 1,0);
    tracep->declBus(c+213,"default_out", false,-1, 31,0);
    tracep->declArray(c+214,"lut", false,-1, 101,0);
    tracep->declBus(c+348,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+218+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+9+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+224+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+227,"lut_out", false,-1, 31,0);
    tracep->declBit(c+228,"hit", false,-1);
    tracep->declBus(c+349,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("cu1 ");
    tracep->declBit(c+305,"clk", false,-1);
    tracep->declBus(c+312,"opcode", false,-1, 6,0);
    tracep->declBus(c+313,"funct3", false,-1, 2,0);
    tracep->declBit(c+314,"funct7", false,-1);
    tracep->declBit(c+163,"IS_ZERO", false,-1);
    tracep->declBit(c+162,"LESS", false,-1);
    tracep->declBus(c+67,"op_IMM", false,-1, 2,0);
    tracep->declBit(c+311,"en_Wreg", false,-1);
    tracep->declBit(c+315,"store", false,-1);
    tracep->declBit(c+316,"load", false,-1);
    tracep->declBit(c+68,"op_ALU_Asrc", false,-1);
    tracep->declBus(c+69,"op_ALU_Bsrc", false,-1, 1,0);
    tracep->declBus(c+70,"op_ALU_sel", false,-1, 3,0);
    tracep->declBit(c+161,"op_PC_Asrc", false,-1);
    tracep->declBit(c+71,"op_PC_Bsrc", false,-1);
    tracep->declBit(c+317,"I", false,-1);
    tracep->declBit(c+318,"R", false,-1);
    tracep->declBit(c+319,"J", false,-1);
    tracep->declBit(c+315,"S", false,-1);
    tracep->declBit(c+320,"B", false,-1);
    tracep->declBus(c+78,"R_sel", false,-1, 3,0);
    tracep->declBus(c+79,"I_sel", false,-1, 3,0);
    tracep->declBit(c+316,"I_LOAD", false,-1);
    tracep->declBit(c+321,"I_JALR", false,-1);
    tracep->declBit(c+322,"U_AUIPC", false,-1);
    tracep->declBit(c+323,"U_LUI", false,-1);
    tracep->declBus(c+80,"branch", false,-1, 2,0);
    tracep->declBus(c+81,"branch_tmp", false,-1, 2,0);
    tracep->declBit(c+271,"is_dead", false,-1);
    tracep->pushNamePrefix("mux1 ");
    tracep->declBus(c+341,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+350,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+341,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+80,"out", false,-1, 2,0);
    tracep->declBus(c+324,"key", false,-1, 4,0);
    tracep->declBus(c+351,"default_out", false,-1, 2,0);
    tracep->declBus(c+82,"lut", false,-1, 23,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+341,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+350,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+341,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+344,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+80,"out", false,-1, 2,0);
    tracep->declBus(c+324,"key", false,-1, 4,0);
    tracep->declBus(c+351,"default_out", false,-1, 2,0);
    tracep->declBus(c+82,"lut", false,-1, 23,0);
    tracep->declBus(c+340,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+83+i*1,"pair_list", true,(i+0), 7,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+12+i*1,"key_list", true,(i+0), 4,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+86+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+89,"lut_out", false,-1, 2,0);
    tracep->declBit(c+90,"hit", false,-1);
    tracep->declBus(c+349,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mux2 ");
    tracep->declBus(c+352,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+341,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+341,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+81,"out", false,-1, 2,0);
    tracep->declBus(c+313,"key", false,-1, 2,0);
    tracep->declBus(c+353,"default_out", false,-1, 2,0);
    tracep->declQuad(c+354,"lut", false,-1, 41,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+352,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+341,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+341,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+344,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+81,"out", false,-1, 2,0);
    tracep->declBus(c+313,"key", false,-1, 2,0);
    tracep->declBus(c+353,"default_out", false,-1, 2,0);
    tracep->declQuad(c+354,"lut", false,-1, 41,0);
    tracep->declBus(c+356,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+15+i*1,"pair_list", true,(i+0), 5,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+22+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+29+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+91,"lut_out", false,-1, 2,0);
    tracep->declBit(c+92,"hit", false,-1);
    tracep->declBus(c+357,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mux3 ");
    tracep->declBus(c+340,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+341,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+358,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+78,"out", false,-1, 3,0);
    tracep->declBus(c+313,"key", false,-1, 2,0);
    tracep->declBus(c+359,"default_out", false,-1, 3,0);
    tracep->declQuad(c+325,"lut", false,-1, 55,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+340,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+341,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+358,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+344,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+78,"out", false,-1, 3,0);
    tracep->declBus(c+313,"key", false,-1, 2,0);
    tracep->declBus(c+359,"default_out", false,-1, 3,0);
    tracep->declQuad(c+325,"lut", false,-1, 55,0);
    tracep->declBus(c+352,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+93+i*1,"pair_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+36+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+101+i*1,"data_list", true,(i+0), 3,0);
    }
    tracep->declBus(c+109,"lut_out", false,-1, 3,0);
    tracep->declBit(c+110,"hit", false,-1);
    tracep->declBus(c+346,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mux4 ");
    tracep->declBus(c+340,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+341,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+358,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+79,"out", false,-1, 3,0);
    tracep->declBus(c+313,"key", false,-1, 2,0);
    tracep->declBus(c+359,"default_out", false,-1, 3,0);
    tracep->declQuad(c+327,"lut", false,-1, 55,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+340,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+341,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+358,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+344,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+79,"out", false,-1, 3,0);
    tracep->declBus(c+313,"key", false,-1, 2,0);
    tracep->declBus(c+359,"default_out", false,-1, 3,0);
    tracep->declQuad(c+327,"lut", false,-1, 55,0);
    tracep->declBus(c+352,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+111+i*1,"pair_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+44+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+119+i*1,"data_list", true,(i+0), 3,0);
    }
    tracep->declBus(c+127,"lut_out", false,-1, 3,0);
    tracep->declBit(c+128,"hit", false,-1);
    tracep->declBus(c+346,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("dimm1 ");
    tracep->declBus(c+307,"cmd", false,-1, 31,0);
    tracep->declBus(c+67,"op_IMM", false,-1, 2,0);
    tracep->declBus(c+66,"imm", false,-1, 31,0);
    tracep->declBus(c+129,"immI", false,-1, 31,0);
    tracep->declBus(c+329,"immU", false,-1, 31,0);
    tracep->declBus(c+330,"immJ", false,-1, 31,0);
    tracep->declBus(c+331,"immS", false,-1, 31,0);
    tracep->declBus(c+332,"immB", false,-1, 31,0);
    tracep->pushNamePrefix("mux1 ");
    tracep->declBus(c+350,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+341,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+342,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+66,"out", false,-1, 31,0);
    tracep->declBus(c+67,"key", false,-1, 2,0);
    tracep->declBus(c+129,"default_out", false,-1, 31,0);
    tracep->declArray(c+333,"lut", false,-1, 174,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+350,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+341,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+342,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+344,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+66,"out", false,-1, 31,0);
    tracep->declBus(c+67,"key", false,-1, 2,0);
    tracep->declBus(c+129,"default_out", false,-1, 31,0);
    tracep->declArray(c+333,"lut", false,-1, 174,0);
    tracep->declBus(c+345,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+130+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+52+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+140+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+145,"lut_out", false,-1, 31,0);
    tracep->declBit(c+146,"hit", false,-1);
    tracep->declBus(c+360,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("mux1 ");
    tracep->declBus(c+347,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+344,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+342,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+164,"out", false,-1, 31,0);
    tracep->declBus(c+161,"key", false,-1, 0,0);
    tracep->declArray(c+147,"lut", false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+347,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+344,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+342,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+361,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+164,"out", false,-1, 31,0);
    tracep->declBus(c+161,"key", false,-1, 0,0);
    tracep->declBus(c+343,"default_out", false,-1, 31,0);
    tracep->declArray(c+147,"lut", false,-1, 65,0);
    tracep->declBus(c+362,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+150+i*2,"pair_list", true,(i+0), 32,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+57+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+154+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+229,"lut_out", false,-1, 31,0);
    tracep->declBit(c+230,"hit", false,-1);
    tracep->declBus(c+363,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mux2 ");
    tracep->declBus(c+347,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+344,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+342,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+165,"out", false,-1, 31,0);
    tracep->declBus(c+71,"key", false,-1, 0,0);
    tracep->declArray(c+231,"lut", false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+347,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+344,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+342,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+361,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+165,"out", false,-1, 31,0);
    tracep->declBus(c+71,"key", false,-1, 0,0);
    tracep->declBus(c+343,"default_out", false,-1, 31,0);
    tracep->declArray(c+231,"lut", false,-1, 65,0);
    tracep->declBus(c+362,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+234+i*2,"pair_list", true,(i+0), 32,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+59+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+238+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+240,"lut_out", false,-1, 31,0);
    tracep->declBit(c+156,"hit", false,-1);
    tracep->declBus(c+363,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mux3 ");
    tracep->declBus(c+347,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+344,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+342,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+166,"out", false,-1, 31,0);
    tracep->declBus(c+68,"key", false,-1, 0,0);
    tracep->declArray(c+241,"lut", false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+347,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+344,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+342,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+361,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+166,"out", false,-1, 31,0);
    tracep->declBus(c+68,"key", false,-1, 0,0);
    tracep->declBus(c+343,"default_out", false,-1, 31,0);
    tracep->declArray(c+241,"lut", false,-1, 65,0);
    tracep->declBus(c+362,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+244+i*2,"pair_list", true,(i+0), 32,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+61+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+248+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+250,"lut_out", false,-1, 31,0);
    tracep->declBit(c+157,"hit", false,-1);
    tracep->declBus(c+363,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mux4 ");
    tracep->declBus(c+341,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+347,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+342,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+167,"out", false,-1, 31,0);
    tracep->declBus(c+69,"key", false,-1, 1,0);
    tracep->declBus(c+159,"default_out", false,-1, 31,0);
    tracep->declArray(c+251,"lut", false,-1, 101,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+341,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+347,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+342,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+344,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+167,"out", false,-1, 31,0);
    tracep->declBus(c+69,"key", false,-1, 1,0);
    tracep->declBus(c+159,"default_out", false,-1, 31,0);
    tracep->declArray(c+251,"lut", false,-1, 101,0);
    tracep->declBus(c+348,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+255+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+63+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+261+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+264,"lut_out", false,-1, 31,0);
    tracep->declBit(c+265,"hit", false,-1);
    tracep->declBus(c+349,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("pc1 ");
    tracep->declBit(c+305,"clk", false,-1);
    tracep->declBit(c+306,"rst", false,-1);
    tracep->declBus(c+164,"a", false,-1, 31,0);
    tracep->declBus(c+165,"b", false,-1, 31,0);
    tracep->declBit(c+364,"wen", false,-1);
    tracep->declBus(c+308,"npc", false,-1, 31,0);
    tracep->declBus(c+272,"tmp_pc", false,-1, 31,0);
    tracep->declBus(c+266,"result", false,-1, 31,0);
    tracep->pushNamePrefix("add1 ");
    tracep->declBit(c+365,"mode", false,-1);
    tracep->declBus(c+164,"a", false,-1, 31,0);
    tracep->declBus(c+165,"b", false,-1, 31,0);
    tracep->declBit(c+364,"S_U", false,-1);
    tracep->declBus(c+266,"result", false,-1, 31,0);
    tracep->declBit(c+267,"LESS", false,-1);
    tracep->declBit(c+268,"IS_ZERO", false,-1);
    tracep->declBit(c+269,"overflow", false,-1);
    tracep->declBit(c+267,"carry", false,-1);
    tracep->declBit(c+267,"LESS_u", false,-1);
    tracep->declBit(c+270,"LESS_s", false,-1);
    tracep->declBus(c+165,"add_cin", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc2snpc ");
    tracep->declBus(c+342,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+366,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+305,"clk", false,-1);
    tracep->declBit(c+306,"rst", false,-1);
    tracep->declBus(c+266,"din", false,-1, 31,0);
    tracep->declBus(c+272,"dout", false,-1, 31,0);
    tracep->declBit(c+364,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("rf1 ");
    tracep->declBus(c+342,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+342,"REG_NUM", false,-1, 31,0);
    tracep->declBus(c+350,"REG_NUM_BIT", false,-1, 31,0);
    tracep->declBit(c+305,"clk", false,-1);
    tracep->declBus(c+309,"raddr_a", false,-1, 4,0);
    tracep->declBus(c+310,"raddr_b", false,-1, 4,0);
    tracep->declBus(c+160,"wdata", false,-1, 31,0);
    tracep->declBus(c+339,"waddr", false,-1, 4,0);
    tracep->declBit(c+311,"wen", false,-1);
    tracep->declBus(c+158,"rdata_a", false,-1, 31,0);
    tracep->declBus(c+159,"rdata_b", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+273+i*1,"rf", true,(i+0), 31,0);
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
    VlWide<3>/*95:0*/ __Vtemp_hfeedee49__0;
    VlWide<9>/*287:0*/ __Vtemp_h0b480982__0;
    VlWide<4>/*127:0*/ __Vtemp_hedab82a1__0;
    VlWide<3>/*95:0*/ __Vtemp_hc856c7a6__0;
    VlWide<3>/*95:0*/ __Vtemp_h27f5bc9c__0;
    VlWide<4>/*127:0*/ __Vtemp_h2a03d93b__0;
    VlWide<6>/*191:0*/ __Vtemp_hdace3dd2__0;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+2,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+3,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+4,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+5,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+6,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list[5]),3);
    bufp->fullCData(oldp+7,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list[6]),3);
    bufp->fullCData(oldp+8,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__key_list[7]),3);
    bufp->fullCData(oldp+9,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+10,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+11,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+12,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list[0]),5);
    bufp->fullCData(oldp+13,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list[1]),5);
    bufp->fullCData(oldp+14,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list[2]),5);
    bufp->fullCData(oldp+15,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__pair_list[0]),6);
    bufp->fullCData(oldp+16,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__pair_list[1]),6);
    bufp->fullCData(oldp+17,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__pair_list[2]),6);
    bufp->fullCData(oldp+18,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__pair_list[3]),6);
    bufp->fullCData(oldp+19,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__pair_list[4]),6);
    bufp->fullCData(oldp+20,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__pair_list[5]),6);
    bufp->fullCData(oldp+21,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__pair_list[6]),6);
    bufp->fullCData(oldp+22,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+23,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+24,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+25,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+26,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+27,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list[5]),3);
    bufp->fullCData(oldp+28,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list[6]),3);
    bufp->fullCData(oldp+29,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__data_list[0]),3);
    bufp->fullCData(oldp+30,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__data_list[1]),3);
    bufp->fullCData(oldp+31,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__data_list[2]),3);
    bufp->fullCData(oldp+32,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__data_list[3]),3);
    bufp->fullCData(oldp+33,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__data_list[4]),3);
    bufp->fullCData(oldp+34,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__data_list[5]),3);
    bufp->fullCData(oldp+35,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__data_list[6]),3);
    bufp->fullCData(oldp+36,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+37,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+38,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+39,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+40,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+41,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list[5]),3);
    bufp->fullCData(oldp+42,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list[6]),3);
    bufp->fullCData(oldp+43,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list[7]),3);
    bufp->fullCData(oldp+44,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+45,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+46,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+47,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+48,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+49,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list[5]),3);
    bufp->fullCData(oldp+50,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list[6]),3);
    bufp->fullCData(oldp+51,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__key_list[7]),3);
    bufp->fullCData(oldp+52,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+53,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+54,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+55,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+56,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__key_list[4]),3);
    bufp->fullBit(oldp+57,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+58,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__key_list[1]));
    bufp->fullBit(oldp+59,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+60,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__key_list[1]));
    bufp->fullBit(oldp+61,(vlSelf->cpu__DOT__mux3__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+62,(vlSelf->cpu__DOT__mux3__DOT__i0__DOT__key_list[1]));
    bufp->fullCData(oldp+63,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+64,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+65,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__key_list[2]),2);
    bufp->fullIData(oldp+66,(vlSelf->cpu__DOT__imm),32);
    bufp->fullCData(oldp+67,(vlSelf->cpu__DOT__op_IMM),3);
    bufp->fullBit(oldp+68,(vlSelf->cpu__DOT__op_ALU_Asrc));
    bufp->fullCData(oldp+69,(vlSelf->cpu__DOT__op_ALU_Bsrc),2);
    bufp->fullCData(oldp+70,(vlSelf->cpu__DOT__op_ALU_sel),4);
    bufp->fullBit(oldp+71,(vlSelf->cpu__DOT__op_PC_Bsrc));
    bufp->fullBit(oldp+72,((1U != (IData)(vlSelf->cpu__DOT__op_ALU_sel))));
    bufp->fullBit(oldp+73,((2U != (IData)(vlSelf->cpu__DOT__op_ALU_sel))));
    bufp->fullBit(oldp+74,((0xdU != (IData)(vlSelf->cpu__DOT__op_ALU_sel))));
    bufp->fullBit(oldp+75,((0U != (IData)(vlSelf->cpu__DOT__op_ALU_sel))));
    bufp->fullCData(oldp+76,((7U & (IData)(vlSelf->cpu__DOT__op_ALU_sel))),3);
    bufp->fullCData(oldp+77,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT____Vcellinp__mux1____pinNumber2),2);
    bufp->fullCData(oldp+78,(vlSelf->cpu__DOT__cu1__DOT__R_sel),4);
    bufp->fullCData(oldp+79,(vlSelf->cpu__DOT__cu1__DOT__I_sel),4);
    bufp->fullCData(oldp+80,(vlSelf->cpu__DOT__cu1__DOT__branch),3);
    bufp->fullCData(oldp+81,(vlSelf->cpu__DOT__cu1__DOT__branch_tmp),3);
    bufp->fullIData(oldp+82,((0xcad9c0U | (IData)(vlSelf->cpu__DOT__cu1__DOT__branch_tmp))),24);
    bufp->fullCData(oldp+83,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__pair_list[0]),8);
    bufp->fullCData(oldp+84,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__pair_list[1]),8);
    bufp->fullCData(oldp+85,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__pair_list[2]),8);
    bufp->fullCData(oldp+86,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list[0]),3);
    bufp->fullCData(oldp+87,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list[1]),3);
    bufp->fullCData(oldp+88,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list[2]),3);
    bufp->fullCData(oldp+89,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+90,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+91,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+92,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+93,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[0]),7);
    bufp->fullCData(oldp+94,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[1]),7);
    bufp->fullCData(oldp+95,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[2]),7);
    bufp->fullCData(oldp+96,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[3]),7);
    bufp->fullCData(oldp+97,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[4]),7);
    bufp->fullCData(oldp+98,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[5]),7);
    bufp->fullCData(oldp+99,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[6]),7);
    bufp->fullCData(oldp+100,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[7]),7);
    bufp->fullCData(oldp+101,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[0]),4);
    bufp->fullCData(oldp+102,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[1]),4);
    bufp->fullCData(oldp+103,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[2]),4);
    bufp->fullCData(oldp+104,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[3]),4);
    bufp->fullCData(oldp+105,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[4]),4);
    bufp->fullCData(oldp+106,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[5]),4);
    bufp->fullCData(oldp+107,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[6]),4);
    bufp->fullCData(oldp+108,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[7]),4);
    bufp->fullCData(oldp+109,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__lut_out),4);
    bufp->fullBit(oldp+110,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+111,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__pair_list[0]),7);
    bufp->fullCData(oldp+112,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__pair_list[1]),7);
    bufp->fullCData(oldp+113,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__pair_list[2]),7);
    bufp->fullCData(oldp+114,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__pair_list[3]),7);
    bufp->fullCData(oldp+115,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__pair_list[4]),7);
    bufp->fullCData(oldp+116,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__pair_list[5]),7);
    bufp->fullCData(oldp+117,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__pair_list[6]),7);
    bufp->fullCData(oldp+118,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__pair_list[7]),7);
    bufp->fullCData(oldp+119,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list[0]),4);
    bufp->fullCData(oldp+120,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list[1]),4);
    bufp->fullCData(oldp+121,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list[2]),4);
    bufp->fullCData(oldp+122,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list[3]),4);
    bufp->fullCData(oldp+123,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list[4]),4);
    bufp->fullCData(oldp+124,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list[5]),4);
    bufp->fullCData(oldp+125,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list[6]),4);
    bufp->fullCData(oldp+126,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list[7]),4);
    bufp->fullCData(oldp+127,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__lut_out),4);
    bufp->fullBit(oldp+128,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+129,(vlSelf->cpu__DOT__dimm1__DOT__immI),32);
    bufp->fullQData(oldp+130,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+132,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+134,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+136,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+138,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullIData(oldp+140,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+141,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+142,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+143,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+144,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+145,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+146,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__hit));
    __Vtemp_hfeedee49__0[0U] = vlSelf->cpu__DOT__imm;
    __Vtemp_hfeedee49__0[1U] = 9U;
    __Vtemp_hfeedee49__0[2U] = 0U;
    bufp->fullWData(oldp+147,(__Vtemp_hfeedee49__0),66);
    bufp->fullQData(oldp+150,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+152,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+154,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+155,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__data_list[1]),32);
    bufp->fullBit(oldp+156,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+157,(vlSelf->cpu__DOT__mux3__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+158,(vlSelf->cpu__DOT__src1),32);
    bufp->fullIData(oldp+159,(vlSelf->cpu__DOT__src2),32);
    bufp->fullIData(oldp+160,(vlSelf->cpu__DOT__src_rd),32);
    bufp->fullBit(oldp+161,(vlSelf->cpu__DOT__op_PC_Asrc));
    bufp->fullBit(oldp+162,(vlSelf->cpu__DOT__LESS));
    bufp->fullBit(oldp+163,((1U & (~ (IData)((0U != vlSelf->cpu__DOT__alu1__DOT__ADDER_result))))));
    bufp->fullIData(oldp+164,(vlSelf->cpu__DOT__a0),32);
    bufp->fullIData(oldp+165,(vlSelf->cpu__DOT__b0),32);
    bufp->fullIData(oldp+166,(vlSelf->cpu__DOT__a1),32);
    bufp->fullIData(oldp+167,(vlSelf->cpu__DOT__b1),32);
    bufp->fullIData(oldp+168,(vlSelf->cpu__DOT__alu1__DOT__ADDER_result),32);
    bufp->fullIData(oldp+169,(vlSelf->cpu__DOT__alu1__DOT__SHIFT_result),32);
    bufp->fullIData(oldp+170,((vlSelf->cpu__DOT__a1 
                               & vlSelf->cpu__DOT__b1)),32);
    bufp->fullIData(oldp+171,((vlSelf->cpu__DOT__a1 
                               | vlSelf->cpu__DOT__b1)),32);
    bufp->fullIData(oldp+172,((vlSelf->cpu__DOT__a1 
                               ^ vlSelf->cpu__DOT__b1)),32);
    bufp->fullBit(oldp+173,((((vlSelf->cpu__DOT__a1 
                               >> 0x1fU) == (vlSelf->cpu__DOT__alu1__DOT__add1__DOT__add_cin 
                                             >> 0x1fU)) 
                             & ((vlSelf->cpu__DOT__a1 
                                 >> 0x1fU) != (vlSelf->cpu__DOT__alu1__DOT__ADDER_result 
                                               >> 0x1fU)))));
    bufp->fullBit(oldp+174,((1U & (IData)((1ULL & (
                                                   ((QData)((IData)(vlSelf->cpu__DOT__a1)) 
                                                    + (QData)((IData)(vlSelf->cpu__DOT__alu1__DOT__add1__DOT__add_cin))) 
                                                   >> 0x20U))))));
    bufp->fullBit(oldp+175,((1U & ((0U != (IData)(vlSelf->cpu__DOT__op_ALU_sel)) 
                                   ^ (IData)((1ULL 
                                              & (((QData)((IData)(vlSelf->cpu__DOT__a1)) 
                                                  + (QData)((IData)(vlSelf->cpu__DOT__alu1__DOT__add1__DOT__add_cin))) 
                                                 >> 0x20U)))))));
    bufp->fullBit(oldp+176,((1U & ((((vlSelf->cpu__DOT__a1 
                                      >> 0x1fU) == 
                                     (vlSelf->cpu__DOT__alu1__DOT__add1__DOT__add_cin 
                                      >> 0x1fU)) & 
                                    ((vlSelf->cpu__DOT__a1 
                                      >> 0x1fU) != 
                                     (vlSelf->cpu__DOT__alu1__DOT__ADDER_result 
                                      >> 0x1fU))) ^ 
                                   (vlSelf->cpu__DOT__alu1__DOT__ADDER_result 
                                    >> 0x1fU)))));
    bufp->fullIData(oldp+177,(vlSelf->cpu__DOT__alu1__DOT__add1__DOT__add_cin),32);
    __Vtemp_h0b480982__0[0U] = (IData)((0x700000000ULL 
                                        | (QData)((IData)(
                                                          (vlSelf->cpu__DOT__a1 
                                                           & vlSelf->cpu__DOT__b1)))));
    __Vtemp_h0b480982__0[1U] = (((vlSelf->cpu__DOT__a1 
                                  | vlSelf->cpu__DOT__b1) 
                                 << 3U) | (IData)((
                                                   (0x700000000ULL 
                                                    | (QData)((IData)(
                                                                      (vlSelf->cpu__DOT__a1 
                                                                       & vlSelf->cpu__DOT__b1)))) 
                                                   >> 0x20U)));
    __Vtemp_h0b480982__0[2U] = (0x30U | ((vlSelf->cpu__DOT__alu1__DOT__SHIFT_result 
                                          << 6U) | 
                                         ((vlSelf->cpu__DOT__a1 
                                           | vlSelf->cpu__DOT__b1) 
                                          >> 0x1dU)));
    __Vtemp_h0b480982__0[3U] = (0x140U | (((vlSelf->cpu__DOT__a1 
                                            ^ vlSelf->cpu__DOT__b1) 
                                           << 9U) | 
                                          (vlSelf->cpu__DOT__alu1__DOT__SHIFT_result 
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
    bufp->fullWData(oldp+178,(__Vtemp_h0b480982__0),280);
    bufp->fullQData(oldp+187,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+189,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+191,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+193,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+195,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullQData(oldp+197,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[5]),35);
    bufp->fullQData(oldp+199,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[6]),35);
    bufp->fullQData(oldp+201,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[7]),35);
    bufp->fullIData(oldp+203,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+204,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+205,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+206,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+207,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+208,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+209,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+210,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+211,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+212,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+213,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT____Vcellinp__mux1____pinNumber3),32);
    __Vtemp_hedab82a1__0[0U] = (IData)((QData)((IData)(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT____Vcellinp__mux1____pinNumber3)));
    __Vtemp_hedab82a1__0[1U] = ((((0x1fU >= vlSelf->cpu__DOT__b1)
                                   ? (vlSelf->cpu__DOT__a1 
                                      << vlSelf->cpu__DOT__b1)
                                   : 0U) << 2U) | (IData)(
                                                          ((QData)((IData)(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT____Vcellinp__mux1____pinNumber3)) 
                                                           >> 0x20U)));
    __Vtemp_hedab82a1__0[2U] = (8U | ((vlSelf->cpu__DOT__alu1__DOT__shift1__DOT____Vcellinp__mux1____pinNumber3 
                                       << 4U) | (((0x1fU 
                                                   >= vlSelf->cpu__DOT__b1)
                                                   ? 
                                                  (vlSelf->cpu__DOT__a1 
                                                   << vlSelf->cpu__DOT__b1)
                                                   : 0U) 
                                                 >> 0x1eU)));
    __Vtemp_hedab82a1__0[3U] = (0x30U | (vlSelf->cpu__DOT__alu1__DOT__shift1__DOT____Vcellinp__mux1____pinNumber3 
                                         >> 0x1cU));
    bufp->fullWData(oldp+214,(__Vtemp_hedab82a1__0),102);
    bufp->fullQData(oldp+218,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+220,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+222,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullIData(oldp+224,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+225,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+226,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+227,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+228,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+229,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+230,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__hit));
    __Vtemp_hc856c7a6__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(vlSelf->cpu__DOT__src1))));
    __Vtemp_hc856c7a6__0[1U] = ((vlSelf->cpu__DOT__pc1__DOT__tmp_pc 
                                 << 1U) | (IData)((
                                                   (0x100000000ULL 
                                                    | (QData)((IData)(vlSelf->cpu__DOT__src1))) 
                                                   >> 0x20U)));
    __Vtemp_hc856c7a6__0[2U] = (vlSelf->cpu__DOT__pc1__DOT__tmp_pc 
                                >> 0x1fU);
    bufp->fullWData(oldp+231,(__Vtemp_hc856c7a6__0),66);
    bufp->fullQData(oldp+234,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+236,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+238,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+239,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+240,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__lut_out),32);
    __Vtemp_h27f5bc9c__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(vlSelf->cpu__DOT__pc1__DOT__tmp_pc))));
    __Vtemp_h27f5bc9c__0[1U] = ((vlSelf->cpu__DOT__src1 
                                 << 1U) | (IData)((
                                                   (0x100000000ULL 
                                                    | (QData)((IData)(vlSelf->cpu__DOT__pc1__DOT__tmp_pc))) 
                                                   >> 0x20U)));
    __Vtemp_h27f5bc9c__0[2U] = (vlSelf->cpu__DOT__src1 
                                >> 0x1fU);
    bufp->fullWData(oldp+241,(__Vtemp_h27f5bc9c__0),66);
    bufp->fullQData(oldp+244,(vlSelf->cpu__DOT__mux3__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+246,(vlSelf->cpu__DOT__mux3__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+248,(vlSelf->cpu__DOT__mux3__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+249,(vlSelf->cpu__DOT__mux3__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+250,(vlSelf->cpu__DOT__mux3__DOT__i0__DOT__lut_out),32);
    __Vtemp_h2a03d93b__0[0U] = 4U;
    __Vtemp_h2a03d93b__0[1U] = (2U | (vlSelf->cpu__DOT__imm 
                                      << 2U));
    __Vtemp_h2a03d93b__0[2U] = (4U | ((vlSelf->cpu__DOT__src2 
                                       << 4U) | (vlSelf->cpu__DOT__imm 
                                                 >> 0x1eU)));
    __Vtemp_h2a03d93b__0[3U] = (vlSelf->cpu__DOT__src2 
                                >> 0x1cU);
    bufp->fullWData(oldp+251,(__Vtemp_h2a03d93b__0),102);
    bufp->fullQData(oldp+255,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+257,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+259,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullIData(oldp+261,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+262,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+263,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+264,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+265,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+266,(vlSelf->cpu__DOT__pc1__DOT__result),32);
    bufp->fullBit(oldp+267,((1U & (IData)((1ULL & (
                                                   ((QData)((IData)(vlSelf->cpu__DOT__a0)) 
                                                    + (QData)((IData)(vlSelf->cpu__DOT__b0))) 
                                                   >> 0x20U))))));
    bufp->fullBit(oldp+268,((1U & (~ (IData)((0U != vlSelf->cpu__DOT__pc1__DOT__result))))));
    bufp->fullBit(oldp+269,((((vlSelf->cpu__DOT__a0 
                               >> 0x1fU) == (vlSelf->cpu__DOT__b0 
                                             >> 0x1fU)) 
                             & ((vlSelf->cpu__DOT__a0 
                                 >> 0x1fU) != (vlSelf->cpu__DOT__pc1__DOT__result 
                                               >> 0x1fU)))));
    bufp->fullBit(oldp+270,((1U & ((((vlSelf->cpu__DOT__a0 
                                      >> 0x1fU) == 
                                     (vlSelf->cpu__DOT__b0 
                                      >> 0x1fU)) & 
                                    ((vlSelf->cpu__DOT__a0 
                                      >> 0x1fU) != 
                                     (vlSelf->cpu__DOT__pc1__DOT__result 
                                      >> 0x1fU))) ^ 
                                   (vlSelf->cpu__DOT__pc1__DOT__result 
                                    >> 0x1fU)))));
    bufp->fullBit(oldp+271,(vlSelf->cpu__DOT__cu1__DOT__is_dead));
    bufp->fullIData(oldp+272,(vlSelf->cpu__DOT__pc1__DOT__tmp_pc),32);
    bufp->fullIData(oldp+273,(vlSelf->cpu__DOT__rf1__DOT__rf[0]),32);
    bufp->fullIData(oldp+274,(vlSelf->cpu__DOT__rf1__DOT__rf[1]),32);
    bufp->fullIData(oldp+275,(vlSelf->cpu__DOT__rf1__DOT__rf[2]),32);
    bufp->fullIData(oldp+276,(vlSelf->cpu__DOT__rf1__DOT__rf[3]),32);
    bufp->fullIData(oldp+277,(vlSelf->cpu__DOT__rf1__DOT__rf[4]),32);
    bufp->fullIData(oldp+278,(vlSelf->cpu__DOT__rf1__DOT__rf[5]),32);
    bufp->fullIData(oldp+279,(vlSelf->cpu__DOT__rf1__DOT__rf[6]),32);
    bufp->fullIData(oldp+280,(vlSelf->cpu__DOT__rf1__DOT__rf[7]),32);
    bufp->fullIData(oldp+281,(vlSelf->cpu__DOT__rf1__DOT__rf[8]),32);
    bufp->fullIData(oldp+282,(vlSelf->cpu__DOT__rf1__DOT__rf[9]),32);
    bufp->fullIData(oldp+283,(vlSelf->cpu__DOT__rf1__DOT__rf[10]),32);
    bufp->fullIData(oldp+284,(vlSelf->cpu__DOT__rf1__DOT__rf[11]),32);
    bufp->fullIData(oldp+285,(vlSelf->cpu__DOT__rf1__DOT__rf[12]),32);
    bufp->fullIData(oldp+286,(vlSelf->cpu__DOT__rf1__DOT__rf[13]),32);
    bufp->fullIData(oldp+287,(vlSelf->cpu__DOT__rf1__DOT__rf[14]),32);
    bufp->fullIData(oldp+288,(vlSelf->cpu__DOT__rf1__DOT__rf[15]),32);
    bufp->fullIData(oldp+289,(vlSelf->cpu__DOT__rf1__DOT__rf[16]),32);
    bufp->fullIData(oldp+290,(vlSelf->cpu__DOT__rf1__DOT__rf[17]),32);
    bufp->fullIData(oldp+291,(vlSelf->cpu__DOT__rf1__DOT__rf[18]),32);
    bufp->fullIData(oldp+292,(vlSelf->cpu__DOT__rf1__DOT__rf[19]),32);
    bufp->fullIData(oldp+293,(vlSelf->cpu__DOT__rf1__DOT__rf[20]),32);
    bufp->fullIData(oldp+294,(vlSelf->cpu__DOT__rf1__DOT__rf[21]),32);
    bufp->fullIData(oldp+295,(vlSelf->cpu__DOT__rf1__DOT__rf[22]),32);
    bufp->fullIData(oldp+296,(vlSelf->cpu__DOT__rf1__DOT__rf[23]),32);
    bufp->fullIData(oldp+297,(vlSelf->cpu__DOT__rf1__DOT__rf[24]),32);
    bufp->fullIData(oldp+298,(vlSelf->cpu__DOT__rf1__DOT__rf[25]),32);
    bufp->fullIData(oldp+299,(vlSelf->cpu__DOT__rf1__DOT__rf[26]),32);
    bufp->fullIData(oldp+300,(vlSelf->cpu__DOT__rf1__DOT__rf[27]),32);
    bufp->fullIData(oldp+301,(vlSelf->cpu__DOT__rf1__DOT__rf[28]),32);
    bufp->fullIData(oldp+302,(vlSelf->cpu__DOT__rf1__DOT__rf[29]),32);
    bufp->fullIData(oldp+303,(vlSelf->cpu__DOT__rf1__DOT__rf[30]),32);
    bufp->fullIData(oldp+304,(vlSelf->cpu__DOT__rf1__DOT__rf[31]),32);
    bufp->fullBit(oldp+305,(vlSelf->clk));
    bufp->fullBit(oldp+306,(vlSelf->rst));
    bufp->fullIData(oldp+307,(vlSelf->cmd),32);
    bufp->fullIData(oldp+308,(vlSelf->pc),32);
    bufp->fullCData(oldp+309,((0x1fU & (vlSelf->cmd 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+310,((0x1fU & (vlSelf->cmd 
                                        >> 0x14U))),5);
    bufp->fullBit(oldp+311,(((IData)(vlSelf->cpu__DOT__cu1__DOT____VdfgTmp_hf442cbef__0) 
                             | ((0x6fU == (0x7fU & vlSelf->cmd)) 
                                | ((3U == (0x7fU & vlSelf->cmd)) 
                                   | ((0x33U == (0x7fU 
                                                 & vlSelf->cmd)) 
                                      | (IData)(vlSelf->cpu__DOT__cu1__DOT____VdfgTmp_hd4cadad9__0)))))));
    bufp->fullCData(oldp+312,((0x7fU & vlSelf->cmd)),7);
    bufp->fullCData(oldp+313,((7U & (vlSelf->cmd >> 0xcU))),3);
    bufp->fullBit(oldp+314,((1U & (vlSelf->cmd >> 0x1eU))));
    bufp->fullBit(oldp+315,((0x23U == (0x7fU & vlSelf->cmd))));
    bufp->fullBit(oldp+316,((3U == (0x7fU & vlSelf->cmd))));
    bufp->fullBit(oldp+317,((0x13U == (0x7fU & vlSelf->cmd))));
    bufp->fullBit(oldp+318,((0x33U == (0x7fU & vlSelf->cmd))));
    bufp->fullBit(oldp+319,((0x6fU == (0x7fU & vlSelf->cmd))));
    bufp->fullBit(oldp+320,((0x63U == (0x7fU & vlSelf->cmd))));
    bufp->fullBit(oldp+321,((0x67U == (0x7fU & vlSelf->cmd))));
    bufp->fullBit(oldp+322,((0x17U == (0x7fU & vlSelf->cmd))));
    bufp->fullBit(oldp+323,((0x37U == (0x7fU & vlSelf->cmd))));
    bufp->fullCData(oldp+324,((0x1fU & (vlSelf->cmd 
                                        >> 2U))),5);
    bufp->fullQData(oldp+325,((0x804511a8940000ULL 
                               | (((QData)((IData)(
                                                   ((0x40000000U 
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
    bufp->fullQData(oldp+327,((0x89d44cddc8d0ULL | (QData)((IData)(
                                                                   ((0x40000000U 
                                                                     & vlSelf->cmd)
                                                                     ? 0xdU
                                                                     : 5U))))),56);
    bufp->fullIData(oldp+329,((0xfffff000U & vlSelf->cmd)),32);
    bufp->fullIData(oldp+330,((((- (IData)((vlSelf->cmd 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->cmd) 
                                             | ((0x800U 
                                                 & (vlSelf->cmd 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->cmd 
                                                      >> 0x14U)))))),32);
    bufp->fullIData(oldp+331,((((- (IData)((vlSelf->cmd 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->cmd 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->cmd 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+332,((((- (IData)((vlSelf->cmd 
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
    bufp->fullWData(oldp+333,(__Vtemp_hdace3dd2__0),175);
    bufp->fullCData(oldp+339,(1U),5);
    bufp->fullIData(oldp+340,(8U),32);
    bufp->fullIData(oldp+341,(3U),32);
    bufp->fullIData(oldp+342,(0x20U),32);
    bufp->fullIData(oldp+343,(0U),32);
    bufp->fullIData(oldp+344,(1U),32);
    bufp->fullIData(oldp+345,(0x23U),32);
    bufp->fullIData(oldp+346,(8U),32);
    bufp->fullIData(oldp+347,(2U),32);
    bufp->fullIData(oldp+348,(0x22U),32);
    bufp->fullIData(oldp+349,(3U),32);
    bufp->fullIData(oldp+350,(5U),32);
    bufp->fullCData(oldp+351,(0U),3);
    bufp->fullIData(oldp+352,(7U),32);
    bufp->fullCData(oldp+353,(5U),3);
    bufp->fullQData(oldp+354,(0xd58f9afdb7ULL),42);
    bufp->fullIData(oldp+356,(6U),32);
    bufp->fullIData(oldp+357,(7U),32);
    bufp->fullIData(oldp+358,(4U),32);
    bufp->fullCData(oldp+359,(7U),4);
    bufp->fullIData(oldp+360,(5U),32);
    bufp->fullIData(oldp+361,(0U),32);
    bufp->fullIData(oldp+362,(0x21U),32);
    bufp->fullIData(oldp+363,(2U),32);
    bufp->fullBit(oldp+364,(1U));
    bufp->fullBit(oldp+365,(0U));
    bufp->fullIData(oldp+366,(0x80000000U),32);
}
