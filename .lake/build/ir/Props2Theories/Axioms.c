// Lean compiler output
// Module: Props2Theories.Axioms
// Imports: public import Init public meta import Init public import Props2Theories.TacticNames
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__0___redArg();
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_elabTerm(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_elabNativeDecideCore_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFnArgs(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_bindingDomain_x21(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkArrow(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduce(lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_delab(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray0(lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_evalTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_kabstract(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppOptM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_MVarId_assert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_intro1Core(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_withMainContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Delaborator_delab___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray1___redArg(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getNumArgs(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___00Lean_PrettyPrinter_Delaborator_SubExpr_withAppArg___at___00__private_Lean_Elab_Tactic_Do_Syntax_0__Std_Do_unexpandPostCondNoThrow_spec__0_spec__0___redArg(lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Delaborator_failure___redArg();
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withAppArg___at___00__private_Lean_Elab_Tactic_Do_Syntax_0__Std_Do_unexpandPostCondNoThrow_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withAppFn___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Delab_0__Lean_Elab_Tactic_Do_ProofMode_delabMGoal_delabHypotheses_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withAppArg___at___00__private_Lean_Elab_Tactic_Do_Syntax_0__Std_Do_unexpandPostCondNoThrow_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
static const lean_string_object lp_Props2Theories_term___u2208____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 9, .m_data = "term_∈__1"};
static const lean_object* lp_Props2Theories_term___u2208____1___closed__0 = (const lean_object*)&lp_Props2Theories_term___u2208____1___closed__0_value;
static const lean_ctor_object lp_Props2Theories_term___u2208____1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_term___u2208____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(147, 142, 102, 137, 16, 206, 246, 196)}};
static const lean_object* lp_Props2Theories_term___u2208____1___closed__1 = (const lean_object*)&lp_Props2Theories_term___u2208____1___closed__1_value;
static const lean_string_object lp_Props2Theories_term___u2208____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* lp_Props2Theories_term___u2208____1___closed__2 = (const lean_object*)&lp_Props2Theories_term___u2208____1___closed__2_value;
static const lean_ctor_object lp_Props2Theories_term___u2208____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_term___u2208____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* lp_Props2Theories_term___u2208____1___closed__3 = (const lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value;
static const lean_string_object lp_Props2Theories_term___u2208____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 3, .m_data = " ∈ "};
static const lean_object* lp_Props2Theories_term___u2208____1___closed__4 = (const lean_object*)&lp_Props2Theories_term___u2208____1___closed__4_value;
static const lean_ctor_object lp_Props2Theories_term___u2208____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__4_value)}};
static const lean_object* lp_Props2Theories_term___u2208____1___closed__5 = (const lean_object*)&lp_Props2Theories_term___u2208____1___closed__5_value;
static const lean_string_object lp_Props2Theories_term___u2208____1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* lp_Props2Theories_term___u2208____1___closed__6 = (const lean_object*)&lp_Props2Theories_term___u2208____1___closed__6_value;
static const lean_ctor_object lp_Props2Theories_term___u2208____1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_term___u2208____1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* lp_Props2Theories_term___u2208____1___closed__7 = (const lean_object*)&lp_Props2Theories_term___u2208____1___closed__7_value;
static const lean_ctor_object lp_Props2Theories_term___u2208____1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__7_value),((lean_object*)(((size_t)(51) << 1) | 1))}};
static const lean_object* lp_Props2Theories_term___u2208____1___closed__8 = (const lean_object*)&lp_Props2Theories_term___u2208____1___closed__8_value;
static const lean_ctor_object lp_Props2Theories_term___u2208____1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_term___u2208____1___closed__5_value),((lean_object*)&lp_Props2Theories_term___u2208____1___closed__8_value)}};
static const lean_object* lp_Props2Theories_term___u2208____1___closed__9 = (const lean_object*)&lp_Props2Theories_term___u2208____1___closed__9_value;
static const lean_ctor_object lp_Props2Theories_term___u2208____1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__1_value),((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)(((size_t)(51) << 1) | 1)),((lean_object*)&lp_Props2Theories_term___u2208____1___closed__9_value)}};
static const lean_object* lp_Props2Theories_term___u2208____1___closed__10 = (const lean_object*)&lp_Props2Theories_term___u2208____1___closed__10_value;
LEAN_EXPORT const lean_object* lp_Props2Theories_term___u2208____1 = (const lean_object*)&lp_Props2Theories_term___u2208____1___closed__10_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__0 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__0_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__1 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__1_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__2 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__2_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__3 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__3_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__4_value_aux_0),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__4_value_aux_1),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__4_value_aux_2),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__4 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__4_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "belongs"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__5 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__5_value;
static lean_once_cell_t lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__6;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(22, 57, 120, 44, 232, 204, 36, 204)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__7 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__7_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__7_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__8 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__8_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__8_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__9 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__9_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__10 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__10_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__11 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__11_value;
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______unexpand__belongs__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______unexpand__belongs__1___closed__0 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______unexpand__belongs__1___closed__0_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______unexpand__belongs__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______unexpand__belongs__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______unexpand__belongs__1___closed__1 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______unexpand__belongs__1___closed__1_value;
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______unexpand__belongs__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______unexpand__belongs__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Props2Theories_term___u2209____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 9, .m_data = "term_∉__1"};
static const lean_object* lp_Props2Theories_term___u2209____1___closed__0 = (const lean_object*)&lp_Props2Theories_term___u2209____1___closed__0_value;
static const lean_ctor_object lp_Props2Theories_term___u2209____1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_term___u2209____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(238, 166, 204, 137, 201, 202, 136, 117)}};
static const lean_object* lp_Props2Theories_term___u2209____1___closed__1 = (const lean_object*)&lp_Props2Theories_term___u2209____1___closed__1_value;
static const lean_string_object lp_Props2Theories_term___u2209____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 3, .m_data = " ∉ "};
static const lean_object* lp_Props2Theories_term___u2209____1___closed__2 = (const lean_object*)&lp_Props2Theories_term___u2209____1___closed__2_value;
static const lean_ctor_object lp_Props2Theories_term___u2209____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2209____1___closed__2_value)}};
static const lean_object* lp_Props2Theories_term___u2209____1___closed__3 = (const lean_object*)&lp_Props2Theories_term___u2209____1___closed__3_value;
static const lean_ctor_object lp_Props2Theories_term___u2209____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__7_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories_term___u2209____1___closed__4 = (const lean_object*)&lp_Props2Theories_term___u2209____1___closed__4_value;
static const lean_ctor_object lp_Props2Theories_term___u2209____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_term___u2209____1___closed__3_value),((lean_object*)&lp_Props2Theories_term___u2209____1___closed__4_value)}};
static const lean_object* lp_Props2Theories_term___u2209____1___closed__5 = (const lean_object*)&lp_Props2Theories_term___u2209____1___closed__5_value;
static const lean_ctor_object lp_Props2Theories_term___u2209____1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2209____1___closed__1_value),((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_term___u2209____1___closed__5_value)}};
static const lean_object* lp_Props2Theories_term___u2209____1___closed__6 = (const lean_object*)&lp_Props2Theories_term___u2209____1___closed__6_value;
LEAN_EXPORT const lean_object* lp_Props2Theories_term___u2209____1 = (const lean_object*)&lp_Props2Theories_term___u2209____1___closed__6_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 6, .m_data = "term¬_"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__0 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__0_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(222, 122, 71, 36, 131, 84, 176, 236)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__1 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__1_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 1, .m_data = "¬"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__2 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__2_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__3 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__3_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__4_value_aux_0),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__4_value_aux_1),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__4_value_aux_2),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(124, 9, 161, 194, 227, 100, 20, 110)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__4 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__4_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__5 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__5_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__6_value_aux_0),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__6_value_aux_1),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__6_value_aux_2),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__6 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__6_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__7 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__7_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__8 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__8_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__9 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__9_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__10 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__10_value;
static lean_once_cell_t lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__11;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__12 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__12_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "SubExpr"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__13 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__13_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__14_value_aux_0),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__13_value),LEAN_SCALAR_PTR_LITERAL(170, 131, 175, 90, 105, 49, 153, 209)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__14 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__14_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__14_value)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__15 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__15_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "PrettyPrinter"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__16 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__16_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Delaborator"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__17 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__17_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__18_value_aux_0),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__16_value),LEAN_SCALAR_PTR_LITERAL(120, 167, 117, 148, 131, 202, 42, 4)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__18_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__18_value_aux_1),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__17_value),LEAN_SCALAR_PTR_LITERAL(79, 126, 247, 124, 241, 28, 11, 244)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__18_value_aux_2),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__13_value),LEAN_SCALAR_PTR_LITERAL(231, 152, 1, 212, 81, 225, 23, 202)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__18 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__18_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__18_value)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__19 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__19_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__20_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__20_value_aux_0),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__16_value),LEAN_SCALAR_PTR_LITERAL(120, 167, 117, 148, 131, 202, 42, 4)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__20_value_aux_1),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__17_value),LEAN_SCALAR_PTR_LITERAL(79, 126, 247, 124, 241, 28, 11, 244)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__20 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__20_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__20_value)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__21 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__21_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__22_value_aux_0),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__16_value),LEAN_SCALAR_PTR_LITERAL(120, 167, 117, 148, 131, 202, 42, 4)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__22 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__22_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__22_value)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__23 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__23_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__24 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__24_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__25_value_aux_0),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__24_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__25 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__25_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__25_value)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__26 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__26_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__27 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__27_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__28_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__28_value_aux_0),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__27_value),LEAN_SCALAR_PTR_LITERAL(219, 211, 7, 87, 224, 113, 199, 224)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__28 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__28_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__28_value)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__29 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__29_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__30 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__30_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__31_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__31_value_aux_0),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__30_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__31_value_aux_1),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__27_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__31 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__31_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__31_value)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__32 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__32_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__33_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__33_value_aux_0),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__30_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__33 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__33_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__33_value)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__34 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__34_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__35 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__35_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__35_value)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__36 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__36_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__36_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__37 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__37_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__34_value),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__37_value)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__38 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__38_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__32_value),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__38_value)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__39 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__39_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__29_value),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__39_value)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__40 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__40_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__26_value),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__40_value)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__41 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__41_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__23_value),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__41_value)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__42 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__42_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__21_value),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__42_value)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__43 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__43_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__19_value),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__43_value)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__44 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__44_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__15_value),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__44_value)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__45 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__45_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__12_value),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__45_value)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__46 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__46_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__7_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__47 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__47_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__47_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__48 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__48_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__49 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__49_value;
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Props2Theories_delabNotMem___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Not"};
static const lean_object* lp_Props2Theories_delabNotMem___closed__0 = (const lean_object*)&lp_Props2Theories_delabNotMem___closed__0_value;
static const lean_ctor_object lp_Props2Theories_delabNotMem___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_delabNotMem___closed__0_value),LEAN_SCALAR_PTR_LITERAL(185, 11, 203, 55, 27, 192, 137, 230)}};
static const lean_object* lp_Props2Theories_delabNotMem___closed__1 = (const lean_object*)&lp_Props2Theories_delabNotMem___closed__1_value;
static const lean_closure_object lp_Props2Theories_delabNotMem___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Delaborator_delab___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_Props2Theories_delabNotMem___closed__2 = (const lean_object*)&lp_Props2Theories_delabNotMem___closed__2_value;
static const lean_closure_object lp_Props2Theories_delabNotMem___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Delaborator_SubExpr_withAppArg___at___00__private_Lean_Elab_Tactic_Do_Syntax_0__Std_Do_unexpandPostCondNoThrow_spec__0___boxed, .m_arity = 9, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_delabNotMem___closed__2_value)} };
static const lean_object* lp_Props2Theories_delabNotMem___closed__3 = (const lean_object*)&lp_Props2Theories_delabNotMem___closed__3_value;
static const lean_closure_object lp_Props2Theories_delabNotMem___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Delaborator_SubExpr_withAppFn___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Delab_0__Lean_Elab_Tactic_Do_ProofMode_delabMGoal_delabHypotheses_spec__5___boxed, .m_arity = 9, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_delabNotMem___closed__3_value)} };
static const lean_object* lp_Props2Theories_delabNotMem___closed__4 = (const lean_object*)&lp_Props2Theories_delabNotMem___closed__4_value;
static const lean_string_object lp_Props2Theories_delabNotMem___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "choice"};
static const lean_object* lp_Props2Theories_delabNotMem___closed__5 = (const lean_object*)&lp_Props2Theories_delabNotMem___closed__5_value;
static const lean_ctor_object lp_Props2Theories_delabNotMem___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_delabNotMem___closed__5_value),LEAN_SCALAR_PTR_LITERAL(59, 66, 148, 42, 181, 100, 85, 166)}};
static const lean_object* lp_Props2Theories_delabNotMem___closed__6 = (const lean_object*)&lp_Props2Theories_delabNotMem___closed__6_value;
static const lean_string_object lp_Props2Theories_delabNotMem___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "∉"};
static const lean_object* lp_Props2Theories_delabNotMem___closed__7 = (const lean_object*)&lp_Props2Theories_delabNotMem___closed__7_value;
static const lean_string_object lp_Props2Theories_delabNotMem___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 7, .m_data = "term_∉_"};
static const lean_object* lp_Props2Theories_delabNotMem___closed__8 = (const lean_object*)&lp_Props2Theories_delabNotMem___closed__8_value;
static const lean_ctor_object lp_Props2Theories_delabNotMem___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_delabNotMem___closed__8_value),LEAN_SCALAR_PTR_LITERAL(241, 191, 47, 82, 105, 120, 162, 72)}};
static const lean_object* lp_Props2Theories_delabNotMem___closed__9 = (const lean_object*)&lp_Props2Theories_delabNotMem___closed__9_value;
LEAN_EXPORT lean_object* lp_Props2Theories_delabNotMem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories_delabNotMem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Props2Theories_forall__in___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "forall_in"};
static const lean_object* lp_Props2Theories_forall__in___closed__0 = (const lean_object*)&lp_Props2Theories_forall__in___closed__0_value;
static const lean_ctor_object lp_Props2Theories_forall__in___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_forall__in___closed__0_value),LEAN_SCALAR_PTR_LITERAL(118, 4, 135, 221, 11, 246, 171, 92)}};
static const lean_object* lp_Props2Theories_forall__in___closed__1 = (const lean_object*)&lp_Props2Theories_forall__in___closed__1_value;
static const lean_string_object lp_Props2Theories_forall__in___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 2, .m_data = "∀ "};
static const lean_object* lp_Props2Theories_forall__in___closed__2 = (const lean_object*)&lp_Props2Theories_forall__in___closed__2_value;
static const lean_ctor_object lp_Props2Theories_forall__in___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Props2Theories_forall__in___closed__2_value)}};
static const lean_object* lp_Props2Theories_forall__in___closed__3 = (const lean_object*)&lp_Props2Theories_forall__in___closed__3_value;
static const lean_string_object lp_Props2Theories_forall__in___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "many1"};
static const lean_object* lp_Props2Theories_forall__in___closed__4 = (const lean_object*)&lp_Props2Theories_forall__in___closed__4_value;
static const lean_ctor_object lp_Props2Theories_forall__in___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_forall__in___closed__4_value),LEAN_SCALAR_PTR_LITERAL(55, 136, 52, 6, 12, 19, 78, 239)}};
static const lean_object* lp_Props2Theories_forall__in___closed__5 = (const lean_object*)&lp_Props2Theories_forall__in___closed__5_value;
static const lean_ctor_object lp_Props2Theories_forall__in___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______unexpand__belongs__1___closed__1_value)}};
static const lean_object* lp_Props2Theories_forall__in___closed__6 = (const lean_object*)&lp_Props2Theories_forall__in___closed__6_value;
static const lean_ctor_object lp_Props2Theories_forall__in___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories_forall__in___closed__5_value),((lean_object*)&lp_Props2Theories_forall__in___closed__6_value)}};
static const lean_object* lp_Props2Theories_forall__in___closed__7 = (const lean_object*)&lp_Props2Theories_forall__in___closed__7_value;
static const lean_ctor_object lp_Props2Theories_forall__in___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_forall__in___closed__3_value),((lean_object*)&lp_Props2Theories_forall__in___closed__7_value)}};
static const lean_object* lp_Props2Theories_forall__in___closed__8 = (const lean_object*)&lp_Props2Theories_forall__in___closed__8_value;
static const lean_ctor_object lp_Props2Theories_forall__in___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_forall__in___closed__8_value),((lean_object*)&lp_Props2Theories_term___u2208____1___closed__5_value)}};
static const lean_object* lp_Props2Theories_forall__in___closed__9 = (const lean_object*)&lp_Props2Theories_forall__in___closed__9_value;
static const lean_ctor_object lp_Props2Theories_forall__in___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_forall__in___closed__9_value),((lean_object*)&lp_Props2Theories_term___u2209____1___closed__4_value)}};
static const lean_object* lp_Props2Theories_forall__in___closed__10 = (const lean_object*)&lp_Props2Theories_forall__in___closed__10_value;
static const lean_string_object lp_Props2Theories_forall__in___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " , "};
static const lean_object* lp_Props2Theories_forall__in___closed__11 = (const lean_object*)&lp_Props2Theories_forall__in___closed__11_value;
static const lean_ctor_object lp_Props2Theories_forall__in___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Props2Theories_forall__in___closed__11_value)}};
static const lean_object* lp_Props2Theories_forall__in___closed__12 = (const lean_object*)&lp_Props2Theories_forall__in___closed__12_value;
static const lean_ctor_object lp_Props2Theories_forall__in___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_forall__in___closed__10_value),((lean_object*)&lp_Props2Theories_forall__in___closed__12_value)}};
static const lean_object* lp_Props2Theories_forall__in___closed__13 = (const lean_object*)&lp_Props2Theories_forall__in___closed__13_value;
static const lean_ctor_object lp_Props2Theories_forall__in___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_forall__in___closed__13_value),((lean_object*)&lp_Props2Theories_term___u2209____1___closed__4_value)}};
static const lean_object* lp_Props2Theories_forall__in___closed__14 = (const lean_object*)&lp_Props2Theories_forall__in___closed__14_value;
static const lean_ctor_object lp_Props2Theories_forall__in___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Props2Theories_forall__in___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&lp_Props2Theories_forall__in___closed__14_value)}};
static const lean_object* lp_Props2Theories_forall__in___closed__15 = (const lean_object*)&lp_Props2Theories_forall__in___closed__15_value;
LEAN_EXPORT const lean_object* lp_Props2Theories_forall__in = (const lean_object*)&lp_Props2Theories_forall__in___closed__15_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "forall_in_A"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__0 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__0_value;
static lean_once_cell_t lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__1;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(113, 185, 176, 54, 66, 65, 194, 195)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__2 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__2_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__3 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__3_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__4 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__4_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__36_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__5 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__5_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__34_value),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__5_value)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__6 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__6_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__32_value),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__6_value)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__7 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__7_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__29_value),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__7_value)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__8 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__8_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__26_value),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__8_value)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__9 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__9_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__23_value),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__9_value)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__10 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__10_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__21_value),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__10_value)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__11 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__11_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__19_value),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__11_value)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__12 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__12_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__15_value),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__12_value)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__13 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__13_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__12_value),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__13_value)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__14 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__14_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "fun"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__15 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__15_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__16_value_aux_0),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__16_value_aux_1),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__16_value_aux_2),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__15_value),LEAN_SCALAR_PTR_LITERAL(249, 155, 133, 242, 71, 132, 191, 97)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__16 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__16_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "basicFun"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__17 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__17_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__18_value_aux_0),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__18_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__18_value_aux_1),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__18_value_aux_2),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__17_value),LEAN_SCALAR_PTR_LITERAL(209, 134, 40, 160, 122, 195, 31, 223)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__18 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__18_value;
static lean_once_cell_t lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "=>"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__20 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__20_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "∀"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__21 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__21_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "∈"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__22 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__22_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__23 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__23_value;
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Props2Theories_exists__in___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "exists_in"};
static const lean_object* lp_Props2Theories_exists__in___closed__0 = (const lean_object*)&lp_Props2Theories_exists__in___closed__0_value;
static const lean_ctor_object lp_Props2Theories_exists__in___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_exists__in___closed__0_value),LEAN_SCALAR_PTR_LITERAL(150, 201, 42, 84, 47, 214, 155, 117)}};
static const lean_object* lp_Props2Theories_exists__in___closed__1 = (const lean_object*)&lp_Props2Theories_exists__in___closed__1_value;
static const lean_string_object lp_Props2Theories_exists__in___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 2, .m_data = "∃ "};
static const lean_object* lp_Props2Theories_exists__in___closed__2 = (const lean_object*)&lp_Props2Theories_exists__in___closed__2_value;
static const lean_ctor_object lp_Props2Theories_exists__in___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Props2Theories_exists__in___closed__2_value)}};
static const lean_object* lp_Props2Theories_exists__in___closed__3 = (const lean_object*)&lp_Props2Theories_exists__in___closed__3_value;
static const lean_ctor_object lp_Props2Theories_exists__in___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_exists__in___closed__3_value),((lean_object*)&lp_Props2Theories_forall__in___closed__7_value)}};
static const lean_object* lp_Props2Theories_exists__in___closed__4 = (const lean_object*)&lp_Props2Theories_exists__in___closed__4_value;
static const lean_ctor_object lp_Props2Theories_exists__in___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_exists__in___closed__4_value),((lean_object*)&lp_Props2Theories_term___u2208____1___closed__5_value)}};
static const lean_object* lp_Props2Theories_exists__in___closed__5 = (const lean_object*)&lp_Props2Theories_exists__in___closed__5_value;
static const lean_ctor_object lp_Props2Theories_exists__in___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_exists__in___closed__5_value),((lean_object*)&lp_Props2Theories_term___u2209____1___closed__4_value)}};
static const lean_object* lp_Props2Theories_exists__in___closed__6 = (const lean_object*)&lp_Props2Theories_exists__in___closed__6_value;
static const lean_ctor_object lp_Props2Theories_exists__in___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_exists__in___closed__6_value),((lean_object*)&lp_Props2Theories_forall__in___closed__12_value)}};
static const lean_object* lp_Props2Theories_exists__in___closed__7 = (const lean_object*)&lp_Props2Theories_exists__in___closed__7_value;
static const lean_ctor_object lp_Props2Theories_exists__in___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_exists__in___closed__7_value),((lean_object*)&lp_Props2Theories_term___u2209____1___closed__4_value)}};
static const lean_object* lp_Props2Theories_exists__in___closed__8 = (const lean_object*)&lp_Props2Theories_exists__in___closed__8_value;
static const lean_ctor_object lp_Props2Theories_exists__in___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Props2Theories_exists__in___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&lp_Props2Theories_exists__in___closed__8_value)}};
static const lean_object* lp_Props2Theories_exists__in___closed__9 = (const lean_object*)&lp_Props2Theories_exists__in___closed__9_value;
LEAN_EXPORT const lean_object* lp_Props2Theories_exists__in = (const lean_object*)&lp_Props2Theories_exists__in___closed__9_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__in__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "exists_in_A"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__in__1___closed__0 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__in__1___closed__0_value;
static lean_once_cell_t lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__in__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__in__1___closed__1;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__in__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__in__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(211, 33, 37, 84, 10, 129, 155, 251)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__in__1___closed__2 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__in__1___closed__2_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__in__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__in__1___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__in__1___closed__3 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__in__1___closed__3_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__in__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__in__1___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__in__1___closed__4 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__in__1___closed__4_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__in__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "∃"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__in__1___closed__5 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__in__1___closed__5_value;
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__in__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__in__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Props2Theories_exists__uniq__in___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "exists_uniq_in"};
static const lean_object* lp_Props2Theories_exists__uniq__in___closed__0 = (const lean_object*)&lp_Props2Theories_exists__uniq__in___closed__0_value;
static const lean_ctor_object lp_Props2Theories_exists__uniq__in___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_exists__uniq__in___closed__0_value),LEAN_SCALAR_PTR_LITERAL(67, 233, 202, 237, 137, 16, 52, 29)}};
static const lean_object* lp_Props2Theories_exists__uniq__in___closed__1 = (const lean_object*)&lp_Props2Theories_exists__uniq__in___closed__1_value;
static const lean_string_object lp_Props2Theories_exists__uniq__in___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 3, .m_data = "∃! "};
static const lean_object* lp_Props2Theories_exists__uniq__in___closed__2 = (const lean_object*)&lp_Props2Theories_exists__uniq__in___closed__2_value;
static const lean_ctor_object lp_Props2Theories_exists__uniq__in___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Props2Theories_exists__uniq__in___closed__2_value)}};
static const lean_object* lp_Props2Theories_exists__uniq__in___closed__3 = (const lean_object*)&lp_Props2Theories_exists__uniq__in___closed__3_value;
static const lean_ctor_object lp_Props2Theories_exists__uniq__in___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_exists__uniq__in___closed__3_value),((lean_object*)&lp_Props2Theories_forall__in___closed__7_value)}};
static const lean_object* lp_Props2Theories_exists__uniq__in___closed__4 = (const lean_object*)&lp_Props2Theories_exists__uniq__in___closed__4_value;
static const lean_ctor_object lp_Props2Theories_exists__uniq__in___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_exists__uniq__in___closed__4_value),((lean_object*)&lp_Props2Theories_term___u2208____1___closed__5_value)}};
static const lean_object* lp_Props2Theories_exists__uniq__in___closed__5 = (const lean_object*)&lp_Props2Theories_exists__uniq__in___closed__5_value;
static const lean_ctor_object lp_Props2Theories_exists__uniq__in___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_exists__uniq__in___closed__5_value),((lean_object*)&lp_Props2Theories_term___u2209____1___closed__4_value)}};
static const lean_object* lp_Props2Theories_exists__uniq__in___closed__6 = (const lean_object*)&lp_Props2Theories_exists__uniq__in___closed__6_value;
static const lean_ctor_object lp_Props2Theories_exists__uniq__in___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_exists__uniq__in___closed__6_value),((lean_object*)&lp_Props2Theories_forall__in___closed__12_value)}};
static const lean_object* lp_Props2Theories_exists__uniq__in___closed__7 = (const lean_object*)&lp_Props2Theories_exists__uniq__in___closed__7_value;
static const lean_ctor_object lp_Props2Theories_exists__uniq__in___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_exists__uniq__in___closed__7_value),((lean_object*)&lp_Props2Theories_term___u2209____1___closed__4_value)}};
static const lean_object* lp_Props2Theories_exists__uniq__in___closed__8 = (const lean_object*)&lp_Props2Theories_exists__uniq__in___closed__8_value;
static const lean_ctor_object lp_Props2Theories_exists__uniq__in___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Props2Theories_exists__uniq__in___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&lp_Props2Theories_exists__uniq__in___closed__8_value)}};
static const lean_object* lp_Props2Theories_exists__uniq__in___closed__9 = (const lean_object*)&lp_Props2Theories_exists__uniq__in___closed__9_value;
LEAN_EXPORT const lean_object* lp_Props2Theories_exists__uniq__in = (const lean_object*)&lp_Props2Theories_exists__uniq__in___closed__9_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__uniq__in__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "exists_uniq_in_A"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__uniq__in__1___closed__0 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__uniq__in__1___closed__0_value;
static lean_once_cell_t lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__uniq__in__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__uniq__in__1___closed__1;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__uniq__in__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__uniq__in__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(213, 24, 143, 249, 11, 95, 141, 234)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__uniq__in__1___closed__2 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__uniq__in__1___closed__2_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__uniq__in__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__uniq__in__1___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__uniq__in__1___closed__3 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__uniq__in__1___closed__3_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__uniq__in__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__uniq__in__1___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__uniq__in__1___closed__4 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__uniq__in__1___closed__4_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__uniq__in__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 2, .m_data = "∃!"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__uniq__in__1___closed__5 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__uniq__in__1___closed__5_value;
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__uniq__in__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__uniq__in__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories_unexpandForallInA(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories_unexpandForallInA___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories_unexpandExistsInA(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories_unexpandExistsInA___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories_unexpandExistsUniqInA(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories_unexpandExistsUniqInA___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "tacticSpecialize_in_,_"};
static const lean_object* lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__0 = (const lean_object*)&lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__0_value;
static const lean_ctor_object lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(80, 253, 131, 38, 74, 104, 171, 23)}};
static const lean_object* lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__1 = (const lean_object*)&lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__1_value;
static const lean_string_object lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "specialize_in"};
static const lean_object* lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__2 = (const lean_object*)&lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__2_value;
static const lean_ctor_object lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__3 = (const lean_object*)&lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__3_value;
static const lean_ctor_object lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__3_value),((lean_object*)&lp_Props2Theories_forall__in___closed__6_value)}};
static const lean_object* lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__4 = (const lean_object*)&lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__4_value;
static const lean_ctor_object lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__23_value)}};
static const lean_object* lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__5 = (const lean_object*)&lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__5_value;
static const lean_ctor_object lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__4_value),((lean_object*)&lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__5_value)}};
static const lean_object* lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__6 = (const lean_object*)&lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__6_value;
static const lean_ctor_object lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__6_value),((lean_object*)&lp_Props2Theories_term___u2209____1___closed__4_value)}};
static const lean_object* lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__7 = (const lean_object*)&lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__7_value;
static const lean_ctor_object lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__7_value)}};
static const lean_object* lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__8 = (const lean_object*)&lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__8_value;
LEAN_EXPORT const lean_object* lp_Props2Theories_tacticSpecialize__in___x2c__ = (const lean_object*)&lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__8_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "seq1"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__0 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__0_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__1_value_aux_0),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__1_value_aux_1),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__27_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__1_value_aux_2),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(242, 140, 137, 56, 141, 11, 143, 117)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__1 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__1_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "specialize"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__2 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__2_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__3_value_aux_0),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__3_value_aux_1),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__27_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__3_value_aux_2),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(176, 64, 50, 7, 167, 240, 212, 2)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__3 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__3_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ";"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__4 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__4_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "tacticTry_"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__5 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__5_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__6_value_aux_0),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__6_value_aux_1),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__27_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__6_value_aux_2),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(34, 109, 187, 155, 23, 130, 33, 152)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__6 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__6_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "try"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__7 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__7_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__8 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__8_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__9_value_aux_0),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__9_value_aux_1),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__27_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__9_value_aux_2),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__9 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__9_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__10 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__10_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__11_value_aux_0),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__11_value_aux_1),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__27_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__11_value_aux_2),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__11 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__11_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "dsimp"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__12 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__12_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__13_value_aux_0),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__13_value_aux_1),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__27_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__13_value_aux_2),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__12_value),LEAN_SCALAR_PTR_LITERAL(246, 53, 215, 155, 171, 182, 123, 76)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__13 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__13_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "optConfig"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__14 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__14_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__15_value_aux_0),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__15_value_aux_1),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__27_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__15_value_aux_2),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(137, 208, 10, 74, 108, 50, 106, 48)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__15 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__15_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "configItem"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__16 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__16_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__17_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__17_value_aux_0),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__17_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__17_value_aux_1),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__27_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__17_value_aux_2),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__16_value),LEAN_SCALAR_PTR_LITERAL(205, 9, 236, 192, 59, 252, 178, 140)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__17 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__17_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "valConfigItem"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__18 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__18_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__19_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__19_value_aux_0),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__19_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__19_value_aux_1),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__27_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__19_value_aux_2),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__18_value),LEAN_SCALAR_PTR_LITERAL(135, 67, 19, 169, 17, 95, 109, 188)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__19 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__19_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "config"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__20 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__20_value;
static lean_once_cell_t lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__21;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__20_value),LEAN_SCALAR_PTR_LITERAL(207, 146, 87, 28, 198, 178, 209, 199)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__22 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__22_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__23 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__23_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "structInst"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__24 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__24_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__25_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__25_value_aux_0),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__25_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__25_value_aux_1),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__25_value_aux_2),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__24_value),LEAN_SCALAR_PTR_LITERAL(50, 43, 73, 62, 118, 124, 31, 28)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__25 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__25_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "{"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__26 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__26_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "structInstFields"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__27 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__27_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__28_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__28_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__28_value_aux_0),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__28_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__28_value_aux_1),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__28_value_aux_2),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__27_value),LEAN_SCALAR_PTR_LITERAL(0, 82, 141, 43, 62, 171, 163, 69)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__28 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__28_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "structInstField"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__29 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__29_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__30_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__30_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__30_value_aux_0),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__30_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__30_value_aux_1),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__30_value_aux_2),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__29_value),LEAN_SCALAR_PTR_LITERAL(50, 77, 20, 88, 28, 210, 230, 84)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__30 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__30_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "structInstLVal"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__31 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__31_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__32_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__32_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__32_value_aux_0),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__32_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__32_value_aux_1),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__32_value_aux_2),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__31_value),LEAN_SCALAR_PTR_LITERAL(185, 133, 6, 147, 6, 183, 100, 198)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__32 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__32_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "beta"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__33 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__33_value;
static lean_once_cell_t lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__34;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__33_value),LEAN_SCALAR_PTR_LITERAL(24, 237, 53, 228, 120, 172, 152, 173)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__35 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__35_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "structInstFieldDef"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__36 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__36_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__37_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__37_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__37_value_aux_0),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__37_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__37_value_aux_1),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__37_value_aux_2),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__36_value),LEAN_SCALAR_PTR_LITERAL(81, 102, 39, 227, 176, 252, 65, 103)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__37 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__37_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__38 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__38_value;
static lean_once_cell_t lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__39;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__38_value),LEAN_SCALAR_PTR_LITERAL(235, 97, 249, 134, 197, 220, 12, 91)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__40 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__40_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__41 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__41_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__42_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__41_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__42_value_aux_0),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__38_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__42 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__42_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__42_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__43 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__43_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__43_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__44 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__44_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "zeta"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__45 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__45_value;
static lean_once_cell_t lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__46_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__46;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__45_value),LEAN_SCALAR_PTR_LITERAL(56, 247, 87, 81, 188, 35, 250, 148)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__47 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__47_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__48 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__48_value;
static lean_once_cell_t lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__49_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__49;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__48_value),LEAN_SCALAR_PTR_LITERAL(160, 214, 196, 140, 104, 187, 164, 111)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__50 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__50_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__51_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__41_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__51_value_aux_0),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__48_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__51 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__51_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__51_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__52 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__52_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__52_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__53 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__53_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "iota"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__54 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__54_value;
static lean_once_cell_t lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__55_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__55;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__54_value),LEAN_SCALAR_PTR_LITERAL(159, 132, 209, 226, 73, 6, 144, 100)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__56 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__56_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "optEllipsis"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__57 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__57_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__58_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__58_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__58_value_aux_0),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__58_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__58_value_aux_1),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__58_value_aux_2),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__57_value),LEAN_SCALAR_PTR_LITERAL(13, 1, 242, 203, 207, 188, 181, 160)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__58 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__58_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "}"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__59 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__59_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "location"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__60 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__60_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__61_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__61_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__61_value_aux_0),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__61_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__61_value_aux_1),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__27_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__61_value_aux_2),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__60_value),LEAN_SCALAR_PTR_LITERAL(124, 82, 43, 228, 241, 102, 135, 24)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__61 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__61_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "at"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__62 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__62_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "locationHyp"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__63 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__63_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__64_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__64_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__64_value_aux_0),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__64_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__64_value_aux_1),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__27_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__64_value_aux_2),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__63_value),LEAN_SCALAR_PTR_LITERAL(229, 146, 67, 234, 45, 36, 143, 176)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__64 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__64_value;
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Props2Theories_tacticSpecialize__in_____x2c___x2c___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "tacticSpecialize_in__,_,_"};
static const lean_object* lp_Props2Theories_tacticSpecialize__in_____x2c___x2c___00__closed__0 = (const lean_object*)&lp_Props2Theories_tacticSpecialize__in_____x2c___x2c___00__closed__0_value;
static const lean_ctor_object lp_Props2Theories_tacticSpecialize__in_____x2c___x2c___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_tacticSpecialize__in_____x2c___x2c___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 150, 23, 29, 72, 49, 26, 221)}};
static const lean_object* lp_Props2Theories_tacticSpecialize__in_____x2c___x2c___00__closed__1 = (const lean_object*)&lp_Props2Theories_tacticSpecialize__in_____x2c___x2c___00__closed__1_value;
static const lean_string_object lp_Props2Theories_tacticSpecialize__in_____x2c___x2c___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "specialize_in_"};
static const lean_object* lp_Props2Theories_tacticSpecialize__in_____x2c___x2c___00__closed__2 = (const lean_object*)&lp_Props2Theories_tacticSpecialize__in_____x2c___x2c___00__closed__2_value;
static const lean_ctor_object lp_Props2Theories_tacticSpecialize__in_____x2c___x2c___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&lp_Props2Theories_tacticSpecialize__in_____x2c___x2c___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Props2Theories_tacticSpecialize__in_____x2c___x2c___00__closed__3 = (const lean_object*)&lp_Props2Theories_tacticSpecialize__in_____x2c___x2c___00__closed__3_value;
static const lean_ctor_object lp_Props2Theories_tacticSpecialize__in_____x2c___x2c___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tacticSpecialize__in_____x2c___x2c___00__closed__3_value),((lean_object*)&lp_Props2Theories_forall__in___closed__6_value)}};
static const lean_object* lp_Props2Theories_tacticSpecialize__in_____x2c___x2c___00__closed__4 = (const lean_object*)&lp_Props2Theories_tacticSpecialize__in_____x2c___x2c___00__closed__4_value;
static const lean_ctor_object lp_Props2Theories_tacticSpecialize__in_____x2c___x2c___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tacticSpecialize__in_____x2c___x2c___00__closed__4_value),((lean_object*)&lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__5_value)}};
static const lean_object* lp_Props2Theories_tacticSpecialize__in_____x2c___x2c___00__closed__5 = (const lean_object*)&lp_Props2Theories_tacticSpecialize__in_____x2c___x2c___00__closed__5_value;
static const lean_ctor_object lp_Props2Theories_tacticSpecialize__in_____x2c___x2c___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tacticSpecialize__in_____x2c___x2c___00__closed__5_value),((lean_object*)&lp_Props2Theories_term___u2209____1___closed__4_value)}};
static const lean_object* lp_Props2Theories_tacticSpecialize__in_____x2c___x2c___00__closed__6 = (const lean_object*)&lp_Props2Theories_tacticSpecialize__in_____x2c___x2c___00__closed__6_value;
static const lean_ctor_object lp_Props2Theories_tacticSpecialize__in_____x2c___x2c___00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tacticSpecialize__in_____x2c___x2c___00__closed__6_value),((lean_object*)&lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__5_value)}};
static const lean_object* lp_Props2Theories_tacticSpecialize__in_____x2c___x2c___00__closed__7 = (const lean_object*)&lp_Props2Theories_tacticSpecialize__in_____x2c___x2c___00__closed__7_value;
static const lean_ctor_object lp_Props2Theories_tacticSpecialize__in_____x2c___x2c___00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tacticSpecialize__in_____x2c___x2c___00__closed__7_value),((lean_object*)&lp_Props2Theories_term___u2209____1___closed__4_value)}};
static const lean_object* lp_Props2Theories_tacticSpecialize__in_____x2c___x2c___00__closed__8 = (const lean_object*)&lp_Props2Theories_tacticSpecialize__in_____x2c___x2c___00__closed__8_value;
static const lean_ctor_object lp_Props2Theories_tacticSpecialize__in_____x2c___x2c___00__closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Props2Theories_tacticSpecialize__in_____x2c___x2c___00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&lp_Props2Theories_tacticSpecialize__in_____x2c___x2c___00__closed__8_value)}};
static const lean_object* lp_Props2Theories_tacticSpecialize__in_____x2c___x2c___00__closed__9 = (const lean_object*)&lp_Props2Theories_tacticSpecialize__in_____x2c___x2c___00__closed__9_value;
LEAN_EXPORT const lean_object* lp_Props2Theories_tacticSpecialize__in_____x2c___x2c__ = (const lean_object*)&lp_Props2Theories_tacticSpecialize__in_____x2c___x2c___00__closed__9_value;
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in_____x2c___x2c____1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in_____x2c___x2c____1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Props2Theories_tacticIntro__in___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "tacticIntro_in_"};
static const lean_object* lp_Props2Theories_tacticIntro__in___00__closed__0 = (const lean_object*)&lp_Props2Theories_tacticIntro__in___00__closed__0_value;
static const lean_ctor_object lp_Props2Theories_tacticIntro__in___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_tacticIntro__in___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(82, 89, 149, 63, 219, 105, 78, 228)}};
static const lean_object* lp_Props2Theories_tacticIntro__in___00__closed__1 = (const lean_object*)&lp_Props2Theories_tacticIntro__in___00__closed__1_value;
static const lean_string_object lp_Props2Theories_tacticIntro__in___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "intro_in"};
static const lean_object* lp_Props2Theories_tacticIntro__in___00__closed__2 = (const lean_object*)&lp_Props2Theories_tacticIntro__in___00__closed__2_value;
static const lean_ctor_object lp_Props2Theories_tacticIntro__in___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&lp_Props2Theories_tacticIntro__in___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Props2Theories_tacticIntro__in___00__closed__3 = (const lean_object*)&lp_Props2Theories_tacticIntro__in___00__closed__3_value;
static const lean_ctor_object lp_Props2Theories_tacticIntro__in___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tacticIntro__in___00__closed__3_value),((lean_object*)&lp_Props2Theories_forall__in___closed__6_value)}};
static const lean_object* lp_Props2Theories_tacticIntro__in___00__closed__4 = (const lean_object*)&lp_Props2Theories_tacticIntro__in___00__closed__4_value;
static const lean_ctor_object lp_Props2Theories_tacticIntro__in___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Props2Theories_tacticIntro__in___00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&lp_Props2Theories_tacticIntro__in___00__closed__4_value)}};
static const lean_object* lp_Props2Theories_tacticIntro__in___00__closed__5 = (const lean_object*)&lp_Props2Theories_tacticIntro__in___00__closed__5_value;
LEAN_EXPORT const lean_object* lp_Props2Theories_tacticIntro__in__ = (const lean_object*)&lp_Props2Theories_tacticIntro__in___00__closed__5_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__in____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "intro"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__in____1___closed__0 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__in____1___closed__0_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__in____1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__in____1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__in____1___closed__1_value_aux_0),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__in____1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__in____1___closed__1_value_aux_1),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__27_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__in____1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__in____1___closed__1_value_aux_2),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__in____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(41, 145, 9, 18, 75, 146, 159, 78)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__in____1___closed__1 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__in____1___closed__1_value;
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__in____1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__in____1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Props2Theories_tacticIntro__in_____x2c___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticIntro_in__,_"};
static const lean_object* lp_Props2Theories_tacticIntro__in_____x2c___00__closed__0 = (const lean_object*)&lp_Props2Theories_tacticIntro__in_____x2c___00__closed__0_value;
static const lean_ctor_object lp_Props2Theories_tacticIntro__in_____x2c___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_tacticIntro__in_____x2c___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(91, 84, 60, 90, 107, 147, 187, 160)}};
static const lean_object* lp_Props2Theories_tacticIntro__in_____x2c___00__closed__1 = (const lean_object*)&lp_Props2Theories_tacticIntro__in_____x2c___00__closed__1_value;
static const lean_string_object lp_Props2Theories_tacticIntro__in_____x2c___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "intro_in_"};
static const lean_object* lp_Props2Theories_tacticIntro__in_____x2c___00__closed__2 = (const lean_object*)&lp_Props2Theories_tacticIntro__in_____x2c___00__closed__2_value;
static const lean_ctor_object lp_Props2Theories_tacticIntro__in_____x2c___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&lp_Props2Theories_tacticIntro__in_____x2c___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Props2Theories_tacticIntro__in_____x2c___00__closed__3 = (const lean_object*)&lp_Props2Theories_tacticIntro__in_____x2c___00__closed__3_value;
static const lean_ctor_object lp_Props2Theories_tacticIntro__in_____x2c___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tacticIntro__in_____x2c___00__closed__3_value),((lean_object*)&lp_Props2Theories_forall__in___closed__6_value)}};
static const lean_object* lp_Props2Theories_tacticIntro__in_____x2c___00__closed__4 = (const lean_object*)&lp_Props2Theories_tacticIntro__in_____x2c___00__closed__4_value;
static const lean_ctor_object lp_Props2Theories_tacticIntro__in_____x2c___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tacticIntro__in_____x2c___00__closed__4_value),((lean_object*)&lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__5_value)}};
static const lean_object* lp_Props2Theories_tacticIntro__in_____x2c___00__closed__5 = (const lean_object*)&lp_Props2Theories_tacticIntro__in_____x2c___00__closed__5_value;
static const lean_ctor_object lp_Props2Theories_tacticIntro__in_____x2c___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tacticIntro__in_____x2c___00__closed__5_value),((lean_object*)&lp_Props2Theories_forall__in___closed__6_value)}};
static const lean_object* lp_Props2Theories_tacticIntro__in_____x2c___00__closed__6 = (const lean_object*)&lp_Props2Theories_tacticIntro__in_____x2c___00__closed__6_value;
static const lean_ctor_object lp_Props2Theories_tacticIntro__in_____x2c___00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Props2Theories_tacticIntro__in_____x2c___00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&lp_Props2Theories_tacticIntro__in_____x2c___00__closed__6_value)}};
static const lean_object* lp_Props2Theories_tacticIntro__in_____x2c___00__closed__7 = (const lean_object*)&lp_Props2Theories_tacticIntro__in_____x2c___00__closed__7_value;
LEAN_EXPORT const lean_object* lp_Props2Theories_tacticIntro__in_____x2c__ = (const lean_object*)&lp_Props2Theories_tacticIntro__in_____x2c___00__closed__7_value;
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__in_____x2c____1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__in_____x2c____1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Props2Theories_tacticIntro__exists__in___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "tacticIntro_exists_in_"};
static const lean_object* lp_Props2Theories_tacticIntro__exists__in___00__closed__0 = (const lean_object*)&lp_Props2Theories_tacticIntro__exists__in___00__closed__0_value;
static const lean_ctor_object lp_Props2Theories_tacticIntro__exists__in___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_tacticIntro__exists__in___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(39, 159, 75, 244, 80, 175, 115, 133)}};
static const lean_object* lp_Props2Theories_tacticIntro__exists__in___00__closed__1 = (const lean_object*)&lp_Props2Theories_tacticIntro__exists__in___00__closed__1_value;
static const lean_string_object lp_Props2Theories_tacticIntro__exists__in___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "intro_exists_in"};
static const lean_object* lp_Props2Theories_tacticIntro__exists__in___00__closed__2 = (const lean_object*)&lp_Props2Theories_tacticIntro__exists__in___00__closed__2_value;
static const lean_ctor_object lp_Props2Theories_tacticIntro__exists__in___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&lp_Props2Theories_tacticIntro__exists__in___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Props2Theories_tacticIntro__exists__in___00__closed__3 = (const lean_object*)&lp_Props2Theories_tacticIntro__exists__in___00__closed__3_value;
static const lean_ctor_object lp_Props2Theories_tacticIntro__exists__in___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tacticIntro__exists__in___00__closed__3_value),((lean_object*)&lp_Props2Theories_term___u2209____1___closed__4_value)}};
static const lean_object* lp_Props2Theories_tacticIntro__exists__in___00__closed__4 = (const lean_object*)&lp_Props2Theories_tacticIntro__exists__in___00__closed__4_value;
static const lean_ctor_object lp_Props2Theories_tacticIntro__exists__in___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Props2Theories_tacticIntro__exists__in___00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&lp_Props2Theories_tacticIntro__exists__in___00__closed__4_value)}};
static const lean_object* lp_Props2Theories_tacticIntro__exists__in___00__closed__5 = (const lean_object*)&lp_Props2Theories_tacticIntro__exists__in___00__closed__5_value;
LEAN_EXPORT const lean_object* lp_Props2Theories_tacticIntro__exists__in__ = (const lean_object*)&lp_Props2Theories_tacticIntro__exists__in___00__closed__5_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Props2Theories"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__0 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__0_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "tacticIntro_exists_"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__1 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__1_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(203, 60, 219, 252, 222, 124, 42, 218)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__2_value_aux_0),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(197, 43, 218, 154, 108, 235, 180, 197)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__2 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__2_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "intro_exists"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__3 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__3_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__4_value_aux_0),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__4_value_aux_1),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__27_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__4_value_aux_2),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(117, 253, 122, 28, 77, 248, 149, 120)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__4 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__4_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "tacticIntro_and"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__5 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__5_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(203, 60, 219, 252, 222, 124, 42, 218)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__6_value_aux_0),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(108, 71, 43, 220, 161, 220, 85, 55)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__6 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__6_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "intro_and"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__7 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__7_value;
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Props2Theories_tacticIntro__exists__in_____x2c___x2c___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "tacticIntro_exists_in__,_,_"};
static const lean_object* lp_Props2Theories_tacticIntro__exists__in_____x2c___x2c___00__closed__0 = (const lean_object*)&lp_Props2Theories_tacticIntro__exists__in_____x2c___x2c___00__closed__0_value;
static const lean_ctor_object lp_Props2Theories_tacticIntro__exists__in_____x2c___x2c___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_tacticIntro__exists__in_____x2c___x2c___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(167, 73, 229, 135, 13, 7, 154, 172)}};
static const lean_object* lp_Props2Theories_tacticIntro__exists__in_____x2c___x2c___00__closed__1 = (const lean_object*)&lp_Props2Theories_tacticIntro__exists__in_____x2c___x2c___00__closed__1_value;
static const lean_string_object lp_Props2Theories_tacticIntro__exists__in_____x2c___x2c___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "intro_exists_in_"};
static const lean_object* lp_Props2Theories_tacticIntro__exists__in_____x2c___x2c___00__closed__2 = (const lean_object*)&lp_Props2Theories_tacticIntro__exists__in_____x2c___x2c___00__closed__2_value;
static const lean_ctor_object lp_Props2Theories_tacticIntro__exists__in_____x2c___x2c___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&lp_Props2Theories_tacticIntro__exists__in_____x2c___x2c___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Props2Theories_tacticIntro__exists__in_____x2c___x2c___00__closed__3 = (const lean_object*)&lp_Props2Theories_tacticIntro__exists__in_____x2c___x2c___00__closed__3_value;
static const lean_ctor_object lp_Props2Theories_tacticIntro__exists__in_____x2c___x2c___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tacticIntro__exists__in_____x2c___x2c___00__closed__3_value),((lean_object*)&lp_Props2Theories_term___u2209____1___closed__4_value)}};
static const lean_object* lp_Props2Theories_tacticIntro__exists__in_____x2c___x2c___00__closed__4 = (const lean_object*)&lp_Props2Theories_tacticIntro__exists__in_____x2c___x2c___00__closed__4_value;
static const lean_ctor_object lp_Props2Theories_tacticIntro__exists__in_____x2c___x2c___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tacticIntro__exists__in_____x2c___x2c___00__closed__4_value),((lean_object*)&lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__5_value)}};
static const lean_object* lp_Props2Theories_tacticIntro__exists__in_____x2c___x2c___00__closed__5 = (const lean_object*)&lp_Props2Theories_tacticIntro__exists__in_____x2c___x2c___00__closed__5_value;
static const lean_ctor_object lp_Props2Theories_tacticIntro__exists__in_____x2c___x2c___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tacticIntro__exists__in_____x2c___x2c___00__closed__5_value),((lean_object*)&lp_Props2Theories_term___u2209____1___closed__4_value)}};
static const lean_object* lp_Props2Theories_tacticIntro__exists__in_____x2c___x2c___00__closed__6 = (const lean_object*)&lp_Props2Theories_tacticIntro__exists__in_____x2c___x2c___00__closed__6_value;
static const lean_ctor_object lp_Props2Theories_tacticIntro__exists__in_____x2c___x2c___00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tacticIntro__exists__in_____x2c___x2c___00__closed__6_value),((lean_object*)&lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__5_value)}};
static const lean_object* lp_Props2Theories_tacticIntro__exists__in_____x2c___x2c___00__closed__7 = (const lean_object*)&lp_Props2Theories_tacticIntro__exists__in_____x2c___x2c___00__closed__7_value;
static const lean_ctor_object lp_Props2Theories_tacticIntro__exists__in_____x2c___x2c___00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tacticIntro__exists__in_____x2c___x2c___00__closed__7_value),((lean_object*)&lp_Props2Theories_term___u2209____1___closed__4_value)}};
static const lean_object* lp_Props2Theories_tacticIntro__exists__in_____x2c___x2c___00__closed__8 = (const lean_object*)&lp_Props2Theories_tacticIntro__exists__in_____x2c___x2c___00__closed__8_value;
static const lean_ctor_object lp_Props2Theories_tacticIntro__exists__in_____x2c___x2c___00__closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Props2Theories_tacticIntro__exists__in_____x2c___x2c___00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&lp_Props2Theories_tacticIntro__exists__in_____x2c___x2c___00__closed__8_value)}};
static const lean_object* lp_Props2Theories_tacticIntro__exists__in_____x2c___x2c___00__closed__9 = (const lean_object*)&lp_Props2Theories_tacticIntro__exists__in_____x2c___x2c___00__closed__9_value;
LEAN_EXPORT const lean_object* lp_Props2Theories_tacticIntro__exists__in_____x2c___x2c__ = (const lean_object*)&lp_Props2Theories_tacticIntro__exists__in_____x2c___x2c___00__closed__9_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in_____x2c___x2c____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "exact"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in_____x2c___x2c____1___closed__0 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in_____x2c___x2c____1___closed__0_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in_____x2c___x2c____1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in_____x2c___x2c____1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in_____x2c___x2c____1___closed__1_value_aux_0),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in_____x2c___x2c____1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in_____x2c___x2c____1___closed__1_value_aux_1),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__27_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in_____x2c___x2c____1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in_____x2c___x2c____1___closed__1_value_aux_2),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in_____x2c___x2c____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(108, 106, 111, 83, 219, 207, 32, 208)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in_____x2c___x2c____1___closed__1 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in_____x2c___x2c____1___closed__1_value;
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in_____x2c___x2c____1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in_____x2c___x2c____1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Props2Theories_tactic__intro__exists__in___x2c___x2c___x2c___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "tactic_intro_exists_in_,_,_,_"};
static const lean_object* lp_Props2Theories_tactic__intro__exists__in___x2c___x2c___x2c___00__closed__0 = (const lean_object*)&lp_Props2Theories_tactic__intro__exists__in___x2c___x2c___x2c___00__closed__0_value;
static const lean_ctor_object lp_Props2Theories_tactic__intro__exists__in___x2c___x2c___x2c___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_tactic__intro__exists__in___x2c___x2c___x2c___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(16, 244, 149, 184, 86, 82, 162, 94)}};
static const lean_object* lp_Props2Theories_tactic__intro__exists__in___x2c___x2c___x2c___00__closed__1 = (const lean_object*)&lp_Props2Theories_tactic__intro__exists__in___x2c___x2c___x2c___00__closed__1_value;
static const lean_string_object lp_Props2Theories_tactic__intro__exists__in___x2c___x2c___x2c___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "_intro_exists_in"};
static const lean_object* lp_Props2Theories_tactic__intro__exists__in___x2c___x2c___x2c___00__closed__2 = (const lean_object*)&lp_Props2Theories_tactic__intro__exists__in___x2c___x2c___x2c___00__closed__2_value;
static const lean_ctor_object lp_Props2Theories_tactic__intro__exists__in___x2c___x2c___x2c___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&lp_Props2Theories_tactic__intro__exists__in___x2c___x2c___x2c___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Props2Theories_tactic__intro__exists__in___x2c___x2c___x2c___00__closed__3 = (const lean_object*)&lp_Props2Theories_tactic__intro__exists__in___x2c___x2c___x2c___00__closed__3_value;
static const lean_ctor_object lp_Props2Theories_tactic__intro__exists__in___x2c___x2c___x2c___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tactic__intro__exists__in___x2c___x2c___x2c___00__closed__3_value),((lean_object*)&lp_Props2Theories_term___u2209____1___closed__4_value)}};
static const lean_object* lp_Props2Theories_tactic__intro__exists__in___x2c___x2c___x2c___00__closed__4 = (const lean_object*)&lp_Props2Theories_tactic__intro__exists__in___x2c___x2c___x2c___00__closed__4_value;
static const lean_ctor_object lp_Props2Theories_tactic__intro__exists__in___x2c___x2c___x2c___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tactic__intro__exists__in___x2c___x2c___x2c___00__closed__4_value),((lean_object*)&lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__5_value)}};
static const lean_object* lp_Props2Theories_tactic__intro__exists__in___x2c___x2c___x2c___00__closed__5 = (const lean_object*)&lp_Props2Theories_tactic__intro__exists__in___x2c___x2c___x2c___00__closed__5_value;
static const lean_ctor_object lp_Props2Theories_tactic__intro__exists__in___x2c___x2c___x2c___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tactic__intro__exists__in___x2c___x2c___x2c___00__closed__5_value),((lean_object*)&lp_Props2Theories_term___u2209____1___closed__4_value)}};
static const lean_object* lp_Props2Theories_tactic__intro__exists__in___x2c___x2c___x2c___00__closed__6 = (const lean_object*)&lp_Props2Theories_tactic__intro__exists__in___x2c___x2c___x2c___00__closed__6_value;
static const lean_ctor_object lp_Props2Theories_tactic__intro__exists__in___x2c___x2c___x2c___00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tactic__intro__exists__in___x2c___x2c___x2c___00__closed__6_value),((lean_object*)&lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__5_value)}};
static const lean_object* lp_Props2Theories_tactic__intro__exists__in___x2c___x2c___x2c___00__closed__7 = (const lean_object*)&lp_Props2Theories_tactic__intro__exists__in___x2c___x2c___x2c___00__closed__7_value;
static const lean_ctor_object lp_Props2Theories_tactic__intro__exists__in___x2c___x2c___x2c___00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tactic__intro__exists__in___x2c___x2c___x2c___00__closed__7_value),((lean_object*)&lp_Props2Theories_term___u2209____1___closed__4_value)}};
static const lean_object* lp_Props2Theories_tactic__intro__exists__in___x2c___x2c___x2c___00__closed__8 = (const lean_object*)&lp_Props2Theories_tactic__intro__exists__in___x2c___x2c___x2c___00__closed__8_value;
static const lean_ctor_object lp_Props2Theories_tactic__intro__exists__in___x2c___x2c___x2c___00__closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tactic__intro__exists__in___x2c___x2c___x2c___00__closed__8_value),((lean_object*)&lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__5_value)}};
static const lean_object* lp_Props2Theories_tactic__intro__exists__in___x2c___x2c___x2c___00__closed__9 = (const lean_object*)&lp_Props2Theories_tactic__intro__exists__in___x2c___x2c___x2c___00__closed__9_value;
static const lean_ctor_object lp_Props2Theories_tactic__intro__exists__in___x2c___x2c___x2c___00__closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tactic__intro__exists__in___x2c___x2c___x2c___00__closed__9_value),((lean_object*)&lp_Props2Theories_forall__in___closed__6_value)}};
static const lean_object* lp_Props2Theories_tactic__intro__exists__in___x2c___x2c___x2c___00__closed__10 = (const lean_object*)&lp_Props2Theories_tactic__intro__exists__in___x2c___x2c___x2c___00__closed__10_value;
static const lean_ctor_object lp_Props2Theories_tactic__intro__exists__in___x2c___x2c___x2c___00__closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Props2Theories_tactic__intro__exists__in___x2c___x2c___x2c___00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&lp_Props2Theories_tactic__intro__exists__in___x2c___x2c___x2c___00__closed__10_value)}};
static const lean_object* lp_Props2Theories_tactic__intro__exists__in___x2c___x2c___x2c___00__closed__11 = (const lean_object*)&lp_Props2Theories_tactic__intro__exists__in___x2c___x2c___x2c___00__closed__11_value;
LEAN_EXPORT const lean_object* lp_Props2Theories_tactic__intro__exists__in___x2c___x2c___x2c__ = (const lean_object*)&lp_Props2Theories_tactic__intro__exists__in___x2c___x2c___x2c___00__closed__11_value;
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "And"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___closed__0 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___closed__0_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(49, 220, 212, 156, 122, 214, 55, 135)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___closed__1_value_aux_0),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__in____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(58, 46, 244, 208, 18, 71, 77, 162)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___closed__1 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___closed__1_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Exists"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___closed__2 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___closed__2_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(65, 29, 48, 135, 199, 176, 149, 70)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___closed__3_value_aux_0),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__in____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(74, 55, 158, 60, 144, 34, 77, 172)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___closed__3 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___closed__3_value;
static lean_once_cell_t lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___closed__4;
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Props2Theories_tacticElim__exists__in___x2c___x2c___x2c___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "tacticElim_exists_in_,_,_,_"};
static const lean_object* lp_Props2Theories_tacticElim__exists__in___x2c___x2c___x2c___00__closed__0 = (const lean_object*)&lp_Props2Theories_tacticElim__exists__in___x2c___x2c___x2c___00__closed__0_value;
static const lean_ctor_object lp_Props2Theories_tacticElim__exists__in___x2c___x2c___x2c___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_tacticElim__exists__in___x2c___x2c___x2c___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(222, 75, 218, 126, 99, 73, 138, 245)}};
static const lean_object* lp_Props2Theories_tacticElim__exists__in___x2c___x2c___x2c___00__closed__1 = (const lean_object*)&lp_Props2Theories_tacticElim__exists__in___x2c___x2c___x2c___00__closed__1_value;
static const lean_string_object lp_Props2Theories_tacticElim__exists__in___x2c___x2c___x2c___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "elim_exists_in"};
static const lean_object* lp_Props2Theories_tacticElim__exists__in___x2c___x2c___x2c___00__closed__2 = (const lean_object*)&lp_Props2Theories_tacticElim__exists__in___x2c___x2c___x2c___00__closed__2_value;
static const lean_ctor_object lp_Props2Theories_tacticElim__exists__in___x2c___x2c___x2c___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&lp_Props2Theories_tacticElim__exists__in___x2c___x2c___x2c___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Props2Theories_tacticElim__exists__in___x2c___x2c___x2c___00__closed__3 = (const lean_object*)&lp_Props2Theories_tacticElim__exists__in___x2c___x2c___x2c___00__closed__3_value;
static const lean_ctor_object lp_Props2Theories_tacticElim__exists__in___x2c___x2c___x2c___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tacticElim__exists__in___x2c___x2c___x2c___00__closed__3_value),((lean_object*)&lp_Props2Theories_term___u2209____1___closed__4_value)}};
static const lean_object* lp_Props2Theories_tacticElim__exists__in___x2c___x2c___x2c___00__closed__4 = (const lean_object*)&lp_Props2Theories_tacticElim__exists__in___x2c___x2c___x2c___00__closed__4_value;
static const lean_ctor_object lp_Props2Theories_tacticElim__exists__in___x2c___x2c___x2c___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tacticElim__exists__in___x2c___x2c___x2c___00__closed__4_value),((lean_object*)&lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__5_value)}};
static const lean_object* lp_Props2Theories_tacticElim__exists__in___x2c___x2c___x2c___00__closed__5 = (const lean_object*)&lp_Props2Theories_tacticElim__exists__in___x2c___x2c___x2c___00__closed__5_value;
static const lean_ctor_object lp_Props2Theories_tacticElim__exists__in___x2c___x2c___x2c___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tacticElim__exists__in___x2c___x2c___x2c___00__closed__5_value),((lean_object*)&lp_Props2Theories_forall__in___closed__6_value)}};
static const lean_object* lp_Props2Theories_tacticElim__exists__in___x2c___x2c___x2c___00__closed__6 = (const lean_object*)&lp_Props2Theories_tacticElim__exists__in___x2c___x2c___x2c___00__closed__6_value;
static const lean_ctor_object lp_Props2Theories_tacticElim__exists__in___x2c___x2c___x2c___00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tacticElim__exists__in___x2c___x2c___x2c___00__closed__6_value),((lean_object*)&lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__5_value)}};
static const lean_object* lp_Props2Theories_tacticElim__exists__in___x2c___x2c___x2c___00__closed__7 = (const lean_object*)&lp_Props2Theories_tacticElim__exists__in___x2c___x2c___x2c___00__closed__7_value;
static const lean_ctor_object lp_Props2Theories_tacticElim__exists__in___x2c___x2c___x2c___00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tacticElim__exists__in___x2c___x2c___x2c___00__closed__7_value),((lean_object*)&lp_Props2Theories_forall__in___closed__6_value)}};
static const lean_object* lp_Props2Theories_tacticElim__exists__in___x2c___x2c___x2c___00__closed__8 = (const lean_object*)&lp_Props2Theories_tacticElim__exists__in___x2c___x2c___x2c___00__closed__8_value;
static const lean_ctor_object lp_Props2Theories_tacticElim__exists__in___x2c___x2c___x2c___00__closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tacticElim__exists__in___x2c___x2c___x2c___00__closed__8_value),((lean_object*)&lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__5_value)}};
static const lean_object* lp_Props2Theories_tacticElim__exists__in___x2c___x2c___x2c___00__closed__9 = (const lean_object*)&lp_Props2Theories_tacticElim__exists__in___x2c___x2c___x2c___00__closed__9_value;
static const lean_ctor_object lp_Props2Theories_tacticElim__exists__in___x2c___x2c___x2c___00__closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tacticElim__exists__in___x2c___x2c___x2c___00__closed__9_value),((lean_object*)&lp_Props2Theories_forall__in___closed__6_value)}};
static const lean_object* lp_Props2Theories_tacticElim__exists__in___x2c___x2c___x2c___00__closed__10 = (const lean_object*)&lp_Props2Theories_tacticElim__exists__in___x2c___x2c___x2c___00__closed__10_value;
static const lean_ctor_object lp_Props2Theories_tacticElim__exists__in___x2c___x2c___x2c___00__closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Props2Theories_tacticElim__exists__in___x2c___x2c___x2c___00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&lp_Props2Theories_tacticElim__exists__in___x2c___x2c___x2c___00__closed__10_value)}};
static const lean_object* lp_Props2Theories_tacticElim__exists__in___x2c___x2c___x2c___00__closed__11 = (const lean_object*)&lp_Props2Theories_tacticElim__exists__in___x2c___x2c___x2c___00__closed__11_value;
LEAN_EXPORT const lean_object* lp_Props2Theories_tacticElim__exists__in___x2c___x2c___x2c__ = (const lean_object*)&lp_Props2Theories_tacticElim__exists__in___x2c___x2c___x2c___00__closed__11_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "tacticLet__"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__0 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__0_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__1_value_aux_0),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__1_value_aux_1),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__27_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__1_value_aux_2),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(34, 155, 119, 159, 57, 105, 185, 247)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__1 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__1_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "let"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__2 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__2_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "letConfig"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__3 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__3_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__4_value_aux_0),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__4_value_aux_1),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__4_value_aux_2),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(5, 186, 227, 151, 19, 40, 136, 241)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__4 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__4_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "letDecl"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__5 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__5_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__6_value_aux_0),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__6_value_aux_1),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__6_value_aux_2),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(61, 47, 121, 206, 37, 68, 134, 111)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__6 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__6_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "letPatDecl"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__7 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__7_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__8_value_aux_0),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__8_value_aux_1),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__8_value_aux_2),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(9, 25, 156, 50, 29, 105, 147, 239)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__8 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__8_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "anonymousCtor"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__9 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__9_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__10_value_aux_0),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__10_value_aux_1),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__10_value_aux_2),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__9_value),LEAN_SCALAR_PTR_LITERAL(56, 53, 154, 97, 179, 232, 94, 186)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__10 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__10_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟨"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__11 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__11_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟩"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__12 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__12_value;
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Props2Theories_tacticElim__exists__in_____x2c___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "tacticElim_exists_in__,_"};
static const lean_object* lp_Props2Theories_tacticElim__exists__in_____x2c___00__closed__0 = (const lean_object*)&lp_Props2Theories_tacticElim__exists__in_____x2c___00__closed__0_value;
static const lean_ctor_object lp_Props2Theories_tacticElim__exists__in_____x2c___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_tacticElim__exists__in_____x2c___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(60, 159, 108, 50, 235, 149, 70, 243)}};
static const lean_object* lp_Props2Theories_tacticElim__exists__in_____x2c___00__closed__1 = (const lean_object*)&lp_Props2Theories_tacticElim__exists__in_____x2c___00__closed__1_value;
static const lean_string_object lp_Props2Theories_tacticElim__exists__in_____x2c___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "elim_exists_in_"};
static const lean_object* lp_Props2Theories_tacticElim__exists__in_____x2c___00__closed__2 = (const lean_object*)&lp_Props2Theories_tacticElim__exists__in_____x2c___00__closed__2_value;
static const lean_ctor_object lp_Props2Theories_tacticElim__exists__in_____x2c___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&lp_Props2Theories_tacticElim__exists__in_____x2c___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Props2Theories_tacticElim__exists__in_____x2c___00__closed__3 = (const lean_object*)&lp_Props2Theories_tacticElim__exists__in_____x2c___00__closed__3_value;
static const lean_ctor_object lp_Props2Theories_tacticElim__exists__in_____x2c___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tacticElim__exists__in_____x2c___00__closed__3_value),((lean_object*)&lp_Props2Theories_term___u2209____1___closed__4_value)}};
static const lean_object* lp_Props2Theories_tacticElim__exists__in_____x2c___00__closed__4 = (const lean_object*)&lp_Props2Theories_tacticElim__exists__in_____x2c___00__closed__4_value;
static const lean_ctor_object lp_Props2Theories_tacticElim__exists__in_____x2c___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tacticElim__exists__in_____x2c___00__closed__4_value),((lean_object*)&lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__5_value)}};
static const lean_object* lp_Props2Theories_tacticElim__exists__in_____x2c___00__closed__5 = (const lean_object*)&lp_Props2Theories_tacticElim__exists__in_____x2c___00__closed__5_value;
static const lean_ctor_object lp_Props2Theories_tacticElim__exists__in_____x2c___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tacticElim__exists__in_____x2c___00__closed__5_value),((lean_object*)&lp_Props2Theories_term___u2209____1___closed__4_value)}};
static const lean_object* lp_Props2Theories_tacticElim__exists__in_____x2c___00__closed__6 = (const lean_object*)&lp_Props2Theories_tacticElim__exists__in_____x2c___00__closed__6_value;
static const lean_ctor_object lp_Props2Theories_tacticElim__exists__in_____x2c___00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Props2Theories_tacticElim__exists__in_____x2c___00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&lp_Props2Theories_tacticElim__exists__in_____x2c___00__closed__6_value)}};
static const lean_object* lp_Props2Theories_tacticElim__exists__in_____x2c___00__closed__7 = (const lean_object*)&lp_Props2Theories_tacticElim__exists__in_____x2c___00__closed__7_value;
LEAN_EXPORT const lean_object* lp_Props2Theories_tacticElim__exists__in_____x2c__ = (const lean_object*)&lp_Props2Theories_tacticElim__exists__in_____x2c___00__closed__7_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_a"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__0 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__0_value;
static lean_once_cell_t lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__1;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(228, 106, 112, 29, 6, 211, 214, 169)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__2 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__2_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_Hina"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__3 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__3_value;
static lean_once_cell_t lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__4;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(220, 167, 193, 57, 188, 83, 114, 121)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__5 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__5_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_HPa"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__6 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__6_value;
static lean_once_cell_t lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__7;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(247, 99, 114, 38, 7, 132, 37, 142)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__8 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__8_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "apply"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__9 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__9_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__10_value_aux_0),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__10_value_aux_1),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__27_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__10_value_aux_2),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__9_value),LEAN_SCALAR_PTR_LITERAL(202, 125, 237, 78, 179, 140, 218, 80)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__10 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__10_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "assumption"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__11 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__11_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__12_value_aux_0),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__12_value_aux_1),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__27_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__12_value_aux_2),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__11_value),LEAN_SCALAR_PTR_LITERAL(240, 50, 167, 190, 65, 82, 149, 231)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__12 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__12_value;
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Props2Theories_tactic__elim__exists__in___x2c___x2c___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "tactic_elim_exists_in_,_,_"};
static const lean_object* lp_Props2Theories_tactic__elim__exists__in___x2c___x2c___00__closed__0 = (const lean_object*)&lp_Props2Theories_tactic__elim__exists__in___x2c___x2c___00__closed__0_value;
static const lean_ctor_object lp_Props2Theories_tactic__elim__exists__in___x2c___x2c___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_tactic__elim__exists__in___x2c___x2c___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(157, 48, 123, 61, 33, 13, 142, 244)}};
static const lean_object* lp_Props2Theories_tactic__elim__exists__in___x2c___x2c___00__closed__1 = (const lean_object*)&lp_Props2Theories_tactic__elim__exists__in___x2c___x2c___00__closed__1_value;
static const lean_string_object lp_Props2Theories_tactic__elim__exists__in___x2c___x2c___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "_elim_exists_in"};
static const lean_object* lp_Props2Theories_tactic__elim__exists__in___x2c___x2c___00__closed__2 = (const lean_object*)&lp_Props2Theories_tactic__elim__exists__in___x2c___x2c___00__closed__2_value;
static const lean_ctor_object lp_Props2Theories_tactic__elim__exists__in___x2c___x2c___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&lp_Props2Theories_tactic__elim__exists__in___x2c___x2c___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Props2Theories_tactic__elim__exists__in___x2c___x2c___00__closed__3 = (const lean_object*)&lp_Props2Theories_tactic__elim__exists__in___x2c___x2c___00__closed__3_value;
static const lean_ctor_object lp_Props2Theories_tactic__elim__exists__in___x2c___x2c___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tactic__elim__exists__in___x2c___x2c___00__closed__3_value),((lean_object*)&lp_Props2Theories_term___u2209____1___closed__4_value)}};
static const lean_object* lp_Props2Theories_tactic__elim__exists__in___x2c___x2c___00__closed__4 = (const lean_object*)&lp_Props2Theories_tactic__elim__exists__in___x2c___x2c___00__closed__4_value;
static const lean_ctor_object lp_Props2Theories_tactic__elim__exists__in___x2c___x2c___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tactic__elim__exists__in___x2c___x2c___00__closed__4_value),((lean_object*)&lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__5_value)}};
static const lean_object* lp_Props2Theories_tactic__elim__exists__in___x2c___x2c___00__closed__5 = (const lean_object*)&lp_Props2Theories_tactic__elim__exists__in___x2c___x2c___00__closed__5_value;
static const lean_ctor_object lp_Props2Theories_tactic__elim__exists__in___x2c___x2c___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tactic__elim__exists__in___x2c___x2c___00__closed__5_value),((lean_object*)&lp_Props2Theories_term___u2209____1___closed__4_value)}};
static const lean_object* lp_Props2Theories_tactic__elim__exists__in___x2c___x2c___00__closed__6 = (const lean_object*)&lp_Props2Theories_tactic__elim__exists__in___x2c___x2c___00__closed__6_value;
static const lean_ctor_object lp_Props2Theories_tactic__elim__exists__in___x2c___x2c___00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tactic__elim__exists__in___x2c___x2c___00__closed__6_value),((lean_object*)&lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__5_value)}};
static const lean_object* lp_Props2Theories_tactic__elim__exists__in___x2c___x2c___00__closed__7 = (const lean_object*)&lp_Props2Theories_tactic__elim__exists__in___x2c___x2c___00__closed__7_value;
static const lean_ctor_object lp_Props2Theories_tactic__elim__exists__in___x2c___x2c___00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tactic__elim__exists__in___x2c___x2c___00__closed__7_value),((lean_object*)&lp_Props2Theories_forall__in___closed__6_value)}};
static const lean_object* lp_Props2Theories_tactic__elim__exists__in___x2c___x2c___00__closed__8 = (const lean_object*)&lp_Props2Theories_tactic__elim__exists__in___x2c___x2c___00__closed__8_value;
static const lean_ctor_object lp_Props2Theories_tactic__elim__exists__in___x2c___x2c___00__closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Props2Theories_tactic__elim__exists__in___x2c___x2c___00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&lp_Props2Theories_tactic__elim__exists__in___x2c___x2c___00__closed__8_value)}};
static const lean_object* lp_Props2Theories_tactic__elim__exists__in___x2c___x2c___00__closed__9 = (const lean_object*)&lp_Props2Theories_tactic__elim__exists__in___x2c___x2c___00__closed__9_value;
LEAN_EXPORT const lean_object* lp_Props2Theories_tactic__elim__exists__in___x2c___x2c__ = (const lean_object*)&lp_Props2Theories_tactic__elim__exists__in___x2c___x2c___00__closed__9_value;
static const lean_string_object lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1_spec__0___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 34, .m_data = "Expected x ∈ A ∧ P x inside, got: "};
static const lean_object* lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1_spec__0___redArg___lam__0___closed__0 = (const lean_object*)&lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1_spec__0___redArg___lam__0___closed__0_value;
static lean_once_cell_t lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1_spec__0___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1_spec__0___redArg___lam__0___closed__1;
static const lean_ctor_object lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1_spec__0___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(49, 220, 212, 156, 122, 214, 55, 135)}};
static const lean_object* lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1_spec__0___redArg___lam__0___closed__2 = (const lean_object*)&lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1_spec__0___redArg___lam__0___closed__2_value;
LEAN_EXPORT lean_object* lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Hypothesis "};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__0 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__0_value;
static lean_once_cell_t lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__1;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 47, .m_data = " is not an existential (expected ∃ x ∈ A, P x)."};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__2 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__2_value;
static lean_once_cell_t lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__3;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(65, 29, 48, 135, 199, 176, 149, 70)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__4 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__4_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__5 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__5_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(243, 101, 181, 186, 114, 114, 131, 189)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__6 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__6_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "tacticHave__"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__7 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__7_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__8_value_aux_0),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__8_value_aux_1),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__27_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__8_value_aux_2),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(57, 244, 114, 225, 1, 158, 79, 25)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__8 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__8_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "have"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__9 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__9_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "letIdDecl"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__10 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__10_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__11_value_aux_0),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__11_value_aux_1),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__11_value_aux_2),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(82, 96, 243, 36, 251, 209, 136, 237)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__11 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__11_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "letId"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__12 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__12_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__13_value_aux_0),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__13_value_aux_1),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__13_value_aux_2),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__12_value),LEAN_SCALAR_PTR_LITERAL(67, 92, 92, 51, 38, 250, 60, 190)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__13 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__13_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "typeSpec"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__14 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__14_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__15_value_aux_0),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__15_value_aux_1),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__15_value_aux_2),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(77, 126, 241, 117, 174, 189, 108, 62)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__15 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__15_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__16 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__16_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "byTactic"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__17 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__17_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__18_value_aux_0),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__18_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__18_value_aux_1),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__18_value_aux_2),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__17_value),LEAN_SCALAR_PTR_LITERAL(187, 150, 238, 148, 228, 221, 116, 224)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__18 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__18_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "by"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__19 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__19_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_Hmem"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__20 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__20_value;
static lean_once_cell_t lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__21;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__20_value),LEAN_SCALAR_PTR_LITERAL(20, 107, 212, 226, 236, 136, 43, 131)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__22 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__22_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_Hpa"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__23 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__23_value;
static lean_once_cell_t lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__24;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__23_value),LEAN_SCALAR_PTR_LITERAL(253, 165, 142, 4, 210, 86, 201, 124)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__25 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__25_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_h_forq"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__26 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__26_value;
static lean_once_cell_t lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__27;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__26_value),LEAN_SCALAR_PTR_LITERAL(242, 210, 79, 134, 134, 134, 159, 221)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__28 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__28_value;
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Props2Theories_tacticIntro__exists__unique__in___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "tacticIntro_exists_unique_in_"};
static const lean_object* lp_Props2Theories_tacticIntro__exists__unique__in___00__closed__0 = (const lean_object*)&lp_Props2Theories_tacticIntro__exists__unique__in___00__closed__0_value;
static const lean_ctor_object lp_Props2Theories_tacticIntro__exists__unique__in___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_tacticIntro__exists__unique__in___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(81, 68, 19, 92, 89, 132, 228, 196)}};
static const lean_object* lp_Props2Theories_tacticIntro__exists__unique__in___00__closed__1 = (const lean_object*)&lp_Props2Theories_tacticIntro__exists__unique__in___00__closed__1_value;
static const lean_string_object lp_Props2Theories_tacticIntro__exists__unique__in___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "intro_exists_unique_in"};
static const lean_object* lp_Props2Theories_tacticIntro__exists__unique__in___00__closed__2 = (const lean_object*)&lp_Props2Theories_tacticIntro__exists__unique__in___00__closed__2_value;
static const lean_ctor_object lp_Props2Theories_tacticIntro__exists__unique__in___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&lp_Props2Theories_tacticIntro__exists__unique__in___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Props2Theories_tacticIntro__exists__unique__in___00__closed__3 = (const lean_object*)&lp_Props2Theories_tacticIntro__exists__unique__in___00__closed__3_value;
static const lean_ctor_object lp_Props2Theories_tacticIntro__exists__unique__in___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tacticIntro__exists__unique__in___00__closed__3_value),((lean_object*)&lp_Props2Theories_term___u2209____1___closed__4_value)}};
static const lean_object* lp_Props2Theories_tacticIntro__exists__unique__in___00__closed__4 = (const lean_object*)&lp_Props2Theories_tacticIntro__exists__unique__in___00__closed__4_value;
static const lean_ctor_object lp_Props2Theories_tacticIntro__exists__unique__in___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Props2Theories_tacticIntro__exists__unique__in___00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&lp_Props2Theories_tacticIntro__exists__unique__in___00__closed__4_value)}};
static const lean_object* lp_Props2Theories_tacticIntro__exists__unique__in___00__closed__5 = (const lean_object*)&lp_Props2Theories_tacticIntro__exists__unique__in___00__closed__5_value;
LEAN_EXPORT const lean_object* lp_Props2Theories_tacticIntro__exists__unique__in__ = (const lean_object*)&lp_Props2Theories_tacticIntro__exists__unique__in___00__closed__5_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "tacticIntro_exists_unique__1"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in____1___closed__0 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in____1___closed__0_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in____1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(203, 60, 219, 252, 222, 124, 42, 218)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in____1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in____1___closed__1_value_aux_0),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(79, 99, 44, 237, 169, 243, 114, 61)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in____1___closed__1 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in____1___closed__1_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "intro_exists_unique"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in____1___closed__2 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in____1___closed__2_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "tacticIntro_exists_unique_"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in____1___closed__3 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in____1___closed__3_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in____1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(203, 60, 219, 252, 222, 124, 42, 218)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in____1___closed__4_value_aux_0),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in____1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(59, 220, 234, 196, 112, 12, 221, 198)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in____1___closed__4 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in____1___closed__4_value;
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in____1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in____1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Props2Theories_tacticIntro__exists__unique__in_____x2c___x2c___x2c___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "tacticIntro_exists_unique_in__,_,_,_"};
static const lean_object* lp_Props2Theories_tacticIntro__exists__unique__in_____x2c___x2c___x2c___00__closed__0 = (const lean_object*)&lp_Props2Theories_tacticIntro__exists__unique__in_____x2c___x2c___x2c___00__closed__0_value;
static const lean_ctor_object lp_Props2Theories_tacticIntro__exists__unique__in_____x2c___x2c___x2c___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_tacticIntro__exists__unique__in_____x2c___x2c___x2c___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(27, 117, 122, 81, 117, 99, 144, 234)}};
static const lean_object* lp_Props2Theories_tacticIntro__exists__unique__in_____x2c___x2c___x2c___00__closed__1 = (const lean_object*)&lp_Props2Theories_tacticIntro__exists__unique__in_____x2c___x2c___x2c___00__closed__1_value;
static const lean_string_object lp_Props2Theories_tacticIntro__exists__unique__in_____x2c___x2c___x2c___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "intro_exists_unique_in_"};
static const lean_object* lp_Props2Theories_tacticIntro__exists__unique__in_____x2c___x2c___x2c___00__closed__2 = (const lean_object*)&lp_Props2Theories_tacticIntro__exists__unique__in_____x2c___x2c___x2c___00__closed__2_value;
static const lean_ctor_object lp_Props2Theories_tacticIntro__exists__unique__in_____x2c___x2c___x2c___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&lp_Props2Theories_tacticIntro__exists__unique__in_____x2c___x2c___x2c___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Props2Theories_tacticIntro__exists__unique__in_____x2c___x2c___x2c___00__closed__3 = (const lean_object*)&lp_Props2Theories_tacticIntro__exists__unique__in_____x2c___x2c___x2c___00__closed__3_value;
static const lean_ctor_object lp_Props2Theories_tacticIntro__exists__unique__in_____x2c___x2c___x2c___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tacticIntro__exists__unique__in_____x2c___x2c___x2c___00__closed__3_value),((lean_object*)&lp_Props2Theories_term___u2209____1___closed__4_value)}};
static const lean_object* lp_Props2Theories_tacticIntro__exists__unique__in_____x2c___x2c___x2c___00__closed__4 = (const lean_object*)&lp_Props2Theories_tacticIntro__exists__unique__in_____x2c___x2c___x2c___00__closed__4_value;
static const lean_ctor_object lp_Props2Theories_tacticIntro__exists__unique__in_____x2c___x2c___x2c___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tacticIntro__exists__unique__in_____x2c___x2c___x2c___00__closed__4_value),((lean_object*)&lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__5_value)}};
static const lean_object* lp_Props2Theories_tacticIntro__exists__unique__in_____x2c___x2c___x2c___00__closed__5 = (const lean_object*)&lp_Props2Theories_tacticIntro__exists__unique__in_____x2c___x2c___x2c___00__closed__5_value;
static const lean_ctor_object lp_Props2Theories_tacticIntro__exists__unique__in_____x2c___x2c___x2c___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tacticIntro__exists__unique__in_____x2c___x2c___x2c___00__closed__5_value),((lean_object*)&lp_Props2Theories_term___u2209____1___closed__4_value)}};
static const lean_object* lp_Props2Theories_tacticIntro__exists__unique__in_____x2c___x2c___x2c___00__closed__6 = (const lean_object*)&lp_Props2Theories_tacticIntro__exists__unique__in_____x2c___x2c___x2c___00__closed__6_value;
static const lean_ctor_object lp_Props2Theories_tacticIntro__exists__unique__in_____x2c___x2c___x2c___00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tacticIntro__exists__unique__in_____x2c___x2c___x2c___00__closed__6_value),((lean_object*)&lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__5_value)}};
static const lean_object* lp_Props2Theories_tacticIntro__exists__unique__in_____x2c___x2c___x2c___00__closed__7 = (const lean_object*)&lp_Props2Theories_tacticIntro__exists__unique__in_____x2c___x2c___x2c___00__closed__7_value;
static const lean_ctor_object lp_Props2Theories_tacticIntro__exists__unique__in_____x2c___x2c___x2c___00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tacticIntro__exists__unique__in_____x2c___x2c___x2c___00__closed__7_value),((lean_object*)&lp_Props2Theories_term___u2209____1___closed__4_value)}};
static const lean_object* lp_Props2Theories_tacticIntro__exists__unique__in_____x2c___x2c___x2c___00__closed__8 = (const lean_object*)&lp_Props2Theories_tacticIntro__exists__unique__in_____x2c___x2c___x2c___00__closed__8_value;
static const lean_ctor_object lp_Props2Theories_tacticIntro__exists__unique__in_____x2c___x2c___x2c___00__closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tacticIntro__exists__unique__in_____x2c___x2c___x2c___00__closed__8_value),((lean_object*)&lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__5_value)}};
static const lean_object* lp_Props2Theories_tacticIntro__exists__unique__in_____x2c___x2c___x2c___00__closed__9 = (const lean_object*)&lp_Props2Theories_tacticIntro__exists__unique__in_____x2c___x2c___x2c___00__closed__9_value;
static const lean_ctor_object lp_Props2Theories_tacticIntro__exists__unique__in_____x2c___x2c___x2c___00__closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tacticIntro__exists__unique__in_____x2c___x2c___x2c___00__closed__9_value),((lean_object*)&lp_Props2Theories_term___u2209____1___closed__4_value)}};
static const lean_object* lp_Props2Theories_tacticIntro__exists__unique__in_____x2c___x2c___x2c___00__closed__10 = (const lean_object*)&lp_Props2Theories_tacticIntro__exists__unique__in_____x2c___x2c___x2c___00__closed__10_value;
static const lean_ctor_object lp_Props2Theories_tacticIntro__exists__unique__in_____x2c___x2c___x2c___00__closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Props2Theories_tacticIntro__exists__unique__in_____x2c___x2c___x2c___00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&lp_Props2Theories_tacticIntro__exists__unique__in_____x2c___x2c___x2c___00__closed__10_value)}};
static const lean_object* lp_Props2Theories_tacticIntro__exists__unique__in_____x2c___x2c___x2c___00__closed__11 = (const lean_object*)&lp_Props2Theories_tacticIntro__exists__unique__in_____x2c___x2c___x2c___00__closed__11_value;
LEAN_EXPORT const lean_object* lp_Props2Theories_tacticIntro__exists__unique__in_____x2c___x2c___x2c__ = (const lean_object*)&lp_Props2Theories_tacticIntro__exists__unique__in_____x2c___x2c___x2c___00__closed__11_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in_____x2c___x2c___x2c____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "And.intro"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in_____x2c___x2c___x2c____1___closed__0 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in_____x2c___x2c___x2c____1___closed__0_value;
static lean_once_cell_t lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in_____x2c___x2c___x2c____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in_____x2c___x2c___x2c____1___closed__1;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in_____x2c___x2c___x2c____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in_____x2c___x2c___x2c____1___closed__2 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in_____x2c___x2c___x2c____1___closed__2_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in_____x2c___x2c___x2c____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in_____x2c___x2c___x2c____1___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in_____x2c___x2c___x2c____1___closed__3 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in_____x2c___x2c___x2c____1___closed__3_value;
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in_____x2c___x2c___x2c____1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in_____x2c___x2c___x2c____1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "tactic_intro_exists_unique_in_,_,_,_,_"};
static const lean_object* lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__0 = (const lean_object*)&lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__0_value;
static const lean_ctor_object lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(6, 225, 16, 29, 147, 33, 208, 43)}};
static const lean_object* lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__1 = (const lean_object*)&lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__1_value;
static const lean_string_object lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "_intro_exists_unique_in"};
static const lean_object* lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__2 = (const lean_object*)&lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__2_value;
static const lean_ctor_object lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__3 = (const lean_object*)&lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__3_value;
static const lean_ctor_object lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__3_value),((lean_object*)&lp_Props2Theories_term___u2209____1___closed__4_value)}};
static const lean_object* lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__4 = (const lean_object*)&lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__4_value;
static const lean_ctor_object lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__4_value),((lean_object*)&lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__5_value)}};
static const lean_object* lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__5 = (const lean_object*)&lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__5_value;
static const lean_ctor_object lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__5_value),((lean_object*)&lp_Props2Theories_term___u2209____1___closed__4_value)}};
static const lean_object* lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__6 = (const lean_object*)&lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__6_value;
static const lean_ctor_object lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__6_value),((lean_object*)&lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__5_value)}};
static const lean_object* lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__7 = (const lean_object*)&lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__7_value;
static const lean_ctor_object lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__7_value),((lean_object*)&lp_Props2Theories_term___u2209____1___closed__4_value)}};
static const lean_object* lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__8 = (const lean_object*)&lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__8_value;
static const lean_ctor_object lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__8_value),((lean_object*)&lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__5_value)}};
static const lean_object* lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__9 = (const lean_object*)&lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__9_value;
static const lean_ctor_object lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__9_value),((lean_object*)&lp_Props2Theories_term___u2209____1___closed__4_value)}};
static const lean_object* lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__10 = (const lean_object*)&lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__10_value;
static const lean_ctor_object lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__10_value),((lean_object*)&lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__5_value)}};
static const lean_object* lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__11 = (const lean_object*)&lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__11_value;
static const lean_ctor_object lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__11_value),((lean_object*)&lp_Props2Theories_forall__in___closed__6_value)}};
static const lean_object* lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__12 = (const lean_object*)&lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__12_value;
static const lean_ctor_object lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__12_value)}};
static const lean_object* lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__13 = (const lean_object*)&lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__13_value;
LEAN_EXPORT const lean_object* lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c__ = (const lean_object*)&lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__13_value;
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c____1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c____1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "tacticElim_exists_unique_in_,_,_,_,_"};
static const lean_object* lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__0 = (const lean_object*)&lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__0_value;
static const lean_ctor_object lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(101, 30, 221, 9, 72, 57, 184, 123)}};
static const lean_object* lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__1 = (const lean_object*)&lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__1_value;
static const lean_string_object lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "elim_exists_unique_in"};
static const lean_object* lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__2 = (const lean_object*)&lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__2_value;
static const lean_ctor_object lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__3 = (const lean_object*)&lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__3_value;
static const lean_ctor_object lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__3_value),((lean_object*)&lp_Props2Theories_term___u2209____1___closed__4_value)}};
static const lean_object* lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__4 = (const lean_object*)&lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__4_value;
static const lean_ctor_object lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__4_value),((lean_object*)&lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__5_value)}};
static const lean_object* lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__5 = (const lean_object*)&lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__5_value;
static const lean_ctor_object lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__5_value),((lean_object*)&lp_Props2Theories_forall__in___closed__6_value)}};
static const lean_object* lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__6 = (const lean_object*)&lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__6_value;
static const lean_ctor_object lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__6_value),((lean_object*)&lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__5_value)}};
static const lean_object* lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__7 = (const lean_object*)&lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__7_value;
static const lean_ctor_object lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__7_value),((lean_object*)&lp_Props2Theories_forall__in___closed__6_value)}};
static const lean_object* lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__8 = (const lean_object*)&lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__8_value;
static const lean_ctor_object lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__8_value),((lean_object*)&lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__5_value)}};
static const lean_object* lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__9 = (const lean_object*)&lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__9_value;
static const lean_ctor_object lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__9_value),((lean_object*)&lp_Props2Theories_forall__in___closed__6_value)}};
static const lean_object* lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__10 = (const lean_object*)&lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__10_value;
static const lean_ctor_object lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__10_value),((lean_object*)&lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__5_value)}};
static const lean_object* lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__11 = (const lean_object*)&lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__11_value;
static const lean_ctor_object lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__11_value),((lean_object*)&lp_Props2Theories_forall__in___closed__6_value)}};
static const lean_object* lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__12 = (const lean_object*)&lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__12_value;
static const lean_ctor_object lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__12_value)}};
static const lean_object* lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__13 = (const lean_object*)&lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__13_value;
LEAN_EXPORT const lean_object* lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c__ = (const lean_object*)&lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__13_value;
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__unique__in___x2c___x2c___x2c___x2c____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__unique__in___x2c___x2c___x2c___x2c____1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Props2Theories_tacticElim__exists__unique__in_____x2c___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "tacticElim_exists_unique_in__,_"};
static const lean_object* lp_Props2Theories_tacticElim__exists__unique__in_____x2c___00__closed__0 = (const lean_object*)&lp_Props2Theories_tacticElim__exists__unique__in_____x2c___00__closed__0_value;
static const lean_ctor_object lp_Props2Theories_tacticElim__exists__unique__in_____x2c___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_tacticElim__exists__unique__in_____x2c___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(75, 210, 152, 229, 89, 60, 225, 207)}};
static const lean_object* lp_Props2Theories_tacticElim__exists__unique__in_____x2c___00__closed__1 = (const lean_object*)&lp_Props2Theories_tacticElim__exists__unique__in_____x2c___00__closed__1_value;
static const lean_string_object lp_Props2Theories_tacticElim__exists__unique__in_____x2c___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "elim_exists_unique_in_"};
static const lean_object* lp_Props2Theories_tacticElim__exists__unique__in_____x2c___00__closed__2 = (const lean_object*)&lp_Props2Theories_tacticElim__exists__unique__in_____x2c___00__closed__2_value;
static const lean_ctor_object lp_Props2Theories_tacticElim__exists__unique__in_____x2c___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&lp_Props2Theories_tacticElim__exists__unique__in_____x2c___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Props2Theories_tacticElim__exists__unique__in_____x2c___00__closed__3 = (const lean_object*)&lp_Props2Theories_tacticElim__exists__unique__in_____x2c___00__closed__3_value;
static const lean_ctor_object lp_Props2Theories_tacticElim__exists__unique__in_____x2c___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tacticElim__exists__unique__in_____x2c___00__closed__3_value),((lean_object*)&lp_Props2Theories_term___u2209____1___closed__4_value)}};
static const lean_object* lp_Props2Theories_tacticElim__exists__unique__in_____x2c___00__closed__4 = (const lean_object*)&lp_Props2Theories_tacticElim__exists__unique__in_____x2c___00__closed__4_value;
static const lean_ctor_object lp_Props2Theories_tacticElim__exists__unique__in_____x2c___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tacticElim__exists__unique__in_____x2c___00__closed__4_value),((lean_object*)&lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__5_value)}};
static const lean_object* lp_Props2Theories_tacticElim__exists__unique__in_____x2c___00__closed__5 = (const lean_object*)&lp_Props2Theories_tacticElim__exists__unique__in_____x2c___00__closed__5_value;
static const lean_ctor_object lp_Props2Theories_tacticElim__exists__unique__in_____x2c___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tacticElim__exists__unique__in_____x2c___00__closed__5_value),((lean_object*)&lp_Props2Theories_term___u2209____1___closed__4_value)}};
static const lean_object* lp_Props2Theories_tacticElim__exists__unique__in_____x2c___00__closed__6 = (const lean_object*)&lp_Props2Theories_tacticElim__exists__unique__in_____x2c___00__closed__6_value;
static const lean_ctor_object lp_Props2Theories_tacticElim__exists__unique__in_____x2c___00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Props2Theories_tacticElim__exists__unique__in_____x2c___00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&lp_Props2Theories_tacticElim__exists__unique__in_____x2c___00__closed__6_value)}};
static const lean_object* lp_Props2Theories_tacticElim__exists__unique__in_____x2c___00__closed__7 = (const lean_object*)&lp_Props2Theories_tacticElim__exists__unique__in_____x2c___00__closed__7_value;
LEAN_EXPORT const lean_object* lp_Props2Theories_tacticElim__exists__unique__in_____x2c__ = (const lean_object*)&lp_Props2Theories_tacticElim__exists__unique__in_____x2c___00__closed__7_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__unique__in_____x2c____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_Hunique"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__unique__in_____x2c____1___closed__0 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__unique__in_____x2c____1___closed__0_value;
static lean_once_cell_t lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__unique__in_____x2c____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__unique__in_____x2c____1___closed__1;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__unique__in_____x2c____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__unique__in_____x2c____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(9, 117, 52, 30, 19, 113, 244, 188)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__unique__in_____x2c____1___closed__2 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__unique__in_____x2c____1___closed__2_value;
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__unique__in_____x2c____1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__unique__in_____x2c____1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Props2Theories_tactic__elim__exists__unique__in___x2c___x2c___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "tactic_elim_exists_unique_in_,_,_"};
static const lean_object* lp_Props2Theories_tactic__elim__exists__unique__in___x2c___x2c___00__closed__0 = (const lean_object*)&lp_Props2Theories_tactic__elim__exists__unique__in___x2c___x2c___00__closed__0_value;
static const lean_ctor_object lp_Props2Theories_tactic__elim__exists__unique__in___x2c___x2c___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_tactic__elim__exists__unique__in___x2c___x2c___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(91, 83, 210, 155, 237, 50, 210, 140)}};
static const lean_object* lp_Props2Theories_tactic__elim__exists__unique__in___x2c___x2c___00__closed__1 = (const lean_object*)&lp_Props2Theories_tactic__elim__exists__unique__in___x2c___x2c___00__closed__1_value;
static const lean_string_object lp_Props2Theories_tactic__elim__exists__unique__in___x2c___x2c___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "_elim_exists_unique_in"};
static const lean_object* lp_Props2Theories_tactic__elim__exists__unique__in___x2c___x2c___00__closed__2 = (const lean_object*)&lp_Props2Theories_tactic__elim__exists__unique__in___x2c___x2c___00__closed__2_value;
static const lean_ctor_object lp_Props2Theories_tactic__elim__exists__unique__in___x2c___x2c___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&lp_Props2Theories_tactic__elim__exists__unique__in___x2c___x2c___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Props2Theories_tactic__elim__exists__unique__in___x2c___x2c___00__closed__3 = (const lean_object*)&lp_Props2Theories_tactic__elim__exists__unique__in___x2c___x2c___00__closed__3_value;
static const lean_ctor_object lp_Props2Theories_tactic__elim__exists__unique__in___x2c___x2c___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tactic__elim__exists__unique__in___x2c___x2c___00__closed__3_value),((lean_object*)&lp_Props2Theories_term___u2209____1___closed__4_value)}};
static const lean_object* lp_Props2Theories_tactic__elim__exists__unique__in___x2c___x2c___00__closed__4 = (const lean_object*)&lp_Props2Theories_tactic__elim__exists__unique__in___x2c___x2c___00__closed__4_value;
static const lean_ctor_object lp_Props2Theories_tactic__elim__exists__unique__in___x2c___x2c___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tactic__elim__exists__unique__in___x2c___x2c___00__closed__4_value),((lean_object*)&lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__5_value)}};
static const lean_object* lp_Props2Theories_tactic__elim__exists__unique__in___x2c___x2c___00__closed__5 = (const lean_object*)&lp_Props2Theories_tactic__elim__exists__unique__in___x2c___x2c___00__closed__5_value;
static const lean_ctor_object lp_Props2Theories_tactic__elim__exists__unique__in___x2c___x2c___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tactic__elim__exists__unique__in___x2c___x2c___00__closed__5_value),((lean_object*)&lp_Props2Theories_term___u2209____1___closed__4_value)}};
static const lean_object* lp_Props2Theories_tactic__elim__exists__unique__in___x2c___x2c___00__closed__6 = (const lean_object*)&lp_Props2Theories_tactic__elim__exists__unique__in___x2c___x2c___00__closed__6_value;
static const lean_ctor_object lp_Props2Theories_tactic__elim__exists__unique__in___x2c___x2c___00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tactic__elim__exists__unique__in___x2c___x2c___00__closed__6_value),((lean_object*)&lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__5_value)}};
static const lean_object* lp_Props2Theories_tactic__elim__exists__unique__in___x2c___x2c___00__closed__7 = (const lean_object*)&lp_Props2Theories_tactic__elim__exists__unique__in___x2c___x2c___00__closed__7_value;
static const lean_ctor_object lp_Props2Theories_tactic__elim__exists__unique__in___x2c___x2c___00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2208____1___closed__3_value),((lean_object*)&lp_Props2Theories_tactic__elim__exists__unique__in___x2c___x2c___00__closed__7_value),((lean_object*)&lp_Props2Theories_forall__in___closed__6_value)}};
static const lean_object* lp_Props2Theories_tactic__elim__exists__unique__in___x2c___x2c___00__closed__8 = (const lean_object*)&lp_Props2Theories_tactic__elim__exists__unique__in___x2c___x2c___00__closed__8_value;
static const lean_ctor_object lp_Props2Theories_tactic__elim__exists__unique__in___x2c___x2c___00__closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Props2Theories_tactic__elim__exists__unique__in___x2c___x2c___00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&lp_Props2Theories_tactic__elim__exists__unique__in___x2c___x2c___00__closed__8_value)}};
static const lean_object* lp_Props2Theories_tactic__elim__exists__unique__in___x2c___x2c___00__closed__9 = (const lean_object*)&lp_Props2Theories_tactic__elim__exists__unique__in___x2c___x2c___00__closed__9_value;
LEAN_EXPORT const lean_object* lp_Props2Theories_tactic__elim__exists__unique__in___x2c___x2c__ = (const lean_object*)&lp_Props2Theories_tactic__elim__exists__unique__in___x2c___x2c___00__closed__9_value;
static const lean_string_object lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 42, .m_data = "Expected (x ∈ A ∧ P x) ∧ ... inside, got: "};
static const lean_object* lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0___redArg___lam__0___closed__0 = (const lean_object*)&lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0___redArg___lam__0___closed__0_value;
static lean_once_cell_t lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0___redArg___lam__0___closed__1;
static const lean_string_object lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 39, .m_data = "Expected x ∈ A ∧ P x on the left, got: "};
static const lean_object* lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0___redArg___lam__0___closed__2 = (const lean_object*)&lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0___redArg___lam__0___closed__2_value;
static lean_once_cell_t lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0___redArg___lam__0___closed__3;
LEAN_EXPORT lean_object* lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 48, .m_data = " is not an existential (expected ∃! x ∈ A, P x)."};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1___closed__0 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1___closed__0_value;
static lean_once_cell_t lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1___closed__1;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_hraw"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1___closed__2 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1___closed__2_value;
static lean_once_cell_t lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1___closed__3;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(118, 118, 48, 248, 91, 125, 216, 159)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1___closed__4 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1___closed__4_value;
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__6(void){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_36_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__5));
v___x_37_ = l_String_toRawSubstring_x27(v___x_36_);
return v___x_37_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1(lean_object* v_x_49_, lean_object* v_a_50_, lean_object* v_a_51_){
_start:
{
lean_object* v___x_52_; uint8_t v___x_53_; 
v___x_52_ = ((lean_object*)(lp_Props2Theories_term___u2208____1___closed__1));
lean_inc(v_x_49_);
v___x_53_ = l_Lean_Syntax_isOfKind(v_x_49_, v___x_52_);
if (v___x_53_ == 0)
{
lean_object* v___x_54_; lean_object* v___x_55_; 
lean_dec(v_x_49_);
v___x_54_ = lean_box(1);
v___x_55_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_55_, 0, v___x_54_);
lean_ctor_set(v___x_55_, 1, v_a_51_);
return v___x_55_;
}
else
{
lean_object* v_quotContext_56_; lean_object* v_currMacroScope_57_; lean_object* v_ref_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; uint8_t v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; 
v_quotContext_56_ = lean_ctor_get(v_a_50_, 1);
v_currMacroScope_57_ = lean_ctor_get(v_a_50_, 2);
v_ref_58_ = lean_ctor_get(v_a_50_, 5);
v___x_59_ = lean_unsigned_to_nat(0u);
v___x_60_ = l_Lean_Syntax_getArg(v_x_49_, v___x_59_);
v___x_61_ = lean_unsigned_to_nat(2u);
v___x_62_ = l_Lean_Syntax_getArg(v_x_49_, v___x_61_);
lean_dec(v_x_49_);
v___x_63_ = 0;
v___x_64_ = l_Lean_SourceInfo_fromRef(v_ref_58_, v___x_63_);
v___x_65_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__4));
v___x_66_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__6, &lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__6_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__6);
v___x_67_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__7));
lean_inc(v_currMacroScope_57_);
lean_inc(v_quotContext_56_);
v___x_68_ = l_Lean_addMacroScope(v_quotContext_56_, v___x_67_, v_currMacroScope_57_);
v___x_69_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__9));
lean_inc_n(v___x_64_, 2);
v___x_70_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_70_, 0, v___x_64_);
lean_ctor_set(v___x_70_, 1, v___x_66_);
lean_ctor_set(v___x_70_, 2, v___x_68_);
lean_ctor_set(v___x_70_, 3, v___x_69_);
v___x_71_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__11));
v___x_72_ = l_Lean_Syntax_node2(v___x_64_, v___x_71_, v___x_60_, v___x_62_);
v___x_73_ = l_Lean_Syntax_node2(v___x_64_, v___x_65_, v___x_70_, v___x_72_);
v___x_74_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_74_, 0, v___x_73_);
lean_ctor_set(v___x_74_, 1, v_a_51_);
return v___x_74_;
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___boxed(lean_object* v_x_75_, lean_object* v_a_76_, lean_object* v_a_77_){
_start:
{
lean_object* v_res_78_; 
v_res_78_ = lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1(v_x_75_, v_a_76_, v_a_77_);
lean_dec_ref(v_a_76_);
return v_res_78_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______unexpand__belongs__1(lean_object* v_x_82_, lean_object* v_a_83_, lean_object* v_a_84_){
_start:
{
lean_object* v___x_85_; uint8_t v___x_86_; 
v___x_85_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__4));
lean_inc(v_x_82_);
v___x_86_ = l_Lean_Syntax_isOfKind(v_x_82_, v___x_85_);
if (v___x_86_ == 0)
{
lean_object* v___x_87_; lean_object* v___x_88_; 
lean_dec(v_x_82_);
v___x_87_ = lean_box(0);
v___x_88_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_88_, 0, v___x_87_);
lean_ctor_set(v___x_88_, 1, v_a_84_);
return v___x_88_;
}
else
{
lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; uint8_t v___x_92_; 
v___x_89_ = lean_unsigned_to_nat(0u);
v___x_90_ = l_Lean_Syntax_getArg(v_x_82_, v___x_89_);
v___x_91_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______unexpand__belongs__1___closed__1));
lean_inc(v___x_90_);
v___x_92_ = l_Lean_Syntax_isOfKind(v___x_90_, v___x_91_);
if (v___x_92_ == 0)
{
lean_object* v___x_93_; lean_object* v___x_94_; 
lean_dec(v___x_90_);
lean_dec(v_x_82_);
v___x_93_ = lean_box(0);
v___x_94_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_94_, 0, v___x_93_);
lean_ctor_set(v___x_94_, 1, v_a_84_);
return v___x_94_;
}
else
{
lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; uint8_t v___x_98_; 
v___x_95_ = lean_unsigned_to_nat(1u);
v___x_96_ = l_Lean_Syntax_getArg(v_x_82_, v___x_95_);
lean_dec(v_x_82_);
v___x_97_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_96_);
v___x_98_ = l_Lean_Syntax_matchesNull(v___x_96_, v___x_97_);
if (v___x_98_ == 0)
{
lean_object* v___x_99_; lean_object* v___x_100_; 
lean_dec(v___x_96_);
lean_dec(v___x_90_);
v___x_99_ = lean_box(0);
v___x_100_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_100_, 0, v___x_99_);
lean_ctor_set(v___x_100_, 1, v_a_84_);
return v___x_100_;
}
else
{
lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v_ref_103_; uint8_t v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_101_ = l_Lean_Syntax_getArg(v___x_96_, v___x_89_);
v___x_102_ = l_Lean_Syntax_getArg(v___x_96_, v___x_95_);
lean_dec(v___x_96_);
v_ref_103_ = l_Lean_replaceRef(v___x_90_, v_a_83_);
lean_dec(v___x_90_);
v___x_104_ = 0;
v___x_105_ = l_Lean_SourceInfo_fromRef(v_ref_103_, v___x_104_);
lean_dec(v_ref_103_);
v___x_106_ = ((lean_object*)(lp_Props2Theories_term___u2208____1___closed__1));
v___x_107_ = ((lean_object*)(lp_Props2Theories_term___u2208____1___closed__4));
lean_inc(v___x_105_);
v___x_108_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_108_, 0, v___x_105_);
lean_ctor_set(v___x_108_, 1, v___x_107_);
v___x_109_ = l_Lean_Syntax_node3(v___x_105_, v___x_106_, v___x_101_, v___x_108_, v___x_102_);
v___x_110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_110_, 0, v___x_109_);
lean_ctor_set(v___x_110_, 1, v_a_84_);
return v___x_110_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______unexpand__belongs__1___boxed(lean_object* v_x_111_, lean_object* v_a_112_, lean_object* v_a_113_){
_start:
{
lean_object* v_res_114_; 
v_res_114_ = lp_Props2Theories___aux__Props2Theories__Axioms______unexpand__belongs__1(v_x_111_, v_a_112_, v_a_113_);
lean_dec(v_a_112_);
return v_res_114_;
}
}
static lean_object* _init_lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__11(void){
_start:
{
lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_155_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__10));
v___x_156_ = l_String_toRawSubstring_x27(v___x_155_);
return v___x_156_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1(lean_object* v_x_250_, lean_object* v_a_251_, lean_object* v_a_252_){
_start:
{
lean_object* v___x_253_; uint8_t v___x_254_; 
v___x_253_ = ((lean_object*)(lp_Props2Theories_term___u2209____1___closed__1));
lean_inc(v_x_250_);
v___x_254_ = l_Lean_Syntax_isOfKind(v_x_250_, v___x_253_);
if (v___x_254_ == 0)
{
lean_object* v___x_255_; lean_object* v___x_256_; 
lean_dec(v_x_250_);
v___x_255_ = lean_box(1);
v___x_256_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_256_, 0, v___x_255_);
lean_ctor_set(v___x_256_, 1, v_a_252_);
return v___x_256_;
}
else
{
lean_object* v_quotContext_257_; lean_object* v_currMacroScope_258_; lean_object* v_ref_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; uint8_t v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; 
v_quotContext_257_ = lean_ctor_get(v_a_251_, 1);
v_currMacroScope_258_ = lean_ctor_get(v_a_251_, 2);
v_ref_259_ = lean_ctor_get(v_a_251_, 5);
v___x_260_ = lean_unsigned_to_nat(0u);
v___x_261_ = l_Lean_Syntax_getArg(v_x_250_, v___x_260_);
v___x_262_ = lean_unsigned_to_nat(2u);
v___x_263_ = l_Lean_Syntax_getArg(v_x_250_, v___x_262_);
lean_dec(v_x_250_);
v___x_264_ = 0;
v___x_265_ = l_Lean_SourceInfo_fromRef(v_ref_259_, v___x_264_);
v___x_266_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__1));
v___x_267_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__2));
lean_inc_n(v___x_265_, 10);
v___x_268_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_268_, 0, v___x_265_);
lean_ctor_set(v___x_268_, 1, v___x_267_);
v___x_269_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__4));
v___x_270_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__6));
v___x_271_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__7));
v___x_272_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_272_, 0, v___x_265_);
lean_ctor_set(v___x_272_, 1, v___x_271_);
v___x_273_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__9));
v___x_274_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__11, &lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__11_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__11);
v___x_275_ = lean_box(0);
lean_inc_n(v_currMacroScope_258_, 2);
lean_inc_n(v_quotContext_257_, 2);
v___x_276_ = l_Lean_addMacroScope(v_quotContext_257_, v___x_275_, v_currMacroScope_258_);
v___x_277_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__46));
v___x_278_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_278_, 0, v___x_265_);
lean_ctor_set(v___x_278_, 1, v___x_274_);
lean_ctor_set(v___x_278_, 2, v___x_276_);
lean_ctor_set(v___x_278_, 3, v___x_277_);
v___x_279_ = l_Lean_Syntax_node1(v___x_265_, v___x_273_, v___x_278_);
v___x_280_ = l_Lean_Syntax_node2(v___x_265_, v___x_270_, v___x_272_, v___x_279_);
v___x_281_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__4));
v___x_282_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__6, &lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__6_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__6);
v___x_283_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__7));
v___x_284_ = l_Lean_addMacroScope(v_quotContext_257_, v___x_283_, v_currMacroScope_258_);
v___x_285_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__48));
v___x_286_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_286_, 0, v___x_265_);
lean_ctor_set(v___x_286_, 1, v___x_282_);
lean_ctor_set(v___x_286_, 2, v___x_284_);
lean_ctor_set(v___x_286_, 3, v___x_285_);
v___x_287_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__11));
v___x_288_ = l_Lean_Syntax_node2(v___x_265_, v___x_287_, v___x_261_, v___x_263_);
v___x_289_ = l_Lean_Syntax_node2(v___x_265_, v___x_281_, v___x_286_, v___x_288_);
v___x_290_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__49));
v___x_291_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_291_, 0, v___x_265_);
lean_ctor_set(v___x_291_, 1, v___x_290_);
v___x_292_ = l_Lean_Syntax_node3(v___x_265_, v___x_269_, v___x_280_, v___x_289_, v___x_291_);
v___x_293_ = l_Lean_Syntax_node2(v___x_265_, v___x_266_, v___x_268_, v___x_292_);
v___x_294_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_294_, 0, v___x_293_);
lean_ctor_set(v___x_294_, 1, v_a_252_);
return v___x_294_;
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___boxed(lean_object* v_x_295_, lean_object* v_a_296_, lean_object* v_a_297_){
_start:
{
lean_object* v_res_298_; 
v_res_298_ = lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1(v_x_295_, v_a_296_, v_a_297_);
lean_dec_ref(v_a_296_);
return v_res_298_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories_delabNotMem(lean_object* v_a_314_, lean_object* v_a_315_, lean_object* v_a_316_, lean_object* v_a_317_, lean_object* v_a_318_, lean_object* v_a_319_){
_start:
{
lean_object* v___x_321_; lean_object* v_a_322_; lean_object* v___x_323_; lean_object* v___x_324_; uint8_t v___x_325_; 
v___x_321_ = l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___00Lean_PrettyPrinter_Delaborator_SubExpr_withAppArg___at___00__private_Lean_Elab_Tactic_Do_Syntax_0__Std_Do_unexpandPostCondNoThrow_spec__0_spec__0___redArg(v_a_314_);
v_a_322_ = lean_ctor_get(v___x_321_, 0);
lean_inc(v_a_322_);
lean_dec_ref(v___x_321_);
v___x_323_ = ((lean_object*)(lp_Props2Theories_delabNotMem___closed__1));
v___x_324_ = lean_unsigned_to_nat(1u);
v___x_325_ = l_Lean_Expr_isAppOfArity(v_a_322_, v___x_323_, v___x_324_);
if (v___x_325_ == 0)
{
lean_object* v___x_326_; 
lean_dec(v_a_322_);
v___x_326_ = l_Lean_PrettyPrinter_Delaborator_failure___redArg();
return v___x_326_;
}
else
{
lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; uint8_t v___x_330_; 
v___x_327_ = l_Lean_Expr_appArg_x21(v_a_322_);
lean_dec(v_a_322_);
v___x_328_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__7));
v___x_329_ = lean_unsigned_to_nat(2u);
v___x_330_ = l_Lean_Expr_isAppOfArity(v___x_327_, v___x_328_, v___x_329_);
lean_dec_ref(v___x_327_);
if (v___x_330_ == 0)
{
lean_object* v___x_331_; 
v___x_331_ = l_Lean_PrettyPrinter_Delaborator_failure___redArg();
return v___x_331_;
}
else
{
lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; 
v___x_332_ = ((lean_object*)(lp_Props2Theories_delabNotMem___closed__3));
v___x_333_ = ((lean_object*)(lp_Props2Theories_delabNotMem___closed__4));
v___x_334_ = l_Lean_PrettyPrinter_Delaborator_SubExpr_withAppArg___at___00__private_Lean_Elab_Tactic_Do_Syntax_0__Std_Do_unexpandPostCondNoThrow_spec__0___redArg(v___x_333_, v_a_314_, v_a_315_, v_a_316_, v_a_317_, v_a_318_, v_a_319_);
if (lean_obj_tag(v___x_334_) == 0)
{
lean_object* v_a_335_; lean_object* v___x_336_; 
v_a_335_ = lean_ctor_get(v___x_334_, 0);
lean_inc(v_a_335_);
lean_dec_ref(v___x_334_);
v___x_336_ = l_Lean_PrettyPrinter_Delaborator_SubExpr_withAppArg___at___00__private_Lean_Elab_Tactic_Do_Syntax_0__Std_Do_unexpandPostCondNoThrow_spec__0___redArg(v___x_332_, v_a_314_, v_a_315_, v_a_316_, v_a_317_, v_a_318_, v_a_319_);
if (lean_obj_tag(v___x_336_) == 0)
{
lean_object* v_a_337_; lean_object* v___x_339_; uint8_t v_isShared_340_; uint8_t v_isSharedCheck_355_; 
v_a_337_ = lean_ctor_get(v___x_336_, 0);
v_isSharedCheck_355_ = !lean_is_exclusive(v___x_336_);
if (v_isSharedCheck_355_ == 0)
{
v___x_339_ = v___x_336_;
v_isShared_340_ = v_isSharedCheck_355_;
goto v_resetjp_338_;
}
else
{
lean_inc(v_a_337_);
lean_dec(v___x_336_);
v___x_339_ = lean_box(0);
v_isShared_340_ = v_isSharedCheck_355_;
goto v_resetjp_338_;
}
v_resetjp_338_:
{
lean_object* v_ref_341_; uint8_t v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_353_; 
v_ref_341_ = lean_ctor_get(v_a_318_, 5);
v___x_342_ = 0;
v___x_343_ = l_Lean_SourceInfo_fromRef(v_ref_341_, v___x_342_);
v___x_344_ = ((lean_object*)(lp_Props2Theories_delabNotMem___closed__6));
v___x_345_ = ((lean_object*)(lp_Props2Theories_term___u2209____1___closed__1));
v___x_346_ = ((lean_object*)(lp_Props2Theories_delabNotMem___closed__7));
lean_inc_n(v___x_343_, 3);
v___x_347_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_347_, 0, v___x_343_);
lean_ctor_set(v___x_347_, 1, v___x_346_);
lean_inc(v_a_337_);
lean_inc_ref(v___x_347_);
lean_inc(v_a_335_);
v___x_348_ = l_Lean_Syntax_node3(v___x_343_, v___x_345_, v_a_335_, v___x_347_, v_a_337_);
v___x_349_ = ((lean_object*)(lp_Props2Theories_delabNotMem___closed__9));
v___x_350_ = l_Lean_Syntax_node3(v___x_343_, v___x_349_, v_a_335_, v___x_347_, v_a_337_);
v___x_351_ = l_Lean_Syntax_node2(v___x_343_, v___x_344_, v___x_348_, v___x_350_);
if (v_isShared_340_ == 0)
{
lean_ctor_set(v___x_339_, 0, v___x_351_);
v___x_353_ = v___x_339_;
goto v_reusejp_352_;
}
else
{
lean_object* v_reuseFailAlloc_354_; 
v_reuseFailAlloc_354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_354_, 0, v___x_351_);
v___x_353_ = v_reuseFailAlloc_354_;
goto v_reusejp_352_;
}
v_reusejp_352_:
{
return v___x_353_;
}
}
}
else
{
lean_dec(v_a_335_);
return v___x_336_;
}
}
else
{
return v___x_334_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories_delabNotMem___boxed(lean_object* v_a_356_, lean_object* v_a_357_, lean_object* v_a_358_, lean_object* v_a_359_, lean_object* v_a_360_, lean_object* v_a_361_, lean_object* v_a_362_){
_start:
{
lean_object* v_res_363_; 
v_res_363_ = lp_Props2Theories_delabNotMem(v_a_356_, v_a_357_, v_a_358_, v_a_359_, v_a_360_, v_a_361_);
lean_dec(v_a_361_);
lean_dec_ref(v_a_360_);
lean_dec(v_a_359_);
lean_dec_ref(v_a_358_);
lean_dec(v_a_357_);
lean_dec_ref(v_a_356_);
return v_res_363_;
}
}
static lean_object* _init_lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__1(void){
_start:
{
lean_object* v___x_407_; lean_object* v___x_408_; 
v___x_407_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__0));
v___x_408_ = l_String_toRawSubstring_x27(v___x_407_);
return v___x_408_;
}
}
static lean_object* _init_lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19(void){
_start:
{
lean_object* v___x_459_; 
v___x_459_ = l_Array_mkArray0(lean_box(0));
return v___x_459_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1(lean_object* v_x_464_, lean_object* v_a_465_, lean_object* v_a_466_){
_start:
{
lean_object* v___y_468_; lean_object* v___x_471_; lean_object* v_x_473_; lean_object* v_xs_474_; lean_object* v_rest_475_; lean_object* v_A_476_; lean_object* v_p_477_; lean_object* v___y_478_; lean_object* v___y_479_; uint8_t v___x_531_; 
v___x_471_ = ((lean_object*)(lp_Props2Theories_forall__in___closed__1));
lean_inc(v_x_464_);
v___x_531_ = l_Lean_Syntax_isOfKind(v_x_464_, v___x_471_);
if (v___x_531_ == 0)
{
lean_object* v___x_532_; lean_object* v___x_533_; 
lean_dec(v_x_464_);
v___x_532_ = lean_box(1);
v___x_533_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_533_, 0, v___x_532_);
lean_ctor_set(v___x_533_, 1, v_a_466_);
return v___x_533_;
}
else
{
lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; uint8_t v___x_537_; 
v___x_534_ = lean_unsigned_to_nat(0u);
v___x_535_ = lean_unsigned_to_nat(1u);
v___x_536_ = l_Lean_Syntax_getArg(v_x_464_, v___x_535_);
lean_inc(v___x_536_);
v___x_537_ = l_Lean_Syntax_matchesNull(v___x_536_, v___x_535_);
if (v___x_537_ == 0)
{
lean_object* v___x_538_; lean_object* v___x_539_; uint8_t v___x_540_; 
v___x_538_ = lean_unsigned_to_nat(2u);
v___x_539_ = l_Lean_Syntax_getNumArgs(v___x_536_);
v___x_540_ = lean_nat_dec_le(v___x_538_, v___x_539_);
if (v___x_540_ == 0)
{
lean_dec(v___x_539_);
lean_dec(v___x_536_);
lean_dec(v_x_464_);
v___y_468_ = v_a_466_;
goto v___jp_467_;
}
else
{
lean_object* v_x_541_; lean_object* v___x_542_; uint8_t v___x_543_; 
v_x_541_ = l_Lean_Syntax_getArg(v___x_536_, v___x_534_);
v___x_542_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______unexpand__belongs__1___closed__1));
lean_inc(v_x_541_);
v___x_543_ = l_Lean_Syntax_isOfKind(v_x_541_, v___x_542_);
if (v___x_543_ == 0)
{
lean_dec(v_x_541_);
lean_dec(v___x_539_);
lean_dec(v___x_536_);
lean_dec(v_x_464_);
v___y_468_ = v_a_466_;
goto v___jp_467_;
}
else
{
lean_object* v_xs_544_; uint8_t v___x_545_; 
v_xs_544_ = l_Lean_Syntax_getArg(v___x_536_, v___x_535_);
lean_inc(v_xs_544_);
v___x_545_ = l_Lean_Syntax_isOfKind(v_xs_544_, v___x_542_);
if (v___x_545_ == 0)
{
lean_dec(v_xs_544_);
lean_dec(v_x_541_);
lean_dec(v___x_539_);
lean_dec(v___x_536_);
lean_dec(v_x_464_);
v___y_468_ = v_a_466_;
goto v___jp_467_;
}
else
{
lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v_A_552_; lean_object* v___x_553_; lean_object* v_p_554_; lean_object* v_rest_555_; 
v___x_546_ = l_Lean_Syntax_getArgs(v___x_536_);
lean_dec(v___x_536_);
v___x_547_ = l_Array_extract___redArg(v___x_546_, v___x_538_, v___x_539_);
lean_dec_ref(v___x_546_);
v___x_548_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__11));
v___x_549_ = lean_box(2);
v___x_550_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_550_, 0, v___x_549_);
lean_ctor_set(v___x_550_, 1, v___x_548_);
lean_ctor_set(v___x_550_, 2, v___x_547_);
v___x_551_ = lean_unsigned_to_nat(3u);
v_A_552_ = l_Lean_Syntax_getArg(v_x_464_, v___x_551_);
v___x_553_ = lean_unsigned_to_nat(5u);
v_p_554_ = l_Lean_Syntax_getArg(v_x_464_, v___x_553_);
lean_dec(v_x_464_);
v_rest_555_ = l_Lean_Syntax_getArgs(v___x_550_);
lean_dec_ref(v___x_550_);
v_x_473_ = v_x_541_;
v_xs_474_ = v_xs_544_;
v_rest_475_ = v_rest_555_;
v_A_476_ = v_A_552_;
v_p_477_ = v_p_554_;
v___y_478_ = v_a_465_;
v___y_479_ = v_a_466_;
goto v___jp_472_;
}
}
}
}
else
{
lean_object* v_x_556_; lean_object* v___x_557_; uint8_t v___x_558_; 
v_x_556_ = l_Lean_Syntax_getArg(v___x_536_, v___x_534_);
v___x_557_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______unexpand__belongs__1___closed__1));
lean_inc(v_x_556_);
v___x_558_ = l_Lean_Syntax_isOfKind(v_x_556_, v___x_557_);
if (v___x_558_ == 0)
{
lean_object* v___x_559_; lean_object* v___x_560_; uint8_t v___x_561_; 
v___x_559_ = lean_unsigned_to_nat(2u);
v___x_560_ = l_Lean_Syntax_getNumArgs(v___x_536_);
v___x_561_ = lean_nat_dec_le(v___x_559_, v___x_560_);
if (v___x_561_ == 0)
{
lean_dec(v___x_560_);
lean_dec(v_x_556_);
lean_dec(v___x_536_);
lean_dec(v_x_464_);
v___y_468_ = v_a_466_;
goto v___jp_467_;
}
else
{
if (v___x_558_ == 0)
{
lean_dec(v___x_560_);
lean_dec(v_x_556_);
lean_dec(v___x_536_);
lean_dec(v_x_464_);
v___y_468_ = v_a_466_;
goto v___jp_467_;
}
else
{
lean_object* v_xs_562_; uint8_t v___x_563_; 
v_xs_562_ = l_Lean_Syntax_getArg(v___x_536_, v___x_535_);
lean_inc(v_xs_562_);
v___x_563_ = l_Lean_Syntax_isOfKind(v_xs_562_, v___x_557_);
if (v___x_563_ == 0)
{
lean_dec(v_xs_562_);
lean_dec(v___x_560_);
lean_dec(v_x_556_);
lean_dec(v___x_536_);
lean_dec(v_x_464_);
v___y_468_ = v_a_466_;
goto v___jp_467_;
}
else
{
lean_object* v___x_564_; lean_object* v_A_565_; lean_object* v___x_566_; lean_object* v_p_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v_rest_573_; 
v___x_564_ = lean_unsigned_to_nat(3u);
v_A_565_ = l_Lean_Syntax_getArg(v_x_464_, v___x_564_);
v___x_566_ = lean_unsigned_to_nat(5u);
v_p_567_ = l_Lean_Syntax_getArg(v_x_464_, v___x_566_);
lean_dec(v_x_464_);
v___x_568_ = l_Lean_Syntax_getArgs(v___x_536_);
lean_dec(v___x_536_);
v___x_569_ = l_Array_extract___redArg(v___x_568_, v___x_559_, v___x_560_);
lean_dec_ref(v___x_568_);
v___x_570_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__11));
v___x_571_ = lean_box(2);
v___x_572_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_572_, 0, v___x_571_);
lean_ctor_set(v___x_572_, 1, v___x_570_);
lean_ctor_set(v___x_572_, 2, v___x_569_);
v_rest_573_ = l_Lean_Syntax_getArgs(v___x_572_);
lean_dec_ref(v___x_572_);
v_x_473_ = v_x_556_;
v_xs_474_ = v_xs_562_;
v_rest_475_ = v_rest_573_;
v_A_476_ = v_A_565_;
v_p_477_ = v_p_567_;
v___y_478_ = v_a_465_;
v___y_479_ = v_a_466_;
goto v___jp_472_;
}
}
}
}
else
{
lean_object* v_quotContext_574_; lean_object* v_currMacroScope_575_; lean_object* v_ref_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; uint8_t v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; 
lean_dec(v___x_536_);
v_quotContext_574_ = lean_ctor_get(v_a_465_, 1);
v_currMacroScope_575_ = lean_ctor_get(v_a_465_, 2);
v_ref_576_ = lean_ctor_get(v_a_465_, 5);
v___x_577_ = lean_unsigned_to_nat(3u);
v___x_578_ = l_Lean_Syntax_getArg(v_x_464_, v___x_577_);
v___x_579_ = lean_unsigned_to_nat(5u);
v___x_580_ = l_Lean_Syntax_getArg(v_x_464_, v___x_579_);
lean_dec(v_x_464_);
v___x_581_ = 0;
v___x_582_ = l_Lean_SourceInfo_fromRef(v_ref_576_, v___x_581_);
v___x_583_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__4));
v___x_584_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__1, &lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__1_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__1);
v___x_585_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__2));
lean_inc_n(v_currMacroScope_575_, 2);
lean_inc_n(v_quotContext_574_, 2);
v___x_586_ = l_Lean_addMacroScope(v_quotContext_574_, v___x_585_, v_currMacroScope_575_);
v___x_587_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__4));
lean_inc_n(v___x_582_, 14);
v___x_588_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_588_, 0, v___x_582_);
lean_ctor_set(v___x_588_, 1, v___x_584_);
lean_ctor_set(v___x_588_, 2, v___x_586_);
lean_ctor_set(v___x_588_, 3, v___x_587_);
v___x_589_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__11));
v___x_590_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__4));
v___x_591_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__6));
v___x_592_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__7));
v___x_593_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_593_, 0, v___x_582_);
lean_ctor_set(v___x_593_, 1, v___x_592_);
v___x_594_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__9));
v___x_595_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__11, &lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__11_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__11);
v___x_596_ = lean_box(0);
v___x_597_ = l_Lean_addMacroScope(v_quotContext_574_, v___x_596_, v_currMacroScope_575_);
v___x_598_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__14));
v___x_599_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_599_, 0, v___x_582_);
lean_ctor_set(v___x_599_, 1, v___x_595_);
lean_ctor_set(v___x_599_, 2, v___x_597_);
lean_ctor_set(v___x_599_, 3, v___x_598_);
v___x_600_ = l_Lean_Syntax_node1(v___x_582_, v___x_594_, v___x_599_);
v___x_601_ = l_Lean_Syntax_node2(v___x_582_, v___x_591_, v___x_593_, v___x_600_);
v___x_602_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__15));
v___x_603_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__16));
v___x_604_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_604_, 0, v___x_582_);
lean_ctor_set(v___x_604_, 1, v___x_602_);
v___x_605_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__18));
v___x_606_ = l_Lean_Syntax_node1(v___x_582_, v___x_589_, v_x_556_);
v___x_607_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19, &lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19);
v___x_608_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_608_, 0, v___x_582_);
lean_ctor_set(v___x_608_, 1, v___x_589_);
lean_ctor_set(v___x_608_, 2, v___x_607_);
v___x_609_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__20));
v___x_610_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_610_, 0, v___x_582_);
lean_ctor_set(v___x_610_, 1, v___x_609_);
v___x_611_ = l_Lean_Syntax_node4(v___x_582_, v___x_605_, v___x_606_, v___x_608_, v___x_610_, v___x_580_);
v___x_612_ = l_Lean_Syntax_node2(v___x_582_, v___x_603_, v___x_604_, v___x_611_);
v___x_613_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__49));
v___x_614_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_614_, 0, v___x_582_);
lean_ctor_set(v___x_614_, 1, v___x_613_);
v___x_615_ = l_Lean_Syntax_node3(v___x_582_, v___x_590_, v___x_601_, v___x_612_, v___x_614_);
v___x_616_ = l_Lean_Syntax_node2(v___x_582_, v___x_589_, v___x_615_, v___x_578_);
v___x_617_ = l_Lean_Syntax_node2(v___x_582_, v___x_583_, v___x_588_, v___x_616_);
v___x_618_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_618_, 0, v___x_617_);
lean_ctor_set(v___x_618_, 1, v_a_466_);
return v___x_618_;
}
}
}
v___jp_467_:
{
lean_object* v___x_469_; lean_object* v___x_470_; 
v___x_469_ = lean_box(1);
v___x_470_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_470_, 0, v___x_469_);
lean_ctor_set(v___x_470_, 1, v___y_468_);
return v___x_470_;
}
v___jp_472_:
{
lean_object* v_quotContext_480_; lean_object* v_currMacroScope_481_; lean_object* v_ref_482_; uint8_t v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; 
v_quotContext_480_ = lean_ctor_get(v___y_478_, 1);
v_currMacroScope_481_ = lean_ctor_get(v___y_478_, 2);
v_ref_482_ = lean_ctor_get(v___y_478_, 5);
v___x_483_ = 0;
v___x_484_ = l_Lean_SourceInfo_fromRef(v_ref_482_, v___x_483_);
v___x_485_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__4));
v___x_486_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__1, &lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__1_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__1);
v___x_487_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__2));
lean_inc_n(v_currMacroScope_481_, 2);
lean_inc_n(v_quotContext_480_, 2);
v___x_488_ = l_Lean_addMacroScope(v_quotContext_480_, v___x_487_, v_currMacroScope_481_);
v___x_489_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__4));
lean_inc_n(v___x_484_, 19);
v___x_490_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_490_, 0, v___x_484_);
lean_ctor_set(v___x_490_, 1, v___x_486_);
lean_ctor_set(v___x_490_, 2, v___x_488_);
lean_ctor_set(v___x_490_, 3, v___x_489_);
v___x_491_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__11));
v___x_492_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__4));
v___x_493_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__6));
v___x_494_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__7));
v___x_495_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_495_, 0, v___x_484_);
lean_ctor_set(v___x_495_, 1, v___x_494_);
v___x_496_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__9));
v___x_497_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__11, &lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__11_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__11);
v___x_498_ = lean_box(0);
v___x_499_ = l_Lean_addMacroScope(v_quotContext_480_, v___x_498_, v_currMacroScope_481_);
v___x_500_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__14));
v___x_501_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_501_, 0, v___x_484_);
lean_ctor_set(v___x_501_, 1, v___x_497_);
lean_ctor_set(v___x_501_, 2, v___x_499_);
lean_ctor_set(v___x_501_, 3, v___x_500_);
v___x_502_ = l_Lean_Syntax_node1(v___x_484_, v___x_496_, v___x_501_);
v___x_503_ = l_Lean_Syntax_node2(v___x_484_, v___x_493_, v___x_495_, v___x_502_);
v___x_504_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__15));
v___x_505_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__16));
v___x_506_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_506_, 0, v___x_484_);
lean_ctor_set(v___x_506_, 1, v___x_504_);
v___x_507_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__18));
v___x_508_ = l_Lean_Syntax_node1(v___x_484_, v___x_491_, v_x_473_);
v___x_509_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19, &lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19);
v___x_510_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_510_, 0, v___x_484_);
lean_ctor_set(v___x_510_, 1, v___x_491_);
lean_ctor_set(v___x_510_, 2, v___x_509_);
v___x_511_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__20));
v___x_512_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_512_, 0, v___x_484_);
lean_ctor_set(v___x_512_, 1, v___x_511_);
v___x_513_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__21));
v___x_514_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_514_, 0, v___x_484_);
lean_ctor_set(v___x_514_, 1, v___x_513_);
v___x_515_ = l_Array_mkArray1___redArg(v_xs_474_);
v___x_516_ = l_Array_append___redArg(v___x_515_, v_rest_475_);
lean_dec_ref(v_rest_475_);
v___x_517_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_517_, 0, v___x_484_);
lean_ctor_set(v___x_517_, 1, v___x_491_);
lean_ctor_set(v___x_517_, 2, v___x_516_);
v___x_518_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__22));
v___x_519_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_519_, 0, v___x_484_);
lean_ctor_set(v___x_519_, 1, v___x_518_);
v___x_520_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__23));
v___x_521_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_521_, 0, v___x_484_);
lean_ctor_set(v___x_521_, 1, v___x_520_);
lean_inc(v_A_476_);
v___x_522_ = l_Lean_Syntax_node6(v___x_484_, v___x_471_, v___x_514_, v___x_517_, v___x_519_, v_A_476_, v___x_521_, v_p_477_);
v___x_523_ = l_Lean_Syntax_node4(v___x_484_, v___x_507_, v___x_508_, v___x_510_, v___x_512_, v___x_522_);
v___x_524_ = l_Lean_Syntax_node2(v___x_484_, v___x_505_, v___x_506_, v___x_523_);
v___x_525_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__49));
v___x_526_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_526_, 0, v___x_484_);
lean_ctor_set(v___x_526_, 1, v___x_525_);
v___x_527_ = l_Lean_Syntax_node3(v___x_484_, v___x_492_, v___x_503_, v___x_524_, v___x_526_);
v___x_528_ = l_Lean_Syntax_node2(v___x_484_, v___x_491_, v___x_527_, v_A_476_);
v___x_529_ = l_Lean_Syntax_node2(v___x_484_, v___x_485_, v___x_490_, v___x_528_);
v___x_530_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_530_, 0, v___x_529_);
lean_ctor_set(v___x_530_, 1, v___y_479_);
return v___x_530_;
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___boxed(lean_object* v_x_619_, lean_object* v_a_620_, lean_object* v_a_621_){
_start:
{
lean_object* v_res_622_; 
v_res_622_ = lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1(v_x_619_, v_a_620_, v_a_621_);
lean_dec_ref(v_a_620_);
return v_res_622_;
}
}
static lean_object* _init_lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__in__1___closed__1(void){
_start:
{
lean_object* v___x_655_; lean_object* v___x_656_; 
v___x_655_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__in__1___closed__0));
v___x_656_ = l_String_toRawSubstring_x27(v___x_655_);
return v___x_656_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__in__1(lean_object* v_x_666_, lean_object* v_a_667_, lean_object* v_a_668_){
_start:
{
lean_object* v___y_670_; lean_object* v___x_673_; lean_object* v_x_675_; lean_object* v_xs_676_; lean_object* v_rest_677_; lean_object* v_A_678_; lean_object* v_p_679_; lean_object* v___y_680_; lean_object* v___y_681_; uint8_t v___x_733_; 
v___x_673_ = ((lean_object*)(lp_Props2Theories_exists__in___closed__1));
lean_inc(v_x_666_);
v___x_733_ = l_Lean_Syntax_isOfKind(v_x_666_, v___x_673_);
if (v___x_733_ == 0)
{
lean_object* v___x_734_; lean_object* v___x_735_; 
lean_dec(v_x_666_);
v___x_734_ = lean_box(1);
v___x_735_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_735_, 0, v___x_734_);
lean_ctor_set(v___x_735_, 1, v_a_668_);
return v___x_735_;
}
else
{
lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; uint8_t v___x_739_; 
v___x_736_ = lean_unsigned_to_nat(0u);
v___x_737_ = lean_unsigned_to_nat(1u);
v___x_738_ = l_Lean_Syntax_getArg(v_x_666_, v___x_737_);
lean_inc(v___x_738_);
v___x_739_ = l_Lean_Syntax_matchesNull(v___x_738_, v___x_737_);
if (v___x_739_ == 0)
{
lean_object* v___x_740_; lean_object* v___x_741_; uint8_t v___x_742_; 
v___x_740_ = lean_unsigned_to_nat(2u);
v___x_741_ = l_Lean_Syntax_getNumArgs(v___x_738_);
v___x_742_ = lean_nat_dec_le(v___x_740_, v___x_741_);
if (v___x_742_ == 0)
{
lean_dec(v___x_741_);
lean_dec(v___x_738_);
lean_dec(v_x_666_);
v___y_670_ = v_a_668_;
goto v___jp_669_;
}
else
{
lean_object* v_x_743_; lean_object* v___x_744_; uint8_t v___x_745_; 
v_x_743_ = l_Lean_Syntax_getArg(v___x_738_, v___x_736_);
v___x_744_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______unexpand__belongs__1___closed__1));
lean_inc(v_x_743_);
v___x_745_ = l_Lean_Syntax_isOfKind(v_x_743_, v___x_744_);
if (v___x_745_ == 0)
{
lean_dec(v_x_743_);
lean_dec(v___x_741_);
lean_dec(v___x_738_);
lean_dec(v_x_666_);
v___y_670_ = v_a_668_;
goto v___jp_669_;
}
else
{
lean_object* v_xs_746_; uint8_t v___x_747_; 
v_xs_746_ = l_Lean_Syntax_getArg(v___x_738_, v___x_737_);
lean_inc(v_xs_746_);
v___x_747_ = l_Lean_Syntax_isOfKind(v_xs_746_, v___x_744_);
if (v___x_747_ == 0)
{
lean_dec(v_xs_746_);
lean_dec(v_x_743_);
lean_dec(v___x_741_);
lean_dec(v___x_738_);
lean_dec(v_x_666_);
v___y_670_ = v_a_668_;
goto v___jp_669_;
}
else
{
lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v_A_754_; lean_object* v___x_755_; lean_object* v_p_756_; lean_object* v_rest_757_; 
v___x_748_ = l_Lean_Syntax_getArgs(v___x_738_);
lean_dec(v___x_738_);
v___x_749_ = l_Array_extract___redArg(v___x_748_, v___x_740_, v___x_741_);
lean_dec_ref(v___x_748_);
v___x_750_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__11));
v___x_751_ = lean_box(2);
v___x_752_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_752_, 0, v___x_751_);
lean_ctor_set(v___x_752_, 1, v___x_750_);
lean_ctor_set(v___x_752_, 2, v___x_749_);
v___x_753_ = lean_unsigned_to_nat(3u);
v_A_754_ = l_Lean_Syntax_getArg(v_x_666_, v___x_753_);
v___x_755_ = lean_unsigned_to_nat(5u);
v_p_756_ = l_Lean_Syntax_getArg(v_x_666_, v___x_755_);
lean_dec(v_x_666_);
v_rest_757_ = l_Lean_Syntax_getArgs(v___x_752_);
lean_dec_ref(v___x_752_);
v_x_675_ = v_x_743_;
v_xs_676_ = v_xs_746_;
v_rest_677_ = v_rest_757_;
v_A_678_ = v_A_754_;
v_p_679_ = v_p_756_;
v___y_680_ = v_a_667_;
v___y_681_ = v_a_668_;
goto v___jp_674_;
}
}
}
}
else
{
lean_object* v_x_758_; lean_object* v___x_759_; uint8_t v___x_760_; 
v_x_758_ = l_Lean_Syntax_getArg(v___x_738_, v___x_736_);
v___x_759_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______unexpand__belongs__1___closed__1));
lean_inc(v_x_758_);
v___x_760_ = l_Lean_Syntax_isOfKind(v_x_758_, v___x_759_);
if (v___x_760_ == 0)
{
lean_object* v___x_761_; lean_object* v___x_762_; uint8_t v___x_763_; 
v___x_761_ = lean_unsigned_to_nat(2u);
v___x_762_ = l_Lean_Syntax_getNumArgs(v___x_738_);
v___x_763_ = lean_nat_dec_le(v___x_761_, v___x_762_);
if (v___x_763_ == 0)
{
lean_dec(v___x_762_);
lean_dec(v_x_758_);
lean_dec(v___x_738_);
lean_dec(v_x_666_);
v___y_670_ = v_a_668_;
goto v___jp_669_;
}
else
{
if (v___x_760_ == 0)
{
lean_dec(v___x_762_);
lean_dec(v_x_758_);
lean_dec(v___x_738_);
lean_dec(v_x_666_);
v___y_670_ = v_a_668_;
goto v___jp_669_;
}
else
{
lean_object* v_xs_764_; uint8_t v___x_765_; 
v_xs_764_ = l_Lean_Syntax_getArg(v___x_738_, v___x_737_);
lean_inc(v_xs_764_);
v___x_765_ = l_Lean_Syntax_isOfKind(v_xs_764_, v___x_759_);
if (v___x_765_ == 0)
{
lean_dec(v_xs_764_);
lean_dec(v___x_762_);
lean_dec(v_x_758_);
lean_dec(v___x_738_);
lean_dec(v_x_666_);
v___y_670_ = v_a_668_;
goto v___jp_669_;
}
else
{
lean_object* v___x_766_; lean_object* v_A_767_; lean_object* v___x_768_; lean_object* v_p_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v_rest_775_; 
v___x_766_ = lean_unsigned_to_nat(3u);
v_A_767_ = l_Lean_Syntax_getArg(v_x_666_, v___x_766_);
v___x_768_ = lean_unsigned_to_nat(5u);
v_p_769_ = l_Lean_Syntax_getArg(v_x_666_, v___x_768_);
lean_dec(v_x_666_);
v___x_770_ = l_Lean_Syntax_getArgs(v___x_738_);
lean_dec(v___x_738_);
v___x_771_ = l_Array_extract___redArg(v___x_770_, v___x_761_, v___x_762_);
lean_dec_ref(v___x_770_);
v___x_772_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__11));
v___x_773_ = lean_box(2);
v___x_774_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_774_, 0, v___x_773_);
lean_ctor_set(v___x_774_, 1, v___x_772_);
lean_ctor_set(v___x_774_, 2, v___x_771_);
v_rest_775_ = l_Lean_Syntax_getArgs(v___x_774_);
lean_dec_ref(v___x_774_);
v_x_675_ = v_x_758_;
v_xs_676_ = v_xs_764_;
v_rest_677_ = v_rest_775_;
v_A_678_ = v_A_767_;
v_p_679_ = v_p_769_;
v___y_680_ = v_a_667_;
v___y_681_ = v_a_668_;
goto v___jp_674_;
}
}
}
}
else
{
lean_object* v_quotContext_776_; lean_object* v_currMacroScope_777_; lean_object* v_ref_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; uint8_t v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; 
lean_dec(v___x_738_);
v_quotContext_776_ = lean_ctor_get(v_a_667_, 1);
v_currMacroScope_777_ = lean_ctor_get(v_a_667_, 2);
v_ref_778_ = lean_ctor_get(v_a_667_, 5);
v___x_779_ = lean_unsigned_to_nat(3u);
v___x_780_ = l_Lean_Syntax_getArg(v_x_666_, v___x_779_);
v___x_781_ = lean_unsigned_to_nat(5u);
v___x_782_ = l_Lean_Syntax_getArg(v_x_666_, v___x_781_);
lean_dec(v_x_666_);
v___x_783_ = 0;
v___x_784_ = l_Lean_SourceInfo_fromRef(v_ref_778_, v___x_783_);
v___x_785_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__4));
v___x_786_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__in__1___closed__1, &lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__in__1___closed__1_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__in__1___closed__1);
v___x_787_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__in__1___closed__2));
lean_inc_n(v_currMacroScope_777_, 2);
lean_inc_n(v_quotContext_776_, 2);
v___x_788_ = l_Lean_addMacroScope(v_quotContext_776_, v___x_787_, v_currMacroScope_777_);
v___x_789_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__in__1___closed__4));
lean_inc_n(v___x_784_, 14);
v___x_790_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_790_, 0, v___x_784_);
lean_ctor_set(v___x_790_, 1, v___x_786_);
lean_ctor_set(v___x_790_, 2, v___x_788_);
lean_ctor_set(v___x_790_, 3, v___x_789_);
v___x_791_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__11));
v___x_792_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__4));
v___x_793_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__6));
v___x_794_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__7));
v___x_795_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_795_, 0, v___x_784_);
lean_ctor_set(v___x_795_, 1, v___x_794_);
v___x_796_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__9));
v___x_797_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__11, &lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__11_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__11);
v___x_798_ = lean_box(0);
v___x_799_ = l_Lean_addMacroScope(v_quotContext_776_, v___x_798_, v_currMacroScope_777_);
v___x_800_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__14));
v___x_801_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_801_, 0, v___x_784_);
lean_ctor_set(v___x_801_, 1, v___x_797_);
lean_ctor_set(v___x_801_, 2, v___x_799_);
lean_ctor_set(v___x_801_, 3, v___x_800_);
v___x_802_ = l_Lean_Syntax_node1(v___x_784_, v___x_796_, v___x_801_);
v___x_803_ = l_Lean_Syntax_node2(v___x_784_, v___x_793_, v___x_795_, v___x_802_);
v___x_804_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__15));
v___x_805_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__16));
v___x_806_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_806_, 0, v___x_784_);
lean_ctor_set(v___x_806_, 1, v___x_804_);
v___x_807_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__18));
v___x_808_ = l_Lean_Syntax_node1(v___x_784_, v___x_791_, v_x_758_);
v___x_809_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19, &lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19);
v___x_810_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_810_, 0, v___x_784_);
lean_ctor_set(v___x_810_, 1, v___x_791_);
lean_ctor_set(v___x_810_, 2, v___x_809_);
v___x_811_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__20));
v___x_812_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_812_, 0, v___x_784_);
lean_ctor_set(v___x_812_, 1, v___x_811_);
v___x_813_ = l_Lean_Syntax_node4(v___x_784_, v___x_807_, v___x_808_, v___x_810_, v___x_812_, v___x_782_);
v___x_814_ = l_Lean_Syntax_node2(v___x_784_, v___x_805_, v___x_806_, v___x_813_);
v___x_815_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__49));
v___x_816_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_816_, 0, v___x_784_);
lean_ctor_set(v___x_816_, 1, v___x_815_);
v___x_817_ = l_Lean_Syntax_node3(v___x_784_, v___x_792_, v___x_803_, v___x_814_, v___x_816_);
v___x_818_ = l_Lean_Syntax_node2(v___x_784_, v___x_791_, v___x_817_, v___x_780_);
v___x_819_ = l_Lean_Syntax_node2(v___x_784_, v___x_785_, v___x_790_, v___x_818_);
v___x_820_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_820_, 0, v___x_819_);
lean_ctor_set(v___x_820_, 1, v_a_668_);
return v___x_820_;
}
}
}
v___jp_669_:
{
lean_object* v___x_671_; lean_object* v___x_672_; 
v___x_671_ = lean_box(1);
v___x_672_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_672_, 0, v___x_671_);
lean_ctor_set(v___x_672_, 1, v___y_670_);
return v___x_672_;
}
v___jp_674_:
{
lean_object* v_quotContext_682_; lean_object* v_currMacroScope_683_; lean_object* v_ref_684_; uint8_t v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; 
v_quotContext_682_ = lean_ctor_get(v___y_680_, 1);
v_currMacroScope_683_ = lean_ctor_get(v___y_680_, 2);
v_ref_684_ = lean_ctor_get(v___y_680_, 5);
v___x_685_ = 0;
v___x_686_ = l_Lean_SourceInfo_fromRef(v_ref_684_, v___x_685_);
v___x_687_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__4));
v___x_688_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__in__1___closed__1, &lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__in__1___closed__1_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__in__1___closed__1);
v___x_689_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__in__1___closed__2));
lean_inc_n(v_currMacroScope_683_, 2);
lean_inc_n(v_quotContext_682_, 2);
v___x_690_ = l_Lean_addMacroScope(v_quotContext_682_, v___x_689_, v_currMacroScope_683_);
v___x_691_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__in__1___closed__4));
lean_inc_n(v___x_686_, 19);
v___x_692_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_692_, 0, v___x_686_);
lean_ctor_set(v___x_692_, 1, v___x_688_);
lean_ctor_set(v___x_692_, 2, v___x_690_);
lean_ctor_set(v___x_692_, 3, v___x_691_);
v___x_693_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__11));
v___x_694_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__4));
v___x_695_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__6));
v___x_696_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__7));
v___x_697_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_697_, 0, v___x_686_);
lean_ctor_set(v___x_697_, 1, v___x_696_);
v___x_698_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__9));
v___x_699_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__11, &lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__11_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__11);
v___x_700_ = lean_box(0);
v___x_701_ = l_Lean_addMacroScope(v_quotContext_682_, v___x_700_, v_currMacroScope_683_);
v___x_702_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__14));
v___x_703_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_703_, 0, v___x_686_);
lean_ctor_set(v___x_703_, 1, v___x_699_);
lean_ctor_set(v___x_703_, 2, v___x_701_);
lean_ctor_set(v___x_703_, 3, v___x_702_);
v___x_704_ = l_Lean_Syntax_node1(v___x_686_, v___x_698_, v___x_703_);
v___x_705_ = l_Lean_Syntax_node2(v___x_686_, v___x_695_, v___x_697_, v___x_704_);
v___x_706_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__15));
v___x_707_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__16));
v___x_708_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_708_, 0, v___x_686_);
lean_ctor_set(v___x_708_, 1, v___x_706_);
v___x_709_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__18));
v___x_710_ = l_Lean_Syntax_node1(v___x_686_, v___x_693_, v_x_675_);
v___x_711_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19, &lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19);
v___x_712_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_712_, 0, v___x_686_);
lean_ctor_set(v___x_712_, 1, v___x_693_);
lean_ctor_set(v___x_712_, 2, v___x_711_);
v___x_713_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__20));
v___x_714_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_714_, 0, v___x_686_);
lean_ctor_set(v___x_714_, 1, v___x_713_);
v___x_715_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__in__1___closed__5));
v___x_716_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_716_, 0, v___x_686_);
lean_ctor_set(v___x_716_, 1, v___x_715_);
v___x_717_ = l_Array_mkArray1___redArg(v_xs_676_);
v___x_718_ = l_Array_append___redArg(v___x_717_, v_rest_677_);
lean_dec_ref(v_rest_677_);
v___x_719_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_719_, 0, v___x_686_);
lean_ctor_set(v___x_719_, 1, v___x_693_);
lean_ctor_set(v___x_719_, 2, v___x_718_);
v___x_720_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__22));
v___x_721_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_721_, 0, v___x_686_);
lean_ctor_set(v___x_721_, 1, v___x_720_);
v___x_722_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__23));
v___x_723_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_723_, 0, v___x_686_);
lean_ctor_set(v___x_723_, 1, v___x_722_);
lean_inc(v_A_678_);
v___x_724_ = l_Lean_Syntax_node6(v___x_686_, v___x_673_, v___x_716_, v___x_719_, v___x_721_, v_A_678_, v___x_723_, v_p_679_);
v___x_725_ = l_Lean_Syntax_node4(v___x_686_, v___x_709_, v___x_710_, v___x_712_, v___x_714_, v___x_724_);
v___x_726_ = l_Lean_Syntax_node2(v___x_686_, v___x_707_, v___x_708_, v___x_725_);
v___x_727_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__49));
v___x_728_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_728_, 0, v___x_686_);
lean_ctor_set(v___x_728_, 1, v___x_727_);
v___x_729_ = l_Lean_Syntax_node3(v___x_686_, v___x_694_, v___x_705_, v___x_726_, v___x_728_);
v___x_730_ = l_Lean_Syntax_node2(v___x_686_, v___x_693_, v___x_729_, v_A_678_);
v___x_731_ = l_Lean_Syntax_node2(v___x_686_, v___x_687_, v___x_692_, v___x_730_);
v___x_732_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_732_, 0, v___x_731_);
lean_ctor_set(v___x_732_, 1, v___y_681_);
return v___x_732_;
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__in__1___boxed(lean_object* v_x_821_, lean_object* v_a_822_, lean_object* v_a_823_){
_start:
{
lean_object* v_res_824_; 
v_res_824_ = lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__in__1(v_x_821_, v_a_822_, v_a_823_);
lean_dec_ref(v_a_822_);
return v_res_824_;
}
}
static lean_object* _init_lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__uniq__in__1___closed__1(void){
_start:
{
lean_object* v___x_857_; lean_object* v___x_858_; 
v___x_857_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__uniq__in__1___closed__0));
v___x_858_ = l_String_toRawSubstring_x27(v___x_857_);
return v___x_858_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__uniq__in__1(lean_object* v_x_868_, lean_object* v_a_869_, lean_object* v_a_870_){
_start:
{
lean_object* v___y_872_; lean_object* v___x_875_; lean_object* v_x_877_; lean_object* v_xs_878_; lean_object* v_rest_879_; lean_object* v_A_880_; lean_object* v_p_881_; lean_object* v___y_882_; lean_object* v___y_883_; uint8_t v___x_935_; 
v___x_875_ = ((lean_object*)(lp_Props2Theories_exists__uniq__in___closed__1));
lean_inc(v_x_868_);
v___x_935_ = l_Lean_Syntax_isOfKind(v_x_868_, v___x_875_);
if (v___x_935_ == 0)
{
lean_object* v___x_936_; lean_object* v___x_937_; 
lean_dec(v_x_868_);
v___x_936_ = lean_box(1);
v___x_937_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_937_, 0, v___x_936_);
lean_ctor_set(v___x_937_, 1, v_a_870_);
return v___x_937_;
}
else
{
lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; uint8_t v___x_941_; 
v___x_938_ = lean_unsigned_to_nat(0u);
v___x_939_ = lean_unsigned_to_nat(1u);
v___x_940_ = l_Lean_Syntax_getArg(v_x_868_, v___x_939_);
lean_inc(v___x_940_);
v___x_941_ = l_Lean_Syntax_matchesNull(v___x_940_, v___x_939_);
if (v___x_941_ == 0)
{
lean_object* v___x_942_; lean_object* v___x_943_; uint8_t v___x_944_; 
v___x_942_ = lean_unsigned_to_nat(2u);
v___x_943_ = l_Lean_Syntax_getNumArgs(v___x_940_);
v___x_944_ = lean_nat_dec_le(v___x_942_, v___x_943_);
if (v___x_944_ == 0)
{
lean_dec(v___x_943_);
lean_dec(v___x_940_);
lean_dec(v_x_868_);
v___y_872_ = v_a_870_;
goto v___jp_871_;
}
else
{
lean_object* v_x_945_; lean_object* v___x_946_; uint8_t v___x_947_; 
v_x_945_ = l_Lean_Syntax_getArg(v___x_940_, v___x_938_);
v___x_946_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______unexpand__belongs__1___closed__1));
lean_inc(v_x_945_);
v___x_947_ = l_Lean_Syntax_isOfKind(v_x_945_, v___x_946_);
if (v___x_947_ == 0)
{
lean_dec(v_x_945_);
lean_dec(v___x_943_);
lean_dec(v___x_940_);
lean_dec(v_x_868_);
v___y_872_ = v_a_870_;
goto v___jp_871_;
}
else
{
lean_object* v_xs_948_; uint8_t v___x_949_; 
v_xs_948_ = l_Lean_Syntax_getArg(v___x_940_, v___x_939_);
lean_inc(v_xs_948_);
v___x_949_ = l_Lean_Syntax_isOfKind(v_xs_948_, v___x_946_);
if (v___x_949_ == 0)
{
lean_dec(v_xs_948_);
lean_dec(v_x_945_);
lean_dec(v___x_943_);
lean_dec(v___x_940_);
lean_dec(v_x_868_);
v___y_872_ = v_a_870_;
goto v___jp_871_;
}
else
{
lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v_A_956_; lean_object* v___x_957_; lean_object* v_p_958_; lean_object* v_rest_959_; 
v___x_950_ = l_Lean_Syntax_getArgs(v___x_940_);
lean_dec(v___x_940_);
v___x_951_ = l_Array_extract___redArg(v___x_950_, v___x_942_, v___x_943_);
lean_dec_ref(v___x_950_);
v___x_952_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__11));
v___x_953_ = lean_box(2);
v___x_954_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_954_, 0, v___x_953_);
lean_ctor_set(v___x_954_, 1, v___x_952_);
lean_ctor_set(v___x_954_, 2, v___x_951_);
v___x_955_ = lean_unsigned_to_nat(3u);
v_A_956_ = l_Lean_Syntax_getArg(v_x_868_, v___x_955_);
v___x_957_ = lean_unsigned_to_nat(5u);
v_p_958_ = l_Lean_Syntax_getArg(v_x_868_, v___x_957_);
lean_dec(v_x_868_);
v_rest_959_ = l_Lean_Syntax_getArgs(v___x_954_);
lean_dec_ref(v___x_954_);
v_x_877_ = v_x_945_;
v_xs_878_ = v_xs_948_;
v_rest_879_ = v_rest_959_;
v_A_880_ = v_A_956_;
v_p_881_ = v_p_958_;
v___y_882_ = v_a_869_;
v___y_883_ = v_a_870_;
goto v___jp_876_;
}
}
}
}
else
{
lean_object* v_x_960_; lean_object* v___x_961_; uint8_t v___x_962_; 
v_x_960_ = l_Lean_Syntax_getArg(v___x_940_, v___x_938_);
v___x_961_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______unexpand__belongs__1___closed__1));
lean_inc(v_x_960_);
v___x_962_ = l_Lean_Syntax_isOfKind(v_x_960_, v___x_961_);
if (v___x_962_ == 0)
{
lean_object* v___x_963_; lean_object* v___x_964_; uint8_t v___x_965_; 
v___x_963_ = lean_unsigned_to_nat(2u);
v___x_964_ = l_Lean_Syntax_getNumArgs(v___x_940_);
v___x_965_ = lean_nat_dec_le(v___x_963_, v___x_964_);
if (v___x_965_ == 0)
{
lean_dec(v___x_964_);
lean_dec(v_x_960_);
lean_dec(v___x_940_);
lean_dec(v_x_868_);
v___y_872_ = v_a_870_;
goto v___jp_871_;
}
else
{
if (v___x_962_ == 0)
{
lean_dec(v___x_964_);
lean_dec(v_x_960_);
lean_dec(v___x_940_);
lean_dec(v_x_868_);
v___y_872_ = v_a_870_;
goto v___jp_871_;
}
else
{
lean_object* v_xs_966_; uint8_t v___x_967_; 
v_xs_966_ = l_Lean_Syntax_getArg(v___x_940_, v___x_939_);
lean_inc(v_xs_966_);
v___x_967_ = l_Lean_Syntax_isOfKind(v_xs_966_, v___x_961_);
if (v___x_967_ == 0)
{
lean_dec(v_xs_966_);
lean_dec(v___x_964_);
lean_dec(v_x_960_);
lean_dec(v___x_940_);
lean_dec(v_x_868_);
v___y_872_ = v_a_870_;
goto v___jp_871_;
}
else
{
lean_object* v___x_968_; lean_object* v_A_969_; lean_object* v___x_970_; lean_object* v_p_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v_rest_977_; 
v___x_968_ = lean_unsigned_to_nat(3u);
v_A_969_ = l_Lean_Syntax_getArg(v_x_868_, v___x_968_);
v___x_970_ = lean_unsigned_to_nat(5u);
v_p_971_ = l_Lean_Syntax_getArg(v_x_868_, v___x_970_);
lean_dec(v_x_868_);
v___x_972_ = l_Lean_Syntax_getArgs(v___x_940_);
lean_dec(v___x_940_);
v___x_973_ = l_Array_extract___redArg(v___x_972_, v___x_963_, v___x_964_);
lean_dec_ref(v___x_972_);
v___x_974_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__11));
v___x_975_ = lean_box(2);
v___x_976_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_976_, 0, v___x_975_);
lean_ctor_set(v___x_976_, 1, v___x_974_);
lean_ctor_set(v___x_976_, 2, v___x_973_);
v_rest_977_ = l_Lean_Syntax_getArgs(v___x_976_);
lean_dec_ref(v___x_976_);
v_x_877_ = v_x_960_;
v_xs_878_ = v_xs_966_;
v_rest_879_ = v_rest_977_;
v_A_880_ = v_A_969_;
v_p_881_ = v_p_971_;
v___y_882_ = v_a_869_;
v___y_883_ = v_a_870_;
goto v___jp_876_;
}
}
}
}
else
{
lean_object* v_quotContext_978_; lean_object* v_currMacroScope_979_; lean_object* v_ref_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; uint8_t v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; 
lean_dec(v___x_940_);
v_quotContext_978_ = lean_ctor_get(v_a_869_, 1);
v_currMacroScope_979_ = lean_ctor_get(v_a_869_, 2);
v_ref_980_ = lean_ctor_get(v_a_869_, 5);
v___x_981_ = lean_unsigned_to_nat(3u);
v___x_982_ = l_Lean_Syntax_getArg(v_x_868_, v___x_981_);
v___x_983_ = lean_unsigned_to_nat(5u);
v___x_984_ = l_Lean_Syntax_getArg(v_x_868_, v___x_983_);
lean_dec(v_x_868_);
v___x_985_ = 0;
v___x_986_ = l_Lean_SourceInfo_fromRef(v_ref_980_, v___x_985_);
v___x_987_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__4));
v___x_988_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__uniq__in__1___closed__1, &lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__uniq__in__1___closed__1_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__uniq__in__1___closed__1);
v___x_989_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__uniq__in__1___closed__2));
lean_inc_n(v_currMacroScope_979_, 2);
lean_inc_n(v_quotContext_978_, 2);
v___x_990_ = l_Lean_addMacroScope(v_quotContext_978_, v___x_989_, v_currMacroScope_979_);
v___x_991_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__uniq__in__1___closed__4));
lean_inc_n(v___x_986_, 14);
v___x_992_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_992_, 0, v___x_986_);
lean_ctor_set(v___x_992_, 1, v___x_988_);
lean_ctor_set(v___x_992_, 2, v___x_990_);
lean_ctor_set(v___x_992_, 3, v___x_991_);
v___x_993_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__11));
v___x_994_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__4));
v___x_995_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__6));
v___x_996_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__7));
v___x_997_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_997_, 0, v___x_986_);
lean_ctor_set(v___x_997_, 1, v___x_996_);
v___x_998_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__9));
v___x_999_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__11, &lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__11_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__11);
v___x_1000_ = lean_box(0);
v___x_1001_ = l_Lean_addMacroScope(v_quotContext_978_, v___x_1000_, v_currMacroScope_979_);
v___x_1002_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__14));
v___x_1003_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1003_, 0, v___x_986_);
lean_ctor_set(v___x_1003_, 1, v___x_999_);
lean_ctor_set(v___x_1003_, 2, v___x_1001_);
lean_ctor_set(v___x_1003_, 3, v___x_1002_);
v___x_1004_ = l_Lean_Syntax_node1(v___x_986_, v___x_998_, v___x_1003_);
v___x_1005_ = l_Lean_Syntax_node2(v___x_986_, v___x_995_, v___x_997_, v___x_1004_);
v___x_1006_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__15));
v___x_1007_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__16));
v___x_1008_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1008_, 0, v___x_986_);
lean_ctor_set(v___x_1008_, 1, v___x_1006_);
v___x_1009_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__18));
v___x_1010_ = l_Lean_Syntax_node1(v___x_986_, v___x_993_, v_x_960_);
v___x_1011_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19, &lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19);
v___x_1012_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1012_, 0, v___x_986_);
lean_ctor_set(v___x_1012_, 1, v___x_993_);
lean_ctor_set(v___x_1012_, 2, v___x_1011_);
v___x_1013_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__20));
v___x_1014_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1014_, 0, v___x_986_);
lean_ctor_set(v___x_1014_, 1, v___x_1013_);
v___x_1015_ = l_Lean_Syntax_node4(v___x_986_, v___x_1009_, v___x_1010_, v___x_1012_, v___x_1014_, v___x_984_);
v___x_1016_ = l_Lean_Syntax_node2(v___x_986_, v___x_1007_, v___x_1008_, v___x_1015_);
v___x_1017_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__49));
v___x_1018_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1018_, 0, v___x_986_);
lean_ctor_set(v___x_1018_, 1, v___x_1017_);
v___x_1019_ = l_Lean_Syntax_node3(v___x_986_, v___x_994_, v___x_1005_, v___x_1016_, v___x_1018_);
v___x_1020_ = l_Lean_Syntax_node2(v___x_986_, v___x_993_, v___x_1019_, v___x_982_);
v___x_1021_ = l_Lean_Syntax_node2(v___x_986_, v___x_987_, v___x_992_, v___x_1020_);
v___x_1022_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1022_, 0, v___x_1021_);
lean_ctor_set(v___x_1022_, 1, v_a_870_);
return v___x_1022_;
}
}
}
v___jp_871_:
{
lean_object* v___x_873_; lean_object* v___x_874_; 
v___x_873_ = lean_box(1);
v___x_874_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_874_, 0, v___x_873_);
lean_ctor_set(v___x_874_, 1, v___y_872_);
return v___x_874_;
}
v___jp_876_:
{
lean_object* v_quotContext_884_; lean_object* v_currMacroScope_885_; lean_object* v_ref_886_; uint8_t v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; 
v_quotContext_884_ = lean_ctor_get(v___y_882_, 1);
v_currMacroScope_885_ = lean_ctor_get(v___y_882_, 2);
v_ref_886_ = lean_ctor_get(v___y_882_, 5);
v___x_887_ = 0;
v___x_888_ = l_Lean_SourceInfo_fromRef(v_ref_886_, v___x_887_);
v___x_889_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__4));
v___x_890_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__uniq__in__1___closed__1, &lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__uniq__in__1___closed__1_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__uniq__in__1___closed__1);
v___x_891_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__uniq__in__1___closed__2));
lean_inc_n(v_currMacroScope_885_, 2);
lean_inc_n(v_quotContext_884_, 2);
v___x_892_ = l_Lean_addMacroScope(v_quotContext_884_, v___x_891_, v_currMacroScope_885_);
v___x_893_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__uniq__in__1___closed__4));
lean_inc_n(v___x_888_, 19);
v___x_894_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_894_, 0, v___x_888_);
lean_ctor_set(v___x_894_, 1, v___x_890_);
lean_ctor_set(v___x_894_, 2, v___x_892_);
lean_ctor_set(v___x_894_, 3, v___x_893_);
v___x_895_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__11));
v___x_896_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__4));
v___x_897_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__6));
v___x_898_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__7));
v___x_899_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_899_, 0, v___x_888_);
lean_ctor_set(v___x_899_, 1, v___x_898_);
v___x_900_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__9));
v___x_901_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__11, &lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__11_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__11);
v___x_902_ = lean_box(0);
v___x_903_ = l_Lean_addMacroScope(v_quotContext_884_, v___x_902_, v_currMacroScope_885_);
v___x_904_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__14));
v___x_905_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_905_, 0, v___x_888_);
lean_ctor_set(v___x_905_, 1, v___x_901_);
lean_ctor_set(v___x_905_, 2, v___x_903_);
lean_ctor_set(v___x_905_, 3, v___x_904_);
v___x_906_ = l_Lean_Syntax_node1(v___x_888_, v___x_900_, v___x_905_);
v___x_907_ = l_Lean_Syntax_node2(v___x_888_, v___x_897_, v___x_899_, v___x_906_);
v___x_908_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__15));
v___x_909_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__16));
v___x_910_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_910_, 0, v___x_888_);
lean_ctor_set(v___x_910_, 1, v___x_908_);
v___x_911_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__18));
v___x_912_ = l_Lean_Syntax_node1(v___x_888_, v___x_895_, v_x_877_);
v___x_913_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19, &lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19);
v___x_914_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_914_, 0, v___x_888_);
lean_ctor_set(v___x_914_, 1, v___x_895_);
lean_ctor_set(v___x_914_, 2, v___x_913_);
v___x_915_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__20));
v___x_916_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_916_, 0, v___x_888_);
lean_ctor_set(v___x_916_, 1, v___x_915_);
v___x_917_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__uniq__in__1___closed__5));
v___x_918_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_918_, 0, v___x_888_);
lean_ctor_set(v___x_918_, 1, v___x_917_);
v___x_919_ = l_Array_mkArray1___redArg(v_xs_878_);
v___x_920_ = l_Array_append___redArg(v___x_919_, v_rest_879_);
lean_dec_ref(v_rest_879_);
v___x_921_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_921_, 0, v___x_888_);
lean_ctor_set(v___x_921_, 1, v___x_895_);
lean_ctor_set(v___x_921_, 2, v___x_920_);
v___x_922_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__22));
v___x_923_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_923_, 0, v___x_888_);
lean_ctor_set(v___x_923_, 1, v___x_922_);
v___x_924_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__23));
v___x_925_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_925_, 0, v___x_888_);
lean_ctor_set(v___x_925_, 1, v___x_924_);
lean_inc(v_A_880_);
v___x_926_ = l_Lean_Syntax_node6(v___x_888_, v___x_875_, v___x_918_, v___x_921_, v___x_923_, v_A_880_, v___x_925_, v_p_881_);
v___x_927_ = l_Lean_Syntax_node4(v___x_888_, v___x_911_, v___x_912_, v___x_914_, v___x_916_, v___x_926_);
v___x_928_ = l_Lean_Syntax_node2(v___x_888_, v___x_909_, v___x_910_, v___x_927_);
v___x_929_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__49));
v___x_930_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_930_, 0, v___x_888_);
lean_ctor_set(v___x_930_, 1, v___x_929_);
v___x_931_ = l_Lean_Syntax_node3(v___x_888_, v___x_896_, v___x_907_, v___x_928_, v___x_930_);
v___x_932_ = l_Lean_Syntax_node2(v___x_888_, v___x_895_, v___x_931_, v_A_880_);
v___x_933_ = l_Lean_Syntax_node2(v___x_888_, v___x_889_, v___x_894_, v___x_932_);
v___x_934_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_934_, 0, v___x_933_);
lean_ctor_set(v___x_934_, 1, v___y_883_);
return v___x_934_;
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__uniq__in__1___boxed(lean_object* v_x_1023_, lean_object* v_a_1024_, lean_object* v_a_1025_){
_start:
{
lean_object* v_res_1026_; 
v_res_1026_ = lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__uniq__in__1(v_x_1023_, v_a_1024_, v_a_1025_);
lean_dec_ref(v_a_1024_);
return v_res_1026_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories_unexpandForallInA(lean_object* v_x_1027_, lean_object* v_a_1028_, lean_object* v_a_1029_){
_start:
{
lean_object* v___x_1030_; uint8_t v___x_1031_; 
v___x_1030_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__4));
lean_inc(v_x_1027_);
v___x_1031_ = l_Lean_Syntax_isOfKind(v_x_1027_, v___x_1030_);
if (v___x_1031_ == 0)
{
lean_object* v___x_1032_; lean_object* v___x_1033_; 
lean_dec(v_x_1027_);
v___x_1032_ = lean_box(0);
v___x_1033_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1033_, 0, v___x_1032_);
lean_ctor_set(v___x_1033_, 1, v_a_1029_);
return v___x_1033_;
}
else
{
lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; uint8_t v___x_1037_; 
v___x_1034_ = lean_unsigned_to_nat(1u);
v___x_1035_ = l_Lean_Syntax_getArg(v_x_1027_, v___x_1034_);
lean_dec(v_x_1027_);
v___x_1036_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_1035_);
v___x_1037_ = l_Lean_Syntax_matchesNull(v___x_1035_, v___x_1036_);
if (v___x_1037_ == 0)
{
lean_object* v___x_1038_; lean_object* v___x_1039_; 
lean_dec(v___x_1035_);
v___x_1038_ = lean_box(0);
v___x_1039_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1039_, 0, v___x_1038_);
lean_ctor_set(v___x_1039_, 1, v_a_1029_);
return v___x_1039_;
}
else
{
lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; uint8_t v___x_1043_; 
v___x_1040_ = lean_unsigned_to_nat(0u);
v___x_1041_ = l_Lean_Syntax_getArg(v___x_1035_, v___x_1040_);
v___x_1042_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__16));
lean_inc(v___x_1041_);
v___x_1043_ = l_Lean_Syntax_isOfKind(v___x_1041_, v___x_1042_);
if (v___x_1043_ == 0)
{
lean_object* v___x_1044_; lean_object* v___x_1045_; 
lean_dec(v___x_1041_);
lean_dec(v___x_1035_);
v___x_1044_ = lean_box(0);
v___x_1045_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1045_, 0, v___x_1044_);
lean_ctor_set(v___x_1045_, 1, v_a_1029_);
return v___x_1045_;
}
else
{
lean_object* v___x_1046_; lean_object* v___x_1047_; uint8_t v___x_1048_; 
v___x_1046_ = l_Lean_Syntax_getArg(v___x_1041_, v___x_1034_);
lean_dec(v___x_1041_);
v___x_1047_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__18));
lean_inc(v___x_1046_);
v___x_1048_ = l_Lean_Syntax_isOfKind(v___x_1046_, v___x_1047_);
if (v___x_1048_ == 0)
{
lean_object* v___x_1049_; lean_object* v___x_1050_; 
lean_dec(v___x_1046_);
lean_dec(v___x_1035_);
v___x_1049_ = lean_box(0);
v___x_1050_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1050_, 0, v___x_1049_);
lean_ctor_set(v___x_1050_, 1, v_a_1029_);
return v___x_1050_;
}
else
{
lean_object* v___x_1051_; uint8_t v___x_1052_; 
v___x_1051_ = l_Lean_Syntax_getArg(v___x_1046_, v___x_1040_);
lean_inc(v___x_1051_);
v___x_1052_ = l_Lean_Syntax_matchesNull(v___x_1051_, v___x_1034_);
if (v___x_1052_ == 0)
{
lean_object* v___x_1053_; lean_object* v___x_1054_; 
lean_dec(v___x_1051_);
lean_dec(v___x_1046_);
lean_dec(v___x_1035_);
v___x_1053_ = lean_box(0);
v___x_1054_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1054_, 0, v___x_1053_);
lean_ctor_set(v___x_1054_, 1, v_a_1029_);
return v___x_1054_;
}
else
{
lean_object* v___x_1055_; lean_object* v___x_1056_; uint8_t v___x_1057_; 
v___x_1055_ = l_Lean_Syntax_getArg(v___x_1051_, v___x_1040_);
lean_dec(v___x_1051_);
v___x_1056_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______unexpand__belongs__1___closed__1));
lean_inc(v___x_1055_);
v___x_1057_ = l_Lean_Syntax_isOfKind(v___x_1055_, v___x_1056_);
if (v___x_1057_ == 0)
{
lean_object* v___x_1058_; lean_object* v___x_1059_; 
lean_dec(v___x_1055_);
lean_dec(v___x_1046_);
lean_dec(v___x_1035_);
v___x_1058_ = lean_box(0);
v___x_1059_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1059_, 0, v___x_1058_);
lean_ctor_set(v___x_1059_, 1, v_a_1029_);
return v___x_1059_;
}
else
{
lean_object* v___x_1060_; uint8_t v___x_1061_; 
v___x_1060_ = l_Lean_Syntax_getArg(v___x_1046_, v___x_1034_);
v___x_1061_ = l_Lean_Syntax_matchesNull(v___x_1060_, v___x_1040_);
if (v___x_1061_ == 0)
{
lean_object* v___x_1062_; lean_object* v___x_1063_; 
lean_dec(v___x_1055_);
lean_dec(v___x_1046_);
lean_dec(v___x_1035_);
v___x_1062_ = lean_box(0);
v___x_1063_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1063_, 0, v___x_1062_);
lean_ctor_set(v___x_1063_, 1, v_a_1029_);
return v___x_1063_;
}
else
{
lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; uint8_t v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; 
v___x_1064_ = l_Lean_Syntax_getArg(v___x_1035_, v___x_1034_);
lean_dec(v___x_1035_);
v___x_1065_ = lean_unsigned_to_nat(3u);
v___x_1066_ = l_Lean_Syntax_getArg(v___x_1046_, v___x_1065_);
lean_dec(v___x_1046_);
v___x_1067_ = 0;
v___x_1068_ = l_Lean_SourceInfo_fromRef(v_a_1028_, v___x_1067_);
v___x_1069_ = ((lean_object*)(lp_Props2Theories_forall__in___closed__1));
v___x_1070_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__21));
lean_inc_n(v___x_1068_, 4);
v___x_1071_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1071_, 0, v___x_1068_);
lean_ctor_set(v___x_1071_, 1, v___x_1070_);
v___x_1072_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__11));
v___x_1073_ = l_Lean_Syntax_node1(v___x_1068_, v___x_1072_, v___x_1055_);
v___x_1074_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__22));
v___x_1075_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1075_, 0, v___x_1068_);
lean_ctor_set(v___x_1075_, 1, v___x_1074_);
v___x_1076_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__23));
v___x_1077_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1077_, 0, v___x_1068_);
lean_ctor_set(v___x_1077_, 1, v___x_1076_);
v___x_1078_ = l_Lean_Syntax_node6(v___x_1068_, v___x_1069_, v___x_1071_, v___x_1073_, v___x_1075_, v___x_1064_, v___x_1077_, v___x_1066_);
v___x_1079_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1079_, 0, v___x_1078_);
lean_ctor_set(v___x_1079_, 1, v_a_1029_);
return v___x_1079_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories_unexpandForallInA___boxed(lean_object* v_x_1080_, lean_object* v_a_1081_, lean_object* v_a_1082_){
_start:
{
lean_object* v_res_1083_; 
v_res_1083_ = lp_Props2Theories_unexpandForallInA(v_x_1080_, v_a_1081_, v_a_1082_);
lean_dec(v_a_1081_);
return v_res_1083_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories_unexpandExistsInA(lean_object* v_x_1084_, lean_object* v_a_1085_, lean_object* v_a_1086_){
_start:
{
lean_object* v___x_1087_; uint8_t v___x_1088_; 
v___x_1087_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__4));
lean_inc(v_x_1084_);
v___x_1088_ = l_Lean_Syntax_isOfKind(v_x_1084_, v___x_1087_);
if (v___x_1088_ == 0)
{
lean_object* v___x_1089_; lean_object* v___x_1090_; 
lean_dec(v_x_1084_);
v___x_1089_ = lean_box(0);
v___x_1090_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1090_, 0, v___x_1089_);
lean_ctor_set(v___x_1090_, 1, v_a_1086_);
return v___x_1090_;
}
else
{
lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; uint8_t v___x_1094_; 
v___x_1091_ = lean_unsigned_to_nat(1u);
v___x_1092_ = l_Lean_Syntax_getArg(v_x_1084_, v___x_1091_);
lean_dec(v_x_1084_);
v___x_1093_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_1092_);
v___x_1094_ = l_Lean_Syntax_matchesNull(v___x_1092_, v___x_1093_);
if (v___x_1094_ == 0)
{
lean_object* v___x_1095_; lean_object* v___x_1096_; 
lean_dec(v___x_1092_);
v___x_1095_ = lean_box(0);
v___x_1096_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1096_, 0, v___x_1095_);
lean_ctor_set(v___x_1096_, 1, v_a_1086_);
return v___x_1096_;
}
else
{
lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; uint8_t v___x_1100_; 
v___x_1097_ = lean_unsigned_to_nat(0u);
v___x_1098_ = l_Lean_Syntax_getArg(v___x_1092_, v___x_1097_);
v___x_1099_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__16));
lean_inc(v___x_1098_);
v___x_1100_ = l_Lean_Syntax_isOfKind(v___x_1098_, v___x_1099_);
if (v___x_1100_ == 0)
{
lean_object* v___x_1101_; lean_object* v___x_1102_; 
lean_dec(v___x_1098_);
lean_dec(v___x_1092_);
v___x_1101_ = lean_box(0);
v___x_1102_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1102_, 0, v___x_1101_);
lean_ctor_set(v___x_1102_, 1, v_a_1086_);
return v___x_1102_;
}
else
{
lean_object* v___x_1103_; lean_object* v___x_1104_; uint8_t v___x_1105_; 
v___x_1103_ = l_Lean_Syntax_getArg(v___x_1098_, v___x_1091_);
lean_dec(v___x_1098_);
v___x_1104_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__18));
lean_inc(v___x_1103_);
v___x_1105_ = l_Lean_Syntax_isOfKind(v___x_1103_, v___x_1104_);
if (v___x_1105_ == 0)
{
lean_object* v___x_1106_; lean_object* v___x_1107_; 
lean_dec(v___x_1103_);
lean_dec(v___x_1092_);
v___x_1106_ = lean_box(0);
v___x_1107_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1107_, 0, v___x_1106_);
lean_ctor_set(v___x_1107_, 1, v_a_1086_);
return v___x_1107_;
}
else
{
lean_object* v___x_1108_; uint8_t v___x_1109_; 
v___x_1108_ = l_Lean_Syntax_getArg(v___x_1103_, v___x_1097_);
lean_inc(v___x_1108_);
v___x_1109_ = l_Lean_Syntax_matchesNull(v___x_1108_, v___x_1091_);
if (v___x_1109_ == 0)
{
lean_object* v___x_1110_; lean_object* v___x_1111_; 
lean_dec(v___x_1108_);
lean_dec(v___x_1103_);
lean_dec(v___x_1092_);
v___x_1110_ = lean_box(0);
v___x_1111_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1111_, 0, v___x_1110_);
lean_ctor_set(v___x_1111_, 1, v_a_1086_);
return v___x_1111_;
}
else
{
lean_object* v___x_1112_; lean_object* v___x_1113_; uint8_t v___x_1114_; 
v___x_1112_ = l_Lean_Syntax_getArg(v___x_1108_, v___x_1097_);
lean_dec(v___x_1108_);
v___x_1113_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______unexpand__belongs__1___closed__1));
lean_inc(v___x_1112_);
v___x_1114_ = l_Lean_Syntax_isOfKind(v___x_1112_, v___x_1113_);
if (v___x_1114_ == 0)
{
lean_object* v___x_1115_; lean_object* v___x_1116_; 
lean_dec(v___x_1112_);
lean_dec(v___x_1103_);
lean_dec(v___x_1092_);
v___x_1115_ = lean_box(0);
v___x_1116_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1116_, 0, v___x_1115_);
lean_ctor_set(v___x_1116_, 1, v_a_1086_);
return v___x_1116_;
}
else
{
lean_object* v___x_1117_; uint8_t v___x_1118_; 
v___x_1117_ = l_Lean_Syntax_getArg(v___x_1103_, v___x_1091_);
v___x_1118_ = l_Lean_Syntax_matchesNull(v___x_1117_, v___x_1097_);
if (v___x_1118_ == 0)
{
lean_object* v___x_1119_; lean_object* v___x_1120_; 
lean_dec(v___x_1112_);
lean_dec(v___x_1103_);
lean_dec(v___x_1092_);
v___x_1119_ = lean_box(0);
v___x_1120_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1120_, 0, v___x_1119_);
lean_ctor_set(v___x_1120_, 1, v_a_1086_);
return v___x_1120_;
}
else
{
lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; uint8_t v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; 
v___x_1121_ = l_Lean_Syntax_getArg(v___x_1092_, v___x_1091_);
lean_dec(v___x_1092_);
v___x_1122_ = lean_unsigned_to_nat(3u);
v___x_1123_ = l_Lean_Syntax_getArg(v___x_1103_, v___x_1122_);
lean_dec(v___x_1103_);
v___x_1124_ = 0;
v___x_1125_ = l_Lean_SourceInfo_fromRef(v_a_1085_, v___x_1124_);
v___x_1126_ = ((lean_object*)(lp_Props2Theories_exists__in___closed__1));
v___x_1127_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__in__1___closed__5));
lean_inc_n(v___x_1125_, 4);
v___x_1128_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1128_, 0, v___x_1125_);
lean_ctor_set(v___x_1128_, 1, v___x_1127_);
v___x_1129_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__11));
v___x_1130_ = l_Lean_Syntax_node1(v___x_1125_, v___x_1129_, v___x_1112_);
v___x_1131_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__22));
v___x_1132_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1132_, 0, v___x_1125_);
lean_ctor_set(v___x_1132_, 1, v___x_1131_);
v___x_1133_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__23));
v___x_1134_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1134_, 0, v___x_1125_);
lean_ctor_set(v___x_1134_, 1, v___x_1133_);
v___x_1135_ = l_Lean_Syntax_node6(v___x_1125_, v___x_1126_, v___x_1128_, v___x_1130_, v___x_1132_, v___x_1121_, v___x_1134_, v___x_1123_);
v___x_1136_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1136_, 0, v___x_1135_);
lean_ctor_set(v___x_1136_, 1, v_a_1086_);
return v___x_1136_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories_unexpandExistsInA___boxed(lean_object* v_x_1137_, lean_object* v_a_1138_, lean_object* v_a_1139_){
_start:
{
lean_object* v_res_1140_; 
v_res_1140_ = lp_Props2Theories_unexpandExistsInA(v_x_1137_, v_a_1138_, v_a_1139_);
lean_dec(v_a_1138_);
return v_res_1140_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories_unexpandExistsUniqInA(lean_object* v_x_1141_, lean_object* v_a_1142_, lean_object* v_a_1143_){
_start:
{
lean_object* v___x_1144_; uint8_t v___x_1145_; 
v___x_1144_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__4));
lean_inc(v_x_1141_);
v___x_1145_ = l_Lean_Syntax_isOfKind(v_x_1141_, v___x_1144_);
if (v___x_1145_ == 0)
{
lean_object* v___x_1146_; lean_object* v___x_1147_; 
lean_dec(v_x_1141_);
v___x_1146_ = lean_box(0);
v___x_1147_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1147_, 0, v___x_1146_);
lean_ctor_set(v___x_1147_, 1, v_a_1143_);
return v___x_1147_;
}
else
{
lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; uint8_t v___x_1151_; 
v___x_1148_ = lean_unsigned_to_nat(1u);
v___x_1149_ = l_Lean_Syntax_getArg(v_x_1141_, v___x_1148_);
lean_dec(v_x_1141_);
v___x_1150_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_1149_);
v___x_1151_ = l_Lean_Syntax_matchesNull(v___x_1149_, v___x_1150_);
if (v___x_1151_ == 0)
{
lean_object* v___x_1152_; lean_object* v___x_1153_; 
lean_dec(v___x_1149_);
v___x_1152_ = lean_box(0);
v___x_1153_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1153_, 0, v___x_1152_);
lean_ctor_set(v___x_1153_, 1, v_a_1143_);
return v___x_1153_;
}
else
{
lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; uint8_t v___x_1157_; 
v___x_1154_ = lean_unsigned_to_nat(0u);
v___x_1155_ = l_Lean_Syntax_getArg(v___x_1149_, v___x_1154_);
v___x_1156_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__16));
lean_inc(v___x_1155_);
v___x_1157_ = l_Lean_Syntax_isOfKind(v___x_1155_, v___x_1156_);
if (v___x_1157_ == 0)
{
lean_object* v___x_1158_; lean_object* v___x_1159_; 
lean_dec(v___x_1155_);
lean_dec(v___x_1149_);
v___x_1158_ = lean_box(0);
v___x_1159_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1159_, 0, v___x_1158_);
lean_ctor_set(v___x_1159_, 1, v_a_1143_);
return v___x_1159_;
}
else
{
lean_object* v___x_1160_; lean_object* v___x_1161_; uint8_t v___x_1162_; 
v___x_1160_ = l_Lean_Syntax_getArg(v___x_1155_, v___x_1148_);
lean_dec(v___x_1155_);
v___x_1161_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__18));
lean_inc(v___x_1160_);
v___x_1162_ = l_Lean_Syntax_isOfKind(v___x_1160_, v___x_1161_);
if (v___x_1162_ == 0)
{
lean_object* v___x_1163_; lean_object* v___x_1164_; 
lean_dec(v___x_1160_);
lean_dec(v___x_1149_);
v___x_1163_ = lean_box(0);
v___x_1164_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1164_, 0, v___x_1163_);
lean_ctor_set(v___x_1164_, 1, v_a_1143_);
return v___x_1164_;
}
else
{
lean_object* v___x_1165_; uint8_t v___x_1166_; 
v___x_1165_ = l_Lean_Syntax_getArg(v___x_1160_, v___x_1154_);
lean_inc(v___x_1165_);
v___x_1166_ = l_Lean_Syntax_matchesNull(v___x_1165_, v___x_1148_);
if (v___x_1166_ == 0)
{
lean_object* v___x_1167_; lean_object* v___x_1168_; 
lean_dec(v___x_1165_);
lean_dec(v___x_1160_);
lean_dec(v___x_1149_);
v___x_1167_ = lean_box(0);
v___x_1168_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1168_, 0, v___x_1167_);
lean_ctor_set(v___x_1168_, 1, v_a_1143_);
return v___x_1168_;
}
else
{
lean_object* v___x_1169_; lean_object* v___x_1170_; uint8_t v___x_1171_; 
v___x_1169_ = l_Lean_Syntax_getArg(v___x_1165_, v___x_1154_);
lean_dec(v___x_1165_);
v___x_1170_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______unexpand__belongs__1___closed__1));
lean_inc(v___x_1169_);
v___x_1171_ = l_Lean_Syntax_isOfKind(v___x_1169_, v___x_1170_);
if (v___x_1171_ == 0)
{
lean_object* v___x_1172_; lean_object* v___x_1173_; 
lean_dec(v___x_1169_);
lean_dec(v___x_1160_);
lean_dec(v___x_1149_);
v___x_1172_ = lean_box(0);
v___x_1173_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1173_, 0, v___x_1172_);
lean_ctor_set(v___x_1173_, 1, v_a_1143_);
return v___x_1173_;
}
else
{
lean_object* v___x_1174_; uint8_t v___x_1175_; 
v___x_1174_ = l_Lean_Syntax_getArg(v___x_1160_, v___x_1148_);
v___x_1175_ = l_Lean_Syntax_matchesNull(v___x_1174_, v___x_1154_);
if (v___x_1175_ == 0)
{
lean_object* v___x_1176_; lean_object* v___x_1177_; 
lean_dec(v___x_1169_);
lean_dec(v___x_1160_);
lean_dec(v___x_1149_);
v___x_1176_ = lean_box(0);
v___x_1177_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1177_, 0, v___x_1176_);
lean_ctor_set(v___x_1177_, 1, v_a_1143_);
return v___x_1177_;
}
else
{
lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; uint8_t v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; 
v___x_1178_ = l_Lean_Syntax_getArg(v___x_1149_, v___x_1148_);
lean_dec(v___x_1149_);
v___x_1179_ = lean_unsigned_to_nat(3u);
v___x_1180_ = l_Lean_Syntax_getArg(v___x_1160_, v___x_1179_);
lean_dec(v___x_1160_);
v___x_1181_ = 0;
v___x_1182_ = l_Lean_SourceInfo_fromRef(v_a_1142_, v___x_1181_);
v___x_1183_ = ((lean_object*)(lp_Props2Theories_exists__uniq__in___closed__1));
v___x_1184_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__uniq__in__1___closed__5));
lean_inc_n(v___x_1182_, 4);
v___x_1185_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1185_, 0, v___x_1182_);
lean_ctor_set(v___x_1185_, 1, v___x_1184_);
v___x_1186_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__11));
v___x_1187_ = l_Lean_Syntax_node1(v___x_1182_, v___x_1186_, v___x_1169_);
v___x_1188_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__22));
v___x_1189_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1189_, 0, v___x_1182_);
lean_ctor_set(v___x_1189_, 1, v___x_1188_);
v___x_1190_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__23));
v___x_1191_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1191_, 0, v___x_1182_);
lean_ctor_set(v___x_1191_, 1, v___x_1190_);
v___x_1192_ = l_Lean_Syntax_node6(v___x_1182_, v___x_1183_, v___x_1185_, v___x_1187_, v___x_1189_, v___x_1178_, v___x_1191_, v___x_1180_);
v___x_1193_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1193_, 0, v___x_1192_);
lean_ctor_set(v___x_1193_, 1, v_a_1143_);
return v___x_1193_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories_unexpandExistsUniqInA___boxed(lean_object* v_x_1194_, lean_object* v_a_1195_, lean_object* v_a_1196_){
_start:
{
lean_object* v_res_1197_; 
v_res_1197_ = lp_Props2Theories_unexpandExistsUniqInA(v_x_1194_, v_a_1195_, v_a_1196_);
lean_dec(v_a_1195_);
return v_res_1197_;
}
}
static lean_object* _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__21(void){
_start:
{
lean_object* v___x_1281_; lean_object* v___x_1282_; 
v___x_1281_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__20));
v___x_1282_ = l_String_toRawSubstring_x27(v___x_1281_);
return v___x_1282_;
}
}
static lean_object* _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__34(void){
_start:
{
lean_object* v___x_1312_; lean_object* v___x_1313_; 
v___x_1312_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__33));
v___x_1313_ = l_String_toRawSubstring_x27(v___x_1312_);
return v___x_1313_;
}
}
static lean_object* _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__39(void){
_start:
{
lean_object* v___x_1323_; lean_object* v___x_1324_; 
v___x_1323_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__38));
v___x_1324_ = l_String_toRawSubstring_x27(v___x_1323_);
return v___x_1324_;
}
}
static lean_object* _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__46(void){
_start:
{
lean_object* v___x_1338_; lean_object* v___x_1339_; 
v___x_1338_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__45));
v___x_1339_ = l_String_toRawSubstring_x27(v___x_1338_);
return v___x_1339_;
}
}
static lean_object* _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__49(void){
_start:
{
lean_object* v___x_1343_; lean_object* v___x_1344_; 
v___x_1343_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__48));
v___x_1344_ = l_String_toRawSubstring_x27(v___x_1343_);
return v___x_1344_;
}
}
static lean_object* _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__55(void){
_start:
{
lean_object* v___x_1357_; lean_object* v___x_1358_; 
v___x_1357_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__54));
v___x_1358_ = l_String_toRawSubstring_x27(v___x_1357_);
return v___x_1358_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1(lean_object* v_x_1381_, lean_object* v_a_1382_, lean_object* v_a_1383_, lean_object* v_a_1384_, lean_object* v_a_1385_, lean_object* v_a_1386_, lean_object* v_a_1387_, lean_object* v_a_1388_, lean_object* v_a_1389_){
_start:
{
lean_object* v___x_1391_; uint8_t v___x_1392_; 
v___x_1391_ = ((lean_object*)(lp_Props2Theories_tacticSpecialize__in___x2c___00__closed__1));
lean_inc(v_x_1381_);
v___x_1392_ = l_Lean_Syntax_isOfKind(v_x_1381_, v___x_1391_);
if (v___x_1392_ == 0)
{
lean_object* v___x_1393_; 
lean_dec(v_x_1381_);
v___x_1393_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__0___redArg();
return v___x_1393_;
}
else
{
lean_object* v_ref_1394_; lean_object* v_quotContext_1395_; lean_object* v_currMacroScope_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; uint8_t v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; 
v_ref_1394_ = lean_ctor_get(v_a_1388_, 5);
v_quotContext_1395_ = lean_ctor_get(v_a_1388_, 10);
v_currMacroScope_1396_ = lean_ctor_get(v_a_1388_, 11);
v___x_1397_ = lean_unsigned_to_nat(1u);
v___x_1398_ = l_Lean_Syntax_getArg(v_x_1381_, v___x_1397_);
v___x_1399_ = lean_unsigned_to_nat(3u);
v___x_1400_ = l_Lean_Syntax_getArg(v_x_1381_, v___x_1399_);
lean_dec(v_x_1381_);
v___x_1401_ = 0;
v___x_1402_ = l_Lean_SourceInfo_fromRef(v_ref_1394_, v___x_1401_);
v___x_1403_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__1));
v___x_1404_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__11));
v___x_1405_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__2));
v___x_1406_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__3));
lean_inc_n(v___x_1402_, 49);
v___x_1407_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1407_, 0, v___x_1402_);
lean_ctor_set(v___x_1407_, 1, v___x_1405_);
v___x_1408_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__4));
v___x_1409_ = l_Lean_Syntax_node1(v___x_1402_, v___x_1404_, v___x_1400_);
lean_inc(v___x_1398_);
v___x_1410_ = l_Lean_Syntax_node2(v___x_1402_, v___x_1408_, v___x_1398_, v___x_1409_);
v___x_1411_ = l_Lean_Syntax_node2(v___x_1402_, v___x_1406_, v___x_1407_, v___x_1410_);
v___x_1412_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__4));
v___x_1413_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1413_, 0, v___x_1402_);
lean_ctor_set(v___x_1413_, 1, v___x_1412_);
v___x_1414_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__6));
v___x_1415_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__7));
v___x_1416_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1416_, 0, v___x_1402_);
lean_ctor_set(v___x_1416_, 1, v___x_1415_);
v___x_1417_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__9));
v___x_1418_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__11));
v___x_1419_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__12));
v___x_1420_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__13));
v___x_1421_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1421_, 0, v___x_1402_);
lean_ctor_set(v___x_1421_, 1, v___x_1419_);
v___x_1422_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__15));
v___x_1423_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__17));
v___x_1424_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__19));
v___x_1425_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__7));
v___x_1426_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1426_, 0, v___x_1402_);
lean_ctor_set(v___x_1426_, 1, v___x_1425_);
v___x_1427_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__21, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__21_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__21);
v___x_1428_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__22));
lean_inc_n(v_currMacroScope_1396_, 6);
lean_inc_n(v_quotContext_1395_, 6);
v___x_1429_ = l_Lean_addMacroScope(v_quotContext_1395_, v___x_1428_, v_currMacroScope_1396_);
v___x_1430_ = lean_box(0);
v___x_1431_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1431_, 0, v___x_1402_);
lean_ctor_set(v___x_1431_, 1, v___x_1427_);
lean_ctor_set(v___x_1431_, 2, v___x_1429_);
lean_ctor_set(v___x_1431_, 3, v___x_1430_);
v___x_1432_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__23));
v___x_1433_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1433_, 0, v___x_1402_);
lean_ctor_set(v___x_1433_, 1, v___x_1432_);
v___x_1434_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__25));
v___x_1435_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__26));
v___x_1436_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1436_, 0, v___x_1402_);
lean_ctor_set(v___x_1436_, 1, v___x_1435_);
v___x_1437_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19, &lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19);
v___x_1438_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1438_, 0, v___x_1402_);
lean_ctor_set(v___x_1438_, 1, v___x_1404_);
lean_ctor_set(v___x_1438_, 2, v___x_1437_);
v___x_1439_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__28));
v___x_1440_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__30));
v___x_1441_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__32));
v___x_1442_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__34, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__34_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__34);
v___x_1443_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__35));
v___x_1444_ = l_Lean_addMacroScope(v_quotContext_1395_, v___x_1443_, v_currMacroScope_1396_);
v___x_1445_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1445_, 0, v___x_1402_);
lean_ctor_set(v___x_1445_, 1, v___x_1442_);
lean_ctor_set(v___x_1445_, 2, v___x_1444_);
lean_ctor_set(v___x_1445_, 3, v___x_1430_);
lean_inc_ref_n(v___x_1438_, 14);
v___x_1446_ = l_Lean_Syntax_node2(v___x_1402_, v___x_1441_, v___x_1445_, v___x_1438_);
v___x_1447_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__37));
v___x_1448_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__39, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__39_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__39);
v___x_1449_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__40));
v___x_1450_ = l_Lean_addMacroScope(v_quotContext_1395_, v___x_1449_, v_currMacroScope_1396_);
v___x_1451_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__44));
v___x_1452_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1452_, 0, v___x_1402_);
lean_ctor_set(v___x_1452_, 1, v___x_1448_);
lean_ctor_set(v___x_1452_, 2, v___x_1450_);
lean_ctor_set(v___x_1452_, 3, v___x_1451_);
lean_inc_ref_n(v___x_1433_, 2);
v___x_1453_ = l_Lean_Syntax_node3(v___x_1402_, v___x_1447_, v___x_1433_, v___x_1438_, v___x_1452_);
v___x_1454_ = l_Lean_Syntax_node3(v___x_1402_, v___x_1404_, v___x_1438_, v___x_1438_, v___x_1453_);
v___x_1455_ = l_Lean_Syntax_node2(v___x_1402_, v___x_1440_, v___x_1446_, v___x_1454_);
v___x_1456_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__23));
v___x_1457_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1457_, 0, v___x_1402_);
lean_ctor_set(v___x_1457_, 1, v___x_1456_);
v___x_1458_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__46, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__46_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__46);
v___x_1459_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__47));
v___x_1460_ = l_Lean_addMacroScope(v_quotContext_1395_, v___x_1459_, v_currMacroScope_1396_);
v___x_1461_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1461_, 0, v___x_1402_);
lean_ctor_set(v___x_1461_, 1, v___x_1458_);
lean_ctor_set(v___x_1461_, 2, v___x_1460_);
lean_ctor_set(v___x_1461_, 3, v___x_1430_);
v___x_1462_ = l_Lean_Syntax_node2(v___x_1402_, v___x_1441_, v___x_1461_, v___x_1438_);
v___x_1463_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__49, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__49_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__49);
v___x_1464_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__50));
v___x_1465_ = l_Lean_addMacroScope(v_quotContext_1395_, v___x_1464_, v_currMacroScope_1396_);
v___x_1466_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__53));
v___x_1467_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1467_, 0, v___x_1402_);
lean_ctor_set(v___x_1467_, 1, v___x_1463_);
lean_ctor_set(v___x_1467_, 2, v___x_1465_);
lean_ctor_set(v___x_1467_, 3, v___x_1466_);
v___x_1468_ = l_Lean_Syntax_node3(v___x_1402_, v___x_1447_, v___x_1433_, v___x_1438_, v___x_1467_);
v___x_1469_ = l_Lean_Syntax_node3(v___x_1402_, v___x_1404_, v___x_1438_, v___x_1438_, v___x_1468_);
lean_inc(v___x_1469_);
v___x_1470_ = l_Lean_Syntax_node2(v___x_1402_, v___x_1440_, v___x_1462_, v___x_1469_);
v___x_1471_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__55, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__55_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__55);
v___x_1472_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__56));
v___x_1473_ = l_Lean_addMacroScope(v_quotContext_1395_, v___x_1472_, v_currMacroScope_1396_);
v___x_1474_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1474_, 0, v___x_1402_);
lean_ctor_set(v___x_1474_, 1, v___x_1471_);
lean_ctor_set(v___x_1474_, 2, v___x_1473_);
lean_ctor_set(v___x_1474_, 3, v___x_1430_);
v___x_1475_ = l_Lean_Syntax_node2(v___x_1402_, v___x_1441_, v___x_1474_, v___x_1438_);
v___x_1476_ = l_Lean_Syntax_node2(v___x_1402_, v___x_1440_, v___x_1475_, v___x_1469_);
lean_inc_ref(v___x_1457_);
v___x_1477_ = l_Lean_Syntax_node5(v___x_1402_, v___x_1404_, v___x_1455_, v___x_1457_, v___x_1470_, v___x_1457_, v___x_1476_);
v___x_1478_ = l_Lean_Syntax_node1(v___x_1402_, v___x_1439_, v___x_1477_);
v___x_1479_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__58));
v___x_1480_ = l_Lean_Syntax_node1(v___x_1402_, v___x_1479_, v___x_1438_);
v___x_1481_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__59));
v___x_1482_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1482_, 0, v___x_1402_);
lean_ctor_set(v___x_1482_, 1, v___x_1481_);
v___x_1483_ = l_Lean_Syntax_node6(v___x_1402_, v___x_1434_, v___x_1436_, v___x_1438_, v___x_1478_, v___x_1480_, v___x_1438_, v___x_1482_);
v___x_1484_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__49));
v___x_1485_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1485_, 0, v___x_1402_);
lean_ctor_set(v___x_1485_, 1, v___x_1484_);
v___x_1486_ = l_Lean_Syntax_node5(v___x_1402_, v___x_1424_, v___x_1426_, v___x_1431_, v___x_1433_, v___x_1483_, v___x_1485_);
v___x_1487_ = l_Lean_Syntax_node1(v___x_1402_, v___x_1423_, v___x_1486_);
v___x_1488_ = l_Lean_Syntax_node1(v___x_1402_, v___x_1404_, v___x_1487_);
v___x_1489_ = l_Lean_Syntax_node1(v___x_1402_, v___x_1422_, v___x_1488_);
v___x_1490_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__61));
v___x_1491_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__62));
v___x_1492_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1492_, 0, v___x_1402_);
lean_ctor_set(v___x_1492_, 1, v___x_1491_);
v___x_1493_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__64));
v___x_1494_ = l_Lean_Syntax_node1(v___x_1402_, v___x_1404_, v___x_1398_);
v___x_1495_ = l_Lean_Syntax_node1(v___x_1402_, v___x_1493_, v___x_1494_);
v___x_1496_ = l_Lean_Syntax_node2(v___x_1402_, v___x_1490_, v___x_1492_, v___x_1495_);
v___x_1497_ = l_Lean_Syntax_node1(v___x_1402_, v___x_1404_, v___x_1496_);
v___x_1498_ = l_Lean_Syntax_node6(v___x_1402_, v___x_1420_, v___x_1421_, v___x_1489_, v___x_1438_, v___x_1438_, v___x_1438_, v___x_1497_);
v___x_1499_ = l_Lean_Syntax_node1(v___x_1402_, v___x_1404_, v___x_1498_);
v___x_1500_ = l_Lean_Syntax_node1(v___x_1402_, v___x_1418_, v___x_1499_);
v___x_1501_ = l_Lean_Syntax_node1(v___x_1402_, v___x_1417_, v___x_1500_);
v___x_1502_ = l_Lean_Syntax_node2(v___x_1402_, v___x_1414_, v___x_1416_, v___x_1501_);
v___x_1503_ = l_Lean_Syntax_node3(v___x_1402_, v___x_1404_, v___x_1411_, v___x_1413_, v___x_1502_);
v___x_1504_ = l_Lean_Syntax_node1(v___x_1402_, v___x_1403_, v___x_1503_);
v___x_1505_ = l_Lean_Elab_Tactic_evalTactic(v___x_1504_, v_a_1382_, v_a_1383_, v_a_1384_, v_a_1385_, v_a_1386_, v_a_1387_, v_a_1388_, v_a_1389_);
return v___x_1505_;
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___boxed(lean_object* v_x_1506_, lean_object* v_a_1507_, lean_object* v_a_1508_, lean_object* v_a_1509_, lean_object* v_a_1510_, lean_object* v_a_1511_, lean_object* v_a_1512_, lean_object* v_a_1513_, lean_object* v_a_1514_, lean_object* v_a_1515_){
_start:
{
lean_object* v_res_1516_; 
v_res_1516_ = lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1(v_x_1506_, v_a_1507_, v_a_1508_, v_a_1509_, v_a_1510_, v_a_1511_, v_a_1512_, v_a_1513_, v_a_1514_);
lean_dec(v_a_1514_);
lean_dec_ref(v_a_1513_);
lean_dec(v_a_1512_);
lean_dec_ref(v_a_1511_);
lean_dec(v_a_1510_);
lean_dec_ref(v_a_1509_);
lean_dec(v_a_1508_);
lean_dec_ref(v_a_1507_);
return v_res_1516_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in_____x2c___x2c____1(lean_object* v_x_1549_, lean_object* v_a_1550_, lean_object* v_a_1551_, lean_object* v_a_1552_, lean_object* v_a_1553_, lean_object* v_a_1554_, lean_object* v_a_1555_, lean_object* v_a_1556_, lean_object* v_a_1557_){
_start:
{
lean_object* v___x_1559_; uint8_t v___x_1560_; 
v___x_1559_ = ((lean_object*)(lp_Props2Theories_tacticSpecialize__in_____x2c___x2c___00__closed__1));
lean_inc(v_x_1549_);
v___x_1560_ = l_Lean_Syntax_isOfKind(v_x_1549_, v___x_1559_);
if (v___x_1560_ == 0)
{
lean_object* v___x_1561_; 
lean_dec(v_x_1549_);
v___x_1561_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__0___redArg();
return v___x_1561_;
}
else
{
lean_object* v_ref_1562_; lean_object* v_quotContext_1563_; lean_object* v_currMacroScope_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; uint8_t v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; 
v_ref_1562_ = lean_ctor_get(v_a_1556_, 5);
v_quotContext_1563_ = lean_ctor_get(v_a_1556_, 10);
v_currMacroScope_1564_ = lean_ctor_get(v_a_1556_, 11);
v___x_1565_ = lean_unsigned_to_nat(1u);
v___x_1566_ = l_Lean_Syntax_getArg(v_x_1549_, v___x_1565_);
v___x_1567_ = lean_unsigned_to_nat(3u);
v___x_1568_ = l_Lean_Syntax_getArg(v_x_1549_, v___x_1567_);
v___x_1569_ = lean_unsigned_to_nat(5u);
v___x_1570_ = l_Lean_Syntax_getArg(v_x_1549_, v___x_1569_);
lean_dec(v_x_1549_);
v___x_1571_ = 0;
v___x_1572_ = l_Lean_SourceInfo_fromRef(v_ref_1562_, v___x_1571_);
v___x_1573_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__1));
v___x_1574_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__11));
v___x_1575_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__2));
v___x_1576_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__3));
lean_inc_n(v___x_1572_, 49);
v___x_1577_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1577_, 0, v___x_1572_);
lean_ctor_set(v___x_1577_, 1, v___x_1575_);
v___x_1578_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__4));
v___x_1579_ = l_Lean_Syntax_node2(v___x_1572_, v___x_1574_, v___x_1568_, v___x_1570_);
lean_inc(v___x_1566_);
v___x_1580_ = l_Lean_Syntax_node2(v___x_1572_, v___x_1578_, v___x_1566_, v___x_1579_);
v___x_1581_ = l_Lean_Syntax_node2(v___x_1572_, v___x_1576_, v___x_1577_, v___x_1580_);
v___x_1582_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__4));
v___x_1583_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1583_, 0, v___x_1572_);
lean_ctor_set(v___x_1583_, 1, v___x_1582_);
v___x_1584_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__6));
v___x_1585_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__7));
v___x_1586_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1586_, 0, v___x_1572_);
lean_ctor_set(v___x_1586_, 1, v___x_1585_);
v___x_1587_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__9));
v___x_1588_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__11));
v___x_1589_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__12));
v___x_1590_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__13));
v___x_1591_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1591_, 0, v___x_1572_);
lean_ctor_set(v___x_1591_, 1, v___x_1589_);
v___x_1592_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__15));
v___x_1593_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__17));
v___x_1594_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__19));
v___x_1595_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__7));
v___x_1596_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1596_, 0, v___x_1572_);
lean_ctor_set(v___x_1596_, 1, v___x_1595_);
v___x_1597_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__21, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__21_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__21);
v___x_1598_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__22));
lean_inc_n(v_currMacroScope_1564_, 6);
lean_inc_n(v_quotContext_1563_, 6);
v___x_1599_ = l_Lean_addMacroScope(v_quotContext_1563_, v___x_1598_, v_currMacroScope_1564_);
v___x_1600_ = lean_box(0);
v___x_1601_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1601_, 0, v___x_1572_);
lean_ctor_set(v___x_1601_, 1, v___x_1597_);
lean_ctor_set(v___x_1601_, 2, v___x_1599_);
lean_ctor_set(v___x_1601_, 3, v___x_1600_);
v___x_1602_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__23));
v___x_1603_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1603_, 0, v___x_1572_);
lean_ctor_set(v___x_1603_, 1, v___x_1602_);
v___x_1604_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__25));
v___x_1605_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__26));
v___x_1606_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1606_, 0, v___x_1572_);
lean_ctor_set(v___x_1606_, 1, v___x_1605_);
v___x_1607_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19, &lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19);
v___x_1608_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1608_, 0, v___x_1572_);
lean_ctor_set(v___x_1608_, 1, v___x_1574_);
lean_ctor_set(v___x_1608_, 2, v___x_1607_);
v___x_1609_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__28));
v___x_1610_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__30));
v___x_1611_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__32));
v___x_1612_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__34, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__34_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__34);
v___x_1613_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__35));
v___x_1614_ = l_Lean_addMacroScope(v_quotContext_1563_, v___x_1613_, v_currMacroScope_1564_);
v___x_1615_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1615_, 0, v___x_1572_);
lean_ctor_set(v___x_1615_, 1, v___x_1612_);
lean_ctor_set(v___x_1615_, 2, v___x_1614_);
lean_ctor_set(v___x_1615_, 3, v___x_1600_);
lean_inc_ref_n(v___x_1608_, 14);
v___x_1616_ = l_Lean_Syntax_node2(v___x_1572_, v___x_1611_, v___x_1615_, v___x_1608_);
v___x_1617_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__37));
v___x_1618_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__39, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__39_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__39);
v___x_1619_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__40));
v___x_1620_ = l_Lean_addMacroScope(v_quotContext_1563_, v___x_1619_, v_currMacroScope_1564_);
v___x_1621_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__44));
v___x_1622_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1622_, 0, v___x_1572_);
lean_ctor_set(v___x_1622_, 1, v___x_1618_);
lean_ctor_set(v___x_1622_, 2, v___x_1620_);
lean_ctor_set(v___x_1622_, 3, v___x_1621_);
lean_inc_ref_n(v___x_1603_, 2);
v___x_1623_ = l_Lean_Syntax_node3(v___x_1572_, v___x_1617_, v___x_1603_, v___x_1608_, v___x_1622_);
v___x_1624_ = l_Lean_Syntax_node3(v___x_1572_, v___x_1574_, v___x_1608_, v___x_1608_, v___x_1623_);
v___x_1625_ = l_Lean_Syntax_node2(v___x_1572_, v___x_1610_, v___x_1616_, v___x_1624_);
v___x_1626_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__23));
v___x_1627_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1627_, 0, v___x_1572_);
lean_ctor_set(v___x_1627_, 1, v___x_1626_);
v___x_1628_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__46, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__46_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__46);
v___x_1629_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__47));
v___x_1630_ = l_Lean_addMacroScope(v_quotContext_1563_, v___x_1629_, v_currMacroScope_1564_);
v___x_1631_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1631_, 0, v___x_1572_);
lean_ctor_set(v___x_1631_, 1, v___x_1628_);
lean_ctor_set(v___x_1631_, 2, v___x_1630_);
lean_ctor_set(v___x_1631_, 3, v___x_1600_);
v___x_1632_ = l_Lean_Syntax_node2(v___x_1572_, v___x_1611_, v___x_1631_, v___x_1608_);
v___x_1633_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__49, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__49_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__49);
v___x_1634_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__50));
v___x_1635_ = l_Lean_addMacroScope(v_quotContext_1563_, v___x_1634_, v_currMacroScope_1564_);
v___x_1636_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__53));
v___x_1637_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1637_, 0, v___x_1572_);
lean_ctor_set(v___x_1637_, 1, v___x_1633_);
lean_ctor_set(v___x_1637_, 2, v___x_1635_);
lean_ctor_set(v___x_1637_, 3, v___x_1636_);
v___x_1638_ = l_Lean_Syntax_node3(v___x_1572_, v___x_1617_, v___x_1603_, v___x_1608_, v___x_1637_);
v___x_1639_ = l_Lean_Syntax_node3(v___x_1572_, v___x_1574_, v___x_1608_, v___x_1608_, v___x_1638_);
lean_inc(v___x_1639_);
v___x_1640_ = l_Lean_Syntax_node2(v___x_1572_, v___x_1610_, v___x_1632_, v___x_1639_);
v___x_1641_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__55, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__55_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__55);
v___x_1642_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__56));
v___x_1643_ = l_Lean_addMacroScope(v_quotContext_1563_, v___x_1642_, v_currMacroScope_1564_);
v___x_1644_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1644_, 0, v___x_1572_);
lean_ctor_set(v___x_1644_, 1, v___x_1641_);
lean_ctor_set(v___x_1644_, 2, v___x_1643_);
lean_ctor_set(v___x_1644_, 3, v___x_1600_);
v___x_1645_ = l_Lean_Syntax_node2(v___x_1572_, v___x_1611_, v___x_1644_, v___x_1608_);
v___x_1646_ = l_Lean_Syntax_node2(v___x_1572_, v___x_1610_, v___x_1645_, v___x_1639_);
lean_inc_ref(v___x_1627_);
v___x_1647_ = l_Lean_Syntax_node5(v___x_1572_, v___x_1574_, v___x_1625_, v___x_1627_, v___x_1640_, v___x_1627_, v___x_1646_);
v___x_1648_ = l_Lean_Syntax_node1(v___x_1572_, v___x_1609_, v___x_1647_);
v___x_1649_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__58));
v___x_1650_ = l_Lean_Syntax_node1(v___x_1572_, v___x_1649_, v___x_1608_);
v___x_1651_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__59));
v___x_1652_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1652_, 0, v___x_1572_);
lean_ctor_set(v___x_1652_, 1, v___x_1651_);
v___x_1653_ = l_Lean_Syntax_node6(v___x_1572_, v___x_1604_, v___x_1606_, v___x_1608_, v___x_1648_, v___x_1650_, v___x_1608_, v___x_1652_);
v___x_1654_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__49));
v___x_1655_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1655_, 0, v___x_1572_);
lean_ctor_set(v___x_1655_, 1, v___x_1654_);
v___x_1656_ = l_Lean_Syntax_node5(v___x_1572_, v___x_1594_, v___x_1596_, v___x_1601_, v___x_1603_, v___x_1653_, v___x_1655_);
v___x_1657_ = l_Lean_Syntax_node1(v___x_1572_, v___x_1593_, v___x_1656_);
v___x_1658_ = l_Lean_Syntax_node1(v___x_1572_, v___x_1574_, v___x_1657_);
v___x_1659_ = l_Lean_Syntax_node1(v___x_1572_, v___x_1592_, v___x_1658_);
v___x_1660_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__61));
v___x_1661_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__62));
v___x_1662_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1662_, 0, v___x_1572_);
lean_ctor_set(v___x_1662_, 1, v___x_1661_);
v___x_1663_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__64));
v___x_1664_ = l_Lean_Syntax_node1(v___x_1572_, v___x_1574_, v___x_1566_);
v___x_1665_ = l_Lean_Syntax_node1(v___x_1572_, v___x_1663_, v___x_1664_);
v___x_1666_ = l_Lean_Syntax_node2(v___x_1572_, v___x_1660_, v___x_1662_, v___x_1665_);
v___x_1667_ = l_Lean_Syntax_node1(v___x_1572_, v___x_1574_, v___x_1666_);
v___x_1668_ = l_Lean_Syntax_node6(v___x_1572_, v___x_1590_, v___x_1591_, v___x_1659_, v___x_1608_, v___x_1608_, v___x_1608_, v___x_1667_);
v___x_1669_ = l_Lean_Syntax_node1(v___x_1572_, v___x_1574_, v___x_1668_);
v___x_1670_ = l_Lean_Syntax_node1(v___x_1572_, v___x_1588_, v___x_1669_);
v___x_1671_ = l_Lean_Syntax_node1(v___x_1572_, v___x_1587_, v___x_1670_);
v___x_1672_ = l_Lean_Syntax_node2(v___x_1572_, v___x_1584_, v___x_1586_, v___x_1671_);
v___x_1673_ = l_Lean_Syntax_node3(v___x_1572_, v___x_1574_, v___x_1581_, v___x_1583_, v___x_1672_);
v___x_1674_ = l_Lean_Syntax_node1(v___x_1572_, v___x_1573_, v___x_1673_);
v___x_1675_ = l_Lean_Elab_Tactic_evalTactic(v___x_1674_, v_a_1550_, v_a_1551_, v_a_1552_, v_a_1553_, v_a_1554_, v_a_1555_, v_a_1556_, v_a_1557_);
return v___x_1675_;
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in_____x2c___x2c____1___boxed(lean_object* v_x_1676_, lean_object* v_a_1677_, lean_object* v_a_1678_, lean_object* v_a_1679_, lean_object* v_a_1680_, lean_object* v_a_1681_, lean_object* v_a_1682_, lean_object* v_a_1683_, lean_object* v_a_1684_, lean_object* v_a_1685_){
_start:
{
lean_object* v_res_1686_; 
v_res_1686_ = lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in_____x2c___x2c____1(v_x_1676_, v_a_1677_, v_a_1678_, v_a_1679_, v_a_1680_, v_a_1681_, v_a_1682_, v_a_1683_, v_a_1684_);
lean_dec(v_a_1684_);
lean_dec_ref(v_a_1683_);
lean_dec(v_a_1682_);
lean_dec_ref(v_a_1681_);
lean_dec(v_a_1680_);
lean_dec_ref(v_a_1679_);
lean_dec(v_a_1678_);
lean_dec_ref(v_a_1677_);
return v_res_1686_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__in____1(lean_object* v_x_1709_, lean_object* v_a_1710_, lean_object* v_a_1711_, lean_object* v_a_1712_, lean_object* v_a_1713_, lean_object* v_a_1714_, lean_object* v_a_1715_, lean_object* v_a_1716_, lean_object* v_a_1717_){
_start:
{
lean_object* v___x_1719_; uint8_t v___x_1720_; 
v___x_1719_ = ((lean_object*)(lp_Props2Theories_tacticIntro__in___00__closed__1));
lean_inc(v_x_1709_);
v___x_1720_ = l_Lean_Syntax_isOfKind(v_x_1709_, v___x_1719_);
if (v___x_1720_ == 0)
{
lean_object* v___x_1721_; 
lean_dec(v_x_1709_);
v___x_1721_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__0___redArg();
return v___x_1721_;
}
else
{
lean_object* v_ref_1722_; lean_object* v_quotContext_1723_; lean_object* v_currMacroScope_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; uint8_t v___x_1727_; lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; lean_object* v___x_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; lean_object* v___x_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; 
v_ref_1722_ = lean_ctor_get(v_a_1716_, 5);
v_quotContext_1723_ = lean_ctor_get(v_a_1716_, 10);
v_currMacroScope_1724_ = lean_ctor_get(v_a_1716_, 11);
v___x_1725_ = lean_unsigned_to_nat(1u);
v___x_1726_ = l_Lean_Syntax_getArg(v_x_1709_, v___x_1725_);
lean_dec(v_x_1709_);
v___x_1727_ = 0;
v___x_1728_ = l_Lean_SourceInfo_fromRef(v_ref_1722_, v___x_1727_);
v___x_1729_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__1));
v___x_1730_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__11));
v___x_1731_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__in____1___closed__0));
v___x_1732_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__in____1___closed__1));
lean_inc_n(v___x_1728_, 43);
v___x_1733_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1733_, 0, v___x_1728_);
lean_ctor_set(v___x_1733_, 1, v___x_1731_);
v___x_1734_ = l_Lean_Syntax_node1(v___x_1728_, v___x_1730_, v___x_1726_);
v___x_1735_ = l_Lean_Syntax_node2(v___x_1728_, v___x_1732_, v___x_1733_, v___x_1734_);
v___x_1736_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__4));
v___x_1737_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1737_, 0, v___x_1728_);
lean_ctor_set(v___x_1737_, 1, v___x_1736_);
v___x_1738_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__6));
v___x_1739_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__7));
v___x_1740_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1740_, 0, v___x_1728_);
lean_ctor_set(v___x_1740_, 1, v___x_1739_);
v___x_1741_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__9));
v___x_1742_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__11));
v___x_1743_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__12));
v___x_1744_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__13));
v___x_1745_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1745_, 0, v___x_1728_);
lean_ctor_set(v___x_1745_, 1, v___x_1743_);
v___x_1746_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__15));
v___x_1747_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__17));
v___x_1748_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__19));
v___x_1749_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__7));
v___x_1750_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1750_, 0, v___x_1728_);
lean_ctor_set(v___x_1750_, 1, v___x_1749_);
v___x_1751_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__21, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__21_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__21);
v___x_1752_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__22));
lean_inc_n(v_currMacroScope_1724_, 6);
lean_inc_n(v_quotContext_1723_, 6);
v___x_1753_ = l_Lean_addMacroScope(v_quotContext_1723_, v___x_1752_, v_currMacroScope_1724_);
v___x_1754_ = lean_box(0);
v___x_1755_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1755_, 0, v___x_1728_);
lean_ctor_set(v___x_1755_, 1, v___x_1751_);
lean_ctor_set(v___x_1755_, 2, v___x_1753_);
lean_ctor_set(v___x_1755_, 3, v___x_1754_);
v___x_1756_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__23));
v___x_1757_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1757_, 0, v___x_1728_);
lean_ctor_set(v___x_1757_, 1, v___x_1756_);
v___x_1758_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__25));
v___x_1759_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__26));
v___x_1760_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1760_, 0, v___x_1728_);
lean_ctor_set(v___x_1760_, 1, v___x_1759_);
v___x_1761_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19, &lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19);
v___x_1762_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1762_, 0, v___x_1728_);
lean_ctor_set(v___x_1762_, 1, v___x_1730_);
lean_ctor_set(v___x_1762_, 2, v___x_1761_);
v___x_1763_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__28));
v___x_1764_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__30));
v___x_1765_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__32));
v___x_1766_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__34, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__34_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__34);
v___x_1767_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__35));
v___x_1768_ = l_Lean_addMacroScope(v_quotContext_1723_, v___x_1767_, v_currMacroScope_1724_);
v___x_1769_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1769_, 0, v___x_1728_);
lean_ctor_set(v___x_1769_, 1, v___x_1766_);
lean_ctor_set(v___x_1769_, 2, v___x_1768_);
lean_ctor_set(v___x_1769_, 3, v___x_1754_);
lean_inc_ref_n(v___x_1762_, 15);
v___x_1770_ = l_Lean_Syntax_node2(v___x_1728_, v___x_1765_, v___x_1769_, v___x_1762_);
v___x_1771_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__37));
v___x_1772_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__39, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__39_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__39);
v___x_1773_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__40));
v___x_1774_ = l_Lean_addMacroScope(v_quotContext_1723_, v___x_1773_, v_currMacroScope_1724_);
v___x_1775_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__44));
v___x_1776_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1776_, 0, v___x_1728_);
lean_ctor_set(v___x_1776_, 1, v___x_1772_);
lean_ctor_set(v___x_1776_, 2, v___x_1774_);
lean_ctor_set(v___x_1776_, 3, v___x_1775_);
lean_inc_ref_n(v___x_1757_, 2);
v___x_1777_ = l_Lean_Syntax_node3(v___x_1728_, v___x_1771_, v___x_1757_, v___x_1762_, v___x_1776_);
v___x_1778_ = l_Lean_Syntax_node3(v___x_1728_, v___x_1730_, v___x_1762_, v___x_1762_, v___x_1777_);
v___x_1779_ = l_Lean_Syntax_node2(v___x_1728_, v___x_1764_, v___x_1770_, v___x_1778_);
v___x_1780_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__23));
v___x_1781_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1781_, 0, v___x_1728_);
lean_ctor_set(v___x_1781_, 1, v___x_1780_);
v___x_1782_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__46, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__46_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__46);
v___x_1783_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__47));
v___x_1784_ = l_Lean_addMacroScope(v_quotContext_1723_, v___x_1783_, v_currMacroScope_1724_);
v___x_1785_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1785_, 0, v___x_1728_);
lean_ctor_set(v___x_1785_, 1, v___x_1782_);
lean_ctor_set(v___x_1785_, 2, v___x_1784_);
lean_ctor_set(v___x_1785_, 3, v___x_1754_);
v___x_1786_ = l_Lean_Syntax_node2(v___x_1728_, v___x_1765_, v___x_1785_, v___x_1762_);
v___x_1787_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__49, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__49_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__49);
v___x_1788_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__50));
v___x_1789_ = l_Lean_addMacroScope(v_quotContext_1723_, v___x_1788_, v_currMacroScope_1724_);
v___x_1790_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__53));
v___x_1791_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1791_, 0, v___x_1728_);
lean_ctor_set(v___x_1791_, 1, v___x_1787_);
lean_ctor_set(v___x_1791_, 2, v___x_1789_);
lean_ctor_set(v___x_1791_, 3, v___x_1790_);
v___x_1792_ = l_Lean_Syntax_node3(v___x_1728_, v___x_1771_, v___x_1757_, v___x_1762_, v___x_1791_);
v___x_1793_ = l_Lean_Syntax_node3(v___x_1728_, v___x_1730_, v___x_1762_, v___x_1762_, v___x_1792_);
lean_inc(v___x_1793_);
v___x_1794_ = l_Lean_Syntax_node2(v___x_1728_, v___x_1764_, v___x_1786_, v___x_1793_);
v___x_1795_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__55, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__55_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__55);
v___x_1796_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__56));
v___x_1797_ = l_Lean_addMacroScope(v_quotContext_1723_, v___x_1796_, v_currMacroScope_1724_);
v___x_1798_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1798_, 0, v___x_1728_);
lean_ctor_set(v___x_1798_, 1, v___x_1795_);
lean_ctor_set(v___x_1798_, 2, v___x_1797_);
lean_ctor_set(v___x_1798_, 3, v___x_1754_);
v___x_1799_ = l_Lean_Syntax_node2(v___x_1728_, v___x_1765_, v___x_1798_, v___x_1762_);
v___x_1800_ = l_Lean_Syntax_node2(v___x_1728_, v___x_1764_, v___x_1799_, v___x_1793_);
lean_inc_ref(v___x_1781_);
v___x_1801_ = l_Lean_Syntax_node5(v___x_1728_, v___x_1730_, v___x_1779_, v___x_1781_, v___x_1794_, v___x_1781_, v___x_1800_);
v___x_1802_ = l_Lean_Syntax_node1(v___x_1728_, v___x_1763_, v___x_1801_);
v___x_1803_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__58));
v___x_1804_ = l_Lean_Syntax_node1(v___x_1728_, v___x_1803_, v___x_1762_);
v___x_1805_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__59));
v___x_1806_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1806_, 0, v___x_1728_);
lean_ctor_set(v___x_1806_, 1, v___x_1805_);
v___x_1807_ = l_Lean_Syntax_node6(v___x_1728_, v___x_1758_, v___x_1760_, v___x_1762_, v___x_1802_, v___x_1804_, v___x_1762_, v___x_1806_);
v___x_1808_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__49));
v___x_1809_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1809_, 0, v___x_1728_);
lean_ctor_set(v___x_1809_, 1, v___x_1808_);
v___x_1810_ = l_Lean_Syntax_node5(v___x_1728_, v___x_1748_, v___x_1750_, v___x_1755_, v___x_1757_, v___x_1807_, v___x_1809_);
v___x_1811_ = l_Lean_Syntax_node1(v___x_1728_, v___x_1747_, v___x_1810_);
v___x_1812_ = l_Lean_Syntax_node1(v___x_1728_, v___x_1730_, v___x_1811_);
v___x_1813_ = l_Lean_Syntax_node1(v___x_1728_, v___x_1746_, v___x_1812_);
v___x_1814_ = l_Lean_Syntax_node6(v___x_1728_, v___x_1744_, v___x_1745_, v___x_1813_, v___x_1762_, v___x_1762_, v___x_1762_, v___x_1762_);
v___x_1815_ = l_Lean_Syntax_node1(v___x_1728_, v___x_1730_, v___x_1814_);
v___x_1816_ = l_Lean_Syntax_node1(v___x_1728_, v___x_1742_, v___x_1815_);
v___x_1817_ = l_Lean_Syntax_node1(v___x_1728_, v___x_1741_, v___x_1816_);
v___x_1818_ = l_Lean_Syntax_node2(v___x_1728_, v___x_1738_, v___x_1740_, v___x_1817_);
v___x_1819_ = l_Lean_Syntax_node3(v___x_1728_, v___x_1730_, v___x_1735_, v___x_1737_, v___x_1818_);
v___x_1820_ = l_Lean_Syntax_node1(v___x_1728_, v___x_1729_, v___x_1819_);
v___x_1821_ = l_Lean_Elab_Tactic_evalTactic(v___x_1820_, v_a_1710_, v_a_1711_, v_a_1712_, v_a_1713_, v_a_1714_, v_a_1715_, v_a_1716_, v_a_1717_);
return v___x_1821_;
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__in____1___boxed(lean_object* v_x_1822_, lean_object* v_a_1823_, lean_object* v_a_1824_, lean_object* v_a_1825_, lean_object* v_a_1826_, lean_object* v_a_1827_, lean_object* v_a_1828_, lean_object* v_a_1829_, lean_object* v_a_1830_, lean_object* v_a_1831_){
_start:
{
lean_object* v_res_1832_; 
v_res_1832_ = lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__in____1(v_x_1822_, v_a_1823_, v_a_1824_, v_a_1825_, v_a_1826_, v_a_1827_, v_a_1828_, v_a_1829_, v_a_1830_);
lean_dec(v_a_1830_);
lean_dec_ref(v_a_1829_);
lean_dec(v_a_1828_);
lean_dec_ref(v_a_1827_);
lean_dec(v_a_1826_);
lean_dec_ref(v_a_1825_);
lean_dec(v_a_1824_);
lean_dec_ref(v_a_1823_);
return v_res_1832_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__in_____x2c____1(lean_object* v_x_1857_, lean_object* v_a_1858_, lean_object* v_a_1859_, lean_object* v_a_1860_, lean_object* v_a_1861_, lean_object* v_a_1862_, lean_object* v_a_1863_, lean_object* v_a_1864_, lean_object* v_a_1865_){
_start:
{
lean_object* v___x_1867_; uint8_t v___x_1868_; 
v___x_1867_ = ((lean_object*)(lp_Props2Theories_tacticIntro__in_____x2c___00__closed__1));
lean_inc(v_x_1857_);
v___x_1868_ = l_Lean_Syntax_isOfKind(v_x_1857_, v___x_1867_);
if (v___x_1868_ == 0)
{
lean_object* v___x_1869_; 
lean_dec(v_x_1857_);
v___x_1869_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__0___redArg();
return v___x_1869_;
}
else
{
lean_object* v_ref_1870_; lean_object* v_quotContext_1871_; lean_object* v_currMacroScope_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; lean_object* v___x_1876_; uint8_t v___x_1877_; lean_object* v___x_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; lean_object* v___x_1885_; lean_object* v___x_1886_; lean_object* v___x_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; lean_object* v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; lean_object* v___x_1957_; lean_object* v___x_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1964_; lean_object* v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; 
v_ref_1870_ = lean_ctor_get(v_a_1864_, 5);
v_quotContext_1871_ = lean_ctor_get(v_a_1864_, 10);
v_currMacroScope_1872_ = lean_ctor_get(v_a_1864_, 11);
v___x_1873_ = lean_unsigned_to_nat(1u);
v___x_1874_ = l_Lean_Syntax_getArg(v_x_1857_, v___x_1873_);
v___x_1875_ = lean_unsigned_to_nat(3u);
v___x_1876_ = l_Lean_Syntax_getArg(v_x_1857_, v___x_1875_);
lean_dec(v_x_1857_);
v___x_1877_ = 0;
v___x_1878_ = l_Lean_SourceInfo_fromRef(v_ref_1870_, v___x_1877_);
v___x_1879_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__1));
v___x_1880_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__11));
v___x_1881_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__in____1___closed__0));
v___x_1882_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__in____1___closed__1));
lean_inc_n(v___x_1878_, 43);
v___x_1883_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1883_, 0, v___x_1878_);
lean_ctor_set(v___x_1883_, 1, v___x_1881_);
v___x_1884_ = l_Lean_Syntax_node2(v___x_1878_, v___x_1880_, v___x_1874_, v___x_1876_);
v___x_1885_ = l_Lean_Syntax_node2(v___x_1878_, v___x_1882_, v___x_1883_, v___x_1884_);
v___x_1886_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__4));
v___x_1887_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1887_, 0, v___x_1878_);
lean_ctor_set(v___x_1887_, 1, v___x_1886_);
v___x_1888_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__6));
v___x_1889_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__7));
v___x_1890_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1890_, 0, v___x_1878_);
lean_ctor_set(v___x_1890_, 1, v___x_1889_);
v___x_1891_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__9));
v___x_1892_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__11));
v___x_1893_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__12));
v___x_1894_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__13));
v___x_1895_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1895_, 0, v___x_1878_);
lean_ctor_set(v___x_1895_, 1, v___x_1893_);
v___x_1896_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__15));
v___x_1897_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__17));
v___x_1898_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__19));
v___x_1899_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__7));
v___x_1900_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1900_, 0, v___x_1878_);
lean_ctor_set(v___x_1900_, 1, v___x_1899_);
v___x_1901_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__21, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__21_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__21);
v___x_1902_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__22));
lean_inc_n(v_currMacroScope_1872_, 6);
lean_inc_n(v_quotContext_1871_, 6);
v___x_1903_ = l_Lean_addMacroScope(v_quotContext_1871_, v___x_1902_, v_currMacroScope_1872_);
v___x_1904_ = lean_box(0);
v___x_1905_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1905_, 0, v___x_1878_);
lean_ctor_set(v___x_1905_, 1, v___x_1901_);
lean_ctor_set(v___x_1905_, 2, v___x_1903_);
lean_ctor_set(v___x_1905_, 3, v___x_1904_);
v___x_1906_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__23));
v___x_1907_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1907_, 0, v___x_1878_);
lean_ctor_set(v___x_1907_, 1, v___x_1906_);
v___x_1908_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__25));
v___x_1909_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__26));
v___x_1910_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1910_, 0, v___x_1878_);
lean_ctor_set(v___x_1910_, 1, v___x_1909_);
v___x_1911_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19, &lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19);
v___x_1912_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1912_, 0, v___x_1878_);
lean_ctor_set(v___x_1912_, 1, v___x_1880_);
lean_ctor_set(v___x_1912_, 2, v___x_1911_);
v___x_1913_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__28));
v___x_1914_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__30));
v___x_1915_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__32));
v___x_1916_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__34, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__34_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__34);
v___x_1917_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__35));
v___x_1918_ = l_Lean_addMacroScope(v_quotContext_1871_, v___x_1917_, v_currMacroScope_1872_);
v___x_1919_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1919_, 0, v___x_1878_);
lean_ctor_set(v___x_1919_, 1, v___x_1916_);
lean_ctor_set(v___x_1919_, 2, v___x_1918_);
lean_ctor_set(v___x_1919_, 3, v___x_1904_);
lean_inc_ref_n(v___x_1912_, 15);
v___x_1920_ = l_Lean_Syntax_node2(v___x_1878_, v___x_1915_, v___x_1919_, v___x_1912_);
v___x_1921_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__37));
v___x_1922_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__39, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__39_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__39);
v___x_1923_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__40));
v___x_1924_ = l_Lean_addMacroScope(v_quotContext_1871_, v___x_1923_, v_currMacroScope_1872_);
v___x_1925_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__44));
v___x_1926_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1926_, 0, v___x_1878_);
lean_ctor_set(v___x_1926_, 1, v___x_1922_);
lean_ctor_set(v___x_1926_, 2, v___x_1924_);
lean_ctor_set(v___x_1926_, 3, v___x_1925_);
lean_inc_ref_n(v___x_1907_, 2);
v___x_1927_ = l_Lean_Syntax_node3(v___x_1878_, v___x_1921_, v___x_1907_, v___x_1912_, v___x_1926_);
v___x_1928_ = l_Lean_Syntax_node3(v___x_1878_, v___x_1880_, v___x_1912_, v___x_1912_, v___x_1927_);
v___x_1929_ = l_Lean_Syntax_node2(v___x_1878_, v___x_1914_, v___x_1920_, v___x_1928_);
v___x_1930_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__23));
v___x_1931_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1931_, 0, v___x_1878_);
lean_ctor_set(v___x_1931_, 1, v___x_1930_);
v___x_1932_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__46, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__46_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__46);
v___x_1933_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__47));
v___x_1934_ = l_Lean_addMacroScope(v_quotContext_1871_, v___x_1933_, v_currMacroScope_1872_);
v___x_1935_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1935_, 0, v___x_1878_);
lean_ctor_set(v___x_1935_, 1, v___x_1932_);
lean_ctor_set(v___x_1935_, 2, v___x_1934_);
lean_ctor_set(v___x_1935_, 3, v___x_1904_);
v___x_1936_ = l_Lean_Syntax_node2(v___x_1878_, v___x_1915_, v___x_1935_, v___x_1912_);
v___x_1937_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__49, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__49_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__49);
v___x_1938_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__50));
v___x_1939_ = l_Lean_addMacroScope(v_quotContext_1871_, v___x_1938_, v_currMacroScope_1872_);
v___x_1940_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__53));
v___x_1941_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1941_, 0, v___x_1878_);
lean_ctor_set(v___x_1941_, 1, v___x_1937_);
lean_ctor_set(v___x_1941_, 2, v___x_1939_);
lean_ctor_set(v___x_1941_, 3, v___x_1940_);
v___x_1942_ = l_Lean_Syntax_node3(v___x_1878_, v___x_1921_, v___x_1907_, v___x_1912_, v___x_1941_);
v___x_1943_ = l_Lean_Syntax_node3(v___x_1878_, v___x_1880_, v___x_1912_, v___x_1912_, v___x_1942_);
lean_inc(v___x_1943_);
v___x_1944_ = l_Lean_Syntax_node2(v___x_1878_, v___x_1914_, v___x_1936_, v___x_1943_);
v___x_1945_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__55, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__55_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__55);
v___x_1946_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__56));
v___x_1947_ = l_Lean_addMacroScope(v_quotContext_1871_, v___x_1946_, v_currMacroScope_1872_);
v___x_1948_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1948_, 0, v___x_1878_);
lean_ctor_set(v___x_1948_, 1, v___x_1945_);
lean_ctor_set(v___x_1948_, 2, v___x_1947_);
lean_ctor_set(v___x_1948_, 3, v___x_1904_);
v___x_1949_ = l_Lean_Syntax_node2(v___x_1878_, v___x_1915_, v___x_1948_, v___x_1912_);
v___x_1950_ = l_Lean_Syntax_node2(v___x_1878_, v___x_1914_, v___x_1949_, v___x_1943_);
lean_inc_ref(v___x_1931_);
v___x_1951_ = l_Lean_Syntax_node5(v___x_1878_, v___x_1880_, v___x_1929_, v___x_1931_, v___x_1944_, v___x_1931_, v___x_1950_);
v___x_1952_ = l_Lean_Syntax_node1(v___x_1878_, v___x_1913_, v___x_1951_);
v___x_1953_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__58));
v___x_1954_ = l_Lean_Syntax_node1(v___x_1878_, v___x_1953_, v___x_1912_);
v___x_1955_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__59));
v___x_1956_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1956_, 0, v___x_1878_);
lean_ctor_set(v___x_1956_, 1, v___x_1955_);
v___x_1957_ = l_Lean_Syntax_node6(v___x_1878_, v___x_1908_, v___x_1910_, v___x_1912_, v___x_1952_, v___x_1954_, v___x_1912_, v___x_1956_);
v___x_1958_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__49));
v___x_1959_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1959_, 0, v___x_1878_);
lean_ctor_set(v___x_1959_, 1, v___x_1958_);
v___x_1960_ = l_Lean_Syntax_node5(v___x_1878_, v___x_1898_, v___x_1900_, v___x_1905_, v___x_1907_, v___x_1957_, v___x_1959_);
v___x_1961_ = l_Lean_Syntax_node1(v___x_1878_, v___x_1897_, v___x_1960_);
v___x_1962_ = l_Lean_Syntax_node1(v___x_1878_, v___x_1880_, v___x_1961_);
v___x_1963_ = l_Lean_Syntax_node1(v___x_1878_, v___x_1896_, v___x_1962_);
v___x_1964_ = l_Lean_Syntax_node6(v___x_1878_, v___x_1894_, v___x_1895_, v___x_1963_, v___x_1912_, v___x_1912_, v___x_1912_, v___x_1912_);
v___x_1965_ = l_Lean_Syntax_node1(v___x_1878_, v___x_1880_, v___x_1964_);
v___x_1966_ = l_Lean_Syntax_node1(v___x_1878_, v___x_1892_, v___x_1965_);
v___x_1967_ = l_Lean_Syntax_node1(v___x_1878_, v___x_1891_, v___x_1966_);
v___x_1968_ = l_Lean_Syntax_node2(v___x_1878_, v___x_1888_, v___x_1890_, v___x_1967_);
v___x_1969_ = l_Lean_Syntax_node3(v___x_1878_, v___x_1880_, v___x_1885_, v___x_1887_, v___x_1968_);
v___x_1970_ = l_Lean_Syntax_node1(v___x_1878_, v___x_1879_, v___x_1969_);
v___x_1971_ = l_Lean_Elab_Tactic_evalTactic(v___x_1970_, v_a_1858_, v_a_1859_, v_a_1860_, v_a_1861_, v_a_1862_, v_a_1863_, v_a_1864_, v_a_1865_);
return v___x_1971_;
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__in_____x2c____1___boxed(lean_object* v_x_1972_, lean_object* v_a_1973_, lean_object* v_a_1974_, lean_object* v_a_1975_, lean_object* v_a_1976_, lean_object* v_a_1977_, lean_object* v_a_1978_, lean_object* v_a_1979_, lean_object* v_a_1980_, lean_object* v_a_1981_){
_start:
{
lean_object* v_res_1982_; 
v_res_1982_ = lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__in_____x2c____1(v_x_1972_, v_a_1973_, v_a_1974_, v_a_1975_, v_a_1976_, v_a_1977_, v_a_1978_, v_a_1979_, v_a_1980_);
lean_dec(v_a_1980_);
lean_dec_ref(v_a_1979_);
lean_dec(v_a_1978_);
lean_dec_ref(v_a_1977_);
lean_dec(v_a_1976_);
lean_dec_ref(v_a_1975_);
lean_dec(v_a_1974_);
lean_dec_ref(v_a_1973_);
return v_res_1982_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1(lean_object* v_x_2015_, lean_object* v_a_2016_, lean_object* v_a_2017_, lean_object* v_a_2018_, lean_object* v_a_2019_, lean_object* v_a_2020_, lean_object* v_a_2021_, lean_object* v_a_2022_, lean_object* v_a_2023_){
_start:
{
lean_object* v___x_2025_; uint8_t v___x_2026_; 
v___x_2025_ = ((lean_object*)(lp_Props2Theories_tacticIntro__exists__in___00__closed__1));
lean_inc(v_x_2015_);
v___x_2026_ = l_Lean_Syntax_isOfKind(v_x_2015_, v___x_2025_);
if (v___x_2026_ == 0)
{
lean_object* v___x_2027_; 
lean_dec(v_x_2015_);
v___x_2027_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__0___redArg();
return v___x_2027_;
}
else
{
lean_object* v_ref_2028_; lean_object* v_quotContext_2029_; lean_object* v_currMacroScope_2030_; lean_object* v___x_2031_; lean_object* v___x_2032_; uint8_t v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; 
v_ref_2028_ = lean_ctor_get(v_a_2022_, 5);
v_quotContext_2029_ = lean_ctor_get(v_a_2022_, 10);
v_currMacroScope_2030_ = lean_ctor_get(v_a_2022_, 11);
v___x_2031_ = lean_unsigned_to_nat(1u);
v___x_2032_ = l_Lean_Syntax_getArg(v_x_2015_, v___x_2031_);
lean_dec(v_x_2015_);
v___x_2033_ = 0;
v___x_2034_ = l_Lean_SourceInfo_fromRef(v_ref_2028_, v___x_2033_);
v___x_2035_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__1));
v___x_2036_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__11));
v___x_2037_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__2));
v___x_2038_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__3));
lean_inc_n(v___x_2034_, 48);
v___x_2039_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2039_, 0, v___x_2034_);
lean_ctor_set(v___x_2039_, 1, v___x_2038_);
v___x_2040_ = l_Lean_Syntax_node2(v___x_2034_, v___x_2037_, v___x_2039_, v___x_2032_);
v___x_2041_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__4));
v___x_2042_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2042_, 0, v___x_2034_);
lean_ctor_set(v___x_2042_, 1, v___x_2041_);
v___x_2043_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__4));
v___x_2044_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__7));
v___x_2045_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2045_, 0, v___x_2034_);
lean_ctor_set(v___x_2045_, 1, v___x_2044_);
v___x_2046_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__9));
v___x_2047_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__11));
v___x_2048_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__6));
v___x_2049_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__7));
v___x_2050_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2050_, 0, v___x_2034_);
lean_ctor_set(v___x_2050_, 1, v___x_2049_);
v___x_2051_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__12));
v___x_2052_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__13));
v___x_2053_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2053_, 0, v___x_2034_);
lean_ctor_set(v___x_2053_, 1, v___x_2051_);
v___x_2054_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__15));
v___x_2055_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__17));
v___x_2056_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__19));
v___x_2057_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__21, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__21_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__21);
v___x_2058_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__22));
lean_inc_n(v_currMacroScope_2030_, 6);
lean_inc_n(v_quotContext_2029_, 6);
v___x_2059_ = l_Lean_addMacroScope(v_quotContext_2029_, v___x_2058_, v_currMacroScope_2030_);
v___x_2060_ = lean_box(0);
v___x_2061_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2061_, 0, v___x_2034_);
lean_ctor_set(v___x_2061_, 1, v___x_2057_);
lean_ctor_set(v___x_2061_, 2, v___x_2059_);
lean_ctor_set(v___x_2061_, 3, v___x_2060_);
v___x_2062_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__23));
v___x_2063_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2063_, 0, v___x_2034_);
lean_ctor_set(v___x_2063_, 1, v___x_2062_);
v___x_2064_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__25));
v___x_2065_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__26));
v___x_2066_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2066_, 0, v___x_2034_);
lean_ctor_set(v___x_2066_, 1, v___x_2065_);
v___x_2067_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19, &lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19);
v___x_2068_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2068_, 0, v___x_2034_);
lean_ctor_set(v___x_2068_, 1, v___x_2036_);
lean_ctor_set(v___x_2068_, 2, v___x_2067_);
v___x_2069_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__28));
v___x_2070_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__30));
v___x_2071_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__32));
v___x_2072_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__34, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__34_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__34);
v___x_2073_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__35));
v___x_2074_ = l_Lean_addMacroScope(v_quotContext_2029_, v___x_2073_, v_currMacroScope_2030_);
v___x_2075_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2075_, 0, v___x_2034_);
lean_ctor_set(v___x_2075_, 1, v___x_2072_);
lean_ctor_set(v___x_2075_, 2, v___x_2074_);
lean_ctor_set(v___x_2075_, 3, v___x_2060_);
lean_inc_ref_n(v___x_2068_, 15);
v___x_2076_ = l_Lean_Syntax_node2(v___x_2034_, v___x_2071_, v___x_2075_, v___x_2068_);
v___x_2077_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__37));
v___x_2078_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__39, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__39_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__39);
v___x_2079_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__40));
v___x_2080_ = l_Lean_addMacroScope(v_quotContext_2029_, v___x_2079_, v_currMacroScope_2030_);
v___x_2081_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__44));
v___x_2082_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2082_, 0, v___x_2034_);
lean_ctor_set(v___x_2082_, 1, v___x_2078_);
lean_ctor_set(v___x_2082_, 2, v___x_2080_);
lean_ctor_set(v___x_2082_, 3, v___x_2081_);
lean_inc_ref_n(v___x_2063_, 2);
v___x_2083_ = l_Lean_Syntax_node3(v___x_2034_, v___x_2077_, v___x_2063_, v___x_2068_, v___x_2082_);
v___x_2084_ = l_Lean_Syntax_node3(v___x_2034_, v___x_2036_, v___x_2068_, v___x_2068_, v___x_2083_);
v___x_2085_ = l_Lean_Syntax_node2(v___x_2034_, v___x_2070_, v___x_2076_, v___x_2084_);
v___x_2086_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__23));
v___x_2087_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2087_, 0, v___x_2034_);
lean_ctor_set(v___x_2087_, 1, v___x_2086_);
v___x_2088_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__46, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__46_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__46);
v___x_2089_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__47));
v___x_2090_ = l_Lean_addMacroScope(v_quotContext_2029_, v___x_2089_, v_currMacroScope_2030_);
v___x_2091_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2091_, 0, v___x_2034_);
lean_ctor_set(v___x_2091_, 1, v___x_2088_);
lean_ctor_set(v___x_2091_, 2, v___x_2090_);
lean_ctor_set(v___x_2091_, 3, v___x_2060_);
v___x_2092_ = l_Lean_Syntax_node2(v___x_2034_, v___x_2071_, v___x_2091_, v___x_2068_);
v___x_2093_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__49, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__49_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__49);
v___x_2094_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__50));
v___x_2095_ = l_Lean_addMacroScope(v_quotContext_2029_, v___x_2094_, v_currMacroScope_2030_);
v___x_2096_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__53));
v___x_2097_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2097_, 0, v___x_2034_);
lean_ctor_set(v___x_2097_, 1, v___x_2093_);
lean_ctor_set(v___x_2097_, 2, v___x_2095_);
lean_ctor_set(v___x_2097_, 3, v___x_2096_);
v___x_2098_ = l_Lean_Syntax_node3(v___x_2034_, v___x_2077_, v___x_2063_, v___x_2068_, v___x_2097_);
v___x_2099_ = l_Lean_Syntax_node3(v___x_2034_, v___x_2036_, v___x_2068_, v___x_2068_, v___x_2098_);
lean_inc(v___x_2099_);
v___x_2100_ = l_Lean_Syntax_node2(v___x_2034_, v___x_2070_, v___x_2092_, v___x_2099_);
v___x_2101_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__55, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__55_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__55);
v___x_2102_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__56));
v___x_2103_ = l_Lean_addMacroScope(v_quotContext_2029_, v___x_2102_, v_currMacroScope_2030_);
v___x_2104_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2104_, 0, v___x_2034_);
lean_ctor_set(v___x_2104_, 1, v___x_2101_);
lean_ctor_set(v___x_2104_, 2, v___x_2103_);
lean_ctor_set(v___x_2104_, 3, v___x_2060_);
v___x_2105_ = l_Lean_Syntax_node2(v___x_2034_, v___x_2071_, v___x_2104_, v___x_2068_);
v___x_2106_ = l_Lean_Syntax_node2(v___x_2034_, v___x_2070_, v___x_2105_, v___x_2099_);
lean_inc_ref(v___x_2087_);
v___x_2107_ = l_Lean_Syntax_node5(v___x_2034_, v___x_2036_, v___x_2085_, v___x_2087_, v___x_2100_, v___x_2087_, v___x_2106_);
v___x_2108_ = l_Lean_Syntax_node1(v___x_2034_, v___x_2069_, v___x_2107_);
v___x_2109_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__58));
v___x_2110_ = l_Lean_Syntax_node1(v___x_2034_, v___x_2109_, v___x_2068_);
v___x_2111_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__59));
v___x_2112_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2112_, 0, v___x_2034_);
lean_ctor_set(v___x_2112_, 1, v___x_2111_);
v___x_2113_ = l_Lean_Syntax_node6(v___x_2034_, v___x_2064_, v___x_2066_, v___x_2068_, v___x_2108_, v___x_2110_, v___x_2068_, v___x_2112_);
v___x_2114_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__49));
v___x_2115_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2115_, 0, v___x_2034_);
lean_ctor_set(v___x_2115_, 1, v___x_2114_);
lean_inc_ref(v___x_2115_);
lean_inc_ref(v___x_2045_);
v___x_2116_ = l_Lean_Syntax_node5(v___x_2034_, v___x_2056_, v___x_2045_, v___x_2061_, v___x_2063_, v___x_2113_, v___x_2115_);
v___x_2117_ = l_Lean_Syntax_node1(v___x_2034_, v___x_2055_, v___x_2116_);
v___x_2118_ = l_Lean_Syntax_node1(v___x_2034_, v___x_2036_, v___x_2117_);
v___x_2119_ = l_Lean_Syntax_node1(v___x_2034_, v___x_2054_, v___x_2118_);
v___x_2120_ = l_Lean_Syntax_node6(v___x_2034_, v___x_2052_, v___x_2053_, v___x_2119_, v___x_2068_, v___x_2068_, v___x_2068_, v___x_2068_);
v___x_2121_ = l_Lean_Syntax_node1(v___x_2034_, v___x_2036_, v___x_2120_);
v___x_2122_ = l_Lean_Syntax_node1(v___x_2034_, v___x_2047_, v___x_2121_);
v___x_2123_ = l_Lean_Syntax_node1(v___x_2034_, v___x_2046_, v___x_2122_);
v___x_2124_ = l_Lean_Syntax_node2(v___x_2034_, v___x_2048_, v___x_2050_, v___x_2123_);
v___x_2125_ = l_Lean_Syntax_node1(v___x_2034_, v___x_2036_, v___x_2124_);
v___x_2126_ = l_Lean_Syntax_node1(v___x_2034_, v___x_2047_, v___x_2125_);
v___x_2127_ = l_Lean_Syntax_node1(v___x_2034_, v___x_2046_, v___x_2126_);
v___x_2128_ = l_Lean_Syntax_node3(v___x_2034_, v___x_2043_, v___x_2045_, v___x_2127_, v___x_2115_);
v___x_2129_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__6));
v___x_2130_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__7));
v___x_2131_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2131_, 0, v___x_2034_);
lean_ctor_set(v___x_2131_, 1, v___x_2130_);
v___x_2132_ = l_Lean_Syntax_node1(v___x_2034_, v___x_2129_, v___x_2131_);
lean_inc_ref(v___x_2042_);
v___x_2133_ = l_Lean_Syntax_node5(v___x_2034_, v___x_2036_, v___x_2040_, v___x_2042_, v___x_2128_, v___x_2042_, v___x_2132_);
v___x_2134_ = l_Lean_Syntax_node1(v___x_2034_, v___x_2035_, v___x_2133_);
v___x_2135_ = l_Lean_Elab_Tactic_evalTactic(v___x_2134_, v_a_2016_, v_a_2017_, v_a_2018_, v_a_2019_, v_a_2020_, v_a_2021_, v_a_2022_, v_a_2023_);
return v___x_2135_;
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___boxed(lean_object* v_x_2136_, lean_object* v_a_2137_, lean_object* v_a_2138_, lean_object* v_a_2139_, lean_object* v_a_2140_, lean_object* v_a_2141_, lean_object* v_a_2142_, lean_object* v_a_2143_, lean_object* v_a_2144_, lean_object* v_a_2145_){
_start:
{
lean_object* v_res_2146_; 
v_res_2146_ = lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1(v_x_2136_, v_a_2137_, v_a_2138_, v_a_2139_, v_a_2140_, v_a_2141_, v_a_2142_, v_a_2143_, v_a_2144_);
lean_dec(v_a_2144_);
lean_dec_ref(v_a_2143_);
lean_dec(v_a_2142_);
lean_dec_ref(v_a_2141_);
lean_dec(v_a_2140_);
lean_dec_ref(v_a_2139_);
lean_dec(v_a_2138_);
lean_dec_ref(v_a_2137_);
return v_res_2146_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in_____x2c___x2c____1(lean_object* v_x_2185_, lean_object* v_a_2186_, lean_object* v_a_2187_, lean_object* v_a_2188_, lean_object* v_a_2189_, lean_object* v_a_2190_, lean_object* v_a_2191_, lean_object* v_a_2192_, lean_object* v_a_2193_){
_start:
{
lean_object* v___x_2195_; uint8_t v___x_2196_; 
v___x_2195_ = ((lean_object*)(lp_Props2Theories_tacticIntro__exists__in_____x2c___x2c___00__closed__1));
lean_inc(v_x_2185_);
v___x_2196_ = l_Lean_Syntax_isOfKind(v_x_2185_, v___x_2195_);
if (v___x_2196_ == 0)
{
lean_object* v___x_2197_; 
lean_dec(v_x_2185_);
v___x_2197_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__0___redArg();
return v___x_2197_;
}
else
{
lean_object* v_ref_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; uint8_t v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; 
v_ref_2198_ = lean_ctor_get(v_a_2192_, 5);
v___x_2199_ = lean_unsigned_to_nat(1u);
v___x_2200_ = l_Lean_Syntax_getArg(v_x_2185_, v___x_2199_);
v___x_2201_ = lean_unsigned_to_nat(3u);
v___x_2202_ = l_Lean_Syntax_getArg(v_x_2185_, v___x_2201_);
v___x_2203_ = lean_unsigned_to_nat(5u);
v___x_2204_ = l_Lean_Syntax_getArg(v_x_2185_, v___x_2203_);
lean_dec(v_x_2185_);
v___x_2205_ = 0;
v___x_2206_ = l_Lean_SourceInfo_fromRef(v_ref_2198_, v___x_2205_);
v___x_2207_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__1));
v___x_2208_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__11));
v___x_2209_ = ((lean_object*)(lp_Props2Theories_tacticIntro__exists__in___00__closed__1));
v___x_2210_ = ((lean_object*)(lp_Props2Theories_tacticIntro__exists__in___00__closed__2));
lean_inc_n(v___x_2206_, 7);
v___x_2211_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2211_, 0, v___x_2206_);
lean_ctor_set(v___x_2211_, 1, v___x_2210_);
v___x_2212_ = l_Lean_Syntax_node2(v___x_2206_, v___x_2209_, v___x_2211_, v___x_2200_);
v___x_2213_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__4));
v___x_2214_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2214_, 0, v___x_2206_);
lean_ctor_set(v___x_2214_, 1, v___x_2213_);
v___x_2215_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in_____x2c___x2c____1___closed__0));
v___x_2216_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in_____x2c___x2c____1___closed__1));
v___x_2217_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2217_, 0, v___x_2206_);
lean_ctor_set(v___x_2217_, 1, v___x_2215_);
lean_inc_ref(v___x_2217_);
v___x_2218_ = l_Lean_Syntax_node2(v___x_2206_, v___x_2216_, v___x_2217_, v___x_2202_);
v___x_2219_ = l_Lean_Syntax_node2(v___x_2206_, v___x_2216_, v___x_2217_, v___x_2204_);
lean_inc_ref(v___x_2214_);
v___x_2220_ = l_Lean_Syntax_node5(v___x_2206_, v___x_2208_, v___x_2212_, v___x_2214_, v___x_2218_, v___x_2214_, v___x_2219_);
v___x_2221_ = l_Lean_Syntax_node1(v___x_2206_, v___x_2207_, v___x_2220_);
v___x_2222_ = l_Lean_Elab_Tactic_evalTactic(v___x_2221_, v_a_2186_, v_a_2187_, v_a_2188_, v_a_2189_, v_a_2190_, v_a_2191_, v_a_2192_, v_a_2193_);
return v___x_2222_;
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in_____x2c___x2c____1___boxed(lean_object* v_x_2223_, lean_object* v_a_2224_, lean_object* v_a_2225_, lean_object* v_a_2226_, lean_object* v_a_2227_, lean_object* v_a_2228_, lean_object* v_a_2229_, lean_object* v_a_2230_, lean_object* v_a_2231_, lean_object* v_a_2232_){
_start:
{
lean_object* v_res_2233_; 
v_res_2233_ = lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in_____x2c___x2c____1(v_x_2223_, v_a_2224_, v_a_2225_, v_a_2226_, v_a_2227_, v_a_2228_, v_a_2229_, v_a_2230_, v_a_2231_);
lean_dec(v_a_2231_);
lean_dec_ref(v_a_2230_);
lean_dec(v_a_2229_);
lean_dec_ref(v_a_2228_);
lean_dec(v_a_2227_);
lean_dec_ref(v_a_2226_);
lean_dec(v_a_2225_);
lean_dec_ref(v_a_2224_);
return v_res_2233_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___lam__0(lean_object* v_h__new_2274_, lean_object* v_a_2275_, lean_object* v_a_2276_, uint8_t v___x_2277_, lean_object* v___y_2278_, lean_object* v___y_2279_, lean_object* v___y_2280_, lean_object* v___y_2281_, lean_object* v___y_2282_, lean_object* v___y_2283_, lean_object* v___y_2284_, lean_object* v___y_2285_){
_start:
{
lean_object* v___x_2287_; 
v___x_2287_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_2279_, v___y_2282_, v___y_2283_, v___y_2284_, v___y_2285_);
if (lean_obj_tag(v___x_2287_) == 0)
{
lean_object* v_a_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; 
v_a_2288_ = lean_ctor_get(v___x_2287_, 0);
lean_inc(v_a_2288_);
lean_dec_ref(v___x_2287_);
v___x_2289_ = l_Lean_Syntax_getId(v_h__new_2274_);
v___x_2290_ = l_Lean_MVarId_assert(v_a_2288_, v___x_2289_, v_a_2275_, v_a_2276_, v___y_2282_, v___y_2283_, v___y_2284_, v___y_2285_);
if (lean_obj_tag(v___x_2290_) == 0)
{
lean_object* v_a_2291_; lean_object* v___x_2292_; 
v_a_2291_ = lean_ctor_get(v___x_2290_, 0);
lean_inc(v_a_2291_);
lean_dec_ref(v___x_2290_);
v___x_2292_ = l_Lean_Meta_intro1Core(v_a_2291_, v___x_2277_, v___y_2282_, v___y_2283_, v___y_2284_, v___y_2285_);
if (lean_obj_tag(v___x_2292_) == 0)
{
lean_object* v_a_2293_; lean_object* v_snd_2294_; lean_object* v___x_2296_; uint8_t v_isShared_2297_; uint8_t v_isSharedCheck_2312_; 
v_a_2293_ = lean_ctor_get(v___x_2292_, 0);
lean_inc(v_a_2293_);
lean_dec_ref(v___x_2292_);
v_snd_2294_ = lean_ctor_get(v_a_2293_, 1);
v_isSharedCheck_2312_ = !lean_is_exclusive(v_a_2293_);
if (v_isSharedCheck_2312_ == 0)
{
lean_object* v_unused_2313_; 
v_unused_2313_ = lean_ctor_get(v_a_2293_, 0);
lean_dec(v_unused_2313_);
v___x_2296_ = v_a_2293_;
v_isShared_2297_ = v_isSharedCheck_2312_;
goto v_resetjp_2295_;
}
else
{
lean_inc(v_snd_2294_);
lean_dec(v_a_2293_);
v___x_2296_ = lean_box(0);
v_isShared_2297_ = v_isSharedCheck_2312_;
goto v_resetjp_2295_;
}
v_resetjp_2295_:
{
lean_object* v___x_2298_; lean_object* v___x_2300_; 
v___x_2298_ = lean_box(0);
if (v_isShared_2297_ == 0)
{
lean_ctor_set_tag(v___x_2296_, 1);
lean_ctor_set(v___x_2296_, 1, v___x_2298_);
lean_ctor_set(v___x_2296_, 0, v_snd_2294_);
v___x_2300_ = v___x_2296_;
goto v_reusejp_2299_;
}
else
{
lean_object* v_reuseFailAlloc_2311_; 
v_reuseFailAlloc_2311_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2311_, 0, v_snd_2294_);
lean_ctor_set(v_reuseFailAlloc_2311_, 1, v___x_2298_);
v___x_2300_ = v_reuseFailAlloc_2311_;
goto v_reusejp_2299_;
}
v_reusejp_2299_:
{
lean_object* v___x_2301_; 
v___x_2301_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_2300_, v___y_2279_, v___y_2282_, v___y_2283_, v___y_2284_, v___y_2285_);
if (lean_obj_tag(v___x_2301_) == 0)
{
lean_object* v___x_2303_; uint8_t v_isShared_2304_; uint8_t v_isSharedCheck_2309_; 
v_isSharedCheck_2309_ = !lean_is_exclusive(v___x_2301_);
if (v_isSharedCheck_2309_ == 0)
{
lean_object* v_unused_2310_; 
v_unused_2310_ = lean_ctor_get(v___x_2301_, 0);
lean_dec(v_unused_2310_);
v___x_2303_ = v___x_2301_;
v_isShared_2304_ = v_isSharedCheck_2309_;
goto v_resetjp_2302_;
}
else
{
lean_dec(v___x_2301_);
v___x_2303_ = lean_box(0);
v_isShared_2304_ = v_isSharedCheck_2309_;
goto v_resetjp_2302_;
}
v_resetjp_2302_:
{
lean_object* v___x_2305_; lean_object* v___x_2307_; 
v___x_2305_ = lean_box(0);
if (v_isShared_2304_ == 0)
{
lean_ctor_set(v___x_2303_, 0, v___x_2305_);
v___x_2307_ = v___x_2303_;
goto v_reusejp_2306_;
}
else
{
lean_object* v_reuseFailAlloc_2308_; 
v_reuseFailAlloc_2308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2308_, 0, v___x_2305_);
v___x_2307_ = v_reuseFailAlloc_2308_;
goto v_reusejp_2306_;
}
v_reusejp_2306_:
{
return v___x_2307_;
}
}
}
else
{
return v___x_2301_;
}
}
}
}
else
{
lean_object* v_a_2314_; lean_object* v___x_2316_; uint8_t v_isShared_2317_; uint8_t v_isSharedCheck_2321_; 
v_a_2314_ = lean_ctor_get(v___x_2292_, 0);
v_isSharedCheck_2321_ = !lean_is_exclusive(v___x_2292_);
if (v_isSharedCheck_2321_ == 0)
{
v___x_2316_ = v___x_2292_;
v_isShared_2317_ = v_isSharedCheck_2321_;
goto v_resetjp_2315_;
}
else
{
lean_inc(v_a_2314_);
lean_dec(v___x_2292_);
v___x_2316_ = lean_box(0);
v_isShared_2317_ = v_isSharedCheck_2321_;
goto v_resetjp_2315_;
}
v_resetjp_2315_:
{
lean_object* v___x_2319_; 
if (v_isShared_2317_ == 0)
{
v___x_2319_ = v___x_2316_;
goto v_reusejp_2318_;
}
else
{
lean_object* v_reuseFailAlloc_2320_; 
v_reuseFailAlloc_2320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2320_, 0, v_a_2314_);
v___x_2319_ = v_reuseFailAlloc_2320_;
goto v_reusejp_2318_;
}
v_reusejp_2318_:
{
return v___x_2319_;
}
}
}
}
else
{
lean_object* v_a_2322_; lean_object* v___x_2324_; uint8_t v_isShared_2325_; uint8_t v_isSharedCheck_2329_; 
v_a_2322_ = lean_ctor_get(v___x_2290_, 0);
v_isSharedCheck_2329_ = !lean_is_exclusive(v___x_2290_);
if (v_isSharedCheck_2329_ == 0)
{
v___x_2324_ = v___x_2290_;
v_isShared_2325_ = v_isSharedCheck_2329_;
goto v_resetjp_2323_;
}
else
{
lean_inc(v_a_2322_);
lean_dec(v___x_2290_);
v___x_2324_ = lean_box(0);
v_isShared_2325_ = v_isSharedCheck_2329_;
goto v_resetjp_2323_;
}
v_resetjp_2323_:
{
lean_object* v___x_2327_; 
if (v_isShared_2325_ == 0)
{
v___x_2327_ = v___x_2324_;
goto v_reusejp_2326_;
}
else
{
lean_object* v_reuseFailAlloc_2328_; 
v_reuseFailAlloc_2328_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2328_, 0, v_a_2322_);
v___x_2327_ = v_reuseFailAlloc_2328_;
goto v_reusejp_2326_;
}
v_reusejp_2326_:
{
return v___x_2327_;
}
}
}
}
else
{
lean_object* v_a_2330_; lean_object* v___x_2332_; uint8_t v_isShared_2333_; uint8_t v_isSharedCheck_2337_; 
lean_dec_ref(v_a_2276_);
lean_dec_ref(v_a_2275_);
v_a_2330_ = lean_ctor_get(v___x_2287_, 0);
v_isSharedCheck_2337_ = !lean_is_exclusive(v___x_2287_);
if (v_isSharedCheck_2337_ == 0)
{
v___x_2332_ = v___x_2287_;
v_isShared_2333_ = v_isSharedCheck_2337_;
goto v_resetjp_2331_;
}
else
{
lean_inc(v_a_2330_);
lean_dec(v___x_2287_);
v___x_2332_ = lean_box(0);
v_isShared_2333_ = v_isSharedCheck_2337_;
goto v_resetjp_2331_;
}
v_resetjp_2331_:
{
lean_object* v___x_2335_; 
if (v_isShared_2333_ == 0)
{
v___x_2335_ = v___x_2332_;
goto v_reusejp_2334_;
}
else
{
lean_object* v_reuseFailAlloc_2336_; 
v_reuseFailAlloc_2336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2336_, 0, v_a_2330_);
v___x_2335_ = v_reuseFailAlloc_2336_;
goto v_reusejp_2334_;
}
v_reusejp_2334_:
{
return v___x_2335_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___lam__0___boxed(lean_object* v_h__new_2338_, lean_object* v_a_2339_, lean_object* v_a_2340_, lean_object* v___x_2341_, lean_object* v___y_2342_, lean_object* v___y_2343_, lean_object* v___y_2344_, lean_object* v___y_2345_, lean_object* v___y_2346_, lean_object* v___y_2347_, lean_object* v___y_2348_, lean_object* v___y_2349_, lean_object* v___y_2350_){
_start:
{
uint8_t v___x_3773__boxed_2351_; lean_object* v_res_2352_; 
v___x_3773__boxed_2351_ = lean_unbox(v___x_2341_);
v_res_2352_ = lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___lam__0(v_h__new_2338_, v_a_2339_, v_a_2340_, v___x_3773__boxed_2351_, v___y_2342_, v___y_2343_, v___y_2344_, v___y_2345_, v___y_2346_, v___y_2347_, v___y_2348_, v___y_2349_);
lean_dec(v___y_2349_);
lean_dec_ref(v___y_2348_);
lean_dec(v___y_2347_);
lean_dec_ref(v___y_2346_);
lean_dec(v___y_2345_);
lean_dec_ref(v___y_2344_);
lean_dec(v___y_2343_);
lean_dec_ref(v___y_2342_);
lean_dec(v_h__new_2338_);
return v_res_2352_;
}
}
static lean_object* _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___closed__4(void){
_start:
{
lean_object* v___x_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; lean_object* v___x_2364_; 
v___x_2361_ = lean_box(0);
v___x_2362_ = lean_unsigned_to_nat(4u);
v___x_2363_ = lean_mk_empty_array_with_capacity(v___x_2362_);
v___x_2364_ = lean_array_push(v___x_2363_, v___x_2361_);
return v___x_2364_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1(lean_object* v_x_2365_, lean_object* v_a_2366_, lean_object* v_a_2367_, lean_object* v_a_2368_, lean_object* v_a_2369_, lean_object* v_a_2370_, lean_object* v_a_2371_, lean_object* v_a_2372_, lean_object* v_a_2373_){
_start:
{
lean_object* v___x_2375_; uint8_t v___x_2376_; 
v___x_2375_ = ((lean_object*)(lp_Props2Theories_tactic__intro__exists__in___x2c___x2c___x2c___00__closed__1));
lean_inc(v_x_2365_);
v___x_2376_ = l_Lean_Syntax_isOfKind(v_x_2365_, v___x_2375_);
if (v___x_2376_ == 0)
{
lean_object* v___x_2377_; 
lean_dec(v_x_2365_);
v___x_2377_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__0___redArg();
return v___x_2377_;
}
else
{
lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; uint8_t v___x_2381_; lean_object* v___x_2382_; 
v___x_2378_ = lean_unsigned_to_nat(1u);
v___x_2379_ = l_Lean_Syntax_getArg(v_x_2365_, v___x_2378_);
v___x_2380_ = lean_box(0);
v___x_2381_ = 0;
v___x_2382_ = l_Lean_Elab_Tactic_elabTerm(v___x_2379_, v___x_2380_, v___x_2381_, v_a_2366_, v_a_2367_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
if (lean_obj_tag(v___x_2382_) == 0)
{
lean_object* v_a_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; 
v_a_2383_ = lean_ctor_get(v___x_2382_, 0);
lean_inc(v_a_2383_);
lean_dec_ref(v___x_2382_);
v___x_2384_ = lean_unsigned_to_nat(3u);
v___x_2385_ = l_Lean_Syntax_getArg(v_x_2365_, v___x_2384_);
v___x_2386_ = l_Lean_Elab_Tactic_elabTerm(v___x_2385_, v___x_2380_, v___x_2381_, v_a_2366_, v_a_2367_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
if (lean_obj_tag(v___x_2386_) == 0)
{
lean_object* v_a_2387_; lean_object* v___x_2388_; lean_object* v___x_2389_; lean_object* v___x_2390_; 
v_a_2387_ = lean_ctor_get(v___x_2386_, 0);
lean_inc(v_a_2387_);
lean_dec_ref(v___x_2386_);
v___x_2388_ = lean_unsigned_to_nat(5u);
v___x_2389_ = l_Lean_Syntax_getArg(v_x_2365_, v___x_2388_);
v___x_2390_ = l_Lean_Elab_Tactic_elabTerm(v___x_2389_, v___x_2380_, v___x_2381_, v_a_2366_, v_a_2367_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
if (lean_obj_tag(v___x_2390_) == 0)
{
lean_object* v_a_2391_; lean_object* v___x_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; 
v_a_2391_ = lean_ctor_get(v___x_2390_, 0);
lean_inc(v_a_2391_);
lean_dec_ref(v___x_2390_);
v___x_2392_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___closed__1));
v___x_2393_ = lean_unsigned_to_nat(2u);
v___x_2394_ = lean_mk_empty_array_with_capacity(v___x_2393_);
v___x_2395_ = lean_array_push(v___x_2394_, v_a_2387_);
v___x_2396_ = lean_array_push(v___x_2395_, v_a_2391_);
v___x_2397_ = l_Lean_Meta_mkAppM(v___x_2392_, v___x_2396_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
if (lean_obj_tag(v___x_2397_) == 0)
{
lean_object* v_a_2398_; lean_object* v___x_2399_; 
v_a_2398_ = lean_ctor_get(v___x_2397_, 0);
lean_inc_n(v_a_2398_, 2);
lean_dec_ref(v___x_2397_);
lean_inc(v_a_2373_);
lean_inc_ref(v_a_2372_);
lean_inc(v_a_2371_);
lean_inc_ref(v_a_2370_);
v___x_2399_ = lean_infer_type(v_a_2398_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
if (lean_obj_tag(v___x_2399_) == 0)
{
lean_object* v_a_2400_; lean_object* v___x_2401_; lean_object* v___x_2402_; 
v_a_2400_ = lean_ctor_get(v___x_2399_, 0);
lean_inc(v_a_2400_);
lean_dec_ref(v___x_2399_);
v___x_2401_ = lean_box(0);
lean_inc(v_a_2383_);
v___x_2402_ = l_Lean_Meta_kabstract(v_a_2400_, v_a_2383_, v___x_2401_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
if (lean_obj_tag(v___x_2402_) == 0)
{
lean_object* v_a_2403_; lean_object* v___x_2404_; lean_object* v___x_2405_; uint8_t v___x_2406_; lean_object* v___x_2407_; 
v_a_2403_ = lean_ctor_get(v___x_2402_, 0);
lean_inc(v_a_2403_);
lean_dec_ref(v___x_2402_);
v___x_2404_ = lean_mk_empty_array_with_capacity(v___x_2378_);
lean_inc(v_a_2383_);
v___x_2405_ = lean_array_push(v___x_2404_, v_a_2383_);
v___x_2406_ = 1;
v___x_2407_ = l_Lean_Meta_mkLambdaFVars(v___x_2405_, v_a_2403_, v___x_2381_, v___x_2376_, v___x_2381_, v___x_2376_, v___x_2406_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
lean_dec_ref(v___x_2405_);
if (lean_obj_tag(v___x_2407_) == 0)
{
lean_object* v_a_2408_; lean_object* v___x_2409_; lean_object* v___x_2410_; lean_object* v___x_2411_; lean_object* v___x_2412_; lean_object* v___x_2413_; lean_object* v___x_2414_; lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; 
v_a_2408_ = lean_ctor_get(v___x_2407_, 0);
lean_inc(v_a_2408_);
lean_dec_ref(v___x_2407_);
v___x_2409_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___closed__3));
v___x_2410_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2410_, 0, v_a_2408_);
v___x_2411_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2411_, 0, v_a_2383_);
v___x_2412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2412_, 0, v_a_2398_);
v___x_2413_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___closed__4, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___closed__4_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___closed__4);
v___x_2414_ = lean_array_push(v___x_2413_, v___x_2410_);
v___x_2415_ = lean_array_push(v___x_2414_, v___x_2411_);
v___x_2416_ = lean_array_push(v___x_2415_, v___x_2412_);
v___x_2417_ = l_Lean_Meta_mkAppOptM(v___x_2409_, v___x_2416_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
if (lean_obj_tag(v___x_2417_) == 0)
{
lean_object* v_a_2418_; lean_object* v___x_2419_; 
v_a_2418_ = lean_ctor_get(v___x_2417_, 0);
lean_inc_n(v_a_2418_, 2);
lean_dec_ref(v___x_2417_);
lean_inc(v_a_2373_);
lean_inc_ref(v_a_2372_);
lean_inc(v_a_2371_);
lean_inc_ref(v_a_2370_);
v___x_2419_ = lean_infer_type(v_a_2418_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
if (lean_obj_tag(v___x_2419_) == 0)
{
lean_object* v_a_2420_; lean_object* v___x_2421_; lean_object* v_h__new_2422_; lean_object* v___x_2423_; lean_object* v___f_2424_; lean_object* v___x_2425_; 
v_a_2420_ = lean_ctor_get(v___x_2419_, 0);
lean_inc(v_a_2420_);
lean_dec_ref(v___x_2419_);
v___x_2421_ = lean_unsigned_to_nat(7u);
v_h__new_2422_ = l_Lean_Syntax_getArg(v_x_2365_, v___x_2421_);
lean_dec(v_x_2365_);
v___x_2423_ = lean_box(v___x_2376_);
v___f_2424_ = lean_alloc_closure((void*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___lam__0___boxed), 13, 4);
lean_closure_set(v___f_2424_, 0, v_h__new_2422_);
lean_closure_set(v___f_2424_, 1, v_a_2420_);
lean_closure_set(v___f_2424_, 2, v_a_2418_);
lean_closure_set(v___f_2424_, 3, v___x_2423_);
v___x_2425_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_2424_, v_a_2366_, v_a_2367_, v_a_2368_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
return v___x_2425_;
}
else
{
lean_object* v_a_2426_; lean_object* v___x_2428_; uint8_t v_isShared_2429_; uint8_t v_isSharedCheck_2433_; 
lean_dec(v_a_2418_);
lean_dec(v_x_2365_);
v_a_2426_ = lean_ctor_get(v___x_2419_, 0);
v_isSharedCheck_2433_ = !lean_is_exclusive(v___x_2419_);
if (v_isSharedCheck_2433_ == 0)
{
v___x_2428_ = v___x_2419_;
v_isShared_2429_ = v_isSharedCheck_2433_;
goto v_resetjp_2427_;
}
else
{
lean_inc(v_a_2426_);
lean_dec(v___x_2419_);
v___x_2428_ = lean_box(0);
v_isShared_2429_ = v_isSharedCheck_2433_;
goto v_resetjp_2427_;
}
v_resetjp_2427_:
{
lean_object* v___x_2431_; 
if (v_isShared_2429_ == 0)
{
v___x_2431_ = v___x_2428_;
goto v_reusejp_2430_;
}
else
{
lean_object* v_reuseFailAlloc_2432_; 
v_reuseFailAlloc_2432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2432_, 0, v_a_2426_);
v___x_2431_ = v_reuseFailAlloc_2432_;
goto v_reusejp_2430_;
}
v_reusejp_2430_:
{
return v___x_2431_;
}
}
}
}
else
{
lean_object* v_a_2434_; lean_object* v___x_2436_; uint8_t v_isShared_2437_; uint8_t v_isSharedCheck_2441_; 
lean_dec(v_x_2365_);
v_a_2434_ = lean_ctor_get(v___x_2417_, 0);
v_isSharedCheck_2441_ = !lean_is_exclusive(v___x_2417_);
if (v_isSharedCheck_2441_ == 0)
{
v___x_2436_ = v___x_2417_;
v_isShared_2437_ = v_isSharedCheck_2441_;
goto v_resetjp_2435_;
}
else
{
lean_inc(v_a_2434_);
lean_dec(v___x_2417_);
v___x_2436_ = lean_box(0);
v_isShared_2437_ = v_isSharedCheck_2441_;
goto v_resetjp_2435_;
}
v_resetjp_2435_:
{
lean_object* v___x_2439_; 
if (v_isShared_2437_ == 0)
{
v___x_2439_ = v___x_2436_;
goto v_reusejp_2438_;
}
else
{
lean_object* v_reuseFailAlloc_2440_; 
v_reuseFailAlloc_2440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2440_, 0, v_a_2434_);
v___x_2439_ = v_reuseFailAlloc_2440_;
goto v_reusejp_2438_;
}
v_reusejp_2438_:
{
return v___x_2439_;
}
}
}
}
else
{
lean_object* v_a_2442_; lean_object* v___x_2444_; uint8_t v_isShared_2445_; uint8_t v_isSharedCheck_2449_; 
lean_dec(v_a_2398_);
lean_dec(v_a_2383_);
lean_dec(v_x_2365_);
v_a_2442_ = lean_ctor_get(v___x_2407_, 0);
v_isSharedCheck_2449_ = !lean_is_exclusive(v___x_2407_);
if (v_isSharedCheck_2449_ == 0)
{
v___x_2444_ = v___x_2407_;
v_isShared_2445_ = v_isSharedCheck_2449_;
goto v_resetjp_2443_;
}
else
{
lean_inc(v_a_2442_);
lean_dec(v___x_2407_);
v___x_2444_ = lean_box(0);
v_isShared_2445_ = v_isSharedCheck_2449_;
goto v_resetjp_2443_;
}
v_resetjp_2443_:
{
lean_object* v___x_2447_; 
if (v_isShared_2445_ == 0)
{
v___x_2447_ = v___x_2444_;
goto v_reusejp_2446_;
}
else
{
lean_object* v_reuseFailAlloc_2448_; 
v_reuseFailAlloc_2448_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2448_, 0, v_a_2442_);
v___x_2447_ = v_reuseFailAlloc_2448_;
goto v_reusejp_2446_;
}
v_reusejp_2446_:
{
return v___x_2447_;
}
}
}
}
else
{
lean_object* v_a_2450_; lean_object* v___x_2452_; uint8_t v_isShared_2453_; uint8_t v_isSharedCheck_2457_; 
lean_dec(v_a_2398_);
lean_dec(v_a_2383_);
lean_dec(v_x_2365_);
v_a_2450_ = lean_ctor_get(v___x_2402_, 0);
v_isSharedCheck_2457_ = !lean_is_exclusive(v___x_2402_);
if (v_isSharedCheck_2457_ == 0)
{
v___x_2452_ = v___x_2402_;
v_isShared_2453_ = v_isSharedCheck_2457_;
goto v_resetjp_2451_;
}
else
{
lean_inc(v_a_2450_);
lean_dec(v___x_2402_);
v___x_2452_ = lean_box(0);
v_isShared_2453_ = v_isSharedCheck_2457_;
goto v_resetjp_2451_;
}
v_resetjp_2451_:
{
lean_object* v___x_2455_; 
if (v_isShared_2453_ == 0)
{
v___x_2455_ = v___x_2452_;
goto v_reusejp_2454_;
}
else
{
lean_object* v_reuseFailAlloc_2456_; 
v_reuseFailAlloc_2456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2456_, 0, v_a_2450_);
v___x_2455_ = v_reuseFailAlloc_2456_;
goto v_reusejp_2454_;
}
v_reusejp_2454_:
{
return v___x_2455_;
}
}
}
}
else
{
lean_object* v_a_2458_; lean_object* v___x_2460_; uint8_t v_isShared_2461_; uint8_t v_isSharedCheck_2465_; 
lean_dec(v_a_2398_);
lean_dec(v_a_2383_);
lean_dec(v_x_2365_);
v_a_2458_ = lean_ctor_get(v___x_2399_, 0);
v_isSharedCheck_2465_ = !lean_is_exclusive(v___x_2399_);
if (v_isSharedCheck_2465_ == 0)
{
v___x_2460_ = v___x_2399_;
v_isShared_2461_ = v_isSharedCheck_2465_;
goto v_resetjp_2459_;
}
else
{
lean_inc(v_a_2458_);
lean_dec(v___x_2399_);
v___x_2460_ = lean_box(0);
v_isShared_2461_ = v_isSharedCheck_2465_;
goto v_resetjp_2459_;
}
v_resetjp_2459_:
{
lean_object* v___x_2463_; 
if (v_isShared_2461_ == 0)
{
v___x_2463_ = v___x_2460_;
goto v_reusejp_2462_;
}
else
{
lean_object* v_reuseFailAlloc_2464_; 
v_reuseFailAlloc_2464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2464_, 0, v_a_2458_);
v___x_2463_ = v_reuseFailAlloc_2464_;
goto v_reusejp_2462_;
}
v_reusejp_2462_:
{
return v___x_2463_;
}
}
}
}
else
{
lean_object* v_a_2466_; lean_object* v___x_2468_; uint8_t v_isShared_2469_; uint8_t v_isSharedCheck_2473_; 
lean_dec(v_a_2383_);
lean_dec(v_x_2365_);
v_a_2466_ = lean_ctor_get(v___x_2397_, 0);
v_isSharedCheck_2473_ = !lean_is_exclusive(v___x_2397_);
if (v_isSharedCheck_2473_ == 0)
{
v___x_2468_ = v___x_2397_;
v_isShared_2469_ = v_isSharedCheck_2473_;
goto v_resetjp_2467_;
}
else
{
lean_inc(v_a_2466_);
lean_dec(v___x_2397_);
v___x_2468_ = lean_box(0);
v_isShared_2469_ = v_isSharedCheck_2473_;
goto v_resetjp_2467_;
}
v_resetjp_2467_:
{
lean_object* v___x_2471_; 
if (v_isShared_2469_ == 0)
{
v___x_2471_ = v___x_2468_;
goto v_reusejp_2470_;
}
else
{
lean_object* v_reuseFailAlloc_2472_; 
v_reuseFailAlloc_2472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2472_, 0, v_a_2466_);
v___x_2471_ = v_reuseFailAlloc_2472_;
goto v_reusejp_2470_;
}
v_reusejp_2470_:
{
return v___x_2471_;
}
}
}
}
else
{
lean_object* v_a_2474_; lean_object* v___x_2476_; uint8_t v_isShared_2477_; uint8_t v_isSharedCheck_2481_; 
lean_dec(v_a_2387_);
lean_dec(v_a_2383_);
lean_dec(v_x_2365_);
v_a_2474_ = lean_ctor_get(v___x_2390_, 0);
v_isSharedCheck_2481_ = !lean_is_exclusive(v___x_2390_);
if (v_isSharedCheck_2481_ == 0)
{
v___x_2476_ = v___x_2390_;
v_isShared_2477_ = v_isSharedCheck_2481_;
goto v_resetjp_2475_;
}
else
{
lean_inc(v_a_2474_);
lean_dec(v___x_2390_);
v___x_2476_ = lean_box(0);
v_isShared_2477_ = v_isSharedCheck_2481_;
goto v_resetjp_2475_;
}
v_resetjp_2475_:
{
lean_object* v___x_2479_; 
if (v_isShared_2477_ == 0)
{
v___x_2479_ = v___x_2476_;
goto v_reusejp_2478_;
}
else
{
lean_object* v_reuseFailAlloc_2480_; 
v_reuseFailAlloc_2480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2480_, 0, v_a_2474_);
v___x_2479_ = v_reuseFailAlloc_2480_;
goto v_reusejp_2478_;
}
v_reusejp_2478_:
{
return v___x_2479_;
}
}
}
}
else
{
lean_object* v_a_2482_; lean_object* v___x_2484_; uint8_t v_isShared_2485_; uint8_t v_isSharedCheck_2489_; 
lean_dec(v_a_2383_);
lean_dec(v_x_2365_);
v_a_2482_ = lean_ctor_get(v___x_2386_, 0);
v_isSharedCheck_2489_ = !lean_is_exclusive(v___x_2386_);
if (v_isSharedCheck_2489_ == 0)
{
v___x_2484_ = v___x_2386_;
v_isShared_2485_ = v_isSharedCheck_2489_;
goto v_resetjp_2483_;
}
else
{
lean_inc(v_a_2482_);
lean_dec(v___x_2386_);
v___x_2484_ = lean_box(0);
v_isShared_2485_ = v_isSharedCheck_2489_;
goto v_resetjp_2483_;
}
v_resetjp_2483_:
{
lean_object* v___x_2487_; 
if (v_isShared_2485_ == 0)
{
v___x_2487_ = v___x_2484_;
goto v_reusejp_2486_;
}
else
{
lean_object* v_reuseFailAlloc_2488_; 
v_reuseFailAlloc_2488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2488_, 0, v_a_2482_);
v___x_2487_ = v_reuseFailAlloc_2488_;
goto v_reusejp_2486_;
}
v_reusejp_2486_:
{
return v___x_2487_;
}
}
}
}
else
{
lean_object* v_a_2490_; lean_object* v___x_2492_; uint8_t v_isShared_2493_; uint8_t v_isSharedCheck_2497_; 
lean_dec(v_x_2365_);
v_a_2490_ = lean_ctor_get(v___x_2382_, 0);
v_isSharedCheck_2497_ = !lean_is_exclusive(v___x_2382_);
if (v_isSharedCheck_2497_ == 0)
{
v___x_2492_ = v___x_2382_;
v_isShared_2493_ = v_isSharedCheck_2497_;
goto v_resetjp_2491_;
}
else
{
lean_inc(v_a_2490_);
lean_dec(v___x_2382_);
v___x_2492_ = lean_box(0);
v_isShared_2493_ = v_isSharedCheck_2497_;
goto v_resetjp_2491_;
}
v_resetjp_2491_:
{
lean_object* v___x_2495_; 
if (v_isShared_2493_ == 0)
{
v___x_2495_ = v___x_2492_;
goto v_reusejp_2494_;
}
else
{
lean_object* v_reuseFailAlloc_2496_; 
v_reuseFailAlloc_2496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2496_, 0, v_a_2490_);
v___x_2495_ = v_reuseFailAlloc_2496_;
goto v_reusejp_2494_;
}
v_reusejp_2494_:
{
return v___x_2495_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___boxed(lean_object* v_x_2498_, lean_object* v_a_2499_, lean_object* v_a_2500_, lean_object* v_a_2501_, lean_object* v_a_2502_, lean_object* v_a_2503_, lean_object* v_a_2504_, lean_object* v_a_2505_, lean_object* v_a_2506_, lean_object* v_a_2507_){
_start:
{
lean_object* v_res_2508_; 
v_res_2508_ = lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1(v_x_2498_, v_a_2499_, v_a_2500_, v_a_2501_, v_a_2502_, v_a_2503_, v_a_2504_, v_a_2505_, v_a_2506_);
lean_dec(v_a_2506_);
lean_dec_ref(v_a_2505_);
lean_dec(v_a_2504_);
lean_dec_ref(v_a_2503_);
lean_dec(v_a_2502_);
lean_dec_ref(v_a_2501_);
lean_dec(v_a_2500_);
lean_dec_ref(v_a_2499_);
return v_res_2508_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1(lean_object* v_x_2582_, lean_object* v_a_2583_, lean_object* v_a_2584_){
_start:
{
lean_object* v___x_2585_; uint8_t v___x_2586_; 
v___x_2585_ = ((lean_object*)(lp_Props2Theories_tacticElim__exists__in___x2c___x2c___x2c___00__closed__1));
lean_inc(v_x_2582_);
v___x_2586_ = l_Lean_Syntax_isOfKind(v_x_2582_, v___x_2585_);
if (v___x_2586_ == 0)
{
lean_object* v___x_2587_; lean_object* v___x_2588_; 
lean_dec(v_x_2582_);
v___x_2587_ = lean_box(1);
v___x_2588_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2588_, 0, v___x_2587_);
lean_ctor_set(v___x_2588_, 1, v_a_2584_);
return v___x_2588_;
}
else
{
lean_object* v_quotContext_2589_; lean_object* v_currMacroScope_2590_; lean_object* v_ref_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; uint8_t v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; lean_object* v___x_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; lean_object* v___x_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; lean_object* v___x_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; 
v_quotContext_2589_ = lean_ctor_get(v_a_2583_, 1);
v_currMacroScope_2590_ = lean_ctor_get(v_a_2583_, 2);
v_ref_2591_ = lean_ctor_get(v_a_2583_, 5);
v___x_2592_ = lean_unsigned_to_nat(1u);
v___x_2593_ = l_Lean_Syntax_getArg(v_x_2582_, v___x_2592_);
v___x_2594_ = lean_unsigned_to_nat(3u);
v___x_2595_ = l_Lean_Syntax_getArg(v_x_2582_, v___x_2594_);
v___x_2596_ = lean_unsigned_to_nat(5u);
v___x_2597_ = l_Lean_Syntax_getArg(v_x_2582_, v___x_2596_);
v___x_2598_ = lean_unsigned_to_nat(7u);
v___x_2599_ = l_Lean_Syntax_getArg(v_x_2582_, v___x_2598_);
lean_dec(v_x_2582_);
v___x_2600_ = 0;
v___x_2601_ = l_Lean_SourceInfo_fromRef(v_ref_2591_, v___x_2600_);
v___x_2602_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__4));
v___x_2603_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__7));
lean_inc_n(v___x_2601_, 57);
v___x_2604_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2604_, 0, v___x_2601_);
lean_ctor_set(v___x_2604_, 1, v___x_2603_);
v___x_2605_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__9));
v___x_2606_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__11));
v___x_2607_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__11));
v___x_2608_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__1));
v___x_2609_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__2));
v___x_2610_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2610_, 0, v___x_2601_);
lean_ctor_set(v___x_2610_, 1, v___x_2609_);
v___x_2611_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__4));
v___x_2612_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19, &lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19);
v___x_2613_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2613_, 0, v___x_2601_);
lean_ctor_set(v___x_2613_, 1, v___x_2607_);
lean_ctor_set(v___x_2613_, 2, v___x_2612_);
lean_inc_ref_n(v___x_2613_, 18);
v___x_2614_ = l_Lean_Syntax_node1(v___x_2601_, v___x_2611_, v___x_2613_);
v___x_2615_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__6));
v___x_2616_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__8));
v___x_2617_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__10));
v___x_2618_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__11));
v___x_2619_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2619_, 0, v___x_2601_);
lean_ctor_set(v___x_2619_, 1, v___x_2618_);
v___x_2620_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__23));
v___x_2621_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2621_, 0, v___x_2601_);
lean_ctor_set(v___x_2621_, 1, v___x_2620_);
lean_inc(v___x_2599_);
lean_inc_ref_n(v___x_2621_, 3);
lean_inc(v___x_2597_);
v___x_2622_ = l_Lean_Syntax_node3(v___x_2601_, v___x_2607_, v___x_2597_, v___x_2621_, v___x_2599_);
v___x_2623_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__12));
v___x_2624_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2624_, 0, v___x_2601_);
lean_ctor_set(v___x_2624_, 1, v___x_2623_);
lean_inc_ref(v___x_2624_);
lean_inc_ref(v___x_2619_);
v___x_2625_ = l_Lean_Syntax_node3(v___x_2601_, v___x_2617_, v___x_2619_, v___x_2622_, v___x_2624_);
v___x_2626_ = l_Lean_Syntax_node3(v___x_2601_, v___x_2607_, v___x_2595_, v___x_2621_, v___x_2625_);
v___x_2627_ = l_Lean_Syntax_node3(v___x_2601_, v___x_2617_, v___x_2619_, v___x_2626_, v___x_2624_);
v___x_2628_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__23));
v___x_2629_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2629_, 0, v___x_2601_);
lean_ctor_set(v___x_2629_, 1, v___x_2628_);
lean_inc_ref_n(v___x_2629_, 3);
v___x_2630_ = l_Lean_Syntax_node5(v___x_2601_, v___x_2616_, v___x_2627_, v___x_2613_, v___x_2613_, v___x_2629_, v___x_2593_);
v___x_2631_ = l_Lean_Syntax_node1(v___x_2601_, v___x_2615_, v___x_2630_);
v___x_2632_ = l_Lean_Syntax_node3(v___x_2601_, v___x_2608_, v___x_2610_, v___x_2614_, v___x_2631_);
v___x_2633_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__6));
v___x_2634_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__7));
v___x_2635_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2635_, 0, v___x_2601_);
lean_ctor_set(v___x_2635_, 1, v___x_2634_);
v___x_2636_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__12));
v___x_2637_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__13));
v___x_2638_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2638_, 0, v___x_2601_);
lean_ctor_set(v___x_2638_, 1, v___x_2636_);
v___x_2639_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__15));
v___x_2640_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__17));
v___x_2641_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__19));
v___x_2642_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__21, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__21_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__21);
v___x_2643_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__22));
lean_inc_n(v_currMacroScope_2590_, 6);
lean_inc_n(v_quotContext_2589_, 6);
v___x_2644_ = l_Lean_addMacroScope(v_quotContext_2589_, v___x_2643_, v_currMacroScope_2590_);
v___x_2645_ = lean_box(0);
v___x_2646_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2646_, 0, v___x_2601_);
lean_ctor_set(v___x_2646_, 1, v___x_2642_);
lean_ctor_set(v___x_2646_, 2, v___x_2644_);
lean_ctor_set(v___x_2646_, 3, v___x_2645_);
v___x_2647_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__25));
v___x_2648_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__26));
v___x_2649_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2649_, 0, v___x_2601_);
lean_ctor_set(v___x_2649_, 1, v___x_2648_);
v___x_2650_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__28));
v___x_2651_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__30));
v___x_2652_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__32));
v___x_2653_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__34, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__34_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__34);
v___x_2654_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__35));
v___x_2655_ = l_Lean_addMacroScope(v_quotContext_2589_, v___x_2654_, v_currMacroScope_2590_);
v___x_2656_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2656_, 0, v___x_2601_);
lean_ctor_set(v___x_2656_, 1, v___x_2653_);
lean_ctor_set(v___x_2656_, 2, v___x_2655_);
lean_ctor_set(v___x_2656_, 3, v___x_2645_);
v___x_2657_ = l_Lean_Syntax_node2(v___x_2601_, v___x_2652_, v___x_2656_, v___x_2613_);
v___x_2658_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__37));
v___x_2659_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__39, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__39_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__39);
v___x_2660_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__40));
v___x_2661_ = l_Lean_addMacroScope(v_quotContext_2589_, v___x_2660_, v_currMacroScope_2590_);
v___x_2662_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__44));
v___x_2663_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2663_, 0, v___x_2601_);
lean_ctor_set(v___x_2663_, 1, v___x_2659_);
lean_ctor_set(v___x_2663_, 2, v___x_2661_);
lean_ctor_set(v___x_2663_, 3, v___x_2662_);
v___x_2664_ = l_Lean_Syntax_node3(v___x_2601_, v___x_2658_, v___x_2629_, v___x_2613_, v___x_2663_);
v___x_2665_ = l_Lean_Syntax_node3(v___x_2601_, v___x_2607_, v___x_2613_, v___x_2613_, v___x_2664_);
v___x_2666_ = l_Lean_Syntax_node2(v___x_2601_, v___x_2651_, v___x_2657_, v___x_2665_);
v___x_2667_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__46, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__46_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__46);
v___x_2668_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__47));
v___x_2669_ = l_Lean_addMacroScope(v_quotContext_2589_, v___x_2668_, v_currMacroScope_2590_);
v___x_2670_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2670_, 0, v___x_2601_);
lean_ctor_set(v___x_2670_, 1, v___x_2667_);
lean_ctor_set(v___x_2670_, 2, v___x_2669_);
lean_ctor_set(v___x_2670_, 3, v___x_2645_);
v___x_2671_ = l_Lean_Syntax_node2(v___x_2601_, v___x_2652_, v___x_2670_, v___x_2613_);
v___x_2672_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__49, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__49_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__49);
v___x_2673_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__50));
v___x_2674_ = l_Lean_addMacroScope(v_quotContext_2589_, v___x_2673_, v_currMacroScope_2590_);
v___x_2675_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__53));
v___x_2676_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2676_, 0, v___x_2601_);
lean_ctor_set(v___x_2676_, 1, v___x_2672_);
lean_ctor_set(v___x_2676_, 2, v___x_2674_);
lean_ctor_set(v___x_2676_, 3, v___x_2675_);
v___x_2677_ = l_Lean_Syntax_node3(v___x_2601_, v___x_2658_, v___x_2629_, v___x_2613_, v___x_2676_);
v___x_2678_ = l_Lean_Syntax_node3(v___x_2601_, v___x_2607_, v___x_2613_, v___x_2613_, v___x_2677_);
lean_inc(v___x_2678_);
v___x_2679_ = l_Lean_Syntax_node2(v___x_2601_, v___x_2651_, v___x_2671_, v___x_2678_);
v___x_2680_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__55, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__55_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__55);
v___x_2681_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__56));
v___x_2682_ = l_Lean_addMacroScope(v_quotContext_2589_, v___x_2681_, v_currMacroScope_2590_);
v___x_2683_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2683_, 0, v___x_2601_);
lean_ctor_set(v___x_2683_, 1, v___x_2680_);
lean_ctor_set(v___x_2683_, 2, v___x_2682_);
lean_ctor_set(v___x_2683_, 3, v___x_2645_);
v___x_2684_ = l_Lean_Syntax_node2(v___x_2601_, v___x_2652_, v___x_2683_, v___x_2613_);
v___x_2685_ = l_Lean_Syntax_node2(v___x_2601_, v___x_2651_, v___x_2684_, v___x_2678_);
v___x_2686_ = l_Lean_Syntax_node5(v___x_2601_, v___x_2607_, v___x_2666_, v___x_2621_, v___x_2679_, v___x_2621_, v___x_2685_);
v___x_2687_ = l_Lean_Syntax_node1(v___x_2601_, v___x_2650_, v___x_2686_);
v___x_2688_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__58));
v___x_2689_ = l_Lean_Syntax_node1(v___x_2601_, v___x_2688_, v___x_2613_);
v___x_2690_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__59));
v___x_2691_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2691_, 0, v___x_2601_);
lean_ctor_set(v___x_2691_, 1, v___x_2690_);
v___x_2692_ = l_Lean_Syntax_node6(v___x_2601_, v___x_2647_, v___x_2649_, v___x_2613_, v___x_2687_, v___x_2689_, v___x_2613_, v___x_2691_);
v___x_2693_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__49));
v___x_2694_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2694_, 0, v___x_2601_);
lean_ctor_set(v___x_2694_, 1, v___x_2693_);
lean_inc_ref(v___x_2694_);
lean_inc_ref(v___x_2604_);
v___x_2695_ = l_Lean_Syntax_node5(v___x_2601_, v___x_2641_, v___x_2604_, v___x_2646_, v___x_2629_, v___x_2692_, v___x_2694_);
v___x_2696_ = l_Lean_Syntax_node1(v___x_2601_, v___x_2640_, v___x_2695_);
v___x_2697_ = l_Lean_Syntax_node1(v___x_2601_, v___x_2607_, v___x_2696_);
v___x_2698_ = l_Lean_Syntax_node1(v___x_2601_, v___x_2639_, v___x_2697_);
v___x_2699_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__61));
v___x_2700_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__62));
v___x_2701_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2701_, 0, v___x_2601_);
lean_ctor_set(v___x_2701_, 1, v___x_2700_);
v___x_2702_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__64));
v___x_2703_ = l_Lean_Syntax_node2(v___x_2601_, v___x_2607_, v___x_2597_, v___x_2599_);
v___x_2704_ = l_Lean_Syntax_node1(v___x_2601_, v___x_2702_, v___x_2703_);
v___x_2705_ = l_Lean_Syntax_node2(v___x_2601_, v___x_2699_, v___x_2701_, v___x_2704_);
v___x_2706_ = l_Lean_Syntax_node1(v___x_2601_, v___x_2607_, v___x_2705_);
v___x_2707_ = l_Lean_Syntax_node6(v___x_2601_, v___x_2637_, v___x_2638_, v___x_2698_, v___x_2613_, v___x_2613_, v___x_2613_, v___x_2706_);
v___x_2708_ = l_Lean_Syntax_node1(v___x_2601_, v___x_2607_, v___x_2707_);
v___x_2709_ = l_Lean_Syntax_node1(v___x_2601_, v___x_2606_, v___x_2708_);
v___x_2710_ = l_Lean_Syntax_node1(v___x_2601_, v___x_2605_, v___x_2709_);
v___x_2711_ = l_Lean_Syntax_node2(v___x_2601_, v___x_2633_, v___x_2635_, v___x_2710_);
v___x_2712_ = l_Lean_Syntax_node3(v___x_2601_, v___x_2607_, v___x_2632_, v___x_2613_, v___x_2711_);
v___x_2713_ = l_Lean_Syntax_node1(v___x_2601_, v___x_2606_, v___x_2712_);
v___x_2714_ = l_Lean_Syntax_node1(v___x_2601_, v___x_2605_, v___x_2713_);
v___x_2715_ = l_Lean_Syntax_node3(v___x_2601_, v___x_2602_, v___x_2604_, v___x_2714_, v___x_2694_);
v___x_2716_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2716_, 0, v___x_2715_);
lean_ctor_set(v___x_2716_, 1, v_a_2584_);
return v___x_2716_;
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___boxed(lean_object* v_x_2717_, lean_object* v_a_2718_, lean_object* v_a_2719_){
_start:
{
lean_object* v_res_2720_; 
v_res_2720_ = lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1(v_x_2717_, v_a_2718_, v_a_2719_);
lean_dec_ref(v_a_2718_);
return v_res_2720_;
}
}
static lean_object* _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__1(void){
_start:
{
lean_object* v___x_2746_; lean_object* v___x_2747_; 
v___x_2746_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__0));
v___x_2747_ = l_String_toRawSubstring_x27(v___x_2746_);
return v___x_2747_;
}
}
static lean_object* _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__4(void){
_start:
{
lean_object* v___x_2751_; lean_object* v___x_2752_; 
v___x_2751_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__3));
v___x_2752_ = l_String_toRawSubstring_x27(v___x_2751_);
return v___x_2752_;
}
}
static lean_object* _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__7(void){
_start:
{
lean_object* v___x_2756_; lean_object* v___x_2757_; 
v___x_2756_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__6));
v___x_2757_ = l_String_toRawSubstring_x27(v___x_2756_);
return v___x_2757_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1(lean_object* v_x_2772_, lean_object* v_a_2773_, lean_object* v_a_2774_, lean_object* v_a_2775_, lean_object* v_a_2776_, lean_object* v_a_2777_, lean_object* v_a_2778_, lean_object* v_a_2779_, lean_object* v_a_2780_){
_start:
{
lean_object* v___x_2782_; uint8_t v___x_2783_; 
v___x_2782_ = ((lean_object*)(lp_Props2Theories_tacticElim__exists__in_____x2c___00__closed__1));
lean_inc(v_x_2772_);
v___x_2783_ = l_Lean_Syntax_isOfKind(v_x_2772_, v___x_2782_);
if (v___x_2783_ == 0)
{
lean_object* v___x_2784_; 
lean_dec(v_x_2772_);
v___x_2784_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__0___redArg();
return v___x_2784_;
}
else
{
lean_object* v_ref_2785_; lean_object* v_quotContext_2786_; lean_object* v_currMacroScope_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; uint8_t v___x_2792_; lean_object* v___x_2793_; lean_object* v___x_2794_; lean_object* v___x_2795_; lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; lean_object* v___x_2816_; lean_object* v___x_2817_; lean_object* v___x_2818_; lean_object* v___x_2819_; lean_object* v___x_2820_; lean_object* v___x_2821_; lean_object* v___x_2822_; lean_object* v___x_2823_; lean_object* v___x_2824_; lean_object* v___x_2825_; lean_object* v___x_2826_; lean_object* v___x_2827_; lean_object* v___x_2828_; lean_object* v___x_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; lean_object* v___x_2836_; lean_object* v___x_2837_; lean_object* v___x_2838_; lean_object* v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2841_; lean_object* v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; lean_object* v___x_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; lean_object* v___x_2850_; lean_object* v___x_2851_; lean_object* v___x_2852_; lean_object* v___x_2853_; lean_object* v___x_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___x_2859_; lean_object* v___x_2860_; lean_object* v___x_2861_; lean_object* v___x_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; lean_object* v___x_2865_; lean_object* v___x_2866_; lean_object* v___x_2867_; lean_object* v___x_2868_; 
v_ref_2785_ = lean_ctor_get(v_a_2779_, 5);
v_quotContext_2786_ = lean_ctor_get(v_a_2779_, 10);
v_currMacroScope_2787_ = lean_ctor_get(v_a_2779_, 11);
v___x_2788_ = lean_unsigned_to_nat(1u);
v___x_2789_ = l_Lean_Syntax_getArg(v_x_2772_, v___x_2788_);
v___x_2790_ = lean_unsigned_to_nat(3u);
v___x_2791_ = l_Lean_Syntax_getArg(v_x_2772_, v___x_2790_);
lean_dec(v_x_2772_);
v___x_2792_ = 0;
v___x_2793_ = l_Lean_SourceInfo_fromRef(v_ref_2785_, v___x_2792_);
v___x_2794_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__1));
v___x_2795_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__11));
v___x_2796_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__1));
v___x_2797_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__2));
lean_inc_n(v___x_2793_, 33);
v___x_2798_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2798_, 0, v___x_2793_);
lean_ctor_set(v___x_2798_, 1, v___x_2797_);
v___x_2799_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__4));
v___x_2800_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19, &lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19);
v___x_2801_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2801_, 0, v___x_2793_);
lean_ctor_set(v___x_2801_, 1, v___x_2795_);
lean_ctor_set(v___x_2801_, 2, v___x_2800_);
lean_inc_ref_n(v___x_2801_, 2);
v___x_2802_ = l_Lean_Syntax_node1(v___x_2793_, v___x_2799_, v___x_2801_);
v___x_2803_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__6));
v___x_2804_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__8));
v___x_2805_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__10));
v___x_2806_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__11));
v___x_2807_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2807_, 0, v___x_2793_);
lean_ctor_set(v___x_2807_, 1, v___x_2806_);
v___x_2808_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__1, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__1_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__1);
v___x_2809_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__2));
lean_inc_n(v_currMacroScope_2787_, 4);
lean_inc_n(v_quotContext_2786_, 4);
v___x_2810_ = l_Lean_addMacroScope(v_quotContext_2786_, v___x_2809_, v_currMacroScope_2787_);
v___x_2811_ = lean_box(0);
v___x_2812_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2812_, 0, v___x_2793_);
lean_ctor_set(v___x_2812_, 1, v___x_2808_);
lean_ctor_set(v___x_2812_, 2, v___x_2810_);
lean_ctor_set(v___x_2812_, 3, v___x_2811_);
v___x_2813_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__23));
v___x_2814_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2814_, 0, v___x_2793_);
lean_ctor_set(v___x_2814_, 1, v___x_2813_);
v___x_2815_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__4, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__4_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__4);
v___x_2816_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__5));
v___x_2817_ = l_Lean_addMacroScope(v_quotContext_2786_, v___x_2816_, v_currMacroScope_2787_);
v___x_2818_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2818_, 0, v___x_2793_);
lean_ctor_set(v___x_2818_, 1, v___x_2815_);
lean_ctor_set(v___x_2818_, 2, v___x_2817_);
lean_ctor_set(v___x_2818_, 3, v___x_2811_);
v___x_2819_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__7, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__7_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__7);
v___x_2820_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__8));
v___x_2821_ = l_Lean_addMacroScope(v_quotContext_2786_, v___x_2820_, v_currMacroScope_2787_);
v___x_2822_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2822_, 0, v___x_2793_);
lean_ctor_set(v___x_2822_, 1, v___x_2819_);
lean_ctor_set(v___x_2822_, 2, v___x_2821_);
lean_ctor_set(v___x_2822_, 3, v___x_2811_);
lean_inc_ref(v___x_2814_);
lean_inc_ref(v___x_2818_);
v___x_2823_ = l_Lean_Syntax_node3(v___x_2793_, v___x_2795_, v___x_2818_, v___x_2814_, v___x_2822_);
v___x_2824_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__12));
v___x_2825_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2825_, 0, v___x_2793_);
lean_ctor_set(v___x_2825_, 1, v___x_2824_);
lean_inc_ref(v___x_2825_);
lean_inc_ref(v___x_2807_);
v___x_2826_ = l_Lean_Syntax_node3(v___x_2793_, v___x_2805_, v___x_2807_, v___x_2823_, v___x_2825_);
lean_inc_ref(v___x_2812_);
v___x_2827_ = l_Lean_Syntax_node3(v___x_2793_, v___x_2795_, v___x_2812_, v___x_2814_, v___x_2826_);
v___x_2828_ = l_Lean_Syntax_node3(v___x_2793_, v___x_2805_, v___x_2807_, v___x_2827_, v___x_2825_);
v___x_2829_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__23));
v___x_2830_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2830_, 0, v___x_2793_);
lean_ctor_set(v___x_2830_, 1, v___x_2829_);
v___x_2831_ = l_Lean_Syntax_node5(v___x_2793_, v___x_2804_, v___x_2828_, v___x_2801_, v___x_2801_, v___x_2830_, v___x_2789_);
v___x_2832_ = l_Lean_Syntax_node1(v___x_2793_, v___x_2803_, v___x_2831_);
v___x_2833_ = l_Lean_Syntax_node3(v___x_2793_, v___x_2796_, v___x_2798_, v___x_2802_, v___x_2832_);
v___x_2834_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__4));
v___x_2835_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2835_, 0, v___x_2793_);
lean_ctor_set(v___x_2835_, 1, v___x_2834_);
v___x_2836_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__2));
v___x_2837_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__3));
v___x_2838_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2838_, 0, v___x_2793_);
lean_ctor_set(v___x_2838_, 1, v___x_2836_);
v___x_2839_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__4));
v___x_2840_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__6));
v___x_2841_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__7));
v___x_2842_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2842_, 0, v___x_2793_);
lean_ctor_set(v___x_2842_, 1, v___x_2841_);
v___x_2843_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__9));
v___x_2844_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__11, &lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__11_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__11);
v___x_2845_ = lean_box(0);
v___x_2846_ = l_Lean_addMacroScope(v_quotContext_2786_, v___x_2845_, v_currMacroScope_2787_);
v___x_2847_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__46));
v___x_2848_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2848_, 0, v___x_2793_);
lean_ctor_set(v___x_2848_, 1, v___x_2844_);
lean_ctor_set(v___x_2848_, 2, v___x_2846_);
lean_ctor_set(v___x_2848_, 3, v___x_2847_);
v___x_2849_ = l_Lean_Syntax_node1(v___x_2793_, v___x_2843_, v___x_2848_);
v___x_2850_ = l_Lean_Syntax_node2(v___x_2793_, v___x_2840_, v___x_2842_, v___x_2849_);
v___x_2851_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__4));
v___x_2852_ = l_Lean_Syntax_node2(v___x_2793_, v___x_2795_, v___x_2812_, v___x_2818_);
lean_inc(v___x_2791_);
v___x_2853_ = l_Lean_Syntax_node2(v___x_2793_, v___x_2851_, v___x_2791_, v___x_2852_);
v___x_2854_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__49));
v___x_2855_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2855_, 0, v___x_2793_);
lean_ctor_set(v___x_2855_, 1, v___x_2854_);
v___x_2856_ = l_Lean_Syntax_node3(v___x_2793_, v___x_2839_, v___x_2850_, v___x_2853_, v___x_2855_);
v___x_2857_ = l_Lean_Syntax_node2(v___x_2793_, v___x_2837_, v___x_2838_, v___x_2856_);
v___x_2858_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__9));
v___x_2859_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__10));
v___x_2860_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2860_, 0, v___x_2793_);
lean_ctor_set(v___x_2860_, 1, v___x_2858_);
v___x_2861_ = l_Lean_Syntax_node2(v___x_2793_, v___x_2859_, v___x_2860_, v___x_2791_);
v___x_2862_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__11));
v___x_2863_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__12));
v___x_2864_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2864_, 0, v___x_2793_);
lean_ctor_set(v___x_2864_, 1, v___x_2862_);
v___x_2865_ = l_Lean_Syntax_node1(v___x_2793_, v___x_2863_, v___x_2864_);
lean_inc_ref_n(v___x_2835_, 2);
v___x_2866_ = l_Lean_Syntax_node7(v___x_2793_, v___x_2795_, v___x_2833_, v___x_2835_, v___x_2857_, v___x_2835_, v___x_2861_, v___x_2835_, v___x_2865_);
v___x_2867_ = l_Lean_Syntax_node1(v___x_2793_, v___x_2794_, v___x_2866_);
v___x_2868_ = l_Lean_Elab_Tactic_evalTactic(v___x_2867_, v_a_2773_, v_a_2774_, v_a_2775_, v_a_2776_, v_a_2777_, v_a_2778_, v_a_2779_, v_a_2780_);
return v___x_2868_;
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___boxed(lean_object* v_x_2869_, lean_object* v_a_2870_, lean_object* v_a_2871_, lean_object* v_a_2872_, lean_object* v_a_2873_, lean_object* v_a_2874_, lean_object* v_a_2875_, lean_object* v_a_2876_, lean_object* v_a_2877_, lean_object* v_a_2878_){
_start:
{
lean_object* v_res_2879_; 
v_res_2879_ = lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1(v_x_2869_, v_a_2870_, v_a_2871_, v_a_2872_, v_a_2873_, v_a_2874_, v_a_2875_, v_a_2876_, v_a_2877_);
lean_dec(v_a_2877_);
lean_dec_ref(v_a_2876_);
lean_dec(v_a_2875_);
lean_dec_ref(v_a_2874_);
lean_dec(v_a_2873_);
lean_dec_ref(v_a_2872_);
lean_dec(v_a_2871_);
lean_dec_ref(v_a_2870_);
return v_res_2879_;
}
}
static lean_object* _init_lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1_spec__0___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2913_; lean_object* v___x_2914_; 
v___x_2913_ = ((lean_object*)(lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1_spec__0___redArg___lam__0___closed__0));
v___x_2914_ = l_Lean_stringToMessageData(v___x_2913_);
return v___x_2914_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1_spec__0___redArg___lam__0(lean_object* v___x_2917_, lean_object* v___x_2918_, lean_object* v___x_2919_, lean_object* v___x_2920_, lean_object* v_a_2921_, lean_object* v___x_2922_, uint8_t v___x_2923_, uint8_t v___x_2924_, lean_object* v_b_2925_, lean_object* v___y_2926_, lean_object* v___y_2927_, lean_object* v___y_2928_, lean_object* v___y_2929_){
_start:
{
lean_object* v___x_2931_; lean_object* v___x_2932_; 
lean_inc_ref(v_b_2925_);
v___x_2931_ = l_Lean_Expr_app___override(v___x_2917_, v_b_2925_);
lean_inc(v___y_2929_);
lean_inc_ref(v___y_2928_);
lean_inc(v___y_2927_);
lean_inc_ref(v___y_2926_);
v___x_2932_ = lean_whnf(v___x_2931_, v___y_2926_, v___y_2927_, v___y_2928_, v___y_2929_);
if (lean_obj_tag(v___x_2932_) == 0)
{
lean_object* v_a_2933_; lean_object* v___x_2934_; lean_object* v_fst_2935_; lean_object* v_snd_2936_; lean_object* v___x_2938_; uint8_t v_isShared_2939_; uint8_t v_isSharedCheck_2961_; 
v_a_2933_ = lean_ctor_get(v___x_2932_, 0);
lean_inc(v_a_2933_);
lean_dec_ref(v___x_2932_);
v___x_2934_ = l_Lean_Expr_getAppFnArgs(v_a_2933_);
v_fst_2935_ = lean_ctor_get(v___x_2934_, 0);
v_snd_2936_ = lean_ctor_get(v___x_2934_, 1);
v_isSharedCheck_2961_ = !lean_is_exclusive(v___x_2934_);
if (v_isSharedCheck_2961_ == 0)
{
v___x_2938_ = v___x_2934_;
v_isShared_2939_ = v_isSharedCheck_2961_;
goto v_resetjp_2937_;
}
else
{
lean_inc(v_snd_2936_);
lean_inc(v_fst_2935_);
lean_dec(v___x_2934_);
v___x_2938_ = lean_box(0);
v_isShared_2939_ = v_isSharedCheck_2961_;
goto v_resetjp_2937_;
}
v_resetjp_2937_:
{
lean_object* v___x_2947_; uint8_t v___x_2948_; 
v___x_2947_ = ((lean_object*)(lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1_spec__0___redArg___lam__0___closed__2));
v___x_2948_ = lean_name_eq(v_fst_2935_, v___x_2947_);
if (v___x_2948_ == 0)
{
lean_dec(v_snd_2936_);
lean_dec_ref(v_b_2925_);
lean_dec_ref(v_a_2921_);
goto v___jp_2940_;
}
else
{
lean_object* v___x_2949_; uint8_t v___x_2950_; 
v___x_2949_ = lean_array_get_size(v_snd_2936_);
v___x_2950_ = lean_nat_dec_eq(v___x_2949_, v___x_2918_);
if (v___x_2950_ == 0)
{
lean_dec(v_snd_2936_);
lean_dec_ref(v_b_2925_);
lean_dec_ref(v_a_2921_);
goto v___jp_2940_;
}
else
{
lean_object* v___x_2951_; lean_object* v___x_2952_; 
lean_del_object(v___x_2938_);
lean_dec(v_fst_2935_);
v___x_2951_ = lean_array_get_borrowed(v___x_2919_, v_snd_2936_, v___x_2920_);
lean_inc(v___x_2951_);
v___x_2952_ = l_Lean_mkArrow(v___x_2951_, v_a_2921_, v___y_2928_, v___y_2929_);
if (lean_obj_tag(v___x_2952_) == 0)
{
lean_object* v_a_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; 
v_a_2953_ = lean_ctor_get(v___x_2952_, 0);
lean_inc(v_a_2953_);
lean_dec_ref(v___x_2952_);
v___x_2954_ = lean_array_get(v___x_2919_, v_snd_2936_, v___x_2922_);
lean_dec(v_snd_2936_);
v___x_2955_ = l_Lean_mkArrow(v___x_2954_, v_a_2953_, v___y_2928_, v___y_2929_);
if (lean_obj_tag(v___x_2955_) == 0)
{
lean_object* v_a_2956_; lean_object* v___x_2957_; lean_object* v___x_2958_; uint8_t v___x_2959_; lean_object* v___x_2960_; 
v_a_2956_ = lean_ctor_get(v___x_2955_, 0);
lean_inc(v_a_2956_);
lean_dec_ref(v___x_2955_);
v___x_2957_ = lean_mk_empty_array_with_capacity(v___x_2920_);
v___x_2958_ = lean_array_push(v___x_2957_, v_b_2925_);
v___x_2959_ = 1;
v___x_2960_ = l_Lean_Meta_mkForallFVars(v___x_2958_, v_a_2956_, v___x_2923_, v___x_2924_, v___x_2924_, v___x_2959_, v___y_2926_, v___y_2927_, v___y_2928_, v___y_2929_);
lean_dec_ref(v___x_2958_);
return v___x_2960_;
}
else
{
lean_dec_ref(v_b_2925_);
return v___x_2955_;
}
}
else
{
lean_dec(v_snd_2936_);
lean_dec_ref(v_b_2925_);
return v___x_2952_;
}
}
}
v___jp_2940_:
{
lean_object* v___x_2941_; lean_object* v___x_2942_; lean_object* v___x_2944_; 
v___x_2941_ = lean_obj_once(&lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1_spec__0___redArg___lam__0___closed__1, &lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1_spec__0___redArg___lam__0___closed__1_once, _init_lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1_spec__0___redArg___lam__0___closed__1);
v___x_2942_ = l_Lean_MessageData_ofName(v_fst_2935_);
if (v_isShared_2939_ == 0)
{
lean_ctor_set_tag(v___x_2938_, 7);
lean_ctor_set(v___x_2938_, 1, v___x_2942_);
lean_ctor_set(v___x_2938_, 0, v___x_2941_);
v___x_2944_ = v___x_2938_;
goto v_reusejp_2943_;
}
else
{
lean_object* v_reuseFailAlloc_2946_; 
v_reuseFailAlloc_2946_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2946_, 0, v___x_2941_);
lean_ctor_set(v_reuseFailAlloc_2946_, 1, v___x_2942_);
v___x_2944_ = v_reuseFailAlloc_2946_;
goto v_reusejp_2943_;
}
v_reusejp_2943_:
{
lean_object* v___x_2945_; 
v___x_2945_ = l_Lean_throwError___at___00Lean_Elab_Tactic_elabNativeDecideCore_spec__0___redArg(v___x_2944_, v___y_2926_, v___y_2927_, v___y_2928_, v___y_2929_);
return v___x_2945_;
}
}
}
}
else
{
lean_dec_ref(v_b_2925_);
lean_dec_ref(v_a_2921_);
return v___x_2932_;
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1_spec__0___redArg___lam__0___boxed(lean_object* v___x_2962_, lean_object* v___x_2963_, lean_object* v___x_2964_, lean_object* v___x_2965_, lean_object* v_a_2966_, lean_object* v___x_2967_, lean_object* v___x_2968_, lean_object* v___x_2969_, lean_object* v_b_2970_, lean_object* v___y_2971_, lean_object* v___y_2972_, lean_object* v___y_2973_, lean_object* v___y_2974_, lean_object* v___y_2975_){
_start:
{
uint8_t v___x_20317__boxed_2976_; uint8_t v___x_20318__boxed_2977_; lean_object* v_res_2978_; 
v___x_20317__boxed_2976_ = lean_unbox(v___x_2968_);
v___x_20318__boxed_2977_ = lean_unbox(v___x_2969_);
v_res_2978_ = lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1_spec__0___redArg___lam__0(v___x_2962_, v___x_2963_, v___x_2964_, v___x_2965_, v_a_2966_, v___x_2967_, v___x_20317__boxed_2976_, v___x_20318__boxed_2977_, v_b_2970_, v___y_2971_, v___y_2972_, v___y_2973_, v___y_2974_);
lean_dec(v___y_2974_);
lean_dec_ref(v___y_2973_);
lean_dec(v___y_2972_);
lean_dec_ref(v___y_2971_);
lean_dec(v___x_2967_);
lean_dec(v___x_2965_);
lean_dec_ref(v___x_2964_);
lean_dec(v___x_2963_);
return v_res_2978_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1_spec__0___redArg(lean_object* v___x_2979_, lean_object* v_a_2980_, lean_object* v___x_2981_, lean_object* v_name_2982_, uint8_t v_bi_2983_, lean_object* v_type_2984_, uint8_t v_kind_2985_, lean_object* v___y_2986_, lean_object* v___y_2987_, lean_object* v___y_2988_, lean_object* v___y_2989_){
_start:
{
lean_object* v___x_2991_; lean_object* v___x_2992_; lean_object* v___x_2993_; lean_object* v___x_2994_; uint8_t v___x_2995_; uint8_t v___x_2996_; lean_object* v___x_2997_; lean_object* v___x_2998_; lean_object* v___f_2999_; lean_object* v___x_3000_; 
v___x_2991_ = lean_unsigned_to_nat(2u);
v___x_2992_ = l_Lean_instInhabitedExpr;
v___x_2993_ = lean_unsigned_to_nat(1u);
v___x_2994_ = lean_unsigned_to_nat(0u);
v___x_2995_ = 0;
v___x_2996_ = lean_nat_dec_eq(v___x_2981_, v___x_2991_);
v___x_2997_ = lean_box(v___x_2995_);
v___x_2998_ = lean_box(v___x_2996_);
v___f_2999_ = lean_alloc_closure((void*)(lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1_spec__0___redArg___lam__0___boxed), 14, 8);
lean_closure_set(v___f_2999_, 0, v___x_2979_);
lean_closure_set(v___f_2999_, 1, v___x_2991_);
lean_closure_set(v___f_2999_, 2, v___x_2992_);
lean_closure_set(v___f_2999_, 3, v___x_2993_);
lean_closure_set(v___f_2999_, 4, v_a_2980_);
lean_closure_set(v___f_2999_, 5, v___x_2994_);
lean_closure_set(v___f_2999_, 6, v___x_2997_);
lean_closure_set(v___f_2999_, 7, v___x_2998_);
v___x_3000_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp___redArg(v_name_2982_, v_bi_2983_, v_type_2984_, v___f_2999_, v_kind_2985_, v___y_2986_, v___y_2987_, v___y_2988_, v___y_2989_);
if (lean_obj_tag(v___x_3000_) == 0)
{
return v___x_3000_;
}
else
{
lean_object* v_a_3001_; lean_object* v___x_3003_; uint8_t v_isShared_3004_; uint8_t v_isSharedCheck_3008_; 
v_a_3001_ = lean_ctor_get(v___x_3000_, 0);
v_isSharedCheck_3008_ = !lean_is_exclusive(v___x_3000_);
if (v_isSharedCheck_3008_ == 0)
{
v___x_3003_ = v___x_3000_;
v_isShared_3004_ = v_isSharedCheck_3008_;
goto v_resetjp_3002_;
}
else
{
lean_inc(v_a_3001_);
lean_dec(v___x_3000_);
v___x_3003_ = lean_box(0);
v_isShared_3004_ = v_isSharedCheck_3008_;
goto v_resetjp_3002_;
}
v_resetjp_3002_:
{
lean_object* v___x_3006_; 
if (v_isShared_3004_ == 0)
{
v___x_3006_ = v___x_3003_;
goto v_reusejp_3005_;
}
else
{
lean_object* v_reuseFailAlloc_3007_; 
v_reuseFailAlloc_3007_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3007_, 0, v_a_3001_);
v___x_3006_ = v_reuseFailAlloc_3007_;
goto v_reusejp_3005_;
}
v_reusejp_3005_:
{
return v___x_3006_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1_spec__0___redArg___boxed(lean_object* v___x_3009_, lean_object* v_a_3010_, lean_object* v___x_3011_, lean_object* v_name_3012_, lean_object* v_bi_3013_, lean_object* v_type_3014_, lean_object* v_kind_3015_, lean_object* v___y_3016_, lean_object* v___y_3017_, lean_object* v___y_3018_, lean_object* v___y_3019_, lean_object* v___y_3020_){
_start:
{
uint8_t v_bi_boxed_3021_; uint8_t v_kind_boxed_3022_; lean_object* v_res_3023_; 
v_bi_boxed_3021_ = lean_unbox(v_bi_3013_);
v_kind_boxed_3022_ = lean_unbox(v_kind_3015_);
v_res_3023_ = lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1_spec__0___redArg(v___x_3009_, v_a_3010_, v___x_3011_, v_name_3012_, v_bi_boxed_3021_, v_type_3014_, v_kind_boxed_3022_, v___y_3016_, v___y_3017_, v___y_3018_, v___y_3019_);
lean_dec(v___y_3019_);
lean_dec_ref(v___y_3018_);
lean_dec(v___y_3017_);
lean_dec_ref(v___y_3016_);
lean_dec(v___x_3011_);
return v_res_3023_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1_spec__0(lean_object* v___x_3024_, lean_object* v_a_3025_, lean_object* v___x_3026_, lean_object* v_name_3027_, uint8_t v_bi_3028_, lean_object* v_type_3029_, uint8_t v_kind_3030_, lean_object* v___y_3031_, lean_object* v___y_3032_, lean_object* v___y_3033_, lean_object* v___y_3034_, lean_object* v___y_3035_, lean_object* v___y_3036_, lean_object* v___y_3037_, lean_object* v___y_3038_){
_start:
{
lean_object* v___x_3040_; 
v___x_3040_ = lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1_spec__0___redArg(v___x_3024_, v_a_3025_, v___x_3026_, v_name_3027_, v_bi_3028_, v_type_3029_, v_kind_3030_, v___y_3035_, v___y_3036_, v___y_3037_, v___y_3038_);
return v___x_3040_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1_spec__0___boxed(lean_object* v___x_3041_, lean_object* v_a_3042_, lean_object* v___x_3043_, lean_object* v_name_3044_, lean_object* v_bi_3045_, lean_object* v_type_3046_, lean_object* v_kind_3047_, lean_object* v___y_3048_, lean_object* v___y_3049_, lean_object* v___y_3050_, lean_object* v___y_3051_, lean_object* v___y_3052_, lean_object* v___y_3053_, lean_object* v___y_3054_, lean_object* v___y_3055_, lean_object* v___y_3056_){
_start:
{
uint8_t v_bi_boxed_3057_; uint8_t v_kind_boxed_3058_; lean_object* v_res_3059_; 
v_bi_boxed_3057_ = lean_unbox(v_bi_3045_);
v_kind_boxed_3058_ = lean_unbox(v_kind_3047_);
v_res_3059_ = lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1_spec__0(v___x_3041_, v_a_3042_, v___x_3043_, v_name_3044_, v_bi_boxed_3057_, v_type_3046_, v_kind_boxed_3058_, v___y_3048_, v___y_3049_, v___y_3050_, v___y_3051_, v___y_3052_, v___y_3053_, v___y_3054_, v___y_3055_);
lean_dec(v___y_3055_);
lean_dec_ref(v___y_3054_);
lean_dec(v___y_3053_);
lean_dec_ref(v___y_3052_);
lean_dec(v___y_3051_);
lean_dec_ref(v___y_3050_);
lean_dec(v___y_3049_);
lean_dec_ref(v___y_3048_);
lean_dec(v___x_3043_);
return v_res_3059_;
}
}
static lean_object* _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__1(void){
_start:
{
lean_object* v___x_3061_; lean_object* v___x_3062_; 
v___x_3061_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__0));
v___x_3062_ = l_Lean_stringToMessageData(v___x_3061_);
return v___x_3062_;
}
}
static lean_object* _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__3(void){
_start:
{
lean_object* v___x_3064_; lean_object* v___x_3065_; 
v___x_3064_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__2));
v___x_3065_ = l_Lean_stringToMessageData(v___x_3064_);
return v___x_3065_;
}
}
static lean_object* _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__21(void){
_start:
{
lean_object* v___x_3105_; lean_object* v___x_3106_; 
v___x_3105_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__20));
v___x_3106_ = l_String_toRawSubstring_x27(v___x_3105_);
return v___x_3106_;
}
}
static lean_object* _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__24(void){
_start:
{
lean_object* v___x_3110_; lean_object* v___x_3111_; 
v___x_3110_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__23));
v___x_3111_ = l_String_toRawSubstring_x27(v___x_3110_);
return v___x_3111_;
}
}
static lean_object* _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__27(void){
_start:
{
lean_object* v___x_3115_; lean_object* v___x_3116_; 
v___x_3115_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__26));
v___x_3116_ = l_String_toRawSubstring_x27(v___x_3115_);
return v___x_3116_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1(lean_object* v_x_3119_, lean_object* v_a_3120_, lean_object* v_a_3121_, lean_object* v_a_3122_, lean_object* v_a_3123_, lean_object* v_a_3124_, lean_object* v_a_3125_, lean_object* v_a_3126_, lean_object* v_a_3127_){
_start:
{
lean_object* v___x_3129_; uint8_t v___x_3130_; 
v___x_3129_ = ((lean_object*)(lp_Props2Theories_tactic__elim__exists__in___x2c___x2c___00__closed__1));
lean_inc(v_x_3119_);
v___x_3130_ = l_Lean_Syntax_isOfKind(v_x_3119_, v___x_3129_);
if (v___x_3130_ == 0)
{
lean_object* v___x_3131_; 
lean_dec(v_x_3119_);
v___x_3131_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__0___redArg();
return v___x_3131_;
}
else
{
lean_object* v___x_3132_; lean_object* v___x_3133_; lean_object* v___x_3134_; uint8_t v___x_3135_; lean_object* v___x_3136_; 
v___x_3132_ = lean_unsigned_to_nat(1u);
v___x_3133_ = l_Lean_Syntax_getArg(v_x_3119_, v___x_3132_);
v___x_3134_ = lean_box(0);
v___x_3135_ = 0;
lean_inc(v___x_3133_);
v___x_3136_ = l_Lean_Elab_Tactic_elabTerm(v___x_3133_, v___x_3134_, v___x_3135_, v_a_3120_, v_a_3121_, v_a_3122_, v_a_3123_, v_a_3124_, v_a_3125_, v_a_3126_, v_a_3127_);
if (lean_obj_tag(v___x_3136_) == 0)
{
lean_object* v_a_3137_; lean_object* v___x_3138_; 
v_a_3137_ = lean_ctor_get(v___x_3136_, 0);
lean_inc(v_a_3137_);
lean_dec_ref(v___x_3136_);
lean_inc(v_a_3127_);
lean_inc_ref(v_a_3126_);
lean_inc(v_a_3125_);
lean_inc_ref(v_a_3124_);
v___x_3138_ = lean_infer_type(v_a_3137_, v_a_3124_, v_a_3125_, v_a_3126_, v_a_3127_);
if (lean_obj_tag(v___x_3138_) == 0)
{
lean_object* v_a_3139_; lean_object* v___x_3140_; 
v_a_3139_ = lean_ctor_get(v___x_3138_, 0);
lean_inc(v_a_3139_);
lean_dec_ref(v___x_3138_);
lean_inc(v_a_3127_);
lean_inc_ref(v_a_3126_);
lean_inc(v_a_3125_);
lean_inc_ref(v_a_3124_);
v___x_3140_ = lean_whnf(v_a_3139_, v_a_3124_, v_a_3125_, v_a_3126_, v_a_3127_);
if (lean_obj_tag(v___x_3140_) == 0)
{
lean_object* v_a_3141_; lean_object* v___x_3149_; lean_object* v_fst_3150_; lean_object* v_snd_3151_; lean_object* v___x_3153_; uint8_t v_isShared_3154_; uint8_t v_isSharedCheck_3419_; 
v_a_3141_ = lean_ctor_get(v___x_3140_, 0);
lean_inc(v_a_3141_);
lean_dec_ref(v___x_3140_);
v___x_3149_ = l_Lean_Expr_getAppFnArgs(v_a_3141_);
v_fst_3150_ = lean_ctor_get(v___x_3149_, 0);
v_snd_3151_ = lean_ctor_get(v___x_3149_, 1);
v_isSharedCheck_3419_ = !lean_is_exclusive(v___x_3149_);
if (v_isSharedCheck_3419_ == 0)
{
v___x_3153_ = v___x_3149_;
v_isShared_3154_ = v_isSharedCheck_3419_;
goto v_resetjp_3152_;
}
else
{
lean_inc(v_snd_3151_);
lean_inc(v_fst_3150_);
lean_dec(v___x_3149_);
v___x_3153_ = lean_box(0);
v_isShared_3154_ = v_isSharedCheck_3419_;
goto v_resetjp_3152_;
}
v___jp_3142_:
{
lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; lean_object* v___x_3148_; 
v___x_3143_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__1, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__1_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__1);
v___x_3144_ = l_Lean_MessageData_ofSyntax(v___x_3133_);
v___x_3145_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3145_, 0, v___x_3143_);
lean_ctor_set(v___x_3145_, 1, v___x_3144_);
v___x_3146_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__3, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__3_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__3);
v___x_3147_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3147_, 0, v___x_3145_);
lean_ctor_set(v___x_3147_, 1, v___x_3146_);
v___x_3148_ = l_Lean_throwError___at___00Lean_Elab_Tactic_elabNativeDecideCore_spec__0___redArg(v___x_3147_, v_a_3124_, v_a_3125_, v_a_3126_, v_a_3127_);
return v___x_3148_;
}
v_resetjp_3152_:
{
lean_object* v___x_3155_; uint8_t v___x_3156_; 
v___x_3155_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__4));
v___x_3156_ = lean_name_eq(v_fst_3150_, v___x_3155_);
lean_dec(v_fst_3150_);
if (v___x_3156_ == 0)
{
lean_del_object(v___x_3153_);
lean_dec(v_snd_3151_);
lean_dec(v_x_3119_);
goto v___jp_3142_;
}
else
{
lean_object* v___x_3157_; lean_object* v___x_3158_; uint8_t v___x_3159_; 
v___x_3157_ = lean_unsigned_to_nat(2u);
v___x_3158_ = lean_array_get_size(v_snd_3151_);
v___x_3159_ = lean_nat_dec_eq(v___x_3158_, v___x_3157_);
if (v___x_3159_ == 0)
{
lean_del_object(v___x_3153_);
lean_dec(v_snd_3151_);
lean_dec(v_x_3119_);
goto v___jp_3142_;
}
else
{
lean_object* v___x_3160_; lean_object* v___x_3161_; lean_object* v___x_3162_; 
v___x_3160_ = lean_unsigned_to_nat(3u);
v___x_3161_ = l_Lean_Syntax_getArg(v_x_3119_, v___x_3160_);
v___x_3162_ = l_Lean_Elab_Tactic_elabTerm(v___x_3161_, v___x_3134_, v___x_3135_, v_a_3120_, v_a_3121_, v_a_3122_, v_a_3123_, v_a_3124_, v_a_3125_, v_a_3126_, v_a_3127_);
if (lean_obj_tag(v___x_3162_) == 0)
{
lean_object* v_a_3163_; lean_object* v___x_3164_; lean_object* v___x_3165_; lean_object* v___x_3166_; 
v_a_3163_ = lean_ctor_get(v___x_3162_, 0);
lean_inc(v_a_3163_);
lean_dec_ref(v___x_3162_);
v___x_3164_ = l_Lean_instInhabitedExpr;
v___x_3165_ = lean_array_get(v___x_3164_, v_snd_3151_, v___x_3132_);
lean_dec(v_snd_3151_);
lean_inc(v_a_3127_);
lean_inc_ref(v_a_3126_);
lean_inc(v_a_3125_);
lean_inc_ref(v_a_3124_);
lean_inc(v___x_3165_);
v___x_3166_ = lean_infer_type(v___x_3165_, v_a_3124_, v_a_3125_, v_a_3126_, v_a_3127_);
if (lean_obj_tag(v___x_3166_) == 0)
{
lean_object* v_a_3167_; lean_object* v___x_3168_; lean_object* v___x_3169_; uint8_t v___x_3170_; uint8_t v___x_3171_; lean_object* v___x_3172_; 
v_a_3167_ = lean_ctor_get(v___x_3166_, 0);
lean_inc(v_a_3167_);
lean_dec_ref(v___x_3166_);
v___x_3168_ = l_Lean_Expr_bindingDomain_x21(v_a_3167_);
lean_dec(v_a_3167_);
v___x_3169_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__6));
v___x_3170_ = 0;
v___x_3171_ = 0;
lean_inc(v_a_3163_);
v___x_3172_ = lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1_spec__0___redArg(v___x_3165_, v_a_3163_, v___x_3158_, v___x_3169_, v___x_3170_, v___x_3168_, v___x_3171_, v_a_3124_, v_a_3125_, v_a_3126_, v_a_3127_);
if (lean_obj_tag(v___x_3172_) == 0)
{
lean_object* v_a_3173_; lean_object* v___x_3174_; 
v_a_3173_ = lean_ctor_get(v___x_3172_, 0);
lean_inc(v_a_3173_);
lean_dec_ref(v___x_3172_);
v___x_3174_ = l_Lean_mkArrow(v_a_3173_, v_a_3163_, v_a_3126_, v_a_3127_);
if (lean_obj_tag(v___x_3174_) == 0)
{
lean_object* v_a_3175_; lean_object* v___x_3176_; 
v_a_3175_ = lean_ctor_get(v___x_3174_, 0);
lean_inc(v_a_3175_);
lean_dec_ref(v___x_3174_);
v___x_3176_ = l_Lean_Meta_reduce(v_a_3175_, v___x_3159_, v___x_3159_, v___x_3159_, v_a_3124_, v_a_3125_, v_a_3126_, v_a_3127_);
if (lean_obj_tag(v___x_3176_) == 0)
{
lean_object* v_a_3177_; lean_object* v___x_3178_; lean_object* v___x_3179_; 
v_a_3177_ = lean_ctor_get(v___x_3176_, 0);
lean_inc(v_a_3177_);
lean_dec_ref(v___x_3176_);
v___x_3178_ = lean_box(1);
v___x_3179_ = l_Lean_PrettyPrinter_delab(v_a_3177_, v___x_3178_, v_a_3124_, v_a_3125_, v_a_3126_, v_a_3127_);
if (lean_obj_tag(v___x_3179_) == 0)
{
lean_object* v_a_3180_; lean_object* v_ref_3181_; lean_object* v_quotContext_3182_; lean_object* v_currMacroScope_3183_; lean_object* v___x_3184_; lean_object* v___x_3185_; lean_object* v___x_3186_; lean_object* v___x_3187_; lean_object* v___x_3188_; lean_object* v___x_3189_; lean_object* v___x_3190_; lean_object* v___x_3191_; lean_object* v___x_3192_; lean_object* v___x_3193_; lean_object* v___x_3195_; 
v_a_3180_ = lean_ctor_get(v___x_3179_, 0);
lean_inc(v_a_3180_);
lean_dec_ref(v___x_3179_);
v_ref_3181_ = lean_ctor_get(v_a_3126_, 5);
v_quotContext_3182_ = lean_ctor_get(v_a_3126_, 10);
v_currMacroScope_3183_ = lean_ctor_get(v_a_3126_, 11);
v___x_3184_ = lean_unsigned_to_nat(5u);
v___x_3185_ = l_Lean_Syntax_getArg(v_x_3119_, v___x_3184_);
lean_dec(v_x_3119_);
v___x_3186_ = l_Lean_SourceInfo_fromRef(v_ref_3181_, v___x_3135_);
v___x_3187_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__64));
v___x_3188_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__11));
lean_inc(v___x_3185_);
lean_inc_n(v___x_3186_, 3);
v___x_3189_ = l_Lean_Syntax_node1(v___x_3186_, v___x_3188_, v___x_3185_);
v___x_3190_ = l_Lean_Syntax_node1(v___x_3186_, v___x_3187_, v___x_3189_);
v___x_3191_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__1));
v___x_3192_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__4));
v___x_3193_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__7));
if (v_isShared_3154_ == 0)
{
lean_ctor_set_tag(v___x_3153_, 2);
lean_ctor_set(v___x_3153_, 1, v___x_3193_);
lean_ctor_set(v___x_3153_, 0, v___x_3186_);
v___x_3195_ = v___x_3153_;
goto v_reusejp_3194_;
}
else
{
lean_object* v_reuseFailAlloc_3370_; 
v_reuseFailAlloc_3370_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3370_, 0, v___x_3186_);
lean_ctor_set(v_reuseFailAlloc_3370_, 1, v___x_3193_);
v___x_3195_ = v_reuseFailAlloc_3370_;
goto v_reusejp_3194_;
}
v_reusejp_3194_:
{
lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; lean_object* v___x_3204_; lean_object* v___x_3205_; lean_object* v___x_3206_; lean_object* v___x_3207_; lean_object* v___x_3208_; lean_object* v___x_3209_; lean_object* v___x_3210_; lean_object* v___x_3211_; lean_object* v___x_3212_; lean_object* v___x_3213_; lean_object* v___x_3214_; lean_object* v___x_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; lean_object* v___x_3218_; lean_object* v___x_3219_; lean_object* v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v___x_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; lean_object* v___x_3228_; lean_object* v___x_3229_; lean_object* v___x_3230_; lean_object* v___x_3231_; lean_object* v___x_3232_; lean_object* v___x_3233_; lean_object* v___x_3234_; lean_object* v___x_3235_; lean_object* v___x_3236_; lean_object* v___x_3237_; lean_object* v___x_3238_; lean_object* v___x_3239_; lean_object* v___x_3240_; lean_object* v___x_3241_; lean_object* v___x_3242_; lean_object* v___x_3243_; lean_object* v___x_3244_; lean_object* v___x_3245_; lean_object* v___x_3246_; lean_object* v___x_3247_; lean_object* v___x_3248_; lean_object* v___x_3249_; lean_object* v___x_3250_; lean_object* v___x_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; lean_object* v___x_3257_; lean_object* v___x_3258_; lean_object* v___x_3259_; lean_object* v___x_3260_; lean_object* v___x_3261_; lean_object* v___x_3262_; lean_object* v___x_3263_; lean_object* v___x_3264_; lean_object* v___x_3265_; lean_object* v___x_3266_; lean_object* v___x_3267_; lean_object* v___x_3268_; lean_object* v___x_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; lean_object* v___x_3275_; lean_object* v___x_3276_; lean_object* v___x_3277_; lean_object* v___x_3278_; lean_object* v___x_3279_; lean_object* v___x_3280_; lean_object* v___x_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; lean_object* v___x_3286_; lean_object* v___x_3287_; lean_object* v___x_3288_; lean_object* v___x_3289_; lean_object* v___x_3290_; lean_object* v___x_3291_; lean_object* v___x_3292_; lean_object* v___x_3293_; lean_object* v___x_3294_; lean_object* v___x_3295_; lean_object* v___x_3296_; lean_object* v___x_3297_; lean_object* v___x_3298_; lean_object* v___x_3299_; lean_object* v___x_3300_; lean_object* v___x_3301_; lean_object* v___x_3302_; lean_object* v___x_3303_; lean_object* v___x_3304_; lean_object* v___x_3305_; lean_object* v___x_3306_; lean_object* v___x_3307_; lean_object* v___x_3308_; lean_object* v___x_3309_; lean_object* v___x_3310_; lean_object* v___x_3311_; lean_object* v___x_3312_; lean_object* v___x_3313_; lean_object* v___x_3314_; lean_object* v___x_3315_; lean_object* v___x_3316_; lean_object* v___x_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; lean_object* v___x_3320_; lean_object* v___x_3321_; lean_object* v___x_3322_; lean_object* v___x_3323_; lean_object* v___x_3324_; lean_object* v___x_3325_; lean_object* v___x_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; lean_object* v___x_3334_; lean_object* v___x_3335_; lean_object* v___x_3336_; lean_object* v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3339_; lean_object* v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; lean_object* v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; lean_object* v___x_3348_; lean_object* v___x_3349_; lean_object* v___x_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; lean_object* v___x_3364_; lean_object* v___x_3365_; lean_object* v___x_3366_; lean_object* v___x_3367_; lean_object* v___x_3368_; lean_object* v___x_3369_; 
v___x_3196_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__9));
v___x_3197_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__11));
v___x_3198_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__8));
v___x_3199_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__9));
lean_inc_n(v___x_3186_, 85);
v___x_3200_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3200_, 0, v___x_3186_);
lean_ctor_set(v___x_3200_, 1, v___x_3199_);
v___x_3201_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__4));
v___x_3202_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19, &lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19);
v___x_3203_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3203_, 0, v___x_3186_);
lean_ctor_set(v___x_3203_, 1, v___x_3188_);
lean_ctor_set(v___x_3203_, 2, v___x_3202_);
lean_inc_ref_n(v___x_3203_, 21);
v___x_3204_ = l_Lean_Syntax_node1(v___x_3186_, v___x_3201_, v___x_3203_);
v___x_3205_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__6));
v___x_3206_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__11));
v___x_3207_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__13));
v___x_3208_ = l_Lean_Syntax_node1(v___x_3186_, v___x_3207_, v___x_3185_);
v___x_3209_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__15));
v___x_3210_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__16));
v___x_3211_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3211_, 0, v___x_3186_);
lean_ctor_set(v___x_3211_, 1, v___x_3210_);
v___x_3212_ = l_Lean_Syntax_node2(v___x_3186_, v___x_3209_, v___x_3211_, v_a_3180_);
v___x_3213_ = l_Lean_Syntax_node1(v___x_3186_, v___x_3188_, v___x_3212_);
v___x_3214_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__23));
v___x_3215_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3215_, 0, v___x_3186_);
lean_ctor_set(v___x_3215_, 1, v___x_3214_);
v___x_3216_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__18));
v___x_3217_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__19));
v___x_3218_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3218_, 0, v___x_3186_);
lean_ctor_set(v___x_3218_, 1, v___x_3217_);
v___x_3219_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__1));
v___x_3220_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__2));
v___x_3221_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3221_, 0, v___x_3186_);
lean_ctor_set(v___x_3221_, 1, v___x_3220_);
v___x_3222_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__8));
v___x_3223_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__10));
v___x_3224_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__11));
v___x_3225_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3225_, 0, v___x_3186_);
lean_ctor_set(v___x_3225_, 1, v___x_3224_);
v___x_3226_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__1, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__1_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__1);
v___x_3227_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__2));
lean_inc_n(v_currMacroScope_3183_, 11);
lean_inc_n(v_quotContext_3182_, 11);
v___x_3228_ = l_Lean_addMacroScope(v_quotContext_3182_, v___x_3227_, v_currMacroScope_3183_);
v___x_3229_ = lean_box(0);
v___x_3230_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3230_, 0, v___x_3186_);
lean_ctor_set(v___x_3230_, 1, v___x_3226_);
lean_ctor_set(v___x_3230_, 2, v___x_3228_);
lean_ctor_set(v___x_3230_, 3, v___x_3229_);
v___x_3231_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__23));
v___x_3232_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3232_, 0, v___x_3186_);
lean_ctor_set(v___x_3232_, 1, v___x_3231_);
v___x_3233_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__21, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__21_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__21);
v___x_3234_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__22));
v___x_3235_ = l_Lean_addMacroScope(v_quotContext_3182_, v___x_3234_, v_currMacroScope_3183_);
v___x_3236_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3236_, 0, v___x_3186_);
lean_ctor_set(v___x_3236_, 1, v___x_3233_);
lean_ctor_set(v___x_3236_, 2, v___x_3235_);
lean_ctor_set(v___x_3236_, 3, v___x_3229_);
v___x_3237_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__24, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__24_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__24);
v___x_3238_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__25));
v___x_3239_ = l_Lean_addMacroScope(v_quotContext_3182_, v___x_3238_, v_currMacroScope_3183_);
v___x_3240_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3240_, 0, v___x_3186_);
lean_ctor_set(v___x_3240_, 1, v___x_3237_);
lean_ctor_set(v___x_3240_, 2, v___x_3239_);
lean_ctor_set(v___x_3240_, 3, v___x_3229_);
lean_inc_ref(v___x_3240_);
lean_inc_ref(v___x_3236_);
lean_inc_ref_n(v___x_3232_, 3);
lean_inc_ref(v___x_3230_);
v___x_3241_ = l_Lean_Syntax_node5(v___x_3186_, v___x_3188_, v___x_3230_, v___x_3232_, v___x_3236_, v___x_3232_, v___x_3240_);
v___x_3242_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__12));
v___x_3243_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3243_, 0, v___x_3186_);
lean_ctor_set(v___x_3243_, 1, v___x_3242_);
v___x_3244_ = l_Lean_Syntax_node3(v___x_3186_, v___x_3223_, v___x_3225_, v___x_3241_, v___x_3243_);
lean_inc_ref_n(v___x_3215_, 4);
v___x_3245_ = l_Lean_Syntax_node5(v___x_3186_, v___x_3222_, v___x_3244_, v___x_3203_, v___x_3203_, v___x_3215_, v___x_3133_);
v___x_3246_ = l_Lean_Syntax_node1(v___x_3186_, v___x_3205_, v___x_3245_);
lean_inc(v___x_3204_);
v___x_3247_ = l_Lean_Syntax_node3(v___x_3186_, v___x_3219_, v___x_3221_, v___x_3204_, v___x_3246_);
v___x_3248_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__in____1___closed__0));
v___x_3249_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__in____1___closed__1));
v___x_3250_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3250_, 0, v___x_3186_);
lean_ctor_set(v___x_3250_, 1, v___x_3248_);
v___x_3251_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__27, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__27_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__27);
v___x_3252_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__28));
v___x_3253_ = l_Lean_addMacroScope(v_quotContext_3182_, v___x_3252_, v_currMacroScope_3183_);
v___x_3254_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3254_, 0, v___x_3186_);
lean_ctor_set(v___x_3254_, 1, v___x_3251_);
lean_ctor_set(v___x_3254_, 2, v___x_3253_);
lean_ctor_set(v___x_3254_, 3, v___x_3229_);
lean_inc_ref(v___x_3254_);
v___x_3255_ = l_Lean_Syntax_node1(v___x_3186_, v___x_3188_, v___x_3254_);
v___x_3256_ = l_Lean_Syntax_node2(v___x_3186_, v___x_3249_, v___x_3250_, v___x_3255_);
v___x_3257_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__9));
v___x_3258_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__10));
v___x_3259_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3259_, 0, v___x_3186_);
lean_ctor_set(v___x_3259_, 1, v___x_3257_);
v___x_3260_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__4));
v___x_3261_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__6));
v___x_3262_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__9));
v___x_3263_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__11, &lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__11_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__11);
v___x_3264_ = lean_box(0);
v___x_3265_ = l_Lean_addMacroScope(v_quotContext_3182_, v___x_3264_, v_currMacroScope_3183_);
v___x_3266_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__46));
v___x_3267_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3267_, 0, v___x_3186_);
lean_ctor_set(v___x_3267_, 1, v___x_3263_);
lean_ctor_set(v___x_3267_, 2, v___x_3265_);
lean_ctor_set(v___x_3267_, 3, v___x_3266_);
v___x_3268_ = l_Lean_Syntax_node1(v___x_3186_, v___x_3262_, v___x_3267_);
lean_inc_ref_n(v___x_3195_, 2);
v___x_3269_ = l_Lean_Syntax_node2(v___x_3186_, v___x_3261_, v___x_3195_, v___x_3268_);
v___x_3270_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__4));
v___x_3271_ = l_Lean_Syntax_node2(v___x_3186_, v___x_3188_, v___x_3230_, v___x_3236_);
v___x_3272_ = l_Lean_Syntax_node2(v___x_3186_, v___x_3270_, v___x_3254_, v___x_3271_);
v___x_3273_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__49));
v___x_3274_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3274_, 0, v___x_3186_);
lean_ctor_set(v___x_3274_, 1, v___x_3273_);
lean_inc_ref_n(v___x_3274_, 2);
v___x_3275_ = l_Lean_Syntax_node3(v___x_3186_, v___x_3260_, v___x_3269_, v___x_3272_, v___x_3274_);
v___x_3276_ = l_Lean_Syntax_node2(v___x_3186_, v___x_3258_, v___x_3259_, v___x_3275_);
v___x_3277_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in_____x2c___x2c____1___closed__0));
v___x_3278_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in_____x2c___x2c____1___closed__1));
v___x_3279_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3279_, 0, v___x_3186_);
lean_ctor_set(v___x_3279_, 1, v___x_3277_);
v___x_3280_ = l_Lean_Syntax_node2(v___x_3186_, v___x_3278_, v___x_3279_, v___x_3240_);
v___x_3281_ = l_Lean_Syntax_node7(v___x_3186_, v___x_3188_, v___x_3247_, v___x_3203_, v___x_3256_, v___x_3203_, v___x_3276_, v___x_3203_, v___x_3280_);
v___x_3282_ = l_Lean_Syntax_node1(v___x_3186_, v___x_3197_, v___x_3281_);
v___x_3283_ = l_Lean_Syntax_node1(v___x_3186_, v___x_3196_, v___x_3282_);
v___x_3284_ = l_Lean_Syntax_node2(v___x_3186_, v___x_3216_, v___x_3218_, v___x_3283_);
v___x_3285_ = l_Lean_Syntax_node5(v___x_3186_, v___x_3206_, v___x_3208_, v___x_3203_, v___x_3213_, v___x_3215_, v___x_3284_);
v___x_3286_ = l_Lean_Syntax_node1(v___x_3186_, v___x_3205_, v___x_3285_);
v___x_3287_ = l_Lean_Syntax_node3(v___x_3186_, v___x_3198_, v___x_3200_, v___x_3204_, v___x_3286_);
v___x_3288_ = l_Lean_Syntax_node1(v___x_3186_, v___x_3188_, v___x_3287_);
v___x_3289_ = l_Lean_Syntax_node1(v___x_3186_, v___x_3197_, v___x_3288_);
v___x_3290_ = l_Lean_Syntax_node1(v___x_3186_, v___x_3196_, v___x_3289_);
v___x_3291_ = l_Lean_Syntax_node3(v___x_3186_, v___x_3192_, v___x_3195_, v___x_3290_, v___x_3274_);
v___x_3292_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__4));
v___x_3293_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3293_, 0, v___x_3186_);
lean_ctor_set(v___x_3293_, 1, v___x_3292_);
v___x_3294_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__6));
v___x_3295_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__7));
v___x_3296_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3296_, 0, v___x_3186_);
lean_ctor_set(v___x_3296_, 1, v___x_3295_);
v___x_3297_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__12));
v___x_3298_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__13));
v___x_3299_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3299_, 0, v___x_3186_);
lean_ctor_set(v___x_3299_, 1, v___x_3297_);
v___x_3300_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__15));
v___x_3301_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__17));
v___x_3302_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__19));
v___x_3303_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__21, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__21_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__21);
v___x_3304_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__22));
v___x_3305_ = l_Lean_addMacroScope(v_quotContext_3182_, v___x_3304_, v_currMacroScope_3183_);
v___x_3306_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3306_, 0, v___x_3186_);
lean_ctor_set(v___x_3306_, 1, v___x_3303_);
lean_ctor_set(v___x_3306_, 2, v___x_3305_);
lean_ctor_set(v___x_3306_, 3, v___x_3229_);
v___x_3307_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__25));
v___x_3308_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__26));
v___x_3309_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3309_, 0, v___x_3186_);
lean_ctor_set(v___x_3309_, 1, v___x_3308_);
v___x_3310_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__28));
v___x_3311_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__30));
v___x_3312_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__32));
v___x_3313_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__34, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__34_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__34);
v___x_3314_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__35));
v___x_3315_ = l_Lean_addMacroScope(v_quotContext_3182_, v___x_3314_, v_currMacroScope_3183_);
v___x_3316_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3316_, 0, v___x_3186_);
lean_ctor_set(v___x_3316_, 1, v___x_3313_);
lean_ctor_set(v___x_3316_, 2, v___x_3315_);
lean_ctor_set(v___x_3316_, 3, v___x_3229_);
v___x_3317_ = l_Lean_Syntax_node2(v___x_3186_, v___x_3312_, v___x_3316_, v___x_3203_);
v___x_3318_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__37));
v___x_3319_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__39, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__39_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__39);
v___x_3320_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__40));
v___x_3321_ = l_Lean_addMacroScope(v_quotContext_3182_, v___x_3320_, v_currMacroScope_3183_);
v___x_3322_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__44));
v___x_3323_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3323_, 0, v___x_3186_);
lean_ctor_set(v___x_3323_, 1, v___x_3319_);
lean_ctor_set(v___x_3323_, 2, v___x_3321_);
lean_ctor_set(v___x_3323_, 3, v___x_3322_);
v___x_3324_ = l_Lean_Syntax_node3(v___x_3186_, v___x_3318_, v___x_3215_, v___x_3203_, v___x_3323_);
v___x_3325_ = l_Lean_Syntax_node3(v___x_3186_, v___x_3188_, v___x_3203_, v___x_3203_, v___x_3324_);
v___x_3326_ = l_Lean_Syntax_node2(v___x_3186_, v___x_3311_, v___x_3317_, v___x_3325_);
v___x_3327_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__46, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__46_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__46);
v___x_3328_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__47));
v___x_3329_ = l_Lean_addMacroScope(v_quotContext_3182_, v___x_3328_, v_currMacroScope_3183_);
v___x_3330_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3330_, 0, v___x_3186_);
lean_ctor_set(v___x_3330_, 1, v___x_3327_);
lean_ctor_set(v___x_3330_, 2, v___x_3329_);
lean_ctor_set(v___x_3330_, 3, v___x_3229_);
v___x_3331_ = l_Lean_Syntax_node2(v___x_3186_, v___x_3312_, v___x_3330_, v___x_3203_);
v___x_3332_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__49, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__49_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__49);
v___x_3333_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__50));
v___x_3334_ = l_Lean_addMacroScope(v_quotContext_3182_, v___x_3333_, v_currMacroScope_3183_);
v___x_3335_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__53));
v___x_3336_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3336_, 0, v___x_3186_);
lean_ctor_set(v___x_3336_, 1, v___x_3332_);
lean_ctor_set(v___x_3336_, 2, v___x_3334_);
lean_ctor_set(v___x_3336_, 3, v___x_3335_);
v___x_3337_ = l_Lean_Syntax_node3(v___x_3186_, v___x_3318_, v___x_3215_, v___x_3203_, v___x_3336_);
v___x_3338_ = l_Lean_Syntax_node3(v___x_3186_, v___x_3188_, v___x_3203_, v___x_3203_, v___x_3337_);
lean_inc(v___x_3338_);
v___x_3339_ = l_Lean_Syntax_node2(v___x_3186_, v___x_3311_, v___x_3331_, v___x_3338_);
v___x_3340_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__55, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__55_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__55);
v___x_3341_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__56));
v___x_3342_ = l_Lean_addMacroScope(v_quotContext_3182_, v___x_3341_, v_currMacroScope_3183_);
v___x_3343_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3343_, 0, v___x_3186_);
lean_ctor_set(v___x_3343_, 1, v___x_3340_);
lean_ctor_set(v___x_3343_, 2, v___x_3342_);
lean_ctor_set(v___x_3343_, 3, v___x_3229_);
v___x_3344_ = l_Lean_Syntax_node2(v___x_3186_, v___x_3312_, v___x_3343_, v___x_3203_);
v___x_3345_ = l_Lean_Syntax_node2(v___x_3186_, v___x_3311_, v___x_3344_, v___x_3338_);
v___x_3346_ = l_Lean_Syntax_node5(v___x_3186_, v___x_3188_, v___x_3326_, v___x_3232_, v___x_3339_, v___x_3232_, v___x_3345_);
v___x_3347_ = l_Lean_Syntax_node1(v___x_3186_, v___x_3310_, v___x_3346_);
v___x_3348_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__58));
v___x_3349_ = l_Lean_Syntax_node1(v___x_3186_, v___x_3348_, v___x_3203_);
v___x_3350_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__59));
v___x_3351_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3351_, 0, v___x_3186_);
lean_ctor_set(v___x_3351_, 1, v___x_3350_);
v___x_3352_ = l_Lean_Syntax_node6(v___x_3186_, v___x_3307_, v___x_3309_, v___x_3203_, v___x_3347_, v___x_3349_, v___x_3203_, v___x_3351_);
v___x_3353_ = l_Lean_Syntax_node5(v___x_3186_, v___x_3302_, v___x_3195_, v___x_3306_, v___x_3215_, v___x_3352_, v___x_3274_);
v___x_3354_ = l_Lean_Syntax_node1(v___x_3186_, v___x_3301_, v___x_3353_);
v___x_3355_ = l_Lean_Syntax_node1(v___x_3186_, v___x_3188_, v___x_3354_);
v___x_3356_ = l_Lean_Syntax_node1(v___x_3186_, v___x_3300_, v___x_3355_);
v___x_3357_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__61));
v___x_3358_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__62));
v___x_3359_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3359_, 0, v___x_3186_);
lean_ctor_set(v___x_3359_, 1, v___x_3358_);
v___x_3360_ = l_Lean_Syntax_node2(v___x_3186_, v___x_3357_, v___x_3359_, v___x_3190_);
v___x_3361_ = l_Lean_Syntax_node1(v___x_3186_, v___x_3188_, v___x_3360_);
v___x_3362_ = l_Lean_Syntax_node6(v___x_3186_, v___x_3298_, v___x_3299_, v___x_3356_, v___x_3203_, v___x_3203_, v___x_3203_, v___x_3361_);
v___x_3363_ = l_Lean_Syntax_node1(v___x_3186_, v___x_3188_, v___x_3362_);
v___x_3364_ = l_Lean_Syntax_node1(v___x_3186_, v___x_3197_, v___x_3363_);
v___x_3365_ = l_Lean_Syntax_node1(v___x_3186_, v___x_3196_, v___x_3364_);
v___x_3366_ = l_Lean_Syntax_node2(v___x_3186_, v___x_3294_, v___x_3296_, v___x_3365_);
v___x_3367_ = l_Lean_Syntax_node3(v___x_3186_, v___x_3188_, v___x_3291_, v___x_3293_, v___x_3366_);
v___x_3368_ = l_Lean_Syntax_node1(v___x_3186_, v___x_3191_, v___x_3367_);
v___x_3369_ = l_Lean_Elab_Tactic_evalTactic(v___x_3368_, v_a_3120_, v_a_3121_, v_a_3122_, v_a_3123_, v_a_3124_, v_a_3125_, v_a_3126_, v_a_3127_);
return v___x_3369_;
}
}
else
{
lean_object* v_a_3371_; lean_object* v___x_3373_; uint8_t v_isShared_3374_; uint8_t v_isSharedCheck_3378_; 
lean_del_object(v___x_3153_);
lean_dec(v___x_3133_);
lean_dec(v_x_3119_);
v_a_3371_ = lean_ctor_get(v___x_3179_, 0);
v_isSharedCheck_3378_ = !lean_is_exclusive(v___x_3179_);
if (v_isSharedCheck_3378_ == 0)
{
v___x_3373_ = v___x_3179_;
v_isShared_3374_ = v_isSharedCheck_3378_;
goto v_resetjp_3372_;
}
else
{
lean_inc(v_a_3371_);
lean_dec(v___x_3179_);
v___x_3373_ = lean_box(0);
v_isShared_3374_ = v_isSharedCheck_3378_;
goto v_resetjp_3372_;
}
v_resetjp_3372_:
{
lean_object* v___x_3376_; 
if (v_isShared_3374_ == 0)
{
v___x_3376_ = v___x_3373_;
goto v_reusejp_3375_;
}
else
{
lean_object* v_reuseFailAlloc_3377_; 
v_reuseFailAlloc_3377_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3377_, 0, v_a_3371_);
v___x_3376_ = v_reuseFailAlloc_3377_;
goto v_reusejp_3375_;
}
v_reusejp_3375_:
{
return v___x_3376_;
}
}
}
}
else
{
lean_object* v_a_3379_; lean_object* v___x_3381_; uint8_t v_isShared_3382_; uint8_t v_isSharedCheck_3386_; 
lean_del_object(v___x_3153_);
lean_dec(v___x_3133_);
lean_dec(v_x_3119_);
v_a_3379_ = lean_ctor_get(v___x_3176_, 0);
v_isSharedCheck_3386_ = !lean_is_exclusive(v___x_3176_);
if (v_isSharedCheck_3386_ == 0)
{
v___x_3381_ = v___x_3176_;
v_isShared_3382_ = v_isSharedCheck_3386_;
goto v_resetjp_3380_;
}
else
{
lean_inc(v_a_3379_);
lean_dec(v___x_3176_);
v___x_3381_ = lean_box(0);
v_isShared_3382_ = v_isSharedCheck_3386_;
goto v_resetjp_3380_;
}
v_resetjp_3380_:
{
lean_object* v___x_3384_; 
if (v_isShared_3382_ == 0)
{
v___x_3384_ = v___x_3381_;
goto v_reusejp_3383_;
}
else
{
lean_object* v_reuseFailAlloc_3385_; 
v_reuseFailAlloc_3385_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3385_, 0, v_a_3379_);
v___x_3384_ = v_reuseFailAlloc_3385_;
goto v_reusejp_3383_;
}
v_reusejp_3383_:
{
return v___x_3384_;
}
}
}
}
else
{
lean_object* v_a_3387_; lean_object* v___x_3389_; uint8_t v_isShared_3390_; uint8_t v_isSharedCheck_3394_; 
lean_del_object(v___x_3153_);
lean_dec(v___x_3133_);
lean_dec(v_x_3119_);
v_a_3387_ = lean_ctor_get(v___x_3174_, 0);
v_isSharedCheck_3394_ = !lean_is_exclusive(v___x_3174_);
if (v_isSharedCheck_3394_ == 0)
{
v___x_3389_ = v___x_3174_;
v_isShared_3390_ = v_isSharedCheck_3394_;
goto v_resetjp_3388_;
}
else
{
lean_inc(v_a_3387_);
lean_dec(v___x_3174_);
v___x_3389_ = lean_box(0);
v_isShared_3390_ = v_isSharedCheck_3394_;
goto v_resetjp_3388_;
}
v_resetjp_3388_:
{
lean_object* v___x_3392_; 
if (v_isShared_3390_ == 0)
{
v___x_3392_ = v___x_3389_;
goto v_reusejp_3391_;
}
else
{
lean_object* v_reuseFailAlloc_3393_; 
v_reuseFailAlloc_3393_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3393_, 0, v_a_3387_);
v___x_3392_ = v_reuseFailAlloc_3393_;
goto v_reusejp_3391_;
}
v_reusejp_3391_:
{
return v___x_3392_;
}
}
}
}
else
{
lean_object* v_a_3395_; lean_object* v___x_3397_; uint8_t v_isShared_3398_; uint8_t v_isSharedCheck_3402_; 
lean_dec(v_a_3163_);
lean_del_object(v___x_3153_);
lean_dec(v___x_3133_);
lean_dec(v_x_3119_);
v_a_3395_ = lean_ctor_get(v___x_3172_, 0);
v_isSharedCheck_3402_ = !lean_is_exclusive(v___x_3172_);
if (v_isSharedCheck_3402_ == 0)
{
v___x_3397_ = v___x_3172_;
v_isShared_3398_ = v_isSharedCheck_3402_;
goto v_resetjp_3396_;
}
else
{
lean_inc(v_a_3395_);
lean_dec(v___x_3172_);
v___x_3397_ = lean_box(0);
v_isShared_3398_ = v_isSharedCheck_3402_;
goto v_resetjp_3396_;
}
v_resetjp_3396_:
{
lean_object* v___x_3400_; 
if (v_isShared_3398_ == 0)
{
v___x_3400_ = v___x_3397_;
goto v_reusejp_3399_;
}
else
{
lean_object* v_reuseFailAlloc_3401_; 
v_reuseFailAlloc_3401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3401_, 0, v_a_3395_);
v___x_3400_ = v_reuseFailAlloc_3401_;
goto v_reusejp_3399_;
}
v_reusejp_3399_:
{
return v___x_3400_;
}
}
}
}
else
{
lean_object* v_a_3403_; lean_object* v___x_3405_; uint8_t v_isShared_3406_; uint8_t v_isSharedCheck_3410_; 
lean_dec(v___x_3165_);
lean_dec(v_a_3163_);
lean_del_object(v___x_3153_);
lean_dec(v___x_3133_);
lean_dec(v_x_3119_);
v_a_3403_ = lean_ctor_get(v___x_3166_, 0);
v_isSharedCheck_3410_ = !lean_is_exclusive(v___x_3166_);
if (v_isSharedCheck_3410_ == 0)
{
v___x_3405_ = v___x_3166_;
v_isShared_3406_ = v_isSharedCheck_3410_;
goto v_resetjp_3404_;
}
else
{
lean_inc(v_a_3403_);
lean_dec(v___x_3166_);
v___x_3405_ = lean_box(0);
v_isShared_3406_ = v_isSharedCheck_3410_;
goto v_resetjp_3404_;
}
v_resetjp_3404_:
{
lean_object* v___x_3408_; 
if (v_isShared_3406_ == 0)
{
v___x_3408_ = v___x_3405_;
goto v_reusejp_3407_;
}
else
{
lean_object* v_reuseFailAlloc_3409_; 
v_reuseFailAlloc_3409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3409_, 0, v_a_3403_);
v___x_3408_ = v_reuseFailAlloc_3409_;
goto v_reusejp_3407_;
}
v_reusejp_3407_:
{
return v___x_3408_;
}
}
}
}
else
{
lean_object* v_a_3411_; lean_object* v___x_3413_; uint8_t v_isShared_3414_; uint8_t v_isSharedCheck_3418_; 
lean_del_object(v___x_3153_);
lean_dec(v_snd_3151_);
lean_dec(v___x_3133_);
lean_dec(v_x_3119_);
v_a_3411_ = lean_ctor_get(v___x_3162_, 0);
v_isSharedCheck_3418_ = !lean_is_exclusive(v___x_3162_);
if (v_isSharedCheck_3418_ == 0)
{
v___x_3413_ = v___x_3162_;
v_isShared_3414_ = v_isSharedCheck_3418_;
goto v_resetjp_3412_;
}
else
{
lean_inc(v_a_3411_);
lean_dec(v___x_3162_);
v___x_3413_ = lean_box(0);
v_isShared_3414_ = v_isSharedCheck_3418_;
goto v_resetjp_3412_;
}
v_resetjp_3412_:
{
lean_object* v___x_3416_; 
if (v_isShared_3414_ == 0)
{
v___x_3416_ = v___x_3413_;
goto v_reusejp_3415_;
}
else
{
lean_object* v_reuseFailAlloc_3417_; 
v_reuseFailAlloc_3417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3417_, 0, v_a_3411_);
v___x_3416_ = v_reuseFailAlloc_3417_;
goto v_reusejp_3415_;
}
v_reusejp_3415_:
{
return v___x_3416_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3420_; lean_object* v___x_3422_; uint8_t v_isShared_3423_; uint8_t v_isSharedCheck_3427_; 
lean_dec(v___x_3133_);
lean_dec(v_x_3119_);
v_a_3420_ = lean_ctor_get(v___x_3140_, 0);
v_isSharedCheck_3427_ = !lean_is_exclusive(v___x_3140_);
if (v_isSharedCheck_3427_ == 0)
{
v___x_3422_ = v___x_3140_;
v_isShared_3423_ = v_isSharedCheck_3427_;
goto v_resetjp_3421_;
}
else
{
lean_inc(v_a_3420_);
lean_dec(v___x_3140_);
v___x_3422_ = lean_box(0);
v_isShared_3423_ = v_isSharedCheck_3427_;
goto v_resetjp_3421_;
}
v_resetjp_3421_:
{
lean_object* v___x_3425_; 
if (v_isShared_3423_ == 0)
{
v___x_3425_ = v___x_3422_;
goto v_reusejp_3424_;
}
else
{
lean_object* v_reuseFailAlloc_3426_; 
v_reuseFailAlloc_3426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3426_, 0, v_a_3420_);
v___x_3425_ = v_reuseFailAlloc_3426_;
goto v_reusejp_3424_;
}
v_reusejp_3424_:
{
return v___x_3425_;
}
}
}
}
else
{
lean_object* v_a_3428_; lean_object* v___x_3430_; uint8_t v_isShared_3431_; uint8_t v_isSharedCheck_3435_; 
lean_dec(v___x_3133_);
lean_dec(v_x_3119_);
v_a_3428_ = lean_ctor_get(v___x_3138_, 0);
v_isSharedCheck_3435_ = !lean_is_exclusive(v___x_3138_);
if (v_isSharedCheck_3435_ == 0)
{
v___x_3430_ = v___x_3138_;
v_isShared_3431_ = v_isSharedCheck_3435_;
goto v_resetjp_3429_;
}
else
{
lean_inc(v_a_3428_);
lean_dec(v___x_3138_);
v___x_3430_ = lean_box(0);
v_isShared_3431_ = v_isSharedCheck_3435_;
goto v_resetjp_3429_;
}
v_resetjp_3429_:
{
lean_object* v___x_3433_; 
if (v_isShared_3431_ == 0)
{
v___x_3433_ = v___x_3430_;
goto v_reusejp_3432_;
}
else
{
lean_object* v_reuseFailAlloc_3434_; 
v_reuseFailAlloc_3434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3434_, 0, v_a_3428_);
v___x_3433_ = v_reuseFailAlloc_3434_;
goto v_reusejp_3432_;
}
v_reusejp_3432_:
{
return v___x_3433_;
}
}
}
}
else
{
lean_object* v_a_3436_; lean_object* v___x_3438_; uint8_t v_isShared_3439_; uint8_t v_isSharedCheck_3443_; 
lean_dec(v___x_3133_);
lean_dec(v_x_3119_);
v_a_3436_ = lean_ctor_get(v___x_3136_, 0);
v_isSharedCheck_3443_ = !lean_is_exclusive(v___x_3136_);
if (v_isSharedCheck_3443_ == 0)
{
v___x_3438_ = v___x_3136_;
v_isShared_3439_ = v_isSharedCheck_3443_;
goto v_resetjp_3437_;
}
else
{
lean_inc(v_a_3436_);
lean_dec(v___x_3136_);
v___x_3438_ = lean_box(0);
v_isShared_3439_ = v_isSharedCheck_3443_;
goto v_resetjp_3437_;
}
v_resetjp_3437_:
{
lean_object* v___x_3441_; 
if (v_isShared_3439_ == 0)
{
v___x_3441_ = v___x_3438_;
goto v_reusejp_3440_;
}
else
{
lean_object* v_reuseFailAlloc_3442_; 
v_reuseFailAlloc_3442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3442_, 0, v_a_3436_);
v___x_3441_ = v_reuseFailAlloc_3442_;
goto v_reusejp_3440_;
}
v_reusejp_3440_:
{
return v___x_3441_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___boxed(lean_object* v_x_3444_, lean_object* v_a_3445_, lean_object* v_a_3446_, lean_object* v_a_3447_, lean_object* v_a_3448_, lean_object* v_a_3449_, lean_object* v_a_3450_, lean_object* v_a_3451_, lean_object* v_a_3452_, lean_object* v_a_3453_){
_start:
{
lean_object* v_res_3454_; 
v_res_3454_ = lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1(v_x_3444_, v_a_3445_, v_a_3446_, v_a_3447_, v_a_3448_, v_a_3449_, v_a_3450_, v_a_3451_, v_a_3452_);
lean_dec(v_a_3452_);
lean_dec_ref(v_a_3451_);
lean_dec(v_a_3450_);
lean_dec_ref(v_a_3449_);
lean_dec(v_a_3448_);
lean_dec_ref(v_a_3447_);
lean_dec(v_a_3446_);
lean_dec_ref(v_a_3445_);
return v_res_3454_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in____1(lean_object* v_x_3480_, lean_object* v_a_3481_, lean_object* v_a_3482_, lean_object* v_a_3483_, lean_object* v_a_3484_, lean_object* v_a_3485_, lean_object* v_a_3486_, lean_object* v_a_3487_, lean_object* v_a_3488_){
_start:
{
lean_object* v___x_3490_; uint8_t v___x_3491_; 
v___x_3490_ = ((lean_object*)(lp_Props2Theories_tacticIntro__exists__unique__in___00__closed__1));
lean_inc(v_x_3480_);
v___x_3491_ = l_Lean_Syntax_isOfKind(v_x_3480_, v___x_3490_);
if (v___x_3491_ == 0)
{
lean_object* v___x_3492_; 
lean_dec(v_x_3480_);
v___x_3492_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__0___redArg();
return v___x_3492_;
}
else
{
lean_object* v_ref_3493_; lean_object* v_quotContext_3494_; lean_object* v_currMacroScope_3495_; lean_object* v___x_3496_; lean_object* v___x_3497_; uint8_t v___x_3498_; lean_object* v___x_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; lean_object* v___x_3502_; lean_object* v___x_3503_; lean_object* v___x_3504_; lean_object* v___x_3505_; lean_object* v___x_3506_; lean_object* v___x_3507_; lean_object* v___x_3508_; lean_object* v___x_3509_; lean_object* v___x_3510_; lean_object* v___x_3511_; lean_object* v___x_3512_; lean_object* v___x_3513_; lean_object* v___x_3514_; lean_object* v___x_3515_; lean_object* v___x_3516_; lean_object* v___x_3517_; lean_object* v___x_3518_; lean_object* v___x_3519_; lean_object* v___x_3520_; lean_object* v___x_3521_; lean_object* v___x_3522_; lean_object* v___x_3523_; lean_object* v___x_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; lean_object* v___x_3528_; lean_object* v___x_3529_; lean_object* v___x_3530_; lean_object* v___x_3531_; lean_object* v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v___x_3537_; lean_object* v___x_3538_; lean_object* v___x_3539_; lean_object* v___x_3540_; lean_object* v___x_3541_; lean_object* v___x_3542_; lean_object* v___x_3543_; lean_object* v___x_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; lean_object* v___x_3548_; lean_object* v___x_3549_; lean_object* v___x_3550_; lean_object* v___x_3551_; lean_object* v___x_3552_; lean_object* v___x_3553_; lean_object* v___x_3554_; lean_object* v___x_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; lean_object* v___x_3560_; lean_object* v___x_3561_; lean_object* v___x_3562_; lean_object* v___x_3563_; lean_object* v___x_3564_; lean_object* v___x_3565_; lean_object* v___x_3566_; lean_object* v___x_3567_; lean_object* v___x_3568_; lean_object* v___x_3569_; lean_object* v___x_3570_; lean_object* v___x_3571_; lean_object* v___x_3572_; lean_object* v___x_3573_; lean_object* v___x_3574_; lean_object* v___x_3575_; lean_object* v___x_3576_; lean_object* v___x_3577_; lean_object* v___x_3578_; lean_object* v___x_3579_; lean_object* v___x_3580_; lean_object* v___x_3581_; lean_object* v___x_3582_; lean_object* v___x_3583_; lean_object* v___x_3584_; lean_object* v___x_3585_; lean_object* v___x_3586_; lean_object* v___x_3587_; lean_object* v___x_3588_; lean_object* v___x_3589_; lean_object* v___x_3590_; lean_object* v___x_3591_; lean_object* v___x_3592_; lean_object* v___x_3593_; lean_object* v___x_3594_; lean_object* v___x_3595_; 
v_ref_3493_ = lean_ctor_get(v_a_3487_, 5);
v_quotContext_3494_ = lean_ctor_get(v_a_3487_, 10);
v_currMacroScope_3495_ = lean_ctor_get(v_a_3487_, 11);
v___x_3496_ = lean_unsigned_to_nat(1u);
v___x_3497_ = l_Lean_Syntax_getArg(v_x_3480_, v___x_3496_);
lean_dec(v_x_3480_);
v___x_3498_ = 0;
v___x_3499_ = l_Lean_SourceInfo_fromRef(v_ref_3493_, v___x_3498_);
v___x_3500_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__1));
v___x_3501_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__11));
v___x_3502_ = ((lean_object*)(lp_Props2Theories_delabNotMem___closed__6));
v___x_3503_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in____1___closed__1));
v___x_3504_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in____1___closed__2));
lean_inc_n(v___x_3499_, 44);
v___x_3505_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3505_, 0, v___x_3499_);
lean_ctor_set(v___x_3505_, 1, v___x_3504_);
lean_inc(v___x_3497_);
lean_inc_ref(v___x_3505_);
v___x_3506_ = l_Lean_Syntax_node2(v___x_3499_, v___x_3503_, v___x_3505_, v___x_3497_);
v___x_3507_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in____1___closed__4));
v___x_3508_ = l_Lean_Syntax_node2(v___x_3499_, v___x_3507_, v___x_3505_, v___x_3497_);
v___x_3509_ = l_Lean_Syntax_node2(v___x_3499_, v___x_3502_, v___x_3506_, v___x_3508_);
v___x_3510_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__4));
v___x_3511_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3511_, 0, v___x_3499_);
lean_ctor_set(v___x_3511_, 1, v___x_3510_);
v___x_3512_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__6));
v___x_3513_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__7));
v___x_3514_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3514_, 0, v___x_3499_);
lean_ctor_set(v___x_3514_, 1, v___x_3513_);
v___x_3515_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__9));
v___x_3516_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__11));
v___x_3517_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__12));
v___x_3518_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__13));
v___x_3519_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3519_, 0, v___x_3499_);
lean_ctor_set(v___x_3519_, 1, v___x_3517_);
v___x_3520_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__15));
v___x_3521_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__17));
v___x_3522_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__19));
v___x_3523_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__7));
v___x_3524_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3524_, 0, v___x_3499_);
lean_ctor_set(v___x_3524_, 1, v___x_3523_);
v___x_3525_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__21, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__21_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__21);
v___x_3526_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__22));
lean_inc_n(v_currMacroScope_3495_, 6);
lean_inc_n(v_quotContext_3494_, 6);
v___x_3527_ = l_Lean_addMacroScope(v_quotContext_3494_, v___x_3526_, v_currMacroScope_3495_);
v___x_3528_ = lean_box(0);
v___x_3529_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3529_, 0, v___x_3499_);
lean_ctor_set(v___x_3529_, 1, v___x_3525_);
lean_ctor_set(v___x_3529_, 2, v___x_3527_);
lean_ctor_set(v___x_3529_, 3, v___x_3528_);
v___x_3530_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__23));
v___x_3531_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3531_, 0, v___x_3499_);
lean_ctor_set(v___x_3531_, 1, v___x_3530_);
v___x_3532_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__25));
v___x_3533_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__26));
v___x_3534_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3534_, 0, v___x_3499_);
lean_ctor_set(v___x_3534_, 1, v___x_3533_);
v___x_3535_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19, &lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19);
v___x_3536_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3536_, 0, v___x_3499_);
lean_ctor_set(v___x_3536_, 1, v___x_3501_);
lean_ctor_set(v___x_3536_, 2, v___x_3535_);
v___x_3537_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__28));
v___x_3538_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__30));
v___x_3539_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__32));
v___x_3540_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__34, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__34_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__34);
v___x_3541_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__35));
v___x_3542_ = l_Lean_addMacroScope(v_quotContext_3494_, v___x_3541_, v_currMacroScope_3495_);
v___x_3543_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3543_, 0, v___x_3499_);
lean_ctor_set(v___x_3543_, 1, v___x_3540_);
lean_ctor_set(v___x_3543_, 2, v___x_3542_);
lean_ctor_set(v___x_3543_, 3, v___x_3528_);
lean_inc_ref_n(v___x_3536_, 15);
v___x_3544_ = l_Lean_Syntax_node2(v___x_3499_, v___x_3539_, v___x_3543_, v___x_3536_);
v___x_3545_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__37));
v___x_3546_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__39, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__39_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__39);
v___x_3547_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__40));
v___x_3548_ = l_Lean_addMacroScope(v_quotContext_3494_, v___x_3547_, v_currMacroScope_3495_);
v___x_3549_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__44));
v___x_3550_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3550_, 0, v___x_3499_);
lean_ctor_set(v___x_3550_, 1, v___x_3546_);
lean_ctor_set(v___x_3550_, 2, v___x_3548_);
lean_ctor_set(v___x_3550_, 3, v___x_3549_);
lean_inc_ref_n(v___x_3531_, 2);
v___x_3551_ = l_Lean_Syntax_node3(v___x_3499_, v___x_3545_, v___x_3531_, v___x_3536_, v___x_3550_);
v___x_3552_ = l_Lean_Syntax_node3(v___x_3499_, v___x_3501_, v___x_3536_, v___x_3536_, v___x_3551_);
v___x_3553_ = l_Lean_Syntax_node2(v___x_3499_, v___x_3538_, v___x_3544_, v___x_3552_);
v___x_3554_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__23));
v___x_3555_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3555_, 0, v___x_3499_);
lean_ctor_set(v___x_3555_, 1, v___x_3554_);
v___x_3556_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__46, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__46_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__46);
v___x_3557_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__47));
v___x_3558_ = l_Lean_addMacroScope(v_quotContext_3494_, v___x_3557_, v_currMacroScope_3495_);
v___x_3559_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3559_, 0, v___x_3499_);
lean_ctor_set(v___x_3559_, 1, v___x_3556_);
lean_ctor_set(v___x_3559_, 2, v___x_3558_);
lean_ctor_set(v___x_3559_, 3, v___x_3528_);
v___x_3560_ = l_Lean_Syntax_node2(v___x_3499_, v___x_3539_, v___x_3559_, v___x_3536_);
v___x_3561_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__49, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__49_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__49);
v___x_3562_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__50));
v___x_3563_ = l_Lean_addMacroScope(v_quotContext_3494_, v___x_3562_, v_currMacroScope_3495_);
v___x_3564_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__53));
v___x_3565_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3565_, 0, v___x_3499_);
lean_ctor_set(v___x_3565_, 1, v___x_3561_);
lean_ctor_set(v___x_3565_, 2, v___x_3563_);
lean_ctor_set(v___x_3565_, 3, v___x_3564_);
v___x_3566_ = l_Lean_Syntax_node3(v___x_3499_, v___x_3545_, v___x_3531_, v___x_3536_, v___x_3565_);
v___x_3567_ = l_Lean_Syntax_node3(v___x_3499_, v___x_3501_, v___x_3536_, v___x_3536_, v___x_3566_);
lean_inc(v___x_3567_);
v___x_3568_ = l_Lean_Syntax_node2(v___x_3499_, v___x_3538_, v___x_3560_, v___x_3567_);
v___x_3569_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__55, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__55_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__55);
v___x_3570_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__56));
v___x_3571_ = l_Lean_addMacroScope(v_quotContext_3494_, v___x_3570_, v_currMacroScope_3495_);
v___x_3572_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3572_, 0, v___x_3499_);
lean_ctor_set(v___x_3572_, 1, v___x_3569_);
lean_ctor_set(v___x_3572_, 2, v___x_3571_);
lean_ctor_set(v___x_3572_, 3, v___x_3528_);
v___x_3573_ = l_Lean_Syntax_node2(v___x_3499_, v___x_3539_, v___x_3572_, v___x_3536_);
v___x_3574_ = l_Lean_Syntax_node2(v___x_3499_, v___x_3538_, v___x_3573_, v___x_3567_);
lean_inc_ref(v___x_3555_);
v___x_3575_ = l_Lean_Syntax_node5(v___x_3499_, v___x_3501_, v___x_3553_, v___x_3555_, v___x_3568_, v___x_3555_, v___x_3574_);
v___x_3576_ = l_Lean_Syntax_node1(v___x_3499_, v___x_3537_, v___x_3575_);
v___x_3577_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__58));
v___x_3578_ = l_Lean_Syntax_node1(v___x_3499_, v___x_3577_, v___x_3536_);
v___x_3579_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__59));
v___x_3580_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3580_, 0, v___x_3499_);
lean_ctor_set(v___x_3580_, 1, v___x_3579_);
v___x_3581_ = l_Lean_Syntax_node6(v___x_3499_, v___x_3532_, v___x_3534_, v___x_3536_, v___x_3576_, v___x_3578_, v___x_3536_, v___x_3580_);
v___x_3582_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__49));
v___x_3583_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3583_, 0, v___x_3499_);
lean_ctor_set(v___x_3583_, 1, v___x_3582_);
v___x_3584_ = l_Lean_Syntax_node5(v___x_3499_, v___x_3522_, v___x_3524_, v___x_3529_, v___x_3531_, v___x_3581_, v___x_3583_);
v___x_3585_ = l_Lean_Syntax_node1(v___x_3499_, v___x_3521_, v___x_3584_);
v___x_3586_ = l_Lean_Syntax_node1(v___x_3499_, v___x_3501_, v___x_3585_);
v___x_3587_ = l_Lean_Syntax_node1(v___x_3499_, v___x_3520_, v___x_3586_);
v___x_3588_ = l_Lean_Syntax_node6(v___x_3499_, v___x_3518_, v___x_3519_, v___x_3587_, v___x_3536_, v___x_3536_, v___x_3536_, v___x_3536_);
v___x_3589_ = l_Lean_Syntax_node1(v___x_3499_, v___x_3501_, v___x_3588_);
v___x_3590_ = l_Lean_Syntax_node1(v___x_3499_, v___x_3516_, v___x_3589_);
v___x_3591_ = l_Lean_Syntax_node1(v___x_3499_, v___x_3515_, v___x_3590_);
v___x_3592_ = l_Lean_Syntax_node2(v___x_3499_, v___x_3512_, v___x_3514_, v___x_3591_);
v___x_3593_ = l_Lean_Syntax_node3(v___x_3499_, v___x_3501_, v___x_3509_, v___x_3511_, v___x_3592_);
v___x_3594_ = l_Lean_Syntax_node1(v___x_3499_, v___x_3500_, v___x_3593_);
v___x_3595_ = l_Lean_Elab_Tactic_evalTactic(v___x_3594_, v_a_3481_, v_a_3482_, v_a_3483_, v_a_3484_, v_a_3485_, v_a_3486_, v_a_3487_, v_a_3488_);
return v___x_3595_;
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in____1___boxed(lean_object* v_x_3596_, lean_object* v_a_3597_, lean_object* v_a_3598_, lean_object* v_a_3599_, lean_object* v_a_3600_, lean_object* v_a_3601_, lean_object* v_a_3602_, lean_object* v_a_3603_, lean_object* v_a_3604_, lean_object* v_a_3605_){
_start:
{
lean_object* v_res_3606_; 
v_res_3606_ = lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in____1(v_x_3596_, v_a_3597_, v_a_3598_, v_a_3599_, v_a_3600_, v_a_3601_, v_a_3602_, v_a_3603_, v_a_3604_);
lean_dec(v_a_3604_);
lean_dec_ref(v_a_3603_);
lean_dec(v_a_3602_);
lean_dec_ref(v_a_3601_);
lean_dec(v_a_3600_);
lean_dec_ref(v_a_3599_);
lean_dec(v_a_3598_);
lean_dec_ref(v_a_3597_);
return v_res_3606_;
}
}
static lean_object* _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in_____x2c___x2c___x2c____1___closed__1(void){
_start:
{
lean_object* v___x_3648_; lean_object* v___x_3649_; 
v___x_3648_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in_____x2c___x2c___x2c____1___closed__0));
v___x_3649_ = l_String_toRawSubstring_x27(v___x_3648_);
return v___x_3649_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in_____x2c___x2c___x2c____1(lean_object* v_x_3656_, lean_object* v_a_3657_, lean_object* v_a_3658_, lean_object* v_a_3659_, lean_object* v_a_3660_, lean_object* v_a_3661_, lean_object* v_a_3662_, lean_object* v_a_3663_, lean_object* v_a_3664_){
_start:
{
lean_object* v___x_3666_; uint8_t v___x_3667_; 
v___x_3666_ = ((lean_object*)(lp_Props2Theories_tacticIntro__exists__unique__in_____x2c___x2c___x2c___00__closed__1));
lean_inc(v_x_3656_);
v___x_3667_ = l_Lean_Syntax_isOfKind(v_x_3656_, v___x_3666_);
if (v___x_3667_ == 0)
{
lean_object* v___x_3668_; 
lean_dec(v_x_3656_);
v___x_3668_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__0___redArg();
return v___x_3668_;
}
else
{
lean_object* v_ref_3669_; lean_object* v_quotContext_3670_; lean_object* v_currMacroScope_3671_; lean_object* v___x_3672_; lean_object* v___x_3673_; lean_object* v___x_3674_; lean_object* v___x_3675_; lean_object* v___x_3676_; lean_object* v___x_3677_; lean_object* v___x_3678_; lean_object* v___x_3679_; uint8_t v___x_3680_; lean_object* v___x_3681_; lean_object* v___x_3682_; lean_object* v___x_3683_; lean_object* v___x_3684_; lean_object* v___x_3685_; lean_object* v___x_3686_; lean_object* v___x_3687_; lean_object* v___x_3688_; lean_object* v___x_3689_; lean_object* v___x_3690_; lean_object* v___x_3691_; lean_object* v___x_3692_; lean_object* v___x_3693_; lean_object* v___x_3694_; lean_object* v___x_3695_; lean_object* v___x_3696_; lean_object* v___x_3697_; lean_object* v___x_3698_; lean_object* v___x_3699_; lean_object* v___x_3700_; lean_object* v___x_3701_; lean_object* v___x_3702_; lean_object* v___x_3703_; lean_object* v___x_3704_; lean_object* v___x_3705_; lean_object* v___x_3706_; lean_object* v___x_3707_; lean_object* v___x_3708_; lean_object* v___x_3709_; 
v_ref_3669_ = lean_ctor_get(v_a_3663_, 5);
v_quotContext_3670_ = lean_ctor_get(v_a_3663_, 10);
v_currMacroScope_3671_ = lean_ctor_get(v_a_3663_, 11);
v___x_3672_ = lean_unsigned_to_nat(1u);
v___x_3673_ = l_Lean_Syntax_getArg(v_x_3656_, v___x_3672_);
v___x_3674_ = lean_unsigned_to_nat(3u);
v___x_3675_ = l_Lean_Syntax_getArg(v_x_3656_, v___x_3674_);
v___x_3676_ = lean_unsigned_to_nat(5u);
v___x_3677_ = l_Lean_Syntax_getArg(v_x_3656_, v___x_3676_);
v___x_3678_ = lean_unsigned_to_nat(7u);
v___x_3679_ = l_Lean_Syntax_getArg(v_x_3656_, v___x_3678_);
lean_dec(v_x_3656_);
v___x_3680_ = 0;
v___x_3681_ = l_Lean_SourceInfo_fromRef(v_ref_3669_, v___x_3680_);
v___x_3682_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__1));
v___x_3683_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__11));
v___x_3684_ = ((lean_object*)(lp_Props2Theories_tacticIntro__exists__unique__in___00__closed__1));
v___x_3685_ = ((lean_object*)(lp_Props2Theories_tacticIntro__exists__unique__in___00__closed__2));
lean_inc_n(v___x_3681_, 12);
v___x_3686_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3686_, 0, v___x_3681_);
lean_ctor_set(v___x_3686_, 1, v___x_3685_);
v___x_3687_ = l_Lean_Syntax_node2(v___x_3681_, v___x_3684_, v___x_3686_, v___x_3673_);
v___x_3688_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__4));
v___x_3689_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3689_, 0, v___x_3681_);
lean_ctor_set(v___x_3689_, 1, v___x_3688_);
v___x_3690_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__6));
v___x_3691_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__7));
v___x_3692_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3692_, 0, v___x_3681_);
lean_ctor_set(v___x_3692_, 1, v___x_3691_);
v___x_3693_ = l_Lean_Syntax_node1(v___x_3681_, v___x_3690_, v___x_3692_);
v___x_3694_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in_____x2c___x2c____1___closed__0));
v___x_3695_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in_____x2c___x2c____1___closed__1));
v___x_3696_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3696_, 0, v___x_3681_);
lean_ctor_set(v___x_3696_, 1, v___x_3694_);
v___x_3697_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__4));
v___x_3698_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in_____x2c___x2c___x2c____1___closed__1, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in_____x2c___x2c___x2c____1___closed__1_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in_____x2c___x2c___x2c____1___closed__1);
v___x_3699_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___closed__1));
lean_inc(v_currMacroScope_3671_);
lean_inc(v_quotContext_3670_);
v___x_3700_ = l_Lean_addMacroScope(v_quotContext_3670_, v___x_3699_, v_currMacroScope_3671_);
v___x_3701_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in_____x2c___x2c___x2c____1___closed__3));
v___x_3702_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3702_, 0, v___x_3681_);
lean_ctor_set(v___x_3702_, 1, v___x_3698_);
lean_ctor_set(v___x_3702_, 2, v___x_3700_);
lean_ctor_set(v___x_3702_, 3, v___x_3701_);
v___x_3703_ = l_Lean_Syntax_node2(v___x_3681_, v___x_3683_, v___x_3675_, v___x_3677_);
v___x_3704_ = l_Lean_Syntax_node2(v___x_3681_, v___x_3697_, v___x_3702_, v___x_3703_);
lean_inc_ref(v___x_3696_);
v___x_3705_ = l_Lean_Syntax_node2(v___x_3681_, v___x_3695_, v___x_3696_, v___x_3704_);
v___x_3706_ = l_Lean_Syntax_node2(v___x_3681_, v___x_3695_, v___x_3696_, v___x_3679_);
lean_inc_ref_n(v___x_3689_, 2);
v___x_3707_ = l_Lean_Syntax_node7(v___x_3681_, v___x_3683_, v___x_3687_, v___x_3689_, v___x_3693_, v___x_3689_, v___x_3705_, v___x_3689_, v___x_3706_);
v___x_3708_ = l_Lean_Syntax_node1(v___x_3681_, v___x_3682_, v___x_3707_);
v___x_3709_ = l_Lean_Elab_Tactic_evalTactic(v___x_3708_, v_a_3657_, v_a_3658_, v_a_3659_, v_a_3660_, v_a_3661_, v_a_3662_, v_a_3663_, v_a_3664_);
return v___x_3709_;
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in_____x2c___x2c___x2c____1___boxed(lean_object* v_x_3710_, lean_object* v_a_3711_, lean_object* v_a_3712_, lean_object* v_a_3713_, lean_object* v_a_3714_, lean_object* v_a_3715_, lean_object* v_a_3716_, lean_object* v_a_3717_, lean_object* v_a_3718_, lean_object* v_a_3719_){
_start:
{
lean_object* v_res_3720_; 
v_res_3720_ = lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in_____x2c___x2c___x2c____1(v_x_3710_, v_a_3711_, v_a_3712_, v_a_3713_, v_a_3714_, v_a_3715_, v_a_3716_, v_a_3717_, v_a_3718_);
lean_dec(v_a_3718_);
lean_dec_ref(v_a_3717_);
lean_dec(v_a_3716_);
lean_dec_ref(v_a_3715_);
lean_dec(v_a_3714_);
lean_dec_ref(v_a_3713_);
lean_dec(v_a_3712_);
lean_dec_ref(v_a_3711_);
return v_res_3720_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c____1(lean_object* v_x_3769_, lean_object* v_a_3770_, lean_object* v_a_3771_, lean_object* v_a_3772_, lean_object* v_a_3773_, lean_object* v_a_3774_, lean_object* v_a_3775_, lean_object* v_a_3776_, lean_object* v_a_3777_){
_start:
{
lean_object* v___x_3779_; uint8_t v___x_3780_; 
v___x_3779_ = ((lean_object*)(lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__1));
lean_inc(v_x_3769_);
v___x_3780_ = l_Lean_Syntax_isOfKind(v_x_3769_, v___x_3779_);
if (v___x_3780_ == 0)
{
lean_object* v___x_3781_; 
lean_dec(v_x_3769_);
v___x_3781_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__0___redArg();
return v___x_3781_;
}
else
{
lean_object* v___x_3782_; lean_object* v___x_3783_; lean_object* v___x_3784_; uint8_t v___x_3785_; lean_object* v___x_3786_; 
v___x_3782_ = lean_unsigned_to_nat(1u);
v___x_3783_ = l_Lean_Syntax_getArg(v_x_3769_, v___x_3782_);
v___x_3784_ = lean_box(0);
v___x_3785_ = 0;
v___x_3786_ = l_Lean_Elab_Tactic_elabTerm(v___x_3783_, v___x_3784_, v___x_3785_, v_a_3770_, v_a_3771_, v_a_3772_, v_a_3773_, v_a_3774_, v_a_3775_, v_a_3776_, v_a_3777_);
if (lean_obj_tag(v___x_3786_) == 0)
{
lean_object* v_a_3787_; lean_object* v___x_3788_; lean_object* v___x_3789_; lean_object* v___x_3790_; 
v_a_3787_ = lean_ctor_get(v___x_3786_, 0);
lean_inc(v_a_3787_);
lean_dec_ref(v___x_3786_);
v___x_3788_ = lean_unsigned_to_nat(3u);
v___x_3789_ = l_Lean_Syntax_getArg(v_x_3769_, v___x_3788_);
v___x_3790_ = l_Lean_Elab_Tactic_elabTerm(v___x_3789_, v___x_3784_, v___x_3785_, v_a_3770_, v_a_3771_, v_a_3772_, v_a_3773_, v_a_3774_, v_a_3775_, v_a_3776_, v_a_3777_);
if (lean_obj_tag(v___x_3790_) == 0)
{
lean_object* v_a_3791_; lean_object* v___x_3792_; lean_object* v___x_3793_; lean_object* v___x_3794_; 
v_a_3791_ = lean_ctor_get(v___x_3790_, 0);
lean_inc(v_a_3791_);
lean_dec_ref(v___x_3790_);
v___x_3792_ = lean_unsigned_to_nat(5u);
v___x_3793_ = l_Lean_Syntax_getArg(v_x_3769_, v___x_3792_);
v___x_3794_ = l_Lean_Elab_Tactic_elabTerm(v___x_3793_, v___x_3784_, v___x_3785_, v_a_3770_, v_a_3771_, v_a_3772_, v_a_3773_, v_a_3774_, v_a_3775_, v_a_3776_, v_a_3777_);
if (lean_obj_tag(v___x_3794_) == 0)
{
lean_object* v_a_3795_; lean_object* v___x_3796_; lean_object* v___x_3797_; lean_object* v___x_3798_; 
v_a_3795_ = lean_ctor_get(v___x_3794_, 0);
lean_inc(v_a_3795_);
lean_dec_ref(v___x_3794_);
v___x_3796_ = lean_unsigned_to_nat(7u);
v___x_3797_ = l_Lean_Syntax_getArg(v_x_3769_, v___x_3796_);
v___x_3798_ = l_Lean_Elab_Tactic_elabTerm(v___x_3797_, v___x_3784_, v___x_3785_, v_a_3770_, v_a_3771_, v_a_3772_, v_a_3773_, v_a_3774_, v_a_3775_, v_a_3776_, v_a_3777_);
if (lean_obj_tag(v___x_3798_) == 0)
{
lean_object* v_a_3799_; lean_object* v___x_3800_; lean_object* v___x_3801_; lean_object* v___x_3802_; lean_object* v___x_3803_; lean_object* v___x_3804_; lean_object* v___x_3805_; 
v_a_3799_ = lean_ctor_get(v___x_3798_, 0);
lean_inc(v_a_3799_);
lean_dec_ref(v___x_3798_);
v___x_3800_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___closed__1));
v___x_3801_ = lean_unsigned_to_nat(2u);
v___x_3802_ = lean_mk_empty_array_with_capacity(v___x_3801_);
lean_inc(v_a_3791_);
lean_inc_ref(v___x_3802_);
v___x_3803_ = lean_array_push(v___x_3802_, v_a_3791_);
lean_inc(v_a_3795_);
v___x_3804_ = lean_array_push(v___x_3803_, v_a_3795_);
v___x_3805_ = l_Lean_Meta_mkAppM(v___x_3800_, v___x_3804_, v_a_3774_, v_a_3775_, v_a_3776_, v_a_3777_);
if (lean_obj_tag(v___x_3805_) == 0)
{
lean_object* v_a_3806_; lean_object* v___x_3807_; lean_object* v___x_3808_; lean_object* v___x_3809_; 
v_a_3806_ = lean_ctor_get(v___x_3805_, 0);
lean_inc(v_a_3806_);
lean_dec_ref(v___x_3805_);
lean_inc_ref(v___x_3802_);
v___x_3807_ = lean_array_push(v___x_3802_, v_a_3806_);
v___x_3808_ = lean_array_push(v___x_3807_, v_a_3799_);
v___x_3809_ = l_Lean_Meta_mkAppM(v___x_3800_, v___x_3808_, v_a_3774_, v_a_3775_, v_a_3776_, v_a_3777_);
if (lean_obj_tag(v___x_3809_) == 0)
{
lean_object* v_a_3810_; lean_object* v___x_3811_; 
v_a_3810_ = lean_ctor_get(v___x_3809_, 0);
lean_inc_n(v_a_3810_, 2);
lean_dec_ref(v___x_3809_);
lean_inc(v_a_3777_);
lean_inc_ref(v_a_3776_);
lean_inc(v_a_3775_);
lean_inc_ref(v_a_3774_);
v___x_3811_ = lean_infer_type(v_a_3810_, v_a_3774_, v_a_3775_, v_a_3776_, v_a_3777_);
if (lean_obj_tag(v___x_3811_) == 0)
{
lean_object* v_a_3812_; lean_object* v___x_3813_; lean_object* v___x_3814_; 
v_a_3812_ = lean_ctor_get(v___x_3811_, 0);
lean_inc(v_a_3812_);
lean_dec_ref(v___x_3811_);
v___x_3813_ = lean_box(0);
lean_inc(v_a_3787_);
v___x_3814_ = l_Lean_Meta_kabstract(v_a_3812_, v_a_3787_, v___x_3813_, v_a_3774_, v_a_3775_, v_a_3776_, v_a_3777_);
if (lean_obj_tag(v___x_3814_) == 0)
{
lean_object* v_a_3815_; lean_object* v___x_3816_; lean_object* v___x_3817_; uint8_t v___x_3818_; lean_object* v___x_3819_; 
v_a_3815_ = lean_ctor_get(v___x_3814_, 0);
lean_inc(v_a_3815_);
lean_dec_ref(v___x_3814_);
v___x_3816_ = lean_mk_empty_array_with_capacity(v___x_3782_);
lean_inc(v_a_3787_);
v___x_3817_ = lean_array_push(v___x_3816_, v_a_3787_);
v___x_3818_ = 1;
v___x_3819_ = l_Lean_Meta_mkLambdaFVars(v___x_3817_, v_a_3815_, v___x_3785_, v___x_3780_, v___x_3785_, v___x_3780_, v___x_3818_, v_a_3774_, v_a_3775_, v_a_3776_, v_a_3777_);
if (lean_obj_tag(v___x_3819_) == 0)
{
lean_object* v_a_3820_; lean_object* v___x_3821_; lean_object* v___x_3822_; lean_object* v___x_3823_; lean_object* v___x_3824_; lean_object* v___x_3825_; lean_object* v___x_3826_; lean_object* v___x_3827_; lean_object* v___x_3828_; lean_object* v___x_3829_; lean_object* v___x_3830_; lean_object* v___x_3831_; 
v_a_3820_ = lean_ctor_get(v___x_3819_, 0);
lean_inc(v_a_3820_);
lean_dec_ref(v___x_3819_);
v___x_3821_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___closed__3));
v___x_3822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3822_, 0, v_a_3820_);
lean_inc(v_a_3787_);
v___x_3823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3823_, 0, v_a_3787_);
v___x_3824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3824_, 0, v_a_3810_);
v___x_3825_ = lean_unsigned_to_nat(4u);
v___x_3826_ = lean_mk_empty_array_with_capacity(v___x_3825_);
lean_dec_ref(v___x_3826_);
v___x_3827_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___closed__4, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___closed__4_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___closed__4);
v___x_3828_ = lean_array_push(v___x_3827_, v___x_3822_);
v___x_3829_ = lean_array_push(v___x_3828_, v___x_3823_);
v___x_3830_ = lean_array_push(v___x_3829_, v___x_3824_);
v___x_3831_ = l_Lean_Meta_mkAppOptM(v___x_3821_, v___x_3830_, v_a_3774_, v_a_3775_, v_a_3776_, v_a_3777_);
if (lean_obj_tag(v___x_3831_) == 0)
{
lean_object* v_a_3832_; lean_object* v___x_3833_; 
v_a_3832_ = lean_ctor_get(v___x_3831_, 0);
lean_inc(v_a_3832_);
lean_dec_ref(v___x_3831_);
lean_inc(v_a_3777_);
lean_inc_ref(v_a_3776_);
lean_inc(v_a_3775_);
lean_inc_ref(v_a_3774_);
v___x_3833_ = lean_infer_type(v_a_3791_, v_a_3774_, v_a_3775_, v_a_3776_, v_a_3777_);
if (lean_obj_tag(v___x_3833_) == 0)
{
lean_object* v_a_3834_; lean_object* v___x_3835_; 
v_a_3834_ = lean_ctor_get(v___x_3833_, 0);
lean_inc(v_a_3834_);
lean_dec_ref(v___x_3833_);
lean_inc(v_a_3777_);
lean_inc_ref(v_a_3776_);
lean_inc(v_a_3775_);
lean_inc_ref(v_a_3774_);
v___x_3835_ = lean_infer_type(v_a_3795_, v_a_3774_, v_a_3775_, v_a_3776_, v_a_3777_);
if (lean_obj_tag(v___x_3835_) == 0)
{
lean_object* v_a_3836_; lean_object* v___x_3837_; 
v_a_3836_ = lean_ctor_get(v___x_3835_, 0);
lean_inc(v_a_3836_);
lean_dec_ref(v___x_3835_);
v___x_3837_ = l_Lean_Meta_kabstract(v_a_3836_, v_a_3787_, v___x_3813_, v_a_3774_, v_a_3775_, v_a_3776_, v_a_3777_);
if (lean_obj_tag(v___x_3837_) == 0)
{
lean_object* v_a_3838_; lean_object* v___x_3839_; 
v_a_3838_ = lean_ctor_get(v___x_3837_, 0);
lean_inc(v_a_3838_);
lean_dec_ref(v___x_3837_);
v___x_3839_ = l_Lean_Meta_mkLambdaFVars(v___x_3817_, v_a_3838_, v___x_3785_, v___x_3780_, v___x_3785_, v___x_3780_, v___x_3818_, v_a_3774_, v_a_3775_, v_a_3776_, v_a_3777_);
lean_dec_ref(v___x_3817_);
if (lean_obj_tag(v___x_3839_) == 0)
{
lean_object* v_a_3840_; lean_object* v___x_3841_; lean_object* v___x_3842_; lean_object* v___x_3843_; lean_object* v___x_3844_; lean_object* v___x_3845_; 
v_a_3840_ = lean_ctor_get(v___x_3839_, 0);
lean_inc(v_a_3840_);
lean_dec_ref(v___x_3839_);
v___x_3841_ = l_Lean_Expr_appArg_x21(v_a_3834_);
lean_dec(v_a_3834_);
v___x_3842_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__uniq__in__1___closed__2));
v___x_3843_ = lean_array_push(v___x_3802_, v_a_3840_);
v___x_3844_ = lean_array_push(v___x_3843_, v___x_3841_);
v___x_3845_ = l_Lean_Meta_mkAppM(v___x_3842_, v___x_3844_, v_a_3774_, v_a_3775_, v_a_3776_, v_a_3777_);
if (lean_obj_tag(v___x_3845_) == 0)
{
lean_object* v_a_3846_; lean_object* v___x_3847_; lean_object* v_h__new_3848_; lean_object* v___x_3849_; lean_object* v___f_3850_; lean_object* v___x_3851_; 
v_a_3846_ = lean_ctor_get(v___x_3845_, 0);
lean_inc(v_a_3846_);
lean_dec_ref(v___x_3845_);
v___x_3847_ = lean_unsigned_to_nat(9u);
v_h__new_3848_ = l_Lean_Syntax_getArg(v_x_3769_, v___x_3847_);
lean_dec(v_x_3769_);
v___x_3849_ = lean_box(v___x_3780_);
v___f_3850_ = lean_alloc_closure((void*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___lam__0___boxed), 13, 4);
lean_closure_set(v___f_3850_, 0, v_h__new_3848_);
lean_closure_set(v___f_3850_, 1, v_a_3846_);
lean_closure_set(v___f_3850_, 2, v_a_3832_);
lean_closure_set(v___f_3850_, 3, v___x_3849_);
v___x_3851_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_3850_, v_a_3770_, v_a_3771_, v_a_3772_, v_a_3773_, v_a_3774_, v_a_3775_, v_a_3776_, v_a_3777_);
return v___x_3851_;
}
else
{
lean_object* v_a_3852_; lean_object* v___x_3854_; uint8_t v_isShared_3855_; uint8_t v_isSharedCheck_3859_; 
lean_dec(v_a_3832_);
lean_dec(v_x_3769_);
v_a_3852_ = lean_ctor_get(v___x_3845_, 0);
v_isSharedCheck_3859_ = !lean_is_exclusive(v___x_3845_);
if (v_isSharedCheck_3859_ == 0)
{
v___x_3854_ = v___x_3845_;
v_isShared_3855_ = v_isSharedCheck_3859_;
goto v_resetjp_3853_;
}
else
{
lean_inc(v_a_3852_);
lean_dec(v___x_3845_);
v___x_3854_ = lean_box(0);
v_isShared_3855_ = v_isSharedCheck_3859_;
goto v_resetjp_3853_;
}
v_resetjp_3853_:
{
lean_object* v___x_3857_; 
if (v_isShared_3855_ == 0)
{
v___x_3857_ = v___x_3854_;
goto v_reusejp_3856_;
}
else
{
lean_object* v_reuseFailAlloc_3858_; 
v_reuseFailAlloc_3858_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3858_, 0, v_a_3852_);
v___x_3857_ = v_reuseFailAlloc_3858_;
goto v_reusejp_3856_;
}
v_reusejp_3856_:
{
return v___x_3857_;
}
}
}
}
else
{
lean_object* v_a_3860_; lean_object* v___x_3862_; uint8_t v_isShared_3863_; uint8_t v_isSharedCheck_3867_; 
lean_dec(v_a_3834_);
lean_dec(v_a_3832_);
lean_dec_ref(v___x_3802_);
lean_dec(v_x_3769_);
v_a_3860_ = lean_ctor_get(v___x_3839_, 0);
v_isSharedCheck_3867_ = !lean_is_exclusive(v___x_3839_);
if (v_isSharedCheck_3867_ == 0)
{
v___x_3862_ = v___x_3839_;
v_isShared_3863_ = v_isSharedCheck_3867_;
goto v_resetjp_3861_;
}
else
{
lean_inc(v_a_3860_);
lean_dec(v___x_3839_);
v___x_3862_ = lean_box(0);
v_isShared_3863_ = v_isSharedCheck_3867_;
goto v_resetjp_3861_;
}
v_resetjp_3861_:
{
lean_object* v___x_3865_; 
if (v_isShared_3863_ == 0)
{
v___x_3865_ = v___x_3862_;
goto v_reusejp_3864_;
}
else
{
lean_object* v_reuseFailAlloc_3866_; 
v_reuseFailAlloc_3866_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3866_, 0, v_a_3860_);
v___x_3865_ = v_reuseFailAlloc_3866_;
goto v_reusejp_3864_;
}
v_reusejp_3864_:
{
return v___x_3865_;
}
}
}
}
else
{
lean_object* v_a_3868_; lean_object* v___x_3870_; uint8_t v_isShared_3871_; uint8_t v_isSharedCheck_3875_; 
lean_dec(v_a_3834_);
lean_dec(v_a_3832_);
lean_dec_ref(v___x_3817_);
lean_dec_ref(v___x_3802_);
lean_dec(v_x_3769_);
v_a_3868_ = lean_ctor_get(v___x_3837_, 0);
v_isSharedCheck_3875_ = !lean_is_exclusive(v___x_3837_);
if (v_isSharedCheck_3875_ == 0)
{
v___x_3870_ = v___x_3837_;
v_isShared_3871_ = v_isSharedCheck_3875_;
goto v_resetjp_3869_;
}
else
{
lean_inc(v_a_3868_);
lean_dec(v___x_3837_);
v___x_3870_ = lean_box(0);
v_isShared_3871_ = v_isSharedCheck_3875_;
goto v_resetjp_3869_;
}
v_resetjp_3869_:
{
lean_object* v___x_3873_; 
if (v_isShared_3871_ == 0)
{
v___x_3873_ = v___x_3870_;
goto v_reusejp_3872_;
}
else
{
lean_object* v_reuseFailAlloc_3874_; 
v_reuseFailAlloc_3874_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3874_, 0, v_a_3868_);
v___x_3873_ = v_reuseFailAlloc_3874_;
goto v_reusejp_3872_;
}
v_reusejp_3872_:
{
return v___x_3873_;
}
}
}
}
else
{
lean_object* v_a_3876_; lean_object* v___x_3878_; uint8_t v_isShared_3879_; uint8_t v_isSharedCheck_3883_; 
lean_dec(v_a_3834_);
lean_dec(v_a_3832_);
lean_dec_ref(v___x_3817_);
lean_dec_ref(v___x_3802_);
lean_dec(v_a_3787_);
lean_dec(v_x_3769_);
v_a_3876_ = lean_ctor_get(v___x_3835_, 0);
v_isSharedCheck_3883_ = !lean_is_exclusive(v___x_3835_);
if (v_isSharedCheck_3883_ == 0)
{
v___x_3878_ = v___x_3835_;
v_isShared_3879_ = v_isSharedCheck_3883_;
goto v_resetjp_3877_;
}
else
{
lean_inc(v_a_3876_);
lean_dec(v___x_3835_);
v___x_3878_ = lean_box(0);
v_isShared_3879_ = v_isSharedCheck_3883_;
goto v_resetjp_3877_;
}
v_resetjp_3877_:
{
lean_object* v___x_3881_; 
if (v_isShared_3879_ == 0)
{
v___x_3881_ = v___x_3878_;
goto v_reusejp_3880_;
}
else
{
lean_object* v_reuseFailAlloc_3882_; 
v_reuseFailAlloc_3882_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3882_, 0, v_a_3876_);
v___x_3881_ = v_reuseFailAlloc_3882_;
goto v_reusejp_3880_;
}
v_reusejp_3880_:
{
return v___x_3881_;
}
}
}
}
else
{
lean_object* v_a_3884_; lean_object* v___x_3886_; uint8_t v_isShared_3887_; uint8_t v_isSharedCheck_3891_; 
lean_dec(v_a_3832_);
lean_dec_ref(v___x_3817_);
lean_dec_ref(v___x_3802_);
lean_dec(v_a_3795_);
lean_dec(v_a_3787_);
lean_dec(v_x_3769_);
v_a_3884_ = lean_ctor_get(v___x_3833_, 0);
v_isSharedCheck_3891_ = !lean_is_exclusive(v___x_3833_);
if (v_isSharedCheck_3891_ == 0)
{
v___x_3886_ = v___x_3833_;
v_isShared_3887_ = v_isSharedCheck_3891_;
goto v_resetjp_3885_;
}
else
{
lean_inc(v_a_3884_);
lean_dec(v___x_3833_);
v___x_3886_ = lean_box(0);
v_isShared_3887_ = v_isSharedCheck_3891_;
goto v_resetjp_3885_;
}
v_resetjp_3885_:
{
lean_object* v___x_3889_; 
if (v_isShared_3887_ == 0)
{
v___x_3889_ = v___x_3886_;
goto v_reusejp_3888_;
}
else
{
lean_object* v_reuseFailAlloc_3890_; 
v_reuseFailAlloc_3890_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3890_, 0, v_a_3884_);
v___x_3889_ = v_reuseFailAlloc_3890_;
goto v_reusejp_3888_;
}
v_reusejp_3888_:
{
return v___x_3889_;
}
}
}
}
else
{
lean_object* v_a_3892_; lean_object* v___x_3894_; uint8_t v_isShared_3895_; uint8_t v_isSharedCheck_3899_; 
lean_dec_ref(v___x_3817_);
lean_dec_ref(v___x_3802_);
lean_dec(v_a_3795_);
lean_dec(v_a_3791_);
lean_dec(v_a_3787_);
lean_dec(v_x_3769_);
v_a_3892_ = lean_ctor_get(v___x_3831_, 0);
v_isSharedCheck_3899_ = !lean_is_exclusive(v___x_3831_);
if (v_isSharedCheck_3899_ == 0)
{
v___x_3894_ = v___x_3831_;
v_isShared_3895_ = v_isSharedCheck_3899_;
goto v_resetjp_3893_;
}
else
{
lean_inc(v_a_3892_);
lean_dec(v___x_3831_);
v___x_3894_ = lean_box(0);
v_isShared_3895_ = v_isSharedCheck_3899_;
goto v_resetjp_3893_;
}
v_resetjp_3893_:
{
lean_object* v___x_3897_; 
if (v_isShared_3895_ == 0)
{
v___x_3897_ = v___x_3894_;
goto v_reusejp_3896_;
}
else
{
lean_object* v_reuseFailAlloc_3898_; 
v_reuseFailAlloc_3898_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3898_, 0, v_a_3892_);
v___x_3897_ = v_reuseFailAlloc_3898_;
goto v_reusejp_3896_;
}
v_reusejp_3896_:
{
return v___x_3897_;
}
}
}
}
else
{
lean_object* v_a_3900_; lean_object* v___x_3902_; uint8_t v_isShared_3903_; uint8_t v_isSharedCheck_3907_; 
lean_dec_ref(v___x_3817_);
lean_dec(v_a_3810_);
lean_dec_ref(v___x_3802_);
lean_dec(v_a_3795_);
lean_dec(v_a_3791_);
lean_dec(v_a_3787_);
lean_dec(v_x_3769_);
v_a_3900_ = lean_ctor_get(v___x_3819_, 0);
v_isSharedCheck_3907_ = !lean_is_exclusive(v___x_3819_);
if (v_isSharedCheck_3907_ == 0)
{
v___x_3902_ = v___x_3819_;
v_isShared_3903_ = v_isSharedCheck_3907_;
goto v_resetjp_3901_;
}
else
{
lean_inc(v_a_3900_);
lean_dec(v___x_3819_);
v___x_3902_ = lean_box(0);
v_isShared_3903_ = v_isSharedCheck_3907_;
goto v_resetjp_3901_;
}
v_resetjp_3901_:
{
lean_object* v___x_3905_; 
if (v_isShared_3903_ == 0)
{
v___x_3905_ = v___x_3902_;
goto v_reusejp_3904_;
}
else
{
lean_object* v_reuseFailAlloc_3906_; 
v_reuseFailAlloc_3906_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3906_, 0, v_a_3900_);
v___x_3905_ = v_reuseFailAlloc_3906_;
goto v_reusejp_3904_;
}
v_reusejp_3904_:
{
return v___x_3905_;
}
}
}
}
else
{
lean_object* v_a_3908_; lean_object* v___x_3910_; uint8_t v_isShared_3911_; uint8_t v_isSharedCheck_3915_; 
lean_dec(v_a_3810_);
lean_dec_ref(v___x_3802_);
lean_dec(v_a_3795_);
lean_dec(v_a_3791_);
lean_dec(v_a_3787_);
lean_dec(v_x_3769_);
v_a_3908_ = lean_ctor_get(v___x_3814_, 0);
v_isSharedCheck_3915_ = !lean_is_exclusive(v___x_3814_);
if (v_isSharedCheck_3915_ == 0)
{
v___x_3910_ = v___x_3814_;
v_isShared_3911_ = v_isSharedCheck_3915_;
goto v_resetjp_3909_;
}
else
{
lean_inc(v_a_3908_);
lean_dec(v___x_3814_);
v___x_3910_ = lean_box(0);
v_isShared_3911_ = v_isSharedCheck_3915_;
goto v_resetjp_3909_;
}
v_resetjp_3909_:
{
lean_object* v___x_3913_; 
if (v_isShared_3911_ == 0)
{
v___x_3913_ = v___x_3910_;
goto v_reusejp_3912_;
}
else
{
lean_object* v_reuseFailAlloc_3914_; 
v_reuseFailAlloc_3914_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3914_, 0, v_a_3908_);
v___x_3913_ = v_reuseFailAlloc_3914_;
goto v_reusejp_3912_;
}
v_reusejp_3912_:
{
return v___x_3913_;
}
}
}
}
else
{
lean_object* v_a_3916_; lean_object* v___x_3918_; uint8_t v_isShared_3919_; uint8_t v_isSharedCheck_3923_; 
lean_dec(v_a_3810_);
lean_dec_ref(v___x_3802_);
lean_dec(v_a_3795_);
lean_dec(v_a_3791_);
lean_dec(v_a_3787_);
lean_dec(v_x_3769_);
v_a_3916_ = lean_ctor_get(v___x_3811_, 0);
v_isSharedCheck_3923_ = !lean_is_exclusive(v___x_3811_);
if (v_isSharedCheck_3923_ == 0)
{
v___x_3918_ = v___x_3811_;
v_isShared_3919_ = v_isSharedCheck_3923_;
goto v_resetjp_3917_;
}
else
{
lean_inc(v_a_3916_);
lean_dec(v___x_3811_);
v___x_3918_ = lean_box(0);
v_isShared_3919_ = v_isSharedCheck_3923_;
goto v_resetjp_3917_;
}
v_resetjp_3917_:
{
lean_object* v___x_3921_; 
if (v_isShared_3919_ == 0)
{
v___x_3921_ = v___x_3918_;
goto v_reusejp_3920_;
}
else
{
lean_object* v_reuseFailAlloc_3922_; 
v_reuseFailAlloc_3922_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3922_, 0, v_a_3916_);
v___x_3921_ = v_reuseFailAlloc_3922_;
goto v_reusejp_3920_;
}
v_reusejp_3920_:
{
return v___x_3921_;
}
}
}
}
else
{
lean_object* v_a_3924_; lean_object* v___x_3926_; uint8_t v_isShared_3927_; uint8_t v_isSharedCheck_3931_; 
lean_dec_ref(v___x_3802_);
lean_dec(v_a_3795_);
lean_dec(v_a_3791_);
lean_dec(v_a_3787_);
lean_dec(v_x_3769_);
v_a_3924_ = lean_ctor_get(v___x_3809_, 0);
v_isSharedCheck_3931_ = !lean_is_exclusive(v___x_3809_);
if (v_isSharedCheck_3931_ == 0)
{
v___x_3926_ = v___x_3809_;
v_isShared_3927_ = v_isSharedCheck_3931_;
goto v_resetjp_3925_;
}
else
{
lean_inc(v_a_3924_);
lean_dec(v___x_3809_);
v___x_3926_ = lean_box(0);
v_isShared_3927_ = v_isSharedCheck_3931_;
goto v_resetjp_3925_;
}
v_resetjp_3925_:
{
lean_object* v___x_3929_; 
if (v_isShared_3927_ == 0)
{
v___x_3929_ = v___x_3926_;
goto v_reusejp_3928_;
}
else
{
lean_object* v_reuseFailAlloc_3930_; 
v_reuseFailAlloc_3930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3930_, 0, v_a_3924_);
v___x_3929_ = v_reuseFailAlloc_3930_;
goto v_reusejp_3928_;
}
v_reusejp_3928_:
{
return v___x_3929_;
}
}
}
}
else
{
lean_object* v_a_3932_; lean_object* v___x_3934_; uint8_t v_isShared_3935_; uint8_t v_isSharedCheck_3939_; 
lean_dec_ref(v___x_3802_);
lean_dec(v_a_3799_);
lean_dec(v_a_3795_);
lean_dec(v_a_3791_);
lean_dec(v_a_3787_);
lean_dec(v_x_3769_);
v_a_3932_ = lean_ctor_get(v___x_3805_, 0);
v_isSharedCheck_3939_ = !lean_is_exclusive(v___x_3805_);
if (v_isSharedCheck_3939_ == 0)
{
v___x_3934_ = v___x_3805_;
v_isShared_3935_ = v_isSharedCheck_3939_;
goto v_resetjp_3933_;
}
else
{
lean_inc(v_a_3932_);
lean_dec(v___x_3805_);
v___x_3934_ = lean_box(0);
v_isShared_3935_ = v_isSharedCheck_3939_;
goto v_resetjp_3933_;
}
v_resetjp_3933_:
{
lean_object* v___x_3937_; 
if (v_isShared_3935_ == 0)
{
v___x_3937_ = v___x_3934_;
goto v_reusejp_3936_;
}
else
{
lean_object* v_reuseFailAlloc_3938_; 
v_reuseFailAlloc_3938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3938_, 0, v_a_3932_);
v___x_3937_ = v_reuseFailAlloc_3938_;
goto v_reusejp_3936_;
}
v_reusejp_3936_:
{
return v___x_3937_;
}
}
}
}
else
{
lean_object* v_a_3940_; lean_object* v___x_3942_; uint8_t v_isShared_3943_; uint8_t v_isSharedCheck_3947_; 
lean_dec(v_a_3795_);
lean_dec(v_a_3791_);
lean_dec(v_a_3787_);
lean_dec(v_x_3769_);
v_a_3940_ = lean_ctor_get(v___x_3798_, 0);
v_isSharedCheck_3947_ = !lean_is_exclusive(v___x_3798_);
if (v_isSharedCheck_3947_ == 0)
{
v___x_3942_ = v___x_3798_;
v_isShared_3943_ = v_isSharedCheck_3947_;
goto v_resetjp_3941_;
}
else
{
lean_inc(v_a_3940_);
lean_dec(v___x_3798_);
v___x_3942_ = lean_box(0);
v_isShared_3943_ = v_isSharedCheck_3947_;
goto v_resetjp_3941_;
}
v_resetjp_3941_:
{
lean_object* v___x_3945_; 
if (v_isShared_3943_ == 0)
{
v___x_3945_ = v___x_3942_;
goto v_reusejp_3944_;
}
else
{
lean_object* v_reuseFailAlloc_3946_; 
v_reuseFailAlloc_3946_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3946_, 0, v_a_3940_);
v___x_3945_ = v_reuseFailAlloc_3946_;
goto v_reusejp_3944_;
}
v_reusejp_3944_:
{
return v___x_3945_;
}
}
}
}
else
{
lean_object* v_a_3948_; lean_object* v___x_3950_; uint8_t v_isShared_3951_; uint8_t v_isSharedCheck_3955_; 
lean_dec(v_a_3791_);
lean_dec(v_a_3787_);
lean_dec(v_x_3769_);
v_a_3948_ = lean_ctor_get(v___x_3794_, 0);
v_isSharedCheck_3955_ = !lean_is_exclusive(v___x_3794_);
if (v_isSharedCheck_3955_ == 0)
{
v___x_3950_ = v___x_3794_;
v_isShared_3951_ = v_isSharedCheck_3955_;
goto v_resetjp_3949_;
}
else
{
lean_inc(v_a_3948_);
lean_dec(v___x_3794_);
v___x_3950_ = lean_box(0);
v_isShared_3951_ = v_isSharedCheck_3955_;
goto v_resetjp_3949_;
}
v_resetjp_3949_:
{
lean_object* v___x_3953_; 
if (v_isShared_3951_ == 0)
{
v___x_3953_ = v___x_3950_;
goto v_reusejp_3952_;
}
else
{
lean_object* v_reuseFailAlloc_3954_; 
v_reuseFailAlloc_3954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3954_, 0, v_a_3948_);
v___x_3953_ = v_reuseFailAlloc_3954_;
goto v_reusejp_3952_;
}
v_reusejp_3952_:
{
return v___x_3953_;
}
}
}
}
else
{
lean_object* v_a_3956_; lean_object* v___x_3958_; uint8_t v_isShared_3959_; uint8_t v_isSharedCheck_3963_; 
lean_dec(v_a_3787_);
lean_dec(v_x_3769_);
v_a_3956_ = lean_ctor_get(v___x_3790_, 0);
v_isSharedCheck_3963_ = !lean_is_exclusive(v___x_3790_);
if (v_isSharedCheck_3963_ == 0)
{
v___x_3958_ = v___x_3790_;
v_isShared_3959_ = v_isSharedCheck_3963_;
goto v_resetjp_3957_;
}
else
{
lean_inc(v_a_3956_);
lean_dec(v___x_3790_);
v___x_3958_ = lean_box(0);
v_isShared_3959_ = v_isSharedCheck_3963_;
goto v_resetjp_3957_;
}
v_resetjp_3957_:
{
lean_object* v___x_3961_; 
if (v_isShared_3959_ == 0)
{
v___x_3961_ = v___x_3958_;
goto v_reusejp_3960_;
}
else
{
lean_object* v_reuseFailAlloc_3962_; 
v_reuseFailAlloc_3962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3962_, 0, v_a_3956_);
v___x_3961_ = v_reuseFailAlloc_3962_;
goto v_reusejp_3960_;
}
v_reusejp_3960_:
{
return v___x_3961_;
}
}
}
}
else
{
lean_object* v_a_3964_; lean_object* v___x_3966_; uint8_t v_isShared_3967_; uint8_t v_isSharedCheck_3971_; 
lean_dec(v_x_3769_);
v_a_3964_ = lean_ctor_get(v___x_3786_, 0);
v_isSharedCheck_3971_ = !lean_is_exclusive(v___x_3786_);
if (v_isSharedCheck_3971_ == 0)
{
v___x_3966_ = v___x_3786_;
v_isShared_3967_ = v_isSharedCheck_3971_;
goto v_resetjp_3965_;
}
else
{
lean_inc(v_a_3964_);
lean_dec(v___x_3786_);
v___x_3966_ = lean_box(0);
v_isShared_3967_ = v_isSharedCheck_3971_;
goto v_resetjp_3965_;
}
v_resetjp_3965_:
{
lean_object* v___x_3969_; 
if (v_isShared_3967_ == 0)
{
v___x_3969_ = v___x_3966_;
goto v_reusejp_3968_;
}
else
{
lean_object* v_reuseFailAlloc_3970_; 
v_reuseFailAlloc_3970_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3970_, 0, v_a_3964_);
v___x_3969_ = v_reuseFailAlloc_3970_;
goto v_reusejp_3968_;
}
v_reusejp_3968_:
{
return v___x_3969_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c____1___boxed(lean_object* v_x_3972_, lean_object* v_a_3973_, lean_object* v_a_3974_, lean_object* v_a_3975_, lean_object* v_a_3976_, lean_object* v_a_3977_, lean_object* v_a_3978_, lean_object* v_a_3979_, lean_object* v_a_3980_, lean_object* v_a_3981_){
_start:
{
lean_object* v_res_3982_; 
v_res_3982_ = lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c____1(v_x_3972_, v_a_3973_, v_a_3974_, v_a_3975_, v_a_3976_, v_a_3977_, v_a_3978_, v_a_3979_, v_a_3980_);
lean_dec(v_a_3980_);
lean_dec_ref(v_a_3979_);
lean_dec(v_a_3978_);
lean_dec_ref(v_a_3977_);
lean_dec(v_a_3976_);
lean_dec_ref(v_a_3975_);
lean_dec(v_a_3974_);
lean_dec_ref(v_a_3973_);
return v_res_3982_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__unique__in___x2c___x2c___x2c___x2c____1(lean_object* v_x_4031_, lean_object* v_a_4032_, lean_object* v_a_4033_){
_start:
{
lean_object* v___x_4034_; uint8_t v___x_4035_; 
v___x_4034_ = ((lean_object*)(lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__1));
lean_inc(v_x_4031_);
v___x_4035_ = l_Lean_Syntax_isOfKind(v_x_4031_, v___x_4034_);
if (v___x_4035_ == 0)
{
lean_object* v___x_4036_; lean_object* v___x_4037_; 
lean_dec(v_x_4031_);
v___x_4036_ = lean_box(1);
v___x_4037_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4037_, 0, v___x_4036_);
lean_ctor_set(v___x_4037_, 1, v_a_4033_);
return v___x_4037_;
}
else
{
lean_object* v_quotContext_4038_; lean_object* v_currMacroScope_4039_; lean_object* v_ref_4040_; lean_object* v___x_4041_; lean_object* v___x_4042_; lean_object* v___x_4043_; lean_object* v___x_4044_; lean_object* v___x_4045_; lean_object* v___x_4046_; lean_object* v___x_4047_; lean_object* v___x_4048_; lean_object* v___x_4049_; lean_object* v___x_4050_; uint8_t v___x_4051_; lean_object* v___x_4052_; lean_object* v___x_4053_; lean_object* v___x_4054_; lean_object* v___x_4055_; lean_object* v___x_4056_; lean_object* v___x_4057_; lean_object* v___x_4058_; lean_object* v___x_4059_; lean_object* v___x_4060_; lean_object* v___x_4061_; lean_object* v___x_4062_; lean_object* v___x_4063_; lean_object* v___x_4064_; lean_object* v___x_4065_; lean_object* v___x_4066_; lean_object* v___x_4067_; lean_object* v___x_4068_; lean_object* v___x_4069_; lean_object* v___x_4070_; lean_object* v___x_4071_; lean_object* v___x_4072_; lean_object* v___x_4073_; lean_object* v___x_4074_; lean_object* v___x_4075_; lean_object* v___x_4076_; lean_object* v___x_4077_; lean_object* v___x_4078_; lean_object* v___x_4079_; lean_object* v___x_4080_; lean_object* v___x_4081_; lean_object* v___x_4082_; lean_object* v___x_4083_; lean_object* v___x_4084_; lean_object* v___x_4085_; lean_object* v___x_4086_; lean_object* v___x_4087_; lean_object* v___x_4088_; lean_object* v___x_4089_; lean_object* v___x_4090_; lean_object* v___x_4091_; lean_object* v___x_4092_; lean_object* v___x_4093_; lean_object* v___x_4094_; lean_object* v___x_4095_; lean_object* v___x_4096_; lean_object* v___x_4097_; lean_object* v___x_4098_; lean_object* v___x_4099_; lean_object* v___x_4100_; lean_object* v___x_4101_; lean_object* v___x_4102_; lean_object* v___x_4103_; lean_object* v___x_4104_; lean_object* v___x_4105_; lean_object* v___x_4106_; lean_object* v___x_4107_; lean_object* v___x_4108_; lean_object* v___x_4109_; lean_object* v___x_4110_; lean_object* v___x_4111_; lean_object* v___x_4112_; lean_object* v___x_4113_; lean_object* v___x_4114_; lean_object* v___x_4115_; lean_object* v___x_4116_; lean_object* v___x_4117_; lean_object* v___x_4118_; lean_object* v___x_4119_; lean_object* v___x_4120_; lean_object* v___x_4121_; lean_object* v___x_4122_; lean_object* v___x_4123_; lean_object* v___x_4124_; lean_object* v___x_4125_; lean_object* v___x_4126_; lean_object* v___x_4127_; lean_object* v___x_4128_; lean_object* v___x_4129_; lean_object* v___x_4130_; lean_object* v___x_4131_; lean_object* v___x_4132_; lean_object* v___x_4133_; lean_object* v___x_4134_; lean_object* v___x_4135_; lean_object* v___x_4136_; lean_object* v___x_4137_; lean_object* v___x_4138_; lean_object* v___x_4139_; lean_object* v___x_4140_; lean_object* v___x_4141_; lean_object* v___x_4142_; lean_object* v___x_4143_; lean_object* v___x_4144_; lean_object* v___x_4145_; lean_object* v___x_4146_; lean_object* v___x_4147_; lean_object* v___x_4148_; lean_object* v___x_4149_; lean_object* v___x_4150_; lean_object* v___x_4151_; lean_object* v___x_4152_; lean_object* v___x_4153_; lean_object* v___x_4154_; lean_object* v___x_4155_; lean_object* v___x_4156_; lean_object* v___x_4157_; lean_object* v___x_4158_; lean_object* v___x_4159_; lean_object* v___x_4160_; lean_object* v___x_4161_; lean_object* v___x_4162_; lean_object* v___x_4163_; lean_object* v___x_4164_; lean_object* v___x_4165_; lean_object* v___x_4166_; lean_object* v___x_4167_; lean_object* v___x_4168_; lean_object* v___x_4169_; 
v_quotContext_4038_ = lean_ctor_get(v_a_4032_, 1);
v_currMacroScope_4039_ = lean_ctor_get(v_a_4032_, 2);
v_ref_4040_ = lean_ctor_get(v_a_4032_, 5);
v___x_4041_ = lean_unsigned_to_nat(1u);
v___x_4042_ = l_Lean_Syntax_getArg(v_x_4031_, v___x_4041_);
v___x_4043_ = lean_unsigned_to_nat(3u);
v___x_4044_ = l_Lean_Syntax_getArg(v_x_4031_, v___x_4043_);
v___x_4045_ = lean_unsigned_to_nat(5u);
v___x_4046_ = l_Lean_Syntax_getArg(v_x_4031_, v___x_4045_);
v___x_4047_ = lean_unsigned_to_nat(7u);
v___x_4048_ = l_Lean_Syntax_getArg(v_x_4031_, v___x_4047_);
v___x_4049_ = lean_unsigned_to_nat(9u);
v___x_4050_ = l_Lean_Syntax_getArg(v_x_4031_, v___x_4049_);
lean_dec(v_x_4031_);
v___x_4051_ = 0;
v___x_4052_ = l_Lean_SourceInfo_fromRef(v_ref_4040_, v___x_4051_);
v___x_4053_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__4));
v___x_4054_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__7));
lean_inc_n(v___x_4052_, 59);
v___x_4055_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4055_, 0, v___x_4052_);
lean_ctor_set(v___x_4055_, 1, v___x_4054_);
v___x_4056_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__9));
v___x_4057_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__11));
v___x_4058_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__11));
v___x_4059_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__1));
v___x_4060_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__2));
v___x_4061_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4061_, 0, v___x_4052_);
lean_ctor_set(v___x_4061_, 1, v___x_4060_);
v___x_4062_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__4));
v___x_4063_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19, &lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19);
v___x_4064_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4064_, 0, v___x_4052_);
lean_ctor_set(v___x_4064_, 1, v___x_4058_);
lean_ctor_set(v___x_4064_, 2, v___x_4063_);
lean_inc_ref_n(v___x_4064_, 18);
v___x_4065_ = l_Lean_Syntax_node1(v___x_4052_, v___x_4062_, v___x_4064_);
v___x_4066_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__6));
v___x_4067_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__8));
v___x_4068_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__10));
v___x_4069_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__11));
v___x_4070_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4070_, 0, v___x_4052_);
lean_ctor_set(v___x_4070_, 1, v___x_4069_);
v___x_4071_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__23));
v___x_4072_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4072_, 0, v___x_4052_);
lean_ctor_set(v___x_4072_, 1, v___x_4071_);
lean_inc(v___x_4048_);
lean_inc_ref_n(v___x_4072_, 4);
lean_inc(v___x_4046_);
v___x_4073_ = l_Lean_Syntax_node3(v___x_4052_, v___x_4058_, v___x_4046_, v___x_4072_, v___x_4048_);
v___x_4074_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__12));
v___x_4075_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4075_, 0, v___x_4052_);
lean_ctor_set(v___x_4075_, 1, v___x_4074_);
lean_inc_ref_n(v___x_4075_, 2);
lean_inc_ref_n(v___x_4070_, 2);
v___x_4076_ = l_Lean_Syntax_node3(v___x_4052_, v___x_4068_, v___x_4070_, v___x_4073_, v___x_4075_);
lean_inc(v___x_4050_);
v___x_4077_ = l_Lean_Syntax_node3(v___x_4052_, v___x_4058_, v___x_4076_, v___x_4072_, v___x_4050_);
v___x_4078_ = l_Lean_Syntax_node3(v___x_4052_, v___x_4068_, v___x_4070_, v___x_4077_, v___x_4075_);
v___x_4079_ = l_Lean_Syntax_node3(v___x_4052_, v___x_4058_, v___x_4044_, v___x_4072_, v___x_4078_);
v___x_4080_ = l_Lean_Syntax_node3(v___x_4052_, v___x_4068_, v___x_4070_, v___x_4079_, v___x_4075_);
v___x_4081_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__23));
v___x_4082_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4082_, 0, v___x_4052_);
lean_ctor_set(v___x_4082_, 1, v___x_4081_);
lean_inc_ref_n(v___x_4082_, 3);
v___x_4083_ = l_Lean_Syntax_node5(v___x_4052_, v___x_4067_, v___x_4080_, v___x_4064_, v___x_4064_, v___x_4082_, v___x_4042_);
v___x_4084_ = l_Lean_Syntax_node1(v___x_4052_, v___x_4066_, v___x_4083_);
v___x_4085_ = l_Lean_Syntax_node3(v___x_4052_, v___x_4059_, v___x_4061_, v___x_4065_, v___x_4084_);
v___x_4086_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__6));
v___x_4087_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__7));
v___x_4088_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4088_, 0, v___x_4052_);
lean_ctor_set(v___x_4088_, 1, v___x_4087_);
v___x_4089_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__12));
v___x_4090_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__13));
v___x_4091_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4091_, 0, v___x_4052_);
lean_ctor_set(v___x_4091_, 1, v___x_4089_);
v___x_4092_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__15));
v___x_4093_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__17));
v___x_4094_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__19));
v___x_4095_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__21, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__21_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__21);
v___x_4096_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__22));
lean_inc_n(v_currMacroScope_4039_, 6);
lean_inc_n(v_quotContext_4038_, 6);
v___x_4097_ = l_Lean_addMacroScope(v_quotContext_4038_, v___x_4096_, v_currMacroScope_4039_);
v___x_4098_ = lean_box(0);
v___x_4099_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4099_, 0, v___x_4052_);
lean_ctor_set(v___x_4099_, 1, v___x_4095_);
lean_ctor_set(v___x_4099_, 2, v___x_4097_);
lean_ctor_set(v___x_4099_, 3, v___x_4098_);
v___x_4100_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__25));
v___x_4101_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__26));
v___x_4102_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4102_, 0, v___x_4052_);
lean_ctor_set(v___x_4102_, 1, v___x_4101_);
v___x_4103_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__28));
v___x_4104_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__30));
v___x_4105_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__32));
v___x_4106_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__34, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__34_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__34);
v___x_4107_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__35));
v___x_4108_ = l_Lean_addMacroScope(v_quotContext_4038_, v___x_4107_, v_currMacroScope_4039_);
v___x_4109_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4109_, 0, v___x_4052_);
lean_ctor_set(v___x_4109_, 1, v___x_4106_);
lean_ctor_set(v___x_4109_, 2, v___x_4108_);
lean_ctor_set(v___x_4109_, 3, v___x_4098_);
v___x_4110_ = l_Lean_Syntax_node2(v___x_4052_, v___x_4105_, v___x_4109_, v___x_4064_);
v___x_4111_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__37));
v___x_4112_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__39, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__39_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__39);
v___x_4113_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__40));
v___x_4114_ = l_Lean_addMacroScope(v_quotContext_4038_, v___x_4113_, v_currMacroScope_4039_);
v___x_4115_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__44));
v___x_4116_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4116_, 0, v___x_4052_);
lean_ctor_set(v___x_4116_, 1, v___x_4112_);
lean_ctor_set(v___x_4116_, 2, v___x_4114_);
lean_ctor_set(v___x_4116_, 3, v___x_4115_);
v___x_4117_ = l_Lean_Syntax_node3(v___x_4052_, v___x_4111_, v___x_4082_, v___x_4064_, v___x_4116_);
v___x_4118_ = l_Lean_Syntax_node3(v___x_4052_, v___x_4058_, v___x_4064_, v___x_4064_, v___x_4117_);
v___x_4119_ = l_Lean_Syntax_node2(v___x_4052_, v___x_4104_, v___x_4110_, v___x_4118_);
v___x_4120_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__46, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__46_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__46);
v___x_4121_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__47));
v___x_4122_ = l_Lean_addMacroScope(v_quotContext_4038_, v___x_4121_, v_currMacroScope_4039_);
v___x_4123_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4123_, 0, v___x_4052_);
lean_ctor_set(v___x_4123_, 1, v___x_4120_);
lean_ctor_set(v___x_4123_, 2, v___x_4122_);
lean_ctor_set(v___x_4123_, 3, v___x_4098_);
v___x_4124_ = l_Lean_Syntax_node2(v___x_4052_, v___x_4105_, v___x_4123_, v___x_4064_);
v___x_4125_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__49, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__49_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__49);
v___x_4126_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__50));
v___x_4127_ = l_Lean_addMacroScope(v_quotContext_4038_, v___x_4126_, v_currMacroScope_4039_);
v___x_4128_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__53));
v___x_4129_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4129_, 0, v___x_4052_);
lean_ctor_set(v___x_4129_, 1, v___x_4125_);
lean_ctor_set(v___x_4129_, 2, v___x_4127_);
lean_ctor_set(v___x_4129_, 3, v___x_4128_);
v___x_4130_ = l_Lean_Syntax_node3(v___x_4052_, v___x_4111_, v___x_4082_, v___x_4064_, v___x_4129_);
v___x_4131_ = l_Lean_Syntax_node3(v___x_4052_, v___x_4058_, v___x_4064_, v___x_4064_, v___x_4130_);
lean_inc(v___x_4131_);
v___x_4132_ = l_Lean_Syntax_node2(v___x_4052_, v___x_4104_, v___x_4124_, v___x_4131_);
v___x_4133_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__55, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__55_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__55);
v___x_4134_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__56));
v___x_4135_ = l_Lean_addMacroScope(v_quotContext_4038_, v___x_4134_, v_currMacroScope_4039_);
v___x_4136_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4136_, 0, v___x_4052_);
lean_ctor_set(v___x_4136_, 1, v___x_4133_);
lean_ctor_set(v___x_4136_, 2, v___x_4135_);
lean_ctor_set(v___x_4136_, 3, v___x_4098_);
v___x_4137_ = l_Lean_Syntax_node2(v___x_4052_, v___x_4105_, v___x_4136_, v___x_4064_);
v___x_4138_ = l_Lean_Syntax_node2(v___x_4052_, v___x_4104_, v___x_4137_, v___x_4131_);
v___x_4139_ = l_Lean_Syntax_node5(v___x_4052_, v___x_4058_, v___x_4119_, v___x_4072_, v___x_4132_, v___x_4072_, v___x_4138_);
v___x_4140_ = l_Lean_Syntax_node1(v___x_4052_, v___x_4103_, v___x_4139_);
v___x_4141_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__58));
v___x_4142_ = l_Lean_Syntax_node1(v___x_4052_, v___x_4141_, v___x_4064_);
v___x_4143_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__59));
v___x_4144_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4144_, 0, v___x_4052_);
lean_ctor_set(v___x_4144_, 1, v___x_4143_);
v___x_4145_ = l_Lean_Syntax_node6(v___x_4052_, v___x_4100_, v___x_4102_, v___x_4064_, v___x_4140_, v___x_4142_, v___x_4064_, v___x_4144_);
v___x_4146_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__49));
v___x_4147_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4147_, 0, v___x_4052_);
lean_ctor_set(v___x_4147_, 1, v___x_4146_);
lean_inc_ref(v___x_4147_);
lean_inc_ref(v___x_4055_);
v___x_4148_ = l_Lean_Syntax_node5(v___x_4052_, v___x_4094_, v___x_4055_, v___x_4099_, v___x_4082_, v___x_4145_, v___x_4147_);
v___x_4149_ = l_Lean_Syntax_node1(v___x_4052_, v___x_4093_, v___x_4148_);
v___x_4150_ = l_Lean_Syntax_node1(v___x_4052_, v___x_4058_, v___x_4149_);
v___x_4151_ = l_Lean_Syntax_node1(v___x_4052_, v___x_4092_, v___x_4150_);
v___x_4152_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__61));
v___x_4153_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__62));
v___x_4154_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4154_, 0, v___x_4052_);
lean_ctor_set(v___x_4154_, 1, v___x_4153_);
v___x_4155_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__64));
v___x_4156_ = l_Lean_Syntax_node3(v___x_4052_, v___x_4058_, v___x_4046_, v___x_4048_, v___x_4050_);
v___x_4157_ = l_Lean_Syntax_node1(v___x_4052_, v___x_4155_, v___x_4156_);
v___x_4158_ = l_Lean_Syntax_node2(v___x_4052_, v___x_4152_, v___x_4154_, v___x_4157_);
v___x_4159_ = l_Lean_Syntax_node1(v___x_4052_, v___x_4058_, v___x_4158_);
v___x_4160_ = l_Lean_Syntax_node6(v___x_4052_, v___x_4090_, v___x_4091_, v___x_4151_, v___x_4064_, v___x_4064_, v___x_4064_, v___x_4159_);
v___x_4161_ = l_Lean_Syntax_node1(v___x_4052_, v___x_4058_, v___x_4160_);
v___x_4162_ = l_Lean_Syntax_node1(v___x_4052_, v___x_4057_, v___x_4161_);
v___x_4163_ = l_Lean_Syntax_node1(v___x_4052_, v___x_4056_, v___x_4162_);
v___x_4164_ = l_Lean_Syntax_node2(v___x_4052_, v___x_4086_, v___x_4088_, v___x_4163_);
v___x_4165_ = l_Lean_Syntax_node3(v___x_4052_, v___x_4058_, v___x_4085_, v___x_4064_, v___x_4164_);
v___x_4166_ = l_Lean_Syntax_node1(v___x_4052_, v___x_4057_, v___x_4165_);
v___x_4167_ = l_Lean_Syntax_node1(v___x_4052_, v___x_4056_, v___x_4166_);
v___x_4168_ = l_Lean_Syntax_node3(v___x_4052_, v___x_4053_, v___x_4055_, v___x_4167_, v___x_4147_);
v___x_4169_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4169_, 0, v___x_4168_);
lean_ctor_set(v___x_4169_, 1, v_a_4033_);
return v___x_4169_;
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__unique__in___x2c___x2c___x2c___x2c____1___boxed(lean_object* v_x_4170_, lean_object* v_a_4171_, lean_object* v_a_4172_){
_start:
{
lean_object* v_res_4173_; 
v_res_4173_ = lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__unique__in___x2c___x2c___x2c___x2c____1(v_x_4170_, v_a_4171_, v_a_4172_);
lean_dec_ref(v_a_4171_);
return v_res_4173_;
}
}
static lean_object* _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__unique__in_____x2c____1___closed__1(void){
_start:
{
lean_object* v___x_4199_; lean_object* v___x_4200_; 
v___x_4199_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__unique__in_____x2c____1___closed__0));
v___x_4200_ = l_String_toRawSubstring_x27(v___x_4199_);
return v___x_4200_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__unique__in_____x2c____1(lean_object* v_x_4203_, lean_object* v_a_4204_, lean_object* v_a_4205_, lean_object* v_a_4206_, lean_object* v_a_4207_, lean_object* v_a_4208_, lean_object* v_a_4209_, lean_object* v_a_4210_, lean_object* v_a_4211_){
_start:
{
lean_object* v___x_4213_; uint8_t v___x_4214_; 
v___x_4213_ = ((lean_object*)(lp_Props2Theories_tacticElim__exists__unique__in_____x2c___00__closed__1));
lean_inc(v_x_4203_);
v___x_4214_ = l_Lean_Syntax_isOfKind(v_x_4203_, v___x_4213_);
if (v___x_4214_ == 0)
{
lean_object* v___x_4215_; 
lean_dec(v_x_4203_);
v___x_4215_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__0___redArg();
return v___x_4215_;
}
else
{
lean_object* v_ref_4216_; lean_object* v_quotContext_4217_; lean_object* v_currMacroScope_4218_; lean_object* v___x_4219_; lean_object* v___x_4220_; lean_object* v___x_4221_; lean_object* v___x_4222_; uint8_t v___x_4223_; lean_object* v___x_4224_; lean_object* v___x_4225_; lean_object* v___x_4226_; lean_object* v___x_4227_; lean_object* v___x_4228_; lean_object* v___x_4229_; lean_object* v___x_4230_; lean_object* v___x_4231_; lean_object* v___x_4232_; lean_object* v___x_4233_; lean_object* v___x_4234_; lean_object* v___x_4235_; lean_object* v___x_4236_; lean_object* v___x_4237_; lean_object* v___x_4238_; lean_object* v___x_4239_; lean_object* v___x_4240_; lean_object* v___x_4241_; lean_object* v___x_4242_; lean_object* v___x_4243_; lean_object* v___x_4244_; lean_object* v___x_4245_; lean_object* v___x_4246_; lean_object* v___x_4247_; lean_object* v___x_4248_; lean_object* v___x_4249_; lean_object* v___x_4250_; lean_object* v___x_4251_; lean_object* v___x_4252_; lean_object* v___x_4253_; lean_object* v___x_4254_; lean_object* v___x_4255_; lean_object* v___x_4256_; lean_object* v___x_4257_; lean_object* v___x_4258_; lean_object* v___x_4259_; lean_object* v___x_4260_; lean_object* v___x_4261_; lean_object* v___x_4262_; lean_object* v___x_4263_; lean_object* v___x_4264_; lean_object* v___x_4265_; lean_object* v___x_4266_; lean_object* v___x_4267_; lean_object* v___x_4268_; lean_object* v___x_4269_; lean_object* v___x_4270_; lean_object* v___x_4271_; lean_object* v___x_4272_; lean_object* v___x_4273_; lean_object* v___x_4274_; lean_object* v___x_4275_; lean_object* v___x_4276_; lean_object* v___x_4277_; lean_object* v___x_4278_; lean_object* v___x_4279_; lean_object* v___x_4280_; lean_object* v___x_4281_; lean_object* v___x_4282_; lean_object* v___x_4283_; lean_object* v___x_4284_; lean_object* v___x_4285_; lean_object* v___x_4286_; lean_object* v___x_4287_; lean_object* v___x_4288_; lean_object* v___x_4289_; lean_object* v___x_4290_; lean_object* v___x_4291_; lean_object* v___x_4292_; lean_object* v___x_4293_; lean_object* v___x_4294_; lean_object* v___x_4295_; lean_object* v___x_4296_; lean_object* v___x_4297_; lean_object* v___x_4298_; lean_object* v___x_4299_; lean_object* v___x_4300_; lean_object* v___x_4301_; lean_object* v___x_4302_; lean_object* v___x_4303_; lean_object* v___x_4304_; lean_object* v___x_4305_; 
v_ref_4216_ = lean_ctor_get(v_a_4210_, 5);
v_quotContext_4217_ = lean_ctor_get(v_a_4210_, 10);
v_currMacroScope_4218_ = lean_ctor_get(v_a_4210_, 11);
v___x_4219_ = lean_unsigned_to_nat(1u);
v___x_4220_ = l_Lean_Syntax_getArg(v_x_4203_, v___x_4219_);
v___x_4221_ = lean_unsigned_to_nat(3u);
v___x_4222_ = l_Lean_Syntax_getArg(v_x_4203_, v___x_4221_);
lean_dec(v_x_4203_);
v___x_4223_ = 0;
v___x_4224_ = l_Lean_SourceInfo_fromRef(v_ref_4216_, v___x_4223_);
v___x_4225_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__1));
v___x_4226_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__11));
v___x_4227_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__1));
v___x_4228_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__2));
lean_inc_n(v___x_4224_, 36);
v___x_4229_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4229_, 0, v___x_4224_);
lean_ctor_set(v___x_4229_, 1, v___x_4228_);
v___x_4230_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__4));
v___x_4231_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19, &lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19);
v___x_4232_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4232_, 0, v___x_4224_);
lean_ctor_set(v___x_4232_, 1, v___x_4226_);
lean_ctor_set(v___x_4232_, 2, v___x_4231_);
lean_inc_ref_n(v___x_4232_, 2);
v___x_4233_ = l_Lean_Syntax_node1(v___x_4224_, v___x_4230_, v___x_4232_);
v___x_4234_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__6));
v___x_4235_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__8));
v___x_4236_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__10));
v___x_4237_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__11));
v___x_4238_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4238_, 0, v___x_4224_);
lean_ctor_set(v___x_4238_, 1, v___x_4237_);
v___x_4239_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__1, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__1_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__1);
v___x_4240_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__2));
lean_inc_n(v_currMacroScope_4218_, 5);
lean_inc_n(v_quotContext_4217_, 5);
v___x_4241_ = l_Lean_addMacroScope(v_quotContext_4217_, v___x_4240_, v_currMacroScope_4218_);
v___x_4242_ = lean_box(0);
v___x_4243_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4243_, 0, v___x_4224_);
lean_ctor_set(v___x_4243_, 1, v___x_4239_);
lean_ctor_set(v___x_4243_, 2, v___x_4241_);
lean_ctor_set(v___x_4243_, 3, v___x_4242_);
v___x_4244_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__23));
v___x_4245_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4245_, 0, v___x_4224_);
lean_ctor_set(v___x_4245_, 1, v___x_4244_);
v___x_4246_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__4, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__4_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__4);
v___x_4247_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__5));
v___x_4248_ = l_Lean_addMacroScope(v_quotContext_4217_, v___x_4247_, v_currMacroScope_4218_);
v___x_4249_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4249_, 0, v___x_4224_);
lean_ctor_set(v___x_4249_, 1, v___x_4246_);
lean_ctor_set(v___x_4249_, 2, v___x_4248_);
lean_ctor_set(v___x_4249_, 3, v___x_4242_);
v___x_4250_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__7, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__7_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__7);
v___x_4251_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__8));
v___x_4252_ = l_Lean_addMacroScope(v_quotContext_4217_, v___x_4251_, v_currMacroScope_4218_);
v___x_4253_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4253_, 0, v___x_4224_);
lean_ctor_set(v___x_4253_, 1, v___x_4250_);
lean_ctor_set(v___x_4253_, 2, v___x_4252_);
lean_ctor_set(v___x_4253_, 3, v___x_4242_);
lean_inc_ref_n(v___x_4245_, 2);
lean_inc_ref(v___x_4249_);
v___x_4254_ = l_Lean_Syntax_node3(v___x_4224_, v___x_4226_, v___x_4249_, v___x_4245_, v___x_4253_);
v___x_4255_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__12));
v___x_4256_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4256_, 0, v___x_4224_);
lean_ctor_set(v___x_4256_, 1, v___x_4255_);
lean_inc_ref_n(v___x_4256_, 2);
lean_inc_ref_n(v___x_4238_, 2);
v___x_4257_ = l_Lean_Syntax_node3(v___x_4224_, v___x_4236_, v___x_4238_, v___x_4254_, v___x_4256_);
v___x_4258_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__unique__in_____x2c____1___closed__1, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__unique__in_____x2c____1___closed__1_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__unique__in_____x2c____1___closed__1);
v___x_4259_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__unique__in_____x2c____1___closed__2));
v___x_4260_ = l_Lean_addMacroScope(v_quotContext_4217_, v___x_4259_, v_currMacroScope_4218_);
v___x_4261_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4261_, 0, v___x_4224_);
lean_ctor_set(v___x_4261_, 1, v___x_4258_);
lean_ctor_set(v___x_4261_, 2, v___x_4260_);
lean_ctor_set(v___x_4261_, 3, v___x_4242_);
v___x_4262_ = l_Lean_Syntax_node3(v___x_4224_, v___x_4226_, v___x_4257_, v___x_4245_, v___x_4261_);
v___x_4263_ = l_Lean_Syntax_node3(v___x_4224_, v___x_4236_, v___x_4238_, v___x_4262_, v___x_4256_);
lean_inc_ref(v___x_4243_);
v___x_4264_ = l_Lean_Syntax_node3(v___x_4224_, v___x_4226_, v___x_4243_, v___x_4245_, v___x_4263_);
v___x_4265_ = l_Lean_Syntax_node3(v___x_4224_, v___x_4236_, v___x_4238_, v___x_4264_, v___x_4256_);
v___x_4266_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__23));
v___x_4267_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4267_, 0, v___x_4224_);
lean_ctor_set(v___x_4267_, 1, v___x_4266_);
v___x_4268_ = l_Lean_Syntax_node5(v___x_4224_, v___x_4235_, v___x_4265_, v___x_4232_, v___x_4232_, v___x_4267_, v___x_4220_);
v___x_4269_ = l_Lean_Syntax_node1(v___x_4224_, v___x_4234_, v___x_4268_);
v___x_4270_ = l_Lean_Syntax_node3(v___x_4224_, v___x_4227_, v___x_4229_, v___x_4233_, v___x_4269_);
v___x_4271_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__4));
v___x_4272_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4272_, 0, v___x_4224_);
lean_ctor_set(v___x_4272_, 1, v___x_4271_);
v___x_4273_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__2));
v___x_4274_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__3));
v___x_4275_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4275_, 0, v___x_4224_);
lean_ctor_set(v___x_4275_, 1, v___x_4273_);
v___x_4276_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__4));
v___x_4277_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__6));
v___x_4278_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__7));
v___x_4279_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4279_, 0, v___x_4224_);
lean_ctor_set(v___x_4279_, 1, v___x_4278_);
v___x_4280_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__9));
v___x_4281_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__11, &lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__11_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__11);
v___x_4282_ = lean_box(0);
v___x_4283_ = l_Lean_addMacroScope(v_quotContext_4217_, v___x_4282_, v_currMacroScope_4218_);
v___x_4284_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__46));
v___x_4285_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4285_, 0, v___x_4224_);
lean_ctor_set(v___x_4285_, 1, v___x_4281_);
lean_ctor_set(v___x_4285_, 2, v___x_4283_);
lean_ctor_set(v___x_4285_, 3, v___x_4284_);
v___x_4286_ = l_Lean_Syntax_node1(v___x_4224_, v___x_4280_, v___x_4285_);
v___x_4287_ = l_Lean_Syntax_node2(v___x_4224_, v___x_4277_, v___x_4279_, v___x_4286_);
v___x_4288_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__4));
v___x_4289_ = l_Lean_Syntax_node2(v___x_4224_, v___x_4226_, v___x_4243_, v___x_4249_);
lean_inc(v___x_4222_);
v___x_4290_ = l_Lean_Syntax_node2(v___x_4224_, v___x_4288_, v___x_4222_, v___x_4289_);
v___x_4291_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__49));
v___x_4292_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4292_, 0, v___x_4224_);
lean_ctor_set(v___x_4292_, 1, v___x_4291_);
v___x_4293_ = l_Lean_Syntax_node3(v___x_4224_, v___x_4276_, v___x_4287_, v___x_4290_, v___x_4292_);
v___x_4294_ = l_Lean_Syntax_node2(v___x_4224_, v___x_4274_, v___x_4275_, v___x_4293_);
v___x_4295_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__9));
v___x_4296_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__10));
v___x_4297_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4297_, 0, v___x_4224_);
lean_ctor_set(v___x_4297_, 1, v___x_4295_);
v___x_4298_ = l_Lean_Syntax_node2(v___x_4224_, v___x_4296_, v___x_4297_, v___x_4222_);
v___x_4299_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__11));
v___x_4300_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__12));
v___x_4301_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4301_, 0, v___x_4224_);
lean_ctor_set(v___x_4301_, 1, v___x_4299_);
v___x_4302_ = l_Lean_Syntax_node1(v___x_4224_, v___x_4300_, v___x_4301_);
lean_inc_ref_n(v___x_4272_, 2);
v___x_4303_ = l_Lean_Syntax_node7(v___x_4224_, v___x_4226_, v___x_4270_, v___x_4272_, v___x_4294_, v___x_4272_, v___x_4298_, v___x_4272_, v___x_4302_);
v___x_4304_ = l_Lean_Syntax_node1(v___x_4224_, v___x_4225_, v___x_4303_);
v___x_4305_ = l_Lean_Elab_Tactic_evalTactic(v___x_4304_, v_a_4204_, v_a_4205_, v_a_4206_, v_a_4207_, v_a_4208_, v_a_4209_, v_a_4210_, v_a_4211_);
return v___x_4305_;
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__unique__in_____x2c____1___boxed(lean_object* v_x_4306_, lean_object* v_a_4307_, lean_object* v_a_4308_, lean_object* v_a_4309_, lean_object* v_a_4310_, lean_object* v_a_4311_, lean_object* v_a_4312_, lean_object* v_a_4313_, lean_object* v_a_4314_, lean_object* v_a_4315_){
_start:
{
lean_object* v_res_4316_; 
v_res_4316_ = lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__unique__in_____x2c____1(v_x_4306_, v_a_4307_, v_a_4308_, v_a_4309_, v_a_4310_, v_a_4311_, v_a_4312_, v_a_4313_, v_a_4314_);
lean_dec(v_a_4314_);
lean_dec_ref(v_a_4313_);
lean_dec(v_a_4312_);
lean_dec_ref(v_a_4311_);
lean_dec(v_a_4310_);
lean_dec_ref(v_a_4309_);
lean_dec(v_a_4308_);
lean_dec_ref(v_a_4307_);
return v_res_4316_;
}
}
static lean_object* _init_lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_4350_; lean_object* v___x_4351_; 
v___x_4350_ = ((lean_object*)(lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0___redArg___lam__0___closed__0));
v___x_4351_ = l_Lean_stringToMessageData(v___x_4350_);
return v___x_4351_;
}
}
static lean_object* _init_lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_4353_; lean_object* v___x_4354_; 
v___x_4353_ = ((lean_object*)(lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0___redArg___lam__0___closed__2));
v___x_4354_ = l_Lean_stringToMessageData(v___x_4353_);
return v___x_4354_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0___redArg___lam__0(lean_object* v___x_4355_, lean_object* v___x_4356_, lean_object* v___x_4357_, lean_object* v___x_4358_, lean_object* v___x_4359_, lean_object* v_a_4360_, uint8_t v___x_4361_, uint8_t v___x_4362_, lean_object* v_b_4363_, lean_object* v___y_4364_, lean_object* v___y_4365_, lean_object* v___y_4366_, lean_object* v___y_4367_){
_start:
{
lean_object* v___x_4369_; lean_object* v___x_4370_; 
lean_inc_ref(v_b_4363_);
v___x_4369_ = l_Lean_Expr_app___override(v___x_4355_, v_b_4363_);
lean_inc(v___y_4367_);
lean_inc_ref(v___y_4366_);
lean_inc(v___y_4365_);
lean_inc_ref(v___y_4364_);
v___x_4370_ = lean_whnf(v___x_4369_, v___y_4364_, v___y_4365_, v___y_4366_, v___y_4367_);
if (lean_obj_tag(v___x_4370_) == 0)
{
lean_object* v_a_4371_; lean_object* v___x_4372_; lean_object* v_fst_4373_; lean_object* v_snd_4374_; lean_object* v___x_4376_; uint8_t v_isShared_4377_; uint8_t v_isSharedCheck_4419_; 
v_a_4371_ = lean_ctor_get(v___x_4370_, 0);
lean_inc(v_a_4371_);
lean_dec_ref(v___x_4370_);
v___x_4372_ = l_Lean_Expr_getAppFnArgs(v_a_4371_);
v_fst_4373_ = lean_ctor_get(v___x_4372_, 0);
v_snd_4374_ = lean_ctor_get(v___x_4372_, 1);
v_isSharedCheck_4419_ = !lean_is_exclusive(v___x_4372_);
if (v_isSharedCheck_4419_ == 0)
{
v___x_4376_ = v___x_4372_;
v_isShared_4377_ = v_isSharedCheck_4419_;
goto v_resetjp_4375_;
}
else
{
lean_inc(v_snd_4374_);
lean_inc(v_fst_4373_);
lean_dec(v___x_4372_);
v___x_4376_ = lean_box(0);
v_isShared_4377_ = v_isSharedCheck_4419_;
goto v_resetjp_4375_;
}
v_resetjp_4375_:
{
lean_object* v___x_4385_; uint8_t v___x_4386_; 
v___x_4385_ = ((lean_object*)(lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1_spec__0___redArg___lam__0___closed__2));
v___x_4386_ = lean_name_eq(v_fst_4373_, v___x_4385_);
if (v___x_4386_ == 0)
{
lean_dec(v_snd_4374_);
lean_dec_ref(v_b_4363_);
lean_dec_ref(v_a_4360_);
goto v___jp_4378_;
}
else
{
lean_object* v___x_4387_; uint8_t v___x_4388_; 
v___x_4387_ = lean_array_get_size(v_snd_4374_);
v___x_4388_ = lean_nat_dec_eq(v___x_4387_, v___x_4356_);
if (v___x_4388_ == 0)
{
lean_dec(v_snd_4374_);
lean_dec_ref(v_b_4363_);
lean_dec_ref(v_a_4360_);
goto v___jp_4378_;
}
else
{
lean_object* v___x_4389_; lean_object* v___x_4390_; 
lean_del_object(v___x_4376_);
lean_dec(v_fst_4373_);
v___x_4389_ = lean_array_get(v___x_4357_, v_snd_4374_, v___x_4358_);
lean_dec(v_snd_4374_);
lean_inc(v___y_4367_);
lean_inc_ref(v___y_4366_);
lean_inc(v___y_4365_);
lean_inc_ref(v___y_4364_);
v___x_4390_ = lean_whnf(v___x_4389_, v___y_4364_, v___y_4365_, v___y_4366_, v___y_4367_);
if (lean_obj_tag(v___x_4390_) == 0)
{
lean_object* v_a_4391_; lean_object* v___x_4392_; lean_object* v_fst_4393_; lean_object* v_snd_4394_; lean_object* v___x_4396_; uint8_t v_isShared_4397_; uint8_t v_isSharedCheck_4418_; 
v_a_4391_ = lean_ctor_get(v___x_4390_, 0);
lean_inc(v_a_4391_);
lean_dec_ref(v___x_4390_);
v___x_4392_ = l_Lean_Expr_getAppFnArgs(v_a_4391_);
v_fst_4393_ = lean_ctor_get(v___x_4392_, 0);
v_snd_4394_ = lean_ctor_get(v___x_4392_, 1);
v_isSharedCheck_4418_ = !lean_is_exclusive(v___x_4392_);
if (v_isSharedCheck_4418_ == 0)
{
v___x_4396_ = v___x_4392_;
v_isShared_4397_ = v_isSharedCheck_4418_;
goto v_resetjp_4395_;
}
else
{
lean_inc(v_snd_4394_);
lean_inc(v_fst_4393_);
lean_dec(v___x_4392_);
v___x_4396_ = lean_box(0);
v_isShared_4397_ = v_isSharedCheck_4418_;
goto v_resetjp_4395_;
}
v_resetjp_4395_:
{
uint8_t v___x_4405_; 
v___x_4405_ = lean_name_eq(v_fst_4393_, v___x_4385_);
if (v___x_4405_ == 0)
{
lean_dec(v_snd_4394_);
lean_dec_ref(v_b_4363_);
lean_dec_ref(v_a_4360_);
goto v___jp_4398_;
}
else
{
lean_object* v___x_4406_; uint8_t v___x_4407_; 
v___x_4406_ = lean_array_get_size(v_snd_4394_);
v___x_4407_ = lean_nat_dec_eq(v___x_4406_, v___x_4356_);
if (v___x_4407_ == 0)
{
lean_dec(v_snd_4394_);
lean_dec_ref(v_b_4363_);
lean_dec_ref(v_a_4360_);
goto v___jp_4398_;
}
else
{
lean_object* v___x_4408_; lean_object* v___x_4409_; 
lean_del_object(v___x_4396_);
lean_dec(v_fst_4393_);
v___x_4408_ = lean_array_get_borrowed(v___x_4357_, v_snd_4394_, v___x_4359_);
lean_inc(v___x_4408_);
v___x_4409_ = l_Lean_mkArrow(v___x_4408_, v_a_4360_, v___y_4366_, v___y_4367_);
if (lean_obj_tag(v___x_4409_) == 0)
{
lean_object* v_a_4410_; lean_object* v___x_4411_; lean_object* v___x_4412_; 
v_a_4410_ = lean_ctor_get(v___x_4409_, 0);
lean_inc(v_a_4410_);
lean_dec_ref(v___x_4409_);
v___x_4411_ = lean_array_get(v___x_4357_, v_snd_4394_, v___x_4358_);
lean_dec(v_snd_4394_);
v___x_4412_ = l_Lean_mkArrow(v___x_4411_, v_a_4410_, v___y_4366_, v___y_4367_);
if (lean_obj_tag(v___x_4412_) == 0)
{
lean_object* v_a_4413_; lean_object* v___x_4414_; lean_object* v___x_4415_; uint8_t v___x_4416_; lean_object* v___x_4417_; 
v_a_4413_ = lean_ctor_get(v___x_4412_, 0);
lean_inc(v_a_4413_);
lean_dec_ref(v___x_4412_);
v___x_4414_ = lean_mk_empty_array_with_capacity(v___x_4359_);
v___x_4415_ = lean_array_push(v___x_4414_, v_b_4363_);
v___x_4416_ = 1;
v___x_4417_ = l_Lean_Meta_mkForallFVars(v___x_4415_, v_a_4413_, v___x_4361_, v___x_4362_, v___x_4362_, v___x_4416_, v___y_4364_, v___y_4365_, v___y_4366_, v___y_4367_);
lean_dec_ref(v___x_4415_);
return v___x_4417_;
}
else
{
lean_dec_ref(v_b_4363_);
return v___x_4412_;
}
}
else
{
lean_dec(v_snd_4394_);
lean_dec_ref(v_b_4363_);
return v___x_4409_;
}
}
}
v___jp_4398_:
{
lean_object* v___x_4399_; lean_object* v___x_4400_; lean_object* v___x_4402_; 
v___x_4399_ = lean_obj_once(&lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0___redArg___lam__0___closed__3, &lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0___redArg___lam__0___closed__3_once, _init_lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0___redArg___lam__0___closed__3);
v___x_4400_ = l_Lean_MessageData_ofName(v_fst_4393_);
if (v_isShared_4397_ == 0)
{
lean_ctor_set_tag(v___x_4396_, 7);
lean_ctor_set(v___x_4396_, 1, v___x_4400_);
lean_ctor_set(v___x_4396_, 0, v___x_4399_);
v___x_4402_ = v___x_4396_;
goto v_reusejp_4401_;
}
else
{
lean_object* v_reuseFailAlloc_4404_; 
v_reuseFailAlloc_4404_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4404_, 0, v___x_4399_);
lean_ctor_set(v_reuseFailAlloc_4404_, 1, v___x_4400_);
v___x_4402_ = v_reuseFailAlloc_4404_;
goto v_reusejp_4401_;
}
v_reusejp_4401_:
{
lean_object* v___x_4403_; 
v___x_4403_ = l_Lean_throwError___at___00Lean_Elab_Tactic_elabNativeDecideCore_spec__0___redArg(v___x_4402_, v___y_4364_, v___y_4365_, v___y_4366_, v___y_4367_);
return v___x_4403_;
}
}
}
}
else
{
lean_dec_ref(v_b_4363_);
lean_dec_ref(v_a_4360_);
return v___x_4390_;
}
}
}
v___jp_4378_:
{
lean_object* v___x_4379_; lean_object* v___x_4380_; lean_object* v___x_4382_; 
v___x_4379_ = lean_obj_once(&lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0___redArg___lam__0___closed__1, &lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0___redArg___lam__0___closed__1_once, _init_lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0___redArg___lam__0___closed__1);
v___x_4380_ = l_Lean_MessageData_ofName(v_fst_4373_);
if (v_isShared_4377_ == 0)
{
lean_ctor_set_tag(v___x_4376_, 7);
lean_ctor_set(v___x_4376_, 1, v___x_4380_);
lean_ctor_set(v___x_4376_, 0, v___x_4379_);
v___x_4382_ = v___x_4376_;
goto v_reusejp_4381_;
}
else
{
lean_object* v_reuseFailAlloc_4384_; 
v_reuseFailAlloc_4384_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4384_, 0, v___x_4379_);
lean_ctor_set(v_reuseFailAlloc_4384_, 1, v___x_4380_);
v___x_4382_ = v_reuseFailAlloc_4384_;
goto v_reusejp_4381_;
}
v_reusejp_4381_:
{
lean_object* v___x_4383_; 
v___x_4383_ = l_Lean_throwError___at___00Lean_Elab_Tactic_elabNativeDecideCore_spec__0___redArg(v___x_4382_, v___y_4364_, v___y_4365_, v___y_4366_, v___y_4367_);
return v___x_4383_;
}
}
}
}
else
{
lean_dec_ref(v_b_4363_);
lean_dec_ref(v_a_4360_);
return v___x_4370_;
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0___redArg___lam__0___boxed(lean_object* v___x_4420_, lean_object* v___x_4421_, lean_object* v___x_4422_, lean_object* v___x_4423_, lean_object* v___x_4424_, lean_object* v_a_4425_, lean_object* v___x_4426_, lean_object* v___x_4427_, lean_object* v_b_4428_, lean_object* v___y_4429_, lean_object* v___y_4430_, lean_object* v___y_4431_, lean_object* v___y_4432_, lean_object* v___y_4433_){
_start:
{
uint8_t v___x_25957__boxed_4434_; uint8_t v___x_25958__boxed_4435_; lean_object* v_res_4436_; 
v___x_25957__boxed_4434_ = lean_unbox(v___x_4426_);
v___x_25958__boxed_4435_ = lean_unbox(v___x_4427_);
v_res_4436_ = lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0___redArg___lam__0(v___x_4420_, v___x_4421_, v___x_4422_, v___x_4423_, v___x_4424_, v_a_4425_, v___x_25957__boxed_4434_, v___x_25958__boxed_4435_, v_b_4428_, v___y_4429_, v___y_4430_, v___y_4431_, v___y_4432_);
lean_dec(v___y_4432_);
lean_dec_ref(v___y_4431_);
lean_dec(v___y_4430_);
lean_dec_ref(v___y_4429_);
lean_dec(v___x_4424_);
lean_dec(v___x_4423_);
lean_dec_ref(v___x_4422_);
lean_dec(v___x_4421_);
return v_res_4436_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0___redArg(lean_object* v___x_4437_, lean_object* v_a_4438_, lean_object* v___x_4439_, lean_object* v_name_4440_, uint8_t v_bi_4441_, lean_object* v_type_4442_, uint8_t v_kind_4443_, lean_object* v___y_4444_, lean_object* v___y_4445_, lean_object* v___y_4446_, lean_object* v___y_4447_){
_start:
{
lean_object* v___x_4449_; lean_object* v___x_4450_; lean_object* v___x_4451_; lean_object* v___x_4452_; uint8_t v___x_4453_; uint8_t v___x_4454_; lean_object* v___x_4455_; lean_object* v___x_4456_; lean_object* v___f_4457_; lean_object* v___x_4458_; 
v___x_4449_ = lean_unsigned_to_nat(2u);
v___x_4450_ = l_Lean_instInhabitedExpr;
v___x_4451_ = lean_unsigned_to_nat(0u);
v___x_4452_ = lean_unsigned_to_nat(1u);
v___x_4453_ = 0;
v___x_4454_ = lean_nat_dec_eq(v___x_4439_, v___x_4449_);
v___x_4455_ = lean_box(v___x_4453_);
v___x_4456_ = lean_box(v___x_4454_);
v___f_4457_ = lean_alloc_closure((void*)(lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0___redArg___lam__0___boxed), 14, 8);
lean_closure_set(v___f_4457_, 0, v___x_4437_);
lean_closure_set(v___f_4457_, 1, v___x_4449_);
lean_closure_set(v___f_4457_, 2, v___x_4450_);
lean_closure_set(v___f_4457_, 3, v___x_4451_);
lean_closure_set(v___f_4457_, 4, v___x_4452_);
lean_closure_set(v___f_4457_, 5, v_a_4438_);
lean_closure_set(v___f_4457_, 6, v___x_4455_);
lean_closure_set(v___f_4457_, 7, v___x_4456_);
v___x_4458_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp___redArg(v_name_4440_, v_bi_4441_, v_type_4442_, v___f_4457_, v_kind_4443_, v___y_4444_, v___y_4445_, v___y_4446_, v___y_4447_);
if (lean_obj_tag(v___x_4458_) == 0)
{
return v___x_4458_;
}
else
{
lean_object* v_a_4459_; lean_object* v___x_4461_; uint8_t v_isShared_4462_; uint8_t v_isSharedCheck_4466_; 
v_a_4459_ = lean_ctor_get(v___x_4458_, 0);
v_isSharedCheck_4466_ = !lean_is_exclusive(v___x_4458_);
if (v_isSharedCheck_4466_ == 0)
{
v___x_4461_ = v___x_4458_;
v_isShared_4462_ = v_isSharedCheck_4466_;
goto v_resetjp_4460_;
}
else
{
lean_inc(v_a_4459_);
lean_dec(v___x_4458_);
v___x_4461_ = lean_box(0);
v_isShared_4462_ = v_isSharedCheck_4466_;
goto v_resetjp_4460_;
}
v_resetjp_4460_:
{
lean_object* v___x_4464_; 
if (v_isShared_4462_ == 0)
{
v___x_4464_ = v___x_4461_;
goto v_reusejp_4463_;
}
else
{
lean_object* v_reuseFailAlloc_4465_; 
v_reuseFailAlloc_4465_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4465_, 0, v_a_4459_);
v___x_4464_ = v_reuseFailAlloc_4465_;
goto v_reusejp_4463_;
}
v_reusejp_4463_:
{
return v___x_4464_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0___redArg___boxed(lean_object* v___x_4467_, lean_object* v_a_4468_, lean_object* v___x_4469_, lean_object* v_name_4470_, lean_object* v_bi_4471_, lean_object* v_type_4472_, lean_object* v_kind_4473_, lean_object* v___y_4474_, lean_object* v___y_4475_, lean_object* v___y_4476_, lean_object* v___y_4477_, lean_object* v___y_4478_){
_start:
{
uint8_t v_bi_boxed_4479_; uint8_t v_kind_boxed_4480_; lean_object* v_res_4481_; 
v_bi_boxed_4479_ = lean_unbox(v_bi_4471_);
v_kind_boxed_4480_ = lean_unbox(v_kind_4473_);
v_res_4481_ = lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0___redArg(v___x_4467_, v_a_4468_, v___x_4469_, v_name_4470_, v_bi_boxed_4479_, v_type_4472_, v_kind_boxed_4480_, v___y_4474_, v___y_4475_, v___y_4476_, v___y_4477_);
lean_dec(v___y_4477_);
lean_dec_ref(v___y_4476_);
lean_dec(v___y_4475_);
lean_dec_ref(v___y_4474_);
lean_dec(v___x_4469_);
return v_res_4481_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0(lean_object* v___x_4482_, lean_object* v_a_4483_, lean_object* v___x_4484_, lean_object* v_name_4485_, uint8_t v_bi_4486_, lean_object* v_type_4487_, uint8_t v_kind_4488_, lean_object* v___y_4489_, lean_object* v___y_4490_, lean_object* v___y_4491_, lean_object* v___y_4492_, lean_object* v___y_4493_, lean_object* v___y_4494_, lean_object* v___y_4495_, lean_object* v___y_4496_){
_start:
{
lean_object* v___x_4498_; 
v___x_4498_ = lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0___redArg(v___x_4482_, v_a_4483_, v___x_4484_, v_name_4485_, v_bi_4486_, v_type_4487_, v_kind_4488_, v___y_4493_, v___y_4494_, v___y_4495_, v___y_4496_);
return v___x_4498_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0___boxed(lean_object* v___x_4499_, lean_object* v_a_4500_, lean_object* v___x_4501_, lean_object* v_name_4502_, lean_object* v_bi_4503_, lean_object* v_type_4504_, lean_object* v_kind_4505_, lean_object* v___y_4506_, lean_object* v___y_4507_, lean_object* v___y_4508_, lean_object* v___y_4509_, lean_object* v___y_4510_, lean_object* v___y_4511_, lean_object* v___y_4512_, lean_object* v___y_4513_, lean_object* v___y_4514_){
_start:
{
uint8_t v_bi_boxed_4515_; uint8_t v_kind_boxed_4516_; lean_object* v_res_4517_; 
v_bi_boxed_4515_ = lean_unbox(v_bi_4503_);
v_kind_boxed_4516_ = lean_unbox(v_kind_4505_);
v_res_4517_ = lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0(v___x_4499_, v_a_4500_, v___x_4501_, v_name_4502_, v_bi_boxed_4515_, v_type_4504_, v_kind_boxed_4516_, v___y_4506_, v___y_4507_, v___y_4508_, v___y_4509_, v___y_4510_, v___y_4511_, v___y_4512_, v___y_4513_);
lean_dec(v___y_4513_);
lean_dec_ref(v___y_4512_);
lean_dec(v___y_4511_);
lean_dec_ref(v___y_4510_);
lean_dec(v___y_4509_);
lean_dec_ref(v___y_4508_);
lean_dec(v___y_4507_);
lean_dec_ref(v___y_4506_);
lean_dec(v___x_4501_);
return v_res_4517_;
}
}
static lean_object* _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1___closed__1(void){
_start:
{
lean_object* v___x_4519_; lean_object* v___x_4520_; 
v___x_4519_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1___closed__0));
v___x_4520_ = l_Lean_stringToMessageData(v___x_4519_);
return v___x_4520_;
}
}
static lean_object* _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1___closed__3(void){
_start:
{
lean_object* v___x_4522_; lean_object* v___x_4523_; 
v___x_4522_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1___closed__2));
v___x_4523_ = l_String_toRawSubstring_x27(v___x_4522_);
return v___x_4523_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1(lean_object* v_x_4526_, lean_object* v_a_4527_, lean_object* v_a_4528_, lean_object* v_a_4529_, lean_object* v_a_4530_, lean_object* v_a_4531_, lean_object* v_a_4532_, lean_object* v_a_4533_, lean_object* v_a_4534_){
_start:
{
lean_object* v___x_4536_; uint8_t v___x_4537_; 
v___x_4536_ = ((lean_object*)(lp_Props2Theories_tactic__elim__exists__unique__in___x2c___x2c___00__closed__1));
lean_inc(v_x_4526_);
v___x_4537_ = l_Lean_Syntax_isOfKind(v_x_4526_, v___x_4536_);
if (v___x_4537_ == 0)
{
lean_object* v___x_4538_; 
lean_dec(v_x_4526_);
v___x_4538_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__0___redArg();
return v___x_4538_;
}
else
{
lean_object* v___x_4539_; lean_object* v___x_4540_; lean_object* v___x_4541_; uint8_t v___x_4542_; lean_object* v___x_4543_; 
v___x_4539_ = lean_unsigned_to_nat(1u);
v___x_4540_ = l_Lean_Syntax_getArg(v_x_4526_, v___x_4539_);
v___x_4541_ = lean_box(0);
v___x_4542_ = 0;
lean_inc(v___x_4540_);
v___x_4543_ = l_Lean_Elab_Tactic_elabTerm(v___x_4540_, v___x_4541_, v___x_4542_, v_a_4527_, v_a_4528_, v_a_4529_, v_a_4530_, v_a_4531_, v_a_4532_, v_a_4533_, v_a_4534_);
if (lean_obj_tag(v___x_4543_) == 0)
{
lean_object* v_a_4544_; lean_object* v___x_4545_; 
v_a_4544_ = lean_ctor_get(v___x_4543_, 0);
lean_inc_n(v_a_4544_, 2);
lean_dec_ref(v___x_4543_);
lean_inc(v_a_4534_);
lean_inc_ref(v_a_4533_);
lean_inc(v_a_4532_);
lean_inc_ref(v_a_4531_);
v___x_4545_ = lean_infer_type(v_a_4544_, v_a_4531_, v_a_4532_, v_a_4533_, v_a_4534_);
if (lean_obj_tag(v___x_4545_) == 0)
{
lean_object* v_a_4546_; lean_object* v___x_4547_; 
v_a_4546_ = lean_ctor_get(v___x_4545_, 0);
lean_inc(v_a_4546_);
lean_dec_ref(v___x_4545_);
lean_inc(v_a_4534_);
lean_inc_ref(v_a_4533_);
lean_inc(v_a_4532_);
lean_inc_ref(v_a_4531_);
v___x_4547_ = lean_whnf(v_a_4546_, v_a_4531_, v_a_4532_, v_a_4533_, v_a_4534_);
if (lean_obj_tag(v___x_4547_) == 0)
{
lean_object* v_a_4548_; lean_object* v___x_4556_; lean_object* v_fst_4557_; lean_object* v_snd_4558_; lean_object* v___x_4560_; uint8_t v_isShared_4561_; uint8_t v_isSharedCheck_4885_; 
v_a_4548_ = lean_ctor_get(v___x_4547_, 0);
lean_inc(v_a_4548_);
lean_dec_ref(v___x_4547_);
v___x_4556_ = l_Lean_Expr_getAppFnArgs(v_a_4548_);
v_fst_4557_ = lean_ctor_get(v___x_4556_, 0);
v_snd_4558_ = lean_ctor_get(v___x_4556_, 1);
v_isSharedCheck_4885_ = !lean_is_exclusive(v___x_4556_);
if (v_isSharedCheck_4885_ == 0)
{
v___x_4560_ = v___x_4556_;
v_isShared_4561_ = v_isSharedCheck_4885_;
goto v_resetjp_4559_;
}
else
{
lean_inc(v_snd_4558_);
lean_inc(v_fst_4557_);
lean_dec(v___x_4556_);
v___x_4560_ = lean_box(0);
v_isShared_4561_ = v_isSharedCheck_4885_;
goto v_resetjp_4559_;
}
v___jp_4549_:
{
lean_object* v___x_4550_; lean_object* v___x_4551_; lean_object* v___x_4552_; lean_object* v___x_4553_; lean_object* v___x_4554_; lean_object* v___x_4555_; 
v___x_4550_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__1, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__1_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__1);
v___x_4551_ = l_Lean_MessageData_ofSyntax(v___x_4540_);
v___x_4552_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4552_, 0, v___x_4550_);
lean_ctor_set(v___x_4552_, 1, v___x_4551_);
v___x_4553_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1___closed__1, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1___closed__1_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1___closed__1);
v___x_4554_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4554_, 0, v___x_4552_);
lean_ctor_set(v___x_4554_, 1, v___x_4553_);
v___x_4555_ = l_Lean_throwError___at___00Lean_Elab_Tactic_elabNativeDecideCore_spec__0___redArg(v___x_4554_, v_a_4531_, v_a_4532_, v_a_4533_, v_a_4534_);
return v___x_4555_;
}
v_resetjp_4559_:
{
lean_object* v___x_4562_; uint8_t v___x_4563_; 
v___x_4562_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__4));
v___x_4563_ = lean_name_eq(v_fst_4557_, v___x_4562_);
lean_dec(v_fst_4557_);
if (v___x_4563_ == 0)
{
lean_del_object(v___x_4560_);
lean_dec(v_snd_4558_);
lean_dec(v_a_4544_);
lean_dec(v_x_4526_);
goto v___jp_4549_;
}
else
{
lean_object* v___x_4564_; lean_object* v___x_4565_; uint8_t v___x_4566_; 
v___x_4564_ = lean_unsigned_to_nat(2u);
v___x_4565_ = lean_array_get_size(v_snd_4558_);
v___x_4566_ = lean_nat_dec_eq(v___x_4565_, v___x_4564_);
if (v___x_4566_ == 0)
{
lean_del_object(v___x_4560_);
lean_dec(v_snd_4558_);
lean_dec(v_a_4544_);
lean_dec(v_x_4526_);
goto v___jp_4549_;
}
else
{
lean_object* v___x_4567_; lean_object* v___x_4568_; lean_object* v___x_4569_; 
v___x_4567_ = lean_unsigned_to_nat(3u);
v___x_4568_ = l_Lean_Syntax_getArg(v_x_4526_, v___x_4567_);
v___x_4569_ = l_Lean_Elab_Tactic_elabTerm(v___x_4568_, v___x_4541_, v___x_4542_, v_a_4527_, v_a_4528_, v_a_4529_, v_a_4530_, v_a_4531_, v_a_4532_, v_a_4533_, v_a_4534_);
if (lean_obj_tag(v___x_4569_) == 0)
{
lean_object* v_a_4570_; lean_object* v___x_4571_; lean_object* v___x_4572_; lean_object* v___x_4573_; 
v_a_4570_ = lean_ctor_get(v___x_4569_, 0);
lean_inc(v_a_4570_);
lean_dec_ref(v___x_4569_);
v___x_4571_ = l_Lean_instInhabitedExpr;
v___x_4572_ = lean_array_get(v___x_4571_, v_snd_4558_, v___x_4539_);
lean_dec(v_snd_4558_);
lean_inc(v_a_4534_);
lean_inc_ref(v_a_4533_);
lean_inc(v_a_4532_);
lean_inc_ref(v_a_4531_);
lean_inc(v___x_4572_);
v___x_4573_ = lean_infer_type(v___x_4572_, v_a_4531_, v_a_4532_, v_a_4533_, v_a_4534_);
if (lean_obj_tag(v___x_4573_) == 0)
{
lean_object* v_a_4574_; lean_object* v___x_4575_; lean_object* v___x_4576_; uint8_t v___x_4577_; uint8_t v___x_4578_; lean_object* v___x_4579_; 
v_a_4574_ = lean_ctor_get(v___x_4573_, 0);
lean_inc(v_a_4574_);
lean_dec_ref(v___x_4573_);
v___x_4575_ = l_Lean_Expr_bindingDomain_x21(v_a_4574_);
lean_dec(v_a_4574_);
v___x_4576_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__6));
v___x_4577_ = 0;
v___x_4578_ = 0;
lean_inc(v_a_4570_);
v___x_4579_ = lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0___redArg(v___x_4572_, v_a_4570_, v___x_4565_, v___x_4576_, v___x_4577_, v___x_4575_, v___x_4578_, v_a_4531_, v_a_4532_, v_a_4533_, v_a_4534_);
if (lean_obj_tag(v___x_4579_) == 0)
{
lean_object* v_a_4580_; lean_object* v___x_4581_; 
v_a_4580_ = lean_ctor_get(v___x_4579_, 0);
lean_inc(v_a_4580_);
lean_dec_ref(v___x_4579_);
v___x_4581_ = l_Lean_mkArrow(v_a_4580_, v_a_4570_, v_a_4533_, v_a_4534_);
if (lean_obj_tag(v___x_4581_) == 0)
{
lean_object* v_a_4582_; lean_object* v___x_4583_; 
v_a_4582_ = lean_ctor_get(v___x_4581_, 0);
lean_inc(v_a_4582_);
lean_dec_ref(v___x_4581_);
v___x_4583_ = l_Lean_Meta_reduce(v_a_4582_, v___x_4566_, v___x_4566_, v___x_4566_, v_a_4531_, v_a_4532_, v_a_4533_, v_a_4534_);
if (lean_obj_tag(v___x_4583_) == 0)
{
lean_object* v_a_4584_; lean_object* v___x_4585_; lean_object* v___x_4586_; 
v_a_4584_ = lean_ctor_get(v___x_4583_, 0);
lean_inc(v_a_4584_);
lean_dec_ref(v___x_4583_);
v___x_4585_ = lean_box(1);
v___x_4586_ = l_Lean_PrettyPrinter_delab(v_a_4584_, v___x_4585_, v_a_4531_, v_a_4532_, v_a_4533_, v_a_4534_);
if (lean_obj_tag(v___x_4586_) == 0)
{
lean_object* v_a_4587_; lean_object* v___x_4588_; 
v_a_4587_ = lean_ctor_get(v___x_4586_, 0);
lean_inc(v_a_4587_);
lean_dec_ref(v___x_4586_);
lean_inc(v_a_4534_);
lean_inc_ref(v_a_4533_);
lean_inc(v_a_4532_);
lean_inc_ref(v_a_4531_);
v___x_4588_ = lean_infer_type(v_a_4544_, v_a_4531_, v_a_4532_, v_a_4533_, v_a_4534_);
if (lean_obj_tag(v___x_4588_) == 0)
{
lean_object* v_a_4589_; lean_object* v___x_4590_; 
v_a_4589_ = lean_ctor_get(v___x_4588_, 0);
lean_inc(v_a_4589_);
lean_dec_ref(v___x_4588_);
lean_inc(v_a_4534_);
lean_inc_ref(v_a_4533_);
lean_inc(v_a_4532_);
lean_inc_ref(v_a_4531_);
v___x_4590_ = lean_whnf(v_a_4589_, v_a_4531_, v_a_4532_, v_a_4533_, v_a_4534_);
if (lean_obj_tag(v___x_4590_) == 0)
{
lean_object* v_a_4591_; lean_object* v___x_4592_; 
v_a_4591_ = lean_ctor_get(v___x_4590_, 0);
lean_inc(v_a_4591_);
lean_dec_ref(v___x_4590_);
v___x_4592_ = l_Lean_PrettyPrinter_delab(v_a_4591_, v___x_4585_, v_a_4531_, v_a_4532_, v_a_4533_, v_a_4534_);
if (lean_obj_tag(v___x_4592_) == 0)
{
lean_object* v_a_4593_; lean_object* v_ref_4594_; lean_object* v_quotContext_4595_; lean_object* v_currMacroScope_4596_; lean_object* v___x_4597_; lean_object* v___x_4598_; lean_object* v___x_4599_; lean_object* v___x_4600_; lean_object* v___x_4601_; lean_object* v___x_4602_; lean_object* v___x_4603_; lean_object* v___x_4604_; lean_object* v___x_4605_; lean_object* v___x_4606_; lean_object* v___x_4608_; 
v_a_4593_ = lean_ctor_get(v___x_4592_, 0);
lean_inc(v_a_4593_);
lean_dec_ref(v___x_4592_);
v_ref_4594_ = lean_ctor_get(v_a_4533_, 5);
v_quotContext_4595_ = lean_ctor_get(v_a_4533_, 10);
v_currMacroScope_4596_ = lean_ctor_get(v_a_4533_, 11);
v___x_4597_ = lean_unsigned_to_nat(5u);
v___x_4598_ = l_Lean_Syntax_getArg(v_x_4526_, v___x_4597_);
lean_dec(v_x_4526_);
v___x_4599_ = l_Lean_SourceInfo_fromRef(v_ref_4594_, v___x_4542_);
v___x_4600_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__64));
v___x_4601_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__11));
lean_inc(v___x_4598_);
lean_inc_n(v___x_4599_, 3);
v___x_4602_ = l_Lean_Syntax_node1(v___x_4599_, v___x_4601_, v___x_4598_);
v___x_4603_ = l_Lean_Syntax_node1(v___x_4599_, v___x_4600_, v___x_4602_);
v___x_4604_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__1));
v___x_4605_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__4));
v___x_4606_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__7));
if (v_isShared_4561_ == 0)
{
lean_ctor_set_tag(v___x_4560_, 2);
lean_ctor_set(v___x_4560_, 1, v___x_4606_);
lean_ctor_set(v___x_4560_, 0, v___x_4599_);
v___x_4608_ = v___x_4560_;
goto v_reusejp_4607_;
}
else
{
lean_object* v_reuseFailAlloc_4812_; 
v_reuseFailAlloc_4812_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4812_, 0, v___x_4599_);
lean_ctor_set(v_reuseFailAlloc_4812_, 1, v___x_4606_);
v___x_4608_ = v_reuseFailAlloc_4812_;
goto v_reusejp_4607_;
}
v_reusejp_4607_:
{
lean_object* v___x_4609_; lean_object* v___x_4610_; lean_object* v___x_4611_; lean_object* v___x_4612_; lean_object* v___x_4613_; lean_object* v___x_4614_; lean_object* v___x_4615_; lean_object* v___x_4616_; lean_object* v___x_4617_; lean_object* v___x_4618_; lean_object* v___x_4619_; lean_object* v___x_4620_; lean_object* v___x_4621_; lean_object* v___x_4622_; lean_object* v___x_4623_; lean_object* v___x_4624_; lean_object* v___x_4625_; lean_object* v___x_4626_; lean_object* v___x_4627_; lean_object* v___x_4628_; lean_object* v___x_4629_; lean_object* v___x_4630_; lean_object* v___x_4631_; lean_object* v___x_4632_; lean_object* v___x_4633_; lean_object* v___x_4634_; lean_object* v___x_4635_; lean_object* v___x_4636_; lean_object* v___x_4637_; lean_object* v___x_4638_; lean_object* v___x_4639_; lean_object* v___x_4640_; lean_object* v___x_4641_; lean_object* v___x_4642_; lean_object* v___x_4643_; lean_object* v___x_4644_; lean_object* v___x_4645_; lean_object* v___x_4646_; lean_object* v___x_4647_; lean_object* v___x_4648_; lean_object* v___x_4649_; lean_object* v___x_4650_; lean_object* v___x_4651_; lean_object* v___x_4652_; lean_object* v___x_4653_; lean_object* v___x_4654_; lean_object* v___x_4655_; lean_object* v___x_4656_; lean_object* v___x_4657_; lean_object* v___x_4658_; lean_object* v___x_4659_; lean_object* v___x_4660_; lean_object* v___x_4661_; lean_object* v___x_4662_; lean_object* v___x_4663_; lean_object* v___x_4664_; lean_object* v___x_4665_; lean_object* v___x_4666_; lean_object* v___x_4667_; lean_object* v___x_4668_; lean_object* v___x_4669_; lean_object* v___x_4670_; lean_object* v___x_4671_; lean_object* v___x_4672_; lean_object* v___x_4673_; lean_object* v___x_4674_; lean_object* v___x_4675_; lean_object* v___x_4676_; lean_object* v___x_4677_; lean_object* v___x_4678_; lean_object* v___x_4679_; lean_object* v___x_4680_; lean_object* v___x_4681_; lean_object* v___x_4682_; lean_object* v___x_4683_; lean_object* v___x_4684_; lean_object* v___x_4685_; lean_object* v___x_4686_; lean_object* v___x_4687_; lean_object* v___x_4688_; lean_object* v___x_4689_; lean_object* v___x_4690_; lean_object* v___x_4691_; lean_object* v___x_4692_; lean_object* v___x_4693_; lean_object* v___x_4694_; lean_object* v___x_4695_; lean_object* v___x_4696_; lean_object* v___x_4697_; lean_object* v___x_4698_; lean_object* v___x_4699_; lean_object* v___x_4700_; lean_object* v___x_4701_; lean_object* v___x_4702_; lean_object* v___x_4703_; lean_object* v___x_4704_; lean_object* v___x_4705_; lean_object* v___x_4706_; lean_object* v___x_4707_; lean_object* v___x_4708_; lean_object* v___x_4709_; lean_object* v___x_4710_; lean_object* v___x_4711_; lean_object* v___x_4712_; lean_object* v___x_4713_; lean_object* v___x_4714_; lean_object* v___x_4715_; lean_object* v___x_4716_; lean_object* v___x_4717_; lean_object* v___x_4718_; lean_object* v___x_4719_; lean_object* v___x_4720_; lean_object* v___x_4721_; lean_object* v___x_4722_; lean_object* v___x_4723_; lean_object* v___x_4724_; lean_object* v___x_4725_; lean_object* v___x_4726_; lean_object* v___x_4727_; lean_object* v___x_4728_; lean_object* v___x_4729_; lean_object* v___x_4730_; lean_object* v___x_4731_; lean_object* v___x_4732_; lean_object* v___x_4733_; lean_object* v___x_4734_; lean_object* v___x_4735_; lean_object* v___x_4736_; lean_object* v___x_4737_; lean_object* v___x_4738_; lean_object* v___x_4739_; lean_object* v___x_4740_; lean_object* v___x_4741_; lean_object* v___x_4742_; lean_object* v___x_4743_; lean_object* v___x_4744_; lean_object* v___x_4745_; lean_object* v___x_4746_; lean_object* v___x_4747_; lean_object* v___x_4748_; lean_object* v___x_4749_; lean_object* v___x_4750_; lean_object* v___x_4751_; lean_object* v___x_4752_; lean_object* v___x_4753_; lean_object* v___x_4754_; lean_object* v___x_4755_; lean_object* v___x_4756_; lean_object* v___x_4757_; lean_object* v___x_4758_; lean_object* v___x_4759_; lean_object* v___x_4760_; lean_object* v___x_4761_; lean_object* v___x_4762_; lean_object* v___x_4763_; lean_object* v___x_4764_; lean_object* v___x_4765_; lean_object* v___x_4766_; lean_object* v___x_4767_; lean_object* v___x_4768_; lean_object* v___x_4769_; lean_object* v___x_4770_; lean_object* v___x_4771_; lean_object* v___x_4772_; lean_object* v___x_4773_; lean_object* v___x_4774_; lean_object* v___x_4775_; lean_object* v___x_4776_; lean_object* v___x_4777_; lean_object* v___x_4778_; lean_object* v___x_4779_; lean_object* v___x_4780_; lean_object* v___x_4781_; lean_object* v___x_4782_; lean_object* v___x_4783_; lean_object* v___x_4784_; lean_object* v___x_4785_; lean_object* v___x_4786_; lean_object* v___x_4787_; lean_object* v___x_4788_; lean_object* v___x_4789_; lean_object* v___x_4790_; lean_object* v___x_4791_; lean_object* v___x_4792_; lean_object* v___x_4793_; lean_object* v___x_4794_; lean_object* v___x_4795_; lean_object* v___x_4796_; lean_object* v___x_4797_; lean_object* v___x_4798_; lean_object* v___x_4799_; lean_object* v___x_4800_; lean_object* v___x_4801_; lean_object* v___x_4802_; lean_object* v___x_4803_; lean_object* v___x_4804_; lean_object* v___x_4805_; lean_object* v___x_4806_; lean_object* v___x_4807_; lean_object* v___x_4808_; lean_object* v___x_4809_; lean_object* v___x_4810_; lean_object* v___x_4811_; 
v___x_4609_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__9));
v___x_4610_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__11));
v___x_4611_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__8));
v___x_4612_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__9));
lean_inc_n(v___x_4599_, 97);
v___x_4613_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4613_, 0, v___x_4599_);
lean_ctor_set(v___x_4613_, 1, v___x_4612_);
v___x_4614_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__4));
v___x_4615_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19, &lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19);
v___x_4616_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4616_, 0, v___x_4599_);
lean_ctor_set(v___x_4616_, 1, v___x_4601_);
lean_ctor_set(v___x_4616_, 2, v___x_4615_);
lean_inc_ref_n(v___x_4616_, 23);
v___x_4617_ = l_Lean_Syntax_node1(v___x_4599_, v___x_4614_, v___x_4616_);
v___x_4618_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__6));
v___x_4619_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__11));
v___x_4620_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__13));
v___x_4621_ = l_Lean_Syntax_node1(v___x_4599_, v___x_4620_, v___x_4598_);
v___x_4622_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__15));
v___x_4623_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__16));
v___x_4624_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4624_, 0, v___x_4599_);
lean_ctor_set(v___x_4624_, 1, v___x_4623_);
lean_inc_ref(v___x_4624_);
v___x_4625_ = l_Lean_Syntax_node2(v___x_4599_, v___x_4622_, v___x_4624_, v_a_4587_);
v___x_4626_ = l_Lean_Syntax_node1(v___x_4599_, v___x_4601_, v___x_4625_);
v___x_4627_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__23));
v___x_4628_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4628_, 0, v___x_4599_);
lean_ctor_set(v___x_4628_, 1, v___x_4627_);
v___x_4629_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__18));
v___x_4630_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__19));
v___x_4631_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4631_, 0, v___x_4599_);
lean_ctor_set(v___x_4631_, 1, v___x_4630_);
v___x_4632_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1___closed__3, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1___closed__3_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1___closed__3);
v___x_4633_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1___closed__4));
lean_inc_n(v_currMacroScope_4596_, 13);
lean_inc_n(v_quotContext_4595_, 13);
v___x_4634_ = l_Lean_addMacroScope(v_quotContext_4595_, v___x_4633_, v_currMacroScope_4596_);
v___x_4635_ = lean_box(0);
v___x_4636_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4636_, 0, v___x_4599_);
lean_ctor_set(v___x_4636_, 1, v___x_4632_);
lean_ctor_set(v___x_4636_, 2, v___x_4634_);
lean_ctor_set(v___x_4636_, 3, v___x_4635_);
lean_inc_ref(v___x_4636_);
v___x_4637_ = l_Lean_Syntax_node1(v___x_4599_, v___x_4620_, v___x_4636_);
v___x_4638_ = l_Lean_Syntax_node2(v___x_4599_, v___x_4622_, v___x_4624_, v_a_4593_);
v___x_4639_ = l_Lean_Syntax_node1(v___x_4599_, v___x_4601_, v___x_4638_);
lean_inc_ref_n(v___x_4628_, 5);
v___x_4640_ = l_Lean_Syntax_node5(v___x_4599_, v___x_4619_, v___x_4637_, v___x_4616_, v___x_4639_, v___x_4628_, v___x_4540_);
v___x_4641_ = l_Lean_Syntax_node1(v___x_4599_, v___x_4618_, v___x_4640_);
lean_inc_n(v___x_4617_, 2);
lean_inc_ref(v___x_4613_);
v___x_4642_ = l_Lean_Syntax_node3(v___x_4599_, v___x_4611_, v___x_4613_, v___x_4617_, v___x_4641_);
v___x_4643_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__1));
v___x_4644_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__2));
v___x_4645_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4645_, 0, v___x_4599_);
lean_ctor_set(v___x_4645_, 1, v___x_4644_);
v___x_4646_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__8));
v___x_4647_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__10));
v___x_4648_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__11));
v___x_4649_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4649_, 0, v___x_4599_);
lean_ctor_set(v___x_4649_, 1, v___x_4648_);
v___x_4650_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__1, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__1_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__1);
v___x_4651_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__2));
v___x_4652_ = l_Lean_addMacroScope(v_quotContext_4595_, v___x_4651_, v_currMacroScope_4596_);
v___x_4653_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4653_, 0, v___x_4599_);
lean_ctor_set(v___x_4653_, 1, v___x_4650_);
lean_ctor_set(v___x_4653_, 2, v___x_4652_);
lean_ctor_set(v___x_4653_, 3, v___x_4635_);
v___x_4654_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__23));
v___x_4655_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4655_, 0, v___x_4599_);
lean_ctor_set(v___x_4655_, 1, v___x_4654_);
v___x_4656_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__21, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__21_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__21);
v___x_4657_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__22));
v___x_4658_ = l_Lean_addMacroScope(v_quotContext_4595_, v___x_4657_, v_currMacroScope_4596_);
v___x_4659_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4659_, 0, v___x_4599_);
lean_ctor_set(v___x_4659_, 1, v___x_4656_);
lean_ctor_set(v___x_4659_, 2, v___x_4658_);
lean_ctor_set(v___x_4659_, 3, v___x_4635_);
v___x_4660_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__24, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__24_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__24);
v___x_4661_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__25));
v___x_4662_ = l_Lean_addMacroScope(v_quotContext_4595_, v___x_4661_, v_currMacroScope_4596_);
v___x_4663_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4663_, 0, v___x_4599_);
lean_ctor_set(v___x_4663_, 1, v___x_4660_);
lean_ctor_set(v___x_4663_, 2, v___x_4662_);
lean_ctor_set(v___x_4663_, 3, v___x_4635_);
lean_inc_ref(v___x_4663_);
lean_inc_ref_n(v___x_4655_, 4);
lean_inc_ref(v___x_4659_);
v___x_4664_ = l_Lean_Syntax_node3(v___x_4599_, v___x_4601_, v___x_4659_, v___x_4655_, v___x_4663_);
v___x_4665_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__12));
v___x_4666_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4666_, 0, v___x_4599_);
lean_ctor_set(v___x_4666_, 1, v___x_4665_);
lean_inc_ref_n(v___x_4666_, 2);
lean_inc_ref_n(v___x_4649_, 2);
v___x_4667_ = l_Lean_Syntax_node3(v___x_4599_, v___x_4647_, v___x_4649_, v___x_4664_, v___x_4666_);
v___x_4668_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__unique__in_____x2c____1___closed__1, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__unique__in_____x2c____1___closed__1_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__unique__in_____x2c____1___closed__1);
v___x_4669_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__unique__in_____x2c____1___closed__2));
v___x_4670_ = l_Lean_addMacroScope(v_quotContext_4595_, v___x_4669_, v_currMacroScope_4596_);
v___x_4671_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4671_, 0, v___x_4599_);
lean_ctor_set(v___x_4671_, 1, v___x_4668_);
lean_ctor_set(v___x_4671_, 2, v___x_4670_);
lean_ctor_set(v___x_4671_, 3, v___x_4635_);
v___x_4672_ = l_Lean_Syntax_node3(v___x_4599_, v___x_4601_, v___x_4667_, v___x_4655_, v___x_4671_);
v___x_4673_ = l_Lean_Syntax_node3(v___x_4599_, v___x_4647_, v___x_4649_, v___x_4672_, v___x_4666_);
lean_inc_ref(v___x_4653_);
v___x_4674_ = l_Lean_Syntax_node3(v___x_4599_, v___x_4601_, v___x_4653_, v___x_4655_, v___x_4673_);
v___x_4675_ = l_Lean_Syntax_node3(v___x_4599_, v___x_4647_, v___x_4649_, v___x_4674_, v___x_4666_);
v___x_4676_ = l_Lean_Syntax_node5(v___x_4599_, v___x_4646_, v___x_4675_, v___x_4616_, v___x_4616_, v___x_4628_, v___x_4636_);
v___x_4677_ = l_Lean_Syntax_node1(v___x_4599_, v___x_4618_, v___x_4676_);
v___x_4678_ = l_Lean_Syntax_node3(v___x_4599_, v___x_4643_, v___x_4645_, v___x_4617_, v___x_4677_);
v___x_4679_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__in____1___closed__0));
v___x_4680_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__in____1___closed__1));
v___x_4681_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4681_, 0, v___x_4599_);
lean_ctor_set(v___x_4681_, 1, v___x_4679_);
v___x_4682_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__27, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__27_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__27);
v___x_4683_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__28));
v___x_4684_ = l_Lean_addMacroScope(v_quotContext_4595_, v___x_4683_, v_currMacroScope_4596_);
v___x_4685_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4685_, 0, v___x_4599_);
lean_ctor_set(v___x_4685_, 1, v___x_4682_);
lean_ctor_set(v___x_4685_, 2, v___x_4684_);
lean_ctor_set(v___x_4685_, 3, v___x_4635_);
lean_inc_ref(v___x_4685_);
v___x_4686_ = l_Lean_Syntax_node1(v___x_4599_, v___x_4601_, v___x_4685_);
v___x_4687_ = l_Lean_Syntax_node2(v___x_4599_, v___x_4680_, v___x_4681_, v___x_4686_);
v___x_4688_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__9));
v___x_4689_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__10));
v___x_4690_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4690_, 0, v___x_4599_);
lean_ctor_set(v___x_4690_, 1, v___x_4688_);
v___x_4691_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__4));
v___x_4692_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__6));
v___x_4693_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__9));
v___x_4694_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__11, &lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__11_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__11);
v___x_4695_ = lean_box(0);
v___x_4696_ = l_Lean_addMacroScope(v_quotContext_4595_, v___x_4695_, v_currMacroScope_4596_);
v___x_4697_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__46));
v___x_4698_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4698_, 0, v___x_4599_);
lean_ctor_set(v___x_4698_, 1, v___x_4694_);
lean_ctor_set(v___x_4698_, 2, v___x_4696_);
lean_ctor_set(v___x_4698_, 3, v___x_4697_);
v___x_4699_ = l_Lean_Syntax_node1(v___x_4599_, v___x_4693_, v___x_4698_);
lean_inc_ref_n(v___x_4608_, 2);
v___x_4700_ = l_Lean_Syntax_node2(v___x_4599_, v___x_4692_, v___x_4608_, v___x_4699_);
v___x_4701_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__4));
v___x_4702_ = l_Lean_Syntax_node2(v___x_4599_, v___x_4601_, v___x_4653_, v___x_4659_);
v___x_4703_ = l_Lean_Syntax_node2(v___x_4599_, v___x_4701_, v___x_4685_, v___x_4702_);
v___x_4704_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__49));
v___x_4705_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4705_, 0, v___x_4599_);
lean_ctor_set(v___x_4705_, 1, v___x_4704_);
lean_inc_ref_n(v___x_4705_, 2);
v___x_4706_ = l_Lean_Syntax_node3(v___x_4599_, v___x_4691_, v___x_4700_, v___x_4703_, v___x_4705_);
v___x_4707_ = l_Lean_Syntax_node2(v___x_4599_, v___x_4689_, v___x_4690_, v___x_4706_);
v___x_4708_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in_____x2c___x2c____1___closed__0));
v___x_4709_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in_____x2c___x2c____1___closed__1));
v___x_4710_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4710_, 0, v___x_4599_);
lean_ctor_set(v___x_4710_, 1, v___x_4708_);
v___x_4711_ = l_Lean_Syntax_node2(v___x_4599_, v___x_4709_, v___x_4710_, v___x_4663_);
v___x_4712_ = lean_unsigned_to_nat(9u);
v___x_4713_ = lean_mk_empty_array_with_capacity(v___x_4712_);
v___x_4714_ = lean_array_push(v___x_4713_, v___x_4642_);
v___x_4715_ = lean_array_push(v___x_4714_, v___x_4616_);
v___x_4716_ = lean_array_push(v___x_4715_, v___x_4678_);
v___x_4717_ = lean_array_push(v___x_4716_, v___x_4616_);
v___x_4718_ = lean_array_push(v___x_4717_, v___x_4687_);
v___x_4719_ = lean_array_push(v___x_4718_, v___x_4616_);
v___x_4720_ = lean_array_push(v___x_4719_, v___x_4707_);
v___x_4721_ = lean_array_push(v___x_4720_, v___x_4616_);
v___x_4722_ = lean_array_push(v___x_4721_, v___x_4711_);
v___x_4723_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4723_, 0, v___x_4599_);
lean_ctor_set(v___x_4723_, 1, v___x_4601_);
lean_ctor_set(v___x_4723_, 2, v___x_4722_);
v___x_4724_ = l_Lean_Syntax_node1(v___x_4599_, v___x_4610_, v___x_4723_);
v___x_4725_ = l_Lean_Syntax_node1(v___x_4599_, v___x_4609_, v___x_4724_);
v___x_4726_ = l_Lean_Syntax_node2(v___x_4599_, v___x_4629_, v___x_4631_, v___x_4725_);
v___x_4727_ = l_Lean_Syntax_node5(v___x_4599_, v___x_4619_, v___x_4621_, v___x_4616_, v___x_4626_, v___x_4628_, v___x_4726_);
v___x_4728_ = l_Lean_Syntax_node1(v___x_4599_, v___x_4618_, v___x_4727_);
v___x_4729_ = l_Lean_Syntax_node3(v___x_4599_, v___x_4611_, v___x_4613_, v___x_4617_, v___x_4728_);
v___x_4730_ = l_Lean_Syntax_node1(v___x_4599_, v___x_4601_, v___x_4729_);
v___x_4731_ = l_Lean_Syntax_node1(v___x_4599_, v___x_4610_, v___x_4730_);
v___x_4732_ = l_Lean_Syntax_node1(v___x_4599_, v___x_4609_, v___x_4731_);
v___x_4733_ = l_Lean_Syntax_node3(v___x_4599_, v___x_4605_, v___x_4608_, v___x_4732_, v___x_4705_);
v___x_4734_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__4));
v___x_4735_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4735_, 0, v___x_4599_);
lean_ctor_set(v___x_4735_, 1, v___x_4734_);
v___x_4736_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__6));
v___x_4737_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__7));
v___x_4738_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4738_, 0, v___x_4599_);
lean_ctor_set(v___x_4738_, 1, v___x_4737_);
v___x_4739_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__12));
v___x_4740_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__13));
v___x_4741_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4741_, 0, v___x_4599_);
lean_ctor_set(v___x_4741_, 1, v___x_4739_);
v___x_4742_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__15));
v___x_4743_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__17));
v___x_4744_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__19));
v___x_4745_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__21, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__21_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__21);
v___x_4746_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__22));
v___x_4747_ = l_Lean_addMacroScope(v_quotContext_4595_, v___x_4746_, v_currMacroScope_4596_);
v___x_4748_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4748_, 0, v___x_4599_);
lean_ctor_set(v___x_4748_, 1, v___x_4745_);
lean_ctor_set(v___x_4748_, 2, v___x_4747_);
lean_ctor_set(v___x_4748_, 3, v___x_4635_);
v___x_4749_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__25));
v___x_4750_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__26));
v___x_4751_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4751_, 0, v___x_4599_);
lean_ctor_set(v___x_4751_, 1, v___x_4750_);
v___x_4752_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__28));
v___x_4753_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__30));
v___x_4754_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__32));
v___x_4755_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__34, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__34_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__34);
v___x_4756_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__35));
v___x_4757_ = l_Lean_addMacroScope(v_quotContext_4595_, v___x_4756_, v_currMacroScope_4596_);
v___x_4758_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4758_, 0, v___x_4599_);
lean_ctor_set(v___x_4758_, 1, v___x_4755_);
lean_ctor_set(v___x_4758_, 2, v___x_4757_);
lean_ctor_set(v___x_4758_, 3, v___x_4635_);
v___x_4759_ = l_Lean_Syntax_node2(v___x_4599_, v___x_4754_, v___x_4758_, v___x_4616_);
v___x_4760_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__37));
v___x_4761_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__39, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__39_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__39);
v___x_4762_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__40));
v___x_4763_ = l_Lean_addMacroScope(v_quotContext_4595_, v___x_4762_, v_currMacroScope_4596_);
v___x_4764_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__44));
v___x_4765_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4765_, 0, v___x_4599_);
lean_ctor_set(v___x_4765_, 1, v___x_4761_);
lean_ctor_set(v___x_4765_, 2, v___x_4763_);
lean_ctor_set(v___x_4765_, 3, v___x_4764_);
v___x_4766_ = l_Lean_Syntax_node3(v___x_4599_, v___x_4760_, v___x_4628_, v___x_4616_, v___x_4765_);
v___x_4767_ = l_Lean_Syntax_node3(v___x_4599_, v___x_4601_, v___x_4616_, v___x_4616_, v___x_4766_);
v___x_4768_ = l_Lean_Syntax_node2(v___x_4599_, v___x_4753_, v___x_4759_, v___x_4767_);
v___x_4769_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__46, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__46_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__46);
v___x_4770_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__47));
v___x_4771_ = l_Lean_addMacroScope(v_quotContext_4595_, v___x_4770_, v_currMacroScope_4596_);
v___x_4772_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4772_, 0, v___x_4599_);
lean_ctor_set(v___x_4772_, 1, v___x_4769_);
lean_ctor_set(v___x_4772_, 2, v___x_4771_);
lean_ctor_set(v___x_4772_, 3, v___x_4635_);
v___x_4773_ = l_Lean_Syntax_node2(v___x_4599_, v___x_4754_, v___x_4772_, v___x_4616_);
v___x_4774_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__49, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__49_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__49);
v___x_4775_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__50));
v___x_4776_ = l_Lean_addMacroScope(v_quotContext_4595_, v___x_4775_, v_currMacroScope_4596_);
v___x_4777_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__53));
v___x_4778_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4778_, 0, v___x_4599_);
lean_ctor_set(v___x_4778_, 1, v___x_4774_);
lean_ctor_set(v___x_4778_, 2, v___x_4776_);
lean_ctor_set(v___x_4778_, 3, v___x_4777_);
v___x_4779_ = l_Lean_Syntax_node3(v___x_4599_, v___x_4760_, v___x_4628_, v___x_4616_, v___x_4778_);
v___x_4780_ = l_Lean_Syntax_node3(v___x_4599_, v___x_4601_, v___x_4616_, v___x_4616_, v___x_4779_);
lean_inc(v___x_4780_);
v___x_4781_ = l_Lean_Syntax_node2(v___x_4599_, v___x_4753_, v___x_4773_, v___x_4780_);
v___x_4782_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__55, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__55_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__55);
v___x_4783_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__56));
v___x_4784_ = l_Lean_addMacroScope(v_quotContext_4595_, v___x_4783_, v_currMacroScope_4596_);
v___x_4785_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4785_, 0, v___x_4599_);
lean_ctor_set(v___x_4785_, 1, v___x_4782_);
lean_ctor_set(v___x_4785_, 2, v___x_4784_);
lean_ctor_set(v___x_4785_, 3, v___x_4635_);
v___x_4786_ = l_Lean_Syntax_node2(v___x_4599_, v___x_4754_, v___x_4785_, v___x_4616_);
v___x_4787_ = l_Lean_Syntax_node2(v___x_4599_, v___x_4753_, v___x_4786_, v___x_4780_);
v___x_4788_ = l_Lean_Syntax_node5(v___x_4599_, v___x_4601_, v___x_4768_, v___x_4655_, v___x_4781_, v___x_4655_, v___x_4787_);
v___x_4789_ = l_Lean_Syntax_node1(v___x_4599_, v___x_4752_, v___x_4788_);
v___x_4790_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__58));
v___x_4791_ = l_Lean_Syntax_node1(v___x_4599_, v___x_4790_, v___x_4616_);
v___x_4792_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__59));
v___x_4793_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4793_, 0, v___x_4599_);
lean_ctor_set(v___x_4793_, 1, v___x_4792_);
v___x_4794_ = l_Lean_Syntax_node6(v___x_4599_, v___x_4749_, v___x_4751_, v___x_4616_, v___x_4789_, v___x_4791_, v___x_4616_, v___x_4793_);
v___x_4795_ = l_Lean_Syntax_node5(v___x_4599_, v___x_4744_, v___x_4608_, v___x_4748_, v___x_4628_, v___x_4794_, v___x_4705_);
v___x_4796_ = l_Lean_Syntax_node1(v___x_4599_, v___x_4743_, v___x_4795_);
v___x_4797_ = l_Lean_Syntax_node1(v___x_4599_, v___x_4601_, v___x_4796_);
v___x_4798_ = l_Lean_Syntax_node1(v___x_4599_, v___x_4742_, v___x_4797_);
v___x_4799_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__61));
v___x_4800_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__62));
v___x_4801_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4801_, 0, v___x_4599_);
lean_ctor_set(v___x_4801_, 1, v___x_4800_);
v___x_4802_ = l_Lean_Syntax_node2(v___x_4599_, v___x_4799_, v___x_4801_, v___x_4603_);
v___x_4803_ = l_Lean_Syntax_node1(v___x_4599_, v___x_4601_, v___x_4802_);
v___x_4804_ = l_Lean_Syntax_node6(v___x_4599_, v___x_4740_, v___x_4741_, v___x_4798_, v___x_4616_, v___x_4616_, v___x_4616_, v___x_4803_);
v___x_4805_ = l_Lean_Syntax_node1(v___x_4599_, v___x_4601_, v___x_4804_);
v___x_4806_ = l_Lean_Syntax_node1(v___x_4599_, v___x_4610_, v___x_4805_);
v___x_4807_ = l_Lean_Syntax_node1(v___x_4599_, v___x_4609_, v___x_4806_);
v___x_4808_ = l_Lean_Syntax_node2(v___x_4599_, v___x_4736_, v___x_4738_, v___x_4807_);
v___x_4809_ = l_Lean_Syntax_node3(v___x_4599_, v___x_4601_, v___x_4733_, v___x_4735_, v___x_4808_);
v___x_4810_ = l_Lean_Syntax_node1(v___x_4599_, v___x_4604_, v___x_4809_);
v___x_4811_ = l_Lean_Elab_Tactic_evalTactic(v___x_4810_, v_a_4527_, v_a_4528_, v_a_4529_, v_a_4530_, v_a_4531_, v_a_4532_, v_a_4533_, v_a_4534_);
return v___x_4811_;
}
}
else
{
lean_object* v_a_4813_; lean_object* v___x_4815_; uint8_t v_isShared_4816_; uint8_t v_isSharedCheck_4820_; 
lean_dec(v_a_4587_);
lean_del_object(v___x_4560_);
lean_dec(v___x_4540_);
lean_dec(v_x_4526_);
v_a_4813_ = lean_ctor_get(v___x_4592_, 0);
v_isSharedCheck_4820_ = !lean_is_exclusive(v___x_4592_);
if (v_isSharedCheck_4820_ == 0)
{
v___x_4815_ = v___x_4592_;
v_isShared_4816_ = v_isSharedCheck_4820_;
goto v_resetjp_4814_;
}
else
{
lean_inc(v_a_4813_);
lean_dec(v___x_4592_);
v___x_4815_ = lean_box(0);
v_isShared_4816_ = v_isSharedCheck_4820_;
goto v_resetjp_4814_;
}
v_resetjp_4814_:
{
lean_object* v___x_4818_; 
if (v_isShared_4816_ == 0)
{
v___x_4818_ = v___x_4815_;
goto v_reusejp_4817_;
}
else
{
lean_object* v_reuseFailAlloc_4819_; 
v_reuseFailAlloc_4819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4819_, 0, v_a_4813_);
v___x_4818_ = v_reuseFailAlloc_4819_;
goto v_reusejp_4817_;
}
v_reusejp_4817_:
{
return v___x_4818_;
}
}
}
}
else
{
lean_object* v_a_4821_; lean_object* v___x_4823_; uint8_t v_isShared_4824_; uint8_t v_isSharedCheck_4828_; 
lean_dec(v_a_4587_);
lean_del_object(v___x_4560_);
lean_dec(v___x_4540_);
lean_dec(v_x_4526_);
v_a_4821_ = lean_ctor_get(v___x_4590_, 0);
v_isSharedCheck_4828_ = !lean_is_exclusive(v___x_4590_);
if (v_isSharedCheck_4828_ == 0)
{
v___x_4823_ = v___x_4590_;
v_isShared_4824_ = v_isSharedCheck_4828_;
goto v_resetjp_4822_;
}
else
{
lean_inc(v_a_4821_);
lean_dec(v___x_4590_);
v___x_4823_ = lean_box(0);
v_isShared_4824_ = v_isSharedCheck_4828_;
goto v_resetjp_4822_;
}
v_resetjp_4822_:
{
lean_object* v___x_4826_; 
if (v_isShared_4824_ == 0)
{
v___x_4826_ = v___x_4823_;
goto v_reusejp_4825_;
}
else
{
lean_object* v_reuseFailAlloc_4827_; 
v_reuseFailAlloc_4827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4827_, 0, v_a_4821_);
v___x_4826_ = v_reuseFailAlloc_4827_;
goto v_reusejp_4825_;
}
v_reusejp_4825_:
{
return v___x_4826_;
}
}
}
}
else
{
lean_object* v_a_4829_; lean_object* v___x_4831_; uint8_t v_isShared_4832_; uint8_t v_isSharedCheck_4836_; 
lean_dec(v_a_4587_);
lean_del_object(v___x_4560_);
lean_dec(v___x_4540_);
lean_dec(v_x_4526_);
v_a_4829_ = lean_ctor_get(v___x_4588_, 0);
v_isSharedCheck_4836_ = !lean_is_exclusive(v___x_4588_);
if (v_isSharedCheck_4836_ == 0)
{
v___x_4831_ = v___x_4588_;
v_isShared_4832_ = v_isSharedCheck_4836_;
goto v_resetjp_4830_;
}
else
{
lean_inc(v_a_4829_);
lean_dec(v___x_4588_);
v___x_4831_ = lean_box(0);
v_isShared_4832_ = v_isSharedCheck_4836_;
goto v_resetjp_4830_;
}
v_resetjp_4830_:
{
lean_object* v___x_4834_; 
if (v_isShared_4832_ == 0)
{
v___x_4834_ = v___x_4831_;
goto v_reusejp_4833_;
}
else
{
lean_object* v_reuseFailAlloc_4835_; 
v_reuseFailAlloc_4835_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4835_, 0, v_a_4829_);
v___x_4834_ = v_reuseFailAlloc_4835_;
goto v_reusejp_4833_;
}
v_reusejp_4833_:
{
return v___x_4834_;
}
}
}
}
else
{
lean_object* v_a_4837_; lean_object* v___x_4839_; uint8_t v_isShared_4840_; uint8_t v_isSharedCheck_4844_; 
lean_del_object(v___x_4560_);
lean_dec(v_a_4544_);
lean_dec(v___x_4540_);
lean_dec(v_x_4526_);
v_a_4837_ = lean_ctor_get(v___x_4586_, 0);
v_isSharedCheck_4844_ = !lean_is_exclusive(v___x_4586_);
if (v_isSharedCheck_4844_ == 0)
{
v___x_4839_ = v___x_4586_;
v_isShared_4840_ = v_isSharedCheck_4844_;
goto v_resetjp_4838_;
}
else
{
lean_inc(v_a_4837_);
lean_dec(v___x_4586_);
v___x_4839_ = lean_box(0);
v_isShared_4840_ = v_isSharedCheck_4844_;
goto v_resetjp_4838_;
}
v_resetjp_4838_:
{
lean_object* v___x_4842_; 
if (v_isShared_4840_ == 0)
{
v___x_4842_ = v___x_4839_;
goto v_reusejp_4841_;
}
else
{
lean_object* v_reuseFailAlloc_4843_; 
v_reuseFailAlloc_4843_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4843_, 0, v_a_4837_);
v___x_4842_ = v_reuseFailAlloc_4843_;
goto v_reusejp_4841_;
}
v_reusejp_4841_:
{
return v___x_4842_;
}
}
}
}
else
{
lean_object* v_a_4845_; lean_object* v___x_4847_; uint8_t v_isShared_4848_; uint8_t v_isSharedCheck_4852_; 
lean_del_object(v___x_4560_);
lean_dec(v_a_4544_);
lean_dec(v___x_4540_);
lean_dec(v_x_4526_);
v_a_4845_ = lean_ctor_get(v___x_4583_, 0);
v_isSharedCheck_4852_ = !lean_is_exclusive(v___x_4583_);
if (v_isSharedCheck_4852_ == 0)
{
v___x_4847_ = v___x_4583_;
v_isShared_4848_ = v_isSharedCheck_4852_;
goto v_resetjp_4846_;
}
else
{
lean_inc(v_a_4845_);
lean_dec(v___x_4583_);
v___x_4847_ = lean_box(0);
v_isShared_4848_ = v_isSharedCheck_4852_;
goto v_resetjp_4846_;
}
v_resetjp_4846_:
{
lean_object* v___x_4850_; 
if (v_isShared_4848_ == 0)
{
v___x_4850_ = v___x_4847_;
goto v_reusejp_4849_;
}
else
{
lean_object* v_reuseFailAlloc_4851_; 
v_reuseFailAlloc_4851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4851_, 0, v_a_4845_);
v___x_4850_ = v_reuseFailAlloc_4851_;
goto v_reusejp_4849_;
}
v_reusejp_4849_:
{
return v___x_4850_;
}
}
}
}
else
{
lean_object* v_a_4853_; lean_object* v___x_4855_; uint8_t v_isShared_4856_; uint8_t v_isSharedCheck_4860_; 
lean_del_object(v___x_4560_);
lean_dec(v_a_4544_);
lean_dec(v___x_4540_);
lean_dec(v_x_4526_);
v_a_4853_ = lean_ctor_get(v___x_4581_, 0);
v_isSharedCheck_4860_ = !lean_is_exclusive(v___x_4581_);
if (v_isSharedCheck_4860_ == 0)
{
v___x_4855_ = v___x_4581_;
v_isShared_4856_ = v_isSharedCheck_4860_;
goto v_resetjp_4854_;
}
else
{
lean_inc(v_a_4853_);
lean_dec(v___x_4581_);
v___x_4855_ = lean_box(0);
v_isShared_4856_ = v_isSharedCheck_4860_;
goto v_resetjp_4854_;
}
v_resetjp_4854_:
{
lean_object* v___x_4858_; 
if (v_isShared_4856_ == 0)
{
v___x_4858_ = v___x_4855_;
goto v_reusejp_4857_;
}
else
{
lean_object* v_reuseFailAlloc_4859_; 
v_reuseFailAlloc_4859_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4859_, 0, v_a_4853_);
v___x_4858_ = v_reuseFailAlloc_4859_;
goto v_reusejp_4857_;
}
v_reusejp_4857_:
{
return v___x_4858_;
}
}
}
}
else
{
lean_object* v_a_4861_; lean_object* v___x_4863_; uint8_t v_isShared_4864_; uint8_t v_isSharedCheck_4868_; 
lean_dec(v_a_4570_);
lean_del_object(v___x_4560_);
lean_dec(v_a_4544_);
lean_dec(v___x_4540_);
lean_dec(v_x_4526_);
v_a_4861_ = lean_ctor_get(v___x_4579_, 0);
v_isSharedCheck_4868_ = !lean_is_exclusive(v___x_4579_);
if (v_isSharedCheck_4868_ == 0)
{
v___x_4863_ = v___x_4579_;
v_isShared_4864_ = v_isSharedCheck_4868_;
goto v_resetjp_4862_;
}
else
{
lean_inc(v_a_4861_);
lean_dec(v___x_4579_);
v___x_4863_ = lean_box(0);
v_isShared_4864_ = v_isSharedCheck_4868_;
goto v_resetjp_4862_;
}
v_resetjp_4862_:
{
lean_object* v___x_4866_; 
if (v_isShared_4864_ == 0)
{
v___x_4866_ = v___x_4863_;
goto v_reusejp_4865_;
}
else
{
lean_object* v_reuseFailAlloc_4867_; 
v_reuseFailAlloc_4867_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4867_, 0, v_a_4861_);
v___x_4866_ = v_reuseFailAlloc_4867_;
goto v_reusejp_4865_;
}
v_reusejp_4865_:
{
return v___x_4866_;
}
}
}
}
else
{
lean_object* v_a_4869_; lean_object* v___x_4871_; uint8_t v_isShared_4872_; uint8_t v_isSharedCheck_4876_; 
lean_dec(v___x_4572_);
lean_dec(v_a_4570_);
lean_del_object(v___x_4560_);
lean_dec(v_a_4544_);
lean_dec(v___x_4540_);
lean_dec(v_x_4526_);
v_a_4869_ = lean_ctor_get(v___x_4573_, 0);
v_isSharedCheck_4876_ = !lean_is_exclusive(v___x_4573_);
if (v_isSharedCheck_4876_ == 0)
{
v___x_4871_ = v___x_4573_;
v_isShared_4872_ = v_isSharedCheck_4876_;
goto v_resetjp_4870_;
}
else
{
lean_inc(v_a_4869_);
lean_dec(v___x_4573_);
v___x_4871_ = lean_box(0);
v_isShared_4872_ = v_isSharedCheck_4876_;
goto v_resetjp_4870_;
}
v_resetjp_4870_:
{
lean_object* v___x_4874_; 
if (v_isShared_4872_ == 0)
{
v___x_4874_ = v___x_4871_;
goto v_reusejp_4873_;
}
else
{
lean_object* v_reuseFailAlloc_4875_; 
v_reuseFailAlloc_4875_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4875_, 0, v_a_4869_);
v___x_4874_ = v_reuseFailAlloc_4875_;
goto v_reusejp_4873_;
}
v_reusejp_4873_:
{
return v___x_4874_;
}
}
}
}
else
{
lean_object* v_a_4877_; lean_object* v___x_4879_; uint8_t v_isShared_4880_; uint8_t v_isSharedCheck_4884_; 
lean_del_object(v___x_4560_);
lean_dec(v_snd_4558_);
lean_dec(v_a_4544_);
lean_dec(v___x_4540_);
lean_dec(v_x_4526_);
v_a_4877_ = lean_ctor_get(v___x_4569_, 0);
v_isSharedCheck_4884_ = !lean_is_exclusive(v___x_4569_);
if (v_isSharedCheck_4884_ == 0)
{
v___x_4879_ = v___x_4569_;
v_isShared_4880_ = v_isSharedCheck_4884_;
goto v_resetjp_4878_;
}
else
{
lean_inc(v_a_4877_);
lean_dec(v___x_4569_);
v___x_4879_ = lean_box(0);
v_isShared_4880_ = v_isSharedCheck_4884_;
goto v_resetjp_4878_;
}
v_resetjp_4878_:
{
lean_object* v___x_4882_; 
if (v_isShared_4880_ == 0)
{
v___x_4882_ = v___x_4879_;
goto v_reusejp_4881_;
}
else
{
lean_object* v_reuseFailAlloc_4883_; 
v_reuseFailAlloc_4883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4883_, 0, v_a_4877_);
v___x_4882_ = v_reuseFailAlloc_4883_;
goto v_reusejp_4881_;
}
v_reusejp_4881_:
{
return v___x_4882_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4886_; lean_object* v___x_4888_; uint8_t v_isShared_4889_; uint8_t v_isSharedCheck_4893_; 
lean_dec(v_a_4544_);
lean_dec(v___x_4540_);
lean_dec(v_x_4526_);
v_a_4886_ = lean_ctor_get(v___x_4547_, 0);
v_isSharedCheck_4893_ = !lean_is_exclusive(v___x_4547_);
if (v_isSharedCheck_4893_ == 0)
{
v___x_4888_ = v___x_4547_;
v_isShared_4889_ = v_isSharedCheck_4893_;
goto v_resetjp_4887_;
}
else
{
lean_inc(v_a_4886_);
lean_dec(v___x_4547_);
v___x_4888_ = lean_box(0);
v_isShared_4889_ = v_isSharedCheck_4893_;
goto v_resetjp_4887_;
}
v_resetjp_4887_:
{
lean_object* v___x_4891_; 
if (v_isShared_4889_ == 0)
{
v___x_4891_ = v___x_4888_;
goto v_reusejp_4890_;
}
else
{
lean_object* v_reuseFailAlloc_4892_; 
v_reuseFailAlloc_4892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4892_, 0, v_a_4886_);
v___x_4891_ = v_reuseFailAlloc_4892_;
goto v_reusejp_4890_;
}
v_reusejp_4890_:
{
return v___x_4891_;
}
}
}
}
else
{
lean_object* v_a_4894_; lean_object* v___x_4896_; uint8_t v_isShared_4897_; uint8_t v_isSharedCheck_4901_; 
lean_dec(v_a_4544_);
lean_dec(v___x_4540_);
lean_dec(v_x_4526_);
v_a_4894_ = lean_ctor_get(v___x_4545_, 0);
v_isSharedCheck_4901_ = !lean_is_exclusive(v___x_4545_);
if (v_isSharedCheck_4901_ == 0)
{
v___x_4896_ = v___x_4545_;
v_isShared_4897_ = v_isSharedCheck_4901_;
goto v_resetjp_4895_;
}
else
{
lean_inc(v_a_4894_);
lean_dec(v___x_4545_);
v___x_4896_ = lean_box(0);
v_isShared_4897_ = v_isSharedCheck_4901_;
goto v_resetjp_4895_;
}
v_resetjp_4895_:
{
lean_object* v___x_4899_; 
if (v_isShared_4897_ == 0)
{
v___x_4899_ = v___x_4896_;
goto v_reusejp_4898_;
}
else
{
lean_object* v_reuseFailAlloc_4900_; 
v_reuseFailAlloc_4900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4900_, 0, v_a_4894_);
v___x_4899_ = v_reuseFailAlloc_4900_;
goto v_reusejp_4898_;
}
v_reusejp_4898_:
{
return v___x_4899_;
}
}
}
}
else
{
lean_object* v_a_4902_; lean_object* v___x_4904_; uint8_t v_isShared_4905_; uint8_t v_isSharedCheck_4909_; 
lean_dec(v___x_4540_);
lean_dec(v_x_4526_);
v_a_4902_ = lean_ctor_get(v___x_4543_, 0);
v_isSharedCheck_4909_ = !lean_is_exclusive(v___x_4543_);
if (v_isSharedCheck_4909_ == 0)
{
v___x_4904_ = v___x_4543_;
v_isShared_4905_ = v_isSharedCheck_4909_;
goto v_resetjp_4903_;
}
else
{
lean_inc(v_a_4902_);
lean_dec(v___x_4543_);
v___x_4904_ = lean_box(0);
v_isShared_4905_ = v_isSharedCheck_4909_;
goto v_resetjp_4903_;
}
v_resetjp_4903_:
{
lean_object* v___x_4907_; 
if (v_isShared_4905_ == 0)
{
v___x_4907_ = v___x_4904_;
goto v_reusejp_4906_;
}
else
{
lean_object* v_reuseFailAlloc_4908_; 
v_reuseFailAlloc_4908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4908_, 0, v_a_4902_);
v___x_4907_ = v_reuseFailAlloc_4908_;
goto v_reusejp_4906_;
}
v_reusejp_4906_:
{
return v___x_4907_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1___boxed(lean_object* v_x_4910_, lean_object* v_a_4911_, lean_object* v_a_4912_, lean_object* v_a_4913_, lean_object* v_a_4914_, lean_object* v_a_4915_, lean_object* v_a_4916_, lean_object* v_a_4917_, lean_object* v_a_4918_, lean_object* v_a_4919_){
_start:
{
lean_object* v_res_4920_; 
v_res_4920_ = lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1(v_x_4910_, v_a_4911_, v_a_4912_, v_a_4913_, v_a_4914_, v_a_4915_, v_a_4916_, v_a_4917_, v_a_4918_);
lean_dec(v_a_4918_);
lean_dec_ref(v_a_4917_);
lean_dec(v_a_4916_);
lean_dec_ref(v_a_4915_);
lean_dec(v_a_4914_);
lean_dec_ref(v_a_4913_);
lean_dec(v_a_4912_);
lean_dec_ref(v_a_4911_);
return v_res_4920_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Props2Theories_Props2Theories_TacticNames(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Props2Theories_Props2Theories_Axioms(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Props2Theories_Props2Theories_TacticNames(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
