// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VALU__Syms.h"
#include "VALU___024unit.h"

void VALU___024unit___ctor_var_reset(VALU___024unit* vlSelf);

VALU___024unit::VALU___024unit(VALU__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VALU___024unit___ctor_var_reset(this);
}

void VALU___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VALU___024unit::~VALU___024unit() {
}
