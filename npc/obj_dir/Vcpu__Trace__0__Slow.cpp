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
    tracep->declBit(c+326,"clk", false,-1);
    tracep->declBit(c+327,"rst", false,-1);
    tracep->declBus(c+328,"pc", false,-1, 31,0);
    tracep->declBus(c+329,"dnpc", false,-1, 31,0);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+326,"clk", false,-1);
    tracep->declBit(c+327,"rst", false,-1);
    tracep->declBus(c+328,"pc", false,-1, 31,0);
    tracep->declBus(c+329,"dnpc", false,-1, 31,0);
    tracep->declBus(c+66,"cmd", false,-1, 31,0);
    tracep->declBus(c+67,"rs1", false,-1, 4,0);
    tracep->declBus(c+68,"rs2", false,-1, 4,0);
    tracep->declBus(c+69,"rd", false,-1, 4,0);
    tracep->declBus(c+70,"src1", false,-1, 31,0);
    tracep->declBus(c+71,"src2", false,-1, 31,0);
    tracep->declBus(c+72,"imm", false,-1, 31,0);
    tracep->declBus(c+73,"src_rd", false,-1, 31,0);
    tracep->declBus(c+74,"op_IMM", false,-1, 2,0);
    tracep->declBit(c+75,"op_ALU_Asrc", false,-1);
    tracep->declBus(c+76,"op_ALU_Bsrc", false,-1, 1,0);
    tracep->declBus(c+77,"op_ALU_sel", false,-1, 3,0);
    tracep->declBit(c+78,"op_PC_Asrc", false,-1);
    tracep->declBit(c+79,"op_PC_Bsrc", false,-1);
    tracep->declBit(c+80,"en_Wreg", false,-1);
    tracep->declBit(c+81,"LESS", false,-1);
    tracep->declBit(c+82,"IS_ZERO", false,-1);
    tracep->declBus(c+83,"a0", false,-1, 31,0);
    tracep->declBus(c+84,"b0", false,-1, 31,0);
    tracep->declBus(c+85,"a1", false,-1, 31,0);
    tracep->declBus(c+86,"b1", false,-1, 31,0);
    tracep->declBit(c+87,"L_R", false,-1);
    tracep->declBit(c+88,"S_U", false,-1);
    tracep->declBit(c+89,"A_L", false,-1);
    tracep->declBit(c+90,"Add_Sub", false,-1);
    tracep->pushNamePrefix("alu1 ");
    tracep->declBus(c+91,"sel", false,-1, 2,0);
    tracep->declBit(c+89,"A_L", false,-1);
    tracep->declBit(c+87,"L_R", false,-1);
    tracep->declBit(c+88,"S_U", false,-1);
    tracep->declBit(c+90,"Add_Sub", false,-1);
    tracep->declBus(c+85,"a", false,-1, 31,0);
    tracep->declBus(c+86,"b", false,-1, 31,0);
    tracep->declBus(c+73,"result", false,-1, 31,0);
    tracep->declBit(c+81,"LESS", false,-1);
    tracep->declBit(c+82,"IS_ZERO", false,-1);
    tracep->declBus(c+92,"ADDER_result", false,-1, 31,0);
    tracep->declBus(c+93,"SHIFT_result", false,-1, 31,0);
    tracep->declBus(c+94,"AND_result", false,-1, 31,0);
    tracep->declBus(c+95,"OR_result", false,-1, 31,0);
    tracep->declBus(c+96,"XOR_result", false,-1, 31,0);
    tracep->pushNamePrefix("add1 ");
    tracep->declBit(c+90,"mode", false,-1);
    tracep->declBus(c+85,"a", false,-1, 31,0);
    tracep->declBus(c+86,"b", false,-1, 31,0);
    tracep->declBit(c+88,"S_U", false,-1);
    tracep->declBus(c+92,"result", false,-1, 31,0);
    tracep->declBit(c+81,"LESS", false,-1);
    tracep->declBit(c+82,"IS_ZERO", false,-1);
    tracep->declBit(c+97,"overflow", false,-1);
    tracep->declBit(c+98,"carry", false,-1);
    tracep->declBit(c+99,"LESS_u", false,-1);
    tracep->declBit(c+100,"LESS_s", false,-1);
    tracep->declBus(c+101,"add_cin", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux1 ");
    tracep->declBus(c+339,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+340,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+341,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+73,"out", false,-1, 31,0);
    tracep->declBus(c+91,"key", false,-1, 2,0);
    tracep->declBus(c+342,"default_out", false,-1, 31,0);
    tracep->declArray(c+102,"lut", false,-1, 279,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+339,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+340,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+341,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+343,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+73,"out", false,-1, 31,0);
    tracep->declBus(c+91,"key", false,-1, 2,0);
    tracep->declBus(c+342,"default_out", false,-1, 31,0);
    tracep->declArray(c+102,"lut", false,-1, 279,0);
    tracep->declBus(c+344,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+111+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+127+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+135,"lut_out", false,-1, 31,0);
    tracep->declBit(c+136,"hit", false,-1);
    tracep->declBus(c+345,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("shift1 ");
    tracep->declBit(c+87,"L_R", false,-1);
    tracep->declBit(c+89,"A_L", false,-1);
    tracep->declBus(c+85,"in", false,-1, 31,0);
    tracep->declBus(c+86,"soffset", false,-1, 31,0);
    tracep->declBus(c+93,"out", false,-1, 31,0);
    tracep->pushNamePrefix("mux1 ");
    tracep->declBus(c+340,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+346,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+341,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+93,"out", false,-1, 31,0);
    tracep->declBus(c+137,"key", false,-1, 1,0);
    tracep->declBus(c+138,"default_out", false,-1, 31,0);
    tracep->declArray(c+139,"lut", false,-1, 101,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+340,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+346,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+341,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+343,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+93,"out", false,-1, 31,0);
    tracep->declBus(c+137,"key", false,-1, 1,0);
    tracep->declBus(c+138,"default_out", false,-1, 31,0);
    tracep->declArray(c+139,"lut", false,-1, 101,0);
    tracep->declBus(c+347,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+143+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+9+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+149+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+152,"lut_out", false,-1, 31,0);
    tracep->declBit(c+153,"hit", false,-1);
    tracep->declBus(c+348,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("cu1 ");
    tracep->declBus(c+154,"opcode", false,-1, 6,0);
    tracep->declBus(c+155,"funct3", false,-1, 2,0);
    tracep->declBit(c+156,"funct7", false,-1);
    tracep->declBit(c+82,"IS_ZERO", false,-1);
    tracep->declBit(c+81,"LESS", false,-1);
    tracep->declBus(c+74,"op_IMM", false,-1, 2,0);
    tracep->declBit(c+80,"en_Wreg", false,-1);
    tracep->declBit(c+157,"store", false,-1);
    tracep->declBit(c+158,"load", false,-1);
    tracep->declBit(c+75,"op_ALU_Asrc", false,-1);
    tracep->declBus(c+76,"op_ALU_Bsrc", false,-1, 1,0);
    tracep->declBus(c+77,"op_ALU_sel", false,-1, 3,0);
    tracep->declBit(c+78,"op_PC_Asrc", false,-1);
    tracep->declBit(c+79,"op_PC_Bsrc", false,-1);
    tracep->declBit(c+159,"I", false,-1);
    tracep->declBit(c+160,"R", false,-1);
    tracep->declBit(c+161,"J", false,-1);
    tracep->declBit(c+157,"S", false,-1);
    tracep->declBit(c+162,"B", false,-1);
    tracep->declBus(c+163,"R_sel", false,-1, 3,0);
    tracep->declBus(c+164,"I_sel", false,-1, 3,0);
    tracep->declBit(c+158,"I_LOAD", false,-1);
    tracep->declBit(c+165,"I_JALR", false,-1);
    tracep->declBit(c+166,"U_AUIPC", false,-1);
    tracep->declBit(c+167,"U_LUI", false,-1);
    tracep->declBus(c+168,"branch", false,-1, 2,0);
    tracep->declBus(c+169,"branch_tmp", false,-1, 2,0);
    tracep->declBit(c+170,"is_halt", false,-1);
    tracep->pushNamePrefix("mux1 ");
    tracep->declBus(c+340,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+349,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+340,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+168,"out", false,-1, 2,0);
    tracep->declBus(c+171,"key", false,-1, 4,0);
    tracep->declBus(c+350,"default_out", false,-1, 2,0);
    tracep->declBus(c+172,"lut", false,-1, 23,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+340,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+349,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+340,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+343,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+168,"out", false,-1, 2,0);
    tracep->declBus(c+171,"key", false,-1, 4,0);
    tracep->declBus(c+350,"default_out", false,-1, 2,0);
    tracep->declBus(c+172,"lut", false,-1, 23,0);
    tracep->declBus(c+339,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+173+i*1,"pair_list", true,(i+0), 7,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+12+i*1,"key_list", true,(i+0), 4,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+176+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+179,"lut_out", false,-1, 2,0);
    tracep->declBit(c+180,"hit", false,-1);
    tracep->declBus(c+348,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mux2 ");
    tracep->declBus(c+351,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+340,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+340,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+169,"out", false,-1, 2,0);
    tracep->declBus(c+155,"key", false,-1, 2,0);
    tracep->declBus(c+352,"default_out", false,-1, 2,0);
    tracep->declQuad(c+353,"lut", false,-1, 41,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+351,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+340,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+340,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+343,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+169,"out", false,-1, 2,0);
    tracep->declBus(c+155,"key", false,-1, 2,0);
    tracep->declBus(c+352,"default_out", false,-1, 2,0);
    tracep->declQuad(c+353,"lut", false,-1, 41,0);
    tracep->declBus(c+355,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+15+i*1,"pair_list", true,(i+0), 5,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+22+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+29+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+181,"lut_out", false,-1, 2,0);
    tracep->declBit(c+182,"hit", false,-1);
    tracep->declBus(c+356,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mux3 ");
    tracep->declBus(c+339,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+340,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+357,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+163,"out", false,-1, 3,0);
    tracep->declBus(c+155,"key", false,-1, 2,0);
    tracep->declBus(c+358,"default_out", false,-1, 3,0);
    tracep->declQuad(c+183,"lut", false,-1, 55,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+339,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+340,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+357,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+343,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+163,"out", false,-1, 3,0);
    tracep->declBus(c+155,"key", false,-1, 2,0);
    tracep->declBus(c+358,"default_out", false,-1, 3,0);
    tracep->declQuad(c+183,"lut", false,-1, 55,0);
    tracep->declBus(c+351,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+185+i*1,"pair_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+36+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+193+i*1,"data_list", true,(i+0), 3,0);
    }
    tracep->declBus(c+201,"lut_out", false,-1, 3,0);
    tracep->declBit(c+202,"hit", false,-1);
    tracep->declBus(c+345,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mux4 ");
    tracep->declBus(c+339,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+340,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+357,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+164,"out", false,-1, 3,0);
    tracep->declBus(c+155,"key", false,-1, 2,0);
    tracep->declBus(c+358,"default_out", false,-1, 3,0);
    tracep->declQuad(c+203,"lut", false,-1, 55,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+339,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+340,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+357,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+343,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+164,"out", false,-1, 3,0);
    tracep->declBus(c+155,"key", false,-1, 2,0);
    tracep->declBus(c+358,"default_out", false,-1, 3,0);
    tracep->declQuad(c+203,"lut", false,-1, 55,0);
    tracep->declBus(c+351,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+205+i*1,"pair_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+44+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+213+i*1,"data_list", true,(i+0), 3,0);
    }
    tracep->declBus(c+221,"lut_out", false,-1, 3,0);
    tracep->declBit(c+222,"hit", false,-1);
    tracep->declBus(c+345,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("dimm1 ");
    tracep->declBus(c+66,"cmd", false,-1, 31,0);
    tracep->declBus(c+74,"op_IMM", false,-1, 2,0);
    tracep->declBus(c+72,"imm", false,-1, 31,0);
    tracep->declBus(c+223,"immI", false,-1, 31,0);
    tracep->declBus(c+224,"immU", false,-1, 31,0);
    tracep->declBus(c+225,"immJ", false,-1, 31,0);
    tracep->declBus(c+226,"immS", false,-1, 31,0);
    tracep->declBus(c+227,"immB", false,-1, 31,0);
    tracep->pushNamePrefix("mux1 ");
    tracep->declBus(c+349,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+340,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+341,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+72,"out", false,-1, 31,0);
    tracep->declBus(c+74,"key", false,-1, 2,0);
    tracep->declBus(c+223,"default_out", false,-1, 31,0);
    tracep->declArray(c+228,"lut", false,-1, 174,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+349,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+340,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+341,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+343,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+72,"out", false,-1, 31,0);
    tracep->declBus(c+74,"key", false,-1, 2,0);
    tracep->declBus(c+223,"default_out", false,-1, 31,0);
    tracep->declArray(c+228,"lut", false,-1, 174,0);
    tracep->declBus(c+344,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+234+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+52+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+244+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+249,"lut_out", false,-1, 31,0);
    tracep->declBit(c+250,"hit", false,-1);
    tracep->declBus(c+359,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("mux1 ");
    tracep->declBus(c+346,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+343,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+341,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+83,"out", false,-1, 31,0);
    tracep->declBus(c+78,"key", false,-1, 0,0);
    tracep->declArray(c+251,"lut", false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+346,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+343,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+341,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+360,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+83,"out", false,-1, 31,0);
    tracep->declBus(c+78,"key", false,-1, 0,0);
    tracep->declBus(c+342,"default_out", false,-1, 31,0);
    tracep->declArray(c+251,"lut", false,-1, 65,0);
    tracep->declBus(c+361,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+254+i*2,"pair_list", true,(i+0), 32,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+57+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+258+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+260,"lut_out", false,-1, 31,0);
    tracep->declBit(c+261,"hit", false,-1);
    tracep->declBus(c+362,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mux2 ");
    tracep->declBus(c+346,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+343,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+341,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+84,"out", false,-1, 31,0);
    tracep->declBus(c+79,"key", false,-1, 0,0);
    tracep->declArray(c+330,"lut", false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+346,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+343,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+341,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+360,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+84,"out", false,-1, 31,0);
    tracep->declBus(c+79,"key", false,-1, 0,0);
    tracep->declBus(c+342,"default_out", false,-1, 31,0);
    tracep->declArray(c+330,"lut", false,-1, 65,0);
    tracep->declBus(c+361,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+262+i*2,"pair_list", true,(i+0), 32,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+59+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+266+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+268,"lut_out", false,-1, 31,0);
    tracep->declBit(c+269,"hit", false,-1);
    tracep->declBus(c+362,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mux3 ");
    tracep->declBus(c+346,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+343,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+341,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+85,"out", false,-1, 31,0);
    tracep->declBus(c+75,"key", false,-1, 0,0);
    tracep->declArray(c+333,"lut", false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+346,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+343,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+341,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+360,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+85,"out", false,-1, 31,0);
    tracep->declBus(c+75,"key", false,-1, 0,0);
    tracep->declBus(c+342,"default_out", false,-1, 31,0);
    tracep->declArray(c+333,"lut", false,-1, 65,0);
    tracep->declBus(c+361,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+270+i*2,"pair_list", true,(i+0), 32,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+61+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+274+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+276,"lut_out", false,-1, 31,0);
    tracep->declBit(c+277,"hit", false,-1);
    tracep->declBus(c+362,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mux4 ");
    tracep->declBus(c+340,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+346,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+341,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+86,"out", false,-1, 31,0);
    tracep->declBus(c+76,"key", false,-1, 1,0);
    tracep->declBus(c+71,"default_out", false,-1, 31,0);
    tracep->declArray(c+278,"lut", false,-1, 101,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+340,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+346,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+341,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+343,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+86,"out", false,-1, 31,0);
    tracep->declBus(c+76,"key", false,-1, 1,0);
    tracep->declBus(c+71,"default_out", false,-1, 31,0);
    tracep->declArray(c+278,"lut", false,-1, 101,0);
    tracep->declBus(c+347,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+282+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+63+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+288+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+291,"lut_out", false,-1, 31,0);
    tracep->declBit(c+292,"hit", false,-1);
    tracep->declBus(c+348,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("pc1 ");
    tracep->declBit(c+326,"clk", false,-1);
    tracep->declBit(c+327,"rst", false,-1);
    tracep->declBus(c+83,"a", false,-1, 31,0);
    tracep->declBus(c+84,"b", false,-1, 31,0);
    tracep->declBit(c+363,"wen", false,-1);
    tracep->declBus(c+329,"dnpc", false,-1, 31,0);
    tracep->declBus(c+328,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("add1 ");
    tracep->declBit(c+364,"mode", false,-1);
    tracep->declBus(c+83,"a", false,-1, 31,0);
    tracep->declBus(c+84,"b", false,-1, 31,0);
    tracep->declBit(c+363,"S_U", false,-1);
    tracep->declBus(c+329,"result", false,-1, 31,0);
    tracep->declBit(c+293,"LESS", false,-1);
    tracep->declBit(c+336,"IS_ZERO", false,-1);
    tracep->declBit(c+337,"overflow", false,-1);
    tracep->declBit(c+293,"carry", false,-1);
    tracep->declBit(c+293,"LESS_u", false,-1);
    tracep->declBit(c+338,"LESS_s", false,-1);
    tracep->declBus(c+84,"add_cin", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dnpc2pc ");
    tracep->declBus(c+341,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+365,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+326,"clk", false,-1);
    tracep->declBit(c+327,"rst", false,-1);
    tracep->declBus(c+329,"din", false,-1, 31,0);
    tracep->declBus(c+328,"dout", false,-1, 31,0);
    tracep->declBit(c+363,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("rf1 ");
    tracep->declBus(c+341,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+341,"REG_NUM", false,-1, 31,0);
    tracep->declBus(c+349,"REG_NUM_BIT", false,-1, 31,0);
    tracep->declBit(c+326,"clk", false,-1);
    tracep->declBus(c+67,"raddr_a", false,-1, 4,0);
    tracep->declBus(c+68,"raddr_b", false,-1, 4,0);
    tracep->declBus(c+73,"wdata", false,-1, 31,0);
    tracep->declBus(c+69,"waddr", false,-1, 4,0);
    tracep->declBit(c+80,"wen", false,-1);
    tracep->declBus(c+70,"rdata_a", false,-1, 31,0);
    tracep->declBus(c+71,"rdata_b", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+294+i*1,"rf", true,(i+0), 31,0);
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
    VlWide<9>/*287:0*/ __Vtemp_h0b480982__0;
    VlWide<4>/*127:0*/ __Vtemp_hedab82a1__0;
    VlWide<6>/*191:0*/ __Vtemp_h3b964fba__0;
    VlWide<3>/*95:0*/ __Vtemp_hfeedee49__0;
    VlWide<4>/*127:0*/ __Vtemp_h2a03d93b__0;
    VlWide<3>/*95:0*/ __Vtemp_hb5bfc05d__0;
    VlWide<3>/*95:0*/ __Vtemp_hfc952c0a__0;
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
    bufp->fullIData(oldp+66,(vlSelf->cpu__DOT__cmd),32);
    bufp->fullCData(oldp+67,((0x1fU & (vlSelf->cpu__DOT__cmd 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+68,((0x1fU & (vlSelf->cpu__DOT__cmd 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+69,((0x1fU & (vlSelf->cpu__DOT__cmd 
                                       >> 7U))),5);
    bufp->fullIData(oldp+70,(vlSelf->cpu__DOT__src1),32);
    bufp->fullIData(oldp+71,(vlSelf->cpu__DOT__src2),32);
    bufp->fullIData(oldp+72,(vlSelf->cpu__DOT__imm),32);
    bufp->fullIData(oldp+73,(vlSelf->cpu__DOT__src_rd),32);
    bufp->fullCData(oldp+74,(vlSelf->cpu__DOT__op_IMM),3);
    bufp->fullBit(oldp+75,(vlSelf->cpu__DOT__op_ALU_Asrc));
    bufp->fullCData(oldp+76,(vlSelf->cpu__DOT__op_ALU_Bsrc),2);
    bufp->fullCData(oldp+77,(vlSelf->cpu__DOT__op_ALU_sel),4);
    bufp->fullBit(oldp+78,(vlSelf->cpu__DOT__op_PC_Asrc));
    bufp->fullBit(oldp+79,(vlSelf->cpu__DOT__op_PC_Bsrc));
    bufp->fullBit(oldp+80,(((IData)(vlSelf->cpu__DOT__cu1__DOT____VdfgTmp_hf442cbef__0) 
                            | ((0x6fU == (0x7fU & vlSelf->cpu__DOT__cmd)) 
                               | ((3U == (0x7fU & vlSelf->cpu__DOT__cmd)) 
                                  | ((0x33U == (0x7fU 
                                                & vlSelf->cpu__DOT__cmd)) 
                                     | (IData)(vlSelf->cpu__DOT__cu1__DOT____VdfgTmp_hd4cadad9__0)))))));
    bufp->fullBit(oldp+81,(vlSelf->cpu__DOT__LESS));
    bufp->fullBit(oldp+82,((1U & (~ (IData)((0U != vlSelf->cpu__DOT__alu1__DOT__ADDER_result))))));
    bufp->fullIData(oldp+83,(vlSelf->cpu__DOT__a0),32);
    bufp->fullIData(oldp+84,(vlSelf->cpu__DOT__b0),32);
    bufp->fullIData(oldp+85,(vlSelf->cpu__DOT__a1),32);
    bufp->fullIData(oldp+86,(vlSelf->cpu__DOT__b1),32);
    bufp->fullBit(oldp+87,((1U != (IData)(vlSelf->cpu__DOT__op_ALU_sel))));
    bufp->fullBit(oldp+88,((2U != (IData)(vlSelf->cpu__DOT__op_ALU_sel))));
    bufp->fullBit(oldp+89,((0xdU != (IData)(vlSelf->cpu__DOT__op_ALU_sel))));
    bufp->fullBit(oldp+90,((0U != (IData)(vlSelf->cpu__DOT__op_ALU_sel))));
    bufp->fullCData(oldp+91,((7U & (IData)(vlSelf->cpu__DOT__op_ALU_sel))),3);
    bufp->fullIData(oldp+92,(vlSelf->cpu__DOT__alu1__DOT__ADDER_result),32);
    bufp->fullIData(oldp+93,(vlSelf->cpu__DOT__alu1__DOT__SHIFT_result),32);
    bufp->fullIData(oldp+94,((vlSelf->cpu__DOT__a1 
                              & vlSelf->cpu__DOT__b1)),32);
    bufp->fullIData(oldp+95,((vlSelf->cpu__DOT__a1 
                              | vlSelf->cpu__DOT__b1)),32);
    bufp->fullIData(oldp+96,((vlSelf->cpu__DOT__a1 
                              ^ vlSelf->cpu__DOT__b1)),32);
    bufp->fullBit(oldp+97,((((vlSelf->cpu__DOT__a1 
                              >> 0x1fU) == (vlSelf->cpu__DOT__alu1__DOT__add1__DOT__add_cin 
                                            >> 0x1fU)) 
                            & ((vlSelf->cpu__DOT__a1 
                                >> 0x1fU) != (vlSelf->cpu__DOT__alu1__DOT__ADDER_result 
                                              >> 0x1fU)))));
    bufp->fullBit(oldp+98,((1U & (IData)((1ULL & (((QData)((IData)(vlSelf->cpu__DOT__a1)) 
                                                   + (QData)((IData)(vlSelf->cpu__DOT__alu1__DOT__add1__DOT__add_cin))) 
                                                  >> 0x20U))))));
    bufp->fullBit(oldp+99,((1U & ((0U != (IData)(vlSelf->cpu__DOT__op_ALU_sel)) 
                                  ^ (IData)((1ULL & 
                                             (((QData)((IData)(vlSelf->cpu__DOT__a1)) 
                                               + (QData)((IData)(vlSelf->cpu__DOT__alu1__DOT__add1__DOT__add_cin))) 
                                              >> 0x20U)))))));
    bufp->fullBit(oldp+100,((1U & ((((vlSelf->cpu__DOT__a1 
                                      >> 0x1fU) == 
                                     (vlSelf->cpu__DOT__alu1__DOT__add1__DOT__add_cin 
                                      >> 0x1fU)) & 
                                    ((vlSelf->cpu__DOT__a1 
                                      >> 0x1fU) != 
                                     (vlSelf->cpu__DOT__alu1__DOT__ADDER_result 
                                      >> 0x1fU))) ^ 
                                   (vlSelf->cpu__DOT__alu1__DOT__ADDER_result 
                                    >> 0x1fU)))));
    bufp->fullIData(oldp+101,(vlSelf->cpu__DOT__alu1__DOT__add1__DOT__add_cin),32);
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
    bufp->fullWData(oldp+102,(__Vtemp_h0b480982__0),280);
    bufp->fullQData(oldp+111,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+113,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+115,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+117,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+119,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullQData(oldp+121,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[5]),35);
    bufp->fullQData(oldp+123,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[6]),35);
    bufp->fullQData(oldp+125,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[7]),35);
    bufp->fullIData(oldp+127,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+128,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+129,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+130,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+131,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+132,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+133,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+134,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+135,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+136,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+137,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT____Vcellinp__mux1____pinNumber2),2);
    bufp->fullIData(oldp+138,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT____Vcellinp__mux1____pinNumber3),32);
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
    bufp->fullWData(oldp+139,(__Vtemp_hedab82a1__0),102);
    bufp->fullQData(oldp+143,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+145,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+147,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullIData(oldp+149,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+150,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+151,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+152,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+153,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+154,((0x7fU & vlSelf->cpu__DOT__cmd)),7);
    bufp->fullCData(oldp+155,((7U & (vlSelf->cpu__DOT__cmd 
                                     >> 0xcU))),3);
    bufp->fullBit(oldp+156,((1U & (vlSelf->cpu__DOT__cmd 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+157,((0x23U == (0x7fU & vlSelf->cpu__DOT__cmd))));
    bufp->fullBit(oldp+158,((3U == (0x7fU & vlSelf->cpu__DOT__cmd))));
    bufp->fullBit(oldp+159,((0x13U == (0x7fU & vlSelf->cpu__DOT__cmd))));
    bufp->fullBit(oldp+160,((0x33U == (0x7fU & vlSelf->cpu__DOT__cmd))));
    bufp->fullBit(oldp+161,((0x6fU == (0x7fU & vlSelf->cpu__DOT__cmd))));
    bufp->fullBit(oldp+162,((0x63U == (0x7fU & vlSelf->cpu__DOT__cmd))));
    bufp->fullCData(oldp+163,(vlSelf->cpu__DOT__cu1__DOT__R_sel),4);
    bufp->fullCData(oldp+164,(vlSelf->cpu__DOT__cu1__DOT__I_sel),4);
    bufp->fullBit(oldp+165,((0x67U == (0x7fU & vlSelf->cpu__DOT__cmd))));
    bufp->fullBit(oldp+166,((0x17U == (0x7fU & vlSelf->cpu__DOT__cmd))));
    bufp->fullBit(oldp+167,((0x37U == (0x7fU & vlSelf->cpu__DOT__cmd))));
    bufp->fullCData(oldp+168,(vlSelf->cpu__DOT__cu1__DOT__branch),3);
    bufp->fullCData(oldp+169,(vlSelf->cpu__DOT__cu1__DOT__branch_tmp),3);
    bufp->fullBit(oldp+170,(vlSelf->cpu__DOT__cu1__DOT__is_halt));
    bufp->fullCData(oldp+171,((0x1fU & (vlSelf->cpu__DOT__cmd 
                                        >> 2U))),5);
    bufp->fullIData(oldp+172,((0xcad9c0U | (IData)(vlSelf->cpu__DOT__cu1__DOT__branch_tmp))),24);
    bufp->fullCData(oldp+173,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__pair_list[0]),8);
    bufp->fullCData(oldp+174,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__pair_list[1]),8);
    bufp->fullCData(oldp+175,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__pair_list[2]),8);
    bufp->fullCData(oldp+176,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list[0]),3);
    bufp->fullCData(oldp+177,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list[1]),3);
    bufp->fullCData(oldp+178,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list[2]),3);
    bufp->fullCData(oldp+179,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+180,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+181,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+182,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+183,((0x804511a8940000ULL 
                               | (((QData)((IData)(
                                                   ((0x40000000U 
                                                     & vlSelf->cpu__DOT__cmd)
                                                     ? 8U
                                                     : 0U))) 
                                   << 0x31U) | (QData)((IData)(
                                                               (0x3377U 
                                                                | (((0x40000000U 
                                                                     & vlSelf->cpu__DOT__cmd)
                                                                     ? 0xdU
                                                                     : 5U) 
                                                                   << 0xeU))))))),56);
    bufp->fullCData(oldp+185,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[0]),7);
    bufp->fullCData(oldp+186,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[1]),7);
    bufp->fullCData(oldp+187,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[2]),7);
    bufp->fullCData(oldp+188,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[3]),7);
    bufp->fullCData(oldp+189,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[4]),7);
    bufp->fullCData(oldp+190,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[5]),7);
    bufp->fullCData(oldp+191,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[6]),7);
    bufp->fullCData(oldp+192,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[7]),7);
    bufp->fullCData(oldp+193,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[0]),4);
    bufp->fullCData(oldp+194,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[1]),4);
    bufp->fullCData(oldp+195,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[2]),4);
    bufp->fullCData(oldp+196,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[3]),4);
    bufp->fullCData(oldp+197,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[4]),4);
    bufp->fullCData(oldp+198,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[5]),4);
    bufp->fullCData(oldp+199,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[6]),4);
    bufp->fullCData(oldp+200,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[7]),4);
    bufp->fullCData(oldp+201,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__lut_out),4);
    bufp->fullBit(oldp+202,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+203,((0x89d44cddc8d0ULL | (QData)((IData)(
                                                                   ((0x40000000U 
                                                                     & vlSelf->cpu__DOT__cmd)
                                                                     ? 0xdU
                                                                     : 5U))))),56);
    bufp->fullCData(oldp+205,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__pair_list[0]),7);
    bufp->fullCData(oldp+206,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__pair_list[1]),7);
    bufp->fullCData(oldp+207,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__pair_list[2]),7);
    bufp->fullCData(oldp+208,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__pair_list[3]),7);
    bufp->fullCData(oldp+209,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__pair_list[4]),7);
    bufp->fullCData(oldp+210,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__pair_list[5]),7);
    bufp->fullCData(oldp+211,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__pair_list[6]),7);
    bufp->fullCData(oldp+212,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__pair_list[7]),7);
    bufp->fullCData(oldp+213,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list[0]),4);
    bufp->fullCData(oldp+214,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list[1]),4);
    bufp->fullCData(oldp+215,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list[2]),4);
    bufp->fullCData(oldp+216,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list[3]),4);
    bufp->fullCData(oldp+217,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list[4]),4);
    bufp->fullCData(oldp+218,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list[5]),4);
    bufp->fullCData(oldp+219,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list[6]),4);
    bufp->fullCData(oldp+220,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list[7]),4);
    bufp->fullCData(oldp+221,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__lut_out),4);
    bufp->fullBit(oldp+222,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+223,(vlSelf->cpu__DOT__dimm1__DOT__immI),32);
    bufp->fullIData(oldp+224,((0xfffff000U & vlSelf->cpu__DOT__cmd)),32);
    bufp->fullIData(oldp+225,((((- (IData)((vlSelf->cpu__DOT__cmd 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->cpu__DOT__cmd) 
                                             | ((0x800U 
                                                 & (vlSelf->cpu__DOT__cmd 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->cpu__DOT__cmd 
                                                      >> 0x14U)))))),32);
    bufp->fullIData(oldp+226,((((- (IData)((vlSelf->cpu__DOT__cmd 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->cpu__DOT__cmd 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->cpu__DOT__cmd 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+227,((((- (IData)((vlSelf->cpu__DOT__cmd 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0x800U 
                                             & (vlSelf->cpu__DOT__cmd 
                                                << 4U)) 
                                            | ((0x7e0U 
                                                & (vlSelf->cpu__DOT__cmd 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelf->cpu__DOT__cmd 
                                                     >> 7U)))))),32);
    __Vtemp_h3b964fba__0[0U] = (IData)((0x300000000ULL 
                                        | (QData)((IData)(
                                                          (((- (IData)(
                                                                       (vlSelf->cpu__DOT__cmd 
                                                                        >> 0x1fU))) 
                                                            << 0xcU) 
                                                           | ((0x800U 
                                                               & (vlSelf->cpu__DOT__cmd 
                                                                  << 4U)) 
                                                              | ((0x7e0U 
                                                                  & (vlSelf->cpu__DOT__cmd 
                                                                     >> 0x14U)) 
                                                                 | (0x1eU 
                                                                    & (vlSelf->cpu__DOT__cmd 
                                                                       >> 7U)))))))));
    __Vtemp_h3b964fba__0[1U] = ((0xfffffff8U & (((- (IData)(
                                                            (vlSelf->cpu__DOT__cmd 
                                                             >> 0x1fU))) 
                                                 << 0xfU) 
                                                | ((0x7f00U 
                                                    & (vlSelf->cpu__DOT__cmd 
                                                       >> 0x11U)) 
                                                   | (0xf8U 
                                                      & (vlSelf->cpu__DOT__cmd 
                                                         >> 4U))))) 
                                | (IData)(((0x300000000ULL 
                                            | (QData)((IData)(
                                                              (((- (IData)(
                                                                           (vlSelf->cpu__DOT__cmd 
                                                                            >> 0x1fU))) 
                                                                << 0xcU) 
                                                               | ((0x800U 
                                                                   & (vlSelf->cpu__DOT__cmd 
                                                                      << 4U)) 
                                                                  | ((0x7e0U 
                                                                      & (vlSelf->cpu__DOT__cmd 
                                                                         >> 0x14U)) 
                                                                     | (0x1eU 
                                                                        & (vlSelf->cpu__DOT__cmd 
                                                                           >> 7U)))))))) 
                                           >> 0x20U)));
    __Vtemp_h3b964fba__0[2U] = (0x10U | ((0xffffffc0U 
                                          & (((- (IData)(
                                                         (vlSelf->cpu__DOT__cmd 
                                                          >> 0x1fU))) 
                                              << 0x1aU) 
                                             | ((0x3fc0000U 
                                                 & (vlSelf->cpu__DOT__cmd 
                                                    << 6U)) 
                                                | ((0x20000U 
                                                    & (vlSelf->cpu__DOT__cmd 
                                                       >> 3U)) 
                                                   | (0x1ff80U 
                                                      & (vlSelf->cpu__DOT__cmd 
                                                         >> 0xeU)))))) 
                                         | (7U & ((- (IData)(
                                                             (vlSelf->cpu__DOT__cmd 
                                                              >> 0x1fU))) 
                                                  >> 0x11U))));
    __Vtemp_h3b964fba__0[3U] = (0x100U | ((0xffe00000U 
                                           & (vlSelf->cpu__DOT__cmd 
                                              << 9U)) 
                                          | (0x3fU 
                                             & ((- (IData)(
                                                           (vlSelf->cpu__DOT__cmd 
                                                            >> 0x1fU))) 
                                                >> 6U))));
    __Vtemp_h3b964fba__0[4U] = (0x200U | ((vlSelf->cpu__DOT__dimm1__DOT__immI 
                                           << 0xcU) 
                                          | (vlSelf->cpu__DOT__cmd 
                                             >> 0x17U)));
    __Vtemp_h3b964fba__0[5U] = (vlSelf->cpu__DOT__dimm1__DOT__immI 
                                >> 0x14U);
    bufp->fullWData(oldp+228,(__Vtemp_h3b964fba__0),175);
    bufp->fullQData(oldp+234,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+236,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+238,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+240,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+242,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullIData(oldp+244,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+245,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+246,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+247,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+248,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+249,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+250,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__hit));
    __Vtemp_hfeedee49__0[0U] = vlSelf->cpu__DOT__imm;
    __Vtemp_hfeedee49__0[1U] = 9U;
    __Vtemp_hfeedee49__0[2U] = 0U;
    bufp->fullWData(oldp+251,(__Vtemp_hfeedee49__0),66);
    bufp->fullQData(oldp+254,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+256,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+258,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+259,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+260,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+261,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+262,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+264,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+266,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+267,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+268,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+269,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+270,(vlSelf->cpu__DOT__mux3__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+272,(vlSelf->cpu__DOT__mux3__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+274,(vlSelf->cpu__DOT__mux3__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+275,(vlSelf->cpu__DOT__mux3__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+276,(vlSelf->cpu__DOT__mux3__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+277,(vlSelf->cpu__DOT__mux3__DOT__i0__DOT__hit));
    __Vtemp_h2a03d93b__0[0U] = 4U;
    __Vtemp_h2a03d93b__0[1U] = (2U | (vlSelf->cpu__DOT__imm 
                                      << 2U));
    __Vtemp_h2a03d93b__0[2U] = (4U | ((vlSelf->cpu__DOT__src2 
                                       << 4U) | (vlSelf->cpu__DOT__imm 
                                                 >> 0x1eU)));
    __Vtemp_h2a03d93b__0[3U] = (vlSelf->cpu__DOT__src2 
                                >> 0x1cU);
    bufp->fullWData(oldp+278,(__Vtemp_h2a03d93b__0),102);
    bufp->fullQData(oldp+282,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+284,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+286,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullIData(oldp+288,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+289,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+290,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+291,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+292,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+293,((1U & (IData)((1ULL & (
                                                   ((QData)((IData)(vlSelf->cpu__DOT__a0)) 
                                                    + (QData)((IData)(vlSelf->cpu__DOT__b0))) 
                                                   >> 0x20U))))));
    bufp->fullIData(oldp+294,(vlSelf->cpu__DOT__rf1__DOT__rf[0]),32);
    bufp->fullIData(oldp+295,(vlSelf->cpu__DOT__rf1__DOT__rf[1]),32);
    bufp->fullIData(oldp+296,(vlSelf->cpu__DOT__rf1__DOT__rf[2]),32);
    bufp->fullIData(oldp+297,(vlSelf->cpu__DOT__rf1__DOT__rf[3]),32);
    bufp->fullIData(oldp+298,(vlSelf->cpu__DOT__rf1__DOT__rf[4]),32);
    bufp->fullIData(oldp+299,(vlSelf->cpu__DOT__rf1__DOT__rf[5]),32);
    bufp->fullIData(oldp+300,(vlSelf->cpu__DOT__rf1__DOT__rf[6]),32);
    bufp->fullIData(oldp+301,(vlSelf->cpu__DOT__rf1__DOT__rf[7]),32);
    bufp->fullIData(oldp+302,(vlSelf->cpu__DOT__rf1__DOT__rf[8]),32);
    bufp->fullIData(oldp+303,(vlSelf->cpu__DOT__rf1__DOT__rf[9]),32);
    bufp->fullIData(oldp+304,(vlSelf->cpu__DOT__rf1__DOT__rf[10]),32);
    bufp->fullIData(oldp+305,(vlSelf->cpu__DOT__rf1__DOT__rf[11]),32);
    bufp->fullIData(oldp+306,(vlSelf->cpu__DOT__rf1__DOT__rf[12]),32);
    bufp->fullIData(oldp+307,(vlSelf->cpu__DOT__rf1__DOT__rf[13]),32);
    bufp->fullIData(oldp+308,(vlSelf->cpu__DOT__rf1__DOT__rf[14]),32);
    bufp->fullIData(oldp+309,(vlSelf->cpu__DOT__rf1__DOT__rf[15]),32);
    bufp->fullIData(oldp+310,(vlSelf->cpu__DOT__rf1__DOT__rf[16]),32);
    bufp->fullIData(oldp+311,(vlSelf->cpu__DOT__rf1__DOT__rf[17]),32);
    bufp->fullIData(oldp+312,(vlSelf->cpu__DOT__rf1__DOT__rf[18]),32);
    bufp->fullIData(oldp+313,(vlSelf->cpu__DOT__rf1__DOT__rf[19]),32);
    bufp->fullIData(oldp+314,(vlSelf->cpu__DOT__rf1__DOT__rf[20]),32);
    bufp->fullIData(oldp+315,(vlSelf->cpu__DOT__rf1__DOT__rf[21]),32);
    bufp->fullIData(oldp+316,(vlSelf->cpu__DOT__rf1__DOT__rf[22]),32);
    bufp->fullIData(oldp+317,(vlSelf->cpu__DOT__rf1__DOT__rf[23]),32);
    bufp->fullIData(oldp+318,(vlSelf->cpu__DOT__rf1__DOT__rf[24]),32);
    bufp->fullIData(oldp+319,(vlSelf->cpu__DOT__rf1__DOT__rf[25]),32);
    bufp->fullIData(oldp+320,(vlSelf->cpu__DOT__rf1__DOT__rf[26]),32);
    bufp->fullIData(oldp+321,(vlSelf->cpu__DOT__rf1__DOT__rf[27]),32);
    bufp->fullIData(oldp+322,(vlSelf->cpu__DOT__rf1__DOT__rf[28]),32);
    bufp->fullIData(oldp+323,(vlSelf->cpu__DOT__rf1__DOT__rf[29]),32);
    bufp->fullIData(oldp+324,(vlSelf->cpu__DOT__rf1__DOT__rf[30]),32);
    bufp->fullIData(oldp+325,(vlSelf->cpu__DOT__rf1__DOT__rf[31]),32);
    bufp->fullBit(oldp+326,(vlSelf->clk));
    bufp->fullBit(oldp+327,(vlSelf->rst));
    bufp->fullIData(oldp+328,(vlSelf->pc),32);
    bufp->fullIData(oldp+329,(vlSelf->dnpc),32);
    __Vtemp_hb5bfc05d__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(vlSelf->cpu__DOT__src1))));
    __Vtemp_hb5bfc05d__0[1U] = ((vlSelf->pc << 1U) 
                                | (IData)(((0x100000000ULL 
                                            | (QData)((IData)(vlSelf->cpu__DOT__src1))) 
                                           >> 0x20U)));
    __Vtemp_hb5bfc05d__0[2U] = (vlSelf->pc >> 0x1fU);
    bufp->fullWData(oldp+330,(__Vtemp_hb5bfc05d__0),66);
    __Vtemp_hfc952c0a__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(vlSelf->pc))));
    __Vtemp_hfc952c0a__0[1U] = ((vlSelf->cpu__DOT__src1 
                                 << 1U) | (IData)((
                                                   (0x100000000ULL 
                                                    | (QData)((IData)(vlSelf->pc))) 
                                                   >> 0x20U)));
    __Vtemp_hfc952c0a__0[2U] = (vlSelf->cpu__DOT__src1 
                                >> 0x1fU);
    bufp->fullWData(oldp+333,(__Vtemp_hfc952c0a__0),66);
    bufp->fullBit(oldp+336,((1U & (~ (IData)((0U != vlSelf->dnpc))))));
    bufp->fullBit(oldp+337,((((vlSelf->cpu__DOT__a0 
                               >> 0x1fU) == (vlSelf->cpu__DOT__b0 
                                             >> 0x1fU)) 
                             & ((vlSelf->cpu__DOT__a0 
                                 >> 0x1fU) != (vlSelf->dnpc 
                                               >> 0x1fU)))));
    bufp->fullBit(oldp+338,((1U & ((((vlSelf->cpu__DOT__a0 
                                      >> 0x1fU) == 
                                     (vlSelf->cpu__DOT__b0 
                                      >> 0x1fU)) & 
                                    ((vlSelf->cpu__DOT__a0 
                                      >> 0x1fU) != 
                                     (vlSelf->dnpc 
                                      >> 0x1fU))) ^ 
                                   (vlSelf->dnpc >> 0x1fU)))));
    bufp->fullIData(oldp+339,(8U),32);
    bufp->fullIData(oldp+340,(3U),32);
    bufp->fullIData(oldp+341,(0x20U),32);
    bufp->fullIData(oldp+342,(0U),32);
    bufp->fullIData(oldp+343,(1U),32);
    bufp->fullIData(oldp+344,(0x23U),32);
    bufp->fullIData(oldp+345,(8U),32);
    bufp->fullIData(oldp+346,(2U),32);
    bufp->fullIData(oldp+347,(0x22U),32);
    bufp->fullIData(oldp+348,(3U),32);
    bufp->fullIData(oldp+349,(5U),32);
    bufp->fullCData(oldp+350,(0U),3);
    bufp->fullIData(oldp+351,(7U),32);
    bufp->fullCData(oldp+352,(5U),3);
    bufp->fullQData(oldp+353,(0xd58f9afdb7ULL),42);
    bufp->fullIData(oldp+355,(6U),32);
    bufp->fullIData(oldp+356,(7U),32);
    bufp->fullIData(oldp+357,(4U),32);
    bufp->fullCData(oldp+358,(7U),4);
    bufp->fullIData(oldp+359,(5U),32);
    bufp->fullIData(oldp+360,(0U),32);
    bufp->fullIData(oldp+361,(0x21U),32);
    bufp->fullIData(oldp+362,(2U),32);
    bufp->fullBit(oldp+363,(1U));
    bufp->fullBit(oldp+364,(0U));
    bufp->fullIData(oldp+365,(0x80000000U),32);
}
