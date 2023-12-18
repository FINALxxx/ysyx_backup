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
    tracep->declBit(c+330,"clk", false,-1);
    tracep->declBit(c+331,"rst", false,-1);
    tracep->declBus(c+332,"cmd", false,-1, 31,0);
    tracep->declBus(c+333,"pc", false,-1, 31,0);
    tracep->declBus(c+334,"dnpc", false,-1, 31,0);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+330,"clk", false,-1);
    tracep->declBit(c+331,"rst", false,-1);
    tracep->declBus(c+332,"cmd", false,-1, 31,0);
    tracep->declBus(c+333,"pc", false,-1, 31,0);
    tracep->declBus(c+334,"dnpc", false,-1, 31,0);
    tracep->declBus(c+335,"rs1", false,-1, 4,0);
    tracep->declBus(c+336,"rs2", false,-1, 4,0);
    tracep->declBus(c+337,"rd", false,-1, 4,0);
    tracep->declBus(c+193,"src1", false,-1, 31,0);
    tracep->declBus(c+194,"src2", false,-1, 31,0);
    tracep->declBus(c+93,"imm", false,-1, 31,0);
    tracep->declBus(c+338,"src_rd", false,-1, 31,0);
    tracep->declBus(c+195,"src_rd_ALU", false,-1, 31,0);
    tracep->declBus(c+94,"src_rd_PMEM", false,-1, 31,0);
    tracep->declBus(c+376,"src_rd_PMEM_origin", false,-1, 31,0);
    tracep->declBus(c+95,"op_IMM", false,-1, 2,0);
    tracep->declBit(c+96,"op_ALU_Asrc", false,-1);
    tracep->declBus(c+97,"op_ALU_Bsrc", false,-1, 1,0);
    tracep->declBus(c+98,"op_ALU_sel", false,-1, 3,0);
    tracep->declBit(c+196,"LESS", false,-1);
    tracep->declBit(c+197,"IS_ZERO", false,-1);
    tracep->declBit(c+198,"op_PC_Asrc", false,-1);
    tracep->declBit(c+99,"op_PC_Bsrc", false,-1);
    tracep->declBus(c+100,"op_PMEM", false,-1, 7,0);
    tracep->declBit(c+339,"en_Wreg", false,-1);
    tracep->declBit(c+340,"load", false,-1);
    tracep->declBit(c+341,"store", false,-1);
    tracep->declBit(c+101,"en_PMEM", false,-1);
    tracep->declBus(c+102,"op_load_sext", false,-1, 1,0);
    tracep->declBus(c+199,"a0", false,-1, 31,0);
    tracep->declBus(c+200,"b0", false,-1, 31,0);
    tracep->declBus(c+201,"a1", false,-1, 31,0);
    tracep->declBus(c+202,"b1", false,-1, 31,0);
    tracep->declBit(c+103,"L_R", false,-1);
    tracep->declBit(c+104,"S_U", false,-1);
    tracep->declBit(c+105,"A_L", false,-1);
    tracep->declBit(c+106,"Add_Sub", false,-1);
    tracep->pushNamePrefix("alu1 ");
    tracep->declBus(c+107,"sel", false,-1, 2,0);
    tracep->declBit(c+105,"A_L", false,-1);
    tracep->declBit(c+103,"L_R", false,-1);
    tracep->declBit(c+104,"S_U", false,-1);
    tracep->declBit(c+106,"Add_Sub", false,-1);
    tracep->declBus(c+201,"a", false,-1, 31,0);
    tracep->declBus(c+202,"b", false,-1, 31,0);
    tracep->declBus(c+195,"result", false,-1, 31,0);
    tracep->declBit(c+196,"LESS", false,-1);
    tracep->declBit(c+197,"IS_ZERO", false,-1);
    tracep->declBus(c+203,"ADDER_result", false,-1, 31,0);
    tracep->declBus(c+204,"SHIFT_result", false,-1, 31,0);
    tracep->declBus(c+205,"AND_result", false,-1, 31,0);
    tracep->declBus(c+206,"OR_result", false,-1, 31,0);
    tracep->declBus(c+207,"XOR_result", false,-1, 31,0);
    tracep->pushNamePrefix("add1 ");
    tracep->declBit(c+106,"mode", false,-1);
    tracep->declBus(c+201,"a", false,-1, 31,0);
    tracep->declBus(c+202,"b", false,-1, 31,0);
    tracep->declBit(c+104,"S_U", false,-1);
    tracep->declBus(c+203,"result", false,-1, 31,0);
    tracep->declBit(c+196,"LESS", false,-1);
    tracep->declBit(c+197,"IS_ZERO", false,-1);
    tracep->declBit(c+208,"overflow", false,-1);
    tracep->declBit(c+209,"carry", false,-1);
    tracep->declBit(c+210,"LESS_u", false,-1);
    tracep->declBit(c+211,"LESS_s", false,-1);
    tracep->declBus(c+212,"add_cin", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux1 ");
    tracep->declBus(c+377,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+378,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+379,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+195,"out", false,-1, 31,0);
    tracep->declBus(c+107,"key", false,-1, 2,0);
    tracep->declBus(c+380,"default_out", false,-1, 31,0);
    tracep->declArray(c+213,"lut", false,-1, 279,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+377,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+378,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+379,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+381,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+195,"out", false,-1, 31,0);
    tracep->declBus(c+107,"key", false,-1, 2,0);
    tracep->declBus(c+380,"default_out", false,-1, 31,0);
    tracep->declArray(c+213,"lut", false,-1, 279,0);
    tracep->declBus(c+382,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+222+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+238+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+246,"lut_out", false,-1, 31,0);
    tracep->declBit(c+247,"hit", false,-1);
    tracep->declBus(c+383,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("shift1 ");
    tracep->declBit(c+103,"L_R", false,-1);
    tracep->declBit(c+105,"A_L", false,-1);
    tracep->declBus(c+201,"in", false,-1, 31,0);
    tracep->declBus(c+202,"soffset", false,-1, 31,0);
    tracep->declBus(c+204,"out", false,-1, 31,0);
    tracep->pushNamePrefix("mux1 ");
    tracep->declBus(c+378,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+384,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+379,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+204,"out", false,-1, 31,0);
    tracep->declBus(c+108,"key", false,-1, 1,0);
    tracep->declBus(c+248,"default_out", false,-1, 31,0);
    tracep->declArray(c+249,"lut", false,-1, 101,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+378,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+384,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+379,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+381,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+204,"out", false,-1, 31,0);
    tracep->declBus(c+108,"key", false,-1, 1,0);
    tracep->declBus(c+248,"default_out", false,-1, 31,0);
    tracep->declArray(c+249,"lut", false,-1, 101,0);
    tracep->declBus(c+385,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+253+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+9+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+259+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+262,"lut_out", false,-1, 31,0);
    tracep->declBit(c+263,"hit", false,-1);
    tracep->declBus(c+386,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("cu1 ");
    tracep->declBit(c+330,"clk", false,-1);
    tracep->declBus(c+342,"opcode", false,-1, 6,0);
    tracep->declBus(c+343,"funct3", false,-1, 2,0);
    tracep->declBit(c+344,"funct7", false,-1);
    tracep->declBit(c+197,"IS_ZERO", false,-1);
    tracep->declBit(c+196,"LESS", false,-1);
    tracep->declBus(c+95,"op_IMM", false,-1, 2,0);
    tracep->declBit(c+339,"en_Wreg", false,-1);
    tracep->declBit(c+340,"load", false,-1);
    tracep->declBit(c+341,"store", false,-1);
    tracep->declBus(c+100,"op_PMEM", false,-1, 7,0);
    tracep->declBus(c+102,"op_load_sext", false,-1, 1,0);
    tracep->declBit(c+96,"op_ALU_Asrc", false,-1);
    tracep->declBus(c+97,"op_ALU_Bsrc", false,-1, 1,0);
    tracep->declBus(c+98,"op_ALU_sel", false,-1, 3,0);
    tracep->declBit(c+198,"op_PC_Asrc", false,-1);
    tracep->declBit(c+99,"op_PC_Bsrc", false,-1);
    tracep->declBit(c+345,"I", false,-1);
    tracep->declBit(c+346,"R", false,-1);
    tracep->declBit(c+347,"J", false,-1);
    tracep->declBit(c+341,"S", false,-1);
    tracep->declBit(c+348,"B", false,-1);
    tracep->declBus(c+109,"R_sel", false,-1, 3,0);
    tracep->declBus(c+110,"I_sel", false,-1, 3,0);
    tracep->declBit(c+340,"I_LOAD", false,-1);
    tracep->declBit(c+349,"I_JALR", false,-1);
    tracep->declBit(c+350,"U_AUIPC", false,-1);
    tracep->declBit(c+351,"U_LUI", false,-1);
    tracep->declBus(c+111,"branch", false,-1, 2,0);
    tracep->declBus(c+112,"branch_tmp", false,-1, 2,0);
    tracep->declBit(c+296,"is_halt", false,-1);
    tracep->pushNamePrefix("mux1 ");
    tracep->declBus(c+378,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+387,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+378,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+111,"out", false,-1, 2,0);
    tracep->declBus(c+352,"key", false,-1, 4,0);
    tracep->declBus(c+388,"default_out", false,-1, 2,0);
    tracep->declBus(c+113,"lut", false,-1, 23,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+378,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+387,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+378,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+381,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+111,"out", false,-1, 2,0);
    tracep->declBus(c+352,"key", false,-1, 4,0);
    tracep->declBus(c+388,"default_out", false,-1, 2,0);
    tracep->declBus(c+113,"lut", false,-1, 23,0);
    tracep->declBus(c+377,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+114+i*1,"pair_list", true,(i+0), 7,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+12+i*1,"key_list", true,(i+0), 4,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+117+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+120,"lut_out", false,-1, 2,0);
    tracep->declBit(c+121,"hit", false,-1);
    tracep->declBus(c+386,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mux2 ");
    tracep->declBus(c+389,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+378,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+378,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+112,"out", false,-1, 2,0);
    tracep->declBus(c+343,"key", false,-1, 2,0);
    tracep->declBus(c+390,"default_out", false,-1, 2,0);
    tracep->declQuad(c+391,"lut", false,-1, 41,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+389,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+378,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+378,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+381,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+112,"out", false,-1, 2,0);
    tracep->declBus(c+343,"key", false,-1, 2,0);
    tracep->declBus(c+390,"default_out", false,-1, 2,0);
    tracep->declQuad(c+391,"lut", false,-1, 41,0);
    tracep->declBus(c+393,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+15+i*1,"pair_list", true,(i+0), 5,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+22+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+29+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+122,"lut_out", false,-1, 2,0);
    tracep->declBit(c+123,"hit", false,-1);
    tracep->declBus(c+394,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mux3 ");
    tracep->declBus(c+377,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+378,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+395,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+109,"out", false,-1, 3,0);
    tracep->declBus(c+343,"key", false,-1, 2,0);
    tracep->declBus(c+396,"default_out", false,-1, 3,0);
    tracep->declQuad(c+353,"lut", false,-1, 55,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+377,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+378,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+395,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+381,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+109,"out", false,-1, 3,0);
    tracep->declBus(c+343,"key", false,-1, 2,0);
    tracep->declBus(c+396,"default_out", false,-1, 3,0);
    tracep->declQuad(c+353,"lut", false,-1, 55,0);
    tracep->declBus(c+389,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+124+i*1,"pair_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+36+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+132+i*1,"data_list", true,(i+0), 3,0);
    }
    tracep->declBus(c+140,"lut_out", false,-1, 3,0);
    tracep->declBit(c+141,"hit", false,-1);
    tracep->declBus(c+383,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mux4 ");
    tracep->declBus(c+377,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+378,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+395,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+110,"out", false,-1, 3,0);
    tracep->declBus(c+343,"key", false,-1, 2,0);
    tracep->declBus(c+396,"default_out", false,-1, 3,0);
    tracep->declQuad(c+355,"lut", false,-1, 55,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+377,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+378,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+395,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+381,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+110,"out", false,-1, 3,0);
    tracep->declBus(c+343,"key", false,-1, 2,0);
    tracep->declBus(c+396,"default_out", false,-1, 3,0);
    tracep->declQuad(c+355,"lut", false,-1, 55,0);
    tracep->declBus(c+389,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+142+i*1,"pair_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+44+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+150+i*1,"data_list", true,(i+0), 3,0);
    }
    tracep->declBus(c+158,"lut_out", false,-1, 3,0);
    tracep->declBit(c+159,"hit", false,-1);
    tracep->declBus(c+383,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mux5 ");
    tracep->declBus(c+387,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+378,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+377,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+100,"out", false,-1, 7,0);
    tracep->declBus(c+343,"key", false,-1, 2,0);
    tracep->declBus(c+397,"default_out", false,-1, 7,0);
    tracep->declQuad(c+398,"lut", false,-1, 54,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+387,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+378,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+377,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+381,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+100,"out", false,-1, 7,0);
    tracep->declBus(c+343,"key", false,-1, 2,0);
    tracep->declBus(c+397,"default_out", false,-1, 7,0);
    tracep->declQuad(c+398,"lut", false,-1, 54,0);
    tracep->declBus(c+400,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+52+i*1,"pair_list", true,(i+0), 10,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+57+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+62+i*1,"data_list", true,(i+0), 7,0);
    }
    tracep->declBus(c+160,"lut_out", false,-1, 7,0);
    tracep->declBit(c+161,"hit", false,-1);
    tracep->declBus(c+401,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("dimm1 ");
    tracep->declBus(c+332,"cmd", false,-1, 31,0);
    tracep->declBus(c+95,"op_IMM", false,-1, 2,0);
    tracep->declBus(c+93,"imm", false,-1, 31,0);
    tracep->declBus(c+162,"immI", false,-1, 31,0);
    tracep->declBus(c+357,"immU", false,-1, 31,0);
    tracep->declBus(c+358,"immJ", false,-1, 31,0);
    tracep->declBus(c+359,"immS", false,-1, 31,0);
    tracep->declBus(c+360,"immB", false,-1, 31,0);
    tracep->pushNamePrefix("mux1 ");
    tracep->declBus(c+387,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+378,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+379,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+93,"out", false,-1, 31,0);
    tracep->declBus(c+95,"key", false,-1, 2,0);
    tracep->declBus(c+162,"default_out", false,-1, 31,0);
    tracep->declArray(c+361,"lut", false,-1, 174,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+387,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+378,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+379,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+381,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+93,"out", false,-1, 31,0);
    tracep->declBus(c+95,"key", false,-1, 2,0);
    tracep->declBus(c+162,"default_out", false,-1, 31,0);
    tracep->declArray(c+361,"lut", false,-1, 174,0);
    tracep->declBus(c+382,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+163+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+67+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+173+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+178,"lut_out", false,-1, 31,0);
    tracep->declBit(c+179,"hit", false,-1);
    tracep->declBus(c+401,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("mux1 ");
    tracep->declBus(c+384,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+381,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+379,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+199,"out", false,-1, 31,0);
    tracep->declBus(c+198,"key", false,-1, 0,0);
    tracep->declArray(c+180,"lut", false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+384,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+381,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+379,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+402,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+199,"out", false,-1, 31,0);
    tracep->declBus(c+198,"key", false,-1, 0,0);
    tracep->declBus(c+380,"default_out", false,-1, 31,0);
    tracep->declArray(c+180,"lut", false,-1, 65,0);
    tracep->declBus(c+403,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+183+i*2,"pair_list", true,(i+0), 32,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+72+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+187+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+264,"lut_out", false,-1, 31,0);
    tracep->declBit(c+265,"hit", false,-1);
    tracep->declBus(c+404,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mux2 ");
    tracep->declBus(c+384,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+381,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+379,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+200,"out", false,-1, 31,0);
    tracep->declBus(c+99,"key", false,-1, 0,0);
    tracep->declArray(c+367,"lut", false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+384,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+381,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+379,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+402,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+200,"out", false,-1, 31,0);
    tracep->declBus(c+99,"key", false,-1, 0,0);
    tracep->declBus(c+380,"default_out", false,-1, 31,0);
    tracep->declArray(c+367,"lut", false,-1, 65,0);
    tracep->declBus(c+403,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+266+i*2,"pair_list", true,(i+0), 32,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+74+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+270+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+272,"lut_out", false,-1, 31,0);
    tracep->declBit(c+189,"hit", false,-1);
    tracep->declBus(c+404,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mux3 ");
    tracep->declBus(c+384,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+381,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+379,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+201,"out", false,-1, 31,0);
    tracep->declBus(c+96,"key", false,-1, 0,0);
    tracep->declArray(c+370,"lut", false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+384,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+381,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+379,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+402,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+201,"out", false,-1, 31,0);
    tracep->declBus(c+96,"key", false,-1, 0,0);
    tracep->declBus(c+380,"default_out", false,-1, 31,0);
    tracep->declArray(c+370,"lut", false,-1, 65,0);
    tracep->declBus(c+403,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+273+i*2,"pair_list", true,(i+0), 32,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+76+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+277+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+279,"lut_out", false,-1, 31,0);
    tracep->declBit(c+190,"hit", false,-1);
    tracep->declBus(c+404,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mux4 ");
    tracep->declBus(c+378,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+384,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+379,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+202,"out", false,-1, 31,0);
    tracep->declBus(c+97,"key", false,-1, 1,0);
    tracep->declBus(c+194,"default_out", false,-1, 31,0);
    tracep->declArray(c+280,"lut", false,-1, 101,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+378,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+384,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+379,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+381,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+202,"out", false,-1, 31,0);
    tracep->declBus(c+97,"key", false,-1, 1,0);
    tracep->declBus(c+194,"default_out", false,-1, 31,0);
    tracep->declArray(c+280,"lut", false,-1, 101,0);
    tracep->declBus(c+385,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+284+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+78+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+290+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+293,"lut_out", false,-1, 31,0);
    tracep->declBit(c+294,"hit", false,-1);
    tracep->declBus(c+386,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mux5 ");
    tracep->declBus(c+378,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+384,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+379,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+94,"out", false,-1, 31,0);
    tracep->declBus(c+102,"key", false,-1, 1,0);
    tracep->declBus(c+376,"default_out", false,-1, 31,0);
    tracep->declArray(c+405,"lut", false,-1, 101,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+378,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+384,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+379,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+381,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+94,"out", false,-1, 31,0);
    tracep->declBus(c+102,"key", false,-1, 1,0);
    tracep->declBus(c+376,"default_out", false,-1, 31,0);
    tracep->declArray(c+405,"lut", false,-1, 101,0);
    tracep->declBus(c+385,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+81+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+87+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+90+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+191,"lut_out", false,-1, 31,0);
    tracep->declBit(c+192,"hit", false,-1);
    tracep->declBus(c+386,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("pc1 ");
    tracep->declBit(c+330,"clk", false,-1);
    tracep->declBit(c+331,"rst", false,-1);
    tracep->declBus(c+199,"a", false,-1, 31,0);
    tracep->declBus(c+200,"b", false,-1, 31,0);
    tracep->declBit(c+409,"wen", false,-1);
    tracep->declBus(c+334,"dnpc", false,-1, 31,0);
    tracep->declBus(c+333,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("add1 ");
    tracep->declBit(c+410,"mode", false,-1);
    tracep->declBus(c+199,"a", false,-1, 31,0);
    tracep->declBus(c+200,"b", false,-1, 31,0);
    tracep->declBit(c+409,"S_U", false,-1);
    tracep->declBus(c+334,"result", false,-1, 31,0);
    tracep->declBit(c+295,"LESS", false,-1);
    tracep->declBit(c+373,"IS_ZERO", false,-1);
    tracep->declBit(c+374,"overflow", false,-1);
    tracep->declBit(c+295,"carry", false,-1);
    tracep->declBit(c+295,"LESS_u", false,-1);
    tracep->declBit(c+375,"LESS_s", false,-1);
    tracep->declBus(c+200,"add_cin", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dnpc2pc ");
    tracep->declBus(c+379,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+411,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+330,"clk", false,-1);
    tracep->declBit(c+331,"rst", false,-1);
    tracep->declBus(c+334,"din", false,-1, 31,0);
    tracep->declBus(c+333,"dout", false,-1, 31,0);
    tracep->declBit(c+409,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pmem1 ");
    tracep->declBit(c+330,"clk", false,-1);
    tracep->declBit(c+101,"valid", false,-1);
    tracep->declBus(c+195,"raddr", false,-1, 31,0);
    tracep->declBus(c+376,"rdata", false,-1, 31,0);
    tracep->declBit(c+341,"wen", false,-1);
    tracep->declBus(c+195,"waddr", false,-1, 31,0);
    tracep->declBus(c+194,"wdata", false,-1, 31,0);
    tracep->declBus(c+100,"wmask", false,-1, 7,0);
    tracep->declBus(c+297,"rdata_tmp", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rf1 ");
    tracep->declBus(c+379,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+379,"REG_NUM", false,-1, 31,0);
    tracep->declBus(c+387,"REG_NUM_BIT", false,-1, 31,0);
    tracep->declBit(c+330,"clk", false,-1);
    tracep->declBus(c+335,"raddr_a", false,-1, 4,0);
    tracep->declBus(c+336,"raddr_b", false,-1, 4,0);
    tracep->declBus(c+338,"wdata", false,-1, 31,0);
    tracep->declBus(c+337,"waddr", false,-1, 4,0);
    tracep->declBit(c+339,"wen", false,-1);
    tracep->declBus(c+193,"rdata_a", false,-1, 31,0);
    tracep->declBus(c+194,"rdata_b", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+298+i*1,"rf", true,(i+0), 31,0);
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
    VlWide<4>/*127:0*/ __Vtemp_h2a03d93b__0;
    VlWide<6>/*191:0*/ __Vtemp_hdace3dd2__0;
    VlWide<3>/*95:0*/ __Vtemp_hb5bfc05d__0;
    VlWide<3>/*95:0*/ __Vtemp_hfc952c0a__0;
    VlWide<4>/*127:0*/ __Vtemp_h0be88f99__0;
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
    bufp->fullSData(oldp+52,(vlSelf->cpu__DOT__cu1__DOT__mux5__DOT__i0__DOT__pair_list[0]),11);
    bufp->fullSData(oldp+53,(vlSelf->cpu__DOT__cu1__DOT__mux5__DOT__i0__DOT__pair_list[1]),11);
    bufp->fullSData(oldp+54,(vlSelf->cpu__DOT__cu1__DOT__mux5__DOT__i0__DOT__pair_list[2]),11);
    bufp->fullSData(oldp+55,(vlSelf->cpu__DOT__cu1__DOT__mux5__DOT__i0__DOT__pair_list[3]),11);
    bufp->fullSData(oldp+56,(vlSelf->cpu__DOT__cu1__DOT__mux5__DOT__i0__DOT__pair_list[4]),11);
    bufp->fullCData(oldp+57,(vlSelf->cpu__DOT__cu1__DOT__mux5__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+58,(vlSelf->cpu__DOT__cu1__DOT__mux5__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+59,(vlSelf->cpu__DOT__cu1__DOT__mux5__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+60,(vlSelf->cpu__DOT__cu1__DOT__mux5__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+61,(vlSelf->cpu__DOT__cu1__DOT__mux5__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+62,(vlSelf->cpu__DOT__cu1__DOT__mux5__DOT__i0__DOT__data_list[0]),8);
    bufp->fullCData(oldp+63,(vlSelf->cpu__DOT__cu1__DOT__mux5__DOT__i0__DOT__data_list[1]),8);
    bufp->fullCData(oldp+64,(vlSelf->cpu__DOT__cu1__DOT__mux5__DOT__i0__DOT__data_list[2]),8);
    bufp->fullCData(oldp+65,(vlSelf->cpu__DOT__cu1__DOT__mux5__DOT__i0__DOT__data_list[3]),8);
    bufp->fullCData(oldp+66,(vlSelf->cpu__DOT__cu1__DOT__mux5__DOT__i0__DOT__data_list[4]),8);
    bufp->fullCData(oldp+67,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+68,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+69,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+70,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+71,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__key_list[4]),3);
    bufp->fullBit(oldp+72,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+73,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__key_list[1]));
    bufp->fullBit(oldp+74,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+75,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__key_list[1]));
    bufp->fullBit(oldp+76,(vlSelf->cpu__DOT__mux3__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+77,(vlSelf->cpu__DOT__mux3__DOT__i0__DOT__key_list[1]));
    bufp->fullCData(oldp+78,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+79,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+80,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__key_list[2]),2);
    bufp->fullQData(oldp+81,(vlSelf->cpu__DOT__mux5__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+83,(vlSelf->cpu__DOT__mux5__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+85,(vlSelf->cpu__DOT__mux5__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullCData(oldp+87,(vlSelf->cpu__DOT__mux5__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+88,(vlSelf->cpu__DOT__mux5__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+89,(vlSelf->cpu__DOT__mux5__DOT__i0__DOT__key_list[2]),2);
    bufp->fullIData(oldp+90,(vlSelf->cpu__DOT__mux5__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+91,(vlSelf->cpu__DOT__mux5__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+92,(vlSelf->cpu__DOT__mux5__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+93,(vlSelf->cpu__DOT__imm),32);
    bufp->fullIData(oldp+94,(vlSelf->cpu__DOT__src_rd_PMEM),32);
    bufp->fullCData(oldp+95,(vlSelf->cpu__DOT__op_IMM),3);
    bufp->fullBit(oldp+96,(vlSelf->cpu__DOT__op_ALU_Asrc));
    bufp->fullCData(oldp+97,(vlSelf->cpu__DOT__op_ALU_Bsrc),2);
    bufp->fullCData(oldp+98,(vlSelf->cpu__DOT__op_ALU_sel),4);
    bufp->fullBit(oldp+99,(vlSelf->cpu__DOT__op_PC_Bsrc));
    bufp->fullCData(oldp+100,(vlSelf->cpu__DOT__op_PMEM),8);
    bufp->fullBit(oldp+101,(vlSelf->cpu__DOT__en_PMEM));
    bufp->fullCData(oldp+102,(vlSelf->cpu__DOT__op_load_sext),2);
    bufp->fullBit(oldp+103,((1U != (IData)(vlSelf->cpu__DOT__op_ALU_sel))));
    bufp->fullBit(oldp+104,((2U != (IData)(vlSelf->cpu__DOT__op_ALU_sel))));
    bufp->fullBit(oldp+105,((0xdU != (IData)(vlSelf->cpu__DOT__op_ALU_sel))));
    bufp->fullBit(oldp+106,((0U != (IData)(vlSelf->cpu__DOT__op_ALU_sel))));
    bufp->fullCData(oldp+107,((7U & (IData)(vlSelf->cpu__DOT__op_ALU_sel))),3);
    bufp->fullCData(oldp+108,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT____Vcellinp__mux1____pinNumber2),2);
    bufp->fullCData(oldp+109,(vlSelf->cpu__DOT__cu1__DOT__R_sel),4);
    bufp->fullCData(oldp+110,(vlSelf->cpu__DOT__cu1__DOT__I_sel),4);
    bufp->fullCData(oldp+111,(vlSelf->cpu__DOT__cu1__DOT__branch),3);
    bufp->fullCData(oldp+112,(vlSelf->cpu__DOT__cu1__DOT__branch_tmp),3);
    bufp->fullIData(oldp+113,((0xcad9c0U | (IData)(vlSelf->cpu__DOT__cu1__DOT__branch_tmp))),24);
    bufp->fullCData(oldp+114,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__pair_list[0]),8);
    bufp->fullCData(oldp+115,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__pair_list[1]),8);
    bufp->fullCData(oldp+116,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__pair_list[2]),8);
    bufp->fullCData(oldp+117,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list[0]),3);
    bufp->fullCData(oldp+118,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list[1]),3);
    bufp->fullCData(oldp+119,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list[2]),3);
    bufp->fullCData(oldp+120,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+121,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+122,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+123,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+124,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[0]),7);
    bufp->fullCData(oldp+125,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[1]),7);
    bufp->fullCData(oldp+126,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[2]),7);
    bufp->fullCData(oldp+127,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[3]),7);
    bufp->fullCData(oldp+128,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[4]),7);
    bufp->fullCData(oldp+129,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[5]),7);
    bufp->fullCData(oldp+130,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[6]),7);
    bufp->fullCData(oldp+131,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[7]),7);
    bufp->fullCData(oldp+132,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[0]),4);
    bufp->fullCData(oldp+133,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[1]),4);
    bufp->fullCData(oldp+134,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[2]),4);
    bufp->fullCData(oldp+135,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[3]),4);
    bufp->fullCData(oldp+136,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[4]),4);
    bufp->fullCData(oldp+137,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[5]),4);
    bufp->fullCData(oldp+138,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[6]),4);
    bufp->fullCData(oldp+139,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[7]),4);
    bufp->fullCData(oldp+140,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__lut_out),4);
    bufp->fullBit(oldp+141,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+142,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__pair_list[0]),7);
    bufp->fullCData(oldp+143,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__pair_list[1]),7);
    bufp->fullCData(oldp+144,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__pair_list[2]),7);
    bufp->fullCData(oldp+145,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__pair_list[3]),7);
    bufp->fullCData(oldp+146,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__pair_list[4]),7);
    bufp->fullCData(oldp+147,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__pair_list[5]),7);
    bufp->fullCData(oldp+148,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__pair_list[6]),7);
    bufp->fullCData(oldp+149,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__pair_list[7]),7);
    bufp->fullCData(oldp+150,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list[0]),4);
    bufp->fullCData(oldp+151,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list[1]),4);
    bufp->fullCData(oldp+152,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list[2]),4);
    bufp->fullCData(oldp+153,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list[3]),4);
    bufp->fullCData(oldp+154,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list[4]),4);
    bufp->fullCData(oldp+155,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list[5]),4);
    bufp->fullCData(oldp+156,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list[6]),4);
    bufp->fullCData(oldp+157,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list[7]),4);
    bufp->fullCData(oldp+158,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__lut_out),4);
    bufp->fullBit(oldp+159,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+160,(vlSelf->cpu__DOT__cu1__DOT__mux5__DOT__i0__DOT__lut_out),8);
    bufp->fullBit(oldp+161,(vlSelf->cpu__DOT__cu1__DOT__mux5__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+162,(vlSelf->cpu__DOT__dimm1__DOT__immI),32);
    bufp->fullQData(oldp+163,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+165,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+167,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+169,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+171,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullIData(oldp+173,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+174,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+175,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+176,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+177,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+178,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+179,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__hit));
    __Vtemp_hfeedee49__0[0U] = vlSelf->cpu__DOT__imm;
    __Vtemp_hfeedee49__0[1U] = 9U;
    __Vtemp_hfeedee49__0[2U] = 0U;
    bufp->fullWData(oldp+180,(__Vtemp_hfeedee49__0),66);
    bufp->fullQData(oldp+183,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+185,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+187,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+188,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__data_list[1]),32);
    bufp->fullBit(oldp+189,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+190,(vlSelf->cpu__DOT__mux3__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+191,(vlSelf->cpu__DOT__mux5__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+192,(vlSelf->cpu__DOT__mux5__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+193,(vlSelf->cpu__DOT__src1),32);
    bufp->fullIData(oldp+194,(vlSelf->cpu__DOT__src2),32);
    bufp->fullIData(oldp+195,(vlSelf->cpu__DOT__src_rd_ALU),32);
    bufp->fullBit(oldp+196,(vlSelf->cpu__DOT__LESS));
    bufp->fullBit(oldp+197,((1U & (~ (IData)((0U != vlSelf->cpu__DOT__alu1__DOT__ADDER_result))))));
    bufp->fullBit(oldp+198,(vlSelf->cpu__DOT__op_PC_Asrc));
    bufp->fullIData(oldp+199,(vlSelf->cpu__DOT__a0),32);
    bufp->fullIData(oldp+200,(vlSelf->cpu__DOT__b0),32);
    bufp->fullIData(oldp+201,(vlSelf->cpu__DOT__a1),32);
    bufp->fullIData(oldp+202,(vlSelf->cpu__DOT__b1),32);
    bufp->fullIData(oldp+203,(vlSelf->cpu__DOT__alu1__DOT__ADDER_result),32);
    bufp->fullIData(oldp+204,(vlSelf->cpu__DOT__alu1__DOT__SHIFT_result),32);
    bufp->fullIData(oldp+205,((vlSelf->cpu__DOT__a1 
                               & vlSelf->cpu__DOT__b1)),32);
    bufp->fullIData(oldp+206,((vlSelf->cpu__DOT__a1 
                               | vlSelf->cpu__DOT__b1)),32);
    bufp->fullIData(oldp+207,((vlSelf->cpu__DOT__a1 
                               ^ vlSelf->cpu__DOT__b1)),32);
    bufp->fullBit(oldp+208,((((vlSelf->cpu__DOT__a1 
                               >> 0x1fU) == (vlSelf->cpu__DOT__alu1__DOT__add1__DOT__add_cin 
                                             >> 0x1fU)) 
                             & ((vlSelf->cpu__DOT__a1 
                                 >> 0x1fU) != (vlSelf->cpu__DOT__alu1__DOT__ADDER_result 
                                               >> 0x1fU)))));
    bufp->fullBit(oldp+209,((1U & (IData)((1ULL & (
                                                   ((QData)((IData)(vlSelf->cpu__DOT__a1)) 
                                                    + (QData)((IData)(vlSelf->cpu__DOT__alu1__DOT__add1__DOT__add_cin))) 
                                                   >> 0x20U))))));
    bufp->fullBit(oldp+210,((1U & ((0U != (IData)(vlSelf->cpu__DOT__op_ALU_sel)) 
                                   ^ (IData)((1ULL 
                                              & (((QData)((IData)(vlSelf->cpu__DOT__a1)) 
                                                  + (QData)((IData)(vlSelf->cpu__DOT__alu1__DOT__add1__DOT__add_cin))) 
                                                 >> 0x20U)))))));
    bufp->fullBit(oldp+211,((1U & ((((vlSelf->cpu__DOT__a1 
                                      >> 0x1fU) == 
                                     (vlSelf->cpu__DOT__alu1__DOT__add1__DOT__add_cin 
                                      >> 0x1fU)) & 
                                    ((vlSelf->cpu__DOT__a1 
                                      >> 0x1fU) != 
                                     (vlSelf->cpu__DOT__alu1__DOT__ADDER_result 
                                      >> 0x1fU))) ^ 
                                   (vlSelf->cpu__DOT__alu1__DOT__ADDER_result 
                                    >> 0x1fU)))));
    bufp->fullIData(oldp+212,(vlSelf->cpu__DOT__alu1__DOT__add1__DOT__add_cin),32);
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
    bufp->fullWData(oldp+213,(__Vtemp_h0b480982__0),280);
    bufp->fullQData(oldp+222,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+224,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+226,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+228,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+230,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullQData(oldp+232,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[5]),35);
    bufp->fullQData(oldp+234,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[6]),35);
    bufp->fullQData(oldp+236,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[7]),35);
    bufp->fullIData(oldp+238,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+239,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+240,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+241,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+242,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+243,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+244,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+245,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+246,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+247,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+248,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT____Vcellinp__mux1____pinNumber3),32);
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
    bufp->fullWData(oldp+249,(__Vtemp_hedab82a1__0),102);
    bufp->fullQData(oldp+253,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+255,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+257,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullIData(oldp+259,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+260,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+261,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+262,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+263,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+264,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+265,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+266,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+268,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+270,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+271,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+272,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__lut_out),32);
    bufp->fullQData(oldp+273,(vlSelf->cpu__DOT__mux3__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+275,(vlSelf->cpu__DOT__mux3__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+277,(vlSelf->cpu__DOT__mux3__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+278,(vlSelf->cpu__DOT__mux3__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+279,(vlSelf->cpu__DOT__mux3__DOT__i0__DOT__lut_out),32);
    __Vtemp_h2a03d93b__0[0U] = 4U;
    __Vtemp_h2a03d93b__0[1U] = (2U | (vlSelf->cpu__DOT__imm 
                                      << 2U));
    __Vtemp_h2a03d93b__0[2U] = (4U | ((vlSelf->cpu__DOT__src2 
                                       << 4U) | (vlSelf->cpu__DOT__imm 
                                                 >> 0x1eU)));
    __Vtemp_h2a03d93b__0[3U] = (vlSelf->cpu__DOT__src2 
                                >> 0x1cU);
    bufp->fullWData(oldp+280,(__Vtemp_h2a03d93b__0),102);
    bufp->fullQData(oldp+284,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+286,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+288,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullIData(oldp+290,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+291,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+292,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+293,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+294,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+295,((1U & (IData)((1ULL & (
                                                   ((QData)((IData)(vlSelf->cpu__DOT__a0)) 
                                                    + (QData)((IData)(vlSelf->cpu__DOT__b0))) 
                                                   >> 0x20U))))));
    bufp->fullBit(oldp+296,(vlSelf->cpu__DOT__cu1__DOT__is_halt));
    bufp->fullIData(oldp+297,(vlSelf->cpu__DOT__pmem1__DOT__rdata_tmp),32);
    bufp->fullIData(oldp+298,(vlSelf->cpu__DOT__rf1__DOT__rf[0]),32);
    bufp->fullIData(oldp+299,(vlSelf->cpu__DOT__rf1__DOT__rf[1]),32);
    bufp->fullIData(oldp+300,(vlSelf->cpu__DOT__rf1__DOT__rf[2]),32);
    bufp->fullIData(oldp+301,(vlSelf->cpu__DOT__rf1__DOT__rf[3]),32);
    bufp->fullIData(oldp+302,(vlSelf->cpu__DOT__rf1__DOT__rf[4]),32);
    bufp->fullIData(oldp+303,(vlSelf->cpu__DOT__rf1__DOT__rf[5]),32);
    bufp->fullIData(oldp+304,(vlSelf->cpu__DOT__rf1__DOT__rf[6]),32);
    bufp->fullIData(oldp+305,(vlSelf->cpu__DOT__rf1__DOT__rf[7]),32);
    bufp->fullIData(oldp+306,(vlSelf->cpu__DOT__rf1__DOT__rf[8]),32);
    bufp->fullIData(oldp+307,(vlSelf->cpu__DOT__rf1__DOT__rf[9]),32);
    bufp->fullIData(oldp+308,(vlSelf->cpu__DOT__rf1__DOT__rf[10]),32);
    bufp->fullIData(oldp+309,(vlSelf->cpu__DOT__rf1__DOT__rf[11]),32);
    bufp->fullIData(oldp+310,(vlSelf->cpu__DOT__rf1__DOT__rf[12]),32);
    bufp->fullIData(oldp+311,(vlSelf->cpu__DOT__rf1__DOT__rf[13]),32);
    bufp->fullIData(oldp+312,(vlSelf->cpu__DOT__rf1__DOT__rf[14]),32);
    bufp->fullIData(oldp+313,(vlSelf->cpu__DOT__rf1__DOT__rf[15]),32);
    bufp->fullIData(oldp+314,(vlSelf->cpu__DOT__rf1__DOT__rf[16]),32);
    bufp->fullIData(oldp+315,(vlSelf->cpu__DOT__rf1__DOT__rf[17]),32);
    bufp->fullIData(oldp+316,(vlSelf->cpu__DOT__rf1__DOT__rf[18]),32);
    bufp->fullIData(oldp+317,(vlSelf->cpu__DOT__rf1__DOT__rf[19]),32);
    bufp->fullIData(oldp+318,(vlSelf->cpu__DOT__rf1__DOT__rf[20]),32);
    bufp->fullIData(oldp+319,(vlSelf->cpu__DOT__rf1__DOT__rf[21]),32);
    bufp->fullIData(oldp+320,(vlSelf->cpu__DOT__rf1__DOT__rf[22]),32);
    bufp->fullIData(oldp+321,(vlSelf->cpu__DOT__rf1__DOT__rf[23]),32);
    bufp->fullIData(oldp+322,(vlSelf->cpu__DOT__rf1__DOT__rf[24]),32);
    bufp->fullIData(oldp+323,(vlSelf->cpu__DOT__rf1__DOT__rf[25]),32);
    bufp->fullIData(oldp+324,(vlSelf->cpu__DOT__rf1__DOT__rf[26]),32);
    bufp->fullIData(oldp+325,(vlSelf->cpu__DOT__rf1__DOT__rf[27]),32);
    bufp->fullIData(oldp+326,(vlSelf->cpu__DOT__rf1__DOT__rf[28]),32);
    bufp->fullIData(oldp+327,(vlSelf->cpu__DOT__rf1__DOT__rf[29]),32);
    bufp->fullIData(oldp+328,(vlSelf->cpu__DOT__rf1__DOT__rf[30]),32);
    bufp->fullIData(oldp+329,(vlSelf->cpu__DOT__rf1__DOT__rf[31]),32);
    bufp->fullBit(oldp+330,(vlSelf->clk));
    bufp->fullBit(oldp+331,(vlSelf->rst));
    bufp->fullIData(oldp+332,(vlSelf->cmd),32);
    bufp->fullIData(oldp+333,(vlSelf->pc),32);
    bufp->fullIData(oldp+334,(vlSelf->dnpc),32);
    bufp->fullCData(oldp+335,((0x1fU & (vlSelf->cmd 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+336,((0x1fU & (vlSelf->cmd 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+337,((0x1fU & (vlSelf->cmd 
                                        >> 7U))),5);
    bufp->fullIData(oldp+338,(((3U == (0x7fU & vlSelf->cmd))
                                ? vlSelf->cpu__DOT__src_rd_PMEM
                                : vlSelf->cpu__DOT__src_rd_ALU)),32);
    bufp->fullBit(oldp+339,(((IData)(vlSelf->cpu__DOT__cu1__DOT____VdfgTmp_hf442cbef__0) 
                             | ((0x6fU == (0x7fU & vlSelf->cmd)) 
                                | ((3U == (0x7fU & vlSelf->cmd)) 
                                   | ((0x33U == (0x7fU 
                                                 & vlSelf->cmd)) 
                                      | (IData)(vlSelf->cpu__DOT__cu1__DOT____VdfgTmp_hd4cadad9__0)))))));
    bufp->fullBit(oldp+340,((3U == (0x7fU & vlSelf->cmd))));
    bufp->fullBit(oldp+341,((0x23U == (0x7fU & vlSelf->cmd))));
    bufp->fullCData(oldp+342,((0x7fU & vlSelf->cmd)),7);
    bufp->fullCData(oldp+343,((7U & (vlSelf->cmd >> 0xcU))),3);
    bufp->fullBit(oldp+344,((1U & (vlSelf->cmd >> 0x1eU))));
    bufp->fullBit(oldp+345,((0x13U == (0x7fU & vlSelf->cmd))));
    bufp->fullBit(oldp+346,((0x33U == (0x7fU & vlSelf->cmd))));
    bufp->fullBit(oldp+347,((0x6fU == (0x7fU & vlSelf->cmd))));
    bufp->fullBit(oldp+348,((0x63U == (0x7fU & vlSelf->cmd))));
    bufp->fullBit(oldp+349,((0x67U == (0x7fU & vlSelf->cmd))));
    bufp->fullBit(oldp+350,((0x17U == (0x7fU & vlSelf->cmd))));
    bufp->fullBit(oldp+351,((0x37U == (0x7fU & vlSelf->cmd))));
    bufp->fullCData(oldp+352,((0x1fU & (vlSelf->cmd 
                                        >> 2U))),5);
    bufp->fullQData(oldp+353,((0x804511a8940000ULL 
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
    bufp->fullQData(oldp+355,((0x89d44cddc8d0ULL | (QData)((IData)(
                                                                   ((0x40000000U 
                                                                     & vlSelf->cmd)
                                                                     ? 0xdU
                                                                     : 5U))))),56);
    bufp->fullIData(oldp+357,((0xfffff000U & vlSelf->cmd)),32);
    bufp->fullIData(oldp+358,((((- (IData)((vlSelf->cmd 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->cmd) 
                                             | ((0x800U 
                                                 & (vlSelf->cmd 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->cmd 
                                                      >> 0x14U)))))),32);
    bufp->fullIData(oldp+359,((((- (IData)((vlSelf->cmd 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->cmd 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->cmd 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+360,((((- (IData)((vlSelf->cmd 
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
    bufp->fullWData(oldp+361,(__Vtemp_hdace3dd2__0),175);
    __Vtemp_hb5bfc05d__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(vlSelf->cpu__DOT__src1))));
    __Vtemp_hb5bfc05d__0[1U] = ((vlSelf->pc << 1U) 
                                | (IData)(((0x100000000ULL 
                                            | (QData)((IData)(vlSelf->cpu__DOT__src1))) 
                                           >> 0x20U)));
    __Vtemp_hb5bfc05d__0[2U] = (vlSelf->pc >> 0x1fU);
    bufp->fullWData(oldp+367,(__Vtemp_hb5bfc05d__0),66);
    __Vtemp_hfc952c0a__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(vlSelf->pc))));
    __Vtemp_hfc952c0a__0[1U] = ((vlSelf->cpu__DOT__src1 
                                 << 1U) | (IData)((
                                                   (0x100000000ULL 
                                                    | (QData)((IData)(vlSelf->pc))) 
                                                   >> 0x20U)));
    __Vtemp_hfc952c0a__0[2U] = (vlSelf->cpu__DOT__src1 
                                >> 0x1fU);
    bufp->fullWData(oldp+370,(__Vtemp_hfc952c0a__0),66);
    bufp->fullBit(oldp+373,((1U & (~ (IData)((0U != vlSelf->dnpc))))));
    bufp->fullBit(oldp+374,((((vlSelf->cpu__DOT__a0 
                               >> 0x1fU) == (vlSelf->cpu__DOT__b0 
                                             >> 0x1fU)) 
                             & ((vlSelf->cpu__DOT__a0 
                                 >> 0x1fU) != (vlSelf->dnpc 
                                               >> 0x1fU)))));
    bufp->fullBit(oldp+375,((1U & ((((vlSelf->cpu__DOT__a0 
                                      >> 0x1fU) == 
                                     (vlSelf->cpu__DOT__b0 
                                      >> 0x1fU)) & 
                                    ((vlSelf->cpu__DOT__a0 
                                      >> 0x1fU) != 
                                     (vlSelf->dnpc 
                                      >> 0x1fU))) ^ 
                                   (vlSelf->dnpc >> 0x1fU)))));
    bufp->fullIData(oldp+376,(vlSelf->cpu__DOT__src_rd_PMEM_origin),32);
    bufp->fullIData(oldp+377,(8U),32);
    bufp->fullIData(oldp+378,(3U),32);
    bufp->fullIData(oldp+379,(0x20U),32);
    bufp->fullIData(oldp+380,(0U),32);
    bufp->fullIData(oldp+381,(1U),32);
    bufp->fullIData(oldp+382,(0x23U),32);
    bufp->fullIData(oldp+383,(8U),32);
    bufp->fullIData(oldp+384,(2U),32);
    bufp->fullIData(oldp+385,(0x22U),32);
    bufp->fullIData(oldp+386,(3U),32);
    bufp->fullIData(oldp+387,(5U),32);
    bufp->fullCData(oldp+388,(0U),3);
    bufp->fullIData(oldp+389,(7U),32);
    bufp->fullCData(oldp+390,(5U),3);
    bufp->fullQData(oldp+391,(0xd58f9afdb7ULL),42);
    bufp->fullIData(oldp+393,(6U),32);
    bufp->fullIData(oldp+394,(7U),32);
    bufp->fullIData(oldp+395,(4U),32);
    bufp->fullCData(oldp+396,(7U),4);
    bufp->fullCData(oldp+397,(1U),8);
    bufp->fullQData(oldp+398,(0x121ebfe00d0fULL),55);
    bufp->fullIData(oldp+400,(0xbU),32);
    bufp->fullIData(oldp+401,(5U),32);
    bufp->fullIData(oldp+402,(0U),32);
    bufp->fullIData(oldp+403,(0x21U),32);
    bufp->fullIData(oldp+404,(2U),32);
    __Vtemp_h0be88f99__0[0U] = (IData)((0x200000000ULL 
                                        | (QData)((IData)(
                                                          (((- (IData)(
                                                                       (1U 
                                                                        & (vlSelf->cpu__DOT__src_rd_PMEM_origin 
                                                                           >> 0xfU)))) 
                                                            << 0x10U) 
                                                           | (0xffffU 
                                                              & vlSelf->cpu__DOT__src_rd_PMEM_origin))))));
    __Vtemp_h0be88f99__0[1U] = ((0xfffffffcU & (((- (IData)(
                                                            (1U 
                                                             & (vlSelf->cpu__DOT__src_rd_PMEM_origin 
                                                                >> 7U)))) 
                                                 << 0xaU) 
                                                | (0x3fcU 
                                                   & (vlSelf->cpu__DOT__src_rd_PMEM_origin 
                                                      << 2U)))) 
                                | (IData)(((0x200000000ULL 
                                            | (QData)((IData)(
                                                              (((- (IData)(
                                                                           (1U 
                                                                            & (vlSelf->cpu__DOT__src_rd_PMEM_origin 
                                                                               >> 0xfU)))) 
                                                                << 0x10U) 
                                                               | (0xffffU 
                                                                  & vlSelf->cpu__DOT__src_rd_PMEM_origin))))) 
                                           >> 0x20U)));
    __Vtemp_h0be88f99__0[2U] = (4U | ((vlSelf->cpu__DOT__src_rd_PMEM_origin 
                                       << 4U) | (3U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & (vlSelf->cpu__DOT__src_rd_PMEM_origin 
                                                                   >> 7U)))) 
                                                    >> 0x16U))));
    __Vtemp_h0be88f99__0[3U] = (vlSelf->cpu__DOT__src_rd_PMEM_origin 
                                >> 0x1cU);
    bufp->fullWData(oldp+405,(__Vtemp_h0be88f99__0),102);
    bufp->fullBit(oldp+409,(1U));
    bufp->fullBit(oldp+410,(0U));
    bufp->fullIData(oldp+411,(0x80000000U),32);
}
