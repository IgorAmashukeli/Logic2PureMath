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
static const lean_ctor_object lp_Props2Theories_term___u222a____1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u222a____1___closed__7_value),((lean_object*)(((size_t)(1024) << 1) | 1))}};
static const lean_object* lp_Props2Theories_term___u222a____1___closed__8 = (const lean_object*)&lp_Props2Theories_term___u222a____1___closed__8_value;
static const lean_ctor_object lp_Props2Theories_term___u222a____1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u222a____1___closed__3_value),((lean_object*)&lp_Props2Theories_term___u222a____1___closed__5_value),((lean_object*)&lp_Props2Theories_term___u222a____1___closed__8_value)}};
static const lean_object* lp_Props2Theories_term___u222a____1___closed__9 = (const lean_object*)&lp_Props2Theories_term___u222a____1___closed__9_value;
static const lean_ctor_object lp_Props2Theories_term___u222a____1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u222a____1___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&lp_Props2Theories_term___u222a____1___closed__9_value)}};
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
static const lean_ctor_object lp_Props2Theories_term___u2229____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u222a____1___closed__3_value),((lean_object*)&lp_Props2Theories_term___u2229____1___closed__3_value),((lean_object*)&lp_Props2Theories_term___u222a____1___closed__8_value)}};
static const lean_object* lp_Props2Theories_term___u2229____1___closed__4 = (const lean_object*)&lp_Props2Theories_term___u2229____1___closed__4_value;
static const lean_ctor_object lp_Props2Theories_term___u2229____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2229____1___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&lp_Props2Theories_term___u2229____1___closed__4_value)}};
static const lean_object* lp_Props2Theories_term___u2229____1___closed__5 = (const lean_object*)&lp_Props2Theories_term___u2229____1___closed__5_value;
LEAN_EXPORT const lean_object* lp_Props2Theories_term___u2229____1 = (const lean_object*)&lp_Props2Theories_term___u2229____1___closed__5_value;
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
static const lean_ctor_object lp_Props2Theories_term___x5c____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u222a____1___closed__3_value),((lean_object*)&lp_Props2Theories_term___x5c____1___closed__3_value),((lean_object*)&lp_Props2Theories_term___u222a____1___closed__8_value)}};
static const lean_object* lp_Props2Theories_term___x5c____1___closed__4 = (const lean_object*)&lp_Props2Theories_term___x5c____1___closed__4_value;
static const lean_ctor_object lp_Props2Theories_term___x5c____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&lp_Props2Theories_term___x5c____1___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&lp_Props2Theories_term___x5c____1___closed__4_value)}};
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
static const lean_string_object lp_Props2Theories_term___u25b3___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "△"};
static const lean_object* lp_Props2Theories_term___u25b3___00__closed__2 = (const lean_object*)&lp_Props2Theories_term___u25b3___00__closed__2_value;
static const lean_ctor_object lp_Props2Theories_term___u25b3___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u25b3___00__closed__2_value)}};
static const lean_object* lp_Props2Theories_term___u25b3___00__closed__3 = (const lean_object*)&lp_Props2Theories_term___u25b3___00__closed__3_value;
static const lean_ctor_object lp_Props2Theories_term___u25b3___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u222a____1___closed__3_value),((lean_object*)&lp_Props2Theories_term___u25b3___00__closed__3_value),((lean_object*)&lp_Props2Theories_term___u222a____1___closed__8_value)}};
static const lean_object* lp_Props2Theories_term___u25b3___00__closed__4 = (const lean_object*)&lp_Props2Theories_term___u25b3___00__closed__4_value;
static const lean_ctor_object lp_Props2Theories_term___u25b3___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u25b3___00__closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&lp_Props2Theories_term___u25b3___00__closed__4_value)}};
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
lean_object* v___x_35_; lean_object* v___x_36_; 
v___x_35_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__5));
v___x_36_ = l_String_toRawSubstring_x27(v___x_35_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1(lean_object* v_x_48_, lean_object* v_a_49_, lean_object* v_a_50_){
_start:
{
lean_object* v___x_51_; uint8_t v___x_52_; 
v___x_51_ = ((lean_object*)(lp_Props2Theories_term___u222a____1___closed__1));
lean_inc(v_x_48_);
v___x_52_ = l_Lean_Syntax_isOfKind(v_x_48_, v___x_51_);
if (v___x_52_ == 0)
{
lean_object* v___x_53_; lean_object* v___x_54_; 
lean_dec(v_x_48_);
v___x_53_ = lean_box(1);
v___x_54_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_54_, 0, v___x_53_);
lean_ctor_set(v___x_54_, 1, v_a_50_);
return v___x_54_;
}
else
{
lean_object* v_quotContext_55_; lean_object* v_currMacroScope_56_; lean_object* v_ref_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; uint8_t v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; 
v_quotContext_55_ = lean_ctor_get(v_a_49_, 1);
v_currMacroScope_56_ = lean_ctor_get(v_a_49_, 2);
v_ref_57_ = lean_ctor_get(v_a_49_, 5);
v___x_58_ = lean_unsigned_to_nat(0u);
v___x_59_ = l_Lean_Syntax_getArg(v_x_48_, v___x_58_);
v___x_60_ = lean_unsigned_to_nat(2u);
v___x_61_ = l_Lean_Syntax_getArg(v_x_48_, v___x_60_);
lean_dec(v_x_48_);
v___x_62_ = 0;
v___x_63_ = l_Lean_SourceInfo_fromRef(v_ref_57_, v___x_62_);
v___x_64_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__4));
v___x_65_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__6, &lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__6_once, _init_lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__6);
v___x_66_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__7));
lean_inc(v_currMacroScope_56_);
lean_inc(v_quotContext_55_);
v___x_67_ = l_Lean_addMacroScope(v_quotContext_55_, v___x_66_, v_currMacroScope_56_);
v___x_68_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__9));
lean_inc_n(v___x_63_, 2);
v___x_69_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_69_, 0, v___x_63_);
lean_ctor_set(v___x_69_, 1, v___x_65_);
lean_ctor_set(v___x_69_, 2, v___x_67_);
lean_ctor_set(v___x_69_, 3, v___x_68_);
v___x_70_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__11));
v___x_71_ = l_Lean_Syntax_node2(v___x_63_, v___x_70_, v___x_59_, v___x_61_);
v___x_72_ = l_Lean_Syntax_node2(v___x_63_, v___x_64_, v___x_69_, v___x_71_);
v___x_73_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_73_, 0, v___x_72_);
lean_ctor_set(v___x_73_, 1, v_a_50_);
return v___x_73_;
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___boxed(lean_object* v_x_74_, lean_object* v_a_75_, lean_object* v_a_76_){
_start:
{
lean_object* v_res_77_; 
v_res_77_ = lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1(v_x_74_, v_a_75_, v_a_76_);
lean_dec_ref(v_a_75_);
return v_res_77_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______unexpand__union__2sets__1(lean_object* v_x_81_, lean_object* v_a_82_, lean_object* v_a_83_){
_start:
{
lean_object* v___x_84_; uint8_t v___x_85_; 
v___x_84_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__4));
lean_inc(v_x_81_);
v___x_85_ = l_Lean_Syntax_isOfKind(v_x_81_, v___x_84_);
if (v___x_85_ == 0)
{
lean_object* v___x_86_; lean_object* v___x_87_; 
lean_dec(v_x_81_);
v___x_86_ = lean_box(0);
v___x_87_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_87_, 0, v___x_86_);
lean_ctor_set(v___x_87_, 1, v_a_83_);
return v___x_87_;
}
else
{
lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; uint8_t v___x_91_; 
v___x_88_ = lean_unsigned_to_nat(0u);
v___x_89_ = l_Lean_Syntax_getArg(v_x_81_, v___x_88_);
v___x_90_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______unexpand__union__2sets__1___closed__1));
lean_inc(v___x_89_);
v___x_91_ = l_Lean_Syntax_isOfKind(v___x_89_, v___x_90_);
if (v___x_91_ == 0)
{
lean_object* v___x_92_; lean_object* v___x_93_; 
lean_dec(v___x_89_);
lean_dec(v_x_81_);
v___x_92_ = lean_box(0);
v___x_93_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_93_, 0, v___x_92_);
lean_ctor_set(v___x_93_, 1, v_a_83_);
return v___x_93_;
}
else
{
lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; uint8_t v___x_97_; 
v___x_94_ = lean_unsigned_to_nat(1u);
v___x_95_ = l_Lean_Syntax_getArg(v_x_81_, v___x_94_);
lean_dec(v_x_81_);
v___x_96_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_95_);
v___x_97_ = l_Lean_Syntax_matchesNull(v___x_95_, v___x_96_);
if (v___x_97_ == 0)
{
lean_object* v___x_98_; lean_object* v___x_99_; 
lean_dec(v___x_95_);
lean_dec(v___x_89_);
v___x_98_ = lean_box(0);
v___x_99_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_99_, 0, v___x_98_);
lean_ctor_set(v___x_99_, 1, v_a_83_);
return v___x_99_;
}
else
{
lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v_ref_102_; uint8_t v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; 
v___x_100_ = l_Lean_Syntax_getArg(v___x_95_, v___x_88_);
v___x_101_ = l_Lean_Syntax_getArg(v___x_95_, v___x_94_);
lean_dec(v___x_95_);
v_ref_102_ = l_Lean_replaceRef(v___x_89_, v_a_82_);
lean_dec(v___x_89_);
v___x_103_ = 0;
v___x_104_ = l_Lean_SourceInfo_fromRef(v_ref_102_, v___x_103_);
lean_dec(v_ref_102_);
v___x_105_ = ((lean_object*)(lp_Props2Theories_term___u222a____1___closed__1));
v___x_106_ = ((lean_object*)(lp_Props2Theories_term___u222a____1___closed__4));
lean_inc(v___x_104_);
v___x_107_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_107_, 0, v___x_104_);
lean_ctor_set(v___x_107_, 1, v___x_106_);
v___x_108_ = l_Lean_Syntax_node3(v___x_104_, v___x_105_, v___x_100_, v___x_107_, v___x_101_);
v___x_109_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_109_, 0, v___x_108_);
lean_ctor_set(v___x_109_, 1, v_a_83_);
return v___x_109_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______unexpand__union__2sets__1___boxed(lean_object* v_x_110_, lean_object* v_a_111_, lean_object* v_a_112_){
_start:
{
lean_object* v_res_113_; 
v_res_113_ = lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______unexpand__union__2sets__1(v_x_110_, v_a_111_, v_a_112_);
lean_dec(v_a_111_);
return v_res_113_;
}
}
static lean_object* _init_lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u2229____1__1___closed__1(void){
_start:
{
lean_object* v___x_130_; lean_object* v___x_131_; 
v___x_130_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u2229____1__1___closed__0));
v___x_131_ = l_String_toRawSubstring_x27(v___x_130_);
return v___x_131_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u2229____1__1(lean_object* v_x_140_, lean_object* v_a_141_, lean_object* v_a_142_){
_start:
{
lean_object* v___x_143_; uint8_t v___x_144_; 
v___x_143_ = ((lean_object*)(lp_Props2Theories_term___u2229____1___closed__1));
lean_inc(v_x_140_);
v___x_144_ = l_Lean_Syntax_isOfKind(v_x_140_, v___x_143_);
if (v___x_144_ == 0)
{
lean_object* v___x_145_; lean_object* v___x_146_; 
lean_dec(v_x_140_);
v___x_145_ = lean_box(1);
v___x_146_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_146_, 0, v___x_145_);
lean_ctor_set(v___x_146_, 1, v_a_142_);
return v___x_146_;
}
else
{
lean_object* v_quotContext_147_; lean_object* v_currMacroScope_148_; lean_object* v_ref_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; uint8_t v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; 
v_quotContext_147_ = lean_ctor_get(v_a_141_, 1);
v_currMacroScope_148_ = lean_ctor_get(v_a_141_, 2);
v_ref_149_ = lean_ctor_get(v_a_141_, 5);
v___x_150_ = lean_unsigned_to_nat(0u);
v___x_151_ = l_Lean_Syntax_getArg(v_x_140_, v___x_150_);
v___x_152_ = lean_unsigned_to_nat(2u);
v___x_153_ = l_Lean_Syntax_getArg(v_x_140_, v___x_152_);
lean_dec(v_x_140_);
v___x_154_ = 0;
v___x_155_ = l_Lean_SourceInfo_fromRef(v_ref_149_, v___x_154_);
v___x_156_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__4));
v___x_157_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u2229____1__1___closed__1, &lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u2229____1__1___closed__1_once, _init_lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u2229____1__1___closed__1);
v___x_158_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u2229____1__1___closed__2));
lean_inc(v_currMacroScope_148_);
lean_inc(v_quotContext_147_);
v___x_159_ = l_Lean_addMacroScope(v_quotContext_147_, v___x_158_, v_currMacroScope_148_);
v___x_160_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u2229____1__1___closed__4));
lean_inc_n(v___x_155_, 2);
v___x_161_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_161_, 0, v___x_155_);
lean_ctor_set(v___x_161_, 1, v___x_157_);
lean_ctor_set(v___x_161_, 2, v___x_159_);
lean_ctor_set(v___x_161_, 3, v___x_160_);
v___x_162_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__11));
v___x_163_ = l_Lean_Syntax_node2(v___x_155_, v___x_162_, v___x_151_, v___x_153_);
v___x_164_ = l_Lean_Syntax_node2(v___x_155_, v___x_156_, v___x_161_, v___x_163_);
v___x_165_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_165_, 0, v___x_164_);
lean_ctor_set(v___x_165_, 1, v_a_142_);
return v___x_165_;
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u2229____1__1___boxed(lean_object* v_x_166_, lean_object* v_a_167_, lean_object* v_a_168_){
_start:
{
lean_object* v_res_169_; 
v_res_169_ = lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u2229____1__1(v_x_166_, v_a_167_, v_a_168_);
lean_dec_ref(v_a_167_);
return v_res_169_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______unexpand__intersect__2sets__1(lean_object* v_x_170_, lean_object* v_a_171_, lean_object* v_a_172_){
_start:
{
lean_object* v___x_173_; uint8_t v___x_174_; 
v___x_173_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__4));
lean_inc(v_x_170_);
v___x_174_ = l_Lean_Syntax_isOfKind(v_x_170_, v___x_173_);
if (v___x_174_ == 0)
{
lean_object* v___x_175_; lean_object* v___x_176_; 
lean_dec(v_x_170_);
v___x_175_ = lean_box(0);
v___x_176_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_176_, 0, v___x_175_);
lean_ctor_set(v___x_176_, 1, v_a_172_);
return v___x_176_;
}
else
{
lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; uint8_t v___x_180_; 
v___x_177_ = lean_unsigned_to_nat(0u);
v___x_178_ = l_Lean_Syntax_getArg(v_x_170_, v___x_177_);
v___x_179_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______unexpand__union__2sets__1___closed__1));
lean_inc(v___x_178_);
v___x_180_ = l_Lean_Syntax_isOfKind(v___x_178_, v___x_179_);
if (v___x_180_ == 0)
{
lean_object* v___x_181_; lean_object* v___x_182_; 
lean_dec(v___x_178_);
lean_dec(v_x_170_);
v___x_181_ = lean_box(0);
v___x_182_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_182_, 0, v___x_181_);
lean_ctor_set(v___x_182_, 1, v_a_172_);
return v___x_182_;
}
else
{
lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; uint8_t v___x_186_; 
v___x_183_ = lean_unsigned_to_nat(1u);
v___x_184_ = l_Lean_Syntax_getArg(v_x_170_, v___x_183_);
lean_dec(v_x_170_);
v___x_185_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_184_);
v___x_186_ = l_Lean_Syntax_matchesNull(v___x_184_, v___x_185_);
if (v___x_186_ == 0)
{
lean_object* v___x_187_; lean_object* v___x_188_; 
lean_dec(v___x_184_);
lean_dec(v___x_178_);
v___x_187_ = lean_box(0);
v___x_188_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_188_, 0, v___x_187_);
lean_ctor_set(v___x_188_, 1, v_a_172_);
return v___x_188_;
}
else
{
lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v_ref_191_; uint8_t v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; 
v___x_189_ = l_Lean_Syntax_getArg(v___x_184_, v___x_177_);
v___x_190_ = l_Lean_Syntax_getArg(v___x_184_, v___x_183_);
lean_dec(v___x_184_);
v_ref_191_ = l_Lean_replaceRef(v___x_178_, v_a_171_);
lean_dec(v___x_178_);
v___x_192_ = 0;
v___x_193_ = l_Lean_SourceInfo_fromRef(v_ref_191_, v___x_192_);
lean_dec(v_ref_191_);
v___x_194_ = ((lean_object*)(lp_Props2Theories_term___u2229____1___closed__1));
v___x_195_ = ((lean_object*)(lp_Props2Theories_term___u2229____1___closed__2));
lean_inc(v___x_193_);
v___x_196_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_196_, 0, v___x_193_);
lean_ctor_set(v___x_196_, 1, v___x_195_);
v___x_197_ = l_Lean_Syntax_node3(v___x_193_, v___x_194_, v___x_189_, v___x_196_, v___x_190_);
v___x_198_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_198_, 0, v___x_197_);
lean_ctor_set(v___x_198_, 1, v_a_172_);
return v___x_198_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______unexpand__intersect__2sets__1___boxed(lean_object* v_x_199_, lean_object* v_a_200_, lean_object* v_a_201_){
_start:
{
lean_object* v_res_202_; 
v_res_202_ = lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______unexpand__intersect__2sets__1(v_x_199_, v_a_200_, v_a_201_);
lean_dec(v_a_200_);
return v_res_202_;
}
}
static lean_object* _init_lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___x5c____1__1___closed__1(void){
_start:
{
lean_object* v___x_219_; lean_object* v___x_220_; 
v___x_219_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___x5c____1__1___closed__0));
v___x_220_ = l_String_toRawSubstring_x27(v___x_219_);
return v___x_220_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___x5c____1__1(lean_object* v_x_229_, lean_object* v_a_230_, lean_object* v_a_231_){
_start:
{
lean_object* v___x_232_; uint8_t v___x_233_; 
v___x_232_ = ((lean_object*)(lp_Props2Theories_term___x5c____1___closed__1));
lean_inc(v_x_229_);
v___x_233_ = l_Lean_Syntax_isOfKind(v_x_229_, v___x_232_);
if (v___x_233_ == 0)
{
lean_object* v___x_234_; lean_object* v___x_235_; 
lean_dec(v_x_229_);
v___x_234_ = lean_box(1);
v___x_235_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_235_, 0, v___x_234_);
lean_ctor_set(v___x_235_, 1, v_a_231_);
return v___x_235_;
}
else
{
lean_object* v_quotContext_236_; lean_object* v_currMacroScope_237_; lean_object* v_ref_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; uint8_t v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; 
v_quotContext_236_ = lean_ctor_get(v_a_230_, 1);
v_currMacroScope_237_ = lean_ctor_get(v_a_230_, 2);
v_ref_238_ = lean_ctor_get(v_a_230_, 5);
v___x_239_ = lean_unsigned_to_nat(0u);
v___x_240_ = l_Lean_Syntax_getArg(v_x_229_, v___x_239_);
v___x_241_ = lean_unsigned_to_nat(2u);
v___x_242_ = l_Lean_Syntax_getArg(v_x_229_, v___x_241_);
lean_dec(v_x_229_);
v___x_243_ = 0;
v___x_244_ = l_Lean_SourceInfo_fromRef(v_ref_238_, v___x_243_);
v___x_245_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__4));
v___x_246_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___x5c____1__1___closed__1, &lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___x5c____1__1___closed__1_once, _init_lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___x5c____1__1___closed__1);
v___x_247_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___x5c____1__1___closed__2));
lean_inc(v_currMacroScope_237_);
lean_inc(v_quotContext_236_);
v___x_248_ = l_Lean_addMacroScope(v_quotContext_236_, v___x_247_, v_currMacroScope_237_);
v___x_249_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___x5c____1__1___closed__4));
lean_inc_n(v___x_244_, 2);
v___x_250_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_250_, 0, v___x_244_);
lean_ctor_set(v___x_250_, 1, v___x_246_);
lean_ctor_set(v___x_250_, 2, v___x_248_);
lean_ctor_set(v___x_250_, 3, v___x_249_);
v___x_251_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__11));
v___x_252_ = l_Lean_Syntax_node2(v___x_244_, v___x_251_, v___x_240_, v___x_242_);
v___x_253_ = l_Lean_Syntax_node2(v___x_244_, v___x_245_, v___x_250_, v___x_252_);
v___x_254_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_254_, 0, v___x_253_);
lean_ctor_set(v___x_254_, 1, v_a_231_);
return v___x_254_;
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___x5c____1__1___boxed(lean_object* v_x_255_, lean_object* v_a_256_, lean_object* v_a_257_){
_start:
{
lean_object* v_res_258_; 
v_res_258_ = lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___x5c____1__1(v_x_255_, v_a_256_, v_a_257_);
lean_dec_ref(v_a_256_);
return v_res_258_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______unexpand__difference__1(lean_object* v_x_259_, lean_object* v_a_260_, lean_object* v_a_261_){
_start:
{
lean_object* v___x_262_; uint8_t v___x_263_; 
v___x_262_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__4));
lean_inc(v_x_259_);
v___x_263_ = l_Lean_Syntax_isOfKind(v_x_259_, v___x_262_);
if (v___x_263_ == 0)
{
lean_object* v___x_264_; lean_object* v___x_265_; 
lean_dec(v_x_259_);
v___x_264_ = lean_box(0);
v___x_265_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_265_, 0, v___x_264_);
lean_ctor_set(v___x_265_, 1, v_a_261_);
return v___x_265_;
}
else
{
lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; uint8_t v___x_269_; 
v___x_266_ = lean_unsigned_to_nat(0u);
v___x_267_ = l_Lean_Syntax_getArg(v_x_259_, v___x_266_);
v___x_268_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______unexpand__union__2sets__1___closed__1));
lean_inc(v___x_267_);
v___x_269_ = l_Lean_Syntax_isOfKind(v___x_267_, v___x_268_);
if (v___x_269_ == 0)
{
lean_object* v___x_270_; lean_object* v___x_271_; 
lean_dec(v___x_267_);
lean_dec(v_x_259_);
v___x_270_ = lean_box(0);
v___x_271_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_271_, 0, v___x_270_);
lean_ctor_set(v___x_271_, 1, v_a_261_);
return v___x_271_;
}
else
{
lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; uint8_t v___x_275_; 
v___x_272_ = lean_unsigned_to_nat(1u);
v___x_273_ = l_Lean_Syntax_getArg(v_x_259_, v___x_272_);
lean_dec(v_x_259_);
v___x_274_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_273_);
v___x_275_ = l_Lean_Syntax_matchesNull(v___x_273_, v___x_274_);
if (v___x_275_ == 0)
{
lean_object* v___x_276_; lean_object* v___x_277_; 
lean_dec(v___x_273_);
lean_dec(v___x_267_);
v___x_276_ = lean_box(0);
v___x_277_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_277_, 0, v___x_276_);
lean_ctor_set(v___x_277_, 1, v_a_261_);
return v___x_277_;
}
else
{
lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v_ref_280_; uint8_t v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; 
v___x_278_ = l_Lean_Syntax_getArg(v___x_273_, v___x_266_);
v___x_279_ = l_Lean_Syntax_getArg(v___x_273_, v___x_272_);
lean_dec(v___x_273_);
v_ref_280_ = l_Lean_replaceRef(v___x_267_, v_a_260_);
lean_dec(v___x_267_);
v___x_281_ = 0;
v___x_282_ = l_Lean_SourceInfo_fromRef(v_ref_280_, v___x_281_);
lean_dec(v_ref_280_);
v___x_283_ = ((lean_object*)(lp_Props2Theories_term___x5c____1___closed__1));
v___x_284_ = ((lean_object*)(lp_Props2Theories_term___x5c____1___closed__2));
lean_inc(v___x_282_);
v___x_285_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_285_, 0, v___x_282_);
lean_ctor_set(v___x_285_, 1, v___x_284_);
v___x_286_ = l_Lean_Syntax_node3(v___x_282_, v___x_283_, v___x_278_, v___x_285_, v___x_279_);
v___x_287_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_287_, 0, v___x_286_);
lean_ctor_set(v___x_287_, 1, v_a_261_);
return v___x_287_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______unexpand__difference__1___boxed(lean_object* v_x_288_, lean_object* v_a_289_, lean_object* v_a_290_){
_start:
{
lean_object* v_res_291_; 
v_res_291_ = lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______unexpand__difference__1(v_x_288_, v_a_289_, v_a_290_);
lean_dec(v_a_289_);
return v_res_291_;
}
}
static lean_object* _init_lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u25b3____1___closed__1(void){
_start:
{
lean_object* v___x_308_; lean_object* v___x_309_; 
v___x_308_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u25b3____1___closed__0));
v___x_309_ = l_String_toRawSubstring_x27(v___x_308_);
return v___x_309_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u25b3____1(lean_object* v_x_318_, lean_object* v_a_319_, lean_object* v_a_320_){
_start:
{
lean_object* v___x_321_; uint8_t v___x_322_; 
v___x_321_ = ((lean_object*)(lp_Props2Theories_term___u25b3___00__closed__1));
lean_inc(v_x_318_);
v___x_322_ = l_Lean_Syntax_isOfKind(v_x_318_, v___x_321_);
if (v___x_322_ == 0)
{
lean_object* v___x_323_; lean_object* v___x_324_; 
lean_dec(v_x_318_);
v___x_323_ = lean_box(1);
v___x_324_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_324_, 0, v___x_323_);
lean_ctor_set(v___x_324_, 1, v_a_320_);
return v___x_324_;
}
else
{
lean_object* v_quotContext_325_; lean_object* v_currMacroScope_326_; lean_object* v_ref_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; uint8_t v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; 
v_quotContext_325_ = lean_ctor_get(v_a_319_, 1);
v_currMacroScope_326_ = lean_ctor_get(v_a_319_, 2);
v_ref_327_ = lean_ctor_get(v_a_319_, 5);
v___x_328_ = lean_unsigned_to_nat(0u);
v___x_329_ = l_Lean_Syntax_getArg(v_x_318_, v___x_328_);
v___x_330_ = lean_unsigned_to_nat(2u);
v___x_331_ = l_Lean_Syntax_getArg(v_x_318_, v___x_330_);
lean_dec(v_x_318_);
v___x_332_ = 0;
v___x_333_ = l_Lean_SourceInfo_fromRef(v_ref_327_, v___x_332_);
v___x_334_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__4));
v___x_335_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u25b3____1___closed__1, &lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u25b3____1___closed__1_once, _init_lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u25b3____1___closed__1);
v___x_336_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u25b3____1___closed__2));
lean_inc(v_currMacroScope_326_);
lean_inc(v_quotContext_325_);
v___x_337_ = l_Lean_addMacroScope(v_quotContext_325_, v___x_336_, v_currMacroScope_326_);
v___x_338_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u25b3____1___closed__4));
lean_inc_n(v___x_333_, 2);
v___x_339_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_339_, 0, v___x_333_);
lean_ctor_set(v___x_339_, 1, v___x_335_);
lean_ctor_set(v___x_339_, 2, v___x_337_);
lean_ctor_set(v___x_339_, 3, v___x_338_);
v___x_340_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__11));
v___x_341_ = l_Lean_Syntax_node2(v___x_333_, v___x_340_, v___x_329_, v___x_331_);
v___x_342_ = l_Lean_Syntax_node2(v___x_333_, v___x_334_, v___x_339_, v___x_341_);
v___x_343_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_343_, 0, v___x_342_);
lean_ctor_set(v___x_343_, 1, v_a_320_);
return v___x_343_;
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u25b3____1___boxed(lean_object* v_x_344_, lean_object* v_a_345_, lean_object* v_a_346_){
_start:
{
lean_object* v_res_347_; 
v_res_347_ = lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u25b3____1(v_x_344_, v_a_345_, v_a_346_);
lean_dec_ref(v_a_345_);
return v_res_347_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______unexpand__symmetric__difference__1(lean_object* v_x_348_, lean_object* v_a_349_, lean_object* v_a_350_){
_start:
{
lean_object* v___x_351_; uint8_t v___x_352_; 
v___x_351_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______macroRules__term___u222a____1__1___closed__4));
lean_inc(v_x_348_);
v___x_352_ = l_Lean_Syntax_isOfKind(v_x_348_, v___x_351_);
if (v___x_352_ == 0)
{
lean_object* v___x_353_; lean_object* v___x_354_; 
lean_dec(v_x_348_);
v___x_353_ = lean_box(0);
v___x_354_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_354_, 0, v___x_353_);
lean_ctor_set(v___x_354_, 1, v_a_350_);
return v___x_354_;
}
else
{
lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; uint8_t v___x_358_; 
v___x_355_ = lean_unsigned_to_nat(0u);
v___x_356_ = l_Lean_Syntax_getArg(v_x_348_, v___x_355_);
v___x_357_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______unexpand__union__2sets__1___closed__1));
lean_inc(v___x_356_);
v___x_358_ = l_Lean_Syntax_isOfKind(v___x_356_, v___x_357_);
if (v___x_358_ == 0)
{
lean_object* v___x_359_; lean_object* v___x_360_; 
lean_dec(v___x_356_);
lean_dec(v_x_348_);
v___x_359_ = lean_box(0);
v___x_360_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_360_, 0, v___x_359_);
lean_ctor_set(v___x_360_, 1, v_a_350_);
return v___x_360_;
}
else
{
lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; uint8_t v___x_364_; 
v___x_361_ = lean_unsigned_to_nat(1u);
v___x_362_ = l_Lean_Syntax_getArg(v_x_348_, v___x_361_);
lean_dec(v_x_348_);
v___x_363_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_362_);
v___x_364_ = l_Lean_Syntax_matchesNull(v___x_362_, v___x_363_);
if (v___x_364_ == 0)
{
lean_object* v___x_365_; lean_object* v___x_366_; 
lean_dec(v___x_362_);
lean_dec(v___x_356_);
v___x_365_ = lean_box(0);
v___x_366_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_366_, 0, v___x_365_);
lean_ctor_set(v___x_366_, 1, v_a_350_);
return v___x_366_;
}
else
{
lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v_ref_369_; uint8_t v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; 
v___x_367_ = l_Lean_Syntax_getArg(v___x_362_, v___x_355_);
v___x_368_ = l_Lean_Syntax_getArg(v___x_362_, v___x_361_);
lean_dec(v___x_362_);
v_ref_369_ = l_Lean_replaceRef(v___x_356_, v_a_349_);
lean_dec(v___x_356_);
v___x_370_ = 0;
v___x_371_ = l_Lean_SourceInfo_fromRef(v_ref_369_, v___x_370_);
lean_dec(v_ref_369_);
v___x_372_ = ((lean_object*)(lp_Props2Theories_term___u25b3___00__closed__1));
v___x_373_ = ((lean_object*)(lp_Props2Theories_term___u25b3___00__closed__2));
lean_inc(v___x_371_);
v___x_374_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_374_, 0, v___x_371_);
lean_ctor_set(v___x_374_, 1, v___x_373_);
v___x_375_ = l_Lean_Syntax_node3(v___x_371_, v___x_372_, v___x_367_, v___x_374_, v___x_368_);
v___x_376_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_376_, 0, v___x_375_);
lean_ctor_set(v___x_376_, 1, v_a_350_);
return v___x_376_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______unexpand__symmetric__difference__1___boxed(lean_object* v_x_377_, lean_object* v_a_378_, lean_object* v_a_379_){
_start:
{
lean_object* v_res_380_; 
v_res_380_ = lp_Props2Theories___aux__Props2Theories__B__Set__B__Set__Algebra__Task______unexpand__symmetric__difference__1(v_x_377_, v_a_378_, v_a_379_);
lean_dec(v_a_378_);
return v_res_380_;
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
