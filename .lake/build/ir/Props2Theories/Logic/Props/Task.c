// Lean compiler output
// Module: Props2Theories.Logic.Props.Task
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
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Props2Theories_term___u2295____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 9, .m_data = "term_⊕__1"};
static const lean_object* lp_Props2Theories_term___u2295____1___closed__0 = (const lean_object*)&lp_Props2Theories_term___u2295____1___closed__0_value;
static const lean_ctor_object lp_Props2Theories_term___u2295____1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_term___u2295____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(34, 118, 220, 244, 228, 57, 176, 176)}};
static const lean_object* lp_Props2Theories_term___u2295____1___closed__1 = (const lean_object*)&lp_Props2Theories_term___u2295____1___closed__1_value;
static const lean_string_object lp_Props2Theories_term___u2295____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* lp_Props2Theories_term___u2295____1___closed__2 = (const lean_object*)&lp_Props2Theories_term___u2295____1___closed__2_value;
static const lean_ctor_object lp_Props2Theories_term___u2295____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_term___u2295____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* lp_Props2Theories_term___u2295____1___closed__3 = (const lean_object*)&lp_Props2Theories_term___u2295____1___closed__3_value;
static const lean_string_object lp_Props2Theories_term___u2295____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 3, .m_data = " ⊕ "};
static const lean_object* lp_Props2Theories_term___u2295____1___closed__4 = (const lean_object*)&lp_Props2Theories_term___u2295____1___closed__4_value;
static const lean_ctor_object lp_Props2Theories_term___u2295____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2295____1___closed__4_value)}};
static const lean_object* lp_Props2Theories_term___u2295____1___closed__5 = (const lean_object*)&lp_Props2Theories_term___u2295____1___closed__5_value;
static const lean_string_object lp_Props2Theories_term___u2295____1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* lp_Props2Theories_term___u2295____1___closed__6 = (const lean_object*)&lp_Props2Theories_term___u2295____1___closed__6_value;
static const lean_ctor_object lp_Props2Theories_term___u2295____1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_term___u2295____1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* lp_Props2Theories_term___u2295____1___closed__7 = (const lean_object*)&lp_Props2Theories_term___u2295____1___closed__7_value;
static const lean_ctor_object lp_Props2Theories_term___u2295____1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2295____1___closed__7_value),((lean_object*)(((size_t)(11) << 1) | 1))}};
static const lean_object* lp_Props2Theories_term___u2295____1___closed__8 = (const lean_object*)&lp_Props2Theories_term___u2295____1___closed__8_value;
static const lean_ctor_object lp_Props2Theories_term___u2295____1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2295____1___closed__3_value),((lean_object*)&lp_Props2Theories_term___u2295____1___closed__5_value),((lean_object*)&lp_Props2Theories_term___u2295____1___closed__8_value)}};
static const lean_object* lp_Props2Theories_term___u2295____1___closed__9 = (const lean_object*)&lp_Props2Theories_term___u2295____1___closed__9_value;
static const lean_ctor_object lp_Props2Theories_term___u2295____1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 4}, .m_objs = {((lean_object*)&lp_Props2Theories_term___u2295____1___closed__1_value),((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories_term___u2295____1___closed__9_value)}};
static const lean_object* lp_Props2Theories_term___u2295____1___closed__10 = (const lean_object*)&lp_Props2Theories_term___u2295____1___closed__10_value;
LEAN_EXPORT const lean_object* lp_Props2Theories_term___u2295____1 = (const lean_object*)&lp_Props2Theories_term___u2295____1___closed__10_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__0 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__0_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__1 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__1_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__2 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__2_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__3 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__3_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__4_value_aux_0),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__4_value_aux_1),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__4_value_aux_2),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__4 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__4_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "xor_pr"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__5 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__5_value;
static lean_once_cell_t lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__6;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(209, 219, 57, 110, 222, 163, 11, 43)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__7 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__7_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__7_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__8 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__8_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__8_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__9 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__9_value;
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__10 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__10_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__11 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__11_value;
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______unexpand__xor__pr__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______unexpand__xor__pr__1___closed__0 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______unexpand__xor__pr__1___closed__0_value;
static const lean_ctor_object lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______unexpand__xor__pr__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______unexpand__xor__pr__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______unexpand__xor__pr__1___closed__1 = (const lean_object*)&lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______unexpand__xor__pr__1___closed__1_value;
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______unexpand__xor__pr__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______unexpand__xor__pr__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* _init_lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__6(void){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_36_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__5));
v___x_37_ = l_String_toRawSubstring_x27(v___x_36_);
return v___x_37_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1(lean_object* v_x_49_, lean_object* v_a_50_, lean_object* v_a_51_){
_start:
{
lean_object* v___x_52_; uint8_t v___x_53_; 
v___x_52_ = ((lean_object*)(lp_Props2Theories_term___u2295____1___closed__1));
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
v___x_65_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__4));
v___x_66_ = lean_obj_once(&lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__6, &lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__6_once, _init_lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__6);
v___x_67_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__7));
lean_inc(v_currMacroScope_57_);
lean_inc(v_quotContext_56_);
v___x_68_ = l_Lean_addMacroScope(v_quotContext_56_, v___x_67_, v_currMacroScope_57_);
v___x_69_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__9));
lean_inc_n(v___x_64_, 2);
v___x_70_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_70_, 0, v___x_64_);
lean_ctor_set(v___x_70_, 1, v___x_66_);
lean_ctor_set(v___x_70_, 2, v___x_68_);
lean_ctor_set(v___x_70_, 3, v___x_69_);
v___x_71_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__11));
v___x_72_ = l_Lean_Syntax_node2(v___x_64_, v___x_71_, v___x_60_, v___x_62_);
v___x_73_ = l_Lean_Syntax_node2(v___x_64_, v___x_65_, v___x_70_, v___x_72_);
v___x_74_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_74_, 0, v___x_73_);
lean_ctor_set(v___x_74_, 1, v_a_51_);
return v___x_74_;
}
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___boxed(lean_object* v_x_75_, lean_object* v_a_76_, lean_object* v_a_77_){
_start:
{
lean_object* v_res_78_; 
v_res_78_ = lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1(v_x_75_, v_a_76_, v_a_77_);
lean_dec_ref(v_a_76_);
return v_res_78_;
}
}
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______unexpand__xor__pr__1(lean_object* v_x_82_, lean_object* v_a_83_, lean_object* v_a_84_){
_start:
{
lean_object* v___x_85_; uint8_t v___x_86_; 
v___x_85_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______macroRules__term___u2295____1__1___closed__4));
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
v___x_91_ = ((lean_object*)(lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______unexpand__xor__pr__1___closed__1));
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
v___x_106_ = ((lean_object*)(lp_Props2Theories_term___u2295____1___closed__1));
v___x_107_ = ((lean_object*)(lp_Props2Theories_term___u2295____1___closed__4));
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
LEAN_EXPORT lean_object* lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______unexpand__xor__pr__1___boxed(lean_object* v_x_111_, lean_object* v_a_112_, lean_object* v_a_113_){
_start:
{
lean_object* v_res_114_; 
v_res_114_ = lp_Props2Theories___aux__Props2Theories__Logic__Props__Task______unexpand__xor__pr__1(v_x_111_, v_a_112_, v_a_113_);
lean_dec(v_a_112_);
return v_res_114_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Props2Theories_Props2Theories_TacticNames(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Props2Theories_Props2Theories_Logic_Props_Task(uint8_t builtin) {
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
