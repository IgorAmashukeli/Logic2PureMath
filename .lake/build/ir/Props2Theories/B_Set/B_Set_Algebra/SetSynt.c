// Lean compiler output
// Module: Props2Theories.B_Set.B_Set_Algebra.SetSynt
// Imports: public import Init public meta import Init public import Props2Theories.B_Set.A_Constructions.Task public import Props2Theories.B_Set.B_Set_Algebra.Task
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
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Delaborator_delab___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withAppArg___at___00__private_Lean_Elab_Tactic_Do_Syntax_0__Std_Do_unexpandPostCondNoThrow_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___00Lean_PrettyPrinter_Delaborator_SubExpr_withAppArg___at___00__private_Lean_Elab_Tactic_Do_Syntax_0__Std_Do_unexpandPostCondNoThrow_spec__0_spec__0___redArg(lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withAppArg___at___00__private_Lean_Elab_Tactic_Do_Syntax_0__Std_Do_unexpandPostCondNoThrow_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withAppFn___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Delab_0__Lean_Elab_Tactic_Do_ProofMode_delabMGoal_delabHypotheses_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Macro_throwUnsupported___redArg(lean_object*);
static const lean_string_object lp_Props2Theories_set__comprehension_quot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* lp_Props2Theories_set__comprehension_quot___closed__0 = (const lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__0_value;
static const lean_string_object lp_Props2Theories_set__comprehension_quot___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* lp_Props2Theories_set__comprehension_quot___closed__1 = (const lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__1_value;
static const lean_string_object lp_Props2Theories_set__comprehension_quot___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* lp_Props2Theories_set__comprehension_quot___closed__2 = (const lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__2_value;
static const lean_string_object lp_Props2Theories_set__comprehension_quot___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "quot"};
static const lean_object* lp_Props2Theories_set__comprehension_quot___closed__3 = (const lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__3_value;
static const lean_ctor_object lp_Props2Theories_set__comprehension_quot___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories_set__comprehension_quot___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__4_value_aux_0),((lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_Props2Theories_set__comprehension_quot___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__4_value_aux_1),((lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object lp_Props2Theories_set__comprehension_quot___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__4_value_aux_2),((lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__3_value),LEAN_SCALAR_PTR_LITERAL(145, 163, 173, 41, 168, 168, 65, 81)}};
static const lean_object* lp_Props2Theories_set__comprehension_quot___closed__4 = (const lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__4_value;
static const lean_string_object lp_Props2Theories_set__comprehension_quot___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "set_comprehension"};
static const lean_object* lp_Props2Theories_set__comprehension_quot___closed__5 = (const lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__5_value;
static const lean_ctor_object lp_Props2Theories_set__comprehension_quot___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__5_value),LEAN_SCALAR_PTR_LITERAL(199, 230, 6, 55, 100, 68, 123, 114)}};
static const lean_ctor_object lp_Props2Theories_set__comprehension_quot___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__6_value_aux_0),((lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__3_value),LEAN_SCALAR_PTR_LITERAL(21, 231, 75, 174, 39, 98, 222, 115)}};
static const lean_object* lp_Props2Theories_set__comprehension_quot___closed__6 = (const lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__6_value;
static const lean_string_object lp_Props2Theories_set__comprehension_quot___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* lp_Props2Theories_set__comprehension_quot___closed__7 = (const lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__7_value;
static const lean_ctor_object lp_Props2Theories_set__comprehension_quot___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__7_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* lp_Props2Theories_set__comprehension_quot___closed__8 = (const lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__8_value;
static const lean_string_object lp_Props2Theories_set__comprehension_quot___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "`(set_comprehension| "};
static const lean_object* lp_Props2Theories_set__comprehension_quot___closed__9 = (const lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__9_value;
static const lean_ctor_object lp_Props2Theories_set__comprehension_quot___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__9_value)}};
static const lean_object* lp_Props2Theories_set__comprehension_quot___closed__10 = (const lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__10_value;
static const lean_ctor_object lp_Props2Theories_set__comprehension_quot___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__5_value),LEAN_SCALAR_PTR_LITERAL(199, 230, 6, 55, 100, 68, 123, 114)}};
static const lean_object* lp_Props2Theories_set__comprehension_quot___closed__11 = (const lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__11_value;
static const lean_ctor_object lp_Props2Theories_set__comprehension_quot___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__11_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories_set__comprehension_quot___closed__12 = (const lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__12_value;
static const lean_string_object lp_Props2Theories_set__comprehension_quot___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* lp_Props2Theories_set__comprehension_quot___closed__13 = (const lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__13_value;
static const lean_ctor_object lp_Props2Theories_set__comprehension_quot___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__13_value)}};
static const lean_object* lp_Props2Theories_set__comprehension_quot___closed__14 = (const lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__14_value;
static const lean_ctor_object lp_Props2Theories_set__comprehension_quot___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__8_value),((lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__12_value),((lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__14_value)}};
static const lean_object* lp_Props2Theories_set__comprehension_quot___closed__15 = (const lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__15_value;
static const lean_ctor_object lp_Props2Theories_set__comprehension_quot___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__8_value),((lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__10_value),((lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__15_value)}};
static const lean_object* lp_Props2Theories_set__comprehension_quot___closed__16 = (const lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__16_value;
static const lean_ctor_object lp_Props2Theories_set__comprehension_quot___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__6_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__16_value)}};
static const lean_object* lp_Props2Theories_set__comprehension_quot___closed__17 = (const lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__17_value;
static const lean_ctor_object lp_Props2Theories_set__comprehension_quot___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__4_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__17_value)}};
static const lean_object* lp_Props2Theories_set__comprehension_quot___closed__18 = (const lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__18_value;
LEAN_EXPORT const lean_object* lp_Props2Theories_set__comprehension_quot = (const lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__18_value;
LEAN_EXPORT lean_object* lp_Props2Theories_Lean_Parser_Category_set__comprehension;
static const lean_string_object lp_Props2Theories_set__comprehension___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "set_comprehension_"};
static const lean_object* lp_Props2Theories_set__comprehension___00__closed__0 = (const lean_object*)&lp_Props2Theories_set__comprehension___00__closed__0_value;
static const lean_ctor_object lp_Props2Theories_set__comprehension___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_set__comprehension___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(207, 251, 193, 132, 103, 252, 99, 255)}};
static const lean_object* lp_Props2Theories_set__comprehension___00__closed__1 = (const lean_object*)&lp_Props2Theories_set__comprehension___00__closed__1_value;
static const lean_string_object lp_Props2Theories_set__comprehension___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* lp_Props2Theories_set__comprehension___00__closed__2 = (const lean_object*)&lp_Props2Theories_set__comprehension___00__closed__2_value;
static const lean_ctor_object lp_Props2Theories_set__comprehension___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_set__comprehension___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* lp_Props2Theories_set__comprehension___00__closed__3 = (const lean_object*)&lp_Props2Theories_set__comprehension___00__closed__3_value;
static const lean_ctor_object lp_Props2Theories_set__comprehension___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&lp_Props2Theories_set__comprehension___00__closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories_set__comprehension___00__closed__4 = (const lean_object*)&lp_Props2Theories_set__comprehension___00__closed__4_value;
static const lean_ctor_object lp_Props2Theories_set__comprehension___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Props2Theories_set__comprehension___00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&lp_Props2Theories_set__comprehension___00__closed__4_value)}};
static const lean_object* lp_Props2Theories_set__comprehension___00__closed__5 = (const lean_object*)&lp_Props2Theories_set__comprehension___00__closed__5_value;
LEAN_EXPORT const lean_object* lp_Props2Theories_set__comprehension__ = (const lean_object*)&lp_Props2Theories_set__comprehension___00__closed__5_value;
static const lean_string_object lp_Props2Theories_set__comprehension___x2c___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "set_comprehension_,_"};
static const lean_object* lp_Props2Theories_set__comprehension___x2c___00__closed__0 = (const lean_object*)&lp_Props2Theories_set__comprehension___x2c___00__closed__0_value;
static const lean_ctor_object lp_Props2Theories_set__comprehension___x2c___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_set__comprehension___x2c___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(163, 68, 53, 119, 28, 137, 206, 64)}};
static const lean_object* lp_Props2Theories_set__comprehension___x2c___00__closed__1 = (const lean_object*)&lp_Props2Theories_set__comprehension___x2c___00__closed__1_value;
static const lean_string_object lp_Props2Theories_set__comprehension___x2c___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* lp_Props2Theories_set__comprehension___x2c___00__closed__2 = (const lean_object*)&lp_Props2Theories_set__comprehension___x2c___00__closed__2_value;
static const lean_ctor_object lp_Props2Theories_set__comprehension___x2c___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Props2Theories_set__comprehension___x2c___00__closed__2_value)}};
static const lean_object* lp_Props2Theories_set__comprehension___x2c___00__closed__3 = (const lean_object*)&lp_Props2Theories_set__comprehension___x2c___00__closed__3_value;
static const lean_ctor_object lp_Props2Theories_set__comprehension___x2c___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__8_value),((lean_object*)&lp_Props2Theories_set__comprehension___x2c___00__closed__3_value),((lean_object*)&lp_Props2Theories_set__comprehension___00__closed__4_value)}};
static const lean_object* lp_Props2Theories_set__comprehension___x2c___00__closed__4 = (const lean_object*)&lp_Props2Theories_set__comprehension___x2c___00__closed__4_value;
static const lean_ctor_object lp_Props2Theories_set__comprehension___x2c___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&lp_Props2Theories_set__comprehension___x2c___00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_set__comprehension___x2c___00__closed__4_value)}};
static const lean_object* lp_Props2Theories_set__comprehension___x2c___00__closed__5 = (const lean_object*)&lp_Props2Theories_set__comprehension___x2c___00__closed__5_value;
LEAN_EXPORT const lean_object* lp_Props2Theories_set__comprehension___x2c__ = (const lean_object*)&lp_Props2Theories_set__comprehension___x2c___00__closed__5_value;
LEAN_EXPORT lean_object* lp_Props2Theories_collectSetElems(lean_object*, lean_object*);
static const lean_string_object lp_Props2Theories_term_x7b___x7d__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "term{_}_2"};
static const lean_object* lp_Props2Theories_term_x7b___x7d__2___closed__0 = (const lean_object*)&lp_Props2Theories_term_x7b___x7d__2___closed__0_value;
static const lean_ctor_object lp_Props2Theories_term_x7b___x7d__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_term_x7b___x7d__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(192, 21, 236, 75, 7, 209, 105, 148)}};
static const lean_object* lp_Props2Theories_term_x7b___x7d__2___closed__1 = (const lean_object*)&lp_Props2Theories_term_x7b___x7d__2___closed__1_value;
static const lean_string_object lp_Props2Theories_term_x7b___x7d__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "{"};
static const lean_object* lp_Props2Theories_term_x7b___x7d__2___closed__2 = (const lean_object*)&lp_Props2Theories_term_x7b___x7d__2___closed__2_value;
static const lean_ctor_object lp_Props2Theories_term_x7b___x7d__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Props2Theories_term_x7b___x7d__2___closed__2_value)}};
static const lean_object* lp_Props2Theories_term_x7b___x7d__2___closed__3 = (const lean_object*)&lp_Props2Theories_term_x7b___x7d__2___closed__3_value;
static const lean_ctor_object lp_Props2Theories_term_x7b___x7d__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__8_value),((lean_object*)&lp_Props2Theories_term_x7b___x7d__2___closed__3_value),((lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__12_value)}};
static const lean_object* lp_Props2Theories_term_x7b___x7d__2___closed__4 = (const lean_object*)&lp_Props2Theories_term_x7b___x7d__2___closed__4_value;
static const lean_string_object lp_Props2Theories_term_x7b___x7d__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "}"};
static const lean_object* lp_Props2Theories_term_x7b___x7d__2___closed__5 = (const lean_object*)&lp_Props2Theories_term_x7b___x7d__2___closed__5_value;
static const lean_ctor_object lp_Props2Theories_term_x7b___x7d__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Props2Theories_term_x7b___x7d__2___closed__5_value)}};
static const lean_object* lp_Props2Theories_term_x7b___x7d__2___closed__6 = (const lean_object*)&lp_Props2Theories_term_x7b___x7d__2___closed__6_value;
static const lean_ctor_object lp_Props2Theories_term_x7b___x7d__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__8_value),((lean_object*)&lp_Props2Theories_term_x7b___x7d__2___closed__4_value),((lean_object*)&lp_Props2Theories_term_x7b___x7d__2___closed__6_value)}};
static const lean_object* lp_Props2Theories_term_x7b___x7d__2___closed__7 = (const lean_object*)&lp_Props2Theories_term_x7b___x7d__2___closed__7_value;
static const lean_ctor_object lp_Props2Theories_term_x7b___x7d__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Props2Theories_term_x7b___x7d__2___closed__1_value),((lean_object*)(((size_t)(2000) << 1) | 1)),((lean_object*)&lp_Props2Theories_term_x7b___x7d__2___closed__7_value)}};
static const lean_object* lp_Props2Theories_term_x7b___x7d__2___closed__8 = (const lean_object*)&lp_Props2Theories_term_x7b___x7d__2___closed__8_value;
LEAN_EXPORT const lean_object* lp_Props2Theories_term_x7b___x7d__2 = (const lean_object*)&lp_Props2Theories_term_x7b___x7d__2___closed__8_value;
static const lean_string_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__0 = (const lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__0_value;
static const lean_ctor_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__1_value_aux_0),((lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__1_value_aux_1),((lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__1_value_aux_2),((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__1 = (const lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__1_value;
static const lean_string_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "union2"};
static const lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__2 = (const lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__2_value;
static lean_once_cell_t lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__3;
static const lean_ctor_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(123, 128, 17, 152, 107, 120, 87, 129)}};
static const lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__4 = (const lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__4_value;
static const lean_ctor_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__5 = (const lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__5_value;
static const lean_ctor_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__6 = (const lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__6_value;
static const lean_string_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__7 = (const lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__7_value;
static const lean_ctor_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__8 = (const lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__8_value;
static const lean_string_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__9 = (const lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__9_value;
static const lean_ctor_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__10_value_aux_0),((lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__10_value_aux_1),((lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__10_value_aux_2),((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__9_value),LEAN_SCALAR_PTR_LITERAL(124, 9, 161, 194, 227, 100, 20, 110)}};
static const lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__10 = (const lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__10_value;
static const lean_string_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__11 = (const lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__11_value;
static const lean_ctor_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__12_value_aux_0),((lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__12_value_aux_1),((lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__12_value_aux_2),((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__11_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__12 = (const lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__12_value;
static const lean_string_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__13 = (const lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__13_value;
static const lean_string_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__14 = (const lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__14_value;
static const lean_ctor_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__14_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__15 = (const lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__15_value;
static const lean_string_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__16 = (const lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__16_value;
static lean_once_cell_t lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__17;
static const lean_ctor_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__18 = (const lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__18_value;
static const lean_string_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "SubExpr"};
static const lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__19 = (const lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__19_value;
static const lean_ctor_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__20_value_aux_0),((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__19_value),LEAN_SCALAR_PTR_LITERAL(170, 131, 175, 90, 105, 49, 153, 209)}};
static const lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__20 = (const lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__20_value;
static const lean_ctor_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__20_value)}};
static const lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__21 = (const lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__21_value;
static const lean_string_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "PrettyPrinter"};
static const lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__22 = (const lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__22_value;
static const lean_string_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Delaborator"};
static const lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__23 = (const lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__23_value;
static const lean_ctor_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__24_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__24_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__24_value_aux_0),((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__22_value),LEAN_SCALAR_PTR_LITERAL(120, 167, 117, 148, 131, 202, 42, 4)}};
static const lean_ctor_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__24_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__24_value_aux_1),((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__23_value),LEAN_SCALAR_PTR_LITERAL(79, 126, 247, 124, 241, 28, 11, 244)}};
static const lean_ctor_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__24_value_aux_2),((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__19_value),LEAN_SCALAR_PTR_LITERAL(231, 152, 1, 212, 81, 225, 23, 202)}};
static const lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__24 = (const lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__24_value;
static const lean_ctor_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__24_value)}};
static const lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__25 = (const lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__25_value;
static const lean_ctor_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__26_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__26_value_aux_0),((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__22_value),LEAN_SCALAR_PTR_LITERAL(120, 167, 117, 148, 131, 202, 42, 4)}};
static const lean_ctor_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__26_value_aux_1),((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__23_value),LEAN_SCALAR_PTR_LITERAL(79, 126, 247, 124, 241, 28, 11, 244)}};
static const lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__26 = (const lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__26_value;
static const lean_ctor_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__26_value)}};
static const lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__27 = (const lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__27_value;
static const lean_ctor_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__28_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__28_value_aux_0),((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__22_value),LEAN_SCALAR_PTR_LITERAL(120, 167, 117, 148, 131, 202, 42, 4)}};
static const lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__28 = (const lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__28_value;
static const lean_ctor_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__28_value)}};
static const lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__29 = (const lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__29_value;
static const lean_string_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__30 = (const lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__30_value;
static const lean_ctor_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__31_value_aux_0),((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__30_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__31 = (const lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__31_value;
static const lean_ctor_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__31_value)}};
static const lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__32 = (const lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__32_value;
static const lean_string_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__33 = (const lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__33_value;
static const lean_ctor_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__34_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__34_value_aux_0),((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__33_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__34 = (const lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__34_value;
static const lean_ctor_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__34_value)}};
static const lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__35 = (const lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__35_value;
static const lean_ctor_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_set__comprehension_quot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__36 = (const lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__36_value;
static const lean_ctor_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__36_value)}};
static const lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__37 = (const lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__37_value;
static const lean_ctor_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__37_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__38 = (const lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__38_value;
static const lean_ctor_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__35_value),((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__38_value)}};
static const lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__39 = (const lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__39_value;
static const lean_ctor_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__32_value),((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__39_value)}};
static const lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__40 = (const lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__40_value;
static const lean_ctor_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__29_value),((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__40_value)}};
static const lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__41 = (const lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__41_value;
static const lean_ctor_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__27_value),((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__41_value)}};
static const lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__42 = (const lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__42_value;
static const lean_ctor_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__25_value),((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__42_value)}};
static const lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__43 = (const lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__43_value;
static const lean_ctor_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__21_value),((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__43_value)}};
static const lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__44 = (const lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__44_value;
static const lean_ctor_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__18_value),((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__44_value)}};
static const lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__45 = (const lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__45_value;
static const lean_string_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "singleton_set"};
static const lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__46 = (const lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__46_value;
static lean_once_cell_t lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__47_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__47;
static const lean_ctor_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__46_value),LEAN_SCALAR_PTR_LITERAL(131, 0, 146, 165, 219, 198, 126, 157)}};
static const lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__48 = (const lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__48_value;
static const lean_ctor_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__48_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__49 = (const lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__49_value;
static const lean_ctor_object lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__49_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__50 = (const lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__50_value;
LEAN_EXPORT lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__48_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1___closed__0 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1___closed__0_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1___closed__1 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1___closed__1_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "unord_pr_set"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1___closed__2 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1___closed__2_value;
static lean_once_cell_t lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1___closed__3;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(146, 216, 98, 112, 203, 254, 30, 246)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1___closed__4 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1___closed__4_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1___closed__5 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1___closed__5_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1___closed__6 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1___closed__6_value;
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_Props2Theories_collectExprElems___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Delaborator_delab___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_Props2Theories_collectExprElems___closed__0 = (const lean_object*)&lp_Props2Theories_collectExprElems___closed__0_value;
static const lean_closure_object lp_Props2Theories_collectExprElems___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Delaborator_SubExpr_withAppArg___at___00__private_Lean_Elab_Tactic_Do_Syntax_0__Std_Do_unexpandPostCondNoThrow_spec__0___boxed, .m_arity = 9, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_collectExprElems___closed__0_value)} };
static const lean_object* lp_Props2Theories_collectExprElems___closed__1 = (const lean_object*)&lp_Props2Theories_collectExprElems___closed__1_value;
static lean_once_cell_t lp_Props2Theories_collectExprElems___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Props2Theories_collectExprElems___closed__2;
static const lean_string_object lp_Props2Theories_collectExprElems___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "term{_}_1"};
static const lean_object* lp_Props2Theories_collectExprElems___closed__3 = (const lean_object*)&lp_Props2Theories_collectExprElems___closed__3_value;
static const lean_ctor_object lp_Props2Theories_collectExprElems___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_collectExprElems___closed__3_value),LEAN_SCALAR_PTR_LITERAL(176, 199, 131, 167, 118, 125, 168, 88)}};
static const lean_object* lp_Props2Theories_collectExprElems___closed__4 = (const lean_object*)&lp_Props2Theories_collectExprElems___closed__4_value;
LEAN_EXPORT lean_object* lp_Props2Theories_collectExprElems___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories_collectExprElems(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Props2Theories_List_forIn_x27_loop___at___00delabUnionChain_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00delabUnionChain_spec__0___redArg___closed__0 = (const lean_object*)&lp_Props2Theories_List_forIn_x27_loop___at___00delabUnionChain_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00delabUnionChain_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00delabUnionChain_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Props2Theories_delabUnionChain___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "choice"};
static const lean_object* lp_Props2Theories_delabUnionChain___closed__0 = (const lean_object*)&lp_Props2Theories_delabUnionChain___closed__0_value;
static const lean_ctor_object lp_Props2Theories_delabUnionChain___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_delabUnionChain___closed__0_value),LEAN_SCALAR_PTR_LITERAL(59, 66, 148, 42, 181, 100, 85, 166)}};
static const lean_object* lp_Props2Theories_delabUnionChain___closed__1 = (const lean_object*)&lp_Props2Theories_delabUnionChain___closed__1_value;
static const lean_string_object lp_Props2Theories_delabUnionChain___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 9, .m_data = "term_∪__1"};
static const lean_object* lp_Props2Theories_delabUnionChain___closed__2 = (const lean_object*)&lp_Props2Theories_delabUnionChain___closed__2_value;
static const lean_ctor_object lp_Props2Theories_delabUnionChain___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_delabUnionChain___closed__2_value),LEAN_SCALAR_PTR_LITERAL(72, 73, 75, 27, 22, 238, 147, 205)}};
static const lean_object* lp_Props2Theories_delabUnionChain___closed__3 = (const lean_object*)&lp_Props2Theories_delabUnionChain___closed__3_value;
static const lean_string_object lp_Props2Theories_delabUnionChain___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "∪"};
static const lean_object* lp_Props2Theories_delabUnionChain___closed__4 = (const lean_object*)&lp_Props2Theories_delabUnionChain___closed__4_value;
static const lean_string_object lp_Props2Theories_delabUnionChain___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 7, .m_data = "term_∪_"};
static const lean_object* lp_Props2Theories_delabUnionChain___closed__5 = (const lean_object*)&lp_Props2Theories_delabUnionChain___closed__5_value;
static const lean_ctor_object lp_Props2Theories_delabUnionChain___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_delabUnionChain___closed__5_value),LEAN_SCALAR_PTR_LITERAL(202, 164, 141, 67, 105, 98, 49, 125)}};
static const lean_object* lp_Props2Theories_delabUnionChain___closed__6 = (const lean_object*)&lp_Props2Theories_delabUnionChain___closed__6_value;
LEAN_EXPORT lean_object* lp_Props2Theories_delabUnionChain(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories_delabUnionChain___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00delabUnionChain_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00delabUnionChain_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Props2Theories_unexpandUnordPrSet___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "term{_,_}"};
static const lean_object* lp_Props2Theories_unexpandUnordPrSet___closed__0 = (const lean_object*)&lp_Props2Theories_unexpandUnordPrSet___closed__0_value;
static const lean_ctor_object lp_Props2Theories_unexpandUnordPrSet___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_unexpandUnordPrSet___closed__0_value),LEAN_SCALAR_PTR_LITERAL(75, 186, 203, 123, 84, 126, 92, 150)}};
static const lean_object* lp_Props2Theories_unexpandUnordPrSet___closed__1 = (const lean_object*)&lp_Props2Theories_unexpandUnordPrSet___closed__1_value;
LEAN_EXPORT lean_object* lp_Props2Theories_unexpandUnordPrSet(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories_unexpandUnordPrSet___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories_unexpandSingletonSet(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories_unexpandSingletonSet___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* _init_lp_Props2Theories_Lean_Parser_Category_set__comprehension(void){
_start:
{
lean_object* v___x_45_; 
v___x_45_ = lean_box(0);
return v___x_45_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories_collectSetElems(lean_object* v_stx_76_, lean_object* v_acc_77_){
_start:
{
lean_object* v___x_78_; uint8_t v___x_79_; 
v___x_78_ = ((lean_object*)(lp_Props2Theories_set__comprehension___x2c___00__closed__1));
lean_inc(v_stx_76_);
v___x_79_ = l_Lean_Syntax_isOfKind(v_stx_76_, v___x_78_);
if (v___x_79_ == 0)
{
lean_object* v___x_80_; uint8_t v___x_81_; 
v___x_80_ = ((lean_object*)(lp_Props2Theories_set__comprehension___00__closed__1));
lean_inc(v_stx_76_);
v___x_81_ = l_Lean_Syntax_isOfKind(v_stx_76_, v___x_80_);
if (v___x_81_ == 0)
{
lean_dec(v_stx_76_);
return v_acc_77_;
}
else
{
lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; 
v___x_82_ = lean_unsigned_to_nat(0u);
v___x_83_ = l_Lean_Syntax_getArg(v_stx_76_, v___x_82_);
lean_dec(v_stx_76_);
v___x_84_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_84_, 0, v___x_83_);
lean_ctor_set(v___x_84_, 1, v_acc_77_);
return v___x_84_;
}
}
else
{
lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_85_ = lean_unsigned_to_nat(0u);
v___x_86_ = l_Lean_Syntax_getArg(v_stx_76_, v___x_85_);
v___x_87_ = lean_unsigned_to_nat(2u);
v___x_88_ = l_Lean_Syntax_getArg(v_stx_76_, v___x_87_);
lean_dec(v_stx_76_);
v___x_89_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_89_, 0, v___x_88_);
lean_ctor_set(v___x_89_, 1, v_acc_77_);
v_stx_76_ = v___x_86_;
v_acc_77_ = v___x_89_;
goto _start;
}
}
}
static lean_object* _init_lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_120_; lean_object* v___x_121_; 
v___x_120_ = ((lean_object*)(lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__2));
v___x_121_ = l_String_toRawSubstring_x27(v___x_120_);
return v___x_121_;
}
}
static lean_object* _init_lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__17(void){
_start:
{
lean_object* v___x_150_; lean_object* v___x_151_; 
v___x_150_ = ((lean_object*)(lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__16));
v___x_151_ = l_String_toRawSubstring_x27(v___x_150_);
return v___x_151_;
}
}
static lean_object* _init_lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__47(void){
_start:
{
lean_object* v___x_221_; lean_object* v___x_222_; 
v___x_221_ = ((lean_object*)(lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__46));
v___x_222_ = l_String_toRawSubstring_x27(v___x_221_);
return v___x_222_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg(lean_object* v_as_x27_231_, lean_object* v_b_232_, lean_object* v___y_233_, lean_object* v___y_234_){
_start:
{
if (lean_obj_tag(v_as_x27_231_) == 0)
{
lean_object* v___x_235_; 
v___x_235_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_235_, 0, v_b_232_);
lean_ctor_set(v___x_235_, 1, v___y_234_);
return v___x_235_;
}
else
{
lean_object* v_head_236_; lean_object* v_tail_237_; lean_object* v___x_239_; uint8_t v_isShared_240_; uint8_t v_isSharedCheck_280_; 
v_head_236_ = lean_ctor_get(v_as_x27_231_, 0);
v_tail_237_ = lean_ctor_get(v_as_x27_231_, 1);
v_isSharedCheck_280_ = !lean_is_exclusive(v_as_x27_231_);
if (v_isSharedCheck_280_ == 0)
{
v___x_239_ = v_as_x27_231_;
v_isShared_240_ = v_isSharedCheck_280_;
goto v_resetjp_238_;
}
else
{
lean_inc(v_tail_237_);
lean_inc(v_head_236_);
lean_dec(v_as_x27_231_);
v___x_239_ = lean_box(0);
v_isShared_240_ = v_isSharedCheck_280_;
goto v_resetjp_238_;
}
v_resetjp_238_:
{
lean_object* v_quotContext_241_; lean_object* v_currMacroScope_242_; lean_object* v_ref_243_; uint8_t v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_257_; 
v_quotContext_241_ = lean_ctor_get(v___y_233_, 1);
v_currMacroScope_242_ = lean_ctor_get(v___y_233_, 2);
v_ref_243_ = lean_ctor_get(v___y_233_, 5);
v___x_244_ = 0;
v___x_245_ = l_Lean_SourceInfo_fromRef(v_ref_243_, v___x_244_);
v___x_246_ = ((lean_object*)(lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__1));
v___x_247_ = lean_obj_once(&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__3, &lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__3_once, _init_lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__3);
v___x_248_ = ((lean_object*)(lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__4));
lean_inc(v_currMacroScope_242_);
lean_inc(v_quotContext_241_);
v___x_249_ = l_Lean_addMacroScope(v_quotContext_241_, v___x_248_, v_currMacroScope_242_);
v___x_250_ = ((lean_object*)(lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__6));
lean_inc_n(v___x_245_, 2);
v___x_251_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_251_, 0, v___x_245_);
lean_ctor_set(v___x_251_, 1, v___x_247_);
lean_ctor_set(v___x_251_, 2, v___x_249_);
lean_ctor_set(v___x_251_, 3, v___x_250_);
v___x_252_ = ((lean_object*)(lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__8));
v___x_253_ = ((lean_object*)(lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__10));
v___x_254_ = ((lean_object*)(lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__12));
v___x_255_ = ((lean_object*)(lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__13));
if (v_isShared_240_ == 0)
{
lean_ctor_set_tag(v___x_239_, 2);
lean_ctor_set(v___x_239_, 1, v___x_255_);
lean_ctor_set(v___x_239_, 0, v___x_245_);
v___x_257_ = v___x_239_;
goto v_reusejp_256_;
}
else
{
lean_object* v_reuseFailAlloc_279_; 
v_reuseFailAlloc_279_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_279_, 0, v___x_245_);
lean_ctor_set(v_reuseFailAlloc_279_, 1, v___x_255_);
v___x_257_ = v_reuseFailAlloc_279_;
goto v_reusejp_256_;
}
v_reusejp_256_:
{
lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; 
v___x_258_ = ((lean_object*)(lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__15));
v___x_259_ = lean_obj_once(&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__17, &lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__17_once, _init_lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__17);
v___x_260_ = lean_box(0);
lean_inc_n(v_currMacroScope_242_, 2);
lean_inc_n(v_quotContext_241_, 2);
v___x_261_ = l_Lean_addMacroScope(v_quotContext_241_, v___x_260_, v_currMacroScope_242_);
v___x_262_ = ((lean_object*)(lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__45));
lean_inc_n(v___x_245_, 9);
v___x_263_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_263_, 0, v___x_245_);
lean_ctor_set(v___x_263_, 1, v___x_259_);
lean_ctor_set(v___x_263_, 2, v___x_261_);
lean_ctor_set(v___x_263_, 3, v___x_262_);
v___x_264_ = l_Lean_Syntax_node1(v___x_245_, v___x_258_, v___x_263_);
v___x_265_ = l_Lean_Syntax_node2(v___x_245_, v___x_254_, v___x_257_, v___x_264_);
v___x_266_ = lean_obj_once(&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__47, &lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__47_once, _init_lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__47);
v___x_267_ = ((lean_object*)(lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__48));
v___x_268_ = l_Lean_addMacroScope(v_quotContext_241_, v___x_267_, v_currMacroScope_242_);
v___x_269_ = ((lean_object*)(lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__50));
v___x_270_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_270_, 0, v___x_245_);
lean_ctor_set(v___x_270_, 1, v___x_266_);
lean_ctor_set(v___x_270_, 2, v___x_268_);
lean_ctor_set(v___x_270_, 3, v___x_269_);
v___x_271_ = l_Lean_Syntax_node1(v___x_245_, v___x_252_, v_head_236_);
v___x_272_ = l_Lean_Syntax_node2(v___x_245_, v___x_246_, v___x_270_, v___x_271_);
v___x_273_ = ((lean_object*)(lp_Props2Theories_set__comprehension_quot___closed__13));
v___x_274_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_274_, 0, v___x_245_);
lean_ctor_set(v___x_274_, 1, v___x_273_);
v___x_275_ = l_Lean_Syntax_node3(v___x_245_, v___x_253_, v___x_265_, v___x_272_, v___x_274_);
v___x_276_ = l_Lean_Syntax_node2(v___x_245_, v___x_252_, v_b_232_, v___x_275_);
v___x_277_ = l_Lean_Syntax_node2(v___x_245_, v___x_246_, v___x_251_, v___x_276_);
v_as_x27_231_ = v_tail_237_;
v_b_232_ = v___x_277_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___boxed(lean_object* v_as_x27_281_, lean_object* v_b_282_, lean_object* v___y_283_, lean_object* v___y_284_){
_start:
{
lean_object* v_res_285_; 
v_res_285_ = lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg(v_as_x27_281_, v_b_282_, v___y_283_, v___y_284_);
lean_dec_ref(v___y_283_);
return v_res_285_;
}
}
static lean_object* _init_lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1___closed__3(void){
_start:
{
lean_object* v___x_293_; lean_object* v___x_294_; 
v___x_293_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1___closed__2));
v___x_294_ = l_String_toRawSubstring_x27(v___x_293_);
return v___x_294_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1(lean_object* v_x_303_, lean_object* v_a_304_, lean_object* v_a_305_){
_start:
{
lean_object* v___y_307_; lean_object* v___x_326_; uint8_t v___x_327_; 
v___x_326_ = ((lean_object*)(lp_Props2Theories_term_x7b___x7d__2___closed__1));
lean_inc(v_x_303_);
v___x_327_ = l_Lean_Syntax_isOfKind(v_x_303_, v___x_326_);
if (v___x_327_ == 0)
{
lean_object* v___x_328_; lean_object* v___x_329_; 
lean_dec(v_x_303_);
v___x_328_ = lean_box(1);
v___x_329_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_329_, 0, v___x_328_);
lean_ctor_set(v___x_329_, 1, v_a_305_);
return v___x_329_;
}
else
{
lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v_elems_333_; 
v___x_330_ = lean_unsigned_to_nat(1u);
v___x_331_ = l_Lean_Syntax_getArg(v_x_303_, v___x_330_);
lean_dec(v_x_303_);
v___x_332_ = lean_box(0);
v_elems_333_ = lp_Props2Theories_collectSetElems(v___x_331_, v___x_332_);
if (lean_obj_tag(v_elems_333_) == 0)
{
lean_object* v___x_334_; 
v___x_334_ = l_Lean_Macro_throwUnsupported___redArg(v_a_305_);
v___y_307_ = v___x_334_;
goto v___jp_306_;
}
else
{
lean_object* v_tail_335_; 
v_tail_335_ = lean_ctor_get(v_elems_333_, 1);
lean_inc(v_tail_335_);
if (lean_obj_tag(v_tail_335_) == 0)
{
lean_object* v_head_336_; lean_object* v___x_338_; uint8_t v_isShared_339_; uint8_t v_isSharedCheck_357_; 
v_head_336_ = lean_ctor_get(v_elems_333_, 0);
v_isSharedCheck_357_ = !lean_is_exclusive(v_elems_333_);
if (v_isSharedCheck_357_ == 0)
{
lean_object* v_unused_358_; 
v_unused_358_ = lean_ctor_get(v_elems_333_, 1);
lean_dec(v_unused_358_);
v___x_338_ = v_elems_333_;
v_isShared_339_ = v_isSharedCheck_357_;
goto v_resetjp_337_;
}
else
{
lean_inc(v_head_336_);
lean_dec(v_elems_333_);
v___x_338_ = lean_box(0);
v_isShared_339_ = v_isSharedCheck_357_;
goto v_resetjp_337_;
}
v_resetjp_337_:
{
lean_object* v_quotContext_340_; lean_object* v_currMacroScope_341_; lean_object* v_ref_342_; uint8_t v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_355_; 
v_quotContext_340_ = lean_ctor_get(v_a_304_, 1);
v_currMacroScope_341_ = lean_ctor_get(v_a_304_, 2);
v_ref_342_ = lean_ctor_get(v_a_304_, 5);
v___x_343_ = 0;
v___x_344_ = l_Lean_SourceInfo_fromRef(v_ref_342_, v___x_343_);
v___x_345_ = ((lean_object*)(lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__1));
v___x_346_ = lean_obj_once(&lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__47, &lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__47_once, _init_lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__47);
v___x_347_ = ((lean_object*)(lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__48));
lean_inc(v_currMacroScope_341_);
lean_inc(v_quotContext_340_);
v___x_348_ = l_Lean_addMacroScope(v_quotContext_340_, v___x_347_, v_currMacroScope_341_);
v___x_349_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1___closed__1));
lean_inc_n(v___x_344_, 2);
v___x_350_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_350_, 0, v___x_344_);
lean_ctor_set(v___x_350_, 1, v___x_346_);
lean_ctor_set(v___x_350_, 2, v___x_348_);
lean_ctor_set(v___x_350_, 3, v___x_349_);
v___x_351_ = ((lean_object*)(lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__8));
v___x_352_ = l_Lean_Syntax_node1(v___x_344_, v___x_351_, v_head_336_);
v___x_353_ = l_Lean_Syntax_node2(v___x_344_, v___x_345_, v___x_350_, v___x_352_);
if (v_isShared_339_ == 0)
{
lean_ctor_set_tag(v___x_338_, 0);
lean_ctor_set(v___x_338_, 1, v_a_305_);
lean_ctor_set(v___x_338_, 0, v___x_353_);
v___x_355_ = v___x_338_;
goto v_reusejp_354_;
}
else
{
lean_object* v_reuseFailAlloc_356_; 
v_reuseFailAlloc_356_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_356_, 0, v___x_353_);
lean_ctor_set(v_reuseFailAlloc_356_, 1, v_a_305_);
v___x_355_ = v_reuseFailAlloc_356_;
goto v_reusejp_354_;
}
v_reusejp_354_:
{
return v___x_355_;
}
}
}
else
{
lean_object* v_tail_359_; 
v_tail_359_ = lean_ctor_get(v_tail_335_, 1);
if (lean_obj_tag(v_tail_359_) == 0)
{
lean_object* v_head_360_; lean_object* v_head_361_; lean_object* v___x_363_; uint8_t v_isShared_364_; uint8_t v_isSharedCheck_382_; 
v_head_360_ = lean_ctor_get(v_elems_333_, 0);
lean_inc(v_head_360_);
lean_dec_ref(v_elems_333_);
v_head_361_ = lean_ctor_get(v_tail_335_, 0);
v_isSharedCheck_382_ = !lean_is_exclusive(v_tail_335_);
if (v_isSharedCheck_382_ == 0)
{
lean_object* v_unused_383_; 
v_unused_383_ = lean_ctor_get(v_tail_335_, 1);
lean_dec(v_unused_383_);
v___x_363_ = v_tail_335_;
v_isShared_364_ = v_isSharedCheck_382_;
goto v_resetjp_362_;
}
else
{
lean_inc(v_head_361_);
lean_dec(v_tail_335_);
v___x_363_ = lean_box(0);
v_isShared_364_ = v_isSharedCheck_382_;
goto v_resetjp_362_;
}
v_resetjp_362_:
{
lean_object* v_quotContext_365_; lean_object* v_currMacroScope_366_; lean_object* v_ref_367_; uint8_t v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_380_; 
v_quotContext_365_ = lean_ctor_get(v_a_304_, 1);
v_currMacroScope_366_ = lean_ctor_get(v_a_304_, 2);
v_ref_367_ = lean_ctor_get(v_a_304_, 5);
v___x_368_ = 0;
v___x_369_ = l_Lean_SourceInfo_fromRef(v_ref_367_, v___x_368_);
v___x_370_ = ((lean_object*)(lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__1));
v___x_371_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1___closed__3, &lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1___closed__3_once, _init_lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1___closed__3);
v___x_372_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1___closed__4));
lean_inc(v_currMacroScope_366_);
lean_inc(v_quotContext_365_);
v___x_373_ = l_Lean_addMacroScope(v_quotContext_365_, v___x_372_, v_currMacroScope_366_);
v___x_374_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1___closed__6));
lean_inc_n(v___x_369_, 2);
v___x_375_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_375_, 0, v___x_369_);
lean_ctor_set(v___x_375_, 1, v___x_371_);
lean_ctor_set(v___x_375_, 2, v___x_373_);
lean_ctor_set(v___x_375_, 3, v___x_374_);
v___x_376_ = ((lean_object*)(lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__8));
v___x_377_ = l_Lean_Syntax_node2(v___x_369_, v___x_376_, v_head_360_, v_head_361_);
v___x_378_ = l_Lean_Syntax_node2(v___x_369_, v___x_370_, v___x_375_, v___x_377_);
if (v_isShared_364_ == 0)
{
lean_ctor_set_tag(v___x_363_, 0);
lean_ctor_set(v___x_363_, 1, v_a_305_);
lean_ctor_set(v___x_363_, 0, v___x_378_);
v___x_380_ = v___x_363_;
goto v_reusejp_379_;
}
else
{
lean_object* v_reuseFailAlloc_381_; 
v_reuseFailAlloc_381_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_381_, 0, v___x_378_);
lean_ctor_set(v_reuseFailAlloc_381_, 1, v_a_305_);
v___x_380_ = v_reuseFailAlloc_381_;
goto v_reusejp_379_;
}
v_reusejp_379_:
{
return v___x_380_;
}
}
}
else
{
lean_object* v_head_384_; lean_object* v_head_385_; lean_object* v_quotContext_386_; lean_object* v_currMacroScope_387_; lean_object* v_ref_388_; uint8_t v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; 
lean_inc(v_tail_359_);
v_head_384_ = lean_ctor_get(v_elems_333_, 0);
lean_inc(v_head_384_);
lean_dec_ref(v_elems_333_);
v_head_385_ = lean_ctor_get(v_tail_335_, 0);
lean_inc(v_head_385_);
lean_dec_ref(v_tail_335_);
v_quotContext_386_ = lean_ctor_get(v_a_304_, 1);
v_currMacroScope_387_ = lean_ctor_get(v_a_304_, 2);
v_ref_388_ = lean_ctor_get(v_a_304_, 5);
v___x_389_ = 0;
v___x_390_ = l_Lean_SourceInfo_fromRef(v_ref_388_, v___x_389_);
v___x_391_ = ((lean_object*)(lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__1));
v___x_392_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1___closed__3, &lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1___closed__3_once, _init_lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1___closed__3);
v___x_393_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1___closed__4));
lean_inc(v_currMacroScope_387_);
lean_inc(v_quotContext_386_);
v___x_394_ = l_Lean_addMacroScope(v_quotContext_386_, v___x_393_, v_currMacroScope_387_);
v___x_395_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1___closed__6));
lean_inc_n(v___x_390_, 2);
v___x_396_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_396_, 0, v___x_390_);
lean_ctor_set(v___x_396_, 1, v___x_392_);
lean_ctor_set(v___x_396_, 2, v___x_394_);
lean_ctor_set(v___x_396_, 3, v___x_395_);
v___x_397_ = ((lean_object*)(lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__8));
v___x_398_ = l_Lean_Syntax_node2(v___x_390_, v___x_397_, v_head_384_, v_head_385_);
v___x_399_ = l_Lean_Syntax_node2(v___x_390_, v___x_391_, v___x_396_, v___x_398_);
v___x_400_ = lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg(v_tail_359_, v___x_399_, v_a_304_, v_a_305_);
v___y_307_ = v___x_400_;
goto v___jp_306_;
}
}
}
}
v___jp_306_:
{
if (lean_obj_tag(v___y_307_) == 0)
{
lean_object* v_a_308_; lean_object* v_a_309_; lean_object* v___x_311_; uint8_t v_isShared_312_; uint8_t v_isSharedCheck_316_; 
v_a_308_ = lean_ctor_get(v___y_307_, 0);
v_a_309_ = lean_ctor_get(v___y_307_, 1);
v_isSharedCheck_316_ = !lean_is_exclusive(v___y_307_);
if (v_isSharedCheck_316_ == 0)
{
v___x_311_ = v___y_307_;
v_isShared_312_ = v_isSharedCheck_316_;
goto v_resetjp_310_;
}
else
{
lean_inc(v_a_309_);
lean_inc(v_a_308_);
lean_dec(v___y_307_);
v___x_311_ = lean_box(0);
v_isShared_312_ = v_isSharedCheck_316_;
goto v_resetjp_310_;
}
v_resetjp_310_:
{
lean_object* v___x_314_; 
if (v_isShared_312_ == 0)
{
v___x_314_ = v___x_311_;
goto v_reusejp_313_;
}
else
{
lean_object* v_reuseFailAlloc_315_; 
v_reuseFailAlloc_315_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_315_, 0, v_a_308_);
lean_ctor_set(v_reuseFailAlloc_315_, 1, v_a_309_);
v___x_314_ = v_reuseFailAlloc_315_;
goto v_reusejp_313_;
}
v_reusejp_313_:
{
return v___x_314_;
}
}
}
else
{
lean_object* v_a_317_; lean_object* v_a_318_; lean_object* v___x_320_; uint8_t v_isShared_321_; uint8_t v_isSharedCheck_325_; 
v_a_317_ = lean_ctor_get(v___y_307_, 0);
v_a_318_ = lean_ctor_get(v___y_307_, 1);
v_isSharedCheck_325_ = !lean_is_exclusive(v___y_307_);
if (v_isSharedCheck_325_ == 0)
{
v___x_320_ = v___y_307_;
v_isShared_321_ = v_isSharedCheck_325_;
goto v_resetjp_319_;
}
else
{
lean_inc(v_a_318_);
lean_inc(v_a_317_);
lean_dec(v___y_307_);
v___x_320_ = lean_box(0);
v_isShared_321_ = v_isSharedCheck_325_;
goto v_resetjp_319_;
}
v_resetjp_319_:
{
lean_object* v___x_323_; 
if (v_isShared_321_ == 0)
{
v___x_323_ = v___x_320_;
goto v_reusejp_322_;
}
else
{
lean_object* v_reuseFailAlloc_324_; 
v_reuseFailAlloc_324_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_324_, 0, v_a_317_);
lean_ctor_set(v_reuseFailAlloc_324_, 1, v_a_318_);
v___x_323_ = v_reuseFailAlloc_324_;
goto v_reusejp_322_;
}
v_reusejp_322_:
{
return v___x_323_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1___boxed(lean_object* v_x_401_, lean_object* v_a_402_, lean_object* v_a_403_){
_start:
{
lean_object* v_res_404_; 
v_res_404_ = lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1(v_x_401_, v_a_402_, v_a_403_);
lean_dec_ref(v_a_402_);
return v_res_404_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0(lean_object* v_as_405_, lean_object* v_as_x27_406_, lean_object* v_b_407_, lean_object* v_a_408_, lean_object* v___y_409_, lean_object* v___y_410_){
_start:
{
lean_object* v___x_411_; 
v___x_411_ = lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg(v_as_x27_406_, v_b_407_, v___y_409_, v___y_410_);
return v___x_411_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___boxed(lean_object* v_as_412_, lean_object* v_as_x27_413_, lean_object* v_b_414_, lean_object* v_a_415_, lean_object* v___y_416_, lean_object* v___y_417_){
_start:
{
lean_object* v_res_418_; 
v_res_418_ = lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0(v_as_412_, v_as_x27_413_, v_b_414_, v_a_415_, v___y_416_, v___y_417_);
lean_dec_ref(v___y_416_);
lean_dec(v_as_412_);
return v_res_418_;
}
}
static lean_object* _init_lp_Props2Theories_collectExprElems___closed__2(void){
_start:
{
lean_object* v___x_422_; lean_object* v_dummy_423_; 
v___x_422_ = lean_box(0);
v_dummy_423_ = l_Lean_Expr_sort___override(v___x_422_);
return v_dummy_423_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories_collectExprElems___boxed(lean_object* v_a_427_, lean_object* v_a_428_, lean_object* v_a_429_, lean_object* v_a_430_, lean_object* v_a_431_, lean_object* v_a_432_, lean_object* v_a_433_){
_start:
{
lean_object* v_res_434_; 
v_res_434_ = lp_Props2Theories_collectExprElems(v_a_427_, v_a_428_, v_a_429_, v_a_430_, v_a_431_, v_a_432_);
lean_dec(v_a_432_);
lean_dec_ref(v_a_431_);
lean_dec(v_a_430_);
lean_dec_ref(v_a_429_);
lean_dec(v_a_428_);
lean_dec_ref(v_a_427_);
return v_res_434_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories_collectExprElems(lean_object* v_a_435_, lean_object* v_a_436_, lean_object* v_a_437_, lean_object* v_a_438_, lean_object* v_a_439_, lean_object* v_a_440_){
_start:
{
lean_object* v___x_442_; 
v___x_442_ = l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___00Lean_PrettyPrinter_Delaborator_SubExpr_withAppArg___at___00__private_Lean_Elab_Tactic_Do_Syntax_0__Std_Do_unexpandPostCondNoThrow_spec__0_spec__0___redArg(v_a_435_);
if (lean_obj_tag(v___x_442_) == 0)
{
lean_object* v_a_443_; lean_object* v___x_445_; uint8_t v_isShared_446_; uint8_t v_isSharedCheck_560_; 
v_a_443_ = lean_ctor_get(v___x_442_, 0);
v_isSharedCheck_560_ = !lean_is_exclusive(v___x_442_);
if (v_isSharedCheck_560_ == 0)
{
v___x_445_ = v___x_442_;
v_isShared_446_ = v_isSharedCheck_560_;
goto v_resetjp_444_;
}
else
{
lean_inc(v_a_443_);
lean_dec(v___x_442_);
v___x_445_ = lean_box(0);
v_isShared_446_ = v_isSharedCheck_560_;
goto v_resetjp_444_;
}
v_resetjp_444_:
{
lean_object* v___x_447_; lean_object* v___x_448_; uint8_t v___x_449_; 
v___x_447_ = ((lean_object*)(lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__4));
v___x_448_ = lean_unsigned_to_nat(2u);
v___x_449_ = l_Lean_Expr_isAppOfArity(v_a_443_, v___x_447_, v___x_448_);
if (v___x_449_ == 0)
{
lean_object* v___x_450_; uint8_t v___x_451_; 
v___x_450_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1___closed__4));
v___x_451_ = l_Lean_Expr_isAppOfArity(v_a_443_, v___x_450_, v___x_448_);
if (v___x_451_ == 0)
{
lean_object* v___x_452_; lean_object* v___x_453_; uint8_t v___x_454_; 
v___x_452_ = ((lean_object*)(lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__48));
v___x_453_ = lean_unsigned_to_nat(1u);
v___x_454_ = l_Lean_Expr_isAppOfArity(v_a_443_, v___x_452_, v___x_453_);
lean_dec(v_a_443_);
if (v___x_454_ == 0)
{
lean_object* v___x_455_; lean_object* v___x_457_; 
v___x_455_ = lean_box(0);
if (v_isShared_446_ == 0)
{
lean_ctor_set(v___x_445_, 0, v___x_455_);
v___x_457_ = v___x_445_;
goto v_reusejp_456_;
}
else
{
lean_object* v_reuseFailAlloc_458_; 
v_reuseFailAlloc_458_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_458_, 0, v___x_455_);
v___x_457_ = v_reuseFailAlloc_458_;
goto v_reusejp_456_;
}
v_reusejp_456_:
{
return v___x_457_;
}
}
else
{
lean_object* v___x_459_; lean_object* v___x_460_; 
lean_del_object(v___x_445_);
v___x_459_ = ((lean_object*)(lp_Props2Theories_collectExprElems___closed__0));
v___x_460_ = l_Lean_PrettyPrinter_Delaborator_SubExpr_withAppArg___at___00__private_Lean_Elab_Tactic_Do_Syntax_0__Std_Do_unexpandPostCondNoThrow_spec__0___redArg(v___x_459_, v_a_435_, v_a_436_, v_a_437_, v_a_438_, v_a_439_, v_a_440_);
if (lean_obj_tag(v___x_460_) == 0)
{
lean_object* v_a_461_; lean_object* v___x_463_; uint8_t v_isShared_464_; uint8_t v_isSharedCheck_470_; 
v_a_461_ = lean_ctor_get(v___x_460_, 0);
v_isSharedCheck_470_ = !lean_is_exclusive(v___x_460_);
if (v_isSharedCheck_470_ == 0)
{
v___x_463_ = v___x_460_;
v_isShared_464_ = v_isSharedCheck_470_;
goto v_resetjp_462_;
}
else
{
lean_inc(v_a_461_);
lean_dec(v___x_460_);
v___x_463_ = lean_box(0);
v_isShared_464_ = v_isSharedCheck_470_;
goto v_resetjp_462_;
}
v_resetjp_462_:
{
lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_468_; 
v___x_465_ = lean_box(0);
v___x_466_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_466_, 0, v_a_461_);
lean_ctor_set(v___x_466_, 1, v___x_465_);
if (v_isShared_464_ == 0)
{
lean_ctor_set(v___x_463_, 0, v___x_466_);
v___x_468_ = v___x_463_;
goto v_reusejp_467_;
}
else
{
lean_object* v_reuseFailAlloc_469_; 
v_reuseFailAlloc_469_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_469_, 0, v___x_466_);
v___x_468_ = v_reuseFailAlloc_469_;
goto v_reusejp_467_;
}
v_reusejp_467_:
{
return v___x_468_;
}
}
}
else
{
lean_object* v_a_471_; lean_object* v___x_473_; uint8_t v_isShared_474_; uint8_t v_isSharedCheck_478_; 
v_a_471_ = lean_ctor_get(v___x_460_, 0);
v_isSharedCheck_478_ = !lean_is_exclusive(v___x_460_);
if (v_isSharedCheck_478_ == 0)
{
v___x_473_ = v___x_460_;
v_isShared_474_ = v_isSharedCheck_478_;
goto v_resetjp_472_;
}
else
{
lean_inc(v_a_471_);
lean_dec(v___x_460_);
v___x_473_ = lean_box(0);
v_isShared_474_ = v_isSharedCheck_478_;
goto v_resetjp_472_;
}
v_resetjp_472_:
{
lean_object* v___x_476_; 
if (v_isShared_474_ == 0)
{
v___x_476_ = v___x_473_;
goto v_reusejp_475_;
}
else
{
lean_object* v_reuseFailAlloc_477_; 
v_reuseFailAlloc_477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_477_, 0, v_a_471_);
v___x_476_ = v_reuseFailAlloc_477_;
goto v_reusejp_475_;
}
v_reusejp_475_:
{
return v___x_476_;
}
}
}
}
}
else
{
lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; 
lean_del_object(v___x_445_);
lean_dec(v_a_443_);
v___x_479_ = ((lean_object*)(lp_Props2Theories_collectExprElems___closed__0));
v___x_480_ = ((lean_object*)(lp_Props2Theories_collectExprElems___closed__1));
v___x_481_ = l_Lean_PrettyPrinter_Delaborator_SubExpr_withAppFn___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Delab_0__Lean_Elab_Tactic_Do_ProofMode_delabMGoal_delabHypotheses_spec__5___redArg(v___x_480_, v_a_435_, v_a_436_, v_a_437_, v_a_438_, v_a_439_, v_a_440_);
if (lean_obj_tag(v___x_481_) == 0)
{
lean_object* v_a_482_; lean_object* v___x_483_; 
v_a_482_ = lean_ctor_get(v___x_481_, 0);
lean_inc(v_a_482_);
lean_dec_ref(v___x_481_);
v___x_483_ = l_Lean_PrettyPrinter_Delaborator_SubExpr_withAppArg___at___00__private_Lean_Elab_Tactic_Do_Syntax_0__Std_Do_unexpandPostCondNoThrow_spec__0___redArg(v___x_479_, v_a_435_, v_a_436_, v_a_437_, v_a_438_, v_a_439_, v_a_440_);
if (lean_obj_tag(v___x_483_) == 0)
{
lean_object* v_a_484_; lean_object* v___x_486_; uint8_t v_isShared_487_; uint8_t v_isSharedCheck_494_; 
v_a_484_ = lean_ctor_get(v___x_483_, 0);
v_isSharedCheck_494_ = !lean_is_exclusive(v___x_483_);
if (v_isSharedCheck_494_ == 0)
{
v___x_486_ = v___x_483_;
v_isShared_487_ = v_isSharedCheck_494_;
goto v_resetjp_485_;
}
else
{
lean_inc(v_a_484_);
lean_dec(v___x_483_);
v___x_486_ = lean_box(0);
v_isShared_487_ = v_isSharedCheck_494_;
goto v_resetjp_485_;
}
v_resetjp_485_:
{
lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_492_; 
v___x_488_ = lean_box(0);
v___x_489_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_489_, 0, v_a_484_);
lean_ctor_set(v___x_489_, 1, v___x_488_);
v___x_490_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_490_, 0, v_a_482_);
lean_ctor_set(v___x_490_, 1, v___x_489_);
if (v_isShared_487_ == 0)
{
lean_ctor_set(v___x_486_, 0, v___x_490_);
v___x_492_ = v___x_486_;
goto v_reusejp_491_;
}
else
{
lean_object* v_reuseFailAlloc_493_; 
v_reuseFailAlloc_493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_493_, 0, v___x_490_);
v___x_492_ = v_reuseFailAlloc_493_;
goto v_reusejp_491_;
}
v_reusejp_491_:
{
return v___x_492_;
}
}
}
else
{
lean_object* v_a_495_; lean_object* v___x_497_; uint8_t v_isShared_498_; uint8_t v_isSharedCheck_502_; 
lean_dec(v_a_482_);
v_a_495_ = lean_ctor_get(v___x_483_, 0);
v_isSharedCheck_502_ = !lean_is_exclusive(v___x_483_);
if (v_isSharedCheck_502_ == 0)
{
v___x_497_ = v___x_483_;
v_isShared_498_ = v_isSharedCheck_502_;
goto v_resetjp_496_;
}
else
{
lean_inc(v_a_495_);
lean_dec(v___x_483_);
v___x_497_ = lean_box(0);
v_isShared_498_ = v_isSharedCheck_502_;
goto v_resetjp_496_;
}
v_resetjp_496_:
{
lean_object* v___x_500_; 
if (v_isShared_498_ == 0)
{
v___x_500_ = v___x_497_;
goto v_reusejp_499_;
}
else
{
lean_object* v_reuseFailAlloc_501_; 
v_reuseFailAlloc_501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_501_, 0, v_a_495_);
v___x_500_ = v_reuseFailAlloc_501_;
goto v_reusejp_499_;
}
v_reusejp_499_:
{
return v___x_500_;
}
}
}
}
else
{
lean_object* v_a_503_; lean_object* v___x_505_; uint8_t v_isShared_506_; uint8_t v_isSharedCheck_510_; 
v_a_503_ = lean_ctor_get(v___x_481_, 0);
v_isSharedCheck_510_ = !lean_is_exclusive(v___x_481_);
if (v_isSharedCheck_510_ == 0)
{
v___x_505_ = v___x_481_;
v_isShared_506_ = v_isSharedCheck_510_;
goto v_resetjp_504_;
}
else
{
lean_inc(v_a_503_);
lean_dec(v___x_481_);
v___x_505_ = lean_box(0);
v_isShared_506_ = v_isSharedCheck_510_;
goto v_resetjp_504_;
}
v_resetjp_504_:
{
lean_object* v___x_508_; 
if (v_isShared_506_ == 0)
{
v___x_508_ = v___x_505_;
goto v_reusejp_507_;
}
else
{
lean_object* v_reuseFailAlloc_509_; 
v_reuseFailAlloc_509_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_509_, 0, v_a_503_);
v___x_508_ = v_reuseFailAlloc_509_;
goto v_reusejp_507_;
}
v_reusejp_507_:
{
return v___x_508_;
}
}
}
}
}
else
{
lean_object* v_dummy_511_; lean_object* v_nargs_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; uint8_t v___x_520_; 
v_dummy_511_ = lean_obj_once(&lp_Props2Theories_collectExprElems___closed__2, &lp_Props2Theories_collectExprElems___closed__2_once, _init_lp_Props2Theories_collectExprElems___closed__2);
v_nargs_512_ = l_Lean_Expr_getAppNumArgs(v_a_443_);
lean_inc(v_nargs_512_);
v___x_513_ = lean_mk_array(v_nargs_512_, v_dummy_511_);
v___x_514_ = lean_unsigned_to_nat(1u);
v___x_515_ = lean_nat_sub(v_nargs_512_, v___x_514_);
lean_dec(v_nargs_512_);
v___x_516_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_443_, v___x_513_, v___x_515_);
v___x_517_ = l_Lean_instInhabitedExpr;
v___x_518_ = lean_array_get(v___x_517_, v___x_516_, v___x_514_);
lean_dec_ref(v___x_516_);
v___x_519_ = ((lean_object*)(lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__48));
v___x_520_ = l_Lean_Expr_isAppOfArity(v___x_518_, v___x_519_, v___x_514_);
lean_dec(v___x_518_);
if (v___x_520_ == 0)
{
lean_object* v___x_521_; lean_object* v___x_523_; 
v___x_521_ = lean_box(0);
if (v_isShared_446_ == 0)
{
lean_ctor_set(v___x_445_, 0, v___x_521_);
v___x_523_ = v___x_445_;
goto v_reusejp_522_;
}
else
{
lean_object* v_reuseFailAlloc_524_; 
v_reuseFailAlloc_524_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_524_, 0, v___x_521_);
v___x_523_ = v_reuseFailAlloc_524_;
goto v_reusejp_522_;
}
v_reusejp_522_:
{
return v___x_523_;
}
}
else
{
lean_object* v___x_525_; lean_object* v___x_526_; 
lean_del_object(v___x_445_);
v___x_525_ = ((lean_object*)(lp_Props2Theories_collectExprElems___closed__0));
v___x_526_ = l_Lean_PrettyPrinter_Delaborator_SubExpr_withAppArg___at___00__private_Lean_Elab_Tactic_Do_Syntax_0__Std_Do_unexpandPostCondNoThrow_spec__0___redArg(v___x_525_, v_a_435_, v_a_436_, v_a_437_, v_a_438_, v_a_439_, v_a_440_);
if (lean_obj_tag(v___x_526_) == 0)
{
lean_object* v_a_527_; lean_object* v___y_529_; lean_object* v___x_549_; uint8_t v___x_550_; 
v_a_527_ = lean_ctor_get(v___x_526_, 0);
lean_inc_n(v_a_527_, 2);
lean_dec_ref(v___x_526_);
v___x_549_ = ((lean_object*)(lp_Props2Theories_collectExprElems___closed__4));
v___x_550_ = l_Lean_Syntax_isOfKind(v_a_527_, v___x_549_);
if (v___x_550_ == 0)
{
v___y_529_ = v_a_527_;
goto v___jp_528_;
}
else
{
lean_object* v___x_551_; 
v___x_551_ = l_Lean_Syntax_getArg(v_a_527_, v___x_514_);
lean_dec(v_a_527_);
v___y_529_ = v___x_551_;
goto v___jp_528_;
}
v___jp_528_:
{
lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; 
v___x_530_ = lean_alloc_closure((void*)(lp_Props2Theories_collectExprElems___boxed), 7, 0);
v___x_531_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_SubExpr_withAppArg___at___00__private_Lean_Elab_Tactic_Do_Syntax_0__Std_Do_unexpandPostCondNoThrow_spec__0___boxed), 9, 2);
lean_closure_set(v___x_531_, 0, lean_box(0));
lean_closure_set(v___x_531_, 1, v___x_530_);
v___x_532_ = l_Lean_PrettyPrinter_Delaborator_SubExpr_withAppFn___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Delab_0__Lean_Elab_Tactic_Do_ProofMode_delabMGoal_delabHypotheses_spec__5___redArg(v___x_531_, v_a_435_, v_a_436_, v_a_437_, v_a_438_, v_a_439_, v_a_440_);
if (lean_obj_tag(v___x_532_) == 0)
{
lean_object* v_a_533_; lean_object* v___x_535_; uint8_t v_isShared_536_; uint8_t v_isSharedCheck_548_; 
v_a_533_ = lean_ctor_get(v___x_532_, 0);
v_isSharedCheck_548_ = !lean_is_exclusive(v___x_532_);
if (v_isSharedCheck_548_ == 0)
{
v___x_535_ = v___x_532_;
v_isShared_536_ = v_isSharedCheck_548_;
goto v_resetjp_534_;
}
else
{
lean_inc(v_a_533_);
lean_dec(v___x_532_);
v___x_535_ = lean_box(0);
v_isShared_536_ = v_isSharedCheck_548_;
goto v_resetjp_534_;
}
v_resetjp_534_:
{
uint8_t v___x_537_; 
v___x_537_ = l_List_isEmpty___redArg(v_a_533_);
if (v___x_537_ == 0)
{
lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_542_; 
v___x_538_ = lean_box(0);
v___x_539_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_539_, 0, v___y_529_);
lean_ctor_set(v___x_539_, 1, v___x_538_);
v___x_540_ = l_List_appendTR___redArg(v_a_533_, v___x_539_);
if (v_isShared_536_ == 0)
{
lean_ctor_set(v___x_535_, 0, v___x_540_);
v___x_542_ = v___x_535_;
goto v_reusejp_541_;
}
else
{
lean_object* v_reuseFailAlloc_543_; 
v_reuseFailAlloc_543_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_543_, 0, v___x_540_);
v___x_542_ = v_reuseFailAlloc_543_;
goto v_reusejp_541_;
}
v_reusejp_541_:
{
return v___x_542_;
}
}
else
{
lean_object* v___x_544_; lean_object* v___x_546_; 
lean_dec(v_a_533_);
lean_dec(v___y_529_);
v___x_544_ = lean_box(0);
if (v_isShared_536_ == 0)
{
lean_ctor_set(v___x_535_, 0, v___x_544_);
v___x_546_ = v___x_535_;
goto v_reusejp_545_;
}
else
{
lean_object* v_reuseFailAlloc_547_; 
v_reuseFailAlloc_547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_547_, 0, v___x_544_);
v___x_546_ = v_reuseFailAlloc_547_;
goto v_reusejp_545_;
}
v_reusejp_545_:
{
return v___x_546_;
}
}
}
}
else
{
lean_dec(v___y_529_);
return v___x_532_;
}
}
}
else
{
lean_object* v_a_552_; lean_object* v___x_554_; uint8_t v_isShared_555_; uint8_t v_isSharedCheck_559_; 
v_a_552_ = lean_ctor_get(v___x_526_, 0);
v_isSharedCheck_559_ = !lean_is_exclusive(v___x_526_);
if (v_isSharedCheck_559_ == 0)
{
v___x_554_ = v___x_526_;
v_isShared_555_ = v_isSharedCheck_559_;
goto v_resetjp_553_;
}
else
{
lean_inc(v_a_552_);
lean_dec(v___x_526_);
v___x_554_ = lean_box(0);
v_isShared_555_ = v_isSharedCheck_559_;
goto v_resetjp_553_;
}
v_resetjp_553_:
{
lean_object* v___x_557_; 
if (v_isShared_555_ == 0)
{
v___x_557_ = v___x_554_;
goto v_reusejp_556_;
}
else
{
lean_object* v_reuseFailAlloc_558_; 
v_reuseFailAlloc_558_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_558_, 0, v_a_552_);
v___x_557_ = v_reuseFailAlloc_558_;
goto v_reusejp_556_;
}
v_reusejp_556_:
{
return v___x_557_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_561_; lean_object* v___x_563_; uint8_t v_isShared_564_; uint8_t v_isSharedCheck_568_; 
v_a_561_ = lean_ctor_get(v___x_442_, 0);
v_isSharedCheck_568_ = !lean_is_exclusive(v___x_442_);
if (v_isSharedCheck_568_ == 0)
{
v___x_563_ = v___x_442_;
v_isShared_564_ = v_isSharedCheck_568_;
goto v_resetjp_562_;
}
else
{
lean_inc(v_a_561_);
lean_dec(v___x_442_);
v___x_563_ = lean_box(0);
v_isShared_564_ = v_isSharedCheck_568_;
goto v_resetjp_562_;
}
v_resetjp_562_:
{
lean_object* v___x_566_; 
if (v_isShared_564_ == 0)
{
v___x_566_ = v___x_563_;
goto v_reusejp_565_;
}
else
{
lean_object* v_reuseFailAlloc_567_; 
v_reuseFailAlloc_567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_567_, 0, v_a_561_);
v___x_566_ = v_reuseFailAlloc_567_;
goto v_reusejp_565_;
}
v_reusejp_565_:
{
return v___x_566_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00delabUnionChain_spec__0___redArg(lean_object* v_as_x27_570_, lean_object* v_b_571_, lean_object* v___y_572_){
_start:
{
if (lean_obj_tag(v_as_x27_570_) == 0)
{
lean_object* v___x_574_; 
v___x_574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_574_, 0, v_b_571_);
return v___x_574_;
}
else
{
lean_object* v_head_575_; lean_object* v_tail_576_; lean_object* v___x_578_; uint8_t v_isShared_579_; uint8_t v_isSharedCheck_590_; 
v_head_575_ = lean_ctor_get(v_as_x27_570_, 0);
v_tail_576_ = lean_ctor_get(v_as_x27_570_, 1);
v_isSharedCheck_590_ = !lean_is_exclusive(v_as_x27_570_);
if (v_isSharedCheck_590_ == 0)
{
v___x_578_ = v_as_x27_570_;
v_isShared_579_ = v_isSharedCheck_590_;
goto v_resetjp_577_;
}
else
{
lean_inc(v_tail_576_);
lean_inc(v_head_575_);
lean_dec(v_as_x27_570_);
v___x_578_ = lean_box(0);
v_isShared_579_ = v_isSharedCheck_590_;
goto v_resetjp_577_;
}
v_resetjp_577_:
{
lean_object* v_ref_580_; uint8_t v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_586_; 
v_ref_580_ = lean_ctor_get(v___y_572_, 5);
v___x_581_ = 0;
v___x_582_ = l_Lean_SourceInfo_fromRef(v_ref_580_, v___x_581_);
v___x_583_ = ((lean_object*)(lp_Props2Theories_set__comprehension___x2c___00__closed__1));
v___x_584_ = ((lean_object*)(lp_Props2Theories_List_forIn_x27_loop___at___00delabUnionChain_spec__0___redArg___closed__0));
lean_inc(v___x_582_);
if (v_isShared_579_ == 0)
{
lean_ctor_set_tag(v___x_578_, 2);
lean_ctor_set(v___x_578_, 1, v___x_584_);
lean_ctor_set(v___x_578_, 0, v___x_582_);
v___x_586_ = v___x_578_;
goto v_reusejp_585_;
}
else
{
lean_object* v_reuseFailAlloc_589_; 
v_reuseFailAlloc_589_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_589_, 0, v___x_582_);
lean_ctor_set(v_reuseFailAlloc_589_, 1, v___x_584_);
v___x_586_ = v_reuseFailAlloc_589_;
goto v_reusejp_585_;
}
v_reusejp_585_:
{
lean_object* v___x_587_; 
v___x_587_ = l_Lean_Syntax_node3(v___x_582_, v___x_583_, v_b_571_, v___x_586_, v_head_575_);
v_as_x27_570_ = v_tail_576_;
v_b_571_ = v___x_587_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00delabUnionChain_spec__0___redArg___boxed(lean_object* v_as_x27_591_, lean_object* v_b_592_, lean_object* v___y_593_, lean_object* v___y_594_){
_start:
{
lean_object* v_res_595_; 
v_res_595_ = lp_Props2Theories_List_forIn_x27_loop___at___00delabUnionChain_spec__0___redArg(v_as_x27_591_, v_b_592_, v___y_593_);
lean_dec_ref(v___y_593_);
return v_res_595_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories_delabUnionChain(lean_object* v_a_606_, lean_object* v_a_607_, lean_object* v_a_608_, lean_object* v_a_609_, lean_object* v_a_610_, lean_object* v_a_611_){
_start:
{
lean_object* v___x_613_; lean_object* v___x_614_; 
v___x_613_ = l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___00Lean_PrettyPrinter_Delaborator_SubExpr_withAppArg___at___00__private_Lean_Elab_Tactic_Do_Syntax_0__Std_Do_unexpandPostCondNoThrow_spec__0_spec__0___redArg(v_a_606_);
lean_dec_ref(v___x_613_);
v___x_614_ = lp_Props2Theories_collectExprElems(v_a_606_, v_a_607_, v_a_608_, v_a_609_, v_a_610_, v_a_611_);
if (lean_obj_tag(v___x_614_) == 0)
{
lean_object* v_a_615_; lean_object* v___x_617_; uint8_t v_isShared_618_; uint8_t v_isSharedCheck_690_; 
v_a_615_ = lean_ctor_get(v___x_614_, 0);
v_isSharedCheck_690_ = !lean_is_exclusive(v___x_614_);
if (v_isSharedCheck_690_ == 0)
{
v___x_617_ = v___x_614_;
v_isShared_618_ = v_isSharedCheck_690_;
goto v_resetjp_616_;
}
else
{
lean_inc(v_a_615_);
lean_dec(v___x_614_);
v___x_617_ = lean_box(0);
v_isShared_618_ = v_isSharedCheck_690_;
goto v_resetjp_616_;
}
v_resetjp_616_:
{
if (lean_obj_tag(v_a_615_) == 0)
{
lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; 
lean_del_object(v___x_617_);
v___x_619_ = ((lean_object*)(lp_Props2Theories_collectExprElems___closed__0));
v___x_620_ = ((lean_object*)(lp_Props2Theories_collectExprElems___closed__1));
v___x_621_ = l_Lean_PrettyPrinter_Delaborator_SubExpr_withAppFn___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Delab_0__Lean_Elab_Tactic_Do_ProofMode_delabMGoal_delabHypotheses_spec__5___redArg(v___x_620_, v_a_606_, v_a_607_, v_a_608_, v_a_609_, v_a_610_, v_a_611_);
if (lean_obj_tag(v___x_621_) == 0)
{
lean_object* v_a_622_; lean_object* v___x_623_; 
v_a_622_ = lean_ctor_get(v___x_621_, 0);
lean_inc(v_a_622_);
lean_dec_ref(v___x_621_);
v___x_623_ = l_Lean_PrettyPrinter_Delaborator_SubExpr_withAppArg___at___00__private_Lean_Elab_Tactic_Do_Syntax_0__Std_Do_unexpandPostCondNoThrow_spec__0___redArg(v___x_619_, v_a_606_, v_a_607_, v_a_608_, v_a_609_, v_a_610_, v_a_611_);
if (lean_obj_tag(v___x_623_) == 0)
{
lean_object* v_a_624_; lean_object* v___x_626_; uint8_t v_isShared_627_; uint8_t v_isSharedCheck_642_; 
v_a_624_ = lean_ctor_get(v___x_623_, 0);
v_isSharedCheck_642_ = !lean_is_exclusive(v___x_623_);
if (v_isSharedCheck_642_ == 0)
{
v___x_626_ = v___x_623_;
v_isShared_627_ = v_isSharedCheck_642_;
goto v_resetjp_625_;
}
else
{
lean_inc(v_a_624_);
lean_dec(v___x_623_);
v___x_626_ = lean_box(0);
v_isShared_627_ = v_isSharedCheck_642_;
goto v_resetjp_625_;
}
v_resetjp_625_:
{
lean_object* v_ref_628_; uint8_t v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_640_; 
v_ref_628_ = lean_ctor_get(v_a_610_, 5);
v___x_629_ = 0;
v___x_630_ = l_Lean_SourceInfo_fromRef(v_ref_628_, v___x_629_);
v___x_631_ = ((lean_object*)(lp_Props2Theories_delabUnionChain___closed__1));
v___x_632_ = ((lean_object*)(lp_Props2Theories_delabUnionChain___closed__3));
v___x_633_ = ((lean_object*)(lp_Props2Theories_delabUnionChain___closed__4));
lean_inc_n(v___x_630_, 3);
v___x_634_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_634_, 0, v___x_630_);
lean_ctor_set(v___x_634_, 1, v___x_633_);
lean_inc(v_a_624_);
lean_inc_ref(v___x_634_);
lean_inc(v_a_622_);
v___x_635_ = l_Lean_Syntax_node3(v___x_630_, v___x_632_, v_a_622_, v___x_634_, v_a_624_);
v___x_636_ = ((lean_object*)(lp_Props2Theories_delabUnionChain___closed__6));
v___x_637_ = l_Lean_Syntax_node3(v___x_630_, v___x_636_, v_a_622_, v___x_634_, v_a_624_);
v___x_638_ = l_Lean_Syntax_node2(v___x_630_, v___x_631_, v___x_635_, v___x_637_);
if (v_isShared_627_ == 0)
{
lean_ctor_set(v___x_626_, 0, v___x_638_);
v___x_640_ = v___x_626_;
goto v_reusejp_639_;
}
else
{
lean_object* v_reuseFailAlloc_641_; 
v_reuseFailAlloc_641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_641_, 0, v___x_638_);
v___x_640_ = v_reuseFailAlloc_641_;
goto v_reusejp_639_;
}
v_reusejp_639_:
{
return v___x_640_;
}
}
}
else
{
lean_dec(v_a_622_);
return v___x_623_;
}
}
else
{
return v___x_621_;
}
}
else
{
lean_object* v_tail_643_; 
v_tail_643_ = lean_ctor_get(v_a_615_, 1);
if (lean_obj_tag(v_tail_643_) == 0)
{
lean_object* v_head_644_; lean_object* v___x_646_; uint8_t v_isShared_647_; uint8_t v_isSharedCheck_662_; 
v_head_644_ = lean_ctor_get(v_a_615_, 0);
v_isSharedCheck_662_ = !lean_is_exclusive(v_a_615_);
if (v_isSharedCheck_662_ == 0)
{
lean_object* v_unused_663_; 
v_unused_663_ = lean_ctor_get(v_a_615_, 1);
lean_dec(v_unused_663_);
v___x_646_ = v_a_615_;
v_isShared_647_ = v_isSharedCheck_662_;
goto v_resetjp_645_;
}
else
{
lean_inc(v_head_644_);
lean_dec(v_a_615_);
v___x_646_ = lean_box(0);
v_isShared_647_ = v_isSharedCheck_662_;
goto v_resetjp_645_;
}
v_resetjp_645_:
{
lean_object* v_ref_648_; uint8_t v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_654_; 
v_ref_648_ = lean_ctor_get(v_a_610_, 5);
v___x_649_ = 0;
v___x_650_ = l_Lean_SourceInfo_fromRef(v_ref_648_, v___x_649_);
v___x_651_ = ((lean_object*)(lp_Props2Theories_collectExprElems___closed__4));
v___x_652_ = ((lean_object*)(lp_Props2Theories_term_x7b___x7d__2___closed__2));
lean_inc(v___x_650_);
if (v_isShared_647_ == 0)
{
lean_ctor_set_tag(v___x_646_, 2);
lean_ctor_set(v___x_646_, 1, v___x_652_);
lean_ctor_set(v___x_646_, 0, v___x_650_);
v___x_654_ = v___x_646_;
goto v_reusejp_653_;
}
else
{
lean_object* v_reuseFailAlloc_661_; 
v_reuseFailAlloc_661_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_661_, 0, v___x_650_);
lean_ctor_set(v_reuseFailAlloc_661_, 1, v___x_652_);
v___x_654_ = v_reuseFailAlloc_661_;
goto v_reusejp_653_;
}
v_reusejp_653_:
{
lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_659_; 
v___x_655_ = ((lean_object*)(lp_Props2Theories_term_x7b___x7d__2___closed__5));
lean_inc(v___x_650_);
v___x_656_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_656_, 0, v___x_650_);
lean_ctor_set(v___x_656_, 1, v___x_655_);
v___x_657_ = l_Lean_Syntax_node3(v___x_650_, v___x_651_, v___x_654_, v_head_644_, v___x_656_);
if (v_isShared_618_ == 0)
{
lean_ctor_set(v___x_617_, 0, v___x_657_);
v___x_659_ = v___x_617_;
goto v_reusejp_658_;
}
else
{
lean_object* v_reuseFailAlloc_660_; 
v_reuseFailAlloc_660_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_660_, 0, v___x_657_);
v___x_659_ = v_reuseFailAlloc_660_;
goto v_reusejp_658_;
}
v_reusejp_658_:
{
return v___x_659_;
}
}
}
}
else
{
lean_object* v_head_664_; lean_object* v___x_666_; uint8_t v_isShared_667_; uint8_t v_isSharedCheck_688_; 
lean_inc(v_tail_643_);
lean_del_object(v___x_617_);
v_head_664_ = lean_ctor_get(v_a_615_, 0);
v_isSharedCheck_688_ = !lean_is_exclusive(v_a_615_);
if (v_isSharedCheck_688_ == 0)
{
lean_object* v_unused_689_; 
v_unused_689_ = lean_ctor_get(v_a_615_, 1);
lean_dec(v_unused_689_);
v___x_666_ = v_a_615_;
v_isShared_667_ = v_isSharedCheck_688_;
goto v_resetjp_665_;
}
else
{
lean_inc(v_head_664_);
lean_dec(v_a_615_);
v___x_666_ = lean_box(0);
v_isShared_667_ = v_isSharedCheck_688_;
goto v_resetjp_665_;
}
v_resetjp_665_:
{
lean_object* v___x_668_; lean_object* v_a_669_; lean_object* v___x_671_; uint8_t v_isShared_672_; uint8_t v_isSharedCheck_687_; 
v___x_668_ = lp_Props2Theories_List_forIn_x27_loop___at___00delabUnionChain_spec__0___redArg(v_tail_643_, v_head_664_, v_a_610_);
v_a_669_ = lean_ctor_get(v___x_668_, 0);
v_isSharedCheck_687_ = !lean_is_exclusive(v___x_668_);
if (v_isSharedCheck_687_ == 0)
{
v___x_671_ = v___x_668_;
v_isShared_672_ = v_isSharedCheck_687_;
goto v_resetjp_670_;
}
else
{
lean_inc(v_a_669_);
lean_dec(v___x_668_);
v___x_671_ = lean_box(0);
v_isShared_672_ = v_isSharedCheck_687_;
goto v_resetjp_670_;
}
v_resetjp_670_:
{
lean_object* v_ref_673_; uint8_t v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_679_; 
v_ref_673_ = lean_ctor_get(v_a_610_, 5);
v___x_674_ = 0;
v___x_675_ = l_Lean_SourceInfo_fromRef(v_ref_673_, v___x_674_);
v___x_676_ = ((lean_object*)(lp_Props2Theories_term_x7b___x7d__2___closed__1));
v___x_677_ = ((lean_object*)(lp_Props2Theories_term_x7b___x7d__2___closed__2));
lean_inc(v___x_675_);
if (v_isShared_667_ == 0)
{
lean_ctor_set_tag(v___x_666_, 2);
lean_ctor_set(v___x_666_, 1, v___x_677_);
lean_ctor_set(v___x_666_, 0, v___x_675_);
v___x_679_ = v___x_666_;
goto v_reusejp_678_;
}
else
{
lean_object* v_reuseFailAlloc_686_; 
v_reuseFailAlloc_686_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_686_, 0, v___x_675_);
lean_ctor_set(v_reuseFailAlloc_686_, 1, v___x_677_);
v___x_679_ = v_reuseFailAlloc_686_;
goto v_reusejp_678_;
}
v_reusejp_678_:
{
lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_684_; 
v___x_680_ = ((lean_object*)(lp_Props2Theories_term_x7b___x7d__2___closed__5));
lean_inc(v___x_675_);
v___x_681_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_681_, 0, v___x_675_);
lean_ctor_set(v___x_681_, 1, v___x_680_);
v___x_682_ = l_Lean_Syntax_node3(v___x_675_, v___x_676_, v___x_679_, v_a_669_, v___x_681_);
if (v_isShared_672_ == 0)
{
lean_ctor_set(v___x_671_, 0, v___x_682_);
v___x_684_ = v___x_671_;
goto v_reusejp_683_;
}
else
{
lean_object* v_reuseFailAlloc_685_; 
v_reuseFailAlloc_685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_685_, 0, v___x_682_);
v___x_684_ = v_reuseFailAlloc_685_;
goto v_reusejp_683_;
}
v_reusejp_683_:
{
return v___x_684_;
}
}
}
}
}
}
}
}
else
{
lean_object* v_a_691_; lean_object* v___x_693_; uint8_t v_isShared_694_; uint8_t v_isSharedCheck_698_; 
v_a_691_ = lean_ctor_get(v___x_614_, 0);
v_isSharedCheck_698_ = !lean_is_exclusive(v___x_614_);
if (v_isSharedCheck_698_ == 0)
{
v___x_693_ = v___x_614_;
v_isShared_694_ = v_isSharedCheck_698_;
goto v_resetjp_692_;
}
else
{
lean_inc(v_a_691_);
lean_dec(v___x_614_);
v___x_693_ = lean_box(0);
v_isShared_694_ = v_isSharedCheck_698_;
goto v_resetjp_692_;
}
v_resetjp_692_:
{
lean_object* v___x_696_; 
if (v_isShared_694_ == 0)
{
v___x_696_ = v___x_693_;
goto v_reusejp_695_;
}
else
{
lean_object* v_reuseFailAlloc_697_; 
v_reuseFailAlloc_697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_697_, 0, v_a_691_);
v___x_696_ = v_reuseFailAlloc_697_;
goto v_reusejp_695_;
}
v_reusejp_695_:
{
return v___x_696_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories_delabUnionChain___boxed(lean_object* v_a_699_, lean_object* v_a_700_, lean_object* v_a_701_, lean_object* v_a_702_, lean_object* v_a_703_, lean_object* v_a_704_, lean_object* v_a_705_){
_start:
{
lean_object* v_res_706_; 
v_res_706_ = lp_Props2Theories_delabUnionChain(v_a_699_, v_a_700_, v_a_701_, v_a_702_, v_a_703_, v_a_704_);
lean_dec(v_a_704_);
lean_dec_ref(v_a_703_);
lean_dec(v_a_702_);
lean_dec_ref(v_a_701_);
lean_dec(v_a_700_);
lean_dec_ref(v_a_699_);
return v_res_706_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00delabUnionChain_spec__0(lean_object* v_as_707_, lean_object* v_as_x27_708_, lean_object* v_b_709_, lean_object* v_a_710_, lean_object* v___y_711_, lean_object* v___y_712_, lean_object* v___y_713_, lean_object* v___y_714_, lean_object* v___y_715_, lean_object* v___y_716_){
_start:
{
lean_object* v___x_718_; 
v___x_718_ = lp_Props2Theories_List_forIn_x27_loop___at___00delabUnionChain_spec__0___redArg(v_as_x27_708_, v_b_709_, v___y_715_);
return v___x_718_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories_List_forIn_x27_loop___at___00delabUnionChain_spec__0___boxed(lean_object* v_as_719_, lean_object* v_as_x27_720_, lean_object* v_b_721_, lean_object* v_a_722_, lean_object* v___y_723_, lean_object* v___y_724_, lean_object* v___y_725_, lean_object* v___y_726_, lean_object* v___y_727_, lean_object* v___y_728_, lean_object* v___y_729_){
_start:
{
lean_object* v_res_730_; 
v_res_730_ = lp_Props2Theories_List_forIn_x27_loop___at___00delabUnionChain_spec__0(v_as_719_, v_as_x27_720_, v_b_721_, v_a_722_, v___y_723_, v___y_724_, v___y_725_, v___y_726_, v___y_727_, v___y_728_);
lean_dec(v___y_728_);
lean_dec_ref(v___y_727_);
lean_dec(v___y_726_);
lean_dec_ref(v___y_725_);
lean_dec(v___y_724_);
lean_dec_ref(v___y_723_);
lean_dec(v_as_719_);
return v_res_730_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories_unexpandUnordPrSet(lean_object* v_x_734_, lean_object* v_a_735_, lean_object* v_a_736_){
_start:
{
lean_object* v___x_737_; uint8_t v___x_738_; 
v___x_737_ = ((lean_object*)(lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__1));
lean_inc(v_x_734_);
v___x_738_ = l_Lean_Syntax_isOfKind(v_x_734_, v___x_737_);
if (v___x_738_ == 0)
{
lean_object* v___x_739_; lean_object* v___x_740_; 
lean_dec(v_x_734_);
v___x_739_ = lean_box(0);
v___x_740_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_740_, 0, v___x_739_);
lean_ctor_set(v___x_740_, 1, v_a_736_);
return v___x_740_;
}
else
{
lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; uint8_t v___x_744_; 
v___x_741_ = lean_unsigned_to_nat(1u);
v___x_742_ = l_Lean_Syntax_getArg(v_x_734_, v___x_741_);
lean_dec(v_x_734_);
v___x_743_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_742_);
v___x_744_ = l_Lean_Syntax_matchesNull(v___x_742_, v___x_743_);
if (v___x_744_ == 0)
{
lean_object* v___x_745_; lean_object* v___x_746_; 
lean_dec(v___x_742_);
v___x_745_ = lean_box(0);
v___x_746_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_746_, 0, v___x_745_);
lean_ctor_set(v___x_746_, 1, v_a_736_);
return v___x_746_;
}
else
{
lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; uint8_t v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; 
v___x_747_ = lean_unsigned_to_nat(0u);
v___x_748_ = l_Lean_Syntax_getArg(v___x_742_, v___x_747_);
v___x_749_ = l_Lean_Syntax_getArg(v___x_742_, v___x_741_);
lean_dec(v___x_742_);
v___x_750_ = 0;
v___x_751_ = l_Lean_SourceInfo_fromRef(v_a_735_, v___x_750_);
v___x_752_ = ((lean_object*)(lp_Props2Theories_unexpandUnordPrSet___closed__1));
v___x_753_ = ((lean_object*)(lp_Props2Theories_term_x7b___x7d__2___closed__2));
lean_inc_n(v___x_751_, 3);
v___x_754_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_754_, 0, v___x_751_);
lean_ctor_set(v___x_754_, 1, v___x_753_);
v___x_755_ = ((lean_object*)(lp_Props2Theories_List_forIn_x27_loop___at___00delabUnionChain_spec__0___redArg___closed__0));
v___x_756_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_756_, 0, v___x_751_);
lean_ctor_set(v___x_756_, 1, v___x_755_);
v___x_757_ = ((lean_object*)(lp_Props2Theories_term_x7b___x7d__2___closed__5));
v___x_758_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_758_, 0, v___x_751_);
lean_ctor_set(v___x_758_, 1, v___x_757_);
v___x_759_ = l_Lean_Syntax_node5(v___x_751_, v___x_752_, v___x_754_, v___x_748_, v___x_756_, v___x_749_, v___x_758_);
v___x_760_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_760_, 0, v___x_759_);
lean_ctor_set(v___x_760_, 1, v_a_736_);
return v___x_760_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories_unexpandUnordPrSet___boxed(lean_object* v_x_761_, lean_object* v_a_762_, lean_object* v_a_763_){
_start:
{
lean_object* v_res_764_; 
v_res_764_ = lp_Props2Theories_unexpandUnordPrSet(v_x_761_, v_a_762_, v_a_763_);
lean_dec(v_a_762_);
return v_res_764_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories_unexpandSingletonSet(lean_object* v_x_765_, lean_object* v_a_766_, lean_object* v_a_767_){
_start:
{
lean_object* v___x_768_; uint8_t v___x_769_; 
v___x_768_ = ((lean_object*)(lp_Props2Theories_List_forIn_x27_loop___at___00__aux__Props2Theories__B__Set__B__Set__Algebra__SetSynt______macroRules__term_x7b___x7d__2__1_spec__0___redArg___closed__1));
lean_inc(v_x_765_);
v___x_769_ = l_Lean_Syntax_isOfKind(v_x_765_, v___x_768_);
if (v___x_769_ == 0)
{
lean_object* v___x_770_; lean_object* v___x_771_; 
lean_dec(v_x_765_);
v___x_770_ = lean_box(0);
v___x_771_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_771_, 0, v___x_770_);
lean_ctor_set(v___x_771_, 1, v_a_767_);
return v___x_771_;
}
else
{
lean_object* v___x_772_; lean_object* v___x_773_; uint8_t v___x_774_; 
v___x_772_ = lean_unsigned_to_nat(1u);
v___x_773_ = l_Lean_Syntax_getArg(v_x_765_, v___x_772_);
lean_dec(v_x_765_);
lean_inc(v___x_773_);
v___x_774_ = l_Lean_Syntax_matchesNull(v___x_773_, v___x_772_);
if (v___x_774_ == 0)
{
lean_object* v___x_775_; lean_object* v___x_776_; 
lean_dec(v___x_773_);
v___x_775_ = lean_box(0);
v___x_776_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_776_, 0, v___x_775_);
lean_ctor_set(v___x_776_, 1, v_a_767_);
return v___x_776_;
}
else
{
lean_object* v___x_777_; lean_object* v___x_778_; uint8_t v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; 
v___x_777_ = lean_unsigned_to_nat(0u);
v___x_778_ = l_Lean_Syntax_getArg(v___x_773_, v___x_777_);
lean_dec(v___x_773_);
v___x_779_ = 0;
v___x_780_ = l_Lean_SourceInfo_fromRef(v_a_766_, v___x_779_);
v___x_781_ = ((lean_object*)(lp_Props2Theories_collectExprElems___closed__4));
v___x_782_ = ((lean_object*)(lp_Props2Theories_term_x7b___x7d__2___closed__2));
lean_inc_n(v___x_780_, 2);
v___x_783_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_783_, 0, v___x_780_);
lean_ctor_set(v___x_783_, 1, v___x_782_);
v___x_784_ = ((lean_object*)(lp_Props2Theories_term_x7b___x7d__2___closed__5));
v___x_785_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_785_, 0, v___x_780_);
lean_ctor_set(v___x_785_, 1, v___x_784_);
v___x_786_ = l_Lean_Syntax_node3(v___x_780_, v___x_781_, v___x_783_, v___x_778_, v___x_785_);
v___x_787_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_787_, 0, v___x_786_);
lean_ctor_set(v___x_787_, 1, v_a_767_);
return v___x_787_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories_unexpandSingletonSet___boxed(lean_object* v_x_788_, lean_object* v_a_789_, lean_object* v_a_790_){
_start:
{
lean_object* v_res_791_; 
v_res_791_ = lp_Props2Theories_unexpandSingletonSet(v_x_788_, v_a_789_, v_a_790_);
lean_dec(v_a_789_);
return v_res_791_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Props2Theories_Props2Theories_B__Set_A__Constructions_Task(uint8_t builtin);
lean_object* initialize_Props2Theories_Props2Theories_B__Set_B__Set__Algebra_Task(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Props2Theories_Props2Theories_B__Set_B__Set__Algebra_SetSynt(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Props2Theories_Props2Theories_B__Set_A__Constructions_Task(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Props2Theories_Props2Theories_B__Set_B__Set__Algebra_Task(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_Props2Theories_Lean_Parser_Category_set__comprehension = _init_lp_Props2Theories_Lean_Parser_Category_set__comprehension();
lean_mark_persistent(lp_Props2Theories_Lean_Parser_Category_set__comprehension);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
