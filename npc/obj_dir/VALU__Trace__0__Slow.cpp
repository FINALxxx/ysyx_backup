// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VALU__Syms.h"


VL_ATTR_COLD void VALU___024root__trace_init_sub__TOP__0(VALU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+295,"clk", false,-1);
    tracep->declBit(c+296,"rst", false,-1);
    tracep->declBus(c+297,"cmd", false,-1, 31,0);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+295,"clk", false,-1);
    tracep->declBit(c+296,"rst", false,-1);
    tracep->declBus(c+297,"cmd", false,-1, 31,0);
    tracep->declBus(c+298,"rs1", false,-1, 4,0);
    tracep->declBus(c+299,"rs2", false,-1, 4,0);
    tracep->declBus(c+330,"rd", false,-1, 4,0);
    tracep->declBus(c+262,"pc", false,-1, 31,0);
    tracep->declBus(c+149,"src1", false,-1, 31,0);
    tracep->declBus(c+150,"src2", false,-1, 31,0);
    tracep->declBus(c+50,"imm", false,-1, 31,0);
    tracep->declBus(c+151,"src_rd", false,-1, 31,0);
    tracep->declBus(c+51,"op_IMM", false,-1, 2,0);
    tracep->declBit(c+52,"op_ALU_Asrc", false,-1);
    tracep->declBus(c+53,"op_ALU_Bsrc", false,-1, 1,0);
    tracep->declBus(c+54,"op_ALU_sel", false,-1, 3,0);
    tracep->declBit(c+152,"op_PC_Asrc", false,-1);
    tracep->declBit(c+55,"op_PC_Bsrc", false,-1);
    tracep->declBit(c+300,"en_Wreg", false,-1);
    tracep->declBit(c+153,"LESS", false,-1);
    tracep->declBit(c+154,"IS_ZERO", false,-1);
    tracep->declBus(c+155,"a0", false,-1, 31,0);
    tracep->declBus(c+156,"b0", false,-1, 31,0);
    tracep->declBus(c+157,"a1", false,-1, 31,0);
    tracep->declBus(c+158,"b1", false,-1, 31,0);
    tracep->declBit(c+56,"L_R", false,-1);
    tracep->declBit(c+57,"S_U", false,-1);
    tracep->declBit(c+58,"A_L", false,-1);
    tracep->declBit(c+59,"Add_Sub", false,-1);
    tracep->pushNamePrefix("alu1 ");
    tracep->declBus(c+60,"sel", false,-1, 2,0);
    tracep->declBit(c+58,"A_L", false,-1);
    tracep->declBit(c+56,"L_R", false,-1);
    tracep->declBit(c+57,"S_U", false,-1);
    tracep->declBit(c+59,"Add_Sub", false,-1);
    tracep->declBus(c+157,"a", false,-1, 31,0);
    tracep->declBus(c+158,"b", false,-1, 31,0);
    tracep->declBus(c+151,"result", false,-1, 31,0);
    tracep->declBit(c+153,"LESS", false,-1);
    tracep->declBit(c+154,"IS_ZERO", false,-1);
    tracep->declBus(c+159,"ADDER_result", false,-1, 31,0);
    tracep->declBus(c+160,"SHIFT_result", false,-1, 31,0);
    tracep->declBus(c+161,"AND_result", false,-1, 31,0);
    tracep->declBus(c+162,"OR_result", false,-1, 31,0);
    tracep->declBus(c+163,"XOR_result", false,-1, 31,0);
    tracep->pushNamePrefix("add1 ");
    tracep->declBit(c+59,"mode", false,-1);
    tracep->declBus(c+157,"a", false,-1, 31,0);
    tracep->declBus(c+158,"b", false,-1, 31,0);
    tracep->declBit(c+57,"S_U", false,-1);
    tracep->declBus(c+159,"result", false,-1, 31,0);
    tracep->declBit(c+153,"LESS", false,-1);
    tracep->declBit(c+154,"IS_ZERO", false,-1);
    tracep->declBit(c+164,"overflow", false,-1);
    tracep->declBit(c+165,"carry", false,-1);
    tracep->declBit(c+166,"LESS_u", false,-1);
    tracep->declBit(c+167,"LESS_s", false,-1);
    tracep->declBus(c+168,"add_cin", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux1 ");
    tracep->declBus(c+331,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+332,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+333,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+151,"out", false,-1, 31,0);
    tracep->declBus(c+60,"key", false,-1, 2,0);
    tracep->declBus(c+334,"default_out", false,-1, 31,0);
    tracep->declArray(c+169,"lut", false,-1, 279,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+331,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+332,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+333,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+335,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+151,"out", false,-1, 31,0);
    tracep->declBus(c+60,"key", false,-1, 2,0);
    tracep->declBus(c+334,"default_out", false,-1, 31,0);
    tracep->declArray(c+169,"lut", false,-1, 279,0);
    tracep->declBus(c+336,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+178+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+194+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+202,"lut_out", false,-1, 31,0);
    tracep->declBit(c+203,"hit", false,-1);
    tracep->declBus(c+337,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("shift1 ");
    tracep->declBit(c+56,"L_R", false,-1);
    tracep->declBit(c+58,"A_L", false,-1);
    tracep->declBus(c+157,"in", false,-1, 31,0);
    tracep->declBus(c+158,"soffset", false,-1, 31,0);
    tracep->declBus(c+160,"out", false,-1, 31,0);
    tracep->pushNamePrefix("mux1 ");
    tracep->declBus(c+332,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+338,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+333,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+160,"out", false,-1, 31,0);
    tracep->declBus(c+61,"key", false,-1, 1,0);
    tracep->declBus(c+204,"default_out", false,-1, 31,0);
    tracep->declArray(c+205,"lut", false,-1, 101,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+332,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+338,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+333,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+335,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+160,"out", false,-1, 31,0);
    tracep->declBus(c+61,"key", false,-1, 1,0);
    tracep->declBus(c+204,"default_out", false,-1, 31,0);
    tracep->declArray(c+205,"lut", false,-1, 101,0);
    tracep->declBus(c+339,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+209+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+9+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+215+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+218,"lut_out", false,-1, 31,0);
    tracep->declBit(c+219,"hit", false,-1);
    tracep->declBus(c+340,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("cu1 ");
    tracep->declBus(c+301,"opcode", false,-1, 6,0);
    tracep->declBus(c+302,"funct3", false,-1, 2,0);
    tracep->declBit(c+303,"funct7", false,-1);
    tracep->declBit(c+154,"IS_ZERO", false,-1);
    tracep->declBit(c+153,"LESS", false,-1);
    tracep->declBus(c+51,"op_IMM", false,-1, 2,0);
    tracep->declBit(c+300,"en_Wreg", false,-1);
    tracep->declBit(c+304,"store", false,-1);
    tracep->declBit(c+305,"load", false,-1);
    tracep->declBit(c+52,"op_ALU_Asrc", false,-1);
    tracep->declBus(c+53,"op_ALU_Bsrc", false,-1, 1,0);
    tracep->declBus(c+54,"op_ALU_sel", false,-1, 3,0);
    tracep->declBit(c+152,"op_PC_Asrc", false,-1);
    tracep->declBit(c+55,"op_PC_Bsrc", false,-1);
    tracep->declBit(c+306,"I", false,-1);
    tracep->declBit(c+307,"R", false,-1);
    tracep->declBit(c+308,"J", false,-1);
    tracep->declBit(c+304,"S", false,-1);
    tracep->declBit(c+309,"B", false,-1);
    tracep->declBus(c+62,"R_sel", false,-1, 3,0);
    tracep->declBus(c+63,"I_sel", false,-1, 3,0);
    tracep->declBit(c+305,"I_LOAD", false,-1);
    tracep->declBit(c+310,"I_JALR", false,-1);
    tracep->declBit(c+311,"U_AUIPC", false,-1);
    tracep->declBit(c+312,"U_LUI", false,-1);
    tracep->declBus(c+64,"branch", false,-1, 2,0);
    tracep->declBit(c+65,"is_dead", false,-1);
    tracep->pushNamePrefix("mux1 ");
    tracep->declBus(c+331,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+332,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+332,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+64,"out", false,-1, 2,0);
    tracep->declBus(c+302,"key", false,-1, 2,0);
    tracep->declBus(c+341,"default_out", false,-1, 2,0);
    tracep->declQuad(c+313,"lut", false,-1, 47,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+331,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+332,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+332,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+335,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+64,"out", false,-1, 2,0);
    tracep->declBus(c+302,"key", false,-1, 2,0);
    tracep->declBus(c+341,"default_out", false,-1, 2,0);
    tracep->declQuad(c+313,"lut", false,-1, 47,0);
    tracep->declBus(c+342,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+66+i*1,"pair_list", true,(i+0), 5,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+12+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+74+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+82,"lut_out", false,-1, 2,0);
    tracep->declBit(c+83,"hit", false,-1);
    tracep->declBus(c+337,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mux2 ");
    tracep->declBus(c+331,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+332,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+343,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+62,"out", false,-1, 3,0);
    tracep->declBus(c+302,"key", false,-1, 2,0);
    tracep->declBus(c+344,"default_out", false,-1, 3,0);
    tracep->declQuad(c+315,"lut", false,-1, 55,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+331,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+332,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+343,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+335,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+62,"out", false,-1, 3,0);
    tracep->declBus(c+302,"key", false,-1, 2,0);
    tracep->declBus(c+344,"default_out", false,-1, 3,0);
    tracep->declQuad(c+315,"lut", false,-1, 55,0);
    tracep->declBus(c+345,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+84+i*1,"pair_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+20+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+92+i*1,"data_list", true,(i+0), 3,0);
    }
    tracep->declBus(c+100,"lut_out", false,-1, 3,0);
    tracep->declBit(c+101,"hit", false,-1);
    tracep->declBus(c+337,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mux3 ");
    tracep->declBus(c+331,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+332,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+343,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+63,"out", false,-1, 3,0);
    tracep->declBus(c+302,"key", false,-1, 2,0);
    tracep->declBus(c+344,"default_out", false,-1, 3,0);
    tracep->declQuad(c+317,"lut", false,-1, 55,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+331,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+332,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+343,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+335,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+63,"out", false,-1, 3,0);
    tracep->declBus(c+302,"key", false,-1, 2,0);
    tracep->declBus(c+344,"default_out", false,-1, 3,0);
    tracep->declQuad(c+317,"lut", false,-1, 55,0);
    tracep->declBus(c+345,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+102+i*1,"pair_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+28+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+110+i*1,"data_list", true,(i+0), 3,0);
    }
    tracep->declBus(c+118,"lut_out", false,-1, 3,0);
    tracep->declBit(c+119,"hit", false,-1);
    tracep->declBus(c+337,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("dimm1 ");
    tracep->declBus(c+297,"cmd", false,-1, 31,0);
    tracep->declBus(c+51,"op_IMM", false,-1, 2,0);
    tracep->declBus(c+50,"imm", false,-1, 31,0);
    tracep->declBus(c+120,"immI", false,-1, 31,0);
    tracep->declBus(c+319,"immU", false,-1, 31,0);
    tracep->declBus(c+320,"immJ", false,-1, 31,0);
    tracep->declBus(c+321,"immS", false,-1, 31,0);
    tracep->declBus(c+322,"immB", false,-1, 31,0);
    tracep->pushNamePrefix("mux1 ");
    tracep->declBus(c+346,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+332,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+333,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+50,"out", false,-1, 31,0);
    tracep->declBus(c+51,"key", false,-1, 2,0);
    tracep->declBus(c+120,"default_out", false,-1, 31,0);
    tracep->declArray(c+323,"lut", false,-1, 174,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+346,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+332,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+333,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+335,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+50,"out", false,-1, 31,0);
    tracep->declBus(c+51,"key", false,-1, 2,0);
    tracep->declBus(c+120,"default_out", false,-1, 31,0);
    tracep->declArray(c+323,"lut", false,-1, 174,0);
    tracep->declBus(c+336,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+121+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+36+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+131+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+136,"lut_out", false,-1, 31,0);
    tracep->declBit(c+137,"hit", false,-1);
    tracep->declBus(c+347,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("mux1 ");
    tracep->declBus(c+338,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+335,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+333,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+155,"out", false,-1, 31,0);
    tracep->declBus(c+152,"key", false,-1, 0,0);
    tracep->declArray(c+138,"lut", false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+338,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+335,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+333,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+348,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+155,"out", false,-1, 31,0);
    tracep->declBus(c+152,"key", false,-1, 0,0);
    tracep->declBus(c+334,"default_out", false,-1, 31,0);
    tracep->declArray(c+138,"lut", false,-1, 65,0);
    tracep->declBus(c+349,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+141+i*2,"pair_list", true,(i+0), 32,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+41+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+145+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+220,"lut_out", false,-1, 31,0);
    tracep->declBit(c+221,"hit", false,-1);
    tracep->declBus(c+350,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mux2 ");
    tracep->declBus(c+338,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+335,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+333,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+156,"out", false,-1, 31,0);
    tracep->declBus(c+55,"key", false,-1, 0,0);
    tracep->declArray(c+222,"lut", false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+338,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+335,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+333,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+348,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+156,"out", false,-1, 31,0);
    tracep->declBus(c+55,"key", false,-1, 0,0);
    tracep->declBus(c+334,"default_out", false,-1, 31,0);
    tracep->declArray(c+222,"lut", false,-1, 65,0);
    tracep->declBus(c+349,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+225+i*2,"pair_list", true,(i+0), 32,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+43+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+229+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+231,"lut_out", false,-1, 31,0);
    tracep->declBit(c+147,"hit", false,-1);
    tracep->declBus(c+350,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mux3 ");
    tracep->declBus(c+338,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+335,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+333,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+157,"out", false,-1, 31,0);
    tracep->declBus(c+52,"key", false,-1, 0,0);
    tracep->declArray(c+232,"lut", false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+338,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+335,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+333,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+348,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+157,"out", false,-1, 31,0);
    tracep->declBus(c+52,"key", false,-1, 0,0);
    tracep->declBus(c+334,"default_out", false,-1, 31,0);
    tracep->declArray(c+232,"lut", false,-1, 65,0);
    tracep->declBus(c+349,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+235+i*2,"pair_list", true,(i+0), 32,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+45+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+239+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+241,"lut_out", false,-1, 31,0);
    tracep->declBit(c+148,"hit", false,-1);
    tracep->declBus(c+350,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mux4 ");
    tracep->declBus(c+332,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+338,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+333,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+158,"out", false,-1, 31,0);
    tracep->declBus(c+53,"key", false,-1, 1,0);
    tracep->declBus(c+150,"default_out", false,-1, 31,0);
    tracep->declArray(c+242,"lut", false,-1, 101,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+332,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+338,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+333,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+335,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+158,"out", false,-1, 31,0);
    tracep->declBus(c+53,"key", false,-1, 1,0);
    tracep->declBus(c+150,"default_out", false,-1, 31,0);
    tracep->declArray(c+242,"lut", false,-1, 101,0);
    tracep->declBus(c+339,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+246+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+47+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+252+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+255,"lut_out", false,-1, 31,0);
    tracep->declBit(c+256,"hit", false,-1);
    tracep->declBus(c+340,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("pc1 ");
    tracep->declBit(c+295,"clk", false,-1);
    tracep->declBit(c+296,"rst", false,-1);
    tracep->declBus(c+155,"a", false,-1, 31,0);
    tracep->declBus(c+156,"b", false,-1, 31,0);
    tracep->declBus(c+262,"npc", false,-1, 31,0);
    tracep->declBit(c+329,"reset", false,-1);
    tracep->declBus(c+262,"tmp_pc", false,-1, 31,0);
    tracep->declBus(c+257,"result", false,-1, 31,0);
    tracep->pushNamePrefix("add1 ");
    tracep->declBit(c+351,"mode", false,-1);
    tracep->declBus(c+155,"a", false,-1, 31,0);
    tracep->declBus(c+156,"b", false,-1, 31,0);
    tracep->declBit(c+352,"S_U", false,-1);
    tracep->declBus(c+257,"result", false,-1, 31,0);
    tracep->declBit(c+258,"LESS", false,-1);
    tracep->declBit(c+259,"IS_ZERO", false,-1);
    tracep->declBit(c+260,"overflow", false,-1);
    tracep->declBit(c+258,"carry", false,-1);
    tracep->declBit(c+258,"LESS_u", false,-1);
    tracep->declBit(c+261,"LESS_s", false,-1);
    tracep->declBus(c+156,"add_cin", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc2snpc ");
    tracep->declBus(c+333,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+353,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+295,"clk", false,-1);
    tracep->declBit(c+329,"rst", false,-1);
    tracep->declBus(c+257,"din", false,-1, 31,0);
    tracep->declBus(c+262,"dout", false,-1, 31,0);
    tracep->declBit(c+352,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("rf1 ");
    tracep->declBus(c+333,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+333,"REG_NUM", false,-1, 31,0);
    tracep->declBus(c+346,"REG_NUM_BIT", false,-1, 31,0);
    tracep->declBit(c+295,"clk", false,-1);
    tracep->declBus(c+298,"raddr_a", false,-1, 4,0);
    tracep->declBus(c+299,"raddr_b", false,-1, 4,0);
    tracep->declBus(c+151,"wdata", false,-1, 31,0);
    tracep->declBus(c+330,"waddr", false,-1, 4,0);
    tracep->declBit(c+300,"wen", false,-1);
    tracep->declBus(c+149,"rdata_a", false,-1, 31,0);
    tracep->declBus(c+150,"rdata_b", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+263+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VALU___024root__trace_init_top(VALU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_init_top\n"); );
    // Body
    VALU___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VALU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VALU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VALU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VALU___024root__trace_register(VALU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VALU___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VALU___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VALU___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VALU___024root__trace_full_sub_0(VALU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VALU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_full_top_0\n"); );
    // Init
    VALU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VALU___024root*>(voidSelf);
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VALU___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VALU___024root__trace_full_sub_0(VALU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root__trace_full_sub_0\n"); );
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
    bufp->fullCData(oldp+12,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+13,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+14,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+15,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+16,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+17,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list[5]),3);
    bufp->fullCData(oldp+18,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list[6]),3);
    bufp->fullCData(oldp+19,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__key_list[7]),3);
    bufp->fullCData(oldp+20,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+21,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+22,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+23,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+24,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+25,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list[5]),3);
    bufp->fullCData(oldp+26,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list[6]),3);
    bufp->fullCData(oldp+27,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__key_list[7]),3);
    bufp->fullCData(oldp+28,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+29,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+30,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+31,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+32,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+33,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list[5]),3);
    bufp->fullCData(oldp+34,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list[6]),3);
    bufp->fullCData(oldp+35,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__key_list[7]),3);
    bufp->fullCData(oldp+36,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+37,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+38,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+39,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+40,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__key_list[4]),3);
    bufp->fullBit(oldp+41,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+42,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__key_list[1]));
    bufp->fullBit(oldp+43,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+44,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__key_list[1]));
    bufp->fullBit(oldp+45,(vlSelf->cpu__DOT__mux3__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+46,(vlSelf->cpu__DOT__mux3__DOT__i0__DOT__key_list[1]));
    bufp->fullCData(oldp+47,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+48,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+49,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__key_list[2]),2);
    bufp->fullIData(oldp+50,(vlSelf->cpu__DOT__imm),32);
    bufp->fullCData(oldp+51,(vlSelf->cpu__DOT__op_IMM),3);
    bufp->fullBit(oldp+52,(vlSelf->cpu__DOT__op_ALU_Asrc));
    bufp->fullCData(oldp+53,(vlSelf->cpu__DOT__op_ALU_Bsrc),2);
    bufp->fullCData(oldp+54,(vlSelf->cpu__DOT__op_ALU_sel),4);
    bufp->fullBit(oldp+55,(vlSelf->cpu__DOT__op_PC_Bsrc));
    bufp->fullBit(oldp+56,((1U != (IData)(vlSelf->cpu__DOT__op_ALU_sel))));
    bufp->fullBit(oldp+57,((2U != (IData)(vlSelf->cpu__DOT__op_ALU_sel))));
    bufp->fullBit(oldp+58,((0xdU != (IData)(vlSelf->cpu__DOT__op_ALU_sel))));
    bufp->fullBit(oldp+59,((0U != (IData)(vlSelf->cpu__DOT__op_ALU_sel))));
    bufp->fullCData(oldp+60,((7U & (IData)(vlSelf->cpu__DOT__op_ALU_sel))),3);
    bufp->fullCData(oldp+61,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT____Vcellinp__mux1____pinNumber2),2);
    bufp->fullCData(oldp+62,(vlSelf->cpu__DOT__cu1__DOT__R_sel),4);
    bufp->fullCData(oldp+63,(vlSelf->cpu__DOT__cu1__DOT__I_sel),4);
    bufp->fullCData(oldp+64,(vlSelf->cpu__DOT__cu1__DOT__branch),3);
    bufp->fullBit(oldp+65,(vlSelf->cpu__DOT__cu1__DOT__is_dead));
    bufp->fullCData(oldp+66,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__pair_list[0]),6);
    bufp->fullCData(oldp+67,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__pair_list[1]),6);
    bufp->fullCData(oldp+68,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__pair_list[2]),6);
    bufp->fullCData(oldp+69,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__pair_list[3]),6);
    bufp->fullCData(oldp+70,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__pair_list[4]),6);
    bufp->fullCData(oldp+71,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__pair_list[5]),6);
    bufp->fullCData(oldp+72,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__pair_list[6]),6);
    bufp->fullCData(oldp+73,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__pair_list[7]),6);
    bufp->fullCData(oldp+74,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list[0]),3);
    bufp->fullCData(oldp+75,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list[1]),3);
    bufp->fullCData(oldp+76,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list[2]),3);
    bufp->fullCData(oldp+77,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list[3]),3);
    bufp->fullCData(oldp+78,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list[4]),3);
    bufp->fullCData(oldp+79,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list[5]),3);
    bufp->fullCData(oldp+80,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list[6]),3);
    bufp->fullCData(oldp+81,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list[7]),3);
    bufp->fullCData(oldp+82,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+83,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+84,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__pair_list[0]),7);
    bufp->fullCData(oldp+85,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__pair_list[1]),7);
    bufp->fullCData(oldp+86,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__pair_list[2]),7);
    bufp->fullCData(oldp+87,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__pair_list[3]),7);
    bufp->fullCData(oldp+88,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__pair_list[4]),7);
    bufp->fullCData(oldp+89,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__pair_list[5]),7);
    bufp->fullCData(oldp+90,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__pair_list[6]),7);
    bufp->fullCData(oldp+91,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__pair_list[7]),7);
    bufp->fullCData(oldp+92,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__data_list[0]),4);
    bufp->fullCData(oldp+93,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__data_list[1]),4);
    bufp->fullCData(oldp+94,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__data_list[2]),4);
    bufp->fullCData(oldp+95,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__data_list[3]),4);
    bufp->fullCData(oldp+96,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__data_list[4]),4);
    bufp->fullCData(oldp+97,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__data_list[5]),4);
    bufp->fullCData(oldp+98,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__data_list[6]),4);
    bufp->fullCData(oldp+99,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__data_list[7]),4);
    bufp->fullCData(oldp+100,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__lut_out),4);
    bufp->fullBit(oldp+101,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+102,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[0]),7);
    bufp->fullCData(oldp+103,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[1]),7);
    bufp->fullCData(oldp+104,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[2]),7);
    bufp->fullCData(oldp+105,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[3]),7);
    bufp->fullCData(oldp+106,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[4]),7);
    bufp->fullCData(oldp+107,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[5]),7);
    bufp->fullCData(oldp+108,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[6]),7);
    bufp->fullCData(oldp+109,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[7]),7);
    bufp->fullCData(oldp+110,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[0]),4);
    bufp->fullCData(oldp+111,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[1]),4);
    bufp->fullCData(oldp+112,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[2]),4);
    bufp->fullCData(oldp+113,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[3]),4);
    bufp->fullCData(oldp+114,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[4]),4);
    bufp->fullCData(oldp+115,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[5]),4);
    bufp->fullCData(oldp+116,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[6]),4);
    bufp->fullCData(oldp+117,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[7]),4);
    bufp->fullCData(oldp+118,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__lut_out),4);
    bufp->fullBit(oldp+119,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+120,(vlSelf->cpu__DOT__dimm1__DOT__immI),32);
    bufp->fullQData(oldp+121,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+123,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+125,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+127,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+129,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullIData(oldp+131,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+132,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+133,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+134,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+135,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+136,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+137,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__hit));
    __Vtemp_hfeedee49__0[0U] = vlSelf->cpu__DOT__imm;
    __Vtemp_hfeedee49__0[1U] = 9U;
    __Vtemp_hfeedee49__0[2U] = 0U;
    bufp->fullWData(oldp+138,(__Vtemp_hfeedee49__0),66);
    bufp->fullQData(oldp+141,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+143,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+145,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+146,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__data_list[1]),32);
    bufp->fullBit(oldp+147,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+148,(vlSelf->cpu__DOT__mux3__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+149,(vlSelf->cpu__DOT__src1),32);
    bufp->fullIData(oldp+150,(vlSelf->cpu__DOT__src2),32);
    bufp->fullIData(oldp+151,(vlSelf->cpu__DOT__src_rd),32);
    bufp->fullBit(oldp+152,(vlSelf->cpu__DOT__op_PC_Asrc));
    bufp->fullBit(oldp+153,(vlSelf->cpu__DOT__LESS));
    bufp->fullBit(oldp+154,((1U & (~ (IData)((0U != vlSelf->cpu__DOT__alu1__DOT__ADDER_result))))));
    bufp->fullIData(oldp+155,(vlSelf->cpu__DOT__a0),32);
    bufp->fullIData(oldp+156,(vlSelf->cpu__DOT__b0),32);
    bufp->fullIData(oldp+157,(vlSelf->cpu__DOT__a1),32);
    bufp->fullIData(oldp+158,(vlSelf->cpu__DOT__b1),32);
    bufp->fullIData(oldp+159,(vlSelf->cpu__DOT__alu1__DOT__ADDER_result),32);
    bufp->fullIData(oldp+160,(vlSelf->cpu__DOT__alu1__DOT__SHIFT_result),32);
    bufp->fullIData(oldp+161,((vlSelf->cpu__DOT__a1 
                               & vlSelf->cpu__DOT__b1)),32);
    bufp->fullIData(oldp+162,((vlSelf->cpu__DOT__a1 
                               | vlSelf->cpu__DOT__b1)),32);
    bufp->fullIData(oldp+163,((vlSelf->cpu__DOT__a1 
                               ^ vlSelf->cpu__DOT__b1)),32);
    bufp->fullBit(oldp+164,((((vlSelf->cpu__DOT__a1 
                               >> 0x1fU) == (vlSelf->cpu__DOT__alu1__DOT__add1__DOT__add_cin 
                                             >> 0x1fU)) 
                             & ((vlSelf->cpu__DOT__a1 
                                 >> 0x1fU) != (vlSelf->cpu__DOT__alu1__DOT__ADDER_result 
                                               >> 0x1fU)))));
    bufp->fullBit(oldp+165,((1U & (IData)((1ULL & (
                                                   ((QData)((IData)(vlSelf->cpu__DOT__a1)) 
                                                    + (QData)((IData)(vlSelf->cpu__DOT__alu1__DOT__add1__DOT__add_cin))) 
                                                   >> 0x20U))))));
    bufp->fullBit(oldp+166,((1U & ((0U != (IData)(vlSelf->cpu__DOT__op_ALU_sel)) 
                                   ^ (IData)((1ULL 
                                              & (((QData)((IData)(vlSelf->cpu__DOT__a1)) 
                                                  + (QData)((IData)(vlSelf->cpu__DOT__alu1__DOT__add1__DOT__add_cin))) 
                                                 >> 0x20U)))))));
    bufp->fullBit(oldp+167,((1U & ((((vlSelf->cpu__DOT__a1 
                                      >> 0x1fU) == 
                                     (vlSelf->cpu__DOT__alu1__DOT__add1__DOT__add_cin 
                                      >> 0x1fU)) & 
                                    ((vlSelf->cpu__DOT__a1 
                                      >> 0x1fU) != 
                                     (vlSelf->cpu__DOT__alu1__DOT__ADDER_result 
                                      >> 0x1fU))) ^ 
                                   (vlSelf->cpu__DOT__alu1__DOT__ADDER_result 
                                    >> 0x1fU)))));
    bufp->fullIData(oldp+168,(vlSelf->cpu__DOT__alu1__DOT__add1__DOT__add_cin),32);
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
    bufp->fullWData(oldp+169,(__Vtemp_h0b480982__0),280);
    bufp->fullQData(oldp+178,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+180,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+182,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+184,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+186,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullQData(oldp+188,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[5]),35);
    bufp->fullQData(oldp+190,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[6]),35);
    bufp->fullQData(oldp+192,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[7]),35);
    bufp->fullIData(oldp+194,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+195,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+196,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+197,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+198,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+199,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+200,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+201,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+202,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+203,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+204,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT____Vcellinp__mux1____pinNumber3),32);
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
    bufp->fullWData(oldp+205,(__Vtemp_hedab82a1__0),102);
    bufp->fullQData(oldp+209,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+211,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+213,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullIData(oldp+215,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+216,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+217,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+218,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+219,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+220,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+221,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__hit));
    __Vtemp_hc856c7a6__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(vlSelf->cpu__DOT__src1))));
    __Vtemp_hc856c7a6__0[1U] = ((vlSelf->cpu__DOT__pc1__DOT__tmp_pc 
                                 << 1U) | (IData)((
                                                   (0x100000000ULL 
                                                    | (QData)((IData)(vlSelf->cpu__DOT__src1))) 
                                                   >> 0x20U)));
    __Vtemp_hc856c7a6__0[2U] = (vlSelf->cpu__DOT__pc1__DOT__tmp_pc 
                                >> 0x1fU);
    bufp->fullWData(oldp+222,(__Vtemp_hc856c7a6__0),66);
    bufp->fullQData(oldp+225,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+227,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+229,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+230,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+231,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__lut_out),32);
    __Vtemp_h27f5bc9c__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(vlSelf->cpu__DOT__pc1__DOT__tmp_pc))));
    __Vtemp_h27f5bc9c__0[1U] = ((vlSelf->cpu__DOT__src1 
                                 << 1U) | (IData)((
                                                   (0x100000000ULL 
                                                    | (QData)((IData)(vlSelf->cpu__DOT__pc1__DOT__tmp_pc))) 
                                                   >> 0x20U)));
    __Vtemp_h27f5bc9c__0[2U] = (vlSelf->cpu__DOT__src1 
                                >> 0x1fU);
    bufp->fullWData(oldp+232,(__Vtemp_h27f5bc9c__0),66);
    bufp->fullQData(oldp+235,(vlSelf->cpu__DOT__mux3__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+237,(vlSelf->cpu__DOT__mux3__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+239,(vlSelf->cpu__DOT__mux3__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+240,(vlSelf->cpu__DOT__mux3__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+241,(vlSelf->cpu__DOT__mux3__DOT__i0__DOT__lut_out),32);
    __Vtemp_h2a03d93b__0[0U] = 4U;
    __Vtemp_h2a03d93b__0[1U] = (2U | (vlSelf->cpu__DOT__imm 
                                      << 2U));
    __Vtemp_h2a03d93b__0[2U] = (4U | ((vlSelf->cpu__DOT__src2 
                                       << 4U) | (vlSelf->cpu__DOT__imm 
                                                 >> 0x1eU)));
    __Vtemp_h2a03d93b__0[3U] = (vlSelf->cpu__DOT__src2 
                                >> 0x1cU);
    bufp->fullWData(oldp+242,(__Vtemp_h2a03d93b__0),102);
    bufp->fullQData(oldp+246,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+248,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+250,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullIData(oldp+252,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+253,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+254,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+255,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+256,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+257,(vlSelf->cpu__DOT__pc1__DOT__result),32);
    bufp->fullBit(oldp+258,((1U & (IData)((1ULL & (
                                                   ((QData)((IData)(vlSelf->cpu__DOT__a0)) 
                                                    + (QData)((IData)(vlSelf->cpu__DOT__b0))) 
                                                   >> 0x20U))))));
    bufp->fullBit(oldp+259,((1U & (~ (IData)((0U != vlSelf->cpu__DOT__pc1__DOT__result))))));
    bufp->fullBit(oldp+260,((((vlSelf->cpu__DOT__a0 
                               >> 0x1fU) == (vlSelf->cpu__DOT__b0 
                                             >> 0x1fU)) 
                             & ((vlSelf->cpu__DOT__a0 
                                 >> 0x1fU) != (vlSelf->cpu__DOT__pc1__DOT__result 
                                               >> 0x1fU)))));
    bufp->fullBit(oldp+261,((1U & ((((vlSelf->cpu__DOT__a0 
                                      >> 0x1fU) == 
                                     (vlSelf->cpu__DOT__b0 
                                      >> 0x1fU)) & 
                                    ((vlSelf->cpu__DOT__a0 
                                      >> 0x1fU) != 
                                     (vlSelf->cpu__DOT__pc1__DOT__result 
                                      >> 0x1fU))) ^ 
                                   (vlSelf->cpu__DOT__pc1__DOT__result 
                                    >> 0x1fU)))));
    bufp->fullIData(oldp+262,(vlSelf->cpu__DOT__pc1__DOT__tmp_pc),32);
    bufp->fullIData(oldp+263,(vlSelf->cpu__DOT__rf1__DOT__rf[0]),32);
    bufp->fullIData(oldp+264,(vlSelf->cpu__DOT__rf1__DOT__rf[1]),32);
    bufp->fullIData(oldp+265,(vlSelf->cpu__DOT__rf1__DOT__rf[2]),32);
    bufp->fullIData(oldp+266,(vlSelf->cpu__DOT__rf1__DOT__rf[3]),32);
    bufp->fullIData(oldp+267,(vlSelf->cpu__DOT__rf1__DOT__rf[4]),32);
    bufp->fullIData(oldp+268,(vlSelf->cpu__DOT__rf1__DOT__rf[5]),32);
    bufp->fullIData(oldp+269,(vlSelf->cpu__DOT__rf1__DOT__rf[6]),32);
    bufp->fullIData(oldp+270,(vlSelf->cpu__DOT__rf1__DOT__rf[7]),32);
    bufp->fullIData(oldp+271,(vlSelf->cpu__DOT__rf1__DOT__rf[8]),32);
    bufp->fullIData(oldp+272,(vlSelf->cpu__DOT__rf1__DOT__rf[9]),32);
    bufp->fullIData(oldp+273,(vlSelf->cpu__DOT__rf1__DOT__rf[10]),32);
    bufp->fullIData(oldp+274,(vlSelf->cpu__DOT__rf1__DOT__rf[11]),32);
    bufp->fullIData(oldp+275,(vlSelf->cpu__DOT__rf1__DOT__rf[12]),32);
    bufp->fullIData(oldp+276,(vlSelf->cpu__DOT__rf1__DOT__rf[13]),32);
    bufp->fullIData(oldp+277,(vlSelf->cpu__DOT__rf1__DOT__rf[14]),32);
    bufp->fullIData(oldp+278,(vlSelf->cpu__DOT__rf1__DOT__rf[15]),32);
    bufp->fullIData(oldp+279,(vlSelf->cpu__DOT__rf1__DOT__rf[16]),32);
    bufp->fullIData(oldp+280,(vlSelf->cpu__DOT__rf1__DOT__rf[17]),32);
    bufp->fullIData(oldp+281,(vlSelf->cpu__DOT__rf1__DOT__rf[18]),32);
    bufp->fullIData(oldp+282,(vlSelf->cpu__DOT__rf1__DOT__rf[19]),32);
    bufp->fullIData(oldp+283,(vlSelf->cpu__DOT__rf1__DOT__rf[20]),32);
    bufp->fullIData(oldp+284,(vlSelf->cpu__DOT__rf1__DOT__rf[21]),32);
    bufp->fullIData(oldp+285,(vlSelf->cpu__DOT__rf1__DOT__rf[22]),32);
    bufp->fullIData(oldp+286,(vlSelf->cpu__DOT__rf1__DOT__rf[23]),32);
    bufp->fullIData(oldp+287,(vlSelf->cpu__DOT__rf1__DOT__rf[24]),32);
    bufp->fullIData(oldp+288,(vlSelf->cpu__DOT__rf1__DOT__rf[25]),32);
    bufp->fullIData(oldp+289,(vlSelf->cpu__DOT__rf1__DOT__rf[26]),32);
    bufp->fullIData(oldp+290,(vlSelf->cpu__DOT__rf1__DOT__rf[27]),32);
    bufp->fullIData(oldp+291,(vlSelf->cpu__DOT__rf1__DOT__rf[28]),32);
    bufp->fullIData(oldp+292,(vlSelf->cpu__DOT__rf1__DOT__rf[29]),32);
    bufp->fullIData(oldp+293,(vlSelf->cpu__DOT__rf1__DOT__rf[30]),32);
    bufp->fullIData(oldp+294,(vlSelf->cpu__DOT__rf1__DOT__rf[31]),32);
    bufp->fullBit(oldp+295,(vlSelf->clk));
    bufp->fullBit(oldp+296,(vlSelf->rst));
    bufp->fullIData(oldp+297,(vlSelf->cmd),32);
    bufp->fullCData(oldp+298,((0x1fU & (vlSelf->cmd 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+299,((0x1fU & (vlSelf->cmd 
                                        >> 0x14U))),5);
    bufp->fullBit(oldp+300,(((IData)(vlSelf->cpu__DOT__cu1__DOT____VdfgTmp_hf442cbef__0) 
                             | ((0x6fU == (0x7fU & vlSelf->cmd)) 
                                | ((3U == (0x7fU & vlSelf->cmd)) 
                                   | ((0x33U == (0x7fU 
                                                 & vlSelf->cmd)) 
                                      | (IData)(vlSelf->cpu__DOT__cu1__DOT____VdfgTmp_hd4cadad9__0)))))));
    bufp->fullCData(oldp+301,((0x7fU & vlSelf->cmd)),7);
    bufp->fullCData(oldp+302,((7U & (vlSelf->cmd >> 0xcU))),3);
    bufp->fullBit(oldp+303,((1U & (vlSelf->cmd >> 0x1eU))));
    bufp->fullBit(oldp+304,((0x23U == (0x7fU & vlSelf->cmd))));
    bufp->fullBit(oldp+305,((3U == (0x7fU & vlSelf->cmd))));
    bufp->fullBit(oldp+306,((0x13U == (0x7fU & vlSelf->cmd))));
    bufp->fullBit(oldp+307,((0x33U == (0x7fU & vlSelf->cmd))));
    bufp->fullBit(oldp+308,((0x6fU == (0x7fU & vlSelf->cmd))));
    bufp->fullBit(oldp+309,((0x63U == (0x7fU & vlSelf->cmd))));
    bufp->fullBit(oldp+310,((0x67U == (0x7fU & vlSelf->cmd))));
    bufp->fullBit(oldp+311,((0x17U == (0x7fU & vlSelf->cmd))));
    bufp->fullBit(oldp+312,((0x37U == (0x7fU & vlSelf->cmd))));
    bufp->fullQData(oldp+313,((0xd58f9afdb7ULL | ((QData)((IData)(
                                                                  ((0x67U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelf->cmd))
                                                                    ? 2U
                                                                    : 4U))) 
                                                  << 0x2aU))),48);
    bufp->fullQData(oldp+315,((0x804511a8940000ULL 
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
    bufp->fullQData(oldp+317,((0x89d44cddc8d0ULL | (QData)((IData)(
                                                                   ((0x40000000U 
                                                                     & vlSelf->cmd)
                                                                     ? 0xdU
                                                                     : 5U))))),56);
    bufp->fullIData(oldp+319,((0xfffff000U & vlSelf->cmd)),32);
    bufp->fullIData(oldp+320,((((- (IData)((vlSelf->cmd 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->cmd) 
                                             | ((0x800U 
                                                 & (vlSelf->cmd 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->cmd 
                                                      >> 0x14U)))))),32);
    bufp->fullIData(oldp+321,((((- (IData)((vlSelf->cmd 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->cmd 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->cmd 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+322,((((- (IData)((vlSelf->cmd 
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
    bufp->fullWData(oldp+323,(__Vtemp_hdace3dd2__0),175);
    bufp->fullBit(oldp+329,((1U & ((~ (IData)((0U != vlSelf->cpu__DOT__pc1__DOT__tmp_pc))) 
                                   | (IData)(vlSelf->rst)))));
    bufp->fullCData(oldp+330,(1U),5);
    bufp->fullIData(oldp+331,(8U),32);
    bufp->fullIData(oldp+332,(3U),32);
    bufp->fullIData(oldp+333,(0x20U),32);
    bufp->fullIData(oldp+334,(0U),32);
    bufp->fullIData(oldp+335,(1U),32);
    bufp->fullIData(oldp+336,(0x23U),32);
    bufp->fullIData(oldp+337,(8U),32);
    bufp->fullIData(oldp+338,(2U),32);
    bufp->fullIData(oldp+339,(0x22U),32);
    bufp->fullIData(oldp+340,(3U),32);
    bufp->fullCData(oldp+341,(1U),3);
    bufp->fullIData(oldp+342,(6U),32);
    bufp->fullIData(oldp+343,(4U),32);
    bufp->fullCData(oldp+344,(7U),4);
    bufp->fullIData(oldp+345,(7U),32);
    bufp->fullIData(oldp+346,(5U),32);
    bufp->fullIData(oldp+347,(5U),32);
    bufp->fullIData(oldp+348,(0U),32);
    bufp->fullIData(oldp+349,(0x21U),32);
    bufp->fullIData(oldp+350,(2U),32);
    bufp->fullBit(oldp+351,(0U));
    bufp->fullBit(oldp+352,(1U));
    bufp->fullIData(oldp+353,(0x80000000U),32);
}
