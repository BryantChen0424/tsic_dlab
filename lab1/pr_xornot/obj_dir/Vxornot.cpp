// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vxornot__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vxornot::Vxornot(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vxornot__Syms(contextp(), _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , o_xor{vlSymsp->TOP.o_xor}
    , a_not{vlSymsp->TOP.a_not}
    , b_not{vlSymsp->TOP.b_not}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vxornot::Vxornot(const char* _vcname__)
    : Vxornot(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vxornot::~Vxornot() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vxornot___024root___eval_debug_assertions(Vxornot___024root* vlSelf);
#endif  // VL_DEBUG
void Vxornot___024root___eval_static(Vxornot___024root* vlSelf);
void Vxornot___024root___eval_initial(Vxornot___024root* vlSelf);
void Vxornot___024root___eval_settle(Vxornot___024root* vlSelf);
void Vxornot___024root___eval(Vxornot___024root* vlSelf);

void Vxornot::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vxornot::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vxornot___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vxornot___024root___eval_static(&(vlSymsp->TOP));
        Vxornot___024root___eval_initial(&(vlSymsp->TOP));
        Vxornot___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vxornot___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vxornot::eventsPending() { return false; }

uint64_t Vxornot::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vxornot::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vxornot___024root___eval_final(Vxornot___024root* vlSelf);

VL_ATTR_COLD void Vxornot::final() {
    Vxornot___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vxornot::hierName() const { return vlSymsp->name(); }
const char* Vxornot::modelName() const { return "Vxornot"; }
unsigned Vxornot::threads() const { return 1; }
void Vxornot::prepareClone() const { contextp()->prepareClone(); }
void Vxornot::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vxornot::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vxornot___024root__trace_decl_types(VerilatedVcd* tracep);

void Vxornot___024root__trace_init_top(Vxornot___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vxornot___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vxornot___024root*>(voidSelf);
    Vxornot__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vxornot___024root__trace_decl_types(tracep);
    Vxornot___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vxornot___024root__trace_register(Vxornot___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vxornot::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vxornot::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vxornot___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
