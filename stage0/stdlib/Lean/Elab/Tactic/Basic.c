// Lean compiler output
// Module: Lean.Elab.Tactic.Basic
// Imports: Lean.Elab.Term
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_tagUntaggedGoals(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_evalTactic_handleEx___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getMainModule(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkSorry(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_instAlternativeTacticM___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Basic_0__Lean_Elab_Tactic_TacticM_runCore_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_logUnassignedUsingErrorInfos(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_addTrace___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__2___closed__2;
static lean_object* l_Lean_Elab_logException___at_Lean_Elab_Tactic_closeUsingOrAdmit___spec__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_instMonadExceptExceptionTacticM;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getCurrMacroScope___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_liftMetaTactic1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_mkTacticAttribute___closed__9;
static lean_object* l_Lean_Elab_Tactic_instAlternativeTacticM___lambda__1___closed__1;
extern lean_object* l_Lean_profiler;
uint8_t l_Lean_Elab_isAbortExceptionId(lean_object*);
extern lean_object* l_Lean_trace_profiler_useHearbeats;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_instMonadExceptExceptionTacticM___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5561____closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_admitGoal___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__1___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_instMonadTacticM___closed__4;
lean_object* l_Lean_log___at___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___spec__6(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Basic_0__Lean_Elab_Tactic_TacticM_runCore_x27(lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Tactic_evalTactic___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_getResetInfoTrees___at_Lean_Elab_Tactic_withTacticInfoContext___spec__2___rarg___closed__1;
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at_Lean_Elab_Tactic_pruneSolvedGoals___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_ensureHasNoMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_mkInitialTacticInfo___elambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at_Lean_Elab_Tactic_evalTactic___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_liftMetaMAtMain(lean_object*);
lean_object* l_Lean_PersistentArray_toArray___rarg(lean_object*);
lean_object* l_Lean_profileitIOUnsafe___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Context_recover___default;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_instOrElseTacticM(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_SavedState_restore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalTactic___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_evalTactic___lambda__5___closed__4;
extern lean_object* l_Lean_maxRecDepthErrorMessage;
static lean_object* l_Lean_Elab_Tactic_mkTacticAttribute___closed__11;
lean_object* l_Lean_indentD(lean_object*);
double lean_float_div(double, double);
static lean_object* l_Lean_Elab_Tactic_instAlternativeTacticM___closed__1;
static lean_object* l_Lean_Elab_Tactic_instAlternativeTacticM___lambda__1___closed__2;
static lean_object* l_Lean_Elab_logException___at_Lean_Elab_Tactic_closeUsingOrAdmit___spec__1___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalTacticAt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Tactic_evalTactic_throwExs___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_liftMetaTactic___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_evalTactic___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at_Lean_Elab_Tactic_withTacticInfoContext___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_joinSep(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_throwAbortTactic___at_Lean_Elab_Tactic_done___spec__1___rarg___closed__1;
LEAN_EXPORT lean_object* l_Lean_logAt___at_Lean_Elab_Tactic_closeUsingOrAdmit___spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at_Lean_Elab_Tactic_withMacroExpansion___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalTactic_handleEx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__6___rarg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519_(lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__4___boxed(lean_object**);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getId(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_instMonadBacktrackSavedStateTacticM___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__7;
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__1___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_push___rarg(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_mkTacticAttribute___closed__10;
lean_object* lean_array_push(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_getMessageLog___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at_Lean_Elab_Tactic_closeMainGoal___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_getNameOfIdent_x27___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_instMonadExceptExceptionTacticM___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
static lean_object* l_Lean_Elab_Tactic_mkTacticAttribute___closed__3;
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_mkTacticInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Term_instMonadTermElabM;
lean_object* l_Lean_Syntax_getArgs(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_appendGoals(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_withMacroExpansion___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getMainGoal_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ReaderT_pure___at_Lean_Elab_Tactic_saveTacticInfoForToken___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_withoutRecover___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at_Lean_Elab_Tactic_evalTactic_eval___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__16;
static lean_object* l_Lean_Elab_Tactic_instMonadExceptExceptionTacticM___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getMainGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_instMonadBacktrackSavedStateTacticM___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_focus(lean_object*);
uint8_t lean_float_decLt(double, double);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_liftMetaFinishingTactic___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_List_forIn_loop___at_Lean_Elab_Tactic_tagUntaggedGoals___spec__2___closed__1;
static double l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__4___closed__4;
static lean_object* l_Lean_Elab_getResetInfoTrees___at_Lean_Elab_Tactic_withTacticInfoContext___spec__2___rarg___closed__2;
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at_Lean_Elab_Tactic_evalTactic___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Tactic_throwNoGoalsToBeSolved___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_evalTactic___lambda__5___closed__2;
lean_object* l_Lean_MessageData_hasSyntheticSorry(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at_Lean_Elab_Tactic_getMainTarget___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__14;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getMainTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_get_num_heartbeats(lean_object*);
static lean_object* l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__15;
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getMainModule___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_tryTactic_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_orElse___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_logAt___at_Lean_Elab_Tactic_closeUsingOrAdmit___spec__2___closed__1;
static lean_object* l_Lean_Elab_getResetInfoTrees___at_Lean_Elab_Tactic_withTacticInfoContext___spec__2___rarg___closed__3;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_Lean_Elab_goalsToMessageData___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Expr_mvar___override(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_instMonadBacktrackSavedStateTacticM___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at_Lean_Elab_Tactic_withTacticInfoContext___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_setMVarUserName(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__3___closed__1;
static lean_object* l_Lean_Elab_Tactic_mkTacticAttribute___closed__6;
static lean_object* l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__5;
lean_object* l_Lean_PersistentArray_toList___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_SavedState_restore(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTactic___at_Lean_Elab_Tactic_done___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ReaderT_pure___at_Lean_Elab_Tactic_saveTacticInfoForToken___spec__1(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_tryTactic(lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
static lean_object* l_Lean_Elab_Tactic_withCaseRef___rarg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_withCaseRef(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_mkTacticAttribute___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_throwNoGoalsToBeSolved___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getMainModule___rarg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_liftMetaTacticAux___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_mkInitialTacticInfo___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_instMonadTacticM___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_withCaseRef___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_instMonadBacktrackSavedStateTacticM___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_saveState___boxed(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalTactic_throwExs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_reportUnsolvedGoals___closed__6;
lean_object* l_Lean_MVarId_assign___at_Lean_Meta_getLevel___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_InternalExceptionId_getName(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_reportUnsolvedGoals___closed__7;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Tactic_instAlternativeTacticM___spec__1(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_reportUnsolvedGoals___closed__3;
static lean_object* l_Lean_Elab_Tactic_instMonadTacticM___closed__6;
lean_object* l_List_appendTR___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getCurrMacroScope___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_saveState___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getNameOfIdent_x27(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_instMonadExceptExceptionTacticM___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getGoals___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_mkTacticAttribute(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getUnsolvedGoals(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_focusAndDone___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_instMonadExceptExceptionTacticM___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_instMonadTacticM___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__4___closed__1;
lean_object* lean_st_ref_take(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getCurrMacroScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Elab_Tactic_tagUntaggedGoals___spec__2___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_liftExcept___at_Lean_Elab_liftMacroM___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_withTacticInfoContext___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__3;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalTactic_expandEval___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_expandMacroImpl_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_evalTactic_throwExs___closed__2;
static lean_object* l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__3___closed__2;
lean_object* l_Lean_ResolveName_resolveNamespace(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_liftMetaMAtMain___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalTactic___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__1___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at_Lean_Elab_Tactic_evalTactic___spec__9___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_reportUnsolvedGoals___closed__2;
static lean_object* l_Lean_Elab_Tactic_mkTacticAttribute___closed__5;
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_tryTactic_x3f___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__2___boxed(lean_object**);
static lean_object* l_Lean_Elab_Tactic_instMonadBacktrackSavedStateTacticM___closed__1;
lean_object* l_Lean_Option_get___at_Lean_profiler_threshold_getSecs___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getGoals(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getGoals___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*, lean_object*);
static double l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__4___closed__5;
LEAN_EXPORT lean_object* l_Lean_logAt___at_Lean_Elab_Tactic_closeUsingOrAdmit___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_evalTactic___lambda__4___closed__1;
static lean_object* l_Lean_Elab_Tactic_mkTacticAttribute___closed__8;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_tagUntaggedGoals___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at_Lean_Elab_Tactic_withMacroExpansion___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getGoals___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_goalsToMessageData(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_saveTacticInfoForToken(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_focusAndDone(lean_object*);
lean_object* l_Lean_PersistentArray_append___rarg(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_mkTacticAttribute___closed__7;
lean_object* l_Lean_MVarId_withContext___at___private_Lean_Meta_SynthInstance_0__Lean_Meta_synthPendingImp___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_liftMetaTacticAux___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalTactic_expandEval(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_adaptExpander(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_instMonadTacticM;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_withMainContext___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_evalTactic___lambda__5___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_instMonadBacktrackSavedStateTacticM;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalTactic___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at_Lean_Elab_Tactic_adaptExpander___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at_Lean_Elab_Tactic_withMacroExpansion___spec__1(lean_object*);
static lean_object* l_Lean_Elab_Tactic_instAlternativeTacticM___closed__3;
LEAN_EXPORT lean_object* l_Lean_log___at_Lean_Elab_Tactic_closeUsingOrAdmit___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getMainTarget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at_Lean_Elab_Tactic_closeUsingOrAdmit___spec__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Elab_Tactic_tagUntaggedGoals___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___rarg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at_Lean_Elab_Tactic_evalTactic___spec__4___rarg(lean_object*, lean_object*);
static lean_object* l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__5___closed__1;
lean_object* lean_st_mk_ref(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, double, double, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_instAlternativeTacticM___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__1___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at_Lean_Elab_Tactic_withMainContext___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_saveState___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getMainDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_orElse(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalTactic_eval(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_mono_nanos_now(lean_object*);
static lean_object* l_List_forIn_loop___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__4___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_closeMainGoal___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_instAlternativeTacticM___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__5___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__8;
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at_Lean_Elab_Tactic_getMainTarget___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at_Lean_Elab_Tactic_evalTactic___spec__9(lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at_Lean_Elab_Term_reportUnsolvedGoals___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_withFreshMacroScope___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, double, double, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalTactic___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at_Lean_Elab_Tactic_withTacticInfoContext___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_pruneSolvedGoals(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_evalTactic___lambda__5___closed__1;
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalTactic_eval___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_macroAttribute;
extern lean_object* l_Lean_warningAsError;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getUnsolvedGoals___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_mkTacticAttribute___closed__1;
uint8_t l_Lean_Option_get___at___private_Lean_Util_Profile_0__Lean_get__profiler___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__4___closed__3;
extern lean_object* l_Lean_trace_profiler_threshold;
uint8_t l_Lean_MetavarContext_isAnonymousMVar(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_ensureHasNoMVars___closed__1;
static lean_object* l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__4___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_liftMetaTacticAux(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isIdent(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Basic_0__Lean_Elab_Tactic_TacticM_runCore___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_run___lambda__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_reportUnsolvedGoals(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at_Lean_Elab_Tactic_closeMainGoal___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_ensureHasNoMVars___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__1___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_isAbortTacticException(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at_Lean_Elab_Tactic_withMacroExpansion___spec__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_goalsToMessageData___closed__2;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Tactic_throwNoGoalsToBeSolved___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_tryCatch(lean_object*);
lean_object* l_Lean_Elab_mkElabAttribute___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__12;
uint8_t l_Lean_PersistentHashMap_contains___at_Lean_MVarId_isAssigned___spec__1(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_evalTactic___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at_Lean_Elab_Tactic_evalTactic___spec__4___rarg___boxed(lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*);
extern lean_object* l_Lean_inheritedTraceOptions;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalTactic___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_throwNoGoalsToBeSolved(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Util_Trace_0__Lean_addTraceNode___spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_focusAndDone___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__2;
static lean_object* l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__11;
double l_Float_ofScientific(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__6___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_pruneSolvedGoals___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_name_append_index_after(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_saveState___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getNameOfIdent_x27___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_closeUsingOrAdmit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at_Lean_Elab_Tactic_evalTactic___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at_Lean_Elab_Tactic_withMainContext___spec__1(lean_object*);
static lean_object* l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__10;
static lean_object* l_Lean_Elab_Tactic_throwNoGoalsToBeSolved___rarg___closed__1;
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Elab_Tactic_tagUntaggedGoals___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_withTacticInfoContext(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_closeMainGoal(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Tactic_evalTactic_throwExs___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_mkTacticInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_evalTactic___spec__7(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Tactic_evalTactic___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalTactic___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getCurrMacroScope___rarg___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__2___closed__1;
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_evalTactic___lambda__4___closed__3;
LEAN_EXPORT lean_object* l_Lean_profileitM___at_Lean_Elab_Tactic_evalTactic___spec__9___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_reportUnsolvedGoals___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__1___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalTacticAtRaw(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_throwNoGoalsToBeSolved___rarg___closed__2;
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_environment_main_module(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at_Lean_Elab_Tactic_evalTactic___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_instMonadTacticM___closed__2;
lean_object* l_Lean_PersistentHashMap_insert___at_Lean_MVarId_assign___spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalTactic_expandEval___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___rarg(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ReaderT_pure___at_Lean_Elab_Tactic_saveTacticInfoForToken___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Tactic_evalTactic_throwExs___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at_Lean_Elab_Tactic_closeUsingOrAdmit___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_withMacroExpansion(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Tactic_evalTactic___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Elab_Tactic_tagUntaggedGoals___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at_Lean_Elab_Tactic_withMacroExpansion___spec__1___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_reportUnsolvedGoals___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_closeMainGoal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_focus___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_withMacroExpansion___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_appendGoals___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_evalTactic___lambda__4___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_withCaseRef___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_evalTactic___lambda__5___closed__3;
lean_object* l_Lean_ResolveName_resolveGlobalName(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_evalTactic___lambda__4___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalTactic_handleEx___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Elab_Tactic_tagUntaggedGoals___spec__2___lambda__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_withMainContext(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTactic___at_Lean_Elab_Tactic_done___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Tactic_instAlternativeTacticM___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_instOrElseTacticM___closed__1;
static lean_object* l_Lean_Elab_Tactic_evalTactic_handleEx___closed__2;
lean_object* l_List_reverse___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_tryCatch___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_adaptExpander___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_mkInitialTacticInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Tactic_instAlternativeTacticM___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_liftMetaMAtMain___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5561_(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalTactic___lambda__1(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Meta_getMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_evalTactic_throwExs___closed__1;
static lean_object* l_Lean_Elab_Tactic_instAlternativeTacticM___closed__2;
static lean_object* l_Lean_Elab_Tactic_instMonadTacticM___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_instAlternativeTacticM;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_closeMainGoal___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_done___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Tactic_evalTactic___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at_Lean_Elab_Tactic_withMacroExpansion___spec__2(lean_object*);
extern lean_object* l_Lean_trace_profiler;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getMainModule___rarg(lean_object*, lean_object*);
static double l_Lean_addTrace___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__2___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_mkInitialTacticInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at_Lean_Elab_Tactic_pruneSolvedGoals___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_getNameOfIdent_x27___closed__1;
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_getEntries___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at_Lean_Elab_Tactic_pruneSolvedGoals___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_withCaseRef___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_liftMetaFinishingTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_evalTactic___lambda__5___closed__7;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Tactic_throwNoGoalsToBeSolved___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at_Lean_Elab_Tactic_pruneSolvedGoals___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTactic___at_Lean_Elab_Tactic_done___spec__1___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalTactic___lambda__5___boxed__const__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Tactic_evalTactic___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Basic_0__Lean_Elab_Tactic_TacticM_runCore(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_withTacticInfoContext___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__13;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Term_reportUnsolvedGoals___closed__1;
static lean_object* l_Lean_Elab_Tactic_mkTacticAttribute___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at_Lean_Elab_Tactic_withTacticInfoContext___spec__2___rarg___boxed(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_instMonadExceptExceptionTacticM___closed__2;
static lean_object* l_Lean_Elab_Tactic_evalTactic___lambda__4___closed__4;
lean_object* lean_array_get_size(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalTactic_handleEx___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_ensureHasNoMVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Message_0__Lean_beqMessageSeverity____x40_Lean_Message___hyg_103_(uint8_t, uint8_t);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
LEAN_EXPORT lean_object* l_Lean_Elab_admitGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_isTracingEnabledFor___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_setGoals(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_instMonadTacticM___closed__5;
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_liftMetaTactic1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_instMonadTacticM___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_evalTactic___lambda__4___closed__6;
uint8_t l_Lean_Exception_isRuntime(lean_object*);
static lean_object* l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__6;
lean_object* l_Lean_Elab_Term_SavedState_restore(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_saveState(lean_object*);
static lean_object* l_Lean_Elab_Tactic_evalTactic___lambda__5___closed__6;
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at_Lean_Elab_Tactic_withTacticInfoContext___spec__2___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at_Lean_Elab_Tactic_run___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_replaceMainGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_liftMetaTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_done(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_run___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at_Lean_Elab_Tactic_withTacticInfoContext___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_instMonadTacticM___closed__3;
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at_Lean_Elab_Tactic_run___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Elab_Tactic_tagUntaggedGoals___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_List_forIn_loop___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__4___closed__2;
lean_object* l_ReaderT_instMonad___rarg(lean_object*);
extern lean_object* l_Lean_Elab_abortTacticExceptionId;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_setGoals___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__9;
lean_object* l_ReaderT_pure___at_Lean_Elab_liftMacroM___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
double lean_float_sub(double, double);
uint8_t l_Lean_Expr_hasExprMVar(lean_object*);
static lean_object* l_Lean_Elab_goalsToMessageData___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_tryTactic___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_withoutRecover(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_admitGoal___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_8 = lean_infer_type(x_1, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = 1;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_12 = l_Lean_Meta_mkSorry(x_9, x_11, x_3, x_4, x_5, x_6, x_10);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_MVarId_assign___at_Lean_Meta_getLevel___spec__1(x_2, x_13, x_3, x_4, x_5, x_6, x_14);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_15;
}
else
{
uint8_t x_16; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_16 = !lean_is_exclusive(x_12);
if (x_16 == 0)
{
return x_12;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_12, 0);
x_18 = lean_ctor_get(x_12, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_12);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
else
{
uint8_t x_20; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_20 = !lean_is_exclusive(x_8);
if (x_20 == 0)
{
return x_8;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_8, 0);
x_22 = lean_ctor_get(x_8, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_8);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_admitGoal(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_1);
x_7 = l_Lean_Expr_mvar___override(x_1);
lean_inc(x_1);
x_8 = lean_alloc_closure((void*)(l_Lean_Elab_admitGoal___lambda__1), 7, 2);
lean_closure_set(x_8, 0, x_7);
lean_closure_set(x_8, 1, x_1);
x_9 = l_Lean_MVarId_withContext___at___private_Lean_Meta_SynthInstance_0__Lean_Meta_synthPendingImp___spec__2___rarg(x_1, x_8, x_2, x_3, x_4, x_5, x_6);
return x_9;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_Lean_Elab_goalsToMessageData___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = l_List_reverse___rarg(x_2);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_7);
{
lean_object* _tmp_0 = x_6;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_1);
x_11 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_11, 0, x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_2);
x_1 = x_10;
x_2 = x_12;
goto _start;
}
}
}
}
static lean_object* _init_l_Lean_Elab_goalsToMessageData___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("\n\n", 2);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_goalsToMessageData___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_goalsToMessageData___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_goalsToMessageData(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_box(0);
x_3 = l_List_mapTR_loop___at_Lean_Elab_goalsToMessageData___spec__1(x_1, x_2);
x_4 = l_Lean_Elab_goalsToMessageData___closed__2;
x_5 = l_Lean_MessageData_joinSep(x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_forM___at_Lean_Elab_Term_reportUnsolvedGoals___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_7 = lean_box(0);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_11 = l_Lean_Elab_admitGoal(x_9, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_1 = x_10;
x_6 = x_12;
goto _start;
}
else
{
uint8_t x_14; 
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_14 = !lean_is_exclusive(x_11);
if (x_14 == 0)
{
return x_11;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_11, 0);
x_16 = lean_ctor_get(x_11, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_11);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_Term_reportUnsolvedGoals___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Tactic", 6);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_reportUnsolvedGoals___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("unsolvedGoals", 13);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_reportUnsolvedGoals___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_reportUnsolvedGoals___closed__1;
x_2 = l_Lean_Elab_Term_reportUnsolvedGoals___closed__2;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_reportUnsolvedGoals___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("unsolved goals\n", 15);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_reportUnsolvedGoals___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_reportUnsolvedGoals___closed__4;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_reportUnsolvedGoals___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("", 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_reportUnsolvedGoals___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_reportUnsolvedGoals___closed__6;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_reportUnsolvedGoals(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_inc(x_1);
x_7 = l_Lean_Elab_goalsToMessageData(x_1);
x_8 = l_Lean_Elab_Term_reportUnsolvedGoals___closed__5;
x_9 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
x_10 = l_Lean_Elab_Term_reportUnsolvedGoals___closed__7;
x_11 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
x_12 = l_Lean_Elab_Term_reportUnsolvedGoals___closed__3;
x_13 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
x_14 = 2;
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_15 = l_Lean_log___at___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___spec__6(x_13, x_14, x_2, x_3, x_4, x_5, x_6);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = l_List_forM___at_Lean_Elab_Term_reportUnsolvedGoals___spec__1(x_1, x_2, x_3, x_4, x_5, x_16);
return x_17;
}
}
static uint8_t _init_l_Lean_Elab_Tactic_Context_recover___default() {
_start:
{
uint8_t x_1; 
x_1 = 1;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_instMonadTacticM___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_2);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_instMonadTacticM___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_14 = lean_apply_9(x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_apply_10(x_4, x_15, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_16);
return x_17;
}
else
{
uint8_t x_18; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_18 = !lean_is_exclusive(x_14);
if (x_18 == 0)
{
return x_14;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_14, 0);
x_20 = lean_ctor_get(x_14, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_14);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Tactic_instMonadTacticM___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_instMonadTermElabM;
x_2 = l_ReaderT_instMonad___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_instMonadTacticM___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Tactic_instMonadTacticM___closed__1;
x_2 = l_ReaderT_instFunctorOfMonad___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_instMonadTacticM___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Tactic_instMonadTacticM___closed__1;
x_2 = l_ReaderT_instApplicativeOfMonad___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_instMonadTacticM___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_instMonadTacticM___lambda__1___boxed), 11, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_instMonadTacticM___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_instMonadTacticM___lambda__2), 13, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_instMonadTacticM___closed__6() {
_start:
{
lean_object* x_1; uint8_t x_2; 
x_1 = l_Lean_Elab_Tactic_instMonadTacticM___closed__3;
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_1, 1);
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_dec(x_4);
x_5 = l_Lean_Elab_Tactic_instMonadTacticM___closed__2;
x_6 = l_Lean_Elab_Tactic_instMonadTacticM___closed__4;
lean_ctor_set(x_1, 1, x_6);
lean_ctor_set(x_1, 0, x_5);
x_7 = l_Lean_Elab_Tactic_instMonadTacticM___closed__5;
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_9 = lean_ctor_get(x_1, 2);
x_10 = lean_ctor_get(x_1, 3);
x_11 = lean_ctor_get(x_1, 4);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_1);
x_12 = l_Lean_Elab_Tactic_instMonadTacticM___closed__2;
x_13 = l_Lean_Elab_Tactic_instMonadTacticM___closed__4;
x_14 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
lean_ctor_set(x_14, 2, x_9);
lean_ctor_set(x_14, 3, x_10);
lean_ctor_set(x_14, 4, x_11);
x_15 = l_Lean_Elab_Tactic_instMonadTacticM___closed__5;
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
static lean_object* _init_l_Lean_Elab_Tactic_instMonadTacticM() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_Tactic_instMonadTacticM___closed__6;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_instMonadTacticM___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Elab_Tactic_instMonadTacticM___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getGoals___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_st_ref_get(x_1, x_8);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
return x_9;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_ctor_get(x_9, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_9);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getGoals(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_getGoals___rarg___boxed), 8, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getGoals___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Tactic_getGoals___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getGoals___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Tactic_getGoals(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_setGoals(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_st_ref_take(x_3, x_10);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_st_ref_set(x_3, x_1, x_12);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_13, 0);
lean_dec(x_15);
x_16 = lean_box(0);
lean_ctor_set(x_13, 0, x_16);
return x_13;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_13, 1);
lean_inc(x_17);
lean_dec(x_13);
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_setGoals___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Tactic_setGoals(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at_Lean_Elab_Tactic_pruneSolvedGoals___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_st_ref_get(x_7, x_10);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_ctor_get(x_14, 7);
lean_inc(x_15);
lean_dec(x_14);
x_16 = l_Lean_PersistentHashMap_contains___at_Lean_MVarId_isAssigned___spec__1(x_15, x_1);
x_17 = lean_box(x_16);
lean_ctor_set(x_11, 0, x_17);
return x_11;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; lean_object* x_24; 
x_18 = lean_ctor_get(x_11, 0);
x_19 = lean_ctor_get(x_11, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_11);
x_20 = lean_ctor_get(x_18, 0);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_ctor_get(x_20, 7);
lean_inc(x_21);
lean_dec(x_20);
x_22 = l_Lean_PersistentHashMap_contains___at_Lean_MVarId_isAssigned___spec__1(x_21, x_1);
x_23 = lean_box(x_22);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_19);
return x_24;
}
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at_Lean_Elab_Tactic_pruneSolvedGoals___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_12; 
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_2);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
else
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_1);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_14 = lean_ctor_get(x_1, 0);
x_15 = lean_ctor_get(x_1, 1);
lean_inc(x_14);
x_16 = l_Lean_MVarId_isAssigned___at_Lean_Elab_Tactic_pruneSolvedGoals___spec__1(x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_unbox(x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_dec(x_16);
lean_ctor_set(x_1, 1, x_2);
{
lean_object* _tmp_0 = x_15;
lean_object* _tmp_1 = x_1;
lean_object* _tmp_10 = x_19;
x_1 = _tmp_0;
x_2 = _tmp_1;
x_11 = _tmp_10;
}
goto _start;
}
else
{
lean_object* x_21; 
lean_free_object(x_1);
lean_dec(x_14);
x_21 = lean_ctor_get(x_16, 1);
lean_inc(x_21);
lean_dec(x_16);
x_1 = x_15;
x_11 = x_21;
goto _start;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_23 = lean_ctor_get(x_1, 0);
x_24 = lean_ctor_get(x_1, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_1);
lean_inc(x_23);
x_25 = l_Lean_MVarId_isAssigned___at_Lean_Elab_Tactic_pruneSolvedGoals___spec__1(x_23, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_unbox(x_26);
lean_dec(x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_dec(x_25);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_23);
lean_ctor_set(x_29, 1, x_2);
x_1 = x_24;
x_2 = x_29;
x_11 = x_28;
goto _start;
}
else
{
lean_object* x_31; 
lean_dec(x_23);
x_31 = lean_ctor_get(x_25, 1);
lean_inc(x_31);
lean_dec(x_25);
x_1 = x_24;
x_11 = x_31;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_pruneSolvedGoals(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_10 = l_Lean_Elab_Tactic_getGoals___rarg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_box(0);
x_14 = l_List_filterAuxM___at_Lean_Elab_Tactic_pruneSolvedGoals___spec__2(x_11, x_13, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_List_reverse___rarg(x_15);
x_18 = l_Lean_Elab_Tactic_setGoals(x_17, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_16);
return x_18;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at_Lean_Elab_Tactic_pruneSolvedGoals___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_MVarId_isAssigned___at_Lean_Elab_Tactic_pruneSolvedGoals___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at_Lean_Elab_Tactic_pruneSolvedGoals___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_List_filterAuxM___at_Lean_Elab_Tactic_pruneSolvedGoals___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_pruneSolvedGoals___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Tactic_pruneSolvedGoals(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getUnsolvedGoals(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = l_Lean_Elab_Tactic_pruneSolvedGoals(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = l_Lean_Elab_Tactic_getGoals___rarg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getUnsolvedGoals___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Tactic_getUnsolvedGoals(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Basic_0__Lean_Elab_Tactic_TacticM_runCore___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_st_mk_ref(x_3, x_10);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
x_15 = lean_apply_9(x_1, x_2, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_st_ref_get(x_13, x_17);
lean_dec(x_13);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_18, 0);
lean_ctor_set(x_11, 1, x_20);
lean_ctor_set(x_11, 0, x_16);
lean_ctor_set(x_18, 0, x_11);
return x_18;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_18, 0);
x_22 = lean_ctor_get(x_18, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_18);
lean_ctor_set(x_11, 1, x_21);
lean_ctor_set(x_11, 0, x_16);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_11);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
else
{
uint8_t x_24; 
lean_free_object(x_11);
lean_dec(x_13);
x_24 = !lean_is_exclusive(x_15);
if (x_24 == 0)
{
return x_15;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_15, 0);
x_26 = lean_ctor_get(x_15, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_15);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_11, 0);
x_29 = lean_ctor_get(x_11, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_11);
lean_inc(x_28);
x_30 = lean_apply_9(x_1, x_2, x_28, x_4, x_5, x_6, x_7, x_8, x_9, x_29);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_st_ref_get(x_28, x_32);
lean_dec(x_28);
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
if (lean_is_exclusive(x_33)) {
 lean_ctor_release(x_33, 0);
 lean_ctor_release(x_33, 1);
 x_36 = x_33;
} else {
 lean_dec_ref(x_33);
 x_36 = lean_box(0);
}
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_31);
lean_ctor_set(x_37, 1, x_34);
if (lean_is_scalar(x_36)) {
 x_38 = lean_alloc_ctor(0, 2, 0);
} else {
 x_38 = x_36;
}
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_35);
return x_38;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
lean_dec(x_28);
x_39 = lean_ctor_get(x_30, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_30, 1);
lean_inc(x_40);
if (lean_is_exclusive(x_30)) {
 lean_ctor_release(x_30, 0);
 lean_ctor_release(x_30, 1);
 x_41 = x_30;
} else {
 lean_dec_ref(x_30);
 x_41 = lean_box(0);
}
if (lean_is_scalar(x_41)) {
 x_42 = lean_alloc_ctor(1, 2, 0);
} else {
 x_42 = x_41;
}
lean_ctor_set(x_42, 0, x_39);
lean_ctor_set(x_42, 1, x_40);
return x_42;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Basic_0__Lean_Elab_Tactic_TacticM_runCore(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Basic_0__Lean_Elab_Tactic_TacticM_runCore___rarg), 10, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Basic_0__Lean_Elab_Tactic_TacticM_runCore_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_st_mk_ref(x_3, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
lean_inc(x_12);
x_14 = lean_apply_9(x_1, x_2, x_12, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_st_ref_get(x_12, x_16);
lean_dec(x_12);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_17, 0);
lean_dec(x_19);
lean_ctor_set(x_17, 0, x_15);
return x_17;
}
else
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_dec(x_17);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_15);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
else
{
uint8_t x_22; 
lean_dec(x_12);
x_22 = !lean_is_exclusive(x_14);
if (x_22 == 0)
{
return x_14;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_14, 0);
x_24 = lean_ctor_get(x_14, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_14);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Basic_0__Lean_Elab_Tactic_TacticM_runCore_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Basic_0__Lean_Elab_Tactic_TacticM_runCore_x27___rarg), 10, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at_Lean_Elab_Tactic_run___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_apply_2(x_2, x_3, x_4);
x_11 = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp___rarg(x_1, x_10, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
return x_11;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_11, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_11);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
else
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_11);
if (x_16 == 0)
{
return x_11;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_11, 0);
x_18 = lean_ctor_get(x_11, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_11);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at_Lean_Elab_Tactic_run___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at_Lean_Elab_Tactic_run___spec__1___rarg), 9, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_run___lambda__1___closed__1() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = 1;
x_3 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_run___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_10 = lean_st_ref_get(x_4, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_ctor_get(x_11, 2);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_st_ref_take(x_4, x_12);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = !lean_is_exclusive(x_15);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_18 = lean_ctor_get(x_15, 2);
lean_dec(x_18);
x_19 = lean_box(0);
lean_ctor_set(x_15, 2, x_19);
x_20 = lean_st_ref_set(x_4, x_15, x_16);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_73; lean_object* x_74; 
x_22 = lean_ctor_get(x_20, 1);
x_23 = lean_ctor_get(x_20, 0);
lean_dec(x_23);
lean_ctor_set_tag(x_20, 1);
lean_ctor_set(x_20, 1, x_19);
lean_ctor_set(x_20, 0, x_1);
x_46 = lean_st_mk_ref(x_20, x_22);
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
lean_dec(x_46);
x_73 = l_Lean_Elab_Tactic_run___lambda__1___closed__1;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_47);
x_74 = lean_apply_9(x_2, x_73, x_47, x_3, x_4, x_5, x_6, x_7, x_8, x_48);
if (lean_obj_tag(x_74) == 0)
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_75 = lean_ctor_get(x_74, 1);
lean_inc(x_75);
lean_dec(x_74);
x_76 = l_Lean_Elab_Tactic_getUnsolvedGoals(x_73, x_47, x_3, x_4, x_5, x_6, x_7, x_8, x_75);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_77 = lean_ctor_get(x_76, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_76, 1);
lean_inc(x_78);
lean_dec(x_76);
x_49 = x_77;
x_50 = x_78;
goto block_72;
}
else
{
lean_object* x_79; lean_object* x_80; uint8_t x_81; 
x_79 = lean_ctor_get(x_74, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_74, 1);
lean_inc(x_80);
lean_dec(x_74);
x_81 = l_Lean_Exception_isRuntime(x_79);
if (x_81 == 0)
{
uint8_t x_82; 
x_82 = l_Lean_Elab_isAbortTacticException(x_79);
if (x_82 == 0)
{
lean_dec(x_47);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_24 = x_79;
x_25 = x_80;
goto block_45;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
lean_dec(x_79);
x_83 = l_Lean_Elab_Tactic_getUnsolvedGoals(x_73, x_47, x_3, x_4, x_5, x_6, x_7, x_8, x_80);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_84 = lean_ctor_get(x_83, 0);
lean_inc(x_84);
x_85 = lean_ctor_get(x_83, 1);
lean_inc(x_85);
lean_dec(x_83);
x_49 = x_84;
x_50 = x_85;
goto block_72;
}
}
else
{
lean_dec(x_47);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_24 = x_79;
x_25 = x_80;
goto block_45;
}
}
block_45:
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_26 = lean_st_ref_take(x_4, x_25);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = !lean_is_exclusive(x_27);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_30 = lean_ctor_get(x_27, 2);
lean_dec(x_30);
lean_ctor_set(x_27, 2, x_13);
x_31 = lean_st_ref_set(x_4, x_27, x_28);
lean_dec(x_4);
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
lean_object* x_33; 
x_33 = lean_ctor_get(x_31, 0);
lean_dec(x_33);
lean_ctor_set_tag(x_31, 1);
lean_ctor_set(x_31, 0, x_24);
return x_31;
}
else
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_ctor_get(x_31, 1);
lean_inc(x_34);
lean_dec(x_31);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_24);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_36 = lean_ctor_get(x_27, 0);
x_37 = lean_ctor_get(x_27, 1);
x_38 = lean_ctor_get(x_27, 3);
x_39 = lean_ctor_get(x_27, 4);
lean_inc(x_39);
lean_inc(x_38);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_27);
x_40 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_40, 0, x_36);
lean_ctor_set(x_40, 1, x_37);
lean_ctor_set(x_40, 2, x_13);
lean_ctor_set(x_40, 3, x_38);
lean_ctor_set(x_40, 4, x_39);
x_41 = lean_st_ref_set(x_4, x_40, x_28);
lean_dec(x_4);
x_42 = lean_ctor_get(x_41, 1);
lean_inc(x_42);
if (lean_is_exclusive(x_41)) {
 lean_ctor_release(x_41, 0);
 lean_ctor_release(x_41, 1);
 x_43 = x_41;
} else {
 lean_dec_ref(x_41);
 x_43 = lean_box(0);
}
if (lean_is_scalar(x_43)) {
 x_44 = lean_alloc_ctor(1, 2, 0);
} else {
 x_44 = x_43;
 lean_ctor_set_tag(x_44, 1);
}
lean_ctor_set(x_44, 0, x_24);
lean_ctor_set(x_44, 1, x_42);
return x_44;
}
}
block_72:
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; uint8_t x_56; 
x_51 = lean_st_ref_get(x_47, x_50);
lean_dec(x_47);
x_52 = lean_ctor_get(x_51, 1);
lean_inc(x_52);
lean_dec(x_51);
x_53 = lean_st_ref_take(x_4, x_52);
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
lean_dec(x_53);
x_56 = !lean_is_exclusive(x_54);
if (x_56 == 0)
{
lean_object* x_57; lean_object* x_58; uint8_t x_59; 
x_57 = lean_ctor_get(x_54, 2);
lean_dec(x_57);
lean_ctor_set(x_54, 2, x_13);
x_58 = lean_st_ref_set(x_4, x_54, x_55);
lean_dec(x_4);
x_59 = !lean_is_exclusive(x_58);
if (x_59 == 0)
{
lean_object* x_60; 
x_60 = lean_ctor_get(x_58, 0);
lean_dec(x_60);
lean_ctor_set(x_58, 0, x_49);
return x_58;
}
else
{
lean_object* x_61; lean_object* x_62; 
x_61 = lean_ctor_get(x_58, 1);
lean_inc(x_61);
lean_dec(x_58);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_49);
lean_ctor_set(x_62, 1, x_61);
return x_62;
}
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_63 = lean_ctor_get(x_54, 0);
x_64 = lean_ctor_get(x_54, 1);
x_65 = lean_ctor_get(x_54, 3);
x_66 = lean_ctor_get(x_54, 4);
lean_inc(x_66);
lean_inc(x_65);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_54);
x_67 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_67, 0, x_63);
lean_ctor_set(x_67, 1, x_64);
lean_ctor_set(x_67, 2, x_13);
lean_ctor_set(x_67, 3, x_65);
lean_ctor_set(x_67, 4, x_66);
x_68 = lean_st_ref_set(x_4, x_67, x_55);
lean_dec(x_4);
x_69 = lean_ctor_get(x_68, 1);
lean_inc(x_69);
if (lean_is_exclusive(x_68)) {
 lean_ctor_release(x_68, 0);
 lean_ctor_release(x_68, 1);
 x_70 = x_68;
} else {
 lean_dec_ref(x_68);
 x_70 = lean_box(0);
}
if (lean_is_scalar(x_70)) {
 x_71 = lean_alloc_ctor(0, 2, 0);
} else {
 x_71 = x_70;
}
lean_ctor_set(x_71, 0, x_49);
lean_ctor_set(x_71, 1, x_69);
return x_71;
}
}
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_125; lean_object* x_126; 
x_86 = lean_ctor_get(x_20, 1);
lean_inc(x_86);
lean_dec(x_20);
x_87 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_87, 0, x_1);
lean_ctor_set(x_87, 1, x_19);
x_104 = lean_st_mk_ref(x_87, x_86);
x_105 = lean_ctor_get(x_104, 0);
lean_inc(x_105);
x_106 = lean_ctor_get(x_104, 1);
lean_inc(x_106);
lean_dec(x_104);
x_125 = l_Lean_Elab_Tactic_run___lambda__1___closed__1;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_105);
x_126 = lean_apply_9(x_2, x_125, x_105, x_3, x_4, x_5, x_6, x_7, x_8, x_106);
if (lean_obj_tag(x_126) == 0)
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; 
x_127 = lean_ctor_get(x_126, 1);
lean_inc(x_127);
lean_dec(x_126);
x_128 = l_Lean_Elab_Tactic_getUnsolvedGoals(x_125, x_105, x_3, x_4, x_5, x_6, x_7, x_8, x_127);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_129 = lean_ctor_get(x_128, 0);
lean_inc(x_129);
x_130 = lean_ctor_get(x_128, 1);
lean_inc(x_130);
lean_dec(x_128);
x_107 = x_129;
x_108 = x_130;
goto block_124;
}
else
{
lean_object* x_131; lean_object* x_132; uint8_t x_133; 
x_131 = lean_ctor_get(x_126, 0);
lean_inc(x_131);
x_132 = lean_ctor_get(x_126, 1);
lean_inc(x_132);
lean_dec(x_126);
x_133 = l_Lean_Exception_isRuntime(x_131);
if (x_133 == 0)
{
uint8_t x_134; 
x_134 = l_Lean_Elab_isAbortTacticException(x_131);
if (x_134 == 0)
{
lean_dec(x_105);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_88 = x_131;
x_89 = x_132;
goto block_103;
}
else
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; 
lean_dec(x_131);
x_135 = l_Lean_Elab_Tactic_getUnsolvedGoals(x_125, x_105, x_3, x_4, x_5, x_6, x_7, x_8, x_132);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_136 = lean_ctor_get(x_135, 0);
lean_inc(x_136);
x_137 = lean_ctor_get(x_135, 1);
lean_inc(x_137);
lean_dec(x_135);
x_107 = x_136;
x_108 = x_137;
goto block_124;
}
}
else
{
lean_dec(x_105);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_88 = x_131;
x_89 = x_132;
goto block_103;
}
}
block_103:
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_90 = lean_st_ref_take(x_4, x_89);
x_91 = lean_ctor_get(x_90, 0);
lean_inc(x_91);
x_92 = lean_ctor_get(x_90, 1);
lean_inc(x_92);
lean_dec(x_90);
x_93 = lean_ctor_get(x_91, 0);
lean_inc(x_93);
x_94 = lean_ctor_get(x_91, 1);
lean_inc(x_94);
x_95 = lean_ctor_get(x_91, 3);
lean_inc(x_95);
x_96 = lean_ctor_get(x_91, 4);
lean_inc(x_96);
if (lean_is_exclusive(x_91)) {
 lean_ctor_release(x_91, 0);
 lean_ctor_release(x_91, 1);
 lean_ctor_release(x_91, 2);
 lean_ctor_release(x_91, 3);
 lean_ctor_release(x_91, 4);
 x_97 = x_91;
} else {
 lean_dec_ref(x_91);
 x_97 = lean_box(0);
}
if (lean_is_scalar(x_97)) {
 x_98 = lean_alloc_ctor(0, 5, 0);
} else {
 x_98 = x_97;
}
lean_ctor_set(x_98, 0, x_93);
lean_ctor_set(x_98, 1, x_94);
lean_ctor_set(x_98, 2, x_13);
lean_ctor_set(x_98, 3, x_95);
lean_ctor_set(x_98, 4, x_96);
x_99 = lean_st_ref_set(x_4, x_98, x_92);
lean_dec(x_4);
x_100 = lean_ctor_get(x_99, 1);
lean_inc(x_100);
if (lean_is_exclusive(x_99)) {
 lean_ctor_release(x_99, 0);
 lean_ctor_release(x_99, 1);
 x_101 = x_99;
} else {
 lean_dec_ref(x_99);
 x_101 = lean_box(0);
}
if (lean_is_scalar(x_101)) {
 x_102 = lean_alloc_ctor(1, 2, 0);
} else {
 x_102 = x_101;
 lean_ctor_set_tag(x_102, 1);
}
lean_ctor_set(x_102, 0, x_88);
lean_ctor_set(x_102, 1, x_100);
return x_102;
}
block_124:
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; 
x_109 = lean_st_ref_get(x_105, x_108);
lean_dec(x_105);
x_110 = lean_ctor_get(x_109, 1);
lean_inc(x_110);
lean_dec(x_109);
x_111 = lean_st_ref_take(x_4, x_110);
x_112 = lean_ctor_get(x_111, 0);
lean_inc(x_112);
x_113 = lean_ctor_get(x_111, 1);
lean_inc(x_113);
lean_dec(x_111);
x_114 = lean_ctor_get(x_112, 0);
lean_inc(x_114);
x_115 = lean_ctor_get(x_112, 1);
lean_inc(x_115);
x_116 = lean_ctor_get(x_112, 3);
lean_inc(x_116);
x_117 = lean_ctor_get(x_112, 4);
lean_inc(x_117);
if (lean_is_exclusive(x_112)) {
 lean_ctor_release(x_112, 0);
 lean_ctor_release(x_112, 1);
 lean_ctor_release(x_112, 2);
 lean_ctor_release(x_112, 3);
 lean_ctor_release(x_112, 4);
 x_118 = x_112;
} else {
 lean_dec_ref(x_112);
 x_118 = lean_box(0);
}
if (lean_is_scalar(x_118)) {
 x_119 = lean_alloc_ctor(0, 5, 0);
} else {
 x_119 = x_118;
}
lean_ctor_set(x_119, 0, x_114);
lean_ctor_set(x_119, 1, x_115);
lean_ctor_set(x_119, 2, x_13);
lean_ctor_set(x_119, 3, x_116);
lean_ctor_set(x_119, 4, x_117);
x_120 = lean_st_ref_set(x_4, x_119, x_113);
lean_dec(x_4);
x_121 = lean_ctor_get(x_120, 1);
lean_inc(x_121);
if (lean_is_exclusive(x_120)) {
 lean_ctor_release(x_120, 0);
 lean_ctor_release(x_120, 1);
 x_122 = x_120;
} else {
 lean_dec_ref(x_120);
 x_122 = lean_box(0);
}
if (lean_is_scalar(x_122)) {
 x_123 = lean_alloc_ctor(0, 2, 0);
} else {
 x_123 = x_122;
}
lean_ctor_set(x_123, 0, x_107);
lean_ctor_set(x_123, 1, x_121);
return x_123;
}
}
}
else
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_185; lean_object* x_186; 
x_138 = lean_ctor_get(x_15, 0);
x_139 = lean_ctor_get(x_15, 1);
x_140 = lean_ctor_get(x_15, 3);
x_141 = lean_ctor_get(x_15, 4);
lean_inc(x_141);
lean_inc(x_140);
lean_inc(x_139);
lean_inc(x_138);
lean_dec(x_15);
x_142 = lean_box(0);
x_143 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_143, 0, x_138);
lean_ctor_set(x_143, 1, x_139);
lean_ctor_set(x_143, 2, x_142);
lean_ctor_set(x_143, 3, x_140);
lean_ctor_set(x_143, 4, x_141);
x_144 = lean_st_ref_set(x_4, x_143, x_16);
x_145 = lean_ctor_get(x_144, 1);
lean_inc(x_145);
if (lean_is_exclusive(x_144)) {
 lean_ctor_release(x_144, 0);
 lean_ctor_release(x_144, 1);
 x_146 = x_144;
} else {
 lean_dec_ref(x_144);
 x_146 = lean_box(0);
}
if (lean_is_scalar(x_146)) {
 x_147 = lean_alloc_ctor(1, 2, 0);
} else {
 x_147 = x_146;
 lean_ctor_set_tag(x_147, 1);
}
lean_ctor_set(x_147, 0, x_1);
lean_ctor_set(x_147, 1, x_142);
x_164 = lean_st_mk_ref(x_147, x_145);
x_165 = lean_ctor_get(x_164, 0);
lean_inc(x_165);
x_166 = lean_ctor_get(x_164, 1);
lean_inc(x_166);
lean_dec(x_164);
x_185 = l_Lean_Elab_Tactic_run___lambda__1___closed__1;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_165);
x_186 = lean_apply_9(x_2, x_185, x_165, x_3, x_4, x_5, x_6, x_7, x_8, x_166);
if (lean_obj_tag(x_186) == 0)
{
lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; 
x_187 = lean_ctor_get(x_186, 1);
lean_inc(x_187);
lean_dec(x_186);
x_188 = l_Lean_Elab_Tactic_getUnsolvedGoals(x_185, x_165, x_3, x_4, x_5, x_6, x_7, x_8, x_187);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_189 = lean_ctor_get(x_188, 0);
lean_inc(x_189);
x_190 = lean_ctor_get(x_188, 1);
lean_inc(x_190);
lean_dec(x_188);
x_167 = x_189;
x_168 = x_190;
goto block_184;
}
else
{
lean_object* x_191; lean_object* x_192; uint8_t x_193; 
x_191 = lean_ctor_get(x_186, 0);
lean_inc(x_191);
x_192 = lean_ctor_get(x_186, 1);
lean_inc(x_192);
lean_dec(x_186);
x_193 = l_Lean_Exception_isRuntime(x_191);
if (x_193 == 0)
{
uint8_t x_194; 
x_194 = l_Lean_Elab_isAbortTacticException(x_191);
if (x_194 == 0)
{
lean_dec(x_165);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_148 = x_191;
x_149 = x_192;
goto block_163;
}
else
{
lean_object* x_195; lean_object* x_196; lean_object* x_197; 
lean_dec(x_191);
x_195 = l_Lean_Elab_Tactic_getUnsolvedGoals(x_185, x_165, x_3, x_4, x_5, x_6, x_7, x_8, x_192);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_196 = lean_ctor_get(x_195, 0);
lean_inc(x_196);
x_197 = lean_ctor_get(x_195, 1);
lean_inc(x_197);
lean_dec(x_195);
x_167 = x_196;
x_168 = x_197;
goto block_184;
}
}
else
{
lean_dec(x_165);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_148 = x_191;
x_149 = x_192;
goto block_163;
}
}
block_163:
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; 
x_150 = lean_st_ref_take(x_4, x_149);
x_151 = lean_ctor_get(x_150, 0);
lean_inc(x_151);
x_152 = lean_ctor_get(x_150, 1);
lean_inc(x_152);
lean_dec(x_150);
x_153 = lean_ctor_get(x_151, 0);
lean_inc(x_153);
x_154 = lean_ctor_get(x_151, 1);
lean_inc(x_154);
x_155 = lean_ctor_get(x_151, 3);
lean_inc(x_155);
x_156 = lean_ctor_get(x_151, 4);
lean_inc(x_156);
if (lean_is_exclusive(x_151)) {
 lean_ctor_release(x_151, 0);
 lean_ctor_release(x_151, 1);
 lean_ctor_release(x_151, 2);
 lean_ctor_release(x_151, 3);
 lean_ctor_release(x_151, 4);
 x_157 = x_151;
} else {
 lean_dec_ref(x_151);
 x_157 = lean_box(0);
}
if (lean_is_scalar(x_157)) {
 x_158 = lean_alloc_ctor(0, 5, 0);
} else {
 x_158 = x_157;
}
lean_ctor_set(x_158, 0, x_153);
lean_ctor_set(x_158, 1, x_154);
lean_ctor_set(x_158, 2, x_13);
lean_ctor_set(x_158, 3, x_155);
lean_ctor_set(x_158, 4, x_156);
x_159 = lean_st_ref_set(x_4, x_158, x_152);
lean_dec(x_4);
x_160 = lean_ctor_get(x_159, 1);
lean_inc(x_160);
if (lean_is_exclusive(x_159)) {
 lean_ctor_release(x_159, 0);
 lean_ctor_release(x_159, 1);
 x_161 = x_159;
} else {
 lean_dec_ref(x_159);
 x_161 = lean_box(0);
}
if (lean_is_scalar(x_161)) {
 x_162 = lean_alloc_ctor(1, 2, 0);
} else {
 x_162 = x_161;
 lean_ctor_set_tag(x_162, 1);
}
lean_ctor_set(x_162, 0, x_148);
lean_ctor_set(x_162, 1, x_160);
return x_162;
}
block_184:
{
lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; 
x_169 = lean_st_ref_get(x_165, x_168);
lean_dec(x_165);
x_170 = lean_ctor_get(x_169, 1);
lean_inc(x_170);
lean_dec(x_169);
x_171 = lean_st_ref_take(x_4, x_170);
x_172 = lean_ctor_get(x_171, 0);
lean_inc(x_172);
x_173 = lean_ctor_get(x_171, 1);
lean_inc(x_173);
lean_dec(x_171);
x_174 = lean_ctor_get(x_172, 0);
lean_inc(x_174);
x_175 = lean_ctor_get(x_172, 1);
lean_inc(x_175);
x_176 = lean_ctor_get(x_172, 3);
lean_inc(x_176);
x_177 = lean_ctor_get(x_172, 4);
lean_inc(x_177);
if (lean_is_exclusive(x_172)) {
 lean_ctor_release(x_172, 0);
 lean_ctor_release(x_172, 1);
 lean_ctor_release(x_172, 2);
 lean_ctor_release(x_172, 3);
 lean_ctor_release(x_172, 4);
 x_178 = x_172;
} else {
 lean_dec_ref(x_172);
 x_178 = lean_box(0);
}
if (lean_is_scalar(x_178)) {
 x_179 = lean_alloc_ctor(0, 5, 0);
} else {
 x_179 = x_178;
}
lean_ctor_set(x_179, 0, x_174);
lean_ctor_set(x_179, 1, x_175);
lean_ctor_set(x_179, 2, x_13);
lean_ctor_set(x_179, 3, x_176);
lean_ctor_set(x_179, 4, x_177);
x_180 = lean_st_ref_set(x_4, x_179, x_173);
lean_dec(x_4);
x_181 = lean_ctor_get(x_180, 1);
lean_inc(x_181);
if (lean_is_exclusive(x_180)) {
 lean_ctor_release(x_180, 0);
 lean_ctor_release(x_180, 1);
 x_182 = x_180;
} else {
 lean_dec_ref(x_180);
 x_182 = lean_box(0);
}
if (lean_is_scalar(x_182)) {
 x_183 = lean_alloc_ctor(0, 2, 0);
} else {
 x_183 = x_182;
}
lean_ctor_set(x_183, 0, x_167);
lean_ctor_set(x_183, 1, x_181);
return x_183;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_run(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
lean_inc(x_1);
x_10 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_run___lambda__1), 9, 2);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_2);
x_11 = l_Lean_MVarId_withContext___at_Lean_Elab_Tactic_run___spec__1___rarg(x_1, x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_saveState___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = l_Lean_Elab_Term_saveState___rarg(x_3, x_4, x_5, x_6, x_7, x_8);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_9, 1);
x_12 = lean_st_ref_get(x_1, x_11);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_12, 0);
lean_ctor_set(x_9, 1, x_14);
lean_ctor_set(x_12, 0, x_9);
return x_12;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_12, 0);
x_16 = lean_ctor_get(x_12, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_12);
lean_ctor_set(x_9, 1, x_15);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_9);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_18 = lean_ctor_get(x_9, 0);
x_19 = lean_ctor_get(x_9, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_9);
x_20 = lean_st_ref_get(x_1, x_19);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
if (lean_is_exclusive(x_20)) {
 lean_ctor_release(x_20, 0);
 lean_ctor_release(x_20, 1);
 x_23 = x_20;
} else {
 lean_dec_ref(x_20);
 x_23 = lean_box(0);
}
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_18);
lean_ctor_set(x_24, 1, x_21);
if (lean_is_scalar(x_23)) {
 x_25 = lean_alloc_ctor(0, 2, 0);
} else {
 x_25 = x_23;
}
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_22);
return x_25;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_saveState(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_saveState___rarg___boxed), 8, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_saveState___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Tactic_saveState___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_saveState___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Tactic_saveState(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_SavedState_restore(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
x_13 = l_Lean_Elab_Term_SavedState_restore(x_12, x_2, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_ctor_get(x_1, 1);
lean_inc(x_15);
lean_dec(x_1);
x_16 = lean_st_ref_set(x_4, x_15, x_14);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
return x_16;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_16);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_SavedState_restore___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_2);
lean_dec(x_2);
x_13 = l_Lean_Elab_Tactic_SavedState_restore(x_1, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_4);
lean_dec(x_3);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getCurrMacroScope___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 10);
lean_inc(x_4);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getCurrMacroScope(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_getCurrMacroScope___rarg___boxed), 3, 0);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getCurrMacroScope___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Tactic_getCurrMacroScope___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getCurrMacroScope___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_Tactic_getCurrMacroScope(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getMainModule___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_st_ref_get(x_1, x_2);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_environment_main_module(x_6);
lean_ctor_set(x_3, 0, x_7);
return x_3;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_3, 0);
x_9 = lean_ctor_get(x_3, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_3);
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_environment_main_module(x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_9);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getMainModule(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_getMainModule___rarg___boxed), 2, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getMainModule___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_Tactic_getMainModule___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getMainModule___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Elab_Tactic_getMainModule(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_mkTacticAttribute___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("builtin_tactic", 14);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_mkTacticAttribute___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Tactic_mkTacticAttribute___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_mkTacticAttribute___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("tactic", 6);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_mkTacticAttribute___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Tactic_mkTacticAttribute___closed__3;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_mkTacticAttribute___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Lean", 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_mkTacticAttribute___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Parser", 6);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_mkTacticAttribute___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_Tactic_mkTacticAttribute___closed__5;
x_2 = l_Lean_Elab_Tactic_mkTacticAttribute___closed__6;
x_3 = l_Lean_Elab_Term_reportUnsolvedGoals___closed__1;
x_4 = l_Lean_Name_mkStr3(x_1, x_2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_mkTacticAttribute___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Elab", 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_mkTacticAttribute___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_Tactic_mkTacticAttribute___closed__5;
x_2 = l_Lean_Elab_Tactic_mkTacticAttribute___closed__8;
x_3 = l_Lean_Elab_Term_reportUnsolvedGoals___closed__1;
x_4 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_mkTacticAttribute___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("tacticElabAttribute", 19);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_mkTacticAttribute___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Elab_Tactic_mkTacticAttribute___closed__5;
x_2 = l_Lean_Elab_Tactic_mkTacticAttribute___closed__8;
x_3 = l_Lean_Elab_Term_reportUnsolvedGoals___closed__1;
x_4 = l_Lean_Elab_Tactic_mkTacticAttribute___closed__10;
x_5 = l_Lean_Name_mkStr4(x_1, x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_mkTacticAttribute(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = l_Lean_Elab_Tactic_mkTacticAttribute___closed__2;
x_3 = l_Lean_Elab_Tactic_mkTacticAttribute___closed__4;
x_4 = l_Lean_Elab_Tactic_mkTacticAttribute___closed__7;
x_5 = l_Lean_Elab_Tactic_mkTacticAttribute___closed__9;
x_6 = l_Lean_Elab_Tactic_mkTacticAttribute___closed__3;
x_7 = l_Lean_Elab_Tactic_mkTacticAttribute___closed__11;
x_8 = l_Lean_Elab_mkElabAttribute___rarg(x_2, x_3, x_4, x_5, x_6, x_7, x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_mkTacticInfo(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_st_ref_get(x_9, x_12);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_Lean_Elab_Tactic_getUnsolvedGoals(x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_16);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_18, 0);
x_21 = lean_ctor_get(x_4, 0);
lean_inc(x_21);
lean_ctor_set(x_13, 1, x_3);
lean_ctor_set(x_13, 0, x_21);
x_22 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_22, 0, x_13);
lean_ctor_set(x_22, 1, x_1);
lean_ctor_set(x_22, 2, x_2);
lean_ctor_set(x_22, 3, x_17);
lean_ctor_set(x_22, 4, x_20);
x_23 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_18, 0, x_23);
return x_18;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_24 = lean_ctor_get(x_18, 0);
x_25 = lean_ctor_get(x_18, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_18);
x_26 = lean_ctor_get(x_4, 0);
lean_inc(x_26);
lean_ctor_set(x_13, 1, x_3);
lean_ctor_set(x_13, 0, x_26);
x_27 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_27, 0, x_13);
lean_ctor_set(x_27, 1, x_1);
lean_ctor_set(x_27, 2, x_2);
lean_ctor_set(x_27, 3, x_17);
lean_ctor_set(x_27, 4, x_24);
x_28 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_28, 0, x_27);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_25);
return x_29;
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_30 = lean_ctor_get(x_13, 0);
x_31 = lean_ctor_get(x_13, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_13);
x_32 = lean_ctor_get(x_30, 0);
lean_inc(x_32);
lean_dec(x_30);
x_33 = l_Lean_Elab_Tactic_getUnsolvedGoals(x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_31);
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
if (lean_is_exclusive(x_33)) {
 lean_ctor_release(x_33, 0);
 lean_ctor_release(x_33, 1);
 x_36 = x_33;
} else {
 lean_dec_ref(x_33);
 x_36 = lean_box(0);
}
x_37 = lean_ctor_get(x_4, 0);
lean_inc(x_37);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_3);
x_39 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_1);
lean_ctor_set(x_39, 2, x_2);
lean_ctor_set(x_39, 3, x_32);
lean_ctor_set(x_39, 4, x_34);
x_40 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_40, 0, x_39);
if (lean_is_scalar(x_36)) {
 x_41 = lean_alloc_ctor(0, 2, 0);
} else {
 x_41 = x_36;
}
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_35);
return x_41;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_mkTacticInfo___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_Elab_Tactic_mkTacticInfo(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_mkInitialTacticInfo___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_Elab_Tactic_mkTacticInfo(x_2, x_3, x_1, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_mkInitialTacticInfo(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_11 = lean_st_ref_get(x_7, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Elab_Tactic_getUnsolvedGoals(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_mkInitialTacticInfo___elambda__1___boxed), 12, 3);
lean_closure_set(x_18, 0, x_1);
lean_closure_set(x_18, 1, x_14);
lean_closure_set(x_18, 2, x_17);
lean_ctor_set(x_15, 0, x_18);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_15);
x_21 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_mkInitialTacticInfo___elambda__1___boxed), 12, 3);
lean_closure_set(x_21, 0, x_1);
lean_closure_set(x_21, 1, x_14);
lean_closure_set(x_21, 2, x_19);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_mkInitialTacticInfo___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_Elab_Tactic_mkInitialTacticInfo___elambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_mkInitialTacticInfo___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Tactic_mkInitialTacticInfo(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___at_Lean_Elab_Tactic_withTacticInfoContext___spec__2___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(32u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___at_Lean_Elab_Tactic_withTacticInfoContext___spec__2___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_getResetInfoTrees___at_Lean_Elab_Tactic_withTacticInfoContext___spec__2___rarg___closed__1;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___at_Lean_Elab_Tactic_withTacticInfoContext___spec__2___rarg___closed__3() {
_start:
{
size_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = 5;
x_2 = l_Lean_Elab_getResetInfoTrees___at_Lean_Elab_Tactic_withTacticInfoContext___spec__2___rarg___closed__2;
x_3 = l_Lean_Elab_getResetInfoTrees___at_Lean_Elab_Tactic_withTacticInfoContext___spec__2___rarg___closed__1;
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_3);
lean_ctor_set(x_5, 2, x_4);
lean_ctor_set(x_5, 3, x_4);
lean_ctor_set_usize(x_5, 4, x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at_Lean_Elab_Tactic_withTacticInfoContext___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_3 = lean_st_ref_get(x_1, x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_ctor_get(x_4, 6);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_st_ref_take(x_1, x_5);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_9, 6);
lean_inc(x_10);
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
lean_dec(x_8);
x_12 = !lean_is_exclusive(x_9);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_9, 6);
lean_dec(x_13);
x_14 = !lean_is_exclusive(x_10);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_15 = lean_ctor_get(x_10, 1);
lean_dec(x_15);
x_16 = l_Lean_Elab_getResetInfoTrees___at_Lean_Elab_Tactic_withTacticInfoContext___spec__2___rarg___closed__3;
lean_ctor_set(x_10, 1, x_16);
x_17 = lean_st_ref_set(x_1, x_9, x_11);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_17, 0);
lean_dec(x_19);
lean_ctor_set(x_17, 0, x_7);
return x_17;
}
else
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_dec(x_17);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_7);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
else
{
uint8_t x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_22 = lean_ctor_get_uint8(x_10, sizeof(void*)*2);
x_23 = lean_ctor_get(x_10, 0);
lean_inc(x_23);
lean_dec(x_10);
x_24 = l_Lean_Elab_getResetInfoTrees___at_Lean_Elab_Tactic_withTacticInfoContext___spec__2___rarg___closed__3;
x_25 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
lean_ctor_set_uint8(x_25, sizeof(void*)*2, x_22);
lean_ctor_set(x_9, 6, x_25);
x_26 = lean_st_ref_set(x_1, x_9, x_11);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
if (lean_is_exclusive(x_26)) {
 lean_ctor_release(x_26, 0);
 lean_ctor_release(x_26, 1);
 x_28 = x_26;
} else {
 lean_dec_ref(x_26);
 x_28 = lean_box(0);
}
if (lean_is_scalar(x_28)) {
 x_29 = lean_alloc_ctor(0, 2, 0);
} else {
 x_29 = x_28;
}
lean_ctor_set(x_29, 0, x_7);
lean_ctor_set(x_29, 1, x_27);
return x_29;
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_30 = lean_ctor_get(x_9, 0);
x_31 = lean_ctor_get(x_9, 1);
x_32 = lean_ctor_get(x_9, 2);
x_33 = lean_ctor_get(x_9, 3);
x_34 = lean_ctor_get(x_9, 4);
x_35 = lean_ctor_get(x_9, 5);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_9);
x_36 = lean_ctor_get_uint8(x_10, sizeof(void*)*2);
x_37 = lean_ctor_get(x_10, 0);
lean_inc(x_37);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 x_38 = x_10;
} else {
 lean_dec_ref(x_10);
 x_38 = lean_box(0);
}
x_39 = l_Lean_Elab_getResetInfoTrees___at_Lean_Elab_Tactic_withTacticInfoContext___spec__2___rarg___closed__3;
if (lean_is_scalar(x_38)) {
 x_40 = lean_alloc_ctor(0, 2, 1);
} else {
 x_40 = x_38;
}
lean_ctor_set(x_40, 0, x_37);
lean_ctor_set(x_40, 1, x_39);
lean_ctor_set_uint8(x_40, sizeof(void*)*2, x_36);
x_41 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_41, 0, x_30);
lean_ctor_set(x_41, 1, x_31);
lean_ctor_set(x_41, 2, x_32);
lean_ctor_set(x_41, 3, x_33);
lean_ctor_set(x_41, 4, x_34);
lean_ctor_set(x_41, 5, x_35);
lean_ctor_set(x_41, 6, x_40);
x_42 = lean_st_ref_set(x_1, x_41, x_11);
x_43 = lean_ctor_get(x_42, 1);
lean_inc(x_43);
if (lean_is_exclusive(x_42)) {
 lean_ctor_release(x_42, 0);
 lean_ctor_release(x_42, 1);
 x_44 = x_42;
} else {
 lean_dec_ref(x_42);
 x_44 = lean_box(0);
}
if (lean_is_scalar(x_44)) {
 x_45 = lean_alloc_ctor(0, 2, 0);
} else {
 x_45 = x_44;
}
lean_ctor_set(x_45, 0, x_7);
lean_ctor_set(x_45, 1, x_43);
return x_45;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at_Lean_Elab_Tactic_withTacticInfoContext___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l_Lean_Elab_getResetInfoTrees___at_Lean_Elab_Tactic_withTacticInfoContext___spec__2___rarg___boxed), 2, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at_Lean_Elab_Tactic_withTacticInfoContext___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_12 = lean_st_ref_get(x_10, x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_13, 6);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_ctor_get_uint8(x_14, sizeof(void*)*2);
lean_dec(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_2);
x_16 = lean_ctor_get(x_12, 1);
lean_inc(x_16);
lean_dec(x_12);
x_17 = lean_apply_9(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_16);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_18 = lean_ctor_get(x_12, 1);
lean_inc(x_18);
lean_dec(x_12);
x_19 = l_Lean_Elab_getResetInfoTrees___at_Lean_Elab_Tactic_withTacticInfoContext___spec__2___rarg(x_10, x_18);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_22 = lean_apply_9(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_21);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_st_ref_get(x_10, x_24);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_ctor_get(x_26, 6);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
lean_dec(x_28);
lean_inc(x_10);
x_30 = lean_apply_10(x_2, x_29, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_27);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_st_ref_take(x_10, x_32);
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_34, 6);
lean_inc(x_35);
x_36 = lean_ctor_get(x_33, 1);
lean_inc(x_36);
lean_dec(x_33);
x_37 = !lean_is_exclusive(x_34);
if (x_37 == 0)
{
lean_object* x_38; uint8_t x_39; 
x_38 = lean_ctor_get(x_34, 6);
lean_dec(x_38);
x_39 = !lean_is_exclusive(x_35);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; uint8_t x_43; 
x_40 = lean_ctor_get(x_35, 1);
lean_dec(x_40);
x_41 = l_Lean_PersistentArray_push___rarg(x_20, x_31);
lean_ctor_set(x_35, 1, x_41);
x_42 = lean_st_ref_set(x_10, x_34, x_36);
lean_dec(x_10);
x_43 = !lean_is_exclusive(x_42);
if (x_43 == 0)
{
lean_object* x_44; 
x_44 = lean_ctor_get(x_42, 0);
lean_dec(x_44);
lean_ctor_set(x_42, 0, x_23);
return x_42;
}
else
{
lean_object* x_45; lean_object* x_46; 
x_45 = lean_ctor_get(x_42, 1);
lean_inc(x_45);
lean_dec(x_42);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_23);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
else
{
uint8_t x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_47 = lean_ctor_get_uint8(x_35, sizeof(void*)*2);
x_48 = lean_ctor_get(x_35, 0);
lean_inc(x_48);
lean_dec(x_35);
x_49 = l_Lean_PersistentArray_push___rarg(x_20, x_31);
x_50 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
lean_ctor_set_uint8(x_50, sizeof(void*)*2, x_47);
lean_ctor_set(x_34, 6, x_50);
x_51 = lean_st_ref_set(x_10, x_34, x_36);
lean_dec(x_10);
x_52 = lean_ctor_get(x_51, 1);
lean_inc(x_52);
if (lean_is_exclusive(x_51)) {
 lean_ctor_release(x_51, 0);
 lean_ctor_release(x_51, 1);
 x_53 = x_51;
} else {
 lean_dec_ref(x_51);
 x_53 = lean_box(0);
}
if (lean_is_scalar(x_53)) {
 x_54 = lean_alloc_ctor(0, 2, 0);
} else {
 x_54 = x_53;
}
lean_ctor_set(x_54, 0, x_23);
lean_ctor_set(x_54, 1, x_52);
return x_54;
}
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; uint8_t x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_55 = lean_ctor_get(x_34, 0);
x_56 = lean_ctor_get(x_34, 1);
x_57 = lean_ctor_get(x_34, 2);
x_58 = lean_ctor_get(x_34, 3);
x_59 = lean_ctor_get(x_34, 4);
x_60 = lean_ctor_get(x_34, 5);
lean_inc(x_60);
lean_inc(x_59);
lean_inc(x_58);
lean_inc(x_57);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_34);
x_61 = lean_ctor_get_uint8(x_35, sizeof(void*)*2);
x_62 = lean_ctor_get(x_35, 0);
lean_inc(x_62);
if (lean_is_exclusive(x_35)) {
 lean_ctor_release(x_35, 0);
 lean_ctor_release(x_35, 1);
 x_63 = x_35;
} else {
 lean_dec_ref(x_35);
 x_63 = lean_box(0);
}
x_64 = l_Lean_PersistentArray_push___rarg(x_20, x_31);
if (lean_is_scalar(x_63)) {
 x_65 = lean_alloc_ctor(0, 2, 1);
} else {
 x_65 = x_63;
}
lean_ctor_set(x_65, 0, x_62);
lean_ctor_set(x_65, 1, x_64);
lean_ctor_set_uint8(x_65, sizeof(void*)*2, x_61);
x_66 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_66, 0, x_55);
lean_ctor_set(x_66, 1, x_56);
lean_ctor_set(x_66, 2, x_57);
lean_ctor_set(x_66, 3, x_58);
lean_ctor_set(x_66, 4, x_59);
lean_ctor_set(x_66, 5, x_60);
lean_ctor_set(x_66, 6, x_65);
x_67 = lean_st_ref_set(x_10, x_66, x_36);
lean_dec(x_10);
x_68 = lean_ctor_get(x_67, 1);
lean_inc(x_68);
if (lean_is_exclusive(x_67)) {
 lean_ctor_release(x_67, 0);
 lean_ctor_release(x_67, 1);
 x_69 = x_67;
} else {
 lean_dec_ref(x_67);
 x_69 = lean_box(0);
}
if (lean_is_scalar(x_69)) {
 x_70 = lean_alloc_ctor(0, 2, 0);
} else {
 x_70 = x_69;
}
lean_ctor_set(x_70, 0, x_23);
lean_ctor_set(x_70, 1, x_68);
return x_70;
}
}
else
{
uint8_t x_71; 
lean_dec(x_23);
lean_dec(x_20);
lean_dec(x_10);
x_71 = !lean_is_exclusive(x_30);
if (x_71 == 0)
{
return x_30;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_72 = lean_ctor_get(x_30, 0);
x_73 = lean_ctor_get(x_30, 1);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_30);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_73);
return x_74;
}
}
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_75 = lean_ctor_get(x_22, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_22, 1);
lean_inc(x_76);
lean_dec(x_22);
x_77 = lean_st_ref_get(x_10, x_76);
x_78 = lean_ctor_get(x_77, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_77, 1);
lean_inc(x_79);
lean_dec(x_77);
x_80 = lean_ctor_get(x_78, 6);
lean_inc(x_80);
lean_dec(x_78);
x_81 = lean_ctor_get(x_80, 1);
lean_inc(x_81);
lean_dec(x_80);
lean_inc(x_10);
x_82 = lean_apply_10(x_2, x_81, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_79);
if (lean_obj_tag(x_82) == 0)
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; uint8_t x_89; 
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_82, 1);
lean_inc(x_84);
lean_dec(x_82);
x_85 = lean_st_ref_take(x_10, x_84);
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_86, 6);
lean_inc(x_87);
x_88 = lean_ctor_get(x_85, 1);
lean_inc(x_88);
lean_dec(x_85);
x_89 = !lean_is_exclusive(x_86);
if (x_89 == 0)
{
lean_object* x_90; uint8_t x_91; 
x_90 = lean_ctor_get(x_86, 6);
lean_dec(x_90);
x_91 = !lean_is_exclusive(x_87);
if (x_91 == 0)
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; uint8_t x_95; 
x_92 = lean_ctor_get(x_87, 1);
lean_dec(x_92);
x_93 = l_Lean_PersistentArray_push___rarg(x_20, x_83);
lean_ctor_set(x_87, 1, x_93);
x_94 = lean_st_ref_set(x_10, x_86, x_88);
lean_dec(x_10);
x_95 = !lean_is_exclusive(x_94);
if (x_95 == 0)
{
lean_object* x_96; 
x_96 = lean_ctor_get(x_94, 0);
lean_dec(x_96);
lean_ctor_set_tag(x_94, 1);
lean_ctor_set(x_94, 0, x_75);
return x_94;
}
else
{
lean_object* x_97; lean_object* x_98; 
x_97 = lean_ctor_get(x_94, 1);
lean_inc(x_97);
lean_dec(x_94);
x_98 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_98, 0, x_75);
lean_ctor_set(x_98, 1, x_97);
return x_98;
}
}
else
{
uint8_t x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; 
x_99 = lean_ctor_get_uint8(x_87, sizeof(void*)*2);
x_100 = lean_ctor_get(x_87, 0);
lean_inc(x_100);
lean_dec(x_87);
x_101 = l_Lean_PersistentArray_push___rarg(x_20, x_83);
x_102 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_102, 0, x_100);
lean_ctor_set(x_102, 1, x_101);
lean_ctor_set_uint8(x_102, sizeof(void*)*2, x_99);
lean_ctor_set(x_86, 6, x_102);
x_103 = lean_st_ref_set(x_10, x_86, x_88);
lean_dec(x_10);
x_104 = lean_ctor_get(x_103, 1);
lean_inc(x_104);
if (lean_is_exclusive(x_103)) {
 lean_ctor_release(x_103, 0);
 lean_ctor_release(x_103, 1);
 x_105 = x_103;
} else {
 lean_dec_ref(x_103);
 x_105 = lean_box(0);
}
if (lean_is_scalar(x_105)) {
 x_106 = lean_alloc_ctor(1, 2, 0);
} else {
 x_106 = x_105;
 lean_ctor_set_tag(x_106, 1);
}
lean_ctor_set(x_106, 0, x_75);
lean_ctor_set(x_106, 1, x_104);
return x_106;
}
}
else
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; uint8_t x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
x_107 = lean_ctor_get(x_86, 0);
x_108 = lean_ctor_get(x_86, 1);
x_109 = lean_ctor_get(x_86, 2);
x_110 = lean_ctor_get(x_86, 3);
x_111 = lean_ctor_get(x_86, 4);
x_112 = lean_ctor_get(x_86, 5);
lean_inc(x_112);
lean_inc(x_111);
lean_inc(x_110);
lean_inc(x_109);
lean_inc(x_108);
lean_inc(x_107);
lean_dec(x_86);
x_113 = lean_ctor_get_uint8(x_87, sizeof(void*)*2);
x_114 = lean_ctor_get(x_87, 0);
lean_inc(x_114);
if (lean_is_exclusive(x_87)) {
 lean_ctor_release(x_87, 0);
 lean_ctor_release(x_87, 1);
 x_115 = x_87;
} else {
 lean_dec_ref(x_87);
 x_115 = lean_box(0);
}
x_116 = l_Lean_PersistentArray_push___rarg(x_20, x_83);
if (lean_is_scalar(x_115)) {
 x_117 = lean_alloc_ctor(0, 2, 1);
} else {
 x_117 = x_115;
}
lean_ctor_set(x_117, 0, x_114);
lean_ctor_set(x_117, 1, x_116);
lean_ctor_set_uint8(x_117, sizeof(void*)*2, x_113);
x_118 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_118, 0, x_107);
lean_ctor_set(x_118, 1, x_108);
lean_ctor_set(x_118, 2, x_109);
lean_ctor_set(x_118, 3, x_110);
lean_ctor_set(x_118, 4, x_111);
lean_ctor_set(x_118, 5, x_112);
lean_ctor_set(x_118, 6, x_117);
x_119 = lean_st_ref_set(x_10, x_118, x_88);
lean_dec(x_10);
x_120 = lean_ctor_get(x_119, 1);
lean_inc(x_120);
if (lean_is_exclusive(x_119)) {
 lean_ctor_release(x_119, 0);
 lean_ctor_release(x_119, 1);
 x_121 = x_119;
} else {
 lean_dec_ref(x_119);
 x_121 = lean_box(0);
}
if (lean_is_scalar(x_121)) {
 x_122 = lean_alloc_ctor(1, 2, 0);
} else {
 x_122 = x_121;
 lean_ctor_set_tag(x_122, 1);
}
lean_ctor_set(x_122, 0, x_75);
lean_ctor_set(x_122, 1, x_120);
return x_122;
}
}
else
{
uint8_t x_123; 
lean_dec(x_75);
lean_dec(x_20);
lean_dec(x_10);
x_123 = !lean_is_exclusive(x_82);
if (x_123 == 0)
{
return x_82;
}
else
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_124 = lean_ctor_get(x_82, 0);
x_125 = lean_ctor_get(x_82, 1);
lean_inc(x_125);
lean_inc(x_124);
lean_dec(x_82);
x_126 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_126, 0, x_124);
lean_ctor_set(x_126, 1, x_125);
return x_126;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at_Lean_Elab_Tactic_withTacticInfoContext___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_withInfoTreeContext___at_Lean_Elab_Tactic_withTacticInfoContext___spec__1___rarg), 11, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_withTacticInfoContext___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_apply_9(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_2);
lean_ctor_set(x_12, 0, x_15);
return x_12;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_12, 0);
x_17 = lean_ctor_get(x_12, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_12);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_2);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
else
{
uint8_t x_20; 
lean_dec(x_2);
x_20 = !lean_is_exclusive(x_12);
if (x_20 == 0)
{
return x_12;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_12, 0);
x_22 = lean_ctor_get(x_12, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_12);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_withTacticInfoContext___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = l_Lean_Elab_Tactic_mkInitialTacticInfo(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_withTacticInfoContext___rarg___lambda__1), 11, 1);
lean_closure_set(x_15, 0, x_13);
x_16 = l_Lean_Elab_withInfoTreeContext___at_Lean_Elab_Tactic_withTacticInfoContext___spec__1___rarg(x_2, x_15, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_14);
return x_16;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_withTacticInfoContext(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_withTacticInfoContext___rarg), 11, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at_Lean_Elab_Tactic_withTacticInfoContext___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_getResetInfoTrees___at_Lean_Elab_Tactic_withTacticInfoContext___spec__2___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at_Lean_Elab_Tactic_withTacticInfoContext___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Elab_getResetInfoTrees___at_Lean_Elab_Tactic_withTacticInfoContext___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Tactic_evalTactic_throwExs___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_8, 5);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_6, x_7, x_8, x_9, x_10);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_11);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_11);
lean_ctor_set(x_15, 1, x_14);
lean_ctor_set_tag(x_12, 1);
lean_ctor_set(x_12, 0, x_15);
return x_12;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_12, 0);
x_17 = lean_ctor_get(x_12, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_12);
lean_inc(x_11);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_16);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Tactic_evalTactic_throwExs___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_9);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_9, 5);
x_14 = l_Lean_replaceRef(x_1, x_13);
lean_dec(x_13);
lean_dec(x_1);
lean_ctor_set(x_9, 5, x_14);
x_15 = l_Lean_throwError___at_Lean_Elab_Tactic_evalTactic_throwExs___spec__2(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_16 = lean_ctor_get(x_9, 0);
x_17 = lean_ctor_get(x_9, 1);
x_18 = lean_ctor_get(x_9, 2);
x_19 = lean_ctor_get(x_9, 3);
x_20 = lean_ctor_get(x_9, 4);
x_21 = lean_ctor_get(x_9, 5);
x_22 = lean_ctor_get(x_9, 6);
x_23 = lean_ctor_get(x_9, 7);
x_24 = lean_ctor_get(x_9, 8);
x_25 = lean_ctor_get(x_9, 9);
x_26 = lean_ctor_get(x_9, 10);
x_27 = lean_ctor_get_uint8(x_9, sizeof(void*)*11);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_9);
x_28 = l_Lean_replaceRef(x_1, x_21);
lean_dec(x_21);
lean_dec(x_1);
x_29 = lean_alloc_ctor(0, 11, 1);
lean_ctor_set(x_29, 0, x_16);
lean_ctor_set(x_29, 1, x_17);
lean_ctor_set(x_29, 2, x_18);
lean_ctor_set(x_29, 3, x_19);
lean_ctor_set(x_29, 4, x_20);
lean_ctor_set(x_29, 5, x_28);
lean_ctor_set(x_29, 6, x_22);
lean_ctor_set(x_29, 7, x_23);
lean_ctor_set(x_29, 8, x_24);
lean_ctor_set(x_29, 9, x_25);
lean_ctor_set(x_29, 10, x_26);
lean_ctor_set_uint8(x_29, sizeof(void*)*11, x_27);
x_30 = l_Lean_throwError___at_Lean_Elab_Tactic_evalTactic_throwExs___spec__2(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_29, x_10, x_11);
lean_dec(x_10);
lean_dec(x_29);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_30;
}
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalTactic_throwExs___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("unexpected syntax ", 18);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalTactic_throwExs___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Tactic_evalTactic_throwExs___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalTactic_throwExs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_array_get_size(x_2);
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_nat_dec_lt(x_13, x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_12);
lean_dec(x_2);
lean_inc(x_1);
x_15 = l_Lean_MessageData_ofSyntax(x_1);
x_16 = l_Lean_indentD(x_15);
x_17 = l_Lean_Elab_Tactic_evalTactic_throwExs___closed__2;
x_18 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
x_19 = l_Lean_Elab_Term_reportUnsolvedGoals___closed__7;
x_20 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
x_21 = l_Lean_throwErrorAt___at_Lean_Elab_Tactic_evalTactic_throwExs___spec__1(x_1, x_20, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; lean_object* x_28; uint8_t x_29; 
lean_dec(x_1);
x_22 = lean_unsigned_to_nat(1u);
x_23 = lean_nat_sub(x_12, x_22);
lean_dec(x_12);
x_24 = lean_array_fget(x_2, x_23);
lean_dec(x_23);
lean_dec(x_2);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = 1;
x_28 = l_Lean_Elab_Tactic_SavedState_restore(x_26, x_27, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_4);
lean_dec(x_3);
x_29 = !lean_is_exclusive(x_28);
if (x_29 == 0)
{
lean_object* x_30; 
x_30 = lean_ctor_get(x_28, 0);
lean_dec(x_30);
lean_ctor_set_tag(x_28, 1);
lean_ctor_set(x_28, 0, x_25);
return x_28;
}
else
{
lean_object* x_31; lean_object* x_32; 
x_31 = lean_ctor_get(x_28, 1);
lean_inc(x_31);
lean_dec(x_28);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_25);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Tactic_evalTactic_throwExs___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_throwError___at_Lean_Elab_Tactic_evalTactic_throwExs___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
static lean_object* _init_l_Lean_isTracingEnabledFor___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_inheritedTraceOptions;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = l_Lean_isTracingEnabledFor___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__1___closed__1;
x_12 = lean_st_ref_get(x_11, x_10);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_8, 2);
x_16 = l___private_Lean_Util_Trace_0__Lean_checkTraceOption(x_14, x_15, x_1);
lean_dec(x_14);
x_17 = lean_box(x_16);
lean_ctor_set(x_12, 0, x_17);
return x_12;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; 
x_18 = lean_ctor_get(x_12, 0);
x_19 = lean_ctor_get(x_12, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_12);
x_20 = lean_ctor_get(x_8, 2);
x_21 = l___private_Lean_Util_Trace_0__Lean_checkTraceOption(x_18, x_20, x_1);
lean_dec(x_18);
x_22 = lean_box(x_21);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_19);
return x_23;
}
}
}
static double _init_l_Lean_addTrace___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__2___closed__1() {
_start:
{
lean_object* x_1; uint8_t x_2; double x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = 0;
x_3 = l_Float_ofScientific(x_1, x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_addTrace___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_12 = lean_ctor_get(x_9, 5);
x_13 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_2, x_7, x_8, x_9, x_10, x_11);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_st_ref_take(x_10, x_15);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; uint8_t x_19; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; double x_22; uint8_t x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_20 = lean_ctor_get(x_16, 1);
x_21 = lean_ctor_get(x_18, 3);
x_22 = l_Lean_addTrace___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__2___closed__1;
x_23 = 0;
x_24 = l_Lean_Elab_Term_reportUnsolvedGoals___closed__6;
x_25 = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(x_25, 0, x_1);
lean_ctor_set(x_25, 1, x_24);
lean_ctor_set_float(x_25, sizeof(void*)*2, x_22);
lean_ctor_set_float(x_25, sizeof(void*)*2 + 8, x_22);
lean_ctor_set_uint8(x_25, sizeof(void*)*2 + 16, x_23);
x_26 = l_Lean_addTrace___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__2___closed__2;
x_27 = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_14);
lean_ctor_set(x_27, 2, x_26);
lean_inc(x_12);
lean_ctor_set(x_16, 1, x_27);
lean_ctor_set(x_16, 0, x_12);
x_28 = l_Lean_PersistentArray_push___rarg(x_21, x_16);
lean_ctor_set(x_18, 3, x_28);
x_29 = lean_st_ref_set(x_10, x_18, x_20);
x_30 = !lean_is_exclusive(x_29);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; 
x_31 = lean_ctor_get(x_29, 0);
lean_dec(x_31);
x_32 = lean_box(0);
lean_ctor_set(x_29, 0, x_32);
return x_29;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_29, 1);
lean_inc(x_33);
lean_dec(x_29);
x_34 = lean_box(0);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_33);
return x_35;
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; double x_44; uint8_t x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_36 = lean_ctor_get(x_16, 1);
x_37 = lean_ctor_get(x_18, 0);
x_38 = lean_ctor_get(x_18, 1);
x_39 = lean_ctor_get(x_18, 2);
x_40 = lean_ctor_get(x_18, 3);
x_41 = lean_ctor_get(x_18, 4);
x_42 = lean_ctor_get(x_18, 5);
x_43 = lean_ctor_get(x_18, 6);
lean_inc(x_43);
lean_inc(x_42);
lean_inc(x_41);
lean_inc(x_40);
lean_inc(x_39);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_18);
x_44 = l_Lean_addTrace___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__2___closed__1;
x_45 = 0;
x_46 = l_Lean_Elab_Term_reportUnsolvedGoals___closed__6;
x_47 = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(x_47, 0, x_1);
lean_ctor_set(x_47, 1, x_46);
lean_ctor_set_float(x_47, sizeof(void*)*2, x_44);
lean_ctor_set_float(x_47, sizeof(void*)*2 + 8, x_44);
lean_ctor_set_uint8(x_47, sizeof(void*)*2 + 16, x_45);
x_48 = l_Lean_addTrace___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__2___closed__2;
x_49 = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_14);
lean_ctor_set(x_49, 2, x_48);
lean_inc(x_12);
lean_ctor_set(x_16, 1, x_49);
lean_ctor_set(x_16, 0, x_12);
x_50 = l_Lean_PersistentArray_push___rarg(x_40, x_16);
x_51 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_51, 0, x_37);
lean_ctor_set(x_51, 1, x_38);
lean_ctor_set(x_51, 2, x_39);
lean_ctor_set(x_51, 3, x_50);
lean_ctor_set(x_51, 4, x_41);
lean_ctor_set(x_51, 5, x_42);
lean_ctor_set(x_51, 6, x_43);
x_52 = lean_st_ref_set(x_10, x_51, x_36);
x_53 = lean_ctor_get(x_52, 1);
lean_inc(x_53);
if (lean_is_exclusive(x_52)) {
 lean_ctor_release(x_52, 0);
 lean_ctor_release(x_52, 1);
 x_54 = x_52;
} else {
 lean_dec_ref(x_52);
 x_54 = lean_box(0);
}
x_55 = lean_box(0);
if (lean_is_scalar(x_54)) {
 x_56 = lean_alloc_ctor(0, 2, 0);
} else {
 x_56 = x_54;
}
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_53);
return x_56;
}
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; double x_67; uint8_t x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_57 = lean_ctor_get(x_16, 0);
x_58 = lean_ctor_get(x_16, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_16);
x_59 = lean_ctor_get(x_57, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_57, 1);
lean_inc(x_60);
x_61 = lean_ctor_get(x_57, 2);
lean_inc(x_61);
x_62 = lean_ctor_get(x_57, 3);
lean_inc(x_62);
x_63 = lean_ctor_get(x_57, 4);
lean_inc(x_63);
x_64 = lean_ctor_get(x_57, 5);
lean_inc(x_64);
x_65 = lean_ctor_get(x_57, 6);
lean_inc(x_65);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 lean_ctor_release(x_57, 1);
 lean_ctor_release(x_57, 2);
 lean_ctor_release(x_57, 3);
 lean_ctor_release(x_57, 4);
 lean_ctor_release(x_57, 5);
 lean_ctor_release(x_57, 6);
 x_66 = x_57;
} else {
 lean_dec_ref(x_57);
 x_66 = lean_box(0);
}
x_67 = l_Lean_addTrace___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__2___closed__1;
x_68 = 0;
x_69 = l_Lean_Elab_Term_reportUnsolvedGoals___closed__6;
x_70 = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(x_70, 0, x_1);
lean_ctor_set(x_70, 1, x_69);
lean_ctor_set_float(x_70, sizeof(void*)*2, x_67);
lean_ctor_set_float(x_70, sizeof(void*)*2 + 8, x_67);
lean_ctor_set_uint8(x_70, sizeof(void*)*2 + 16, x_68);
x_71 = l_Lean_addTrace___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__2___closed__2;
x_72 = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_14);
lean_ctor_set(x_72, 2, x_71);
lean_inc(x_12);
x_73 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_73, 0, x_12);
lean_ctor_set(x_73, 1, x_72);
x_74 = l_Lean_PersistentArray_push___rarg(x_62, x_73);
if (lean_is_scalar(x_66)) {
 x_75 = lean_alloc_ctor(0, 7, 0);
} else {
 x_75 = x_66;
}
lean_ctor_set(x_75, 0, x_59);
lean_ctor_set(x_75, 1, x_60);
lean_ctor_set(x_75, 2, x_61);
lean_ctor_set(x_75, 3, x_74);
lean_ctor_set(x_75, 4, x_63);
lean_ctor_set(x_75, 5, x_64);
lean_ctor_set(x_75, 6, x_65);
x_76 = lean_st_ref_set(x_10, x_75, x_58);
x_77 = lean_ctor_get(x_76, 1);
lean_inc(x_77);
if (lean_is_exclusive(x_76)) {
 lean_ctor_release(x_76, 0);
 lean_ctor_release(x_76, 1);
 x_78 = x_76;
} else {
 lean_dec_ref(x_76);
 x_78 = lean_box(0);
}
x_79 = lean_box(0);
if (lean_is_scalar(x_78)) {
 x_80 = lean_alloc_ctor(0, 2, 0);
} else {
 x_80 = x_78;
}
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_77);
return x_80;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_12 = lean_ctor_get(x_9, 5);
x_13 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_2, x_7, x_8, x_9, x_10, x_11);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_st_ref_take(x_10, x_15);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; uint8_t x_19; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; double x_22; uint8_t x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_20 = lean_ctor_get(x_16, 1);
x_21 = lean_ctor_get(x_18, 3);
x_22 = l_Lean_addTrace___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__2___closed__1;
x_23 = 0;
x_24 = l_Lean_Elab_Term_reportUnsolvedGoals___closed__6;
x_25 = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(x_25, 0, x_1);
lean_ctor_set(x_25, 1, x_24);
lean_ctor_set_float(x_25, sizeof(void*)*2, x_22);
lean_ctor_set_float(x_25, sizeof(void*)*2 + 8, x_22);
lean_ctor_set_uint8(x_25, sizeof(void*)*2 + 16, x_23);
x_26 = l_Lean_addTrace___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__2___closed__2;
x_27 = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_14);
lean_ctor_set(x_27, 2, x_26);
lean_inc(x_12);
lean_ctor_set(x_16, 1, x_27);
lean_ctor_set(x_16, 0, x_12);
x_28 = l_Lean_PersistentArray_push___rarg(x_21, x_16);
lean_ctor_set(x_18, 3, x_28);
x_29 = lean_st_ref_set(x_10, x_18, x_20);
x_30 = !lean_is_exclusive(x_29);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; 
x_31 = lean_ctor_get(x_29, 0);
lean_dec(x_31);
x_32 = lean_box(0);
lean_ctor_set(x_29, 0, x_32);
return x_29;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_29, 1);
lean_inc(x_33);
lean_dec(x_29);
x_34 = lean_box(0);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_33);
return x_35;
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; double x_44; uint8_t x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_36 = lean_ctor_get(x_16, 1);
x_37 = lean_ctor_get(x_18, 0);
x_38 = lean_ctor_get(x_18, 1);
x_39 = lean_ctor_get(x_18, 2);
x_40 = lean_ctor_get(x_18, 3);
x_41 = lean_ctor_get(x_18, 4);
x_42 = lean_ctor_get(x_18, 5);
x_43 = lean_ctor_get(x_18, 6);
lean_inc(x_43);
lean_inc(x_42);
lean_inc(x_41);
lean_inc(x_40);
lean_inc(x_39);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_18);
x_44 = l_Lean_addTrace___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__2___closed__1;
x_45 = 0;
x_46 = l_Lean_Elab_Term_reportUnsolvedGoals___closed__6;
x_47 = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(x_47, 0, x_1);
lean_ctor_set(x_47, 1, x_46);
lean_ctor_set_float(x_47, sizeof(void*)*2, x_44);
lean_ctor_set_float(x_47, sizeof(void*)*2 + 8, x_44);
lean_ctor_set_uint8(x_47, sizeof(void*)*2 + 16, x_45);
x_48 = l_Lean_addTrace___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__2___closed__2;
x_49 = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_14);
lean_ctor_set(x_49, 2, x_48);
lean_inc(x_12);
lean_ctor_set(x_16, 1, x_49);
lean_ctor_set(x_16, 0, x_12);
x_50 = l_Lean_PersistentArray_push___rarg(x_40, x_16);
x_51 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_51, 0, x_37);
lean_ctor_set(x_51, 1, x_38);
lean_ctor_set(x_51, 2, x_39);
lean_ctor_set(x_51, 3, x_50);
lean_ctor_set(x_51, 4, x_41);
lean_ctor_set(x_51, 5, x_42);
lean_ctor_set(x_51, 6, x_43);
x_52 = lean_st_ref_set(x_10, x_51, x_36);
x_53 = lean_ctor_get(x_52, 1);
lean_inc(x_53);
if (lean_is_exclusive(x_52)) {
 lean_ctor_release(x_52, 0);
 lean_ctor_release(x_52, 1);
 x_54 = x_52;
} else {
 lean_dec_ref(x_52);
 x_54 = lean_box(0);
}
x_55 = lean_box(0);
if (lean_is_scalar(x_54)) {
 x_56 = lean_alloc_ctor(0, 2, 0);
} else {
 x_56 = x_54;
}
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_53);
return x_56;
}
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; double x_67; uint8_t x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_57 = lean_ctor_get(x_16, 0);
x_58 = lean_ctor_get(x_16, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_16);
x_59 = lean_ctor_get(x_57, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_57, 1);
lean_inc(x_60);
x_61 = lean_ctor_get(x_57, 2);
lean_inc(x_61);
x_62 = lean_ctor_get(x_57, 3);
lean_inc(x_62);
x_63 = lean_ctor_get(x_57, 4);
lean_inc(x_63);
x_64 = lean_ctor_get(x_57, 5);
lean_inc(x_64);
x_65 = lean_ctor_get(x_57, 6);
lean_inc(x_65);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 lean_ctor_release(x_57, 1);
 lean_ctor_release(x_57, 2);
 lean_ctor_release(x_57, 3);
 lean_ctor_release(x_57, 4);
 lean_ctor_release(x_57, 5);
 lean_ctor_release(x_57, 6);
 x_66 = x_57;
} else {
 lean_dec_ref(x_57);
 x_66 = lean_box(0);
}
x_67 = l_Lean_addTrace___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__2___closed__1;
x_68 = 0;
x_69 = l_Lean_Elab_Term_reportUnsolvedGoals___closed__6;
x_70 = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(x_70, 0, x_1);
lean_ctor_set(x_70, 1, x_69);
lean_ctor_set_float(x_70, sizeof(void*)*2, x_67);
lean_ctor_set_float(x_70, sizeof(void*)*2 + 8, x_67);
lean_ctor_set_uint8(x_70, sizeof(void*)*2 + 16, x_68);
x_71 = l_Lean_addTrace___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__2___closed__2;
x_72 = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_14);
lean_ctor_set(x_72, 2, x_71);
lean_inc(x_12);
x_73 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_73, 0, x_12);
lean_ctor_set(x_73, 1, x_72);
x_74 = l_Lean_PersistentArray_push___rarg(x_62, x_73);
if (lean_is_scalar(x_66)) {
 x_75 = lean_alloc_ctor(0, 7, 0);
} else {
 x_75 = x_66;
}
lean_ctor_set(x_75, 0, x_59);
lean_ctor_set(x_75, 1, x_60);
lean_ctor_set(x_75, 2, x_61);
lean_ctor_set(x_75, 3, x_74);
lean_ctor_set(x_75, 4, x_63);
lean_ctor_set(x_75, 5, x_64);
lean_ctor_set(x_75, 6, x_65);
x_76 = lean_st_ref_set(x_10, x_75, x_58);
x_77 = lean_ctor_get(x_76, 1);
lean_inc(x_77);
if (lean_is_exclusive(x_76)) {
 lean_ctor_release(x_76, 0);
 lean_ctor_release(x_76, 1);
 x_78 = x_76;
} else {
 lean_dec_ref(x_76);
 x_78 = lean_box(0);
}
x_79 = lean_box(0);
if (lean_is_scalar(x_78)) {
 x_80 = lean_alloc_ctor(0, 2, 0);
} else {
 x_80 = x_78;
}
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_77);
return x_80;
}
}
}
static lean_object* _init_l_List_forIn_loop___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__4___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("backtrack", 9);
return x_1;
}
}
static lean_object* _init_l_List_forIn_loop___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__4___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_Tactic_mkTacticAttribute___closed__8;
x_2 = l_Lean_Elab_Tactic_mkTacticAttribute___closed__3;
x_3 = l_List_forIn_loop___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__4___closed__1;
x_4 = l_Lean_Name_mkStr3(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_12; 
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_2);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
lean_dec(x_2);
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_1, 1);
lean_inc(x_14);
lean_dec(x_1);
x_15 = l_List_forIn_loop___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__4___closed__2;
x_16 = l_Lean_isTracingEnabledFor___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__1(x_15, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_unbox(x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_13);
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_dec(x_16);
x_20 = lean_box(0);
x_1 = x_14;
x_2 = x_20;
x_11 = x_19;
goto _start;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_22 = lean_ctor_get(x_16, 1);
lean_inc(x_22);
lean_dec(x_16);
x_23 = lean_ctor_get(x_13, 4);
lean_inc(x_23);
lean_dec(x_13);
x_24 = l_Lean_addTrace___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__3(x_15, x_23, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_22);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
x_26 = lean_box(0);
x_1 = x_14;
x_2 = x_26;
x_11 = x_25;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalTactic_handleEx___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; uint8_t x_16; 
x_15 = l_Lean_Elab_Tactic_saveState___rarg(x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_ctor_get(x_15, 1);
lean_ctor_set(x_15, 1, x_17);
lean_ctor_set(x_15, 0, x_1);
x_19 = lean_array_push(x_2, x_15);
x_20 = 1;
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_21 = l_Lean_Elab_Tactic_SavedState_restore(x_3, x_20, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_18);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_23 = lean_apply_10(x_4, x_19, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_22);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_24 = lean_ctor_get(x_15, 0);
x_25 = lean_ctor_get(x_15, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_15);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_1);
lean_ctor_set(x_26, 1, x_24);
x_27 = lean_array_push(x_2, x_26);
x_28 = 1;
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_29 = l_Lean_Elab_Tactic_SavedState_restore(x_3, x_28, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_25);
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
lean_dec(x_29);
x_31 = lean_apply_10(x_4, x_27, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_30);
return x_31;
}
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalTactic_handleEx___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_unsupportedSyntaxExceptionId;
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalTactic_handleEx___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_abortTacticExceptionId;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalTactic_handleEx(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = l_List_forIn_loop___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__4___closed__2;
x_15 = l_Lean_isTracingEnabledFor___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__1(x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_unbox(x_16);
lean_dec(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
lean_dec(x_15);
x_19 = lean_box(0);
x_20 = l_Lean_Elab_Tactic_evalTactic_handleEx___lambda__1(x_3, x_2, x_1, x_4, x_19, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_18);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_21 = lean_ctor_get(x_15, 1);
lean_inc(x_21);
lean_dec(x_15);
lean_inc(x_3);
x_22 = l_Lean_Exception_toMessageData(x_3);
x_23 = l_Lean_addTrace___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__2(x_14, x_22, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_21);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = l_Lean_Elab_Tactic_evalTactic_handleEx___lambda__1(x_3, x_2, x_1, x_4, x_24, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_25);
lean_dec(x_24);
return x_26;
}
}
else
{
lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_27 = lean_ctor_get(x_3, 0);
lean_inc(x_27);
x_28 = l_Lean_Elab_Tactic_evalTactic_handleEx___closed__1;
x_29 = lean_nat_dec_eq(x_27, x_28);
if (x_29 == 0)
{
lean_object* x_30; uint8_t x_31; 
x_30 = l_Lean_Elab_Tactic_evalTactic_handleEx___closed__2;
x_31 = lean_nat_dec_eq(x_27, x_30);
lean_dec(x_27);
if (x_31 == 0)
{
lean_object* x_32; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_3);
lean_ctor_set(x_32, 1, x_13);
return x_32;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_33 = l_Lean_Core_getMessageLog___rarg(x_12, x_13);
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_36 = l_Lean_PersistentArray_toList___rarg(x_34);
x_37 = lean_box(0);
x_38 = l_List_forIn_loop___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__4(x_36, x_37, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_35);
x_39 = lean_ctor_get(x_38, 1);
lean_inc(x_39);
lean_dec(x_38);
x_40 = l_Lean_Elab_Tactic_saveState___rarg(x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_39);
x_41 = !lean_is_exclusive(x_40);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_42 = lean_ctor_get(x_40, 0);
x_43 = lean_ctor_get(x_40, 1);
lean_ctor_set(x_40, 1, x_42);
lean_ctor_set(x_40, 0, x_3);
x_44 = lean_array_push(x_2, x_40);
x_45 = 1;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_46 = l_Lean_Elab_Tactic_SavedState_restore(x_1, x_45, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_43);
x_47 = lean_ctor_get(x_46, 1);
lean_inc(x_47);
lean_dec(x_46);
x_48 = lean_apply_10(x_4, x_44, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_47);
return x_48;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; uint8_t x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_49 = lean_ctor_get(x_40, 0);
x_50 = lean_ctor_get(x_40, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_40);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_3);
lean_ctor_set(x_51, 1, x_49);
x_52 = lean_array_push(x_2, x_51);
x_53 = 1;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_54 = l_Lean_Elab_Tactic_SavedState_restore(x_1, x_53, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_50);
x_55 = lean_ctor_get(x_54, 1);
lean_inc(x_55);
lean_dec(x_54);
x_56 = lean_apply_10(x_4, x_52, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_55);
return x_56;
}
}
}
else
{
uint8_t x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
lean_dec(x_27);
lean_dec(x_3);
x_57 = 1;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_58 = l_Lean_Elab_Tactic_SavedState_restore(x_1, x_57, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
x_59 = lean_ctor_get(x_58, 1);
lean_inc(x_59);
lean_dec(x_58);
x_60 = lean_apply_10(x_4, x_2, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_59);
return x_60;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_isTracingEnabledFor___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_addTrace___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_addTrace___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_12;
}
}
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_List_forIn_loop___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalTactic_handleEx___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_Lean_Elab_Tactic_evalTactic_handleEx___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_5);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at_Lean_Elab_Tactic_evalTactic_eval___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_12 = lean_st_ref_get(x_10, x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_13, 6);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_ctor_get_uint8(x_14, sizeof(void*)*2);
lean_dec(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_2);
x_16 = lean_ctor_get(x_12, 1);
lean_inc(x_16);
lean_dec(x_12);
x_17 = lean_apply_9(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_16);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_18 = lean_ctor_get(x_12, 1);
lean_inc(x_18);
lean_dec(x_12);
x_19 = l_Lean_Elab_getResetInfoTrees___at_Lean_Elab_Tactic_withTacticInfoContext___spec__2___rarg(x_10, x_18);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_22 = lean_apply_9(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_21);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_st_ref_get(x_10, x_24);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_ctor_get(x_26, 6);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
lean_dec(x_28);
lean_inc(x_10);
x_30 = lean_apply_10(x_2, x_29, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_27);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_st_ref_take(x_10, x_32);
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_34, 6);
lean_inc(x_35);
x_36 = lean_ctor_get(x_33, 1);
lean_inc(x_36);
lean_dec(x_33);
x_37 = !lean_is_exclusive(x_34);
if (x_37 == 0)
{
lean_object* x_38; uint8_t x_39; 
x_38 = lean_ctor_get(x_34, 6);
lean_dec(x_38);
x_39 = !lean_is_exclusive(x_35);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; uint8_t x_43; 
x_40 = lean_ctor_get(x_35, 1);
lean_dec(x_40);
x_41 = l_Lean_PersistentArray_push___rarg(x_20, x_31);
lean_ctor_set(x_35, 1, x_41);
x_42 = lean_st_ref_set(x_10, x_34, x_36);
lean_dec(x_10);
x_43 = !lean_is_exclusive(x_42);
if (x_43 == 0)
{
lean_object* x_44; 
x_44 = lean_ctor_get(x_42, 0);
lean_dec(x_44);
lean_ctor_set(x_42, 0, x_23);
return x_42;
}
else
{
lean_object* x_45; lean_object* x_46; 
x_45 = lean_ctor_get(x_42, 1);
lean_inc(x_45);
lean_dec(x_42);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_23);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
else
{
uint8_t x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_47 = lean_ctor_get_uint8(x_35, sizeof(void*)*2);
x_48 = lean_ctor_get(x_35, 0);
lean_inc(x_48);
lean_dec(x_35);
x_49 = l_Lean_PersistentArray_push___rarg(x_20, x_31);
x_50 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
lean_ctor_set_uint8(x_50, sizeof(void*)*2, x_47);
lean_ctor_set(x_34, 6, x_50);
x_51 = lean_st_ref_set(x_10, x_34, x_36);
lean_dec(x_10);
x_52 = lean_ctor_get(x_51, 1);
lean_inc(x_52);
if (lean_is_exclusive(x_51)) {
 lean_ctor_release(x_51, 0);
 lean_ctor_release(x_51, 1);
 x_53 = x_51;
} else {
 lean_dec_ref(x_51);
 x_53 = lean_box(0);
}
if (lean_is_scalar(x_53)) {
 x_54 = lean_alloc_ctor(0, 2, 0);
} else {
 x_54 = x_53;
}
lean_ctor_set(x_54, 0, x_23);
lean_ctor_set(x_54, 1, x_52);
return x_54;
}
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; uint8_t x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_55 = lean_ctor_get(x_34, 0);
x_56 = lean_ctor_get(x_34, 1);
x_57 = lean_ctor_get(x_34, 2);
x_58 = lean_ctor_get(x_34, 3);
x_59 = lean_ctor_get(x_34, 4);
x_60 = lean_ctor_get(x_34, 5);
lean_inc(x_60);
lean_inc(x_59);
lean_inc(x_58);
lean_inc(x_57);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_34);
x_61 = lean_ctor_get_uint8(x_35, sizeof(void*)*2);
x_62 = lean_ctor_get(x_35, 0);
lean_inc(x_62);
if (lean_is_exclusive(x_35)) {
 lean_ctor_release(x_35, 0);
 lean_ctor_release(x_35, 1);
 x_63 = x_35;
} else {
 lean_dec_ref(x_35);
 x_63 = lean_box(0);
}
x_64 = l_Lean_PersistentArray_push___rarg(x_20, x_31);
if (lean_is_scalar(x_63)) {
 x_65 = lean_alloc_ctor(0, 2, 1);
} else {
 x_65 = x_63;
}
lean_ctor_set(x_65, 0, x_62);
lean_ctor_set(x_65, 1, x_64);
lean_ctor_set_uint8(x_65, sizeof(void*)*2, x_61);
x_66 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_66, 0, x_55);
lean_ctor_set(x_66, 1, x_56);
lean_ctor_set(x_66, 2, x_57);
lean_ctor_set(x_66, 3, x_58);
lean_ctor_set(x_66, 4, x_59);
lean_ctor_set(x_66, 5, x_60);
lean_ctor_set(x_66, 6, x_65);
x_67 = lean_st_ref_set(x_10, x_66, x_36);
lean_dec(x_10);
x_68 = lean_ctor_get(x_67, 1);
lean_inc(x_68);
if (lean_is_exclusive(x_67)) {
 lean_ctor_release(x_67, 0);
 lean_ctor_release(x_67, 1);
 x_69 = x_67;
} else {
 lean_dec_ref(x_67);
 x_69 = lean_box(0);
}
if (lean_is_scalar(x_69)) {
 x_70 = lean_alloc_ctor(0, 2, 0);
} else {
 x_70 = x_69;
}
lean_ctor_set(x_70, 0, x_23);
lean_ctor_set(x_70, 1, x_68);
return x_70;
}
}
else
{
uint8_t x_71; 
lean_dec(x_23);
lean_dec(x_20);
lean_dec(x_10);
x_71 = !lean_is_exclusive(x_30);
if (x_71 == 0)
{
return x_30;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_72 = lean_ctor_get(x_30, 0);
x_73 = lean_ctor_get(x_30, 1);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_30);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_73);
return x_74;
}
}
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_75 = lean_ctor_get(x_22, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_22, 1);
lean_inc(x_76);
lean_dec(x_22);
x_77 = lean_st_ref_get(x_10, x_76);
x_78 = lean_ctor_get(x_77, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_77, 1);
lean_inc(x_79);
lean_dec(x_77);
x_80 = lean_ctor_get(x_78, 6);
lean_inc(x_80);
lean_dec(x_78);
x_81 = lean_ctor_get(x_80, 1);
lean_inc(x_81);
lean_dec(x_80);
lean_inc(x_10);
x_82 = lean_apply_10(x_2, x_81, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_79);
if (lean_obj_tag(x_82) == 0)
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; uint8_t x_89; 
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_82, 1);
lean_inc(x_84);
lean_dec(x_82);
x_85 = lean_st_ref_take(x_10, x_84);
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_86, 6);
lean_inc(x_87);
x_88 = lean_ctor_get(x_85, 1);
lean_inc(x_88);
lean_dec(x_85);
x_89 = !lean_is_exclusive(x_86);
if (x_89 == 0)
{
lean_object* x_90; uint8_t x_91; 
x_90 = lean_ctor_get(x_86, 6);
lean_dec(x_90);
x_91 = !lean_is_exclusive(x_87);
if (x_91 == 0)
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; uint8_t x_95; 
x_92 = lean_ctor_get(x_87, 1);
lean_dec(x_92);
x_93 = l_Lean_PersistentArray_push___rarg(x_20, x_83);
lean_ctor_set(x_87, 1, x_93);
x_94 = lean_st_ref_set(x_10, x_86, x_88);
lean_dec(x_10);
x_95 = !lean_is_exclusive(x_94);
if (x_95 == 0)
{
lean_object* x_96; 
x_96 = lean_ctor_get(x_94, 0);
lean_dec(x_96);
lean_ctor_set_tag(x_94, 1);
lean_ctor_set(x_94, 0, x_75);
return x_94;
}
else
{
lean_object* x_97; lean_object* x_98; 
x_97 = lean_ctor_get(x_94, 1);
lean_inc(x_97);
lean_dec(x_94);
x_98 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_98, 0, x_75);
lean_ctor_set(x_98, 1, x_97);
return x_98;
}
}
else
{
uint8_t x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; 
x_99 = lean_ctor_get_uint8(x_87, sizeof(void*)*2);
x_100 = lean_ctor_get(x_87, 0);
lean_inc(x_100);
lean_dec(x_87);
x_101 = l_Lean_PersistentArray_push___rarg(x_20, x_83);
x_102 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_102, 0, x_100);
lean_ctor_set(x_102, 1, x_101);
lean_ctor_set_uint8(x_102, sizeof(void*)*2, x_99);
lean_ctor_set(x_86, 6, x_102);
x_103 = lean_st_ref_set(x_10, x_86, x_88);
lean_dec(x_10);
x_104 = lean_ctor_get(x_103, 1);
lean_inc(x_104);
if (lean_is_exclusive(x_103)) {
 lean_ctor_release(x_103, 0);
 lean_ctor_release(x_103, 1);
 x_105 = x_103;
} else {
 lean_dec_ref(x_103);
 x_105 = lean_box(0);
}
if (lean_is_scalar(x_105)) {
 x_106 = lean_alloc_ctor(1, 2, 0);
} else {
 x_106 = x_105;
 lean_ctor_set_tag(x_106, 1);
}
lean_ctor_set(x_106, 0, x_75);
lean_ctor_set(x_106, 1, x_104);
return x_106;
}
}
else
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; uint8_t x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
x_107 = lean_ctor_get(x_86, 0);
x_108 = lean_ctor_get(x_86, 1);
x_109 = lean_ctor_get(x_86, 2);
x_110 = lean_ctor_get(x_86, 3);
x_111 = lean_ctor_get(x_86, 4);
x_112 = lean_ctor_get(x_86, 5);
lean_inc(x_112);
lean_inc(x_111);
lean_inc(x_110);
lean_inc(x_109);
lean_inc(x_108);
lean_inc(x_107);
lean_dec(x_86);
x_113 = lean_ctor_get_uint8(x_87, sizeof(void*)*2);
x_114 = lean_ctor_get(x_87, 0);
lean_inc(x_114);
if (lean_is_exclusive(x_87)) {
 lean_ctor_release(x_87, 0);
 lean_ctor_release(x_87, 1);
 x_115 = x_87;
} else {
 lean_dec_ref(x_87);
 x_115 = lean_box(0);
}
x_116 = l_Lean_PersistentArray_push___rarg(x_20, x_83);
if (lean_is_scalar(x_115)) {
 x_117 = lean_alloc_ctor(0, 2, 1);
} else {
 x_117 = x_115;
}
lean_ctor_set(x_117, 0, x_114);
lean_ctor_set(x_117, 1, x_116);
lean_ctor_set_uint8(x_117, sizeof(void*)*2, x_113);
x_118 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_118, 0, x_107);
lean_ctor_set(x_118, 1, x_108);
lean_ctor_set(x_118, 2, x_109);
lean_ctor_set(x_118, 3, x_110);
lean_ctor_set(x_118, 4, x_111);
lean_ctor_set(x_118, 5, x_112);
lean_ctor_set(x_118, 6, x_117);
x_119 = lean_st_ref_set(x_10, x_118, x_88);
lean_dec(x_10);
x_120 = lean_ctor_get(x_119, 1);
lean_inc(x_120);
if (lean_is_exclusive(x_119)) {
 lean_ctor_release(x_119, 0);
 lean_ctor_release(x_119, 1);
 x_121 = x_119;
} else {
 lean_dec_ref(x_119);
 x_121 = lean_box(0);
}
if (lean_is_scalar(x_121)) {
 x_122 = lean_alloc_ctor(1, 2, 0);
} else {
 x_122 = x_121;
 lean_ctor_set_tag(x_122, 1);
}
lean_ctor_set(x_122, 0, x_75);
lean_ctor_set(x_122, 1, x_120);
return x_122;
}
}
else
{
uint8_t x_123; 
lean_dec(x_75);
lean_dec(x_20);
lean_dec(x_10);
x_123 = !lean_is_exclusive(x_82);
if (x_123 == 0)
{
return x_82;
}
else
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_124 = lean_ctor_get(x_82, 0);
x_125 = lean_ctor_get(x_82, 1);
lean_inc(x_125);
lean_inc(x_124);
lean_dec(x_82);
x_126 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_126, 0, x_124);
lean_ctor_set(x_126, 1, x_125);
return x_126;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalTactic_eval___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; uint8_t x_17; 
lean_dec(x_6);
x_16 = l_Lean_Elab_Tactic_saveState___rarg(x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_ctor_get(x_16, 1);
lean_ctor_set(x_16, 1, x_18);
lean_ctor_set(x_16, 0, x_1);
x_20 = lean_array_push(x_2, x_16);
x_21 = 1;
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_3);
x_22 = l_Lean_Elab_Tactic_SavedState_restore(x_3, x_21, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_19);
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_dec(x_22);
x_24 = l_Lean_Elab_Tactic_evalTactic_eval(x_4, x_3, x_5, x_20, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_23);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_25 = lean_ctor_get(x_16, 0);
x_26 = lean_ctor_get(x_16, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_16);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_1);
lean_ctor_set(x_27, 1, x_25);
x_28 = lean_array_push(x_2, x_27);
x_29 = 1;
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_3);
x_30 = l_Lean_Elab_Tactic_SavedState_restore(x_3, x_29, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_26);
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
lean_dec(x_30);
x_32 = l_Lean_Elab_Tactic_evalTactic_eval(x_4, x_3, x_5, x_28, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_31);
return x_32;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalTactic_eval(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_14; 
lean_dec(x_2);
x_14 = l_Lean_Elab_Tactic_evalTactic_throwExs(x_1, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_72; lean_object* x_73; uint8_t x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_15 = lean_ctor_get(x_3, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_3, 1);
lean_inc(x_16);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_17 = x_3;
} else {
 lean_dec_ref(x_3);
 x_17 = lean_box(0);
}
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
lean_inc(x_1);
x_19 = lean_apply_1(x_18, x_1);
x_72 = lean_ctor_get(x_15, 0);
lean_inc(x_72);
lean_dec(x_15);
x_73 = lean_ctor_get(x_72, 1);
lean_inc(x_73);
lean_dec(x_72);
x_74 = lean_ctor_get_uint8(x_5, sizeof(void*)*1);
x_75 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_75, 0, x_73);
lean_ctor_set_uint8(x_75, sizeof(void*)*1, x_74);
lean_inc(x_1);
x_76 = l_Lean_Elab_Tactic_mkInitialTacticInfo(x_1, x_75, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
x_77 = lean_ctor_get(x_76, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_76, 1);
lean_inc(x_78);
lean_dec(x_76);
x_79 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_withTacticInfoContext___rarg___lambda__1), 11, 1);
lean_closure_set(x_79, 0, x_77);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_80 = l_Lean_Elab_withInfoTreeContext___at_Lean_Elab_Tactic_evalTactic_eval___spec__1(x_19, x_79, x_75, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_78);
if (lean_obj_tag(x_80) == 0)
{
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_80;
}
else
{
lean_object* x_81; lean_object* x_82; 
x_81 = lean_ctor_get(x_80, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_80, 1);
lean_inc(x_82);
lean_dec(x_80);
x_20 = x_81;
x_21 = x_82;
goto block_71;
}
block_71:
{
uint8_t x_22; 
x_22 = l_Lean_Exception_isRuntime(x_20);
if (x_22 == 0)
{
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
lean_dec(x_17);
x_23 = l_List_forIn_loop___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__4___closed__2;
x_24 = l_Lean_isTracingEnabledFor___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__1(x_23, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_21);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_unbox(x_25);
lean_dec(x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
lean_dec(x_24);
x_28 = lean_box(0);
x_29 = l_Lean_Elab_Tactic_evalTactic_eval___lambda__1(x_20, x_4, x_2, x_1, x_16, x_28, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_27);
return x_29;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_30 = lean_ctor_get(x_24, 1);
lean_inc(x_30);
lean_dec(x_24);
lean_inc(x_20);
x_31 = l_Lean_Exception_toMessageData(x_20);
x_32 = l_Lean_addTrace___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__2(x_23, x_31, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_30);
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_35 = l_Lean_Elab_Tactic_evalTactic_eval___lambda__1(x_20, x_4, x_2, x_1, x_16, x_33, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_34);
return x_35;
}
}
else
{
lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_36 = lean_ctor_get(x_20, 0);
lean_inc(x_36);
x_37 = l_Lean_Elab_Tactic_evalTactic_handleEx___closed__1;
x_38 = lean_nat_dec_eq(x_36, x_37);
if (x_38 == 0)
{
lean_object* x_39; uint8_t x_40; 
x_39 = l_Lean_Elab_Tactic_evalTactic_handleEx___closed__2;
x_40 = lean_nat_dec_eq(x_36, x_39);
lean_dec(x_36);
if (x_40 == 0)
{
lean_object* x_41; 
lean_dec(x_16);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
if (lean_is_scalar(x_17)) {
 x_41 = lean_alloc_ctor(1, 2, 0);
} else {
 x_41 = x_17;
}
lean_ctor_set(x_41, 0, x_20);
lean_ctor_set(x_41, 1, x_21);
return x_41;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; uint8_t x_50; 
lean_dec(x_17);
x_42 = l_Lean_Core_getMessageLog___rarg(x_12, x_21);
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_45 = l_Lean_PersistentArray_toList___rarg(x_43);
x_46 = lean_box(0);
x_47 = l_List_forIn_loop___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__4(x_45, x_46, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_44);
x_48 = lean_ctor_get(x_47, 1);
lean_inc(x_48);
lean_dec(x_47);
x_49 = l_Lean_Elab_Tactic_saveState___rarg(x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_48);
x_50 = !lean_is_exclusive(x_49);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; uint8_t x_54; lean_object* x_55; lean_object* x_56; 
x_51 = lean_ctor_get(x_49, 0);
x_52 = lean_ctor_get(x_49, 1);
lean_ctor_set(x_49, 1, x_51);
lean_ctor_set(x_49, 0, x_20);
x_53 = lean_array_push(x_4, x_49);
x_54 = 1;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_2);
x_55 = l_Lean_Elab_Tactic_SavedState_restore(x_2, x_54, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_52);
x_56 = lean_ctor_get(x_55, 1);
lean_inc(x_56);
lean_dec(x_55);
x_3 = x_16;
x_4 = x_53;
x_13 = x_56;
goto _start;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; uint8_t x_62; lean_object* x_63; lean_object* x_64; 
x_58 = lean_ctor_get(x_49, 0);
x_59 = lean_ctor_get(x_49, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_49);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_20);
lean_ctor_set(x_60, 1, x_58);
x_61 = lean_array_push(x_4, x_60);
x_62 = 1;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_2);
x_63 = l_Lean_Elab_Tactic_SavedState_restore(x_2, x_62, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_59);
x_64 = lean_ctor_get(x_63, 1);
lean_inc(x_64);
lean_dec(x_63);
x_3 = x_16;
x_4 = x_61;
x_13 = x_64;
goto _start;
}
}
}
else
{
uint8_t x_66; lean_object* x_67; lean_object* x_68; 
lean_dec(x_36);
lean_dec(x_20);
lean_dec(x_17);
x_66 = 1;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_2);
x_67 = l_Lean_Elab_Tactic_SavedState_restore(x_2, x_66, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_21);
x_68 = lean_ctor_get(x_67, 1);
lean_inc(x_68);
lean_dec(x_67);
x_3 = x_16;
x_13 = x_68;
goto _start;
}
}
}
else
{
lean_object* x_70; 
lean_dec(x_16);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
if (lean_is_scalar(x_17)) {
 x_70 = lean_alloc_ctor(1, 2, 0);
} else {
 x_70 = x_17;
}
lean_ctor_set(x_70, 0, x_20);
lean_ctor_set(x_70, 1, x_21);
return x_70;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_1, 1);
lean_inc(x_14);
lean_dec(x_1);
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_dec(x_13);
lean_inc(x_15);
x_17 = l_Lean_isTracingEnabledFor___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__1(x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_unbox(x_18);
lean_dec(x_18);
if (x_19 == 0)
{
lean_object* x_20; 
lean_dec(x_16);
lean_dec(x_15);
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_dec(x_17);
x_1 = x_14;
x_10 = x_20;
goto _start;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_22 = lean_ctor_get(x_17, 1);
lean_inc(x_22);
lean_dec(x_17);
x_23 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_23, 0, x_16);
x_24 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_24, 0, x_23);
x_25 = l_Lean_addTrace___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__2(x_15, x_24, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_22);
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
lean_dec(x_25);
x_1 = x_14;
x_10 = x_26;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_8, 5);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_6, x_7, x_8, x_9, x_10);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_11);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_11);
lean_ctor_set(x_15, 1, x_14);
lean_ctor_set_tag(x_12, 1);
lean_ctor_set(x_12, 0, x_15);
return x_12;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_12, 0);
x_17 = lean_ctor_get(x_12, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_12);
lean_inc(x_11);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_16);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_9);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_9, 5);
x_14 = l_Lean_replaceRef(x_1, x_13);
lean_dec(x_13);
lean_dec(x_1);
lean_ctor_set(x_9, 5, x_14);
x_15 = l_Lean_throwError___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__4(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_16 = lean_ctor_get(x_9, 0);
x_17 = lean_ctor_get(x_9, 1);
x_18 = lean_ctor_get(x_9, 2);
x_19 = lean_ctor_get(x_9, 3);
x_20 = lean_ctor_get(x_9, 4);
x_21 = lean_ctor_get(x_9, 5);
x_22 = lean_ctor_get(x_9, 6);
x_23 = lean_ctor_get(x_9, 7);
x_24 = lean_ctor_get(x_9, 8);
x_25 = lean_ctor_get(x_9, 9);
x_26 = lean_ctor_get(x_9, 10);
x_27 = lean_ctor_get_uint8(x_9, sizeof(void*)*11);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_9);
x_28 = l_Lean_replaceRef(x_1, x_21);
lean_dec(x_21);
lean_dec(x_1);
x_29 = lean_alloc_ctor(0, 11, 1);
lean_ctor_set(x_29, 0, x_16);
lean_ctor_set(x_29, 1, x_17);
lean_ctor_set(x_29, 2, x_18);
lean_ctor_set(x_29, 3, x_19);
lean_ctor_set(x_29, 4, x_20);
lean_ctor_set(x_29, 5, x_28);
lean_ctor_set(x_29, 6, x_22);
lean_ctor_set(x_29, 7, x_23);
lean_ctor_set(x_29, 8, x_24);
lean_ctor_set(x_29, 9, x_25);
lean_ctor_set(x_29, 10, x_26);
lean_ctor_set_uint8(x_29, sizeof(void*)*11, x_27);
x_30 = l_Lean_throwError___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__4(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_29, x_10, x_11);
lean_dec(x_10);
lean_dec(x_29);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_30;
}
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__5___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_maxRecDepthErrorMessage;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__5___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__5___closed__1;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__5___closed__2;
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_1);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_10);
return x_13;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__6___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Tactic_evalTactic_handleEx___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__6___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__6___rarg___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__6___rarg), 1, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_Lean_Elab_expandMacroImpl_x3f(x_1, x_2, x_3, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 0)
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_5);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_5, 0);
lean_dec(x_8);
x_9 = lean_box(0);
lean_ctor_set(x_5, 0, x_9);
return x_5;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_5, 1);
lean_inc(x_10);
lean_dec(x_5);
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
}
else
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_6);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_6, 0);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; uint8_t x_17; 
lean_free_object(x_6);
x_16 = lean_ctor_get(x_5, 1);
lean_inc(x_16);
lean_dec(x_5);
x_17 = !lean_is_exclusive(x_15);
if (x_17 == 0)
{
lean_object* x_18; 
x_18 = l_liftExcept___at_Lean_Elab_liftMacroM___spec__1(x_15, x_3, x_16);
lean_dec(x_15);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_15, 0);
lean_inc(x_19);
lean_dec(x_15);
x_20 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_20, 0, x_19);
x_21 = l_liftExcept___at_Lean_Elab_liftMacroM___spec__1(x_20, x_3, x_16);
lean_dec(x_20);
return x_21;
}
}
else
{
lean_object* x_22; uint8_t x_23; 
x_22 = lean_ctor_get(x_5, 1);
lean_inc(x_22);
lean_dec(x_5);
x_23 = !lean_is_exclusive(x_15);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_15, 0);
lean_ctor_set(x_6, 0, x_24);
lean_ctor_set(x_15, 0, x_6);
x_25 = l_liftExcept___at_Lean_Elab_liftMacroM___spec__1(x_15, x_3, x_22);
lean_dec(x_15);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_15, 0);
lean_inc(x_26);
lean_dec(x_15);
lean_ctor_set(x_6, 0, x_26);
x_27 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_27, 0, x_6);
x_28 = l_liftExcept___at_Lean_Elab_liftMacroM___spec__1(x_27, x_3, x_22);
lean_dec(x_27);
return x_28;
}
}
}
else
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_6, 0);
lean_inc(x_29);
lean_dec(x_6);
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
lean_dec(x_29);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_31 = lean_ctor_get(x_5, 1);
lean_inc(x_31);
lean_dec(x_5);
x_32 = lean_ctor_get(x_30, 0);
lean_inc(x_32);
if (lean_is_exclusive(x_30)) {
 lean_ctor_release(x_30, 0);
 x_33 = x_30;
} else {
 lean_dec_ref(x_30);
 x_33 = lean_box(0);
}
if (lean_is_scalar(x_33)) {
 x_34 = lean_alloc_ctor(0, 1, 0);
} else {
 x_34 = x_33;
}
lean_ctor_set(x_34, 0, x_32);
x_35 = l_liftExcept___at_Lean_Elab_liftMacroM___spec__1(x_34, x_3, x_31);
lean_dec(x_34);
return x_35;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_36 = lean_ctor_get(x_5, 1);
lean_inc(x_36);
lean_dec(x_5);
x_37 = lean_ctor_get(x_30, 0);
lean_inc(x_37);
if (lean_is_exclusive(x_30)) {
 lean_ctor_release(x_30, 0);
 x_38 = x_30;
} else {
 lean_dec_ref(x_30);
 x_38 = lean_box(0);
}
x_39 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_39, 0, x_37);
if (lean_is_scalar(x_38)) {
 x_40 = lean_alloc_ctor(1, 1, 0);
} else {
 x_40 = x_38;
}
lean_ctor_set(x_40, 0, x_39);
x_41 = l_liftExcept___at_Lean_Elab_liftMacroM___spec__1(x_40, x_3, x_36);
lean_dec(x_40);
return x_41;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__1___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_Lean_Environment_contains(x_1, x_2);
x_6 = lean_box(x_5);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__1___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Lean_ResolveName_resolveNamespace(x_1, x_2, x_3, x_4);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__1___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Lean_ResolveName_resolveGlobalName(x_1, x_2, x_3, x_4);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_11 = lean_st_ref_get(x_9, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_ctor_get(x_8, 3);
lean_inc(x_15);
x_16 = lean_ctor_get(x_8, 4);
lean_inc(x_16);
x_17 = lean_ctor_get(x_8, 5);
lean_inc(x_17);
x_18 = lean_ctor_get(x_8, 6);
lean_inc(x_18);
x_19 = lean_ctor_get(x_8, 7);
lean_inc(x_19);
x_20 = lean_ctor_get(x_8, 10);
lean_inc(x_20);
lean_inc(x_14);
x_21 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__1___lambda__1___boxed), 4, 1);
lean_closure_set(x_21, 0, x_14);
lean_inc(x_18);
x_22 = lean_alloc_closure((void*)(l_ReaderT_pure___at_Lean_Elab_liftMacroM___spec__2___rarg___boxed), 3, 1);
lean_closure_set(x_22, 0, x_18);
lean_inc(x_14);
x_23 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__1___lambda__2___boxed), 4, 1);
lean_closure_set(x_23, 0, x_14);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_14);
x_24 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__1___lambda__3___boxed), 6, 3);
lean_closure_set(x_24, 0, x_14);
lean_closure_set(x_24, 1, x_18);
lean_closure_set(x_24, 2, x_19);
lean_inc(x_14);
x_25 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__1___lambda__4___boxed), 6, 3);
lean_closure_set(x_25, 0, x_14);
lean_closure_set(x_25, 1, x_18);
lean_closure_set(x_25, 2, x_19);
x_26 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_26, 0, x_21);
lean_ctor_set(x_26, 1, x_22);
lean_ctor_set(x_26, 2, x_23);
lean_ctor_set(x_26, 3, x_24);
lean_ctor_set(x_26, 4, x_25);
x_27 = lean_st_ref_get(x_9, x_13);
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_29 = lean_ctor_get(x_27, 0);
x_30 = lean_ctor_get(x_27, 1);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = lean_environment_main_module(x_14);
x_33 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_33, 0, x_26);
lean_ctor_set(x_33, 1, x_32);
lean_ctor_set(x_33, 2, x_20);
lean_ctor_set(x_33, 3, x_15);
lean_ctor_set(x_33, 4, x_16);
lean_ctor_set(x_33, 5, x_17);
x_34 = lean_box(0);
lean_ctor_set(x_27, 1, x_34);
lean_ctor_set(x_27, 0, x_31);
x_35 = lean_apply_2(x_1, x_33, x_27);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_st_ref_take(x_9, x_30);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_42 = !lean_is_exclusive(x_40);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; 
x_43 = lean_ctor_get(x_40, 1);
lean_dec(x_43);
lean_ctor_set(x_40, 1, x_38);
x_44 = lean_st_ref_set(x_9, x_40, x_41);
x_45 = lean_ctor_get(x_44, 1);
lean_inc(x_45);
lean_dec(x_44);
x_46 = lean_ctor_get(x_37, 1);
lean_inc(x_46);
lean_dec(x_37);
x_47 = l_List_reverse___rarg(x_46);
x_48 = l_List_forM___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__2(x_47, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_45);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_49 = !lean_is_exclusive(x_48);
if (x_49 == 0)
{
lean_object* x_50; 
x_50 = lean_ctor_get(x_48, 0);
lean_dec(x_50);
lean_ctor_set(x_48, 0, x_36);
return x_48;
}
else
{
lean_object* x_51; lean_object* x_52; 
x_51 = lean_ctor_get(x_48, 1);
lean_inc(x_51);
lean_dec(x_48);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_36);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_53 = lean_ctor_get(x_40, 0);
x_54 = lean_ctor_get(x_40, 2);
x_55 = lean_ctor_get(x_40, 3);
x_56 = lean_ctor_get(x_40, 4);
x_57 = lean_ctor_get(x_40, 5);
x_58 = lean_ctor_get(x_40, 6);
lean_inc(x_58);
lean_inc(x_57);
lean_inc(x_56);
lean_inc(x_55);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_40);
x_59 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_59, 0, x_53);
lean_ctor_set(x_59, 1, x_38);
lean_ctor_set(x_59, 2, x_54);
lean_ctor_set(x_59, 3, x_55);
lean_ctor_set(x_59, 4, x_56);
lean_ctor_set(x_59, 5, x_57);
lean_ctor_set(x_59, 6, x_58);
x_60 = lean_st_ref_set(x_9, x_59, x_41);
x_61 = lean_ctor_get(x_60, 1);
lean_inc(x_61);
lean_dec(x_60);
x_62 = lean_ctor_get(x_37, 1);
lean_inc(x_62);
lean_dec(x_37);
x_63 = l_List_reverse___rarg(x_62);
x_64 = l_List_forM___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__2(x_63, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_61);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_65 = lean_ctor_get(x_64, 1);
lean_inc(x_65);
if (lean_is_exclusive(x_64)) {
 lean_ctor_release(x_64, 0);
 lean_ctor_release(x_64, 1);
 x_66 = x_64;
} else {
 lean_dec_ref(x_64);
 x_66 = lean_box(0);
}
if (lean_is_scalar(x_66)) {
 x_67 = lean_alloc_ctor(0, 2, 0);
} else {
 x_67 = x_66;
}
lean_ctor_set(x_67, 0, x_36);
lean_ctor_set(x_67, 1, x_65);
return x_67;
}
}
else
{
lean_object* x_68; 
x_68 = lean_ctor_get(x_35, 0);
lean_inc(x_68);
lean_dec(x_35);
if (lean_obj_tag(x_68) == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; uint8_t x_72; 
x_69 = lean_ctor_get(x_68, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_68, 1);
lean_inc(x_70);
lean_dec(x_68);
x_71 = l_Lean_maxRecDepthErrorMessage;
x_72 = lean_string_dec_eq(x_70, x_71);
if (x_72 == 0)
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_73 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_73, 0, x_70);
x_74 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_74, 0, x_73);
x_75 = l_Lean_throwErrorAt___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__3(x_69, x_74, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_30);
return x_75;
}
else
{
lean_object* x_76; 
lean_dec(x_70);
x_76 = l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__5(x_69, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_30);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_76;
}
}
else
{
lean_object* x_77; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_77 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__6___rarg(x_30);
return x_77;
}
}
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_78 = lean_ctor_get(x_27, 0);
x_79 = lean_ctor_get(x_27, 1);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_27);
x_80 = lean_ctor_get(x_78, 1);
lean_inc(x_80);
lean_dec(x_78);
x_81 = lean_environment_main_module(x_14);
x_82 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_82, 0, x_26);
lean_ctor_set(x_82, 1, x_81);
lean_ctor_set(x_82, 2, x_20);
lean_ctor_set(x_82, 3, x_15);
lean_ctor_set(x_82, 4, x_16);
lean_ctor_set(x_82, 5, x_17);
x_83 = lean_box(0);
x_84 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_84, 0, x_80);
lean_ctor_set(x_84, 1, x_83);
x_85 = lean_apply_2(x_1, x_82, x_84);
if (lean_obj_tag(x_85) == 0)
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_85, 1);
lean_inc(x_87);
lean_dec(x_85);
x_88 = lean_ctor_get(x_87, 0);
lean_inc(x_88);
x_89 = lean_st_ref_take(x_9, x_79);
x_90 = lean_ctor_get(x_89, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_89, 1);
lean_inc(x_91);
lean_dec(x_89);
x_92 = lean_ctor_get(x_90, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_90, 2);
lean_inc(x_93);
x_94 = lean_ctor_get(x_90, 3);
lean_inc(x_94);
x_95 = lean_ctor_get(x_90, 4);
lean_inc(x_95);
x_96 = lean_ctor_get(x_90, 5);
lean_inc(x_96);
x_97 = lean_ctor_get(x_90, 6);
lean_inc(x_97);
if (lean_is_exclusive(x_90)) {
 lean_ctor_release(x_90, 0);
 lean_ctor_release(x_90, 1);
 lean_ctor_release(x_90, 2);
 lean_ctor_release(x_90, 3);
 lean_ctor_release(x_90, 4);
 lean_ctor_release(x_90, 5);
 lean_ctor_release(x_90, 6);
 x_98 = x_90;
} else {
 lean_dec_ref(x_90);
 x_98 = lean_box(0);
}
if (lean_is_scalar(x_98)) {
 x_99 = lean_alloc_ctor(0, 7, 0);
} else {
 x_99 = x_98;
}
lean_ctor_set(x_99, 0, x_92);
lean_ctor_set(x_99, 1, x_88);
lean_ctor_set(x_99, 2, x_93);
lean_ctor_set(x_99, 3, x_94);
lean_ctor_set(x_99, 4, x_95);
lean_ctor_set(x_99, 5, x_96);
lean_ctor_set(x_99, 6, x_97);
x_100 = lean_st_ref_set(x_9, x_99, x_91);
x_101 = lean_ctor_get(x_100, 1);
lean_inc(x_101);
lean_dec(x_100);
x_102 = lean_ctor_get(x_87, 1);
lean_inc(x_102);
lean_dec(x_87);
x_103 = l_List_reverse___rarg(x_102);
x_104 = l_List_forM___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__2(x_103, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_101);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_105 = lean_ctor_get(x_104, 1);
lean_inc(x_105);
if (lean_is_exclusive(x_104)) {
 lean_ctor_release(x_104, 0);
 lean_ctor_release(x_104, 1);
 x_106 = x_104;
} else {
 lean_dec_ref(x_104);
 x_106 = lean_box(0);
}
if (lean_is_scalar(x_106)) {
 x_107 = lean_alloc_ctor(0, 2, 0);
} else {
 x_107 = x_106;
}
lean_ctor_set(x_107, 0, x_86);
lean_ctor_set(x_107, 1, x_105);
return x_107;
}
else
{
lean_object* x_108; 
x_108 = lean_ctor_get(x_85, 0);
lean_inc(x_108);
lean_dec(x_85);
if (lean_obj_tag(x_108) == 0)
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; uint8_t x_112; 
x_109 = lean_ctor_get(x_108, 0);
lean_inc(x_109);
x_110 = lean_ctor_get(x_108, 1);
lean_inc(x_110);
lean_dec(x_108);
x_111 = l_Lean_maxRecDepthErrorMessage;
x_112 = lean_string_dec_eq(x_110, x_111);
if (x_112 == 0)
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; 
x_113 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_113, 0, x_110);
x_114 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_114, 0, x_113);
x_115 = l_Lean_throwErrorAt___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__3(x_109, x_114, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_79);
return x_115;
}
else
{
lean_object* x_116; 
lean_dec(x_110);
x_116 = l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__5(x_109, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_79);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_116;
}
}
else
{
lean_object* x_117; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_117 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__6___rarg(x_79);
return x_117;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalTactic_expandEval___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_11 = l_Lean_Elab_liftMacroM___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Lean_Elab_Tactic_evalTactic(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
return x_14;
}
else
{
uint8_t x_15; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_15 = !lean_is_exclusive(x_11);
if (x_15 == 0)
{
return x_11;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_11, 0);
x_17 = lean_ctor_get(x_11, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_11);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalTactic_expandEval___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; uint8_t x_18; 
lean_dec(x_7);
x_17 = l_Lean_Elab_Tactic_saveState___rarg(x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_ctor_get(x_17, 1);
lean_ctor_set(x_17, 1, x_19);
lean_ctor_set(x_17, 0, x_1);
x_21 = lean_array_push(x_2, x_17);
x_22 = 1;
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_3);
x_23 = l_Lean_Elab_Tactic_SavedState_restore(x_3, x_22, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_20);
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
x_25 = l_Lean_Elab_Tactic_evalTactic_expandEval(x_4, x_3, x_5, x_6, x_21, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_24);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_26 = lean_ctor_get(x_17, 0);
x_27 = lean_ctor_get(x_17, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_17);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_1);
lean_ctor_set(x_28, 1, x_26);
x_29 = lean_array_push(x_2, x_28);
x_30 = 1;
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_3);
x_31 = l_Lean_Elab_Tactic_SavedState_restore(x_3, x_30, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_27);
x_32 = lean_ctor_get(x_31, 1);
lean_inc(x_32);
lean_dec(x_31);
x_33 = l_Lean_Elab_Tactic_evalTactic_expandEval(x_4, x_3, x_5, x_6, x_29, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_32);
return x_33;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalTactic_expandEval(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_15; 
x_15 = l_Lean_Elab_Tactic_evalTactic_eval(x_1, x_2, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_74; lean_object* x_75; uint8_t x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_16 = lean_ctor_get(x_3, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_3, 1);
lean_inc(x_17);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_18 = x_3;
} else {
 lean_dec_ref(x_3);
 x_18 = lean_box(0);
}
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_inc(x_1);
x_20 = lean_apply_1(x_19, x_1);
x_21 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalTactic_expandEval___lambda__1), 10, 1);
lean_closure_set(x_21, 0, x_20);
x_74 = lean_ctor_get(x_16, 0);
lean_inc(x_74);
lean_dec(x_16);
x_75 = lean_ctor_get(x_74, 1);
lean_inc(x_75);
lean_dec(x_74);
x_76 = lean_ctor_get_uint8(x_6, sizeof(void*)*1);
x_77 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set_uint8(x_77, sizeof(void*)*1, x_76);
lean_inc(x_1);
x_78 = l_Lean_Elab_Tactic_mkInitialTacticInfo(x_1, x_77, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
x_79 = lean_ctor_get(x_78, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_78, 1);
lean_inc(x_80);
lean_dec(x_78);
x_81 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_withTacticInfoContext___rarg___lambda__1), 11, 1);
lean_closure_set(x_81, 0, x_79);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_82 = l_Lean_Elab_withInfoTreeContext___at_Lean_Elab_Tactic_evalTactic_eval___spec__1(x_21, x_81, x_77, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_80);
if (lean_obj_tag(x_82) == 0)
{
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_82;
}
else
{
lean_object* x_83; lean_object* x_84; 
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_82, 1);
lean_inc(x_84);
lean_dec(x_82);
x_22 = x_83;
x_23 = x_84;
goto block_73;
}
block_73:
{
uint8_t x_24; 
x_24 = l_Lean_Exception_isRuntime(x_22);
if (x_24 == 0)
{
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
lean_dec(x_18);
x_25 = l_List_forIn_loop___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__4___closed__2;
x_26 = l_Lean_isTracingEnabledFor___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__1(x_25, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_23);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_unbox(x_27);
lean_dec(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
lean_dec(x_26);
x_30 = lean_box(0);
x_31 = l_Lean_Elab_Tactic_evalTactic_expandEval___lambda__2(x_22, x_5, x_2, x_1, x_17, x_4, x_30, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_29);
return x_31;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_32 = lean_ctor_get(x_26, 1);
lean_inc(x_32);
lean_dec(x_26);
lean_inc(x_22);
x_33 = l_Lean_Exception_toMessageData(x_22);
x_34 = l_Lean_addTrace___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__2(x_25, x_33, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_32);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = l_Lean_Elab_Tactic_evalTactic_expandEval___lambda__2(x_22, x_5, x_2, x_1, x_17, x_4, x_35, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_36);
return x_37;
}
}
else
{
lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_38 = lean_ctor_get(x_22, 0);
lean_inc(x_38);
x_39 = l_Lean_Elab_Tactic_evalTactic_handleEx___closed__1;
x_40 = lean_nat_dec_eq(x_38, x_39);
if (x_40 == 0)
{
lean_object* x_41; uint8_t x_42; 
x_41 = l_Lean_Elab_Tactic_evalTactic_handleEx___closed__2;
x_42 = lean_nat_dec_eq(x_38, x_41);
lean_dec(x_38);
if (x_42 == 0)
{
lean_object* x_43; 
lean_dec(x_17);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
if (lean_is_scalar(x_18)) {
 x_43 = lean_alloc_ctor(1, 2, 0);
} else {
 x_43 = x_18;
}
lean_ctor_set(x_43, 0, x_22);
lean_ctor_set(x_43, 1, x_23);
return x_43;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; uint8_t x_52; 
lean_dec(x_18);
x_44 = l_Lean_Core_getMessageLog___rarg(x_13, x_23);
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
lean_dec(x_44);
x_47 = l_Lean_PersistentArray_toList___rarg(x_45);
x_48 = lean_box(0);
x_49 = l_List_forIn_loop___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__4(x_47, x_48, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_46);
x_50 = lean_ctor_get(x_49, 1);
lean_inc(x_50);
lean_dec(x_49);
x_51 = l_Lean_Elab_Tactic_saveState___rarg(x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_50);
x_52 = !lean_is_exclusive(x_51);
if (x_52 == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; uint8_t x_56; lean_object* x_57; lean_object* x_58; 
x_53 = lean_ctor_get(x_51, 0);
x_54 = lean_ctor_get(x_51, 1);
lean_ctor_set(x_51, 1, x_53);
lean_ctor_set(x_51, 0, x_22);
x_55 = lean_array_push(x_5, x_51);
x_56 = 1;
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_2);
x_57 = l_Lean_Elab_Tactic_SavedState_restore(x_2, x_56, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_54);
x_58 = lean_ctor_get(x_57, 1);
lean_inc(x_58);
lean_dec(x_57);
x_3 = x_17;
x_5 = x_55;
x_14 = x_58;
goto _start;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; uint8_t x_64; lean_object* x_65; lean_object* x_66; 
x_60 = lean_ctor_get(x_51, 0);
x_61 = lean_ctor_get(x_51, 1);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_51);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_22);
lean_ctor_set(x_62, 1, x_60);
x_63 = lean_array_push(x_5, x_62);
x_64 = 1;
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_2);
x_65 = l_Lean_Elab_Tactic_SavedState_restore(x_2, x_64, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_61);
x_66 = lean_ctor_get(x_65, 1);
lean_inc(x_66);
lean_dec(x_65);
x_3 = x_17;
x_5 = x_63;
x_14 = x_66;
goto _start;
}
}
}
else
{
uint8_t x_68; lean_object* x_69; lean_object* x_70; 
lean_dec(x_38);
lean_dec(x_22);
lean_dec(x_18);
x_68 = 1;
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_2);
x_69 = l_Lean_Elab_Tactic_SavedState_restore(x_2, x_68, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_23);
x_70 = lean_ctor_get(x_69, 1);
lean_inc(x_70);
lean_dec(x_69);
x_3 = x_17;
x_14 = x_70;
goto _start;
}
}
}
else
{
lean_object* x_72; 
lean_dec(x_17);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
if (lean_is_scalar(x_18)) {
 x_72 = lean_alloc_ctor(1, 2, 0);
} else {
 x_72 = x_18;
}
lean_ctor_set(x_72, 0, x_22);
lean_ctor_set(x_72, 1, x_23);
return x_72;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Tactic_evalTactic___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_8, 5);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_6, x_7, x_8, x_9, x_10);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_11);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_11);
lean_ctor_set(x_15, 1, x_14);
lean_ctor_set_tag(x_12, 1);
lean_ctor_set(x_12, 0, x_15);
return x_12;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_12, 0);
x_17 = lean_ctor_get(x_12, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_12);
lean_inc(x_11);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_16);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Tactic_evalTactic___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_9);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_9, 5);
x_14 = l_Lean_replaceRef(x_1, x_13);
lean_dec(x_13);
lean_dec(x_1);
lean_ctor_set(x_9, 5, x_14);
x_15 = l_Lean_throwError___at_Lean_Elab_Tactic_evalTactic___spec__2(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_16 = lean_ctor_get(x_9, 0);
x_17 = lean_ctor_get(x_9, 1);
x_18 = lean_ctor_get(x_9, 2);
x_19 = lean_ctor_get(x_9, 3);
x_20 = lean_ctor_get(x_9, 4);
x_21 = lean_ctor_get(x_9, 5);
x_22 = lean_ctor_get(x_9, 6);
x_23 = lean_ctor_get(x_9, 7);
x_24 = lean_ctor_get(x_9, 8);
x_25 = lean_ctor_get(x_9, 9);
x_26 = lean_ctor_get(x_9, 10);
x_27 = lean_ctor_get_uint8(x_9, sizeof(void*)*11);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_9);
x_28 = l_Lean_replaceRef(x_1, x_21);
lean_dec(x_21);
lean_dec(x_1);
x_29 = lean_alloc_ctor(0, 11, 1);
lean_ctor_set(x_29, 0, x_16);
lean_ctor_set(x_29, 1, x_17);
lean_ctor_set(x_29, 2, x_18);
lean_ctor_set(x_29, 3, x_19);
lean_ctor_set(x_29, 4, x_20);
lean_ctor_set(x_29, 5, x_28);
lean_ctor_set(x_29, 6, x_22);
lean_ctor_set(x_29, 7, x_23);
lean_ctor_set(x_29, 8, x_24);
lean_ctor_set(x_29, 9, x_25);
lean_ctor_set(x_29, 10, x_26);
lean_ctor_set_uint8(x_29, sizeof(void*)*11, x_27);
x_30 = l_Lean_throwError___at_Lean_Elab_Tactic_evalTactic___spec__2(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_29, x_10, x_11);
lean_dec(x_10);
lean_dec(x_29);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_30;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at_Lean_Elab_Tactic_evalTactic___spec__4___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_3 = lean_st_ref_get(x_1, x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_ctor_get(x_4, 3);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_st_ref_take(x_1, x_5);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = !lean_is_exclusive(x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_8, 3);
lean_dec(x_11);
x_12 = l_Lean_Elab_getResetInfoTrees___at_Lean_Elab_Tactic_withTacticInfoContext___spec__2___rarg___closed__3;
lean_ctor_set(x_8, 3, x_12);
x_13 = lean_st_ref_set(x_1, x_8, x_9);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_13, 0);
lean_dec(x_15);
lean_ctor_set(x_13, 0, x_6);
return x_13;
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_dec(x_13);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_6);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_18 = lean_ctor_get(x_8, 0);
x_19 = lean_ctor_get(x_8, 1);
x_20 = lean_ctor_get(x_8, 2);
x_21 = lean_ctor_get(x_8, 4);
x_22 = lean_ctor_get(x_8, 5);
x_23 = lean_ctor_get(x_8, 6);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_8);
x_24 = l_Lean_Elab_getResetInfoTrees___at_Lean_Elab_Tactic_withTacticInfoContext___spec__2___rarg___closed__3;
x_25 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_25, 0, x_18);
lean_ctor_set(x_25, 1, x_19);
lean_ctor_set(x_25, 2, x_20);
lean_ctor_set(x_25, 3, x_24);
lean_ctor_set(x_25, 4, x_21);
lean_ctor_set(x_25, 5, x_22);
lean_ctor_set(x_25, 6, x_23);
x_26 = lean_st_ref_set(x_1, x_25, x_9);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
if (lean_is_exclusive(x_26)) {
 lean_ctor_release(x_26, 0);
 lean_ctor_release(x_26, 1);
 x_28 = x_26;
} else {
 lean_dec_ref(x_26);
 x_28 = lean_box(0);
}
if (lean_is_scalar(x_28)) {
 x_29 = lean_alloc_ctor(0, 2, 0);
} else {
 x_29 = x_28;
}
lean_ctor_set(x_29, 0, x_6);
lean_ctor_set(x_29, 1, x_27);
return x_29;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at_Lean_Elab_Tactic_evalTactic___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_getResetTraces___at_Lean_Elab_Tactic_evalTactic___spec__4___rarg___boxed), 2, 0);
return x_8;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_11);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; size_t x_23; size_t x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_15 = lean_ctor_get(x_11, 5);
x_16 = l_Lean_replaceRef(x_3, x_15);
lean_dec(x_15);
lean_ctor_set(x_11, 5, x_16);
x_17 = lean_st_ref_get(x_12, x_13);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_ctor_get(x_18, 3);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l_Lean_PersistentArray_toArray___rarg(x_20);
x_22 = lean_array_get_size(x_21);
x_23 = lean_usize_of_nat(x_22);
lean_dec(x_22);
x_24 = 0;
x_25 = l_Array_mapMUnsafe_map___at___private_Lean_Util_Trace_0__Lean_addTraceNode___spec__1(x_23, x_24, x_21);
x_26 = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(x_26, 0, x_2);
lean_ctor_set(x_26, 1, x_4);
lean_ctor_set(x_26, 2, x_25);
x_27 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_26, x_9, x_10, x_11, x_12, x_19);
lean_dec(x_11);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = lean_st_ref_take(x_12, x_29);
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
lean_object* x_32; uint8_t x_33; 
x_32 = lean_ctor_get(x_30, 0);
x_33 = !lean_is_exclusive(x_32);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_34 = lean_ctor_get(x_30, 1);
x_35 = lean_ctor_get(x_32, 3);
lean_dec(x_35);
lean_ctor_set(x_30, 1, x_28);
lean_ctor_set(x_30, 0, x_3);
x_36 = l_Lean_PersistentArray_push___rarg(x_1, x_30);
lean_ctor_set(x_32, 3, x_36);
x_37 = lean_st_ref_set(x_12, x_32, x_34);
x_38 = !lean_is_exclusive(x_37);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_ctor_get(x_37, 0);
lean_dec(x_39);
x_40 = lean_box(0);
lean_ctor_set(x_37, 0, x_40);
return x_37;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_37, 1);
lean_inc(x_41);
lean_dec(x_37);
x_42 = lean_box(0);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_41);
return x_43;
}
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_44 = lean_ctor_get(x_30, 1);
x_45 = lean_ctor_get(x_32, 0);
x_46 = lean_ctor_get(x_32, 1);
x_47 = lean_ctor_get(x_32, 2);
x_48 = lean_ctor_get(x_32, 4);
x_49 = lean_ctor_get(x_32, 5);
x_50 = lean_ctor_get(x_32, 6);
lean_inc(x_50);
lean_inc(x_49);
lean_inc(x_48);
lean_inc(x_47);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_32);
lean_ctor_set(x_30, 1, x_28);
lean_ctor_set(x_30, 0, x_3);
x_51 = l_Lean_PersistentArray_push___rarg(x_1, x_30);
x_52 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_52, 0, x_45);
lean_ctor_set(x_52, 1, x_46);
lean_ctor_set(x_52, 2, x_47);
lean_ctor_set(x_52, 3, x_51);
lean_ctor_set(x_52, 4, x_48);
lean_ctor_set(x_52, 5, x_49);
lean_ctor_set(x_52, 6, x_50);
x_53 = lean_st_ref_set(x_12, x_52, x_44);
x_54 = lean_ctor_get(x_53, 1);
lean_inc(x_54);
if (lean_is_exclusive(x_53)) {
 lean_ctor_release(x_53, 0);
 lean_ctor_release(x_53, 1);
 x_55 = x_53;
} else {
 lean_dec_ref(x_53);
 x_55 = lean_box(0);
}
x_56 = lean_box(0);
if (lean_is_scalar(x_55)) {
 x_57 = lean_alloc_ctor(0, 2, 0);
} else {
 x_57 = x_55;
}
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_54);
return x_57;
}
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_58 = lean_ctor_get(x_30, 0);
x_59 = lean_ctor_get(x_30, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_30);
x_60 = lean_ctor_get(x_58, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_58, 1);
lean_inc(x_61);
x_62 = lean_ctor_get(x_58, 2);
lean_inc(x_62);
x_63 = lean_ctor_get(x_58, 4);
lean_inc(x_63);
x_64 = lean_ctor_get(x_58, 5);
lean_inc(x_64);
x_65 = lean_ctor_get(x_58, 6);
lean_inc(x_65);
if (lean_is_exclusive(x_58)) {
 lean_ctor_release(x_58, 0);
 lean_ctor_release(x_58, 1);
 lean_ctor_release(x_58, 2);
 lean_ctor_release(x_58, 3);
 lean_ctor_release(x_58, 4);
 lean_ctor_release(x_58, 5);
 lean_ctor_release(x_58, 6);
 x_66 = x_58;
} else {
 lean_dec_ref(x_58);
 x_66 = lean_box(0);
}
x_67 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_67, 0, x_3);
lean_ctor_set(x_67, 1, x_28);
x_68 = l_Lean_PersistentArray_push___rarg(x_1, x_67);
if (lean_is_scalar(x_66)) {
 x_69 = lean_alloc_ctor(0, 7, 0);
} else {
 x_69 = x_66;
}
lean_ctor_set(x_69, 0, x_60);
lean_ctor_set(x_69, 1, x_61);
lean_ctor_set(x_69, 2, x_62);
lean_ctor_set(x_69, 3, x_68);
lean_ctor_set(x_69, 4, x_63);
lean_ctor_set(x_69, 5, x_64);
lean_ctor_set(x_69, 6, x_65);
x_70 = lean_st_ref_set(x_12, x_69, x_59);
x_71 = lean_ctor_get(x_70, 1);
lean_inc(x_71);
if (lean_is_exclusive(x_70)) {
 lean_ctor_release(x_70, 0);
 lean_ctor_release(x_70, 1);
 x_72 = x_70;
} else {
 lean_dec_ref(x_70);
 x_72 = lean_box(0);
}
x_73 = lean_box(0);
if (lean_is_scalar(x_72)) {
 x_74 = lean_alloc_ctor(0, 2, 0);
} else {
 x_74 = x_72;
}
lean_ctor_set(x_74, 0, x_73);
lean_ctor_set(x_74, 1, x_71);
return x_74;
}
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; uint8_t x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; size_t x_95; size_t x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; 
x_75 = lean_ctor_get(x_11, 0);
x_76 = lean_ctor_get(x_11, 1);
x_77 = lean_ctor_get(x_11, 2);
x_78 = lean_ctor_get(x_11, 3);
x_79 = lean_ctor_get(x_11, 4);
x_80 = lean_ctor_get(x_11, 5);
x_81 = lean_ctor_get(x_11, 6);
x_82 = lean_ctor_get(x_11, 7);
x_83 = lean_ctor_get(x_11, 8);
x_84 = lean_ctor_get(x_11, 9);
x_85 = lean_ctor_get(x_11, 10);
x_86 = lean_ctor_get_uint8(x_11, sizeof(void*)*11);
lean_inc(x_85);
lean_inc(x_84);
lean_inc(x_83);
lean_inc(x_82);
lean_inc(x_81);
lean_inc(x_80);
lean_inc(x_79);
lean_inc(x_78);
lean_inc(x_77);
lean_inc(x_76);
lean_inc(x_75);
lean_dec(x_11);
x_87 = l_Lean_replaceRef(x_3, x_80);
lean_dec(x_80);
x_88 = lean_alloc_ctor(0, 11, 1);
lean_ctor_set(x_88, 0, x_75);
lean_ctor_set(x_88, 1, x_76);
lean_ctor_set(x_88, 2, x_77);
lean_ctor_set(x_88, 3, x_78);
lean_ctor_set(x_88, 4, x_79);
lean_ctor_set(x_88, 5, x_87);
lean_ctor_set(x_88, 6, x_81);
lean_ctor_set(x_88, 7, x_82);
lean_ctor_set(x_88, 8, x_83);
lean_ctor_set(x_88, 9, x_84);
lean_ctor_set(x_88, 10, x_85);
lean_ctor_set_uint8(x_88, sizeof(void*)*11, x_86);
x_89 = lean_st_ref_get(x_12, x_13);
x_90 = lean_ctor_get(x_89, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_89, 1);
lean_inc(x_91);
lean_dec(x_89);
x_92 = lean_ctor_get(x_90, 3);
lean_inc(x_92);
lean_dec(x_90);
x_93 = l_Lean_PersistentArray_toArray___rarg(x_92);
x_94 = lean_array_get_size(x_93);
x_95 = lean_usize_of_nat(x_94);
lean_dec(x_94);
x_96 = 0;
x_97 = l_Array_mapMUnsafe_map___at___private_Lean_Util_Trace_0__Lean_addTraceNode___spec__1(x_95, x_96, x_93);
x_98 = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(x_98, 0, x_2);
lean_ctor_set(x_98, 1, x_4);
lean_ctor_set(x_98, 2, x_97);
x_99 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_98, x_9, x_10, x_88, x_12, x_91);
lean_dec(x_88);
x_100 = lean_ctor_get(x_99, 0);
lean_inc(x_100);
x_101 = lean_ctor_get(x_99, 1);
lean_inc(x_101);
lean_dec(x_99);
x_102 = lean_st_ref_take(x_12, x_101);
x_103 = lean_ctor_get(x_102, 0);
lean_inc(x_103);
x_104 = lean_ctor_get(x_102, 1);
lean_inc(x_104);
if (lean_is_exclusive(x_102)) {
 lean_ctor_release(x_102, 0);
 lean_ctor_release(x_102, 1);
 x_105 = x_102;
} else {
 lean_dec_ref(x_102);
 x_105 = lean_box(0);
}
x_106 = lean_ctor_get(x_103, 0);
lean_inc(x_106);
x_107 = lean_ctor_get(x_103, 1);
lean_inc(x_107);
x_108 = lean_ctor_get(x_103, 2);
lean_inc(x_108);
x_109 = lean_ctor_get(x_103, 4);
lean_inc(x_109);
x_110 = lean_ctor_get(x_103, 5);
lean_inc(x_110);
x_111 = lean_ctor_get(x_103, 6);
lean_inc(x_111);
if (lean_is_exclusive(x_103)) {
 lean_ctor_release(x_103, 0);
 lean_ctor_release(x_103, 1);
 lean_ctor_release(x_103, 2);
 lean_ctor_release(x_103, 3);
 lean_ctor_release(x_103, 4);
 lean_ctor_release(x_103, 5);
 lean_ctor_release(x_103, 6);
 x_112 = x_103;
} else {
 lean_dec_ref(x_103);
 x_112 = lean_box(0);
}
if (lean_is_scalar(x_105)) {
 x_113 = lean_alloc_ctor(0, 2, 0);
} else {
 x_113 = x_105;
}
lean_ctor_set(x_113, 0, x_3);
lean_ctor_set(x_113, 1, x_100);
x_114 = l_Lean_PersistentArray_push___rarg(x_1, x_113);
if (lean_is_scalar(x_112)) {
 x_115 = lean_alloc_ctor(0, 7, 0);
} else {
 x_115 = x_112;
}
lean_ctor_set(x_115, 0, x_106);
lean_ctor_set(x_115, 1, x_107);
lean_ctor_set(x_115, 2, x_108);
lean_ctor_set(x_115, 3, x_114);
lean_ctor_set(x_115, 4, x_109);
lean_ctor_set(x_115, 5, x_110);
lean_ctor_set(x_115, 6, x_111);
x_116 = lean_st_ref_set(x_12, x_115, x_104);
x_117 = lean_ctor_get(x_116, 1);
lean_inc(x_117);
if (lean_is_exclusive(x_116)) {
 lean_ctor_release(x_116, 0);
 lean_ctor_release(x_116, 1);
 x_118 = x_116;
} else {
 lean_dec_ref(x_116);
 x_118 = lean_box(0);
}
x_119 = lean_box(0);
if (lean_is_scalar(x_118)) {
 x_120 = lean_alloc_ctor(0, 2, 0);
} else {
 x_120 = x_118;
}
lean_ctor_set(x_120, 0, x_119);
lean_ctor_set(x_120, 1, x_117);
return x_120;
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at_Lean_Elab_Tactic_evalTactic___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_10);
return x_14;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_inc(x_13);
x_16 = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__5(x_1, x_5, x_2, x_3, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = l_MonadExcept_ofExcept___at_Lean_Elab_Tactic_evalTactic___spec__6(x_4, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_17);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_8);
return x_18;
}
}
static lean_object* _init_l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_profiler;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__2(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, uint8_t x_8, double x_9, double x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20) {
_start:
{
double x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_21 = l_Lean_addTrace___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__2___closed__1;
lean_inc(x_3);
lean_inc(x_1);
x_22 = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(x_22, 0, x_1);
lean_ctor_set(x_22, 1, x_3);
lean_ctor_set_float(x_22, sizeof(void*)*2, x_21);
lean_ctor_set_float(x_22, sizeof(void*)*2 + 8, x_21);
lean_ctor_set_uint8(x_22, sizeof(void*)*2 + 16, x_2);
x_23 = l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__2___closed__1;
x_24 = l_Lean_Option_get___at___private_Lean_Util_Profile_0__Lean_get__profiler___spec__1(x_7, x_23);
if (x_24 == 0)
{
if (x_8 == 0)
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_3);
lean_dec(x_1);
x_25 = lean_box(0);
x_26 = l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__1(x_4, x_5, x_11, x_6, x_22, x_25, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20);
lean_dec(x_6);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_22);
x_27 = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(x_27, 0, x_1);
lean_ctor_set(x_27, 1, x_3);
lean_ctor_set_float(x_27, sizeof(void*)*2, x_9);
lean_ctor_set_float(x_27, sizeof(void*)*2 + 8, x_10);
lean_ctor_set_uint8(x_27, sizeof(void*)*2 + 16, x_2);
x_28 = lean_box(0);
x_29 = l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__1(x_4, x_5, x_11, x_6, x_27, x_28, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20);
lean_dec(x_6);
return x_29;
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
lean_dec(x_22);
x_30 = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(x_30, 0, x_1);
lean_ctor_set(x_30, 1, x_3);
lean_ctor_set_float(x_30, sizeof(void*)*2, x_9);
lean_ctor_set_float(x_30, sizeof(void*)*2 + 8, x_10);
lean_ctor_set_uint8(x_30, sizeof(void*)*2 + 16, x_2);
x_31 = lean_box(0);
x_32 = l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__1(x_4, x_5, x_11, x_6, x_30, x_31, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20);
lean_dec(x_6);
return x_32;
}
}
}
static lean_object* _init_l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("<exception thrown while producing trace node message>", 53);
return x_1;
}
}
static lean_object* _init_l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__3___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__3___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__3(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, uint8_t x_7, double x_8, double x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20) {
_start:
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_11);
x_21 = lean_ctor_get(x_18, 5);
lean_inc(x_21);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_5);
x_22 = lean_apply_10(x_10, x_5, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__2(x_1, x_2, x_3, x_4, x_21, x_5, x_6, x_7, x_8, x_9, x_23, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_24);
lean_dec(x_19);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_6);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_22, 1);
lean_inc(x_26);
lean_dec(x_22);
x_27 = l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__3___closed__2;
x_28 = l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__2(x_1, x_2, x_3, x_4, x_21, x_5, x_6, x_7, x_8, x_9, x_27, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_26);
lean_dec(x_19);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_6);
return x_28;
}
}
}
static lean_object* _init_l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__4___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_trace_profiler_useHearbeats;
return x_1;
}
}
static lean_object* _init_l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__4___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_trace_profiler;
return x_1;
}
}
static lean_object* _init_l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__4___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_trace_profiler_threshold;
return x_1;
}
}
static double _init_l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__4___closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; double x_4; 
x_1 = lean_unsigned_to_nat(1000u);
x_2 = 0;
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_Float_ofScientific(x_1, x_2, x_3);
return x_4;
}
}
static double _init_l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__4___closed__5() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; double x_4; 
x_1 = lean_unsigned_to_nat(1000000000u);
x_2 = 0;
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_Float_ofScientific(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__4(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17) {
_start:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
lean_dec(x_8);
x_18 = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at_Lean_Elab_Tactic_evalTactic___spec__4___rarg(x_16, x_17);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__4___closed__1;
x_22 = l_Lean_Option_get___at___private_Lean_Util_Profile_0__Lean_get__profiler___spec__1(x_1, x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_91 = lean_io_mono_nanos_now(x_20);
x_92 = lean_ctor_get(x_91, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_91, 1);
lean_inc(x_93);
lean_dec(x_91);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_94 = lean_apply_9(x_7, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_93);
if (lean_obj_tag(x_94) == 0)
{
uint8_t x_95; 
x_95 = !lean_is_exclusive(x_94);
if (x_95 == 0)
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; uint8_t x_100; 
x_96 = lean_ctor_get(x_94, 0);
x_97 = lean_ctor_get(x_94, 1);
x_98 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_98, 0, x_96);
x_99 = lean_io_mono_nanos_now(x_97);
x_100 = !lean_is_exclusive(x_99);
if (x_100 == 0)
{
lean_object* x_101; lean_object* x_102; uint8_t x_103; lean_object* x_104; double x_105; double x_106; double x_107; double x_108; double x_109; lean_object* x_110; lean_object* x_111; 
x_101 = lean_ctor_get(x_99, 0);
x_102 = lean_ctor_get(x_99, 1);
x_103 = 0;
x_104 = lean_unsigned_to_nat(0u);
x_105 = l_Float_ofScientific(x_92, x_103, x_104);
lean_dec(x_92);
x_106 = l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__4___closed__5;
x_107 = lean_float_div(x_105, x_106);
x_108 = l_Float_ofScientific(x_101, x_103, x_104);
lean_dec(x_101);
x_109 = lean_float_div(x_108, x_106);
x_110 = lean_box_float(x_107);
x_111 = lean_box_float(x_109);
lean_ctor_set(x_99, 1, x_111);
lean_ctor_set(x_99, 0, x_110);
lean_ctor_set(x_94, 1, x_99);
lean_ctor_set(x_94, 0, x_98);
x_23 = x_94;
x_24 = x_102;
goto block_90;
}
else
{
lean_object* x_112; lean_object* x_113; uint8_t x_114; lean_object* x_115; double x_116; double x_117; double x_118; double x_119; double x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; 
x_112 = lean_ctor_get(x_99, 0);
x_113 = lean_ctor_get(x_99, 1);
lean_inc(x_113);
lean_inc(x_112);
lean_dec(x_99);
x_114 = 0;
x_115 = lean_unsigned_to_nat(0u);
x_116 = l_Float_ofScientific(x_92, x_114, x_115);
lean_dec(x_92);
x_117 = l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__4___closed__5;
x_118 = lean_float_div(x_116, x_117);
x_119 = l_Float_ofScientific(x_112, x_114, x_115);
lean_dec(x_112);
x_120 = lean_float_div(x_119, x_117);
x_121 = lean_box_float(x_118);
x_122 = lean_box_float(x_120);
x_123 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_123, 0, x_121);
lean_ctor_set(x_123, 1, x_122);
lean_ctor_set(x_94, 1, x_123);
lean_ctor_set(x_94, 0, x_98);
x_23 = x_94;
x_24 = x_113;
goto block_90;
}
}
else
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; uint8_t x_131; lean_object* x_132; double x_133; double x_134; double x_135; double x_136; double x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; 
x_124 = lean_ctor_get(x_94, 0);
x_125 = lean_ctor_get(x_94, 1);
lean_inc(x_125);
lean_inc(x_124);
lean_dec(x_94);
x_126 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_126, 0, x_124);
x_127 = lean_io_mono_nanos_now(x_125);
x_128 = lean_ctor_get(x_127, 0);
lean_inc(x_128);
x_129 = lean_ctor_get(x_127, 1);
lean_inc(x_129);
if (lean_is_exclusive(x_127)) {
 lean_ctor_release(x_127, 0);
 lean_ctor_release(x_127, 1);
 x_130 = x_127;
} else {
 lean_dec_ref(x_127);
 x_130 = lean_box(0);
}
x_131 = 0;
x_132 = lean_unsigned_to_nat(0u);
x_133 = l_Float_ofScientific(x_92, x_131, x_132);
lean_dec(x_92);
x_134 = l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__4___closed__5;
x_135 = lean_float_div(x_133, x_134);
x_136 = l_Float_ofScientific(x_128, x_131, x_132);
lean_dec(x_128);
x_137 = lean_float_div(x_136, x_134);
x_138 = lean_box_float(x_135);
x_139 = lean_box_float(x_137);
if (lean_is_scalar(x_130)) {
 x_140 = lean_alloc_ctor(0, 2, 0);
} else {
 x_140 = x_130;
}
lean_ctor_set(x_140, 0, x_138);
lean_ctor_set(x_140, 1, x_139);
x_141 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_141, 0, x_126);
lean_ctor_set(x_141, 1, x_140);
x_23 = x_141;
x_24 = x_129;
goto block_90;
}
}
else
{
uint8_t x_142; 
x_142 = !lean_is_exclusive(x_94);
if (x_142 == 0)
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; uint8_t x_147; 
x_143 = lean_ctor_get(x_94, 0);
x_144 = lean_ctor_get(x_94, 1);
x_145 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_145, 0, x_143);
x_146 = lean_io_mono_nanos_now(x_144);
x_147 = !lean_is_exclusive(x_146);
if (x_147 == 0)
{
lean_object* x_148; lean_object* x_149; uint8_t x_150; lean_object* x_151; double x_152; double x_153; double x_154; double x_155; double x_156; lean_object* x_157; lean_object* x_158; 
x_148 = lean_ctor_get(x_146, 0);
x_149 = lean_ctor_get(x_146, 1);
x_150 = 0;
x_151 = lean_unsigned_to_nat(0u);
x_152 = l_Float_ofScientific(x_92, x_150, x_151);
lean_dec(x_92);
x_153 = l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__4___closed__5;
x_154 = lean_float_div(x_152, x_153);
x_155 = l_Float_ofScientific(x_148, x_150, x_151);
lean_dec(x_148);
x_156 = lean_float_div(x_155, x_153);
x_157 = lean_box_float(x_154);
x_158 = lean_box_float(x_156);
lean_ctor_set(x_146, 1, x_158);
lean_ctor_set(x_146, 0, x_157);
lean_ctor_set_tag(x_94, 0);
lean_ctor_set(x_94, 1, x_146);
lean_ctor_set(x_94, 0, x_145);
x_23 = x_94;
x_24 = x_149;
goto block_90;
}
else
{
lean_object* x_159; lean_object* x_160; uint8_t x_161; lean_object* x_162; double x_163; double x_164; double x_165; double x_166; double x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; 
x_159 = lean_ctor_get(x_146, 0);
x_160 = lean_ctor_get(x_146, 1);
lean_inc(x_160);
lean_inc(x_159);
lean_dec(x_146);
x_161 = 0;
x_162 = lean_unsigned_to_nat(0u);
x_163 = l_Float_ofScientific(x_92, x_161, x_162);
lean_dec(x_92);
x_164 = l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__4___closed__5;
x_165 = lean_float_div(x_163, x_164);
x_166 = l_Float_ofScientific(x_159, x_161, x_162);
lean_dec(x_159);
x_167 = lean_float_div(x_166, x_164);
x_168 = lean_box_float(x_165);
x_169 = lean_box_float(x_167);
x_170 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_170, 0, x_168);
lean_ctor_set(x_170, 1, x_169);
lean_ctor_set_tag(x_94, 0);
lean_ctor_set(x_94, 1, x_170);
lean_ctor_set(x_94, 0, x_145);
x_23 = x_94;
x_24 = x_160;
goto block_90;
}
}
else
{
lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; uint8_t x_178; lean_object* x_179; double x_180; double x_181; double x_182; double x_183; double x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; 
x_171 = lean_ctor_get(x_94, 0);
x_172 = lean_ctor_get(x_94, 1);
lean_inc(x_172);
lean_inc(x_171);
lean_dec(x_94);
x_173 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_173, 0, x_171);
x_174 = lean_io_mono_nanos_now(x_172);
x_175 = lean_ctor_get(x_174, 0);
lean_inc(x_175);
x_176 = lean_ctor_get(x_174, 1);
lean_inc(x_176);
if (lean_is_exclusive(x_174)) {
 lean_ctor_release(x_174, 0);
 lean_ctor_release(x_174, 1);
 x_177 = x_174;
} else {
 lean_dec_ref(x_174);
 x_177 = lean_box(0);
}
x_178 = 0;
x_179 = lean_unsigned_to_nat(0u);
x_180 = l_Float_ofScientific(x_92, x_178, x_179);
lean_dec(x_92);
x_181 = l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__4___closed__5;
x_182 = lean_float_div(x_180, x_181);
x_183 = l_Float_ofScientific(x_175, x_178, x_179);
lean_dec(x_175);
x_184 = lean_float_div(x_183, x_181);
x_185 = lean_box_float(x_182);
x_186 = lean_box_float(x_184);
if (lean_is_scalar(x_177)) {
 x_187 = lean_alloc_ctor(0, 2, 0);
} else {
 x_187 = x_177;
}
lean_ctor_set(x_187, 0, x_185);
lean_ctor_set(x_187, 1, x_186);
x_188 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_188, 0, x_173);
lean_ctor_set(x_188, 1, x_187);
x_23 = x_188;
x_24 = x_176;
goto block_90;
}
}
block_90:
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; lean_object* x_76; uint8_t x_77; 
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
x_26 = lean_ctor_get(x_23, 0);
lean_inc(x_26);
lean_dec(x_23);
x_27 = lean_ctor_get(x_25, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_dec(x_25);
x_76 = l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__4___closed__2;
x_77 = l_Lean_Option_get___at___private_Lean_Util_Profile_0__Lean_get__profiler___spec__1(x_1, x_76);
if (x_77 == 0)
{
uint8_t x_78; 
x_78 = 0;
x_29 = x_78;
goto block_75;
}
else
{
double x_79; double x_80; double x_81; lean_object* x_82; lean_object* x_83; uint8_t x_84; lean_object* x_85; double x_86; double x_87; double x_88; uint8_t x_89; 
x_79 = lean_unbox_float(x_28);
x_80 = lean_unbox_float(x_27);
x_81 = lean_float_sub(x_79, x_80);
x_82 = l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__4___closed__3;
x_83 = l_Lean_Option_get___at_Lean_profiler_threshold_getSecs___spec__1(x_1, x_82);
x_84 = 0;
x_85 = lean_unsigned_to_nat(0u);
x_86 = l_Float_ofScientific(x_83, x_84, x_85);
lean_dec(x_83);
x_87 = l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__4___closed__4;
x_88 = lean_float_div(x_86, x_87);
x_89 = lean_float_decLt(x_88, x_81);
x_29 = x_89;
goto block_75;
}
block_75:
{
if (x_6 == 0)
{
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_30 = lean_st_ref_take(x_16, x_24);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = !lean_is_exclusive(x_31);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_34 = lean_ctor_get(x_31, 3);
x_35 = l_Lean_PersistentArray_append___rarg(x_19, x_34);
lean_ctor_set(x_31, 3, x_35);
x_36 = lean_st_ref_set(x_16, x_31, x_32);
x_37 = lean_ctor_get(x_36, 1);
lean_inc(x_37);
lean_dec(x_36);
x_38 = l_MonadExcept_ofExcept___at_Lean_Elab_Tactic_evalTactic___spec__6(x_26, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_37);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_26);
if (lean_obj_tag(x_38) == 0)
{
uint8_t x_39; 
x_39 = !lean_is_exclusive(x_38);
if (x_39 == 0)
{
return x_38;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_38, 0);
x_41 = lean_ctor_get(x_38, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_38);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
else
{
uint8_t x_43; 
x_43 = !lean_is_exclusive(x_38);
if (x_43 == 0)
{
return x_38;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_38, 0);
x_45 = lean_ctor_get(x_38, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_38);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_47 = lean_ctor_get(x_31, 0);
x_48 = lean_ctor_get(x_31, 1);
x_49 = lean_ctor_get(x_31, 2);
x_50 = lean_ctor_get(x_31, 3);
x_51 = lean_ctor_get(x_31, 4);
x_52 = lean_ctor_get(x_31, 5);
x_53 = lean_ctor_get(x_31, 6);
lean_inc(x_53);
lean_inc(x_52);
lean_inc(x_51);
lean_inc(x_50);
lean_inc(x_49);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_31);
x_54 = l_Lean_PersistentArray_append___rarg(x_19, x_50);
x_55 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_55, 0, x_47);
lean_ctor_set(x_55, 1, x_48);
lean_ctor_set(x_55, 2, x_49);
lean_ctor_set(x_55, 3, x_54);
lean_ctor_set(x_55, 4, x_51);
lean_ctor_set(x_55, 5, x_52);
lean_ctor_set(x_55, 6, x_53);
x_56 = lean_st_ref_set(x_16, x_55, x_32);
x_57 = lean_ctor_get(x_56, 1);
lean_inc(x_57);
lean_dec(x_56);
x_58 = l_MonadExcept_ofExcept___at_Lean_Elab_Tactic_evalTactic___spec__6(x_26, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_57);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_26);
if (lean_obj_tag(x_58) == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_59 = lean_ctor_get(x_58, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_58, 1);
lean_inc(x_60);
if (lean_is_exclusive(x_58)) {
 lean_ctor_release(x_58, 0);
 lean_ctor_release(x_58, 1);
 x_61 = x_58;
} else {
 lean_dec_ref(x_58);
 x_61 = lean_box(0);
}
if (lean_is_scalar(x_61)) {
 x_62 = lean_alloc_ctor(0, 2, 0);
} else {
 x_62 = x_61;
}
lean_ctor_set(x_62, 0, x_59);
lean_ctor_set(x_62, 1, x_60);
return x_62;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_63 = lean_ctor_get(x_58, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_58, 1);
lean_inc(x_64);
if (lean_is_exclusive(x_58)) {
 lean_ctor_release(x_58, 0);
 lean_ctor_release(x_58, 1);
 x_65 = x_58;
} else {
 lean_dec_ref(x_58);
 x_65 = lean_box(0);
}
if (lean_is_scalar(x_65)) {
 x_66 = lean_alloc_ctor(1, 2, 0);
} else {
 x_66 = x_65;
}
lean_ctor_set(x_66, 0, x_63);
lean_ctor_set(x_66, 1, x_64);
return x_66;
}
}
}
else
{
lean_object* x_67; double x_68; double x_69; lean_object* x_70; 
x_67 = lean_box(0);
x_68 = lean_unbox_float(x_27);
lean_dec(x_27);
x_69 = lean_unbox_float(x_28);
lean_dec(x_28);
x_70 = l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__3(x_2, x_3, x_4, x_19, x_26, x_1, x_29, x_68, x_69, x_5, x_67, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_24);
return x_70;
}
}
else
{
lean_object* x_71; double x_72; double x_73; lean_object* x_74; 
x_71 = lean_box(0);
x_72 = lean_unbox_float(x_27);
lean_dec(x_27);
x_73 = lean_unbox_float(x_28);
lean_dec(x_28);
x_74 = l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__3(x_2, x_3, x_4, x_19, x_26, x_1, x_29, x_72, x_73, x_5, x_71, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_24);
return x_74;
}
}
}
}
else
{
lean_object* x_189; lean_object* x_190; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; 
x_255 = lean_io_get_num_heartbeats(x_20);
x_256 = lean_ctor_get(x_255, 0);
lean_inc(x_256);
x_257 = lean_ctor_get(x_255, 1);
lean_inc(x_257);
lean_dec(x_255);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_258 = lean_apply_9(x_7, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_257);
if (lean_obj_tag(x_258) == 0)
{
uint8_t x_259; 
x_259 = !lean_is_exclusive(x_258);
if (x_259 == 0)
{
lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; uint8_t x_264; 
x_260 = lean_ctor_get(x_258, 0);
x_261 = lean_ctor_get(x_258, 1);
x_262 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_262, 0, x_260);
x_263 = lean_io_get_num_heartbeats(x_261);
x_264 = !lean_is_exclusive(x_263);
if (x_264 == 0)
{
lean_object* x_265; lean_object* x_266; uint8_t x_267; lean_object* x_268; double x_269; double x_270; lean_object* x_271; lean_object* x_272; 
x_265 = lean_ctor_get(x_263, 0);
x_266 = lean_ctor_get(x_263, 1);
x_267 = 0;
x_268 = lean_unsigned_to_nat(0u);
x_269 = l_Float_ofScientific(x_256, x_267, x_268);
lean_dec(x_256);
x_270 = l_Float_ofScientific(x_265, x_267, x_268);
lean_dec(x_265);
x_271 = lean_box_float(x_269);
x_272 = lean_box_float(x_270);
lean_ctor_set(x_263, 1, x_272);
lean_ctor_set(x_263, 0, x_271);
lean_ctor_set(x_258, 1, x_263);
lean_ctor_set(x_258, 0, x_262);
x_189 = x_258;
x_190 = x_266;
goto block_254;
}
else
{
lean_object* x_273; lean_object* x_274; uint8_t x_275; lean_object* x_276; double x_277; double x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; 
x_273 = lean_ctor_get(x_263, 0);
x_274 = lean_ctor_get(x_263, 1);
lean_inc(x_274);
lean_inc(x_273);
lean_dec(x_263);
x_275 = 0;
x_276 = lean_unsigned_to_nat(0u);
x_277 = l_Float_ofScientific(x_256, x_275, x_276);
lean_dec(x_256);
x_278 = l_Float_ofScientific(x_273, x_275, x_276);
lean_dec(x_273);
x_279 = lean_box_float(x_277);
x_280 = lean_box_float(x_278);
x_281 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_281, 0, x_279);
lean_ctor_set(x_281, 1, x_280);
lean_ctor_set(x_258, 1, x_281);
lean_ctor_set(x_258, 0, x_262);
x_189 = x_258;
x_190 = x_274;
goto block_254;
}
}
else
{
lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; uint8_t x_289; lean_object* x_290; double x_291; double x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; 
x_282 = lean_ctor_get(x_258, 0);
x_283 = lean_ctor_get(x_258, 1);
lean_inc(x_283);
lean_inc(x_282);
lean_dec(x_258);
x_284 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_284, 0, x_282);
x_285 = lean_io_get_num_heartbeats(x_283);
x_286 = lean_ctor_get(x_285, 0);
lean_inc(x_286);
x_287 = lean_ctor_get(x_285, 1);
lean_inc(x_287);
if (lean_is_exclusive(x_285)) {
 lean_ctor_release(x_285, 0);
 lean_ctor_release(x_285, 1);
 x_288 = x_285;
} else {
 lean_dec_ref(x_285);
 x_288 = lean_box(0);
}
x_289 = 0;
x_290 = lean_unsigned_to_nat(0u);
x_291 = l_Float_ofScientific(x_256, x_289, x_290);
lean_dec(x_256);
x_292 = l_Float_ofScientific(x_286, x_289, x_290);
lean_dec(x_286);
x_293 = lean_box_float(x_291);
x_294 = lean_box_float(x_292);
if (lean_is_scalar(x_288)) {
 x_295 = lean_alloc_ctor(0, 2, 0);
} else {
 x_295 = x_288;
}
lean_ctor_set(x_295, 0, x_293);
lean_ctor_set(x_295, 1, x_294);
x_296 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_296, 0, x_284);
lean_ctor_set(x_296, 1, x_295);
x_189 = x_296;
x_190 = x_287;
goto block_254;
}
}
else
{
uint8_t x_297; 
x_297 = !lean_is_exclusive(x_258);
if (x_297 == 0)
{
lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; uint8_t x_302; 
x_298 = lean_ctor_get(x_258, 0);
x_299 = lean_ctor_get(x_258, 1);
x_300 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_300, 0, x_298);
x_301 = lean_io_get_num_heartbeats(x_299);
x_302 = !lean_is_exclusive(x_301);
if (x_302 == 0)
{
lean_object* x_303; lean_object* x_304; uint8_t x_305; lean_object* x_306; double x_307; double x_308; lean_object* x_309; lean_object* x_310; 
x_303 = lean_ctor_get(x_301, 0);
x_304 = lean_ctor_get(x_301, 1);
x_305 = 0;
x_306 = lean_unsigned_to_nat(0u);
x_307 = l_Float_ofScientific(x_256, x_305, x_306);
lean_dec(x_256);
x_308 = l_Float_ofScientific(x_303, x_305, x_306);
lean_dec(x_303);
x_309 = lean_box_float(x_307);
x_310 = lean_box_float(x_308);
lean_ctor_set(x_301, 1, x_310);
lean_ctor_set(x_301, 0, x_309);
lean_ctor_set_tag(x_258, 0);
lean_ctor_set(x_258, 1, x_301);
lean_ctor_set(x_258, 0, x_300);
x_189 = x_258;
x_190 = x_304;
goto block_254;
}
else
{
lean_object* x_311; lean_object* x_312; uint8_t x_313; lean_object* x_314; double x_315; double x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; 
x_311 = lean_ctor_get(x_301, 0);
x_312 = lean_ctor_get(x_301, 1);
lean_inc(x_312);
lean_inc(x_311);
lean_dec(x_301);
x_313 = 0;
x_314 = lean_unsigned_to_nat(0u);
x_315 = l_Float_ofScientific(x_256, x_313, x_314);
lean_dec(x_256);
x_316 = l_Float_ofScientific(x_311, x_313, x_314);
lean_dec(x_311);
x_317 = lean_box_float(x_315);
x_318 = lean_box_float(x_316);
x_319 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_319, 0, x_317);
lean_ctor_set(x_319, 1, x_318);
lean_ctor_set_tag(x_258, 0);
lean_ctor_set(x_258, 1, x_319);
lean_ctor_set(x_258, 0, x_300);
x_189 = x_258;
x_190 = x_312;
goto block_254;
}
}
else
{
lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; uint8_t x_327; lean_object* x_328; double x_329; double x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; 
x_320 = lean_ctor_get(x_258, 0);
x_321 = lean_ctor_get(x_258, 1);
lean_inc(x_321);
lean_inc(x_320);
lean_dec(x_258);
x_322 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_322, 0, x_320);
x_323 = lean_io_get_num_heartbeats(x_321);
x_324 = lean_ctor_get(x_323, 0);
lean_inc(x_324);
x_325 = lean_ctor_get(x_323, 1);
lean_inc(x_325);
if (lean_is_exclusive(x_323)) {
 lean_ctor_release(x_323, 0);
 lean_ctor_release(x_323, 1);
 x_326 = x_323;
} else {
 lean_dec_ref(x_323);
 x_326 = lean_box(0);
}
x_327 = 0;
x_328 = lean_unsigned_to_nat(0u);
x_329 = l_Float_ofScientific(x_256, x_327, x_328);
lean_dec(x_256);
x_330 = l_Float_ofScientific(x_324, x_327, x_328);
lean_dec(x_324);
x_331 = lean_box_float(x_329);
x_332 = lean_box_float(x_330);
if (lean_is_scalar(x_326)) {
 x_333 = lean_alloc_ctor(0, 2, 0);
} else {
 x_333 = x_326;
}
lean_ctor_set(x_333, 0, x_331);
lean_ctor_set(x_333, 1, x_332);
x_334 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_334, 0, x_322);
lean_ctor_set(x_334, 1, x_333);
x_189 = x_334;
x_190 = x_325;
goto block_254;
}
}
block_254:
{
lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; uint8_t x_195; lean_object* x_242; uint8_t x_243; 
x_191 = lean_ctor_get(x_189, 1);
lean_inc(x_191);
x_192 = lean_ctor_get(x_189, 0);
lean_inc(x_192);
lean_dec(x_189);
x_193 = lean_ctor_get(x_191, 0);
lean_inc(x_193);
x_194 = lean_ctor_get(x_191, 1);
lean_inc(x_194);
lean_dec(x_191);
x_242 = l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__4___closed__2;
x_243 = l_Lean_Option_get___at___private_Lean_Util_Profile_0__Lean_get__profiler___spec__1(x_1, x_242);
if (x_243 == 0)
{
uint8_t x_244; 
x_244 = 0;
x_195 = x_244;
goto block_241;
}
else
{
double x_245; double x_246; double x_247; lean_object* x_248; lean_object* x_249; uint8_t x_250; lean_object* x_251; double x_252; uint8_t x_253; 
x_245 = lean_unbox_float(x_194);
x_246 = lean_unbox_float(x_193);
x_247 = lean_float_sub(x_245, x_246);
x_248 = l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__4___closed__3;
x_249 = l_Lean_Option_get___at_Lean_profiler_threshold_getSecs___spec__1(x_1, x_248);
x_250 = 0;
x_251 = lean_unsigned_to_nat(0u);
x_252 = l_Float_ofScientific(x_249, x_250, x_251);
lean_dec(x_249);
x_253 = lean_float_decLt(x_252, x_247);
x_195 = x_253;
goto block_241;
}
block_241:
{
if (x_6 == 0)
{
if (x_195 == 0)
{
lean_object* x_196; lean_object* x_197; lean_object* x_198; uint8_t x_199; 
lean_dec(x_194);
lean_dec(x_193);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_196 = lean_st_ref_take(x_16, x_190);
x_197 = lean_ctor_get(x_196, 0);
lean_inc(x_197);
x_198 = lean_ctor_get(x_196, 1);
lean_inc(x_198);
lean_dec(x_196);
x_199 = !lean_is_exclusive(x_197);
if (x_199 == 0)
{
lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; 
x_200 = lean_ctor_get(x_197, 3);
x_201 = l_Lean_PersistentArray_append___rarg(x_19, x_200);
lean_ctor_set(x_197, 3, x_201);
x_202 = lean_st_ref_set(x_16, x_197, x_198);
x_203 = lean_ctor_get(x_202, 1);
lean_inc(x_203);
lean_dec(x_202);
x_204 = l_MonadExcept_ofExcept___at_Lean_Elab_Tactic_evalTactic___spec__6(x_192, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_203);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_192);
if (lean_obj_tag(x_204) == 0)
{
uint8_t x_205; 
x_205 = !lean_is_exclusive(x_204);
if (x_205 == 0)
{
return x_204;
}
else
{
lean_object* x_206; lean_object* x_207; lean_object* x_208; 
x_206 = lean_ctor_get(x_204, 0);
x_207 = lean_ctor_get(x_204, 1);
lean_inc(x_207);
lean_inc(x_206);
lean_dec(x_204);
x_208 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_208, 0, x_206);
lean_ctor_set(x_208, 1, x_207);
return x_208;
}
}
else
{
uint8_t x_209; 
x_209 = !lean_is_exclusive(x_204);
if (x_209 == 0)
{
return x_204;
}
else
{
lean_object* x_210; lean_object* x_211; lean_object* x_212; 
x_210 = lean_ctor_get(x_204, 0);
x_211 = lean_ctor_get(x_204, 1);
lean_inc(x_211);
lean_inc(x_210);
lean_dec(x_204);
x_212 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_212, 0, x_210);
lean_ctor_set(x_212, 1, x_211);
return x_212;
}
}
}
else
{
lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; 
x_213 = lean_ctor_get(x_197, 0);
x_214 = lean_ctor_get(x_197, 1);
x_215 = lean_ctor_get(x_197, 2);
x_216 = lean_ctor_get(x_197, 3);
x_217 = lean_ctor_get(x_197, 4);
x_218 = lean_ctor_get(x_197, 5);
x_219 = lean_ctor_get(x_197, 6);
lean_inc(x_219);
lean_inc(x_218);
lean_inc(x_217);
lean_inc(x_216);
lean_inc(x_215);
lean_inc(x_214);
lean_inc(x_213);
lean_dec(x_197);
x_220 = l_Lean_PersistentArray_append___rarg(x_19, x_216);
x_221 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_221, 0, x_213);
lean_ctor_set(x_221, 1, x_214);
lean_ctor_set(x_221, 2, x_215);
lean_ctor_set(x_221, 3, x_220);
lean_ctor_set(x_221, 4, x_217);
lean_ctor_set(x_221, 5, x_218);
lean_ctor_set(x_221, 6, x_219);
x_222 = lean_st_ref_set(x_16, x_221, x_198);
x_223 = lean_ctor_get(x_222, 1);
lean_inc(x_223);
lean_dec(x_222);
x_224 = l_MonadExcept_ofExcept___at_Lean_Elab_Tactic_evalTactic___spec__6(x_192, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_223);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_192);
if (lean_obj_tag(x_224) == 0)
{
lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; 
x_225 = lean_ctor_get(x_224, 0);
lean_inc(x_225);
x_226 = lean_ctor_get(x_224, 1);
lean_inc(x_226);
if (lean_is_exclusive(x_224)) {
 lean_ctor_release(x_224, 0);
 lean_ctor_release(x_224, 1);
 x_227 = x_224;
} else {
 lean_dec_ref(x_224);
 x_227 = lean_box(0);
}
if (lean_is_scalar(x_227)) {
 x_228 = lean_alloc_ctor(0, 2, 0);
} else {
 x_228 = x_227;
}
lean_ctor_set(x_228, 0, x_225);
lean_ctor_set(x_228, 1, x_226);
return x_228;
}
else
{
lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; 
x_229 = lean_ctor_get(x_224, 0);
lean_inc(x_229);
x_230 = lean_ctor_get(x_224, 1);
lean_inc(x_230);
if (lean_is_exclusive(x_224)) {
 lean_ctor_release(x_224, 0);
 lean_ctor_release(x_224, 1);
 x_231 = x_224;
} else {
 lean_dec_ref(x_224);
 x_231 = lean_box(0);
}
if (lean_is_scalar(x_231)) {
 x_232 = lean_alloc_ctor(1, 2, 0);
} else {
 x_232 = x_231;
}
lean_ctor_set(x_232, 0, x_229);
lean_ctor_set(x_232, 1, x_230);
return x_232;
}
}
}
else
{
lean_object* x_233; double x_234; double x_235; lean_object* x_236; 
x_233 = lean_box(0);
x_234 = lean_unbox_float(x_193);
lean_dec(x_193);
x_235 = lean_unbox_float(x_194);
lean_dec(x_194);
x_236 = l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__3(x_2, x_3, x_4, x_19, x_192, x_1, x_195, x_234, x_235, x_5, x_233, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_190);
return x_236;
}
}
else
{
lean_object* x_237; double x_238; double x_239; lean_object* x_240; 
x_237 = lean_box(0);
x_238 = lean_unbox_float(x_193);
lean_dec(x_193);
x_239 = lean_unbox_float(x_194);
lean_dec(x_194);
x_240 = l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__3(x_2, x_3, x_4, x_19, x_192, x_1, x_195, x_238, x_239, x_5, x_237, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_190);
return x_240;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_15 = lean_ctor_get(x_12, 2);
lean_inc(x_15);
lean_inc(x_1);
x_16 = l_Lean_isTracingEnabledFor___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__1(x_1, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_unbox(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_dec(x_16);
x_20 = l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__4___closed__2;
x_21 = l_Lean_Option_get___at___private_Lean_Util_Profile_0__Lean_get__profiler___spec__1(x_15, x_20);
if (x_21 == 0)
{
lean_object* x_22; 
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_22 = lean_apply_9(x_3, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_19);
if (lean_obj_tag(x_22) == 0)
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
return x_22;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_22, 0);
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_22);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
else
{
uint8_t x_27; 
x_27 = !lean_is_exclusive(x_22);
if (x_27 == 0)
{
return x_22;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_22, 0);
x_29 = lean_ctor_get(x_22, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_22);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
else
{
lean_object* x_31; uint8_t x_32; lean_object* x_33; 
x_31 = lean_box(0);
x_32 = lean_unbox(x_17);
lean_dec(x_17);
x_33 = l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__4(x_15, x_1, x_4, x_5, x_2, x_32, x_3, x_31, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_19);
return x_33;
}
}
else
{
lean_object* x_34; lean_object* x_35; uint8_t x_36; lean_object* x_37; 
x_34 = lean_ctor_get(x_16, 1);
lean_inc(x_34);
lean_dec(x_16);
x_35 = lean_box(0);
x_36 = lean_unbox(x_17);
lean_dec(x_17);
x_37 = l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__4(x_15, x_1, x_4, x_5, x_2, x_36, x_3, x_35, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_34);
return x_37;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_evalTactic___spec__7(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; 
x_14 = lean_usize_dec_eq(x_2, x_3);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_4);
x_15 = lean_array_uget(x_1, x_2);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_16 = l_Lean_Elab_Tactic_evalTactic(x_15, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; size_t x_19; size_t x_20; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = 1;
x_20 = lean_usize_add(x_2, x_19);
x_2 = x_20;
x_4 = x_17;
x_13 = x_18;
goto _start;
}
else
{
uint8_t x_22; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_22 = !lean_is_exclusive(x_16);
if (x_22 == 0)
{
return x_16;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_16, 0);
x_24 = lean_ctor_get(x_16, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_16);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
else
{
lean_object* x_26; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_4);
lean_ctor_set(x_26, 1, x_13);
return x_26;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Tactic_evalTactic___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__5___closed__2;
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_1);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_10);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at_Lean_Elab_Tactic_evalTactic___spec__9___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_apply_8(x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
x_15 = l_Lean_profileitIOUnsafe___rarg(x_1, x_2, x_14, x_4, x_13);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at_Lean_Elab_Tactic_evalTactic___spec__9(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_profileitM___at_Lean_Elab_Tactic_evalTactic___spec__9___rarg___boxed), 13, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalTactic___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_box(0);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalTactic___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; 
x_12 = l_Lean_MessageData_ofSyntax(x_1);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalTactic___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_4);
x_14 = l_Lean_Elab_Tactic_saveState___rarg(x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Lean_addTrace___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__2___closed__2;
x_18 = l_Lean_Elab_Tactic_evalTactic_expandEval(x_1, x_15, x_2, x_3, x_17, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_16);
return x_18;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalTactic___lambda__4___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_Tactic_tacticElabAttribute;
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalTactic___lambda__4___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_macroAttribute;
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalTactic___lambda__4___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("tactic '", 8);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalTactic___lambda__4___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Tactic_evalTactic___lambda__4___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalTactic___lambda__4___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("' has not been implemented", 26);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalTactic___lambda__4___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Tactic_evalTactic___lambda__4___closed__5;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalTactic___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_st_ref_get(x_9, x_10);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_11, 1);
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
lean_dec(x_13);
lean_inc(x_1);
x_16 = l_Lean_Syntax_getKind(x_1);
x_17 = l_Lean_Elab_Tactic_evalTactic___lambda__4___closed__1;
lean_inc(x_16);
x_18 = l_Lean_KeyedDeclsAttribute_getEntries___rarg(x_17, x_15, x_16);
x_19 = lean_st_ref_get(x_9, x_14);
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_21 = lean_ctor_get(x_19, 0);
x_22 = lean_ctor_get(x_19, 1);
x_23 = lean_ctor_get(x_21, 0);
lean_inc(x_23);
lean_dec(x_21);
x_24 = l_Lean_Elab_Tactic_evalTactic___lambda__4___closed__2;
lean_inc(x_16);
x_25 = l_Lean_KeyedDeclsAttribute_getEntries___rarg(x_24, x_23, x_16);
x_26 = l_List_isEmpty___rarg(x_18);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
lean_free_object(x_19);
lean_dec(x_16);
lean_free_object(x_11);
x_27 = lean_box(0);
x_28 = l_Lean_Elab_Tactic_evalTactic___lambda__3(x_1, x_25, x_18, x_27, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_22);
return x_28;
}
else
{
uint8_t x_29; 
x_29 = l_List_isEmpty___rarg(x_25);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; 
lean_free_object(x_19);
lean_dec(x_16);
lean_free_object(x_11);
x_30 = lean_box(0);
x_31 = l_Lean_Elab_Tactic_evalTactic___lambda__3(x_1, x_25, x_18, x_30, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_22);
return x_31;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
lean_dec(x_25);
lean_dec(x_18);
x_32 = l_Lean_MessageData_ofName(x_16);
x_33 = l_Lean_Elab_Tactic_evalTactic___lambda__4___closed__4;
lean_ctor_set_tag(x_19, 7);
lean_ctor_set(x_19, 1, x_32);
lean_ctor_set(x_19, 0, x_33);
x_34 = l_Lean_Elab_Tactic_evalTactic___lambda__4___closed__6;
lean_ctor_set_tag(x_11, 7);
lean_ctor_set(x_11, 1, x_34);
lean_ctor_set(x_11, 0, x_19);
x_35 = l_Lean_throwErrorAt___at_Lean_Elab_Tactic_evalTactic___spec__1(x_1, x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_22);
x_36 = !lean_is_exclusive(x_35);
if (x_36 == 0)
{
return x_35;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_35, 0);
x_38 = lean_ctor_get(x_35, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_35);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_40 = lean_ctor_get(x_19, 0);
x_41 = lean_ctor_get(x_19, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_19);
x_42 = lean_ctor_get(x_40, 0);
lean_inc(x_42);
lean_dec(x_40);
x_43 = l_Lean_Elab_Tactic_evalTactic___lambda__4___closed__2;
lean_inc(x_16);
x_44 = l_Lean_KeyedDeclsAttribute_getEntries___rarg(x_43, x_42, x_16);
x_45 = l_List_isEmpty___rarg(x_18);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; 
lean_dec(x_16);
lean_free_object(x_11);
x_46 = lean_box(0);
x_47 = l_Lean_Elab_Tactic_evalTactic___lambda__3(x_1, x_44, x_18, x_46, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_41);
return x_47;
}
else
{
uint8_t x_48; 
x_48 = l_List_isEmpty___rarg(x_44);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; 
lean_dec(x_16);
lean_free_object(x_11);
x_49 = lean_box(0);
x_50 = l_Lean_Elab_Tactic_evalTactic___lambda__3(x_1, x_44, x_18, x_49, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_41);
return x_50;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
lean_dec(x_44);
lean_dec(x_18);
x_51 = l_Lean_MessageData_ofName(x_16);
x_52 = l_Lean_Elab_Tactic_evalTactic___lambda__4___closed__4;
x_53 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_51);
x_54 = l_Lean_Elab_Tactic_evalTactic___lambda__4___closed__6;
lean_ctor_set_tag(x_11, 7);
lean_ctor_set(x_11, 1, x_54);
lean_ctor_set(x_11, 0, x_53);
x_55 = l_Lean_throwErrorAt___at_Lean_Elab_Tactic_evalTactic___spec__1(x_1, x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_41);
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
if (lean_is_exclusive(x_55)) {
 lean_ctor_release(x_55, 0);
 lean_ctor_release(x_55, 1);
 x_58 = x_55;
} else {
 lean_dec_ref(x_55);
 x_58 = lean_box(0);
}
if (lean_is_scalar(x_58)) {
 x_59 = lean_alloc_ctor(1, 2, 0);
} else {
 x_59 = x_58;
}
lean_ctor_set(x_59, 0, x_56);
lean_ctor_set(x_59, 1, x_57);
return x_59;
}
}
}
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; uint8_t x_73; 
x_60 = lean_ctor_get(x_11, 0);
x_61 = lean_ctor_get(x_11, 1);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_11);
x_62 = lean_ctor_get(x_60, 0);
lean_inc(x_62);
lean_dec(x_60);
lean_inc(x_1);
x_63 = l_Lean_Syntax_getKind(x_1);
x_64 = l_Lean_Elab_Tactic_evalTactic___lambda__4___closed__1;
lean_inc(x_63);
x_65 = l_Lean_KeyedDeclsAttribute_getEntries___rarg(x_64, x_62, x_63);
x_66 = lean_st_ref_get(x_9, x_61);
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
if (lean_is_exclusive(x_66)) {
 lean_ctor_release(x_66, 0);
 lean_ctor_release(x_66, 1);
 x_69 = x_66;
} else {
 lean_dec_ref(x_66);
 x_69 = lean_box(0);
}
x_70 = lean_ctor_get(x_67, 0);
lean_inc(x_70);
lean_dec(x_67);
x_71 = l_Lean_Elab_Tactic_evalTactic___lambda__4___closed__2;
lean_inc(x_63);
x_72 = l_Lean_KeyedDeclsAttribute_getEntries___rarg(x_71, x_70, x_63);
x_73 = l_List_isEmpty___rarg(x_65);
if (x_73 == 0)
{
lean_object* x_74; lean_object* x_75; 
lean_dec(x_69);
lean_dec(x_63);
x_74 = lean_box(0);
x_75 = l_Lean_Elab_Tactic_evalTactic___lambda__3(x_1, x_72, x_65, x_74, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_68);
return x_75;
}
else
{
uint8_t x_76; 
x_76 = l_List_isEmpty___rarg(x_72);
if (x_76 == 0)
{
lean_object* x_77; lean_object* x_78; 
lean_dec(x_69);
lean_dec(x_63);
x_77 = lean_box(0);
x_78 = l_Lean_Elab_Tactic_evalTactic___lambda__3(x_1, x_72, x_65, x_77, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_68);
return x_78;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; 
lean_dec(x_72);
lean_dec(x_65);
x_79 = l_Lean_MessageData_ofName(x_63);
x_80 = l_Lean_Elab_Tactic_evalTactic___lambda__4___closed__4;
if (lean_is_scalar(x_69)) {
 x_81 = lean_alloc_ctor(7, 2, 0);
} else {
 x_81 = x_69;
 lean_ctor_set_tag(x_81, 7);
}
lean_ctor_set(x_81, 0, x_80);
lean_ctor_set(x_81, 1, x_79);
x_82 = l_Lean_Elab_Tactic_evalTactic___lambda__4___closed__6;
x_83 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_83, 0, x_81);
lean_ctor_set(x_83, 1, x_82);
x_84 = l_Lean_throwErrorAt___at_Lean_Elab_Tactic_evalTactic___spec__1(x_1, x_83, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_68);
x_85 = lean_ctor_get(x_84, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_84, 1);
lean_inc(x_86);
if (lean_is_exclusive(x_84)) {
 lean_ctor_release(x_84, 0);
 lean_ctor_release(x_84, 1);
 x_87 = x_84;
} else {
 lean_dec_ref(x_84);
 x_87 = lean_box(0);
}
if (lean_is_scalar(x_87)) {
 x_88 = lean_alloc_ctor(1, 2, 0);
} else {
 x_88 = x_87;
}
lean_ctor_set(x_88, 0, x_85);
lean_ctor_set(x_88, 1, x_86);
return x_88;
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalTactic___lambda__5___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalTactic___lambda__1___boxed), 3, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalTactic___lambda__5___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("null", 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalTactic___lambda__5___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Tactic_evalTactic___lambda__5___closed__2;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalTactic___lambda__5___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("step", 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalTactic___lambda__5___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Tactic_mkTacticAttribute___closed__8;
x_2 = l_Lean_Elab_Tactic_evalTactic___lambda__5___closed__4;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalTactic___lambda__5___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("unexpected tactic", 17);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalTactic___lambda__5___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Tactic_evalTactic___lambda__5___closed__6;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalTactic___lambda__5___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalTactic___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_8);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; lean_object* x_24; uint8_t x_25; 
x_12 = lean_ctor_get(x_8, 0);
x_13 = lean_ctor_get(x_8, 1);
x_14 = lean_ctor_get(x_8, 2);
x_15 = lean_ctor_get(x_8, 3);
x_16 = lean_ctor_get(x_8, 4);
x_17 = lean_ctor_get(x_8, 5);
x_18 = lean_ctor_get(x_8, 6);
x_19 = lean_ctor_get(x_8, 7);
x_20 = lean_ctor_get(x_8, 8);
x_21 = lean_ctor_get(x_8, 9);
x_22 = lean_ctor_get(x_8, 10);
x_23 = lean_ctor_get_uint8(x_8, sizeof(void*)*11);
x_24 = l_Lean_replaceRef(x_1, x_17);
lean_dec(x_17);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_24);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_ctor_set(x_8, 5, x_24);
x_25 = lean_nat_dec_eq(x_15, x_16);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
lean_dec(x_8);
x_26 = lean_unsigned_to_nat(1u);
x_27 = lean_nat_add(x_15, x_26);
lean_dec(x_15);
x_28 = lean_alloc_ctor(0, 11, 1);
lean_ctor_set(x_28, 0, x_12);
lean_ctor_set(x_28, 1, x_13);
lean_ctor_set(x_28, 2, x_14);
lean_ctor_set(x_28, 3, x_27);
lean_ctor_set(x_28, 4, x_16);
lean_ctor_set(x_28, 5, x_24);
lean_ctor_set(x_28, 6, x_18);
lean_ctor_set(x_28, 7, x_19);
lean_ctor_set(x_28, 8, x_20);
lean_ctor_set(x_28, 9, x_21);
lean_ctor_set(x_28, 10, x_22);
lean_ctor_set_uint8(x_28, sizeof(void*)*11, x_23);
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_29; lean_object* x_30; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_29 = l_Lean_Elab_Tactic_evalTactic___lambda__5___closed__1;
x_30 = l_Lean_Core_withFreshMacroScope___rarg(x_29, x_28, x_9, x_10);
return x_30;
}
case 1:
{
lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_31 = lean_ctor_get(x_1, 1);
lean_inc(x_31);
x_32 = l_Lean_Elab_Tactic_evalTactic___lambda__5___closed__3;
x_33 = lean_name_eq(x_31, x_32);
lean_dec(x_31);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
lean_inc(x_1);
x_34 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalTactic___lambda__2___boxed), 11, 1);
lean_closure_set(x_34, 0, x_1);
lean_inc(x_1);
x_35 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalTactic___lambda__4), 10, 1);
lean_closure_set(x_35, 0, x_1);
x_36 = l_Lean_Syntax_getKind(x_1);
x_37 = 1;
x_38 = l_Lean_Name_toString(x_36, x_37);
x_39 = l_Lean_Elab_Tactic_evalTactic___lambda__5___closed__5;
x_40 = lean_box(x_37);
x_41 = lean_alloc_closure((void*)(l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___boxed), 14, 11);
lean_closure_set(x_41, 0, x_39);
lean_closure_set(x_41, 1, x_34);
lean_closure_set(x_41, 2, x_35);
lean_closure_set(x_41, 3, x_40);
lean_closure_set(x_41, 4, x_38);
lean_closure_set(x_41, 5, x_2);
lean_closure_set(x_41, 6, x_3);
lean_closure_set(x_41, 7, x_4);
lean_closure_set(x_41, 8, x_5);
lean_closure_set(x_41, 9, x_6);
lean_closure_set(x_41, 10, x_7);
x_42 = l_Lean_Core_withFreshMacroScope___rarg(x_41, x_28, x_9, x_10);
return x_42;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; 
x_43 = l_Lean_Syntax_getArgs(x_1);
lean_dec(x_1);
x_44 = lean_array_get_size(x_43);
x_45 = lean_unsigned_to_nat(0u);
x_46 = lean_nat_dec_lt(x_45, x_44);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; 
lean_dec(x_44);
lean_dec(x_43);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_47 = l_Lean_Elab_Tactic_evalTactic___lambda__5___closed__1;
x_48 = l_Lean_Core_withFreshMacroScope___rarg(x_47, x_28, x_9, x_10);
return x_48;
}
else
{
uint8_t x_49; 
x_49 = lean_nat_dec_le(x_44, x_44);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; 
lean_dec(x_44);
lean_dec(x_43);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_50 = l_Lean_Elab_Tactic_evalTactic___lambda__5___closed__1;
x_51 = l_Lean_Core_withFreshMacroScope___rarg(x_50, x_28, x_9, x_10);
return x_51;
}
else
{
size_t x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_52 = lean_usize_of_nat(x_44);
lean_dec(x_44);
x_53 = lean_box(0);
x_54 = l_Lean_Elab_Tactic_evalTactic___lambda__5___boxed__const__1;
x_55 = lean_box_usize(x_52);
x_56 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_evalTactic___spec__7___boxed), 13, 10);
lean_closure_set(x_56, 0, x_43);
lean_closure_set(x_56, 1, x_54);
lean_closure_set(x_56, 2, x_55);
lean_closure_set(x_56, 3, x_53);
lean_closure_set(x_56, 4, x_2);
lean_closure_set(x_56, 5, x_3);
lean_closure_set(x_56, 6, x_4);
lean_closure_set(x_56, 7, x_5);
lean_closure_set(x_56, 8, x_6);
lean_closure_set(x_56, 9, x_7);
x_57 = l_Lean_Core_withFreshMacroScope___rarg(x_56, x_28, x_9, x_10);
return x_57;
}
}
}
}
case 2:
{
lean_object* x_58; uint8_t x_59; 
lean_inc(x_1);
x_58 = l_Lean_MessageData_ofSyntax(x_1);
x_59 = !lean_is_exclusive(x_1);
if (x_59 == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_60 = lean_ctor_get(x_1, 1);
lean_dec(x_60);
x_61 = lean_ctor_get(x_1, 0);
lean_dec(x_61);
x_62 = l_Lean_indentD(x_58);
x_63 = l_Lean_Elab_Tactic_evalTactic___lambda__5___closed__7;
lean_ctor_set_tag(x_1, 7);
lean_ctor_set(x_1, 1, x_62);
lean_ctor_set(x_1, 0, x_63);
x_64 = l_Lean_Elab_Term_reportUnsolvedGoals___closed__7;
x_65 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_65, 0, x_1);
lean_ctor_set(x_65, 1, x_64);
x_66 = lean_alloc_closure((void*)(l_Lean_throwError___at_Lean_Elab_Tactic_evalTactic_throwExs___spec__2___boxed), 10, 7);
lean_closure_set(x_66, 0, x_65);
lean_closure_set(x_66, 1, x_2);
lean_closure_set(x_66, 2, x_3);
lean_closure_set(x_66, 3, x_4);
lean_closure_set(x_66, 4, x_5);
lean_closure_set(x_66, 5, x_6);
lean_closure_set(x_66, 6, x_7);
x_67 = l_Lean_Core_withFreshMacroScope___rarg(x_66, x_28, x_9, x_10);
return x_67;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
lean_dec(x_1);
x_68 = l_Lean_indentD(x_58);
x_69 = l_Lean_Elab_Tactic_evalTactic___lambda__5___closed__7;
x_70 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_68);
x_71 = l_Lean_Elab_Term_reportUnsolvedGoals___closed__7;
x_72 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_71);
x_73 = lean_alloc_closure((void*)(l_Lean_throwError___at_Lean_Elab_Tactic_evalTactic_throwExs___spec__2___boxed), 10, 7);
lean_closure_set(x_73, 0, x_72);
lean_closure_set(x_73, 1, x_2);
lean_closure_set(x_73, 2, x_3);
lean_closure_set(x_73, 3, x_4);
lean_closure_set(x_73, 4, x_5);
lean_closure_set(x_73, 5, x_6);
lean_closure_set(x_73, 6, x_7);
x_74 = l_Lean_Core_withFreshMacroScope___rarg(x_73, x_28, x_9, x_10);
return x_74;
}
}
default: 
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_75 = l_Lean_MessageData_ofSyntax(x_1);
x_76 = l_Lean_indentD(x_75);
x_77 = l_Lean_Elab_Tactic_evalTactic___lambda__5___closed__7;
x_78 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_76);
x_79 = l_Lean_Elab_Term_reportUnsolvedGoals___closed__7;
x_80 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_79);
x_81 = lean_alloc_closure((void*)(l_Lean_throwError___at_Lean_Elab_Tactic_evalTactic_throwExs___spec__2___boxed), 10, 7);
lean_closure_set(x_81, 0, x_80);
lean_closure_set(x_81, 1, x_2);
lean_closure_set(x_81, 2, x_3);
lean_closure_set(x_81, 3, x_4);
lean_closure_set(x_81, 4, x_5);
lean_closure_set(x_81, 5, x_6);
lean_closure_set(x_81, 6, x_7);
x_82 = l_Lean_Core_withFreshMacroScope___rarg(x_81, x_28, x_9, x_10);
return x_82;
}
}
}
else
{
lean_object* x_83; 
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_1);
x_83 = l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Tactic_evalTactic___spec__8(x_24, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_83;
}
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; uint8_t x_95; lean_object* x_96; lean_object* x_97; uint8_t x_98; 
x_84 = lean_ctor_get(x_8, 0);
x_85 = lean_ctor_get(x_8, 1);
x_86 = lean_ctor_get(x_8, 2);
x_87 = lean_ctor_get(x_8, 3);
x_88 = lean_ctor_get(x_8, 4);
x_89 = lean_ctor_get(x_8, 5);
x_90 = lean_ctor_get(x_8, 6);
x_91 = lean_ctor_get(x_8, 7);
x_92 = lean_ctor_get(x_8, 8);
x_93 = lean_ctor_get(x_8, 9);
x_94 = lean_ctor_get(x_8, 10);
x_95 = lean_ctor_get_uint8(x_8, sizeof(void*)*11);
lean_inc(x_94);
lean_inc(x_93);
lean_inc(x_92);
lean_inc(x_91);
lean_inc(x_90);
lean_inc(x_89);
lean_inc(x_88);
lean_inc(x_87);
lean_inc(x_86);
lean_inc(x_85);
lean_inc(x_84);
lean_dec(x_8);
x_96 = l_Lean_replaceRef(x_1, x_89);
lean_dec(x_89);
lean_inc(x_94);
lean_inc(x_93);
lean_inc(x_92);
lean_inc(x_91);
lean_inc(x_90);
lean_inc(x_96);
lean_inc(x_88);
lean_inc(x_87);
lean_inc(x_86);
lean_inc(x_85);
lean_inc(x_84);
x_97 = lean_alloc_ctor(0, 11, 1);
lean_ctor_set(x_97, 0, x_84);
lean_ctor_set(x_97, 1, x_85);
lean_ctor_set(x_97, 2, x_86);
lean_ctor_set(x_97, 3, x_87);
lean_ctor_set(x_97, 4, x_88);
lean_ctor_set(x_97, 5, x_96);
lean_ctor_set(x_97, 6, x_90);
lean_ctor_set(x_97, 7, x_91);
lean_ctor_set(x_97, 8, x_92);
lean_ctor_set(x_97, 9, x_93);
lean_ctor_set(x_97, 10, x_94);
lean_ctor_set_uint8(x_97, sizeof(void*)*11, x_95);
x_98 = lean_nat_dec_eq(x_87, x_88);
if (x_98 == 0)
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; 
lean_dec(x_97);
x_99 = lean_unsigned_to_nat(1u);
x_100 = lean_nat_add(x_87, x_99);
lean_dec(x_87);
x_101 = lean_alloc_ctor(0, 11, 1);
lean_ctor_set(x_101, 0, x_84);
lean_ctor_set(x_101, 1, x_85);
lean_ctor_set(x_101, 2, x_86);
lean_ctor_set(x_101, 3, x_100);
lean_ctor_set(x_101, 4, x_88);
lean_ctor_set(x_101, 5, x_96);
lean_ctor_set(x_101, 6, x_90);
lean_ctor_set(x_101, 7, x_91);
lean_ctor_set(x_101, 8, x_92);
lean_ctor_set(x_101, 9, x_93);
lean_ctor_set(x_101, 10, x_94);
lean_ctor_set_uint8(x_101, sizeof(void*)*11, x_95);
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_102; lean_object* x_103; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_102 = l_Lean_Elab_Tactic_evalTactic___lambda__5___closed__1;
x_103 = l_Lean_Core_withFreshMacroScope___rarg(x_102, x_101, x_9, x_10);
return x_103;
}
case 1:
{
lean_object* x_104; lean_object* x_105; uint8_t x_106; 
x_104 = lean_ctor_get(x_1, 1);
lean_inc(x_104);
x_105 = l_Lean_Elab_Tactic_evalTactic___lambda__5___closed__3;
x_106 = lean_name_eq(x_104, x_105);
lean_dec(x_104);
if (x_106 == 0)
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; uint8_t x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; 
lean_inc(x_1);
x_107 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalTactic___lambda__2___boxed), 11, 1);
lean_closure_set(x_107, 0, x_1);
lean_inc(x_1);
x_108 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalTactic___lambda__4), 10, 1);
lean_closure_set(x_108, 0, x_1);
x_109 = l_Lean_Syntax_getKind(x_1);
x_110 = 1;
x_111 = l_Lean_Name_toString(x_109, x_110);
x_112 = l_Lean_Elab_Tactic_evalTactic___lambda__5___closed__5;
x_113 = lean_box(x_110);
x_114 = lean_alloc_closure((void*)(l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___boxed), 14, 11);
lean_closure_set(x_114, 0, x_112);
lean_closure_set(x_114, 1, x_107);
lean_closure_set(x_114, 2, x_108);
lean_closure_set(x_114, 3, x_113);
lean_closure_set(x_114, 4, x_111);
lean_closure_set(x_114, 5, x_2);
lean_closure_set(x_114, 6, x_3);
lean_closure_set(x_114, 7, x_4);
lean_closure_set(x_114, 8, x_5);
lean_closure_set(x_114, 9, x_6);
lean_closure_set(x_114, 10, x_7);
x_115 = l_Lean_Core_withFreshMacroScope___rarg(x_114, x_101, x_9, x_10);
return x_115;
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; uint8_t x_119; 
x_116 = l_Lean_Syntax_getArgs(x_1);
lean_dec(x_1);
x_117 = lean_array_get_size(x_116);
x_118 = lean_unsigned_to_nat(0u);
x_119 = lean_nat_dec_lt(x_118, x_117);
if (x_119 == 0)
{
lean_object* x_120; lean_object* x_121; 
lean_dec(x_117);
lean_dec(x_116);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_120 = l_Lean_Elab_Tactic_evalTactic___lambda__5___closed__1;
x_121 = l_Lean_Core_withFreshMacroScope___rarg(x_120, x_101, x_9, x_10);
return x_121;
}
else
{
uint8_t x_122; 
x_122 = lean_nat_dec_le(x_117, x_117);
if (x_122 == 0)
{
lean_object* x_123; lean_object* x_124; 
lean_dec(x_117);
lean_dec(x_116);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_123 = l_Lean_Elab_Tactic_evalTactic___lambda__5___closed__1;
x_124 = l_Lean_Core_withFreshMacroScope___rarg(x_123, x_101, x_9, x_10);
return x_124;
}
else
{
size_t x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; 
x_125 = lean_usize_of_nat(x_117);
lean_dec(x_117);
x_126 = lean_box(0);
x_127 = l_Lean_Elab_Tactic_evalTactic___lambda__5___boxed__const__1;
x_128 = lean_box_usize(x_125);
x_129 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_evalTactic___spec__7___boxed), 13, 10);
lean_closure_set(x_129, 0, x_116);
lean_closure_set(x_129, 1, x_127);
lean_closure_set(x_129, 2, x_128);
lean_closure_set(x_129, 3, x_126);
lean_closure_set(x_129, 4, x_2);
lean_closure_set(x_129, 5, x_3);
lean_closure_set(x_129, 6, x_4);
lean_closure_set(x_129, 7, x_5);
lean_closure_set(x_129, 8, x_6);
lean_closure_set(x_129, 9, x_7);
x_130 = l_Lean_Core_withFreshMacroScope___rarg(x_129, x_101, x_9, x_10);
return x_130;
}
}
}
}
case 2:
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; 
lean_inc(x_1);
x_131 = l_Lean_MessageData_ofSyntax(x_1);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_132 = x_1;
} else {
 lean_dec_ref(x_1);
 x_132 = lean_box(0);
}
x_133 = l_Lean_indentD(x_131);
x_134 = l_Lean_Elab_Tactic_evalTactic___lambda__5___closed__7;
if (lean_is_scalar(x_132)) {
 x_135 = lean_alloc_ctor(7, 2, 0);
} else {
 x_135 = x_132;
 lean_ctor_set_tag(x_135, 7);
}
lean_ctor_set(x_135, 0, x_134);
lean_ctor_set(x_135, 1, x_133);
x_136 = l_Lean_Elab_Term_reportUnsolvedGoals___closed__7;
x_137 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_137, 0, x_135);
lean_ctor_set(x_137, 1, x_136);
x_138 = lean_alloc_closure((void*)(l_Lean_throwError___at_Lean_Elab_Tactic_evalTactic_throwExs___spec__2___boxed), 10, 7);
lean_closure_set(x_138, 0, x_137);
lean_closure_set(x_138, 1, x_2);
lean_closure_set(x_138, 2, x_3);
lean_closure_set(x_138, 3, x_4);
lean_closure_set(x_138, 4, x_5);
lean_closure_set(x_138, 5, x_6);
lean_closure_set(x_138, 6, x_7);
x_139 = l_Lean_Core_withFreshMacroScope___rarg(x_138, x_101, x_9, x_10);
return x_139;
}
default: 
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; 
x_140 = l_Lean_MessageData_ofSyntax(x_1);
x_141 = l_Lean_indentD(x_140);
x_142 = l_Lean_Elab_Tactic_evalTactic___lambda__5___closed__7;
x_143 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_143, 0, x_142);
lean_ctor_set(x_143, 1, x_141);
x_144 = l_Lean_Elab_Term_reportUnsolvedGoals___closed__7;
x_145 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_145, 0, x_143);
lean_ctor_set(x_145, 1, x_144);
x_146 = lean_alloc_closure((void*)(l_Lean_throwError___at_Lean_Elab_Tactic_evalTactic_throwExs___spec__2___boxed), 10, 7);
lean_closure_set(x_146, 0, x_145);
lean_closure_set(x_146, 1, x_2);
lean_closure_set(x_146, 2, x_3);
lean_closure_set(x_146, 3, x_4);
lean_closure_set(x_146, 4, x_5);
lean_closure_set(x_146, 5, x_6);
lean_closure_set(x_146, 6, x_7);
x_147 = l_Lean_Core_withFreshMacroScope___rarg(x_146, x_101, x_9, x_10);
return x_147;
}
}
}
else
{
lean_object* x_148; 
lean_dec(x_94);
lean_dec(x_93);
lean_dec(x_92);
lean_dec(x_91);
lean_dec(x_90);
lean_dec(x_88);
lean_dec(x_87);
lean_dec(x_86);
lean_dec(x_85);
lean_dec(x_84);
lean_dec(x_1);
x_148 = l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Tactic_evalTactic___spec__8(x_96, x_2, x_3, x_4, x_5, x_6, x_7, x_97, x_9, x_10);
lean_dec(x_9);
lean_dec(x_97);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_148;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalTactic___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("tactic execution", 16);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalTactic(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_ctor_get(x_8, 2);
lean_inc(x_11);
lean_inc(x_1);
x_12 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalTactic___lambda__5), 10, 1);
lean_closure_set(x_12, 0, x_1);
x_13 = l_Lean_Syntax_getKind(x_1);
x_14 = l_Lean_Elab_Tactic_evalTactic___closed__1;
x_15 = l_Lean_profileitM___at_Lean_Elab_Tactic_evalTactic___spec__9___rarg(x_14, x_11, x_12, x_13, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_11);
return x_15;
}
}
LEAN_EXPORT lean_object* l_List_forM___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_List_forM___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_throwError___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_liftMacroM___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__1___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__1___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_liftMacroM___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__1___lambda__2(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__1___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_liftMacroM___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__1___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__1___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_liftMacroM___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__1___lambda__4(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Tactic_evalTactic___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_throwError___at_Lean_Elab_Tactic_evalTactic___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at_Lean_Elab_Tactic_evalTactic___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at_Lean_Elab_Tactic_evalTactic___spec__4___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at_Lean_Elab_Tactic_evalTactic___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at_Lean_Elab_Tactic_evalTactic___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_14;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at_Lean_Elab_Tactic_evalTactic___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_MonadExcept_ofExcept___at_Lean_Elab_Tactic_evalTactic___spec__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
return x_16;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__2___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
lean_object* x_19 = _args[18];
lean_object* x_20 = _args[19];
_start:
{
uint8_t x_21; uint8_t x_22; double x_23; double x_24; lean_object* x_25; 
x_21 = lean_unbox(x_2);
lean_dec(x_2);
x_22 = lean_unbox(x_8);
lean_dec(x_8);
x_23 = lean_unbox_float(x_9);
lean_dec(x_9);
x_24 = lean_unbox_float(x_10);
lean_dec(x_10);
x_25 = l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__2(x_1, x_21, x_3, x_4, x_5, x_6, x_7, x_22, x_23, x_24, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20);
lean_dec(x_19);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_7);
return x_25;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__3___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
lean_object* x_19 = _args[18];
lean_object* x_20 = _args[19];
_start:
{
uint8_t x_21; uint8_t x_22; double x_23; double x_24; lean_object* x_25; 
x_21 = lean_unbox(x_2);
lean_dec(x_2);
x_22 = lean_unbox(x_7);
lean_dec(x_7);
x_23 = lean_unbox_float(x_8);
lean_dec(x_8);
x_24 = lean_unbox_float(x_9);
lean_dec(x_9);
x_25 = l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__3(x_1, x_21, x_3, x_4, x_5, x_6, x_22, x_23, x_24, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20);
return x_25;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__4___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
_start:
{
uint8_t x_18; uint8_t x_19; lean_object* x_20; 
x_18 = lean_unbox(x_3);
lean_dec(x_3);
x_19 = lean_unbox(x_6);
lean_dec(x_6);
x_20 = l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__4(x_1, x_2, x_18, x_4, x_5, x_19, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
return x_20;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
uint8_t x_15; lean_object* x_16; 
x_15 = lean_unbox(x_4);
lean_dec(x_4);
x_16 = l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3(x_1, x_2, x_3, x_15, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
return x_16;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_evalTactic___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
size_t x_14; size_t x_15; lean_object* x_16; 
x_14 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_15 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_16 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_evalTactic___spec__7(x_1, x_14, x_15, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_1);
return x_16;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Tactic_evalTactic___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Tactic_evalTactic___spec__8(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at_Lean_Elab_Tactic_evalTactic___spec__9___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Lean_profileitM___at_Lean_Elab_Tactic_evalTactic___spec__9___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_2);
lean_dec(x_1);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalTactic___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Tactic_evalTactic___lambda__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalTactic___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Elab_Tactic_evalTactic___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Tactic_throwNoGoalsToBeSolved___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_8, 5);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_6, x_7, x_8, x_9, x_10);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_11);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_11);
lean_ctor_set(x_15, 1, x_14);
lean_ctor_set_tag(x_12, 1);
lean_ctor_set(x_12, 0, x_15);
return x_12;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_12, 0);
x_17 = lean_ctor_get(x_12, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_12);
lean_inc(x_11);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_16);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Tactic_throwNoGoalsToBeSolved___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwError___at_Lean_Elab_Tactic_throwNoGoalsToBeSolved___spec__1___rarg___boxed), 10, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_throwNoGoalsToBeSolved___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("no goals to be solved", 21);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_throwNoGoalsToBeSolved___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Tactic_throwNoGoalsToBeSolved___rarg___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_throwNoGoalsToBeSolved___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = l_Lean_Elab_Tactic_throwNoGoalsToBeSolved___rarg___closed__2;
x_11 = l_Lean_throwError___at_Lean_Elab_Tactic_throwNoGoalsToBeSolved___spec__1___rarg(x_10, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_throwNoGoalsToBeSolved(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_throwNoGoalsToBeSolved___rarg), 9, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Tactic_throwNoGoalsToBeSolved___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_throwError___at_Lean_Elab_Tactic_throwNoGoalsToBeSolved___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
static lean_object* _init_l_Lean_Elab_throwAbortTactic___at_Lean_Elab_Tactic_done___spec__1___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Tactic_evalTactic_handleEx___closed__2;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTactic___at_Lean_Elab_Tactic_done___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_throwAbortTactic___at_Lean_Elab_Tactic_done___spec__1___rarg___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTactic___at_Lean_Elab_Tactic_done___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_Lean_Elab_throwAbortTactic___at_Lean_Elab_Tactic_done___spec__1___rarg), 1, 0);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_done(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = l_Lean_Elab_Tactic_getUnsolvedGoals(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_10, 1);
x_14 = l_List_isEmpty___rarg(x_12);
if (x_14 == 0)
{
lean_object* x_15; 
lean_free_object(x_10);
x_15 = l_Lean_Elab_Term_reportUnsolvedGoals(x_12, x_5, x_6, x_7, x_8, x_13);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = l_Lean_Elab_throwAbortTactic___at_Lean_Elab_Tactic_done___spec__1___rarg(x_16);
return x_17;
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_15);
if (x_18 == 0)
{
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_15);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
else
{
lean_object* x_22; 
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_22 = lean_box(0);
lean_ctor_set(x_10, 0, x_22);
return x_10;
}
}
else
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_23 = lean_ctor_get(x_10, 0);
x_24 = lean_ctor_get(x_10, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_10);
x_25 = l_List_isEmpty___rarg(x_23);
if (x_25 == 0)
{
lean_object* x_26; 
x_26 = l_Lean_Elab_Term_reportUnsolvedGoals(x_23, x_5, x_6, x_7, x_8, x_24);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = l_Lean_Elab_throwAbortTactic___at_Lean_Elab_Tactic_done___spec__1___rarg(x_27);
return x_28;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_29 = lean_ctor_get(x_26, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_26, 1);
lean_inc(x_30);
if (lean_is_exclusive(x_26)) {
 lean_ctor_release(x_26, 0);
 lean_ctor_release(x_26, 1);
 x_31 = x_26;
} else {
 lean_dec_ref(x_26);
 x_31 = lean_box(0);
}
if (lean_is_scalar(x_31)) {
 x_32 = lean_alloc_ctor(1, 2, 0);
} else {
 x_32 = x_31;
}
lean_ctor_set(x_32, 0, x_29);
lean_ctor_set(x_32, 1, x_30);
return x_32;
}
}
else
{
lean_object* x_33; lean_object* x_34; 
lean_dec(x_23);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_33 = lean_box(0);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_24);
return x_34;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTactic___at_Lean_Elab_Tactic_done___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_throwAbortTactic___at_Lean_Elab_Tactic_done___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_done___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Tactic_done(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_focus___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = l_Lean_Elab_Tactic_getUnsolvedGoals(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_1);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Lean_Elab_Tactic_throwNoGoalsToBeSolved___rarg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
return x_14;
}
else
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_ctor_get(x_11, 1);
lean_inc(x_15);
lean_dec(x_11);
x_16 = !lean_is_exclusive(x_12);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_17 = lean_ctor_get(x_12, 1);
x_18 = lean_box(0);
lean_ctor_set(x_12, 1, x_18);
x_19 = l_Lean_Elab_Tactic_setGoals(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_15);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_21 = lean_apply_9(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_20);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = l_Lean_Elab_Tactic_getUnsolvedGoals(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_23);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = l_List_appendTR___rarg(x_25, x_17);
x_28 = l_Lean_Elab_Tactic_setGoals(x_27, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_26);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_29 = !lean_is_exclusive(x_28);
if (x_29 == 0)
{
lean_object* x_30; 
x_30 = lean_ctor_get(x_28, 0);
lean_dec(x_30);
lean_ctor_set(x_28, 0, x_22);
return x_28;
}
else
{
lean_object* x_31; lean_object* x_32; 
x_31 = lean_ctor_get(x_28, 1);
lean_inc(x_31);
lean_dec(x_28);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_22);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
else
{
uint8_t x_33; 
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_33 = !lean_is_exclusive(x_21);
if (x_33 == 0)
{
return x_21;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_21, 0);
x_35 = lean_ctor_get(x_21, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_21);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_37 = lean_ctor_get(x_12, 0);
x_38 = lean_ctor_get(x_12, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_12);
x_39 = lean_box(0);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_37);
lean_ctor_set(x_40, 1, x_39);
x_41 = l_Lean_Elab_Tactic_setGoals(x_40, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_15);
x_42 = lean_ctor_get(x_41, 1);
lean_inc(x_42);
lean_dec(x_41);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_43 = lean_apply_9(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_42);
if (lean_obj_tag(x_43) == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
x_46 = l_Lean_Elab_Tactic_getUnsolvedGoals(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_45);
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
lean_dec(x_46);
x_49 = l_List_appendTR___rarg(x_47, x_38);
x_50 = l_Lean_Elab_Tactic_setGoals(x_49, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_48);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_51 = lean_ctor_get(x_50, 1);
lean_inc(x_51);
if (lean_is_exclusive(x_50)) {
 lean_ctor_release(x_50, 0);
 lean_ctor_release(x_50, 1);
 x_52 = x_50;
} else {
 lean_dec_ref(x_50);
 x_52 = lean_box(0);
}
if (lean_is_scalar(x_52)) {
 x_53 = lean_alloc_ctor(0, 2, 0);
} else {
 x_53 = x_52;
}
lean_ctor_set(x_53, 0, x_44);
lean_ctor_set(x_53, 1, x_51);
return x_53;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
lean_dec(x_38);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_54 = lean_ctor_get(x_43, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_43, 1);
lean_inc(x_55);
if (lean_is_exclusive(x_43)) {
 lean_ctor_release(x_43, 0);
 lean_ctor_release(x_43, 1);
 x_56 = x_43;
} else {
 lean_dec_ref(x_43);
 x_56 = lean_box(0);
}
if (lean_is_scalar(x_56)) {
 x_57 = lean_alloc_ctor(1, 2, 0);
} else {
 x_57 = x_56;
}
lean_ctor_set(x_57, 0, x_54);
lean_ctor_set(x_57, 1, x_55);
return x_57;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_focus(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_focus___rarg), 10, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_focusAndDone___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_11 = lean_apply_9(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Lean_Elab_Tactic_done(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_14, 0);
lean_dec(x_16);
lean_ctor_set(x_14, 0, x_12);
return x_14;
}
else
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_dec(x_14);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_12);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
else
{
uint8_t x_19; 
lean_dec(x_12);
x_19 = !lean_is_exclusive(x_14);
if (x_19 == 0)
{
return x_14;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_14, 0);
x_21 = lean_ctor_get(x_14, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_14);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
else
{
uint8_t x_23; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_23 = !lean_is_exclusive(x_11);
if (x_23 == 0)
{
return x_11;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_11, 0);
x_25 = lean_ctor_get(x_11, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_11);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_focusAndDone___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_focusAndDone___rarg___lambda__1), 10, 1);
lean_closure_set(x_11, 0, x_1);
x_12 = l_Lean_Elab_Tactic_focus___rarg(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_focusAndDone(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_focusAndDone___rarg), 10, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_logAt___at_Lean_Elab_Tactic_closeUsingOrAdmit___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_warningAsError;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at_Lean_Elab_Tactic_closeUsingOrAdmit___spec__2(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; uint8_t x_379; uint8_t x_380; 
x_379 = 2;
x_380 = l___private_Lean_Message_0__Lean_beqMessageSeverity____x40_Lean_Message___hyg_103_(x_3, x_379);
if (x_380 == 0)
{
lean_object* x_381; 
x_381 = lean_box(0);
x_13 = x_381;
goto block_378;
}
else
{
lean_object* x_382; uint8_t x_383; 
lean_inc(x_2);
x_382 = l_Lean_MessageData_hasSyntheticSorry(x_2);
x_383 = lean_unbox(x_382);
lean_dec(x_382);
if (x_383 == 0)
{
lean_object* x_384; 
x_384 = lean_box(0);
x_13 = x_384;
goto block_378;
}
else
{
lean_object* x_385; lean_object* x_386; 
lean_dec(x_10);
lean_dec(x_2);
x_385 = lean_box(0);
x_386 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_386, 0, x_385);
lean_ctor_set(x_386, 1, x_12);
return x_386;
}
}
block_378:
{
uint8_t x_14; lean_object* x_372; uint8_t x_373; uint8_t x_374; 
lean_dec(x_13);
x_372 = lean_ctor_get(x_10, 2);
lean_inc(x_372);
x_373 = 1;
x_374 = l___private_Lean_Message_0__Lean_beqMessageSeverity____x40_Lean_Message___hyg_103_(x_3, x_373);
if (x_374 == 0)
{
lean_dec(x_372);
x_14 = x_3;
goto block_371;
}
else
{
lean_object* x_375; uint8_t x_376; 
x_375 = l_Lean_logAt___at_Lean_Elab_Tactic_closeUsingOrAdmit___spec__2___closed__1;
x_376 = l_Lean_Option_get___at___private_Lean_Util_Profile_0__Lean_get__profiler___spec__1(x_372, x_375);
lean_dec(x_372);
if (x_376 == 0)
{
x_14 = x_3;
goto block_371;
}
else
{
uint8_t x_377; 
x_377 = 2;
x_14 = x_377;
goto block_371;
}
}
block_371:
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; 
x_15 = lean_ctor_get(x_10, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_10, 1);
lean_inc(x_16);
x_17 = lean_ctor_get(x_10, 5);
lean_inc(x_17);
x_18 = lean_ctor_get(x_10, 6);
lean_inc(x_18);
x_19 = lean_ctor_get(x_10, 7);
lean_inc(x_19);
x_20 = l_Lean_replaceRef(x_1, x_17);
lean_dec(x_17);
x_21 = 0;
x_22 = l_Lean_Syntax_getPos_x3f(x_20, x_21);
x_23 = l_Lean_Syntax_getTailPos_x3f(x_20, x_21);
if (lean_obj_tag(x_22) == 0)
{
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; uint8_t x_25; 
x_24 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_2, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_10);
x_25 = !lean_is_exclusive(x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_26 = lean_ctor_get(x_24, 0);
x_27 = lean_ctor_get(x_24, 1);
x_28 = lean_unsigned_to_nat(0u);
x_29 = l_Lean_FileMap_toPosition(x_16, x_28);
lean_inc(x_29);
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_24, 1, x_19);
lean_ctor_set(x_24, 0, x_18);
x_31 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_31, 0, x_24);
lean_ctor_set(x_31, 1, x_26);
x_32 = l_Lean_Elab_Term_reportUnsolvedGoals___closed__6;
x_33 = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(x_33, 0, x_15);
lean_ctor_set(x_33, 1, x_29);
lean_ctor_set(x_33, 2, x_30);
lean_ctor_set(x_33, 3, x_32);
lean_ctor_set(x_33, 4, x_31);
lean_ctor_set_uint8(x_33, sizeof(void*)*5, x_21);
lean_ctor_set_uint8(x_33, sizeof(void*)*5 + 1, x_14);
x_34 = lean_st_ref_take(x_11, x_27);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = !lean_is_exclusive(x_35);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_38 = lean_ctor_get(x_35, 5);
x_39 = l_Lean_PersistentArray_push___rarg(x_38, x_33);
lean_ctor_set(x_35, 5, x_39);
x_40 = lean_st_ref_set(x_11, x_35, x_36);
x_41 = !lean_is_exclusive(x_40);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; 
x_42 = lean_ctor_get(x_40, 0);
lean_dec(x_42);
x_43 = lean_box(0);
lean_ctor_set(x_40, 0, x_43);
return x_40;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_40, 1);
lean_inc(x_44);
lean_dec(x_40);
x_45 = lean_box(0);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_44);
return x_46;
}
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_47 = lean_ctor_get(x_35, 0);
x_48 = lean_ctor_get(x_35, 1);
x_49 = lean_ctor_get(x_35, 2);
x_50 = lean_ctor_get(x_35, 3);
x_51 = lean_ctor_get(x_35, 4);
x_52 = lean_ctor_get(x_35, 5);
x_53 = lean_ctor_get(x_35, 6);
lean_inc(x_53);
lean_inc(x_52);
lean_inc(x_51);
lean_inc(x_50);
lean_inc(x_49);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_35);
x_54 = l_Lean_PersistentArray_push___rarg(x_52, x_33);
x_55 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_55, 0, x_47);
lean_ctor_set(x_55, 1, x_48);
lean_ctor_set(x_55, 2, x_49);
lean_ctor_set(x_55, 3, x_50);
lean_ctor_set(x_55, 4, x_51);
lean_ctor_set(x_55, 5, x_54);
lean_ctor_set(x_55, 6, x_53);
x_56 = lean_st_ref_set(x_11, x_55, x_36);
x_57 = lean_ctor_get(x_56, 1);
lean_inc(x_57);
if (lean_is_exclusive(x_56)) {
 lean_ctor_release(x_56, 0);
 lean_ctor_release(x_56, 1);
 x_58 = x_56;
} else {
 lean_dec_ref(x_56);
 x_58 = lean_box(0);
}
x_59 = lean_box(0);
if (lean_is_scalar(x_58)) {
 x_60 = lean_alloc_ctor(0, 2, 0);
} else {
 x_60 = x_58;
}
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_57);
return x_60;
}
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_61 = lean_ctor_get(x_24, 0);
x_62 = lean_ctor_get(x_24, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_24);
x_63 = lean_unsigned_to_nat(0u);
x_64 = l_Lean_FileMap_toPosition(x_16, x_63);
lean_inc(x_64);
x_65 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_65, 0, x_64);
x_66 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_66, 0, x_18);
lean_ctor_set(x_66, 1, x_19);
x_67 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_61);
x_68 = l_Lean_Elab_Term_reportUnsolvedGoals___closed__6;
x_69 = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(x_69, 0, x_15);
lean_ctor_set(x_69, 1, x_64);
lean_ctor_set(x_69, 2, x_65);
lean_ctor_set(x_69, 3, x_68);
lean_ctor_set(x_69, 4, x_67);
lean_ctor_set_uint8(x_69, sizeof(void*)*5, x_21);
lean_ctor_set_uint8(x_69, sizeof(void*)*5 + 1, x_14);
x_70 = lean_st_ref_take(x_11, x_62);
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_70, 1);
lean_inc(x_72);
lean_dec(x_70);
x_73 = lean_ctor_get(x_71, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_71, 1);
lean_inc(x_74);
x_75 = lean_ctor_get(x_71, 2);
lean_inc(x_75);
x_76 = lean_ctor_get(x_71, 3);
lean_inc(x_76);
x_77 = lean_ctor_get(x_71, 4);
lean_inc(x_77);
x_78 = lean_ctor_get(x_71, 5);
lean_inc(x_78);
x_79 = lean_ctor_get(x_71, 6);
lean_inc(x_79);
if (lean_is_exclusive(x_71)) {
 lean_ctor_release(x_71, 0);
 lean_ctor_release(x_71, 1);
 lean_ctor_release(x_71, 2);
 lean_ctor_release(x_71, 3);
 lean_ctor_release(x_71, 4);
 lean_ctor_release(x_71, 5);
 lean_ctor_release(x_71, 6);
 x_80 = x_71;
} else {
 lean_dec_ref(x_71);
 x_80 = lean_box(0);
}
x_81 = l_Lean_PersistentArray_push___rarg(x_78, x_69);
if (lean_is_scalar(x_80)) {
 x_82 = lean_alloc_ctor(0, 7, 0);
} else {
 x_82 = x_80;
}
lean_ctor_set(x_82, 0, x_73);
lean_ctor_set(x_82, 1, x_74);
lean_ctor_set(x_82, 2, x_75);
lean_ctor_set(x_82, 3, x_76);
lean_ctor_set(x_82, 4, x_77);
lean_ctor_set(x_82, 5, x_81);
lean_ctor_set(x_82, 6, x_79);
x_83 = lean_st_ref_set(x_11, x_82, x_72);
x_84 = lean_ctor_get(x_83, 1);
lean_inc(x_84);
if (lean_is_exclusive(x_83)) {
 lean_ctor_release(x_83, 0);
 lean_ctor_release(x_83, 1);
 x_85 = x_83;
} else {
 lean_dec_ref(x_83);
 x_85 = lean_box(0);
}
x_86 = lean_box(0);
if (lean_is_scalar(x_85)) {
 x_87 = lean_alloc_ctor(0, 2, 0);
} else {
 x_87 = x_85;
}
lean_ctor_set(x_87, 0, x_86);
lean_ctor_set(x_87, 1, x_84);
return x_87;
}
}
else
{
uint8_t x_88; 
x_88 = !lean_is_exclusive(x_23);
if (x_88 == 0)
{
lean_object* x_89; lean_object* x_90; uint8_t x_91; 
x_89 = lean_ctor_get(x_23, 0);
x_90 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_2, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_10);
x_91 = !lean_is_exclusive(x_90);
if (x_91 == 0)
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; uint8_t x_103; 
x_92 = lean_ctor_get(x_90, 0);
x_93 = lean_ctor_get(x_90, 1);
x_94 = lean_unsigned_to_nat(0u);
lean_inc(x_16);
x_95 = l_Lean_FileMap_toPosition(x_16, x_94);
x_96 = l_Lean_FileMap_toPosition(x_16, x_89);
lean_dec(x_89);
lean_ctor_set(x_23, 0, x_96);
lean_ctor_set(x_90, 1, x_19);
lean_ctor_set(x_90, 0, x_18);
x_97 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_97, 0, x_90);
lean_ctor_set(x_97, 1, x_92);
x_98 = l_Lean_Elab_Term_reportUnsolvedGoals___closed__6;
x_99 = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(x_99, 0, x_15);
lean_ctor_set(x_99, 1, x_95);
lean_ctor_set(x_99, 2, x_23);
lean_ctor_set(x_99, 3, x_98);
lean_ctor_set(x_99, 4, x_97);
lean_ctor_set_uint8(x_99, sizeof(void*)*5, x_21);
lean_ctor_set_uint8(x_99, sizeof(void*)*5 + 1, x_14);
x_100 = lean_st_ref_take(x_11, x_93);
x_101 = lean_ctor_get(x_100, 0);
lean_inc(x_101);
x_102 = lean_ctor_get(x_100, 1);
lean_inc(x_102);
lean_dec(x_100);
x_103 = !lean_is_exclusive(x_101);
if (x_103 == 0)
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; uint8_t x_107; 
x_104 = lean_ctor_get(x_101, 5);
x_105 = l_Lean_PersistentArray_push___rarg(x_104, x_99);
lean_ctor_set(x_101, 5, x_105);
x_106 = lean_st_ref_set(x_11, x_101, x_102);
x_107 = !lean_is_exclusive(x_106);
if (x_107 == 0)
{
lean_object* x_108; lean_object* x_109; 
x_108 = lean_ctor_get(x_106, 0);
lean_dec(x_108);
x_109 = lean_box(0);
lean_ctor_set(x_106, 0, x_109);
return x_106;
}
else
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; 
x_110 = lean_ctor_get(x_106, 1);
lean_inc(x_110);
lean_dec(x_106);
x_111 = lean_box(0);
x_112 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_112, 0, x_111);
lean_ctor_set(x_112, 1, x_110);
return x_112;
}
}
else
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_113 = lean_ctor_get(x_101, 0);
x_114 = lean_ctor_get(x_101, 1);
x_115 = lean_ctor_get(x_101, 2);
x_116 = lean_ctor_get(x_101, 3);
x_117 = lean_ctor_get(x_101, 4);
x_118 = lean_ctor_get(x_101, 5);
x_119 = lean_ctor_get(x_101, 6);
lean_inc(x_119);
lean_inc(x_118);
lean_inc(x_117);
lean_inc(x_116);
lean_inc(x_115);
lean_inc(x_114);
lean_inc(x_113);
lean_dec(x_101);
x_120 = l_Lean_PersistentArray_push___rarg(x_118, x_99);
x_121 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_121, 0, x_113);
lean_ctor_set(x_121, 1, x_114);
lean_ctor_set(x_121, 2, x_115);
lean_ctor_set(x_121, 3, x_116);
lean_ctor_set(x_121, 4, x_117);
lean_ctor_set(x_121, 5, x_120);
lean_ctor_set(x_121, 6, x_119);
x_122 = lean_st_ref_set(x_11, x_121, x_102);
x_123 = lean_ctor_get(x_122, 1);
lean_inc(x_123);
if (lean_is_exclusive(x_122)) {
 lean_ctor_release(x_122, 0);
 lean_ctor_release(x_122, 1);
 x_124 = x_122;
} else {
 lean_dec_ref(x_122);
 x_124 = lean_box(0);
}
x_125 = lean_box(0);
if (lean_is_scalar(x_124)) {
 x_126 = lean_alloc_ctor(0, 2, 0);
} else {
 x_126 = x_124;
}
lean_ctor_set(x_126, 0, x_125);
lean_ctor_set(x_126, 1, x_123);
return x_126;
}
}
else
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; 
x_127 = lean_ctor_get(x_90, 0);
x_128 = lean_ctor_get(x_90, 1);
lean_inc(x_128);
lean_inc(x_127);
lean_dec(x_90);
x_129 = lean_unsigned_to_nat(0u);
lean_inc(x_16);
x_130 = l_Lean_FileMap_toPosition(x_16, x_129);
x_131 = l_Lean_FileMap_toPosition(x_16, x_89);
lean_dec(x_89);
lean_ctor_set(x_23, 0, x_131);
x_132 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_132, 0, x_18);
lean_ctor_set(x_132, 1, x_19);
x_133 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_133, 0, x_132);
lean_ctor_set(x_133, 1, x_127);
x_134 = l_Lean_Elab_Term_reportUnsolvedGoals___closed__6;
x_135 = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(x_135, 0, x_15);
lean_ctor_set(x_135, 1, x_130);
lean_ctor_set(x_135, 2, x_23);
lean_ctor_set(x_135, 3, x_134);
lean_ctor_set(x_135, 4, x_133);
lean_ctor_set_uint8(x_135, sizeof(void*)*5, x_21);
lean_ctor_set_uint8(x_135, sizeof(void*)*5 + 1, x_14);
x_136 = lean_st_ref_take(x_11, x_128);
x_137 = lean_ctor_get(x_136, 0);
lean_inc(x_137);
x_138 = lean_ctor_get(x_136, 1);
lean_inc(x_138);
lean_dec(x_136);
x_139 = lean_ctor_get(x_137, 0);
lean_inc(x_139);
x_140 = lean_ctor_get(x_137, 1);
lean_inc(x_140);
x_141 = lean_ctor_get(x_137, 2);
lean_inc(x_141);
x_142 = lean_ctor_get(x_137, 3);
lean_inc(x_142);
x_143 = lean_ctor_get(x_137, 4);
lean_inc(x_143);
x_144 = lean_ctor_get(x_137, 5);
lean_inc(x_144);
x_145 = lean_ctor_get(x_137, 6);
lean_inc(x_145);
if (lean_is_exclusive(x_137)) {
 lean_ctor_release(x_137, 0);
 lean_ctor_release(x_137, 1);
 lean_ctor_release(x_137, 2);
 lean_ctor_release(x_137, 3);
 lean_ctor_release(x_137, 4);
 lean_ctor_release(x_137, 5);
 lean_ctor_release(x_137, 6);
 x_146 = x_137;
} else {
 lean_dec_ref(x_137);
 x_146 = lean_box(0);
}
x_147 = l_Lean_PersistentArray_push___rarg(x_144, x_135);
if (lean_is_scalar(x_146)) {
 x_148 = lean_alloc_ctor(0, 7, 0);
} else {
 x_148 = x_146;
}
lean_ctor_set(x_148, 0, x_139);
lean_ctor_set(x_148, 1, x_140);
lean_ctor_set(x_148, 2, x_141);
lean_ctor_set(x_148, 3, x_142);
lean_ctor_set(x_148, 4, x_143);
lean_ctor_set(x_148, 5, x_147);
lean_ctor_set(x_148, 6, x_145);
x_149 = lean_st_ref_set(x_11, x_148, x_138);
x_150 = lean_ctor_get(x_149, 1);
lean_inc(x_150);
if (lean_is_exclusive(x_149)) {
 lean_ctor_release(x_149, 0);
 lean_ctor_release(x_149, 1);
 x_151 = x_149;
} else {
 lean_dec_ref(x_149);
 x_151 = lean_box(0);
}
x_152 = lean_box(0);
if (lean_is_scalar(x_151)) {
 x_153 = lean_alloc_ctor(0, 2, 0);
} else {
 x_153 = x_151;
}
lean_ctor_set(x_153, 0, x_152);
lean_ctor_set(x_153, 1, x_150);
return x_153;
}
}
else
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; 
x_154 = lean_ctor_get(x_23, 0);
lean_inc(x_154);
lean_dec(x_23);
x_155 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_2, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_10);
x_156 = lean_ctor_get(x_155, 0);
lean_inc(x_156);
x_157 = lean_ctor_get(x_155, 1);
lean_inc(x_157);
if (lean_is_exclusive(x_155)) {
 lean_ctor_release(x_155, 0);
 lean_ctor_release(x_155, 1);
 x_158 = x_155;
} else {
 lean_dec_ref(x_155);
 x_158 = lean_box(0);
}
x_159 = lean_unsigned_to_nat(0u);
lean_inc(x_16);
x_160 = l_Lean_FileMap_toPosition(x_16, x_159);
x_161 = l_Lean_FileMap_toPosition(x_16, x_154);
lean_dec(x_154);
x_162 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_162, 0, x_161);
if (lean_is_scalar(x_158)) {
 x_163 = lean_alloc_ctor(0, 2, 0);
} else {
 x_163 = x_158;
}
lean_ctor_set(x_163, 0, x_18);
lean_ctor_set(x_163, 1, x_19);
x_164 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_164, 0, x_163);
lean_ctor_set(x_164, 1, x_156);
x_165 = l_Lean_Elab_Term_reportUnsolvedGoals___closed__6;
x_166 = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(x_166, 0, x_15);
lean_ctor_set(x_166, 1, x_160);
lean_ctor_set(x_166, 2, x_162);
lean_ctor_set(x_166, 3, x_165);
lean_ctor_set(x_166, 4, x_164);
lean_ctor_set_uint8(x_166, sizeof(void*)*5, x_21);
lean_ctor_set_uint8(x_166, sizeof(void*)*5 + 1, x_14);
x_167 = lean_st_ref_take(x_11, x_157);
x_168 = lean_ctor_get(x_167, 0);
lean_inc(x_168);
x_169 = lean_ctor_get(x_167, 1);
lean_inc(x_169);
lean_dec(x_167);
x_170 = lean_ctor_get(x_168, 0);
lean_inc(x_170);
x_171 = lean_ctor_get(x_168, 1);
lean_inc(x_171);
x_172 = lean_ctor_get(x_168, 2);
lean_inc(x_172);
x_173 = lean_ctor_get(x_168, 3);
lean_inc(x_173);
x_174 = lean_ctor_get(x_168, 4);
lean_inc(x_174);
x_175 = lean_ctor_get(x_168, 5);
lean_inc(x_175);
x_176 = lean_ctor_get(x_168, 6);
lean_inc(x_176);
if (lean_is_exclusive(x_168)) {
 lean_ctor_release(x_168, 0);
 lean_ctor_release(x_168, 1);
 lean_ctor_release(x_168, 2);
 lean_ctor_release(x_168, 3);
 lean_ctor_release(x_168, 4);
 lean_ctor_release(x_168, 5);
 lean_ctor_release(x_168, 6);
 x_177 = x_168;
} else {
 lean_dec_ref(x_168);
 x_177 = lean_box(0);
}
x_178 = l_Lean_PersistentArray_push___rarg(x_175, x_166);
if (lean_is_scalar(x_177)) {
 x_179 = lean_alloc_ctor(0, 7, 0);
} else {
 x_179 = x_177;
}
lean_ctor_set(x_179, 0, x_170);
lean_ctor_set(x_179, 1, x_171);
lean_ctor_set(x_179, 2, x_172);
lean_ctor_set(x_179, 3, x_173);
lean_ctor_set(x_179, 4, x_174);
lean_ctor_set(x_179, 5, x_178);
lean_ctor_set(x_179, 6, x_176);
x_180 = lean_st_ref_set(x_11, x_179, x_169);
x_181 = lean_ctor_get(x_180, 1);
lean_inc(x_181);
if (lean_is_exclusive(x_180)) {
 lean_ctor_release(x_180, 0);
 lean_ctor_release(x_180, 1);
 x_182 = x_180;
} else {
 lean_dec_ref(x_180);
 x_182 = lean_box(0);
}
x_183 = lean_box(0);
if (lean_is_scalar(x_182)) {
 x_184 = lean_alloc_ctor(0, 2, 0);
} else {
 x_184 = x_182;
}
lean_ctor_set(x_184, 0, x_183);
lean_ctor_set(x_184, 1, x_181);
return x_184;
}
}
}
else
{
if (lean_obj_tag(x_23) == 0)
{
uint8_t x_185; 
x_185 = !lean_is_exclusive(x_22);
if (x_185 == 0)
{
lean_object* x_186; lean_object* x_187; uint8_t x_188; 
x_186 = lean_ctor_get(x_22, 0);
x_187 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_2, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_10);
x_188 = !lean_is_exclusive(x_187);
if (x_188 == 0)
{
lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; uint8_t x_198; 
x_189 = lean_ctor_get(x_187, 0);
x_190 = lean_ctor_get(x_187, 1);
x_191 = l_Lean_FileMap_toPosition(x_16, x_186);
lean_dec(x_186);
lean_inc(x_191);
lean_ctor_set(x_22, 0, x_191);
lean_ctor_set(x_187, 1, x_19);
lean_ctor_set(x_187, 0, x_18);
x_192 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_192, 0, x_187);
lean_ctor_set(x_192, 1, x_189);
x_193 = l_Lean_Elab_Term_reportUnsolvedGoals___closed__6;
x_194 = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(x_194, 0, x_15);
lean_ctor_set(x_194, 1, x_191);
lean_ctor_set(x_194, 2, x_22);
lean_ctor_set(x_194, 3, x_193);
lean_ctor_set(x_194, 4, x_192);
lean_ctor_set_uint8(x_194, sizeof(void*)*5, x_21);
lean_ctor_set_uint8(x_194, sizeof(void*)*5 + 1, x_14);
x_195 = lean_st_ref_take(x_11, x_190);
x_196 = lean_ctor_get(x_195, 0);
lean_inc(x_196);
x_197 = lean_ctor_get(x_195, 1);
lean_inc(x_197);
lean_dec(x_195);
x_198 = !lean_is_exclusive(x_196);
if (x_198 == 0)
{
lean_object* x_199; lean_object* x_200; lean_object* x_201; uint8_t x_202; 
x_199 = lean_ctor_get(x_196, 5);
x_200 = l_Lean_PersistentArray_push___rarg(x_199, x_194);
lean_ctor_set(x_196, 5, x_200);
x_201 = lean_st_ref_set(x_11, x_196, x_197);
x_202 = !lean_is_exclusive(x_201);
if (x_202 == 0)
{
lean_object* x_203; lean_object* x_204; 
x_203 = lean_ctor_get(x_201, 0);
lean_dec(x_203);
x_204 = lean_box(0);
lean_ctor_set(x_201, 0, x_204);
return x_201;
}
else
{
lean_object* x_205; lean_object* x_206; lean_object* x_207; 
x_205 = lean_ctor_get(x_201, 1);
lean_inc(x_205);
lean_dec(x_201);
x_206 = lean_box(0);
x_207 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_207, 0, x_206);
lean_ctor_set(x_207, 1, x_205);
return x_207;
}
}
else
{
lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; 
x_208 = lean_ctor_get(x_196, 0);
x_209 = lean_ctor_get(x_196, 1);
x_210 = lean_ctor_get(x_196, 2);
x_211 = lean_ctor_get(x_196, 3);
x_212 = lean_ctor_get(x_196, 4);
x_213 = lean_ctor_get(x_196, 5);
x_214 = lean_ctor_get(x_196, 6);
lean_inc(x_214);
lean_inc(x_213);
lean_inc(x_212);
lean_inc(x_211);
lean_inc(x_210);
lean_inc(x_209);
lean_inc(x_208);
lean_dec(x_196);
x_215 = l_Lean_PersistentArray_push___rarg(x_213, x_194);
x_216 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_216, 0, x_208);
lean_ctor_set(x_216, 1, x_209);
lean_ctor_set(x_216, 2, x_210);
lean_ctor_set(x_216, 3, x_211);
lean_ctor_set(x_216, 4, x_212);
lean_ctor_set(x_216, 5, x_215);
lean_ctor_set(x_216, 6, x_214);
x_217 = lean_st_ref_set(x_11, x_216, x_197);
x_218 = lean_ctor_get(x_217, 1);
lean_inc(x_218);
if (lean_is_exclusive(x_217)) {
 lean_ctor_release(x_217, 0);
 lean_ctor_release(x_217, 1);
 x_219 = x_217;
} else {
 lean_dec_ref(x_217);
 x_219 = lean_box(0);
}
x_220 = lean_box(0);
if (lean_is_scalar(x_219)) {
 x_221 = lean_alloc_ctor(0, 2, 0);
} else {
 x_221 = x_219;
}
lean_ctor_set(x_221, 0, x_220);
lean_ctor_set(x_221, 1, x_218);
return x_221;
}
}
else
{
lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; 
x_222 = lean_ctor_get(x_187, 0);
x_223 = lean_ctor_get(x_187, 1);
lean_inc(x_223);
lean_inc(x_222);
lean_dec(x_187);
x_224 = l_Lean_FileMap_toPosition(x_16, x_186);
lean_dec(x_186);
lean_inc(x_224);
lean_ctor_set(x_22, 0, x_224);
x_225 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_225, 0, x_18);
lean_ctor_set(x_225, 1, x_19);
x_226 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_226, 0, x_225);
lean_ctor_set(x_226, 1, x_222);
x_227 = l_Lean_Elab_Term_reportUnsolvedGoals___closed__6;
x_228 = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(x_228, 0, x_15);
lean_ctor_set(x_228, 1, x_224);
lean_ctor_set(x_228, 2, x_22);
lean_ctor_set(x_228, 3, x_227);
lean_ctor_set(x_228, 4, x_226);
lean_ctor_set_uint8(x_228, sizeof(void*)*5, x_21);
lean_ctor_set_uint8(x_228, sizeof(void*)*5 + 1, x_14);
x_229 = lean_st_ref_take(x_11, x_223);
x_230 = lean_ctor_get(x_229, 0);
lean_inc(x_230);
x_231 = lean_ctor_get(x_229, 1);
lean_inc(x_231);
lean_dec(x_229);
x_232 = lean_ctor_get(x_230, 0);
lean_inc(x_232);
x_233 = lean_ctor_get(x_230, 1);
lean_inc(x_233);
x_234 = lean_ctor_get(x_230, 2);
lean_inc(x_234);
x_235 = lean_ctor_get(x_230, 3);
lean_inc(x_235);
x_236 = lean_ctor_get(x_230, 4);
lean_inc(x_236);
x_237 = lean_ctor_get(x_230, 5);
lean_inc(x_237);
x_238 = lean_ctor_get(x_230, 6);
lean_inc(x_238);
if (lean_is_exclusive(x_230)) {
 lean_ctor_release(x_230, 0);
 lean_ctor_release(x_230, 1);
 lean_ctor_release(x_230, 2);
 lean_ctor_release(x_230, 3);
 lean_ctor_release(x_230, 4);
 lean_ctor_release(x_230, 5);
 lean_ctor_release(x_230, 6);
 x_239 = x_230;
} else {
 lean_dec_ref(x_230);
 x_239 = lean_box(0);
}
x_240 = l_Lean_PersistentArray_push___rarg(x_237, x_228);
if (lean_is_scalar(x_239)) {
 x_241 = lean_alloc_ctor(0, 7, 0);
} else {
 x_241 = x_239;
}
lean_ctor_set(x_241, 0, x_232);
lean_ctor_set(x_241, 1, x_233);
lean_ctor_set(x_241, 2, x_234);
lean_ctor_set(x_241, 3, x_235);
lean_ctor_set(x_241, 4, x_236);
lean_ctor_set(x_241, 5, x_240);
lean_ctor_set(x_241, 6, x_238);
x_242 = lean_st_ref_set(x_11, x_241, x_231);
x_243 = lean_ctor_get(x_242, 1);
lean_inc(x_243);
if (lean_is_exclusive(x_242)) {
 lean_ctor_release(x_242, 0);
 lean_ctor_release(x_242, 1);
 x_244 = x_242;
} else {
 lean_dec_ref(x_242);
 x_244 = lean_box(0);
}
x_245 = lean_box(0);
if (lean_is_scalar(x_244)) {
 x_246 = lean_alloc_ctor(0, 2, 0);
} else {
 x_246 = x_244;
}
lean_ctor_set(x_246, 0, x_245);
lean_ctor_set(x_246, 1, x_243);
return x_246;
}
}
else
{
lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; 
x_247 = lean_ctor_get(x_22, 0);
lean_inc(x_247);
lean_dec(x_22);
x_248 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_2, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_10);
x_249 = lean_ctor_get(x_248, 0);
lean_inc(x_249);
x_250 = lean_ctor_get(x_248, 1);
lean_inc(x_250);
if (lean_is_exclusive(x_248)) {
 lean_ctor_release(x_248, 0);
 lean_ctor_release(x_248, 1);
 x_251 = x_248;
} else {
 lean_dec_ref(x_248);
 x_251 = lean_box(0);
}
x_252 = l_Lean_FileMap_toPosition(x_16, x_247);
lean_dec(x_247);
lean_inc(x_252);
x_253 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_253, 0, x_252);
if (lean_is_scalar(x_251)) {
 x_254 = lean_alloc_ctor(0, 2, 0);
} else {
 x_254 = x_251;
}
lean_ctor_set(x_254, 0, x_18);
lean_ctor_set(x_254, 1, x_19);
x_255 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_255, 0, x_254);
lean_ctor_set(x_255, 1, x_249);
x_256 = l_Lean_Elab_Term_reportUnsolvedGoals___closed__6;
x_257 = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(x_257, 0, x_15);
lean_ctor_set(x_257, 1, x_252);
lean_ctor_set(x_257, 2, x_253);
lean_ctor_set(x_257, 3, x_256);
lean_ctor_set(x_257, 4, x_255);
lean_ctor_set_uint8(x_257, sizeof(void*)*5, x_21);
lean_ctor_set_uint8(x_257, sizeof(void*)*5 + 1, x_14);
x_258 = lean_st_ref_take(x_11, x_250);
x_259 = lean_ctor_get(x_258, 0);
lean_inc(x_259);
x_260 = lean_ctor_get(x_258, 1);
lean_inc(x_260);
lean_dec(x_258);
x_261 = lean_ctor_get(x_259, 0);
lean_inc(x_261);
x_262 = lean_ctor_get(x_259, 1);
lean_inc(x_262);
x_263 = lean_ctor_get(x_259, 2);
lean_inc(x_263);
x_264 = lean_ctor_get(x_259, 3);
lean_inc(x_264);
x_265 = lean_ctor_get(x_259, 4);
lean_inc(x_265);
x_266 = lean_ctor_get(x_259, 5);
lean_inc(x_266);
x_267 = lean_ctor_get(x_259, 6);
lean_inc(x_267);
if (lean_is_exclusive(x_259)) {
 lean_ctor_release(x_259, 0);
 lean_ctor_release(x_259, 1);
 lean_ctor_release(x_259, 2);
 lean_ctor_release(x_259, 3);
 lean_ctor_release(x_259, 4);
 lean_ctor_release(x_259, 5);
 lean_ctor_release(x_259, 6);
 x_268 = x_259;
} else {
 lean_dec_ref(x_259);
 x_268 = lean_box(0);
}
x_269 = l_Lean_PersistentArray_push___rarg(x_266, x_257);
if (lean_is_scalar(x_268)) {
 x_270 = lean_alloc_ctor(0, 7, 0);
} else {
 x_270 = x_268;
}
lean_ctor_set(x_270, 0, x_261);
lean_ctor_set(x_270, 1, x_262);
lean_ctor_set(x_270, 2, x_263);
lean_ctor_set(x_270, 3, x_264);
lean_ctor_set(x_270, 4, x_265);
lean_ctor_set(x_270, 5, x_269);
lean_ctor_set(x_270, 6, x_267);
x_271 = lean_st_ref_set(x_11, x_270, x_260);
x_272 = lean_ctor_get(x_271, 1);
lean_inc(x_272);
if (lean_is_exclusive(x_271)) {
 lean_ctor_release(x_271, 0);
 lean_ctor_release(x_271, 1);
 x_273 = x_271;
} else {
 lean_dec_ref(x_271);
 x_273 = lean_box(0);
}
x_274 = lean_box(0);
if (lean_is_scalar(x_273)) {
 x_275 = lean_alloc_ctor(0, 2, 0);
} else {
 x_275 = x_273;
}
lean_ctor_set(x_275, 0, x_274);
lean_ctor_set(x_275, 1, x_272);
return x_275;
}
}
else
{
lean_object* x_276; uint8_t x_277; 
x_276 = lean_ctor_get(x_22, 0);
lean_inc(x_276);
lean_dec(x_22);
x_277 = !lean_is_exclusive(x_23);
if (x_277 == 0)
{
lean_object* x_278; lean_object* x_279; uint8_t x_280; 
x_278 = lean_ctor_get(x_23, 0);
x_279 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_2, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_10);
x_280 = !lean_is_exclusive(x_279);
if (x_280 == 0)
{
lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; uint8_t x_291; 
x_281 = lean_ctor_get(x_279, 0);
x_282 = lean_ctor_get(x_279, 1);
lean_inc(x_16);
x_283 = l_Lean_FileMap_toPosition(x_16, x_276);
lean_dec(x_276);
x_284 = l_Lean_FileMap_toPosition(x_16, x_278);
lean_dec(x_278);
lean_ctor_set(x_23, 0, x_284);
lean_ctor_set(x_279, 1, x_19);
lean_ctor_set(x_279, 0, x_18);
x_285 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_285, 0, x_279);
lean_ctor_set(x_285, 1, x_281);
x_286 = l_Lean_Elab_Term_reportUnsolvedGoals___closed__6;
x_287 = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(x_287, 0, x_15);
lean_ctor_set(x_287, 1, x_283);
lean_ctor_set(x_287, 2, x_23);
lean_ctor_set(x_287, 3, x_286);
lean_ctor_set(x_287, 4, x_285);
lean_ctor_set_uint8(x_287, sizeof(void*)*5, x_21);
lean_ctor_set_uint8(x_287, sizeof(void*)*5 + 1, x_14);
x_288 = lean_st_ref_take(x_11, x_282);
x_289 = lean_ctor_get(x_288, 0);
lean_inc(x_289);
x_290 = lean_ctor_get(x_288, 1);
lean_inc(x_290);
lean_dec(x_288);
x_291 = !lean_is_exclusive(x_289);
if (x_291 == 0)
{
lean_object* x_292; lean_object* x_293; lean_object* x_294; uint8_t x_295; 
x_292 = lean_ctor_get(x_289, 5);
x_293 = l_Lean_PersistentArray_push___rarg(x_292, x_287);
lean_ctor_set(x_289, 5, x_293);
x_294 = lean_st_ref_set(x_11, x_289, x_290);
x_295 = !lean_is_exclusive(x_294);
if (x_295 == 0)
{
lean_object* x_296; lean_object* x_297; 
x_296 = lean_ctor_get(x_294, 0);
lean_dec(x_296);
x_297 = lean_box(0);
lean_ctor_set(x_294, 0, x_297);
return x_294;
}
else
{
lean_object* x_298; lean_object* x_299; lean_object* x_300; 
x_298 = lean_ctor_get(x_294, 1);
lean_inc(x_298);
lean_dec(x_294);
x_299 = lean_box(0);
x_300 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_300, 0, x_299);
lean_ctor_set(x_300, 1, x_298);
return x_300;
}
}
else
{
lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; 
x_301 = lean_ctor_get(x_289, 0);
x_302 = lean_ctor_get(x_289, 1);
x_303 = lean_ctor_get(x_289, 2);
x_304 = lean_ctor_get(x_289, 3);
x_305 = lean_ctor_get(x_289, 4);
x_306 = lean_ctor_get(x_289, 5);
x_307 = lean_ctor_get(x_289, 6);
lean_inc(x_307);
lean_inc(x_306);
lean_inc(x_305);
lean_inc(x_304);
lean_inc(x_303);
lean_inc(x_302);
lean_inc(x_301);
lean_dec(x_289);
x_308 = l_Lean_PersistentArray_push___rarg(x_306, x_287);
x_309 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_309, 0, x_301);
lean_ctor_set(x_309, 1, x_302);
lean_ctor_set(x_309, 2, x_303);
lean_ctor_set(x_309, 3, x_304);
lean_ctor_set(x_309, 4, x_305);
lean_ctor_set(x_309, 5, x_308);
lean_ctor_set(x_309, 6, x_307);
x_310 = lean_st_ref_set(x_11, x_309, x_290);
x_311 = lean_ctor_get(x_310, 1);
lean_inc(x_311);
if (lean_is_exclusive(x_310)) {
 lean_ctor_release(x_310, 0);
 lean_ctor_release(x_310, 1);
 x_312 = x_310;
} else {
 lean_dec_ref(x_310);
 x_312 = lean_box(0);
}
x_313 = lean_box(0);
if (lean_is_scalar(x_312)) {
 x_314 = lean_alloc_ctor(0, 2, 0);
} else {
 x_314 = x_312;
}
lean_ctor_set(x_314, 0, x_313);
lean_ctor_set(x_314, 1, x_311);
return x_314;
}
}
else
{
lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; 
x_315 = lean_ctor_get(x_279, 0);
x_316 = lean_ctor_get(x_279, 1);
lean_inc(x_316);
lean_inc(x_315);
lean_dec(x_279);
lean_inc(x_16);
x_317 = l_Lean_FileMap_toPosition(x_16, x_276);
lean_dec(x_276);
x_318 = l_Lean_FileMap_toPosition(x_16, x_278);
lean_dec(x_278);
lean_ctor_set(x_23, 0, x_318);
x_319 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_319, 0, x_18);
lean_ctor_set(x_319, 1, x_19);
x_320 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_320, 0, x_319);
lean_ctor_set(x_320, 1, x_315);
x_321 = l_Lean_Elab_Term_reportUnsolvedGoals___closed__6;
x_322 = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(x_322, 0, x_15);
lean_ctor_set(x_322, 1, x_317);
lean_ctor_set(x_322, 2, x_23);
lean_ctor_set(x_322, 3, x_321);
lean_ctor_set(x_322, 4, x_320);
lean_ctor_set_uint8(x_322, sizeof(void*)*5, x_21);
lean_ctor_set_uint8(x_322, sizeof(void*)*5 + 1, x_14);
x_323 = lean_st_ref_take(x_11, x_316);
x_324 = lean_ctor_get(x_323, 0);
lean_inc(x_324);
x_325 = lean_ctor_get(x_323, 1);
lean_inc(x_325);
lean_dec(x_323);
x_326 = lean_ctor_get(x_324, 0);
lean_inc(x_326);
x_327 = lean_ctor_get(x_324, 1);
lean_inc(x_327);
x_328 = lean_ctor_get(x_324, 2);
lean_inc(x_328);
x_329 = lean_ctor_get(x_324, 3);
lean_inc(x_329);
x_330 = lean_ctor_get(x_324, 4);
lean_inc(x_330);
x_331 = lean_ctor_get(x_324, 5);
lean_inc(x_331);
x_332 = lean_ctor_get(x_324, 6);
lean_inc(x_332);
if (lean_is_exclusive(x_324)) {
 lean_ctor_release(x_324, 0);
 lean_ctor_release(x_324, 1);
 lean_ctor_release(x_324, 2);
 lean_ctor_release(x_324, 3);
 lean_ctor_release(x_324, 4);
 lean_ctor_release(x_324, 5);
 lean_ctor_release(x_324, 6);
 x_333 = x_324;
} else {
 lean_dec_ref(x_324);
 x_333 = lean_box(0);
}
x_334 = l_Lean_PersistentArray_push___rarg(x_331, x_322);
if (lean_is_scalar(x_333)) {
 x_335 = lean_alloc_ctor(0, 7, 0);
} else {
 x_335 = x_333;
}
lean_ctor_set(x_335, 0, x_326);
lean_ctor_set(x_335, 1, x_327);
lean_ctor_set(x_335, 2, x_328);
lean_ctor_set(x_335, 3, x_329);
lean_ctor_set(x_335, 4, x_330);
lean_ctor_set(x_335, 5, x_334);
lean_ctor_set(x_335, 6, x_332);
x_336 = lean_st_ref_set(x_11, x_335, x_325);
x_337 = lean_ctor_get(x_336, 1);
lean_inc(x_337);
if (lean_is_exclusive(x_336)) {
 lean_ctor_release(x_336, 0);
 lean_ctor_release(x_336, 1);
 x_338 = x_336;
} else {
 lean_dec_ref(x_336);
 x_338 = lean_box(0);
}
x_339 = lean_box(0);
if (lean_is_scalar(x_338)) {
 x_340 = lean_alloc_ctor(0, 2, 0);
} else {
 x_340 = x_338;
}
lean_ctor_set(x_340, 0, x_339);
lean_ctor_set(x_340, 1, x_337);
return x_340;
}
}
else
{
lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; 
x_341 = lean_ctor_get(x_23, 0);
lean_inc(x_341);
lean_dec(x_23);
x_342 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_2, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_10);
x_343 = lean_ctor_get(x_342, 0);
lean_inc(x_343);
x_344 = lean_ctor_get(x_342, 1);
lean_inc(x_344);
if (lean_is_exclusive(x_342)) {
 lean_ctor_release(x_342, 0);
 lean_ctor_release(x_342, 1);
 x_345 = x_342;
} else {
 lean_dec_ref(x_342);
 x_345 = lean_box(0);
}
lean_inc(x_16);
x_346 = l_Lean_FileMap_toPosition(x_16, x_276);
lean_dec(x_276);
x_347 = l_Lean_FileMap_toPosition(x_16, x_341);
lean_dec(x_341);
x_348 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_348, 0, x_347);
if (lean_is_scalar(x_345)) {
 x_349 = lean_alloc_ctor(0, 2, 0);
} else {
 x_349 = x_345;
}
lean_ctor_set(x_349, 0, x_18);
lean_ctor_set(x_349, 1, x_19);
x_350 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_350, 0, x_349);
lean_ctor_set(x_350, 1, x_343);
x_351 = l_Lean_Elab_Term_reportUnsolvedGoals___closed__6;
x_352 = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(x_352, 0, x_15);
lean_ctor_set(x_352, 1, x_346);
lean_ctor_set(x_352, 2, x_348);
lean_ctor_set(x_352, 3, x_351);
lean_ctor_set(x_352, 4, x_350);
lean_ctor_set_uint8(x_352, sizeof(void*)*5, x_21);
lean_ctor_set_uint8(x_352, sizeof(void*)*5 + 1, x_14);
x_353 = lean_st_ref_take(x_11, x_344);
x_354 = lean_ctor_get(x_353, 0);
lean_inc(x_354);
x_355 = lean_ctor_get(x_353, 1);
lean_inc(x_355);
lean_dec(x_353);
x_356 = lean_ctor_get(x_354, 0);
lean_inc(x_356);
x_357 = lean_ctor_get(x_354, 1);
lean_inc(x_357);
x_358 = lean_ctor_get(x_354, 2);
lean_inc(x_358);
x_359 = lean_ctor_get(x_354, 3);
lean_inc(x_359);
x_360 = lean_ctor_get(x_354, 4);
lean_inc(x_360);
x_361 = lean_ctor_get(x_354, 5);
lean_inc(x_361);
x_362 = lean_ctor_get(x_354, 6);
lean_inc(x_362);
if (lean_is_exclusive(x_354)) {
 lean_ctor_release(x_354, 0);
 lean_ctor_release(x_354, 1);
 lean_ctor_release(x_354, 2);
 lean_ctor_release(x_354, 3);
 lean_ctor_release(x_354, 4);
 lean_ctor_release(x_354, 5);
 lean_ctor_release(x_354, 6);
 x_363 = x_354;
} else {
 lean_dec_ref(x_354);
 x_363 = lean_box(0);
}
x_364 = l_Lean_PersistentArray_push___rarg(x_361, x_352);
if (lean_is_scalar(x_363)) {
 x_365 = lean_alloc_ctor(0, 7, 0);
} else {
 x_365 = x_363;
}
lean_ctor_set(x_365, 0, x_356);
lean_ctor_set(x_365, 1, x_357);
lean_ctor_set(x_365, 2, x_358);
lean_ctor_set(x_365, 3, x_359);
lean_ctor_set(x_365, 4, x_360);
lean_ctor_set(x_365, 5, x_364);
lean_ctor_set(x_365, 6, x_362);
x_366 = lean_st_ref_set(x_11, x_365, x_355);
x_367 = lean_ctor_get(x_366, 1);
lean_inc(x_367);
if (lean_is_exclusive(x_366)) {
 lean_ctor_release(x_366, 0);
 lean_ctor_release(x_366, 1);
 x_368 = x_366;
} else {
 lean_dec_ref(x_366);
 x_368 = lean_box(0);
}
x_369 = lean_box(0);
if (lean_is_scalar(x_368)) {
 x_370 = lean_alloc_ctor(0, 2, 0);
} else {
 x_370 = x_368;
}
lean_ctor_set(x_370, 0, x_369);
lean_ctor_set(x_370, 1, x_367);
return x_370;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_log___at_Lean_Elab_Tactic_closeUsingOrAdmit___spec__3(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_9, 5);
lean_inc(x_12);
x_13 = l_Lean_logAt___at_Lean_Elab_Tactic_closeUsingOrAdmit___spec__2(x_12, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_12);
return x_13;
}
}
static lean_object* _init_l_Lean_Elab_logException___at_Lean_Elab_Tactic_closeUsingOrAdmit___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("internal exception: ", 20);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_logException___at_Lean_Elab_Tactic_closeUsingOrAdmit___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_logException___at_Lean_Elab_Tactic_closeUsingOrAdmit___spec__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at_Lean_Elab_Tactic_closeUsingOrAdmit___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
lean_dec(x_1);
x_13 = 2;
x_14 = l_Lean_logAt___at_Lean_Elab_Tactic_closeUsingOrAdmit___spec__2(x_11, x_12, x_13, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_11);
return x_14;
}
else
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_1);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_16 = lean_ctor_get(x_1, 0);
x_17 = lean_ctor_get(x_1, 1);
lean_dec(x_17);
x_18 = l_Lean_Elab_isAbortExceptionId(x_16);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_8, 5);
lean_inc(x_19);
x_20 = l_Lean_InternalExceptionId_getName(x_16, x_10);
lean_dec(x_16);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; lean_object* x_29; 
lean_dec(x_19);
lean_free_object(x_1);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l_Lean_MessageData_ofName(x_21);
x_24 = l_Lean_Elab_logException___at_Lean_Elab_Tactic_closeUsingOrAdmit___spec__1___closed__2;
x_25 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_23);
x_26 = l_Lean_Elab_Term_reportUnsolvedGoals___closed__7;
x_27 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
x_28 = 2;
x_29 = l_Lean_log___at_Lean_Elab_Tactic_closeUsingOrAdmit___spec__3(x_27, x_28, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_22);
return x_29;
}
else
{
uint8_t x_30; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_30 = !lean_is_exclusive(x_20);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_31 = lean_ctor_get(x_20, 0);
x_32 = lean_io_error_to_string(x_31);
x_33 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_33, 0, x_32);
x_34 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set_tag(x_1, 0);
lean_ctor_set(x_1, 1, x_34);
lean_ctor_set(x_1, 0, x_19);
lean_ctor_set(x_20, 0, x_1);
return x_20;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_35 = lean_ctor_get(x_20, 0);
x_36 = lean_ctor_get(x_20, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_20);
x_37 = lean_io_error_to_string(x_35);
x_38 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_38, 0, x_37);
x_39 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set_tag(x_1, 0);
lean_ctor_set(x_1, 1, x_39);
lean_ctor_set(x_1, 0, x_19);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_1);
lean_ctor_set(x_40, 1, x_36);
return x_40;
}
}
}
else
{
lean_object* x_41; lean_object* x_42; 
lean_free_object(x_1);
lean_dec(x_16);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_41 = lean_box(0);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_10);
return x_42;
}
}
else
{
lean_object* x_43; uint8_t x_44; 
x_43 = lean_ctor_get(x_1, 0);
lean_inc(x_43);
lean_dec(x_1);
x_44 = l_Lean_Elab_isAbortExceptionId(x_43);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; 
x_45 = lean_ctor_get(x_8, 5);
lean_inc(x_45);
x_46 = l_Lean_InternalExceptionId_getName(x_43, x_10);
lean_dec(x_43);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; uint8_t x_54; lean_object* x_55; 
lean_dec(x_45);
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
lean_dec(x_46);
x_49 = l_Lean_MessageData_ofName(x_47);
x_50 = l_Lean_Elab_logException___at_Lean_Elab_Tactic_closeUsingOrAdmit___spec__1___closed__2;
x_51 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_49);
x_52 = l_Lean_Elab_Term_reportUnsolvedGoals___closed__7;
x_53 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
x_54 = 2;
x_55 = l_Lean_log___at_Lean_Elab_Tactic_closeUsingOrAdmit___spec__3(x_53, x_54, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_48);
return x_55;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_56 = lean_ctor_get(x_46, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_46, 1);
lean_inc(x_57);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 x_58 = x_46;
} else {
 lean_dec_ref(x_46);
 x_58 = lean_box(0);
}
x_59 = lean_io_error_to_string(x_56);
x_60 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_60, 0, x_59);
x_61 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_61, 0, x_60);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_45);
lean_ctor_set(x_62, 1, x_61);
if (lean_is_scalar(x_58)) {
 x_63 = lean_alloc_ctor(1, 2, 0);
} else {
 x_63 = x_58;
}
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_57);
return x_63;
}
}
else
{
lean_object* x_64; lean_object* x_65; 
lean_dec(x_43);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_64 = lean_box(0);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_10);
return x_65;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_closeUsingOrAdmit(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = l_Lean_Elab_Tactic_getUnsolvedGoals(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_1);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Lean_Elab_Tactic_throwNoGoalsToBeSolved___rarg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_11, 1);
lean_inc(x_15);
lean_dec(x_11);
x_16 = lean_ctor_get(x_12, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_12, 1);
lean_inc(x_17);
lean_dec(x_12);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_18 = l_Lean_Elab_Tactic_focusAndDone___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_15);
if (lean_obj_tag(x_18) == 0)
{
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_18;
}
else
{
uint8_t x_19; 
x_19 = lean_ctor_get_uint8(x_2, sizeof(void*)*1);
if (x_19 == 0)
{
uint8_t x_20; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_20 = !lean_is_exclusive(x_18);
if (x_20 == 0)
{
return x_18;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_18, 0);
x_22 = lean_ctor_get(x_18, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_18);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_18, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_18, 1);
lean_inc(x_25);
lean_dec(x_18);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_26 = l_Lean_Elab_logException___at_Lean_Elab_Tactic_closeUsingOrAdmit___spec__1(x_24, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_25);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_28 = l_Lean_Elab_admitGoal(x_16, x_6, x_7, x_8, x_9, x_27);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
lean_dec(x_28);
x_30 = l_Lean_Elab_Tactic_setGoals(x_17, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_29);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_30;
}
else
{
uint8_t x_31; 
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_31 = !lean_is_exclusive(x_28);
if (x_31 == 0)
{
return x_28;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_28, 0);
x_33 = lean_ctor_get(x_28, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_28);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
uint8_t x_35; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_35 = !lean_is_exclusive(x_26);
if (x_35 == 0)
{
return x_26;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_26, 0);
x_37 = lean_ctor_get(x_26, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_26);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at_Lean_Elab_Tactic_closeUsingOrAdmit___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; lean_object* x_14; 
x_13 = lean_unbox(x_3);
lean_dec(x_3);
x_14 = l_Lean_logAt___at_Lean_Elab_Tactic_closeUsingOrAdmit___spec__2(x_1, x_2, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at_Lean_Elab_Tactic_closeUsingOrAdmit___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_2);
lean_dec(x_2);
x_13 = l_Lean_log___at_Lean_Elab_Tactic_closeUsingOrAdmit___spec__3(x_1, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_instMonadBacktrackSavedStateTacticM___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = 0;
x_12 = l_Lean_Elab_Tactic_SavedState_restore(x_1, x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_instMonadBacktrackSavedStateTacticM___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_saveState___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_instMonadBacktrackSavedStateTacticM___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_instMonadBacktrackSavedStateTacticM___lambda__1___boxed), 10, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_instMonadBacktrackSavedStateTacticM___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Tactic_instMonadBacktrackSavedStateTacticM___closed__1;
x_2 = l_Lean_Elab_Tactic_instMonadBacktrackSavedStateTacticM___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_instMonadBacktrackSavedStateTacticM() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_Tactic_instMonadBacktrackSavedStateTacticM___closed__3;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_instMonadBacktrackSavedStateTacticM___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Tactic_instMonadBacktrackSavedStateTacticM___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_tryCatch___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = l_Lean_Elab_Tactic_saveState___rarg(x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_15 = lean_apply_9(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_15;
}
else
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_ctor_get(x_15, 1);
x_19 = l_Lean_Exception_isRuntime(x_17);
if (x_19 == 0)
{
uint8_t x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_free_object(x_15);
x_20 = 0;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_21 = l_Lean_Elab_Tactic_SavedState_restore(x_13, x_20, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_18);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_23 = lean_apply_10(x_2, x_17, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_22);
return x_23;
}
else
{
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_15;
}
}
else
{
lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_24 = lean_ctor_get(x_15, 0);
x_25 = lean_ctor_get(x_15, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_15);
x_26 = l_Lean_Exception_isRuntime(x_24);
if (x_26 == 0)
{
uint8_t x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_27 = 0;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_28 = l_Lean_Elab_Tactic_SavedState_restore(x_13, x_27, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_25);
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
lean_dec(x_28);
x_30 = lean_apply_10(x_2, x_24, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_29);
return x_30;
}
else
{
lean_object* x_31; 
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_24);
lean_ctor_set(x_31, 1, x_25);
return x_31;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_tryCatch(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_tryCatch___rarg), 11, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_instMonadExceptExceptionTacticM___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_2);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_instMonadExceptExceptionTacticM___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = l_Lean_Elab_Tactic_saveState___rarg(x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_16 = lean_apply_9(x_2, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_16;
}
else
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_ctor_get(x_16, 1);
x_20 = l_Lean_Exception_isRuntime(x_18);
if (x_20 == 0)
{
uint8_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_free_object(x_16);
x_21 = 0;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_22 = l_Lean_Elab_Tactic_SavedState_restore(x_14, x_21, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_19);
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_dec(x_22);
x_24 = lean_apply_10(x_3, x_18, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_23);
return x_24;
}
else
{
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_16;
}
}
else
{
lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_25 = lean_ctor_get(x_16, 0);
x_26 = lean_ctor_get(x_16, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_16);
x_27 = l_Lean_Exception_isRuntime(x_25);
if (x_27 == 0)
{
uint8_t x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_28 = 0;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_29 = l_Lean_Elab_Tactic_SavedState_restore(x_14, x_28, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_26);
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
lean_dec(x_29);
x_31 = lean_apply_10(x_3, x_25, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_30);
return x_31;
}
else
{
lean_object* x_32; 
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_25);
lean_ctor_set(x_32, 1, x_26);
return x_32;
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_Tactic_instMonadExceptExceptionTacticM___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_instMonadExceptExceptionTacticM___lambda__1___boxed), 11, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_instMonadExceptExceptionTacticM___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_instMonadExceptExceptionTacticM___lambda__2), 12, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_instMonadExceptExceptionTacticM___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Tactic_instMonadExceptExceptionTacticM___closed__1;
x_2 = l_Lean_Elab_Tactic_instMonadExceptExceptionTacticM___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_instMonadExceptExceptionTacticM() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_Tactic_instMonadExceptExceptionTacticM___closed__3;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_instMonadExceptExceptionTacticM___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Elab_Tactic_instMonadExceptExceptionTacticM___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_withoutRecover___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_2);
if (x_11 == 0)
{
uint8_t x_12; lean_object* x_13; 
x_12 = 0;
lean_ctor_set_uint8(x_2, sizeof(void*)*1, x_12);
x_13 = lean_apply_9(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_13;
}
else
{
lean_object* x_14; uint8_t x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_2, 0);
lean_inc(x_14);
lean_dec(x_2);
x_15 = 0;
x_16 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set_uint8(x_16, sizeof(void*)*1, x_15);
x_17 = lean_apply_9(x_1, x_16, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_17;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_withoutRecover(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_withoutRecover___rarg), 10, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_orElse___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = l_Lean_Elab_Tactic_saveState___rarg(x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_15 = l_Lean_Elab_Tactic_withoutRecover___rarg(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_15;
}
else
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_ctor_get(x_15, 1);
x_19 = l_Lean_Exception_isRuntime(x_17);
if (x_19 == 0)
{
uint8_t x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_free_object(x_15);
lean_dec(x_17);
x_20 = 0;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_21 = l_Lean_Elab_Tactic_SavedState_restore(x_13, x_20, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_18);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_23 = lean_box(0);
x_24 = lean_apply_10(x_2, x_23, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_22);
return x_24;
}
else
{
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_15;
}
}
else
{
lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_25 = lean_ctor_get(x_15, 0);
x_26 = lean_ctor_get(x_15, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_15);
x_27 = l_Lean_Exception_isRuntime(x_25);
if (x_27 == 0)
{
uint8_t x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
lean_dec(x_25);
x_28 = 0;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_29 = l_Lean_Elab_Tactic_SavedState_restore(x_13, x_28, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_26);
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
lean_dec(x_29);
x_31 = lean_box(0);
x_32 = lean_apply_10(x_2, x_31, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_30);
return x_32;
}
else
{
lean_object* x_33; 
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_25);
lean_ctor_set(x_33, 1, x_26);
return x_33;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_orElse(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_orElse___rarg), 11, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_instOrElseTacticM___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_orElse___rarg), 11, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_instOrElseTacticM(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Tactic_instOrElseTacticM___closed__1;
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Tactic_instAlternativeTacticM___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_8, 5);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_6, x_7, x_8, x_9, x_10);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_11);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_11);
lean_ctor_set(x_15, 1, x_14);
lean_ctor_set_tag(x_12, 1);
lean_ctor_set(x_12, 0, x_15);
return x_12;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_12, 0);
x_17 = lean_ctor_get(x_12, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_12);
lean_inc(x_11);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_16);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Tactic_instAlternativeTacticM___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwError___at_Lean_Elab_Tactic_instAlternativeTacticM___spec__1___rarg___boxed), 10, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_instAlternativeTacticM___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("failed", 6);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_instAlternativeTacticM___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Tactic_instAlternativeTacticM___lambda__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_instAlternativeTacticM___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = l_Lean_Elab_Tactic_instAlternativeTacticM___lambda__1___closed__2;
x_12 = l_Lean_throwError___at_Lean_Elab_Tactic_instAlternativeTacticM___spec__1___rarg(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_instAlternativeTacticM___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = l_Lean_Elab_Tactic_saveState___rarg(x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_16 = l_Lean_Elab_Tactic_withoutRecover___rarg(x_2, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_16;
}
else
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_ctor_get(x_16, 1);
x_20 = l_Lean_Exception_isRuntime(x_18);
if (x_20 == 0)
{
uint8_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_free_object(x_16);
lean_dec(x_18);
x_21 = 0;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_22 = l_Lean_Elab_Tactic_SavedState_restore(x_14, x_21, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_19);
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_dec(x_22);
x_24 = lean_box(0);
x_25 = lean_apply_10(x_3, x_24, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_23);
return x_25;
}
else
{
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_16;
}
}
else
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_26 = lean_ctor_get(x_16, 0);
x_27 = lean_ctor_get(x_16, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_16);
x_28 = l_Lean_Exception_isRuntime(x_26);
if (x_28 == 0)
{
uint8_t x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
lean_dec(x_26);
x_29 = 0;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_30 = l_Lean_Elab_Tactic_SavedState_restore(x_14, x_29, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_27);
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
lean_dec(x_30);
x_32 = lean_box(0);
x_33 = lean_apply_10(x_3, x_32, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_31);
return x_33;
}
else
{
lean_object* x_34; 
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_26);
lean_ctor_set(x_34, 1, x_27);
return x_34;
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_Tactic_instAlternativeTacticM___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_instAlternativeTacticM___lambda__1___boxed), 10, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_instAlternativeTacticM___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_instAlternativeTacticM___lambda__2), 12, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_instAlternativeTacticM___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_Tactic_instMonadTacticM___closed__3;
x_2 = l_Lean_Elab_Tactic_instAlternativeTacticM___closed__1;
x_3 = l_Lean_Elab_Tactic_instAlternativeTacticM___closed__2;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_instAlternativeTacticM() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_Tactic_instAlternativeTacticM___closed__3;
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Tactic_instAlternativeTacticM___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_throwError___at_Lean_Elab_Tactic_instAlternativeTacticM___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_instAlternativeTacticM___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Tactic_instAlternativeTacticM___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_ReaderT_pure___at_Lean_Elab_Tactic_saveTacticInfoForToken___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_1);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* l_ReaderT_pure___at_Lean_Elab_Tactic_saveTacticInfoForToken___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ReaderT_pure___at_Lean_Elab_Tactic_saveTacticInfoForToken___spec__1___rarg___boxed), 10, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_saveTacticInfoForToken(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = 0;
x_12 = l_Lean_Syntax_getPos_x3f(x_1, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_13 = lean_box(0);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_10);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_12);
x_15 = lean_box(0);
x_16 = lean_alloc_closure((void*)(l_ReaderT_pure___at_Lean_Elab_Tactic_saveTacticInfoForToken___spec__1___rarg___boxed), 10, 1);
lean_closure_set(x_16, 0, x_15);
x_17 = l_Lean_Elab_Tactic_mkInitialTacticInfo(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_withTacticInfoContext___rarg___lambda__1), 11, 1);
lean_closure_set(x_20, 0, x_18);
x_21 = l_Lean_Elab_withInfoTreeContext___at_Lean_Elab_Tactic_evalTactic_eval___spec__1(x_16, x_20, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_19);
return x_21;
}
}
}
LEAN_EXPORT lean_object* l_ReaderT_pure___at_Lean_Elab_Tactic_saveTacticInfoForToken___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_ReaderT_pure___at_Lean_Elab_Tactic_saveTacticInfoForToken___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at_Lean_Elab_Tactic_withMacroExpansion___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_12 = lean_st_ref_get(x_10, x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_13, 6);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_ctor_get_uint8(x_14, sizeof(void*)*2);
lean_dec(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_2);
x_16 = lean_ctor_get(x_12, 1);
lean_inc(x_16);
lean_dec(x_12);
x_17 = lean_apply_9(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_16);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_18 = lean_ctor_get(x_12, 1);
lean_inc(x_18);
lean_dec(x_12);
x_19 = l_Lean_Elab_getResetInfoTrees___at_Lean_Elab_Tactic_withTacticInfoContext___spec__2___rarg(x_10, x_18);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_22 = lean_apply_9(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_21);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_st_ref_get(x_10, x_24);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_ctor_get(x_26, 6);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
lean_dec(x_28);
lean_inc(x_10);
x_30 = lean_apply_10(x_2, x_29, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_27);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_st_ref_take(x_10, x_32);
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_34, 6);
lean_inc(x_35);
x_36 = lean_ctor_get(x_33, 1);
lean_inc(x_36);
lean_dec(x_33);
x_37 = !lean_is_exclusive(x_34);
if (x_37 == 0)
{
lean_object* x_38; uint8_t x_39; 
x_38 = lean_ctor_get(x_34, 6);
lean_dec(x_38);
x_39 = !lean_is_exclusive(x_35);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; uint8_t x_43; 
x_40 = lean_ctor_get(x_35, 1);
lean_dec(x_40);
x_41 = l_Lean_PersistentArray_push___rarg(x_20, x_31);
lean_ctor_set(x_35, 1, x_41);
x_42 = lean_st_ref_set(x_10, x_34, x_36);
lean_dec(x_10);
x_43 = !lean_is_exclusive(x_42);
if (x_43 == 0)
{
lean_object* x_44; 
x_44 = lean_ctor_get(x_42, 0);
lean_dec(x_44);
lean_ctor_set(x_42, 0, x_23);
return x_42;
}
else
{
lean_object* x_45; lean_object* x_46; 
x_45 = lean_ctor_get(x_42, 1);
lean_inc(x_45);
lean_dec(x_42);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_23);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
else
{
uint8_t x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_47 = lean_ctor_get_uint8(x_35, sizeof(void*)*2);
x_48 = lean_ctor_get(x_35, 0);
lean_inc(x_48);
lean_dec(x_35);
x_49 = l_Lean_PersistentArray_push___rarg(x_20, x_31);
x_50 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
lean_ctor_set_uint8(x_50, sizeof(void*)*2, x_47);
lean_ctor_set(x_34, 6, x_50);
x_51 = lean_st_ref_set(x_10, x_34, x_36);
lean_dec(x_10);
x_52 = lean_ctor_get(x_51, 1);
lean_inc(x_52);
if (lean_is_exclusive(x_51)) {
 lean_ctor_release(x_51, 0);
 lean_ctor_release(x_51, 1);
 x_53 = x_51;
} else {
 lean_dec_ref(x_51);
 x_53 = lean_box(0);
}
if (lean_is_scalar(x_53)) {
 x_54 = lean_alloc_ctor(0, 2, 0);
} else {
 x_54 = x_53;
}
lean_ctor_set(x_54, 0, x_23);
lean_ctor_set(x_54, 1, x_52);
return x_54;
}
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; uint8_t x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_55 = lean_ctor_get(x_34, 0);
x_56 = lean_ctor_get(x_34, 1);
x_57 = lean_ctor_get(x_34, 2);
x_58 = lean_ctor_get(x_34, 3);
x_59 = lean_ctor_get(x_34, 4);
x_60 = lean_ctor_get(x_34, 5);
lean_inc(x_60);
lean_inc(x_59);
lean_inc(x_58);
lean_inc(x_57);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_34);
x_61 = lean_ctor_get_uint8(x_35, sizeof(void*)*2);
x_62 = lean_ctor_get(x_35, 0);
lean_inc(x_62);
if (lean_is_exclusive(x_35)) {
 lean_ctor_release(x_35, 0);
 lean_ctor_release(x_35, 1);
 x_63 = x_35;
} else {
 lean_dec_ref(x_35);
 x_63 = lean_box(0);
}
x_64 = l_Lean_PersistentArray_push___rarg(x_20, x_31);
if (lean_is_scalar(x_63)) {
 x_65 = lean_alloc_ctor(0, 2, 1);
} else {
 x_65 = x_63;
}
lean_ctor_set(x_65, 0, x_62);
lean_ctor_set(x_65, 1, x_64);
lean_ctor_set_uint8(x_65, sizeof(void*)*2, x_61);
x_66 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_66, 0, x_55);
lean_ctor_set(x_66, 1, x_56);
lean_ctor_set(x_66, 2, x_57);
lean_ctor_set(x_66, 3, x_58);
lean_ctor_set(x_66, 4, x_59);
lean_ctor_set(x_66, 5, x_60);
lean_ctor_set(x_66, 6, x_65);
x_67 = lean_st_ref_set(x_10, x_66, x_36);
lean_dec(x_10);
x_68 = lean_ctor_get(x_67, 1);
lean_inc(x_68);
if (lean_is_exclusive(x_67)) {
 lean_ctor_release(x_67, 0);
 lean_ctor_release(x_67, 1);
 x_69 = x_67;
} else {
 lean_dec_ref(x_67);
 x_69 = lean_box(0);
}
if (lean_is_scalar(x_69)) {
 x_70 = lean_alloc_ctor(0, 2, 0);
} else {
 x_70 = x_69;
}
lean_ctor_set(x_70, 0, x_23);
lean_ctor_set(x_70, 1, x_68);
return x_70;
}
}
else
{
uint8_t x_71; 
lean_dec(x_23);
lean_dec(x_20);
lean_dec(x_10);
x_71 = !lean_is_exclusive(x_30);
if (x_71 == 0)
{
return x_30;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_72 = lean_ctor_get(x_30, 0);
x_73 = lean_ctor_get(x_30, 1);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_30);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_73);
return x_74;
}
}
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_75 = lean_ctor_get(x_22, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_22, 1);
lean_inc(x_76);
lean_dec(x_22);
x_77 = lean_st_ref_get(x_10, x_76);
x_78 = lean_ctor_get(x_77, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_77, 1);
lean_inc(x_79);
lean_dec(x_77);
x_80 = lean_ctor_get(x_78, 6);
lean_inc(x_80);
lean_dec(x_78);
x_81 = lean_ctor_get(x_80, 1);
lean_inc(x_81);
lean_dec(x_80);
lean_inc(x_10);
x_82 = lean_apply_10(x_2, x_81, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_79);
if (lean_obj_tag(x_82) == 0)
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; uint8_t x_89; 
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_82, 1);
lean_inc(x_84);
lean_dec(x_82);
x_85 = lean_st_ref_take(x_10, x_84);
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_86, 6);
lean_inc(x_87);
x_88 = lean_ctor_get(x_85, 1);
lean_inc(x_88);
lean_dec(x_85);
x_89 = !lean_is_exclusive(x_86);
if (x_89 == 0)
{
lean_object* x_90; uint8_t x_91; 
x_90 = lean_ctor_get(x_86, 6);
lean_dec(x_90);
x_91 = !lean_is_exclusive(x_87);
if (x_91 == 0)
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; uint8_t x_95; 
x_92 = lean_ctor_get(x_87, 1);
lean_dec(x_92);
x_93 = l_Lean_PersistentArray_push___rarg(x_20, x_83);
lean_ctor_set(x_87, 1, x_93);
x_94 = lean_st_ref_set(x_10, x_86, x_88);
lean_dec(x_10);
x_95 = !lean_is_exclusive(x_94);
if (x_95 == 0)
{
lean_object* x_96; 
x_96 = lean_ctor_get(x_94, 0);
lean_dec(x_96);
lean_ctor_set_tag(x_94, 1);
lean_ctor_set(x_94, 0, x_75);
return x_94;
}
else
{
lean_object* x_97; lean_object* x_98; 
x_97 = lean_ctor_get(x_94, 1);
lean_inc(x_97);
lean_dec(x_94);
x_98 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_98, 0, x_75);
lean_ctor_set(x_98, 1, x_97);
return x_98;
}
}
else
{
uint8_t x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; 
x_99 = lean_ctor_get_uint8(x_87, sizeof(void*)*2);
x_100 = lean_ctor_get(x_87, 0);
lean_inc(x_100);
lean_dec(x_87);
x_101 = l_Lean_PersistentArray_push___rarg(x_20, x_83);
x_102 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_102, 0, x_100);
lean_ctor_set(x_102, 1, x_101);
lean_ctor_set_uint8(x_102, sizeof(void*)*2, x_99);
lean_ctor_set(x_86, 6, x_102);
x_103 = lean_st_ref_set(x_10, x_86, x_88);
lean_dec(x_10);
x_104 = lean_ctor_get(x_103, 1);
lean_inc(x_104);
if (lean_is_exclusive(x_103)) {
 lean_ctor_release(x_103, 0);
 lean_ctor_release(x_103, 1);
 x_105 = x_103;
} else {
 lean_dec_ref(x_103);
 x_105 = lean_box(0);
}
if (lean_is_scalar(x_105)) {
 x_106 = lean_alloc_ctor(1, 2, 0);
} else {
 x_106 = x_105;
 lean_ctor_set_tag(x_106, 1);
}
lean_ctor_set(x_106, 0, x_75);
lean_ctor_set(x_106, 1, x_104);
return x_106;
}
}
else
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; uint8_t x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
x_107 = lean_ctor_get(x_86, 0);
x_108 = lean_ctor_get(x_86, 1);
x_109 = lean_ctor_get(x_86, 2);
x_110 = lean_ctor_get(x_86, 3);
x_111 = lean_ctor_get(x_86, 4);
x_112 = lean_ctor_get(x_86, 5);
lean_inc(x_112);
lean_inc(x_111);
lean_inc(x_110);
lean_inc(x_109);
lean_inc(x_108);
lean_inc(x_107);
lean_dec(x_86);
x_113 = lean_ctor_get_uint8(x_87, sizeof(void*)*2);
x_114 = lean_ctor_get(x_87, 0);
lean_inc(x_114);
if (lean_is_exclusive(x_87)) {
 lean_ctor_release(x_87, 0);
 lean_ctor_release(x_87, 1);
 x_115 = x_87;
} else {
 lean_dec_ref(x_87);
 x_115 = lean_box(0);
}
x_116 = l_Lean_PersistentArray_push___rarg(x_20, x_83);
if (lean_is_scalar(x_115)) {
 x_117 = lean_alloc_ctor(0, 2, 1);
} else {
 x_117 = x_115;
}
lean_ctor_set(x_117, 0, x_114);
lean_ctor_set(x_117, 1, x_116);
lean_ctor_set_uint8(x_117, sizeof(void*)*2, x_113);
x_118 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_118, 0, x_107);
lean_ctor_set(x_118, 1, x_108);
lean_ctor_set(x_118, 2, x_109);
lean_ctor_set(x_118, 3, x_110);
lean_ctor_set(x_118, 4, x_111);
lean_ctor_set(x_118, 5, x_112);
lean_ctor_set(x_118, 6, x_117);
x_119 = lean_st_ref_set(x_10, x_118, x_88);
lean_dec(x_10);
x_120 = lean_ctor_get(x_119, 1);
lean_inc(x_120);
if (lean_is_exclusive(x_119)) {
 lean_ctor_release(x_119, 0);
 lean_ctor_release(x_119, 1);
 x_121 = x_119;
} else {
 lean_dec_ref(x_119);
 x_121 = lean_box(0);
}
if (lean_is_scalar(x_121)) {
 x_122 = lean_alloc_ctor(1, 2, 0);
} else {
 x_122 = x_121;
 lean_ctor_set_tag(x_122, 1);
}
lean_ctor_set(x_122, 0, x_75);
lean_ctor_set(x_122, 1, x_120);
return x_122;
}
}
else
{
uint8_t x_123; 
lean_dec(x_75);
lean_dec(x_20);
lean_dec(x_10);
x_123 = !lean_is_exclusive(x_82);
if (x_123 == 0)
{
return x_82;
}
else
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_124 = lean_ctor_get(x_82, 0);
x_125 = lean_ctor_get(x_82, 1);
lean_inc(x_125);
lean_inc(x_124);
lean_dec(x_82);
x_126 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_126, 0, x_124);
lean_ctor_set(x_126, 1, x_125);
return x_126;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at_Lean_Elab_Tactic_withMacroExpansion___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_withInfoTreeContext___at_Lean_Elab_Tactic_withMacroExpansion___spec__2___rarg), 11, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at_Lean_Elab_Tactic_withMacroExpansion___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_ctor_get(x_8, 1);
lean_inc(x_13);
x_14 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_1);
lean_ctor_set(x_14, 2, x_2);
x_15 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_15, 0, x_14);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_3);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_12);
return x_17;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at_Lean_Elab_Tactic_withMacroExpansion___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_alloc_closure((void*)(l_Lean_Elab_withMacroExpansionInfo___at_Lean_Elab_Tactic_withMacroExpansion___spec__1___rarg___lambda__1___boxed), 12, 2);
lean_closure_set(x_13, 0, x_1);
lean_closure_set(x_13, 1, x_2);
x_14 = l_Lean_Elab_withInfoTreeContext___at_Lean_Elab_Tactic_withMacroExpansion___spec__2___rarg(x_3, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at_Lean_Elab_Tactic_withMacroExpansion___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_withMacroExpansionInfo___at_Lean_Elab_Tactic_withMacroExpansion___spec__1___rarg), 12, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_withMacroExpansion___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_6);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_6, 2);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_1);
lean_ctor_set(x_15, 1, x_2);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
lean_ctor_set(x_6, 2, x_16);
x_17 = lean_apply_9(x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; uint8_t x_22; uint8_t x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; uint8_t x_29; uint8_t x_30; uint8_t x_31; uint8_t x_32; lean_object* x_33; uint8_t x_34; uint8_t x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_18 = lean_ctor_get(x_6, 0);
x_19 = lean_ctor_get(x_6, 1);
x_20 = lean_ctor_get(x_6, 2);
x_21 = lean_ctor_get_uint8(x_6, sizeof(void*)*8);
x_22 = lean_ctor_get_uint8(x_6, sizeof(void*)*8 + 1);
x_23 = lean_ctor_get_uint8(x_6, sizeof(void*)*8 + 2);
x_24 = lean_ctor_get(x_6, 3);
x_25 = lean_ctor_get(x_6, 4);
x_26 = lean_ctor_get(x_6, 5);
x_27 = lean_ctor_get(x_6, 6);
x_28 = lean_ctor_get_uint8(x_6, sizeof(void*)*8 + 3);
x_29 = lean_ctor_get_uint8(x_6, sizeof(void*)*8 + 4);
x_30 = lean_ctor_get_uint8(x_6, sizeof(void*)*8 + 5);
x_31 = lean_ctor_get_uint8(x_6, sizeof(void*)*8 + 6);
x_32 = lean_ctor_get_uint8(x_6, sizeof(void*)*8 + 7);
x_33 = lean_ctor_get(x_6, 7);
x_34 = lean_ctor_get_uint8(x_6, sizeof(void*)*8 + 8);
x_35 = lean_ctor_get_uint8(x_6, sizeof(void*)*8 + 9);
lean_inc(x_33);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_6);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_1);
lean_ctor_set(x_36, 1, x_2);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_20);
x_38 = lean_alloc_ctor(0, 8, 10);
lean_ctor_set(x_38, 0, x_18);
lean_ctor_set(x_38, 1, x_19);
lean_ctor_set(x_38, 2, x_37);
lean_ctor_set(x_38, 3, x_24);
lean_ctor_set(x_38, 4, x_25);
lean_ctor_set(x_38, 5, x_26);
lean_ctor_set(x_38, 6, x_27);
lean_ctor_set(x_38, 7, x_33);
lean_ctor_set_uint8(x_38, sizeof(void*)*8, x_21);
lean_ctor_set_uint8(x_38, sizeof(void*)*8 + 1, x_22);
lean_ctor_set_uint8(x_38, sizeof(void*)*8 + 2, x_23);
lean_ctor_set_uint8(x_38, sizeof(void*)*8 + 3, x_28);
lean_ctor_set_uint8(x_38, sizeof(void*)*8 + 4, x_29);
lean_ctor_set_uint8(x_38, sizeof(void*)*8 + 5, x_30);
lean_ctor_set_uint8(x_38, sizeof(void*)*8 + 6, x_31);
lean_ctor_set_uint8(x_38, sizeof(void*)*8 + 7, x_32);
lean_ctor_set_uint8(x_38, sizeof(void*)*8 + 8, x_34);
lean_ctor_set_uint8(x_38, sizeof(void*)*8 + 9, x_35);
x_39 = lean_apply_9(x_3, x_4, x_5, x_38, x_7, x_8, x_9, x_10, x_11, x_12);
return x_39;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_withMacroExpansion___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; 
lean_inc(x_2);
lean_inc(x_1);
x_13 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_withMacroExpansion___rarg___lambda__1), 12, 3);
lean_closure_set(x_13, 0, x_1);
lean_closure_set(x_13, 1, x_2);
lean_closure_set(x_13, 2, x_3);
x_14 = l_Lean_Elab_withMacroExpansionInfo___at_Lean_Elab_Tactic_withMacroExpansion___spec__1___rarg(x_1, x_2, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_withMacroExpansion(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_withMacroExpansion___rarg), 12, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at_Lean_Elab_Tactic_withMacroExpansion___spec__1___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_Elab_withMacroExpansionInfo___at_Lean_Elab_Tactic_withMacroExpansion___spec__1___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at_Lean_Elab_Tactic_adaptExpander___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_alloc_closure((void*)(l_Lean_Elab_withMacroExpansionInfo___at_Lean_Elab_Tactic_withMacroExpansion___spec__1___rarg___lambda__1___boxed), 12, 2);
lean_closure_set(x_13, 0, x_1);
lean_closure_set(x_13, 1, x_2);
x_14 = l_Lean_Elab_withInfoTreeContext___at_Lean_Elab_Tactic_evalTactic_eval___spec__1(x_3, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_adaptExpander___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_5);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_5, 2);
lean_inc(x_2);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_1);
lean_ctor_set(x_14, 1, x_2);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
lean_ctor_set(x_5, 2, x_15);
x_16 = l_Lean_Elab_Tactic_evalTactic(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; uint8_t x_21; uint8_t x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; uint8_t x_28; uint8_t x_29; uint8_t x_30; uint8_t x_31; lean_object* x_32; uint8_t x_33; uint8_t x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_17 = lean_ctor_get(x_5, 0);
x_18 = lean_ctor_get(x_5, 1);
x_19 = lean_ctor_get(x_5, 2);
x_20 = lean_ctor_get_uint8(x_5, sizeof(void*)*8);
x_21 = lean_ctor_get_uint8(x_5, sizeof(void*)*8 + 1);
x_22 = lean_ctor_get_uint8(x_5, sizeof(void*)*8 + 2);
x_23 = lean_ctor_get(x_5, 3);
x_24 = lean_ctor_get(x_5, 4);
x_25 = lean_ctor_get(x_5, 5);
x_26 = lean_ctor_get(x_5, 6);
x_27 = lean_ctor_get_uint8(x_5, sizeof(void*)*8 + 3);
x_28 = lean_ctor_get_uint8(x_5, sizeof(void*)*8 + 4);
x_29 = lean_ctor_get_uint8(x_5, sizeof(void*)*8 + 5);
x_30 = lean_ctor_get_uint8(x_5, sizeof(void*)*8 + 6);
x_31 = lean_ctor_get_uint8(x_5, sizeof(void*)*8 + 7);
x_32 = lean_ctor_get(x_5, 7);
x_33 = lean_ctor_get_uint8(x_5, sizeof(void*)*8 + 8);
x_34 = lean_ctor_get_uint8(x_5, sizeof(void*)*8 + 9);
lean_inc(x_32);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_5);
lean_inc(x_2);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_1);
lean_ctor_set(x_35, 1, x_2);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_19);
x_37 = lean_alloc_ctor(0, 8, 10);
lean_ctor_set(x_37, 0, x_17);
lean_ctor_set(x_37, 1, x_18);
lean_ctor_set(x_37, 2, x_36);
lean_ctor_set(x_37, 3, x_23);
lean_ctor_set(x_37, 4, x_24);
lean_ctor_set(x_37, 5, x_25);
lean_ctor_set(x_37, 6, x_26);
lean_ctor_set(x_37, 7, x_32);
lean_ctor_set_uint8(x_37, sizeof(void*)*8, x_20);
lean_ctor_set_uint8(x_37, sizeof(void*)*8 + 1, x_21);
lean_ctor_set_uint8(x_37, sizeof(void*)*8 + 2, x_22);
lean_ctor_set_uint8(x_37, sizeof(void*)*8 + 3, x_27);
lean_ctor_set_uint8(x_37, sizeof(void*)*8 + 4, x_28);
lean_ctor_set_uint8(x_37, sizeof(void*)*8 + 5, x_29);
lean_ctor_set_uint8(x_37, sizeof(void*)*8 + 6, x_30);
lean_ctor_set_uint8(x_37, sizeof(void*)*8 + 7, x_31);
lean_ctor_set_uint8(x_37, sizeof(void*)*8 + 8, x_33);
lean_ctor_set_uint8(x_37, sizeof(void*)*8 + 9, x_34);
x_38 = l_Lean_Elab_Tactic_evalTactic(x_2, x_3, x_4, x_37, x_6, x_7, x_8, x_9, x_10, x_11);
return x_38;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_adaptExpander(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_12 = lean_apply_10(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
lean_inc(x_13);
lean_inc(x_2);
x_15 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_adaptExpander___lambda__1), 11, 2);
lean_closure_set(x_15, 0, x_2);
lean_closure_set(x_15, 1, x_13);
x_16 = l_Lean_Elab_withMacroExpansionInfo___at_Lean_Elab_Tactic_adaptExpander___spec__1(x_2, x_13, x_15, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_14);
return x_16;
}
else
{
uint8_t x_17; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_17 = !lean_is_exclusive(x_12);
if (x_17 == 0)
{
return x_12;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_12, 0);
x_19 = lean_ctor_get(x_12, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_12);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_appendGoals(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_11 = lean_st_ref_take(x_3, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_List_appendTR___rarg(x_12, x_1);
x_15 = lean_st_ref_set(x_3, x_14, x_13);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
lean_dec(x_17);
x_18 = lean_box(0);
lean_ctor_set(x_15, 0, x_18);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_15, 1);
lean_inc(x_19);
lean_dec(x_15);
x_20 = lean_box(0);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
return x_21;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_appendGoals___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Tactic_appendGoals(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_replaceMainGoal(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = l_Lean_Elab_Tactic_getGoals___rarg(x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_1);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Lean_Elab_Tactic_throwNoGoalsToBeSolved___rarg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_15 = lean_ctor_get(x_11, 1);
lean_inc(x_15);
lean_dec(x_11);
x_16 = lean_ctor_get(x_12, 1);
lean_inc(x_16);
lean_dec(x_12);
x_17 = lean_st_ref_take(x_3, x_15);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
x_19 = l_List_appendTR___rarg(x_1, x_16);
x_20 = lean_st_ref_set(x_3, x_19, x_18);
lean_dec(x_3);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_20, 0);
lean_dec(x_22);
x_23 = lean_box(0);
lean_ctor_set(x_20, 0, x_23);
return x_20;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_20, 1);
lean_inc(x_24);
lean_dec(x_20);
x_25 = lean_box(0);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
return x_26;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getMainGoal_loop(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Tactic_throwNoGoalsToBeSolved___rarg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_11;
}
else
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_1);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_13 = lean_ctor_get(x_1, 0);
x_14 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
x_15 = l_Lean_MVarId_isAssigned___at_Lean_Elab_Tactic_pruneSolvedGoals___spec__1(x_13, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_unbox(x_16);
lean_dec(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
lean_dec(x_15);
lean_inc(x_13);
x_19 = l_Lean_Elab_Tactic_setGoals(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_18);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
lean_object* x_21; 
x_21 = lean_ctor_get(x_19, 0);
lean_dec(x_21);
lean_ctor_set(x_19, 0, x_13);
return x_19;
}
else
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_19, 1);
lean_inc(x_22);
lean_dec(x_19);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_13);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
else
{
lean_object* x_24; 
lean_free_object(x_1);
lean_dec(x_13);
x_24 = lean_ctor_get(x_15, 1);
lean_inc(x_24);
lean_dec(x_15);
x_1 = x_14;
x_10 = x_24;
goto _start;
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_26 = lean_ctor_get(x_1, 0);
x_27 = lean_ctor_get(x_1, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_1);
lean_inc(x_26);
x_28 = l_Lean_MVarId_isAssigned___at_Lean_Elab_Tactic_pruneSolvedGoals___spec__1(x_26, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_unbox(x_29);
lean_dec(x_29);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_31 = lean_ctor_get(x_28, 1);
lean_inc(x_31);
lean_dec(x_28);
lean_inc(x_26);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_26);
lean_ctor_set(x_32, 1, x_27);
x_33 = l_Lean_Elab_Tactic_setGoals(x_32, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_31);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_34 = lean_ctor_get(x_33, 1);
lean_inc(x_34);
if (lean_is_exclusive(x_33)) {
 lean_ctor_release(x_33, 0);
 lean_ctor_release(x_33, 1);
 x_35 = x_33;
} else {
 lean_dec_ref(x_33);
 x_35 = lean_box(0);
}
if (lean_is_scalar(x_35)) {
 x_36 = lean_alloc_ctor(0, 2, 0);
} else {
 x_36 = x_35;
}
lean_ctor_set(x_36, 0, x_26);
lean_ctor_set(x_36, 1, x_34);
return x_36;
}
else
{
lean_object* x_37; 
lean_dec(x_26);
x_37 = lean_ctor_get(x_28, 1);
lean_inc(x_37);
lean_dec(x_28);
x_1 = x_27;
x_10 = x_37;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getMainGoal(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = l_Lean_Elab_Tactic_getGoals___rarg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Elab_Tactic_getMainGoal_loop(x_11, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getMainDecl(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_10 = l_Lean_Elab_Tactic_getMainGoal(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_MVarId_getDecl(x_11, x_5, x_6, x_7, x_8, x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_13;
}
else
{
uint8_t x_14; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_14 = !lean_is_exclusive(x_10);
if (x_14 == 0)
{
return x_10;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_10, 0);
x_16 = lean_ctor_get(x_10, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_10);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getMainTag(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Tactic_getMainDecl(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
lean_ctor_set(x_10, 0, x_13);
return x_10;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_10, 0);
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_10);
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_10);
if (x_18 == 0)
{
return x_10;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_10, 0);
x_20 = lean_ctor_get(x_10, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_10);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at_Lean_Elab_Tactic_getMainTarget___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = l_Lean_Expr_hasMVar(x_1);
if (x_11 == 0)
{
lean_object* x_12; 
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_1);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_13 = lean_st_ref_get(x_7, x_10);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Lean_instantiateMVarsCore(x_16, x_1);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_st_ref_take(x_7, x_15);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = !lean_is_exclusive(x_21);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_24 = lean_ctor_get(x_21, 0);
lean_dec(x_24);
lean_ctor_set(x_21, 0, x_19);
x_25 = lean_st_ref_set(x_7, x_21, x_22);
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
lean_object* x_27; 
x_27 = lean_ctor_get(x_25, 0);
lean_dec(x_27);
lean_ctor_set(x_25, 0, x_18);
return x_25;
}
else
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_dec(x_25);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_18);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_30 = lean_ctor_get(x_21, 1);
x_31 = lean_ctor_get(x_21, 2);
x_32 = lean_ctor_get(x_21, 3);
x_33 = lean_ctor_get(x_21, 4);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_21);
x_34 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_34, 0, x_19);
lean_ctor_set(x_34, 1, x_30);
lean_ctor_set(x_34, 2, x_31);
lean_ctor_set(x_34, 3, x_32);
lean_ctor_set(x_34, 4, x_33);
x_35 = lean_st_ref_set(x_7, x_34, x_22);
x_36 = lean_ctor_get(x_35, 1);
lean_inc(x_36);
if (lean_is_exclusive(x_35)) {
 lean_ctor_release(x_35, 0);
 lean_ctor_release(x_35, 1);
 x_37 = x_35;
} else {
 lean_dec_ref(x_35);
 x_37 = lean_box(0);
}
if (lean_is_scalar(x_37)) {
 x_38 = lean_alloc_ctor(0, 2, 0);
} else {
 x_38 = x_37;
}
lean_ctor_set(x_38, 0, x_18);
lean_ctor_set(x_38, 1, x_36);
return x_38;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getMainTarget(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_10 = l_Lean_Elab_Tactic_getMainDecl(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_ctor_get(x_11, 2);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Lean_instantiateMVars___at_Lean_Elab_Tactic_getMainTarget___spec__1(x_13, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_14;
}
else
{
uint8_t x_15; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_15 = !lean_is_exclusive(x_10);
if (x_15 == 0)
{
return x_10;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_10, 0);
x_17 = lean_ctor_get(x_10, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_10);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at_Lean_Elab_Tactic_getMainTarget___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_instantiateMVars___at_Lean_Elab_Tactic_getMainTarget___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at_Lean_Elab_Tactic_withMainContext___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_apply_4(x_2, x_3, x_4, x_5, x_6);
x_13 = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp___rarg(x_1, x_12, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
return x_13;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_13);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_13);
if (x_18 == 0)
{
return x_13;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_13, 0);
x_20 = lean_ctor_get(x_13, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_13);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at_Lean_Elab_Tactic_withMainContext___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at_Lean_Elab_Tactic_withMainContext___spec__1___rarg), 11, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_withMainContext___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_11 = l_Lean_Elab_Tactic_getMainGoal(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Lean_MVarId_withContext___at_Lean_Elab_Tactic_withMainContext___spec__1___rarg(x_12, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
return x_14;
}
else
{
uint8_t x_15; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_15 = !lean_is_exclusive(x_11);
if (x_15 == 0)
{
return x_11;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_11, 0);
x_17 = lean_ctor_get(x_11, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_11);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_withMainContext(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_withMainContext___rarg), 10, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalTacticAt(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = l_Lean_Elab_Tactic_getGoals___rarg(x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_12, 1);
x_16 = lean_box(0);
lean_ctor_set_tag(x_12, 1);
lean_ctor_set(x_12, 1, x_16);
lean_ctor_set(x_12, 0, x_2);
x_17 = l_Lean_Elab_Tactic_setGoals(x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_15);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_19 = l_Lean_Elab_Tactic_evalTactic(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_18);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = l_Lean_Elab_Tactic_pruneSolvedGoals(x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_20);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_23 = l_Lean_Elab_Tactic_getGoals___rarg(x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_22);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = l_Lean_Elab_Tactic_setGoals(x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_25);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
lean_object* x_28; 
x_28 = lean_ctor_get(x_26, 0);
lean_dec(x_28);
lean_ctor_set(x_26, 0, x_24);
return x_26;
}
else
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
lean_dec(x_26);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_24);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_31 = lean_ctor_get(x_19, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_19, 1);
lean_inc(x_32);
lean_dec(x_19);
x_33 = l_Lean_Elab_Tactic_setGoals(x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_32);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_34 = !lean_is_exclusive(x_33);
if (x_34 == 0)
{
lean_object* x_35; 
x_35 = lean_ctor_get(x_33, 0);
lean_dec(x_35);
lean_ctor_set_tag(x_33, 1);
lean_ctor_set(x_33, 0, x_31);
return x_33;
}
else
{
lean_object* x_36; lean_object* x_37; 
x_36 = lean_ctor_get(x_33, 1);
lean_inc(x_36);
lean_dec(x_33);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_31);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_38 = lean_ctor_get(x_12, 0);
x_39 = lean_ctor_get(x_12, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_12);
x_40 = lean_box(0);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_2);
lean_ctor_set(x_41, 1, x_40);
x_42 = l_Lean_Elab_Tactic_setGoals(x_41, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_39);
x_43 = lean_ctor_get(x_42, 1);
lean_inc(x_43);
lean_dec(x_42);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_44 = l_Lean_Elab_Tactic_evalTactic(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_43);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_45 = lean_ctor_get(x_44, 1);
lean_inc(x_45);
lean_dec(x_44);
x_46 = l_Lean_Elab_Tactic_pruneSolvedGoals(x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_45);
x_47 = lean_ctor_get(x_46, 1);
lean_inc(x_47);
lean_dec(x_46);
x_48 = l_Lean_Elab_Tactic_getGoals___rarg(x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_47);
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
lean_dec(x_48);
x_51 = l_Lean_Elab_Tactic_setGoals(x_38, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_50);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_52 = lean_ctor_get(x_51, 1);
lean_inc(x_52);
if (lean_is_exclusive(x_51)) {
 lean_ctor_release(x_51, 0);
 lean_ctor_release(x_51, 1);
 x_53 = x_51;
} else {
 lean_dec_ref(x_51);
 x_53 = lean_box(0);
}
if (lean_is_scalar(x_53)) {
 x_54 = lean_alloc_ctor(0, 2, 0);
} else {
 x_54 = x_53;
}
lean_ctor_set(x_54, 0, x_49);
lean_ctor_set(x_54, 1, x_52);
return x_54;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_55 = lean_ctor_get(x_44, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_44, 1);
lean_inc(x_56);
lean_dec(x_44);
x_57 = l_Lean_Elab_Tactic_setGoals(x_38, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_56);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_58 = lean_ctor_get(x_57, 1);
lean_inc(x_58);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 lean_ctor_release(x_57, 1);
 x_59 = x_57;
} else {
 lean_dec_ref(x_57);
 x_59 = lean_box(0);
}
if (lean_is_scalar(x_59)) {
 x_60 = lean_alloc_ctor(1, 2, 0);
} else {
 x_60 = x_59;
 lean_ctor_set_tag(x_60, 1);
}
lean_ctor_set(x_60, 0, x_55);
lean_ctor_set(x_60, 1, x_58);
return x_60;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalTacticAtRaw(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_2);
lean_ctor_set(x_13, 1, x_12);
x_14 = l_Lean_Elab_Tactic_setGoals(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_16 = l_Lean_Elab_Tactic_evalTactic(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = l_Lean_Elab_Tactic_getGoals___rarg(x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_17);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_18;
}
else
{
uint8_t x_19; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_19 = !lean_is_exclusive(x_16);
if (x_19 == 0)
{
return x_16;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_16, 0);
x_21 = lean_ctor_get(x_16, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_16);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Tactic_ensureHasNoMVars___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("tactic failed, resulting expression contains metavariables", 58);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_ensureHasNoMVars___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Tactic_ensureHasNoMVars___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_ensureHasNoMVars(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = l_Lean_instantiateMVars___at_Lean_Elab_Tactic_getMainTarget___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
x_15 = l_Lean_Meta_getMVars(x_13, x_6, x_7, x_8, x_9, x_14);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_ctor_get(x_15, 1);
x_19 = lean_box(0);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_20 = l_Lean_Elab_Term_logUnassignedUsingErrorInfos(x_17, x_19, x_4, x_5, x_6, x_7, x_8, x_9, x_18);
lean_dec(x_17);
if (lean_obj_tag(x_20) == 0)
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_22 = lean_ctor_get(x_20, 1);
x_23 = lean_ctor_get(x_20, 0);
lean_dec(x_23);
x_24 = l_Lean_Expr_hasExprMVar(x_13);
if (x_24 == 0)
{
lean_object* x_25; 
lean_free_object(x_15);
lean_free_object(x_11);
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_25 = lean_box(0);
lean_ctor_set(x_20, 0, x_25);
return x_20;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_free_object(x_20);
x_26 = l_Lean_indentExpr(x_13);
x_27 = l_Lean_Elab_Tactic_ensureHasNoMVars___closed__2;
lean_ctor_set_tag(x_15, 7);
lean_ctor_set(x_15, 1, x_26);
lean_ctor_set(x_15, 0, x_27);
x_28 = l_Lean_Elab_Term_reportUnsolvedGoals___closed__7;
lean_ctor_set_tag(x_11, 7);
lean_ctor_set(x_11, 1, x_28);
lean_ctor_set(x_11, 0, x_15);
x_29 = l_Lean_throwError___at_Lean_Elab_Tactic_evalTactic_throwExs___spec__2(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_22);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_29;
}
}
else
{
lean_object* x_30; uint8_t x_31; 
x_30 = lean_ctor_get(x_20, 1);
lean_inc(x_30);
lean_dec(x_20);
x_31 = l_Lean_Expr_hasExprMVar(x_13);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; 
lean_free_object(x_15);
lean_free_object(x_11);
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_32 = lean_box(0);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_30);
return x_33;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_34 = l_Lean_indentExpr(x_13);
x_35 = l_Lean_Elab_Tactic_ensureHasNoMVars___closed__2;
lean_ctor_set_tag(x_15, 7);
lean_ctor_set(x_15, 1, x_34);
lean_ctor_set(x_15, 0, x_35);
x_36 = l_Lean_Elab_Term_reportUnsolvedGoals___closed__7;
lean_ctor_set_tag(x_11, 7);
lean_ctor_set(x_11, 1, x_36);
lean_ctor_set(x_11, 0, x_15);
x_37 = l_Lean_throwError___at_Lean_Elab_Tactic_evalTactic_throwExs___spec__2(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_30);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_37;
}
}
}
else
{
uint8_t x_38; 
lean_free_object(x_15);
lean_free_object(x_11);
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_38 = !lean_is_exclusive(x_20);
if (x_38 == 0)
{
return x_20;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_20, 0);
x_40 = lean_ctor_get(x_20, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_20);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_42 = lean_ctor_get(x_15, 0);
x_43 = lean_ctor_get(x_15, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_15);
x_44 = lean_box(0);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_45 = l_Lean_Elab_Term_logUnassignedUsingErrorInfos(x_42, x_44, x_4, x_5, x_6, x_7, x_8, x_9, x_43);
lean_dec(x_42);
if (lean_obj_tag(x_45) == 0)
{
lean_object* x_46; lean_object* x_47; uint8_t x_48; 
x_46 = lean_ctor_get(x_45, 1);
lean_inc(x_46);
if (lean_is_exclusive(x_45)) {
 lean_ctor_release(x_45, 0);
 lean_ctor_release(x_45, 1);
 x_47 = x_45;
} else {
 lean_dec_ref(x_45);
 x_47 = lean_box(0);
}
x_48 = l_Lean_Expr_hasExprMVar(x_13);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; 
lean_free_object(x_11);
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_49 = lean_box(0);
if (lean_is_scalar(x_47)) {
 x_50 = lean_alloc_ctor(0, 2, 0);
} else {
 x_50 = x_47;
}
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_46);
return x_50;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
lean_dec(x_47);
x_51 = l_Lean_indentExpr(x_13);
x_52 = l_Lean_Elab_Tactic_ensureHasNoMVars___closed__2;
x_53 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_51);
x_54 = l_Lean_Elab_Term_reportUnsolvedGoals___closed__7;
lean_ctor_set_tag(x_11, 7);
lean_ctor_set(x_11, 1, x_54);
lean_ctor_set(x_11, 0, x_53);
x_55 = l_Lean_throwError___at_Lean_Elab_Tactic_evalTactic_throwExs___spec__2(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_46);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_55;
}
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
lean_free_object(x_11);
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_56 = lean_ctor_get(x_45, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_45, 1);
lean_inc(x_57);
if (lean_is_exclusive(x_45)) {
 lean_ctor_release(x_45, 0);
 lean_ctor_release(x_45, 1);
 x_58 = x_45;
} else {
 lean_dec_ref(x_45);
 x_58 = lean_box(0);
}
if (lean_is_scalar(x_58)) {
 x_59 = lean_alloc_ctor(1, 2, 0);
} else {
 x_59 = x_58;
}
lean_ctor_set(x_59, 0, x_56);
lean_ctor_set(x_59, 1, x_57);
return x_59;
}
}
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_60 = lean_ctor_get(x_11, 0);
x_61 = lean_ctor_get(x_11, 1);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_11);
lean_inc(x_60);
x_62 = l_Lean_Meta_getMVars(x_60, x_6, x_7, x_8, x_9, x_61);
x_63 = lean_ctor_get(x_62, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_62, 1);
lean_inc(x_64);
if (lean_is_exclusive(x_62)) {
 lean_ctor_release(x_62, 0);
 lean_ctor_release(x_62, 1);
 x_65 = x_62;
} else {
 lean_dec_ref(x_62);
 x_65 = lean_box(0);
}
x_66 = lean_box(0);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_67 = l_Lean_Elab_Term_logUnassignedUsingErrorInfos(x_63, x_66, x_4, x_5, x_6, x_7, x_8, x_9, x_64);
lean_dec(x_63);
if (lean_obj_tag(x_67) == 0)
{
lean_object* x_68; lean_object* x_69; uint8_t x_70; 
x_68 = lean_ctor_get(x_67, 1);
lean_inc(x_68);
if (lean_is_exclusive(x_67)) {
 lean_ctor_release(x_67, 0);
 lean_ctor_release(x_67, 1);
 x_69 = x_67;
} else {
 lean_dec_ref(x_67);
 x_69 = lean_box(0);
}
x_70 = l_Lean_Expr_hasExprMVar(x_60);
if (x_70 == 0)
{
lean_object* x_71; lean_object* x_72; 
lean_dec(x_65);
lean_dec(x_60);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_71 = lean_box(0);
if (lean_is_scalar(x_69)) {
 x_72 = lean_alloc_ctor(0, 2, 0);
} else {
 x_72 = x_69;
}
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_68);
return x_72;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
lean_dec(x_69);
x_73 = l_Lean_indentExpr(x_60);
x_74 = l_Lean_Elab_Tactic_ensureHasNoMVars___closed__2;
if (lean_is_scalar(x_65)) {
 x_75 = lean_alloc_ctor(7, 2, 0);
} else {
 x_75 = x_65;
 lean_ctor_set_tag(x_75, 7);
}
lean_ctor_set(x_75, 0, x_74);
lean_ctor_set(x_75, 1, x_73);
x_76 = l_Lean_Elab_Term_reportUnsolvedGoals___closed__7;
x_77 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
x_78 = l_Lean_throwError___at_Lean_Elab_Tactic_evalTactic_throwExs___spec__2(x_77, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_68);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_78;
}
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
lean_dec(x_65);
lean_dec(x_60);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_79 = lean_ctor_get(x_67, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_67, 1);
lean_inc(x_80);
if (lean_is_exclusive(x_67)) {
 lean_ctor_release(x_67, 0);
 lean_ctor_release(x_67, 1);
 x_81 = x_67;
} else {
 lean_dec_ref(x_67);
 x_81 = lean_box(0);
}
if (lean_is_scalar(x_81)) {
 x_82 = lean_alloc_ctor(1, 2, 0);
} else {
 x_82 = x_81;
}
lean_ctor_set(x_82, 0, x_79);
lean_ctor_set(x_82, 1, x_80);
return x_82;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_ensureHasNoMVars___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Tactic_ensureHasNoMVars(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at_Lean_Elab_Tactic_closeMainGoal___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_st_ref_take(x_8, x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_dec(x_12);
x_16 = !lean_is_exclusive(x_13);
if (x_16 == 0)
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_ctor_get(x_13, 0);
lean_dec(x_17);
x_18 = !lean_is_exclusive(x_14);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_19 = lean_ctor_get(x_14, 7);
x_20 = l_Lean_PersistentHashMap_insert___at_Lean_MVarId_assign___spec__1(x_19, x_1, x_2);
lean_ctor_set(x_14, 7, x_20);
x_21 = lean_st_ref_set(x_8, x_13, x_15);
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_21, 0);
lean_dec(x_23);
x_24 = lean_box(0);
lean_ctor_set(x_21, 0, x_24);
return x_21;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_21, 1);
lean_inc(x_25);
lean_dec(x_21);
x_26 = lean_box(0);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_25);
return x_27;
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_28 = lean_ctor_get(x_14, 0);
x_29 = lean_ctor_get(x_14, 1);
x_30 = lean_ctor_get(x_14, 2);
x_31 = lean_ctor_get(x_14, 3);
x_32 = lean_ctor_get(x_14, 4);
x_33 = lean_ctor_get(x_14, 5);
x_34 = lean_ctor_get(x_14, 6);
x_35 = lean_ctor_get(x_14, 7);
x_36 = lean_ctor_get(x_14, 8);
lean_inc(x_36);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_30);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_14);
x_37 = l_Lean_PersistentHashMap_insert___at_Lean_MVarId_assign___spec__1(x_35, x_1, x_2);
x_38 = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(x_38, 0, x_28);
lean_ctor_set(x_38, 1, x_29);
lean_ctor_set(x_38, 2, x_30);
lean_ctor_set(x_38, 3, x_31);
lean_ctor_set(x_38, 4, x_32);
lean_ctor_set(x_38, 5, x_33);
lean_ctor_set(x_38, 6, x_34);
lean_ctor_set(x_38, 7, x_37);
lean_ctor_set(x_38, 8, x_36);
lean_ctor_set(x_13, 0, x_38);
x_39 = lean_st_ref_set(x_8, x_13, x_15);
x_40 = lean_ctor_get(x_39, 1);
lean_inc(x_40);
if (lean_is_exclusive(x_39)) {
 lean_ctor_release(x_39, 0);
 lean_ctor_release(x_39, 1);
 x_41 = x_39;
} else {
 lean_dec_ref(x_39);
 x_41 = lean_box(0);
}
x_42 = lean_box(0);
if (lean_is_scalar(x_41)) {
 x_43 = lean_alloc_ctor(0, 2, 0);
} else {
 x_43 = x_41;
}
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_40);
return x_43;
}
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_44 = lean_ctor_get(x_13, 1);
x_45 = lean_ctor_get(x_13, 2);
x_46 = lean_ctor_get(x_13, 3);
x_47 = lean_ctor_get(x_13, 4);
lean_inc(x_47);
lean_inc(x_46);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_13);
x_48 = lean_ctor_get(x_14, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_14, 1);
lean_inc(x_49);
x_50 = lean_ctor_get(x_14, 2);
lean_inc(x_50);
x_51 = lean_ctor_get(x_14, 3);
lean_inc(x_51);
x_52 = lean_ctor_get(x_14, 4);
lean_inc(x_52);
x_53 = lean_ctor_get(x_14, 5);
lean_inc(x_53);
x_54 = lean_ctor_get(x_14, 6);
lean_inc(x_54);
x_55 = lean_ctor_get(x_14, 7);
lean_inc(x_55);
x_56 = lean_ctor_get(x_14, 8);
lean_inc(x_56);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 lean_ctor_release(x_14, 2);
 lean_ctor_release(x_14, 3);
 lean_ctor_release(x_14, 4);
 lean_ctor_release(x_14, 5);
 lean_ctor_release(x_14, 6);
 lean_ctor_release(x_14, 7);
 lean_ctor_release(x_14, 8);
 x_57 = x_14;
} else {
 lean_dec_ref(x_14);
 x_57 = lean_box(0);
}
x_58 = l_Lean_PersistentHashMap_insert___at_Lean_MVarId_assign___spec__1(x_55, x_1, x_2);
if (lean_is_scalar(x_57)) {
 x_59 = lean_alloc_ctor(0, 9, 0);
} else {
 x_59 = x_57;
}
lean_ctor_set(x_59, 0, x_48);
lean_ctor_set(x_59, 1, x_49);
lean_ctor_set(x_59, 2, x_50);
lean_ctor_set(x_59, 3, x_51);
lean_ctor_set(x_59, 4, x_52);
lean_ctor_set(x_59, 5, x_53);
lean_ctor_set(x_59, 6, x_54);
lean_ctor_set(x_59, 7, x_58);
lean_ctor_set(x_59, 8, x_56);
x_60 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_44);
lean_ctor_set(x_60, 2, x_45);
lean_ctor_set(x_60, 3, x_46);
lean_ctor_set(x_60, 4, x_47);
x_61 = lean_st_ref_set(x_8, x_60, x_15);
x_62 = lean_ctor_get(x_61, 1);
lean_inc(x_62);
if (lean_is_exclusive(x_61)) {
 lean_ctor_release(x_61, 0);
 lean_ctor_release(x_61, 1);
 x_63 = x_61;
} else {
 lean_dec_ref(x_61);
 x_63 = lean_box(0);
}
x_64 = lean_box(0);
if (lean_is_scalar(x_63)) {
 x_65 = lean_alloc_ctor(0, 2, 0);
} else {
 x_65 = x_63;
}
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_62);
return x_65;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_closeMainGoal___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_12 = l_Lean_Elab_Tactic_getMainGoal(x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_MVarId_assign___at_Lean_Elab_Tactic_closeMainGoal___spec__1(x_13, x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_14);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_box(0);
x_18 = l_Lean_Elab_Tactic_replaceMainGoal(x_17, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_16);
return x_18;
}
else
{
uint8_t x_19; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_19 = !lean_is_exclusive(x_12);
if (x_19 == 0)
{
return x_12;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_12, 0);
x_21 = lean_ctor_get(x_12, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_12);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_closeMainGoal(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
if (x_2 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_box(0);
x_13 = l_Lean_Elab_Tactic_closeMainGoal___lambda__1(x_1, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_13;
}
else
{
lean_object* x_14; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_1);
x_14 = l_Lean_Elab_Tactic_ensureHasNoMVars(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Lean_Elab_Tactic_closeMainGoal___lambda__1(x_1, x_15, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_16);
lean_dec(x_15);
return x_17;
}
else
{
uint8_t x_18; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_18 = !lean_is_exclusive(x_14);
if (x_18 == 0)
{
return x_14;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_14, 0);
x_20 = lean_ctor_get(x_14, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_14);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at_Lean_Elab_Tactic_closeMainGoal___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_MVarId_assign___at_Lean_Elab_Tactic_closeMainGoal___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_closeMainGoal___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Elab_Tactic_closeMainGoal___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_2);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_closeMainGoal___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_2);
lean_dec(x_2);
x_13 = l_Lean_Elab_Tactic_closeMainGoal(x_1, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_liftMetaMAtMain___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_11 = l_Lean_Elab_Tactic_getMainGoal(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_apply_6(x_1, x_12, x_6, x_7, x_8, x_9, x_13);
return x_14;
}
else
{
uint8_t x_15; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_15 = !lean_is_exclusive(x_11);
if (x_15 == 0)
{
return x_11;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_11, 0);
x_17 = lean_ctor_get(x_11, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_11);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_liftMetaMAtMain___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_liftMetaMAtMain___rarg___lambda__1), 10, 1);
lean_closure_set(x_11, 0, x_1);
x_12 = l_Lean_Elab_Tactic_withMainContext___rarg(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_liftMetaMAtMain(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_liftMetaMAtMain___rarg), 10, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_liftMetaTacticAux___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_11 = l_Lean_Elab_Tactic_getMainGoal(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_14 = lean_apply_6(x_1, x_12, x_6, x_7, x_8, x_9, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
lean_dec(x_15);
x_19 = l_Lean_Elab_Tactic_replaceMainGoal(x_18, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_16);
if (lean_obj_tag(x_19) == 0)
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
lean_object* x_21; 
x_21 = lean_ctor_get(x_19, 0);
lean_dec(x_21);
lean_ctor_set(x_19, 0, x_17);
return x_19;
}
else
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_19, 1);
lean_inc(x_22);
lean_dec(x_19);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_17);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
else
{
uint8_t x_24; 
lean_dec(x_17);
x_24 = !lean_is_exclusive(x_19);
if (x_24 == 0)
{
return x_19;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_19, 0);
x_26 = lean_ctor_get(x_19, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_19);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
else
{
uint8_t x_28; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_28 = !lean_is_exclusive(x_14);
if (x_28 == 0)
{
return x_14;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_14, 0);
x_30 = lean_ctor_get(x_14, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_14);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
else
{
uint8_t x_32; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_32 = !lean_is_exclusive(x_11);
if (x_32 == 0)
{
return x_11;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_11, 0);
x_34 = lean_ctor_get(x_11, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_11);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_liftMetaTacticAux___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_liftMetaTacticAux___rarg___lambda__1), 10, 1);
lean_closure_set(x_11, 0, x_1);
x_12 = l_Lean_Elab_Tactic_withMainContext___rarg(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_liftMetaTacticAux(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_liftMetaTacticAux___rarg), 10, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_liftMetaTactic___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_11 = l_Lean_Elab_Tactic_getMainGoal(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_14 = lean_apply_6(x_1, x_12, x_6, x_7, x_8, x_9, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Lean_Elab_Tactic_replaceMainGoal(x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_16);
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_17, 0);
lean_dec(x_19);
x_20 = lean_box(0);
lean_ctor_set(x_17, 0, x_20);
return x_17;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_17, 1);
lean_inc(x_21);
lean_dec(x_17);
x_22 = lean_box(0);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
return x_23;
}
}
else
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_17);
if (x_24 == 0)
{
return x_17;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_17, 0);
x_26 = lean_ctor_get(x_17, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_17);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
else
{
uint8_t x_28; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_28 = !lean_is_exclusive(x_14);
if (x_28 == 0)
{
return x_14;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_14, 0);
x_30 = lean_ctor_get(x_14, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_14);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
else
{
uint8_t x_32; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_32 = !lean_is_exclusive(x_11);
if (x_32 == 0)
{
return x_11;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_11, 0);
x_34 = lean_ctor_get(x_11, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_11);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_liftMetaTactic(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_liftMetaTactic___lambda__1), 10, 1);
lean_closure_set(x_11, 0, x_1);
x_12 = l_Lean_Elab_Tactic_withMainContext___rarg(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_liftMetaTactic1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_11 = l_Lean_Elab_Tactic_getMainGoal(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_14 = lean_apply_6(x_1, x_12, x_6, x_7, x_8, x_9, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_box(0);
x_18 = l_Lean_Elab_Tactic_replaceMainGoal(x_17, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_16);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_19 = lean_ctor_get(x_14, 1);
lean_inc(x_19);
lean_dec(x_14);
x_20 = lean_ctor_get(x_15, 0);
lean_inc(x_20);
lean_dec(x_15);
x_21 = lean_box(0);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
x_23 = l_Lean_Elab_Tactic_replaceMainGoal(x_22, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_19);
return x_23;
}
}
else
{
uint8_t x_24; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_24 = !lean_is_exclusive(x_14);
if (x_24 == 0)
{
return x_14;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_14, 0);
x_26 = lean_ctor_get(x_14, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_14);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
else
{
uint8_t x_28; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_28 = !lean_is_exclusive(x_11);
if (x_28 == 0)
{
return x_11;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_11, 0);
x_30 = lean_ctor_get(x_11, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_11);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_liftMetaTactic1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_liftMetaTactic1___lambda__1), 10, 1);
lean_closure_set(x_11, 0, x_1);
x_12 = l_Lean_Elab_Tactic_withMainContext___rarg(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_liftMetaFinishingTactic___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_11 = l_Lean_Elab_Tactic_getMainGoal(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_14 = lean_apply_6(x_1, x_12, x_6, x_7, x_8, x_9, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_box(0);
x_17 = l_Lean_Elab_Tactic_replaceMainGoal(x_16, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_15);
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_17, 0);
lean_dec(x_19);
x_20 = lean_box(0);
lean_ctor_set(x_17, 0, x_20);
return x_17;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_17, 1);
lean_inc(x_21);
lean_dec(x_17);
x_22 = lean_box(0);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
return x_23;
}
}
else
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_17);
if (x_24 == 0)
{
return x_17;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_17, 0);
x_26 = lean_ctor_get(x_17, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_17);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
else
{
uint8_t x_28; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_28 = !lean_is_exclusive(x_14);
if (x_28 == 0)
{
return x_14;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_14, 0);
x_30 = lean_ctor_get(x_14, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_14);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
else
{
uint8_t x_32; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_32 = !lean_is_exclusive(x_11);
if (x_32 == 0)
{
return x_11;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_11, 0);
x_34 = lean_ctor_get(x_11, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_11);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_liftMetaFinishingTactic(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_liftMetaFinishingTactic___lambda__1), 10, 1);
lean_closure_set(x_11, 0, x_1);
x_12 = l_Lean_Elab_Tactic_withMainContext___rarg(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_tryTactic_x3f___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = l_Lean_Elab_Tactic_saveState___rarg(x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_14 = lean_apply_9(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_14, 0, x_17);
return x_14;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_18 = lean_ctor_get(x_14, 0);
x_19 = lean_ctor_get(x_14, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_14);
x_20 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_20, 0, x_18);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
return x_21;
}
}
else
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_14);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_23 = lean_ctor_get(x_14, 0);
x_24 = lean_ctor_get(x_14, 1);
x_25 = l_Lean_Exception_isRuntime(x_23);
if (x_25 == 0)
{
uint8_t x_26; lean_object* x_27; uint8_t x_28; 
lean_free_object(x_14);
lean_dec(x_23);
x_26 = 0;
x_27 = l_Lean_Elab_Tactic_SavedState_restore(x_12, x_26, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_24);
lean_dec(x_3);
lean_dec(x_2);
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_27, 0);
lean_dec(x_29);
x_30 = lean_box(0);
lean_ctor_set(x_27, 0, x_30);
return x_27;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_27, 1);
lean_inc(x_31);
lean_dec(x_27);
x_32 = lean_box(0);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_31);
return x_33;
}
}
else
{
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_14;
}
}
else
{
lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_34 = lean_ctor_get(x_14, 0);
x_35 = lean_ctor_get(x_14, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_14);
x_36 = l_Lean_Exception_isRuntime(x_34);
if (x_36 == 0)
{
uint8_t x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
lean_dec(x_34);
x_37 = 0;
x_38 = l_Lean_Elab_Tactic_SavedState_restore(x_12, x_37, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_35);
lean_dec(x_3);
lean_dec(x_2);
x_39 = lean_ctor_get(x_38, 1);
lean_inc(x_39);
if (lean_is_exclusive(x_38)) {
 lean_ctor_release(x_38, 0);
 lean_ctor_release(x_38, 1);
 x_40 = x_38;
} else {
 lean_dec_ref(x_38);
 x_40 = lean_box(0);
}
x_41 = lean_box(0);
if (lean_is_scalar(x_40)) {
 x_42 = lean_alloc_ctor(0, 2, 0);
} else {
 x_42 = x_40;
}
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_39);
return x_42;
}
else
{
lean_object* x_43; 
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_34);
lean_ctor_set(x_43, 1, x_35);
return x_43;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_tryTactic_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_tryTactic_x3f___rarg), 10, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_tryTactic___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = l_Lean_Elab_Tactic_saveState___rarg(x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_14 = lean_apply_9(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; uint8_t x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_14, 0);
lean_dec(x_16);
x_17 = 1;
x_18 = lean_box(x_17);
lean_ctor_set(x_14, 0, x_18);
return x_14;
}
else
{
lean_object* x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_14, 1);
lean_inc(x_19);
lean_dec(x_14);
x_20 = 1;
x_21 = lean_box(x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_19);
return x_22;
}
}
else
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_14);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_24 = lean_ctor_get(x_14, 0);
x_25 = lean_ctor_get(x_14, 1);
x_26 = l_Lean_Exception_isRuntime(x_24);
if (x_26 == 0)
{
uint8_t x_27; lean_object* x_28; uint8_t x_29; 
lean_free_object(x_14);
lean_dec(x_24);
x_27 = 0;
x_28 = l_Lean_Elab_Tactic_SavedState_restore(x_12, x_27, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_25);
lean_dec(x_3);
lean_dec(x_2);
x_29 = !lean_is_exclusive(x_28);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_28, 0);
lean_dec(x_30);
x_31 = lean_box(x_27);
lean_ctor_set(x_28, 0, x_31);
return x_28;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_28, 1);
lean_inc(x_32);
lean_dec(x_28);
x_33 = lean_box(x_27);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_32);
return x_34;
}
}
else
{
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_14;
}
}
else
{
lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_35 = lean_ctor_get(x_14, 0);
x_36 = lean_ctor_get(x_14, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_14);
x_37 = l_Lean_Exception_isRuntime(x_35);
if (x_37 == 0)
{
uint8_t x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
lean_dec(x_35);
x_38 = 0;
x_39 = l_Lean_Elab_Tactic_SavedState_restore(x_12, x_38, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_36);
lean_dec(x_3);
lean_dec(x_2);
x_40 = lean_ctor_get(x_39, 1);
lean_inc(x_40);
if (lean_is_exclusive(x_39)) {
 lean_ctor_release(x_39, 0);
 lean_ctor_release(x_39, 1);
 x_41 = x_39;
} else {
 lean_dec_ref(x_39);
 x_41 = lean_box(0);
}
x_42 = lean_box(x_38);
if (lean_is_scalar(x_41)) {
 x_43 = lean_alloc_ctor(0, 2, 0);
} else {
 x_43 = x_41;
}
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_40);
return x_43;
}
else
{
lean_object* x_44; 
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_35);
lean_ctor_set(x_44, 1, x_36);
return x_44;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_tryTactic(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_tryTactic___rarg), 10, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Elab_Tactic_tagUntaggedGoals___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_13; 
lean_dec(x_1);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_3);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = lean_ctor_get(x_2, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_2, 1);
lean_inc(x_15);
lean_dec(x_2);
lean_inc(x_1);
x_16 = l_Lean_MetavarContext_isAnonymousMVar(x_1, x_14);
if (x_16 == 0)
{
x_2 = x_15;
goto _start;
}
else
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_add(x_3, x_18);
lean_dec(x_3);
x_2 = x_15;
x_3 = x_19;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Elab_Tactic_tagUntaggedGoals___spec__2___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_unsigned_to_nat(1u);
x_5 = lean_nat_add(x_1, x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_2);
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_6);
return x_7;
}
}
static lean_object* _init_l_List_forIn_loop___at_Lean_Elab_Tactic_tagUntaggedGoals___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_List_forIn_loop___at_Lean_Elab_Tactic_tagUntaggedGoals___spec__2___lambda__1___boxed), 3, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Elab_Tactic_tagUntaggedGoals___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
lean_dec(x_4);
x_8 = !lean_is_exclusive(x_5);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_ctor_get(x_5, 0);
x_10 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_inc(x_10);
x_11 = l_Lean_MetavarContext_isAnonymousMVar(x_10, x_6);
if (x_11 == 0)
{
lean_dec(x_6);
x_4 = x_7;
goto _start;
}
else
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
lean_free_object(x_5);
x_13 = l_List_forIn_loop___at_Lean_Elab_Tactic_tagUntaggedGoals___spec__2___closed__1;
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_dec_eq(x_3, x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_inc(x_9);
lean_inc(x_2);
x_16 = lean_name_append_index_after(x_2, x_9);
lean_inc(x_1);
x_17 = l_Lean_Name_append(x_1, x_16);
x_18 = l_Lean_MetavarContext_setMVarUserName(x_10, x_6, x_17);
x_19 = lean_box(0);
x_20 = lean_apply_3(x_13, x_9, x_18, x_19);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; 
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
lean_dec(x_20);
return x_21;
}
else
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_20, 0);
lean_inc(x_22);
lean_dec(x_20);
x_4 = x_7;
x_5 = x_22;
goto _start;
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
lean_inc(x_1);
x_24 = l_Lean_MetavarContext_setMVarUserName(x_10, x_6, x_1);
x_25 = lean_box(0);
x_26 = lean_apply_3(x_13, x_9, x_24, x_25);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; 
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
lean_dec(x_26);
return x_27;
}
else
{
lean_object* x_28; 
x_28 = lean_ctor_get(x_26, 0);
lean_inc(x_28);
lean_dec(x_26);
x_4 = x_7;
x_5 = x_28;
goto _start;
}
}
}
}
else
{
lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_30 = lean_ctor_get(x_5, 0);
x_31 = lean_ctor_get(x_5, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_5);
lean_inc(x_6);
lean_inc(x_31);
x_32 = l_Lean_MetavarContext_isAnonymousMVar(x_31, x_6);
if (x_32 == 0)
{
lean_object* x_33; 
lean_dec(x_6);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_30);
lean_ctor_set(x_33, 1, x_31);
x_4 = x_7;
x_5 = x_33;
goto _start;
}
else
{
lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_35 = l_List_forIn_loop___at_Lean_Elab_Tactic_tagUntaggedGoals___spec__2___closed__1;
x_36 = lean_unsigned_to_nat(1u);
x_37 = lean_nat_dec_eq(x_3, x_36);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
lean_inc(x_30);
lean_inc(x_2);
x_38 = lean_name_append_index_after(x_2, x_30);
lean_inc(x_1);
x_39 = l_Lean_Name_append(x_1, x_38);
x_40 = l_Lean_MetavarContext_setMVarUserName(x_31, x_6, x_39);
x_41 = lean_box(0);
x_42 = lean_apply_3(x_35, x_30, x_40, x_41);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; 
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
lean_dec(x_42);
return x_43;
}
else
{
lean_object* x_44; 
x_44 = lean_ctor_get(x_42, 0);
lean_inc(x_44);
lean_dec(x_42);
x_4 = x_7;
x_5 = x_44;
goto _start;
}
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
lean_inc(x_1);
x_46 = l_Lean_MetavarContext_setMVarUserName(x_31, x_6, x_1);
x_47 = lean_box(0);
x_48 = lean_apply_3(x_35, x_30, x_46, x_47);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; 
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
lean_dec(x_48);
return x_49;
}
else
{
lean_object* x_50; 
x_50 = lean_ctor_get(x_48, 0);
lean_inc(x_50);
lean_dec(x_48);
x_4 = x_7;
x_5 = x_50;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_tagUntaggedGoals(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_13 = lean_st_ref_get(x_9, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_unsigned_to_nat(0u);
lean_inc(x_3);
x_18 = l_List_forIn_loop___at_Lean_Elab_Tactic_tagUntaggedGoals___spec__1(x_16, x_3, x_17, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_15);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_st_ref_take(x_9, x_20);
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; uint8_t x_24; 
x_23 = lean_ctor_get(x_21, 0);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_25 = lean_ctor_get(x_21, 1);
x_26 = lean_ctor_get(x_23, 0);
x_27 = lean_unsigned_to_nat(1u);
lean_ctor_set(x_21, 1, x_26);
lean_ctor_set(x_21, 0, x_27);
x_28 = l_List_forIn_loop___at_Lean_Elab_Tactic_tagUntaggedGoals___spec__2(x_1, x_2, x_19, x_3, x_21);
lean_dec(x_19);
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
lean_dec(x_28);
lean_ctor_set(x_23, 0, x_29);
x_30 = lean_st_ref_set(x_9, x_23, x_25);
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_ctor_get(x_30, 0);
lean_dec(x_32);
x_33 = lean_box(0);
lean_ctor_set(x_30, 0, x_33);
return x_30;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_30, 1);
lean_inc(x_34);
lean_dec(x_30);
x_35 = lean_box(0);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_34);
return x_36;
}
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_37 = lean_ctor_get(x_21, 1);
x_38 = lean_ctor_get(x_23, 0);
x_39 = lean_ctor_get(x_23, 1);
x_40 = lean_ctor_get(x_23, 2);
x_41 = lean_ctor_get(x_23, 3);
x_42 = lean_ctor_get(x_23, 4);
lean_inc(x_42);
lean_inc(x_41);
lean_inc(x_40);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_23);
x_43 = lean_unsigned_to_nat(1u);
lean_ctor_set(x_21, 1, x_38);
lean_ctor_set(x_21, 0, x_43);
x_44 = l_List_forIn_loop___at_Lean_Elab_Tactic_tagUntaggedGoals___spec__2(x_1, x_2, x_19, x_3, x_21);
lean_dec(x_19);
x_45 = lean_ctor_get(x_44, 1);
lean_inc(x_45);
lean_dec(x_44);
x_46 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_39);
lean_ctor_set(x_46, 2, x_40);
lean_ctor_set(x_46, 3, x_41);
lean_ctor_set(x_46, 4, x_42);
x_47 = lean_st_ref_set(x_9, x_46, x_37);
x_48 = lean_ctor_get(x_47, 1);
lean_inc(x_48);
if (lean_is_exclusive(x_47)) {
 lean_ctor_release(x_47, 0);
 lean_ctor_release(x_47, 1);
 x_49 = x_47;
} else {
 lean_dec_ref(x_47);
 x_49 = lean_box(0);
}
x_50 = lean_box(0);
if (lean_is_scalar(x_49)) {
 x_51 = lean_alloc_ctor(0, 2, 0);
} else {
 x_51 = x_49;
}
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_48);
return x_51;
}
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_52 = lean_ctor_get(x_21, 0);
x_53 = lean_ctor_get(x_21, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_21);
x_54 = lean_ctor_get(x_52, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_52, 1);
lean_inc(x_55);
x_56 = lean_ctor_get(x_52, 2);
lean_inc(x_56);
x_57 = lean_ctor_get(x_52, 3);
lean_inc(x_57);
x_58 = lean_ctor_get(x_52, 4);
lean_inc(x_58);
if (lean_is_exclusive(x_52)) {
 lean_ctor_release(x_52, 0);
 lean_ctor_release(x_52, 1);
 lean_ctor_release(x_52, 2);
 lean_ctor_release(x_52, 3);
 lean_ctor_release(x_52, 4);
 x_59 = x_52;
} else {
 lean_dec_ref(x_52);
 x_59 = lean_box(0);
}
x_60 = lean_unsigned_to_nat(1u);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_54);
x_62 = l_List_forIn_loop___at_Lean_Elab_Tactic_tagUntaggedGoals___spec__2(x_1, x_2, x_19, x_3, x_61);
lean_dec(x_19);
x_63 = lean_ctor_get(x_62, 1);
lean_inc(x_63);
lean_dec(x_62);
if (lean_is_scalar(x_59)) {
 x_64 = lean_alloc_ctor(0, 5, 0);
} else {
 x_64 = x_59;
}
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_55);
lean_ctor_set(x_64, 2, x_56);
lean_ctor_set(x_64, 3, x_57);
lean_ctor_set(x_64, 4, x_58);
x_65 = lean_st_ref_set(x_9, x_64, x_53);
x_66 = lean_ctor_get(x_65, 1);
lean_inc(x_66);
if (lean_is_exclusive(x_65)) {
 lean_ctor_release(x_65, 0);
 lean_ctor_release(x_65, 1);
 x_67 = x_65;
} else {
 lean_dec_ref(x_65);
 x_67 = lean_box(0);
}
x_68 = lean_box(0);
if (lean_is_scalar(x_67)) {
 x_69 = lean_alloc_ctor(0, 2, 0);
} else {
 x_69 = x_67;
}
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_69, 1, x_66);
return x_69;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Elab_Tactic_tagUntaggedGoals___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_List_forIn_loop___at_Lean_Elab_Tactic_tagUntaggedGoals___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_13;
}
}
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Elab_Tactic_tagUntaggedGoals___spec__2___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_forIn_loop___at_Lean_Elab_Tactic_tagUntaggedGoals___spec__2___lambda__1(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Elab_Tactic_tagUntaggedGoals___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_List_forIn_loop___at_Lean_Elab_Tactic_tagUntaggedGoals___spec__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_tagUntaggedGoals___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_Elab_Tactic_tagUntaggedGoals(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_13;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_getNameOfIdent_x27___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("_", 1);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_getNameOfIdent_x27___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Tactic_getNameOfIdent_x27___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getNameOfIdent_x27(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = l_Lean_Syntax_isIdent(x_1);
if (x_2 == 0)
{
lean_object* x_3; 
x_3 = l_Lean_Elab_Tactic_getNameOfIdent_x27___closed__2;
return x_3;
}
else
{
lean_object* x_4; 
x_4 = l_Lean_Syntax_getId(x_1);
return x_4;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getNameOfIdent_x27___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Tactic_getNameOfIdent_x27(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_withCaseRef___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_Lean_replaceRef(x_1, x_4);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
lean_dec(x_2);
x_7 = lean_apply_3(x_6, lean_box(0), x_5, x_3);
return x_7;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_withCaseRef___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_withCaseRef___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_6 = l_Lean_Elab_Tactic_withCaseRef___rarg___closed__1;
x_7 = lean_array_push(x_6, x_3);
x_8 = lean_array_push(x_7, x_4);
x_9 = lean_box(2);
x_10 = l_Lean_Elab_Tactic_evalTactic___lambda__5___closed__3;
x_11 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
lean_ctor_set(x_11, 2, x_8);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_ctor_get(x_2, 0);
lean_inc(x_13);
x_14 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_withCaseRef___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_14, 0, x_11);
lean_closure_set(x_14, 1, x_2);
lean_closure_set(x_14, 2, x_5);
x_15 = lean_apply_4(x_12, lean_box(0), lean_box(0), x_13, x_14);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_withCaseRef(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_withCaseRef___rarg), 5, 0);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_withCaseRef___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Tactic_withCaseRef___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_1);
return x_5;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Tactic_mkTacticAttribute___closed__8;
x_2 = l_Lean_Elab_Tactic_mkTacticAttribute___closed__3;
x_3 = l_Lean_Name_mkStr2(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Tactic_mkTacticAttribute___closed__5;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__2;
x_2 = l_Lean_Elab_Tactic_mkTacticAttribute___closed__8;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__3;
x_2 = l_Lean_Elab_Term_reportUnsolvedGoals___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("initFn", 6);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__4;
x_2 = l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__5;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("_@", 2);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__6;
x_2 = l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__7;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__8;
x_2 = l_Lean_Elab_Tactic_mkTacticAttribute___closed__5;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__9;
x_2 = l_Lean_Elab_Tactic_mkTacticAttribute___closed__8;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__10;
x_2 = l_Lean_Elab_Term_reportUnsolvedGoals___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("Basic", 5);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__11;
x_2 = l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__12;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("_hyg", 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__13;
x_2 = l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__14;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__15;
x_2 = lean_unsigned_to_nat(5519u);
x_3 = l_Lean_Name_num___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519_(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__1;
x_3 = 0;
x_4 = l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__16;
x_5 = l_Lean_registerTraceClass(x_2, x_3, x_4, x_1);
return x_5;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5561____closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__15;
x_2 = lean_unsigned_to_nat(5561u);
x_3 = l_Lean_Name_num___override(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5561_(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_List_forIn_loop___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__4___closed__2;
x_3 = 0;
x_4 = l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5561____closed__1;
x_5 = l_Lean_registerTraceClass(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* initialize_Lean_Elab_Term(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Basic(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Term(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_goalsToMessageData___closed__1 = _init_l_Lean_Elab_goalsToMessageData___closed__1();
lean_mark_persistent(l_Lean_Elab_goalsToMessageData___closed__1);
l_Lean_Elab_goalsToMessageData___closed__2 = _init_l_Lean_Elab_goalsToMessageData___closed__2();
lean_mark_persistent(l_Lean_Elab_goalsToMessageData___closed__2);
l_Lean_Elab_Term_reportUnsolvedGoals___closed__1 = _init_l_Lean_Elab_Term_reportUnsolvedGoals___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_reportUnsolvedGoals___closed__1);
l_Lean_Elab_Term_reportUnsolvedGoals___closed__2 = _init_l_Lean_Elab_Term_reportUnsolvedGoals___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_reportUnsolvedGoals___closed__2);
l_Lean_Elab_Term_reportUnsolvedGoals___closed__3 = _init_l_Lean_Elab_Term_reportUnsolvedGoals___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_reportUnsolvedGoals___closed__3);
l_Lean_Elab_Term_reportUnsolvedGoals___closed__4 = _init_l_Lean_Elab_Term_reportUnsolvedGoals___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_reportUnsolvedGoals___closed__4);
l_Lean_Elab_Term_reportUnsolvedGoals___closed__5 = _init_l_Lean_Elab_Term_reportUnsolvedGoals___closed__5();
lean_mark_persistent(l_Lean_Elab_Term_reportUnsolvedGoals___closed__5);
l_Lean_Elab_Term_reportUnsolvedGoals___closed__6 = _init_l_Lean_Elab_Term_reportUnsolvedGoals___closed__6();
lean_mark_persistent(l_Lean_Elab_Term_reportUnsolvedGoals___closed__6);
l_Lean_Elab_Term_reportUnsolvedGoals___closed__7 = _init_l_Lean_Elab_Term_reportUnsolvedGoals___closed__7();
lean_mark_persistent(l_Lean_Elab_Term_reportUnsolvedGoals___closed__7);
l_Lean_Elab_Tactic_Context_recover___default = _init_l_Lean_Elab_Tactic_Context_recover___default();
l_Lean_Elab_Tactic_instMonadTacticM___closed__1 = _init_l_Lean_Elab_Tactic_instMonadTacticM___closed__1();
lean_mark_persistent(l_Lean_Elab_Tactic_instMonadTacticM___closed__1);
l_Lean_Elab_Tactic_instMonadTacticM___closed__2 = _init_l_Lean_Elab_Tactic_instMonadTacticM___closed__2();
lean_mark_persistent(l_Lean_Elab_Tactic_instMonadTacticM___closed__2);
l_Lean_Elab_Tactic_instMonadTacticM___closed__3 = _init_l_Lean_Elab_Tactic_instMonadTacticM___closed__3();
lean_mark_persistent(l_Lean_Elab_Tactic_instMonadTacticM___closed__3);
l_Lean_Elab_Tactic_instMonadTacticM___closed__4 = _init_l_Lean_Elab_Tactic_instMonadTacticM___closed__4();
lean_mark_persistent(l_Lean_Elab_Tactic_instMonadTacticM___closed__4);
l_Lean_Elab_Tactic_instMonadTacticM___closed__5 = _init_l_Lean_Elab_Tactic_instMonadTacticM___closed__5();
lean_mark_persistent(l_Lean_Elab_Tactic_instMonadTacticM___closed__5);
l_Lean_Elab_Tactic_instMonadTacticM___closed__6 = _init_l_Lean_Elab_Tactic_instMonadTacticM___closed__6();
lean_mark_persistent(l_Lean_Elab_Tactic_instMonadTacticM___closed__6);
l_Lean_Elab_Tactic_instMonadTacticM = _init_l_Lean_Elab_Tactic_instMonadTacticM();
lean_mark_persistent(l_Lean_Elab_Tactic_instMonadTacticM);
l_Lean_Elab_Tactic_run___lambda__1___closed__1 = _init_l_Lean_Elab_Tactic_run___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Elab_Tactic_run___lambda__1___closed__1);
l_Lean_Elab_Tactic_mkTacticAttribute___closed__1 = _init_l_Lean_Elab_Tactic_mkTacticAttribute___closed__1();
lean_mark_persistent(l_Lean_Elab_Tactic_mkTacticAttribute___closed__1);
l_Lean_Elab_Tactic_mkTacticAttribute___closed__2 = _init_l_Lean_Elab_Tactic_mkTacticAttribute___closed__2();
lean_mark_persistent(l_Lean_Elab_Tactic_mkTacticAttribute___closed__2);
l_Lean_Elab_Tactic_mkTacticAttribute___closed__3 = _init_l_Lean_Elab_Tactic_mkTacticAttribute___closed__3();
lean_mark_persistent(l_Lean_Elab_Tactic_mkTacticAttribute___closed__3);
l_Lean_Elab_Tactic_mkTacticAttribute___closed__4 = _init_l_Lean_Elab_Tactic_mkTacticAttribute___closed__4();
lean_mark_persistent(l_Lean_Elab_Tactic_mkTacticAttribute___closed__4);
l_Lean_Elab_Tactic_mkTacticAttribute___closed__5 = _init_l_Lean_Elab_Tactic_mkTacticAttribute___closed__5();
lean_mark_persistent(l_Lean_Elab_Tactic_mkTacticAttribute___closed__5);
l_Lean_Elab_Tactic_mkTacticAttribute___closed__6 = _init_l_Lean_Elab_Tactic_mkTacticAttribute___closed__6();
lean_mark_persistent(l_Lean_Elab_Tactic_mkTacticAttribute___closed__6);
l_Lean_Elab_Tactic_mkTacticAttribute___closed__7 = _init_l_Lean_Elab_Tactic_mkTacticAttribute___closed__7();
lean_mark_persistent(l_Lean_Elab_Tactic_mkTacticAttribute___closed__7);
l_Lean_Elab_Tactic_mkTacticAttribute___closed__8 = _init_l_Lean_Elab_Tactic_mkTacticAttribute___closed__8();
lean_mark_persistent(l_Lean_Elab_Tactic_mkTacticAttribute___closed__8);
l_Lean_Elab_Tactic_mkTacticAttribute___closed__9 = _init_l_Lean_Elab_Tactic_mkTacticAttribute___closed__9();
lean_mark_persistent(l_Lean_Elab_Tactic_mkTacticAttribute___closed__9);
l_Lean_Elab_Tactic_mkTacticAttribute___closed__10 = _init_l_Lean_Elab_Tactic_mkTacticAttribute___closed__10();
lean_mark_persistent(l_Lean_Elab_Tactic_mkTacticAttribute___closed__10);
l_Lean_Elab_Tactic_mkTacticAttribute___closed__11 = _init_l_Lean_Elab_Tactic_mkTacticAttribute___closed__11();
lean_mark_persistent(l_Lean_Elab_Tactic_mkTacticAttribute___closed__11);
if (builtin) {res = l_Lean_Elab_Tactic_mkTacticAttribute(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_Elab_Tactic_tacticElabAttribute = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Elab_Tactic_tacticElabAttribute);
lean_dec_ref(res);
}l_Lean_Elab_getResetInfoTrees___at_Lean_Elab_Tactic_withTacticInfoContext___spec__2___rarg___closed__1 = _init_l_Lean_Elab_getResetInfoTrees___at_Lean_Elab_Tactic_withTacticInfoContext___spec__2___rarg___closed__1();
lean_mark_persistent(l_Lean_Elab_getResetInfoTrees___at_Lean_Elab_Tactic_withTacticInfoContext___spec__2___rarg___closed__1);
l_Lean_Elab_getResetInfoTrees___at_Lean_Elab_Tactic_withTacticInfoContext___spec__2___rarg___closed__2 = _init_l_Lean_Elab_getResetInfoTrees___at_Lean_Elab_Tactic_withTacticInfoContext___spec__2___rarg___closed__2();
lean_mark_persistent(l_Lean_Elab_getResetInfoTrees___at_Lean_Elab_Tactic_withTacticInfoContext___spec__2___rarg___closed__2);
l_Lean_Elab_getResetInfoTrees___at_Lean_Elab_Tactic_withTacticInfoContext___spec__2___rarg___closed__3 = _init_l_Lean_Elab_getResetInfoTrees___at_Lean_Elab_Tactic_withTacticInfoContext___spec__2___rarg___closed__3();
lean_mark_persistent(l_Lean_Elab_getResetInfoTrees___at_Lean_Elab_Tactic_withTacticInfoContext___spec__2___rarg___closed__3);
l_Lean_Elab_Tactic_evalTactic_throwExs___closed__1 = _init_l_Lean_Elab_Tactic_evalTactic_throwExs___closed__1();
lean_mark_persistent(l_Lean_Elab_Tactic_evalTactic_throwExs___closed__1);
l_Lean_Elab_Tactic_evalTactic_throwExs___closed__2 = _init_l_Lean_Elab_Tactic_evalTactic_throwExs___closed__2();
lean_mark_persistent(l_Lean_Elab_Tactic_evalTactic_throwExs___closed__2);
l_Lean_isTracingEnabledFor___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__1___closed__1 = _init_l_Lean_isTracingEnabledFor___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__1___closed__1();
lean_mark_persistent(l_Lean_isTracingEnabledFor___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__1___closed__1);
l_Lean_addTrace___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__2___closed__1 = _init_l_Lean_addTrace___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__2___closed__1();
l_Lean_addTrace___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__2___closed__2 = _init_l_Lean_addTrace___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__2___closed__2();
lean_mark_persistent(l_Lean_addTrace___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__2___closed__2);
l_List_forIn_loop___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__4___closed__1 = _init_l_List_forIn_loop___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__4___closed__1();
lean_mark_persistent(l_List_forIn_loop___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__4___closed__1);
l_List_forIn_loop___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__4___closed__2 = _init_l_List_forIn_loop___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__4___closed__2();
lean_mark_persistent(l_List_forIn_loop___at_Lean_Elab_Tactic_evalTactic_handleEx___spec__4___closed__2);
l_Lean_Elab_Tactic_evalTactic_handleEx___closed__1 = _init_l_Lean_Elab_Tactic_evalTactic_handleEx___closed__1();
lean_mark_persistent(l_Lean_Elab_Tactic_evalTactic_handleEx___closed__1);
l_Lean_Elab_Tactic_evalTactic_handleEx___closed__2 = _init_l_Lean_Elab_Tactic_evalTactic_handleEx___closed__2();
lean_mark_persistent(l_Lean_Elab_Tactic_evalTactic_handleEx___closed__2);
l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__5___closed__1 = _init_l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__5___closed__1();
lean_mark_persistent(l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__5___closed__1);
l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__5___closed__2 = _init_l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__5___closed__2();
lean_mark_persistent(l_Lean_throwMaxRecDepthAt___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__5___closed__2);
l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__6___rarg___closed__1 = _init_l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__6___rarg___closed__1();
lean_mark_persistent(l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Tactic_evalTactic_expandEval___spec__6___rarg___closed__1);
l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__2___closed__1 = _init_l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__2___closed__1();
lean_mark_persistent(l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__2___closed__1);
l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__3___closed__1 = _init_l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__3___closed__1();
lean_mark_persistent(l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__3___closed__1);
l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__3___closed__2 = _init_l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__3___closed__2();
lean_mark_persistent(l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__3___closed__2);
l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__4___closed__1 = _init_l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__4___closed__1();
lean_mark_persistent(l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__4___closed__1);
l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__4___closed__2 = _init_l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__4___closed__2();
lean_mark_persistent(l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__4___closed__2);
l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__4___closed__3 = _init_l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__4___closed__3();
lean_mark_persistent(l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__4___closed__3);
l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__4___closed__4 = _init_l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__4___closed__4();
l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__4___closed__5 = _init_l_Lean_withTraceNode___at_Lean_Elab_Tactic_evalTactic___spec__3___lambda__4___closed__5();
l_Lean_Elab_Tactic_evalTactic___lambda__4___closed__1 = _init_l_Lean_Elab_Tactic_evalTactic___lambda__4___closed__1();
lean_mark_persistent(l_Lean_Elab_Tactic_evalTactic___lambda__4___closed__1);
l_Lean_Elab_Tactic_evalTactic___lambda__4___closed__2 = _init_l_Lean_Elab_Tactic_evalTactic___lambda__4___closed__2();
lean_mark_persistent(l_Lean_Elab_Tactic_evalTactic___lambda__4___closed__2);
l_Lean_Elab_Tactic_evalTactic___lambda__4___closed__3 = _init_l_Lean_Elab_Tactic_evalTactic___lambda__4___closed__3();
lean_mark_persistent(l_Lean_Elab_Tactic_evalTactic___lambda__4___closed__3);
l_Lean_Elab_Tactic_evalTactic___lambda__4___closed__4 = _init_l_Lean_Elab_Tactic_evalTactic___lambda__4___closed__4();
lean_mark_persistent(l_Lean_Elab_Tactic_evalTactic___lambda__4___closed__4);
l_Lean_Elab_Tactic_evalTactic___lambda__4___closed__5 = _init_l_Lean_Elab_Tactic_evalTactic___lambda__4___closed__5();
lean_mark_persistent(l_Lean_Elab_Tactic_evalTactic___lambda__4___closed__5);
l_Lean_Elab_Tactic_evalTactic___lambda__4___closed__6 = _init_l_Lean_Elab_Tactic_evalTactic___lambda__4___closed__6();
lean_mark_persistent(l_Lean_Elab_Tactic_evalTactic___lambda__4___closed__6);
l_Lean_Elab_Tactic_evalTactic___lambda__5___closed__1 = _init_l_Lean_Elab_Tactic_evalTactic___lambda__5___closed__1();
lean_mark_persistent(l_Lean_Elab_Tactic_evalTactic___lambda__5___closed__1);
l_Lean_Elab_Tactic_evalTactic___lambda__5___closed__2 = _init_l_Lean_Elab_Tactic_evalTactic___lambda__5___closed__2();
lean_mark_persistent(l_Lean_Elab_Tactic_evalTactic___lambda__5___closed__2);
l_Lean_Elab_Tactic_evalTactic___lambda__5___closed__3 = _init_l_Lean_Elab_Tactic_evalTactic___lambda__5___closed__3();
lean_mark_persistent(l_Lean_Elab_Tactic_evalTactic___lambda__5___closed__3);
l_Lean_Elab_Tactic_evalTactic___lambda__5___closed__4 = _init_l_Lean_Elab_Tactic_evalTactic___lambda__5___closed__4();
lean_mark_persistent(l_Lean_Elab_Tactic_evalTactic___lambda__5___closed__4);
l_Lean_Elab_Tactic_evalTactic___lambda__5___closed__5 = _init_l_Lean_Elab_Tactic_evalTactic___lambda__5___closed__5();
lean_mark_persistent(l_Lean_Elab_Tactic_evalTactic___lambda__5___closed__5);
l_Lean_Elab_Tactic_evalTactic___lambda__5___closed__6 = _init_l_Lean_Elab_Tactic_evalTactic___lambda__5___closed__6();
lean_mark_persistent(l_Lean_Elab_Tactic_evalTactic___lambda__5___closed__6);
l_Lean_Elab_Tactic_evalTactic___lambda__5___closed__7 = _init_l_Lean_Elab_Tactic_evalTactic___lambda__5___closed__7();
lean_mark_persistent(l_Lean_Elab_Tactic_evalTactic___lambda__5___closed__7);
l_Lean_Elab_Tactic_evalTactic___lambda__5___boxed__const__1 = _init_l_Lean_Elab_Tactic_evalTactic___lambda__5___boxed__const__1();
lean_mark_persistent(l_Lean_Elab_Tactic_evalTactic___lambda__5___boxed__const__1);
l_Lean_Elab_Tactic_evalTactic___closed__1 = _init_l_Lean_Elab_Tactic_evalTactic___closed__1();
lean_mark_persistent(l_Lean_Elab_Tactic_evalTactic___closed__1);
l_Lean_Elab_Tactic_throwNoGoalsToBeSolved___rarg___closed__1 = _init_l_Lean_Elab_Tactic_throwNoGoalsToBeSolved___rarg___closed__1();
lean_mark_persistent(l_Lean_Elab_Tactic_throwNoGoalsToBeSolved___rarg___closed__1);
l_Lean_Elab_Tactic_throwNoGoalsToBeSolved___rarg___closed__2 = _init_l_Lean_Elab_Tactic_throwNoGoalsToBeSolved___rarg___closed__2();
lean_mark_persistent(l_Lean_Elab_Tactic_throwNoGoalsToBeSolved___rarg___closed__2);
l_Lean_Elab_throwAbortTactic___at_Lean_Elab_Tactic_done___spec__1___rarg___closed__1 = _init_l_Lean_Elab_throwAbortTactic___at_Lean_Elab_Tactic_done___spec__1___rarg___closed__1();
lean_mark_persistent(l_Lean_Elab_throwAbortTactic___at_Lean_Elab_Tactic_done___spec__1___rarg___closed__1);
l_Lean_logAt___at_Lean_Elab_Tactic_closeUsingOrAdmit___spec__2___closed__1 = _init_l_Lean_logAt___at_Lean_Elab_Tactic_closeUsingOrAdmit___spec__2___closed__1();
lean_mark_persistent(l_Lean_logAt___at_Lean_Elab_Tactic_closeUsingOrAdmit___spec__2___closed__1);
l_Lean_Elab_logException___at_Lean_Elab_Tactic_closeUsingOrAdmit___spec__1___closed__1 = _init_l_Lean_Elab_logException___at_Lean_Elab_Tactic_closeUsingOrAdmit___spec__1___closed__1();
lean_mark_persistent(l_Lean_Elab_logException___at_Lean_Elab_Tactic_closeUsingOrAdmit___spec__1___closed__1);
l_Lean_Elab_logException___at_Lean_Elab_Tactic_closeUsingOrAdmit___spec__1___closed__2 = _init_l_Lean_Elab_logException___at_Lean_Elab_Tactic_closeUsingOrAdmit___spec__1___closed__2();
lean_mark_persistent(l_Lean_Elab_logException___at_Lean_Elab_Tactic_closeUsingOrAdmit___spec__1___closed__2);
l_Lean_Elab_Tactic_instMonadBacktrackSavedStateTacticM___closed__1 = _init_l_Lean_Elab_Tactic_instMonadBacktrackSavedStateTacticM___closed__1();
lean_mark_persistent(l_Lean_Elab_Tactic_instMonadBacktrackSavedStateTacticM___closed__1);
l_Lean_Elab_Tactic_instMonadBacktrackSavedStateTacticM___closed__2 = _init_l_Lean_Elab_Tactic_instMonadBacktrackSavedStateTacticM___closed__2();
lean_mark_persistent(l_Lean_Elab_Tactic_instMonadBacktrackSavedStateTacticM___closed__2);
l_Lean_Elab_Tactic_instMonadBacktrackSavedStateTacticM___closed__3 = _init_l_Lean_Elab_Tactic_instMonadBacktrackSavedStateTacticM___closed__3();
lean_mark_persistent(l_Lean_Elab_Tactic_instMonadBacktrackSavedStateTacticM___closed__3);
l_Lean_Elab_Tactic_instMonadBacktrackSavedStateTacticM = _init_l_Lean_Elab_Tactic_instMonadBacktrackSavedStateTacticM();
lean_mark_persistent(l_Lean_Elab_Tactic_instMonadBacktrackSavedStateTacticM);
l_Lean_Elab_Tactic_instMonadExceptExceptionTacticM___closed__1 = _init_l_Lean_Elab_Tactic_instMonadExceptExceptionTacticM___closed__1();
lean_mark_persistent(l_Lean_Elab_Tactic_instMonadExceptExceptionTacticM___closed__1);
l_Lean_Elab_Tactic_instMonadExceptExceptionTacticM___closed__2 = _init_l_Lean_Elab_Tactic_instMonadExceptExceptionTacticM___closed__2();
lean_mark_persistent(l_Lean_Elab_Tactic_instMonadExceptExceptionTacticM___closed__2);
l_Lean_Elab_Tactic_instMonadExceptExceptionTacticM___closed__3 = _init_l_Lean_Elab_Tactic_instMonadExceptExceptionTacticM___closed__3();
lean_mark_persistent(l_Lean_Elab_Tactic_instMonadExceptExceptionTacticM___closed__3);
l_Lean_Elab_Tactic_instMonadExceptExceptionTacticM = _init_l_Lean_Elab_Tactic_instMonadExceptExceptionTacticM();
lean_mark_persistent(l_Lean_Elab_Tactic_instMonadExceptExceptionTacticM);
l_Lean_Elab_Tactic_instOrElseTacticM___closed__1 = _init_l_Lean_Elab_Tactic_instOrElseTacticM___closed__1();
lean_mark_persistent(l_Lean_Elab_Tactic_instOrElseTacticM___closed__1);
l_Lean_Elab_Tactic_instAlternativeTacticM___lambda__1___closed__1 = _init_l_Lean_Elab_Tactic_instAlternativeTacticM___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Elab_Tactic_instAlternativeTacticM___lambda__1___closed__1);
l_Lean_Elab_Tactic_instAlternativeTacticM___lambda__1___closed__2 = _init_l_Lean_Elab_Tactic_instAlternativeTacticM___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Elab_Tactic_instAlternativeTacticM___lambda__1___closed__2);
l_Lean_Elab_Tactic_instAlternativeTacticM___closed__1 = _init_l_Lean_Elab_Tactic_instAlternativeTacticM___closed__1();
lean_mark_persistent(l_Lean_Elab_Tactic_instAlternativeTacticM___closed__1);
l_Lean_Elab_Tactic_instAlternativeTacticM___closed__2 = _init_l_Lean_Elab_Tactic_instAlternativeTacticM___closed__2();
lean_mark_persistent(l_Lean_Elab_Tactic_instAlternativeTacticM___closed__2);
l_Lean_Elab_Tactic_instAlternativeTacticM___closed__3 = _init_l_Lean_Elab_Tactic_instAlternativeTacticM___closed__3();
lean_mark_persistent(l_Lean_Elab_Tactic_instAlternativeTacticM___closed__3);
l_Lean_Elab_Tactic_instAlternativeTacticM = _init_l_Lean_Elab_Tactic_instAlternativeTacticM();
lean_mark_persistent(l_Lean_Elab_Tactic_instAlternativeTacticM);
l_Lean_Elab_Tactic_ensureHasNoMVars___closed__1 = _init_l_Lean_Elab_Tactic_ensureHasNoMVars___closed__1();
lean_mark_persistent(l_Lean_Elab_Tactic_ensureHasNoMVars___closed__1);
l_Lean_Elab_Tactic_ensureHasNoMVars___closed__2 = _init_l_Lean_Elab_Tactic_ensureHasNoMVars___closed__2();
lean_mark_persistent(l_Lean_Elab_Tactic_ensureHasNoMVars___closed__2);
l_List_forIn_loop___at_Lean_Elab_Tactic_tagUntaggedGoals___spec__2___closed__1 = _init_l_List_forIn_loop___at_Lean_Elab_Tactic_tagUntaggedGoals___spec__2___closed__1();
lean_mark_persistent(l_List_forIn_loop___at_Lean_Elab_Tactic_tagUntaggedGoals___spec__2___closed__1);
l_Lean_Elab_Tactic_getNameOfIdent_x27___closed__1 = _init_l_Lean_Elab_Tactic_getNameOfIdent_x27___closed__1();
lean_mark_persistent(l_Lean_Elab_Tactic_getNameOfIdent_x27___closed__1);
l_Lean_Elab_Tactic_getNameOfIdent_x27___closed__2 = _init_l_Lean_Elab_Tactic_getNameOfIdent_x27___closed__2();
lean_mark_persistent(l_Lean_Elab_Tactic_getNameOfIdent_x27___closed__2);
l_Lean_Elab_Tactic_withCaseRef___rarg___closed__1 = _init_l_Lean_Elab_Tactic_withCaseRef___rarg___closed__1();
lean_mark_persistent(l_Lean_Elab_Tactic_withCaseRef___rarg___closed__1);
l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__1 = _init_l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__1();
lean_mark_persistent(l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__1);
l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__2 = _init_l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__2();
lean_mark_persistent(l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__2);
l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__3 = _init_l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__3();
lean_mark_persistent(l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__3);
l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__4 = _init_l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__4();
lean_mark_persistent(l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__4);
l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__5 = _init_l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__5();
lean_mark_persistent(l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__5);
l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__6 = _init_l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__6();
lean_mark_persistent(l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__6);
l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__7 = _init_l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__7();
lean_mark_persistent(l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__7);
l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__8 = _init_l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__8();
lean_mark_persistent(l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__8);
l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__9 = _init_l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__9();
lean_mark_persistent(l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__9);
l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__10 = _init_l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__10();
lean_mark_persistent(l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__10);
l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__11 = _init_l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__11();
lean_mark_persistent(l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__11);
l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__12 = _init_l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__12();
lean_mark_persistent(l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__12);
l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__13 = _init_l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__13();
lean_mark_persistent(l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__13);
l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__14 = _init_l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__14();
lean_mark_persistent(l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__14);
l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__15 = _init_l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__15();
lean_mark_persistent(l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__15);
l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__16 = _init_l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__16();
lean_mark_persistent(l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519____closed__16);
if (builtin) {res = l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5519_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
}l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5561____closed__1 = _init_l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5561____closed__1();
lean_mark_persistent(l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5561____closed__1);
if (builtin) {res = l_Lean_Elab_Tactic_initFn____x40_Lean_Elab_Tactic_Basic___hyg_5561_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
}return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
