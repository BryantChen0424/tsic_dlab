// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vbound__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vbound::Vbound(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vbound__Syms(contextp(), _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , bound_a{vlSymsp->TOP.bound_a}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vbound::Vbound(const char* _vcname__)
    : Vbound(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vbound::~Vbound() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vbound___024root___eval_debug_assertions(Vbound___024root* vlSelf);
#endif  // VL_DEBUG
void Vbound___024root___eval_static(Vbound___024root* vlSelf);
void Vbound___024root___eval_initial(Vbound___024root* vlSelf);
void Vbound___024root___eval_settle(Vbound___024root* vlSelf);
void Vbound___024root___eval(Vbound___024root* vlSelf);

void Vbound::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vbound::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vbound___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vbound___024root___eval_static(&(vlSymsp->TOP));
        Vbound___024root___eval_initial(&(vlSymsp->TOP));
        Vbound___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vbound___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vbound::eventsPending() { return false; }

uint64_t Vbound::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vbound::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vbound___024root___eval_final(Vbound___024root* vlSelf);

VL_ATTR_COLD void Vbound::final() {
    Vbound___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vbound::hierName() const { return vlSymsp->name(); }
const char* Vbound::modelName() const { return "Vbound"; }
unsigned Vbound::threads() const { return 1; }
void Vbound::prepareClone() const { contextp()->prepareClone(); }
void Vbound::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vbound::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vbound___024root__trace_decl_types(VerilatedVcd* tracep);

void Vbound___024root__trace_init_top(Vbound___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vbound___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbound___024root*>(voidSelf);
    Vbound__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vbound___024root__trace_decl_types(tracep);
    Vbound___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vbound___024root__trace_register(Vbound___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vbound::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vbound::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vbound___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
