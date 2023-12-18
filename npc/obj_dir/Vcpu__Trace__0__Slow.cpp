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
    tracep->declBit(c+334,"clk", false,-1);
    tracep->declBit(c+335,"rst", false,-1);
    tracep->declBus(c+336,"cmd", false,-1, 31,0);
    tracep->declBus(c+337,"pc", false,-1, 31,0);
    tracep->declBus(c+338,"dnpc", false,-1, 31,0);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+334,"clk", false,-1);
    tracep->declBit(c+335,"rst", false,-1);
    tracep->declBus(c+336,"cmd", false,-1, 31,0);
    tracep->declBus(c+337,"pc", false,-1, 31,0);
    tracep->declBus(c+338,"dnpc", false,-1, 31,0);
    tracep->declBus(c+339,"rs1", false,-1, 4,0);
    tracep->declBus(c+340,"rs2", false,-1, 4,0);
    tracep->declBus(c+341,"rd", false,-1, 4,0);
    tracep->declBus(c+181,"src1", false,-1, 31,0);
    tracep->declBus(c+182,"src2", false,-1, 31,0);
    tracep->declBus(c+84,"imm", false,-1, 31,0);
    tracep->declBus(c+342,"src_rd", false,-1, 31,0);
    tracep->declBus(c+183,"src_rd_ALU", false,-1, 31,0);
    tracep->declBus(c+184,"src_rd_PMEM", false,-1, 31,0);
    tracep->declBus(c+85,"op_IMM", false,-1, 2,0);
    tracep->declBit(c+86,"op_ALU_Asrc", false,-1);
    tracep->declBus(c+87,"op_ALU_Bsrc", false,-1, 1,0);
    tracep->declBus(c+88,"op_ALU_sel", false,-1, 3,0);
    tracep->declBit(c+185,"LESS", false,-1);
    tracep->declBit(c+186,"IS_ZERO", false,-1);
    tracep->declBit(c+187,"op_PC_Asrc", false,-1);
    tracep->declBit(c+89,"op_PC_Bsrc", false,-1);
    tracep->declBus(c+90,"op_PMEM", false,-1, 7,0);
    tracep->declBit(c+343,"en_Wreg", false,-1);
    tracep->declBit(c+344,"load", false,-1);
    tracep->declBit(c+345,"store", false,-1);
    tracep->declBit(c+91,"en_PMEM", false,-1);
    tracep->declBus(c+92,"op_load_sext", false,-1, 1,0);
    tracep->declBus(c+188,"a0", false,-1, 31,0);
    tracep->declBus(c+189,"b0", false,-1, 31,0);
    tracep->declBus(c+190,"a1", false,-1, 31,0);
    tracep->declBus(c+191,"b1", false,-1, 31,0);
    tracep->declBit(c+93,"L_R", false,-1);
    tracep->declBit(c+94,"S_U", false,-1);
    tracep->declBit(c+95,"A_L", false,-1);
    tracep->declBit(c+96,"Add_Sub", false,-1);
    tracep->pushNamePrefix("alu1 ");
    tracep->declBus(c+97,"sel", false,-1, 2,0);
    tracep->declBit(c+95,"A_L", false,-1);
    tracep->declBit(c+93,"L_R", false,-1);
    tracep->declBit(c+94,"S_U", false,-1);
    tracep->declBit(c+96,"Add_Sub", false,-1);
    tracep->declBus(c+190,"a", false,-1, 31,0);
    tracep->declBus(c+191,"b", false,-1, 31,0);
    tracep->declBus(c+183,"result", false,-1, 31,0);
    tracep->declBit(c+185,"LESS", false,-1);
    tracep->declBit(c+186,"IS_ZERO", false,-1);
    tracep->declBus(c+192,"ADDER_result", false,-1, 31,0);
    tracep->declBus(c+193,"SHIFT_result", false,-1, 31,0);
    tracep->declBus(c+194,"AND_result", false,-1, 31,0);
    tracep->declBus(c+195,"OR_result", false,-1, 31,0);
    tracep->declBus(c+196,"XOR_result", false,-1, 31,0);
    tracep->pushNamePrefix("add1 ");
    tracep->declBit(c+96,"mode", false,-1);
    tracep->declBus(c+190,"a", false,-1, 31,0);
    tracep->declBus(c+191,"b", false,-1, 31,0);
    tracep->declBit(c+94,"S_U", false,-1);
    tracep->declBus(c+192,"result", false,-1, 31,0);
    tracep->declBit(c+185,"LESS", false,-1);
    tracep->declBit(c+186,"IS_ZERO", false,-1);
    tracep->declBit(c+197,"overflow", false,-1);
    tracep->declBit(c+198,"carry", false,-1);
    tracep->declBit(c+199,"LESS_u", false,-1);
    tracep->declBit(c+200,"LESS_s", false,-1);
    tracep->declBus(c+201,"add_cin", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux1 ");
    tracep->declBus(c+380,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+381,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+382,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+183,"out", false,-1, 31,0);
    tracep->declBus(c+97,"key", false,-1, 2,0);
    tracep->declBus(c+383,"default_out", false,-1, 31,0);
    tracep->declArray(c+202,"lut", false,-1, 279,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+380,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+381,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+382,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+384,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+183,"out", false,-1, 31,0);
    tracep->declBus(c+97,"key", false,-1, 2,0);
    tracep->declBus(c+383,"default_out", false,-1, 31,0);
    tracep->declArray(c+202,"lut", false,-1, 279,0);
    tracep->declBus(c+385,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+211+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+227+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+235,"lut_out", false,-1, 31,0);
    tracep->declBit(c+236,"hit", false,-1);
    tracep->declBus(c+386,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("shift1 ");
    tracep->declBit(c+93,"L_R", false,-1);
    tracep->declBit(c+95,"A_L", false,-1);
    tracep->declBus(c+190,"in", false,-1, 31,0);
    tracep->declBus(c+191,"soffset", false,-1, 31,0);
    tracep->declBus(c+193,"out", false,-1, 31,0);
    tracep->pushNamePrefix("mux1 ");
    tracep->declBus(c+381,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+387,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+382,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+193,"out", false,-1, 31,0);
    tracep->declBus(c+98,"key", false,-1, 1,0);
    tracep->declBus(c+237,"default_out", false,-1, 31,0);
    tracep->declArray(c+238,"lut", false,-1, 101,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+381,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+387,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+382,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+384,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+193,"out", false,-1, 31,0);
    tracep->declBus(c+98,"key", false,-1, 1,0);
    tracep->declBus(c+237,"default_out", false,-1, 31,0);
    tracep->declArray(c+238,"lut", false,-1, 101,0);
    tracep->declBus(c+388,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+242+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+9+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+248+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+251,"lut_out", false,-1, 31,0);
    tracep->declBit(c+252,"hit", false,-1);
    tracep->declBus(c+389,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("cu1 ");
    tracep->declBit(c+334,"clk", false,-1);
    tracep->declBus(c+346,"opcode", false,-1, 6,0);
    tracep->declBus(c+347,"funct3", false,-1, 2,0);
    tracep->declBit(c+348,"funct7", false,-1);
    tracep->declBit(c+186,"IS_ZERO", false,-1);
    tracep->declBit(c+185,"LESS", false,-1);
    tracep->declBus(c+85,"op_IMM", false,-1, 2,0);
    tracep->declBit(c+343,"en_Wreg", false,-1);
    tracep->declBit(c+344,"load", false,-1);
    tracep->declBit(c+345,"store", false,-1);
    tracep->declBus(c+90,"op_PMEM", false,-1, 7,0);
    tracep->declBus(c+92,"op_load_sext", false,-1, 1,0);
    tracep->declBit(c+86,"op_ALU_Asrc", false,-1);
    tracep->declBus(c+87,"op_ALU_Bsrc", false,-1, 1,0);
    tracep->declBus(c+88,"op_ALU_sel", false,-1, 3,0);
    tracep->declBit(c+187,"op_PC_Asrc", false,-1);
    tracep->declBit(c+89,"op_PC_Bsrc", false,-1);
    tracep->declBit(c+349,"I", false,-1);
    tracep->declBit(c+350,"R", false,-1);
    tracep->declBit(c+351,"J", false,-1);
    tracep->declBit(c+345,"S", false,-1);
    tracep->declBit(c+352,"B", false,-1);
    tracep->declBus(c+99,"R_sel", false,-1, 3,0);
    tracep->declBus(c+100,"I_sel", false,-1, 3,0);
    tracep->declBit(c+344,"I_LOAD", false,-1);
    tracep->declBit(c+353,"I_JALR", false,-1);
    tracep->declBit(c+354,"U_AUIPC", false,-1);
    tracep->declBit(c+355,"U_LUI", false,-1);
    tracep->declBus(c+101,"branch", false,-1, 2,0);
    tracep->declBus(c+102,"branch_tmp", false,-1, 2,0);
    tracep->declBit(c+301,"is_halt", false,-1);
    tracep->pushNamePrefix("mux1 ");
    tracep->declBus(c+381,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+390,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+381,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+101,"out", false,-1, 2,0);
    tracep->declBus(c+356,"key", false,-1, 4,0);
    tracep->declBus(c+391,"default_out", false,-1, 2,0);
    tracep->declBus(c+103,"lut", false,-1, 23,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+381,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+390,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+381,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+384,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+101,"out", false,-1, 2,0);
    tracep->declBus(c+356,"key", false,-1, 4,0);
    tracep->declBus(c+391,"default_out", false,-1, 2,0);
    tracep->declBus(c+103,"lut", false,-1, 23,0);
    tracep->declBus(c+380,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+104+i*1,"pair_list", true,(i+0), 7,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+12+i*1,"key_list", true,(i+0), 4,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+107+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+110,"lut_out", false,-1, 2,0);
    tracep->declBit(c+111,"hit", false,-1);
    tracep->declBus(c+389,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mux2 ");
    tracep->declBus(c+392,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+381,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+381,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+102,"out", false,-1, 2,0);
    tracep->declBus(c+347,"key", false,-1, 2,0);
    tracep->declBus(c+393,"default_out", false,-1, 2,0);
    tracep->declQuad(c+394,"lut", false,-1, 41,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+392,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+381,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+381,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+384,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+102,"out", false,-1, 2,0);
    tracep->declBus(c+347,"key", false,-1, 2,0);
    tracep->declBus(c+393,"default_out", false,-1, 2,0);
    tracep->declQuad(c+394,"lut", false,-1, 41,0);
    tracep->declBus(c+396,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+15+i*1,"pair_list", true,(i+0), 5,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+22+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+29+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+112,"lut_out", false,-1, 2,0);
    tracep->declBit(c+113,"hit", false,-1);
    tracep->declBus(c+397,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mux3 ");
    tracep->declBus(c+380,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+381,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+398,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+99,"out", false,-1, 3,0);
    tracep->declBus(c+347,"key", false,-1, 2,0);
    tracep->declBus(c+399,"default_out", false,-1, 3,0);
    tracep->declQuad(c+357,"lut", false,-1, 55,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+380,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+381,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+398,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+384,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+99,"out", false,-1, 3,0);
    tracep->declBus(c+347,"key", false,-1, 2,0);
    tracep->declBus(c+399,"default_out", false,-1, 3,0);
    tracep->declQuad(c+357,"lut", false,-1, 55,0);
    tracep->declBus(c+392,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+114+i*1,"pair_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+36+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+122+i*1,"data_list", true,(i+0), 3,0);
    }
    tracep->declBus(c+130,"lut_out", false,-1, 3,0);
    tracep->declBit(c+131,"hit", false,-1);
    tracep->declBus(c+386,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mux4 ");
    tracep->declBus(c+380,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+381,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+398,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+100,"out", false,-1, 3,0);
    tracep->declBus(c+347,"key", false,-1, 2,0);
    tracep->declBus(c+399,"default_out", false,-1, 3,0);
    tracep->declQuad(c+359,"lut", false,-1, 55,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+380,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+381,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+398,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+384,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+100,"out", false,-1, 3,0);
    tracep->declBus(c+347,"key", false,-1, 2,0);
    tracep->declBus(c+399,"default_out", false,-1, 3,0);
    tracep->declQuad(c+359,"lut", false,-1, 55,0);
    tracep->declBus(c+392,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+132+i*1,"pair_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+44+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+140+i*1,"data_list", true,(i+0), 3,0);
    }
    tracep->declBus(c+148,"lut_out", false,-1, 3,0);
    tracep->declBit(c+149,"hit", false,-1);
    tracep->declBus(c+386,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mux5 ");
    tracep->declBus(c+390,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+381,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+380,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+90,"out", false,-1, 7,0);
    tracep->declBus(c+347,"key", false,-1, 2,0);
    tracep->declBus(c+400,"default_out", false,-1, 7,0);
    tracep->declQuad(c+401,"lut", false,-1, 54,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+390,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+381,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+380,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+384,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+90,"out", false,-1, 7,0);
    tracep->declBus(c+347,"key", false,-1, 2,0);
    tracep->declBus(c+400,"default_out", false,-1, 7,0);
    tracep->declQuad(c+401,"lut", false,-1, 54,0);
    tracep->declBus(c+403,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+52+i*1,"pair_list", true,(i+0), 10,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+57+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+62+i*1,"data_list", true,(i+0), 7,0);
    }
    tracep->declBus(c+150,"lut_out", false,-1, 7,0);
    tracep->declBit(c+151,"hit", false,-1);
    tracep->declBus(c+404,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("dimm1 ");
    tracep->declBus(c+336,"cmd", false,-1, 31,0);
    tracep->declBus(c+85,"op_IMM", false,-1, 2,0);
    tracep->declBus(c+84,"imm", false,-1, 31,0);
    tracep->declBus(c+152,"immI", false,-1, 31,0);
    tracep->declBus(c+361,"immU", false,-1, 31,0);
    tracep->declBus(c+362,"immJ", false,-1, 31,0);
    tracep->declBus(c+363,"immS", false,-1, 31,0);
    tracep->declBus(c+364,"immB", false,-1, 31,0);
    tracep->pushNamePrefix("mux1 ");
    tracep->declBus(c+390,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+381,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+382,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+84,"out", false,-1, 31,0);
    tracep->declBus(c+85,"key", false,-1, 2,0);
    tracep->declBus(c+152,"default_out", false,-1, 31,0);
    tracep->declArray(c+365,"lut", false,-1, 174,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+390,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+381,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+382,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+384,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+84,"out", false,-1, 31,0);
    tracep->declBus(c+85,"key", false,-1, 2,0);
    tracep->declBus(c+152,"default_out", false,-1, 31,0);
    tracep->declArray(c+365,"lut", false,-1, 174,0);
    tracep->declBus(c+385,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+153+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+67+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+163+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+168,"lut_out", false,-1, 31,0);
    tracep->declBit(c+169,"hit", false,-1);
    tracep->declBus(c+404,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("mux1 ");
    tracep->declBus(c+387,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+384,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+382,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+188,"out", false,-1, 31,0);
    tracep->declBus(c+187,"key", false,-1, 0,0);
    tracep->declArray(c+170,"lut", false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+387,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+384,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+382,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+405,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+188,"out", false,-1, 31,0);
    tracep->declBus(c+187,"key", false,-1, 0,0);
    tracep->declBus(c+383,"default_out", false,-1, 31,0);
    tracep->declArray(c+170,"lut", false,-1, 65,0);
    tracep->declBus(c+406,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+173+i*2,"pair_list", true,(i+0), 32,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+72+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+177+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+253,"lut_out", false,-1, 31,0);
    tracep->declBit(c+254,"hit", false,-1);
    tracep->declBus(c+407,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mux2 ");
    tracep->declBus(c+387,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+384,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+382,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+189,"out", false,-1, 31,0);
    tracep->declBus(c+89,"key", false,-1, 0,0);
    tracep->declArray(c+371,"lut", false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+387,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+384,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+382,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+405,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+189,"out", false,-1, 31,0);
    tracep->declBus(c+89,"key", false,-1, 0,0);
    tracep->declBus(c+383,"default_out", false,-1, 31,0);
    tracep->declArray(c+371,"lut", false,-1, 65,0);
    tracep->declBus(c+406,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+255+i*2,"pair_list", true,(i+0), 32,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+74+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+259+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+261,"lut_out", false,-1, 31,0);
    tracep->declBit(c+179,"hit", false,-1);
    tracep->declBus(c+407,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mux3 ");
    tracep->declBus(c+387,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+384,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+382,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+190,"out", false,-1, 31,0);
    tracep->declBus(c+86,"key", false,-1, 0,0);
    tracep->declArray(c+374,"lut", false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+387,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+384,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+382,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+405,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+190,"out", false,-1, 31,0);
    tracep->declBus(c+86,"key", false,-1, 0,0);
    tracep->declBus(c+383,"default_out", false,-1, 31,0);
    tracep->declArray(c+374,"lut", false,-1, 65,0);
    tracep->declBus(c+406,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+262+i*2,"pair_list", true,(i+0), 32,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+76+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+266+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+268,"lut_out", false,-1, 31,0);
    tracep->declBit(c+180,"hit", false,-1);
    tracep->declBus(c+407,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mux4 ");
    tracep->declBus(c+381,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+387,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+382,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+191,"out", false,-1, 31,0);
    tracep->declBus(c+87,"key", false,-1, 1,0);
    tracep->declBus(c+182,"default_out", false,-1, 31,0);
    tracep->declArray(c+269,"lut", false,-1, 101,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+381,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+387,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+382,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+384,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+191,"out", false,-1, 31,0);
    tracep->declBus(c+87,"key", false,-1, 1,0);
    tracep->declBus(c+182,"default_out", false,-1, 31,0);
    tracep->declArray(c+269,"lut", false,-1, 101,0);
    tracep->declBus(c+388,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+273+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+78+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+279+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+282,"lut_out", false,-1, 31,0);
    tracep->declBit(c+283,"hit", false,-1);
    tracep->declBus(c+389,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("pc1 ");
    tracep->declBit(c+334,"clk", false,-1);
    tracep->declBit(c+335,"rst", false,-1);
    tracep->declBus(c+188,"a", false,-1, 31,0);
    tracep->declBus(c+189,"b", false,-1, 31,0);
    tracep->declBit(c+408,"wen", false,-1);
    tracep->declBus(c+338,"dnpc", false,-1, 31,0);
    tracep->declBus(c+337,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("add1 ");
    tracep->declBit(c+409,"mode", false,-1);
    tracep->declBus(c+188,"a", false,-1, 31,0);
    tracep->declBus(c+189,"b", false,-1, 31,0);
    tracep->declBit(c+408,"S_U", false,-1);
    tracep->declBus(c+338,"result", false,-1, 31,0);
    tracep->declBit(c+284,"LESS", false,-1);
    tracep->declBit(c+377,"IS_ZERO", false,-1);
    tracep->declBit(c+378,"overflow", false,-1);
    tracep->declBit(c+284,"carry", false,-1);
    tracep->declBit(c+284,"LESS_u", false,-1);
    tracep->declBit(c+379,"LESS_s", false,-1);
    tracep->declBus(c+189,"add_cin", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dnpc2pc ");
    tracep->declBus(c+382,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+410,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+334,"clk", false,-1);
    tracep->declBit(c+335,"rst", false,-1);
    tracep->declBus(c+338,"din", false,-1, 31,0);
    tracep->declBus(c+337,"dout", false,-1, 31,0);
    tracep->declBit(c+408,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pmem1 ");
    tracep->declBit(c+91,"valid", false,-1);
    tracep->declBus(c+183,"raddr", false,-1, 31,0);
    tracep->declBus(c+92,"op_load_sext", false,-1, 1,0);
    tracep->declBus(c+184,"rdata", false,-1, 31,0);
    tracep->declBit(c+345,"wen", false,-1);
    tracep->declBus(c+183,"waddr", false,-1, 31,0);
    tracep->declBus(c+182,"wdata", false,-1, 31,0);
    tracep->declBus(c+90,"wmask", false,-1, 7,0);
    tracep->declBus(c+285,"rdata_tmp", false,-1, 31,0);
    tracep->pushNamePrefix("mux1 ");
    tracep->declBus(c+381,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+387,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+382,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+184,"out", false,-1, 31,0);
    tracep->declBus(c+92,"key", false,-1, 1,0);
    tracep->declBus(c+285,"default_out", false,-1, 31,0);
    tracep->declArray(c+286,"lut", false,-1, 101,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+381,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+387,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+382,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+384,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+184,"out", false,-1, 31,0);
    tracep->declBus(c+92,"key", false,-1, 1,0);
    tracep->declBus(c+285,"default_out", false,-1, 31,0);
    tracep->declArray(c+286,"lut", false,-1, 101,0);
    tracep->declBus(c+388,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+290+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+81+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+296+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+299,"lut_out", false,-1, 31,0);
    tracep->declBit(c+300,"hit", false,-1);
    tracep->declBus(c+389,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("rf1 ");
    tracep->declBus(c+382,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+382,"REG_NUM", false,-1, 31,0);
    tracep->declBus(c+390,"REG_NUM_BIT", false,-1, 31,0);
    tracep->declBit(c+334,"clk", false,-1);
    tracep->declBus(c+339,"raddr_a", false,-1, 4,0);
    tracep->declBus(c+340,"raddr_b", false,-1, 4,0);
    tracep->declBus(c+342,"wdata", false,-1, 31,0);
    tracep->declBus(c+341,"waddr", false,-1, 4,0);
    tracep->declBit(c+343,"wen", false,-1);
    tracep->declBus(c+181,"rdata_a", false,-1, 31,0);
    tracep->declBus(c+182,"rdata_b", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+302+i*1,"rf", true,(i+0), 31,0);
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
    VlWide<4>/*127:0*/ __Vtemp_hecfd874a__0;
    VlWide<6>/*191:0*/ __Vtemp_hdace3dd2__0;
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
    bufp->fullCData(oldp+81,(vlSelf->cpu__DOT__pmem1__DOT__mux1__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+82,(vlSelf->cpu__DOT__pmem1__DOT__mux1__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+83,(vlSelf->cpu__DOT__pmem1__DOT__mux1__DOT__i0__DOT__key_list[2]),2);
    bufp->fullIData(oldp+84,(vlSelf->cpu__DOT__imm),32);
    bufp->fullCData(oldp+85,(vlSelf->cpu__DOT__op_IMM),3);
    bufp->fullBit(oldp+86,(vlSelf->cpu__DOT__op_ALU_Asrc));
    bufp->fullCData(oldp+87,(vlSelf->cpu__DOT__op_ALU_Bsrc),2);
    bufp->fullCData(oldp+88,(vlSelf->cpu__DOT__op_ALU_sel),4);
    bufp->fullBit(oldp+89,(vlSelf->cpu__DOT__op_PC_Bsrc));
    bufp->fullCData(oldp+90,(vlSelf->cpu__DOT__op_PMEM),8);
    bufp->fullBit(oldp+91,(vlSelf->cpu__DOT__en_PMEM));
    bufp->fullCData(oldp+92,(vlSelf->cpu__DOT__op_load_sext),2);
    bufp->fullBit(oldp+93,((1U != (IData)(vlSelf->cpu__DOT__op_ALU_sel))));
    bufp->fullBit(oldp+94,((2U != (IData)(vlSelf->cpu__DOT__op_ALU_sel))));
    bufp->fullBit(oldp+95,((0xdU != (IData)(vlSelf->cpu__DOT__op_ALU_sel))));
    bufp->fullBit(oldp+96,((0U != (IData)(vlSelf->cpu__DOT__op_ALU_sel))));
    bufp->fullCData(oldp+97,((7U & (IData)(vlSelf->cpu__DOT__op_ALU_sel))),3);
    bufp->fullCData(oldp+98,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT____Vcellinp__mux1____pinNumber2),2);
    bufp->fullCData(oldp+99,(vlSelf->cpu__DOT__cu1__DOT__R_sel),4);
    bufp->fullCData(oldp+100,(vlSelf->cpu__DOT__cu1__DOT__I_sel),4);
    bufp->fullCData(oldp+101,(vlSelf->cpu__DOT__cu1__DOT__branch),3);
    bufp->fullCData(oldp+102,(vlSelf->cpu__DOT__cu1__DOT__branch_tmp),3);
    bufp->fullIData(oldp+103,((0xcad9c0U | (IData)(vlSelf->cpu__DOT__cu1__DOT__branch_tmp))),24);
    bufp->fullCData(oldp+104,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__pair_list[0]),8);
    bufp->fullCData(oldp+105,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__pair_list[1]),8);
    bufp->fullCData(oldp+106,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__pair_list[2]),8);
    bufp->fullCData(oldp+107,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list[0]),3);
    bufp->fullCData(oldp+108,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list[1]),3);
    bufp->fullCData(oldp+109,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__data_list[2]),3);
    bufp->fullCData(oldp+110,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+111,(vlSelf->cpu__DOT__cu1__DOT__mux1__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+112,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+113,(vlSelf->cpu__DOT__cu1__DOT__mux2__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+114,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[0]),7);
    bufp->fullCData(oldp+115,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[1]),7);
    bufp->fullCData(oldp+116,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[2]),7);
    bufp->fullCData(oldp+117,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[3]),7);
    bufp->fullCData(oldp+118,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[4]),7);
    bufp->fullCData(oldp+119,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[5]),7);
    bufp->fullCData(oldp+120,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[6]),7);
    bufp->fullCData(oldp+121,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__pair_list[7]),7);
    bufp->fullCData(oldp+122,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[0]),4);
    bufp->fullCData(oldp+123,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[1]),4);
    bufp->fullCData(oldp+124,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[2]),4);
    bufp->fullCData(oldp+125,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[3]),4);
    bufp->fullCData(oldp+126,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[4]),4);
    bufp->fullCData(oldp+127,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[5]),4);
    bufp->fullCData(oldp+128,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[6]),4);
    bufp->fullCData(oldp+129,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__data_list[7]),4);
    bufp->fullCData(oldp+130,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__lut_out),4);
    bufp->fullBit(oldp+131,(vlSelf->cpu__DOT__cu1__DOT__mux3__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+132,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__pair_list[0]),7);
    bufp->fullCData(oldp+133,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__pair_list[1]),7);
    bufp->fullCData(oldp+134,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__pair_list[2]),7);
    bufp->fullCData(oldp+135,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__pair_list[3]),7);
    bufp->fullCData(oldp+136,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__pair_list[4]),7);
    bufp->fullCData(oldp+137,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__pair_list[5]),7);
    bufp->fullCData(oldp+138,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__pair_list[6]),7);
    bufp->fullCData(oldp+139,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__pair_list[7]),7);
    bufp->fullCData(oldp+140,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list[0]),4);
    bufp->fullCData(oldp+141,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list[1]),4);
    bufp->fullCData(oldp+142,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list[2]),4);
    bufp->fullCData(oldp+143,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list[3]),4);
    bufp->fullCData(oldp+144,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list[4]),4);
    bufp->fullCData(oldp+145,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list[5]),4);
    bufp->fullCData(oldp+146,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list[6]),4);
    bufp->fullCData(oldp+147,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__data_list[7]),4);
    bufp->fullCData(oldp+148,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__lut_out),4);
    bufp->fullBit(oldp+149,(vlSelf->cpu__DOT__cu1__DOT__mux4__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+150,(vlSelf->cpu__DOT__cu1__DOT__mux5__DOT__i0__DOT__lut_out),8);
    bufp->fullBit(oldp+151,(vlSelf->cpu__DOT__cu1__DOT__mux5__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+152,(vlSelf->cpu__DOT__dimm1__DOT__immI),32);
    bufp->fullQData(oldp+153,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+155,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+157,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+159,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+161,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullIData(oldp+163,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+164,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+165,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+166,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+167,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+168,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+169,(vlSelf->cpu__DOT__dimm1__DOT__mux1__DOT__i0__DOT__hit));
    __Vtemp_hfeedee49__0[0U] = vlSelf->cpu__DOT__imm;
    __Vtemp_hfeedee49__0[1U] = 9U;
    __Vtemp_hfeedee49__0[2U] = 0U;
    bufp->fullWData(oldp+170,(__Vtemp_hfeedee49__0),66);
    bufp->fullQData(oldp+173,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+175,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+177,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+178,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__data_list[1]),32);
    bufp->fullBit(oldp+179,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+180,(vlSelf->cpu__DOT__mux3__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+181,(vlSelf->cpu__DOT__src1),32);
    bufp->fullIData(oldp+182,(vlSelf->cpu__DOT__src2),32);
    bufp->fullIData(oldp+183,(vlSelf->cpu__DOT__src_rd_ALU),32);
    bufp->fullIData(oldp+184,(vlSelf->cpu__DOT__src_rd_PMEM),32);
    bufp->fullBit(oldp+185,(vlSelf->cpu__DOT__LESS));
    bufp->fullBit(oldp+186,((1U & (~ (IData)((0U != vlSelf->cpu__DOT__alu1__DOT__ADDER_result))))));
    bufp->fullBit(oldp+187,(vlSelf->cpu__DOT__op_PC_Asrc));
    bufp->fullIData(oldp+188,(vlSelf->cpu__DOT__a0),32);
    bufp->fullIData(oldp+189,(vlSelf->cpu__DOT__b0),32);
    bufp->fullIData(oldp+190,(vlSelf->cpu__DOT__a1),32);
    bufp->fullIData(oldp+191,(vlSelf->cpu__DOT__b1),32);
    bufp->fullIData(oldp+192,(vlSelf->cpu__DOT__alu1__DOT__ADDER_result),32);
    bufp->fullIData(oldp+193,(vlSelf->cpu__DOT__alu1__DOT__SHIFT_result),32);
    bufp->fullIData(oldp+194,((vlSelf->cpu__DOT__a1 
                               & vlSelf->cpu__DOT__b1)),32);
    bufp->fullIData(oldp+195,((vlSelf->cpu__DOT__a1 
                               | vlSelf->cpu__DOT__b1)),32);
    bufp->fullIData(oldp+196,((vlSelf->cpu__DOT__a1 
                               ^ vlSelf->cpu__DOT__b1)),32);
    bufp->fullBit(oldp+197,((((vlSelf->cpu__DOT__a1 
                               >> 0x1fU) == (vlSelf->cpu__DOT__alu1__DOT__add1__DOT__add_cin 
                                             >> 0x1fU)) 
                             & ((vlSelf->cpu__DOT__a1 
                                 >> 0x1fU) != (vlSelf->cpu__DOT__alu1__DOT__ADDER_result 
                                               >> 0x1fU)))));
    bufp->fullBit(oldp+198,((1U & (IData)((1ULL & (
                                                   ((QData)((IData)(vlSelf->cpu__DOT__a1)) 
                                                    + (QData)((IData)(vlSelf->cpu__DOT__alu1__DOT__add1__DOT__add_cin))) 
                                                   >> 0x20U))))));
    bufp->fullBit(oldp+199,((1U & ((0U != (IData)(vlSelf->cpu__DOT__op_ALU_sel)) 
                                   ^ (IData)((1ULL 
                                              & (((QData)((IData)(vlSelf->cpu__DOT__a1)) 
                                                  + (QData)((IData)(vlSelf->cpu__DOT__alu1__DOT__add1__DOT__add_cin))) 
                                                 >> 0x20U)))))));
    bufp->fullBit(oldp+200,((1U & ((((vlSelf->cpu__DOT__a1 
                                      >> 0x1fU) == 
                                     (vlSelf->cpu__DOT__alu1__DOT__add1__DOT__add_cin 
                                      >> 0x1fU)) & 
                                    ((vlSelf->cpu__DOT__a1 
                                      >> 0x1fU) != 
                                     (vlSelf->cpu__DOT__alu1__DOT__ADDER_result 
                                      >> 0x1fU))) ^ 
                                   (vlSelf->cpu__DOT__alu1__DOT__ADDER_result 
                                    >> 0x1fU)))));
    bufp->fullIData(oldp+201,(vlSelf->cpu__DOT__alu1__DOT__add1__DOT__add_cin),32);
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
    bufp->fullWData(oldp+202,(__Vtemp_h0b480982__0),280);
    bufp->fullQData(oldp+211,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+213,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+215,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+217,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+219,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullQData(oldp+221,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[5]),35);
    bufp->fullQData(oldp+223,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[6]),35);
    bufp->fullQData(oldp+225,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__pair_list[7]),35);
    bufp->fullIData(oldp+227,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+228,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+229,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+230,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+231,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+232,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+233,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+234,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+235,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+236,(vlSelf->cpu__DOT__alu1__DOT__mux1__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+237,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT____Vcellinp__mux1____pinNumber3),32);
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
    bufp->fullWData(oldp+238,(__Vtemp_hedab82a1__0),102);
    bufp->fullQData(oldp+242,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+244,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+246,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullIData(oldp+248,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+249,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+250,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+251,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+252,(vlSelf->cpu__DOT__alu1__DOT__shift1__DOT__mux1__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+253,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+254,(vlSelf->cpu__DOT__mux1__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+255,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+257,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+259,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+260,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+261,(vlSelf->cpu__DOT__mux2__DOT__i0__DOT__lut_out),32);
    bufp->fullQData(oldp+262,(vlSelf->cpu__DOT__mux3__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+264,(vlSelf->cpu__DOT__mux3__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+266,(vlSelf->cpu__DOT__mux3__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+267,(vlSelf->cpu__DOT__mux3__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+268,(vlSelf->cpu__DOT__mux3__DOT__i0__DOT__lut_out),32);
    __Vtemp_h2a03d93b__0[0U] = 4U;
    __Vtemp_h2a03d93b__0[1U] = (2U | (vlSelf->cpu__DOT__imm 
                                      << 2U));
    __Vtemp_h2a03d93b__0[2U] = (4U | ((vlSelf->cpu__DOT__src2 
                                       << 4U) | (vlSelf->cpu__DOT__imm 
                                                 >> 0x1eU)));
    __Vtemp_h2a03d93b__0[3U] = (vlSelf->cpu__DOT__src2 
                                >> 0x1cU);
    bufp->fullWData(oldp+269,(__Vtemp_h2a03d93b__0),102);
    bufp->fullQData(oldp+273,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+275,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+277,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullIData(oldp+279,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+280,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+281,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+282,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+283,(vlSelf->cpu__DOT__mux4__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+284,((1U & (IData)((1ULL & (
                                                   ((QData)((IData)(vlSelf->cpu__DOT__a0)) 
                                                    + (QData)((IData)(vlSelf->cpu__DOT__b0))) 
                                                   >> 0x20U))))));
    bufp->fullIData(oldp+285,(vlSelf->cpu__DOT__pmem1__DOT__rdata_tmp),32);
    __Vtemp_hecfd874a__0[0U] = (IData)((0x200000000ULL 
                                        | (QData)((IData)(
                                                          (((- (IData)(
                                                                       (1U 
                                                                        & (vlSelf->cpu__DOT__pmem1__DOT__rdata_tmp 
                                                                           >> 0xfU)))) 
                                                            << 0x10U) 
                                                           | (0xffffU 
                                                              & vlSelf->cpu__DOT__pmem1__DOT__rdata_tmp))))));
    __Vtemp_hecfd874a__0[1U] = ((0xfffffffcU & (((- (IData)(
                                                            (1U 
                                                             & (vlSelf->cpu__DOT__pmem1__DOT__rdata_tmp 
                                                                >> 7U)))) 
                                                 << 0xaU) 
                                                | (0x3fcU 
                                                   & (vlSelf->cpu__DOT__pmem1__DOT__rdata_tmp 
                                                      << 2U)))) 
                                | (IData)(((0x200000000ULL 
                                            | (QData)((IData)(
                                                              (((- (IData)(
                                                                           (1U 
                                                                            & (vlSelf->cpu__DOT__pmem1__DOT__rdata_tmp 
                                                                               >> 0xfU)))) 
                                                                << 0x10U) 
                                                               | (0xffffU 
                                                                  & vlSelf->cpu__DOT__pmem1__DOT__rdata_tmp))))) 
                                           >> 0x20U)));
    __Vtemp_hecfd874a__0[2U] = (4U | ((vlSelf->cpu__DOT__pmem1__DOT__rdata_tmp 
                                       << 4U) | (3U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & (vlSelf->cpu__DOT__pmem1__DOT__rdata_tmp 
                                                                   >> 7U)))) 
                                                    >> 0x16U))));
    __Vtemp_hecfd874a__0[3U] = (vlSelf->cpu__DOT__pmem1__DOT__rdata_tmp 
                                >> 0x1cU);
    bufp->fullWData(oldp+286,(__Vtemp_hecfd874a__0),102);
    bufp->fullQData(oldp+290,(vlSelf->cpu__DOT__pmem1__DOT__mux1__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+292,(vlSelf->cpu__DOT__pmem1__DOT__mux1__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+294,(vlSelf->cpu__DOT__pmem1__DOT__mux1__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullIData(oldp+296,(vlSelf->cpu__DOT__pmem1__DOT__mux1__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+297,(vlSelf->cpu__DOT__pmem1__DOT__mux1__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+298,(vlSelf->cpu__DOT__pmem1__DOT__mux1__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+299,(vlSelf->cpu__DOT__pmem1__DOT__mux1__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+300,(vlSelf->cpu__DOT__pmem1__DOT__mux1__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+301,(vlSelf->cpu__DOT__cu1__DOT__is_halt));
    bufp->fullIData(oldp+302,(vlSelf->cpu__DOT__rf1__DOT__rf[0]),32);
    bufp->fullIData(oldp+303,(vlSelf->cpu__DOT__rf1__DOT__rf[1]),32);
    bufp->fullIData(oldp+304,(vlSelf->cpu__DOT__rf1__DOT__rf[2]),32);
    bufp->fullIData(oldp+305,(vlSelf->cpu__DOT__rf1__DOT__rf[3]),32);
    bufp->fullIData(oldp+306,(vlSelf->cpu__DOT__rf1__DOT__rf[4]),32);
    bufp->fullIData(oldp+307,(vlSelf->cpu__DOT__rf1__DOT__rf[5]),32);
    bufp->fullIData(oldp+308,(vlSelf->cpu__DOT__rf1__DOT__rf[6]),32);
    bufp->fullIData(oldp+309,(vlSelf->cpu__DOT__rf1__DOT__rf[7]),32);
    bufp->fullIData(oldp+310,(vlSelf->cpu__DOT__rf1__DOT__rf[8]),32);
    bufp->fullIData(oldp+311,(vlSelf->cpu__DOT__rf1__DOT__rf[9]),32);
    bufp->fullIData(oldp+312,(vlSelf->cpu__DOT__rf1__DOT__rf[10]),32);
    bufp->fullIData(oldp+313,(vlSelf->cpu__DOT__rf1__DOT__rf[11]),32);
    bufp->fullIData(oldp+314,(vlSelf->cpu__DOT__rf1__DOT__rf[12]),32);
    bufp->fullIData(oldp+315,(vlSelf->cpu__DOT__rf1__DOT__rf[13]),32);
    bufp->fullIData(oldp+316,(vlSelf->cpu__DOT__rf1__DOT__rf[14]),32);
    bufp->fullIData(oldp+317,(vlSelf->cpu__DOT__rf1__DOT__rf[15]),32);
    bufp->fullIData(oldp+318,(vlSelf->cpu__DOT__rf1__DOT__rf[16]),32);
    bufp->fullIData(oldp+319,(vlSelf->cpu__DOT__rf1__DOT__rf[17]),32);
    bufp->fullIData(oldp+320,(vlSelf->cpu__DOT__rf1__DOT__rf[18]),32);
    bufp->fullIData(oldp+321,(vlSelf->cpu__DOT__rf1__DOT__rf[19]),32);
    bufp->fullIData(oldp+322,(vlSelf->cpu__DOT__rf1__DOT__rf[20]),32);
    bufp->fullIData(oldp+323,(vlSelf->cpu__DOT__rf1__DOT__rf[21]),32);
    bufp->fullIData(oldp+324,(vlSelf->cpu__DOT__rf1__DOT__rf[22]),32);
    bufp->fullIData(oldp+325,(vlSelf->cpu__DOT__rf1__DOT__rf[23]),32);
    bufp->fullIData(oldp+326,(vlSelf->cpu__DOT__rf1__DOT__rf[24]),32);
    bufp->fullIData(oldp+327,(vlSelf->cpu__DOT__rf1__DOT__rf[25]),32);
    bufp->fullIData(oldp+328,(vlSelf->cpu__DOT__rf1__DOT__rf[26]),32);
    bufp->fullIData(oldp+329,(vlSelf->cpu__DOT__rf1__DOT__rf[27]),32);
    bufp->fullIData(oldp+330,(vlSelf->cpu__DOT__rf1__DOT__rf[28]),32);
    bufp->fullIData(oldp+331,(vlSelf->cpu__DOT__rf1__DOT__rf[29]),32);
    bufp->fullIData(oldp+332,(vlSelf->cpu__DOT__rf1__DOT__rf[30]),32);
    bufp->fullIData(oldp+333,(vlSelf->cpu__DOT__rf1__DOT__rf[31]),32);
    bufp->fullBit(oldp+334,(vlSelf->clk));
    bufp->fullBit(oldp+335,(vlSelf->rst));
    bufp->fullIData(oldp+336,(vlSelf->cmd),32);
    bufp->fullIData(oldp+337,(vlSelf->pc),32);
    bufp->fullIData(oldp+338,(vlSelf->dnpc),32);
    bufp->fullCData(oldp+339,((0x1fU & (vlSelf->cmd 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+340,((0x1fU & (vlSelf->cmd 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+341,((0x1fU & (vlSelf->cmd 
                                        >> 7U))),5);
    bufp->fullIData(oldp+342,(((3U == (0x7fU & vlSelf->cmd))
                                ? vlSelf->cpu__DOT__src_rd_PMEM
                                : vlSelf->cpu__DOT__src_rd_ALU)),32);
    bufp->fullBit(oldp+343,(((IData)(vlSelf->cpu__DOT__cu1__DOT____VdfgTmp_hf442cbef__0) 
                             | ((0x6fU == (0x7fU & vlSelf->cmd)) 
                                | ((3U == (0x7fU & vlSelf->cmd)) 
                                   | ((0x33U == (0x7fU 
                                                 & vlSelf->cmd)) 
                                      | (IData)(vlSelf->cpu__DOT__cu1__DOT____VdfgTmp_hd4cadad9__0)))))));
    bufp->fullBit(oldp+344,((3U == (0x7fU & vlSelf->cmd))));
    bufp->fullBit(oldp+345,((0x23U == (0x7fU & vlSelf->cmd))));
    bufp->fullCData(oldp+346,((0x7fU & vlSelf->cmd)),7);
    bufp->fullCData(oldp+347,((7U & (vlSelf->cmd >> 0xcU))),3);
    bufp->fullBit(oldp+348,((1U & (vlSelf->cmd >> 0x1eU))));
    bufp->fullBit(oldp+349,((0x13U == (0x7fU & vlSelf->cmd))));
    bufp->fullBit(oldp+350,((0x33U == (0x7fU & vlSelf->cmd))));
    bufp->fullBit(oldp+351,((0x6fU == (0x7fU & vlSelf->cmd))));
    bufp->fullBit(oldp+352,((0x63U == (0x7fU & vlSelf->cmd))));
    bufp->fullBit(oldp+353,((0x67U == (0x7fU & vlSelf->cmd))));
    bufp->fullBit(oldp+354,((0x17U == (0x7fU & vlSelf->cmd))));
    bufp->fullBit(oldp+355,((0x37U == (0x7fU & vlSelf->cmd))));
    bufp->fullCData(oldp+356,((0x1fU & (vlSelf->cmd 
                                        >> 2U))),5);
    bufp->fullQData(oldp+357,((0x4511a8940000ULL | 
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
    bufp->fullQData(oldp+359,((0x89d44cddc8d0ULL | (QData)((IData)(
                                                                   ((0x40000000U 
                                                                     & vlSelf->cmd)
                                                                     ? 0xdU
                                                                     : 5U))))),56);
    bufp->fullIData(oldp+361,((0xfffff000U & vlSelf->cmd)),32);
    bufp->fullIData(oldp+362,((((- (IData)((vlSelf->cmd 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->cmd) 
                                             | ((0x800U 
                                                 & (vlSelf->cmd 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->cmd 
                                                      >> 0x14U)))))),32);
    bufp->fullIData(oldp+363,((((- (IData)((vlSelf->cmd 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->cmd 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->cmd 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+364,((((- (IData)((vlSelf->cmd 
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
    bufp->fullWData(oldp+365,(__Vtemp_hdace3dd2__0),175);
    __Vtemp_hb5bfc05d__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(vlSelf->cpu__DOT__src1))));
    __Vtemp_hb5bfc05d__0[1U] = ((vlSelf->pc << 1U) 
                                | (IData)(((0x100000000ULL 
                                            | (QData)((IData)(vlSelf->cpu__DOT__src1))) 
                                           >> 0x20U)));
    __Vtemp_hb5bfc05d__0[2U] = (vlSelf->pc >> 0x1fU);
    bufp->fullWData(oldp+371,(__Vtemp_hb5bfc05d__0),66);
    __Vtemp_hfc952c0a__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(vlSelf->pc))));
    __Vtemp_hfc952c0a__0[1U] = ((vlSelf->cpu__DOT__src1 
                                 << 1U) | (IData)((
                                                   (0x100000000ULL 
                                                    | (QData)((IData)(vlSelf->pc))) 
                                                   >> 0x20U)));
    __Vtemp_hfc952c0a__0[2U] = (vlSelf->cpu__DOT__src1 
                                >> 0x1fU);
    bufp->fullWData(oldp+374,(__Vtemp_hfc952c0a__0),66);
    bufp->fullBit(oldp+377,((1U & (~ (IData)((0U != vlSelf->dnpc))))));
    bufp->fullBit(oldp+378,((((vlSelf->cpu__DOT__a0 
                               >> 0x1fU) == (vlSelf->cpu__DOT__b0 
                                             >> 0x1fU)) 
                             & ((vlSelf->cpu__DOT__a0 
                                 >> 0x1fU) != (vlSelf->dnpc 
                                               >> 0x1fU)))));
    bufp->fullBit(oldp+379,((1U & ((((vlSelf->cpu__DOT__a0 
                                      >> 0x1fU) == 
                                     (vlSelf->cpu__DOT__b0 
                                      >> 0x1fU)) & 
                                    ((vlSelf->cpu__DOT__a0 
                                      >> 0x1fU) != 
                                     (vlSelf->dnpc 
                                      >> 0x1fU))) ^ 
                                   (vlSelf->dnpc >> 0x1fU)))));
    bufp->fullIData(oldp+380,(8U),32);
    bufp->fullIData(oldp+381,(3U),32);
    bufp->fullIData(oldp+382,(0x20U),32);
    bufp->fullIData(oldp+383,(0U),32);
    bufp->fullIData(oldp+384,(1U),32);
    bufp->fullIData(oldp+385,(0x23U),32);
    bufp->fullIData(oldp+386,(8U),32);
    bufp->fullIData(oldp+387,(2U),32);
    bufp->fullIData(oldp+388,(0x22U),32);
    bufp->fullIData(oldp+389,(3U),32);
    bufp->fullIData(oldp+390,(5U),32);
    bufp->fullCData(oldp+391,(0U),3);
    bufp->fullIData(oldp+392,(7U),32);
    bufp->fullCData(oldp+393,(5U),3);
    bufp->fullQData(oldp+394,(0xd58f9afdb7ULL),42);
    bufp->fullIData(oldp+396,(6U),32);
    bufp->fullIData(oldp+397,(7U),32);
    bufp->fullIData(oldp+398,(4U),32);
    bufp->fullCData(oldp+399,(0U),4);
    bufp->fullCData(oldp+400,(1U),8);
    bufp->fullQData(oldp+401,(0x121ebfe00d0fULL),55);
    bufp->fullIData(oldp+403,(0xbU),32);
    bufp->fullIData(oldp+404,(5U),32);
    bufp->fullIData(oldp+405,(0U),32);
    bufp->fullIData(oldp+406,(0x21U),32);
    bufp->fullIData(oldp+407,(2U),32);
    bufp->fullBit(oldp+408,(1U));
    bufp->fullBit(oldp+409,(0U));
    bufp->fullIData(oldp+410,(0x80000000U),32);
}
