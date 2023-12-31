// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcpu.h"
#include "Vcpu__Syms.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vcpu::Vcpu(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcpu__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , pc{vlSymsp->TOP.pc}
    , dnpc{vlSymsp->TOP.dnpc}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vcpu::Vcpu(const char* _vcname__)
    : Vcpu(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcpu::~Vcpu() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcpu___024root___eval_debug_assertions(Vcpu___024root* vlSelf);
#endif  // VL_DEBUG
void Vcpu___024root___eval_static(Vcpu___024root* vlSelf);
void Vcpu___024root___eval_initial(Vcpu___024root* vlSelf);
void Vcpu___024root___eval_settle(Vcpu___024root* vlSelf);
void Vcpu___024root___eval(Vcpu___024root* vlSelf);

void Vcpu::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcpu::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcpu___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcpu___024root___eval_static(&(vlSymsp->TOP));
        Vcpu___024root___eval_initial(&(vlSymsp->TOP));
        Vcpu___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcpu___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vcpu::eventsPending() { return false; }

uint64_t Vcpu::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vcpu::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcpu___024root___eval_final(Vcpu___024root* vlSelf);

VL_ATTR_COLD void Vcpu::final() {
    Vcpu___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcpu::hierName() const { return vlSymsp->name(); }
const char* Vcpu::modelName() const { return "Vcpu"; }
unsigned Vcpu::threads() const { return 1; }
