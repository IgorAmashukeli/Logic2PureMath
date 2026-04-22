// Lean compiler output
// Module: Props2Theories.B_Set.B_Set_Algebra.Task
// Imports: public import Init public meta import Init public import Props2Theories.B_Set.A_Constructions.Task
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
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Props2Theories_term___u222a____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 9, .m_data = "term_∪__1"};
static const lean_object* lp_Props2Theories_term___u222a____1___closed__0 = (const lean_object*)&lp_Props2Theories_term___u222a____1___closed__0_value;
static const lean_ctor_object lp_Props2Theories_term___u222a____1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_term___u222a____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(72, 73, 75, 27, 22, 238, 147, 205)}};
static const lean_object* lp_Props2Theories_term___u222a____1___closed__1 = (const lean_object*)&lp_Props2Theories_term___u222a____1___closed__1_value;
static const lean_string_object lp_Props2Theories_term___u222a____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* lp_Props2Theories_term___u222a____1___closed__2 = (const lean_object*)&lp_Props2Theories_term___u222a____1___closed__2_value;
static const lean_ctor_object lp_Props2Theories_term___u222a____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_term___u222a____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* lp_Props2Theories_term___u222a____1___closed__3 = (const lean_object*)&lp_Props2Theories_term___u222a____1___closed__3_value;
static const lean_string_object lp_Props2Theories_term___u222a____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 3, .m_data = " ∪ "};
static const lean_object* lp_Props2Theories_term___u222a____1___closed__4 = (const lean_object*)&lp_Props2Theories_term___u222a____1___closed__4_value;
static const lean_ctor_object lp_Props2Theories_term___u222a____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u222a____1___closed__4_value)}};
static const lean_object* lp_Props2Theories_term___u222a____1___closed__5 = (const lean_object*)&lp_Props2Theories_term___u222a____1___closed__5_value;
static const lean_string_object lp_Props2Theories_term___u222a____1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* lp_Props2Theories_term___u222a____1___closed__6 = (const lean_object*)&lp_Props2Theories_term___u222a____1___closed__6_value;
static const lean_ctor_object lp_Props2Theories_term___u222a____1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_term___u222a____1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* lp_Props2Theories_term___u222a____1___closed__7 = (const lean_object*)&lp_Props2Theories_term___u222a____1___closed__7_value;
static const lean_ctor_object lp_Props2Theories_term___u222a____1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u222a____1___closed__7_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories_term___u222a____1___closed__8 = (const lean_object*)&lp_Props2Theories_term___u222a____1___closed__8_value;
static const lean_ctor_object lp_Props2Theories_term___u222a____1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u222a____1___closed__3_value),((lean_object*)&lp_Props2Theories_term___u222a____1___closed__5_value),((lean_object*)&lp_Props2Theories_term___u222a____1___closed__8_value)}};
static const lean_object* lp_Props2Theories_term___u222a____1___closed__9 = (const lean_object*)&lp_Props2Theories_term___u222a____1___closed__9_value;
static const lean_ctor_object lp_Props2Theories_term___u222a____1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u222a____1___closed__1_value),((lean_object*)(((size_t)(60) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_term___u222a____1___closed__9_value)}};
static const lean_object* lp_Props2Theories_term___u222a____1___closed__10 = (const lean_object*)&lp_Props2Theories_term___u222a____1___closed__10_value;
LEAN_EXPORT const lean_object* lp_Props2Theories_term___u222a____1 = (const lean_object*)&lp_Props2Theories_term___u222a____1___closed__10_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__0 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__0_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__1 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__1_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__2 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__2_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__3 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__3_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__4_value_aux_0),((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__4_value_aux_1),((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__4_value_aux_2),((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__4 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__4_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "union_2sets"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__5 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__5_value;
static lean_once_cell_t lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__6;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(135, 255, 169, 52, 18, 126, 16, 252)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__7 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__7_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__7_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__8 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__8_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__8_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__9 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__9_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__10 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__10_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__11 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__11_value;
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______unexpand__union__2sets__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______unexpand__union__2sets__1___closed__0 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______unexpand__union__2sets__1___closed__0_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______unexpand__union__2sets__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______unexpand__union__2sets__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______unexpand__union__2sets__1___closed__1 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______unexpand__union__2sets__1___closed__1_value;
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______unexpand__union__2sets__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______unexpand__union__2sets__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Props2Theories_term___u2229____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 9, .m_data = "term_∩__1"};
static const lean_object* lp_Props2Theories_term___u2229____1___closed__0 = (const lean_object*)&lp_Props2Theories_term___u2229____1___closed__0_value;
static const lean_ctor_object lp_Props2Theories_term___u2229____1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_term___u2229____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(228, 37, 176, 82, 164, 22, 93, 100)}};
static const lean_object* lp_Props2Theories_term___u2229____1___closed__1 = (const lean_object*)&lp_Props2Theories_term___u2229____1___closed__1_value;
static const lean_string_object lp_Props2Theories_term___u2229____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 3, .m_data = " ∩ "};
static const lean_object* lp_Props2Theories_term___u2229____1___closed__2 = (const lean_object*)&lp_Props2Theories_term___u2229____1___closed__2_value;
static const lean_ctor_object lp_Props2Theories_term___u2229____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2229____1___closed__2_value)}};
static const lean_object* lp_Props2Theories_term___u2229____1___closed__3 = (const lean_object*)&lp_Props2Theories_term___u2229____1___closed__3_value;
static const lean_ctor_object lp_Props2Theories_term___u2229____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u222a____1___closed__7_value),((lean_object*)(((size_t)(61) << 1) | 1))}};
static const lean_object* lp_Props2Theories_term___u2229____1___closed__4 = (const lean_object*)&lp_Props2Theories_term___u2229____1___closed__4_value;
static const lean_ctor_object lp_Props2Theories_term___u2229____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u222a____1___closed__3_value),((lean_object*)&lp_Props2Theories_term___u2229____1___closed__3_value),((lean_object*)&lp_Props2Theories_term___u2229____1___closed__4_value)}};
static const lean_object* lp_Props2Theories_term___u2229____1___closed__5 = (const lean_object*)&lp_Props2Theories_term___u2229____1___closed__5_value;
static const lean_ctor_object lp_Props2Theories_term___u2229____1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2229____1___closed__1_value),((lean_object*)(((size_t)(60) << 1) | 1)),((lean_object*)(((size_t)(61) << 1) | 1)),((lean_object*)&lp_Props2Theories_term___u2229____1___closed__5_value)}};
static const lean_object* lp_Props2Theories_term___u2229____1___closed__6 = (const lean_object*)&lp_Props2Theories_term___u2229____1___closed__6_value;
LEAN_EXPORT const lean_object* lp_Props2Theories_term___u2229____1 = (const lean_object*)&lp_Props2Theories_term___u2229____1___closed__6_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u2229____1__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "intersect_2sets"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u2229____1__1___closed__0 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u2229____1__1___closed__0_value;
static lean_once_cell_t lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u2229____1__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u2229____1__1___closed__1;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u2229____1__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u2229____1__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(217, 233, 251, 240, 87, 221, 69, 188)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u2229____1__1___closed__2 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u2229____1__1___closed__2_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u2229____1__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u2229____1__1___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u2229____1__1___closed__3 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u2229____1__1___closed__3_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u2229____1__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u2229____1__1___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u2229____1__1___closed__4 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u2229____1__1___closed__4_value;
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u2229____1__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u2229____1__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______unexpand__intersect__2sets__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______unexpand__intersect__2sets__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Props2Theories_term___x5c____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "term_\\__1"};
static const lean_object* lp_Props2Theories_term___x5c____1___closed__0 = (const lean_object*)&lp_Props2Theories_term___x5c____1___closed__0_value;
static const lean_ctor_object lp_Props2Theories_term___x5c____1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_term___x5c____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(179, 124, 208, 4, 116, 72, 98, 208)}};
static const lean_object* lp_Props2Theories_term___x5c____1___closed__1 = (const lean_object*)&lp_Props2Theories_term___x5c____1___closed__1_value;
static const lean_string_object lp_Props2Theories_term___x5c____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " \\ "};
static const lean_object* lp_Props2Theories_term___x5c____1___closed__2 = (const lean_object*)&lp_Props2Theories_term___x5c____1___closed__2_value;
static const lean_ctor_object lp_Props2Theories_term___x5c____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Props2Theories_term___x5c____1___closed__2_value)}};
static const lean_object* lp_Props2Theories_term___x5c____1___closed__3 = (const lean_object*)&lp_Props2Theories_term___x5c____1___closed__3_value;
static const lean_ctor_object lp_Props2Theories_term___x5c____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u222a____1___closed__3_value),((lean_object*)&lp_Props2Theories_term___x5c____1___closed__3_value),((lean_object*)&lp_Props2Theories_term___u2229____1___closed__4_value)}};
static const lean_object* lp_Props2Theories_term___x5c____1___closed__4 = (const lean_object*)&lp_Props2Theories_term___x5c____1___closed__4_value;
static const lean_ctor_object lp_Props2Theories_term___x5c____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&lp_Props2Theories_term___x5c____1___closed__1_value),((lean_object*)(((size_t)(60) << 1) | 1)),((lean_object*)(((size_t)(61) << 1) | 1)),((lean_object*)&lp_Props2Theories_term___x5c____1___closed__4_value)}};
static const lean_object* lp_Props2Theories_term___x5c____1___closed__5 = (const lean_object*)&lp_Props2Theories_term___x5c____1___closed__5_value;
LEAN_EXPORT const lean_object* lp_Props2Theories_term___x5c____1 = (const lean_object*)&lp_Props2Theories_term___x5c____1___closed__5_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___x5c____1__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "difference"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___x5c____1__1___closed__0 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___x5c____1__1___closed__0_value;
static lean_once_cell_t lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___x5c____1__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___x5c____1__1___closed__1;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___x5c____1__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___x5c____1__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(160, 73, 89, 33, 253, 97, 174, 63)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___x5c____1__1___closed__2 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___x5c____1__1___closed__2_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___x5c____1__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___x5c____1__1___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___x5c____1__1___closed__3 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___x5c____1__1___closed__3_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___x5c____1__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___x5c____1__1___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___x5c____1__1___closed__4 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___x5c____1__1___closed__4_value;
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___x5c____1__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___x5c____1__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______unexpand__difference__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______unexpand__difference__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Props2Theories_term___u25b3___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 7, .m_data = "term_△_"};
static const lean_object* lp_Props2Theories_term___u25b3___00__closed__0 = (const lean_object*)&lp_Props2Theories_term___u25b3___00__closed__0_value;
static const lean_ctor_object lp_Props2Theories_term___u25b3___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_term___u25b3___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(58, 37, 12, 61, 137, 28, 138, 146)}};
static const lean_object* lp_Props2Theories_term___u25b3___00__closed__1 = (const lean_object*)&lp_Props2Theories_term___u25b3___00__closed__1_value;
static const lean_string_object lp_Props2Theories_term___u25b3___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 3, .m_data = " △ "};
static const lean_object* lp_Props2Theories_term___u25b3___00__closed__2 = (const lean_object*)&lp_Props2Theories_term___u25b3___00__closed__2_value;
static const lean_ctor_object lp_Props2Theories_term___u25b3___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u25b3___00__closed__2_value)}};
static const lean_object* lp_Props2Theories_term___u25b3___00__closed__3 = (const lean_object*)&lp_Props2Theories_term___u25b3___00__closed__3_value;
static const lean_ctor_object lp_Props2Theories_term___u25b3___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u222a____1___closed__3_value),((lean_object*)&lp_Props2Theories_term___u25b3___00__closed__3_value),((lean_object*)&lp_Props2Theories_term___u2229____1___closed__4_value)}};
static const lean_object* lp_Props2Theories_term___u25b3___00__closed__4 = (const lean_object*)&lp_Props2Theories_term___u25b3___00__closed__4_value;
static const lean_ctor_object lp_Props2Theories_term___u25b3___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u25b3___00__closed__1_value),((lean_object*)(((size_t)(60) << 1) | 1)),((lean_object*)(((size_t)(61) << 1) | 1)),((lean_object*)&lp_Props2Theories_term___u25b3___00__closed__4_value)}};
static const lean_object* lp_Props2Theories_term___u25b3___00__closed__5 = (const lean_object*)&lp_Props2Theories_term___u25b3___00__closed__5_value;
LEAN_EXPORT const lean_object* lp_Props2Theories_term___u25b3__ = (const lean_object*)&lp_Props2Theories_term___u25b3___00__closed__5_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u25b3____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "symmetric_difference"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u25b3____1___closed__0 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u25b3____1___closed__0_value;
static lean_once_cell_t lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u25b3____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u25b3____1___closed__1;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u25b3____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u25b3____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(222, 135, 163, 168, 91, 90, 90, 82)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u25b3____1___closed__2 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u25b3____1___closed__2_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u25b3____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u25b3____1___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u25b3____1___closed__3 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u25b3____1___closed__3_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u25b3____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u25b3____1___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u25b3____1___closed__4 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u25b3____1___closed__4_value;
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u25b3____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u25b3____1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______unexpand__symmetric__difference__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______unexpand__symmetric__difference__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* _init_lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__6(void){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_36_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__5));
v___x_37_ = l_String_toRawSubstring_x27(v___x_36_);
return v___x_37_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1(lean_object* v_x_49_, lean_object* v_a_50_, lean_object* v_a_51_){
_start:
{
lean_object* v___x_52_; uint8_t v___x_53_; 
v___x_52_ = ((lean_object*)(lp_Props2Theories_term___u222a____1___closed__1));
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
v___x_65_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__4));
v___x_66_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__6, &lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__6_once, _init_lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__6);
v___x_67_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__7));
lean_inc(v_currMacroScope_57_);
lean_inc(v_quotContext_56_);
v___x_68_ = l_Lean_addMacroScope(v_quotContext_56_, v___x_67_, v_currMacroScope_57_);
v___x_69_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__9));
lean_inc_n(v___x_64_, 2);
v___x_70_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_70_, 0, v___x_64_);
lean_ctor_set(v___x_70_, 1, v___x_66_);
lean_ctor_set(v___x_70_, 2, v___x_68_);
lean_ctor_set(v___x_70_, 3, v___x_69_);
v___x_71_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__11));
v___x_72_ = l_Lean_Syntax_node2(v___x_64_, v___x_71_, v___x_60_, v___x_62_);
v___x_73_ = l_Lean_Syntax_node2(v___x_64_, v___x_65_, v___x_70_, v___x_72_);
v___x_74_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_74_, 0, v___x_73_);
lean_ctor_set(v___x_74_, 1, v_a_51_);
return v___x_74_;
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___boxed(lean_object* v_x_75_, lean_object* v_a_76_, lean_object* v_a_77_){
_start:
{
lean_object* v_res_78_; 
v_res_78_ = lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1(v_x_75_, v_a_76_, v_a_77_);
lean_dec_ref(v_a_76_);
return v_res_78_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______unexpand__union__2sets__1(lean_object* v_x_82_, lean_object* v_a_83_, lean_object* v_a_84_){
_start:
{
lean_object* v___x_85_; uint8_t v___x_86_; 
v___x_85_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__4));
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
v___x_91_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______unexpand__union__2sets__1___closed__1));
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
v___x_106_ = ((lean_object*)(lp_Props2Theories_term___u222a____1___closed__1));
v___x_107_ = ((lean_object*)(lp_Props2Theories_term___u222a____1___closed__4));
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
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______unexpand__union__2sets__1___boxed(lean_object* v_x_111_, lean_object* v_a_112_, lean_object* v_a_113_){
_start:
{
lean_object* v_res_114_; 
v_res_114_ = lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______unexpand__union__2sets__1(v_x_111_, v_a_112_, v_a_113_);
lean_dec(v_a_112_);
return v_res_114_;
}
}
static lean_object* _init_lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u2229____1__1___closed__1(void){
_start:
{
lean_object* v___x_135_; lean_object* v___x_136_; 
v___x_135_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u2229____1__1___closed__0));
v___x_136_ = l_String_toRawSubstring_x27(v___x_135_);
return v___x_136_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u2229____1__1(lean_object* v_x_145_, lean_object* v_a_146_, lean_object* v_a_147_){
_start:
{
lean_object* v___x_148_; uint8_t v___x_149_; 
v___x_148_ = ((lean_object*)(lp_Props2Theories_term___u2229____1___closed__1));
lean_inc(v_x_145_);
v___x_149_ = l_Lean_Syntax_isOfKind(v_x_145_, v___x_148_);
if (v___x_149_ == 0)
{
lean_object* v___x_150_; lean_object* v___x_151_; 
lean_dec(v_x_145_);
v___x_150_ = lean_box(1);
v___x_151_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_151_, 0, v___x_150_);
lean_ctor_set(v___x_151_, 1, v_a_147_);
return v___x_151_;
}
else
{
lean_object* v_quotContext_152_; lean_object* v_currMacroScope_153_; lean_object* v_ref_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; uint8_t v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; 
v_quotContext_152_ = lean_ctor_get(v_a_146_, 1);
v_currMacroScope_153_ = lean_ctor_get(v_a_146_, 2);
v_ref_154_ = lean_ctor_get(v_a_146_, 5);
v___x_155_ = lean_unsigned_to_nat(0u);
v___x_156_ = l_Lean_Syntax_getArg(v_x_145_, v___x_155_);
v___x_157_ = lean_unsigned_to_nat(2u);
v___x_158_ = l_Lean_Syntax_getArg(v_x_145_, v___x_157_);
lean_dec(v_x_145_);
v___x_159_ = 0;
v___x_160_ = l_Lean_SourceInfo_fromRef(v_ref_154_, v___x_159_);
v___x_161_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__4));
v___x_162_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u2229____1__1___closed__1, &lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u2229____1__1___closed__1_once, _init_lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u2229____1__1___closed__1);
v___x_163_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u2229____1__1___closed__2));
lean_inc(v_currMacroScope_153_);
lean_inc(v_quotContext_152_);
v___x_164_ = l_Lean_addMacroScope(v_quotContext_152_, v___x_163_, v_currMacroScope_153_);
v___x_165_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u2229____1__1___closed__4));
lean_inc_n(v___x_160_, 2);
v___x_166_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_166_, 0, v___x_160_);
lean_ctor_set(v___x_166_, 1, v___x_162_);
lean_ctor_set(v___x_166_, 2, v___x_164_);
lean_ctor_set(v___x_166_, 3, v___x_165_);
v___x_167_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__11));
v___x_168_ = l_Lean_Syntax_node2(v___x_160_, v___x_167_, v___x_156_, v___x_158_);
v___x_169_ = l_Lean_Syntax_node2(v___x_160_, v___x_161_, v___x_166_, v___x_168_);
v___x_170_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_170_, 0, v___x_169_);
lean_ctor_set(v___x_170_, 1, v_a_147_);
return v___x_170_;
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u2229____1__1___boxed(lean_object* v_x_171_, lean_object* v_a_172_, lean_object* v_a_173_){
_start:
{
lean_object* v_res_174_; 
v_res_174_ = lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u2229____1__1(v_x_171_, v_a_172_, v_a_173_);
lean_dec_ref(v_a_172_);
return v_res_174_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______unexpand__intersect__2sets__1(lean_object* v_x_175_, lean_object* v_a_176_, lean_object* v_a_177_){
_start:
{
lean_object* v___x_178_; uint8_t v___x_179_; 
v___x_178_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__4));
lean_inc(v_x_175_);
v___x_179_ = l_Lean_Syntax_isOfKind(v_x_175_, v___x_178_);
if (v___x_179_ == 0)
{
lean_object* v___x_180_; lean_object* v___x_181_; 
lean_dec(v_x_175_);
v___x_180_ = lean_box(0);
v___x_181_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_181_, 0, v___x_180_);
lean_ctor_set(v___x_181_, 1, v_a_177_);
return v___x_181_;
}
else
{
lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; uint8_t v___x_185_; 
v___x_182_ = lean_unsigned_to_nat(0u);
v___x_183_ = l_Lean_Syntax_getArg(v_x_175_, v___x_182_);
v___x_184_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______unexpand__union__2sets__1___closed__1));
lean_inc(v___x_183_);
v___x_185_ = l_Lean_Syntax_isOfKind(v___x_183_, v___x_184_);
if (v___x_185_ == 0)
{
lean_object* v___x_186_; lean_object* v___x_187_; 
lean_dec(v___x_183_);
lean_dec(v_x_175_);
v___x_186_ = lean_box(0);
v___x_187_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_187_, 0, v___x_186_);
lean_ctor_set(v___x_187_, 1, v_a_177_);
return v___x_187_;
}
else
{
lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; uint8_t v___x_191_; 
v___x_188_ = lean_unsigned_to_nat(1u);
v___x_189_ = l_Lean_Syntax_getArg(v_x_175_, v___x_188_);
lean_dec(v_x_175_);
v___x_190_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_189_);
v___x_191_ = l_Lean_Syntax_matchesNull(v___x_189_, v___x_190_);
if (v___x_191_ == 0)
{
lean_object* v___x_192_; lean_object* v___x_193_; 
lean_dec(v___x_189_);
lean_dec(v___x_183_);
v___x_192_ = lean_box(0);
v___x_193_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_193_, 0, v___x_192_);
lean_ctor_set(v___x_193_, 1, v_a_177_);
return v___x_193_;
}
else
{
lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v_ref_196_; uint8_t v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; 
v___x_194_ = l_Lean_Syntax_getArg(v___x_189_, v___x_182_);
v___x_195_ = l_Lean_Syntax_getArg(v___x_189_, v___x_188_);
lean_dec(v___x_189_);
v_ref_196_ = l_Lean_replaceRef(v___x_183_, v_a_176_);
lean_dec(v___x_183_);
v___x_197_ = 0;
v___x_198_ = l_Lean_SourceInfo_fromRef(v_ref_196_, v___x_197_);
lean_dec(v_ref_196_);
v___x_199_ = ((lean_object*)(lp_Props2Theories_term___u2229____1___closed__1));
v___x_200_ = ((lean_object*)(lp_Props2Theories_term___u2229____1___closed__2));
lean_inc(v___x_198_);
v___x_201_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_201_, 0, v___x_198_);
lean_ctor_set(v___x_201_, 1, v___x_200_);
v___x_202_ = l_Lean_Syntax_node3(v___x_198_, v___x_199_, v___x_194_, v___x_201_, v___x_195_);
v___x_203_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_203_, 0, v___x_202_);
lean_ctor_set(v___x_203_, 1, v_a_177_);
return v___x_203_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______unexpand__intersect__2sets__1___boxed(lean_object* v_x_204_, lean_object* v_a_205_, lean_object* v_a_206_){
_start:
{
lean_object* v_res_207_; 
v_res_207_ = lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______unexpand__intersect__2sets__1(v_x_204_, v_a_205_, v_a_206_);
lean_dec(v_a_205_);
return v_res_207_;
}
}
static lean_object* _init_lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___x5c____1__1___closed__1(void){
_start:
{
lean_object* v___x_225_; lean_object* v___x_226_; 
v___x_225_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___x5c____1__1___closed__0));
v___x_226_ = l_String_toRawSubstring_x27(v___x_225_);
return v___x_226_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___x5c____1__1(lean_object* v_x_235_, lean_object* v_a_236_, lean_object* v_a_237_){
_start:
{
lean_object* v___x_238_; uint8_t v___x_239_; 
v___x_238_ = ((lean_object*)(lp_Props2Theories_term___x5c____1___closed__1));
lean_inc(v_x_235_);
v___x_239_ = l_Lean_Syntax_isOfKind(v_x_235_, v___x_238_);
if (v___x_239_ == 0)
{
lean_object* v___x_240_; lean_object* v___x_241_; 
lean_dec(v_x_235_);
v___x_240_ = lean_box(1);
v___x_241_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_241_, 0, v___x_240_);
lean_ctor_set(v___x_241_, 1, v_a_237_);
return v___x_241_;
}
else
{
lean_object* v_quotContext_242_; lean_object* v_currMacroScope_243_; lean_object* v_ref_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; uint8_t v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; 
v_quotContext_242_ = lean_ctor_get(v_a_236_, 1);
v_currMacroScope_243_ = lean_ctor_get(v_a_236_, 2);
v_ref_244_ = lean_ctor_get(v_a_236_, 5);
v___x_245_ = lean_unsigned_to_nat(0u);
v___x_246_ = l_Lean_Syntax_getArg(v_x_235_, v___x_245_);
v___x_247_ = lean_unsigned_to_nat(2u);
v___x_248_ = l_Lean_Syntax_getArg(v_x_235_, v___x_247_);
lean_dec(v_x_235_);
v___x_249_ = 0;
v___x_250_ = l_Lean_SourceInfo_fromRef(v_ref_244_, v___x_249_);
v___x_251_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__4));
v___x_252_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___x5c____1__1___closed__1, &lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___x5c____1__1___closed__1_once, _init_lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___x5c____1__1___closed__1);
v___x_253_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___x5c____1__1___closed__2));
lean_inc(v_currMacroScope_243_);
lean_inc(v_quotContext_242_);
v___x_254_ = l_Lean_addMacroScope(v_quotContext_242_, v___x_253_, v_currMacroScope_243_);
v___x_255_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___x5c____1__1___closed__4));
lean_inc_n(v___x_250_, 2);
v___x_256_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_256_, 0, v___x_250_);
lean_ctor_set(v___x_256_, 1, v___x_252_);
lean_ctor_set(v___x_256_, 2, v___x_254_);
lean_ctor_set(v___x_256_, 3, v___x_255_);
v___x_257_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__11));
v___x_258_ = l_Lean_Syntax_node2(v___x_250_, v___x_257_, v___x_246_, v___x_248_);
v___x_259_ = l_Lean_Syntax_node2(v___x_250_, v___x_251_, v___x_256_, v___x_258_);
v___x_260_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_260_, 0, v___x_259_);
lean_ctor_set(v___x_260_, 1, v_a_237_);
return v___x_260_;
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___x5c____1__1___boxed(lean_object* v_x_261_, lean_object* v_a_262_, lean_object* v_a_263_){
_start:
{
lean_object* v_res_264_; 
v_res_264_ = lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___x5c____1__1(v_x_261_, v_a_262_, v_a_263_);
lean_dec_ref(v_a_262_);
return v_res_264_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______unexpand__difference__1(lean_object* v_x_265_, lean_object* v_a_266_, lean_object* v_a_267_){
_start:
{
lean_object* v___x_268_; uint8_t v___x_269_; 
v___x_268_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__4));
lean_inc(v_x_265_);
v___x_269_ = l_Lean_Syntax_isOfKind(v_x_265_, v___x_268_);
if (v___x_269_ == 0)
{
lean_object* v___x_270_; lean_object* v___x_271_; 
lean_dec(v_x_265_);
v___x_270_ = lean_box(0);
v___x_271_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_271_, 0, v___x_270_);
lean_ctor_set(v___x_271_, 1, v_a_267_);
return v___x_271_;
}
else
{
lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; uint8_t v___x_275_; 
v___x_272_ = lean_unsigned_to_nat(0u);
v___x_273_ = l_Lean_Syntax_getArg(v_x_265_, v___x_272_);
v___x_274_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______unexpand__union__2sets__1___closed__1));
lean_inc(v___x_273_);
v___x_275_ = l_Lean_Syntax_isOfKind(v___x_273_, v___x_274_);
if (v___x_275_ == 0)
{
lean_object* v___x_276_; lean_object* v___x_277_; 
lean_dec(v___x_273_);
lean_dec(v_x_265_);
v___x_276_ = lean_box(0);
v___x_277_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_277_, 0, v___x_276_);
lean_ctor_set(v___x_277_, 1, v_a_267_);
return v___x_277_;
}
else
{
lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; uint8_t v___x_281_; 
v___x_278_ = lean_unsigned_to_nat(1u);
v___x_279_ = l_Lean_Syntax_getArg(v_x_265_, v___x_278_);
lean_dec(v_x_265_);
v___x_280_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_279_);
v___x_281_ = l_Lean_Syntax_matchesNull(v___x_279_, v___x_280_);
if (v___x_281_ == 0)
{
lean_object* v___x_282_; lean_object* v___x_283_; 
lean_dec(v___x_279_);
lean_dec(v___x_273_);
v___x_282_ = lean_box(0);
v___x_283_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_283_, 0, v___x_282_);
lean_ctor_set(v___x_283_, 1, v_a_267_);
return v___x_283_;
}
else
{
lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v_ref_286_; uint8_t v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; 
v___x_284_ = l_Lean_Syntax_getArg(v___x_279_, v___x_272_);
v___x_285_ = l_Lean_Syntax_getArg(v___x_279_, v___x_278_);
lean_dec(v___x_279_);
v_ref_286_ = l_Lean_replaceRef(v___x_273_, v_a_266_);
lean_dec(v___x_273_);
v___x_287_ = 0;
v___x_288_ = l_Lean_SourceInfo_fromRef(v_ref_286_, v___x_287_);
lean_dec(v_ref_286_);
v___x_289_ = ((lean_object*)(lp_Props2Theories_term___x5c____1___closed__1));
v___x_290_ = ((lean_object*)(lp_Props2Theories_term___x5c____1___closed__2));
lean_inc(v___x_288_);
v___x_291_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_291_, 0, v___x_288_);
lean_ctor_set(v___x_291_, 1, v___x_290_);
v___x_292_ = l_Lean_Syntax_node3(v___x_288_, v___x_289_, v___x_284_, v___x_291_, v___x_285_);
v___x_293_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_293_, 0, v___x_292_);
lean_ctor_set(v___x_293_, 1, v_a_267_);
return v___x_293_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______unexpand__difference__1___boxed(lean_object* v_x_294_, lean_object* v_a_295_, lean_object* v_a_296_){
_start:
{
lean_object* v_res_297_; 
v_res_297_ = lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______unexpand__difference__1(v_x_294_, v_a_295_, v_a_296_);
lean_dec(v_a_295_);
return v_res_297_;
}
}
static lean_object* _init_lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u25b3____1___closed__1(void){
_start:
{
lean_object* v___x_315_; lean_object* v___x_316_; 
v___x_315_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u25b3____1___closed__0));
v___x_316_ = l_String_toRawSubstring_x27(v___x_315_);
return v___x_316_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u25b3____1(lean_object* v_x_325_, lean_object* v_a_326_, lean_object* v_a_327_){
_start:
{
lean_object* v___x_328_; uint8_t v___x_329_; 
v___x_328_ = ((lean_object*)(lp_Props2Theories_term___u25b3___00__closed__1));
lean_inc(v_x_325_);
v___x_329_ = l_Lean_Syntax_isOfKind(v_x_325_, v___x_328_);
if (v___x_329_ == 0)
{
lean_object* v___x_330_; lean_object* v___x_331_; 
lean_dec(v_x_325_);
v___x_330_ = lean_box(1);
v___x_331_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_331_, 0, v___x_330_);
lean_ctor_set(v___x_331_, 1, v_a_327_);
return v___x_331_;
}
else
{
lean_object* v_quotContext_332_; lean_object* v_currMacroScope_333_; lean_object* v_ref_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; uint8_t v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; 
v_quotContext_332_ = lean_ctor_get(v_a_326_, 1);
v_currMacroScope_333_ = lean_ctor_get(v_a_326_, 2);
v_ref_334_ = lean_ctor_get(v_a_326_, 5);
v___x_335_ = lean_unsigned_to_nat(0u);
v___x_336_ = l_Lean_Syntax_getArg(v_x_325_, v___x_335_);
v___x_337_ = lean_unsigned_to_nat(2u);
v___x_338_ = l_Lean_Syntax_getArg(v_x_325_, v___x_337_);
lean_dec(v_x_325_);
v___x_339_ = 0;
v___x_340_ = l_Lean_SourceInfo_fromRef(v_ref_334_, v___x_339_);
v___x_341_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__4));
v___x_342_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u25b3____1___closed__1, &lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u25b3____1___closed__1_once, _init_lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u25b3____1___closed__1);
v___x_343_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u25b3____1___closed__2));
lean_inc(v_currMacroScope_333_);
lean_inc(v_quotContext_332_);
v___x_344_ = l_Lean_addMacroScope(v_quotContext_332_, v___x_343_, v_currMacroScope_333_);
v___x_345_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u25b3____1___closed__4));
lean_inc_n(v___x_340_, 2);
v___x_346_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_346_, 0, v___x_340_);
lean_ctor_set(v___x_346_, 1, v___x_342_);
lean_ctor_set(v___x_346_, 2, v___x_344_);
lean_ctor_set(v___x_346_, 3, v___x_345_);
v___x_347_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__11));
v___x_348_ = l_Lean_Syntax_node2(v___x_340_, v___x_347_, v___x_336_, v___x_338_);
v___x_349_ = l_Lean_Syntax_node2(v___x_340_, v___x_341_, v___x_346_, v___x_348_);
v___x_350_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_350_, 0, v___x_349_);
lean_ctor_set(v___x_350_, 1, v_a_327_);
return v___x_350_;
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u25b3____1___boxed(lean_object* v_x_351_, lean_object* v_a_352_, lean_object* v_a_353_){
_start:
{
lean_object* v_res_354_; 
v_res_354_ = lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u25b3____1(v_x_351_, v_a_352_, v_a_353_);
lean_dec_ref(v_a_352_);
return v_res_354_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______unexpand__symmetric__difference__1(lean_object* v_x_355_, lean_object* v_a_356_, lean_object* v_a_357_){
_start:
{
lean_object* v___x_358_; uint8_t v___x_359_; 
v___x_358_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__4));
lean_inc(v_x_355_);
v___x_359_ = l_Lean_Syntax_isOfKind(v_x_355_, v___x_358_);
if (v___x_359_ == 0)
{
lean_object* v___x_360_; lean_object* v___x_361_; 
lean_dec(v_x_355_);
v___x_360_ = lean_box(0);
v___x_361_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_361_, 0, v___x_360_);
lean_ctor_set(v___x_361_, 1, v_a_357_);
return v___x_361_;
}
else
{
lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; uint8_t v___x_365_; 
v___x_362_ = lean_unsigned_to_nat(0u);
v___x_363_ = l_Lean_Syntax_getArg(v_x_355_, v___x_362_);
v___x_364_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______unexpand__union__2sets__1___closed__1));
lean_inc(v___x_363_);
v___x_365_ = l_Lean_Syntax_isOfKind(v___x_363_, v___x_364_);
if (v___x_365_ == 0)
{
lean_object* v___x_366_; lean_object* v___x_367_; 
lean_dec(v___x_363_);
lean_dec(v_x_355_);
v___x_366_ = lean_box(0);
v___x_367_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_367_, 0, v___x_366_);
lean_ctor_set(v___x_367_, 1, v_a_357_);
return v___x_367_;
}
else
{
lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; uint8_t v___x_371_; 
v___x_368_ = lean_unsigned_to_nat(1u);
v___x_369_ = l_Lean_Syntax_getArg(v_x_355_, v___x_368_);
lean_dec(v_x_355_);
v___x_370_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_369_);
v___x_371_ = l_Lean_Syntax_matchesNull(v___x_369_, v___x_370_);
if (v___x_371_ == 0)
{
lean_object* v___x_372_; lean_object* v___x_373_; 
lean_dec(v___x_369_);
lean_dec(v___x_363_);
v___x_372_ = lean_box(0);
v___x_373_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_373_, 0, v___x_372_);
lean_ctor_set(v___x_373_, 1, v_a_357_);
return v___x_373_;
}
else
{
lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v_ref_376_; uint8_t v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; 
v___x_374_ = l_Lean_Syntax_getArg(v___x_369_, v___x_362_);
v___x_375_ = l_Lean_Syntax_getArg(v___x_369_, v___x_368_);
lean_dec(v___x_369_);
v_ref_376_ = l_Lean_replaceRef(v___x_363_, v_a_356_);
lean_dec(v___x_363_);
v___x_377_ = 0;
v___x_378_ = l_Lean_SourceInfo_fromRef(v_ref_376_, v___x_377_);
lean_dec(v_ref_376_);
v___x_379_ = ((lean_object*)(lp_Props2Theories_term___u25b3___00__closed__1));
v___x_380_ = ((lean_object*)(lp_Props2Theories_term___u25b3___00__closed__2));
lean_inc(v___x_378_);
v___x_381_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_381_, 0, v___x_378_);
lean_ctor_set(v___x_381_, 1, v___x_380_);
v___x_382_ = l_Lean_Syntax_node3(v___x_378_, v___x_379_, v___x_374_, v___x_381_, v___x_375_);
v___x_383_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_383_, 0, v___x_382_);
lean_ctor_set(v___x_383_, 1, v_a_357_);
return v___x_383_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______unexpand__symmetric__difference__1___boxed(lean_object* v_x_384_, lean_object* v_a_385_, lean_object* v_a_386_){
_start:
{
lean_object* v_res_387_; 
v_res_387_ = lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______unexpand__symmetric__difference__1(v_x_384_, v_a_385_, v_a_386_);
lean_dec(v_a_385_);
return v_res_387_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Props2Theories_Props2Theories_B__Set_A__Constructions_Task(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Props2Theories_Props2Theories_B__Set_B__Set__Algebra_Task(uint8_t builtin) {
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
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
