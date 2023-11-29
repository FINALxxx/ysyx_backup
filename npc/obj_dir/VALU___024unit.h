// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VALU.h for the primary calling header

#ifndef VERILATED_VALU___024UNIT_H_
#define VERILATED_VALU___024UNIT_H_  // guard

#include "verilated.h"

class VALU__Syms;

class VALU___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VALU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VALU___024unit(VALU__Syms* symsp, const char* v__name);
    ~VALU___024unit();
    VL_UNCOPYABLE(VALU___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
