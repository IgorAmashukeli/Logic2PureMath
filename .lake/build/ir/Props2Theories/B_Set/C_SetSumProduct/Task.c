// Lean compiler output
// Module: Props2Theories.B_Set.C_SetSumProduct.Task
// Imports: public import Init public meta import Init public import Props2Theories.B_Set.A_Constructions.Task public import Props2Theories.B_Set.B_Set_Algebra.SetSynt
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
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Props2Theories_term_x28___x2c___x29___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "term(_,_)"};
static const lean_object* lp_Props2Theories_term_x28___x2c___x29___closed__0 = (const lean_object*)&lp_Props2Theories_term_x28___x2c___x29___closed__0_value;
static const lean_ctor_object lp_Props2Theories_term_x28___x2c___x29___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_term_x28___x2c___x29___closed__0_value),LEAN_SCALAR_PTR_LITERAL(247, 86, 41, 19, 55, 189, 101, 198)}};
static const lean_object* lp_Props2Theories_term_x28___x2c___x29___closed__1 = (const lean_object*)&lp_Props2Theories_term_x28___x2c___x29___closed__1_value;
static const lean_string_object lp_Props2Theories_term_x28___x2c___x29___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* lp_Props2Theories_term_x28___x2c___x29___closed__2 = (const lean_object*)&lp_Props2Theories_term_x28___x2c___x29___closed__2_value;
static const lean_ctor_object lp_Props2Theories_term_x28___x2c___x29___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_term_x28___x2c___x29___closed__2_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* lp_Props2Theories_term_x28___x2c___x29___closed__3 = (const lean_object*)&lp_Props2Theories_term_x28___x2c___x29___closed__3_value;
static const lean_string_object lp_Props2Theories_term_x28___x2c___x29___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* lp_Props2Theories_term_x28___x2c___x29___closed__4 = (const lean_object*)&lp_Props2Theories_term_x28___x2c___x29___closed__4_value;
static const lean_ctor_object lp_Props2Theories_term_x28___x2c___x29___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Props2Theories_term_x28___x2c___x29___closed__4_value)}};
static const lean_object* lp_Props2Theories_term_x28___x2c___x29___closed__5 = (const lean_object*)&lp_Props2Theories_term_x28___x2c___x29___closed__5_value;
static const lean_string_object lp_Props2Theories_term_x28___x2c___x29___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* lp_Props2Theories_term_x28___x2c___x29___closed__6 = (const lean_object*)&lp_Props2Theories_term_x28___x2c___x29___closed__6_value;
static const lean_ctor_object lp_Props2Theories_term_x28___x2c___x29___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_term_x28___x2c___x29___closed__6_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* lp_Props2Theories_term_x28___x2c___x29___closed__7 = (const lean_object*)&lp_Props2Theories_term_x28___x2c___x29___closed__7_value;
static const lean_ctor_object lp_Props2Theories_term_x28___x2c___x29___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&lp_Props2Theories_term_x28___x2c___x29___closed__7_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories_term_x28___x2c___x29___closed__8 = (const lean_object*)&lp_Props2Theories_term_x28___x2c___x29___closed__8_value;
static const lean_ctor_object lp_Props2Theories_term_x28___x2c___x29___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term_x28___x2c___x29___closed__3_value),((lean_object*)&lp_Props2Theories_term_x28___x2c___x29___closed__5_value),((lean_object*)&lp_Props2Theories_term_x28___x2c___x29___closed__8_value)}};
static const lean_object* lp_Props2Theories_term_x28___x2c___x29___closed__9 = (const lean_object*)&lp_Props2Theories_term_x28___x2c___x29___closed__9_value;
static const lean_string_object lp_Props2Theories_term_x28___x2c___x29___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* lp_Props2Theories_term_x28___x2c___x29___closed__10 = (const lean_object*)&lp_Props2Theories_term_x28___x2c___x29___closed__10_value;
static const lean_ctor_object lp_Props2Theories_term_x28___x2c___x29___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Props2Theories_term_x28___x2c___x29___closed__10_value)}};
static const lean_object* lp_Props2Theories_term_x28___x2c___x29___closed__11 = (const lean_object*)&lp_Props2Theories_term_x28___x2c___x29___closed__11_value;
static const lean_ctor_object lp_Props2Theories_term_x28___x2c___x29___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term_x28___x2c___x29___closed__3_value),((lean_object*)&lp_Props2Theories_term_x28___x2c___x29___closed__9_value),((lean_object*)&lp_Props2Theories_term_x28___x2c___x29___closed__11_value)}};
static const lean_object* lp_Props2Theories_term_x28___x2c___x29___closed__12 = (const lean_object*)&lp_Props2Theories_term_x28___x2c___x29___closed__12_value;
static const lean_ctor_object lp_Props2Theories_term_x28___x2c___x29___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term_x28___x2c___x29___closed__3_value),((lean_object*)&lp_Props2Theories_term_x28___x2c___x29___closed__12_value),((lean_object*)&lp_Props2Theories_term_x28___x2c___x29___closed__8_value)}};
static const lean_object* lp_Props2Theories_term_x28___x2c___x29___closed__13 = (const lean_object*)&lp_Props2Theories_term_x28___x2c___x29___closed__13_value;
static const lean_string_object lp_Props2Theories_term_x28___x2c___x29___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* lp_Props2Theories_term_x28___x2c___x29___closed__14 = (const lean_object*)&lp_Props2Theories_term_x28___x2c___x29___closed__14_value;
static const lean_ctor_object lp_Props2Theories_term_x28___x2c___x29___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Props2Theories_term_x28___x2c___x29___closed__14_value)}};
static const lean_object* lp_Props2Theories_term_x28___x2c___x29___closed__15 = (const lean_object*)&lp_Props2Theories_term_x28___x2c___x29___closed__15_value;
static const lean_ctor_object lp_Props2Theories_term_x28___x2c___x29___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term_x28___x2c___x29___closed__3_value),((lean_object*)&lp_Props2Theories_term_x28___x2c___x29___closed__13_value),((lean_object*)&lp_Props2Theories_term_x28___x2c___x29___closed__15_value)}};
static const lean_object* lp_Props2Theories_term_x28___x2c___x29___closed__16 = (const lean_object*)&lp_Props2Theories_term_x28___x2c___x29___closed__16_value;
static const lean_ctor_object lp_Props2Theories_term_x28___x2c___x29___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Props2Theories_term_x28___x2c___x29___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&lp_Props2Theories_term_x28___x2c___x29___closed__16_value)}};
static const lean_object* lp_Props2Theories_term_x28___x2c___x29___closed__17 = (const lean_object*)&lp_Props2Theories_term_x28___x2c___x29___closed__17_value;
LEAN_EXPORT const lean_object* lp_Props2Theories_term_x28___x2c___x29 = (const lean_object*)&lp_Props2Theories_term_x28___x2c___x29___closed__17_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__0 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__0_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__1 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__1_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__2 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__2_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__3 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__3_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__4_value_aux_0),((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__4_value_aux_1),((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__4_value_aux_2),((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__4 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__4_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "ord_pr_set"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__5 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__5_value;
static lean_once_cell_t lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__6;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(107, 90, 23, 147, 178, 89, 190, 79)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__7 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__7_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__7_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__8 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__8_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__8_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__9 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__9_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__10 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__10_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__11 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__11_value;
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__ord__pr__set__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__ord__pr__set__1___closed__0 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__ord__pr__set__1___closed__0_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__ord__pr__set__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__ord__pr__set__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__ord__pr__set__1___closed__1 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__ord__pr__set__1___closed__1_value;
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__ord__pr__set__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__ord__pr__set__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Props2Theories_term_u03c0_u2081___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 7, .m_data = "termπ₁_"};
static const lean_object* lp_Props2Theories_term_u03c0_u2081___00__closed__0 = (const lean_object*)&lp_Props2Theories_term_u03c0_u2081___00__closed__0_value;
static const lean_ctor_object lp_Props2Theories_term_u03c0_u2081___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_term_u03c0_u2081___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 244, 63, 93, 246, 222, 239, 247)}};
static const lean_object* lp_Props2Theories_term_u03c0_u2081___00__closed__1 = (const lean_object*)&lp_Props2Theories_term_u03c0_u2081___00__closed__1_value;
static const lean_string_object lp_Props2Theories_term_u03c0_u2081___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 3, .m_data = "π₁ "};
static const lean_object* lp_Props2Theories_term_u03c0_u2081___00__closed__2 = (const lean_object*)&lp_Props2Theories_term_u03c0_u2081___00__closed__2_value;
static const lean_ctor_object lp_Props2Theories_term_u03c0_u2081___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Props2Theories_term_u03c0_u2081___00__closed__2_value)}};
static const lean_object* lp_Props2Theories_term_u03c0_u2081___00__closed__3 = (const lean_object*)&lp_Props2Theories_term_u03c0_u2081___00__closed__3_value;
static const lean_ctor_object lp_Props2Theories_term_u03c0_u2081___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&lp_Props2Theories_term_x28___x2c___x29___closed__7_value),((lean_object*)(((size_t)(1024) << 1) | 1))}};
static const lean_object* lp_Props2Theories_term_u03c0_u2081___00__closed__4 = (const lean_object*)&lp_Props2Theories_term_u03c0_u2081___00__closed__4_value;
static const lean_ctor_object lp_Props2Theories_term_u03c0_u2081___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term_x28___x2c___x29___closed__3_value),((lean_object*)&lp_Props2Theories_term_u03c0_u2081___00__closed__3_value),((lean_object*)&lp_Props2Theories_term_u03c0_u2081___00__closed__4_value)}};
static const lean_object* lp_Props2Theories_term_u03c0_u2081___00__closed__5 = (const lean_object*)&lp_Props2Theories_term_u03c0_u2081___00__closed__5_value;
static const lean_ctor_object lp_Props2Theories_term_u03c0_u2081___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Props2Theories_term_u03c0_u2081___00__closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&lp_Props2Theories_term_u03c0_u2081___00__closed__5_value)}};
static const lean_object* lp_Props2Theories_term_u03c0_u2081___00__closed__6 = (const lean_object*)&lp_Props2Theories_term_u03c0_u2081___00__closed__6_value;
LEAN_EXPORT const lean_object* lp_Props2Theories_term_u03c0_u2081__ = (const lean_object*)&lp_Props2Theories_term_u03c0_u2081___00__closed__6_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2081____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "fst_coor"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2081____1___closed__0 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2081____1___closed__0_value;
static lean_once_cell_t lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2081____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2081____1___closed__1;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2081____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2081____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(113, 76, 205, 223, 192, 196, 169, 24)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2081____1___closed__2 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2081____1___closed__2_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2081____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2081____1___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2081____1___closed__3 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2081____1___closed__3_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2081____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2081____1___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2081____1___closed__4 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2081____1___closed__4_value;
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2081____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2081____1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__fst__coor__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__fst__coor__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Props2Theories_term_u03c0_u2082___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 7, .m_data = "termπ₂_"};
static const lean_object* lp_Props2Theories_term_u03c0_u2082___00__closed__0 = (const lean_object*)&lp_Props2Theories_term_u03c0_u2082___00__closed__0_value;
static const lean_ctor_object lp_Props2Theories_term_u03c0_u2082___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_term_u03c0_u2082___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(191, 246, 174, 73, 95, 245, 49, 119)}};
static const lean_object* lp_Props2Theories_term_u03c0_u2082___00__closed__1 = (const lean_object*)&lp_Props2Theories_term_u03c0_u2082___00__closed__1_value;
static const lean_string_object lp_Props2Theories_term_u03c0_u2082___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 3, .m_data = "π₂ "};
static const lean_object* lp_Props2Theories_term_u03c0_u2082___00__closed__2 = (const lean_object*)&lp_Props2Theories_term_u03c0_u2082___00__closed__2_value;
static const lean_ctor_object lp_Props2Theories_term_u03c0_u2082___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Props2Theories_term_u03c0_u2082___00__closed__2_value)}};
static const lean_object* lp_Props2Theories_term_u03c0_u2082___00__closed__3 = (const lean_object*)&lp_Props2Theories_term_u03c0_u2082___00__closed__3_value;
static const lean_ctor_object lp_Props2Theories_term_u03c0_u2082___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term_x28___x2c___x29___closed__3_value),((lean_object*)&lp_Props2Theories_term_u03c0_u2082___00__closed__3_value),((lean_object*)&lp_Props2Theories_term_u03c0_u2081___00__closed__4_value)}};
static const lean_object* lp_Props2Theories_term_u03c0_u2082___00__closed__4 = (const lean_object*)&lp_Props2Theories_term_u03c0_u2082___00__closed__4_value;
static const lean_ctor_object lp_Props2Theories_term_u03c0_u2082___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Props2Theories_term_u03c0_u2082___00__closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&lp_Props2Theories_term_u03c0_u2082___00__closed__4_value)}};
static const lean_object* lp_Props2Theories_term_u03c0_u2082___00__closed__5 = (const lean_object*)&lp_Props2Theories_term_u03c0_u2082___00__closed__5_value;
LEAN_EXPORT const lean_object* lp_Props2Theories_term_u03c0_u2082__ = (const lean_object*)&lp_Props2Theories_term_u03c0_u2082___00__closed__5_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2082____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "snd_coor"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2082____1___closed__0 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2082____1___closed__0_value;
static lean_once_cell_t lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2082____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2082____1___closed__1;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2082____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2082____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(202, 62, 254, 194, 105, 131, 28, 152)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2082____1___closed__2 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2082____1___closed__2_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2082____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2082____1___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2082____1___closed__3 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2082____1___closed__3_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2082____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2082____1___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2082____1___closed__4 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2082____1___closed__4_value;
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2082____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2082____1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__snd__coor__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__snd__coor__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Props2Theories_term___xd7____2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 9, .m_data = "term_×__2"};
static const lean_object* lp_Props2Theories_term___xd7____2___closed__0 = (const lean_object*)&lp_Props2Theories_term___xd7____2___closed__0_value;
static const lean_ctor_object lp_Props2Theories_term___xd7____2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_term___xd7____2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(232, 17, 135, 138, 164, 16, 154, 78)}};
static const lean_object* lp_Props2Theories_term___xd7____2___closed__1 = (const lean_object*)&lp_Props2Theories_term___xd7____2___closed__1_value;
static const lean_string_object lp_Props2Theories_term___xd7____2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 3, .m_data = " × "};
static const lean_object* lp_Props2Theories_term___xd7____2___closed__2 = (const lean_object*)&lp_Props2Theories_term___xd7____2___closed__2_value;
static const lean_ctor_object lp_Props2Theories_term___xd7____2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Props2Theories_term___xd7____2___closed__2_value)}};
static const lean_object* lp_Props2Theories_term___xd7____2___closed__3 = (const lean_object*)&lp_Props2Theories_term___xd7____2___closed__3_value;
static const lean_ctor_object lp_Props2Theories_term___xd7____2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term_x28___x2c___x29___closed__3_value),((lean_object*)&lp_Props2Theories_term___xd7____2___closed__3_value),((lean_object*)&lp_Props2Theories_term_u03c0_u2081___00__closed__4_value)}};
static const lean_object* lp_Props2Theories_term___xd7____2___closed__4 = (const lean_object*)&lp_Props2Theories_term___xd7____2___closed__4_value;
static const lean_ctor_object lp_Props2Theories_term___xd7____2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&lp_Props2Theories_term___xd7____2___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&lp_Props2Theories_term___xd7____2___closed__4_value)}};
static const lean_object* lp_Props2Theories_term___xd7____2___closed__5 = (const lean_object*)&lp_Props2Theories_term___xd7____2___closed__5_value;
LEAN_EXPORT const lean_object* lp_Props2Theories_term___xd7____2 = (const lean_object*)&lp_Props2Theories_term___xd7____2___closed__5_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___xd7____2__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "cart_prod"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___xd7____2__1___closed__0 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___xd7____2__1___closed__0_value;
static lean_once_cell_t lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___xd7____2__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___xd7____2__1___closed__1;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___xd7____2__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___xd7____2__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(5, 154, 255, 41, 11, 163, 76, 249)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___xd7____2__1___closed__2 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___xd7____2__1___closed__2_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___xd7____2__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___xd7____2__1___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___xd7____2__1___closed__3 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___xd7____2__1___closed__3_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___xd7____2__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___xd7____2__1___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___xd7____2__1___closed__4 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___xd7____2__1___closed__4_value;
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___xd7____2__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___xd7____2__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__cart__prod__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__cart__prod__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Props2Theories_term___u2294___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 7, .m_data = "term_⊔_"};
static const lean_object* lp_Props2Theories_term___u2294___00__closed__0 = (const lean_object*)&lp_Props2Theories_term___u2294___00__closed__0_value;
static const lean_ctor_object lp_Props2Theories_term___u2294___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_term___u2294___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(253, 33, 239, 70, 69, 183, 45, 198)}};
static const lean_object* lp_Props2Theories_term___u2294___00__closed__1 = (const lean_object*)&lp_Props2Theories_term___u2294___00__closed__1_value;
static const lean_string_object lp_Props2Theories_term___u2294___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 3, .m_data = " ⊔ "};
static const lean_object* lp_Props2Theories_term___u2294___00__closed__2 = (const lean_object*)&lp_Props2Theories_term___u2294___00__closed__2_value;
static const lean_ctor_object lp_Props2Theories_term___u2294___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2294___00__closed__2_value)}};
static const lean_object* lp_Props2Theories_term___u2294___00__closed__3 = (const lean_object*)&lp_Props2Theories_term___u2294___00__closed__3_value;
static const lean_ctor_object lp_Props2Theories_term___u2294___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term_x28___x2c___x29___closed__3_value),((lean_object*)&lp_Props2Theories_term___u2294___00__closed__3_value),((lean_object*)&lp_Props2Theories_term_u03c0_u2081___00__closed__4_value)}};
static const lean_object* lp_Props2Theories_term___u2294___00__closed__4 = (const lean_object*)&lp_Props2Theories_term___u2294___00__closed__4_value;
static const lean_ctor_object lp_Props2Theories_term___u2294___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2294___00__closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&lp_Props2Theories_term___u2294___00__closed__4_value)}};
static const lean_object* lp_Props2Theories_term___u2294___00__closed__5 = (const lean_object*)&lp_Props2Theories_term___u2294___00__closed__5_value;
LEAN_EXPORT const lean_object* lp_Props2Theories_term___u2294__ = (const lean_object*)&lp_Props2Theories_term___u2294___00__closed__5_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___u2294____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "disj_union2"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___u2294____1___closed__0 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___u2294____1___closed__0_value;
static lean_once_cell_t lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___u2294____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___u2294____1___closed__1;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___u2294____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___u2294____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(231, 36, 195, 43, 69, 86, 24, 100)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___u2294____1___closed__2 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___u2294____1___closed__2_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___u2294____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___u2294____1___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___u2294____1___closed__3 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___u2294____1___closed__3_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___u2294____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___u2294____1___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___u2294____1___closed__4 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___u2294____1___closed__4_value;
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___u2294____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___u2294____1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__disj__union2__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__disj__union2__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Props2Theories_termDU2LP___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "termDU2LP_"};
static const lean_object* lp_Props2Theories_termDU2LP___00__closed__0 = (const lean_object*)&lp_Props2Theories_termDU2LP___00__closed__0_value;
static const lean_ctor_object lp_Props2Theories_termDU2LP___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_termDU2LP___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(72, 3, 212, 157, 165, 78, 247, 128)}};
static const lean_object* lp_Props2Theories_termDU2LP___00__closed__1 = (const lean_object*)&lp_Props2Theories_termDU2LP___00__closed__1_value;
static const lean_string_object lp_Props2Theories_termDU2LP___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "DU2LP "};
static const lean_object* lp_Props2Theories_termDU2LP___00__closed__2 = (const lean_object*)&lp_Props2Theories_termDU2LP___00__closed__2_value;
static const lean_ctor_object lp_Props2Theories_termDU2LP___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Props2Theories_termDU2LP___00__closed__2_value)}};
static const lean_object* lp_Props2Theories_termDU2LP___00__closed__3 = (const lean_object*)&lp_Props2Theories_termDU2LP___00__closed__3_value;
static const lean_ctor_object lp_Props2Theories_termDU2LP___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term_x28___x2c___x29___closed__3_value),((lean_object*)&lp_Props2Theories_termDU2LP___00__closed__3_value),((lean_object*)&lp_Props2Theories_term_u03c0_u2081___00__closed__4_value)}};
static const lean_object* lp_Props2Theories_termDU2LP___00__closed__4 = (const lean_object*)&lp_Props2Theories_termDU2LP___00__closed__4_value;
static const lean_ctor_object lp_Props2Theories_termDU2LP___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Props2Theories_termDU2LP___00__closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&lp_Props2Theories_termDU2LP___00__closed__4_value)}};
static const lean_object* lp_Props2Theories_termDU2LP___00__closed__5 = (const lean_object*)&lp_Props2Theories_termDU2LP___00__closed__5_value;
LEAN_EXPORT const lean_object* lp_Props2Theories_termDU2LP__ = (const lean_object*)&lp_Props2Theories_termDU2LP___00__closed__5_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2LP____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "disjoint_union2_left"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2LP____1___closed__0 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2LP____1___closed__0_value;
static lean_once_cell_t lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2LP____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2LP____1___closed__1;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2LP____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2LP____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(236, 47, 159, 18, 255, 252, 147, 123)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2LP____1___closed__2 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2LP____1___closed__2_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2LP____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2LP____1___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2LP____1___closed__3 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2LP____1___closed__3_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2LP____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2LP____1___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2LP____1___closed__4 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2LP____1___closed__4_value;
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2LP____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2LP____1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__disjoint__union2__left__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__disjoint__union2__left__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Props2Theories_termDU2RP___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "termDU2RP_"};
static const lean_object* lp_Props2Theories_termDU2RP___00__closed__0 = (const lean_object*)&lp_Props2Theories_termDU2RP___00__closed__0_value;
static const lean_ctor_object lp_Props2Theories_termDU2RP___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_termDU2RP___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(9, 74, 45, 223, 162, 220, 162, 175)}};
static const lean_object* lp_Props2Theories_termDU2RP___00__closed__1 = (const lean_object*)&lp_Props2Theories_termDU2RP___00__closed__1_value;
static const lean_string_object lp_Props2Theories_termDU2RP___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "DU2RP "};
static const lean_object* lp_Props2Theories_termDU2RP___00__closed__2 = (const lean_object*)&lp_Props2Theories_termDU2RP___00__closed__2_value;
static const lean_ctor_object lp_Props2Theories_termDU2RP___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Props2Theories_termDU2RP___00__closed__2_value)}};
static const lean_object* lp_Props2Theories_termDU2RP___00__closed__3 = (const lean_object*)&lp_Props2Theories_termDU2RP___00__closed__3_value;
static const lean_ctor_object lp_Props2Theories_termDU2RP___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term_x28___x2c___x29___closed__3_value),((lean_object*)&lp_Props2Theories_termDU2RP___00__closed__3_value),((lean_object*)&lp_Props2Theories_term_u03c0_u2081___00__closed__4_value)}};
static const lean_object* lp_Props2Theories_termDU2RP___00__closed__4 = (const lean_object*)&lp_Props2Theories_termDU2RP___00__closed__4_value;
static const lean_ctor_object lp_Props2Theories_termDU2RP___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Props2Theories_termDU2RP___00__closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&lp_Props2Theories_termDU2RP___00__closed__4_value)}};
static const lean_object* lp_Props2Theories_termDU2RP___00__closed__5 = (const lean_object*)&lp_Props2Theories_termDU2RP___00__closed__5_value;
LEAN_EXPORT const lean_object* lp_Props2Theories_termDU2RP__ = (const lean_object*)&lp_Props2Theories_termDU2RP___00__closed__5_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2RP____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "disjoint_union2_right"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2RP____1___closed__0 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2RP____1___closed__0_value;
static lean_once_cell_t lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2RP____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2RP____1___closed__1;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2RP____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2RP____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(176, 7, 132, 224, 155, 34, 186, 240)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2RP____1___closed__2 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2RP____1___closed__2_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2RP____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2RP____1___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2RP____1___closed__3 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2RP____1___closed__3_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2RP____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2RP____1___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2RP____1___closed__4 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2RP____1___closed__4_value;
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2RP____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2RP____1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__disjoint__union2__right__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__disjoint__union2__right__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Props2Theories_termDU2L___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "termDU2L_"};
static const lean_object* lp_Props2Theories_termDU2L___00__closed__0 = (const lean_object*)&lp_Props2Theories_termDU2L___00__closed__0_value;
static const lean_ctor_object lp_Props2Theories_termDU2L___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_termDU2L___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(120, 232, 152, 244, 66, 123, 212, 58)}};
static const lean_object* lp_Props2Theories_termDU2L___00__closed__1 = (const lean_object*)&lp_Props2Theories_termDU2L___00__closed__1_value;
static const lean_string_object lp_Props2Theories_termDU2L___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "DU2L "};
static const lean_object* lp_Props2Theories_termDU2L___00__closed__2 = (const lean_object*)&lp_Props2Theories_termDU2L___00__closed__2_value;
static const lean_ctor_object lp_Props2Theories_termDU2L___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Props2Theories_termDU2L___00__closed__2_value)}};
static const lean_object* lp_Props2Theories_termDU2L___00__closed__3 = (const lean_object*)&lp_Props2Theories_termDU2L___00__closed__3_value;
static const lean_ctor_object lp_Props2Theories_termDU2L___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term_x28___x2c___x29___closed__3_value),((lean_object*)&lp_Props2Theories_termDU2L___00__closed__3_value),((lean_object*)&lp_Props2Theories_term_u03c0_u2081___00__closed__4_value)}};
static const lean_object* lp_Props2Theories_termDU2L___00__closed__4 = (const lean_object*)&lp_Props2Theories_termDU2L___00__closed__4_value;
static const lean_ctor_object lp_Props2Theories_termDU2L___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Props2Theories_termDU2L___00__closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&lp_Props2Theories_termDU2L___00__closed__4_value)}};
static const lean_object* lp_Props2Theories_termDU2L___00__closed__5 = (const lean_object*)&lp_Props2Theories_termDU2L___00__closed__5_value;
LEAN_EXPORT const lean_object* lp_Props2Theories_termDU2L__ = (const lean_object*)&lp_Props2Theories_termDU2L___00__closed__5_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2L____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "disjoint_union2_left_set"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2L____1___closed__0 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2L____1___closed__0_value;
static lean_once_cell_t lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2L____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2L____1___closed__1;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2L____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2L____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(66, 185, 89, 54, 48, 28, 100, 17)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2L____1___closed__2 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2L____1___closed__2_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2L____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2L____1___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2L____1___closed__3 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2L____1___closed__3_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2L____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2L____1___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2L____1___closed__4 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2L____1___closed__4_value;
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2L____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2L____1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__disjoint__union2__left__set__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__disjoint__union2__left__set__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Props2Theories_termDU2R___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "termDU2R_"};
static const lean_object* lp_Props2Theories_termDU2R___00__closed__0 = (const lean_object*)&lp_Props2Theories_termDU2R___00__closed__0_value;
static const lean_ctor_object lp_Props2Theories_termDU2R___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_termDU2R___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(131, 43, 206, 233, 170, 72, 6, 112)}};
static const lean_object* lp_Props2Theories_termDU2R___00__closed__1 = (const lean_object*)&lp_Props2Theories_termDU2R___00__closed__1_value;
static const lean_string_object lp_Props2Theories_termDU2R___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "DU2R "};
static const lean_object* lp_Props2Theories_termDU2R___00__closed__2 = (const lean_object*)&lp_Props2Theories_termDU2R___00__closed__2_value;
static const lean_ctor_object lp_Props2Theories_termDU2R___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Props2Theories_termDU2R___00__closed__2_value)}};
static const lean_object* lp_Props2Theories_termDU2R___00__closed__3 = (const lean_object*)&lp_Props2Theories_termDU2R___00__closed__3_value;
static const lean_ctor_object lp_Props2Theories_termDU2R___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term_x28___x2c___x29___closed__3_value),((lean_object*)&lp_Props2Theories_termDU2R___00__closed__3_value),((lean_object*)&lp_Props2Theories_term_u03c0_u2081___00__closed__4_value)}};
static const lean_object* lp_Props2Theories_termDU2R___00__closed__4 = (const lean_object*)&lp_Props2Theories_termDU2R___00__closed__4_value;
static const lean_ctor_object lp_Props2Theories_termDU2R___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Props2Theories_termDU2R___00__closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&lp_Props2Theories_termDU2R___00__closed__4_value)}};
static const lean_object* lp_Props2Theories_termDU2R___00__closed__5 = (const lean_object*)&lp_Props2Theories_termDU2R___00__closed__5_value;
LEAN_EXPORT const lean_object* lp_Props2Theories_termDU2R__ = (const lean_object*)&lp_Props2Theories_termDU2R___00__closed__5_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2R____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "disjoint_union2_right_set"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2R____1___closed__0 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2R____1___closed__0_value;
static lean_once_cell_t lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2R____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2R____1___closed__1;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2R____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2R____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(199, 147, 19, 243, 195, 79, 94, 43)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2R____1___closed__2 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2R____1___closed__2_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2R____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2R____1___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2R____1___closed__3 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2R____1___closed__3_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2R____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2R____1___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2R____1___closed__4 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2R____1___closed__4_value;
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2R____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2R____1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__disjoint__union2__right__set__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__disjoint__union2__right__set__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* _init_lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__6(void){
_start:
{
lean_object* v___x_53_; lean_object* v___x_54_; 
v___x_53_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__5));
v___x_54_ = l_String_toRawSubstring_x27(v___x_53_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1(lean_object* v_x_66_, lean_object* v_a_67_, lean_object* v_a_68_){
_start:
{
lean_object* v___x_69_; uint8_t v___x_70_; 
v___x_69_ = ((lean_object*)(lp_Props2Theories_term_x28___x2c___x29___closed__1));
lean_inc(v_x_66_);
v___x_70_ = l_Lean_Syntax_isOfKind(v_x_66_, v___x_69_);
if (v___x_70_ == 0)
{
lean_object* v___x_71_; lean_object* v___x_72_; 
lean_dec(v_x_66_);
v___x_71_ = lean_box(1);
v___x_72_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_72_, 0, v___x_71_);
lean_ctor_set(v___x_72_, 1, v_a_68_);
return v___x_72_;
}
else
{
lean_object* v_quotContext_73_; lean_object* v_currMacroScope_74_; lean_object* v_ref_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; uint8_t v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; 
v_quotContext_73_ = lean_ctor_get(v_a_67_, 1);
v_currMacroScope_74_ = lean_ctor_get(v_a_67_, 2);
v_ref_75_ = lean_ctor_get(v_a_67_, 5);
v___x_76_ = lean_unsigned_to_nat(1u);
v___x_77_ = l_Lean_Syntax_getArg(v_x_66_, v___x_76_);
v___x_78_ = lean_unsigned_to_nat(3u);
v___x_79_ = l_Lean_Syntax_getArg(v_x_66_, v___x_78_);
lean_dec(v_x_66_);
v___x_80_ = 0;
v___x_81_ = l_Lean_SourceInfo_fromRef(v_ref_75_, v___x_80_);
v___x_82_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__4));
v___x_83_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__6, &lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__6_once, _init_lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__6);
v___x_84_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__7));
lean_inc(v_currMacroScope_74_);
lean_inc(v_quotContext_73_);
v___x_85_ = l_Lean_addMacroScope(v_quotContext_73_, v___x_84_, v_currMacroScope_74_);
v___x_86_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__9));
lean_inc_n(v___x_81_, 2);
v___x_87_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_87_, 0, v___x_81_);
lean_ctor_set(v___x_87_, 1, v___x_83_);
lean_ctor_set(v___x_87_, 2, v___x_85_);
lean_ctor_set(v___x_87_, 3, v___x_86_);
v___x_88_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__11));
v___x_89_ = l_Lean_Syntax_node2(v___x_81_, v___x_88_, v___x_77_, v___x_79_);
v___x_90_ = l_Lean_Syntax_node2(v___x_81_, v___x_82_, v___x_87_, v___x_89_);
v___x_91_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_91_, 0, v___x_90_);
lean_ctor_set(v___x_91_, 1, v_a_68_);
return v___x_91_;
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___boxed(lean_object* v_x_92_, lean_object* v_a_93_, lean_object* v_a_94_){
_start:
{
lean_object* v_res_95_; 
v_res_95_ = lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1(v_x_92_, v_a_93_, v_a_94_);
lean_dec_ref(v_a_93_);
return v_res_95_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__ord__pr__set__1(lean_object* v_x_99_, lean_object* v_a_100_, lean_object* v_a_101_){
_start:
{
lean_object* v___x_102_; uint8_t v___x_103_; 
v___x_102_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__4));
lean_inc(v_x_99_);
v___x_103_ = l_Lean_Syntax_isOfKind(v_x_99_, v___x_102_);
if (v___x_103_ == 0)
{
lean_object* v___x_104_; lean_object* v___x_105_; 
lean_dec(v_x_99_);
v___x_104_ = lean_box(0);
v___x_105_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_105_, 0, v___x_104_);
lean_ctor_set(v___x_105_, 1, v_a_101_);
return v___x_105_;
}
else
{
lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; uint8_t v___x_109_; 
v___x_106_ = lean_unsigned_to_nat(0u);
v___x_107_ = l_Lean_Syntax_getArg(v_x_99_, v___x_106_);
v___x_108_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__ord__pr__set__1___closed__1));
lean_inc(v___x_107_);
v___x_109_ = l_Lean_Syntax_isOfKind(v___x_107_, v___x_108_);
if (v___x_109_ == 0)
{
lean_object* v___x_110_; lean_object* v___x_111_; 
lean_dec(v___x_107_);
lean_dec(v_x_99_);
v___x_110_ = lean_box(0);
v___x_111_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_111_, 0, v___x_110_);
lean_ctor_set(v___x_111_, 1, v_a_101_);
return v___x_111_;
}
else
{
lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; uint8_t v___x_115_; 
v___x_112_ = lean_unsigned_to_nat(1u);
v___x_113_ = l_Lean_Syntax_getArg(v_x_99_, v___x_112_);
lean_dec(v_x_99_);
v___x_114_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_113_);
v___x_115_ = l_Lean_Syntax_matchesNull(v___x_113_, v___x_114_);
if (v___x_115_ == 0)
{
lean_object* v___x_116_; lean_object* v___x_117_; 
lean_dec(v___x_113_);
lean_dec(v___x_107_);
v___x_116_ = lean_box(0);
v___x_117_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_117_, 0, v___x_116_);
lean_ctor_set(v___x_117_, 1, v_a_101_);
return v___x_117_;
}
else
{
lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v_ref_120_; uint8_t v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; 
v___x_118_ = l_Lean_Syntax_getArg(v___x_113_, v___x_106_);
v___x_119_ = l_Lean_Syntax_getArg(v___x_113_, v___x_112_);
lean_dec(v___x_113_);
v_ref_120_ = l_Lean_replaceRef(v___x_107_, v_a_100_);
lean_dec(v___x_107_);
v___x_121_ = 0;
v___x_122_ = l_Lean_SourceInfo_fromRef(v_ref_120_, v___x_121_);
lean_dec(v_ref_120_);
v___x_123_ = ((lean_object*)(lp_Props2Theories_term_x28___x2c___x29___closed__1));
v___x_124_ = ((lean_object*)(lp_Props2Theories_term_x28___x2c___x29___closed__4));
lean_inc_n(v___x_122_, 3);
v___x_125_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_125_, 0, v___x_122_);
lean_ctor_set(v___x_125_, 1, v___x_124_);
v___x_126_ = ((lean_object*)(lp_Props2Theories_term_x28___x2c___x29___closed__10));
v___x_127_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_127_, 0, v___x_122_);
lean_ctor_set(v___x_127_, 1, v___x_126_);
v___x_128_ = ((lean_object*)(lp_Props2Theories_term_x28___x2c___x29___closed__14));
v___x_129_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_129_, 0, v___x_122_);
lean_ctor_set(v___x_129_, 1, v___x_128_);
v___x_130_ = l_Lean_Syntax_node5(v___x_122_, v___x_123_, v___x_125_, v___x_118_, v___x_127_, v___x_119_, v___x_129_);
v___x_131_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_131_, 0, v___x_130_);
lean_ctor_set(v___x_131_, 1, v_a_101_);
return v___x_131_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__ord__pr__set__1___boxed(lean_object* v_x_132_, lean_object* v_a_133_, lean_object* v_a_134_){
_start:
{
lean_object* v_res_135_; 
v_res_135_ = lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__ord__pr__set__1(v_x_132_, v_a_133_, v_a_134_);
lean_dec(v_a_133_);
return v_res_135_;
}
}
static lean_object* _init_lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2081____1___closed__1(void){
_start:
{
lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_155_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2081____1___closed__0));
v___x_156_ = l_String_toRawSubstring_x27(v___x_155_);
return v___x_156_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2081____1(lean_object* v_x_165_, lean_object* v_a_166_, lean_object* v_a_167_){
_start:
{
lean_object* v___x_168_; uint8_t v___x_169_; 
v___x_168_ = ((lean_object*)(lp_Props2Theories_term_u03c0_u2081___00__closed__1));
lean_inc(v_x_165_);
v___x_169_ = l_Lean_Syntax_isOfKind(v_x_165_, v___x_168_);
if (v___x_169_ == 0)
{
lean_object* v___x_170_; lean_object* v___x_171_; 
lean_dec(v_x_165_);
v___x_170_ = lean_box(1);
v___x_171_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_171_, 0, v___x_170_);
lean_ctor_set(v___x_171_, 1, v_a_167_);
return v___x_171_;
}
else
{
lean_object* v_quotContext_172_; lean_object* v_currMacroScope_173_; lean_object* v_ref_174_; lean_object* v___x_175_; lean_object* v___x_176_; uint8_t v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; 
v_quotContext_172_ = lean_ctor_get(v_a_166_, 1);
v_currMacroScope_173_ = lean_ctor_get(v_a_166_, 2);
v_ref_174_ = lean_ctor_get(v_a_166_, 5);
v___x_175_ = lean_unsigned_to_nat(1u);
v___x_176_ = l_Lean_Syntax_getArg(v_x_165_, v___x_175_);
lean_dec(v_x_165_);
v___x_177_ = 0;
v___x_178_ = l_Lean_SourceInfo_fromRef(v_ref_174_, v___x_177_);
v___x_179_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__4));
v___x_180_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2081____1___closed__1, &lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2081____1___closed__1_once, _init_lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2081____1___closed__1);
v___x_181_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2081____1___closed__2));
lean_inc(v_currMacroScope_173_);
lean_inc(v_quotContext_172_);
v___x_182_ = l_Lean_addMacroScope(v_quotContext_172_, v___x_181_, v_currMacroScope_173_);
v___x_183_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2081____1___closed__4));
lean_inc_n(v___x_178_, 2);
v___x_184_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_184_, 0, v___x_178_);
lean_ctor_set(v___x_184_, 1, v___x_180_);
lean_ctor_set(v___x_184_, 2, v___x_182_);
lean_ctor_set(v___x_184_, 3, v___x_183_);
v___x_185_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__11));
v___x_186_ = l_Lean_Syntax_node1(v___x_178_, v___x_185_, v___x_176_);
v___x_187_ = l_Lean_Syntax_node2(v___x_178_, v___x_179_, v___x_184_, v___x_186_);
v___x_188_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_188_, 0, v___x_187_);
lean_ctor_set(v___x_188_, 1, v_a_167_);
return v___x_188_;
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2081____1___boxed(lean_object* v_x_189_, lean_object* v_a_190_, lean_object* v_a_191_){
_start:
{
lean_object* v_res_192_; 
v_res_192_ = lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2081____1(v_x_189_, v_a_190_, v_a_191_);
lean_dec_ref(v_a_190_);
return v_res_192_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__fst__coor__1(lean_object* v_x_193_, lean_object* v_a_194_, lean_object* v_a_195_){
_start:
{
lean_object* v___x_196_; uint8_t v___x_197_; 
v___x_196_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__4));
lean_inc(v_x_193_);
v___x_197_ = l_Lean_Syntax_isOfKind(v_x_193_, v___x_196_);
if (v___x_197_ == 0)
{
lean_object* v___x_198_; lean_object* v___x_199_; 
lean_dec(v_x_193_);
v___x_198_ = lean_box(0);
v___x_199_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_199_, 0, v___x_198_);
lean_ctor_set(v___x_199_, 1, v_a_195_);
return v___x_199_;
}
else
{
lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; uint8_t v___x_203_; 
v___x_200_ = lean_unsigned_to_nat(0u);
v___x_201_ = l_Lean_Syntax_getArg(v_x_193_, v___x_200_);
v___x_202_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__ord__pr__set__1___closed__1));
lean_inc(v___x_201_);
v___x_203_ = l_Lean_Syntax_isOfKind(v___x_201_, v___x_202_);
if (v___x_203_ == 0)
{
lean_object* v___x_204_; lean_object* v___x_205_; 
lean_dec(v___x_201_);
lean_dec(v_x_193_);
v___x_204_ = lean_box(0);
v___x_205_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_205_, 0, v___x_204_);
lean_ctor_set(v___x_205_, 1, v_a_195_);
return v___x_205_;
}
else
{
lean_object* v___x_206_; lean_object* v___x_207_; uint8_t v___x_208_; 
v___x_206_ = lean_unsigned_to_nat(1u);
v___x_207_ = l_Lean_Syntax_getArg(v_x_193_, v___x_206_);
lean_dec(v_x_193_);
lean_inc(v___x_207_);
v___x_208_ = l_Lean_Syntax_matchesNull(v___x_207_, v___x_206_);
if (v___x_208_ == 0)
{
lean_object* v___x_209_; lean_object* v___x_210_; 
lean_dec(v___x_207_);
lean_dec(v___x_201_);
v___x_209_ = lean_box(0);
v___x_210_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_210_, 0, v___x_209_);
lean_ctor_set(v___x_210_, 1, v_a_195_);
return v___x_210_;
}
else
{
lean_object* v___x_211_; lean_object* v_ref_212_; uint8_t v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; 
v___x_211_ = l_Lean_Syntax_getArg(v___x_207_, v___x_200_);
lean_dec(v___x_207_);
v_ref_212_ = l_Lean_replaceRef(v___x_201_, v_a_194_);
lean_dec(v___x_201_);
v___x_213_ = 0;
v___x_214_ = l_Lean_SourceInfo_fromRef(v_ref_212_, v___x_213_);
lean_dec(v_ref_212_);
v___x_215_ = ((lean_object*)(lp_Props2Theories_term_u03c0_u2081___00__closed__1));
v___x_216_ = ((lean_object*)(lp_Props2Theories_term_u03c0_u2081___00__closed__2));
lean_inc(v___x_214_);
v___x_217_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_217_, 0, v___x_214_);
lean_ctor_set(v___x_217_, 1, v___x_216_);
v___x_218_ = l_Lean_Syntax_node2(v___x_214_, v___x_215_, v___x_217_, v___x_211_);
v___x_219_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_219_, 0, v___x_218_);
lean_ctor_set(v___x_219_, 1, v_a_195_);
return v___x_219_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__fst__coor__1___boxed(lean_object* v_x_220_, lean_object* v_a_221_, lean_object* v_a_222_){
_start:
{
lean_object* v_res_223_; 
v_res_223_ = lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__fst__coor__1(v_x_220_, v_a_221_, v_a_222_);
lean_dec(v_a_221_);
return v_res_223_;
}
}
static lean_object* _init_lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2082____1___closed__1(void){
_start:
{
lean_object* v___x_240_; lean_object* v___x_241_; 
v___x_240_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2082____1___closed__0));
v___x_241_ = l_String_toRawSubstring_x27(v___x_240_);
return v___x_241_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2082____1(lean_object* v_x_250_, lean_object* v_a_251_, lean_object* v_a_252_){
_start:
{
lean_object* v___x_253_; uint8_t v___x_254_; 
v___x_253_ = ((lean_object*)(lp_Props2Theories_term_u03c0_u2082___00__closed__1));
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
lean_object* v_quotContext_257_; lean_object* v_currMacroScope_258_; lean_object* v_ref_259_; lean_object* v___x_260_; lean_object* v___x_261_; uint8_t v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; 
v_quotContext_257_ = lean_ctor_get(v_a_251_, 1);
v_currMacroScope_258_ = lean_ctor_get(v_a_251_, 2);
v_ref_259_ = lean_ctor_get(v_a_251_, 5);
v___x_260_ = lean_unsigned_to_nat(1u);
v___x_261_ = l_Lean_Syntax_getArg(v_x_250_, v___x_260_);
lean_dec(v_x_250_);
v___x_262_ = 0;
v___x_263_ = l_Lean_SourceInfo_fromRef(v_ref_259_, v___x_262_);
v___x_264_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__4));
v___x_265_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2082____1___closed__1, &lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2082____1___closed__1_once, _init_lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2082____1___closed__1);
v___x_266_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2082____1___closed__2));
lean_inc(v_currMacroScope_258_);
lean_inc(v_quotContext_257_);
v___x_267_ = l_Lean_addMacroScope(v_quotContext_257_, v___x_266_, v_currMacroScope_258_);
v___x_268_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2082____1___closed__4));
lean_inc_n(v___x_263_, 2);
v___x_269_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_269_, 0, v___x_263_);
lean_ctor_set(v___x_269_, 1, v___x_265_);
lean_ctor_set(v___x_269_, 2, v___x_267_);
lean_ctor_set(v___x_269_, 3, v___x_268_);
v___x_270_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__11));
v___x_271_ = l_Lean_Syntax_node1(v___x_263_, v___x_270_, v___x_261_);
v___x_272_ = l_Lean_Syntax_node2(v___x_263_, v___x_264_, v___x_269_, v___x_271_);
v___x_273_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_273_, 0, v___x_272_);
lean_ctor_set(v___x_273_, 1, v_a_252_);
return v___x_273_;
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2082____1___boxed(lean_object* v_x_274_, lean_object* v_a_275_, lean_object* v_a_276_){
_start:
{
lean_object* v_res_277_; 
v_res_277_ = lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_u03c0_u2082____1(v_x_274_, v_a_275_, v_a_276_);
lean_dec_ref(v_a_275_);
return v_res_277_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__snd__coor__1(lean_object* v_x_278_, lean_object* v_a_279_, lean_object* v_a_280_){
_start:
{
lean_object* v___x_281_; uint8_t v___x_282_; 
v___x_281_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__4));
lean_inc(v_x_278_);
v___x_282_ = l_Lean_Syntax_isOfKind(v_x_278_, v___x_281_);
if (v___x_282_ == 0)
{
lean_object* v___x_283_; lean_object* v___x_284_; 
lean_dec(v_x_278_);
v___x_283_ = lean_box(0);
v___x_284_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_284_, 0, v___x_283_);
lean_ctor_set(v___x_284_, 1, v_a_280_);
return v___x_284_;
}
else
{
lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; uint8_t v___x_288_; 
v___x_285_ = lean_unsigned_to_nat(0u);
v___x_286_ = l_Lean_Syntax_getArg(v_x_278_, v___x_285_);
v___x_287_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__ord__pr__set__1___closed__1));
lean_inc(v___x_286_);
v___x_288_ = l_Lean_Syntax_isOfKind(v___x_286_, v___x_287_);
if (v___x_288_ == 0)
{
lean_object* v___x_289_; lean_object* v___x_290_; 
lean_dec(v___x_286_);
lean_dec(v_x_278_);
v___x_289_ = lean_box(0);
v___x_290_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_290_, 0, v___x_289_);
lean_ctor_set(v___x_290_, 1, v_a_280_);
return v___x_290_;
}
else
{
lean_object* v___x_291_; lean_object* v___x_292_; uint8_t v___x_293_; 
v___x_291_ = lean_unsigned_to_nat(1u);
v___x_292_ = l_Lean_Syntax_getArg(v_x_278_, v___x_291_);
lean_dec(v_x_278_);
lean_inc(v___x_292_);
v___x_293_ = l_Lean_Syntax_matchesNull(v___x_292_, v___x_291_);
if (v___x_293_ == 0)
{
lean_object* v___x_294_; lean_object* v___x_295_; 
lean_dec(v___x_292_);
lean_dec(v___x_286_);
v___x_294_ = lean_box(0);
v___x_295_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_295_, 0, v___x_294_);
lean_ctor_set(v___x_295_, 1, v_a_280_);
return v___x_295_;
}
else
{
lean_object* v___x_296_; lean_object* v_ref_297_; uint8_t v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; 
v___x_296_ = l_Lean_Syntax_getArg(v___x_292_, v___x_285_);
lean_dec(v___x_292_);
v_ref_297_ = l_Lean_replaceRef(v___x_286_, v_a_279_);
lean_dec(v___x_286_);
v___x_298_ = 0;
v___x_299_ = l_Lean_SourceInfo_fromRef(v_ref_297_, v___x_298_);
lean_dec(v_ref_297_);
v___x_300_ = ((lean_object*)(lp_Props2Theories_term_u03c0_u2082___00__closed__1));
v___x_301_ = ((lean_object*)(lp_Props2Theories_term_u03c0_u2082___00__closed__2));
lean_inc(v___x_299_);
v___x_302_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_302_, 0, v___x_299_);
lean_ctor_set(v___x_302_, 1, v___x_301_);
v___x_303_ = l_Lean_Syntax_node2(v___x_299_, v___x_300_, v___x_302_, v___x_296_);
v___x_304_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_304_, 0, v___x_303_);
lean_ctor_set(v___x_304_, 1, v_a_280_);
return v___x_304_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__snd__coor__1___boxed(lean_object* v_x_305_, lean_object* v_a_306_, lean_object* v_a_307_){
_start:
{
lean_object* v_res_308_; 
v_res_308_ = lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__snd__coor__1(v_x_305_, v_a_306_, v_a_307_);
lean_dec(v_a_306_);
return v_res_308_;
}
}
static lean_object* _init_lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___xd7____2__1___closed__1(void){
_start:
{
lean_object* v___x_325_; lean_object* v___x_326_; 
v___x_325_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___xd7____2__1___closed__0));
v___x_326_ = l_String_toRawSubstring_x27(v___x_325_);
return v___x_326_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___xd7____2__1(lean_object* v_x_335_, lean_object* v_a_336_, lean_object* v_a_337_){
_start:
{
lean_object* v___x_338_; uint8_t v___x_339_; 
v___x_338_ = ((lean_object*)(lp_Props2Theories_term___xd7____2___closed__1));
lean_inc(v_x_335_);
v___x_339_ = l_Lean_Syntax_isOfKind(v_x_335_, v___x_338_);
if (v___x_339_ == 0)
{
lean_object* v___x_340_; lean_object* v___x_341_; 
lean_dec(v_x_335_);
v___x_340_ = lean_box(1);
v___x_341_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_341_, 0, v___x_340_);
lean_ctor_set(v___x_341_, 1, v_a_337_);
return v___x_341_;
}
else
{
lean_object* v_quotContext_342_; lean_object* v_currMacroScope_343_; lean_object* v_ref_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; uint8_t v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; 
v_quotContext_342_ = lean_ctor_get(v_a_336_, 1);
v_currMacroScope_343_ = lean_ctor_get(v_a_336_, 2);
v_ref_344_ = lean_ctor_get(v_a_336_, 5);
v___x_345_ = lean_unsigned_to_nat(0u);
v___x_346_ = l_Lean_Syntax_getArg(v_x_335_, v___x_345_);
v___x_347_ = lean_unsigned_to_nat(2u);
v___x_348_ = l_Lean_Syntax_getArg(v_x_335_, v___x_347_);
lean_dec(v_x_335_);
v___x_349_ = 0;
v___x_350_ = l_Lean_SourceInfo_fromRef(v_ref_344_, v___x_349_);
v___x_351_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__4));
v___x_352_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___xd7____2__1___closed__1, &lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___xd7____2__1___closed__1_once, _init_lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___xd7____2__1___closed__1);
v___x_353_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___xd7____2__1___closed__2));
lean_inc(v_currMacroScope_343_);
lean_inc(v_quotContext_342_);
v___x_354_ = l_Lean_addMacroScope(v_quotContext_342_, v___x_353_, v_currMacroScope_343_);
v___x_355_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___xd7____2__1___closed__4));
lean_inc_n(v___x_350_, 2);
v___x_356_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_356_, 0, v___x_350_);
lean_ctor_set(v___x_356_, 1, v___x_352_);
lean_ctor_set(v___x_356_, 2, v___x_354_);
lean_ctor_set(v___x_356_, 3, v___x_355_);
v___x_357_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__11));
v___x_358_ = l_Lean_Syntax_node2(v___x_350_, v___x_357_, v___x_346_, v___x_348_);
v___x_359_ = l_Lean_Syntax_node2(v___x_350_, v___x_351_, v___x_356_, v___x_358_);
v___x_360_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_360_, 0, v___x_359_);
lean_ctor_set(v___x_360_, 1, v_a_337_);
return v___x_360_;
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___xd7____2__1___boxed(lean_object* v_x_361_, lean_object* v_a_362_, lean_object* v_a_363_){
_start:
{
lean_object* v_res_364_; 
v_res_364_ = lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___xd7____2__1(v_x_361_, v_a_362_, v_a_363_);
lean_dec_ref(v_a_362_);
return v_res_364_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__cart__prod__1(lean_object* v_x_365_, lean_object* v_a_366_, lean_object* v_a_367_){
_start:
{
lean_object* v___x_368_; uint8_t v___x_369_; 
v___x_368_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__4));
lean_inc(v_x_365_);
v___x_369_ = l_Lean_Syntax_isOfKind(v_x_365_, v___x_368_);
if (v___x_369_ == 0)
{
lean_object* v___x_370_; lean_object* v___x_371_; 
lean_dec(v_x_365_);
v___x_370_ = lean_box(0);
v___x_371_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_371_, 0, v___x_370_);
lean_ctor_set(v___x_371_, 1, v_a_367_);
return v___x_371_;
}
else
{
lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; uint8_t v___x_375_; 
v___x_372_ = lean_unsigned_to_nat(0u);
v___x_373_ = l_Lean_Syntax_getArg(v_x_365_, v___x_372_);
v___x_374_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__ord__pr__set__1___closed__1));
lean_inc(v___x_373_);
v___x_375_ = l_Lean_Syntax_isOfKind(v___x_373_, v___x_374_);
if (v___x_375_ == 0)
{
lean_object* v___x_376_; lean_object* v___x_377_; 
lean_dec(v___x_373_);
lean_dec(v_x_365_);
v___x_376_ = lean_box(0);
v___x_377_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_377_, 0, v___x_376_);
lean_ctor_set(v___x_377_, 1, v_a_367_);
return v___x_377_;
}
else
{
lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; uint8_t v___x_381_; 
v___x_378_ = lean_unsigned_to_nat(1u);
v___x_379_ = l_Lean_Syntax_getArg(v_x_365_, v___x_378_);
lean_dec(v_x_365_);
v___x_380_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_379_);
v___x_381_ = l_Lean_Syntax_matchesNull(v___x_379_, v___x_380_);
if (v___x_381_ == 0)
{
lean_object* v___x_382_; lean_object* v___x_383_; 
lean_dec(v___x_379_);
lean_dec(v___x_373_);
v___x_382_ = lean_box(0);
v___x_383_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_383_, 0, v___x_382_);
lean_ctor_set(v___x_383_, 1, v_a_367_);
return v___x_383_;
}
else
{
lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v_ref_386_; uint8_t v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; 
v___x_384_ = l_Lean_Syntax_getArg(v___x_379_, v___x_372_);
v___x_385_ = l_Lean_Syntax_getArg(v___x_379_, v___x_378_);
lean_dec(v___x_379_);
v_ref_386_ = l_Lean_replaceRef(v___x_373_, v_a_366_);
lean_dec(v___x_373_);
v___x_387_ = 0;
v___x_388_ = l_Lean_SourceInfo_fromRef(v_ref_386_, v___x_387_);
lean_dec(v_ref_386_);
v___x_389_ = ((lean_object*)(lp_Props2Theories_term___xd7____2___closed__1));
v___x_390_ = ((lean_object*)(lp_Props2Theories_term___xd7____2___closed__2));
lean_inc(v___x_388_);
v___x_391_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_391_, 0, v___x_388_);
lean_ctor_set(v___x_391_, 1, v___x_390_);
v___x_392_ = l_Lean_Syntax_node3(v___x_388_, v___x_389_, v___x_384_, v___x_391_, v___x_385_);
v___x_393_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_393_, 0, v___x_392_);
lean_ctor_set(v___x_393_, 1, v_a_367_);
return v___x_393_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__cart__prod__1___boxed(lean_object* v_x_394_, lean_object* v_a_395_, lean_object* v_a_396_){
_start:
{
lean_object* v_res_397_; 
v_res_397_ = lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__cart__prod__1(v_x_394_, v_a_395_, v_a_396_);
lean_dec(v_a_395_);
return v_res_397_;
}
}
static lean_object* _init_lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___u2294____1___closed__1(void){
_start:
{
lean_object* v___x_414_; lean_object* v___x_415_; 
v___x_414_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___u2294____1___closed__0));
v___x_415_ = l_String_toRawSubstring_x27(v___x_414_);
return v___x_415_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___u2294____1(lean_object* v_x_424_, lean_object* v_a_425_, lean_object* v_a_426_){
_start:
{
lean_object* v___x_427_; uint8_t v___x_428_; 
v___x_427_ = ((lean_object*)(lp_Props2Theories_term___u2294___00__closed__1));
lean_inc(v_x_424_);
v___x_428_ = l_Lean_Syntax_isOfKind(v_x_424_, v___x_427_);
if (v___x_428_ == 0)
{
lean_object* v___x_429_; lean_object* v___x_430_; 
lean_dec(v_x_424_);
v___x_429_ = lean_box(1);
v___x_430_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_430_, 0, v___x_429_);
lean_ctor_set(v___x_430_, 1, v_a_426_);
return v___x_430_;
}
else
{
lean_object* v_quotContext_431_; lean_object* v_currMacroScope_432_; lean_object* v_ref_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; uint8_t v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; 
v_quotContext_431_ = lean_ctor_get(v_a_425_, 1);
v_currMacroScope_432_ = lean_ctor_get(v_a_425_, 2);
v_ref_433_ = lean_ctor_get(v_a_425_, 5);
v___x_434_ = lean_unsigned_to_nat(0u);
v___x_435_ = l_Lean_Syntax_getArg(v_x_424_, v___x_434_);
v___x_436_ = lean_unsigned_to_nat(2u);
v___x_437_ = l_Lean_Syntax_getArg(v_x_424_, v___x_436_);
lean_dec(v_x_424_);
v___x_438_ = 0;
v___x_439_ = l_Lean_SourceInfo_fromRef(v_ref_433_, v___x_438_);
v___x_440_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__4));
v___x_441_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___u2294____1___closed__1, &lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___u2294____1___closed__1_once, _init_lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___u2294____1___closed__1);
v___x_442_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___u2294____1___closed__2));
lean_inc(v_currMacroScope_432_);
lean_inc(v_quotContext_431_);
v___x_443_ = l_Lean_addMacroScope(v_quotContext_431_, v___x_442_, v_currMacroScope_432_);
v___x_444_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___u2294____1___closed__4));
lean_inc_n(v___x_439_, 2);
v___x_445_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_445_, 0, v___x_439_);
lean_ctor_set(v___x_445_, 1, v___x_441_);
lean_ctor_set(v___x_445_, 2, v___x_443_);
lean_ctor_set(v___x_445_, 3, v___x_444_);
v___x_446_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__11));
v___x_447_ = l_Lean_Syntax_node2(v___x_439_, v___x_446_, v___x_435_, v___x_437_);
v___x_448_ = l_Lean_Syntax_node2(v___x_439_, v___x_440_, v___x_445_, v___x_447_);
v___x_449_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_449_, 0, v___x_448_);
lean_ctor_set(v___x_449_, 1, v_a_426_);
return v___x_449_;
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___u2294____1___boxed(lean_object* v_x_450_, lean_object* v_a_451_, lean_object* v_a_452_){
_start:
{
lean_object* v_res_453_; 
v_res_453_ = lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term___u2294____1(v_x_450_, v_a_451_, v_a_452_);
lean_dec_ref(v_a_451_);
return v_res_453_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__disj__union2__1(lean_object* v_x_454_, lean_object* v_a_455_, lean_object* v_a_456_){
_start:
{
lean_object* v___x_457_; uint8_t v___x_458_; 
v___x_457_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__4));
lean_inc(v_x_454_);
v___x_458_ = l_Lean_Syntax_isOfKind(v_x_454_, v___x_457_);
if (v___x_458_ == 0)
{
lean_object* v___x_459_; lean_object* v___x_460_; 
lean_dec(v_x_454_);
v___x_459_ = lean_box(0);
v___x_460_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_460_, 0, v___x_459_);
lean_ctor_set(v___x_460_, 1, v_a_456_);
return v___x_460_;
}
else
{
lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; uint8_t v___x_464_; 
v___x_461_ = lean_unsigned_to_nat(0u);
v___x_462_ = l_Lean_Syntax_getArg(v_x_454_, v___x_461_);
v___x_463_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__ord__pr__set__1___closed__1));
lean_inc(v___x_462_);
v___x_464_ = l_Lean_Syntax_isOfKind(v___x_462_, v___x_463_);
if (v___x_464_ == 0)
{
lean_object* v___x_465_; lean_object* v___x_466_; 
lean_dec(v___x_462_);
lean_dec(v_x_454_);
v___x_465_ = lean_box(0);
v___x_466_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_466_, 0, v___x_465_);
lean_ctor_set(v___x_466_, 1, v_a_456_);
return v___x_466_;
}
else
{
lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; uint8_t v___x_470_; 
v___x_467_ = lean_unsigned_to_nat(1u);
v___x_468_ = l_Lean_Syntax_getArg(v_x_454_, v___x_467_);
lean_dec(v_x_454_);
v___x_469_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_468_);
v___x_470_ = l_Lean_Syntax_matchesNull(v___x_468_, v___x_469_);
if (v___x_470_ == 0)
{
lean_object* v___x_471_; lean_object* v___x_472_; 
lean_dec(v___x_468_);
lean_dec(v___x_462_);
v___x_471_ = lean_box(0);
v___x_472_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_472_, 0, v___x_471_);
lean_ctor_set(v___x_472_, 1, v_a_456_);
return v___x_472_;
}
else
{
lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v_ref_475_; uint8_t v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; 
v___x_473_ = l_Lean_Syntax_getArg(v___x_468_, v___x_461_);
v___x_474_ = l_Lean_Syntax_getArg(v___x_468_, v___x_467_);
lean_dec(v___x_468_);
v_ref_475_ = l_Lean_replaceRef(v___x_462_, v_a_455_);
lean_dec(v___x_462_);
v___x_476_ = 0;
v___x_477_ = l_Lean_SourceInfo_fromRef(v_ref_475_, v___x_476_);
lean_dec(v_ref_475_);
v___x_478_ = ((lean_object*)(lp_Props2Theories_term___u2294___00__closed__1));
v___x_479_ = ((lean_object*)(lp_Props2Theories_term___u2294___00__closed__2));
lean_inc(v___x_477_);
v___x_480_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_480_, 0, v___x_477_);
lean_ctor_set(v___x_480_, 1, v___x_479_);
v___x_481_ = l_Lean_Syntax_node3(v___x_477_, v___x_478_, v___x_473_, v___x_480_, v___x_474_);
v___x_482_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_482_, 0, v___x_481_);
lean_ctor_set(v___x_482_, 1, v_a_456_);
return v___x_482_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__disj__union2__1___boxed(lean_object* v_x_483_, lean_object* v_a_484_, lean_object* v_a_485_){
_start:
{
lean_object* v_res_486_; 
v_res_486_ = lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__disj__union2__1(v_x_483_, v_a_484_, v_a_485_);
lean_dec(v_a_484_);
return v_res_486_;
}
}
static lean_object* _init_lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2LP____1___closed__1(void){
_start:
{
lean_object* v___x_503_; lean_object* v___x_504_; 
v___x_503_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2LP____1___closed__0));
v___x_504_ = l_String_toRawSubstring_x27(v___x_503_);
return v___x_504_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2LP____1(lean_object* v_x_513_, lean_object* v_a_514_, lean_object* v_a_515_){
_start:
{
lean_object* v___x_516_; uint8_t v___x_517_; 
v___x_516_ = ((lean_object*)(lp_Props2Theories_termDU2LP___00__closed__1));
lean_inc(v_x_513_);
v___x_517_ = l_Lean_Syntax_isOfKind(v_x_513_, v___x_516_);
if (v___x_517_ == 0)
{
lean_object* v___x_518_; lean_object* v___x_519_; 
lean_dec(v_x_513_);
v___x_518_ = lean_box(1);
v___x_519_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_519_, 0, v___x_518_);
lean_ctor_set(v___x_519_, 1, v_a_515_);
return v___x_519_;
}
else
{
lean_object* v_quotContext_520_; lean_object* v_currMacroScope_521_; lean_object* v_ref_522_; lean_object* v___x_523_; lean_object* v___x_524_; uint8_t v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; 
v_quotContext_520_ = lean_ctor_get(v_a_514_, 1);
v_currMacroScope_521_ = lean_ctor_get(v_a_514_, 2);
v_ref_522_ = lean_ctor_get(v_a_514_, 5);
v___x_523_ = lean_unsigned_to_nat(1u);
v___x_524_ = l_Lean_Syntax_getArg(v_x_513_, v___x_523_);
lean_dec(v_x_513_);
v___x_525_ = 0;
v___x_526_ = l_Lean_SourceInfo_fromRef(v_ref_522_, v___x_525_);
v___x_527_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__4));
v___x_528_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2LP____1___closed__1, &lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2LP____1___closed__1_once, _init_lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2LP____1___closed__1);
v___x_529_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2LP____1___closed__2));
lean_inc(v_currMacroScope_521_);
lean_inc(v_quotContext_520_);
v___x_530_ = l_Lean_addMacroScope(v_quotContext_520_, v___x_529_, v_currMacroScope_521_);
v___x_531_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2LP____1___closed__4));
lean_inc_n(v___x_526_, 2);
v___x_532_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_532_, 0, v___x_526_);
lean_ctor_set(v___x_532_, 1, v___x_528_);
lean_ctor_set(v___x_532_, 2, v___x_530_);
lean_ctor_set(v___x_532_, 3, v___x_531_);
v___x_533_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__11));
v___x_534_ = l_Lean_Syntax_node1(v___x_526_, v___x_533_, v___x_524_);
v___x_535_ = l_Lean_Syntax_node2(v___x_526_, v___x_527_, v___x_532_, v___x_534_);
v___x_536_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_536_, 0, v___x_535_);
lean_ctor_set(v___x_536_, 1, v_a_515_);
return v___x_536_;
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2LP____1___boxed(lean_object* v_x_537_, lean_object* v_a_538_, lean_object* v_a_539_){
_start:
{
lean_object* v_res_540_; 
v_res_540_ = lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2LP____1(v_x_537_, v_a_538_, v_a_539_);
lean_dec_ref(v_a_538_);
return v_res_540_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__disjoint__union2__left__1(lean_object* v_x_541_, lean_object* v_a_542_, lean_object* v_a_543_){
_start:
{
lean_object* v___x_544_; uint8_t v___x_545_; 
v___x_544_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__4));
lean_inc(v_x_541_);
v___x_545_ = l_Lean_Syntax_isOfKind(v_x_541_, v___x_544_);
if (v___x_545_ == 0)
{
lean_object* v___x_546_; lean_object* v___x_547_; 
lean_dec(v_x_541_);
v___x_546_ = lean_box(0);
v___x_547_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_547_, 0, v___x_546_);
lean_ctor_set(v___x_547_, 1, v_a_543_);
return v___x_547_;
}
else
{
lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; uint8_t v___x_551_; 
v___x_548_ = lean_unsigned_to_nat(0u);
v___x_549_ = l_Lean_Syntax_getArg(v_x_541_, v___x_548_);
v___x_550_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__ord__pr__set__1___closed__1));
lean_inc(v___x_549_);
v___x_551_ = l_Lean_Syntax_isOfKind(v___x_549_, v___x_550_);
if (v___x_551_ == 0)
{
lean_object* v___x_552_; lean_object* v___x_553_; 
lean_dec(v___x_549_);
lean_dec(v_x_541_);
v___x_552_ = lean_box(0);
v___x_553_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_553_, 0, v___x_552_);
lean_ctor_set(v___x_553_, 1, v_a_543_);
return v___x_553_;
}
else
{
lean_object* v___x_554_; lean_object* v___x_555_; uint8_t v___x_556_; 
v___x_554_ = lean_unsigned_to_nat(1u);
v___x_555_ = l_Lean_Syntax_getArg(v_x_541_, v___x_554_);
lean_dec(v_x_541_);
lean_inc(v___x_555_);
v___x_556_ = l_Lean_Syntax_matchesNull(v___x_555_, v___x_554_);
if (v___x_556_ == 0)
{
lean_object* v___x_557_; lean_object* v___x_558_; 
lean_dec(v___x_555_);
lean_dec(v___x_549_);
v___x_557_ = lean_box(0);
v___x_558_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_558_, 0, v___x_557_);
lean_ctor_set(v___x_558_, 1, v_a_543_);
return v___x_558_;
}
else
{
lean_object* v___x_559_; lean_object* v_ref_560_; uint8_t v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; 
v___x_559_ = l_Lean_Syntax_getArg(v___x_555_, v___x_548_);
lean_dec(v___x_555_);
v_ref_560_ = l_Lean_replaceRef(v___x_549_, v_a_542_);
lean_dec(v___x_549_);
v___x_561_ = 0;
v___x_562_ = l_Lean_SourceInfo_fromRef(v_ref_560_, v___x_561_);
lean_dec(v_ref_560_);
v___x_563_ = ((lean_object*)(lp_Props2Theories_termDU2LP___00__closed__1));
v___x_564_ = ((lean_object*)(lp_Props2Theories_termDU2LP___00__closed__2));
lean_inc(v___x_562_);
v___x_565_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_565_, 0, v___x_562_);
lean_ctor_set(v___x_565_, 1, v___x_564_);
v___x_566_ = l_Lean_Syntax_node2(v___x_562_, v___x_563_, v___x_565_, v___x_559_);
v___x_567_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_567_, 0, v___x_566_);
lean_ctor_set(v___x_567_, 1, v_a_543_);
return v___x_567_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__disjoint__union2__left__1___boxed(lean_object* v_x_568_, lean_object* v_a_569_, lean_object* v_a_570_){
_start:
{
lean_object* v_res_571_; 
v_res_571_ = lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__disjoint__union2__left__1(v_x_568_, v_a_569_, v_a_570_);
lean_dec(v_a_569_);
return v_res_571_;
}
}
static lean_object* _init_lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2RP____1___closed__1(void){
_start:
{
lean_object* v___x_588_; lean_object* v___x_589_; 
v___x_588_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2RP____1___closed__0));
v___x_589_ = l_String_toRawSubstring_x27(v___x_588_);
return v___x_589_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2RP____1(lean_object* v_x_598_, lean_object* v_a_599_, lean_object* v_a_600_){
_start:
{
lean_object* v___x_601_; uint8_t v___x_602_; 
v___x_601_ = ((lean_object*)(lp_Props2Theories_termDU2RP___00__closed__1));
lean_inc(v_x_598_);
v___x_602_ = l_Lean_Syntax_isOfKind(v_x_598_, v___x_601_);
if (v___x_602_ == 0)
{
lean_object* v___x_603_; lean_object* v___x_604_; 
lean_dec(v_x_598_);
v___x_603_ = lean_box(1);
v___x_604_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_604_, 0, v___x_603_);
lean_ctor_set(v___x_604_, 1, v_a_600_);
return v___x_604_;
}
else
{
lean_object* v_quotContext_605_; lean_object* v_currMacroScope_606_; lean_object* v_ref_607_; lean_object* v___x_608_; lean_object* v___x_609_; uint8_t v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; 
v_quotContext_605_ = lean_ctor_get(v_a_599_, 1);
v_currMacroScope_606_ = lean_ctor_get(v_a_599_, 2);
v_ref_607_ = lean_ctor_get(v_a_599_, 5);
v___x_608_ = lean_unsigned_to_nat(1u);
v___x_609_ = l_Lean_Syntax_getArg(v_x_598_, v___x_608_);
lean_dec(v_x_598_);
v___x_610_ = 0;
v___x_611_ = l_Lean_SourceInfo_fromRef(v_ref_607_, v___x_610_);
v___x_612_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__4));
v___x_613_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2RP____1___closed__1, &lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2RP____1___closed__1_once, _init_lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2RP____1___closed__1);
v___x_614_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2RP____1___closed__2));
lean_inc(v_currMacroScope_606_);
lean_inc(v_quotContext_605_);
v___x_615_ = l_Lean_addMacroScope(v_quotContext_605_, v___x_614_, v_currMacroScope_606_);
v___x_616_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2RP____1___closed__4));
lean_inc_n(v___x_611_, 2);
v___x_617_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_617_, 0, v___x_611_);
lean_ctor_set(v___x_617_, 1, v___x_613_);
lean_ctor_set(v___x_617_, 2, v___x_615_);
lean_ctor_set(v___x_617_, 3, v___x_616_);
v___x_618_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__11));
v___x_619_ = l_Lean_Syntax_node1(v___x_611_, v___x_618_, v___x_609_);
v___x_620_ = l_Lean_Syntax_node2(v___x_611_, v___x_612_, v___x_617_, v___x_619_);
v___x_621_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_621_, 0, v___x_620_);
lean_ctor_set(v___x_621_, 1, v_a_600_);
return v___x_621_;
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2RP____1___boxed(lean_object* v_x_622_, lean_object* v_a_623_, lean_object* v_a_624_){
_start:
{
lean_object* v_res_625_; 
v_res_625_ = lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2RP____1(v_x_622_, v_a_623_, v_a_624_);
lean_dec_ref(v_a_623_);
return v_res_625_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__disjoint__union2__right__1(lean_object* v_x_626_, lean_object* v_a_627_, lean_object* v_a_628_){
_start:
{
lean_object* v___x_629_; uint8_t v___x_630_; 
v___x_629_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__4));
lean_inc(v_x_626_);
v___x_630_ = l_Lean_Syntax_isOfKind(v_x_626_, v___x_629_);
if (v___x_630_ == 0)
{
lean_object* v___x_631_; lean_object* v___x_632_; 
lean_dec(v_x_626_);
v___x_631_ = lean_box(0);
v___x_632_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_632_, 0, v___x_631_);
lean_ctor_set(v___x_632_, 1, v_a_628_);
return v___x_632_;
}
else
{
lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; uint8_t v___x_636_; 
v___x_633_ = lean_unsigned_to_nat(0u);
v___x_634_ = l_Lean_Syntax_getArg(v_x_626_, v___x_633_);
v___x_635_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__ord__pr__set__1___closed__1));
lean_inc(v___x_634_);
v___x_636_ = l_Lean_Syntax_isOfKind(v___x_634_, v___x_635_);
if (v___x_636_ == 0)
{
lean_object* v___x_637_; lean_object* v___x_638_; 
lean_dec(v___x_634_);
lean_dec(v_x_626_);
v___x_637_ = lean_box(0);
v___x_638_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_638_, 0, v___x_637_);
lean_ctor_set(v___x_638_, 1, v_a_628_);
return v___x_638_;
}
else
{
lean_object* v___x_639_; lean_object* v___x_640_; uint8_t v___x_641_; 
v___x_639_ = lean_unsigned_to_nat(1u);
v___x_640_ = l_Lean_Syntax_getArg(v_x_626_, v___x_639_);
lean_dec(v_x_626_);
lean_inc(v___x_640_);
v___x_641_ = l_Lean_Syntax_matchesNull(v___x_640_, v___x_639_);
if (v___x_641_ == 0)
{
lean_object* v___x_642_; lean_object* v___x_643_; 
lean_dec(v___x_640_);
lean_dec(v___x_634_);
v___x_642_ = lean_box(0);
v___x_643_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_643_, 0, v___x_642_);
lean_ctor_set(v___x_643_, 1, v_a_628_);
return v___x_643_;
}
else
{
lean_object* v___x_644_; lean_object* v_ref_645_; uint8_t v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; 
v___x_644_ = l_Lean_Syntax_getArg(v___x_640_, v___x_633_);
lean_dec(v___x_640_);
v_ref_645_ = l_Lean_replaceRef(v___x_634_, v_a_627_);
lean_dec(v___x_634_);
v___x_646_ = 0;
v___x_647_ = l_Lean_SourceInfo_fromRef(v_ref_645_, v___x_646_);
lean_dec(v_ref_645_);
v___x_648_ = ((lean_object*)(lp_Props2Theories_termDU2RP___00__closed__1));
v___x_649_ = ((lean_object*)(lp_Props2Theories_termDU2RP___00__closed__2));
lean_inc(v___x_647_);
v___x_650_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_650_, 0, v___x_647_);
lean_ctor_set(v___x_650_, 1, v___x_649_);
v___x_651_ = l_Lean_Syntax_node2(v___x_647_, v___x_648_, v___x_650_, v___x_644_);
v___x_652_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_652_, 0, v___x_651_);
lean_ctor_set(v___x_652_, 1, v_a_628_);
return v___x_652_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__disjoint__union2__right__1___boxed(lean_object* v_x_653_, lean_object* v_a_654_, lean_object* v_a_655_){
_start:
{
lean_object* v_res_656_; 
v_res_656_ = lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__disjoint__union2__right__1(v_x_653_, v_a_654_, v_a_655_);
lean_dec(v_a_654_);
return v_res_656_;
}
}
static lean_object* _init_lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2L____1___closed__1(void){
_start:
{
lean_object* v___x_673_; lean_object* v___x_674_; 
v___x_673_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2L____1___closed__0));
v___x_674_ = l_String_toRawSubstring_x27(v___x_673_);
return v___x_674_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2L____1(lean_object* v_x_683_, lean_object* v_a_684_, lean_object* v_a_685_){
_start:
{
lean_object* v___x_686_; uint8_t v___x_687_; 
v___x_686_ = ((lean_object*)(lp_Props2Theories_termDU2L___00__closed__1));
lean_inc(v_x_683_);
v___x_687_ = l_Lean_Syntax_isOfKind(v_x_683_, v___x_686_);
if (v___x_687_ == 0)
{
lean_object* v___x_688_; lean_object* v___x_689_; 
lean_dec(v_x_683_);
v___x_688_ = lean_box(1);
v___x_689_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_689_, 0, v___x_688_);
lean_ctor_set(v___x_689_, 1, v_a_685_);
return v___x_689_;
}
else
{
lean_object* v_quotContext_690_; lean_object* v_currMacroScope_691_; lean_object* v_ref_692_; lean_object* v___x_693_; lean_object* v___x_694_; uint8_t v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; 
v_quotContext_690_ = lean_ctor_get(v_a_684_, 1);
v_currMacroScope_691_ = lean_ctor_get(v_a_684_, 2);
v_ref_692_ = lean_ctor_get(v_a_684_, 5);
v___x_693_ = lean_unsigned_to_nat(1u);
v___x_694_ = l_Lean_Syntax_getArg(v_x_683_, v___x_693_);
lean_dec(v_x_683_);
v___x_695_ = 0;
v___x_696_ = l_Lean_SourceInfo_fromRef(v_ref_692_, v___x_695_);
v___x_697_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__4));
v___x_698_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2L____1___closed__1, &lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2L____1___closed__1_once, _init_lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2L____1___closed__1);
v___x_699_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2L____1___closed__2));
lean_inc(v_currMacroScope_691_);
lean_inc(v_quotContext_690_);
v___x_700_ = l_Lean_addMacroScope(v_quotContext_690_, v___x_699_, v_currMacroScope_691_);
v___x_701_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2L____1___closed__4));
lean_inc_n(v___x_696_, 2);
v___x_702_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_702_, 0, v___x_696_);
lean_ctor_set(v___x_702_, 1, v___x_698_);
lean_ctor_set(v___x_702_, 2, v___x_700_);
lean_ctor_set(v___x_702_, 3, v___x_701_);
v___x_703_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__11));
v___x_704_ = l_Lean_Syntax_node1(v___x_696_, v___x_703_, v___x_694_);
v___x_705_ = l_Lean_Syntax_node2(v___x_696_, v___x_697_, v___x_702_, v___x_704_);
v___x_706_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_706_, 0, v___x_705_);
lean_ctor_set(v___x_706_, 1, v_a_685_);
return v___x_706_;
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2L____1___boxed(lean_object* v_x_707_, lean_object* v_a_708_, lean_object* v_a_709_){
_start:
{
lean_object* v_res_710_; 
v_res_710_ = lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2L____1(v_x_707_, v_a_708_, v_a_709_);
lean_dec_ref(v_a_708_);
return v_res_710_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__disjoint__union2__left__set__1(lean_object* v_x_711_, lean_object* v_a_712_, lean_object* v_a_713_){
_start:
{
lean_object* v___x_714_; uint8_t v___x_715_; 
v___x_714_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__4));
lean_inc(v_x_711_);
v___x_715_ = l_Lean_Syntax_isOfKind(v_x_711_, v___x_714_);
if (v___x_715_ == 0)
{
lean_object* v___x_716_; lean_object* v___x_717_; 
lean_dec(v_x_711_);
v___x_716_ = lean_box(0);
v___x_717_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_717_, 0, v___x_716_);
lean_ctor_set(v___x_717_, 1, v_a_713_);
return v___x_717_;
}
else
{
lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; uint8_t v___x_721_; 
v___x_718_ = lean_unsigned_to_nat(0u);
v___x_719_ = l_Lean_Syntax_getArg(v_x_711_, v___x_718_);
v___x_720_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__ord__pr__set__1___closed__1));
lean_inc(v___x_719_);
v___x_721_ = l_Lean_Syntax_isOfKind(v___x_719_, v___x_720_);
if (v___x_721_ == 0)
{
lean_object* v___x_722_; lean_object* v___x_723_; 
lean_dec(v___x_719_);
lean_dec(v_x_711_);
v___x_722_ = lean_box(0);
v___x_723_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_723_, 0, v___x_722_);
lean_ctor_set(v___x_723_, 1, v_a_713_);
return v___x_723_;
}
else
{
lean_object* v___x_724_; lean_object* v___x_725_; uint8_t v___x_726_; 
v___x_724_ = lean_unsigned_to_nat(1u);
v___x_725_ = l_Lean_Syntax_getArg(v_x_711_, v___x_724_);
lean_dec(v_x_711_);
lean_inc(v___x_725_);
v___x_726_ = l_Lean_Syntax_matchesNull(v___x_725_, v___x_724_);
if (v___x_726_ == 0)
{
lean_object* v___x_727_; lean_object* v___x_728_; 
lean_dec(v___x_725_);
lean_dec(v___x_719_);
v___x_727_ = lean_box(0);
v___x_728_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_728_, 0, v___x_727_);
lean_ctor_set(v___x_728_, 1, v_a_713_);
return v___x_728_;
}
else
{
lean_object* v___x_729_; lean_object* v_ref_730_; uint8_t v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; 
v___x_729_ = l_Lean_Syntax_getArg(v___x_725_, v___x_718_);
lean_dec(v___x_725_);
v_ref_730_ = l_Lean_replaceRef(v___x_719_, v_a_712_);
lean_dec(v___x_719_);
v___x_731_ = 0;
v___x_732_ = l_Lean_SourceInfo_fromRef(v_ref_730_, v___x_731_);
lean_dec(v_ref_730_);
v___x_733_ = ((lean_object*)(lp_Props2Theories_termDU2L___00__closed__1));
v___x_734_ = ((lean_object*)(lp_Props2Theories_termDU2L___00__closed__2));
lean_inc(v___x_732_);
v___x_735_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_735_, 0, v___x_732_);
lean_ctor_set(v___x_735_, 1, v___x_734_);
v___x_736_ = l_Lean_Syntax_node2(v___x_732_, v___x_733_, v___x_735_, v___x_729_);
v___x_737_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_737_, 0, v___x_736_);
lean_ctor_set(v___x_737_, 1, v_a_713_);
return v___x_737_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__disjoint__union2__left__set__1___boxed(lean_object* v_x_738_, lean_object* v_a_739_, lean_object* v_a_740_){
_start:
{
lean_object* v_res_741_; 
v_res_741_ = lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__disjoint__union2__left__set__1(v_x_738_, v_a_739_, v_a_740_);
lean_dec(v_a_739_);
return v_res_741_;
}
}
static lean_object* _init_lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2R____1___closed__1(void){
_start:
{
lean_object* v___x_758_; lean_object* v___x_759_; 
v___x_758_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2R____1___closed__0));
v___x_759_ = l_String_toRawSubstring_x27(v___x_758_);
return v___x_759_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2R____1(lean_object* v_x_768_, lean_object* v_a_769_, lean_object* v_a_770_){
_start:
{
lean_object* v___x_771_; uint8_t v___x_772_; 
v___x_771_ = ((lean_object*)(lp_Props2Theories_termDU2R___00__closed__1));
lean_inc(v_x_768_);
v___x_772_ = l_Lean_Syntax_isOfKind(v_x_768_, v___x_771_);
if (v___x_772_ == 0)
{
lean_object* v___x_773_; lean_object* v___x_774_; 
lean_dec(v_x_768_);
v___x_773_ = lean_box(1);
v___x_774_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_774_, 0, v___x_773_);
lean_ctor_set(v___x_774_, 1, v_a_770_);
return v___x_774_;
}
else
{
lean_object* v_quotContext_775_; lean_object* v_currMacroScope_776_; lean_object* v_ref_777_; lean_object* v___x_778_; lean_object* v___x_779_; uint8_t v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; 
v_quotContext_775_ = lean_ctor_get(v_a_769_, 1);
v_currMacroScope_776_ = lean_ctor_get(v_a_769_, 2);
v_ref_777_ = lean_ctor_get(v_a_769_, 5);
v___x_778_ = lean_unsigned_to_nat(1u);
v___x_779_ = l_Lean_Syntax_getArg(v_x_768_, v___x_778_);
lean_dec(v_x_768_);
v___x_780_ = 0;
v___x_781_ = l_Lean_SourceInfo_fromRef(v_ref_777_, v___x_780_);
v___x_782_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__4));
v___x_783_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2R____1___closed__1, &lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2R____1___closed__1_once, _init_lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2R____1___closed__1);
v___x_784_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2R____1___closed__2));
lean_inc(v_currMacroScope_776_);
lean_inc(v_quotContext_775_);
v___x_785_ = l_Lean_addMacroScope(v_quotContext_775_, v___x_784_, v_currMacroScope_776_);
v___x_786_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2R____1___closed__4));
lean_inc_n(v___x_781_, 2);
v___x_787_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_787_, 0, v___x_781_);
lean_ctor_set(v___x_787_, 1, v___x_783_);
lean_ctor_set(v___x_787_, 2, v___x_785_);
lean_ctor_set(v___x_787_, 3, v___x_786_);
v___x_788_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__11));
v___x_789_ = l_Lean_Syntax_node1(v___x_781_, v___x_788_, v___x_779_);
v___x_790_ = l_Lean_Syntax_node2(v___x_781_, v___x_782_, v___x_787_, v___x_789_);
v___x_791_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_791_, 0, v___x_790_);
lean_ctor_set(v___x_791_, 1, v_a_770_);
return v___x_791_;
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2R____1___boxed(lean_object* v_x_792_, lean_object* v_a_793_, lean_object* v_a_794_){
_start:
{
lean_object* v_res_795_; 
v_res_795_ = lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__termDU2R____1(v_x_792_, v_a_793_, v_a_794_);
lean_dec_ref(v_a_793_);
return v_res_795_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__disjoint__union2__right__set__1(lean_object* v_x_796_, lean_object* v_a_797_, lean_object* v_a_798_){
_start:
{
lean_object* v___x_799_; uint8_t v___x_800_; 
v___x_799_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______macroRules__term_x28___x2c___x29__1___closed__4));
lean_inc(v_x_796_);
v___x_800_ = l_Lean_Syntax_isOfKind(v_x_796_, v___x_799_);
if (v___x_800_ == 0)
{
lean_object* v___x_801_; lean_object* v___x_802_; 
lean_dec(v_x_796_);
v___x_801_ = lean_box(0);
v___x_802_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_802_, 0, v___x_801_);
lean_ctor_set(v___x_802_, 1, v_a_798_);
return v___x_802_;
}
else
{
lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; uint8_t v___x_806_; 
v___x_803_ = lean_unsigned_to_nat(0u);
v___x_804_ = l_Lean_Syntax_getArg(v_x_796_, v___x_803_);
v___x_805_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__ord__pr__set__1___closed__1));
lean_inc(v___x_804_);
v___x_806_ = l_Lean_Syntax_isOfKind(v___x_804_, v___x_805_);
if (v___x_806_ == 0)
{
lean_object* v___x_807_; lean_object* v___x_808_; 
lean_dec(v___x_804_);
lean_dec(v_x_796_);
v___x_807_ = lean_box(0);
v___x_808_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_808_, 0, v___x_807_);
lean_ctor_set(v___x_808_, 1, v_a_798_);
return v___x_808_;
}
else
{
lean_object* v___x_809_; lean_object* v___x_810_; uint8_t v___x_811_; 
v___x_809_ = lean_unsigned_to_nat(1u);
v___x_810_ = l_Lean_Syntax_getArg(v_x_796_, v___x_809_);
lean_dec(v_x_796_);
lean_inc(v___x_810_);
v___x_811_ = l_Lean_Syntax_matchesNull(v___x_810_, v___x_809_);
if (v___x_811_ == 0)
{
lean_object* v___x_812_; lean_object* v___x_813_; 
lean_dec(v___x_810_);
lean_dec(v___x_804_);
v___x_812_ = lean_box(0);
v___x_813_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_813_, 0, v___x_812_);
lean_ctor_set(v___x_813_, 1, v_a_798_);
return v___x_813_;
}
else
{
lean_object* v___x_814_; lean_object* v_ref_815_; uint8_t v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; 
v___x_814_ = l_Lean_Syntax_getArg(v___x_810_, v___x_803_);
lean_dec(v___x_810_);
v_ref_815_ = l_Lean_replaceRef(v___x_804_, v_a_797_);
lean_dec(v___x_804_);
v___x_816_ = 0;
v___x_817_ = l_Lean_SourceInfo_fromRef(v_ref_815_, v___x_816_);
lean_dec(v_ref_815_);
v___x_818_ = ((lean_object*)(lp_Props2Theories_termDU2R___00__closed__1));
v___x_819_ = ((lean_object*)(lp_Props2Theories_termDU2R___00__closed__2));
lean_inc(v___x_817_);
v___x_820_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_820_, 0, v___x_817_);
lean_ctor_set(v___x_820_, 1, v___x_819_);
v___x_821_ = l_Lean_Syntax_node2(v___x_817_, v___x_818_, v___x_820_, v___x_814_);
v___x_822_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_822_, 0, v___x_821_);
lean_ctor_set(v___x_822_, 1, v_a_798_);
return v___x_822_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__disjoint__union2__right__set__1___boxed(lean_object* v_x_823_, lean_object* v_a_824_, lean_object* v_a_825_){
_start:
{
lean_object* v_res_826_; 
v_res_826_ = lp_Props2Theories___aux__Props2Theories__B__Set__C__SetSumProduct__Task______unexpand__disjoint__union2__right__set__1(v_x_823_, v_a_824_, v_a_825_);
lean_dec(v_a_824_);
return v_res_826_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Props2Theories_Props2Theories_B__Set_A__Constructions_Task(uint8_t builtin);
lean_object* initialize_Props2Theories_Props2Theories_B__Set_B__Set__Algebra_SetSynt(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Props2Theories_Props2Theories_B__Set_C__SetSumProduct_Task(uint8_t builtin) {
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
res = initialize_Props2Theories_Props2Theories_B__Set_B__Set__Algebra_SetSynt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
