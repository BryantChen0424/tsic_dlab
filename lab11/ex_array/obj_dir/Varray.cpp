// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Varray__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Varray::Varray(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Varray__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , w_ready{vlSymsp->TOP.w_ready}
    , w_valid{vlSymsp->TOP.w_valid}
    , w_data{vlSymsp->TOP.w_data}
    , array{vlSymsp->TOP.array}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Varray::Varray(const char* _vcname__)
    : Varray(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Varray::~Varray() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Varray___024root___eval_debug_assertions(Varray___024root* vlSelf);
#endif  // VL_DEBUG
void Varray___024root___eval_static(Varray___024root* vlSelf);
void Varray___024root___eval_initial(Varray___024root* vlSelf);
void Varray___024root___eval_settle(Varray___024root* vlSelf);
void Varray___024root___eval(Varray___024root* vlSelf);

void Varray::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Varray::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Varray___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Varray___024root___eval_static(&(vlSymsp->TOP));
        Varray___024root___eval_initial(&(vlSymsp->TOP));
        Varray___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Varray___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Varray::eventsPending() { return false; }

uint64_t Varray::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Varray::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Varray___024root___eval_final(Varray___024root* vlSelf);

VL_ATTR_COLD void Varray::final() {
    Varray___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Varray::hierName() const { return vlSymsp->name(); }
const char* Varray::modelName() const { return "Varray"; }
unsigned Varray::threads() const { return 1; }
void Varray::prepareClone() const { contextp()->prepareClone(); }
void Varray::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Varray::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Varray___024root__trace_decl_types(VerilatedVcd* tracep);

void Varray___024root__trace_init_top(Varray___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Varray___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Varray___024root*>(voidSelf);
    Varray__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Varray___024root__trace_decl_types(tracep);
    Varray___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Varray___024root__trace_register(Varray___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Varray::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Varray::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Varray___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
