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
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1(lean_object* v_x_1865_, lean_object* v_a_1866_, lean_object* v_a_1867_, lean_object* v_a_1868_, lean_object* v_a_1869_, lean_object* v_a_1870_, lean_object* v_a_1871_, lean_object* v_a_1872_, lean_object* v_a_1873_){
_start:
{
lean_object* v___x_1875_; uint8_t v___x_1876_; 
v___x_1875_ = ((lean_object*)(lp_Props2Theories_tacticIntro__exists__in___00__closed__1));
lean_inc(v_x_1865_);
v___x_1876_ = l_Lean_Syntax_isOfKind(v_x_1865_, v___x_1875_);
if (v___x_1876_ == 0)
{
lean_object* v___x_1877_; 
lean_dec(v_x_1865_);
v___x_1877_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__0___redArg();
return v___x_1877_;
}
else
{
lean_object* v_ref_1878_; lean_object* v_quotContext_1879_; lean_object* v_currMacroScope_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; uint8_t v___x_1883_; lean_object* v___x_1884_; lean_object* v___x_1885_; lean_object* v___x_1886_; lean_object* v___x_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; lean_object* v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; lean_object* v___x_1957_; lean_object* v___x_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1964_; lean_object* v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; lean_object* v___x_1972_; lean_object* v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; 
v_ref_1878_ = lean_ctor_get(v_a_1872_, 5);
v_quotContext_1879_ = lean_ctor_get(v_a_1872_, 10);
v_currMacroScope_1880_ = lean_ctor_get(v_a_1872_, 11);
v___x_1881_ = lean_unsigned_to_nat(1u);
v___x_1882_ = l_Lean_Syntax_getArg(v_x_1865_, v___x_1881_);
lean_dec(v_x_1865_);
v___x_1883_ = 0;
v___x_1884_ = l_Lean_SourceInfo_fromRef(v_ref_1878_, v___x_1883_);
v___x_1885_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__1));
v___x_1886_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__11));
v___x_1887_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__2));
v___x_1888_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__3));
lean_inc_n(v___x_1884_, 48);
v___x_1889_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1889_, 0, v___x_1884_);
lean_ctor_set(v___x_1889_, 1, v___x_1888_);
v___x_1890_ = l_Lean_Syntax_node2(v___x_1884_, v___x_1887_, v___x_1889_, v___x_1882_);
v___x_1891_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__4));
v___x_1892_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1892_, 0, v___x_1884_);
lean_ctor_set(v___x_1892_, 1, v___x_1891_);
v___x_1893_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__4));
v___x_1894_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__7));
v___x_1895_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1895_, 0, v___x_1884_);
lean_ctor_set(v___x_1895_, 1, v___x_1894_);
v___x_1896_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__9));
v___x_1897_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__11));
v___x_1898_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__6));
v___x_1899_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__7));
v___x_1900_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1900_, 0, v___x_1884_);
lean_ctor_set(v___x_1900_, 1, v___x_1899_);
v___x_1901_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__12));
v___x_1902_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__13));
v___x_1903_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1903_, 0, v___x_1884_);
lean_ctor_set(v___x_1903_, 1, v___x_1901_);
v___x_1904_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__15));
v___x_1905_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__17));
v___x_1906_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__19));
v___x_1907_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__21, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__21_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__21);
v___x_1908_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__22));
lean_inc_n(v_currMacroScope_1880_, 6);
lean_inc_n(v_quotContext_1879_, 6);
v___x_1909_ = l_Lean_addMacroScope(v_quotContext_1879_, v___x_1908_, v_currMacroScope_1880_);
v___x_1910_ = lean_box(0);
v___x_1911_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1911_, 0, v___x_1884_);
lean_ctor_set(v___x_1911_, 1, v___x_1907_);
lean_ctor_set(v___x_1911_, 2, v___x_1909_);
lean_ctor_set(v___x_1911_, 3, v___x_1910_);
v___x_1912_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__23));
v___x_1913_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1913_, 0, v___x_1884_);
lean_ctor_set(v___x_1913_, 1, v___x_1912_);
v___x_1914_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__25));
v___x_1915_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__26));
v___x_1916_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1916_, 0, v___x_1884_);
lean_ctor_set(v___x_1916_, 1, v___x_1915_);
v___x_1917_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19, &lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19);
v___x_1918_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1918_, 0, v___x_1884_);
lean_ctor_set(v___x_1918_, 1, v___x_1886_);
lean_ctor_set(v___x_1918_, 2, v___x_1917_);
v___x_1919_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__28));
v___x_1920_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__30));
v___x_1921_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__32));
v___x_1922_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__34, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__34_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__34);
v___x_1923_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__35));
v___x_1924_ = l_Lean_addMacroScope(v_quotContext_1879_, v___x_1923_, v_currMacroScope_1880_);
v___x_1925_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1925_, 0, v___x_1884_);
lean_ctor_set(v___x_1925_, 1, v___x_1922_);
lean_ctor_set(v___x_1925_, 2, v___x_1924_);
lean_ctor_set(v___x_1925_, 3, v___x_1910_);
lean_inc_ref_n(v___x_1918_, 15);
v___x_1926_ = l_Lean_Syntax_node2(v___x_1884_, v___x_1921_, v___x_1925_, v___x_1918_);
v___x_1927_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__37));
v___x_1928_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__39, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__39_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__39);
v___x_1929_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__40));
v___x_1930_ = l_Lean_addMacroScope(v_quotContext_1879_, v___x_1929_, v_currMacroScope_1880_);
v___x_1931_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__44));
v___x_1932_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1932_, 0, v___x_1884_);
lean_ctor_set(v___x_1932_, 1, v___x_1928_);
lean_ctor_set(v___x_1932_, 2, v___x_1930_);
lean_ctor_set(v___x_1932_, 3, v___x_1931_);
lean_inc_ref_n(v___x_1913_, 2);
v___x_1933_ = l_Lean_Syntax_node3(v___x_1884_, v___x_1927_, v___x_1913_, v___x_1918_, v___x_1932_);
v___x_1934_ = l_Lean_Syntax_node3(v___x_1884_, v___x_1886_, v___x_1918_, v___x_1918_, v___x_1933_);
v___x_1935_ = l_Lean_Syntax_node2(v___x_1884_, v___x_1920_, v___x_1926_, v___x_1934_);
v___x_1936_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__23));
v___x_1937_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1937_, 0, v___x_1884_);
lean_ctor_set(v___x_1937_, 1, v___x_1936_);
v___x_1938_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__46, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__46_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__46);
v___x_1939_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__47));
v___x_1940_ = l_Lean_addMacroScope(v_quotContext_1879_, v___x_1939_, v_currMacroScope_1880_);
v___x_1941_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1941_, 0, v___x_1884_);
lean_ctor_set(v___x_1941_, 1, v___x_1938_);
lean_ctor_set(v___x_1941_, 2, v___x_1940_);
lean_ctor_set(v___x_1941_, 3, v___x_1910_);
v___x_1942_ = l_Lean_Syntax_node2(v___x_1884_, v___x_1921_, v___x_1941_, v___x_1918_);
v___x_1943_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__49, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__49_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__49);
v___x_1944_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__50));
v___x_1945_ = l_Lean_addMacroScope(v_quotContext_1879_, v___x_1944_, v_currMacroScope_1880_);
v___x_1946_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__53));
v___x_1947_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1947_, 0, v___x_1884_);
lean_ctor_set(v___x_1947_, 1, v___x_1943_);
lean_ctor_set(v___x_1947_, 2, v___x_1945_);
lean_ctor_set(v___x_1947_, 3, v___x_1946_);
v___x_1948_ = l_Lean_Syntax_node3(v___x_1884_, v___x_1927_, v___x_1913_, v___x_1918_, v___x_1947_);
v___x_1949_ = l_Lean_Syntax_node3(v___x_1884_, v___x_1886_, v___x_1918_, v___x_1918_, v___x_1948_);
lean_inc(v___x_1949_);
v___x_1950_ = l_Lean_Syntax_node2(v___x_1884_, v___x_1920_, v___x_1942_, v___x_1949_);
v___x_1951_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__55, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__55_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__55);
v___x_1952_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__56));
v___x_1953_ = l_Lean_addMacroScope(v_quotContext_1879_, v___x_1952_, v_currMacroScope_1880_);
v___x_1954_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1954_, 0, v___x_1884_);
lean_ctor_set(v___x_1954_, 1, v___x_1951_);
lean_ctor_set(v___x_1954_, 2, v___x_1953_);
lean_ctor_set(v___x_1954_, 3, v___x_1910_);
v___x_1955_ = l_Lean_Syntax_node2(v___x_1884_, v___x_1921_, v___x_1954_, v___x_1918_);
v___x_1956_ = l_Lean_Syntax_node2(v___x_1884_, v___x_1920_, v___x_1955_, v___x_1949_);
lean_inc_ref(v___x_1937_);
v___x_1957_ = l_Lean_Syntax_node5(v___x_1884_, v___x_1886_, v___x_1935_, v___x_1937_, v___x_1950_, v___x_1937_, v___x_1956_);
v___x_1958_ = l_Lean_Syntax_node1(v___x_1884_, v___x_1919_, v___x_1957_);
v___x_1959_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__58));
v___x_1960_ = l_Lean_Syntax_node1(v___x_1884_, v___x_1959_, v___x_1918_);
v___x_1961_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__59));
v___x_1962_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1962_, 0, v___x_1884_);
lean_ctor_set(v___x_1962_, 1, v___x_1961_);
v___x_1963_ = l_Lean_Syntax_node6(v___x_1884_, v___x_1914_, v___x_1916_, v___x_1918_, v___x_1958_, v___x_1960_, v___x_1918_, v___x_1962_);
v___x_1964_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__49));
v___x_1965_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1965_, 0, v___x_1884_);
lean_ctor_set(v___x_1965_, 1, v___x_1964_);
lean_inc_ref(v___x_1965_);
lean_inc_ref(v___x_1895_);
v___x_1966_ = l_Lean_Syntax_node5(v___x_1884_, v___x_1906_, v___x_1895_, v___x_1911_, v___x_1913_, v___x_1963_, v___x_1965_);
v___x_1967_ = l_Lean_Syntax_node1(v___x_1884_, v___x_1905_, v___x_1966_);
v___x_1968_ = l_Lean_Syntax_node1(v___x_1884_, v___x_1886_, v___x_1967_);
v___x_1969_ = l_Lean_Syntax_node1(v___x_1884_, v___x_1904_, v___x_1968_);
v___x_1970_ = l_Lean_Syntax_node6(v___x_1884_, v___x_1902_, v___x_1903_, v___x_1969_, v___x_1918_, v___x_1918_, v___x_1918_, v___x_1918_);
v___x_1971_ = l_Lean_Syntax_node1(v___x_1884_, v___x_1886_, v___x_1970_);
v___x_1972_ = l_Lean_Syntax_node1(v___x_1884_, v___x_1897_, v___x_1971_);
v___x_1973_ = l_Lean_Syntax_node1(v___x_1884_, v___x_1896_, v___x_1972_);
v___x_1974_ = l_Lean_Syntax_node2(v___x_1884_, v___x_1898_, v___x_1900_, v___x_1973_);
v___x_1975_ = l_Lean_Syntax_node1(v___x_1884_, v___x_1886_, v___x_1974_);
v___x_1976_ = l_Lean_Syntax_node1(v___x_1884_, v___x_1897_, v___x_1975_);
v___x_1977_ = l_Lean_Syntax_node1(v___x_1884_, v___x_1896_, v___x_1976_);
v___x_1978_ = l_Lean_Syntax_node3(v___x_1884_, v___x_1893_, v___x_1895_, v___x_1977_, v___x_1965_);
v___x_1979_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__6));
v___x_1980_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__7));
v___x_1981_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1981_, 0, v___x_1884_);
lean_ctor_set(v___x_1981_, 1, v___x_1980_);
v___x_1982_ = l_Lean_Syntax_node1(v___x_1884_, v___x_1979_, v___x_1981_);
lean_inc_ref(v___x_1892_);
v___x_1983_ = l_Lean_Syntax_node5(v___x_1884_, v___x_1886_, v___x_1890_, v___x_1892_, v___x_1978_, v___x_1892_, v___x_1982_);
v___x_1984_ = l_Lean_Syntax_node1(v___x_1884_, v___x_1885_, v___x_1983_);
v___x_1985_ = l_Lean_Elab_Tactic_evalTactic(v___x_1984_, v_a_1866_, v_a_1867_, v_a_1868_, v_a_1869_, v_a_1870_, v_a_1871_, v_a_1872_, v_a_1873_);
return v___x_1985_;
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___boxed(lean_object* v_x_1986_, lean_object* v_a_1987_, lean_object* v_a_1988_, lean_object* v_a_1989_, lean_object* v_a_1990_, lean_object* v_a_1991_, lean_object* v_a_1992_, lean_object* v_a_1993_, lean_object* v_a_1994_, lean_object* v_a_1995_){
_start:
{
lean_object* v_res_1996_; 
v_res_1996_ = lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1(v_x_1986_, v_a_1987_, v_a_1988_, v_a_1989_, v_a_1990_, v_a_1991_, v_a_1992_, v_a_1993_, v_a_1994_);
lean_dec(v_a_1994_);
lean_dec_ref(v_a_1993_);
lean_dec(v_a_1992_);
lean_dec_ref(v_a_1991_);
lean_dec(v_a_1990_);
lean_dec_ref(v_a_1989_);
lean_dec(v_a_1988_);
lean_dec_ref(v_a_1987_);
return v_res_1996_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in_____x2c___x2c____1(lean_object* v_x_2035_, lean_object* v_a_2036_, lean_object* v_a_2037_, lean_object* v_a_2038_, lean_object* v_a_2039_, lean_object* v_a_2040_, lean_object* v_a_2041_, lean_object* v_a_2042_, lean_object* v_a_2043_){
_start:
{
lean_object* v___x_2045_; uint8_t v___x_2046_; 
v___x_2045_ = ((lean_object*)(lp_Props2Theories_tacticIntro__exists__in_____x2c___x2c___00__closed__1));
lean_inc(v_x_2035_);
v___x_2046_ = l_Lean_Syntax_isOfKind(v_x_2035_, v___x_2045_);
if (v___x_2046_ == 0)
{
lean_object* v___x_2047_; 
lean_dec(v_x_2035_);
v___x_2047_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__0___redArg();
return v___x_2047_;
}
else
{
lean_object* v_ref_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; uint8_t v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; 
v_ref_2048_ = lean_ctor_get(v_a_2042_, 5);
v___x_2049_ = lean_unsigned_to_nat(1u);
v___x_2050_ = l_Lean_Syntax_getArg(v_x_2035_, v___x_2049_);
v___x_2051_ = lean_unsigned_to_nat(3u);
v___x_2052_ = l_Lean_Syntax_getArg(v_x_2035_, v___x_2051_);
v___x_2053_ = lean_unsigned_to_nat(5u);
v___x_2054_ = l_Lean_Syntax_getArg(v_x_2035_, v___x_2053_);
lean_dec(v_x_2035_);
v___x_2055_ = 0;
v___x_2056_ = l_Lean_SourceInfo_fromRef(v_ref_2048_, v___x_2055_);
v___x_2057_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__1));
v___x_2058_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__11));
v___x_2059_ = ((lean_object*)(lp_Props2Theories_tacticIntro__exists__in___00__closed__1));
v___x_2060_ = ((lean_object*)(lp_Props2Theories_tacticIntro__exists__in___00__closed__2));
lean_inc_n(v___x_2056_, 7);
v___x_2061_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2061_, 0, v___x_2056_);
lean_ctor_set(v___x_2061_, 1, v___x_2060_);
v___x_2062_ = l_Lean_Syntax_node2(v___x_2056_, v___x_2059_, v___x_2061_, v___x_2050_);
v___x_2063_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__4));
v___x_2064_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2064_, 0, v___x_2056_);
lean_ctor_set(v___x_2064_, 1, v___x_2063_);
v___x_2065_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in_____x2c___x2c____1___closed__0));
v___x_2066_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in_____x2c___x2c____1___closed__1));
v___x_2067_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2067_, 0, v___x_2056_);
lean_ctor_set(v___x_2067_, 1, v___x_2065_);
lean_inc_ref(v___x_2067_);
v___x_2068_ = l_Lean_Syntax_node2(v___x_2056_, v___x_2066_, v___x_2067_, v___x_2052_);
v___x_2069_ = l_Lean_Syntax_node2(v___x_2056_, v___x_2066_, v___x_2067_, v___x_2054_);
lean_inc_ref(v___x_2064_);
v___x_2070_ = l_Lean_Syntax_node5(v___x_2056_, v___x_2058_, v___x_2062_, v___x_2064_, v___x_2068_, v___x_2064_, v___x_2069_);
v___x_2071_ = l_Lean_Syntax_node1(v___x_2056_, v___x_2057_, v___x_2070_);
v___x_2072_ = l_Lean_Elab_Tactic_evalTactic(v___x_2071_, v_a_2036_, v_a_2037_, v_a_2038_, v_a_2039_, v_a_2040_, v_a_2041_, v_a_2042_, v_a_2043_);
return v___x_2072_;
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in_____x2c___x2c____1___boxed(lean_object* v_x_2073_, lean_object* v_a_2074_, lean_object* v_a_2075_, lean_object* v_a_2076_, lean_object* v_a_2077_, lean_object* v_a_2078_, lean_object* v_a_2079_, lean_object* v_a_2080_, lean_object* v_a_2081_, lean_object* v_a_2082_){
_start:
{
lean_object* v_res_2083_; 
v_res_2083_ = lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in_____x2c___x2c____1(v_x_2073_, v_a_2074_, v_a_2075_, v_a_2076_, v_a_2077_, v_a_2078_, v_a_2079_, v_a_2080_, v_a_2081_);
lean_dec(v_a_2081_);
lean_dec_ref(v_a_2080_);
lean_dec(v_a_2079_);
lean_dec_ref(v_a_2078_);
lean_dec(v_a_2077_);
lean_dec_ref(v_a_2076_);
lean_dec(v_a_2075_);
lean_dec_ref(v_a_2074_);
return v_res_2083_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___lam__0(lean_object* v_h__new_2124_, lean_object* v_a_2125_, lean_object* v_a_2126_, uint8_t v___x_2127_, lean_object* v___y_2128_, lean_object* v___y_2129_, lean_object* v___y_2130_, lean_object* v___y_2131_, lean_object* v___y_2132_, lean_object* v___y_2133_, lean_object* v___y_2134_, lean_object* v___y_2135_){
_start:
{
lean_object* v___x_2137_; 
v___x_2137_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_2129_, v___y_2132_, v___y_2133_, v___y_2134_, v___y_2135_);
if (lean_obj_tag(v___x_2137_) == 0)
{
lean_object* v_a_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; 
v_a_2138_ = lean_ctor_get(v___x_2137_, 0);
lean_inc(v_a_2138_);
lean_dec_ref(v___x_2137_);
v___x_2139_ = l_Lean_Syntax_getId(v_h__new_2124_);
v___x_2140_ = l_Lean_MVarId_assert(v_a_2138_, v___x_2139_, v_a_2125_, v_a_2126_, v___y_2132_, v___y_2133_, v___y_2134_, v___y_2135_);
if (lean_obj_tag(v___x_2140_) == 0)
{
lean_object* v_a_2141_; lean_object* v___x_2142_; 
v_a_2141_ = lean_ctor_get(v___x_2140_, 0);
lean_inc(v_a_2141_);
lean_dec_ref(v___x_2140_);
v___x_2142_ = l_Lean_Meta_intro1Core(v_a_2141_, v___x_2127_, v___y_2132_, v___y_2133_, v___y_2134_, v___y_2135_);
if (lean_obj_tag(v___x_2142_) == 0)
{
lean_object* v_a_2143_; lean_object* v_snd_2144_; lean_object* v___x_2146_; uint8_t v_isShared_2147_; uint8_t v_isSharedCheck_2162_; 
v_a_2143_ = lean_ctor_get(v___x_2142_, 0);
lean_inc(v_a_2143_);
lean_dec_ref(v___x_2142_);
v_snd_2144_ = lean_ctor_get(v_a_2143_, 1);
v_isSharedCheck_2162_ = !lean_is_exclusive(v_a_2143_);
if (v_isSharedCheck_2162_ == 0)
{
lean_object* v_unused_2163_; 
v_unused_2163_ = lean_ctor_get(v_a_2143_, 0);
lean_dec(v_unused_2163_);
v___x_2146_ = v_a_2143_;
v_isShared_2147_ = v_isSharedCheck_2162_;
goto v_resetjp_2145_;
}
else
{
lean_inc(v_snd_2144_);
lean_dec(v_a_2143_);
v___x_2146_ = lean_box(0);
v_isShared_2147_ = v_isSharedCheck_2162_;
goto v_resetjp_2145_;
}
v_resetjp_2145_:
{
lean_object* v___x_2148_; lean_object* v___x_2150_; 
v___x_2148_ = lean_box(0);
if (v_isShared_2147_ == 0)
{
lean_ctor_set_tag(v___x_2146_, 1);
lean_ctor_set(v___x_2146_, 1, v___x_2148_);
lean_ctor_set(v___x_2146_, 0, v_snd_2144_);
v___x_2150_ = v___x_2146_;
goto v_reusejp_2149_;
}
else
{
lean_object* v_reuseFailAlloc_2161_; 
v_reuseFailAlloc_2161_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2161_, 0, v_snd_2144_);
lean_ctor_set(v_reuseFailAlloc_2161_, 1, v___x_2148_);
v___x_2150_ = v_reuseFailAlloc_2161_;
goto v_reusejp_2149_;
}
v_reusejp_2149_:
{
lean_object* v___x_2151_; 
v___x_2151_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_2150_, v___y_2129_, v___y_2132_, v___y_2133_, v___y_2134_, v___y_2135_);
if (lean_obj_tag(v___x_2151_) == 0)
{
lean_object* v___x_2153_; uint8_t v_isShared_2154_; uint8_t v_isSharedCheck_2159_; 
v_isSharedCheck_2159_ = !lean_is_exclusive(v___x_2151_);
if (v_isSharedCheck_2159_ == 0)
{
lean_object* v_unused_2160_; 
v_unused_2160_ = lean_ctor_get(v___x_2151_, 0);
lean_dec(v_unused_2160_);
v___x_2153_ = v___x_2151_;
v_isShared_2154_ = v_isSharedCheck_2159_;
goto v_resetjp_2152_;
}
else
{
lean_dec(v___x_2151_);
v___x_2153_ = lean_box(0);
v_isShared_2154_ = v_isSharedCheck_2159_;
goto v_resetjp_2152_;
}
v_resetjp_2152_:
{
lean_object* v___x_2155_; lean_object* v___x_2157_; 
v___x_2155_ = lean_box(0);
if (v_isShared_2154_ == 0)
{
lean_ctor_set(v___x_2153_, 0, v___x_2155_);
v___x_2157_ = v___x_2153_;
goto v_reusejp_2156_;
}
else
{
lean_object* v_reuseFailAlloc_2158_; 
v_reuseFailAlloc_2158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2158_, 0, v___x_2155_);
v___x_2157_ = v_reuseFailAlloc_2158_;
goto v_reusejp_2156_;
}
v_reusejp_2156_:
{
return v___x_2157_;
}
}
}
else
{
return v___x_2151_;
}
}
}
}
else
{
lean_object* v_a_2164_; lean_object* v___x_2166_; uint8_t v_isShared_2167_; uint8_t v_isSharedCheck_2171_; 
v_a_2164_ = lean_ctor_get(v___x_2142_, 0);
v_isSharedCheck_2171_ = !lean_is_exclusive(v___x_2142_);
if (v_isSharedCheck_2171_ == 0)
{
v___x_2166_ = v___x_2142_;
v_isShared_2167_ = v_isSharedCheck_2171_;
goto v_resetjp_2165_;
}
else
{
lean_inc(v_a_2164_);
lean_dec(v___x_2142_);
v___x_2166_ = lean_box(0);
v_isShared_2167_ = v_isSharedCheck_2171_;
goto v_resetjp_2165_;
}
v_resetjp_2165_:
{
lean_object* v___x_2169_; 
if (v_isShared_2167_ == 0)
{
v___x_2169_ = v___x_2166_;
goto v_reusejp_2168_;
}
else
{
lean_object* v_reuseFailAlloc_2170_; 
v_reuseFailAlloc_2170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2170_, 0, v_a_2164_);
v___x_2169_ = v_reuseFailAlloc_2170_;
goto v_reusejp_2168_;
}
v_reusejp_2168_:
{
return v___x_2169_;
}
}
}
}
else
{
lean_object* v_a_2172_; lean_object* v___x_2174_; uint8_t v_isShared_2175_; uint8_t v_isSharedCheck_2179_; 
v_a_2172_ = lean_ctor_get(v___x_2140_, 0);
v_isSharedCheck_2179_ = !lean_is_exclusive(v___x_2140_);
if (v_isSharedCheck_2179_ == 0)
{
v___x_2174_ = v___x_2140_;
v_isShared_2175_ = v_isSharedCheck_2179_;
goto v_resetjp_2173_;
}
else
{
lean_inc(v_a_2172_);
lean_dec(v___x_2140_);
v___x_2174_ = lean_box(0);
v_isShared_2175_ = v_isSharedCheck_2179_;
goto v_resetjp_2173_;
}
v_resetjp_2173_:
{
lean_object* v___x_2177_; 
if (v_isShared_2175_ == 0)
{
v___x_2177_ = v___x_2174_;
goto v_reusejp_2176_;
}
else
{
lean_object* v_reuseFailAlloc_2178_; 
v_reuseFailAlloc_2178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2178_, 0, v_a_2172_);
v___x_2177_ = v_reuseFailAlloc_2178_;
goto v_reusejp_2176_;
}
v_reusejp_2176_:
{
return v___x_2177_;
}
}
}
}
else
{
lean_object* v_a_2180_; lean_object* v___x_2182_; uint8_t v_isShared_2183_; uint8_t v_isSharedCheck_2187_; 
lean_dec_ref(v_a_2126_);
lean_dec_ref(v_a_2125_);
v_a_2180_ = lean_ctor_get(v___x_2137_, 0);
v_isSharedCheck_2187_ = !lean_is_exclusive(v___x_2137_);
if (v_isSharedCheck_2187_ == 0)
{
v___x_2182_ = v___x_2137_;
v_isShared_2183_ = v_isSharedCheck_2187_;
goto v_resetjp_2181_;
}
else
{
lean_inc(v_a_2180_);
lean_dec(v___x_2137_);
v___x_2182_ = lean_box(0);
v_isShared_2183_ = v_isSharedCheck_2187_;
goto v_resetjp_2181_;
}
v_resetjp_2181_:
{
lean_object* v___x_2185_; 
if (v_isShared_2183_ == 0)
{
v___x_2185_ = v___x_2182_;
goto v_reusejp_2184_;
}
else
{
lean_object* v_reuseFailAlloc_2186_; 
v_reuseFailAlloc_2186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2186_, 0, v_a_2180_);
v___x_2185_ = v_reuseFailAlloc_2186_;
goto v_reusejp_2184_;
}
v_reusejp_2184_:
{
return v___x_2185_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___lam__0___boxed(lean_object* v_h__new_2188_, lean_object* v_a_2189_, lean_object* v_a_2190_, lean_object* v___x_2191_, lean_object* v___y_2192_, lean_object* v___y_2193_, lean_object* v___y_2194_, lean_object* v___y_2195_, lean_object* v___y_2196_, lean_object* v___y_2197_, lean_object* v___y_2198_, lean_object* v___y_2199_, lean_object* v___y_2200_){
_start:
{
uint8_t v___x_3773__boxed_2201_; lean_object* v_res_2202_; 
v___x_3773__boxed_2201_ = lean_unbox(v___x_2191_);
v_res_2202_ = lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___lam__0(v_h__new_2188_, v_a_2189_, v_a_2190_, v___x_3773__boxed_2201_, v___y_2192_, v___y_2193_, v___y_2194_, v___y_2195_, v___y_2196_, v___y_2197_, v___y_2198_, v___y_2199_);
lean_dec(v___y_2199_);
lean_dec_ref(v___y_2198_);
lean_dec(v___y_2197_);
lean_dec_ref(v___y_2196_);
lean_dec(v___y_2195_);
lean_dec_ref(v___y_2194_);
lean_dec(v___y_2193_);
lean_dec_ref(v___y_2192_);
lean_dec(v_h__new_2188_);
return v_res_2202_;
}
}
static lean_object* _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___closed__4(void){
_start:
{
lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; 
v___x_2211_ = lean_box(0);
v___x_2212_ = lean_unsigned_to_nat(4u);
v___x_2213_ = lean_mk_empty_array_with_capacity(v___x_2212_);
v___x_2214_ = lean_array_push(v___x_2213_, v___x_2211_);
return v___x_2214_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1(lean_object* v_x_2215_, lean_object* v_a_2216_, lean_object* v_a_2217_, lean_object* v_a_2218_, lean_object* v_a_2219_, lean_object* v_a_2220_, lean_object* v_a_2221_, lean_object* v_a_2222_, lean_object* v_a_2223_){
_start:
{
lean_object* v___x_2225_; uint8_t v___x_2226_; 
v___x_2225_ = ((lean_object*)(lp_Props2Theories_tactic__intro__exists__in___x2c___x2c___x2c___00__closed__1));
lean_inc(v_x_2215_);
v___x_2226_ = l_Lean_Syntax_isOfKind(v_x_2215_, v___x_2225_);
if (v___x_2226_ == 0)
{
lean_object* v___x_2227_; 
lean_dec(v_x_2215_);
v___x_2227_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__0___redArg();
return v___x_2227_;
}
else
{
lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; uint8_t v___x_2231_; lean_object* v___x_2232_; 
v___x_2228_ = lean_unsigned_to_nat(1u);
v___x_2229_ = l_Lean_Syntax_getArg(v_x_2215_, v___x_2228_);
v___x_2230_ = lean_box(0);
v___x_2231_ = 0;
v___x_2232_ = l_Lean_Elab_Tactic_elabTerm(v___x_2229_, v___x_2230_, v___x_2231_, v_a_2216_, v_a_2217_, v_a_2218_, v_a_2219_, v_a_2220_, v_a_2221_, v_a_2222_, v_a_2223_);
if (lean_obj_tag(v___x_2232_) == 0)
{
lean_object* v_a_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; 
v_a_2233_ = lean_ctor_get(v___x_2232_, 0);
lean_inc(v_a_2233_);
lean_dec_ref(v___x_2232_);
v___x_2234_ = lean_unsigned_to_nat(3u);
v___x_2235_ = l_Lean_Syntax_getArg(v_x_2215_, v___x_2234_);
v___x_2236_ = l_Lean_Elab_Tactic_elabTerm(v___x_2235_, v___x_2230_, v___x_2231_, v_a_2216_, v_a_2217_, v_a_2218_, v_a_2219_, v_a_2220_, v_a_2221_, v_a_2222_, v_a_2223_);
if (lean_obj_tag(v___x_2236_) == 0)
{
lean_object* v_a_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; 
v_a_2237_ = lean_ctor_get(v___x_2236_, 0);
lean_inc(v_a_2237_);
lean_dec_ref(v___x_2236_);
v___x_2238_ = lean_unsigned_to_nat(5u);
v___x_2239_ = l_Lean_Syntax_getArg(v_x_2215_, v___x_2238_);
v___x_2240_ = l_Lean_Elab_Tactic_elabTerm(v___x_2239_, v___x_2230_, v___x_2231_, v_a_2216_, v_a_2217_, v_a_2218_, v_a_2219_, v_a_2220_, v_a_2221_, v_a_2222_, v_a_2223_);
if (lean_obj_tag(v___x_2240_) == 0)
{
lean_object* v_a_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; 
v_a_2241_ = lean_ctor_get(v___x_2240_, 0);
lean_inc(v_a_2241_);
lean_dec_ref(v___x_2240_);
v___x_2242_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___closed__1));
v___x_2243_ = lean_unsigned_to_nat(2u);
v___x_2244_ = lean_mk_empty_array_with_capacity(v___x_2243_);
v___x_2245_ = lean_array_push(v___x_2244_, v_a_2237_);
v___x_2246_ = lean_array_push(v___x_2245_, v_a_2241_);
v___x_2247_ = l_Lean_Meta_mkAppM(v___x_2242_, v___x_2246_, v_a_2220_, v_a_2221_, v_a_2222_, v_a_2223_);
if (lean_obj_tag(v___x_2247_) == 0)
{
lean_object* v_a_2248_; lean_object* v___x_2249_; 
v_a_2248_ = lean_ctor_get(v___x_2247_, 0);
lean_inc_n(v_a_2248_, 2);
lean_dec_ref(v___x_2247_);
lean_inc(v_a_2223_);
lean_inc_ref(v_a_2222_);
lean_inc(v_a_2221_);
lean_inc_ref(v_a_2220_);
v___x_2249_ = lean_infer_type(v_a_2248_, v_a_2220_, v_a_2221_, v_a_2222_, v_a_2223_);
if (lean_obj_tag(v___x_2249_) == 0)
{
lean_object* v_a_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; 
v_a_2250_ = lean_ctor_get(v___x_2249_, 0);
lean_inc(v_a_2250_);
lean_dec_ref(v___x_2249_);
v___x_2251_ = lean_box(0);
lean_inc(v_a_2233_);
v___x_2252_ = l_Lean_Meta_kabstract(v_a_2250_, v_a_2233_, v___x_2251_, v_a_2220_, v_a_2221_, v_a_2222_, v_a_2223_);
if (lean_obj_tag(v___x_2252_) == 0)
{
lean_object* v_a_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; uint8_t v___x_2256_; lean_object* v___x_2257_; 
v_a_2253_ = lean_ctor_get(v___x_2252_, 0);
lean_inc(v_a_2253_);
lean_dec_ref(v___x_2252_);
v___x_2254_ = lean_mk_empty_array_with_capacity(v___x_2228_);
lean_inc(v_a_2233_);
v___x_2255_ = lean_array_push(v___x_2254_, v_a_2233_);
v___x_2256_ = 1;
v___x_2257_ = l_Lean_Meta_mkLambdaFVars(v___x_2255_, v_a_2253_, v___x_2231_, v___x_2226_, v___x_2231_, v___x_2226_, v___x_2256_, v_a_2220_, v_a_2221_, v_a_2222_, v_a_2223_);
lean_dec_ref(v___x_2255_);
if (lean_obj_tag(v___x_2257_) == 0)
{
lean_object* v_a_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; lean_object* v___x_2267_; 
v_a_2258_ = lean_ctor_get(v___x_2257_, 0);
lean_inc(v_a_2258_);
lean_dec_ref(v___x_2257_);
v___x_2259_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___closed__3));
v___x_2260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2260_, 0, v_a_2258_);
v___x_2261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2261_, 0, v_a_2233_);
v___x_2262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2262_, 0, v_a_2248_);
v___x_2263_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___closed__4, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___closed__4_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___closed__4);
v___x_2264_ = lean_array_push(v___x_2263_, v___x_2260_);
v___x_2265_ = lean_array_push(v___x_2264_, v___x_2261_);
v___x_2266_ = lean_array_push(v___x_2265_, v___x_2262_);
v___x_2267_ = l_Lean_Meta_mkAppOptM(v___x_2259_, v___x_2266_, v_a_2220_, v_a_2221_, v_a_2222_, v_a_2223_);
if (lean_obj_tag(v___x_2267_) == 0)
{
lean_object* v_a_2268_; lean_object* v___x_2269_; 
v_a_2268_ = lean_ctor_get(v___x_2267_, 0);
lean_inc_n(v_a_2268_, 2);
lean_dec_ref(v___x_2267_);
lean_inc(v_a_2223_);
lean_inc_ref(v_a_2222_);
lean_inc(v_a_2221_);
lean_inc_ref(v_a_2220_);
v___x_2269_ = lean_infer_type(v_a_2268_, v_a_2220_, v_a_2221_, v_a_2222_, v_a_2223_);
if (lean_obj_tag(v___x_2269_) == 0)
{
lean_object* v_a_2270_; lean_object* v___x_2271_; lean_object* v_h__new_2272_; lean_object* v___x_2273_; lean_object* v___f_2274_; lean_object* v___x_2275_; 
v_a_2270_ = lean_ctor_get(v___x_2269_, 0);
lean_inc(v_a_2270_);
lean_dec_ref(v___x_2269_);
v___x_2271_ = lean_unsigned_to_nat(7u);
v_h__new_2272_ = l_Lean_Syntax_getArg(v_x_2215_, v___x_2271_);
lean_dec(v_x_2215_);
v___x_2273_ = lean_box(v___x_2226_);
v___f_2274_ = lean_alloc_closure((void*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___lam__0___boxed), 13, 4);
lean_closure_set(v___f_2274_, 0, v_h__new_2272_);
lean_closure_set(v___f_2274_, 1, v_a_2270_);
lean_closure_set(v___f_2274_, 2, v_a_2268_);
lean_closure_set(v___f_2274_, 3, v___x_2273_);
v___x_2275_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_2274_, v_a_2216_, v_a_2217_, v_a_2218_, v_a_2219_, v_a_2220_, v_a_2221_, v_a_2222_, v_a_2223_);
return v___x_2275_;
}
else
{
lean_object* v_a_2276_; lean_object* v___x_2278_; uint8_t v_isShared_2279_; uint8_t v_isSharedCheck_2283_; 
lean_dec(v_a_2268_);
lean_dec(v_x_2215_);
v_a_2276_ = lean_ctor_get(v___x_2269_, 0);
v_isSharedCheck_2283_ = !lean_is_exclusive(v___x_2269_);
if (v_isSharedCheck_2283_ == 0)
{
v___x_2278_ = v___x_2269_;
v_isShared_2279_ = v_isSharedCheck_2283_;
goto v_resetjp_2277_;
}
else
{
lean_inc(v_a_2276_);
lean_dec(v___x_2269_);
v___x_2278_ = lean_box(0);
v_isShared_2279_ = v_isSharedCheck_2283_;
goto v_resetjp_2277_;
}
v_resetjp_2277_:
{
lean_object* v___x_2281_; 
if (v_isShared_2279_ == 0)
{
v___x_2281_ = v___x_2278_;
goto v_reusejp_2280_;
}
else
{
lean_object* v_reuseFailAlloc_2282_; 
v_reuseFailAlloc_2282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2282_, 0, v_a_2276_);
v___x_2281_ = v_reuseFailAlloc_2282_;
goto v_reusejp_2280_;
}
v_reusejp_2280_:
{
return v___x_2281_;
}
}
}
}
else
{
lean_object* v_a_2284_; lean_object* v___x_2286_; uint8_t v_isShared_2287_; uint8_t v_isSharedCheck_2291_; 
lean_dec(v_x_2215_);
v_a_2284_ = lean_ctor_get(v___x_2267_, 0);
v_isSharedCheck_2291_ = !lean_is_exclusive(v___x_2267_);
if (v_isSharedCheck_2291_ == 0)
{
v___x_2286_ = v___x_2267_;
v_isShared_2287_ = v_isSharedCheck_2291_;
goto v_resetjp_2285_;
}
else
{
lean_inc(v_a_2284_);
lean_dec(v___x_2267_);
v___x_2286_ = lean_box(0);
v_isShared_2287_ = v_isSharedCheck_2291_;
goto v_resetjp_2285_;
}
v_resetjp_2285_:
{
lean_object* v___x_2289_; 
if (v_isShared_2287_ == 0)
{
v___x_2289_ = v___x_2286_;
goto v_reusejp_2288_;
}
else
{
lean_object* v_reuseFailAlloc_2290_; 
v_reuseFailAlloc_2290_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2290_, 0, v_a_2284_);
v___x_2289_ = v_reuseFailAlloc_2290_;
goto v_reusejp_2288_;
}
v_reusejp_2288_:
{
return v___x_2289_;
}
}
}
}
else
{
lean_object* v_a_2292_; lean_object* v___x_2294_; uint8_t v_isShared_2295_; uint8_t v_isSharedCheck_2299_; 
lean_dec(v_a_2248_);
lean_dec(v_a_2233_);
lean_dec(v_x_2215_);
v_a_2292_ = lean_ctor_get(v___x_2257_, 0);
v_isSharedCheck_2299_ = !lean_is_exclusive(v___x_2257_);
if (v_isSharedCheck_2299_ == 0)
{
v___x_2294_ = v___x_2257_;
v_isShared_2295_ = v_isSharedCheck_2299_;
goto v_resetjp_2293_;
}
else
{
lean_inc(v_a_2292_);
lean_dec(v___x_2257_);
v___x_2294_ = lean_box(0);
v_isShared_2295_ = v_isSharedCheck_2299_;
goto v_resetjp_2293_;
}
v_resetjp_2293_:
{
lean_object* v___x_2297_; 
if (v_isShared_2295_ == 0)
{
v___x_2297_ = v___x_2294_;
goto v_reusejp_2296_;
}
else
{
lean_object* v_reuseFailAlloc_2298_; 
v_reuseFailAlloc_2298_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2298_, 0, v_a_2292_);
v___x_2297_ = v_reuseFailAlloc_2298_;
goto v_reusejp_2296_;
}
v_reusejp_2296_:
{
return v___x_2297_;
}
}
}
}
else
{
lean_object* v_a_2300_; lean_object* v___x_2302_; uint8_t v_isShared_2303_; uint8_t v_isSharedCheck_2307_; 
lean_dec(v_a_2248_);
lean_dec(v_a_2233_);
lean_dec(v_x_2215_);
v_a_2300_ = lean_ctor_get(v___x_2252_, 0);
v_isSharedCheck_2307_ = !lean_is_exclusive(v___x_2252_);
if (v_isSharedCheck_2307_ == 0)
{
v___x_2302_ = v___x_2252_;
v_isShared_2303_ = v_isSharedCheck_2307_;
goto v_resetjp_2301_;
}
else
{
lean_inc(v_a_2300_);
lean_dec(v___x_2252_);
v___x_2302_ = lean_box(0);
v_isShared_2303_ = v_isSharedCheck_2307_;
goto v_resetjp_2301_;
}
v_resetjp_2301_:
{
lean_object* v___x_2305_; 
if (v_isShared_2303_ == 0)
{
v___x_2305_ = v___x_2302_;
goto v_reusejp_2304_;
}
else
{
lean_object* v_reuseFailAlloc_2306_; 
v_reuseFailAlloc_2306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2306_, 0, v_a_2300_);
v___x_2305_ = v_reuseFailAlloc_2306_;
goto v_reusejp_2304_;
}
v_reusejp_2304_:
{
return v___x_2305_;
}
}
}
}
else
{
lean_object* v_a_2308_; lean_object* v___x_2310_; uint8_t v_isShared_2311_; uint8_t v_isSharedCheck_2315_; 
lean_dec(v_a_2248_);
lean_dec(v_a_2233_);
lean_dec(v_x_2215_);
v_a_2308_ = lean_ctor_get(v___x_2249_, 0);
v_isSharedCheck_2315_ = !lean_is_exclusive(v___x_2249_);
if (v_isSharedCheck_2315_ == 0)
{
v___x_2310_ = v___x_2249_;
v_isShared_2311_ = v_isSharedCheck_2315_;
goto v_resetjp_2309_;
}
else
{
lean_inc(v_a_2308_);
lean_dec(v___x_2249_);
v___x_2310_ = lean_box(0);
v_isShared_2311_ = v_isSharedCheck_2315_;
goto v_resetjp_2309_;
}
v_resetjp_2309_:
{
lean_object* v___x_2313_; 
if (v_isShared_2311_ == 0)
{
v___x_2313_ = v___x_2310_;
goto v_reusejp_2312_;
}
else
{
lean_object* v_reuseFailAlloc_2314_; 
v_reuseFailAlloc_2314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2314_, 0, v_a_2308_);
v___x_2313_ = v_reuseFailAlloc_2314_;
goto v_reusejp_2312_;
}
v_reusejp_2312_:
{
return v___x_2313_;
}
}
}
}
else
{
lean_object* v_a_2316_; lean_object* v___x_2318_; uint8_t v_isShared_2319_; uint8_t v_isSharedCheck_2323_; 
lean_dec(v_a_2233_);
lean_dec(v_x_2215_);
v_a_2316_ = lean_ctor_get(v___x_2247_, 0);
v_isSharedCheck_2323_ = !lean_is_exclusive(v___x_2247_);
if (v_isSharedCheck_2323_ == 0)
{
v___x_2318_ = v___x_2247_;
v_isShared_2319_ = v_isSharedCheck_2323_;
goto v_resetjp_2317_;
}
else
{
lean_inc(v_a_2316_);
lean_dec(v___x_2247_);
v___x_2318_ = lean_box(0);
v_isShared_2319_ = v_isSharedCheck_2323_;
goto v_resetjp_2317_;
}
v_resetjp_2317_:
{
lean_object* v___x_2321_; 
if (v_isShared_2319_ == 0)
{
v___x_2321_ = v___x_2318_;
goto v_reusejp_2320_;
}
else
{
lean_object* v_reuseFailAlloc_2322_; 
v_reuseFailAlloc_2322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2322_, 0, v_a_2316_);
v___x_2321_ = v_reuseFailAlloc_2322_;
goto v_reusejp_2320_;
}
v_reusejp_2320_:
{
return v___x_2321_;
}
}
}
}
else
{
lean_object* v_a_2324_; lean_object* v___x_2326_; uint8_t v_isShared_2327_; uint8_t v_isSharedCheck_2331_; 
lean_dec(v_a_2237_);
lean_dec(v_a_2233_);
lean_dec(v_x_2215_);
v_a_2324_ = lean_ctor_get(v___x_2240_, 0);
v_isSharedCheck_2331_ = !lean_is_exclusive(v___x_2240_);
if (v_isSharedCheck_2331_ == 0)
{
v___x_2326_ = v___x_2240_;
v_isShared_2327_ = v_isSharedCheck_2331_;
goto v_resetjp_2325_;
}
else
{
lean_inc(v_a_2324_);
lean_dec(v___x_2240_);
v___x_2326_ = lean_box(0);
v_isShared_2327_ = v_isSharedCheck_2331_;
goto v_resetjp_2325_;
}
v_resetjp_2325_:
{
lean_object* v___x_2329_; 
if (v_isShared_2327_ == 0)
{
v___x_2329_ = v___x_2326_;
goto v_reusejp_2328_;
}
else
{
lean_object* v_reuseFailAlloc_2330_; 
v_reuseFailAlloc_2330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2330_, 0, v_a_2324_);
v___x_2329_ = v_reuseFailAlloc_2330_;
goto v_reusejp_2328_;
}
v_reusejp_2328_:
{
return v___x_2329_;
}
}
}
}
else
{
lean_object* v_a_2332_; lean_object* v___x_2334_; uint8_t v_isShared_2335_; uint8_t v_isSharedCheck_2339_; 
lean_dec(v_a_2233_);
lean_dec(v_x_2215_);
v_a_2332_ = lean_ctor_get(v___x_2236_, 0);
v_isSharedCheck_2339_ = !lean_is_exclusive(v___x_2236_);
if (v_isSharedCheck_2339_ == 0)
{
v___x_2334_ = v___x_2236_;
v_isShared_2335_ = v_isSharedCheck_2339_;
goto v_resetjp_2333_;
}
else
{
lean_inc(v_a_2332_);
lean_dec(v___x_2236_);
v___x_2334_ = lean_box(0);
v_isShared_2335_ = v_isSharedCheck_2339_;
goto v_resetjp_2333_;
}
v_resetjp_2333_:
{
lean_object* v___x_2337_; 
if (v_isShared_2335_ == 0)
{
v___x_2337_ = v___x_2334_;
goto v_reusejp_2336_;
}
else
{
lean_object* v_reuseFailAlloc_2338_; 
v_reuseFailAlloc_2338_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2338_, 0, v_a_2332_);
v___x_2337_ = v_reuseFailAlloc_2338_;
goto v_reusejp_2336_;
}
v_reusejp_2336_:
{
return v___x_2337_;
}
}
}
}
else
{
lean_object* v_a_2340_; lean_object* v___x_2342_; uint8_t v_isShared_2343_; uint8_t v_isSharedCheck_2347_; 
lean_dec(v_x_2215_);
v_a_2340_ = lean_ctor_get(v___x_2232_, 0);
v_isSharedCheck_2347_ = !lean_is_exclusive(v___x_2232_);
if (v_isSharedCheck_2347_ == 0)
{
v___x_2342_ = v___x_2232_;
v_isShared_2343_ = v_isSharedCheck_2347_;
goto v_resetjp_2341_;
}
else
{
lean_inc(v_a_2340_);
lean_dec(v___x_2232_);
v___x_2342_ = lean_box(0);
v_isShared_2343_ = v_isSharedCheck_2347_;
goto v_resetjp_2341_;
}
v_resetjp_2341_:
{
lean_object* v___x_2345_; 
if (v_isShared_2343_ == 0)
{
v___x_2345_ = v___x_2342_;
goto v_reusejp_2344_;
}
else
{
lean_object* v_reuseFailAlloc_2346_; 
v_reuseFailAlloc_2346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2346_, 0, v_a_2340_);
v___x_2345_ = v_reuseFailAlloc_2346_;
goto v_reusejp_2344_;
}
v_reusejp_2344_:
{
return v___x_2345_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___boxed(lean_object* v_x_2348_, lean_object* v_a_2349_, lean_object* v_a_2350_, lean_object* v_a_2351_, lean_object* v_a_2352_, lean_object* v_a_2353_, lean_object* v_a_2354_, lean_object* v_a_2355_, lean_object* v_a_2356_, lean_object* v_a_2357_){
_start:
{
lean_object* v_res_2358_; 
v_res_2358_ = lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1(v_x_2348_, v_a_2349_, v_a_2350_, v_a_2351_, v_a_2352_, v_a_2353_, v_a_2354_, v_a_2355_, v_a_2356_);
lean_dec(v_a_2356_);
lean_dec_ref(v_a_2355_);
lean_dec(v_a_2354_);
lean_dec_ref(v_a_2353_);
lean_dec(v_a_2352_);
lean_dec_ref(v_a_2351_);
lean_dec(v_a_2350_);
lean_dec_ref(v_a_2349_);
return v_res_2358_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1(lean_object* v_x_2432_, lean_object* v_a_2433_, lean_object* v_a_2434_){
_start:
{
lean_object* v___x_2435_; uint8_t v___x_2436_; 
v___x_2435_ = ((lean_object*)(lp_Props2Theories_tacticElim__exists__in___x2c___x2c___x2c___00__closed__1));
lean_inc(v_x_2432_);
v___x_2436_ = l_Lean_Syntax_isOfKind(v_x_2432_, v___x_2435_);
if (v___x_2436_ == 0)
{
lean_object* v___x_2437_; lean_object* v___x_2438_; 
lean_dec(v_x_2432_);
v___x_2437_ = lean_box(1);
v___x_2438_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2438_, 0, v___x_2437_);
lean_ctor_set(v___x_2438_, 1, v_a_2434_);
return v___x_2438_;
}
else
{
lean_object* v_quotContext_2439_; lean_object* v_currMacroScope_2440_; lean_object* v_ref_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; uint8_t v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; lean_object* v___x_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; lean_object* v___x_2492_; lean_object* v___x_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; lean_object* v___x_2506_; lean_object* v___x_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; lean_object* v___x_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; lean_object* v___x_2514_; lean_object* v___x_2515_; lean_object* v___x_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; lean_object* v___x_2542_; lean_object* v___x_2543_; lean_object* v___x_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; lean_object* v___x_2547_; lean_object* v___x_2548_; lean_object* v___x_2549_; lean_object* v___x_2550_; lean_object* v___x_2551_; lean_object* v___x_2552_; lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; lean_object* v___x_2556_; lean_object* v___x_2557_; lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; lean_object* v___x_2561_; lean_object* v___x_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; 
v_quotContext_2439_ = lean_ctor_get(v_a_2433_, 1);
v_currMacroScope_2440_ = lean_ctor_get(v_a_2433_, 2);
v_ref_2441_ = lean_ctor_get(v_a_2433_, 5);
v___x_2442_ = lean_unsigned_to_nat(1u);
v___x_2443_ = l_Lean_Syntax_getArg(v_x_2432_, v___x_2442_);
v___x_2444_ = lean_unsigned_to_nat(3u);
v___x_2445_ = l_Lean_Syntax_getArg(v_x_2432_, v___x_2444_);
v___x_2446_ = lean_unsigned_to_nat(5u);
v___x_2447_ = l_Lean_Syntax_getArg(v_x_2432_, v___x_2446_);
v___x_2448_ = lean_unsigned_to_nat(7u);
v___x_2449_ = l_Lean_Syntax_getArg(v_x_2432_, v___x_2448_);
lean_dec(v_x_2432_);
v___x_2450_ = 0;
v___x_2451_ = l_Lean_SourceInfo_fromRef(v_ref_2441_, v___x_2450_);
v___x_2452_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__4));
v___x_2453_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__7));
lean_inc_n(v___x_2451_, 57);
v___x_2454_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2454_, 0, v___x_2451_);
lean_ctor_set(v___x_2454_, 1, v___x_2453_);
v___x_2455_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__9));
v___x_2456_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__11));
v___x_2457_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__11));
v___x_2458_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__1));
v___x_2459_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__2));
v___x_2460_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2460_, 0, v___x_2451_);
lean_ctor_set(v___x_2460_, 1, v___x_2459_);
v___x_2461_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__4));
v___x_2462_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19, &lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19);
v___x_2463_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2463_, 0, v___x_2451_);
lean_ctor_set(v___x_2463_, 1, v___x_2457_);
lean_ctor_set(v___x_2463_, 2, v___x_2462_);
lean_inc_ref_n(v___x_2463_, 18);
v___x_2464_ = l_Lean_Syntax_node1(v___x_2451_, v___x_2461_, v___x_2463_);
v___x_2465_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__6));
v___x_2466_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__8));
v___x_2467_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__10));
v___x_2468_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__11));
v___x_2469_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2469_, 0, v___x_2451_);
lean_ctor_set(v___x_2469_, 1, v___x_2468_);
v___x_2470_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__23));
v___x_2471_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2471_, 0, v___x_2451_);
lean_ctor_set(v___x_2471_, 1, v___x_2470_);
lean_inc(v___x_2449_);
lean_inc_ref_n(v___x_2471_, 3);
lean_inc(v___x_2447_);
v___x_2472_ = l_Lean_Syntax_node3(v___x_2451_, v___x_2457_, v___x_2447_, v___x_2471_, v___x_2449_);
v___x_2473_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__12));
v___x_2474_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2474_, 0, v___x_2451_);
lean_ctor_set(v___x_2474_, 1, v___x_2473_);
lean_inc_ref(v___x_2474_);
lean_inc_ref(v___x_2469_);
v___x_2475_ = l_Lean_Syntax_node3(v___x_2451_, v___x_2467_, v___x_2469_, v___x_2472_, v___x_2474_);
v___x_2476_ = l_Lean_Syntax_node3(v___x_2451_, v___x_2457_, v___x_2445_, v___x_2471_, v___x_2475_);
v___x_2477_ = l_Lean_Syntax_node3(v___x_2451_, v___x_2467_, v___x_2469_, v___x_2476_, v___x_2474_);
v___x_2478_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__23));
v___x_2479_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2479_, 0, v___x_2451_);
lean_ctor_set(v___x_2479_, 1, v___x_2478_);
lean_inc_ref_n(v___x_2479_, 3);
v___x_2480_ = l_Lean_Syntax_node5(v___x_2451_, v___x_2466_, v___x_2477_, v___x_2463_, v___x_2463_, v___x_2479_, v___x_2443_);
v___x_2481_ = l_Lean_Syntax_node1(v___x_2451_, v___x_2465_, v___x_2480_);
v___x_2482_ = l_Lean_Syntax_node3(v___x_2451_, v___x_2458_, v___x_2460_, v___x_2464_, v___x_2481_);
v___x_2483_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__6));
v___x_2484_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__7));
v___x_2485_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2485_, 0, v___x_2451_);
lean_ctor_set(v___x_2485_, 1, v___x_2484_);
v___x_2486_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__12));
v___x_2487_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__13));
v___x_2488_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2488_, 0, v___x_2451_);
lean_ctor_set(v___x_2488_, 1, v___x_2486_);
v___x_2489_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__15));
v___x_2490_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__17));
v___x_2491_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__19));
v___x_2492_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__21, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__21_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__21);
v___x_2493_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__22));
lean_inc_n(v_currMacroScope_2440_, 6);
lean_inc_n(v_quotContext_2439_, 6);
v___x_2494_ = l_Lean_addMacroScope(v_quotContext_2439_, v___x_2493_, v_currMacroScope_2440_);
v___x_2495_ = lean_box(0);
v___x_2496_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2496_, 0, v___x_2451_);
lean_ctor_set(v___x_2496_, 1, v___x_2492_);
lean_ctor_set(v___x_2496_, 2, v___x_2494_);
lean_ctor_set(v___x_2496_, 3, v___x_2495_);
v___x_2497_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__25));
v___x_2498_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__26));
v___x_2499_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2499_, 0, v___x_2451_);
lean_ctor_set(v___x_2499_, 1, v___x_2498_);
v___x_2500_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__28));
v___x_2501_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__30));
v___x_2502_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__32));
v___x_2503_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__34, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__34_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__34);
v___x_2504_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__35));
v___x_2505_ = l_Lean_addMacroScope(v_quotContext_2439_, v___x_2504_, v_currMacroScope_2440_);
v___x_2506_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2506_, 0, v___x_2451_);
lean_ctor_set(v___x_2506_, 1, v___x_2503_);
lean_ctor_set(v___x_2506_, 2, v___x_2505_);
lean_ctor_set(v___x_2506_, 3, v___x_2495_);
v___x_2507_ = l_Lean_Syntax_node2(v___x_2451_, v___x_2502_, v___x_2506_, v___x_2463_);
v___x_2508_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__37));
v___x_2509_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__39, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__39_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__39);
v___x_2510_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__40));
v___x_2511_ = l_Lean_addMacroScope(v_quotContext_2439_, v___x_2510_, v_currMacroScope_2440_);
v___x_2512_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__44));
v___x_2513_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2513_, 0, v___x_2451_);
lean_ctor_set(v___x_2513_, 1, v___x_2509_);
lean_ctor_set(v___x_2513_, 2, v___x_2511_);
lean_ctor_set(v___x_2513_, 3, v___x_2512_);
v___x_2514_ = l_Lean_Syntax_node3(v___x_2451_, v___x_2508_, v___x_2479_, v___x_2463_, v___x_2513_);
v___x_2515_ = l_Lean_Syntax_node3(v___x_2451_, v___x_2457_, v___x_2463_, v___x_2463_, v___x_2514_);
v___x_2516_ = l_Lean_Syntax_node2(v___x_2451_, v___x_2501_, v___x_2507_, v___x_2515_);
v___x_2517_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__46, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__46_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__46);
v___x_2518_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__47));
v___x_2519_ = l_Lean_addMacroScope(v_quotContext_2439_, v___x_2518_, v_currMacroScope_2440_);
v___x_2520_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2520_, 0, v___x_2451_);
lean_ctor_set(v___x_2520_, 1, v___x_2517_);
lean_ctor_set(v___x_2520_, 2, v___x_2519_);
lean_ctor_set(v___x_2520_, 3, v___x_2495_);
v___x_2521_ = l_Lean_Syntax_node2(v___x_2451_, v___x_2502_, v___x_2520_, v___x_2463_);
v___x_2522_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__49, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__49_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__49);
v___x_2523_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__50));
v___x_2524_ = l_Lean_addMacroScope(v_quotContext_2439_, v___x_2523_, v_currMacroScope_2440_);
v___x_2525_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__53));
v___x_2526_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2526_, 0, v___x_2451_);
lean_ctor_set(v___x_2526_, 1, v___x_2522_);
lean_ctor_set(v___x_2526_, 2, v___x_2524_);
lean_ctor_set(v___x_2526_, 3, v___x_2525_);
v___x_2527_ = l_Lean_Syntax_node3(v___x_2451_, v___x_2508_, v___x_2479_, v___x_2463_, v___x_2526_);
v___x_2528_ = l_Lean_Syntax_node3(v___x_2451_, v___x_2457_, v___x_2463_, v___x_2463_, v___x_2527_);
lean_inc(v___x_2528_);
v___x_2529_ = l_Lean_Syntax_node2(v___x_2451_, v___x_2501_, v___x_2521_, v___x_2528_);
v___x_2530_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__55, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__55_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__55);
v___x_2531_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__56));
v___x_2532_ = l_Lean_addMacroScope(v_quotContext_2439_, v___x_2531_, v_currMacroScope_2440_);
v___x_2533_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2533_, 0, v___x_2451_);
lean_ctor_set(v___x_2533_, 1, v___x_2530_);
lean_ctor_set(v___x_2533_, 2, v___x_2532_);
lean_ctor_set(v___x_2533_, 3, v___x_2495_);
v___x_2534_ = l_Lean_Syntax_node2(v___x_2451_, v___x_2502_, v___x_2533_, v___x_2463_);
v___x_2535_ = l_Lean_Syntax_node2(v___x_2451_, v___x_2501_, v___x_2534_, v___x_2528_);
v___x_2536_ = l_Lean_Syntax_node5(v___x_2451_, v___x_2457_, v___x_2516_, v___x_2471_, v___x_2529_, v___x_2471_, v___x_2535_);
v___x_2537_ = l_Lean_Syntax_node1(v___x_2451_, v___x_2500_, v___x_2536_);
v___x_2538_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__58));
v___x_2539_ = l_Lean_Syntax_node1(v___x_2451_, v___x_2538_, v___x_2463_);
v___x_2540_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__59));
v___x_2541_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2541_, 0, v___x_2451_);
lean_ctor_set(v___x_2541_, 1, v___x_2540_);
v___x_2542_ = l_Lean_Syntax_node6(v___x_2451_, v___x_2497_, v___x_2499_, v___x_2463_, v___x_2537_, v___x_2539_, v___x_2463_, v___x_2541_);
v___x_2543_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__49));
v___x_2544_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2544_, 0, v___x_2451_);
lean_ctor_set(v___x_2544_, 1, v___x_2543_);
lean_inc_ref(v___x_2544_);
lean_inc_ref(v___x_2454_);
v___x_2545_ = l_Lean_Syntax_node5(v___x_2451_, v___x_2491_, v___x_2454_, v___x_2496_, v___x_2479_, v___x_2542_, v___x_2544_);
v___x_2546_ = l_Lean_Syntax_node1(v___x_2451_, v___x_2490_, v___x_2545_);
v___x_2547_ = l_Lean_Syntax_node1(v___x_2451_, v___x_2457_, v___x_2546_);
v___x_2548_ = l_Lean_Syntax_node1(v___x_2451_, v___x_2489_, v___x_2547_);
v___x_2549_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__61));
v___x_2550_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__62));
v___x_2551_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2551_, 0, v___x_2451_);
lean_ctor_set(v___x_2551_, 1, v___x_2550_);
v___x_2552_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__64));
v___x_2553_ = l_Lean_Syntax_node2(v___x_2451_, v___x_2457_, v___x_2447_, v___x_2449_);
v___x_2554_ = l_Lean_Syntax_node1(v___x_2451_, v___x_2552_, v___x_2553_);
v___x_2555_ = l_Lean_Syntax_node2(v___x_2451_, v___x_2549_, v___x_2551_, v___x_2554_);
v___x_2556_ = l_Lean_Syntax_node1(v___x_2451_, v___x_2457_, v___x_2555_);
v___x_2557_ = l_Lean_Syntax_node6(v___x_2451_, v___x_2487_, v___x_2488_, v___x_2548_, v___x_2463_, v___x_2463_, v___x_2463_, v___x_2556_);
v___x_2558_ = l_Lean_Syntax_node1(v___x_2451_, v___x_2457_, v___x_2557_);
v___x_2559_ = l_Lean_Syntax_node1(v___x_2451_, v___x_2456_, v___x_2558_);
v___x_2560_ = l_Lean_Syntax_node1(v___x_2451_, v___x_2455_, v___x_2559_);
v___x_2561_ = l_Lean_Syntax_node2(v___x_2451_, v___x_2483_, v___x_2485_, v___x_2560_);
v___x_2562_ = l_Lean_Syntax_node3(v___x_2451_, v___x_2457_, v___x_2482_, v___x_2463_, v___x_2561_);
v___x_2563_ = l_Lean_Syntax_node1(v___x_2451_, v___x_2456_, v___x_2562_);
v___x_2564_ = l_Lean_Syntax_node1(v___x_2451_, v___x_2455_, v___x_2563_);
v___x_2565_ = l_Lean_Syntax_node3(v___x_2451_, v___x_2452_, v___x_2454_, v___x_2564_, v___x_2544_);
v___x_2566_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2566_, 0, v___x_2565_);
lean_ctor_set(v___x_2566_, 1, v_a_2434_);
return v___x_2566_;
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___boxed(lean_object* v_x_2567_, lean_object* v_a_2568_, lean_object* v_a_2569_){
_start:
{
lean_object* v_res_2570_; 
v_res_2570_ = lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1(v_x_2567_, v_a_2568_, v_a_2569_);
lean_dec_ref(v_a_2568_);
return v_res_2570_;
}
}
static lean_object* _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__1(void){
_start:
{
lean_object* v___x_2596_; lean_object* v___x_2597_; 
v___x_2596_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__0));
v___x_2597_ = l_String_toRawSubstring_x27(v___x_2596_);
return v___x_2597_;
}
}
static lean_object* _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__4(void){
_start:
{
lean_object* v___x_2601_; lean_object* v___x_2602_; 
v___x_2601_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__3));
v___x_2602_ = l_String_toRawSubstring_x27(v___x_2601_);
return v___x_2602_;
}
}
static lean_object* _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__7(void){
_start:
{
lean_object* v___x_2606_; lean_object* v___x_2607_; 
v___x_2606_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__6));
v___x_2607_ = l_String_toRawSubstring_x27(v___x_2606_);
return v___x_2607_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1(lean_object* v_x_2622_, lean_object* v_a_2623_, lean_object* v_a_2624_, lean_object* v_a_2625_, lean_object* v_a_2626_, lean_object* v_a_2627_, lean_object* v_a_2628_, lean_object* v_a_2629_, lean_object* v_a_2630_){
_start:
{
lean_object* v___x_2632_; uint8_t v___x_2633_; 
v___x_2632_ = ((lean_object*)(lp_Props2Theories_tacticElim__exists__in_____x2c___00__closed__1));
lean_inc(v_x_2622_);
v___x_2633_ = l_Lean_Syntax_isOfKind(v_x_2622_, v___x_2632_);
if (v___x_2633_ == 0)
{
lean_object* v___x_2634_; 
lean_dec(v_x_2622_);
v___x_2634_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__0___redArg();
return v___x_2634_;
}
else
{
lean_object* v_ref_2635_; lean_object* v_quotContext_2636_; lean_object* v_currMacroScope_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; uint8_t v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; lean_object* v___x_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; 
v_ref_2635_ = lean_ctor_get(v_a_2629_, 5);
v_quotContext_2636_ = lean_ctor_get(v_a_2629_, 10);
v_currMacroScope_2637_ = lean_ctor_get(v_a_2629_, 11);
v___x_2638_ = lean_unsigned_to_nat(1u);
v___x_2639_ = l_Lean_Syntax_getArg(v_x_2622_, v___x_2638_);
v___x_2640_ = lean_unsigned_to_nat(3u);
v___x_2641_ = l_Lean_Syntax_getArg(v_x_2622_, v___x_2640_);
lean_dec(v_x_2622_);
v___x_2642_ = 0;
v___x_2643_ = l_Lean_SourceInfo_fromRef(v_ref_2635_, v___x_2642_);
v___x_2644_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__1));
v___x_2645_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__11));
v___x_2646_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__1));
v___x_2647_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__2));
lean_inc_n(v___x_2643_, 33);
v___x_2648_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2648_, 0, v___x_2643_);
lean_ctor_set(v___x_2648_, 1, v___x_2647_);
v___x_2649_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__4));
v___x_2650_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19, &lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19);
v___x_2651_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2651_, 0, v___x_2643_);
lean_ctor_set(v___x_2651_, 1, v___x_2645_);
lean_ctor_set(v___x_2651_, 2, v___x_2650_);
lean_inc_ref_n(v___x_2651_, 2);
v___x_2652_ = l_Lean_Syntax_node1(v___x_2643_, v___x_2649_, v___x_2651_);
v___x_2653_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__6));
v___x_2654_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__8));
v___x_2655_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__10));
v___x_2656_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__11));
v___x_2657_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2657_, 0, v___x_2643_);
lean_ctor_set(v___x_2657_, 1, v___x_2656_);
v___x_2658_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__1, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__1_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__1);
v___x_2659_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__2));
lean_inc_n(v_currMacroScope_2637_, 4);
lean_inc_n(v_quotContext_2636_, 4);
v___x_2660_ = l_Lean_addMacroScope(v_quotContext_2636_, v___x_2659_, v_currMacroScope_2637_);
v___x_2661_ = lean_box(0);
v___x_2662_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2662_, 0, v___x_2643_);
lean_ctor_set(v___x_2662_, 1, v___x_2658_);
lean_ctor_set(v___x_2662_, 2, v___x_2660_);
lean_ctor_set(v___x_2662_, 3, v___x_2661_);
v___x_2663_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__23));
v___x_2664_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2664_, 0, v___x_2643_);
lean_ctor_set(v___x_2664_, 1, v___x_2663_);
v___x_2665_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__4, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__4_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__4);
v___x_2666_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__5));
v___x_2667_ = l_Lean_addMacroScope(v_quotContext_2636_, v___x_2666_, v_currMacroScope_2637_);
v___x_2668_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2668_, 0, v___x_2643_);
lean_ctor_set(v___x_2668_, 1, v___x_2665_);
lean_ctor_set(v___x_2668_, 2, v___x_2667_);
lean_ctor_set(v___x_2668_, 3, v___x_2661_);
v___x_2669_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__7, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__7_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__7);
v___x_2670_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__8));
v___x_2671_ = l_Lean_addMacroScope(v_quotContext_2636_, v___x_2670_, v_currMacroScope_2637_);
v___x_2672_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2672_, 0, v___x_2643_);
lean_ctor_set(v___x_2672_, 1, v___x_2669_);
lean_ctor_set(v___x_2672_, 2, v___x_2671_);
lean_ctor_set(v___x_2672_, 3, v___x_2661_);
lean_inc_ref(v___x_2664_);
lean_inc_ref(v___x_2668_);
v___x_2673_ = l_Lean_Syntax_node3(v___x_2643_, v___x_2645_, v___x_2668_, v___x_2664_, v___x_2672_);
v___x_2674_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__12));
v___x_2675_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2675_, 0, v___x_2643_);
lean_ctor_set(v___x_2675_, 1, v___x_2674_);
lean_inc_ref(v___x_2675_);
lean_inc_ref(v___x_2657_);
v___x_2676_ = l_Lean_Syntax_node3(v___x_2643_, v___x_2655_, v___x_2657_, v___x_2673_, v___x_2675_);
lean_inc_ref(v___x_2662_);
v___x_2677_ = l_Lean_Syntax_node3(v___x_2643_, v___x_2645_, v___x_2662_, v___x_2664_, v___x_2676_);
v___x_2678_ = l_Lean_Syntax_node3(v___x_2643_, v___x_2655_, v___x_2657_, v___x_2677_, v___x_2675_);
v___x_2679_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__23));
v___x_2680_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2680_, 0, v___x_2643_);
lean_ctor_set(v___x_2680_, 1, v___x_2679_);
v___x_2681_ = l_Lean_Syntax_node5(v___x_2643_, v___x_2654_, v___x_2678_, v___x_2651_, v___x_2651_, v___x_2680_, v___x_2639_);
v___x_2682_ = l_Lean_Syntax_node1(v___x_2643_, v___x_2653_, v___x_2681_);
v___x_2683_ = l_Lean_Syntax_node3(v___x_2643_, v___x_2646_, v___x_2648_, v___x_2652_, v___x_2682_);
v___x_2684_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__4));
v___x_2685_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2685_, 0, v___x_2643_);
lean_ctor_set(v___x_2685_, 1, v___x_2684_);
v___x_2686_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__2));
v___x_2687_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__3));
v___x_2688_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2688_, 0, v___x_2643_);
lean_ctor_set(v___x_2688_, 1, v___x_2686_);
v___x_2689_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__4));
v___x_2690_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__6));
v___x_2691_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__7));
v___x_2692_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2692_, 0, v___x_2643_);
lean_ctor_set(v___x_2692_, 1, v___x_2691_);
v___x_2693_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__9));
v___x_2694_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__11, &lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__11_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__11);
v___x_2695_ = lean_box(0);
v___x_2696_ = l_Lean_addMacroScope(v_quotContext_2636_, v___x_2695_, v_currMacroScope_2637_);
v___x_2697_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__46));
v___x_2698_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2698_, 0, v___x_2643_);
lean_ctor_set(v___x_2698_, 1, v___x_2694_);
lean_ctor_set(v___x_2698_, 2, v___x_2696_);
lean_ctor_set(v___x_2698_, 3, v___x_2697_);
v___x_2699_ = l_Lean_Syntax_node1(v___x_2643_, v___x_2693_, v___x_2698_);
v___x_2700_ = l_Lean_Syntax_node2(v___x_2643_, v___x_2690_, v___x_2692_, v___x_2699_);
v___x_2701_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__4));
v___x_2702_ = l_Lean_Syntax_node2(v___x_2643_, v___x_2645_, v___x_2662_, v___x_2668_);
lean_inc(v___x_2641_);
v___x_2703_ = l_Lean_Syntax_node2(v___x_2643_, v___x_2701_, v___x_2641_, v___x_2702_);
v___x_2704_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__49));
v___x_2705_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2705_, 0, v___x_2643_);
lean_ctor_set(v___x_2705_, 1, v___x_2704_);
v___x_2706_ = l_Lean_Syntax_node3(v___x_2643_, v___x_2689_, v___x_2700_, v___x_2703_, v___x_2705_);
v___x_2707_ = l_Lean_Syntax_node2(v___x_2643_, v___x_2687_, v___x_2688_, v___x_2706_);
v___x_2708_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__9));
v___x_2709_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__10));
v___x_2710_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2710_, 0, v___x_2643_);
lean_ctor_set(v___x_2710_, 1, v___x_2708_);
v___x_2711_ = l_Lean_Syntax_node2(v___x_2643_, v___x_2709_, v___x_2710_, v___x_2641_);
v___x_2712_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__11));
v___x_2713_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__12));
v___x_2714_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2714_, 0, v___x_2643_);
lean_ctor_set(v___x_2714_, 1, v___x_2712_);
v___x_2715_ = l_Lean_Syntax_node1(v___x_2643_, v___x_2713_, v___x_2714_);
lean_inc_ref_n(v___x_2685_, 2);
v___x_2716_ = l_Lean_Syntax_node7(v___x_2643_, v___x_2645_, v___x_2683_, v___x_2685_, v___x_2707_, v___x_2685_, v___x_2711_, v___x_2685_, v___x_2715_);
v___x_2717_ = l_Lean_Syntax_node1(v___x_2643_, v___x_2644_, v___x_2716_);
v___x_2718_ = l_Lean_Elab_Tactic_evalTactic(v___x_2717_, v_a_2623_, v_a_2624_, v_a_2625_, v_a_2626_, v_a_2627_, v_a_2628_, v_a_2629_, v_a_2630_);
return v___x_2718_;
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___boxed(lean_object* v_x_2719_, lean_object* v_a_2720_, lean_object* v_a_2721_, lean_object* v_a_2722_, lean_object* v_a_2723_, lean_object* v_a_2724_, lean_object* v_a_2725_, lean_object* v_a_2726_, lean_object* v_a_2727_, lean_object* v_a_2728_){
_start:
{
lean_object* v_res_2729_; 
v_res_2729_ = lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1(v_x_2719_, v_a_2720_, v_a_2721_, v_a_2722_, v_a_2723_, v_a_2724_, v_a_2725_, v_a_2726_, v_a_2727_);
lean_dec(v_a_2727_);
lean_dec_ref(v_a_2726_);
lean_dec(v_a_2725_);
lean_dec_ref(v_a_2724_);
lean_dec(v_a_2723_);
lean_dec_ref(v_a_2722_);
lean_dec(v_a_2721_);
lean_dec_ref(v_a_2720_);
return v_res_2729_;
}
}
static lean_object* _init_lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1_spec__0___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2763_; lean_object* v___x_2764_; 
v___x_2763_ = ((lean_object*)(lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1_spec__0___redArg___lam__0___closed__0));
v___x_2764_ = l_Lean_stringToMessageData(v___x_2763_);
return v___x_2764_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1_spec__0___redArg___lam__0(lean_object* v___x_2767_, lean_object* v___x_2768_, lean_object* v___x_2769_, lean_object* v___x_2770_, lean_object* v_a_2771_, lean_object* v___x_2772_, uint8_t v___x_2773_, uint8_t v___x_2774_, lean_object* v_b_2775_, lean_object* v___y_2776_, lean_object* v___y_2777_, lean_object* v___y_2778_, lean_object* v___y_2779_){
_start:
{
lean_object* v___x_2781_; lean_object* v___x_2782_; 
lean_inc_ref(v_b_2775_);
v___x_2781_ = l_Lean_Expr_app___override(v___x_2767_, v_b_2775_);
lean_inc(v___y_2779_);
lean_inc_ref(v___y_2778_);
lean_inc(v___y_2777_);
lean_inc_ref(v___y_2776_);
v___x_2782_ = lean_whnf(v___x_2781_, v___y_2776_, v___y_2777_, v___y_2778_, v___y_2779_);
if (lean_obj_tag(v___x_2782_) == 0)
{
lean_object* v_a_2783_; lean_object* v___x_2784_; lean_object* v_fst_2785_; lean_object* v_snd_2786_; lean_object* v___x_2788_; uint8_t v_isShared_2789_; uint8_t v_isSharedCheck_2811_; 
v_a_2783_ = lean_ctor_get(v___x_2782_, 0);
lean_inc(v_a_2783_);
lean_dec_ref(v___x_2782_);
v___x_2784_ = l_Lean_Expr_getAppFnArgs(v_a_2783_);
v_fst_2785_ = lean_ctor_get(v___x_2784_, 0);
v_snd_2786_ = lean_ctor_get(v___x_2784_, 1);
v_isSharedCheck_2811_ = !lean_is_exclusive(v___x_2784_);
if (v_isSharedCheck_2811_ == 0)
{
v___x_2788_ = v___x_2784_;
v_isShared_2789_ = v_isSharedCheck_2811_;
goto v_resetjp_2787_;
}
else
{
lean_inc(v_snd_2786_);
lean_inc(v_fst_2785_);
lean_dec(v___x_2784_);
v___x_2788_ = lean_box(0);
v_isShared_2789_ = v_isSharedCheck_2811_;
goto v_resetjp_2787_;
}
v_resetjp_2787_:
{
lean_object* v___x_2797_; uint8_t v___x_2798_; 
v___x_2797_ = ((lean_object*)(lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1_spec__0___redArg___lam__0___closed__2));
v___x_2798_ = lean_name_eq(v_fst_2785_, v___x_2797_);
if (v___x_2798_ == 0)
{
lean_dec(v_snd_2786_);
lean_dec_ref(v_b_2775_);
lean_dec_ref(v_a_2771_);
goto v___jp_2790_;
}
else
{
lean_object* v___x_2799_; uint8_t v___x_2800_; 
v___x_2799_ = lean_array_get_size(v_snd_2786_);
v___x_2800_ = lean_nat_dec_eq(v___x_2799_, v___x_2768_);
if (v___x_2800_ == 0)
{
lean_dec(v_snd_2786_);
lean_dec_ref(v_b_2775_);
lean_dec_ref(v_a_2771_);
goto v___jp_2790_;
}
else
{
lean_object* v___x_2801_; lean_object* v___x_2802_; 
lean_del_object(v___x_2788_);
lean_dec(v_fst_2785_);
v___x_2801_ = lean_array_get_borrowed(v___x_2769_, v_snd_2786_, v___x_2770_);
lean_inc(v___x_2801_);
v___x_2802_ = l_Lean_mkArrow(v___x_2801_, v_a_2771_, v___y_2778_, v___y_2779_);
if (lean_obj_tag(v___x_2802_) == 0)
{
lean_object* v_a_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; 
v_a_2803_ = lean_ctor_get(v___x_2802_, 0);
lean_inc(v_a_2803_);
lean_dec_ref(v___x_2802_);
v___x_2804_ = lean_array_get(v___x_2769_, v_snd_2786_, v___x_2772_);
lean_dec(v_snd_2786_);
v___x_2805_ = l_Lean_mkArrow(v___x_2804_, v_a_2803_, v___y_2778_, v___y_2779_);
if (lean_obj_tag(v___x_2805_) == 0)
{
lean_object* v_a_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; uint8_t v___x_2809_; lean_object* v___x_2810_; 
v_a_2806_ = lean_ctor_get(v___x_2805_, 0);
lean_inc(v_a_2806_);
lean_dec_ref(v___x_2805_);
v___x_2807_ = lean_mk_empty_array_with_capacity(v___x_2770_);
v___x_2808_ = lean_array_push(v___x_2807_, v_b_2775_);
v___x_2809_ = 1;
v___x_2810_ = l_Lean_Meta_mkForallFVars(v___x_2808_, v_a_2806_, v___x_2773_, v___x_2774_, v___x_2774_, v___x_2809_, v___y_2776_, v___y_2777_, v___y_2778_, v___y_2779_);
lean_dec_ref(v___x_2808_);
return v___x_2810_;
}
else
{
lean_dec_ref(v_b_2775_);
return v___x_2805_;
}
}
else
{
lean_dec(v_snd_2786_);
lean_dec_ref(v_b_2775_);
return v___x_2802_;
}
}
}
v___jp_2790_:
{
lean_object* v___x_2791_; lean_object* v___x_2792_; lean_object* v___x_2794_; 
v___x_2791_ = lean_obj_once(&lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1_spec__0___redArg___lam__0___closed__1, &lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1_spec__0___redArg___lam__0___closed__1_once, _init_lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1_spec__0___redArg___lam__0___closed__1);
v___x_2792_ = l_Lean_MessageData_ofName(v_fst_2785_);
if (v_isShared_2789_ == 0)
{
lean_ctor_set_tag(v___x_2788_, 7);
lean_ctor_set(v___x_2788_, 1, v___x_2792_);
lean_ctor_set(v___x_2788_, 0, v___x_2791_);
v___x_2794_ = v___x_2788_;
goto v_reusejp_2793_;
}
else
{
lean_object* v_reuseFailAlloc_2796_; 
v_reuseFailAlloc_2796_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2796_, 0, v___x_2791_);
lean_ctor_set(v_reuseFailAlloc_2796_, 1, v___x_2792_);
v___x_2794_ = v_reuseFailAlloc_2796_;
goto v_reusejp_2793_;
}
v_reusejp_2793_:
{
lean_object* v___x_2795_; 
v___x_2795_ = l_Lean_throwError___at___00Lean_Elab_Tactic_elabNativeDecideCore_spec__0___redArg(v___x_2794_, v___y_2776_, v___y_2777_, v___y_2778_, v___y_2779_);
return v___x_2795_;
}
}
}
}
else
{
lean_dec_ref(v_b_2775_);
lean_dec_ref(v_a_2771_);
return v___x_2782_;
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1_spec__0___redArg___lam__0___boxed(lean_object* v___x_2812_, lean_object* v___x_2813_, lean_object* v___x_2814_, lean_object* v___x_2815_, lean_object* v_a_2816_, lean_object* v___x_2817_, lean_object* v___x_2818_, lean_object* v___x_2819_, lean_object* v_b_2820_, lean_object* v___y_2821_, lean_object* v___y_2822_, lean_object* v___y_2823_, lean_object* v___y_2824_, lean_object* v___y_2825_){
_start:
{
uint8_t v___x_20317__boxed_2826_; uint8_t v___x_20318__boxed_2827_; lean_object* v_res_2828_; 
v___x_20317__boxed_2826_ = lean_unbox(v___x_2818_);
v___x_20318__boxed_2827_ = lean_unbox(v___x_2819_);
v_res_2828_ = lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1_spec__0___redArg___lam__0(v___x_2812_, v___x_2813_, v___x_2814_, v___x_2815_, v_a_2816_, v___x_2817_, v___x_20317__boxed_2826_, v___x_20318__boxed_2827_, v_b_2820_, v___y_2821_, v___y_2822_, v___y_2823_, v___y_2824_);
lean_dec(v___y_2824_);
lean_dec_ref(v___y_2823_);
lean_dec(v___y_2822_);
lean_dec_ref(v___y_2821_);
lean_dec(v___x_2817_);
lean_dec(v___x_2815_);
lean_dec_ref(v___x_2814_);
lean_dec(v___x_2813_);
return v_res_2828_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1_spec__0___redArg(lean_object* v___x_2829_, lean_object* v_a_2830_, lean_object* v___x_2831_, lean_object* v_name_2832_, uint8_t v_bi_2833_, lean_object* v_type_2834_, uint8_t v_kind_2835_, lean_object* v___y_2836_, lean_object* v___y_2837_, lean_object* v___y_2838_, lean_object* v___y_2839_){
_start:
{
lean_object* v___x_2841_; lean_object* v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; uint8_t v___x_2845_; uint8_t v___x_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v___f_2849_; lean_object* v___x_2850_; 
v___x_2841_ = lean_unsigned_to_nat(2u);
v___x_2842_ = l_Lean_instInhabitedExpr;
v___x_2843_ = lean_unsigned_to_nat(1u);
v___x_2844_ = lean_unsigned_to_nat(0u);
v___x_2845_ = 0;
v___x_2846_ = lean_nat_dec_eq(v___x_2831_, v___x_2841_);
v___x_2847_ = lean_box(v___x_2845_);
v___x_2848_ = lean_box(v___x_2846_);
v___f_2849_ = lean_alloc_closure((void*)(lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1_spec__0___redArg___lam__0___boxed), 14, 8);
lean_closure_set(v___f_2849_, 0, v___x_2829_);
lean_closure_set(v___f_2849_, 1, v___x_2841_);
lean_closure_set(v___f_2849_, 2, v___x_2842_);
lean_closure_set(v___f_2849_, 3, v___x_2843_);
lean_closure_set(v___f_2849_, 4, v_a_2830_);
lean_closure_set(v___f_2849_, 5, v___x_2844_);
lean_closure_set(v___f_2849_, 6, v___x_2847_);
lean_closure_set(v___f_2849_, 7, v___x_2848_);
v___x_2850_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp___redArg(v_name_2832_, v_bi_2833_, v_type_2834_, v___f_2849_, v_kind_2835_, v___y_2836_, v___y_2837_, v___y_2838_, v___y_2839_);
if (lean_obj_tag(v___x_2850_) == 0)
{
return v___x_2850_;
}
else
{
lean_object* v_a_2851_; lean_object* v___x_2853_; uint8_t v_isShared_2854_; uint8_t v_isSharedCheck_2858_; 
v_a_2851_ = lean_ctor_get(v___x_2850_, 0);
v_isSharedCheck_2858_ = !lean_is_exclusive(v___x_2850_);
if (v_isSharedCheck_2858_ == 0)
{
v___x_2853_ = v___x_2850_;
v_isShared_2854_ = v_isSharedCheck_2858_;
goto v_resetjp_2852_;
}
else
{
lean_inc(v_a_2851_);
lean_dec(v___x_2850_);
v___x_2853_ = lean_box(0);
v_isShared_2854_ = v_isSharedCheck_2858_;
goto v_resetjp_2852_;
}
v_resetjp_2852_:
{
lean_object* v___x_2856_; 
if (v_isShared_2854_ == 0)
{
v___x_2856_ = v___x_2853_;
goto v_reusejp_2855_;
}
else
{
lean_object* v_reuseFailAlloc_2857_; 
v_reuseFailAlloc_2857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2857_, 0, v_a_2851_);
v___x_2856_ = v_reuseFailAlloc_2857_;
goto v_reusejp_2855_;
}
v_reusejp_2855_:
{
return v___x_2856_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1_spec__0___redArg___boxed(lean_object* v___x_2859_, lean_object* v_a_2860_, lean_object* v___x_2861_, lean_object* v_name_2862_, lean_object* v_bi_2863_, lean_object* v_type_2864_, lean_object* v_kind_2865_, lean_object* v___y_2866_, lean_object* v___y_2867_, lean_object* v___y_2868_, lean_object* v___y_2869_, lean_object* v___y_2870_){
_start:
{
uint8_t v_bi_boxed_2871_; uint8_t v_kind_boxed_2872_; lean_object* v_res_2873_; 
v_bi_boxed_2871_ = lean_unbox(v_bi_2863_);
v_kind_boxed_2872_ = lean_unbox(v_kind_2865_);
v_res_2873_ = lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1_spec__0___redArg(v___x_2859_, v_a_2860_, v___x_2861_, v_name_2862_, v_bi_boxed_2871_, v_type_2864_, v_kind_boxed_2872_, v___y_2866_, v___y_2867_, v___y_2868_, v___y_2869_);
lean_dec(v___y_2869_);
lean_dec_ref(v___y_2868_);
lean_dec(v___y_2867_);
lean_dec_ref(v___y_2866_);
lean_dec(v___x_2861_);
return v_res_2873_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1_spec__0(lean_object* v___x_2874_, lean_object* v_a_2875_, lean_object* v___x_2876_, lean_object* v_name_2877_, uint8_t v_bi_2878_, lean_object* v_type_2879_, uint8_t v_kind_2880_, lean_object* v___y_2881_, lean_object* v___y_2882_, lean_object* v___y_2883_, lean_object* v___y_2884_, lean_object* v___y_2885_, lean_object* v___y_2886_, lean_object* v___y_2887_, lean_object* v___y_2888_){
_start:
{
lean_object* v___x_2890_; 
v___x_2890_ = lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1_spec__0___redArg(v___x_2874_, v_a_2875_, v___x_2876_, v_name_2877_, v_bi_2878_, v_type_2879_, v_kind_2880_, v___y_2885_, v___y_2886_, v___y_2887_, v___y_2888_);
return v___x_2890_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1_spec__0___boxed(lean_object* v___x_2891_, lean_object* v_a_2892_, lean_object* v___x_2893_, lean_object* v_name_2894_, lean_object* v_bi_2895_, lean_object* v_type_2896_, lean_object* v_kind_2897_, lean_object* v___y_2898_, lean_object* v___y_2899_, lean_object* v___y_2900_, lean_object* v___y_2901_, lean_object* v___y_2902_, lean_object* v___y_2903_, lean_object* v___y_2904_, lean_object* v___y_2905_, lean_object* v___y_2906_){
_start:
{
uint8_t v_bi_boxed_2907_; uint8_t v_kind_boxed_2908_; lean_object* v_res_2909_; 
v_bi_boxed_2907_ = lean_unbox(v_bi_2895_);
v_kind_boxed_2908_ = lean_unbox(v_kind_2897_);
v_res_2909_ = lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1_spec__0(v___x_2891_, v_a_2892_, v___x_2893_, v_name_2894_, v_bi_boxed_2907_, v_type_2896_, v_kind_boxed_2908_, v___y_2898_, v___y_2899_, v___y_2900_, v___y_2901_, v___y_2902_, v___y_2903_, v___y_2904_, v___y_2905_);
lean_dec(v___y_2905_);
lean_dec_ref(v___y_2904_);
lean_dec(v___y_2903_);
lean_dec_ref(v___y_2902_);
lean_dec(v___y_2901_);
lean_dec_ref(v___y_2900_);
lean_dec(v___y_2899_);
lean_dec_ref(v___y_2898_);
lean_dec(v___x_2893_);
return v_res_2909_;
}
}
static lean_object* _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__1(void){
_start:
{
lean_object* v___x_2911_; lean_object* v___x_2912_; 
v___x_2911_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__0));
v___x_2912_ = l_Lean_stringToMessageData(v___x_2911_);
return v___x_2912_;
}
}
static lean_object* _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__3(void){
_start:
{
lean_object* v___x_2914_; lean_object* v___x_2915_; 
v___x_2914_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__2));
v___x_2915_ = l_Lean_stringToMessageData(v___x_2914_);
return v___x_2915_;
}
}
static lean_object* _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__21(void){
_start:
{
lean_object* v___x_2955_; lean_object* v___x_2956_; 
v___x_2955_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__20));
v___x_2956_ = l_String_toRawSubstring_x27(v___x_2955_);
return v___x_2956_;
}
}
static lean_object* _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__24(void){
_start:
{
lean_object* v___x_2960_; lean_object* v___x_2961_; 
v___x_2960_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__23));
v___x_2961_ = l_String_toRawSubstring_x27(v___x_2960_);
return v___x_2961_;
}
}
static lean_object* _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__27(void){
_start:
{
lean_object* v___x_2965_; lean_object* v___x_2966_; 
v___x_2965_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__26));
v___x_2966_ = l_String_toRawSubstring_x27(v___x_2965_);
return v___x_2966_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1(lean_object* v_x_2969_, lean_object* v_a_2970_, lean_object* v_a_2971_, lean_object* v_a_2972_, lean_object* v_a_2973_, lean_object* v_a_2974_, lean_object* v_a_2975_, lean_object* v_a_2976_, lean_object* v_a_2977_){
_start:
{
lean_object* v___x_2979_; uint8_t v___x_2980_; 
v___x_2979_ = ((lean_object*)(lp_Props2Theories_tactic__elim__exists__in___x2c___x2c___00__closed__1));
lean_inc(v_x_2969_);
v___x_2980_ = l_Lean_Syntax_isOfKind(v_x_2969_, v___x_2979_);
if (v___x_2980_ == 0)
{
lean_object* v___x_2981_; 
lean_dec(v_x_2969_);
v___x_2981_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__0___redArg();
return v___x_2981_;
}
else
{
lean_object* v___x_2982_; lean_object* v___x_2983_; lean_object* v___x_2984_; uint8_t v___x_2985_; lean_object* v___x_2986_; 
v___x_2982_ = lean_unsigned_to_nat(1u);
v___x_2983_ = l_Lean_Syntax_getArg(v_x_2969_, v___x_2982_);
v___x_2984_ = lean_box(0);
v___x_2985_ = 0;
lean_inc(v___x_2983_);
v___x_2986_ = l_Lean_Elab_Tactic_elabTerm(v___x_2983_, v___x_2984_, v___x_2985_, v_a_2970_, v_a_2971_, v_a_2972_, v_a_2973_, v_a_2974_, v_a_2975_, v_a_2976_, v_a_2977_);
if (lean_obj_tag(v___x_2986_) == 0)
{
lean_object* v_a_2987_; lean_object* v___x_2988_; 
v_a_2987_ = lean_ctor_get(v___x_2986_, 0);
lean_inc(v_a_2987_);
lean_dec_ref(v___x_2986_);
lean_inc(v_a_2977_);
lean_inc_ref(v_a_2976_);
lean_inc(v_a_2975_);
lean_inc_ref(v_a_2974_);
v___x_2988_ = lean_infer_type(v_a_2987_, v_a_2974_, v_a_2975_, v_a_2976_, v_a_2977_);
if (lean_obj_tag(v___x_2988_) == 0)
{
lean_object* v_a_2989_; lean_object* v___x_2990_; 
v_a_2989_ = lean_ctor_get(v___x_2988_, 0);
lean_inc(v_a_2989_);
lean_dec_ref(v___x_2988_);
lean_inc(v_a_2977_);
lean_inc_ref(v_a_2976_);
lean_inc(v_a_2975_);
lean_inc_ref(v_a_2974_);
v___x_2990_ = lean_whnf(v_a_2989_, v_a_2974_, v_a_2975_, v_a_2976_, v_a_2977_);
if (lean_obj_tag(v___x_2990_) == 0)
{
lean_object* v_a_2991_; lean_object* v___x_2999_; lean_object* v_fst_3000_; lean_object* v_snd_3001_; lean_object* v___x_3003_; uint8_t v_isShared_3004_; uint8_t v_isSharedCheck_3269_; 
v_a_2991_ = lean_ctor_get(v___x_2990_, 0);
lean_inc(v_a_2991_);
lean_dec_ref(v___x_2990_);
v___x_2999_ = l_Lean_Expr_getAppFnArgs(v_a_2991_);
v_fst_3000_ = lean_ctor_get(v___x_2999_, 0);
v_snd_3001_ = lean_ctor_get(v___x_2999_, 1);
v_isSharedCheck_3269_ = !lean_is_exclusive(v___x_2999_);
if (v_isSharedCheck_3269_ == 0)
{
v___x_3003_ = v___x_2999_;
v_isShared_3004_ = v_isSharedCheck_3269_;
goto v_resetjp_3002_;
}
else
{
lean_inc(v_snd_3001_);
lean_inc(v_fst_3000_);
lean_dec(v___x_2999_);
v___x_3003_ = lean_box(0);
v_isShared_3004_ = v_isSharedCheck_3269_;
goto v_resetjp_3002_;
}
v___jp_2992_:
{
lean_object* v___x_2993_; lean_object* v___x_2994_; lean_object* v___x_2995_; lean_object* v___x_2996_; lean_object* v___x_2997_; lean_object* v___x_2998_; 
v___x_2993_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__1, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__1_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__1);
v___x_2994_ = l_Lean_MessageData_ofSyntax(v___x_2983_);
v___x_2995_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2995_, 0, v___x_2993_);
lean_ctor_set(v___x_2995_, 1, v___x_2994_);
v___x_2996_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__3, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__3_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__3);
v___x_2997_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2997_, 0, v___x_2995_);
lean_ctor_set(v___x_2997_, 1, v___x_2996_);
v___x_2998_ = l_Lean_throwError___at___00Lean_Elab_Tactic_elabNativeDecideCore_spec__0___redArg(v___x_2997_, v_a_2974_, v_a_2975_, v_a_2976_, v_a_2977_);
return v___x_2998_;
}
v_resetjp_3002_:
{
lean_object* v___x_3005_; uint8_t v___x_3006_; 
v___x_3005_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__4));
v___x_3006_ = lean_name_eq(v_fst_3000_, v___x_3005_);
lean_dec(v_fst_3000_);
if (v___x_3006_ == 0)
{
lean_del_object(v___x_3003_);
lean_dec(v_snd_3001_);
lean_dec(v_x_2969_);
goto v___jp_2992_;
}
else
{
lean_object* v___x_3007_; lean_object* v___x_3008_; uint8_t v___x_3009_; 
v___x_3007_ = lean_unsigned_to_nat(2u);
v___x_3008_ = lean_array_get_size(v_snd_3001_);
v___x_3009_ = lean_nat_dec_eq(v___x_3008_, v___x_3007_);
if (v___x_3009_ == 0)
{
lean_del_object(v___x_3003_);
lean_dec(v_snd_3001_);
lean_dec(v_x_2969_);
goto v___jp_2992_;
}
else
{
lean_object* v___x_3010_; lean_object* v___x_3011_; lean_object* v___x_3012_; 
v___x_3010_ = lean_unsigned_to_nat(3u);
v___x_3011_ = l_Lean_Syntax_getArg(v_x_2969_, v___x_3010_);
v___x_3012_ = l_Lean_Elab_Tactic_elabTerm(v___x_3011_, v___x_2984_, v___x_2985_, v_a_2970_, v_a_2971_, v_a_2972_, v_a_2973_, v_a_2974_, v_a_2975_, v_a_2976_, v_a_2977_);
if (lean_obj_tag(v___x_3012_) == 0)
{
lean_object* v_a_3013_; lean_object* v___x_3014_; lean_object* v___x_3015_; lean_object* v___x_3016_; 
v_a_3013_ = lean_ctor_get(v___x_3012_, 0);
lean_inc(v_a_3013_);
lean_dec_ref(v___x_3012_);
v___x_3014_ = l_Lean_instInhabitedExpr;
v___x_3015_ = lean_array_get(v___x_3014_, v_snd_3001_, v___x_2982_);
lean_dec(v_snd_3001_);
lean_inc(v_a_2977_);
lean_inc_ref(v_a_2976_);
lean_inc(v_a_2975_);
lean_inc_ref(v_a_2974_);
lean_inc(v___x_3015_);
v___x_3016_ = lean_infer_type(v___x_3015_, v_a_2974_, v_a_2975_, v_a_2976_, v_a_2977_);
if (lean_obj_tag(v___x_3016_) == 0)
{
lean_object* v_a_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; uint8_t v___x_3020_; uint8_t v___x_3021_; lean_object* v___x_3022_; 
v_a_3017_ = lean_ctor_get(v___x_3016_, 0);
lean_inc(v_a_3017_);
lean_dec_ref(v___x_3016_);
v___x_3018_ = l_Lean_Expr_bindingDomain_x21(v_a_3017_);
lean_dec(v_a_3017_);
v___x_3019_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__6));
v___x_3020_ = 0;
v___x_3021_ = 0;
lean_inc(v_a_3013_);
v___x_3022_ = lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1_spec__0___redArg(v___x_3015_, v_a_3013_, v___x_3008_, v___x_3019_, v___x_3020_, v___x_3018_, v___x_3021_, v_a_2974_, v_a_2975_, v_a_2976_, v_a_2977_);
if (lean_obj_tag(v___x_3022_) == 0)
{
lean_object* v_a_3023_; lean_object* v___x_3024_; 
v_a_3023_ = lean_ctor_get(v___x_3022_, 0);
lean_inc(v_a_3023_);
lean_dec_ref(v___x_3022_);
v___x_3024_ = l_Lean_mkArrow(v_a_3023_, v_a_3013_, v_a_2976_, v_a_2977_);
if (lean_obj_tag(v___x_3024_) == 0)
{
lean_object* v_a_3025_; lean_object* v___x_3026_; 
v_a_3025_ = lean_ctor_get(v___x_3024_, 0);
lean_inc(v_a_3025_);
lean_dec_ref(v___x_3024_);
v___x_3026_ = l_Lean_Meta_reduce(v_a_3025_, v___x_3009_, v___x_3009_, v___x_3009_, v_a_2974_, v_a_2975_, v_a_2976_, v_a_2977_);
if (lean_obj_tag(v___x_3026_) == 0)
{
lean_object* v_a_3027_; lean_object* v___x_3028_; lean_object* v___x_3029_; 
v_a_3027_ = lean_ctor_get(v___x_3026_, 0);
lean_inc(v_a_3027_);
lean_dec_ref(v___x_3026_);
v___x_3028_ = lean_box(1);
v___x_3029_ = l_Lean_PrettyPrinter_delab(v_a_3027_, v___x_3028_, v_a_2974_, v_a_2975_, v_a_2976_, v_a_2977_);
if (lean_obj_tag(v___x_3029_) == 0)
{
lean_object* v_a_3030_; lean_object* v_ref_3031_; lean_object* v_quotContext_3032_; lean_object* v_currMacroScope_3033_; lean_object* v___x_3034_; lean_object* v___x_3035_; lean_object* v___x_3036_; lean_object* v___x_3037_; lean_object* v___x_3038_; lean_object* v___x_3039_; lean_object* v___x_3040_; lean_object* v___x_3041_; lean_object* v___x_3042_; lean_object* v___x_3043_; lean_object* v___x_3045_; 
v_a_3030_ = lean_ctor_get(v___x_3029_, 0);
lean_inc(v_a_3030_);
lean_dec_ref(v___x_3029_);
v_ref_3031_ = lean_ctor_get(v_a_2976_, 5);
v_quotContext_3032_ = lean_ctor_get(v_a_2976_, 10);
v_currMacroScope_3033_ = lean_ctor_get(v_a_2976_, 11);
v___x_3034_ = lean_unsigned_to_nat(5u);
v___x_3035_ = l_Lean_Syntax_getArg(v_x_2969_, v___x_3034_);
lean_dec(v_x_2969_);
v___x_3036_ = l_Lean_SourceInfo_fromRef(v_ref_3031_, v___x_2985_);
v___x_3037_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__64));
v___x_3038_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__11));
lean_inc(v___x_3035_);
lean_inc_n(v___x_3036_, 3);
v___x_3039_ = l_Lean_Syntax_node1(v___x_3036_, v___x_3038_, v___x_3035_);
v___x_3040_ = l_Lean_Syntax_node1(v___x_3036_, v___x_3037_, v___x_3039_);
v___x_3041_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__1));
v___x_3042_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__4));
v___x_3043_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__7));
if (v_isShared_3004_ == 0)
{
lean_ctor_set_tag(v___x_3003_, 2);
lean_ctor_set(v___x_3003_, 1, v___x_3043_);
lean_ctor_set(v___x_3003_, 0, v___x_3036_);
v___x_3045_ = v___x_3003_;
goto v_reusejp_3044_;
}
else
{
lean_object* v_reuseFailAlloc_3220_; 
v_reuseFailAlloc_3220_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3220_, 0, v___x_3036_);
lean_ctor_set(v_reuseFailAlloc_3220_, 1, v___x_3043_);
v___x_3045_ = v_reuseFailAlloc_3220_;
goto v_reusejp_3044_;
}
v_reusejp_3044_:
{
lean_object* v___x_3046_; lean_object* v___x_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; lean_object* v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; lean_object* v___x_3053_; lean_object* v___x_3054_; lean_object* v___x_3055_; lean_object* v___x_3056_; lean_object* v___x_3057_; lean_object* v___x_3058_; lean_object* v___x_3059_; lean_object* v___x_3060_; lean_object* v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; lean_object* v___x_3064_; lean_object* v___x_3065_; lean_object* v___x_3066_; lean_object* v___x_3067_; lean_object* v___x_3068_; lean_object* v___x_3069_; lean_object* v___x_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; lean_object* v___x_3073_; lean_object* v___x_3074_; lean_object* v___x_3075_; lean_object* v___x_3076_; lean_object* v___x_3077_; lean_object* v___x_3078_; lean_object* v___x_3079_; lean_object* v___x_3080_; lean_object* v___x_3081_; lean_object* v___x_3082_; lean_object* v___x_3083_; lean_object* v___x_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; lean_object* v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; lean_object* v___x_3094_; lean_object* v___x_3095_; lean_object* v___x_3096_; lean_object* v___x_3097_; lean_object* v___x_3098_; lean_object* v___x_3099_; lean_object* v___x_3100_; lean_object* v___x_3101_; lean_object* v___x_3102_; lean_object* v___x_3103_; lean_object* v___x_3104_; lean_object* v___x_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; lean_object* v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v___x_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; lean_object* v___x_3123_; lean_object* v___x_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; lean_object* v___x_3128_; lean_object* v___x_3129_; lean_object* v___x_3130_; lean_object* v___x_3131_; lean_object* v___x_3132_; lean_object* v___x_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; lean_object* v___x_3136_; lean_object* v___x_3137_; lean_object* v___x_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; lean_object* v___x_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; lean_object* v___x_3148_; lean_object* v___x_3149_; lean_object* v___x_3150_; lean_object* v___x_3151_; lean_object* v___x_3152_; lean_object* v___x_3153_; lean_object* v___x_3154_; lean_object* v___x_3155_; lean_object* v___x_3156_; lean_object* v___x_3157_; lean_object* v___x_3158_; lean_object* v___x_3159_; lean_object* v___x_3160_; lean_object* v___x_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; lean_object* v___x_3165_; lean_object* v___x_3166_; lean_object* v___x_3167_; lean_object* v___x_3168_; lean_object* v___x_3169_; lean_object* v___x_3170_; lean_object* v___x_3171_; lean_object* v___x_3172_; lean_object* v___x_3173_; lean_object* v___x_3174_; lean_object* v___x_3175_; lean_object* v___x_3176_; lean_object* v___x_3177_; lean_object* v___x_3178_; lean_object* v___x_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; lean_object* v___x_3185_; lean_object* v___x_3186_; lean_object* v___x_3187_; lean_object* v___x_3188_; lean_object* v___x_3189_; lean_object* v___x_3190_; lean_object* v___x_3191_; lean_object* v___x_3192_; lean_object* v___x_3193_; lean_object* v___x_3194_; lean_object* v___x_3195_; lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; lean_object* v___x_3204_; lean_object* v___x_3205_; lean_object* v___x_3206_; lean_object* v___x_3207_; lean_object* v___x_3208_; lean_object* v___x_3209_; lean_object* v___x_3210_; lean_object* v___x_3211_; lean_object* v___x_3212_; lean_object* v___x_3213_; lean_object* v___x_3214_; lean_object* v___x_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; lean_object* v___x_3218_; lean_object* v___x_3219_; 
v___x_3046_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__9));
v___x_3047_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__11));
v___x_3048_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__8));
v___x_3049_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__9));
lean_inc_n(v___x_3036_, 85);
v___x_3050_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3050_, 0, v___x_3036_);
lean_ctor_set(v___x_3050_, 1, v___x_3049_);
v___x_3051_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__4));
v___x_3052_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19, &lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19);
v___x_3053_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3053_, 0, v___x_3036_);
lean_ctor_set(v___x_3053_, 1, v___x_3038_);
lean_ctor_set(v___x_3053_, 2, v___x_3052_);
lean_inc_ref_n(v___x_3053_, 21);
v___x_3054_ = l_Lean_Syntax_node1(v___x_3036_, v___x_3051_, v___x_3053_);
v___x_3055_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__6));
v___x_3056_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__11));
v___x_3057_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__13));
v___x_3058_ = l_Lean_Syntax_node1(v___x_3036_, v___x_3057_, v___x_3035_);
v___x_3059_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__15));
v___x_3060_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__16));
v___x_3061_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3061_, 0, v___x_3036_);
lean_ctor_set(v___x_3061_, 1, v___x_3060_);
v___x_3062_ = l_Lean_Syntax_node2(v___x_3036_, v___x_3059_, v___x_3061_, v_a_3030_);
v___x_3063_ = l_Lean_Syntax_node1(v___x_3036_, v___x_3038_, v___x_3062_);
v___x_3064_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__23));
v___x_3065_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3065_, 0, v___x_3036_);
lean_ctor_set(v___x_3065_, 1, v___x_3064_);
v___x_3066_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__18));
v___x_3067_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__19));
v___x_3068_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3068_, 0, v___x_3036_);
lean_ctor_set(v___x_3068_, 1, v___x_3067_);
v___x_3069_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__1));
v___x_3070_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__2));
v___x_3071_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3071_, 0, v___x_3036_);
lean_ctor_set(v___x_3071_, 1, v___x_3070_);
v___x_3072_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__8));
v___x_3073_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__10));
v___x_3074_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__11));
v___x_3075_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3075_, 0, v___x_3036_);
lean_ctor_set(v___x_3075_, 1, v___x_3074_);
v___x_3076_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__1, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__1_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__1);
v___x_3077_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__2));
lean_inc_n(v_currMacroScope_3033_, 11);
lean_inc_n(v_quotContext_3032_, 11);
v___x_3078_ = l_Lean_addMacroScope(v_quotContext_3032_, v___x_3077_, v_currMacroScope_3033_);
v___x_3079_ = lean_box(0);
v___x_3080_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3080_, 0, v___x_3036_);
lean_ctor_set(v___x_3080_, 1, v___x_3076_);
lean_ctor_set(v___x_3080_, 2, v___x_3078_);
lean_ctor_set(v___x_3080_, 3, v___x_3079_);
v___x_3081_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__23));
v___x_3082_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3082_, 0, v___x_3036_);
lean_ctor_set(v___x_3082_, 1, v___x_3081_);
v___x_3083_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__21, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__21_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__21);
v___x_3084_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__22));
v___x_3085_ = l_Lean_addMacroScope(v_quotContext_3032_, v___x_3084_, v_currMacroScope_3033_);
v___x_3086_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3086_, 0, v___x_3036_);
lean_ctor_set(v___x_3086_, 1, v___x_3083_);
lean_ctor_set(v___x_3086_, 2, v___x_3085_);
lean_ctor_set(v___x_3086_, 3, v___x_3079_);
v___x_3087_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__24, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__24_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__24);
v___x_3088_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__25));
v___x_3089_ = l_Lean_addMacroScope(v_quotContext_3032_, v___x_3088_, v_currMacroScope_3033_);
v___x_3090_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3090_, 0, v___x_3036_);
lean_ctor_set(v___x_3090_, 1, v___x_3087_);
lean_ctor_set(v___x_3090_, 2, v___x_3089_);
lean_ctor_set(v___x_3090_, 3, v___x_3079_);
lean_inc_ref(v___x_3090_);
lean_inc_ref(v___x_3086_);
lean_inc_ref_n(v___x_3082_, 3);
lean_inc_ref(v___x_3080_);
v___x_3091_ = l_Lean_Syntax_node5(v___x_3036_, v___x_3038_, v___x_3080_, v___x_3082_, v___x_3086_, v___x_3082_, v___x_3090_);
v___x_3092_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__12));
v___x_3093_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3093_, 0, v___x_3036_);
lean_ctor_set(v___x_3093_, 1, v___x_3092_);
v___x_3094_ = l_Lean_Syntax_node3(v___x_3036_, v___x_3073_, v___x_3075_, v___x_3091_, v___x_3093_);
lean_inc_ref_n(v___x_3065_, 4);
v___x_3095_ = l_Lean_Syntax_node5(v___x_3036_, v___x_3072_, v___x_3094_, v___x_3053_, v___x_3053_, v___x_3065_, v___x_2983_);
v___x_3096_ = l_Lean_Syntax_node1(v___x_3036_, v___x_3055_, v___x_3095_);
lean_inc(v___x_3054_);
v___x_3097_ = l_Lean_Syntax_node3(v___x_3036_, v___x_3069_, v___x_3071_, v___x_3054_, v___x_3096_);
v___x_3098_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__in____1___closed__0));
v___x_3099_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__in____1___closed__1));
v___x_3100_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3100_, 0, v___x_3036_);
lean_ctor_set(v___x_3100_, 1, v___x_3098_);
v___x_3101_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__27, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__27_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__27);
v___x_3102_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__28));
v___x_3103_ = l_Lean_addMacroScope(v_quotContext_3032_, v___x_3102_, v_currMacroScope_3033_);
v___x_3104_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3104_, 0, v___x_3036_);
lean_ctor_set(v___x_3104_, 1, v___x_3101_);
lean_ctor_set(v___x_3104_, 2, v___x_3103_);
lean_ctor_set(v___x_3104_, 3, v___x_3079_);
lean_inc_ref(v___x_3104_);
v___x_3105_ = l_Lean_Syntax_node1(v___x_3036_, v___x_3038_, v___x_3104_);
v___x_3106_ = l_Lean_Syntax_node2(v___x_3036_, v___x_3099_, v___x_3100_, v___x_3105_);
v___x_3107_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__9));
v___x_3108_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__10));
v___x_3109_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3109_, 0, v___x_3036_);
lean_ctor_set(v___x_3109_, 1, v___x_3107_);
v___x_3110_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__4));
v___x_3111_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__6));
v___x_3112_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__9));
v___x_3113_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__11, &lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__11_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__11);
v___x_3114_ = lean_box(0);
v___x_3115_ = l_Lean_addMacroScope(v_quotContext_3032_, v___x_3114_, v_currMacroScope_3033_);
v___x_3116_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__46));
v___x_3117_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3117_, 0, v___x_3036_);
lean_ctor_set(v___x_3117_, 1, v___x_3113_);
lean_ctor_set(v___x_3117_, 2, v___x_3115_);
lean_ctor_set(v___x_3117_, 3, v___x_3116_);
v___x_3118_ = l_Lean_Syntax_node1(v___x_3036_, v___x_3112_, v___x_3117_);
lean_inc_ref_n(v___x_3045_, 2);
v___x_3119_ = l_Lean_Syntax_node2(v___x_3036_, v___x_3111_, v___x_3045_, v___x_3118_);
v___x_3120_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__4));
v___x_3121_ = l_Lean_Syntax_node2(v___x_3036_, v___x_3038_, v___x_3080_, v___x_3086_);
v___x_3122_ = l_Lean_Syntax_node2(v___x_3036_, v___x_3120_, v___x_3104_, v___x_3121_);
v___x_3123_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__49));
v___x_3124_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3124_, 0, v___x_3036_);
lean_ctor_set(v___x_3124_, 1, v___x_3123_);
lean_inc_ref_n(v___x_3124_, 2);
v___x_3125_ = l_Lean_Syntax_node3(v___x_3036_, v___x_3110_, v___x_3119_, v___x_3122_, v___x_3124_);
v___x_3126_ = l_Lean_Syntax_node2(v___x_3036_, v___x_3108_, v___x_3109_, v___x_3125_);
v___x_3127_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in_____x2c___x2c____1___closed__0));
v___x_3128_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in_____x2c___x2c____1___closed__1));
v___x_3129_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3129_, 0, v___x_3036_);
lean_ctor_set(v___x_3129_, 1, v___x_3127_);
v___x_3130_ = l_Lean_Syntax_node2(v___x_3036_, v___x_3128_, v___x_3129_, v___x_3090_);
v___x_3131_ = l_Lean_Syntax_node7(v___x_3036_, v___x_3038_, v___x_3097_, v___x_3053_, v___x_3106_, v___x_3053_, v___x_3126_, v___x_3053_, v___x_3130_);
v___x_3132_ = l_Lean_Syntax_node1(v___x_3036_, v___x_3047_, v___x_3131_);
v___x_3133_ = l_Lean_Syntax_node1(v___x_3036_, v___x_3046_, v___x_3132_);
v___x_3134_ = l_Lean_Syntax_node2(v___x_3036_, v___x_3066_, v___x_3068_, v___x_3133_);
v___x_3135_ = l_Lean_Syntax_node5(v___x_3036_, v___x_3056_, v___x_3058_, v___x_3053_, v___x_3063_, v___x_3065_, v___x_3134_);
v___x_3136_ = l_Lean_Syntax_node1(v___x_3036_, v___x_3055_, v___x_3135_);
v___x_3137_ = l_Lean_Syntax_node3(v___x_3036_, v___x_3048_, v___x_3050_, v___x_3054_, v___x_3136_);
v___x_3138_ = l_Lean_Syntax_node1(v___x_3036_, v___x_3038_, v___x_3137_);
v___x_3139_ = l_Lean_Syntax_node1(v___x_3036_, v___x_3047_, v___x_3138_);
v___x_3140_ = l_Lean_Syntax_node1(v___x_3036_, v___x_3046_, v___x_3139_);
v___x_3141_ = l_Lean_Syntax_node3(v___x_3036_, v___x_3042_, v___x_3045_, v___x_3140_, v___x_3124_);
v___x_3142_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__4));
v___x_3143_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3143_, 0, v___x_3036_);
lean_ctor_set(v___x_3143_, 1, v___x_3142_);
v___x_3144_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__6));
v___x_3145_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__7));
v___x_3146_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3146_, 0, v___x_3036_);
lean_ctor_set(v___x_3146_, 1, v___x_3145_);
v___x_3147_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__12));
v___x_3148_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__13));
v___x_3149_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3149_, 0, v___x_3036_);
lean_ctor_set(v___x_3149_, 1, v___x_3147_);
v___x_3150_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__15));
v___x_3151_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__17));
v___x_3152_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__19));
v___x_3153_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__21, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__21_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__21);
v___x_3154_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__22));
v___x_3155_ = l_Lean_addMacroScope(v_quotContext_3032_, v___x_3154_, v_currMacroScope_3033_);
v___x_3156_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3156_, 0, v___x_3036_);
lean_ctor_set(v___x_3156_, 1, v___x_3153_);
lean_ctor_set(v___x_3156_, 2, v___x_3155_);
lean_ctor_set(v___x_3156_, 3, v___x_3079_);
v___x_3157_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__25));
v___x_3158_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__26));
v___x_3159_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3159_, 0, v___x_3036_);
lean_ctor_set(v___x_3159_, 1, v___x_3158_);
v___x_3160_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__28));
v___x_3161_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__30));
v___x_3162_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__32));
v___x_3163_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__34, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__34_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__34);
v___x_3164_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__35));
v___x_3165_ = l_Lean_addMacroScope(v_quotContext_3032_, v___x_3164_, v_currMacroScope_3033_);
v___x_3166_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3166_, 0, v___x_3036_);
lean_ctor_set(v___x_3166_, 1, v___x_3163_);
lean_ctor_set(v___x_3166_, 2, v___x_3165_);
lean_ctor_set(v___x_3166_, 3, v___x_3079_);
v___x_3167_ = l_Lean_Syntax_node2(v___x_3036_, v___x_3162_, v___x_3166_, v___x_3053_);
v___x_3168_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__37));
v___x_3169_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__39, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__39_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__39);
v___x_3170_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__40));
v___x_3171_ = l_Lean_addMacroScope(v_quotContext_3032_, v___x_3170_, v_currMacroScope_3033_);
v___x_3172_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__44));
v___x_3173_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3173_, 0, v___x_3036_);
lean_ctor_set(v___x_3173_, 1, v___x_3169_);
lean_ctor_set(v___x_3173_, 2, v___x_3171_);
lean_ctor_set(v___x_3173_, 3, v___x_3172_);
v___x_3174_ = l_Lean_Syntax_node3(v___x_3036_, v___x_3168_, v___x_3065_, v___x_3053_, v___x_3173_);
v___x_3175_ = l_Lean_Syntax_node3(v___x_3036_, v___x_3038_, v___x_3053_, v___x_3053_, v___x_3174_);
v___x_3176_ = l_Lean_Syntax_node2(v___x_3036_, v___x_3161_, v___x_3167_, v___x_3175_);
v___x_3177_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__46, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__46_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__46);
v___x_3178_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__47));
v___x_3179_ = l_Lean_addMacroScope(v_quotContext_3032_, v___x_3178_, v_currMacroScope_3033_);
v___x_3180_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3180_, 0, v___x_3036_);
lean_ctor_set(v___x_3180_, 1, v___x_3177_);
lean_ctor_set(v___x_3180_, 2, v___x_3179_);
lean_ctor_set(v___x_3180_, 3, v___x_3079_);
v___x_3181_ = l_Lean_Syntax_node2(v___x_3036_, v___x_3162_, v___x_3180_, v___x_3053_);
v___x_3182_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__49, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__49_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__49);
v___x_3183_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__50));
v___x_3184_ = l_Lean_addMacroScope(v_quotContext_3032_, v___x_3183_, v_currMacroScope_3033_);
v___x_3185_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__53));
v___x_3186_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3186_, 0, v___x_3036_);
lean_ctor_set(v___x_3186_, 1, v___x_3182_);
lean_ctor_set(v___x_3186_, 2, v___x_3184_);
lean_ctor_set(v___x_3186_, 3, v___x_3185_);
v___x_3187_ = l_Lean_Syntax_node3(v___x_3036_, v___x_3168_, v___x_3065_, v___x_3053_, v___x_3186_);
v___x_3188_ = l_Lean_Syntax_node3(v___x_3036_, v___x_3038_, v___x_3053_, v___x_3053_, v___x_3187_);
lean_inc(v___x_3188_);
v___x_3189_ = l_Lean_Syntax_node2(v___x_3036_, v___x_3161_, v___x_3181_, v___x_3188_);
v___x_3190_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__55, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__55_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__55);
v___x_3191_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__56));
v___x_3192_ = l_Lean_addMacroScope(v_quotContext_3032_, v___x_3191_, v_currMacroScope_3033_);
v___x_3193_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3193_, 0, v___x_3036_);
lean_ctor_set(v___x_3193_, 1, v___x_3190_);
lean_ctor_set(v___x_3193_, 2, v___x_3192_);
lean_ctor_set(v___x_3193_, 3, v___x_3079_);
v___x_3194_ = l_Lean_Syntax_node2(v___x_3036_, v___x_3162_, v___x_3193_, v___x_3053_);
v___x_3195_ = l_Lean_Syntax_node2(v___x_3036_, v___x_3161_, v___x_3194_, v___x_3188_);
v___x_3196_ = l_Lean_Syntax_node5(v___x_3036_, v___x_3038_, v___x_3176_, v___x_3082_, v___x_3189_, v___x_3082_, v___x_3195_);
v___x_3197_ = l_Lean_Syntax_node1(v___x_3036_, v___x_3160_, v___x_3196_);
v___x_3198_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__58));
v___x_3199_ = l_Lean_Syntax_node1(v___x_3036_, v___x_3198_, v___x_3053_);
v___x_3200_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__59));
v___x_3201_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3201_, 0, v___x_3036_);
lean_ctor_set(v___x_3201_, 1, v___x_3200_);
v___x_3202_ = l_Lean_Syntax_node6(v___x_3036_, v___x_3157_, v___x_3159_, v___x_3053_, v___x_3197_, v___x_3199_, v___x_3053_, v___x_3201_);
v___x_3203_ = l_Lean_Syntax_node5(v___x_3036_, v___x_3152_, v___x_3045_, v___x_3156_, v___x_3065_, v___x_3202_, v___x_3124_);
v___x_3204_ = l_Lean_Syntax_node1(v___x_3036_, v___x_3151_, v___x_3203_);
v___x_3205_ = l_Lean_Syntax_node1(v___x_3036_, v___x_3038_, v___x_3204_);
v___x_3206_ = l_Lean_Syntax_node1(v___x_3036_, v___x_3150_, v___x_3205_);
v___x_3207_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__61));
v___x_3208_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__62));
v___x_3209_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3209_, 0, v___x_3036_);
lean_ctor_set(v___x_3209_, 1, v___x_3208_);
v___x_3210_ = l_Lean_Syntax_node2(v___x_3036_, v___x_3207_, v___x_3209_, v___x_3040_);
v___x_3211_ = l_Lean_Syntax_node1(v___x_3036_, v___x_3038_, v___x_3210_);
v___x_3212_ = l_Lean_Syntax_node6(v___x_3036_, v___x_3148_, v___x_3149_, v___x_3206_, v___x_3053_, v___x_3053_, v___x_3053_, v___x_3211_);
v___x_3213_ = l_Lean_Syntax_node1(v___x_3036_, v___x_3038_, v___x_3212_);
v___x_3214_ = l_Lean_Syntax_node1(v___x_3036_, v___x_3047_, v___x_3213_);
v___x_3215_ = l_Lean_Syntax_node1(v___x_3036_, v___x_3046_, v___x_3214_);
v___x_3216_ = l_Lean_Syntax_node2(v___x_3036_, v___x_3144_, v___x_3146_, v___x_3215_);
v___x_3217_ = l_Lean_Syntax_node3(v___x_3036_, v___x_3038_, v___x_3141_, v___x_3143_, v___x_3216_);
v___x_3218_ = l_Lean_Syntax_node1(v___x_3036_, v___x_3041_, v___x_3217_);
v___x_3219_ = l_Lean_Elab_Tactic_evalTactic(v___x_3218_, v_a_2970_, v_a_2971_, v_a_2972_, v_a_2973_, v_a_2974_, v_a_2975_, v_a_2976_, v_a_2977_);
return v___x_3219_;
}
}
else
{
lean_object* v_a_3221_; lean_object* v___x_3223_; uint8_t v_isShared_3224_; uint8_t v_isSharedCheck_3228_; 
lean_del_object(v___x_3003_);
lean_dec(v___x_2983_);
lean_dec(v_x_2969_);
v_a_3221_ = lean_ctor_get(v___x_3029_, 0);
v_isSharedCheck_3228_ = !lean_is_exclusive(v___x_3029_);
if (v_isSharedCheck_3228_ == 0)
{
v___x_3223_ = v___x_3029_;
v_isShared_3224_ = v_isSharedCheck_3228_;
goto v_resetjp_3222_;
}
else
{
lean_inc(v_a_3221_);
lean_dec(v___x_3029_);
v___x_3223_ = lean_box(0);
v_isShared_3224_ = v_isSharedCheck_3228_;
goto v_resetjp_3222_;
}
v_resetjp_3222_:
{
lean_object* v___x_3226_; 
if (v_isShared_3224_ == 0)
{
v___x_3226_ = v___x_3223_;
goto v_reusejp_3225_;
}
else
{
lean_object* v_reuseFailAlloc_3227_; 
v_reuseFailAlloc_3227_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3227_, 0, v_a_3221_);
v___x_3226_ = v_reuseFailAlloc_3227_;
goto v_reusejp_3225_;
}
v_reusejp_3225_:
{
return v___x_3226_;
}
}
}
}
else
{
lean_object* v_a_3229_; lean_object* v___x_3231_; uint8_t v_isShared_3232_; uint8_t v_isSharedCheck_3236_; 
lean_del_object(v___x_3003_);
lean_dec(v___x_2983_);
lean_dec(v_x_2969_);
v_a_3229_ = lean_ctor_get(v___x_3026_, 0);
v_isSharedCheck_3236_ = !lean_is_exclusive(v___x_3026_);
if (v_isSharedCheck_3236_ == 0)
{
v___x_3231_ = v___x_3026_;
v_isShared_3232_ = v_isSharedCheck_3236_;
goto v_resetjp_3230_;
}
else
{
lean_inc(v_a_3229_);
lean_dec(v___x_3026_);
v___x_3231_ = lean_box(0);
v_isShared_3232_ = v_isSharedCheck_3236_;
goto v_resetjp_3230_;
}
v_resetjp_3230_:
{
lean_object* v___x_3234_; 
if (v_isShared_3232_ == 0)
{
v___x_3234_ = v___x_3231_;
goto v_reusejp_3233_;
}
else
{
lean_object* v_reuseFailAlloc_3235_; 
v_reuseFailAlloc_3235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3235_, 0, v_a_3229_);
v___x_3234_ = v_reuseFailAlloc_3235_;
goto v_reusejp_3233_;
}
v_reusejp_3233_:
{
return v___x_3234_;
}
}
}
}
else
{
lean_object* v_a_3237_; lean_object* v___x_3239_; uint8_t v_isShared_3240_; uint8_t v_isSharedCheck_3244_; 
lean_del_object(v___x_3003_);
lean_dec(v___x_2983_);
lean_dec(v_x_2969_);
v_a_3237_ = lean_ctor_get(v___x_3024_, 0);
v_isSharedCheck_3244_ = !lean_is_exclusive(v___x_3024_);
if (v_isSharedCheck_3244_ == 0)
{
v___x_3239_ = v___x_3024_;
v_isShared_3240_ = v_isSharedCheck_3244_;
goto v_resetjp_3238_;
}
else
{
lean_inc(v_a_3237_);
lean_dec(v___x_3024_);
v___x_3239_ = lean_box(0);
v_isShared_3240_ = v_isSharedCheck_3244_;
goto v_resetjp_3238_;
}
v_resetjp_3238_:
{
lean_object* v___x_3242_; 
if (v_isShared_3240_ == 0)
{
v___x_3242_ = v___x_3239_;
goto v_reusejp_3241_;
}
else
{
lean_object* v_reuseFailAlloc_3243_; 
v_reuseFailAlloc_3243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3243_, 0, v_a_3237_);
v___x_3242_ = v_reuseFailAlloc_3243_;
goto v_reusejp_3241_;
}
v_reusejp_3241_:
{
return v___x_3242_;
}
}
}
}
else
{
lean_object* v_a_3245_; lean_object* v___x_3247_; uint8_t v_isShared_3248_; uint8_t v_isSharedCheck_3252_; 
lean_dec(v_a_3013_);
lean_del_object(v___x_3003_);
lean_dec(v___x_2983_);
lean_dec(v_x_2969_);
v_a_3245_ = lean_ctor_get(v___x_3022_, 0);
v_isSharedCheck_3252_ = !lean_is_exclusive(v___x_3022_);
if (v_isSharedCheck_3252_ == 0)
{
v___x_3247_ = v___x_3022_;
v_isShared_3248_ = v_isSharedCheck_3252_;
goto v_resetjp_3246_;
}
else
{
lean_inc(v_a_3245_);
lean_dec(v___x_3022_);
v___x_3247_ = lean_box(0);
v_isShared_3248_ = v_isSharedCheck_3252_;
goto v_resetjp_3246_;
}
v_resetjp_3246_:
{
lean_object* v___x_3250_; 
if (v_isShared_3248_ == 0)
{
v___x_3250_ = v___x_3247_;
goto v_reusejp_3249_;
}
else
{
lean_object* v_reuseFailAlloc_3251_; 
v_reuseFailAlloc_3251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3251_, 0, v_a_3245_);
v___x_3250_ = v_reuseFailAlloc_3251_;
goto v_reusejp_3249_;
}
v_reusejp_3249_:
{
return v___x_3250_;
}
}
}
}
else
{
lean_object* v_a_3253_; lean_object* v___x_3255_; uint8_t v_isShared_3256_; uint8_t v_isSharedCheck_3260_; 
lean_dec(v___x_3015_);
lean_dec(v_a_3013_);
lean_del_object(v___x_3003_);
lean_dec(v___x_2983_);
lean_dec(v_x_2969_);
v_a_3253_ = lean_ctor_get(v___x_3016_, 0);
v_isSharedCheck_3260_ = !lean_is_exclusive(v___x_3016_);
if (v_isSharedCheck_3260_ == 0)
{
v___x_3255_ = v___x_3016_;
v_isShared_3256_ = v_isSharedCheck_3260_;
goto v_resetjp_3254_;
}
else
{
lean_inc(v_a_3253_);
lean_dec(v___x_3016_);
v___x_3255_ = lean_box(0);
v_isShared_3256_ = v_isSharedCheck_3260_;
goto v_resetjp_3254_;
}
v_resetjp_3254_:
{
lean_object* v___x_3258_; 
if (v_isShared_3256_ == 0)
{
v___x_3258_ = v___x_3255_;
goto v_reusejp_3257_;
}
else
{
lean_object* v_reuseFailAlloc_3259_; 
v_reuseFailAlloc_3259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3259_, 0, v_a_3253_);
v___x_3258_ = v_reuseFailAlloc_3259_;
goto v_reusejp_3257_;
}
v_reusejp_3257_:
{
return v___x_3258_;
}
}
}
}
else
{
lean_object* v_a_3261_; lean_object* v___x_3263_; uint8_t v_isShared_3264_; uint8_t v_isSharedCheck_3268_; 
lean_del_object(v___x_3003_);
lean_dec(v_snd_3001_);
lean_dec(v___x_2983_);
lean_dec(v_x_2969_);
v_a_3261_ = lean_ctor_get(v___x_3012_, 0);
v_isSharedCheck_3268_ = !lean_is_exclusive(v___x_3012_);
if (v_isSharedCheck_3268_ == 0)
{
v___x_3263_ = v___x_3012_;
v_isShared_3264_ = v_isSharedCheck_3268_;
goto v_resetjp_3262_;
}
else
{
lean_inc(v_a_3261_);
lean_dec(v___x_3012_);
v___x_3263_ = lean_box(0);
v_isShared_3264_ = v_isSharedCheck_3268_;
goto v_resetjp_3262_;
}
v_resetjp_3262_:
{
lean_object* v___x_3266_; 
if (v_isShared_3264_ == 0)
{
v___x_3266_ = v___x_3263_;
goto v_reusejp_3265_;
}
else
{
lean_object* v_reuseFailAlloc_3267_; 
v_reuseFailAlloc_3267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3267_, 0, v_a_3261_);
v___x_3266_ = v_reuseFailAlloc_3267_;
goto v_reusejp_3265_;
}
v_reusejp_3265_:
{
return v___x_3266_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3270_; lean_object* v___x_3272_; uint8_t v_isShared_3273_; uint8_t v_isSharedCheck_3277_; 
lean_dec(v___x_2983_);
lean_dec(v_x_2969_);
v_a_3270_ = lean_ctor_get(v___x_2990_, 0);
v_isSharedCheck_3277_ = !lean_is_exclusive(v___x_2990_);
if (v_isSharedCheck_3277_ == 0)
{
v___x_3272_ = v___x_2990_;
v_isShared_3273_ = v_isSharedCheck_3277_;
goto v_resetjp_3271_;
}
else
{
lean_inc(v_a_3270_);
lean_dec(v___x_2990_);
v___x_3272_ = lean_box(0);
v_isShared_3273_ = v_isSharedCheck_3277_;
goto v_resetjp_3271_;
}
v_resetjp_3271_:
{
lean_object* v___x_3275_; 
if (v_isShared_3273_ == 0)
{
v___x_3275_ = v___x_3272_;
goto v_reusejp_3274_;
}
else
{
lean_object* v_reuseFailAlloc_3276_; 
v_reuseFailAlloc_3276_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3276_, 0, v_a_3270_);
v___x_3275_ = v_reuseFailAlloc_3276_;
goto v_reusejp_3274_;
}
v_reusejp_3274_:
{
return v___x_3275_;
}
}
}
}
else
{
lean_object* v_a_3278_; lean_object* v___x_3280_; uint8_t v_isShared_3281_; uint8_t v_isSharedCheck_3285_; 
lean_dec(v___x_2983_);
lean_dec(v_x_2969_);
v_a_3278_ = lean_ctor_get(v___x_2988_, 0);
v_isSharedCheck_3285_ = !lean_is_exclusive(v___x_2988_);
if (v_isSharedCheck_3285_ == 0)
{
v___x_3280_ = v___x_2988_;
v_isShared_3281_ = v_isSharedCheck_3285_;
goto v_resetjp_3279_;
}
else
{
lean_inc(v_a_3278_);
lean_dec(v___x_2988_);
v___x_3280_ = lean_box(0);
v_isShared_3281_ = v_isSharedCheck_3285_;
goto v_resetjp_3279_;
}
v_resetjp_3279_:
{
lean_object* v___x_3283_; 
if (v_isShared_3281_ == 0)
{
v___x_3283_ = v___x_3280_;
goto v_reusejp_3282_;
}
else
{
lean_object* v_reuseFailAlloc_3284_; 
v_reuseFailAlloc_3284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3284_, 0, v_a_3278_);
v___x_3283_ = v_reuseFailAlloc_3284_;
goto v_reusejp_3282_;
}
v_reusejp_3282_:
{
return v___x_3283_;
}
}
}
}
else
{
lean_object* v_a_3286_; lean_object* v___x_3288_; uint8_t v_isShared_3289_; uint8_t v_isSharedCheck_3293_; 
lean_dec(v___x_2983_);
lean_dec(v_x_2969_);
v_a_3286_ = lean_ctor_get(v___x_2986_, 0);
v_isSharedCheck_3293_ = !lean_is_exclusive(v___x_2986_);
if (v_isSharedCheck_3293_ == 0)
{
v___x_3288_ = v___x_2986_;
v_isShared_3289_ = v_isSharedCheck_3293_;
goto v_resetjp_3287_;
}
else
{
lean_inc(v_a_3286_);
lean_dec(v___x_2986_);
v___x_3288_ = lean_box(0);
v_isShared_3289_ = v_isSharedCheck_3293_;
goto v_resetjp_3287_;
}
v_resetjp_3287_:
{
lean_object* v___x_3291_; 
if (v_isShared_3289_ == 0)
{
v___x_3291_ = v___x_3288_;
goto v_reusejp_3290_;
}
else
{
lean_object* v_reuseFailAlloc_3292_; 
v_reuseFailAlloc_3292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3292_, 0, v_a_3286_);
v___x_3291_ = v_reuseFailAlloc_3292_;
goto v_reusejp_3290_;
}
v_reusejp_3290_:
{
return v___x_3291_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___boxed(lean_object* v_x_3294_, lean_object* v_a_3295_, lean_object* v_a_3296_, lean_object* v_a_3297_, lean_object* v_a_3298_, lean_object* v_a_3299_, lean_object* v_a_3300_, lean_object* v_a_3301_, lean_object* v_a_3302_, lean_object* v_a_3303_){
_start:
{
lean_object* v_res_3304_; 
v_res_3304_ = lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1(v_x_3294_, v_a_3295_, v_a_3296_, v_a_3297_, v_a_3298_, v_a_3299_, v_a_3300_, v_a_3301_, v_a_3302_);
lean_dec(v_a_3302_);
lean_dec_ref(v_a_3301_);
lean_dec(v_a_3300_);
lean_dec_ref(v_a_3299_);
lean_dec(v_a_3298_);
lean_dec_ref(v_a_3297_);
lean_dec(v_a_3296_);
lean_dec_ref(v_a_3295_);
return v_res_3304_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in____1(lean_object* v_x_3330_, lean_object* v_a_3331_, lean_object* v_a_3332_, lean_object* v_a_3333_, lean_object* v_a_3334_, lean_object* v_a_3335_, lean_object* v_a_3336_, lean_object* v_a_3337_, lean_object* v_a_3338_){
_start:
{
lean_object* v___x_3340_; uint8_t v___x_3341_; 
v___x_3340_ = ((lean_object*)(lp_Props2Theories_tacticIntro__exists__unique__in___00__closed__1));
lean_inc(v_x_3330_);
v___x_3341_ = l_Lean_Syntax_isOfKind(v_x_3330_, v___x_3340_);
if (v___x_3341_ == 0)
{
lean_object* v___x_3342_; 
lean_dec(v_x_3330_);
v___x_3342_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__0___redArg();
return v___x_3342_;
}
else
{
lean_object* v_ref_3343_; lean_object* v_quotContext_3344_; lean_object* v_currMacroScope_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; uint8_t v___x_3348_; lean_object* v___x_3349_; lean_object* v___x_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; lean_object* v___x_3364_; lean_object* v___x_3365_; lean_object* v___x_3366_; lean_object* v___x_3367_; lean_object* v___x_3368_; lean_object* v___x_3369_; lean_object* v___x_3370_; lean_object* v___x_3371_; lean_object* v___x_3372_; lean_object* v___x_3373_; lean_object* v___x_3374_; lean_object* v___x_3375_; lean_object* v___x_3376_; lean_object* v___x_3377_; lean_object* v___x_3378_; lean_object* v___x_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; lean_object* v___x_3382_; lean_object* v___x_3383_; lean_object* v___x_3384_; lean_object* v___x_3385_; lean_object* v___x_3386_; lean_object* v___x_3387_; lean_object* v___x_3388_; lean_object* v___x_3389_; lean_object* v___x_3390_; lean_object* v___x_3391_; lean_object* v___x_3392_; lean_object* v___x_3393_; lean_object* v___x_3394_; lean_object* v___x_3395_; lean_object* v___x_3396_; lean_object* v___x_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; lean_object* v___x_3400_; lean_object* v___x_3401_; lean_object* v___x_3402_; lean_object* v___x_3403_; lean_object* v___x_3404_; lean_object* v___x_3405_; lean_object* v___x_3406_; lean_object* v___x_3407_; lean_object* v___x_3408_; lean_object* v___x_3409_; lean_object* v___x_3410_; lean_object* v___x_3411_; lean_object* v___x_3412_; lean_object* v___x_3413_; lean_object* v___x_3414_; lean_object* v___x_3415_; lean_object* v___x_3416_; lean_object* v___x_3417_; lean_object* v___x_3418_; lean_object* v___x_3419_; lean_object* v___x_3420_; lean_object* v___x_3421_; lean_object* v___x_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; lean_object* v___x_3425_; lean_object* v___x_3426_; lean_object* v___x_3427_; lean_object* v___x_3428_; lean_object* v___x_3429_; lean_object* v___x_3430_; lean_object* v___x_3431_; lean_object* v___x_3432_; lean_object* v___x_3433_; lean_object* v___x_3434_; lean_object* v___x_3435_; lean_object* v___x_3436_; lean_object* v___x_3437_; lean_object* v___x_3438_; lean_object* v___x_3439_; lean_object* v___x_3440_; lean_object* v___x_3441_; lean_object* v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; 
v_ref_3343_ = lean_ctor_get(v_a_3337_, 5);
v_quotContext_3344_ = lean_ctor_get(v_a_3337_, 10);
v_currMacroScope_3345_ = lean_ctor_get(v_a_3337_, 11);
v___x_3346_ = lean_unsigned_to_nat(1u);
v___x_3347_ = l_Lean_Syntax_getArg(v_x_3330_, v___x_3346_);
lean_dec(v_x_3330_);
v___x_3348_ = 0;
v___x_3349_ = l_Lean_SourceInfo_fromRef(v_ref_3343_, v___x_3348_);
v___x_3350_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__1));
v___x_3351_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__11));
v___x_3352_ = ((lean_object*)(lp_Props2Theories_delabNotMem___closed__6));
v___x_3353_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in____1___closed__1));
v___x_3354_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in____1___closed__2));
lean_inc_n(v___x_3349_, 44);
v___x_3355_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3355_, 0, v___x_3349_);
lean_ctor_set(v___x_3355_, 1, v___x_3354_);
lean_inc(v___x_3347_);
lean_inc_ref(v___x_3355_);
v___x_3356_ = l_Lean_Syntax_node2(v___x_3349_, v___x_3353_, v___x_3355_, v___x_3347_);
v___x_3357_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in____1___closed__4));
v___x_3358_ = l_Lean_Syntax_node2(v___x_3349_, v___x_3357_, v___x_3355_, v___x_3347_);
v___x_3359_ = l_Lean_Syntax_node2(v___x_3349_, v___x_3352_, v___x_3356_, v___x_3358_);
v___x_3360_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__4));
v___x_3361_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3361_, 0, v___x_3349_);
lean_ctor_set(v___x_3361_, 1, v___x_3360_);
v___x_3362_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__6));
v___x_3363_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__7));
v___x_3364_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3364_, 0, v___x_3349_);
lean_ctor_set(v___x_3364_, 1, v___x_3363_);
v___x_3365_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__9));
v___x_3366_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__11));
v___x_3367_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__12));
v___x_3368_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__13));
v___x_3369_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3369_, 0, v___x_3349_);
lean_ctor_set(v___x_3369_, 1, v___x_3367_);
v___x_3370_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__15));
v___x_3371_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__17));
v___x_3372_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__19));
v___x_3373_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__7));
v___x_3374_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3374_, 0, v___x_3349_);
lean_ctor_set(v___x_3374_, 1, v___x_3373_);
v___x_3375_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__21, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__21_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__21);
v___x_3376_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__22));
lean_inc_n(v_currMacroScope_3345_, 6);
lean_inc_n(v_quotContext_3344_, 6);
v___x_3377_ = l_Lean_addMacroScope(v_quotContext_3344_, v___x_3376_, v_currMacroScope_3345_);
v___x_3378_ = lean_box(0);
v___x_3379_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3379_, 0, v___x_3349_);
lean_ctor_set(v___x_3379_, 1, v___x_3375_);
lean_ctor_set(v___x_3379_, 2, v___x_3377_);
lean_ctor_set(v___x_3379_, 3, v___x_3378_);
v___x_3380_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__23));
v___x_3381_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3381_, 0, v___x_3349_);
lean_ctor_set(v___x_3381_, 1, v___x_3380_);
v___x_3382_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__25));
v___x_3383_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__26));
v___x_3384_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3384_, 0, v___x_3349_);
lean_ctor_set(v___x_3384_, 1, v___x_3383_);
v___x_3385_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19, &lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19);
v___x_3386_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3386_, 0, v___x_3349_);
lean_ctor_set(v___x_3386_, 1, v___x_3351_);
lean_ctor_set(v___x_3386_, 2, v___x_3385_);
v___x_3387_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__28));
v___x_3388_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__30));
v___x_3389_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__32));
v___x_3390_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__34, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__34_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__34);
v___x_3391_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__35));
v___x_3392_ = l_Lean_addMacroScope(v_quotContext_3344_, v___x_3391_, v_currMacroScope_3345_);
v___x_3393_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3393_, 0, v___x_3349_);
lean_ctor_set(v___x_3393_, 1, v___x_3390_);
lean_ctor_set(v___x_3393_, 2, v___x_3392_);
lean_ctor_set(v___x_3393_, 3, v___x_3378_);
lean_inc_ref_n(v___x_3386_, 15);
v___x_3394_ = l_Lean_Syntax_node2(v___x_3349_, v___x_3389_, v___x_3393_, v___x_3386_);
v___x_3395_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__37));
v___x_3396_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__39, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__39_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__39);
v___x_3397_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__40));
v___x_3398_ = l_Lean_addMacroScope(v_quotContext_3344_, v___x_3397_, v_currMacroScope_3345_);
v___x_3399_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__44));
v___x_3400_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3400_, 0, v___x_3349_);
lean_ctor_set(v___x_3400_, 1, v___x_3396_);
lean_ctor_set(v___x_3400_, 2, v___x_3398_);
lean_ctor_set(v___x_3400_, 3, v___x_3399_);
lean_inc_ref_n(v___x_3381_, 2);
v___x_3401_ = l_Lean_Syntax_node3(v___x_3349_, v___x_3395_, v___x_3381_, v___x_3386_, v___x_3400_);
v___x_3402_ = l_Lean_Syntax_node3(v___x_3349_, v___x_3351_, v___x_3386_, v___x_3386_, v___x_3401_);
v___x_3403_ = l_Lean_Syntax_node2(v___x_3349_, v___x_3388_, v___x_3394_, v___x_3402_);
v___x_3404_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__23));
v___x_3405_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3405_, 0, v___x_3349_);
lean_ctor_set(v___x_3405_, 1, v___x_3404_);
v___x_3406_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__46, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__46_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__46);
v___x_3407_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__47));
v___x_3408_ = l_Lean_addMacroScope(v_quotContext_3344_, v___x_3407_, v_currMacroScope_3345_);
v___x_3409_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3409_, 0, v___x_3349_);
lean_ctor_set(v___x_3409_, 1, v___x_3406_);
lean_ctor_set(v___x_3409_, 2, v___x_3408_);
lean_ctor_set(v___x_3409_, 3, v___x_3378_);
v___x_3410_ = l_Lean_Syntax_node2(v___x_3349_, v___x_3389_, v___x_3409_, v___x_3386_);
v___x_3411_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__49, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__49_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__49);
v___x_3412_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__50));
v___x_3413_ = l_Lean_addMacroScope(v_quotContext_3344_, v___x_3412_, v_currMacroScope_3345_);
v___x_3414_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__53));
v___x_3415_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3415_, 0, v___x_3349_);
lean_ctor_set(v___x_3415_, 1, v___x_3411_);
lean_ctor_set(v___x_3415_, 2, v___x_3413_);
lean_ctor_set(v___x_3415_, 3, v___x_3414_);
v___x_3416_ = l_Lean_Syntax_node3(v___x_3349_, v___x_3395_, v___x_3381_, v___x_3386_, v___x_3415_);
v___x_3417_ = l_Lean_Syntax_node3(v___x_3349_, v___x_3351_, v___x_3386_, v___x_3386_, v___x_3416_);
lean_inc(v___x_3417_);
v___x_3418_ = l_Lean_Syntax_node2(v___x_3349_, v___x_3388_, v___x_3410_, v___x_3417_);
v___x_3419_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__55, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__55_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__55);
v___x_3420_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__56));
v___x_3421_ = l_Lean_addMacroScope(v_quotContext_3344_, v___x_3420_, v_currMacroScope_3345_);
v___x_3422_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3422_, 0, v___x_3349_);
lean_ctor_set(v___x_3422_, 1, v___x_3419_);
lean_ctor_set(v___x_3422_, 2, v___x_3421_);
lean_ctor_set(v___x_3422_, 3, v___x_3378_);
v___x_3423_ = l_Lean_Syntax_node2(v___x_3349_, v___x_3389_, v___x_3422_, v___x_3386_);
v___x_3424_ = l_Lean_Syntax_node2(v___x_3349_, v___x_3388_, v___x_3423_, v___x_3417_);
lean_inc_ref(v___x_3405_);
v___x_3425_ = l_Lean_Syntax_node5(v___x_3349_, v___x_3351_, v___x_3403_, v___x_3405_, v___x_3418_, v___x_3405_, v___x_3424_);
v___x_3426_ = l_Lean_Syntax_node1(v___x_3349_, v___x_3387_, v___x_3425_);
v___x_3427_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__58));
v___x_3428_ = l_Lean_Syntax_node1(v___x_3349_, v___x_3427_, v___x_3386_);
v___x_3429_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__59));
v___x_3430_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3430_, 0, v___x_3349_);
lean_ctor_set(v___x_3430_, 1, v___x_3429_);
v___x_3431_ = l_Lean_Syntax_node6(v___x_3349_, v___x_3382_, v___x_3384_, v___x_3386_, v___x_3426_, v___x_3428_, v___x_3386_, v___x_3430_);
v___x_3432_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__49));
v___x_3433_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3433_, 0, v___x_3349_);
lean_ctor_set(v___x_3433_, 1, v___x_3432_);
v___x_3434_ = l_Lean_Syntax_node5(v___x_3349_, v___x_3372_, v___x_3374_, v___x_3379_, v___x_3381_, v___x_3431_, v___x_3433_);
v___x_3435_ = l_Lean_Syntax_node1(v___x_3349_, v___x_3371_, v___x_3434_);
v___x_3436_ = l_Lean_Syntax_node1(v___x_3349_, v___x_3351_, v___x_3435_);
v___x_3437_ = l_Lean_Syntax_node1(v___x_3349_, v___x_3370_, v___x_3436_);
v___x_3438_ = l_Lean_Syntax_node6(v___x_3349_, v___x_3368_, v___x_3369_, v___x_3437_, v___x_3386_, v___x_3386_, v___x_3386_, v___x_3386_);
v___x_3439_ = l_Lean_Syntax_node1(v___x_3349_, v___x_3351_, v___x_3438_);
v___x_3440_ = l_Lean_Syntax_node1(v___x_3349_, v___x_3366_, v___x_3439_);
v___x_3441_ = l_Lean_Syntax_node1(v___x_3349_, v___x_3365_, v___x_3440_);
v___x_3442_ = l_Lean_Syntax_node2(v___x_3349_, v___x_3362_, v___x_3364_, v___x_3441_);
v___x_3443_ = l_Lean_Syntax_node3(v___x_3349_, v___x_3351_, v___x_3359_, v___x_3361_, v___x_3442_);
v___x_3444_ = l_Lean_Syntax_node1(v___x_3349_, v___x_3350_, v___x_3443_);
v___x_3445_ = l_Lean_Elab_Tactic_evalTactic(v___x_3444_, v_a_3331_, v_a_3332_, v_a_3333_, v_a_3334_, v_a_3335_, v_a_3336_, v_a_3337_, v_a_3338_);
return v___x_3445_;
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in____1___boxed(lean_object* v_x_3446_, lean_object* v_a_3447_, lean_object* v_a_3448_, lean_object* v_a_3449_, lean_object* v_a_3450_, lean_object* v_a_3451_, lean_object* v_a_3452_, lean_object* v_a_3453_, lean_object* v_a_3454_, lean_object* v_a_3455_){
_start:
{
lean_object* v_res_3456_; 
v_res_3456_ = lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in____1(v_x_3446_, v_a_3447_, v_a_3448_, v_a_3449_, v_a_3450_, v_a_3451_, v_a_3452_, v_a_3453_, v_a_3454_);
lean_dec(v_a_3454_);
lean_dec_ref(v_a_3453_);
lean_dec(v_a_3452_);
lean_dec_ref(v_a_3451_);
lean_dec(v_a_3450_);
lean_dec_ref(v_a_3449_);
lean_dec(v_a_3448_);
lean_dec_ref(v_a_3447_);
return v_res_3456_;
}
}
static lean_object* _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in_____x2c___x2c___x2c____1___closed__1(void){
_start:
{
lean_object* v___x_3498_; lean_object* v___x_3499_; 
v___x_3498_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in_____x2c___x2c___x2c____1___closed__0));
v___x_3499_ = l_String_toRawSubstring_x27(v___x_3498_);
return v___x_3499_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in_____x2c___x2c___x2c____1(lean_object* v_x_3506_, lean_object* v_a_3507_, lean_object* v_a_3508_, lean_object* v_a_3509_, lean_object* v_a_3510_, lean_object* v_a_3511_, lean_object* v_a_3512_, lean_object* v_a_3513_, lean_object* v_a_3514_){
_start:
{
lean_object* v___x_3516_; uint8_t v___x_3517_; 
v___x_3516_ = ((lean_object*)(lp_Props2Theories_tacticIntro__exists__unique__in_____x2c___x2c___x2c___00__closed__1));
lean_inc(v_x_3506_);
v___x_3517_ = l_Lean_Syntax_isOfKind(v_x_3506_, v___x_3516_);
if (v___x_3517_ == 0)
{
lean_object* v___x_3518_; 
lean_dec(v_x_3506_);
v___x_3518_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__0___redArg();
return v___x_3518_;
}
else
{
lean_object* v_ref_3519_; lean_object* v_quotContext_3520_; lean_object* v_currMacroScope_3521_; lean_object* v___x_3522_; lean_object* v___x_3523_; lean_object* v___x_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; lean_object* v___x_3528_; lean_object* v___x_3529_; uint8_t v___x_3530_; lean_object* v___x_3531_; lean_object* v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v___x_3537_; lean_object* v___x_3538_; lean_object* v___x_3539_; lean_object* v___x_3540_; lean_object* v___x_3541_; lean_object* v___x_3542_; lean_object* v___x_3543_; lean_object* v___x_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; lean_object* v___x_3548_; lean_object* v___x_3549_; lean_object* v___x_3550_; lean_object* v___x_3551_; lean_object* v___x_3552_; lean_object* v___x_3553_; lean_object* v___x_3554_; lean_object* v___x_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; 
v_ref_3519_ = lean_ctor_get(v_a_3513_, 5);
v_quotContext_3520_ = lean_ctor_get(v_a_3513_, 10);
v_currMacroScope_3521_ = lean_ctor_get(v_a_3513_, 11);
v___x_3522_ = lean_unsigned_to_nat(1u);
v___x_3523_ = l_Lean_Syntax_getArg(v_x_3506_, v___x_3522_);
v___x_3524_ = lean_unsigned_to_nat(3u);
v___x_3525_ = l_Lean_Syntax_getArg(v_x_3506_, v___x_3524_);
v___x_3526_ = lean_unsigned_to_nat(5u);
v___x_3527_ = l_Lean_Syntax_getArg(v_x_3506_, v___x_3526_);
v___x_3528_ = lean_unsigned_to_nat(7u);
v___x_3529_ = l_Lean_Syntax_getArg(v_x_3506_, v___x_3528_);
lean_dec(v_x_3506_);
v___x_3530_ = 0;
v___x_3531_ = l_Lean_SourceInfo_fromRef(v_ref_3519_, v___x_3530_);
v___x_3532_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__1));
v___x_3533_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__11));
v___x_3534_ = ((lean_object*)(lp_Props2Theories_tacticIntro__exists__unique__in___00__closed__1));
v___x_3535_ = ((lean_object*)(lp_Props2Theories_tacticIntro__exists__unique__in___00__closed__2));
lean_inc_n(v___x_3531_, 12);
v___x_3536_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3536_, 0, v___x_3531_);
lean_ctor_set(v___x_3536_, 1, v___x_3535_);
v___x_3537_ = l_Lean_Syntax_node2(v___x_3531_, v___x_3534_, v___x_3536_, v___x_3523_);
v___x_3538_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__4));
v___x_3539_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3539_, 0, v___x_3531_);
lean_ctor_set(v___x_3539_, 1, v___x_3538_);
v___x_3540_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__6));
v___x_3541_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__7));
v___x_3542_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3542_, 0, v___x_3531_);
lean_ctor_set(v___x_3542_, 1, v___x_3541_);
v___x_3543_ = l_Lean_Syntax_node1(v___x_3531_, v___x_3540_, v___x_3542_);
v___x_3544_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in_____x2c___x2c____1___closed__0));
v___x_3545_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in_____x2c___x2c____1___closed__1));
v___x_3546_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3546_, 0, v___x_3531_);
lean_ctor_set(v___x_3546_, 1, v___x_3544_);
v___x_3547_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__4));
v___x_3548_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in_____x2c___x2c___x2c____1___closed__1, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in_____x2c___x2c___x2c____1___closed__1_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in_____x2c___x2c___x2c____1___closed__1);
v___x_3549_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___closed__1));
lean_inc(v_currMacroScope_3521_);
lean_inc(v_quotContext_3520_);
v___x_3550_ = l_Lean_addMacroScope(v_quotContext_3520_, v___x_3549_, v_currMacroScope_3521_);
v___x_3551_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in_____x2c___x2c___x2c____1___closed__3));
v___x_3552_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3552_, 0, v___x_3531_);
lean_ctor_set(v___x_3552_, 1, v___x_3548_);
lean_ctor_set(v___x_3552_, 2, v___x_3550_);
lean_ctor_set(v___x_3552_, 3, v___x_3551_);
v___x_3553_ = l_Lean_Syntax_node2(v___x_3531_, v___x_3533_, v___x_3525_, v___x_3527_);
v___x_3554_ = l_Lean_Syntax_node2(v___x_3531_, v___x_3547_, v___x_3552_, v___x_3553_);
lean_inc_ref(v___x_3546_);
v___x_3555_ = l_Lean_Syntax_node2(v___x_3531_, v___x_3545_, v___x_3546_, v___x_3554_);
v___x_3556_ = l_Lean_Syntax_node2(v___x_3531_, v___x_3545_, v___x_3546_, v___x_3529_);
lean_inc_ref_n(v___x_3539_, 2);
v___x_3557_ = l_Lean_Syntax_node7(v___x_3531_, v___x_3533_, v___x_3537_, v___x_3539_, v___x_3543_, v___x_3539_, v___x_3555_, v___x_3539_, v___x_3556_);
v___x_3558_ = l_Lean_Syntax_node1(v___x_3531_, v___x_3532_, v___x_3557_);
v___x_3559_ = l_Lean_Elab_Tactic_evalTactic(v___x_3558_, v_a_3507_, v_a_3508_, v_a_3509_, v_a_3510_, v_a_3511_, v_a_3512_, v_a_3513_, v_a_3514_);
return v___x_3559_;
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in_____x2c___x2c___x2c____1___boxed(lean_object* v_x_3560_, lean_object* v_a_3561_, lean_object* v_a_3562_, lean_object* v_a_3563_, lean_object* v_a_3564_, lean_object* v_a_3565_, lean_object* v_a_3566_, lean_object* v_a_3567_, lean_object* v_a_3568_, lean_object* v_a_3569_){
_start:
{
lean_object* v_res_3570_; 
v_res_3570_ = lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__unique__in_____x2c___x2c___x2c____1(v_x_3560_, v_a_3561_, v_a_3562_, v_a_3563_, v_a_3564_, v_a_3565_, v_a_3566_, v_a_3567_, v_a_3568_);
lean_dec(v_a_3568_);
lean_dec_ref(v_a_3567_);
lean_dec(v_a_3566_);
lean_dec_ref(v_a_3565_);
lean_dec(v_a_3564_);
lean_dec_ref(v_a_3563_);
lean_dec(v_a_3562_);
lean_dec_ref(v_a_3561_);
return v_res_3570_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c____1(lean_object* v_x_3619_, lean_object* v_a_3620_, lean_object* v_a_3621_, lean_object* v_a_3622_, lean_object* v_a_3623_, lean_object* v_a_3624_, lean_object* v_a_3625_, lean_object* v_a_3626_, lean_object* v_a_3627_){
_start:
{
lean_object* v___x_3629_; uint8_t v___x_3630_; 
v___x_3629_ = ((lean_object*)(lp_Props2Theories_tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__1));
lean_inc(v_x_3619_);
v___x_3630_ = l_Lean_Syntax_isOfKind(v_x_3619_, v___x_3629_);
if (v___x_3630_ == 0)
{
lean_object* v___x_3631_; 
lean_dec(v_x_3619_);
v___x_3631_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__0___redArg();
return v___x_3631_;
}
else
{
lean_object* v___x_3632_; lean_object* v___x_3633_; lean_object* v___x_3634_; uint8_t v___x_3635_; lean_object* v___x_3636_; 
v___x_3632_ = lean_unsigned_to_nat(1u);
v___x_3633_ = l_Lean_Syntax_getArg(v_x_3619_, v___x_3632_);
v___x_3634_ = lean_box(0);
v___x_3635_ = 0;
v___x_3636_ = l_Lean_Elab_Tactic_elabTerm(v___x_3633_, v___x_3634_, v___x_3635_, v_a_3620_, v_a_3621_, v_a_3622_, v_a_3623_, v_a_3624_, v_a_3625_, v_a_3626_, v_a_3627_);
if (lean_obj_tag(v___x_3636_) == 0)
{
lean_object* v_a_3637_; lean_object* v___x_3638_; lean_object* v___x_3639_; lean_object* v___x_3640_; 
v_a_3637_ = lean_ctor_get(v___x_3636_, 0);
lean_inc(v_a_3637_);
lean_dec_ref(v___x_3636_);
v___x_3638_ = lean_unsigned_to_nat(3u);
v___x_3639_ = l_Lean_Syntax_getArg(v_x_3619_, v___x_3638_);
v___x_3640_ = l_Lean_Elab_Tactic_elabTerm(v___x_3639_, v___x_3634_, v___x_3635_, v_a_3620_, v_a_3621_, v_a_3622_, v_a_3623_, v_a_3624_, v_a_3625_, v_a_3626_, v_a_3627_);
if (lean_obj_tag(v___x_3640_) == 0)
{
lean_object* v_a_3641_; lean_object* v___x_3642_; lean_object* v___x_3643_; lean_object* v___x_3644_; 
v_a_3641_ = lean_ctor_get(v___x_3640_, 0);
lean_inc(v_a_3641_);
lean_dec_ref(v___x_3640_);
v___x_3642_ = lean_unsigned_to_nat(5u);
v___x_3643_ = l_Lean_Syntax_getArg(v_x_3619_, v___x_3642_);
v___x_3644_ = l_Lean_Elab_Tactic_elabTerm(v___x_3643_, v___x_3634_, v___x_3635_, v_a_3620_, v_a_3621_, v_a_3622_, v_a_3623_, v_a_3624_, v_a_3625_, v_a_3626_, v_a_3627_);
if (lean_obj_tag(v___x_3644_) == 0)
{
lean_object* v_a_3645_; lean_object* v___x_3646_; lean_object* v___x_3647_; lean_object* v___x_3648_; 
v_a_3645_ = lean_ctor_get(v___x_3644_, 0);
lean_inc(v_a_3645_);
lean_dec_ref(v___x_3644_);
v___x_3646_ = lean_unsigned_to_nat(7u);
v___x_3647_ = l_Lean_Syntax_getArg(v_x_3619_, v___x_3646_);
v___x_3648_ = l_Lean_Elab_Tactic_elabTerm(v___x_3647_, v___x_3634_, v___x_3635_, v_a_3620_, v_a_3621_, v_a_3622_, v_a_3623_, v_a_3624_, v_a_3625_, v_a_3626_, v_a_3627_);
if (lean_obj_tag(v___x_3648_) == 0)
{
lean_object* v_a_3649_; lean_object* v___x_3650_; lean_object* v___x_3651_; lean_object* v___x_3652_; lean_object* v___x_3653_; lean_object* v___x_3654_; lean_object* v___x_3655_; 
v_a_3649_ = lean_ctor_get(v___x_3648_, 0);
lean_inc(v_a_3649_);
lean_dec_ref(v___x_3648_);
v___x_3650_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___closed__1));
v___x_3651_ = lean_unsigned_to_nat(2u);
v___x_3652_ = lean_mk_empty_array_with_capacity(v___x_3651_);
lean_inc(v_a_3641_);
lean_inc_ref(v___x_3652_);
v___x_3653_ = lean_array_push(v___x_3652_, v_a_3641_);
lean_inc(v_a_3645_);
v___x_3654_ = lean_array_push(v___x_3653_, v_a_3645_);
v___x_3655_ = l_Lean_Meta_mkAppM(v___x_3650_, v___x_3654_, v_a_3624_, v_a_3625_, v_a_3626_, v_a_3627_);
if (lean_obj_tag(v___x_3655_) == 0)
{
lean_object* v_a_3656_; lean_object* v___x_3657_; lean_object* v___x_3658_; lean_object* v___x_3659_; 
v_a_3656_ = lean_ctor_get(v___x_3655_, 0);
lean_inc(v_a_3656_);
lean_dec_ref(v___x_3655_);
lean_inc_ref(v___x_3652_);
v___x_3657_ = lean_array_push(v___x_3652_, v_a_3656_);
v___x_3658_ = lean_array_push(v___x_3657_, v_a_3649_);
v___x_3659_ = l_Lean_Meta_mkAppM(v___x_3650_, v___x_3658_, v_a_3624_, v_a_3625_, v_a_3626_, v_a_3627_);
if (lean_obj_tag(v___x_3659_) == 0)
{
lean_object* v_a_3660_; lean_object* v___x_3661_; 
v_a_3660_ = lean_ctor_get(v___x_3659_, 0);
lean_inc_n(v_a_3660_, 2);
lean_dec_ref(v___x_3659_);
lean_inc(v_a_3627_);
lean_inc_ref(v_a_3626_);
lean_inc(v_a_3625_);
lean_inc_ref(v_a_3624_);
v___x_3661_ = lean_infer_type(v_a_3660_, v_a_3624_, v_a_3625_, v_a_3626_, v_a_3627_);
if (lean_obj_tag(v___x_3661_) == 0)
{
lean_object* v_a_3662_; lean_object* v___x_3663_; lean_object* v___x_3664_; 
v_a_3662_ = lean_ctor_get(v___x_3661_, 0);
lean_inc(v_a_3662_);
lean_dec_ref(v___x_3661_);
v___x_3663_ = lean_box(0);
lean_inc(v_a_3637_);
v___x_3664_ = l_Lean_Meta_kabstract(v_a_3662_, v_a_3637_, v___x_3663_, v_a_3624_, v_a_3625_, v_a_3626_, v_a_3627_);
if (lean_obj_tag(v___x_3664_) == 0)
{
lean_object* v_a_3665_; lean_object* v___x_3666_; lean_object* v___x_3667_; uint8_t v___x_3668_; lean_object* v___x_3669_; 
v_a_3665_ = lean_ctor_get(v___x_3664_, 0);
lean_inc(v_a_3665_);
lean_dec_ref(v___x_3664_);
v___x_3666_ = lean_mk_empty_array_with_capacity(v___x_3632_);
lean_inc(v_a_3637_);
v___x_3667_ = lean_array_push(v___x_3666_, v_a_3637_);
v___x_3668_ = 1;
v___x_3669_ = l_Lean_Meta_mkLambdaFVars(v___x_3667_, v_a_3665_, v___x_3635_, v___x_3630_, v___x_3635_, v___x_3630_, v___x_3668_, v_a_3624_, v_a_3625_, v_a_3626_, v_a_3627_);
if (lean_obj_tag(v___x_3669_) == 0)
{
lean_object* v_a_3670_; lean_object* v___x_3671_; lean_object* v___x_3672_; lean_object* v___x_3673_; lean_object* v___x_3674_; lean_object* v___x_3675_; lean_object* v___x_3676_; lean_object* v___x_3677_; lean_object* v___x_3678_; lean_object* v___x_3679_; lean_object* v___x_3680_; lean_object* v___x_3681_; 
v_a_3670_ = lean_ctor_get(v___x_3669_, 0);
lean_inc(v_a_3670_);
lean_dec_ref(v___x_3669_);
v___x_3671_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___closed__3));
v___x_3672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3672_, 0, v_a_3670_);
lean_inc(v_a_3637_);
v___x_3673_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3673_, 0, v_a_3637_);
v___x_3674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3674_, 0, v_a_3660_);
v___x_3675_ = lean_unsigned_to_nat(4u);
v___x_3676_ = lean_mk_empty_array_with_capacity(v___x_3675_);
lean_dec_ref(v___x_3676_);
v___x_3677_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___closed__4, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___closed__4_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___closed__4);
v___x_3678_ = lean_array_push(v___x_3677_, v___x_3672_);
v___x_3679_ = lean_array_push(v___x_3678_, v___x_3673_);
v___x_3680_ = lean_array_push(v___x_3679_, v___x_3674_);
v___x_3681_ = l_Lean_Meta_mkAppOptM(v___x_3671_, v___x_3680_, v_a_3624_, v_a_3625_, v_a_3626_, v_a_3627_);
if (lean_obj_tag(v___x_3681_) == 0)
{
lean_object* v_a_3682_; lean_object* v___x_3683_; 
v_a_3682_ = lean_ctor_get(v___x_3681_, 0);
lean_inc(v_a_3682_);
lean_dec_ref(v___x_3681_);
lean_inc(v_a_3627_);
lean_inc_ref(v_a_3626_);
lean_inc(v_a_3625_);
lean_inc_ref(v_a_3624_);
v___x_3683_ = lean_infer_type(v_a_3641_, v_a_3624_, v_a_3625_, v_a_3626_, v_a_3627_);
if (lean_obj_tag(v___x_3683_) == 0)
{
lean_object* v_a_3684_; lean_object* v___x_3685_; 
v_a_3684_ = lean_ctor_get(v___x_3683_, 0);
lean_inc(v_a_3684_);
lean_dec_ref(v___x_3683_);
lean_inc(v_a_3627_);
lean_inc_ref(v_a_3626_);
lean_inc(v_a_3625_);
lean_inc_ref(v_a_3624_);
v___x_3685_ = lean_infer_type(v_a_3645_, v_a_3624_, v_a_3625_, v_a_3626_, v_a_3627_);
if (lean_obj_tag(v___x_3685_) == 0)
{
lean_object* v_a_3686_; lean_object* v___x_3687_; 
v_a_3686_ = lean_ctor_get(v___x_3685_, 0);
lean_inc(v_a_3686_);
lean_dec_ref(v___x_3685_);
v___x_3687_ = l_Lean_Meta_kabstract(v_a_3686_, v_a_3637_, v___x_3663_, v_a_3624_, v_a_3625_, v_a_3626_, v_a_3627_);
if (lean_obj_tag(v___x_3687_) == 0)
{
lean_object* v_a_3688_; lean_object* v___x_3689_; 
v_a_3688_ = lean_ctor_get(v___x_3687_, 0);
lean_inc(v_a_3688_);
lean_dec_ref(v___x_3687_);
v___x_3689_ = l_Lean_Meta_mkLambdaFVars(v___x_3667_, v_a_3688_, v___x_3635_, v___x_3630_, v___x_3635_, v___x_3630_, v___x_3668_, v_a_3624_, v_a_3625_, v_a_3626_, v_a_3627_);
lean_dec_ref(v___x_3667_);
if (lean_obj_tag(v___x_3689_) == 0)
{
lean_object* v_a_3690_; lean_object* v___x_3691_; lean_object* v___x_3692_; lean_object* v___x_3693_; lean_object* v___x_3694_; lean_object* v___x_3695_; 
v_a_3690_ = lean_ctor_get(v___x_3689_, 0);
lean_inc(v_a_3690_);
lean_dec_ref(v___x_3689_);
v___x_3691_ = l_Lean_Expr_appArg_x21(v_a_3684_);
lean_dec(v_a_3684_);
v___x_3692_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__exists__uniq__in__1___closed__2));
v___x_3693_ = lean_array_push(v___x_3652_, v_a_3690_);
v___x_3694_ = lean_array_push(v___x_3693_, v___x_3691_);
v___x_3695_ = l_Lean_Meta_mkAppM(v___x_3692_, v___x_3694_, v_a_3624_, v_a_3625_, v_a_3626_, v_a_3627_);
if (lean_obj_tag(v___x_3695_) == 0)
{
lean_object* v_a_3696_; lean_object* v___x_3697_; lean_object* v_h__new_3698_; lean_object* v___x_3699_; lean_object* v___f_3700_; lean_object* v___x_3701_; 
v_a_3696_ = lean_ctor_get(v___x_3695_, 0);
lean_inc(v_a_3696_);
lean_dec_ref(v___x_3695_);
v___x_3697_ = lean_unsigned_to_nat(9u);
v_h__new_3698_ = l_Lean_Syntax_getArg(v_x_3619_, v___x_3697_);
lean_dec(v_x_3619_);
v___x_3699_ = lean_box(v___x_3630_);
v___f_3700_ = lean_alloc_closure((void*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__in___x2c___x2c___x2c____1___lam__0___boxed), 13, 4);
lean_closure_set(v___f_3700_, 0, v_h__new_3698_);
lean_closure_set(v___f_3700_, 1, v_a_3696_);
lean_closure_set(v___f_3700_, 2, v_a_3682_);
lean_closure_set(v___f_3700_, 3, v___x_3699_);
v___x_3701_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_3700_, v_a_3620_, v_a_3621_, v_a_3622_, v_a_3623_, v_a_3624_, v_a_3625_, v_a_3626_, v_a_3627_);
return v___x_3701_;
}
else
{
lean_object* v_a_3702_; lean_object* v___x_3704_; uint8_t v_isShared_3705_; uint8_t v_isSharedCheck_3709_; 
lean_dec(v_a_3682_);
lean_dec(v_x_3619_);
v_a_3702_ = lean_ctor_get(v___x_3695_, 0);
v_isSharedCheck_3709_ = !lean_is_exclusive(v___x_3695_);
if (v_isSharedCheck_3709_ == 0)
{
v___x_3704_ = v___x_3695_;
v_isShared_3705_ = v_isSharedCheck_3709_;
goto v_resetjp_3703_;
}
else
{
lean_inc(v_a_3702_);
lean_dec(v___x_3695_);
v___x_3704_ = lean_box(0);
v_isShared_3705_ = v_isSharedCheck_3709_;
goto v_resetjp_3703_;
}
v_resetjp_3703_:
{
lean_object* v___x_3707_; 
if (v_isShared_3705_ == 0)
{
v___x_3707_ = v___x_3704_;
goto v_reusejp_3706_;
}
else
{
lean_object* v_reuseFailAlloc_3708_; 
v_reuseFailAlloc_3708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3708_, 0, v_a_3702_);
v___x_3707_ = v_reuseFailAlloc_3708_;
goto v_reusejp_3706_;
}
v_reusejp_3706_:
{
return v___x_3707_;
}
}
}
}
else
{
lean_object* v_a_3710_; lean_object* v___x_3712_; uint8_t v_isShared_3713_; uint8_t v_isSharedCheck_3717_; 
lean_dec(v_a_3684_);
lean_dec(v_a_3682_);
lean_dec_ref(v___x_3652_);
lean_dec(v_x_3619_);
v_a_3710_ = lean_ctor_get(v___x_3689_, 0);
v_isSharedCheck_3717_ = !lean_is_exclusive(v___x_3689_);
if (v_isSharedCheck_3717_ == 0)
{
v___x_3712_ = v___x_3689_;
v_isShared_3713_ = v_isSharedCheck_3717_;
goto v_resetjp_3711_;
}
else
{
lean_inc(v_a_3710_);
lean_dec(v___x_3689_);
v___x_3712_ = lean_box(0);
v_isShared_3713_ = v_isSharedCheck_3717_;
goto v_resetjp_3711_;
}
v_resetjp_3711_:
{
lean_object* v___x_3715_; 
if (v_isShared_3713_ == 0)
{
v___x_3715_ = v___x_3712_;
goto v_reusejp_3714_;
}
else
{
lean_object* v_reuseFailAlloc_3716_; 
v_reuseFailAlloc_3716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3716_, 0, v_a_3710_);
v___x_3715_ = v_reuseFailAlloc_3716_;
goto v_reusejp_3714_;
}
v_reusejp_3714_:
{
return v___x_3715_;
}
}
}
}
else
{
lean_object* v_a_3718_; lean_object* v___x_3720_; uint8_t v_isShared_3721_; uint8_t v_isSharedCheck_3725_; 
lean_dec(v_a_3684_);
lean_dec(v_a_3682_);
lean_dec_ref(v___x_3667_);
lean_dec_ref(v___x_3652_);
lean_dec(v_x_3619_);
v_a_3718_ = lean_ctor_get(v___x_3687_, 0);
v_isSharedCheck_3725_ = !lean_is_exclusive(v___x_3687_);
if (v_isSharedCheck_3725_ == 0)
{
v___x_3720_ = v___x_3687_;
v_isShared_3721_ = v_isSharedCheck_3725_;
goto v_resetjp_3719_;
}
else
{
lean_inc(v_a_3718_);
lean_dec(v___x_3687_);
v___x_3720_ = lean_box(0);
v_isShared_3721_ = v_isSharedCheck_3725_;
goto v_resetjp_3719_;
}
v_resetjp_3719_:
{
lean_object* v___x_3723_; 
if (v_isShared_3721_ == 0)
{
v___x_3723_ = v___x_3720_;
goto v_reusejp_3722_;
}
else
{
lean_object* v_reuseFailAlloc_3724_; 
v_reuseFailAlloc_3724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3724_, 0, v_a_3718_);
v___x_3723_ = v_reuseFailAlloc_3724_;
goto v_reusejp_3722_;
}
v_reusejp_3722_:
{
return v___x_3723_;
}
}
}
}
else
{
lean_object* v_a_3726_; lean_object* v___x_3728_; uint8_t v_isShared_3729_; uint8_t v_isSharedCheck_3733_; 
lean_dec(v_a_3684_);
lean_dec(v_a_3682_);
lean_dec_ref(v___x_3667_);
lean_dec_ref(v___x_3652_);
lean_dec(v_a_3637_);
lean_dec(v_x_3619_);
v_a_3726_ = lean_ctor_get(v___x_3685_, 0);
v_isSharedCheck_3733_ = !lean_is_exclusive(v___x_3685_);
if (v_isSharedCheck_3733_ == 0)
{
v___x_3728_ = v___x_3685_;
v_isShared_3729_ = v_isSharedCheck_3733_;
goto v_resetjp_3727_;
}
else
{
lean_inc(v_a_3726_);
lean_dec(v___x_3685_);
v___x_3728_ = lean_box(0);
v_isShared_3729_ = v_isSharedCheck_3733_;
goto v_resetjp_3727_;
}
v_resetjp_3727_:
{
lean_object* v___x_3731_; 
if (v_isShared_3729_ == 0)
{
v___x_3731_ = v___x_3728_;
goto v_reusejp_3730_;
}
else
{
lean_object* v_reuseFailAlloc_3732_; 
v_reuseFailAlloc_3732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3732_, 0, v_a_3726_);
v___x_3731_ = v_reuseFailAlloc_3732_;
goto v_reusejp_3730_;
}
v_reusejp_3730_:
{
return v___x_3731_;
}
}
}
}
else
{
lean_object* v_a_3734_; lean_object* v___x_3736_; uint8_t v_isShared_3737_; uint8_t v_isSharedCheck_3741_; 
lean_dec(v_a_3682_);
lean_dec_ref(v___x_3667_);
lean_dec_ref(v___x_3652_);
lean_dec(v_a_3645_);
lean_dec(v_a_3637_);
lean_dec(v_x_3619_);
v_a_3734_ = lean_ctor_get(v___x_3683_, 0);
v_isSharedCheck_3741_ = !lean_is_exclusive(v___x_3683_);
if (v_isSharedCheck_3741_ == 0)
{
v___x_3736_ = v___x_3683_;
v_isShared_3737_ = v_isSharedCheck_3741_;
goto v_resetjp_3735_;
}
else
{
lean_inc(v_a_3734_);
lean_dec(v___x_3683_);
v___x_3736_ = lean_box(0);
v_isShared_3737_ = v_isSharedCheck_3741_;
goto v_resetjp_3735_;
}
v_resetjp_3735_:
{
lean_object* v___x_3739_; 
if (v_isShared_3737_ == 0)
{
v___x_3739_ = v___x_3736_;
goto v_reusejp_3738_;
}
else
{
lean_object* v_reuseFailAlloc_3740_; 
v_reuseFailAlloc_3740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3740_, 0, v_a_3734_);
v___x_3739_ = v_reuseFailAlloc_3740_;
goto v_reusejp_3738_;
}
v_reusejp_3738_:
{
return v___x_3739_;
}
}
}
}
else
{
lean_object* v_a_3742_; lean_object* v___x_3744_; uint8_t v_isShared_3745_; uint8_t v_isSharedCheck_3749_; 
lean_dec_ref(v___x_3667_);
lean_dec_ref(v___x_3652_);
lean_dec(v_a_3645_);
lean_dec(v_a_3641_);
lean_dec(v_a_3637_);
lean_dec(v_x_3619_);
v_a_3742_ = lean_ctor_get(v___x_3681_, 0);
v_isSharedCheck_3749_ = !lean_is_exclusive(v___x_3681_);
if (v_isSharedCheck_3749_ == 0)
{
v___x_3744_ = v___x_3681_;
v_isShared_3745_ = v_isSharedCheck_3749_;
goto v_resetjp_3743_;
}
else
{
lean_inc(v_a_3742_);
lean_dec(v___x_3681_);
v___x_3744_ = lean_box(0);
v_isShared_3745_ = v_isSharedCheck_3749_;
goto v_resetjp_3743_;
}
v_resetjp_3743_:
{
lean_object* v___x_3747_; 
if (v_isShared_3745_ == 0)
{
v___x_3747_ = v___x_3744_;
goto v_reusejp_3746_;
}
else
{
lean_object* v_reuseFailAlloc_3748_; 
v_reuseFailAlloc_3748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3748_, 0, v_a_3742_);
v___x_3747_ = v_reuseFailAlloc_3748_;
goto v_reusejp_3746_;
}
v_reusejp_3746_:
{
return v___x_3747_;
}
}
}
}
else
{
lean_object* v_a_3750_; lean_object* v___x_3752_; uint8_t v_isShared_3753_; uint8_t v_isSharedCheck_3757_; 
lean_dec_ref(v___x_3667_);
lean_dec(v_a_3660_);
lean_dec_ref(v___x_3652_);
lean_dec(v_a_3645_);
lean_dec(v_a_3641_);
lean_dec(v_a_3637_);
lean_dec(v_x_3619_);
v_a_3750_ = lean_ctor_get(v___x_3669_, 0);
v_isSharedCheck_3757_ = !lean_is_exclusive(v___x_3669_);
if (v_isSharedCheck_3757_ == 0)
{
v___x_3752_ = v___x_3669_;
v_isShared_3753_ = v_isSharedCheck_3757_;
goto v_resetjp_3751_;
}
else
{
lean_inc(v_a_3750_);
lean_dec(v___x_3669_);
v___x_3752_ = lean_box(0);
v_isShared_3753_ = v_isSharedCheck_3757_;
goto v_resetjp_3751_;
}
v_resetjp_3751_:
{
lean_object* v___x_3755_; 
if (v_isShared_3753_ == 0)
{
v___x_3755_ = v___x_3752_;
goto v_reusejp_3754_;
}
else
{
lean_object* v_reuseFailAlloc_3756_; 
v_reuseFailAlloc_3756_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3756_, 0, v_a_3750_);
v___x_3755_ = v_reuseFailAlloc_3756_;
goto v_reusejp_3754_;
}
v_reusejp_3754_:
{
return v___x_3755_;
}
}
}
}
else
{
lean_object* v_a_3758_; lean_object* v___x_3760_; uint8_t v_isShared_3761_; uint8_t v_isSharedCheck_3765_; 
lean_dec(v_a_3660_);
lean_dec_ref(v___x_3652_);
lean_dec(v_a_3645_);
lean_dec(v_a_3641_);
lean_dec(v_a_3637_);
lean_dec(v_x_3619_);
v_a_3758_ = lean_ctor_get(v___x_3664_, 0);
v_isSharedCheck_3765_ = !lean_is_exclusive(v___x_3664_);
if (v_isSharedCheck_3765_ == 0)
{
v___x_3760_ = v___x_3664_;
v_isShared_3761_ = v_isSharedCheck_3765_;
goto v_resetjp_3759_;
}
else
{
lean_inc(v_a_3758_);
lean_dec(v___x_3664_);
v___x_3760_ = lean_box(0);
v_isShared_3761_ = v_isSharedCheck_3765_;
goto v_resetjp_3759_;
}
v_resetjp_3759_:
{
lean_object* v___x_3763_; 
if (v_isShared_3761_ == 0)
{
v___x_3763_ = v___x_3760_;
goto v_reusejp_3762_;
}
else
{
lean_object* v_reuseFailAlloc_3764_; 
v_reuseFailAlloc_3764_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3764_, 0, v_a_3758_);
v___x_3763_ = v_reuseFailAlloc_3764_;
goto v_reusejp_3762_;
}
v_reusejp_3762_:
{
return v___x_3763_;
}
}
}
}
else
{
lean_object* v_a_3766_; lean_object* v___x_3768_; uint8_t v_isShared_3769_; uint8_t v_isSharedCheck_3773_; 
lean_dec(v_a_3660_);
lean_dec_ref(v___x_3652_);
lean_dec(v_a_3645_);
lean_dec(v_a_3641_);
lean_dec(v_a_3637_);
lean_dec(v_x_3619_);
v_a_3766_ = lean_ctor_get(v___x_3661_, 0);
v_isSharedCheck_3773_ = !lean_is_exclusive(v___x_3661_);
if (v_isSharedCheck_3773_ == 0)
{
v___x_3768_ = v___x_3661_;
v_isShared_3769_ = v_isSharedCheck_3773_;
goto v_resetjp_3767_;
}
else
{
lean_inc(v_a_3766_);
lean_dec(v___x_3661_);
v___x_3768_ = lean_box(0);
v_isShared_3769_ = v_isSharedCheck_3773_;
goto v_resetjp_3767_;
}
v_resetjp_3767_:
{
lean_object* v___x_3771_; 
if (v_isShared_3769_ == 0)
{
v___x_3771_ = v___x_3768_;
goto v_reusejp_3770_;
}
else
{
lean_object* v_reuseFailAlloc_3772_; 
v_reuseFailAlloc_3772_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3772_, 0, v_a_3766_);
v___x_3771_ = v_reuseFailAlloc_3772_;
goto v_reusejp_3770_;
}
v_reusejp_3770_:
{
return v___x_3771_;
}
}
}
}
else
{
lean_object* v_a_3774_; lean_object* v___x_3776_; uint8_t v_isShared_3777_; uint8_t v_isSharedCheck_3781_; 
lean_dec_ref(v___x_3652_);
lean_dec(v_a_3645_);
lean_dec(v_a_3641_);
lean_dec(v_a_3637_);
lean_dec(v_x_3619_);
v_a_3774_ = lean_ctor_get(v___x_3659_, 0);
v_isSharedCheck_3781_ = !lean_is_exclusive(v___x_3659_);
if (v_isSharedCheck_3781_ == 0)
{
v___x_3776_ = v___x_3659_;
v_isShared_3777_ = v_isSharedCheck_3781_;
goto v_resetjp_3775_;
}
else
{
lean_inc(v_a_3774_);
lean_dec(v___x_3659_);
v___x_3776_ = lean_box(0);
v_isShared_3777_ = v_isSharedCheck_3781_;
goto v_resetjp_3775_;
}
v_resetjp_3775_:
{
lean_object* v___x_3779_; 
if (v_isShared_3777_ == 0)
{
v___x_3779_ = v___x_3776_;
goto v_reusejp_3778_;
}
else
{
lean_object* v_reuseFailAlloc_3780_; 
v_reuseFailAlloc_3780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3780_, 0, v_a_3774_);
v___x_3779_ = v_reuseFailAlloc_3780_;
goto v_reusejp_3778_;
}
v_reusejp_3778_:
{
return v___x_3779_;
}
}
}
}
else
{
lean_object* v_a_3782_; lean_object* v___x_3784_; uint8_t v_isShared_3785_; uint8_t v_isSharedCheck_3789_; 
lean_dec_ref(v___x_3652_);
lean_dec(v_a_3649_);
lean_dec(v_a_3645_);
lean_dec(v_a_3641_);
lean_dec(v_a_3637_);
lean_dec(v_x_3619_);
v_a_3782_ = lean_ctor_get(v___x_3655_, 0);
v_isSharedCheck_3789_ = !lean_is_exclusive(v___x_3655_);
if (v_isSharedCheck_3789_ == 0)
{
v___x_3784_ = v___x_3655_;
v_isShared_3785_ = v_isSharedCheck_3789_;
goto v_resetjp_3783_;
}
else
{
lean_inc(v_a_3782_);
lean_dec(v___x_3655_);
v___x_3784_ = lean_box(0);
v_isShared_3785_ = v_isSharedCheck_3789_;
goto v_resetjp_3783_;
}
v_resetjp_3783_:
{
lean_object* v___x_3787_; 
if (v_isShared_3785_ == 0)
{
v___x_3787_ = v___x_3784_;
goto v_reusejp_3786_;
}
else
{
lean_object* v_reuseFailAlloc_3788_; 
v_reuseFailAlloc_3788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3788_, 0, v_a_3782_);
v___x_3787_ = v_reuseFailAlloc_3788_;
goto v_reusejp_3786_;
}
v_reusejp_3786_:
{
return v___x_3787_;
}
}
}
}
else
{
lean_object* v_a_3790_; lean_object* v___x_3792_; uint8_t v_isShared_3793_; uint8_t v_isSharedCheck_3797_; 
lean_dec(v_a_3645_);
lean_dec(v_a_3641_);
lean_dec(v_a_3637_);
lean_dec(v_x_3619_);
v_a_3790_ = lean_ctor_get(v___x_3648_, 0);
v_isSharedCheck_3797_ = !lean_is_exclusive(v___x_3648_);
if (v_isSharedCheck_3797_ == 0)
{
v___x_3792_ = v___x_3648_;
v_isShared_3793_ = v_isSharedCheck_3797_;
goto v_resetjp_3791_;
}
else
{
lean_inc(v_a_3790_);
lean_dec(v___x_3648_);
v___x_3792_ = lean_box(0);
v_isShared_3793_ = v_isSharedCheck_3797_;
goto v_resetjp_3791_;
}
v_resetjp_3791_:
{
lean_object* v___x_3795_; 
if (v_isShared_3793_ == 0)
{
v___x_3795_ = v___x_3792_;
goto v_reusejp_3794_;
}
else
{
lean_object* v_reuseFailAlloc_3796_; 
v_reuseFailAlloc_3796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3796_, 0, v_a_3790_);
v___x_3795_ = v_reuseFailAlloc_3796_;
goto v_reusejp_3794_;
}
v_reusejp_3794_:
{
return v___x_3795_;
}
}
}
}
else
{
lean_object* v_a_3798_; lean_object* v___x_3800_; uint8_t v_isShared_3801_; uint8_t v_isSharedCheck_3805_; 
lean_dec(v_a_3641_);
lean_dec(v_a_3637_);
lean_dec(v_x_3619_);
v_a_3798_ = lean_ctor_get(v___x_3644_, 0);
v_isSharedCheck_3805_ = !lean_is_exclusive(v___x_3644_);
if (v_isSharedCheck_3805_ == 0)
{
v___x_3800_ = v___x_3644_;
v_isShared_3801_ = v_isSharedCheck_3805_;
goto v_resetjp_3799_;
}
else
{
lean_inc(v_a_3798_);
lean_dec(v___x_3644_);
v___x_3800_ = lean_box(0);
v_isShared_3801_ = v_isSharedCheck_3805_;
goto v_resetjp_3799_;
}
v_resetjp_3799_:
{
lean_object* v___x_3803_; 
if (v_isShared_3801_ == 0)
{
v___x_3803_ = v___x_3800_;
goto v_reusejp_3802_;
}
else
{
lean_object* v_reuseFailAlloc_3804_; 
v_reuseFailAlloc_3804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3804_, 0, v_a_3798_);
v___x_3803_ = v_reuseFailAlloc_3804_;
goto v_reusejp_3802_;
}
v_reusejp_3802_:
{
return v___x_3803_;
}
}
}
}
else
{
lean_object* v_a_3806_; lean_object* v___x_3808_; uint8_t v_isShared_3809_; uint8_t v_isSharedCheck_3813_; 
lean_dec(v_a_3637_);
lean_dec(v_x_3619_);
v_a_3806_ = lean_ctor_get(v___x_3640_, 0);
v_isSharedCheck_3813_ = !lean_is_exclusive(v___x_3640_);
if (v_isSharedCheck_3813_ == 0)
{
v___x_3808_ = v___x_3640_;
v_isShared_3809_ = v_isSharedCheck_3813_;
goto v_resetjp_3807_;
}
else
{
lean_inc(v_a_3806_);
lean_dec(v___x_3640_);
v___x_3808_ = lean_box(0);
v_isShared_3809_ = v_isSharedCheck_3813_;
goto v_resetjp_3807_;
}
v_resetjp_3807_:
{
lean_object* v___x_3811_; 
if (v_isShared_3809_ == 0)
{
v___x_3811_ = v___x_3808_;
goto v_reusejp_3810_;
}
else
{
lean_object* v_reuseFailAlloc_3812_; 
v_reuseFailAlloc_3812_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3812_, 0, v_a_3806_);
v___x_3811_ = v_reuseFailAlloc_3812_;
goto v_reusejp_3810_;
}
v_reusejp_3810_:
{
return v___x_3811_;
}
}
}
}
else
{
lean_object* v_a_3814_; lean_object* v___x_3816_; uint8_t v_isShared_3817_; uint8_t v_isSharedCheck_3821_; 
lean_dec(v_x_3619_);
v_a_3814_ = lean_ctor_get(v___x_3636_, 0);
v_isSharedCheck_3821_ = !lean_is_exclusive(v___x_3636_);
if (v_isSharedCheck_3821_ == 0)
{
v___x_3816_ = v___x_3636_;
v_isShared_3817_ = v_isSharedCheck_3821_;
goto v_resetjp_3815_;
}
else
{
lean_inc(v_a_3814_);
lean_dec(v___x_3636_);
v___x_3816_ = lean_box(0);
v_isShared_3817_ = v_isSharedCheck_3821_;
goto v_resetjp_3815_;
}
v_resetjp_3815_:
{
lean_object* v___x_3819_; 
if (v_isShared_3817_ == 0)
{
v___x_3819_ = v___x_3816_;
goto v_reusejp_3818_;
}
else
{
lean_object* v_reuseFailAlloc_3820_; 
v_reuseFailAlloc_3820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3820_, 0, v_a_3814_);
v___x_3819_ = v_reuseFailAlloc_3820_;
goto v_reusejp_3818_;
}
v_reusejp_3818_:
{
return v___x_3819_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c____1___boxed(lean_object* v_x_3822_, lean_object* v_a_3823_, lean_object* v_a_3824_, lean_object* v_a_3825_, lean_object* v_a_3826_, lean_object* v_a_3827_, lean_object* v_a_3828_, lean_object* v_a_3829_, lean_object* v_a_3830_, lean_object* v_a_3831_){
_start:
{
lean_object* v_res_3832_; 
v_res_3832_ = lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__intro__exists__unique__in___x2c___x2c___x2c___x2c____1(v_x_3822_, v_a_3823_, v_a_3824_, v_a_3825_, v_a_3826_, v_a_3827_, v_a_3828_, v_a_3829_, v_a_3830_);
lean_dec(v_a_3830_);
lean_dec_ref(v_a_3829_);
lean_dec(v_a_3828_);
lean_dec_ref(v_a_3827_);
lean_dec(v_a_3826_);
lean_dec_ref(v_a_3825_);
lean_dec(v_a_3824_);
lean_dec_ref(v_a_3823_);
return v_res_3832_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__unique__in___x2c___x2c___x2c___x2c____1(lean_object* v_x_3881_, lean_object* v_a_3882_, lean_object* v_a_3883_){
_start:
{
lean_object* v___x_3884_; uint8_t v___x_3885_; 
v___x_3884_ = ((lean_object*)(lp_Props2Theories_tacticElim__exists__unique__in___x2c___x2c___x2c___x2c___00__closed__1));
lean_inc(v_x_3881_);
v___x_3885_ = l_Lean_Syntax_isOfKind(v_x_3881_, v___x_3884_);
if (v___x_3885_ == 0)
{
lean_object* v___x_3886_; lean_object* v___x_3887_; 
lean_dec(v_x_3881_);
v___x_3886_ = lean_box(1);
v___x_3887_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3887_, 0, v___x_3886_);
lean_ctor_set(v___x_3887_, 1, v_a_3883_);
return v___x_3887_;
}
else
{
lean_object* v_quotContext_3888_; lean_object* v_currMacroScope_3889_; lean_object* v_ref_3890_; lean_object* v___x_3891_; lean_object* v___x_3892_; lean_object* v___x_3893_; lean_object* v___x_3894_; lean_object* v___x_3895_; lean_object* v___x_3896_; lean_object* v___x_3897_; lean_object* v___x_3898_; lean_object* v___x_3899_; lean_object* v___x_3900_; uint8_t v___x_3901_; lean_object* v___x_3902_; lean_object* v___x_3903_; lean_object* v___x_3904_; lean_object* v___x_3905_; lean_object* v___x_3906_; lean_object* v___x_3907_; lean_object* v___x_3908_; lean_object* v___x_3909_; lean_object* v___x_3910_; lean_object* v___x_3911_; lean_object* v___x_3912_; lean_object* v___x_3913_; lean_object* v___x_3914_; lean_object* v___x_3915_; lean_object* v___x_3916_; lean_object* v___x_3917_; lean_object* v___x_3918_; lean_object* v___x_3919_; lean_object* v___x_3920_; lean_object* v___x_3921_; lean_object* v___x_3922_; lean_object* v___x_3923_; lean_object* v___x_3924_; lean_object* v___x_3925_; lean_object* v___x_3926_; lean_object* v___x_3927_; lean_object* v___x_3928_; lean_object* v___x_3929_; lean_object* v___x_3930_; lean_object* v___x_3931_; lean_object* v___x_3932_; lean_object* v___x_3933_; lean_object* v___x_3934_; lean_object* v___x_3935_; lean_object* v___x_3936_; lean_object* v___x_3937_; lean_object* v___x_3938_; lean_object* v___x_3939_; lean_object* v___x_3940_; lean_object* v___x_3941_; lean_object* v___x_3942_; lean_object* v___x_3943_; lean_object* v___x_3944_; lean_object* v___x_3945_; lean_object* v___x_3946_; lean_object* v___x_3947_; lean_object* v___x_3948_; lean_object* v___x_3949_; lean_object* v___x_3950_; lean_object* v___x_3951_; lean_object* v___x_3952_; lean_object* v___x_3953_; lean_object* v___x_3954_; lean_object* v___x_3955_; lean_object* v___x_3956_; lean_object* v___x_3957_; lean_object* v___x_3958_; lean_object* v___x_3959_; lean_object* v___x_3960_; lean_object* v___x_3961_; lean_object* v___x_3962_; lean_object* v___x_3963_; lean_object* v___x_3964_; lean_object* v___x_3965_; lean_object* v___x_3966_; lean_object* v___x_3967_; lean_object* v___x_3968_; lean_object* v___x_3969_; lean_object* v___x_3970_; lean_object* v___x_3971_; lean_object* v___x_3972_; lean_object* v___x_3973_; lean_object* v___x_3974_; lean_object* v___x_3975_; lean_object* v___x_3976_; lean_object* v___x_3977_; lean_object* v___x_3978_; lean_object* v___x_3979_; lean_object* v___x_3980_; lean_object* v___x_3981_; lean_object* v___x_3982_; lean_object* v___x_3983_; lean_object* v___x_3984_; lean_object* v___x_3985_; lean_object* v___x_3986_; lean_object* v___x_3987_; lean_object* v___x_3988_; lean_object* v___x_3989_; lean_object* v___x_3990_; lean_object* v___x_3991_; lean_object* v___x_3992_; lean_object* v___x_3993_; lean_object* v___x_3994_; lean_object* v___x_3995_; lean_object* v___x_3996_; lean_object* v___x_3997_; lean_object* v___x_3998_; lean_object* v___x_3999_; lean_object* v___x_4000_; lean_object* v___x_4001_; lean_object* v___x_4002_; lean_object* v___x_4003_; lean_object* v___x_4004_; lean_object* v___x_4005_; lean_object* v___x_4006_; lean_object* v___x_4007_; lean_object* v___x_4008_; lean_object* v___x_4009_; lean_object* v___x_4010_; lean_object* v___x_4011_; lean_object* v___x_4012_; lean_object* v___x_4013_; lean_object* v___x_4014_; lean_object* v___x_4015_; lean_object* v___x_4016_; lean_object* v___x_4017_; lean_object* v___x_4018_; lean_object* v___x_4019_; 
v_quotContext_3888_ = lean_ctor_get(v_a_3882_, 1);
v_currMacroScope_3889_ = lean_ctor_get(v_a_3882_, 2);
v_ref_3890_ = lean_ctor_get(v_a_3882_, 5);
v___x_3891_ = lean_unsigned_to_nat(1u);
v___x_3892_ = l_Lean_Syntax_getArg(v_x_3881_, v___x_3891_);
v___x_3893_ = lean_unsigned_to_nat(3u);
v___x_3894_ = l_Lean_Syntax_getArg(v_x_3881_, v___x_3893_);
v___x_3895_ = lean_unsigned_to_nat(5u);
v___x_3896_ = l_Lean_Syntax_getArg(v_x_3881_, v___x_3895_);
v___x_3897_ = lean_unsigned_to_nat(7u);
v___x_3898_ = l_Lean_Syntax_getArg(v_x_3881_, v___x_3897_);
v___x_3899_ = lean_unsigned_to_nat(9u);
v___x_3900_ = l_Lean_Syntax_getArg(v_x_3881_, v___x_3899_);
lean_dec(v_x_3881_);
v___x_3901_ = 0;
v___x_3902_ = l_Lean_SourceInfo_fromRef(v_ref_3890_, v___x_3901_);
v___x_3903_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__4));
v___x_3904_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__7));
lean_inc_n(v___x_3902_, 59);
v___x_3905_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3905_, 0, v___x_3902_);
lean_ctor_set(v___x_3905_, 1, v___x_3904_);
v___x_3906_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__9));
v___x_3907_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__11));
v___x_3908_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__11));
v___x_3909_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__1));
v___x_3910_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__2));
v___x_3911_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3911_, 0, v___x_3902_);
lean_ctor_set(v___x_3911_, 1, v___x_3910_);
v___x_3912_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__4));
v___x_3913_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19, &lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19);
v___x_3914_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3914_, 0, v___x_3902_);
lean_ctor_set(v___x_3914_, 1, v___x_3908_);
lean_ctor_set(v___x_3914_, 2, v___x_3913_);
lean_inc_ref_n(v___x_3914_, 18);
v___x_3915_ = l_Lean_Syntax_node1(v___x_3902_, v___x_3912_, v___x_3914_);
v___x_3916_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__6));
v___x_3917_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__8));
v___x_3918_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__10));
v___x_3919_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__11));
v___x_3920_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3920_, 0, v___x_3902_);
lean_ctor_set(v___x_3920_, 1, v___x_3919_);
v___x_3921_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__23));
v___x_3922_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3922_, 0, v___x_3902_);
lean_ctor_set(v___x_3922_, 1, v___x_3921_);
lean_inc(v___x_3898_);
lean_inc_ref_n(v___x_3922_, 4);
lean_inc(v___x_3896_);
v___x_3923_ = l_Lean_Syntax_node3(v___x_3902_, v___x_3908_, v___x_3896_, v___x_3922_, v___x_3898_);
v___x_3924_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__12));
v___x_3925_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3925_, 0, v___x_3902_);
lean_ctor_set(v___x_3925_, 1, v___x_3924_);
lean_inc_ref_n(v___x_3925_, 2);
lean_inc_ref_n(v___x_3920_, 2);
v___x_3926_ = l_Lean_Syntax_node3(v___x_3902_, v___x_3918_, v___x_3920_, v___x_3923_, v___x_3925_);
lean_inc(v___x_3900_);
v___x_3927_ = l_Lean_Syntax_node3(v___x_3902_, v___x_3908_, v___x_3926_, v___x_3922_, v___x_3900_);
v___x_3928_ = l_Lean_Syntax_node3(v___x_3902_, v___x_3918_, v___x_3920_, v___x_3927_, v___x_3925_);
v___x_3929_ = l_Lean_Syntax_node3(v___x_3902_, v___x_3908_, v___x_3894_, v___x_3922_, v___x_3928_);
v___x_3930_ = l_Lean_Syntax_node3(v___x_3902_, v___x_3918_, v___x_3920_, v___x_3929_, v___x_3925_);
v___x_3931_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__23));
v___x_3932_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3932_, 0, v___x_3902_);
lean_ctor_set(v___x_3932_, 1, v___x_3931_);
lean_inc_ref_n(v___x_3932_, 3);
v___x_3933_ = l_Lean_Syntax_node5(v___x_3902_, v___x_3917_, v___x_3930_, v___x_3914_, v___x_3914_, v___x_3932_, v___x_3892_);
v___x_3934_ = l_Lean_Syntax_node1(v___x_3902_, v___x_3916_, v___x_3933_);
v___x_3935_ = l_Lean_Syntax_node3(v___x_3902_, v___x_3909_, v___x_3911_, v___x_3915_, v___x_3934_);
v___x_3936_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__6));
v___x_3937_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__7));
v___x_3938_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3938_, 0, v___x_3902_);
lean_ctor_set(v___x_3938_, 1, v___x_3937_);
v___x_3939_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__12));
v___x_3940_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__13));
v___x_3941_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3941_, 0, v___x_3902_);
lean_ctor_set(v___x_3941_, 1, v___x_3939_);
v___x_3942_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__15));
v___x_3943_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__17));
v___x_3944_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__19));
v___x_3945_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__21, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__21_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__21);
v___x_3946_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__22));
lean_inc_n(v_currMacroScope_3889_, 6);
lean_inc_n(v_quotContext_3888_, 6);
v___x_3947_ = l_Lean_addMacroScope(v_quotContext_3888_, v___x_3946_, v_currMacroScope_3889_);
v___x_3948_ = lean_box(0);
v___x_3949_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3949_, 0, v___x_3902_);
lean_ctor_set(v___x_3949_, 1, v___x_3945_);
lean_ctor_set(v___x_3949_, 2, v___x_3947_);
lean_ctor_set(v___x_3949_, 3, v___x_3948_);
v___x_3950_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__25));
v___x_3951_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__26));
v___x_3952_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3952_, 0, v___x_3902_);
lean_ctor_set(v___x_3952_, 1, v___x_3951_);
v___x_3953_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__28));
v___x_3954_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__30));
v___x_3955_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__32));
v___x_3956_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__34, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__34_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__34);
v___x_3957_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__35));
v___x_3958_ = l_Lean_addMacroScope(v_quotContext_3888_, v___x_3957_, v_currMacroScope_3889_);
v___x_3959_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3959_, 0, v___x_3902_);
lean_ctor_set(v___x_3959_, 1, v___x_3956_);
lean_ctor_set(v___x_3959_, 2, v___x_3958_);
lean_ctor_set(v___x_3959_, 3, v___x_3948_);
v___x_3960_ = l_Lean_Syntax_node2(v___x_3902_, v___x_3955_, v___x_3959_, v___x_3914_);
v___x_3961_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__37));
v___x_3962_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__39, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__39_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__39);
v___x_3963_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__40));
v___x_3964_ = l_Lean_addMacroScope(v_quotContext_3888_, v___x_3963_, v_currMacroScope_3889_);
v___x_3965_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__44));
v___x_3966_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3966_, 0, v___x_3902_);
lean_ctor_set(v___x_3966_, 1, v___x_3962_);
lean_ctor_set(v___x_3966_, 2, v___x_3964_);
lean_ctor_set(v___x_3966_, 3, v___x_3965_);
v___x_3967_ = l_Lean_Syntax_node3(v___x_3902_, v___x_3961_, v___x_3932_, v___x_3914_, v___x_3966_);
v___x_3968_ = l_Lean_Syntax_node3(v___x_3902_, v___x_3908_, v___x_3914_, v___x_3914_, v___x_3967_);
v___x_3969_ = l_Lean_Syntax_node2(v___x_3902_, v___x_3954_, v___x_3960_, v___x_3968_);
v___x_3970_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__46, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__46_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__46);
v___x_3971_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__47));
v___x_3972_ = l_Lean_addMacroScope(v_quotContext_3888_, v___x_3971_, v_currMacroScope_3889_);
v___x_3973_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3973_, 0, v___x_3902_);
lean_ctor_set(v___x_3973_, 1, v___x_3970_);
lean_ctor_set(v___x_3973_, 2, v___x_3972_);
lean_ctor_set(v___x_3973_, 3, v___x_3948_);
v___x_3974_ = l_Lean_Syntax_node2(v___x_3902_, v___x_3955_, v___x_3973_, v___x_3914_);
v___x_3975_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__49, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__49_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__49);
v___x_3976_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__50));
v___x_3977_ = l_Lean_addMacroScope(v_quotContext_3888_, v___x_3976_, v_currMacroScope_3889_);
v___x_3978_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__53));
v___x_3979_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3979_, 0, v___x_3902_);
lean_ctor_set(v___x_3979_, 1, v___x_3975_);
lean_ctor_set(v___x_3979_, 2, v___x_3977_);
lean_ctor_set(v___x_3979_, 3, v___x_3978_);
v___x_3980_ = l_Lean_Syntax_node3(v___x_3902_, v___x_3961_, v___x_3932_, v___x_3914_, v___x_3979_);
v___x_3981_ = l_Lean_Syntax_node3(v___x_3902_, v___x_3908_, v___x_3914_, v___x_3914_, v___x_3980_);
lean_inc(v___x_3981_);
v___x_3982_ = l_Lean_Syntax_node2(v___x_3902_, v___x_3954_, v___x_3974_, v___x_3981_);
v___x_3983_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__55, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__55_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__55);
v___x_3984_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__56));
v___x_3985_ = l_Lean_addMacroScope(v_quotContext_3888_, v___x_3984_, v_currMacroScope_3889_);
v___x_3986_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3986_, 0, v___x_3902_);
lean_ctor_set(v___x_3986_, 1, v___x_3983_);
lean_ctor_set(v___x_3986_, 2, v___x_3985_);
lean_ctor_set(v___x_3986_, 3, v___x_3948_);
v___x_3987_ = l_Lean_Syntax_node2(v___x_3902_, v___x_3955_, v___x_3986_, v___x_3914_);
v___x_3988_ = l_Lean_Syntax_node2(v___x_3902_, v___x_3954_, v___x_3987_, v___x_3981_);
v___x_3989_ = l_Lean_Syntax_node5(v___x_3902_, v___x_3908_, v___x_3969_, v___x_3922_, v___x_3982_, v___x_3922_, v___x_3988_);
v___x_3990_ = l_Lean_Syntax_node1(v___x_3902_, v___x_3953_, v___x_3989_);
v___x_3991_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__58));
v___x_3992_ = l_Lean_Syntax_node1(v___x_3902_, v___x_3991_, v___x_3914_);
v___x_3993_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__59));
v___x_3994_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3994_, 0, v___x_3902_);
lean_ctor_set(v___x_3994_, 1, v___x_3993_);
v___x_3995_ = l_Lean_Syntax_node6(v___x_3902_, v___x_3950_, v___x_3952_, v___x_3914_, v___x_3990_, v___x_3992_, v___x_3914_, v___x_3994_);
v___x_3996_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__49));
v___x_3997_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3997_, 0, v___x_3902_);
lean_ctor_set(v___x_3997_, 1, v___x_3996_);
lean_inc_ref(v___x_3997_);
lean_inc_ref(v___x_3905_);
v___x_3998_ = l_Lean_Syntax_node5(v___x_3902_, v___x_3944_, v___x_3905_, v___x_3949_, v___x_3932_, v___x_3995_, v___x_3997_);
v___x_3999_ = l_Lean_Syntax_node1(v___x_3902_, v___x_3943_, v___x_3998_);
v___x_4000_ = l_Lean_Syntax_node1(v___x_3902_, v___x_3908_, v___x_3999_);
v___x_4001_ = l_Lean_Syntax_node1(v___x_3902_, v___x_3942_, v___x_4000_);
v___x_4002_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__61));
v___x_4003_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__62));
v___x_4004_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4004_, 0, v___x_3902_);
lean_ctor_set(v___x_4004_, 1, v___x_4003_);
v___x_4005_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__64));
v___x_4006_ = l_Lean_Syntax_node3(v___x_3902_, v___x_3908_, v___x_3896_, v___x_3898_, v___x_3900_);
v___x_4007_ = l_Lean_Syntax_node1(v___x_3902_, v___x_4005_, v___x_4006_);
v___x_4008_ = l_Lean_Syntax_node2(v___x_3902_, v___x_4002_, v___x_4004_, v___x_4007_);
v___x_4009_ = l_Lean_Syntax_node1(v___x_3902_, v___x_3908_, v___x_4008_);
v___x_4010_ = l_Lean_Syntax_node6(v___x_3902_, v___x_3940_, v___x_3941_, v___x_4001_, v___x_3914_, v___x_3914_, v___x_3914_, v___x_4009_);
v___x_4011_ = l_Lean_Syntax_node1(v___x_3902_, v___x_3908_, v___x_4010_);
v___x_4012_ = l_Lean_Syntax_node1(v___x_3902_, v___x_3907_, v___x_4011_);
v___x_4013_ = l_Lean_Syntax_node1(v___x_3902_, v___x_3906_, v___x_4012_);
v___x_4014_ = l_Lean_Syntax_node2(v___x_3902_, v___x_3936_, v___x_3938_, v___x_4013_);
v___x_4015_ = l_Lean_Syntax_node3(v___x_3902_, v___x_3908_, v___x_3935_, v___x_3914_, v___x_4014_);
v___x_4016_ = l_Lean_Syntax_node1(v___x_3902_, v___x_3907_, v___x_4015_);
v___x_4017_ = l_Lean_Syntax_node1(v___x_3902_, v___x_3906_, v___x_4016_);
v___x_4018_ = l_Lean_Syntax_node3(v___x_3902_, v___x_3903_, v___x_3905_, v___x_4017_, v___x_3997_);
v___x_4019_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4019_, 0, v___x_4018_);
lean_ctor_set(v___x_4019_, 1, v_a_3883_);
return v___x_4019_;
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__unique__in___x2c___x2c___x2c___x2c____1___boxed(lean_object* v_x_4020_, lean_object* v_a_4021_, lean_object* v_a_4022_){
_start:
{
lean_object* v_res_4023_; 
v_res_4023_ = lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__unique__in___x2c___x2c___x2c___x2c____1(v_x_4020_, v_a_4021_, v_a_4022_);
lean_dec_ref(v_a_4021_);
return v_res_4023_;
}
}
static lean_object* _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__unique__in_____x2c____1___closed__1(void){
_start:
{
lean_object* v___x_4049_; lean_object* v___x_4050_; 
v___x_4049_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__unique__in_____x2c____1___closed__0));
v___x_4050_ = l_String_toRawSubstring_x27(v___x_4049_);
return v___x_4050_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__unique__in_____x2c____1(lean_object* v_x_4053_, lean_object* v_a_4054_, lean_object* v_a_4055_, lean_object* v_a_4056_, lean_object* v_a_4057_, lean_object* v_a_4058_, lean_object* v_a_4059_, lean_object* v_a_4060_, lean_object* v_a_4061_){
_start:
{
lean_object* v___x_4063_; uint8_t v___x_4064_; 
v___x_4063_ = ((lean_object*)(lp_Props2Theories_tacticElim__exists__unique__in_____x2c___00__closed__1));
lean_inc(v_x_4053_);
v___x_4064_ = l_Lean_Syntax_isOfKind(v_x_4053_, v___x_4063_);
if (v___x_4064_ == 0)
{
lean_object* v___x_4065_; 
lean_dec(v_x_4053_);
v___x_4065_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__0___redArg();
return v___x_4065_;
}
else
{
lean_object* v_ref_4066_; lean_object* v_quotContext_4067_; lean_object* v_currMacroScope_4068_; lean_object* v___x_4069_; lean_object* v___x_4070_; lean_object* v___x_4071_; lean_object* v___x_4072_; uint8_t v___x_4073_; lean_object* v___x_4074_; lean_object* v___x_4075_; lean_object* v___x_4076_; lean_object* v___x_4077_; lean_object* v___x_4078_; lean_object* v___x_4079_; lean_object* v___x_4080_; lean_object* v___x_4081_; lean_object* v___x_4082_; lean_object* v___x_4083_; lean_object* v___x_4084_; lean_object* v___x_4085_; lean_object* v___x_4086_; lean_object* v___x_4087_; lean_object* v___x_4088_; lean_object* v___x_4089_; lean_object* v___x_4090_; lean_object* v___x_4091_; lean_object* v___x_4092_; lean_object* v___x_4093_; lean_object* v___x_4094_; lean_object* v___x_4095_; lean_object* v___x_4096_; lean_object* v___x_4097_; lean_object* v___x_4098_; lean_object* v___x_4099_; lean_object* v___x_4100_; lean_object* v___x_4101_; lean_object* v___x_4102_; lean_object* v___x_4103_; lean_object* v___x_4104_; lean_object* v___x_4105_; lean_object* v___x_4106_; lean_object* v___x_4107_; lean_object* v___x_4108_; lean_object* v___x_4109_; lean_object* v___x_4110_; lean_object* v___x_4111_; lean_object* v___x_4112_; lean_object* v___x_4113_; lean_object* v___x_4114_; lean_object* v___x_4115_; lean_object* v___x_4116_; lean_object* v___x_4117_; lean_object* v___x_4118_; lean_object* v___x_4119_; lean_object* v___x_4120_; lean_object* v___x_4121_; lean_object* v___x_4122_; lean_object* v___x_4123_; lean_object* v___x_4124_; lean_object* v___x_4125_; lean_object* v___x_4126_; lean_object* v___x_4127_; lean_object* v___x_4128_; lean_object* v___x_4129_; lean_object* v___x_4130_; lean_object* v___x_4131_; lean_object* v___x_4132_; lean_object* v___x_4133_; lean_object* v___x_4134_; lean_object* v___x_4135_; lean_object* v___x_4136_; lean_object* v___x_4137_; lean_object* v___x_4138_; lean_object* v___x_4139_; lean_object* v___x_4140_; lean_object* v___x_4141_; lean_object* v___x_4142_; lean_object* v___x_4143_; lean_object* v___x_4144_; lean_object* v___x_4145_; lean_object* v___x_4146_; lean_object* v___x_4147_; lean_object* v___x_4148_; lean_object* v___x_4149_; lean_object* v___x_4150_; lean_object* v___x_4151_; lean_object* v___x_4152_; lean_object* v___x_4153_; lean_object* v___x_4154_; lean_object* v___x_4155_; 
v_ref_4066_ = lean_ctor_get(v_a_4060_, 5);
v_quotContext_4067_ = lean_ctor_get(v_a_4060_, 10);
v_currMacroScope_4068_ = lean_ctor_get(v_a_4060_, 11);
v___x_4069_ = lean_unsigned_to_nat(1u);
v___x_4070_ = l_Lean_Syntax_getArg(v_x_4053_, v___x_4069_);
v___x_4071_ = lean_unsigned_to_nat(3u);
v___x_4072_ = l_Lean_Syntax_getArg(v_x_4053_, v___x_4071_);
lean_dec(v_x_4053_);
v___x_4073_ = 0;
v___x_4074_ = l_Lean_SourceInfo_fromRef(v_ref_4066_, v___x_4073_);
v___x_4075_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__1));
v___x_4076_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__11));
v___x_4077_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__1));
v___x_4078_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__2));
lean_inc_n(v___x_4074_, 36);
v___x_4079_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4079_, 0, v___x_4074_);
lean_ctor_set(v___x_4079_, 1, v___x_4078_);
v___x_4080_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__4));
v___x_4081_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19, &lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19);
v___x_4082_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4082_, 0, v___x_4074_);
lean_ctor_set(v___x_4082_, 1, v___x_4076_);
lean_ctor_set(v___x_4082_, 2, v___x_4081_);
lean_inc_ref_n(v___x_4082_, 2);
v___x_4083_ = l_Lean_Syntax_node1(v___x_4074_, v___x_4080_, v___x_4082_);
v___x_4084_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__6));
v___x_4085_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__8));
v___x_4086_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__10));
v___x_4087_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__11));
v___x_4088_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4088_, 0, v___x_4074_);
lean_ctor_set(v___x_4088_, 1, v___x_4087_);
v___x_4089_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__1, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__1_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__1);
v___x_4090_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__2));
lean_inc_n(v_currMacroScope_4068_, 5);
lean_inc_n(v_quotContext_4067_, 5);
v___x_4091_ = l_Lean_addMacroScope(v_quotContext_4067_, v___x_4090_, v_currMacroScope_4068_);
v___x_4092_ = lean_box(0);
v___x_4093_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4093_, 0, v___x_4074_);
lean_ctor_set(v___x_4093_, 1, v___x_4089_);
lean_ctor_set(v___x_4093_, 2, v___x_4091_);
lean_ctor_set(v___x_4093_, 3, v___x_4092_);
v___x_4094_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__23));
v___x_4095_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4095_, 0, v___x_4074_);
lean_ctor_set(v___x_4095_, 1, v___x_4094_);
v___x_4096_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__4, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__4_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__4);
v___x_4097_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__5));
v___x_4098_ = l_Lean_addMacroScope(v_quotContext_4067_, v___x_4097_, v_currMacroScope_4068_);
v___x_4099_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4099_, 0, v___x_4074_);
lean_ctor_set(v___x_4099_, 1, v___x_4096_);
lean_ctor_set(v___x_4099_, 2, v___x_4098_);
lean_ctor_set(v___x_4099_, 3, v___x_4092_);
v___x_4100_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__7, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__7_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__7);
v___x_4101_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__8));
v___x_4102_ = l_Lean_addMacroScope(v_quotContext_4067_, v___x_4101_, v_currMacroScope_4068_);
v___x_4103_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4103_, 0, v___x_4074_);
lean_ctor_set(v___x_4103_, 1, v___x_4100_);
lean_ctor_set(v___x_4103_, 2, v___x_4102_);
lean_ctor_set(v___x_4103_, 3, v___x_4092_);
lean_inc_ref_n(v___x_4095_, 2);
lean_inc_ref(v___x_4099_);
v___x_4104_ = l_Lean_Syntax_node3(v___x_4074_, v___x_4076_, v___x_4099_, v___x_4095_, v___x_4103_);
v___x_4105_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__12));
v___x_4106_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4106_, 0, v___x_4074_);
lean_ctor_set(v___x_4106_, 1, v___x_4105_);
lean_inc_ref_n(v___x_4106_, 2);
lean_inc_ref_n(v___x_4088_, 2);
v___x_4107_ = l_Lean_Syntax_node3(v___x_4074_, v___x_4086_, v___x_4088_, v___x_4104_, v___x_4106_);
v___x_4108_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__unique__in_____x2c____1___closed__1, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__unique__in_____x2c____1___closed__1_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__unique__in_____x2c____1___closed__1);
v___x_4109_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__unique__in_____x2c____1___closed__2));
v___x_4110_ = l_Lean_addMacroScope(v_quotContext_4067_, v___x_4109_, v_currMacroScope_4068_);
v___x_4111_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4111_, 0, v___x_4074_);
lean_ctor_set(v___x_4111_, 1, v___x_4108_);
lean_ctor_set(v___x_4111_, 2, v___x_4110_);
lean_ctor_set(v___x_4111_, 3, v___x_4092_);
v___x_4112_ = l_Lean_Syntax_node3(v___x_4074_, v___x_4076_, v___x_4107_, v___x_4095_, v___x_4111_);
v___x_4113_ = l_Lean_Syntax_node3(v___x_4074_, v___x_4086_, v___x_4088_, v___x_4112_, v___x_4106_);
lean_inc_ref(v___x_4093_);
v___x_4114_ = l_Lean_Syntax_node3(v___x_4074_, v___x_4076_, v___x_4093_, v___x_4095_, v___x_4113_);
v___x_4115_ = l_Lean_Syntax_node3(v___x_4074_, v___x_4086_, v___x_4088_, v___x_4114_, v___x_4106_);
v___x_4116_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__23));
v___x_4117_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4117_, 0, v___x_4074_);
lean_ctor_set(v___x_4117_, 1, v___x_4116_);
v___x_4118_ = l_Lean_Syntax_node5(v___x_4074_, v___x_4085_, v___x_4115_, v___x_4082_, v___x_4082_, v___x_4117_, v___x_4070_);
v___x_4119_ = l_Lean_Syntax_node1(v___x_4074_, v___x_4084_, v___x_4118_);
v___x_4120_ = l_Lean_Syntax_node3(v___x_4074_, v___x_4077_, v___x_4079_, v___x_4083_, v___x_4119_);
v___x_4121_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__4));
v___x_4122_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4122_, 0, v___x_4074_);
lean_ctor_set(v___x_4122_, 1, v___x_4121_);
v___x_4123_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__2));
v___x_4124_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__3));
v___x_4125_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4125_, 0, v___x_4074_);
lean_ctor_set(v___x_4125_, 1, v___x_4123_);
v___x_4126_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__4));
v___x_4127_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__6));
v___x_4128_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__7));
v___x_4129_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4129_, 0, v___x_4074_);
lean_ctor_set(v___x_4129_, 1, v___x_4128_);
v___x_4130_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__9));
v___x_4131_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__11, &lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__11_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__11);
v___x_4132_ = lean_box(0);
v___x_4133_ = l_Lean_addMacroScope(v_quotContext_4067_, v___x_4132_, v_currMacroScope_4068_);
v___x_4134_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__46));
v___x_4135_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4135_, 0, v___x_4074_);
lean_ctor_set(v___x_4135_, 1, v___x_4131_);
lean_ctor_set(v___x_4135_, 2, v___x_4133_);
lean_ctor_set(v___x_4135_, 3, v___x_4134_);
v___x_4136_ = l_Lean_Syntax_node1(v___x_4074_, v___x_4130_, v___x_4135_);
v___x_4137_ = l_Lean_Syntax_node2(v___x_4074_, v___x_4127_, v___x_4129_, v___x_4136_);
v___x_4138_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__4));
v___x_4139_ = l_Lean_Syntax_node2(v___x_4074_, v___x_4076_, v___x_4093_, v___x_4099_);
lean_inc(v___x_4072_);
v___x_4140_ = l_Lean_Syntax_node2(v___x_4074_, v___x_4138_, v___x_4072_, v___x_4139_);
v___x_4141_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__49));
v___x_4142_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4142_, 0, v___x_4074_);
lean_ctor_set(v___x_4142_, 1, v___x_4141_);
v___x_4143_ = l_Lean_Syntax_node3(v___x_4074_, v___x_4126_, v___x_4137_, v___x_4140_, v___x_4142_);
v___x_4144_ = l_Lean_Syntax_node2(v___x_4074_, v___x_4124_, v___x_4125_, v___x_4143_);
v___x_4145_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__9));
v___x_4146_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__10));
v___x_4147_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4147_, 0, v___x_4074_);
lean_ctor_set(v___x_4147_, 1, v___x_4145_);
v___x_4148_ = l_Lean_Syntax_node2(v___x_4074_, v___x_4146_, v___x_4147_, v___x_4072_);
v___x_4149_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__11));
v___x_4150_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__12));
v___x_4151_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4151_, 0, v___x_4074_);
lean_ctor_set(v___x_4151_, 1, v___x_4149_);
v___x_4152_ = l_Lean_Syntax_node1(v___x_4074_, v___x_4150_, v___x_4151_);
lean_inc_ref_n(v___x_4122_, 2);
v___x_4153_ = l_Lean_Syntax_node7(v___x_4074_, v___x_4076_, v___x_4120_, v___x_4122_, v___x_4144_, v___x_4122_, v___x_4148_, v___x_4122_, v___x_4152_);
v___x_4154_ = l_Lean_Syntax_node1(v___x_4074_, v___x_4075_, v___x_4153_);
v___x_4155_ = l_Lean_Elab_Tactic_evalTactic(v___x_4154_, v_a_4054_, v_a_4055_, v_a_4056_, v_a_4057_, v_a_4058_, v_a_4059_, v_a_4060_, v_a_4061_);
return v___x_4155_;
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__unique__in_____x2c____1___boxed(lean_object* v_x_4156_, lean_object* v_a_4157_, lean_object* v_a_4158_, lean_object* v_a_4159_, lean_object* v_a_4160_, lean_object* v_a_4161_, lean_object* v_a_4162_, lean_object* v_a_4163_, lean_object* v_a_4164_, lean_object* v_a_4165_){
_start:
{
lean_object* v_res_4166_; 
v_res_4166_ = lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__unique__in_____x2c____1(v_x_4156_, v_a_4157_, v_a_4158_, v_a_4159_, v_a_4160_, v_a_4161_, v_a_4162_, v_a_4163_, v_a_4164_);
lean_dec(v_a_4164_);
lean_dec_ref(v_a_4163_);
lean_dec(v_a_4162_);
lean_dec_ref(v_a_4161_);
lean_dec(v_a_4160_);
lean_dec_ref(v_a_4159_);
lean_dec(v_a_4158_);
lean_dec_ref(v_a_4157_);
return v_res_4166_;
}
}
static lean_object* _init_lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_4200_; lean_object* v___x_4201_; 
v___x_4200_ = ((lean_object*)(lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0___redArg___lam__0___closed__0));
v___x_4201_ = l_Lean_stringToMessageData(v___x_4200_);
return v___x_4201_;
}
}
static lean_object* _init_lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_4203_; lean_object* v___x_4204_; 
v___x_4203_ = ((lean_object*)(lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0___redArg___lam__0___closed__2));
v___x_4204_ = l_Lean_stringToMessageData(v___x_4203_);
return v___x_4204_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0___redArg___lam__0(lean_object* v___x_4205_, lean_object* v___x_4206_, lean_object* v___x_4207_, lean_object* v___x_4208_, lean_object* v___x_4209_, lean_object* v_a_4210_, uint8_t v___x_4211_, uint8_t v___x_4212_, lean_object* v_b_4213_, lean_object* v___y_4214_, lean_object* v___y_4215_, lean_object* v___y_4216_, lean_object* v___y_4217_){
_start:
{
lean_object* v___x_4219_; lean_object* v___x_4220_; 
lean_inc_ref(v_b_4213_);
v___x_4219_ = l_Lean_Expr_app___override(v___x_4205_, v_b_4213_);
lean_inc(v___y_4217_);
lean_inc_ref(v___y_4216_);
lean_inc(v___y_4215_);
lean_inc_ref(v___y_4214_);
v___x_4220_ = lean_whnf(v___x_4219_, v___y_4214_, v___y_4215_, v___y_4216_, v___y_4217_);
if (lean_obj_tag(v___x_4220_) == 0)
{
lean_object* v_a_4221_; lean_object* v___x_4222_; lean_object* v_fst_4223_; lean_object* v_snd_4224_; lean_object* v___x_4226_; uint8_t v_isShared_4227_; uint8_t v_isSharedCheck_4269_; 
v_a_4221_ = lean_ctor_get(v___x_4220_, 0);
lean_inc(v_a_4221_);
lean_dec_ref(v___x_4220_);
v___x_4222_ = l_Lean_Expr_getAppFnArgs(v_a_4221_);
v_fst_4223_ = lean_ctor_get(v___x_4222_, 0);
v_snd_4224_ = lean_ctor_get(v___x_4222_, 1);
v_isSharedCheck_4269_ = !lean_is_exclusive(v___x_4222_);
if (v_isSharedCheck_4269_ == 0)
{
v___x_4226_ = v___x_4222_;
v_isShared_4227_ = v_isSharedCheck_4269_;
goto v_resetjp_4225_;
}
else
{
lean_inc(v_snd_4224_);
lean_inc(v_fst_4223_);
lean_dec(v___x_4222_);
v___x_4226_ = lean_box(0);
v_isShared_4227_ = v_isSharedCheck_4269_;
goto v_resetjp_4225_;
}
v_resetjp_4225_:
{
lean_object* v___x_4235_; uint8_t v___x_4236_; 
v___x_4235_ = ((lean_object*)(lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1_spec__0___redArg___lam__0___closed__2));
v___x_4236_ = lean_name_eq(v_fst_4223_, v___x_4235_);
if (v___x_4236_ == 0)
{
lean_dec(v_snd_4224_);
lean_dec_ref(v_b_4213_);
lean_dec_ref(v_a_4210_);
goto v___jp_4228_;
}
else
{
lean_object* v___x_4237_; uint8_t v___x_4238_; 
v___x_4237_ = lean_array_get_size(v_snd_4224_);
v___x_4238_ = lean_nat_dec_eq(v___x_4237_, v___x_4206_);
if (v___x_4238_ == 0)
{
lean_dec(v_snd_4224_);
lean_dec_ref(v_b_4213_);
lean_dec_ref(v_a_4210_);
goto v___jp_4228_;
}
else
{
lean_object* v___x_4239_; lean_object* v___x_4240_; 
lean_del_object(v___x_4226_);
lean_dec(v_fst_4223_);
v___x_4239_ = lean_array_get(v___x_4207_, v_snd_4224_, v___x_4208_);
lean_dec(v_snd_4224_);
lean_inc(v___y_4217_);
lean_inc_ref(v___y_4216_);
lean_inc(v___y_4215_);
lean_inc_ref(v___y_4214_);
v___x_4240_ = lean_whnf(v___x_4239_, v___y_4214_, v___y_4215_, v___y_4216_, v___y_4217_);
if (lean_obj_tag(v___x_4240_) == 0)
{
lean_object* v_a_4241_; lean_object* v___x_4242_; lean_object* v_fst_4243_; lean_object* v_snd_4244_; lean_object* v___x_4246_; uint8_t v_isShared_4247_; uint8_t v_isSharedCheck_4268_; 
v_a_4241_ = lean_ctor_get(v___x_4240_, 0);
lean_inc(v_a_4241_);
lean_dec_ref(v___x_4240_);
v___x_4242_ = l_Lean_Expr_getAppFnArgs(v_a_4241_);
v_fst_4243_ = lean_ctor_get(v___x_4242_, 0);
v_snd_4244_ = lean_ctor_get(v___x_4242_, 1);
v_isSharedCheck_4268_ = !lean_is_exclusive(v___x_4242_);
if (v_isSharedCheck_4268_ == 0)
{
v___x_4246_ = v___x_4242_;
v_isShared_4247_ = v_isSharedCheck_4268_;
goto v_resetjp_4245_;
}
else
{
lean_inc(v_snd_4244_);
lean_inc(v_fst_4243_);
lean_dec(v___x_4242_);
v___x_4246_ = lean_box(0);
v_isShared_4247_ = v_isSharedCheck_4268_;
goto v_resetjp_4245_;
}
v_resetjp_4245_:
{
uint8_t v___x_4255_; 
v___x_4255_ = lean_name_eq(v_fst_4243_, v___x_4235_);
if (v___x_4255_ == 0)
{
lean_dec(v_snd_4244_);
lean_dec_ref(v_b_4213_);
lean_dec_ref(v_a_4210_);
goto v___jp_4248_;
}
else
{
lean_object* v___x_4256_; uint8_t v___x_4257_; 
v___x_4256_ = lean_array_get_size(v_snd_4244_);
v___x_4257_ = lean_nat_dec_eq(v___x_4256_, v___x_4206_);
if (v___x_4257_ == 0)
{
lean_dec(v_snd_4244_);
lean_dec_ref(v_b_4213_);
lean_dec_ref(v_a_4210_);
goto v___jp_4248_;
}
else
{
lean_object* v___x_4258_; lean_object* v___x_4259_; 
lean_del_object(v___x_4246_);
lean_dec(v_fst_4243_);
v___x_4258_ = lean_array_get_borrowed(v___x_4207_, v_snd_4244_, v___x_4209_);
lean_inc(v___x_4258_);
v___x_4259_ = l_Lean_mkArrow(v___x_4258_, v_a_4210_, v___y_4216_, v___y_4217_);
if (lean_obj_tag(v___x_4259_) == 0)
{
lean_object* v_a_4260_; lean_object* v___x_4261_; lean_object* v___x_4262_; 
v_a_4260_ = lean_ctor_get(v___x_4259_, 0);
lean_inc(v_a_4260_);
lean_dec_ref(v___x_4259_);
v___x_4261_ = lean_array_get(v___x_4207_, v_snd_4244_, v___x_4208_);
lean_dec(v_snd_4244_);
v___x_4262_ = l_Lean_mkArrow(v___x_4261_, v_a_4260_, v___y_4216_, v___y_4217_);
if (lean_obj_tag(v___x_4262_) == 0)
{
lean_object* v_a_4263_; lean_object* v___x_4264_; lean_object* v___x_4265_; uint8_t v___x_4266_; lean_object* v___x_4267_; 
v_a_4263_ = lean_ctor_get(v___x_4262_, 0);
lean_inc(v_a_4263_);
lean_dec_ref(v___x_4262_);
v___x_4264_ = lean_mk_empty_array_with_capacity(v___x_4209_);
v___x_4265_ = lean_array_push(v___x_4264_, v_b_4213_);
v___x_4266_ = 1;
v___x_4267_ = l_Lean_Meta_mkForallFVars(v___x_4265_, v_a_4263_, v___x_4211_, v___x_4212_, v___x_4212_, v___x_4266_, v___y_4214_, v___y_4215_, v___y_4216_, v___y_4217_);
lean_dec_ref(v___x_4265_);
return v___x_4267_;
}
else
{
lean_dec_ref(v_b_4213_);
return v___x_4262_;
}
}
else
{
lean_dec(v_snd_4244_);
lean_dec_ref(v_b_4213_);
return v___x_4259_;
}
}
}
v___jp_4248_:
{
lean_object* v___x_4249_; lean_object* v___x_4250_; lean_object* v___x_4252_; 
v___x_4249_ = lean_obj_once(&lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0___redArg___lam__0___closed__3, &lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0___redArg___lam__0___closed__3_once, _init_lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0___redArg___lam__0___closed__3);
v___x_4250_ = l_Lean_MessageData_ofName(v_fst_4243_);
if (v_isShared_4247_ == 0)
{
lean_ctor_set_tag(v___x_4246_, 7);
lean_ctor_set(v___x_4246_, 1, v___x_4250_);
lean_ctor_set(v___x_4246_, 0, v___x_4249_);
v___x_4252_ = v___x_4246_;
goto v_reusejp_4251_;
}
else
{
lean_object* v_reuseFailAlloc_4254_; 
v_reuseFailAlloc_4254_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4254_, 0, v___x_4249_);
lean_ctor_set(v_reuseFailAlloc_4254_, 1, v___x_4250_);
v___x_4252_ = v_reuseFailAlloc_4254_;
goto v_reusejp_4251_;
}
v_reusejp_4251_:
{
lean_object* v___x_4253_; 
v___x_4253_ = l_Lean_throwError___at___00Lean_Elab_Tactic_elabNativeDecideCore_spec__0___redArg(v___x_4252_, v___y_4214_, v___y_4215_, v___y_4216_, v___y_4217_);
return v___x_4253_;
}
}
}
}
else
{
lean_dec_ref(v_b_4213_);
lean_dec_ref(v_a_4210_);
return v___x_4240_;
}
}
}
v___jp_4228_:
{
lean_object* v___x_4229_; lean_object* v___x_4230_; lean_object* v___x_4232_; 
v___x_4229_ = lean_obj_once(&lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0___redArg___lam__0___closed__1, &lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0___redArg___lam__0___closed__1_once, _init_lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0___redArg___lam__0___closed__1);
v___x_4230_ = l_Lean_MessageData_ofName(v_fst_4223_);
if (v_isShared_4227_ == 0)
{
lean_ctor_set_tag(v___x_4226_, 7);
lean_ctor_set(v___x_4226_, 1, v___x_4230_);
lean_ctor_set(v___x_4226_, 0, v___x_4229_);
v___x_4232_ = v___x_4226_;
goto v_reusejp_4231_;
}
else
{
lean_object* v_reuseFailAlloc_4234_; 
v_reuseFailAlloc_4234_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4234_, 0, v___x_4229_);
lean_ctor_set(v_reuseFailAlloc_4234_, 1, v___x_4230_);
v___x_4232_ = v_reuseFailAlloc_4234_;
goto v_reusejp_4231_;
}
v_reusejp_4231_:
{
lean_object* v___x_4233_; 
v___x_4233_ = l_Lean_throwError___at___00Lean_Elab_Tactic_elabNativeDecideCore_spec__0___redArg(v___x_4232_, v___y_4214_, v___y_4215_, v___y_4216_, v___y_4217_);
return v___x_4233_;
}
}
}
}
else
{
lean_dec_ref(v_b_4213_);
lean_dec_ref(v_a_4210_);
return v___x_4220_;
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0___redArg___lam__0___boxed(lean_object* v___x_4270_, lean_object* v___x_4271_, lean_object* v___x_4272_, lean_object* v___x_4273_, lean_object* v___x_4274_, lean_object* v_a_4275_, lean_object* v___x_4276_, lean_object* v___x_4277_, lean_object* v_b_4278_, lean_object* v___y_4279_, lean_object* v___y_4280_, lean_object* v___y_4281_, lean_object* v___y_4282_, lean_object* v___y_4283_){
_start:
{
uint8_t v___x_25957__boxed_4284_; uint8_t v___x_25958__boxed_4285_; lean_object* v_res_4286_; 
v___x_25957__boxed_4284_ = lean_unbox(v___x_4276_);
v___x_25958__boxed_4285_ = lean_unbox(v___x_4277_);
v_res_4286_ = lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0___redArg___lam__0(v___x_4270_, v___x_4271_, v___x_4272_, v___x_4273_, v___x_4274_, v_a_4275_, v___x_25957__boxed_4284_, v___x_25958__boxed_4285_, v_b_4278_, v___y_4279_, v___y_4280_, v___y_4281_, v___y_4282_);
lean_dec(v___y_4282_);
lean_dec_ref(v___y_4281_);
lean_dec(v___y_4280_);
lean_dec_ref(v___y_4279_);
lean_dec(v___x_4274_);
lean_dec(v___x_4273_);
lean_dec_ref(v___x_4272_);
lean_dec(v___x_4271_);
return v_res_4286_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0___redArg(lean_object* v___x_4287_, lean_object* v_a_4288_, lean_object* v___x_4289_, lean_object* v_name_4290_, uint8_t v_bi_4291_, lean_object* v_type_4292_, uint8_t v_kind_4293_, lean_object* v___y_4294_, lean_object* v___y_4295_, lean_object* v___y_4296_, lean_object* v___y_4297_){
_start:
{
lean_object* v___x_4299_; lean_object* v___x_4300_; lean_object* v___x_4301_; lean_object* v___x_4302_; uint8_t v___x_4303_; uint8_t v___x_4304_; lean_object* v___x_4305_; lean_object* v___x_4306_; lean_object* v___f_4307_; lean_object* v___x_4308_; 
v___x_4299_ = lean_unsigned_to_nat(2u);
v___x_4300_ = l_Lean_instInhabitedExpr;
v___x_4301_ = lean_unsigned_to_nat(0u);
v___x_4302_ = lean_unsigned_to_nat(1u);
v___x_4303_ = 0;
v___x_4304_ = lean_nat_dec_eq(v___x_4289_, v___x_4299_);
v___x_4305_ = lean_box(v___x_4303_);
v___x_4306_ = lean_box(v___x_4304_);
v___f_4307_ = lean_alloc_closure((void*)(lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0___redArg___lam__0___boxed), 14, 8);
lean_closure_set(v___f_4307_, 0, v___x_4287_);
lean_closure_set(v___f_4307_, 1, v___x_4299_);
lean_closure_set(v___f_4307_, 2, v___x_4300_);
lean_closure_set(v___f_4307_, 3, v___x_4301_);
lean_closure_set(v___f_4307_, 4, v___x_4302_);
lean_closure_set(v___f_4307_, 5, v_a_4288_);
lean_closure_set(v___f_4307_, 6, v___x_4305_);
lean_closure_set(v___f_4307_, 7, v___x_4306_);
v___x_4308_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp___redArg(v_name_4290_, v_bi_4291_, v_type_4292_, v___f_4307_, v_kind_4293_, v___y_4294_, v___y_4295_, v___y_4296_, v___y_4297_);
if (lean_obj_tag(v___x_4308_) == 0)
{
return v___x_4308_;
}
else
{
lean_object* v_a_4309_; lean_object* v___x_4311_; uint8_t v_isShared_4312_; uint8_t v_isSharedCheck_4316_; 
v_a_4309_ = lean_ctor_get(v___x_4308_, 0);
v_isSharedCheck_4316_ = !lean_is_exclusive(v___x_4308_);
if (v_isSharedCheck_4316_ == 0)
{
v___x_4311_ = v___x_4308_;
v_isShared_4312_ = v_isSharedCheck_4316_;
goto v_resetjp_4310_;
}
else
{
lean_inc(v_a_4309_);
lean_dec(v___x_4308_);
v___x_4311_ = lean_box(0);
v_isShared_4312_ = v_isSharedCheck_4316_;
goto v_resetjp_4310_;
}
v_resetjp_4310_:
{
lean_object* v___x_4314_; 
if (v_isShared_4312_ == 0)
{
v___x_4314_ = v___x_4311_;
goto v_reusejp_4313_;
}
else
{
lean_object* v_reuseFailAlloc_4315_; 
v_reuseFailAlloc_4315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4315_, 0, v_a_4309_);
v___x_4314_ = v_reuseFailAlloc_4315_;
goto v_reusejp_4313_;
}
v_reusejp_4313_:
{
return v___x_4314_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0___redArg___boxed(lean_object* v___x_4317_, lean_object* v_a_4318_, lean_object* v___x_4319_, lean_object* v_name_4320_, lean_object* v_bi_4321_, lean_object* v_type_4322_, lean_object* v_kind_4323_, lean_object* v___y_4324_, lean_object* v___y_4325_, lean_object* v___y_4326_, lean_object* v___y_4327_, lean_object* v___y_4328_){
_start:
{
uint8_t v_bi_boxed_4329_; uint8_t v_kind_boxed_4330_; lean_object* v_res_4331_; 
v_bi_boxed_4329_ = lean_unbox(v_bi_4321_);
v_kind_boxed_4330_ = lean_unbox(v_kind_4323_);
v_res_4331_ = lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0___redArg(v___x_4317_, v_a_4318_, v___x_4319_, v_name_4320_, v_bi_boxed_4329_, v_type_4322_, v_kind_boxed_4330_, v___y_4324_, v___y_4325_, v___y_4326_, v___y_4327_);
lean_dec(v___y_4327_);
lean_dec_ref(v___y_4326_);
lean_dec(v___y_4325_);
lean_dec_ref(v___y_4324_);
lean_dec(v___x_4319_);
return v_res_4331_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0(lean_object* v___x_4332_, lean_object* v_a_4333_, lean_object* v___x_4334_, lean_object* v_name_4335_, uint8_t v_bi_4336_, lean_object* v_type_4337_, uint8_t v_kind_4338_, lean_object* v___y_4339_, lean_object* v___y_4340_, lean_object* v___y_4341_, lean_object* v___y_4342_, lean_object* v___y_4343_, lean_object* v___y_4344_, lean_object* v___y_4345_, lean_object* v___y_4346_){
_start:
{
lean_object* v___x_4348_; 
v___x_4348_ = lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0___redArg(v___x_4332_, v_a_4333_, v___x_4334_, v_name_4335_, v_bi_4336_, v_type_4337_, v_kind_4338_, v___y_4343_, v___y_4344_, v___y_4345_, v___y_4346_);
return v___x_4348_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0___boxed(lean_object* v___x_4349_, lean_object* v_a_4350_, lean_object* v___x_4351_, lean_object* v_name_4352_, lean_object* v_bi_4353_, lean_object* v_type_4354_, lean_object* v_kind_4355_, lean_object* v___y_4356_, lean_object* v___y_4357_, lean_object* v___y_4358_, lean_object* v___y_4359_, lean_object* v___y_4360_, lean_object* v___y_4361_, lean_object* v___y_4362_, lean_object* v___y_4363_, lean_object* v___y_4364_){
_start:
{
uint8_t v_bi_boxed_4365_; uint8_t v_kind_boxed_4366_; lean_object* v_res_4367_; 
v_bi_boxed_4365_ = lean_unbox(v_bi_4353_);
v_kind_boxed_4366_ = lean_unbox(v_kind_4355_);
v_res_4367_ = lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0(v___x_4349_, v_a_4350_, v___x_4351_, v_name_4352_, v_bi_boxed_4365_, v_type_4354_, v_kind_boxed_4366_, v___y_4356_, v___y_4357_, v___y_4358_, v___y_4359_, v___y_4360_, v___y_4361_, v___y_4362_, v___y_4363_);
lean_dec(v___y_4363_);
lean_dec_ref(v___y_4362_);
lean_dec(v___y_4361_);
lean_dec_ref(v___y_4360_);
lean_dec(v___y_4359_);
lean_dec_ref(v___y_4358_);
lean_dec(v___y_4357_);
lean_dec_ref(v___y_4356_);
lean_dec(v___x_4351_);
return v_res_4367_;
}
}
static lean_object* _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1___closed__1(void){
_start:
{
lean_object* v___x_4369_; lean_object* v___x_4370_; 
v___x_4369_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1___closed__0));
v___x_4370_ = l_Lean_stringToMessageData(v___x_4369_);
return v___x_4370_;
}
}
static lean_object* _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1___closed__3(void){
_start:
{
lean_object* v___x_4372_; lean_object* v___x_4373_; 
v___x_4372_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1___closed__2));
v___x_4373_ = l_String_toRawSubstring_x27(v___x_4372_);
return v___x_4373_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1(lean_object* v_x_4376_, lean_object* v_a_4377_, lean_object* v_a_4378_, lean_object* v_a_4379_, lean_object* v_a_4380_, lean_object* v_a_4381_, lean_object* v_a_4382_, lean_object* v_a_4383_, lean_object* v_a_4384_){
_start:
{
lean_object* v___x_4386_; uint8_t v___x_4387_; 
v___x_4386_ = ((lean_object*)(lp_Props2Theories_tactic__elim__exists__unique__in___x2c___x2c___00__closed__1));
lean_inc(v_x_4376_);
v___x_4387_ = l_Lean_Syntax_isOfKind(v_x_4376_, v___x_4386_);
if (v___x_4387_ == 0)
{
lean_object* v___x_4388_; 
lean_dec(v_x_4376_);
v___x_4388_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__cancel__once__1_spec__0___redArg();
return v___x_4388_;
}
else
{
lean_object* v___x_4389_; lean_object* v___x_4390_; lean_object* v___x_4391_; uint8_t v___x_4392_; lean_object* v___x_4393_; 
v___x_4389_ = lean_unsigned_to_nat(1u);
v___x_4390_ = l_Lean_Syntax_getArg(v_x_4376_, v___x_4389_);
v___x_4391_ = lean_box(0);
v___x_4392_ = 0;
lean_inc(v___x_4390_);
v___x_4393_ = l_Lean_Elab_Tactic_elabTerm(v___x_4390_, v___x_4391_, v___x_4392_, v_a_4377_, v_a_4378_, v_a_4379_, v_a_4380_, v_a_4381_, v_a_4382_, v_a_4383_, v_a_4384_);
if (lean_obj_tag(v___x_4393_) == 0)
{
lean_object* v_a_4394_; lean_object* v___x_4395_; 
v_a_4394_ = lean_ctor_get(v___x_4393_, 0);
lean_inc_n(v_a_4394_, 2);
lean_dec_ref(v___x_4393_);
lean_inc(v_a_4384_);
lean_inc_ref(v_a_4383_);
lean_inc(v_a_4382_);
lean_inc_ref(v_a_4381_);
v___x_4395_ = lean_infer_type(v_a_4394_, v_a_4381_, v_a_4382_, v_a_4383_, v_a_4384_);
if (lean_obj_tag(v___x_4395_) == 0)
{
lean_object* v_a_4396_; lean_object* v___x_4397_; 
v_a_4396_ = lean_ctor_get(v___x_4395_, 0);
lean_inc(v_a_4396_);
lean_dec_ref(v___x_4395_);
lean_inc(v_a_4384_);
lean_inc_ref(v_a_4383_);
lean_inc(v_a_4382_);
lean_inc_ref(v_a_4381_);
v___x_4397_ = lean_whnf(v_a_4396_, v_a_4381_, v_a_4382_, v_a_4383_, v_a_4384_);
if (lean_obj_tag(v___x_4397_) == 0)
{
lean_object* v_a_4398_; lean_object* v___x_4406_; lean_object* v_fst_4407_; lean_object* v_snd_4408_; lean_object* v___x_4410_; uint8_t v_isShared_4411_; uint8_t v_isSharedCheck_4735_; 
v_a_4398_ = lean_ctor_get(v___x_4397_, 0);
lean_inc(v_a_4398_);
lean_dec_ref(v___x_4397_);
v___x_4406_ = l_Lean_Expr_getAppFnArgs(v_a_4398_);
v_fst_4407_ = lean_ctor_get(v___x_4406_, 0);
v_snd_4408_ = lean_ctor_get(v___x_4406_, 1);
v_isSharedCheck_4735_ = !lean_is_exclusive(v___x_4406_);
if (v_isSharedCheck_4735_ == 0)
{
v___x_4410_ = v___x_4406_;
v_isShared_4411_ = v_isSharedCheck_4735_;
goto v_resetjp_4409_;
}
else
{
lean_inc(v_snd_4408_);
lean_inc(v_fst_4407_);
lean_dec(v___x_4406_);
v___x_4410_ = lean_box(0);
v_isShared_4411_ = v_isSharedCheck_4735_;
goto v_resetjp_4409_;
}
v___jp_4399_:
{
lean_object* v___x_4400_; lean_object* v___x_4401_; lean_object* v___x_4402_; lean_object* v___x_4403_; lean_object* v___x_4404_; lean_object* v___x_4405_; 
v___x_4400_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__1, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__1_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__1);
v___x_4401_ = l_Lean_MessageData_ofSyntax(v___x_4390_);
v___x_4402_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4402_, 0, v___x_4400_);
lean_ctor_set(v___x_4402_, 1, v___x_4401_);
v___x_4403_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1___closed__1, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1___closed__1_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1___closed__1);
v___x_4404_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4404_, 0, v___x_4402_);
lean_ctor_set(v___x_4404_, 1, v___x_4403_);
v___x_4405_ = l_Lean_throwError___at___00Lean_Elab_Tactic_elabNativeDecideCore_spec__0___redArg(v___x_4404_, v_a_4381_, v_a_4382_, v_a_4383_, v_a_4384_);
return v___x_4405_;
}
v_resetjp_4409_:
{
lean_object* v___x_4412_; uint8_t v___x_4413_; 
v___x_4412_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__4));
v___x_4413_ = lean_name_eq(v_fst_4407_, v___x_4412_);
lean_dec(v_fst_4407_);
if (v___x_4413_ == 0)
{
lean_del_object(v___x_4410_);
lean_dec(v_snd_4408_);
lean_dec(v_a_4394_);
lean_dec(v_x_4376_);
goto v___jp_4399_;
}
else
{
lean_object* v___x_4414_; lean_object* v___x_4415_; uint8_t v___x_4416_; 
v___x_4414_ = lean_unsigned_to_nat(2u);
v___x_4415_ = lean_array_get_size(v_snd_4408_);
v___x_4416_ = lean_nat_dec_eq(v___x_4415_, v___x_4414_);
if (v___x_4416_ == 0)
{
lean_del_object(v___x_4410_);
lean_dec(v_snd_4408_);
lean_dec(v_a_4394_);
lean_dec(v_x_4376_);
goto v___jp_4399_;
}
else
{
lean_object* v___x_4417_; lean_object* v___x_4418_; lean_object* v___x_4419_; 
v___x_4417_ = lean_unsigned_to_nat(3u);
v___x_4418_ = l_Lean_Syntax_getArg(v_x_4376_, v___x_4417_);
v___x_4419_ = l_Lean_Elab_Tactic_elabTerm(v___x_4418_, v___x_4391_, v___x_4392_, v_a_4377_, v_a_4378_, v_a_4379_, v_a_4380_, v_a_4381_, v_a_4382_, v_a_4383_, v_a_4384_);
if (lean_obj_tag(v___x_4419_) == 0)
{
lean_object* v_a_4420_; lean_object* v___x_4421_; lean_object* v___x_4422_; lean_object* v___x_4423_; 
v_a_4420_ = lean_ctor_get(v___x_4419_, 0);
lean_inc(v_a_4420_);
lean_dec_ref(v___x_4419_);
v___x_4421_ = l_Lean_instInhabitedExpr;
v___x_4422_ = lean_array_get(v___x_4421_, v_snd_4408_, v___x_4389_);
lean_dec(v_snd_4408_);
lean_inc(v_a_4384_);
lean_inc_ref(v_a_4383_);
lean_inc(v_a_4382_);
lean_inc_ref(v_a_4381_);
lean_inc(v___x_4422_);
v___x_4423_ = lean_infer_type(v___x_4422_, v_a_4381_, v_a_4382_, v_a_4383_, v_a_4384_);
if (lean_obj_tag(v___x_4423_) == 0)
{
lean_object* v_a_4424_; lean_object* v___x_4425_; lean_object* v___x_4426_; uint8_t v___x_4427_; uint8_t v___x_4428_; lean_object* v___x_4429_; 
v_a_4424_ = lean_ctor_get(v___x_4423_, 0);
lean_inc(v_a_4424_);
lean_dec_ref(v___x_4423_);
v___x_4425_ = l_Lean_Expr_bindingDomain_x21(v_a_4424_);
lean_dec(v_a_4424_);
v___x_4426_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__6));
v___x_4427_ = 0;
v___x_4428_ = 0;
lean_inc(v_a_4420_);
v___x_4429_ = lp_Props2Theories_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___at___00__aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1_spec__0___redArg(v___x_4422_, v_a_4420_, v___x_4415_, v___x_4426_, v___x_4427_, v___x_4425_, v___x_4428_, v_a_4381_, v_a_4382_, v_a_4383_, v_a_4384_);
if (lean_obj_tag(v___x_4429_) == 0)
{
lean_object* v_a_4430_; lean_object* v___x_4431_; 
v_a_4430_ = lean_ctor_get(v___x_4429_, 0);
lean_inc(v_a_4430_);
lean_dec_ref(v___x_4429_);
v___x_4431_ = l_Lean_mkArrow(v_a_4430_, v_a_4420_, v_a_4383_, v_a_4384_);
if (lean_obj_tag(v___x_4431_) == 0)
{
lean_object* v_a_4432_; lean_object* v___x_4433_; 
v_a_4432_ = lean_ctor_get(v___x_4431_, 0);
lean_inc(v_a_4432_);
lean_dec_ref(v___x_4431_);
v___x_4433_ = l_Lean_Meta_reduce(v_a_4432_, v___x_4416_, v___x_4416_, v___x_4416_, v_a_4381_, v_a_4382_, v_a_4383_, v_a_4384_);
if (lean_obj_tag(v___x_4433_) == 0)
{
lean_object* v_a_4434_; lean_object* v___x_4435_; lean_object* v___x_4436_; 
v_a_4434_ = lean_ctor_get(v___x_4433_, 0);
lean_inc(v_a_4434_);
lean_dec_ref(v___x_4433_);
v___x_4435_ = lean_box(1);
v___x_4436_ = l_Lean_PrettyPrinter_delab(v_a_4434_, v___x_4435_, v_a_4381_, v_a_4382_, v_a_4383_, v_a_4384_);
if (lean_obj_tag(v___x_4436_) == 0)
{
lean_object* v_a_4437_; lean_object* v___x_4438_; 
v_a_4437_ = lean_ctor_get(v___x_4436_, 0);
lean_inc(v_a_4437_);
lean_dec_ref(v___x_4436_);
lean_inc(v_a_4384_);
lean_inc_ref(v_a_4383_);
lean_inc(v_a_4382_);
lean_inc_ref(v_a_4381_);
v___x_4438_ = lean_infer_type(v_a_4394_, v_a_4381_, v_a_4382_, v_a_4383_, v_a_4384_);
if (lean_obj_tag(v___x_4438_) == 0)
{
lean_object* v_a_4439_; lean_object* v___x_4440_; 
v_a_4439_ = lean_ctor_get(v___x_4438_, 0);
lean_inc(v_a_4439_);
lean_dec_ref(v___x_4438_);
lean_inc(v_a_4384_);
lean_inc_ref(v_a_4383_);
lean_inc(v_a_4382_);
lean_inc_ref(v_a_4381_);
v___x_4440_ = lean_whnf(v_a_4439_, v_a_4381_, v_a_4382_, v_a_4383_, v_a_4384_);
if (lean_obj_tag(v___x_4440_) == 0)
{
lean_object* v_a_4441_; lean_object* v___x_4442_; 
v_a_4441_ = lean_ctor_get(v___x_4440_, 0);
lean_inc(v_a_4441_);
lean_dec_ref(v___x_4440_);
v___x_4442_ = l_Lean_PrettyPrinter_delab(v_a_4441_, v___x_4435_, v_a_4381_, v_a_4382_, v_a_4383_, v_a_4384_);
if (lean_obj_tag(v___x_4442_) == 0)
{
lean_object* v_a_4443_; lean_object* v_ref_4444_; lean_object* v_quotContext_4445_; lean_object* v_currMacroScope_4446_; lean_object* v___x_4447_; lean_object* v___x_4448_; lean_object* v___x_4449_; lean_object* v___x_4450_; lean_object* v___x_4451_; lean_object* v___x_4452_; lean_object* v___x_4453_; lean_object* v___x_4454_; lean_object* v___x_4455_; lean_object* v___x_4456_; lean_object* v___x_4458_; 
v_a_4443_ = lean_ctor_get(v___x_4442_, 0);
lean_inc(v_a_4443_);
lean_dec_ref(v___x_4442_);
v_ref_4444_ = lean_ctor_get(v_a_4383_, 5);
v_quotContext_4445_ = lean_ctor_get(v_a_4383_, 10);
v_currMacroScope_4446_ = lean_ctor_get(v_a_4383_, 11);
v___x_4447_ = lean_unsigned_to_nat(5u);
v___x_4448_ = l_Lean_Syntax_getArg(v_x_4376_, v___x_4447_);
lean_dec(v_x_4376_);
v___x_4449_ = l_Lean_SourceInfo_fromRef(v_ref_4444_, v___x_4392_);
v___x_4450_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__64));
v___x_4451_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__11));
lean_inc(v___x_4448_);
lean_inc_n(v___x_4449_, 3);
v___x_4452_ = l_Lean_Syntax_node1(v___x_4449_, v___x_4451_, v___x_4448_);
v___x_4453_ = l_Lean_Syntax_node1(v___x_4449_, v___x_4450_, v___x_4452_);
v___x_4454_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__1));
v___x_4455_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in____1___closed__4));
v___x_4456_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__7));
if (v_isShared_4411_ == 0)
{
lean_ctor_set_tag(v___x_4410_, 2);
lean_ctor_set(v___x_4410_, 1, v___x_4456_);
lean_ctor_set(v___x_4410_, 0, v___x_4449_);
v___x_4458_ = v___x_4410_;
goto v_reusejp_4457_;
}
else
{
lean_object* v_reuseFailAlloc_4662_; 
v_reuseFailAlloc_4662_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4662_, 0, v___x_4449_);
lean_ctor_set(v_reuseFailAlloc_4662_, 1, v___x_4456_);
v___x_4458_ = v_reuseFailAlloc_4662_;
goto v_reusejp_4457_;
}
v_reusejp_4457_:
{
lean_object* v___x_4459_; lean_object* v___x_4460_; lean_object* v___x_4461_; lean_object* v___x_4462_; lean_object* v___x_4463_; lean_object* v___x_4464_; lean_object* v___x_4465_; lean_object* v___x_4466_; lean_object* v___x_4467_; lean_object* v___x_4468_; lean_object* v___x_4469_; lean_object* v___x_4470_; lean_object* v___x_4471_; lean_object* v___x_4472_; lean_object* v___x_4473_; lean_object* v___x_4474_; lean_object* v___x_4475_; lean_object* v___x_4476_; lean_object* v___x_4477_; lean_object* v___x_4478_; lean_object* v___x_4479_; lean_object* v___x_4480_; lean_object* v___x_4481_; lean_object* v___x_4482_; lean_object* v___x_4483_; lean_object* v___x_4484_; lean_object* v___x_4485_; lean_object* v___x_4486_; lean_object* v___x_4487_; lean_object* v___x_4488_; lean_object* v___x_4489_; lean_object* v___x_4490_; lean_object* v___x_4491_; lean_object* v___x_4492_; lean_object* v___x_4493_; lean_object* v___x_4494_; lean_object* v___x_4495_; lean_object* v___x_4496_; lean_object* v___x_4497_; lean_object* v___x_4498_; lean_object* v___x_4499_; lean_object* v___x_4500_; lean_object* v___x_4501_; lean_object* v___x_4502_; lean_object* v___x_4503_; lean_object* v___x_4504_; lean_object* v___x_4505_; lean_object* v___x_4506_; lean_object* v___x_4507_; lean_object* v___x_4508_; lean_object* v___x_4509_; lean_object* v___x_4510_; lean_object* v___x_4511_; lean_object* v___x_4512_; lean_object* v___x_4513_; lean_object* v___x_4514_; lean_object* v___x_4515_; lean_object* v___x_4516_; lean_object* v___x_4517_; lean_object* v___x_4518_; lean_object* v___x_4519_; lean_object* v___x_4520_; lean_object* v___x_4521_; lean_object* v___x_4522_; lean_object* v___x_4523_; lean_object* v___x_4524_; lean_object* v___x_4525_; lean_object* v___x_4526_; lean_object* v___x_4527_; lean_object* v___x_4528_; lean_object* v___x_4529_; lean_object* v___x_4530_; lean_object* v___x_4531_; lean_object* v___x_4532_; lean_object* v___x_4533_; lean_object* v___x_4534_; lean_object* v___x_4535_; lean_object* v___x_4536_; lean_object* v___x_4537_; lean_object* v___x_4538_; lean_object* v___x_4539_; lean_object* v___x_4540_; lean_object* v___x_4541_; lean_object* v___x_4542_; lean_object* v___x_4543_; lean_object* v___x_4544_; lean_object* v___x_4545_; lean_object* v___x_4546_; lean_object* v___x_4547_; lean_object* v___x_4548_; lean_object* v___x_4549_; lean_object* v___x_4550_; lean_object* v___x_4551_; lean_object* v___x_4552_; lean_object* v___x_4553_; lean_object* v___x_4554_; lean_object* v___x_4555_; lean_object* v___x_4556_; lean_object* v___x_4557_; lean_object* v___x_4558_; lean_object* v___x_4559_; lean_object* v___x_4560_; lean_object* v___x_4561_; lean_object* v___x_4562_; lean_object* v___x_4563_; lean_object* v___x_4564_; lean_object* v___x_4565_; lean_object* v___x_4566_; lean_object* v___x_4567_; lean_object* v___x_4568_; lean_object* v___x_4569_; lean_object* v___x_4570_; lean_object* v___x_4571_; lean_object* v___x_4572_; lean_object* v___x_4573_; lean_object* v___x_4574_; lean_object* v___x_4575_; lean_object* v___x_4576_; lean_object* v___x_4577_; lean_object* v___x_4578_; lean_object* v___x_4579_; lean_object* v___x_4580_; lean_object* v___x_4581_; lean_object* v___x_4582_; lean_object* v___x_4583_; lean_object* v___x_4584_; lean_object* v___x_4585_; lean_object* v___x_4586_; lean_object* v___x_4587_; lean_object* v___x_4588_; lean_object* v___x_4589_; lean_object* v___x_4590_; lean_object* v___x_4591_; lean_object* v___x_4592_; lean_object* v___x_4593_; lean_object* v___x_4594_; lean_object* v___x_4595_; lean_object* v___x_4596_; lean_object* v___x_4597_; lean_object* v___x_4598_; lean_object* v___x_4599_; lean_object* v___x_4600_; lean_object* v___x_4601_; lean_object* v___x_4602_; lean_object* v___x_4603_; lean_object* v___x_4604_; lean_object* v___x_4605_; lean_object* v___x_4606_; lean_object* v___x_4607_; lean_object* v___x_4608_; lean_object* v___x_4609_; lean_object* v___x_4610_; lean_object* v___x_4611_; lean_object* v___x_4612_; lean_object* v___x_4613_; lean_object* v___x_4614_; lean_object* v___x_4615_; lean_object* v___x_4616_; lean_object* v___x_4617_; lean_object* v___x_4618_; lean_object* v___x_4619_; lean_object* v___x_4620_; lean_object* v___x_4621_; lean_object* v___x_4622_; lean_object* v___x_4623_; lean_object* v___x_4624_; lean_object* v___x_4625_; lean_object* v___x_4626_; lean_object* v___x_4627_; lean_object* v___x_4628_; lean_object* v___x_4629_; lean_object* v___x_4630_; lean_object* v___x_4631_; lean_object* v___x_4632_; lean_object* v___x_4633_; lean_object* v___x_4634_; lean_object* v___x_4635_; lean_object* v___x_4636_; lean_object* v___x_4637_; lean_object* v___x_4638_; lean_object* v___x_4639_; lean_object* v___x_4640_; lean_object* v___x_4641_; lean_object* v___x_4642_; lean_object* v___x_4643_; lean_object* v___x_4644_; lean_object* v___x_4645_; lean_object* v___x_4646_; lean_object* v___x_4647_; lean_object* v___x_4648_; lean_object* v___x_4649_; lean_object* v___x_4650_; lean_object* v___x_4651_; lean_object* v___x_4652_; lean_object* v___x_4653_; lean_object* v___x_4654_; lean_object* v___x_4655_; lean_object* v___x_4656_; lean_object* v___x_4657_; lean_object* v___x_4658_; lean_object* v___x_4659_; lean_object* v___x_4660_; lean_object* v___x_4661_; 
v___x_4459_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__9));
v___x_4460_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__11));
v___x_4461_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__8));
v___x_4462_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__9));
lean_inc_n(v___x_4449_, 97);
v___x_4463_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4463_, 0, v___x_4449_);
lean_ctor_set(v___x_4463_, 1, v___x_4462_);
v___x_4464_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__4));
v___x_4465_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19, &lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__19);
v___x_4466_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4466_, 0, v___x_4449_);
lean_ctor_set(v___x_4466_, 1, v___x_4451_);
lean_ctor_set(v___x_4466_, 2, v___x_4465_);
lean_inc_ref_n(v___x_4466_, 23);
v___x_4467_ = l_Lean_Syntax_node1(v___x_4449_, v___x_4464_, v___x_4466_);
v___x_4468_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__6));
v___x_4469_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__11));
v___x_4470_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__13));
v___x_4471_ = l_Lean_Syntax_node1(v___x_4449_, v___x_4470_, v___x_4448_);
v___x_4472_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__15));
v___x_4473_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__16));
v___x_4474_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4474_, 0, v___x_4449_);
lean_ctor_set(v___x_4474_, 1, v___x_4473_);
lean_inc_ref(v___x_4474_);
v___x_4475_ = l_Lean_Syntax_node2(v___x_4449_, v___x_4472_, v___x_4474_, v_a_4437_);
v___x_4476_ = l_Lean_Syntax_node1(v___x_4449_, v___x_4451_, v___x_4475_);
v___x_4477_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__23));
v___x_4478_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4478_, 0, v___x_4449_);
lean_ctor_set(v___x_4478_, 1, v___x_4477_);
v___x_4479_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__18));
v___x_4480_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__19));
v___x_4481_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4481_, 0, v___x_4449_);
lean_ctor_set(v___x_4481_, 1, v___x_4480_);
v___x_4482_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1___closed__3, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1___closed__3_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1___closed__3);
v___x_4483_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1___closed__4));
lean_inc_n(v_currMacroScope_4446_, 13);
lean_inc_n(v_quotContext_4445_, 13);
v___x_4484_ = l_Lean_addMacroScope(v_quotContext_4445_, v___x_4483_, v_currMacroScope_4446_);
v___x_4485_ = lean_box(0);
v___x_4486_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4486_, 0, v___x_4449_);
lean_ctor_set(v___x_4486_, 1, v___x_4482_);
lean_ctor_set(v___x_4486_, 2, v___x_4484_);
lean_ctor_set(v___x_4486_, 3, v___x_4485_);
lean_inc_ref(v___x_4486_);
v___x_4487_ = l_Lean_Syntax_node1(v___x_4449_, v___x_4470_, v___x_4486_);
v___x_4488_ = l_Lean_Syntax_node2(v___x_4449_, v___x_4472_, v___x_4474_, v_a_4443_);
v___x_4489_ = l_Lean_Syntax_node1(v___x_4449_, v___x_4451_, v___x_4488_);
lean_inc_ref_n(v___x_4478_, 5);
v___x_4490_ = l_Lean_Syntax_node5(v___x_4449_, v___x_4469_, v___x_4487_, v___x_4466_, v___x_4489_, v___x_4478_, v___x_4390_);
v___x_4491_ = l_Lean_Syntax_node1(v___x_4449_, v___x_4468_, v___x_4490_);
lean_inc_n(v___x_4467_, 2);
lean_inc_ref(v___x_4463_);
v___x_4492_ = l_Lean_Syntax_node3(v___x_4449_, v___x_4461_, v___x_4463_, v___x_4467_, v___x_4491_);
v___x_4493_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__1));
v___x_4494_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__2));
v___x_4495_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4495_, 0, v___x_4449_);
lean_ctor_set(v___x_4495_, 1, v___x_4494_);
v___x_4496_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__8));
v___x_4497_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__10));
v___x_4498_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__11));
v___x_4499_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4499_, 0, v___x_4449_);
lean_ctor_set(v___x_4499_, 1, v___x_4498_);
v___x_4500_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__1, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__1_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__1);
v___x_4501_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__2));
v___x_4502_ = l_Lean_addMacroScope(v_quotContext_4445_, v___x_4501_, v_currMacroScope_4446_);
v___x_4503_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4503_, 0, v___x_4449_);
lean_ctor_set(v___x_4503_, 1, v___x_4500_);
lean_ctor_set(v___x_4503_, 2, v___x_4502_);
lean_ctor_set(v___x_4503_, 3, v___x_4485_);
v___x_4504_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__forall__in__1___closed__23));
v___x_4505_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4505_, 0, v___x_4449_);
lean_ctor_set(v___x_4505_, 1, v___x_4504_);
v___x_4506_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__21, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__21_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__21);
v___x_4507_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__22));
v___x_4508_ = l_Lean_addMacroScope(v_quotContext_4445_, v___x_4507_, v_currMacroScope_4446_);
v___x_4509_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4509_, 0, v___x_4449_);
lean_ctor_set(v___x_4509_, 1, v___x_4506_);
lean_ctor_set(v___x_4509_, 2, v___x_4508_);
lean_ctor_set(v___x_4509_, 3, v___x_4485_);
v___x_4510_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__24, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__24_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__24);
v___x_4511_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__25));
v___x_4512_ = l_Lean_addMacroScope(v_quotContext_4445_, v___x_4511_, v_currMacroScope_4446_);
v___x_4513_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4513_, 0, v___x_4449_);
lean_ctor_set(v___x_4513_, 1, v___x_4510_);
lean_ctor_set(v___x_4513_, 2, v___x_4512_);
lean_ctor_set(v___x_4513_, 3, v___x_4485_);
lean_inc_ref(v___x_4513_);
lean_inc_ref_n(v___x_4505_, 4);
lean_inc_ref(v___x_4509_);
v___x_4514_ = l_Lean_Syntax_node3(v___x_4449_, v___x_4451_, v___x_4509_, v___x_4505_, v___x_4513_);
v___x_4515_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__tacticElim__exists__in___x2c___x2c___x2c____1___closed__12));
v___x_4516_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4516_, 0, v___x_4449_);
lean_ctor_set(v___x_4516_, 1, v___x_4515_);
lean_inc_ref_n(v___x_4516_, 2);
lean_inc_ref_n(v___x_4499_, 2);
v___x_4517_ = l_Lean_Syntax_node3(v___x_4449_, v___x_4497_, v___x_4499_, v___x_4514_, v___x_4516_);
v___x_4518_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__unique__in_____x2c____1___closed__1, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__unique__in_____x2c____1___closed__1_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__unique__in_____x2c____1___closed__1);
v___x_4519_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__unique__in_____x2c____1___closed__2));
v___x_4520_ = l_Lean_addMacroScope(v_quotContext_4445_, v___x_4519_, v_currMacroScope_4446_);
v___x_4521_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4521_, 0, v___x_4449_);
lean_ctor_set(v___x_4521_, 1, v___x_4518_);
lean_ctor_set(v___x_4521_, 2, v___x_4520_);
lean_ctor_set(v___x_4521_, 3, v___x_4485_);
v___x_4522_ = l_Lean_Syntax_node3(v___x_4449_, v___x_4451_, v___x_4517_, v___x_4505_, v___x_4521_);
v___x_4523_ = l_Lean_Syntax_node3(v___x_4449_, v___x_4497_, v___x_4499_, v___x_4522_, v___x_4516_);
lean_inc_ref(v___x_4503_);
v___x_4524_ = l_Lean_Syntax_node3(v___x_4449_, v___x_4451_, v___x_4503_, v___x_4505_, v___x_4523_);
v___x_4525_ = l_Lean_Syntax_node3(v___x_4449_, v___x_4497_, v___x_4499_, v___x_4524_, v___x_4516_);
v___x_4526_ = l_Lean_Syntax_node5(v___x_4449_, v___x_4496_, v___x_4525_, v___x_4466_, v___x_4466_, v___x_4478_, v___x_4486_);
v___x_4527_ = l_Lean_Syntax_node1(v___x_4449_, v___x_4468_, v___x_4526_);
v___x_4528_ = l_Lean_Syntax_node3(v___x_4449_, v___x_4493_, v___x_4495_, v___x_4467_, v___x_4527_);
v___x_4529_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__in____1___closed__0));
v___x_4530_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__in____1___closed__1));
v___x_4531_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4531_, 0, v___x_4449_);
lean_ctor_set(v___x_4531_, 1, v___x_4529_);
v___x_4532_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__27, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__27_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__27);
v___x_4533_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__in___x2c___x2c____1___closed__28));
v___x_4534_ = l_Lean_addMacroScope(v_quotContext_4445_, v___x_4533_, v_currMacroScope_4446_);
v___x_4535_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4535_, 0, v___x_4449_);
lean_ctor_set(v___x_4535_, 1, v___x_4532_);
lean_ctor_set(v___x_4535_, 2, v___x_4534_);
lean_ctor_set(v___x_4535_, 3, v___x_4485_);
lean_inc_ref(v___x_4535_);
v___x_4536_ = l_Lean_Syntax_node1(v___x_4449_, v___x_4451_, v___x_4535_);
v___x_4537_ = l_Lean_Syntax_node2(v___x_4449_, v___x_4530_, v___x_4531_, v___x_4536_);
v___x_4538_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__9));
v___x_4539_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticElim__exists__in_____x2c____1___closed__10));
v___x_4540_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4540_, 0, v___x_4449_);
lean_ctor_set(v___x_4540_, 1, v___x_4538_);
v___x_4541_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__4));
v___x_4542_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__6));
v___x_4543_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__9));
v___x_4544_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__11, &lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__11_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__11);
v___x_4545_ = lean_box(0);
v___x_4546_ = l_Lean_addMacroScope(v_quotContext_4445_, v___x_4545_, v_currMacroScope_4446_);
v___x_4547_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__46));
v___x_4548_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4548_, 0, v___x_4449_);
lean_ctor_set(v___x_4548_, 1, v___x_4544_);
lean_ctor_set(v___x_4548_, 2, v___x_4546_);
lean_ctor_set(v___x_4548_, 3, v___x_4547_);
v___x_4549_ = l_Lean_Syntax_node1(v___x_4449_, v___x_4543_, v___x_4548_);
lean_inc_ref_n(v___x_4458_, 2);
v___x_4550_ = l_Lean_Syntax_node2(v___x_4449_, v___x_4542_, v___x_4458_, v___x_4549_);
v___x_4551_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2208____1__1___closed__4));
v___x_4552_ = l_Lean_Syntax_node2(v___x_4449_, v___x_4451_, v___x_4503_, v___x_4509_);
v___x_4553_ = l_Lean_Syntax_node2(v___x_4449_, v___x_4551_, v___x_4535_, v___x_4552_);
v___x_4554_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______macroRules__term___u2209____1__1___closed__49));
v___x_4555_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4555_, 0, v___x_4449_);
lean_ctor_set(v___x_4555_, 1, v___x_4554_);
lean_inc_ref_n(v___x_4555_, 2);
v___x_4556_ = l_Lean_Syntax_node3(v___x_4449_, v___x_4541_, v___x_4550_, v___x_4553_, v___x_4555_);
v___x_4557_ = l_Lean_Syntax_node2(v___x_4449_, v___x_4539_, v___x_4540_, v___x_4556_);
v___x_4558_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in_____x2c___x2c____1___closed__0));
v___x_4559_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticIntro__exists__in_____x2c___x2c____1___closed__1));
v___x_4560_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4560_, 0, v___x_4449_);
lean_ctor_set(v___x_4560_, 1, v___x_4558_);
v___x_4561_ = l_Lean_Syntax_node2(v___x_4449_, v___x_4559_, v___x_4560_, v___x_4513_);
v___x_4562_ = lean_unsigned_to_nat(9u);
v___x_4563_ = lean_mk_empty_array_with_capacity(v___x_4562_);
v___x_4564_ = lean_array_push(v___x_4563_, v___x_4492_);
v___x_4565_ = lean_array_push(v___x_4564_, v___x_4466_);
v___x_4566_ = lean_array_push(v___x_4565_, v___x_4528_);
v___x_4567_ = lean_array_push(v___x_4566_, v___x_4466_);
v___x_4568_ = lean_array_push(v___x_4567_, v___x_4537_);
v___x_4569_ = lean_array_push(v___x_4568_, v___x_4466_);
v___x_4570_ = lean_array_push(v___x_4569_, v___x_4557_);
v___x_4571_ = lean_array_push(v___x_4570_, v___x_4466_);
v___x_4572_ = lean_array_push(v___x_4571_, v___x_4561_);
v___x_4573_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4573_, 0, v___x_4449_);
lean_ctor_set(v___x_4573_, 1, v___x_4451_);
lean_ctor_set(v___x_4573_, 2, v___x_4572_);
v___x_4574_ = l_Lean_Syntax_node1(v___x_4449_, v___x_4460_, v___x_4573_);
v___x_4575_ = l_Lean_Syntax_node1(v___x_4449_, v___x_4459_, v___x_4574_);
v___x_4576_ = l_Lean_Syntax_node2(v___x_4449_, v___x_4479_, v___x_4481_, v___x_4575_);
v___x_4577_ = l_Lean_Syntax_node5(v___x_4449_, v___x_4469_, v___x_4471_, v___x_4466_, v___x_4476_, v___x_4478_, v___x_4576_);
v___x_4578_ = l_Lean_Syntax_node1(v___x_4449_, v___x_4468_, v___x_4577_);
v___x_4579_ = l_Lean_Syntax_node3(v___x_4449_, v___x_4461_, v___x_4463_, v___x_4467_, v___x_4578_);
v___x_4580_ = l_Lean_Syntax_node1(v___x_4449_, v___x_4451_, v___x_4579_);
v___x_4581_ = l_Lean_Syntax_node1(v___x_4449_, v___x_4460_, v___x_4580_);
v___x_4582_ = l_Lean_Syntax_node1(v___x_4449_, v___x_4459_, v___x_4581_);
v___x_4583_ = l_Lean_Syntax_node3(v___x_4449_, v___x_4455_, v___x_4458_, v___x_4582_, v___x_4555_);
v___x_4584_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__4));
v___x_4585_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4585_, 0, v___x_4449_);
lean_ctor_set(v___x_4585_, 1, v___x_4584_);
v___x_4586_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__6));
v___x_4587_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__7));
v___x_4588_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4588_, 0, v___x_4449_);
lean_ctor_set(v___x_4588_, 1, v___x_4587_);
v___x_4589_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__12));
v___x_4590_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__13));
v___x_4591_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4591_, 0, v___x_4449_);
lean_ctor_set(v___x_4591_, 1, v___x_4589_);
v___x_4592_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__15));
v___x_4593_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__17));
v___x_4594_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__19));
v___x_4595_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__21, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__21_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__21);
v___x_4596_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__22));
v___x_4597_ = l_Lean_addMacroScope(v_quotContext_4445_, v___x_4596_, v_currMacroScope_4446_);
v___x_4598_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4598_, 0, v___x_4449_);
lean_ctor_set(v___x_4598_, 1, v___x_4595_);
lean_ctor_set(v___x_4598_, 2, v___x_4597_);
lean_ctor_set(v___x_4598_, 3, v___x_4485_);
v___x_4599_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__25));
v___x_4600_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__26));
v___x_4601_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4601_, 0, v___x_4449_);
lean_ctor_set(v___x_4601_, 1, v___x_4600_);
v___x_4602_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__28));
v___x_4603_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__30));
v___x_4604_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__32));
v___x_4605_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__34, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__34_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__34);
v___x_4606_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__35));
v___x_4607_ = l_Lean_addMacroScope(v_quotContext_4445_, v___x_4606_, v_currMacroScope_4446_);
v___x_4608_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4608_, 0, v___x_4449_);
lean_ctor_set(v___x_4608_, 1, v___x_4605_);
lean_ctor_set(v___x_4608_, 2, v___x_4607_);
lean_ctor_set(v___x_4608_, 3, v___x_4485_);
v___x_4609_ = l_Lean_Syntax_node2(v___x_4449_, v___x_4604_, v___x_4608_, v___x_4466_);
v___x_4610_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__37));
v___x_4611_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__39, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__39_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__39);
v___x_4612_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__40));
v___x_4613_ = l_Lean_addMacroScope(v_quotContext_4445_, v___x_4612_, v_currMacroScope_4446_);
v___x_4614_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__44));
v___x_4615_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4615_, 0, v___x_4449_);
lean_ctor_set(v___x_4615_, 1, v___x_4611_);
lean_ctor_set(v___x_4615_, 2, v___x_4613_);
lean_ctor_set(v___x_4615_, 3, v___x_4614_);
v___x_4616_ = l_Lean_Syntax_node3(v___x_4449_, v___x_4610_, v___x_4478_, v___x_4466_, v___x_4615_);
v___x_4617_ = l_Lean_Syntax_node3(v___x_4449_, v___x_4451_, v___x_4466_, v___x_4466_, v___x_4616_);
v___x_4618_ = l_Lean_Syntax_node2(v___x_4449_, v___x_4603_, v___x_4609_, v___x_4617_);
v___x_4619_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__46, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__46_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__46);
v___x_4620_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__47));
v___x_4621_ = l_Lean_addMacroScope(v_quotContext_4445_, v___x_4620_, v_currMacroScope_4446_);
v___x_4622_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4622_, 0, v___x_4449_);
lean_ctor_set(v___x_4622_, 1, v___x_4619_);
lean_ctor_set(v___x_4622_, 2, v___x_4621_);
lean_ctor_set(v___x_4622_, 3, v___x_4485_);
v___x_4623_ = l_Lean_Syntax_node2(v___x_4449_, v___x_4604_, v___x_4622_, v___x_4466_);
v___x_4624_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__49, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__49_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__49);
v___x_4625_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__50));
v___x_4626_ = l_Lean_addMacroScope(v_quotContext_4445_, v___x_4625_, v_currMacroScope_4446_);
v___x_4627_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__53));
v___x_4628_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4628_, 0, v___x_4449_);
lean_ctor_set(v___x_4628_, 1, v___x_4624_);
lean_ctor_set(v___x_4628_, 2, v___x_4626_);
lean_ctor_set(v___x_4628_, 3, v___x_4627_);
v___x_4629_ = l_Lean_Syntax_node3(v___x_4449_, v___x_4610_, v___x_4478_, v___x_4466_, v___x_4628_);
v___x_4630_ = l_Lean_Syntax_node3(v___x_4449_, v___x_4451_, v___x_4466_, v___x_4466_, v___x_4629_);
lean_inc(v___x_4630_);
v___x_4631_ = l_Lean_Syntax_node2(v___x_4449_, v___x_4603_, v___x_4623_, v___x_4630_);
v___x_4632_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__55, &lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__55_once, _init_lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__55);
v___x_4633_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__56));
v___x_4634_ = l_Lean_addMacroScope(v_quotContext_4445_, v___x_4633_, v_currMacroScope_4446_);
v___x_4635_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4635_, 0, v___x_4449_);
lean_ctor_set(v___x_4635_, 1, v___x_4632_);
lean_ctor_set(v___x_4635_, 2, v___x_4634_);
lean_ctor_set(v___x_4635_, 3, v___x_4485_);
v___x_4636_ = l_Lean_Syntax_node2(v___x_4449_, v___x_4604_, v___x_4635_, v___x_4466_);
v___x_4637_ = l_Lean_Syntax_node2(v___x_4449_, v___x_4603_, v___x_4636_, v___x_4630_);
v___x_4638_ = l_Lean_Syntax_node5(v___x_4449_, v___x_4451_, v___x_4618_, v___x_4505_, v___x_4631_, v___x_4505_, v___x_4637_);
v___x_4639_ = l_Lean_Syntax_node1(v___x_4449_, v___x_4602_, v___x_4638_);
v___x_4640_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__58));
v___x_4641_ = l_Lean_Syntax_node1(v___x_4449_, v___x_4640_, v___x_4466_);
v___x_4642_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__59));
v___x_4643_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4643_, 0, v___x_4449_);
lean_ctor_set(v___x_4643_, 1, v___x_4642_);
v___x_4644_ = l_Lean_Syntax_node6(v___x_4449_, v___x_4599_, v___x_4601_, v___x_4466_, v___x_4639_, v___x_4641_, v___x_4466_, v___x_4643_);
v___x_4645_ = l_Lean_Syntax_node5(v___x_4449_, v___x_4594_, v___x_4458_, v___x_4598_, v___x_4478_, v___x_4644_, v___x_4555_);
v___x_4646_ = l_Lean_Syntax_node1(v___x_4449_, v___x_4593_, v___x_4645_);
v___x_4647_ = l_Lean_Syntax_node1(v___x_4449_, v___x_4451_, v___x_4646_);
v___x_4648_ = l_Lean_Syntax_node1(v___x_4449_, v___x_4592_, v___x_4647_);
v___x_4649_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__61));
v___x_4650_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tacticSpecialize__in___x2c____1___closed__62));
v___x_4651_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4651_, 0, v___x_4449_);
lean_ctor_set(v___x_4651_, 1, v___x_4650_);
v___x_4652_ = l_Lean_Syntax_node2(v___x_4449_, v___x_4649_, v___x_4651_, v___x_4453_);
v___x_4653_ = l_Lean_Syntax_node1(v___x_4449_, v___x_4451_, v___x_4652_);
v___x_4654_ = l_Lean_Syntax_node6(v___x_4449_, v___x_4590_, v___x_4591_, v___x_4648_, v___x_4466_, v___x_4466_, v___x_4466_, v___x_4653_);
v___x_4655_ = l_Lean_Syntax_node1(v___x_4449_, v___x_4451_, v___x_4654_);
v___x_4656_ = l_Lean_Syntax_node1(v___x_4449_, v___x_4460_, v___x_4655_);
v___x_4657_ = l_Lean_Syntax_node1(v___x_4449_, v___x_4459_, v___x_4656_);
v___x_4658_ = l_Lean_Syntax_node2(v___x_4449_, v___x_4586_, v___x_4588_, v___x_4657_);
v___x_4659_ = l_Lean_Syntax_node3(v___x_4449_, v___x_4451_, v___x_4583_, v___x_4585_, v___x_4658_);
v___x_4660_ = l_Lean_Syntax_node1(v___x_4449_, v___x_4454_, v___x_4659_);
v___x_4661_ = l_Lean_Elab_Tactic_evalTactic(v___x_4660_, v_a_4377_, v_a_4378_, v_a_4379_, v_a_4380_, v_a_4381_, v_a_4382_, v_a_4383_, v_a_4384_);
return v___x_4661_;
}
}
else
{
lean_object* v_a_4663_; lean_object* v___x_4665_; uint8_t v_isShared_4666_; uint8_t v_isSharedCheck_4670_; 
lean_dec(v_a_4437_);
lean_del_object(v___x_4410_);
lean_dec(v___x_4390_);
lean_dec(v_x_4376_);
v_a_4663_ = lean_ctor_get(v___x_4442_, 0);
v_isSharedCheck_4670_ = !lean_is_exclusive(v___x_4442_);
if (v_isSharedCheck_4670_ == 0)
{
v___x_4665_ = v___x_4442_;
v_isShared_4666_ = v_isSharedCheck_4670_;
goto v_resetjp_4664_;
}
else
{
lean_inc(v_a_4663_);
lean_dec(v___x_4442_);
v___x_4665_ = lean_box(0);
v_isShared_4666_ = v_isSharedCheck_4670_;
goto v_resetjp_4664_;
}
v_resetjp_4664_:
{
lean_object* v___x_4668_; 
if (v_isShared_4666_ == 0)
{
v___x_4668_ = v___x_4665_;
goto v_reusejp_4667_;
}
else
{
lean_object* v_reuseFailAlloc_4669_; 
v_reuseFailAlloc_4669_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4669_, 0, v_a_4663_);
v___x_4668_ = v_reuseFailAlloc_4669_;
goto v_reusejp_4667_;
}
v_reusejp_4667_:
{
return v___x_4668_;
}
}
}
}
else
{
lean_object* v_a_4671_; lean_object* v___x_4673_; uint8_t v_isShared_4674_; uint8_t v_isSharedCheck_4678_; 
lean_dec(v_a_4437_);
lean_del_object(v___x_4410_);
lean_dec(v___x_4390_);
lean_dec(v_x_4376_);
v_a_4671_ = lean_ctor_get(v___x_4440_, 0);
v_isSharedCheck_4678_ = !lean_is_exclusive(v___x_4440_);
if (v_isSharedCheck_4678_ == 0)
{
v___x_4673_ = v___x_4440_;
v_isShared_4674_ = v_isSharedCheck_4678_;
goto v_resetjp_4672_;
}
else
{
lean_inc(v_a_4671_);
lean_dec(v___x_4440_);
v___x_4673_ = lean_box(0);
v_isShared_4674_ = v_isSharedCheck_4678_;
goto v_resetjp_4672_;
}
v_resetjp_4672_:
{
lean_object* v___x_4676_; 
if (v_isShared_4674_ == 0)
{
v___x_4676_ = v___x_4673_;
goto v_reusejp_4675_;
}
else
{
lean_object* v_reuseFailAlloc_4677_; 
v_reuseFailAlloc_4677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4677_, 0, v_a_4671_);
v___x_4676_ = v_reuseFailAlloc_4677_;
goto v_reusejp_4675_;
}
v_reusejp_4675_:
{
return v___x_4676_;
}
}
}
}
else
{
lean_object* v_a_4679_; lean_object* v___x_4681_; uint8_t v_isShared_4682_; uint8_t v_isSharedCheck_4686_; 
lean_dec(v_a_4437_);
lean_del_object(v___x_4410_);
lean_dec(v___x_4390_);
lean_dec(v_x_4376_);
v_a_4679_ = lean_ctor_get(v___x_4438_, 0);
v_isSharedCheck_4686_ = !lean_is_exclusive(v___x_4438_);
if (v_isSharedCheck_4686_ == 0)
{
v___x_4681_ = v___x_4438_;
v_isShared_4682_ = v_isSharedCheck_4686_;
goto v_resetjp_4680_;
}
else
{
lean_inc(v_a_4679_);
lean_dec(v___x_4438_);
v___x_4681_ = lean_box(0);
v_isShared_4682_ = v_isSharedCheck_4686_;
goto v_resetjp_4680_;
}
v_resetjp_4680_:
{
lean_object* v___x_4684_; 
if (v_isShared_4682_ == 0)
{
v___x_4684_ = v___x_4681_;
goto v_reusejp_4683_;
}
else
{
lean_object* v_reuseFailAlloc_4685_; 
v_reuseFailAlloc_4685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4685_, 0, v_a_4679_);
v___x_4684_ = v_reuseFailAlloc_4685_;
goto v_reusejp_4683_;
}
v_reusejp_4683_:
{
return v___x_4684_;
}
}
}
}
else
{
lean_object* v_a_4687_; lean_object* v___x_4689_; uint8_t v_isShared_4690_; uint8_t v_isSharedCheck_4694_; 
lean_del_object(v___x_4410_);
lean_dec(v_a_4394_);
lean_dec(v___x_4390_);
lean_dec(v_x_4376_);
v_a_4687_ = lean_ctor_get(v___x_4436_, 0);
v_isSharedCheck_4694_ = !lean_is_exclusive(v___x_4436_);
if (v_isSharedCheck_4694_ == 0)
{
v___x_4689_ = v___x_4436_;
v_isShared_4690_ = v_isSharedCheck_4694_;
goto v_resetjp_4688_;
}
else
{
lean_inc(v_a_4687_);
lean_dec(v___x_4436_);
v___x_4689_ = lean_box(0);
v_isShared_4690_ = v_isSharedCheck_4694_;
goto v_resetjp_4688_;
}
v_resetjp_4688_:
{
lean_object* v___x_4692_; 
if (v_isShared_4690_ == 0)
{
v___x_4692_ = v___x_4689_;
goto v_reusejp_4691_;
}
else
{
lean_object* v_reuseFailAlloc_4693_; 
v_reuseFailAlloc_4693_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4693_, 0, v_a_4687_);
v___x_4692_ = v_reuseFailAlloc_4693_;
goto v_reusejp_4691_;
}
v_reusejp_4691_:
{
return v___x_4692_;
}
}
}
}
else
{
lean_object* v_a_4695_; lean_object* v___x_4697_; uint8_t v_isShared_4698_; uint8_t v_isSharedCheck_4702_; 
lean_del_object(v___x_4410_);
lean_dec(v_a_4394_);
lean_dec(v___x_4390_);
lean_dec(v_x_4376_);
v_a_4695_ = lean_ctor_get(v___x_4433_, 0);
v_isSharedCheck_4702_ = !lean_is_exclusive(v___x_4433_);
if (v_isSharedCheck_4702_ == 0)
{
v___x_4697_ = v___x_4433_;
v_isShared_4698_ = v_isSharedCheck_4702_;
goto v_resetjp_4696_;
}
else
{
lean_inc(v_a_4695_);
lean_dec(v___x_4433_);
v___x_4697_ = lean_box(0);
v_isShared_4698_ = v_isSharedCheck_4702_;
goto v_resetjp_4696_;
}
v_resetjp_4696_:
{
lean_object* v___x_4700_; 
if (v_isShared_4698_ == 0)
{
v___x_4700_ = v___x_4697_;
goto v_reusejp_4699_;
}
else
{
lean_object* v_reuseFailAlloc_4701_; 
v_reuseFailAlloc_4701_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4701_, 0, v_a_4695_);
v___x_4700_ = v_reuseFailAlloc_4701_;
goto v_reusejp_4699_;
}
v_reusejp_4699_:
{
return v___x_4700_;
}
}
}
}
else
{
lean_object* v_a_4703_; lean_object* v___x_4705_; uint8_t v_isShared_4706_; uint8_t v_isSharedCheck_4710_; 
lean_del_object(v___x_4410_);
lean_dec(v_a_4394_);
lean_dec(v___x_4390_);
lean_dec(v_x_4376_);
v_a_4703_ = lean_ctor_get(v___x_4431_, 0);
v_isSharedCheck_4710_ = !lean_is_exclusive(v___x_4431_);
if (v_isSharedCheck_4710_ == 0)
{
v___x_4705_ = v___x_4431_;
v_isShared_4706_ = v_isSharedCheck_4710_;
goto v_resetjp_4704_;
}
else
{
lean_inc(v_a_4703_);
lean_dec(v___x_4431_);
v___x_4705_ = lean_box(0);
v_isShared_4706_ = v_isSharedCheck_4710_;
goto v_resetjp_4704_;
}
v_resetjp_4704_:
{
lean_object* v___x_4708_; 
if (v_isShared_4706_ == 0)
{
v___x_4708_ = v___x_4705_;
goto v_reusejp_4707_;
}
else
{
lean_object* v_reuseFailAlloc_4709_; 
v_reuseFailAlloc_4709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4709_, 0, v_a_4703_);
v___x_4708_ = v_reuseFailAlloc_4709_;
goto v_reusejp_4707_;
}
v_reusejp_4707_:
{
return v___x_4708_;
}
}
}
}
else
{
lean_object* v_a_4711_; lean_object* v___x_4713_; uint8_t v_isShared_4714_; uint8_t v_isSharedCheck_4718_; 
lean_dec(v_a_4420_);
lean_del_object(v___x_4410_);
lean_dec(v_a_4394_);
lean_dec(v___x_4390_);
lean_dec(v_x_4376_);
v_a_4711_ = lean_ctor_get(v___x_4429_, 0);
v_isSharedCheck_4718_ = !lean_is_exclusive(v___x_4429_);
if (v_isSharedCheck_4718_ == 0)
{
v___x_4713_ = v___x_4429_;
v_isShared_4714_ = v_isSharedCheck_4718_;
goto v_resetjp_4712_;
}
else
{
lean_inc(v_a_4711_);
lean_dec(v___x_4429_);
v___x_4713_ = lean_box(0);
v_isShared_4714_ = v_isSharedCheck_4718_;
goto v_resetjp_4712_;
}
v_resetjp_4712_:
{
lean_object* v___x_4716_; 
if (v_isShared_4714_ == 0)
{
v___x_4716_ = v___x_4713_;
goto v_reusejp_4715_;
}
else
{
lean_object* v_reuseFailAlloc_4717_; 
v_reuseFailAlloc_4717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4717_, 0, v_a_4711_);
v___x_4716_ = v_reuseFailAlloc_4717_;
goto v_reusejp_4715_;
}
v_reusejp_4715_:
{
return v___x_4716_;
}
}
}
}
else
{
lean_object* v_a_4719_; lean_object* v___x_4721_; uint8_t v_isShared_4722_; uint8_t v_isSharedCheck_4726_; 
lean_dec(v___x_4422_);
lean_dec(v_a_4420_);
lean_del_object(v___x_4410_);
lean_dec(v_a_4394_);
lean_dec(v___x_4390_);
lean_dec(v_x_4376_);
v_a_4719_ = lean_ctor_get(v___x_4423_, 0);
v_isSharedCheck_4726_ = !lean_is_exclusive(v___x_4423_);
if (v_isSharedCheck_4726_ == 0)
{
v___x_4721_ = v___x_4423_;
v_isShared_4722_ = v_isSharedCheck_4726_;
goto v_resetjp_4720_;
}
else
{
lean_inc(v_a_4719_);
lean_dec(v___x_4423_);
v___x_4721_ = lean_box(0);
v_isShared_4722_ = v_isSharedCheck_4726_;
goto v_resetjp_4720_;
}
v_resetjp_4720_:
{
lean_object* v___x_4724_; 
if (v_isShared_4722_ == 0)
{
v___x_4724_ = v___x_4721_;
goto v_reusejp_4723_;
}
else
{
lean_object* v_reuseFailAlloc_4725_; 
v_reuseFailAlloc_4725_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4725_, 0, v_a_4719_);
v___x_4724_ = v_reuseFailAlloc_4725_;
goto v_reusejp_4723_;
}
v_reusejp_4723_:
{
return v___x_4724_;
}
}
}
}
else
{
lean_object* v_a_4727_; lean_object* v___x_4729_; uint8_t v_isShared_4730_; uint8_t v_isSharedCheck_4734_; 
lean_del_object(v___x_4410_);
lean_dec(v_snd_4408_);
lean_dec(v_a_4394_);
lean_dec(v___x_4390_);
lean_dec(v_x_4376_);
v_a_4727_ = lean_ctor_get(v___x_4419_, 0);
v_isSharedCheck_4734_ = !lean_is_exclusive(v___x_4419_);
if (v_isSharedCheck_4734_ == 0)
{
v___x_4729_ = v___x_4419_;
v_isShared_4730_ = v_isSharedCheck_4734_;
goto v_resetjp_4728_;
}
else
{
lean_inc(v_a_4727_);
lean_dec(v___x_4419_);
v___x_4729_ = lean_box(0);
v_isShared_4730_ = v_isSharedCheck_4734_;
goto v_resetjp_4728_;
}
v_resetjp_4728_:
{
lean_object* v___x_4732_; 
if (v_isShared_4730_ == 0)
{
v___x_4732_ = v___x_4729_;
goto v_reusejp_4731_;
}
else
{
lean_object* v_reuseFailAlloc_4733_; 
v_reuseFailAlloc_4733_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4733_, 0, v_a_4727_);
v___x_4732_ = v_reuseFailAlloc_4733_;
goto v_reusejp_4731_;
}
v_reusejp_4731_:
{
return v___x_4732_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4736_; lean_object* v___x_4738_; uint8_t v_isShared_4739_; uint8_t v_isSharedCheck_4743_; 
lean_dec(v_a_4394_);
lean_dec(v___x_4390_);
lean_dec(v_x_4376_);
v_a_4736_ = lean_ctor_get(v___x_4397_, 0);
v_isSharedCheck_4743_ = !lean_is_exclusive(v___x_4397_);
if (v_isSharedCheck_4743_ == 0)
{
v___x_4738_ = v___x_4397_;
v_isShared_4739_ = v_isSharedCheck_4743_;
goto v_resetjp_4737_;
}
else
{
lean_inc(v_a_4736_);
lean_dec(v___x_4397_);
v___x_4738_ = lean_box(0);
v_isShared_4739_ = v_isSharedCheck_4743_;
goto v_resetjp_4737_;
}
v_resetjp_4737_:
{
lean_object* v___x_4741_; 
if (v_isShared_4739_ == 0)
{
v___x_4741_ = v___x_4738_;
goto v_reusejp_4740_;
}
else
{
lean_object* v_reuseFailAlloc_4742_; 
v_reuseFailAlloc_4742_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4742_, 0, v_a_4736_);
v___x_4741_ = v_reuseFailAlloc_4742_;
goto v_reusejp_4740_;
}
v_reusejp_4740_:
{
return v___x_4741_;
}
}
}
}
else
{
lean_object* v_a_4744_; lean_object* v___x_4746_; uint8_t v_isShared_4747_; uint8_t v_isSharedCheck_4751_; 
lean_dec(v_a_4394_);
lean_dec(v___x_4390_);
lean_dec(v_x_4376_);
v_a_4744_ = lean_ctor_get(v___x_4395_, 0);
v_isSharedCheck_4751_ = !lean_is_exclusive(v___x_4395_);
if (v_isSharedCheck_4751_ == 0)
{
v___x_4746_ = v___x_4395_;
v_isShared_4747_ = v_isSharedCheck_4751_;
goto v_resetjp_4745_;
}
else
{
lean_inc(v_a_4744_);
lean_dec(v___x_4395_);
v___x_4746_ = lean_box(0);
v_isShared_4747_ = v_isSharedCheck_4751_;
goto v_resetjp_4745_;
}
v_resetjp_4745_:
{
lean_object* v___x_4749_; 
if (v_isShared_4747_ == 0)
{
v___x_4749_ = v___x_4746_;
goto v_reusejp_4748_;
}
else
{
lean_object* v_reuseFailAlloc_4750_; 
v_reuseFailAlloc_4750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4750_, 0, v_a_4744_);
v___x_4749_ = v_reuseFailAlloc_4750_;
goto v_reusejp_4748_;
}
v_reusejp_4748_:
{
return v___x_4749_;
}
}
}
}
else
{
lean_object* v_a_4752_; lean_object* v___x_4754_; uint8_t v_isShared_4755_; uint8_t v_isSharedCheck_4759_; 
lean_dec(v___x_4390_);
lean_dec(v_x_4376_);
v_a_4752_ = lean_ctor_get(v___x_4393_, 0);
v_isSharedCheck_4759_ = !lean_is_exclusive(v___x_4393_);
if (v_isSharedCheck_4759_ == 0)
{
v___x_4754_ = v___x_4393_;
v_isShared_4755_ = v_isSharedCheck_4759_;
goto v_resetjp_4753_;
}
else
{
lean_inc(v_a_4752_);
lean_dec(v___x_4393_);
v___x_4754_ = lean_box(0);
v_isShared_4755_ = v_isSharedCheck_4759_;
goto v_resetjp_4753_;
}
v_resetjp_4753_:
{
lean_object* v___x_4757_; 
if (v_isShared_4755_ == 0)
{
v___x_4757_ = v___x_4754_;
goto v_reusejp_4756_;
}
else
{
lean_object* v_reuseFailAlloc_4758_; 
v_reuseFailAlloc_4758_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4758_, 0, v_a_4752_);
v___x_4757_ = v_reuseFailAlloc_4758_;
goto v_reusejp_4756_;
}
v_reusejp_4756_:
{
return v___x_4757_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1___boxed(lean_object* v_x_4760_, lean_object* v_a_4761_, lean_object* v_a_4762_, lean_object* v_a_4763_, lean_object* v_a_4764_, lean_object* v_a_4765_, lean_object* v_a_4766_, lean_object* v_a_4767_, lean_object* v_a_4768_, lean_object* v_a_4769_){
_start:
{
lean_object* v_res_4770_; 
v_res_4770_ = lp_Props2Theories___aux__Props2Theories__Axioms______elabRules__tactic__elim__exists__unique__in___x2c___x2c____1(v_x_4760_, v_a_4761_, v_a_4762_, v_a_4763_, v_a_4764_, v_a_4765_, v_a_4766_, v_a_4767_, v_a_4768_);
lean_dec(v_a_4768_);
lean_dec_ref(v_a_4767_);
lean_dec(v_a_4766_);
lean_dec_ref(v_a_4765_);
lean_dec(v_a_4764_);
lean_dec_ref(v_a_4763_);
lean_dec(v_a_4762_);
lean_dec_ref(v_a_4761_);
return v_res_4770_;
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
