// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vconst2__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vconst2::Vconst2(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vconst2__Syms(contextp(), _vcname__, this)}
    , o_auto_expand{vlSymsp->TOP.o_auto_expand}
    , o_auto_cut{vlSymsp->TOP.o_auto_cut}
    , o_neg{vlSymsp->TOP.o_neg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vconst2::Vconst2(const char* _vcname__)
    : Vconst2(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vconst2::~Vconst2() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vconst2___024root___eval_debug_assertions(Vconst2___024root* vlSelf);
#endif  // VL_DEBUG
void Vconst2___024root___eval_static(Vconst2___024root* vlSelf);
void Vconst2___024root___eval_initial(Vconst2___024root* vlSelf);
void Vconst2___024root___eval_settle(Vconst2___024root* vlSelf);
void Vconst2___024root___eval(Vconst2___024root* vlSelf);

void Vconst2::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vconst2::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vconst2___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vconst2___024root___eval_static(&(vlSymsp->TOP));
        Vconst2___024root___eval_initial(&(vlSymsp->TOP));
        Vconst2___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vconst2___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vconst2::eventsPending() { return false; }

uint64_t Vconst2::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vconst2::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vconst2___024root___eval_final(Vconst2___024root* vlSelf);

VL_ATTR_COLD void Vconst2::final() {
    Vconst2___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vconst2::hierName() const { return vlSymsp->name(); }
const char* Vconst2::modelName() const { return "Vconst2"; }
unsigned Vconst2::threads() const { return 1; }
void Vconst2::prepareClone() const { contextp()->prepareClone(); }
void Vconst2::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vconst2::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vconst2___024root__trace_decl_types(VerilatedVcd* tracep);

void Vconst2___024root__trace_init_top(Vconst2___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vconst2___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconst2___024root*>(voidSelf);
    Vconst2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vconst2___024root__trace_decl_types(tracep);
    Vconst2___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vconst2___024root__trace_register(Vconst2___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vconst2::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vconst2::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vconst2___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
