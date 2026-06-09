/*
 * Copyright 2025 Budapest University of Technology and Economics
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

extern void abort(void);
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;

// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct __gnu_cxx____aligned_membuf_int_ { unsigned char _M_storage[4]; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Identity_int_ { unsigned char __field0; };
struct std___Rb_tree_const_iterator_int_ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* _M_t; };
struct std___Rb_tree_iterator_int_ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_key_compare_std__less_int__ { unsigned char __field0; };
struct std___Rb_tree_node_base { unsigned int _M_color; struct std___Rb_tree_node_base* _M_parent; struct std___Rb_tree_node_base* _M_left; struct std___Rb_tree_node_base* _M_right; };
struct std___Rb_tree_node_int_ { struct std___Rb_tree_node_base __field0; struct __gnu_cxx____aligned_membuf_int_ _M_storage; unsigned char __field2[4]; } __attribute__((packed));
struct std____new_allocator_std___Rb_tree_node_int__ { unsigned char __field0; };
struct std____pair_base_std___Rb_tree_const_iterator_int___bool_ { unsigned char __field0; };
struct std____pair_base_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__ { unsigned char __field0; };
struct std____pair_base_std___Rb_tree_iterator_int___bool_ { unsigned char __field0; };
struct std____pair_base_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ { unsigned char __field0; };
struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___ { unsigned char __field0; };
struct std__allocator_std___Rb_tree_node_int__ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__less_int_ { unsigned char __field0; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__pair_std___Rb_tree_const_iterator_int___bool_ { struct std___Rb_tree_const_iterator_int_ first; _Bool second; unsigned char __field2[7]; } __attribute__((packed));
struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__ { struct std___Rb_tree_const_iterator_int_ first; struct std___Rb_tree_const_iterator_int_ second; };
struct std__pair_std___Rb_tree_iterator_int___bool_ { struct std___Rb_tree_iterator_int_ first; _Bool second; unsigned char __field2[7]; } __attribute__((packed));
struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ { struct std___Rb_tree_iterator_int_ first; struct std___Rb_tree_iterator_int_ second; };
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ { struct std___Rb_tree_key_compare_std__less_int__ __field0; struct std___Rb_tree_header __field1; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__set_int__std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ _M_t; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[17] = "*ret.first == 30";
char _str_1[107] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/set/set-equal_range/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[18] = "*ret.second == 40";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[24] = "lower bound points to: ";
char _str_4[24] = "upper bound points to: ";
void std__set_int__std__less_int___std__allocator_int_____set(struct std__set_int__std__less_int___std__allocator_int__* p0);
void _ZNSt4pairISt23_Rb_tree_const_iteratorIiES1_EC2EvQaa26is_default_constructible_vIT_E26is_default_constructible_vIT0_E(struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__* p0);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_node_base* std___Rb_tree_node_base___M_base_ptr___const(struct std___Rb_tree_node_base* p0);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
_Bool std__less_int___operator___int_const___int_const___const(struct std__less_int_* p0, int* p1, int* p2);
int* std___Identity_int___operator___int_const___const(struct std___Identity_int_* p0, int* p1);
void* __gnu_cxx____aligned_membuf_int____M_addr___const(struct __gnu_cxx____aligned_membuf_int_* p0);
int* __gnu_cxx____aligned_membuf_int____M_ptr___const(struct __gnu_cxx____aligned_membuf_int_* p0);
int* std___Rb_tree_node_int____M_valptr___const(struct std___Rb_tree_node_int_* p0);
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(struct std___Rb_tree_node_int_* p0);
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(struct std___Rb_tree_node_base* p0);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(struct std___Rb_tree_node_base* p0);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(struct std___Rb_tree_node_base* p0);
_Bool std__operator__(struct std___Rb_tree_iterator_int_* p0, struct std___Rb_tree_iterator_int_* p1);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* p0, struct std___Rb_tree_node_base** p1, struct std___Rb_tree_node_base** p2);
extern struct std___Rb_tree_node_base* std___Rb_tree_decrement(struct std___Rb_tree_node_base* p0);
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator__(struct std___Rb_tree_iterator_int_* p0);
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* p0, struct std___Rb_tree_node_base** p1, struct std___Rb_tree_node_base** p2);
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
int* std___Identity_int___operator___int___const(struct std___Identity_int_* p0, int* p1);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* p0, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p1);
extern void std____throw_bad_array_new_length();
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
unsigned long std____new_allocator_std___Rb_tree_node_int______M_max_size___const(struct std____new_allocator_std___Rb_tree_node_int__* p0);
extern void std____throw_bad_alloc();
void* operator_new_2(unsigned long p0, unsigned long p1) { return malloc(p0); }
struct std___Rb_tree_node_int_* std____new_allocator_std___Rb_tree_node_int_____allocate(struct std____new_allocator_std___Rb_tree_node_int__* p0, unsigned long p1, void* p2);
struct std___Rb_tree_node_int_* std__allocator_std___Rb_tree_node_int_____allocate(struct std__allocator_std___Rb_tree_node_int__* p0, unsigned long p1);
struct std___Rb_tree_node_int_* std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(struct std__allocator_std___Rb_tree_node_int__* p0, unsigned long p1);
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
extern int __gxx_personality_v0();
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int_(struct std__allocator_std___Rb_tree_node_int__* p0, int* p1, int* p2);
void void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_int_* p1, int* p2);
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int__int____const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* p0, int* p1);
extern void std___Rb_tree_insert_and_rebalance(_Bool p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, struct std___Rb_tree_node_base* p3);
void std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(_Bool p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, struct std___Rb_tree_node_base* p3);
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, int* p3, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* p4);
void _ZNSt4pairISt17_Rb_tree_iteratorIiEbEC2IS1_bQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(struct std__pair_std___Rb_tree_iterator_int___bool_* p0, struct std___Rb_tree_iterator_int_* p1, _Bool* p2);
void std___Rb_tree_iterator_int____Rb_tree_iterator(struct std___Rb_tree_iterator_int_* p0, struct std___Rb_tree_node_base* p1);
struct std__pair_std___Rb_tree_iterator_int___bool_ std__pair_std___Rb_tree_iterator_int___bool__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
void _ZNSt4pairISt23_Rb_tree_const_iteratorIiEbEC2IRSt17_Rb_tree_iteratorIiERbQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS8_S9_EEEEOT_OT0_(struct std__pair_std___Rb_tree_const_iterator_int___bool_* p0, struct std___Rb_tree_iterator_int_* p1, _Bool* p2);
struct std__pair_std___Rb_tree_const_iterator_int___bool_ std__set_int__std__less_int___std__allocator_int_____insert(struct std__set_int__std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_lower_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, int* p3);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_upper_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, int* p3);
void _ZNSt4pairISt17_Rb_tree_iteratorIiES1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__* p0, struct std___Rb_tree_iterator_int_* p1, struct std___Rb_tree_iterator_int_* p2);
struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____equal_range(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
void _ZNSt4pairISt23_Rb_tree_const_iteratorIiES1_EC2ISt17_Rb_tree_iteratorIiES5_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS6_S7_EEEEOS_IT_T0_E(struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__* p0, struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__* p1);
struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__ std__set_int__std__less_int___std__allocator_int_____equal_range(struct std__set_int__std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_const_iterator_int_* p1);
struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__* _ZNSt4pairISt23_Rb_tree_const_iteratorIiES1_EaSEOS2_Qcl13_S_assignableIT_T0_EE(struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__* p0, struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__* p1);
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator_(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__flush(struct std__basic_ostream_char__std__char_traits_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
extern void std____throw_bad_cast();
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* p0);
extern void std__ctype_char____M_widen_init___const(struct std__ctype_char_* p0);
char std__ctype_char___widen_char__const(struct std__ctype_char_* p0, char p1);
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
void std__set_int__std__less_int___std__allocator_int______set(struct std__set_int__std__less_int___std__allocator_int__* p0);
int main();
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* p0);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* p0);
void std____new_allocator_std___Rb_tree_node_int_______new_allocator(struct std____new_allocator_std___Rb_tree_node_int__* p0);
void std__allocator_std___Rb_tree_node_int_____allocator(struct std__allocator_std___Rb_tree_node_int__* p0);
void std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(struct std___Rb_tree_key_compare_std__less_int__* p0);
void std___Rb_tree_header___M_reset(struct std___Rb_tree_header* p0);
void std___Rb_tree_header___Rb_tree_header(struct std___Rb_tree_header* p0);
void std__allocator_std___Rb_tree_node_int______allocator(struct std__allocator_std___Rb_tree_node_int__* p0);
struct std___Rb_tree_node_int_* std___Rb_tree_node_int____M_node_ptr(struct std___Rb_tree_node_int_* p0);
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(struct std___Rb_tree_node_int_* p0);
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(struct std___Rb_tree_node_int_* p0);
void void_std__destroy_at_int_(int* p0);
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(struct std__allocator_std___Rb_tree_node_int__* p0, int* p1);
struct std__allocator_std___Rb_tree_node_int__* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* p0);
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* p0);
int* std___Rb_tree_node_int____M_valptr(struct std___Rb_tree_node_int_* p0);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_int_* p1);
_Bool std____is_constant_evaluated();
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_std___Rb_tree_node_int_____deallocate(struct std____new_allocator_std___Rb_tree_node_int__* p0, struct std___Rb_tree_node_int_* p1, unsigned long p2);
void std__allocator_std___Rb_tree_node_int_____deallocate(struct std__allocator_std___Rb_tree_node_int__* p0, struct std___Rb_tree_node_int_* p1, unsigned long p2);
void std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(struct std__allocator_std___Rb_tree_node_int__* p0, struct std___Rb_tree_node_int_* p1, unsigned long p2);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_int_* p1);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_int_* p1);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_int_* p1);
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(struct std___Rb_tree_const_iterator_int_* p0);
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_iterator_int_* p1);

// function: _ZNSt3setIiSt4lessIiESaIiEEC2Ev
void std__set_int__std__less_int___std__allocator_int_____set(struct std__set_int__std__less_int___std__allocator_int__* v0) {
bb1:
  struct std__set_int__std__less_int___std__allocator_int__* this2;
  this2 = v0;
  struct std__set_int__std__less_int___std__allocator_int__* t3 = this2;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(&t3->_M_t);
  return;
}

// function: _ZNSt4pairISt23_Rb_tree_const_iteratorIiES1_EC2EvQaa26is_default_constructible_vIT_E26is_default_constructible_vIT0_E
void _ZNSt4pairISt23_Rb_tree_const_iteratorIiES1_EC2EvQaa26is_default_constructible_vIT_E26is_default_constructible_vIT0_E(struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__* v4) {
bb5:
  struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__* this6;
  this6 = v4;
  struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__* t7 = this6;
  struct std____pair_base_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__* base8 = (struct std____pair_base_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__*)((char *)t7 + 0);
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&t7->first);
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&t7->second);
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_beginEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v9) {
bb10:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this11;
  struct std___Rb_tree_node_base* __retval12;
  this11 = v9;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t13 = this11;
  struct std___Rb_tree_header* base14 = (struct std___Rb_tree_header*)((char *)&(t13->_M_impl) + 8);
  struct std___Rb_tree_node_base* t15 = base14->_M_header._M_parent;
  __retval12 = t15;
  struct std___Rb_tree_node_base* t16 = __retval12;
  return t16;
}

// function: _ZNKSt18_Rb_tree_node_base11_M_base_ptrEv
struct std___Rb_tree_node_base* std___Rb_tree_node_base___M_base_ptr___const(struct std___Rb_tree_node_base* v17) {
bb18:
  struct std___Rb_tree_node_base* this19;
  struct std___Rb_tree_node_base* __retval20;
  this19 = v17;
  struct std___Rb_tree_node_base* t21 = this19;
  __retval20 = t21;
  struct std___Rb_tree_node_base* t22 = __retval20;
  return t22;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_M_endEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v23) {
bb24:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this25;
  struct std___Rb_tree_node_base* __retval26;
  this25 = v23;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t27 = this25;
  struct std___Rb_tree_header* base28 = (struct std___Rb_tree_header*)((char *)&(t27->_M_impl) + 8);
  struct std___Rb_tree_node_base* r29 = std___Rb_tree_node_base___M_base_ptr___const(&base28->_M_header);
  __retval26 = r29;
  struct std___Rb_tree_node_base* t30 = __retval26;
  return t30;
}

// function: _ZNKSt4lessIiEclERKiS2_
_Bool std__less_int___operator___int_const___int_const___const(struct std__less_int_* v31, int* v32, int* v33) {
bb34:
  struct std__less_int_* this35;
  int* __x36;
  int* __y37;
  _Bool __retval38;
  this35 = v31;
  __x36 = v32;
  __y37 = v33;
  struct std__less_int_* t39 = this35;
  int* t40 = __x36;
  int t41 = *t40;
  int* t42 = __y37;
  int t43 = *t42;
  _Bool c44 = ((t41 < t43)) ? 1 : 0;
  __retval38 = c44;
  _Bool t45 = __retval38;
  return t45;
}

// function: _ZNKSt9_IdentityIiEclERKi
int* std___Identity_int___operator___int_const___const(struct std___Identity_int_* v46, int* v47) {
bb48:
  struct std___Identity_int_* this49;
  int* __x50;
  int* __retval51;
  this49 = v46;
  __x50 = v47;
  struct std___Identity_int_* t52 = this49;
  int* t53 = __x50;
  __retval51 = t53;
  int* t54 = __retval51;
  return t54;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr___const(struct __gnu_cxx____aligned_membuf_int_* v55) {
bb56:
  struct __gnu_cxx____aligned_membuf_int_* this57;
  void* __retval58;
  this57 = v55;
  struct __gnu_cxx____aligned_membuf_int_* t59 = this57;
  void* cast60 = (void*)&(t59->_M_storage);
  __retval58 = cast60;
  void* t61 = __retval58;
  return t61;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr___const(struct __gnu_cxx____aligned_membuf_int_* v62) {
bb63:
  struct __gnu_cxx____aligned_membuf_int_* this64;
  int* __retval65;
  this64 = v62;
  struct __gnu_cxx____aligned_membuf_int_* t66 = this64;
  void* r67 = __gnu_cxx____aligned_membuf_int____M_addr___const(t66);
  int* cast68 = (int*)r67;
  __retval65 = cast68;
  int* t69 = __retval65;
  return t69;
}

// function: _ZNKSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr___const(struct std___Rb_tree_node_int_* v70) {
bb71:
  struct std___Rb_tree_node_int_* this72;
  int* __retval73;
  this72 = v70;
  struct std___Rb_tree_node_int_* t74 = this72;
  int* r75 = __gnu_cxx____aligned_membuf_int____M_ptr___const(&t74->_M_storage);
  __retval73 = r75;
  int* t76 = __retval73;
  return t76;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_S_keyERKSt13_Rb_tree_nodeIiE
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(struct std___Rb_tree_node_int_* v77) {
bb78:
  struct std___Rb_tree_node_int_* __node79;
  int* __retval80;
  struct std___Identity_int_ ref_tmp081;
  __node79 = v77;
  struct std___Rb_tree_node_int_* t82 = __node79;
  int* r83 = std___Rb_tree_node_int____M_valptr___const(t82);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r84 = std___Identity_int___operator___int_const___const(&ref_tmp081, r83);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval80 = r84;
  int* t85 = __retval80;
  return t85;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_S_keyEPSt18_Rb_tree_node_base
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(struct std___Rb_tree_node_base* v86) {
bb87:
  struct std___Rb_tree_node_base* __x88;
  int* __retval89;
  __x88 = v86;
  struct std___Rb_tree_node_base* t90 = __x88;
  struct std___Rb_tree_node_int_* derived91 = (struct std___Rb_tree_node_int_*)((char *)t90 - 0);
  int* r92 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(derived91);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval89 = r92;
  int* t93 = __retval89;
  return t93;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(struct std___Rb_tree_node_base* v94) {
bb95:
  struct std___Rb_tree_node_base* __x96;
  struct std___Rb_tree_node_base* __retval97;
  __x96 = v94;
  struct std___Rb_tree_node_base* t98 = __x96;
  struct std___Rb_tree_node_base* t99 = t98->_M_left;
  __retval97 = t99;
  struct std___Rb_tree_node_base* t100 = __retval97;
  return t100;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(struct std___Rb_tree_node_base* v101) {
bb102:
  struct std___Rb_tree_node_base* __x103;
  struct std___Rb_tree_node_base* __retval104;
  __x103 = v101;
  struct std___Rb_tree_node_base* t105 = __x103;
  struct std___Rb_tree_node_base* t106 = t105->_M_right;
  __retval104 = t106;
  struct std___Rb_tree_node_base* t107 = __retval104;
  return t107;
}

// function: _ZSteqRKSt17_Rb_tree_iteratorIiES2_
_Bool std__operator__(struct std___Rb_tree_iterator_int_* v108, struct std___Rb_tree_iterator_int_* v109) {
bb110:
  struct std___Rb_tree_iterator_int_* __x111;
  struct std___Rb_tree_iterator_int_* __y112;
  _Bool __retval113;
  __x111 = v108;
  __y112 = v109;
  struct std___Rb_tree_iterator_int_* t114 = __x111;
  struct std___Rb_tree_node_base* t115 = t114->_M_node;
  struct std___Rb_tree_iterator_int_* t116 = __y112;
  struct std___Rb_tree_node_base* t117 = t116->_M_node;
  _Bool c118 = ((t115 == t117)) ? 1 : 0;
  __retval113 = c118;
  _Bool t119 = __retval113;
  return t119;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5beginEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v120) {
bb121:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this122;
  struct std___Rb_tree_iterator_int_ __retval123;
  this122 = v120;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t124 = this122;
  struct std___Rb_tree_header* base125 = (struct std___Rb_tree_header*)((char *)&(t124->_M_impl) + 8);
  struct std___Rb_tree_node_base* t126 = base125->_M_header._M_left;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval123, t126);
  struct std___Rb_tree_iterator_int_ t127 = __retval123;
  return t127;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v128, struct std___Rb_tree_node_base** v129, struct std___Rb_tree_node_base** v130) {
bb131:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this132;
  struct std___Rb_tree_node_base** __x133;
  struct std___Rb_tree_node_base** __y134;
  this132 = v128;
  __x133 = v129;
  __y134 = v130;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t135 = this132;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base136 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t135 + 0);
  struct std___Rb_tree_node_base** t137 = __x133;
  struct std___Rb_tree_node_base* t138 = *t137;
  t135->first = t138;
  struct std___Rb_tree_node_base** t139 = __y134;
  struct std___Rb_tree_node_base* t140 = *t139;
  t135->second = t140;
  return;
}

// function: _ZNSt17_Rb_tree_iteratorIiEmmEv
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator__(struct std___Rb_tree_iterator_int_* v141) {
bb142:
  struct std___Rb_tree_iterator_int_* this143;
  struct std___Rb_tree_iterator_int_* __retval144;
  this143 = v141;
  struct std___Rb_tree_iterator_int_* t145 = this143;
  struct std___Rb_tree_node_base* t146 = t145->_M_node;
  struct std___Rb_tree_node_base* r147 = std___Rb_tree_decrement(t146);
  t145->_M_node = r147;
  __retval144 = t145;
  struct std___Rb_tree_iterator_int_* t148 = __retval144;
  return t148;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v149, struct std___Rb_tree_node_base** v150, struct std___Rb_tree_node_base** v151) {
bb152:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this153;
  struct std___Rb_tree_node_base** __x154;
  struct std___Rb_tree_node_base** __y155;
  this153 = v149;
  __x154 = v150;
  __y155 = v151;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t156 = this153;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base157 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t156 + 0);
  struct std___Rb_tree_node_base** t158 = __x154;
  struct std___Rb_tree_node_base* t159 = *t158;
  t156->first = t159;
  struct std___Rb_tree_node_base** t160 = __y155;
  struct std___Rb_tree_node_base* t161 = *t160;
  t156->second = t161;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE24_M_get_insert_unique_posERKi
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v162, int* v163) {
bb164:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this165;
  int* __k166;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval167;
  struct std___Rb_tree_node_base* __x168;
  struct std___Rb_tree_node_base* __y169;
  _Bool __comp170;
  struct std___Rb_tree_iterator_int_ __j171;
  struct std___Rb_tree_node_base* ref_tmp1172;
  this165 = v162;
  __k166 = v163;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t173 = this165;
  struct std___Rb_tree_node_base* r174 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t173);
  __x168 = r174;
  struct std___Rb_tree_node_base* r175 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t173);
  __y169 = r175;
  _Bool c176 = 1;
  __comp170 = c176;
    while (1) {
      struct std___Rb_tree_node_base* t177 = __x168;
      _Bool cast178 = (_Bool)t177;
      if (!cast178) break;
        struct std___Rb_tree_node_base* t179 = __x168;
        __y169 = t179;
        struct std___Rb_tree_key_compare_std__less_int__* base180 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t173->_M_impl) + 0);
        struct std__less_int_* cast181 = (struct std__less_int_*)base180;
        int* t182 = __k166;
        struct std___Rb_tree_node_base* t183 = __x168;
        int* r184 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t183);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r185 = std__less_int___operator___int_const___int_const___const(cast181, t182, r184);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        __comp170 = r185;
        _Bool t186 = __comp170;
        struct std___Rb_tree_node_base* ternary187;
        if (t186) {
          struct std___Rb_tree_node_base* t188 = __x168;
          struct std___Rb_tree_node_base* r189 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t188);
          ternary187 = (struct std___Rb_tree_node_base*)r189;
        } else {
          struct std___Rb_tree_node_base* t190 = __x168;
          struct std___Rb_tree_node_base* r191 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t190);
          ternary187 = (struct std___Rb_tree_node_base*)r191;
        }
        __x168 = ternary187;
    }
  struct std___Rb_tree_node_base* t192 = __y169;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__j171, t192);
    _Bool t193 = __comp170;
    if (t193) {
        struct std___Rb_tree_iterator_int_ ref_tmp0194;
        struct std___Rb_tree_iterator_int_ r195 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(t173);
        ref_tmp0194 = r195;
        _Bool r196 = std__operator__(&__j171, &ref_tmp0194);
        if (r196) {
          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval167, &__x168, &__y169);
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t197 = __retval167;
          return t197;
        } else {
          struct std___Rb_tree_iterator_int_* r198 = std___Rb_tree_iterator_int___operator__(&__j171);
        }
    }
    struct std___Rb_tree_key_compare_std__less_int__* base199 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t173->_M_impl) + 0);
    struct std__less_int_* cast200 = (struct std__less_int_*)base199;
    struct std___Rb_tree_node_base* t201 = __j171._M_node;
    int* r202 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t201);
    if (__cir_exc_active) {
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    int* t203 = __k166;
    _Bool r204 = std__less_int___operator___int_const___int_const___const(cast200, r202, t203);
    if (__cir_exc_active) {
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    if (r204) {
      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval167, &__x168, &__y169);
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t205 = __retval167;
      return t205;
    }
  struct std___Rb_tree_node_base* c206 = ((void*)0);
  ref_tmp1172 = c206;
  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval167, &__j171._M_node, &ref_tmp1172);
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t207 = __retval167;
  return t207;
}

// function: _ZNKSt9_IdentityIiEclERi
int* std___Identity_int___operator___int___const(struct std___Identity_int_* v208, int* v209) {
bb210:
  struct std___Identity_int_* this211;
  int* __x212;
  int* __retval213;
  this211 = v208;
  __x212 = v209;
  struct std___Identity_int_* t214 = this211;
  int* t215 = __x212;
  __retval213 = t215;
  int* t216 = __retval213;
  return t216;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeC2ERS5_
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v217, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v218) {
bb219:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this220;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* __t221;
  this220 = v217;
  __t221 = v218;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t222 = this220;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t223 = __t221;
  t222->_M_t = t223;
  return;
}

// function: _ZNKSt15__new_allocatorISt13_Rb_tree_nodeIiEE11_M_max_sizeEv
unsigned long std____new_allocator_std___Rb_tree_node_int______M_max_size___const(struct std____new_allocator_std___Rb_tree_node_int__* v224) {
bb225:
  struct std____new_allocator_std___Rb_tree_node_int__* this226;
  unsigned long __retval227;
  this226 = v224;
  struct std____new_allocator_std___Rb_tree_node_int__* t228 = this226;
  unsigned long c229 = 9223372036854775807;
  unsigned long c230 = 40;
  unsigned long b231 = c229 / c230;
  __retval227 = b231;
  unsigned long t232 = __retval227;
  return t232;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE8allocateEmPKv
struct std___Rb_tree_node_int_* std____new_allocator_std___Rb_tree_node_int_____allocate(struct std____new_allocator_std___Rb_tree_node_int__* v233, unsigned long v234, void* v235) {
bb236:
  struct std____new_allocator_std___Rb_tree_node_int__* this237;
  unsigned long __n238;
  void* unnamed239;
  struct std___Rb_tree_node_int_* __retval240;
  this237 = v233;
  __n238 = v234;
  unnamed239 = v235;
  struct std____new_allocator_std___Rb_tree_node_int__* t241 = this237;
    unsigned long t242 = __n238;
    unsigned long r243 = std____new_allocator_std___Rb_tree_node_int______M_max_size___const(t241);
    _Bool c244 = ((t242 > r243)) ? 1 : 0;
    if (c244) {
        unsigned long t245 = __n238;
        unsigned long c246 = -1;
        unsigned long c247 = 40;
        unsigned long b248 = c246 / c247;
        _Bool c249 = ((t245 > b248)) ? 1 : 0;
        if (c249) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
            return __cir_eh_ret;
          }
        }
      std____throw_bad_alloc();
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
    }
    unsigned long c250 = 8;
    unsigned long c251 = 16;
    _Bool c252 = ((c250 > c251)) ? 1 : 0;
    if (c252) {
      unsigned long __al253;
      unsigned long c254 = 8;
      __al253 = c254;
      unsigned long t255 = __n238;
      unsigned long c256 = 40;
      unsigned long b257 = t255 * c256;
      unsigned long t258 = __al253;
      void* r259 = operator_new_2(b257, t258);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast260 = (struct std___Rb_tree_node_int_*)r259;
      __retval240 = cast260;
      struct std___Rb_tree_node_int_* t261 = __retval240;
      return t261;
    }
  unsigned long t262 = __n238;
  unsigned long c263 = 40;
  unsigned long b264 = t262 * c263;
  void* r265 = operator_new(b264);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* cast266 = (struct std___Rb_tree_node_int_*)r265;
  __retval240 = cast266;
  struct std___Rb_tree_node_int_* t267 = __retval240;
  return t267;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE8allocateEm
struct std___Rb_tree_node_int_* std__allocator_std___Rb_tree_node_int_____allocate(struct std__allocator_std___Rb_tree_node_int__* v268, unsigned long v269) {
bb270:
  struct std__allocator_std___Rb_tree_node_int__* this271;
  unsigned long __n272;
  struct std___Rb_tree_node_int_* __retval273;
  this271 = v268;
  __n272 = v269;
  struct std__allocator_std___Rb_tree_node_int__* t274 = this271;
    _Bool r275 = std____is_constant_evaluated();
    if (r275) {
        unsigned long t276 = __n272;
        unsigned long c277 = 40;
        unsigned long ovr278;
        _Bool ovf279 = __builtin_mul_overflow(t276, c277, &ovr278);
        __n272 = ovr278;
        if (ovf279) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t280 = __n272;
      void* r281 = operator_new(t280);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast282 = (struct std___Rb_tree_node_int_*)r281;
      __retval273 = cast282;
      struct std___Rb_tree_node_int_* t283 = __retval273;
      return t283;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base284 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t274 + 0);
  unsigned long t285 = __n272;
  void* c286 = ((void*)0);
  struct std___Rb_tree_node_int_* r287 = std____new_allocator_std___Rb_tree_node_int_____allocate(base284, t285, c286);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval273 = r287;
  struct std___Rb_tree_node_int_* t288 = __retval273;
  return t288;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE8allocateERS2_m
struct std___Rb_tree_node_int_* std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(struct std__allocator_std___Rb_tree_node_int__* v289, unsigned long v290) {
bb291:
  struct std__allocator_std___Rb_tree_node_int__* __a292;
  unsigned long __n293;
  struct std___Rb_tree_node_int_* __retval294;
  __a292 = v289;
  __n293 = v290;
  struct std__allocator_std___Rb_tree_node_int__* t295 = __a292;
  unsigned long t296 = __n293;
  struct std___Rb_tree_node_int_* r297 = std__allocator_std___Rb_tree_node_int_____allocate(t295, t296);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval294 = r297;
  struct std___Rb_tree_node_int_* t298 = __retval294;
  return t298;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_get_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v299) {
bb300:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this301;
  struct std___Rb_tree_node_int_* __retval302;
  this301 = v299;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t303 = this301;
  struct std__allocator_std___Rb_tree_node_int__* r304 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t303);
  unsigned long c305 = 1;
  struct std___Rb_tree_node_int_* r306 = std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(r304, c305);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval302 = r306;
  struct std___Rb_tree_node_int_* t307 = __retval302;
  return t307;
}

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v308, int* v309) {
bb310:
  int* __location311;
  int* __args312;
  int* __retval313;
  void* __loc314;
  __location311 = v308;
  __args312 = v309;
  int* t315 = __location311;
  void* cast316 = (void*)t315;
  __loc314 = cast316;
    void* t317 = __loc314;
    int* cast318 = (int*)t317;
    int* t319 = __args312;
    int t320 = *t319;
    *cast318 = t320;
    __retval313 = cast318;
    int* t321 = __retval313;
    return t321;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE9constructIiJiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int_(struct std__allocator_std___Rb_tree_node_int__* v322, int* v323, int* v324) {
bb325:
  struct std__allocator_std___Rb_tree_node_int__* __a326;
  int* __p327;
  int* __args328;
  __a326 = v322;
  __p327 = v323;
  __args328 = v324;
  int* t329 = __p327;
  int* t330 = __args328;
  int* r331 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t329, t330);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE17_M_construct_nodeIJiEEEvPSt13_Rb_tree_nodeIiEDpOT_
void void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v332, struct std___Rb_tree_node_int_* v333, int* v334) {
bb335:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this336;
  struct std___Rb_tree_node_int_* __node337;
  int* __args338;
  this336 = v332;
  __node337 = v333;
  __args338 = v334;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t339 = this336;
      struct std__allocator_std___Rb_tree_node_int__* r341 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t339);
      struct std___Rb_tree_node_int_* t342 = __node337;
      int* r343 = std___Rb_tree_node_int____M_valptr(t342);
      if (__cir_exc_active) {
        goto cir_try_dispatch340;
      }
      int* t344 = __args338;
      void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int_(r341, r343, t344);
    cir_try_dispatch340: ;
    if (__cir_exc_active) {
    {
      int ca_tok345 = 0;
      void* ca_exn346 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Rb_tree_node_int_* t347 = __node337;
        struct std___Rb_tree_node_int_* t348 = __node337;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t339, t348);
        __cir_exc_active = 1;
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
        return;
        __builtin_unreachable();
    }
    }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE14_M_create_nodeIJiEEEPSt13_Rb_tree_nodeIiEDpOT_
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v349, int* v350) {
bb351:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this352;
  int* __args353;
  struct std___Rb_tree_node_int_* __retval354;
  struct std___Rb_tree_node_int_* __tmp355;
  this352 = v349;
  __args353 = v350;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t356 = this352;
  struct std___Rb_tree_node_int_* r357 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(t356);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __tmp355 = r357;
  struct std___Rb_tree_node_int_* t358 = __tmp355;
  int* t359 = __args353;
  void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int_(t356, t358, t359);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* t360 = __tmp355;
  __retval354 = t360;
  struct std___Rb_tree_node_int_* t361 = __retval354;
  return t361;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeclIiEEPSt13_Rb_tree_nodeIiEOT_
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int__int____const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v362, int* v363) {
bb364:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this365;
  int* __arg366;
  struct std___Rb_tree_node_int_* __retval367;
  this365 = v362;
  __arg366 = v363;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t368 = this365;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t369 = t368->_M_t;
  int* t370 = __arg366;
  struct std___Rb_tree_node_int_* r371 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int_(t369, t370);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval367 = r371;
  struct std___Rb_tree_node_int_* t372 = __retval367;
  return t372;
}

// function: _ZNSt9__rb_tree12_Node_traitsIiPiE23_S_insert_and_rebalanceEbPSt18_Rb_tree_node_baseS4_RS3_
void std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(_Bool v373, struct std___Rb_tree_node_base* v374, struct std___Rb_tree_node_base* v375, struct std___Rb_tree_node_base* v376) {
bb377:
  _Bool __insert_left378;
  struct std___Rb_tree_node_base* __x379;
  struct std___Rb_tree_node_base* __p380;
  struct std___Rb_tree_node_base* __header381;
  __insert_left378 = v373;
  __x379 = v374;
  __p380 = v375;
  __header381 = v376;
  _Bool t382 = __insert_left378;
  struct std___Rb_tree_node_base* t383 = __x379;
  struct std___Rb_tree_node_base* t384 = __p380;
  struct std___Rb_tree_node_base* t385 = __header381;
  std___Rb_tree_insert_and_rebalance(t382, t383, t384, t385);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE10_M_insert_IiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiEPSt18_Rb_tree_node_baseSB_OT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v386, struct std___Rb_tree_node_base* v387, struct std___Rb_tree_node_base* v388, int* v389, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v390) {
bb391:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this392;
  struct std___Rb_tree_node_base* __x393;
  struct std___Rb_tree_node_base* __p394;
  int* __v395;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen396;
  struct std___Rb_tree_iterator_int_ __retval397;
  _Bool __insert_left398;
  struct std___Rb_tree_node_base* __z399;
  this392 = v386;
  __x393 = v387;
  __p394 = v388;
  __v395 = v389;
  __node_gen396 = v390;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t400 = this392;
  struct std___Rb_tree_node_base* t401 = __x393;
  _Bool cast402 = (_Bool)t401;
  _Bool ternary403;
  if (cast402) {
    _Bool c404 = 1;
    ternary403 = (_Bool)c404;
  } else {
    struct std___Rb_tree_node_base* t405 = __p394;
    struct std___Rb_tree_node_base* r406 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t400);
    _Bool c407 = ((t405 == r406)) ? 1 : 0;
    ternary403 = (_Bool)c407;
  }
  _Bool ternary408;
  if (ternary403) {
    _Bool c409 = 1;
    ternary408 = (_Bool)c409;
  } else {
    struct std___Identity_int_ ref_tmp0410;
    struct std___Rb_tree_key_compare_std__less_int__* base411 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t400->_M_impl) + 0);
    struct std__less_int_* cast412 = (struct std__less_int_*)base411;
    int* t413 = __v395;
    int* r414 = std___Identity_int___operator___int___const(&ref_tmp0410, t413);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    struct std___Rb_tree_node_base* t415 = __p394;
    int* r416 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t415);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r417 = std__less_int___operator___int_const___int_const___const(cast412, r414, r416);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    ternary408 = (_Bool)r417;
  }
  __insert_left398 = ternary408;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t418 = __node_gen396;
  int* t419 = __v395;
  struct std___Rb_tree_node_int_* r420 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int__int____const(t418, t419);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* base421 = (struct std___Rb_tree_node_base*)((char *)r420 + 0);
  struct std___Rb_tree_node_base* r422 = std___Rb_tree_node_base___M_base_ptr___const(base421);
  __z399 = r422;
  _Bool t423 = __insert_left398;
  struct std___Rb_tree_node_base* t424 = __z399;
  struct std___Rb_tree_node_base* t425 = __p394;
  struct std___Rb_tree_header* base426 = (struct std___Rb_tree_header*)((char *)&(t400->_M_impl) + 8);
  std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(t423, t424, t425, &base426->_M_header);
  struct std___Rb_tree_header* base427 = (struct std___Rb_tree_header*)((char *)&(t400->_M_impl) + 8);
  unsigned long t428 = base427->_M_node_count;
  unsigned long u429 = t428 + 1;
  base427->_M_node_count = u429;
  struct std___Rb_tree_node_base* t430 = __z399;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval397, t430);
  struct std___Rb_tree_iterator_int_ t431 = __retval397;
  return t431;
}

// function: _ZNSt4pairISt17_Rb_tree_iteratorIiEbEC2IS1_bQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_
void _ZNSt4pairISt17_Rb_tree_iteratorIiEbEC2IS1_bQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(struct std__pair_std___Rb_tree_iterator_int___bool_* v432, struct std___Rb_tree_iterator_int_* v433, _Bool* v434) {
bb435:
  struct std__pair_std___Rb_tree_iterator_int___bool_* this436;
  struct std___Rb_tree_iterator_int_* __x437;
  _Bool* __y438;
  this436 = v432;
  __x437 = v433;
  __y438 = v434;
  struct std__pair_std___Rb_tree_iterator_int___bool_* t439 = this436;
  struct std____pair_base_std___Rb_tree_iterator_int___bool_* base440 = (struct std____pair_base_std___Rb_tree_iterator_int___bool_*)((char *)t439 + 0);
  struct std___Rb_tree_iterator_int_* t441 = __x437;
  t439->first = *t441; // copy
  _Bool* t442 = __y438;
  _Bool t443 = *t442;
  t439->second = t443;
  return;
}

// function: _ZNSt17_Rb_tree_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_iterator_int____Rb_tree_iterator(struct std___Rb_tree_iterator_int_* v444, struct std___Rb_tree_node_base* v445) {
bb446:
  struct std___Rb_tree_iterator_int_* this447;
  struct std___Rb_tree_node_base* __x448;
  this447 = v444;
  __x448 = v445;
  struct std___Rb_tree_iterator_int_* t449 = this447;
  struct std___Rb_tree_node_base* t450 = __x448;
  t449->_M_node = t450;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE16_M_insert_uniqueIiEESt4pairISt17_Rb_tree_iteratorIiEbEOT_
struct std__pair_std___Rb_tree_iterator_int___bool_ std__pair_std___Rb_tree_iterator_int___bool__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v451, int* v452) {
bb453:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this454;
  int* __v455;
  struct std__pair_std___Rb_tree_iterator_int___bool_ __retval456;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __res457;
  struct std___Identity_int_ ref_tmp0458;
  struct std___Rb_tree_iterator_int_ ref_tmp3459;
  _Bool ref_tmp4460;
  this454 = v451;
  __v455 = v452;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t461 = this454;
  int* t462 = __v455;
  int* r463 = std___Identity_int___operator___int___const(&ref_tmp0458, t462);
  if (__cir_exc_active) {
    struct std__pair_std___Rb_tree_iterator_int___bool_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r464 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(t461, r463);
  if (__cir_exc_active) {
    struct std__pair_std___Rb_tree_iterator_int___bool_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __res457 = r464;
    struct std___Rb_tree_node_base* t465 = __res457.second;
    _Bool cast466 = (_Bool)t465;
    if (cast466) {
      struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node __an467;
      struct std___Rb_tree_iterator_int_ ref_tmp1468;
      _Bool ref_tmp2469;
      std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(&__an467, t461);
      if (__cir_exc_active) {
        struct std__pair_std___Rb_tree_iterator_int___bool_ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_base* t470 = __res457.first;
      struct std___Rb_tree_node_base* t471 = __res457.second;
      int* t472 = __v455;
      struct std___Rb_tree_iterator_int_ r473 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t461, t470, t471, t472, &__an467);
      if (__cir_exc_active) {
        struct std__pair_std___Rb_tree_iterator_int___bool_ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      ref_tmp1468 = r473;
      _Bool c474 = 1;
      ref_tmp2469 = c474;
      _ZNSt4pairISt17_Rb_tree_iteratorIiEbEC2IS1_bQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(&__retval456, &ref_tmp1468, &ref_tmp2469);
      struct std__pair_std___Rb_tree_iterator_int___bool_ t475 = __retval456;
      return t475;
    }
  struct std___Rb_tree_node_base* t476 = __res457.first;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&ref_tmp3459, t476);
  _Bool c477 = 0;
  ref_tmp4460 = c477;
  _ZNSt4pairISt17_Rb_tree_iteratorIiEbEC2IS1_bQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(&__retval456, &ref_tmp3459, &ref_tmp4460);
  struct std__pair_std___Rb_tree_iterator_int___bool_ t478 = __retval456;
  return t478;
}

// function: _ZNSt4pairISt23_Rb_tree_const_iteratorIiEbEC2IRSt17_Rb_tree_iteratorIiERbQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS8_S9_EEEEOT_OT0_
void _ZNSt4pairISt23_Rb_tree_const_iteratorIiEbEC2IRSt17_Rb_tree_iteratorIiERbQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS8_S9_EEEEOT_OT0_(struct std__pair_std___Rb_tree_const_iterator_int___bool_* v479, struct std___Rb_tree_iterator_int_* v480, _Bool* v481) {
bb482:
  struct std__pair_std___Rb_tree_const_iterator_int___bool_* this483;
  struct std___Rb_tree_iterator_int_* __x484;
  _Bool* __y485;
  this483 = v479;
  __x484 = v480;
  __y485 = v481;
  struct std__pair_std___Rb_tree_const_iterator_int___bool_* t486 = this483;
  struct std____pair_base_std___Rb_tree_const_iterator_int___bool_* base487 = (struct std____pair_base_std___Rb_tree_const_iterator_int___bool_*)((char *)t486 + 0);
  struct std___Rb_tree_iterator_int_* t488 = __x484;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&t486->first, t488);
  _Bool* t489 = __y485;
  _Bool t490 = *t489;
  t486->second = t490;
  return;
}

// function: _ZNSt3setIiSt4lessIiESaIiEE6insertEOi
struct std__pair_std___Rb_tree_const_iterator_int___bool_ std__set_int__std__less_int___std__allocator_int_____insert(struct std__set_int__std__less_int___std__allocator_int__* v491, int* v492) {
bb493:
  struct std__set_int__std__less_int___std__allocator_int__* this494;
  int* __x495;
  struct std__pair_std___Rb_tree_const_iterator_int___bool_ __retval496;
  struct std__pair_std___Rb_tree_iterator_int___bool_ __p497;
  this494 = v491;
  __x495 = v492;
  struct std__set_int__std__less_int___std__allocator_int__* t498 = this494;
  int* t499 = __x495;
  struct std__pair_std___Rb_tree_iterator_int___bool_ r500 = std__pair_std___Rb_tree_iterator_int___bool__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique_int_(&t498->_M_t, t499);
  if (__cir_exc_active) {
    struct std__pair_std___Rb_tree_const_iterator_int___bool_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __p497 = r500;
  _ZNSt4pairISt23_Rb_tree_const_iteratorIiEbEC2IRSt17_Rb_tree_iteratorIiERbQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS8_S9_EEEEOT_OT0_(&__retval496, &__p497.first, &__p497.second);
  struct std__pair_std___Rb_tree_const_iterator_int___bool_ t501 = __retval496;
  return t501;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE14_M_lower_boundEPSt18_Rb_tree_node_baseS7_RKi
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_lower_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v502, struct std___Rb_tree_node_base* v503, struct std___Rb_tree_node_base* v504, int* v505) {
bb506:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this507;
  struct std___Rb_tree_node_base* __x508;
  struct std___Rb_tree_node_base* __y509;
  int* __k510;
  struct std___Rb_tree_node_base* __retval511;
  this507 = v502;
  __x508 = v503;
  __y509 = v504;
  __k510 = v505;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t512 = this507;
    while (1) {
      struct std___Rb_tree_node_base* t513 = __x508;
      _Bool cast514 = (_Bool)t513;
      if (!cast514) break;
        struct std___Rb_tree_key_compare_std__less_int__* base515 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t512->_M_impl) + 0);
        struct std__less_int_* cast516 = (struct std__less_int_*)base515;
        struct std___Rb_tree_node_base* t517 = __x508;
        int* r518 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t517);
        if (__cir_exc_active) {
          struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
          return __cir_eh_ret;
        }
        int* t519 = __k510;
        _Bool r520 = std__less_int___operator___int_const___int_const___const(cast516, r518, t519);
        if (__cir_exc_active) {
          struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
          return __cir_eh_ret;
        }
        _Bool u521 = !r520;
        if (u521) {
          struct std___Rb_tree_node_base* t522 = __x508;
          __y509 = t522;
          struct std___Rb_tree_node_base* t523 = __x508;
          struct std___Rb_tree_node_base* r524 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t523);
          __x508 = r524;
        } else {
          struct std___Rb_tree_node_base* t525 = __x508;
          struct std___Rb_tree_node_base* r526 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t525);
          __x508 = r526;
        }
    }
  struct std___Rb_tree_node_base* t527 = __y509;
  __retval511 = t527;
  struct std___Rb_tree_node_base* t528 = __retval511;
  return t528;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE14_M_upper_boundEPSt18_Rb_tree_node_baseS7_RKi
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_upper_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v529, struct std___Rb_tree_node_base* v530, struct std___Rb_tree_node_base* v531, int* v532) {
bb533:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this534;
  struct std___Rb_tree_node_base* __x535;
  struct std___Rb_tree_node_base* __y536;
  int* __k537;
  struct std___Rb_tree_node_base* __retval538;
  this534 = v529;
  __x535 = v530;
  __y536 = v531;
  __k537 = v532;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t539 = this534;
    while (1) {
      struct std___Rb_tree_node_base* t540 = __x535;
      _Bool cast541 = (_Bool)t540;
      if (!cast541) break;
        struct std___Rb_tree_key_compare_std__less_int__* base542 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t539->_M_impl) + 0);
        struct std__less_int_* cast543 = (struct std__less_int_*)base542;
        int* t544 = __k537;
        struct std___Rb_tree_node_base* t545 = __x535;
        int* r546 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t545);
        if (__cir_exc_active) {
          struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
          return __cir_eh_ret;
        }
        _Bool r547 = std__less_int___operator___int_const___int_const___const(cast543, t544, r546);
        if (__cir_exc_active) {
          struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
          return __cir_eh_ret;
        }
        if (r547) {
          struct std___Rb_tree_node_base* t548 = __x535;
          __y536 = t548;
          struct std___Rb_tree_node_base* t549 = __x535;
          struct std___Rb_tree_node_base* r550 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t549);
          __x535 = r550;
        } else {
          struct std___Rb_tree_node_base* t551 = __x535;
          struct std___Rb_tree_node_base* r552 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t551);
          __x535 = r552;
        }
    }
  struct std___Rb_tree_node_base* t553 = __y536;
  __retval538 = t553;
  struct std___Rb_tree_node_base* t554 = __retval538;
  return t554;
}

// function: _ZNSt4pairISt17_Rb_tree_iteratorIiES1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_
void _ZNSt4pairISt17_Rb_tree_iteratorIiES1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__* v555, struct std___Rb_tree_iterator_int_* v556, struct std___Rb_tree_iterator_int_* v557) {
bb558:
  struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__* this559;
  struct std___Rb_tree_iterator_int_* __x560;
  struct std___Rb_tree_iterator_int_* __y561;
  this559 = v555;
  __x560 = v556;
  __y561 = v557;
  struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__* t562 = this559;
  struct std____pair_base_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__* base563 = (struct std____pair_base_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__*)((char *)t562 + 0);
  struct std___Rb_tree_iterator_int_* t564 = __x560;
  t562->first = *t564; // copy
  struct std___Rb_tree_iterator_int_* t565 = __y561;
  t562->second = *t565; // copy
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11equal_rangeERKi
struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____equal_range(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v566, int* v567) {
bb568:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this569;
  int* __k570;
  struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ __retval571;
  struct std___Rb_tree_node_base* __x572;
  struct std___Rb_tree_node_base* __y573;
  struct std___Rb_tree_iterator_int_ ref_tmp2574;
  struct std___Rb_tree_iterator_int_ ref_tmp3575;
  this569 = v566;
  __k570 = v567;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t576 = this569;
  struct std___Rb_tree_node_base* r577 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t576);
  __x572 = r577;
  struct std___Rb_tree_node_base* r578 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t576);
  __y573 = r578;
    while (1) {
      struct std___Rb_tree_node_base* t579 = __x572;
      _Bool cast580 = (_Bool)t579;
      if (!cast580) break;
          struct std___Rb_tree_key_compare_std__less_int__* base581 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t576->_M_impl) + 0);
          struct std__less_int_* cast582 = (struct std__less_int_*)base581;
          struct std___Rb_tree_node_base* t583 = __x572;
          int* r584 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t583);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          int* t585 = __k570;
          _Bool r586 = std__less_int___operator___int_const___int_const___const(cast582, r584, t585);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          if (r586) {
            struct std___Rb_tree_node_base* t587 = __x572;
            struct std___Rb_tree_node_base* r588 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t587);
            __x572 = r588;
          } else {
              struct std___Rb_tree_key_compare_std__less_int__* base589 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t576->_M_impl) + 0);
              struct std__less_int_* cast590 = (struct std__less_int_*)base589;
              int* t591 = __k570;
              struct std___Rb_tree_node_base* t592 = __x572;
              int* r593 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t592);
              if (__cir_exc_active) {
                struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ __cir_eh_ret = {0};
                return __cir_eh_ret;
              }
              _Bool r594 = std__less_int___operator___int_const___int_const___const(cast590, t591, r593);
              if (__cir_exc_active) {
                struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ __cir_eh_ret = {0};
                return __cir_eh_ret;
              }
              if (r594) {
                struct std___Rb_tree_node_base* t595 = __x572;
                __y573 = t595;
                struct std___Rb_tree_node_base* t596 = __x572;
                struct std___Rb_tree_node_base* r597 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t596);
                __x572 = r597;
              } else {
                struct std___Rb_tree_node_base* __xu598;
                struct std___Rb_tree_node_base* __yu599;
                struct std___Rb_tree_iterator_int_ ref_tmp0600;
                struct std___Rb_tree_iterator_int_ ref_tmp1601;
                struct std___Rb_tree_node_base* t602 = __x572;
                __xu598 = t602;
                struct std___Rb_tree_node_base* t603 = __y573;
                __yu599 = t603;
                struct std___Rb_tree_node_base* t604 = __x572;
                __y573 = t604;
                struct std___Rb_tree_node_base* t605 = __x572;
                struct std___Rb_tree_node_base* r606 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t605);
                __x572 = r606;
                struct std___Rb_tree_node_base* t607 = __xu598;
                struct std___Rb_tree_node_base* r608 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t607);
                __xu598 = r608;
                struct std___Rb_tree_node_base* t609 = __x572;
                struct std___Rb_tree_node_base* t610 = __y573;
                int* t611 = __k570;
                struct std___Rb_tree_node_base* r612 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_lower_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(t576, t609, t610, t611);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                std___Rb_tree_iterator_int____Rb_tree_iterator(&ref_tmp0600, r612);
                struct std___Rb_tree_node_base* t613 = __xu598;
                struct std___Rb_tree_node_base* t614 = __yu599;
                int* t615 = __k570;
                struct std___Rb_tree_node_base* r616 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_upper_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(t576, t613, t614, t615);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                std___Rb_tree_iterator_int____Rb_tree_iterator(&ref_tmp1601, r616);
                _ZNSt4pairISt17_Rb_tree_iteratorIiES1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(&__retval571, &ref_tmp0600, &ref_tmp1601);
                struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ t617 = __retval571;
                struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ ret_val618 = t617;
                return ret_val618;
              }
          }
    }
  struct std___Rb_tree_node_base* t619 = __y573;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&ref_tmp2574, t619);
  struct std___Rb_tree_node_base* t620 = __y573;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&ref_tmp3575, t620);
  _ZNSt4pairISt17_Rb_tree_iteratorIiES1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(&__retval571, &ref_tmp2574, &ref_tmp3575);
  struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ t621 = __retval571;
  return t621;
}

// function: _ZNSt4pairISt23_Rb_tree_const_iteratorIiES1_EC2ISt17_Rb_tree_iteratorIiES5_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS6_S7_EEEEOS_IT_T0_E
void _ZNSt4pairISt23_Rb_tree_const_iteratorIiES1_EC2ISt17_Rb_tree_iteratorIiES5_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS6_S7_EEEEOS_IT_T0_E(struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__* v622, struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__* v623) {
bb624:
  struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__* this625;
  struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__* __p626;
  this625 = v622;
  __p626 = v623;
  struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__* t627 = this625;
  struct std____pair_base_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__* base628 = (struct std____pair_base_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__*)((char *)t627 + 0);
  struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__* t629 = __p626;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&t627->first, &t629->first);
  struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__* t630 = __p626;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&t627->second, &t630->second);
  return;
}

// function: _ZNSt3setIiSt4lessIiESaIiEE11equal_rangeERKi
struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__ std__set_int__std__less_int___std__allocator_int_____equal_range(struct std__set_int__std__less_int___std__allocator_int__* v631, int* v632) {
bb633:
  struct std__set_int__std__less_int___std__allocator_int__* this634;
  int* __x635;
  struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__ __retval636;
  struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ ref_tmp0637;
  this634 = v631;
  __x635 = v632;
  struct std__set_int__std__less_int___std__allocator_int__* t638 = this634;
  int* t639 = __x635;
  struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ r640 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____equal_range(&t638->_M_t, t639);
  if (__cir_exc_active) {
    struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  ref_tmp0637 = r640;
  _ZNSt4pairISt23_Rb_tree_const_iteratorIiES1_EC2ISt17_Rb_tree_iteratorIiES5_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS6_S7_EEEEOS_IT_T0_E(&__retval636, &ref_tmp0637);
  struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__ t641 = __retval636;
  return t641;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEaSEOS0_
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* v642, struct std___Rb_tree_const_iterator_int_* v643) {
bb644:
  struct std___Rb_tree_const_iterator_int_* this645;
  struct std___Rb_tree_const_iterator_int_* unnamed646;
  struct std___Rb_tree_const_iterator_int_* __retval647;
  this645 = v642;
  unnamed646 = v643;
  struct std___Rb_tree_const_iterator_int_* t648 = this645;
  struct std___Rb_tree_const_iterator_int_* t649 = unnamed646;
  struct std___Rb_tree_node_base* t650 = t649->_M_node;
  t648->_M_node = t650;
  __retval647 = t648;
  struct std___Rb_tree_const_iterator_int_* t651 = __retval647;
  return t651;
}

// function: _ZNSt4pairISt23_Rb_tree_const_iteratorIiES1_EaSEOS2_Qcl13_S_assignableIT_T0_EE
struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__* _ZNSt4pairISt23_Rb_tree_const_iteratorIiES1_EaSEOS2_Qcl13_S_assignableIT_T0_EE(struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__* v652, struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__* v653) {
bb654:
  struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__* this655;
  struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__* __p656;
  struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__* __retval657;
  this655 = v652;
  __p656 = v653;
  struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__* t658 = this655;
  struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__* t659 = __p656;
  struct std___Rb_tree_const_iterator_int_* r660 = std___Rb_tree_const_iterator_int___operator_(&t658->first, &t659->first);
  struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__* t661 = __p656;
  struct std___Rb_tree_const_iterator_int_* r662 = std___Rb_tree_const_iterator_int___operator_(&t658->second, &t661->second);
  __retval657 = t658;
  struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__* t663 = __retval657;
  return t663;
}

// function: _ZNKSt23_Rb_tree_const_iteratorIiEdeEv
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* v664) {
bb665:
  struct std___Rb_tree_const_iterator_int_* this666;
  int* __retval667;
  this666 = v664;
  struct std___Rb_tree_const_iterator_int_* t668 = this666;
  struct std___Rb_tree_node_base* t669 = t668->_M_node;
  struct std___Rb_tree_node_int_* derived670 = ((t669) ? (struct std___Rb_tree_node_int_*)((char *)t669 - 0) : (struct std___Rb_tree_node_int_*)0);
  int* r671 = std___Rb_tree_node_int____M_valptr___const(derived670);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval667 = r671;
  int* t672 = __retval667;
  return t672;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v673, int v674) {
bb675:
  int __a676;
  int __b677;
  int __retval678;
  __a676 = v673;
  __b677 = v674;
  int t679 = __a676;
  int t680 = __b677;
  int b681 = t679 | t680;
  __retval678 = b681;
  int t682 = __retval678;
  return t682;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v683) {
bb684:
  struct std__basic_ios_char__std__char_traits_char__* this685;
  int __retval686;
  this685 = v683;
  struct std__basic_ios_char__std__char_traits_char__* t687 = this685;
  struct std__ios_base* base688 = (struct std__ios_base*)((char *)t687 + 0);
  int t689 = base688->_M_streambuf_state;
  __retval686 = t689;
  int t690 = __retval686;
  return t690;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v691, int v692) {
bb693:
  struct std__basic_ios_char__std__char_traits_char__* this694;
  int __state695;
  this694 = v691;
  __state695 = v692;
  struct std__basic_ios_char__std__char_traits_char__* t696 = this694;
  int r697 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t696);
  if (__cir_exc_active) {
    return;
  }
  int t698 = __state695;
  int r699 = std__operator_(r697, t698);
  std__basic_ios_char__std__char_traits_char_____clear(t696, r699);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v700, char* v701) {
bb702:
  char* __c1703;
  char* __c2704;
  _Bool __retval705;
  __c1703 = v700;
  __c2704 = v701;
  char* t706 = __c1703;
  char t707 = *t706;
  int cast708 = (int)t707;
  char* t709 = __c2704;
  char t710 = *t709;
  int cast711 = (int)t710;
  _Bool c712 = ((cast708 == cast711)) ? 1 : 0;
  __retval705 = c712;
  _Bool t713 = __retval705;
  return t713;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v714) {
bb715:
  char* __p716;
  unsigned long __retval717;
  unsigned long __i718;
  __p716 = v714;
  unsigned long c719 = 0;
  __i718 = c719;
    char ref_tmp0720;
    while (1) {
      unsigned long t721 = __i718;
      char* t722 = __p716;
      char* ptr723 = &(t722)[t721];
      char c724 = 0;
      ref_tmp0720 = c724;
      _Bool r725 = __gnu_cxx__char_traits_char___eq(ptr723, &ref_tmp0720);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u726 = !r725;
      if (!u726) break;
      unsigned long t727 = __i718;
      unsigned long u728 = t727 + 1;
      __i718 = u728;
    }
  unsigned long t729 = __i718;
  __retval717 = t729;
  unsigned long t730 = __retval717;
  return t730;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v731) {
bb732:
  char* __s733;
  unsigned long __retval734;
  __s733 = v731;
    _Bool r735 = std____is_constant_evaluated();
    if (r735) {
      char* t736 = __s733;
      unsigned long r737 = __gnu_cxx__char_traits_char___length(t736);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval734 = r737;
      unsigned long t738 = __retval734;
      return t738;
    }
  char* t739 = __s733;
  unsigned long r740 = strlen(t739);
  __retval734 = r740;
  unsigned long t741 = __retval734;
  return t741;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v742, char* v743) {
bb744:
  struct std__basic_ostream_char__std__char_traits_char__* __out745;
  char* __s746;
  struct std__basic_ostream_char__std__char_traits_char__* __retval747;
  __out745 = v742;
  __s746 = v743;
    char* t748 = __s746;
    _Bool cast749 = (_Bool)t748;
    _Bool u750 = !cast749;
    if (u750) {
      struct std__basic_ostream_char__std__char_traits_char__* t751 = __out745;
      void** v752 = (void**)t751;
      void* v753 = *((void**)v752);
      unsigned char* cast754 = (unsigned char*)v753;
      long c755 = -24;
      unsigned char* ptr756 = &(cast754)[c755];
      long* cast757 = (long*)ptr756;
      long t758 = *cast757;
      unsigned char* cast759 = (unsigned char*)t751;
      unsigned char* ptr760 = &(cast759)[t758];
      struct std__basic_ostream_char__std__char_traits_char__* cast761 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr760;
      struct std__basic_ios_char__std__char_traits_char__* cast762 = (struct std__basic_ios_char__std__char_traits_char__*)cast761;
      int t763 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast762, t763);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t764 = __out745;
      char* t765 = __s746;
      char* t766 = __s746;
      unsigned long r767 = std__char_traits_char___length(t766);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast768 = (long)r767;
      struct std__basic_ostream_char__std__char_traits_char__* r769 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t764, t765, cast768);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t770 = __out745;
  __retval747 = t770;
  struct std__basic_ostream_char__std__char_traits_char__* t771 = __retval747;
  return t771;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v772, void* v773) {
bb774:
  struct std__basic_ostream_char__std__char_traits_char__* this775;
  void* __pf776;
  struct std__basic_ostream_char__std__char_traits_char__* __retval777;
  this775 = v772;
  __pf776 = v773;
  struct std__basic_ostream_char__std__char_traits_char__* t778 = this775;
  void* t779 = __pf776;
  struct std__basic_ostream_char__std__char_traits_char__* r780 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t779)(t778);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval777 = r780;
  struct std__basic_ostream_char__std__char_traits_char__* t781 = __retval777;
  return t781;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v782) {
bb783:
  struct std__basic_ostream_char__std__char_traits_char__* __os784;
  struct std__basic_ostream_char__std__char_traits_char__* __retval785;
  __os784 = v782;
  struct std__basic_ostream_char__std__char_traits_char__* t786 = __os784;
  struct std__basic_ostream_char__std__char_traits_char__* r787 = std__ostream__flush(t786);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval785 = r787;
  struct std__basic_ostream_char__std__char_traits_char__* t788 = __retval785;
  return t788;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v789) {
bb790:
  struct std__ctype_char_* __f791;
  struct std__ctype_char_* __retval792;
  __f791 = v789;
    struct std__ctype_char_* t793 = __f791;
    _Bool cast794 = (_Bool)t793;
    _Bool u795 = !cast794;
    if (u795) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t796 = __f791;
  __retval792 = t796;
  struct std__ctype_char_* t797 = __retval792;
  return t797;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v798, char v799) {
bb800:
  struct std__ctype_char_* this801;
  char __c802;
  char __retval803;
  this801 = v798;
  __c802 = v799;
  struct std__ctype_char_* t804 = this801;
    char t805 = t804->_M_widen_ok;
    _Bool cast806 = (_Bool)t805;
    if (cast806) {
      char t807 = __c802;
      unsigned char cast808 = (unsigned char)t807;
      unsigned long cast809 = (unsigned long)cast808;
      char t810 = t804->_M_widen[cast809];
      __retval803 = t810;
      char t811 = __retval803;
      return t811;
    }
  std__ctype_char____M_widen_init___const(t804);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t812 = __c802;
  void** v813 = (void**)t804;
  void* v814 = *((void**)v813);
  char vcall817 = (char)__VERIFIER_virtual_call_char_char(t804, 6, t812);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval803 = vcall817;
  char t818 = __retval803;
  return t818;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v819, char v820) {
bb821:
  struct std__basic_ios_char__std__char_traits_char__* this822;
  char __c823;
  char __retval824;
  this822 = v819;
  __c823 = v820;
  struct std__basic_ios_char__std__char_traits_char__* t825 = this822;
  struct std__ctype_char_* t826 = t825->_M_ctype;
  struct std__ctype_char_* r827 = std__ctype_char__const__std____check_facet_std__ctype_char___(t826);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t828 = __c823;
  char r829 = std__ctype_char___widen_char__const(r827, t828);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval824 = r829;
  char t830 = __retval824;
  return t830;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v831) {
bb832:
  struct std__basic_ostream_char__std__char_traits_char__* __os833;
  struct std__basic_ostream_char__std__char_traits_char__* __retval834;
  __os833 = v831;
  struct std__basic_ostream_char__std__char_traits_char__* t835 = __os833;
  struct std__basic_ostream_char__std__char_traits_char__* t836 = __os833;
  void** v837 = (void**)t836;
  void* v838 = *((void**)v837);
  unsigned char* cast839 = (unsigned char*)v838;
  long c840 = -24;
  unsigned char* ptr841 = &(cast839)[c840];
  long* cast842 = (long*)ptr841;
  long t843 = *cast842;
  unsigned char* cast844 = (unsigned char*)t836;
  unsigned char* ptr845 = &(cast844)[t843];
  struct std__basic_ostream_char__std__char_traits_char__* cast846 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr845;
  struct std__basic_ios_char__std__char_traits_char__* cast847 = (struct std__basic_ios_char__std__char_traits_char__*)cast846;
  char c848 = 10;
  char r849 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast847, c848);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r850 = std__ostream__put(t835, r849);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r851 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r850);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval834 = r851;
  struct std__basic_ostream_char__std__char_traits_char__* t852 = __retval834;
  return t852;
}

// function: _ZNSt3setIiSt4lessIiESaIiEED2Ev
void std__set_int__std__less_int___std__allocator_int______set(struct std__set_int__std__less_int___std__allocator_int__* v853) {
bb854:
  struct std__set_int__std__less_int___std__allocator_int__* this855;
  this855 = v853;
  struct std__set_int__std__less_int___std__allocator_int__* t856 = this855;
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(&t856->_M_t);
  }
  return;
}

// function: main
int main() {
bb857:
  int __retval858;
  struct std__set_int__std__less_int___std__allocator_int__ myset859;
  struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__ ret860;
  struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__ ref_tmp1861;
  int ref_tmp2862;
  int c863 = 0;
  __retval858 = c863;
  std__set_int__std__less_int___std__allocator_int_____set(&myset859);
    _ZNSt4pairISt23_Rb_tree_const_iteratorIiES1_EC2EvQaa26is_default_constructible_vIT_E26is_default_constructible_vIT0_E(&ret860);
      int i864;
      int ref_tmp0865;
      struct std__pair_std___Rb_tree_const_iterator_int___bool_ agg_tmp0866;
      int c867 = 1;
      i864 = c867;
      while (1) {
        int t869 = i864;
        int c870 = 5;
        _Bool c871 = ((t869 <= c870)) ? 1 : 0;
        if (!c871) break;
        int t872 = i864;
        int c873 = 10;
        int b874 = t872 * c873;
        ref_tmp0865 = b874;
        struct std__pair_std___Rb_tree_const_iterator_int___bool_ r875 = std__set_int__std__less_int___std__allocator_int_____insert(&myset859, &ref_tmp0865);
        if (__cir_exc_active) {
          {
            std__set_int__std__less_int___std__allocator_int______set(&myset859);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        agg_tmp0866 = r875;
      for_step868: ;
        int t876 = i864;
        int u877 = t876 + 1;
        i864 = u877;
      }
    int c878 = 30;
    ref_tmp2862 = c878;
    struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__ r879 = std__set_int__std__less_int___std__allocator_int_____equal_range(&myset859, &ref_tmp2862);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset859);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    ref_tmp1861 = r879;
    struct std__pair_std___Rb_tree_const_iterator_int___std___Rb_tree_const_iterator_int__* r880 = _ZNSt4pairISt23_Rb_tree_const_iteratorIiES1_EaSEOS2_Qcl13_S_assignableIT_T0_EE(&ret860, &ref_tmp1861);
    int* r881 = std___Rb_tree_const_iterator_int___operator____const(&ret860.first);
    int t882 = *r881;
    int c883 = 30;
    _Bool c884 = ((t882 == c883)) ? 1 : 0;
    if (c884) {
    } else {
      char* cast885 = (char*)&(_str);
      char* c886 = _str_1;
      unsigned int c887 = 20;
      char* cast888 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast885, c886, c887, cast888);
    }
    int* r889 = std___Rb_tree_const_iterator_int___operator____const(&ret860.second);
    int t890 = *r889;
    int c891 = 40;
    _Bool c892 = ((t890 == c891)) ? 1 : 0;
    if (c892) {
    } else {
      char* cast893 = (char*)&(_str_2);
      char* c894 = _str_1;
      unsigned int c895 = 21;
      char* cast896 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast893, c894, c895, cast896);
    }
    char* cast897 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r898 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast897);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset859);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int* r899 = std___Rb_tree_const_iterator_int___operator____const(&ret860.first);
    int t900 = *r899;
    struct std__basic_ostream_char__std__char_traits_char__* r901 = std__ostream__operator__(r898, t900);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset859);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r902 = std__ostream__operator___std__ostream_____(r901, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset859);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    char* cast903 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* r904 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast903);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset859);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int* r905 = std___Rb_tree_const_iterator_int___operator____const(&ret860.second);
    int t906 = *r905;
    struct std__basic_ostream_char__std__char_traits_char__* r907 = std__ostream__operator__(r904, t906);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset859);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r908 = std__ostream__operator___std__ostream_____(r907, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset859);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c909 = 0;
    __retval858 = c909;
    int t910 = __retval858;
    int ret_val911 = t910;
    {
      std__set_int__std__less_int___std__allocator_int______set(&myset859);
    }
    return ret_val911;
  int t912 = __retval858;
  return t912;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v913) {
bb914:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this915;
  this915 = v913;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t916 = this915;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(&t916->_M_impl);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v917) {
bb918:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this919;
  this919 = v917;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t920 = this919;
    struct std___Rb_tree_node_int_* r921 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(t920);
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t920, r921);
    if (__cir_exc_active) {
      {
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t920->_M_impl);
      }
      return;
    }
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t920->_M_impl);
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v922) {
bb923:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this924;
  this924 = v922;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t925 = this924;
  struct std__allocator_std___Rb_tree_node_int__* base926 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t925 + 0);
  std__allocator_std___Rb_tree_node_int_____allocator(base926);
    struct std___Rb_tree_key_compare_std__less_int__* base927 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)t925 + 0);
    std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(base927);
    struct std___Rb_tree_header* base928 = (struct std___Rb_tree_header*)((char *)t925 + 8);
    std___Rb_tree_header___Rb_tree_header(base928);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v929) {
bb930:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this931;
  this931 = v929;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t932 = this931;
  {
    struct std__allocator_std___Rb_tree_node_int__* base933 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t932 + 0);
    std__allocator_std___Rb_tree_node_int______allocator(base933);
  }
  return;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEEC2Ev
void std____new_allocator_std___Rb_tree_node_int_______new_allocator(struct std____new_allocator_std___Rb_tree_node_int__* v934) {
bb935:
  struct std____new_allocator_std___Rb_tree_node_int__* this936;
  this936 = v934;
  struct std____new_allocator_std___Rb_tree_node_int__* t937 = this936;
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEEC2Ev
void std__allocator_std___Rb_tree_node_int_____allocator(struct std__allocator_std___Rb_tree_node_int__* v938) {
bb939:
  struct std__allocator_std___Rb_tree_node_int__* this940;
  this940 = v938;
  struct std__allocator_std___Rb_tree_node_int__* t941 = this940;
  struct std____new_allocator_std___Rb_tree_node_int__* base942 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t941 + 0);
  std____new_allocator_std___Rb_tree_node_int_______new_allocator(base942);
  return;
}

// function: _ZNSt20_Rb_tree_key_compareISt4lessIiEEC2Ev
void std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(struct std___Rb_tree_key_compare_std__less_int__* v943) {
bb944:
  struct std___Rb_tree_key_compare_std__less_int__* this945;
  this945 = v943;
  return;
}

// function: _ZNSt15_Rb_tree_header8_M_resetEv
void std___Rb_tree_header___M_reset(struct std___Rb_tree_header* v946) {
bb947:
  struct std___Rb_tree_header* this948;
  this948 = v946;
  struct std___Rb_tree_header* t949 = this948;
  struct std___Rb_tree_node_base* c950 = ((void*)0);
  t949->_M_header._M_parent = c950;
  t949->_M_header._M_left = &t949->_M_header;
  t949->_M_header._M_right = &t949->_M_header;
  unsigned long c951 = 0;
  t949->_M_node_count = c951;
  return;
}

// function: _ZNSt15_Rb_tree_headerC2Ev
void std___Rb_tree_header___Rb_tree_header(struct std___Rb_tree_header* v952) {
bb953:
  struct std___Rb_tree_header* this954;
  this954 = v952;
  struct std___Rb_tree_header* t955 = this954;
  unsigned int c956 = 0;
  t955->_M_header._M_color = c956;
  std___Rb_tree_header___M_reset(t955);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEED2Ev
void std__allocator_std___Rb_tree_node_int______allocator(struct std__allocator_std___Rb_tree_node_int__* v957) {
bb958:
  struct std__allocator_std___Rb_tree_node_int__* this959;
  this959 = v957;
  struct std__allocator_std___Rb_tree_node_int__* t960 = this959;
  return;
}

// function: _ZNSt13_Rb_tree_nodeIiE11_M_node_ptrEv
struct std___Rb_tree_node_int_* std___Rb_tree_node_int____M_node_ptr(struct std___Rb_tree_node_int_* v961) {
bb962:
  struct std___Rb_tree_node_int_* this963;
  struct std___Rb_tree_node_int_* __retval964;
  this963 = v961;
  struct std___Rb_tree_node_int_* t965 = this963;
  __retval964 = t965;
  struct std___Rb_tree_node_int_* t966 = __retval964;
  return t966;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(struct std___Rb_tree_node_int_* v967) {
bb968:
  struct std___Rb_tree_node_int_* __x969;
  struct std___Rb_tree_node_int_* __retval970;
  __x969 = v967;
  struct std___Rb_tree_node_int_* t971 = __x969;
  struct std___Rb_tree_node_base* base972 = (struct std___Rb_tree_node_base*)((char *)t971 + 0);
  struct std___Rb_tree_node_base* t973 = base972->_M_right;
  _Bool cast974 = (_Bool)t973;
  struct std___Rb_tree_node_int_* ternary975;
  if (cast974) {
    struct std___Rb_tree_node_int_* t976 = __x969;
    struct std___Rb_tree_node_base* base977 = (struct std___Rb_tree_node_base*)((char *)t976 + 0);
    struct std___Rb_tree_node_base* t978 = base977->_M_right;
    struct std___Rb_tree_node_int_* derived979 = (struct std___Rb_tree_node_int_*)((char *)t978 - 0);
    struct std___Rb_tree_node_int_* r980 = std___Rb_tree_node_int____M_node_ptr(derived979);
    ternary975 = (struct std___Rb_tree_node_int_*)r980;
  } else {
    struct std___Rb_tree_node_int_* c981 = ((void*)0);
    ternary975 = (struct std___Rb_tree_node_int_*)c981;
  }
  __retval970 = ternary975;
  struct std___Rb_tree_node_int_* t982 = __retval970;
  return t982;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(struct std___Rb_tree_node_int_* v983) {
bb984:
  struct std___Rb_tree_node_int_* __x985;
  struct std___Rb_tree_node_int_* __retval986;
  __x985 = v983;
  struct std___Rb_tree_node_int_* t987 = __x985;
  struct std___Rb_tree_node_base* base988 = (struct std___Rb_tree_node_base*)((char *)t987 + 0);
  struct std___Rb_tree_node_base* t989 = base988->_M_left;
  _Bool cast990 = (_Bool)t989;
  struct std___Rb_tree_node_int_* ternary991;
  if (cast990) {
    struct std___Rb_tree_node_int_* t992 = __x985;
    struct std___Rb_tree_node_base* base993 = (struct std___Rb_tree_node_base*)((char *)t992 + 0);
    struct std___Rb_tree_node_base* t994 = base993->_M_left;
    struct std___Rb_tree_node_int_* derived995 = (struct std___Rb_tree_node_int_*)((char *)t994 - 0);
    struct std___Rb_tree_node_int_* r996 = std___Rb_tree_node_int____M_node_ptr(derived995);
    ternary991 = (struct std___Rb_tree_node_int_*)r996;
  } else {
    struct std___Rb_tree_node_int_* c997 = ((void*)0);
    ternary991 = (struct std___Rb_tree_node_int_*)c997;
  }
  __retval986 = ternary991;
  struct std___Rb_tree_node_int_* t998 = __retval986;
  return t998;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v999) {
bb1000:
  int* __location1001;
  __location1001 = v999;
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(struct std__allocator_std___Rb_tree_node_int__* v1002, int* v1003) {
bb1004:
  struct std__allocator_std___Rb_tree_node_int__* __a1005;
  int* __p1006;
  __a1005 = v1002;
  __p1006 = v1003;
  int* t1007 = __p1006;
  void_std__destroy_at_int_(t1007);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___Rb_tree_node_int__* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1008) {
bb1009:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1010;
  struct std__allocator_std___Rb_tree_node_int__* __retval1011;
  this1010 = v1008;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1012 = this1010;
  struct std__allocator_std___Rb_tree_node_int__* base1013 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)&(t1012->_M_impl) + 0);
  __retval1011 = base1013;
  struct std__allocator_std___Rb_tree_node_int__* t1014 = __retval1011;
  return t1014;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v1015) {
bb1016:
  struct __gnu_cxx____aligned_membuf_int_* this1017;
  void* __retval1018;
  this1017 = v1015;
  struct __gnu_cxx____aligned_membuf_int_* t1019 = this1017;
  void* cast1020 = (void*)&(t1019->_M_storage);
  __retval1018 = cast1020;
  void* t1021 = __retval1018;
  return t1021;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v1022) {
bb1023:
  struct __gnu_cxx____aligned_membuf_int_* this1024;
  int* __retval1025;
  this1024 = v1022;
  struct __gnu_cxx____aligned_membuf_int_* t1026 = this1024;
  void* r1027 = __gnu_cxx____aligned_membuf_int____M_addr(t1026);
  int* cast1028 = (int*)r1027;
  __retval1025 = cast1028;
  int* t1029 = __retval1025;
  return t1029;
}

// function: _ZNSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr(struct std___Rb_tree_node_int_* v1030) {
bb1031:
  struct std___Rb_tree_node_int_* this1032;
  int* __retval1033;
  this1032 = v1030;
  struct std___Rb_tree_node_int_* t1034 = this1032;
  int* r1035 = __gnu_cxx____aligned_membuf_int____M_ptr(&t1034->_M_storage);
  __retval1033 = r1035;
  int* t1036 = __retval1033;
  return t1036;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_destroy_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1037, struct std___Rb_tree_node_int_* v1038) {
bb1039:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1040;
  struct std___Rb_tree_node_int_* __p1041;
  this1040 = v1037;
  __p1041 = v1038;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1042 = this1040;
  struct std__allocator_std___Rb_tree_node_int__* r1043 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t1042);
  struct std___Rb_tree_node_int_* t1044 = __p1041;
  int* r1045 = std___Rb_tree_node_int____M_valptr(t1044);
  if (__cir_exc_active) {
    return;
  }
  void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(r1043, r1045);
  struct std___Rb_tree_node_int_* t1046 = __p1041;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1047:
  _Bool __retval1048;
    _Bool c1049 = 0;
    __retval1048 = c1049;
    _Bool t1050 = __retval1048;
    return t1050;
  abort();
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___Rb_tree_node_int_____deallocate(struct std____new_allocator_std___Rb_tree_node_int__* v1051, struct std___Rb_tree_node_int_* v1052, unsigned long v1053) {
bb1054:
  struct std____new_allocator_std___Rb_tree_node_int__* this1055;
  struct std___Rb_tree_node_int_* __p1056;
  unsigned long __n1057;
  this1055 = v1051;
  __p1056 = v1052;
  __n1057 = v1053;
  struct std____new_allocator_std___Rb_tree_node_int__* t1058 = this1055;
    unsigned long c1059 = 8;
    unsigned long c1060 = 16;
    _Bool c1061 = ((c1059 > c1060)) ? 1 : 0;
    if (c1061) {
      struct std___Rb_tree_node_int_* t1062 = __p1056;
      void* cast1063 = (void*)t1062;
      unsigned long t1064 = __n1057;
      unsigned long c1065 = 40;
      unsigned long b1066 = t1064 * c1065;
      unsigned long c1067 = 8;
      operator_delete_3(cast1063, b1066, c1067);
      return;
    }
  struct std___Rb_tree_node_int_* t1068 = __p1056;
  void* cast1069 = (void*)t1068;
  unsigned long t1070 = __n1057;
  unsigned long c1071 = 40;
  unsigned long b1072 = t1070 * c1071;
  operator_delete_2(cast1069, b1072);
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE10deallocateEPS0_m
void std__allocator_std___Rb_tree_node_int_____deallocate(struct std__allocator_std___Rb_tree_node_int__* v1073, struct std___Rb_tree_node_int_* v1074, unsigned long v1075) {
bb1076:
  struct std__allocator_std___Rb_tree_node_int__* this1077;
  struct std___Rb_tree_node_int_* __p1078;
  unsigned long __n1079;
  this1077 = v1073;
  __p1078 = v1074;
  __n1079 = v1075;
  struct std__allocator_std___Rb_tree_node_int__* t1080 = this1077;
    _Bool r1081 = std____is_constant_evaluated();
    if (r1081) {
      struct std___Rb_tree_node_int_* t1082 = __p1078;
      void* cast1083 = (void*)t1082;
      operator_delete(cast1083);
      return;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base1084 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t1080 + 0);
  struct std___Rb_tree_node_int_* t1085 = __p1078;
  unsigned long t1086 = __n1079;
  std____new_allocator_std___Rb_tree_node_int_____deallocate(base1084, t1085, t1086);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(struct std__allocator_std___Rb_tree_node_int__* v1087, struct std___Rb_tree_node_int_* v1088, unsigned long v1089) {
bb1090:
  struct std__allocator_std___Rb_tree_node_int__* __a1091;
  struct std___Rb_tree_node_int_* __p1092;
  unsigned long __n1093;
  __a1091 = v1087;
  __p1092 = v1088;
  __n1093 = v1089;
  struct std__allocator_std___Rb_tree_node_int__* t1094 = __a1091;
  struct std___Rb_tree_node_int_* t1095 = __p1092;
  unsigned long t1096 = __n1093;
  std__allocator_std___Rb_tree_node_int_____deallocate(t1094, t1095, t1096);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_put_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1097, struct std___Rb_tree_node_int_* v1098) {
bb1099:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1100;
  struct std___Rb_tree_node_int_* __p1101;
  this1100 = v1097;
  __p1101 = v1098;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1102 = this1100;
  struct std__allocator_std___Rb_tree_node_int__* r1103 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t1102);
  struct std___Rb_tree_node_int_* t1104 = __p1101;
  unsigned long c1105 = 1;
  std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(r1103, t1104, c1105);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_drop_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1106, struct std___Rb_tree_node_int_* v1107) {
bb1108:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1109;
  struct std___Rb_tree_node_int_* __p1110;
  this1109 = v1106;
  __p1110 = v1107;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1111 = this1109;
  struct std___Rb_tree_node_int_* t1112 = __p1110;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(t1111, t1112);
  struct std___Rb_tree_node_int_* t1113 = __p1110;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t1111, t1113);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1114, struct std___Rb_tree_node_int_* v1115) {
bb1116:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1117;
  struct std___Rb_tree_node_int_* __x1118;
  this1117 = v1114;
  __x1118 = v1115;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1119 = this1117;
    while (1) {
      struct std___Rb_tree_node_int_* t1120 = __x1118;
      _Bool cast1121 = (_Bool)t1120;
      if (!cast1121) break;
        struct std___Rb_tree_node_int_* __y1122;
        struct std___Rb_tree_node_int_* t1123 = __x1118;
        struct std___Rb_tree_node_int_* r1124 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(t1123);
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t1119, r1124);
        if (__cir_exc_active) {
          return;
        }
        struct std___Rb_tree_node_int_* t1125 = __x1118;
        struct std___Rb_tree_node_int_* r1126 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(t1125);
        if (__cir_exc_active) {
          return;
        }
        __y1122 = r1126;
        struct std___Rb_tree_node_int_* t1127 = __x1118;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(t1119, t1127);
        struct std___Rb_tree_node_int_* t1128 = __y1122;
        __x1118 = t1128;
    }
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_M_begin_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1129) {
bb1130:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1131;
  struct std___Rb_tree_node_int_* __retval1132;
  struct std___Rb_tree_node_base* __begin1133;
  this1131 = v1129;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1134 = this1131;
  struct std___Rb_tree_header* base1135 = (struct std___Rb_tree_header*)((char *)&(t1134->_M_impl) + 8);
  struct std___Rb_tree_node_base* t1136 = base1135->_M_header._M_parent;
  __begin1133 = t1136;
  struct std___Rb_tree_node_base* t1137 = __begin1133;
  _Bool cast1138 = (_Bool)t1137;
  struct std___Rb_tree_node_int_* ternary1139;
  if (cast1138) {
    struct std___Rb_tree_node_base* t1140 = __begin1133;
    struct std___Rb_tree_node_int_* derived1141 = (struct std___Rb_tree_node_int_*)((char *)t1140 - 0);
    struct std___Rb_tree_node_int_* r1142 = std___Rb_tree_node_int____M_node_ptr(derived1141);
    ternary1139 = (struct std___Rb_tree_node_int_*)r1142;
  } else {
    struct std___Rb_tree_node_int_* c1143 = ((void*)0);
    ternary1139 = (struct std___Rb_tree_node_int_*)c1143;
  }
  __retval1132 = ternary1139;
  struct std___Rb_tree_node_int_* t1144 = __retval1132;
  return t1144;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2Ev
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(struct std___Rb_tree_const_iterator_int_* v1145) {
bb1146:
  struct std___Rb_tree_const_iterator_int_* this1147;
  this1147 = v1145;
  struct std___Rb_tree_const_iterator_int_* t1148 = this1147;
  struct std___Rb_tree_node_base* c1149 = ((void*)0);
  t1148->_M_node = c1149;
  return;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2ERKSt17_Rb_tree_iteratorIiE
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* v1150, struct std___Rb_tree_iterator_int_* v1151) {
bb1152:
  struct std___Rb_tree_const_iterator_int_* this1153;
  struct std___Rb_tree_iterator_int_* __it1154;
  this1153 = v1150;
  __it1154 = v1151;
  struct std___Rb_tree_const_iterator_int_* t1155 = this1153;
  struct std___Rb_tree_iterator_int_* t1156 = __it1154;
  struct std___Rb_tree_node_base* t1157 = t1156->_M_node;
  t1155->_M_node = t1157;
  return;
}

