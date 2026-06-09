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
struct std____pair_base_std___Rb_tree_iterator_int___bool_ { unsigned char __field0; };
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
struct std__pair_std___Rb_tree_iterator_int___bool_ { struct std___Rb_tree_iterator_int_ first; _Bool second; unsigned char __field2[7]; } __attribute__((packed));
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ { struct std___Rb_tree_key_compare_std__less_int__ __field0; struct std___Rb_tree_header __field1; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char __field8; char __field9[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* __field5; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__set_int__std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ _M_t; };

int __const_main_myints[3] = {5, 10, 15};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[18] = "myset.size() == 5";
char _str_1[102] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/set/set-insert/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[14] = "!(ret.second)";
char _str_3[17] = "*ret.first == 20";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_4[16] = "myset contains:";
char _str_5[10] = "*it == 10";
char _str_6[10] = "*it == 20";
char _str_7[10] = "*it == 24";
char _str_8[10] = "*it == 25";
char _str_9[10] = "*it == 26";
char _str_10[10] = "*it == 30";
char _str_11[10] = "*it == 40";
char _str_12[10] = "*it == 50";
void std__set_int__std__less_int___std__allocator_int_____set(struct std__set_int__std__less_int___std__allocator_int__* p0);
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(struct std___Rb_tree_const_iterator_int_* p0);
void _ZNSt4pairISt23_Rb_tree_const_iteratorIiEbEC2EvQaa26is_default_constructible_vIT_E26is_default_constructible_vIT0_E(struct std__pair_std___Rb_tree_const_iterator_int___bool_* p0);
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
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
unsigned long std__set_int__std__less_int___std__allocator_int_____size___const(struct std__set_int__std__less_int___std__allocator_int__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
struct std__pair_std___Rb_tree_const_iterator_int___bool_* _ZNSt4pairISt23_Rb_tree_const_iteratorIiEbEaSEOS2_Qcl13_S_assignableIT_T0_EE(struct std__pair_std___Rb_tree_const_iterator_int___bool_* p0, struct std__pair_std___Rb_tree_const_iterator_int___bool_* p1);
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* p0);
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator__2(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_const_iterator_int_* p1);
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* p0, struct std___Rb_tree_node_base** p1, struct std___Rb_tree_node_base** p2);
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
extern struct std___Rb_tree_node_base* std___Rb_tree_increment(struct std___Rb_tree_node_base* p0);
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator___2(struct std___Rb_tree_iterator_int_* p0);
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_unique_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1, int* p2);
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique__int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1, int* p2, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* p3);
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique__int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1, int* p2);
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____insert_2(struct std__set_int__std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1, int* p2);
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
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_node_base* p1);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____begin___const(struct std__set_int__std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_const_iterator_int_* p1);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* p0, int p1);
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
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_iterator_int_* p1);

// function: _ZNSt3setIiSt4lessIiESaIiEEC2Ev
void std__set_int__std__less_int___std__allocator_int_____set(struct std__set_int__std__less_int___std__allocator_int__* v0) {
bb1:
  struct std__set_int__std__less_int___std__allocator_int__* this2;
  this2 = v0;
  struct std__set_int__std__less_int___std__allocator_int__* t3 = this2;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(&t3->_M_t);
  return;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2Ev
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(struct std___Rb_tree_const_iterator_int_* v4) {
bb5:
  struct std___Rb_tree_const_iterator_int_* this6;
  this6 = v4;
  struct std___Rb_tree_const_iterator_int_* t7 = this6;
  struct std___Rb_tree_node_base* c8 = ((void*)0);
  t7->_M_node = c8;
  return;
}

// function: _ZNSt4pairISt23_Rb_tree_const_iteratorIiEbEC2EvQaa26is_default_constructible_vIT_E26is_default_constructible_vIT0_E
void _ZNSt4pairISt23_Rb_tree_const_iteratorIiEbEC2EvQaa26is_default_constructible_vIT_E26is_default_constructible_vIT0_E(struct std__pair_std___Rb_tree_const_iterator_int___bool_* v9) {
bb10:
  struct std__pair_std___Rb_tree_const_iterator_int___bool_* this11;
  this11 = v9;
  struct std__pair_std___Rb_tree_const_iterator_int___bool_* t12 = this11;
  struct std____pair_base_std___Rb_tree_const_iterator_int___bool_* base13 = (struct std____pair_base_std___Rb_tree_const_iterator_int___bool_*)((char *)t12 + 0);
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(&t12->first);
  _Bool c14 = 0;
  t12->second = c14;
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_beginEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v15) {
bb16:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this17;
  struct std___Rb_tree_node_base* __retval18;
  this17 = v15;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t19 = this17;
  struct std___Rb_tree_header* base20 = (struct std___Rb_tree_header*)((char *)&(t19->_M_impl) + 8);
  struct std___Rb_tree_node_base* t21 = base20->_M_header._M_parent;
  __retval18 = t21;
  struct std___Rb_tree_node_base* t22 = __retval18;
  return t22;
}

// function: _ZNKSt18_Rb_tree_node_base11_M_base_ptrEv
struct std___Rb_tree_node_base* std___Rb_tree_node_base___M_base_ptr___const(struct std___Rb_tree_node_base* v23) {
bb24:
  struct std___Rb_tree_node_base* this25;
  struct std___Rb_tree_node_base* __retval26;
  this25 = v23;
  struct std___Rb_tree_node_base* t27 = this25;
  __retval26 = t27;
  struct std___Rb_tree_node_base* t28 = __retval26;
  return t28;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_M_endEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v29) {
bb30:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this31;
  struct std___Rb_tree_node_base* __retval32;
  this31 = v29;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t33 = this31;
  struct std___Rb_tree_header* base34 = (struct std___Rb_tree_header*)((char *)&(t33->_M_impl) + 8);
  struct std___Rb_tree_node_base* r35 = std___Rb_tree_node_base___M_base_ptr___const(&base34->_M_header);
  __retval32 = r35;
  struct std___Rb_tree_node_base* t36 = __retval32;
  return t36;
}

// function: _ZNKSt4lessIiEclERKiS2_
_Bool std__less_int___operator___int_const___int_const___const(struct std__less_int_* v37, int* v38, int* v39) {
bb40:
  struct std__less_int_* this41;
  int* __x42;
  int* __y43;
  _Bool __retval44;
  this41 = v37;
  __x42 = v38;
  __y43 = v39;
  struct std__less_int_* t45 = this41;
  int* t46 = __x42;
  int t47 = *t46;
  int* t48 = __y43;
  int t49 = *t48;
  _Bool c50 = ((t47 < t49)) ? 1 : 0;
  __retval44 = c50;
  _Bool t51 = __retval44;
  return t51;
}

// function: _ZNKSt9_IdentityIiEclERKi
int* std___Identity_int___operator___int_const___const(struct std___Identity_int_* v52, int* v53) {
bb54:
  struct std___Identity_int_* this55;
  int* __x56;
  int* __retval57;
  this55 = v52;
  __x56 = v53;
  struct std___Identity_int_* t58 = this55;
  int* t59 = __x56;
  __retval57 = t59;
  int* t60 = __retval57;
  return t60;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr___const(struct __gnu_cxx____aligned_membuf_int_* v61) {
bb62:
  struct __gnu_cxx____aligned_membuf_int_* this63;
  void* __retval64;
  this63 = v61;
  struct __gnu_cxx____aligned_membuf_int_* t65 = this63;
  void* cast66 = (void*)&(t65->_M_storage);
  __retval64 = cast66;
  void* t67 = __retval64;
  return t67;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr___const(struct __gnu_cxx____aligned_membuf_int_* v68) {
bb69:
  struct __gnu_cxx____aligned_membuf_int_* this70;
  int* __retval71;
  this70 = v68;
  struct __gnu_cxx____aligned_membuf_int_* t72 = this70;
  void* r73 = __gnu_cxx____aligned_membuf_int____M_addr___const(t72);
  int* cast74 = (int*)r73;
  __retval71 = cast74;
  int* t75 = __retval71;
  return t75;
}

// function: _ZNKSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr___const(struct std___Rb_tree_node_int_* v76) {
bb77:
  struct std___Rb_tree_node_int_* this78;
  int* __retval79;
  this78 = v76;
  struct std___Rb_tree_node_int_* t80 = this78;
  int* r81 = __gnu_cxx____aligned_membuf_int____M_ptr___const(&t80->_M_storage);
  __retval79 = r81;
  int* t82 = __retval79;
  return t82;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_S_keyERKSt13_Rb_tree_nodeIiE
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(struct std___Rb_tree_node_int_* v83) {
bb84:
  struct std___Rb_tree_node_int_* __node85;
  int* __retval86;
  struct std___Identity_int_ ref_tmp087;
  __node85 = v83;
  struct std___Rb_tree_node_int_* t88 = __node85;
  int* r89 = std___Rb_tree_node_int____M_valptr___const(t88);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r90 = std___Identity_int___operator___int_const___const(&ref_tmp087, r89);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval86 = r90;
  int* t91 = __retval86;
  return t91;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_S_keyEPSt18_Rb_tree_node_base
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(struct std___Rb_tree_node_base* v92) {
bb93:
  struct std___Rb_tree_node_base* __x94;
  int* __retval95;
  __x94 = v92;
  struct std___Rb_tree_node_base* t96 = __x94;
  struct std___Rb_tree_node_int_* derived97 = (struct std___Rb_tree_node_int_*)((char *)t96 - 0);
  int* r98 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(derived97);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval95 = r98;
  int* t99 = __retval95;
  return t99;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(struct std___Rb_tree_node_base* v100) {
bb101:
  struct std___Rb_tree_node_base* __x102;
  struct std___Rb_tree_node_base* __retval103;
  __x102 = v100;
  struct std___Rb_tree_node_base* t104 = __x102;
  struct std___Rb_tree_node_base* t105 = t104->_M_left;
  __retval103 = t105;
  struct std___Rb_tree_node_base* t106 = __retval103;
  return t106;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(struct std___Rb_tree_node_base* v107) {
bb108:
  struct std___Rb_tree_node_base* __x109;
  struct std___Rb_tree_node_base* __retval110;
  __x109 = v107;
  struct std___Rb_tree_node_base* t111 = __x109;
  struct std___Rb_tree_node_base* t112 = t111->_M_right;
  __retval110 = t112;
  struct std___Rb_tree_node_base* t113 = __retval110;
  return t113;
}

// function: _ZSteqRKSt17_Rb_tree_iteratorIiES2_
_Bool std__operator__(struct std___Rb_tree_iterator_int_* v114, struct std___Rb_tree_iterator_int_* v115) {
bb116:
  struct std___Rb_tree_iterator_int_* __x117;
  struct std___Rb_tree_iterator_int_* __y118;
  _Bool __retval119;
  __x117 = v114;
  __y118 = v115;
  struct std___Rb_tree_iterator_int_* t120 = __x117;
  struct std___Rb_tree_node_base* t121 = t120->_M_node;
  struct std___Rb_tree_iterator_int_* t122 = __y118;
  struct std___Rb_tree_node_base* t123 = t122->_M_node;
  _Bool c124 = ((t121 == t123)) ? 1 : 0;
  __retval119 = c124;
  _Bool t125 = __retval119;
  return t125;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5beginEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v126) {
bb127:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this128;
  struct std___Rb_tree_iterator_int_ __retval129;
  this128 = v126;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t130 = this128;
  struct std___Rb_tree_header* base131 = (struct std___Rb_tree_header*)((char *)&(t130->_M_impl) + 8);
  struct std___Rb_tree_node_base* t132 = base131->_M_header._M_left;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval129, t132);
  struct std___Rb_tree_iterator_int_ t133 = __retval129;
  return t133;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v134, struct std___Rb_tree_node_base** v135, struct std___Rb_tree_node_base** v136) {
bb137:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this138;
  struct std___Rb_tree_node_base** __x139;
  struct std___Rb_tree_node_base** __y140;
  this138 = v134;
  __x139 = v135;
  __y140 = v136;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t141 = this138;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base142 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t141 + 0);
  struct std___Rb_tree_node_base** t143 = __x139;
  struct std___Rb_tree_node_base* t144 = *t143;
  t141->first = t144;
  struct std___Rb_tree_node_base** t145 = __y140;
  struct std___Rb_tree_node_base* t146 = *t145;
  t141->second = t146;
  return;
}

// function: _ZNSt17_Rb_tree_iteratorIiEmmEv
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator__(struct std___Rb_tree_iterator_int_* v147) {
bb148:
  struct std___Rb_tree_iterator_int_* this149;
  struct std___Rb_tree_iterator_int_* __retval150;
  this149 = v147;
  struct std___Rb_tree_iterator_int_* t151 = this149;
  struct std___Rb_tree_node_base* t152 = t151->_M_node;
  struct std___Rb_tree_node_base* r153 = std___Rb_tree_decrement(t152);
  t151->_M_node = r153;
  __retval150 = t151;
  struct std___Rb_tree_iterator_int_* t154 = __retval150;
  return t154;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v155, struct std___Rb_tree_node_base** v156, struct std___Rb_tree_node_base** v157) {
bb158:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this159;
  struct std___Rb_tree_node_base** __x160;
  struct std___Rb_tree_node_base** __y161;
  this159 = v155;
  __x160 = v156;
  __y161 = v157;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t162 = this159;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base163 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t162 + 0);
  struct std___Rb_tree_node_base** t164 = __x160;
  struct std___Rb_tree_node_base* t165 = *t164;
  t162->first = t165;
  struct std___Rb_tree_node_base** t166 = __y161;
  struct std___Rb_tree_node_base* t167 = *t166;
  t162->second = t167;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE24_M_get_insert_unique_posERKi
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v168, int* v169) {
bb170:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this171;
  int* __k172;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval173;
  struct std___Rb_tree_node_base* __x174;
  struct std___Rb_tree_node_base* __y175;
  _Bool __comp176;
  struct std___Rb_tree_iterator_int_ __j177;
  struct std___Rb_tree_node_base* ref_tmp1178;
  this171 = v168;
  __k172 = v169;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t179 = this171;
  struct std___Rb_tree_node_base* r180 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t179);
  __x174 = r180;
  struct std___Rb_tree_node_base* r181 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t179);
  __y175 = r181;
  _Bool c182 = 1;
  __comp176 = c182;
    while (1) {
      struct std___Rb_tree_node_base* t183 = __x174;
      _Bool cast184 = (_Bool)t183;
      if (!cast184) break;
        struct std___Rb_tree_node_base* t185 = __x174;
        __y175 = t185;
        struct std___Rb_tree_key_compare_std__less_int__* base186 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t179->_M_impl) + 0);
        struct std__less_int_* cast187 = (struct std__less_int_*)base186;
        int* t188 = __k172;
        struct std___Rb_tree_node_base* t189 = __x174;
        int* r190 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t189);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r191 = std__less_int___operator___int_const___int_const___const(cast187, t188, r190);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        __comp176 = r191;
        _Bool t192 = __comp176;
        struct std___Rb_tree_node_base* ternary193;
        if (t192) {
          struct std___Rb_tree_node_base* t194 = __x174;
          struct std___Rb_tree_node_base* r195 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t194);
          ternary193 = (struct std___Rb_tree_node_base*)r195;
        } else {
          struct std___Rb_tree_node_base* t196 = __x174;
          struct std___Rb_tree_node_base* r197 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t196);
          ternary193 = (struct std___Rb_tree_node_base*)r197;
        }
        __x174 = ternary193;
    }
  struct std___Rb_tree_node_base* t198 = __y175;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__j177, t198);
    _Bool t199 = __comp176;
    if (t199) {
        struct std___Rb_tree_iterator_int_ ref_tmp0200;
        struct std___Rb_tree_iterator_int_ r201 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(t179);
        ref_tmp0200 = r201;
        _Bool r202 = std__operator__(&__j177, &ref_tmp0200);
        if (r202) {
          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval173, &__x174, &__y175);
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t203 = __retval173;
          return t203;
        } else {
          struct std___Rb_tree_iterator_int_* r204 = std___Rb_tree_iterator_int___operator__(&__j177);
        }
    }
    struct std___Rb_tree_key_compare_std__less_int__* base205 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t179->_M_impl) + 0);
    struct std__less_int_* cast206 = (struct std__less_int_*)base205;
    struct std___Rb_tree_node_base* t207 = __j177._M_node;
    int* r208 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t207);
    if (__cir_exc_active) {
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    int* t209 = __k172;
    _Bool r210 = std__less_int___operator___int_const___int_const___const(cast206, r208, t209);
    if (__cir_exc_active) {
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    if (r210) {
      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval173, &__x174, &__y175);
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t211 = __retval173;
      return t211;
    }
  struct std___Rb_tree_node_base* c212 = ((void*)0);
  ref_tmp1178 = c212;
  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval173, &__j177._M_node, &ref_tmp1178);
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t213 = __retval173;
  return t213;
}

// function: _ZNKSt9_IdentityIiEclERi
int* std___Identity_int___operator___int___const(struct std___Identity_int_* v214, int* v215) {
bb216:
  struct std___Identity_int_* this217;
  int* __x218;
  int* __retval219;
  this217 = v214;
  __x218 = v215;
  struct std___Identity_int_* t220 = this217;
  int* t221 = __x218;
  __retval219 = t221;
  int* t222 = __retval219;
  return t222;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeC2ERS5_
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v223, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v224) {
bb225:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this226;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* __t227;
  this226 = v223;
  __t227 = v224;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t228 = this226;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t229 = __t227;
  t228->_M_t = t229;
  return;
}

// function: _ZNKSt15__new_allocatorISt13_Rb_tree_nodeIiEE11_M_max_sizeEv
unsigned long std____new_allocator_std___Rb_tree_node_int______M_max_size___const(struct std____new_allocator_std___Rb_tree_node_int__* v230) {
bb231:
  struct std____new_allocator_std___Rb_tree_node_int__* this232;
  unsigned long __retval233;
  this232 = v230;
  struct std____new_allocator_std___Rb_tree_node_int__* t234 = this232;
  unsigned long c235 = 9223372036854775807;
  unsigned long c236 = 40;
  unsigned long b237 = c235 / c236;
  __retval233 = b237;
  unsigned long t238 = __retval233;
  return t238;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE8allocateEmPKv
struct std___Rb_tree_node_int_* std____new_allocator_std___Rb_tree_node_int_____allocate(struct std____new_allocator_std___Rb_tree_node_int__* v239, unsigned long v240, void* v241) {
bb242:
  struct std____new_allocator_std___Rb_tree_node_int__* this243;
  unsigned long __n244;
  void* unnamed245;
  struct std___Rb_tree_node_int_* __retval246;
  this243 = v239;
  __n244 = v240;
  unnamed245 = v241;
  struct std____new_allocator_std___Rb_tree_node_int__* t247 = this243;
    unsigned long t248 = __n244;
    unsigned long r249 = std____new_allocator_std___Rb_tree_node_int______M_max_size___const(t247);
    _Bool c250 = ((t248 > r249)) ? 1 : 0;
    if (c250) {
        unsigned long t251 = __n244;
        unsigned long c252 = -1;
        unsigned long c253 = 40;
        unsigned long b254 = c252 / c253;
        _Bool c255 = ((t251 > b254)) ? 1 : 0;
        if (c255) {
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
    unsigned long c256 = 8;
    unsigned long c257 = 16;
    _Bool c258 = ((c256 > c257)) ? 1 : 0;
    if (c258) {
      unsigned long __al259;
      unsigned long c260 = 8;
      __al259 = c260;
      unsigned long t261 = __n244;
      unsigned long c262 = 40;
      unsigned long b263 = t261 * c262;
      unsigned long t264 = __al259;
      void* r265 = operator_new_2(b263, t264);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast266 = (struct std___Rb_tree_node_int_*)r265;
      __retval246 = cast266;
      struct std___Rb_tree_node_int_* t267 = __retval246;
      return t267;
    }
  unsigned long t268 = __n244;
  unsigned long c269 = 40;
  unsigned long b270 = t268 * c269;
  void* r271 = operator_new(b270);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* cast272 = (struct std___Rb_tree_node_int_*)r271;
  __retval246 = cast272;
  struct std___Rb_tree_node_int_* t273 = __retval246;
  return t273;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE8allocateEm
struct std___Rb_tree_node_int_* std__allocator_std___Rb_tree_node_int_____allocate(struct std__allocator_std___Rb_tree_node_int__* v274, unsigned long v275) {
bb276:
  struct std__allocator_std___Rb_tree_node_int__* this277;
  unsigned long __n278;
  struct std___Rb_tree_node_int_* __retval279;
  this277 = v274;
  __n278 = v275;
  struct std__allocator_std___Rb_tree_node_int__* t280 = this277;
    _Bool r281 = std____is_constant_evaluated();
    if (r281) {
        unsigned long t282 = __n278;
        unsigned long c283 = 40;
        unsigned long ovr284;
        _Bool ovf285 = __builtin_mul_overflow(t282, c283, &ovr284);
        __n278 = ovr284;
        if (ovf285) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t286 = __n278;
      void* r287 = operator_new(t286);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast288 = (struct std___Rb_tree_node_int_*)r287;
      __retval279 = cast288;
      struct std___Rb_tree_node_int_* t289 = __retval279;
      return t289;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base290 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t280 + 0);
  unsigned long t291 = __n278;
  void* c292 = ((void*)0);
  struct std___Rb_tree_node_int_* r293 = std____new_allocator_std___Rb_tree_node_int_____allocate(base290, t291, c292);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval279 = r293;
  struct std___Rb_tree_node_int_* t294 = __retval279;
  return t294;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE8allocateERS2_m
struct std___Rb_tree_node_int_* std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(struct std__allocator_std___Rb_tree_node_int__* v295, unsigned long v296) {
bb297:
  struct std__allocator_std___Rb_tree_node_int__* __a298;
  unsigned long __n299;
  struct std___Rb_tree_node_int_* __retval300;
  __a298 = v295;
  __n299 = v296;
  struct std__allocator_std___Rb_tree_node_int__* t301 = __a298;
  unsigned long t302 = __n299;
  struct std___Rb_tree_node_int_* r303 = std__allocator_std___Rb_tree_node_int_____allocate(t301, t302);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval300 = r303;
  struct std___Rb_tree_node_int_* t304 = __retval300;
  return t304;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_get_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v305) {
bb306:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this307;
  struct std___Rb_tree_node_int_* __retval308;
  this307 = v305;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t309 = this307;
  struct std__allocator_std___Rb_tree_node_int__* r310 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t309);
  unsigned long c311 = 1;
  struct std___Rb_tree_node_int_* r312 = std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(r310, c311);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval308 = r312;
  struct std___Rb_tree_node_int_* t313 = __retval308;
  return t313;
}

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v314, int* v315) {
bb316:
  int* __location317;
  int* __args318;
  int* __retval319;
  void* __loc320;
  __location317 = v314;
  __args318 = v315;
  int* t321 = __location317;
  void* cast322 = (void*)t321;
  __loc320 = cast322;
    void* t323 = __loc320;
    int* cast324 = (int*)t323;
    int* t325 = __args318;
    int t326 = *t325;
    *cast324 = t326;
    __retval319 = cast324;
    int* t327 = __retval319;
    return t327;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE9constructIiJiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int_(struct std__allocator_std___Rb_tree_node_int__* v328, int* v329, int* v330) {
bb331:
  struct std__allocator_std___Rb_tree_node_int__* __a332;
  int* __p333;
  int* __args334;
  __a332 = v328;
  __p333 = v329;
  __args334 = v330;
  int* t335 = __p333;
  int* t336 = __args334;
  int* r337 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t335, t336);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE17_M_construct_nodeIJiEEEvPSt13_Rb_tree_nodeIiEDpOT_
void void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v338, struct std___Rb_tree_node_int_* v339, int* v340) {
bb341:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this342;
  struct std___Rb_tree_node_int_* __node343;
  int* __args344;
  this342 = v338;
  __node343 = v339;
  __args344 = v340;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t345 = this342;
      struct std__allocator_std___Rb_tree_node_int__* r347 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t345);
      struct std___Rb_tree_node_int_* t348 = __node343;
      int* r349 = std___Rb_tree_node_int____M_valptr(t348);
      if (__cir_exc_active) {
        goto cir_try_dispatch346;
      }
      int* t350 = __args344;
      void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int_(r347, r349, t350);
    cir_try_dispatch346: ;
    if (__cir_exc_active) {
    {
      int ca_tok351 = 0;
      void* ca_exn352 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Rb_tree_node_int_* t353 = __node343;
        struct std___Rb_tree_node_int_* t354 = __node343;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t345, t354);
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
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v355, int* v356) {
bb357:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this358;
  int* __args359;
  struct std___Rb_tree_node_int_* __retval360;
  struct std___Rb_tree_node_int_* __tmp361;
  this358 = v355;
  __args359 = v356;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t362 = this358;
  struct std___Rb_tree_node_int_* r363 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(t362);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __tmp361 = r363;
  struct std___Rb_tree_node_int_* t364 = __tmp361;
  int* t365 = __args359;
  void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int_(t362, t364, t365);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* t366 = __tmp361;
  __retval360 = t366;
  struct std___Rb_tree_node_int_* t367 = __retval360;
  return t367;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeclIiEEPSt13_Rb_tree_nodeIiEOT_
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int__int____const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v368, int* v369) {
bb370:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this371;
  int* __arg372;
  struct std___Rb_tree_node_int_* __retval373;
  this371 = v368;
  __arg372 = v369;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t374 = this371;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t375 = t374->_M_t;
  int* t376 = __arg372;
  struct std___Rb_tree_node_int_* r377 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int_(t375, t376);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval373 = r377;
  struct std___Rb_tree_node_int_* t378 = __retval373;
  return t378;
}

// function: _ZNSt9__rb_tree12_Node_traitsIiPiE23_S_insert_and_rebalanceEbPSt18_Rb_tree_node_baseS4_RS3_
void std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(_Bool v379, struct std___Rb_tree_node_base* v380, struct std___Rb_tree_node_base* v381, struct std___Rb_tree_node_base* v382) {
bb383:
  _Bool __insert_left384;
  struct std___Rb_tree_node_base* __x385;
  struct std___Rb_tree_node_base* __p386;
  struct std___Rb_tree_node_base* __header387;
  __insert_left384 = v379;
  __x385 = v380;
  __p386 = v381;
  __header387 = v382;
  _Bool t388 = __insert_left384;
  struct std___Rb_tree_node_base* t389 = __x385;
  struct std___Rb_tree_node_base* t390 = __p386;
  struct std___Rb_tree_node_base* t391 = __header387;
  std___Rb_tree_insert_and_rebalance(t388, t389, t390, t391);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE10_M_insert_IiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiEPSt18_Rb_tree_node_baseSB_OT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v392, struct std___Rb_tree_node_base* v393, struct std___Rb_tree_node_base* v394, int* v395, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v396) {
bb397:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this398;
  struct std___Rb_tree_node_base* __x399;
  struct std___Rb_tree_node_base* __p400;
  int* __v401;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen402;
  struct std___Rb_tree_iterator_int_ __retval403;
  _Bool __insert_left404;
  struct std___Rb_tree_node_base* __z405;
  this398 = v392;
  __x399 = v393;
  __p400 = v394;
  __v401 = v395;
  __node_gen402 = v396;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t406 = this398;
  struct std___Rb_tree_node_base* t407 = __x399;
  _Bool cast408 = (_Bool)t407;
  _Bool ternary409;
  if (cast408) {
    _Bool c410 = 1;
    ternary409 = (_Bool)c410;
  } else {
    struct std___Rb_tree_node_base* t411 = __p400;
    struct std___Rb_tree_node_base* r412 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t406);
    _Bool c413 = ((t411 == r412)) ? 1 : 0;
    ternary409 = (_Bool)c413;
  }
  _Bool ternary414;
  if (ternary409) {
    _Bool c415 = 1;
    ternary414 = (_Bool)c415;
  } else {
    struct std___Identity_int_ ref_tmp0416;
    struct std___Rb_tree_key_compare_std__less_int__* base417 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t406->_M_impl) + 0);
    struct std__less_int_* cast418 = (struct std__less_int_*)base417;
    int* t419 = __v401;
    int* r420 = std___Identity_int___operator___int___const(&ref_tmp0416, t419);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    struct std___Rb_tree_node_base* t421 = __p400;
    int* r422 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t421);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r423 = std__less_int___operator___int_const___int_const___const(cast418, r420, r422);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    ternary414 = (_Bool)r423;
  }
  __insert_left404 = ternary414;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t424 = __node_gen402;
  int* t425 = __v401;
  struct std___Rb_tree_node_int_* r426 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int__int____const(t424, t425);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* base427 = (struct std___Rb_tree_node_base*)((char *)r426 + 0);
  struct std___Rb_tree_node_base* r428 = std___Rb_tree_node_base___M_base_ptr___const(base427);
  __z405 = r428;
  _Bool t429 = __insert_left404;
  struct std___Rb_tree_node_base* t430 = __z405;
  struct std___Rb_tree_node_base* t431 = __p400;
  struct std___Rb_tree_header* base432 = (struct std___Rb_tree_header*)((char *)&(t406->_M_impl) + 8);
  std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(t429, t430, t431, &base432->_M_header);
  struct std___Rb_tree_header* base433 = (struct std___Rb_tree_header*)((char *)&(t406->_M_impl) + 8);
  unsigned long t434 = base433->_M_node_count;
  unsigned long u435 = t434 + 1;
  base433->_M_node_count = u435;
  struct std___Rb_tree_node_base* t436 = __z405;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval403, t436);
  struct std___Rb_tree_iterator_int_ t437 = __retval403;
  return t437;
}

// function: _ZNSt4pairISt17_Rb_tree_iteratorIiEbEC2IS1_bQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_
void _ZNSt4pairISt17_Rb_tree_iteratorIiEbEC2IS1_bQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(struct std__pair_std___Rb_tree_iterator_int___bool_* v438, struct std___Rb_tree_iterator_int_* v439, _Bool* v440) {
bb441:
  struct std__pair_std___Rb_tree_iterator_int___bool_* this442;
  struct std___Rb_tree_iterator_int_* __x443;
  _Bool* __y444;
  this442 = v438;
  __x443 = v439;
  __y444 = v440;
  struct std__pair_std___Rb_tree_iterator_int___bool_* t445 = this442;
  struct std____pair_base_std___Rb_tree_iterator_int___bool_* base446 = (struct std____pair_base_std___Rb_tree_iterator_int___bool_*)((char *)t445 + 0);
  struct std___Rb_tree_iterator_int_* t447 = __x443;
  t445->first = *t447; // copy
  _Bool* t448 = __y444;
  _Bool t449 = *t448;
  t445->second = t449;
  return;
}

// function: _ZNSt17_Rb_tree_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_iterator_int____Rb_tree_iterator(struct std___Rb_tree_iterator_int_* v450, struct std___Rb_tree_node_base* v451) {
bb452:
  struct std___Rb_tree_iterator_int_* this453;
  struct std___Rb_tree_node_base* __x454;
  this453 = v450;
  __x454 = v451;
  struct std___Rb_tree_iterator_int_* t455 = this453;
  struct std___Rb_tree_node_base* t456 = __x454;
  t455->_M_node = t456;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE16_M_insert_uniqueIiEESt4pairISt17_Rb_tree_iteratorIiEbEOT_
struct std__pair_std___Rb_tree_iterator_int___bool_ std__pair_std___Rb_tree_iterator_int___bool__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v457, int* v458) {
bb459:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this460;
  int* __v461;
  struct std__pair_std___Rb_tree_iterator_int___bool_ __retval462;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __res463;
  struct std___Identity_int_ ref_tmp0464;
  struct std___Rb_tree_iterator_int_ ref_tmp3465;
  _Bool ref_tmp4466;
  this460 = v457;
  __v461 = v458;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t467 = this460;
  int* t468 = __v461;
  int* r469 = std___Identity_int___operator___int___const(&ref_tmp0464, t468);
  if (__cir_exc_active) {
    struct std__pair_std___Rb_tree_iterator_int___bool_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r470 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(t467, r469);
  if (__cir_exc_active) {
    struct std__pair_std___Rb_tree_iterator_int___bool_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __res463 = r470;
    struct std___Rb_tree_node_base* t471 = __res463.second;
    _Bool cast472 = (_Bool)t471;
    if (cast472) {
      struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node __an473;
      struct std___Rb_tree_iterator_int_ ref_tmp1474;
      _Bool ref_tmp2475;
      std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(&__an473, t467);
      if (__cir_exc_active) {
        struct std__pair_std___Rb_tree_iterator_int___bool_ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_base* t476 = __res463.first;
      struct std___Rb_tree_node_base* t477 = __res463.second;
      int* t478 = __v461;
      struct std___Rb_tree_iterator_int_ r479 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t467, t476, t477, t478, &__an473);
      if (__cir_exc_active) {
        struct std__pair_std___Rb_tree_iterator_int___bool_ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      ref_tmp1474 = r479;
      _Bool c480 = 1;
      ref_tmp2475 = c480;
      _ZNSt4pairISt17_Rb_tree_iteratorIiEbEC2IS1_bQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(&__retval462, &ref_tmp1474, &ref_tmp2475);
      struct std__pair_std___Rb_tree_iterator_int___bool_ t481 = __retval462;
      return t481;
    }
  struct std___Rb_tree_node_base* t482 = __res463.first;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&ref_tmp3465, t482);
  _Bool c483 = 0;
  ref_tmp4466 = c483;
  _ZNSt4pairISt17_Rb_tree_iteratorIiEbEC2IS1_bQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(&__retval462, &ref_tmp3465, &ref_tmp4466);
  struct std__pair_std___Rb_tree_iterator_int___bool_ t484 = __retval462;
  return t484;
}

// function: _ZNSt4pairISt23_Rb_tree_const_iteratorIiEbEC2IRSt17_Rb_tree_iteratorIiERbQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS8_S9_EEEEOT_OT0_
void _ZNSt4pairISt23_Rb_tree_const_iteratorIiEbEC2IRSt17_Rb_tree_iteratorIiERbQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS8_S9_EEEEOT_OT0_(struct std__pair_std___Rb_tree_const_iterator_int___bool_* v485, struct std___Rb_tree_iterator_int_* v486, _Bool* v487) {
bb488:
  struct std__pair_std___Rb_tree_const_iterator_int___bool_* this489;
  struct std___Rb_tree_iterator_int_* __x490;
  _Bool* __y491;
  this489 = v485;
  __x490 = v486;
  __y491 = v487;
  struct std__pair_std___Rb_tree_const_iterator_int___bool_* t492 = this489;
  struct std____pair_base_std___Rb_tree_const_iterator_int___bool_* base493 = (struct std____pair_base_std___Rb_tree_const_iterator_int___bool_*)((char *)t492 + 0);
  struct std___Rb_tree_iterator_int_* t494 = __x490;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&t492->first, t494);
  _Bool* t495 = __y491;
  _Bool t496 = *t495;
  t492->second = t496;
  return;
}

// function: _ZNSt3setIiSt4lessIiESaIiEE6insertEOi
struct std__pair_std___Rb_tree_const_iterator_int___bool_ std__set_int__std__less_int___std__allocator_int_____insert(struct std__set_int__std__less_int___std__allocator_int__* v497, int* v498) {
bb499:
  struct std__set_int__std__less_int___std__allocator_int__* this500;
  int* __x501;
  struct std__pair_std___Rb_tree_const_iterator_int___bool_ __retval502;
  struct std__pair_std___Rb_tree_iterator_int___bool_ __p503;
  this500 = v497;
  __x501 = v498;
  struct std__set_int__std__less_int___std__allocator_int__* t504 = this500;
  int* t505 = __x501;
  struct std__pair_std___Rb_tree_iterator_int___bool_ r506 = std__pair_std___Rb_tree_iterator_int___bool__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique_int_(&t504->_M_t, t505);
  if (__cir_exc_active) {
    struct std__pair_std___Rb_tree_const_iterator_int___bool_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __p503 = r506;
  _ZNSt4pairISt23_Rb_tree_const_iteratorIiEbEC2IRSt17_Rb_tree_iteratorIiERbQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS8_S9_EEEEOT_OT0_(&__retval502, &__p503.first, &__p503.second);
  struct std__pair_std___Rb_tree_const_iterator_int___bool_ t507 = __retval502;
  return t507;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE4sizeEv
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v508) {
bb509:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this510;
  unsigned long __retval511;
  this510 = v508;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t512 = this510;
  struct std___Rb_tree_header* base513 = (struct std___Rb_tree_header*)((char *)&(t512->_M_impl) + 8);
  unsigned long t514 = base513->_M_node_count;
  __retval511 = t514;
  unsigned long t515 = __retval511;
  return t515;
}

// function: _ZNKSt3setIiSt4lessIiESaIiEE4sizeEv
unsigned long std__set_int__std__less_int___std__allocator_int_____size___const(struct std__set_int__std__less_int___std__allocator_int__* v516) {
bb517:
  struct std__set_int__std__less_int___std__allocator_int__* this518;
  unsigned long __retval519;
  this518 = v516;
  struct std__set_int__std__less_int___std__allocator_int__* t520 = this518;
  unsigned long r521 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(&t520->_M_t);
  __retval519 = r521;
  unsigned long t522 = __retval519;
  return t522;
}

// function: _ZNSt4pairISt23_Rb_tree_const_iteratorIiEbEaSEOS2_Qcl13_S_assignableIT_T0_EE
struct std__pair_std___Rb_tree_const_iterator_int___bool_* _ZNSt4pairISt23_Rb_tree_const_iteratorIiEbEaSEOS2_Qcl13_S_assignableIT_T0_EE(struct std__pair_std___Rb_tree_const_iterator_int___bool_* v523, struct std__pair_std___Rb_tree_const_iterator_int___bool_* v524) {
bb525:
  struct std__pair_std___Rb_tree_const_iterator_int___bool_* this526;
  struct std__pair_std___Rb_tree_const_iterator_int___bool_* __p527;
  struct std__pair_std___Rb_tree_const_iterator_int___bool_* __retval528;
  this526 = v523;
  __p527 = v524;
  struct std__pair_std___Rb_tree_const_iterator_int___bool_* t529 = this526;
  struct std__pair_std___Rb_tree_const_iterator_int___bool_* t530 = __p527;
  struct std___Rb_tree_const_iterator_int_* r531 = std___Rb_tree_const_iterator_int___operator_(&t529->first, &t530->first);
  struct std__pair_std___Rb_tree_const_iterator_int___bool_* t532 = __p527;
  _Bool t533 = t532->second;
  t529->second = t533;
  __retval528 = t529;
  struct std__pair_std___Rb_tree_const_iterator_int___bool_* t534 = __retval528;
  return t534;
}

// function: _ZNKSt23_Rb_tree_const_iteratorIiEdeEv
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* v535) {
bb536:
  struct std___Rb_tree_const_iterator_int_* this537;
  int* __retval538;
  this537 = v535;
  struct std___Rb_tree_const_iterator_int_* t539 = this537;
  struct std___Rb_tree_node_base* t540 = t539->_M_node;
  struct std___Rb_tree_node_int_* derived541 = ((t540) ? (struct std___Rb_tree_node_int_*)((char *)t540 - 0) : (struct std___Rb_tree_node_int_*)0);
  int* r542 = std___Rb_tree_node_int____M_valptr___const(derived541);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval538 = r542;
  int* t543 = __retval538;
  return t543;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEaSERKS0_
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator__2(struct std___Rb_tree_const_iterator_int_* v544, struct std___Rb_tree_const_iterator_int_* v545) {
bb546:
  struct std___Rb_tree_const_iterator_int_* this547;
  struct std___Rb_tree_const_iterator_int_* unnamed548;
  struct std___Rb_tree_const_iterator_int_* __retval549;
  this547 = v544;
  unnamed548 = v545;
  struct std___Rb_tree_const_iterator_int_* t550 = this547;
  struct std___Rb_tree_const_iterator_int_* t551 = unnamed548;
  struct std___Rb_tree_node_base* t552 = t551->_M_node;
  t550->_M_node = t552;
  __retval549 = t550;
  struct std___Rb_tree_const_iterator_int_* t553 = __retval549;
  return t553;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_rightmostEv
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v554) {
bb555:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this556;
  struct std___Rb_tree_node_base** __retval557;
  this556 = v554;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t558 = this556;
  struct std___Rb_tree_header* base559 = (struct std___Rb_tree_header*)((char *)&(t558->_M_impl) + 8);
  __retval557 = &base559->_M_header._M_right;
  struct std___Rb_tree_node_base** t560 = __retval557;
  return t560;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v561, struct std___Rb_tree_node_base** v562, struct std___Rb_tree_node_base** v563) {
bb564:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this565;
  struct std___Rb_tree_node_base** __x566;
  struct std___Rb_tree_node_base** __y567;
  this565 = v561;
  __x566 = v562;
  __y567 = v563;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t568 = this565;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base569 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t568 + 0);
  struct std___Rb_tree_node_base** t570 = __x566;
  struct std___Rb_tree_node_base* t571 = *t570;
  t568->first = t571;
  struct std___Rb_tree_node_base** t572 = __y567;
  struct std___Rb_tree_node_base* t573 = *t572;
  t568->second = t573;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_leftmostEv
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v574) {
bb575:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this576;
  struct std___Rb_tree_node_base** __retval577;
  this576 = v574;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t578 = this576;
  struct std___Rb_tree_header* base579 = (struct std___Rb_tree_header*)((char *)&(t578->_M_impl) + 8);
  __retval577 = &base579->_M_header._M_left;
  struct std___Rb_tree_node_base** t580 = __retval577;
  return t580;
}

// function: _ZNSt17_Rb_tree_iteratorIiEppEv
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator___2(struct std___Rb_tree_iterator_int_* v581) {
bb582:
  struct std___Rb_tree_iterator_int_* this583;
  struct std___Rb_tree_iterator_int_* __retval584;
  this583 = v581;
  struct std___Rb_tree_iterator_int_* t585 = this583;
  struct std___Rb_tree_node_base* t586 = t585->_M_node;
  struct std___Rb_tree_node_base* r587 = std___Rb_tree_increment(t586);
  t585->_M_node = r587;
  __retval584 = t585;
  struct std___Rb_tree_iterator_int_* t588 = __retval584;
  return t588;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE29_M_get_insert_hint_unique_posESt23_Rb_tree_const_iteratorIiERKi
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_unique_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v589, struct std___Rb_tree_const_iterator_int_ v590, int* v591) {
bb592:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this593;
  struct std___Rb_tree_const_iterator_int_ __position594;
  int* __k595;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval596;
  this593 = v589;
  __position594 = v590;
  __k595 = v591;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t597 = this593;
    struct std___Rb_tree_node_base* t598 = __position594._M_node;
    struct std___Rb_tree_node_base* r599 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t597);
    _Bool c600 = ((t598 == r599)) ? 1 : 0;
    if (c600) {
        unsigned long r601 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(t597);
        unsigned long c602 = 0;
        _Bool c603 = ((r601 > c602)) ? 1 : 0;
        _Bool ternary604;
        if (c603) {
          struct std___Rb_tree_key_compare_std__less_int__* base605 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t597->_M_impl) + 0);
          struct std__less_int_* cast606 = (struct std__less_int_*)base605;
          struct std___Rb_tree_node_base** r607 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t597);
          struct std___Rb_tree_node_base* t608 = *r607;
          int* r609 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t608);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          int* t610 = __k595;
          _Bool r611 = std__less_int___operator___int_const___int_const___const(cast606, r609, t610);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          ternary604 = (_Bool)r611;
        } else {
          _Bool c612 = 0;
          ternary604 = (_Bool)c612;
        }
        if (ternary604) {
          struct std___Rb_tree_node_base* ref_tmp0613;
          struct std___Rb_tree_node_base* c614 = ((void*)0);
          ref_tmp0613 = c614;
          struct std___Rb_tree_node_base** r615 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t597);
          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval596, &ref_tmp0613, r615);
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t616 = __retval596;
          return t616;
        } else {
          int* t617 = __k595;
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r618 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(t597, t617);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          __retval596 = r618;
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t619 = __retval596;
          return t619;
        }
    } else {
        struct std___Rb_tree_key_compare_std__less_int__* base620 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t597->_M_impl) + 0);
        struct std__less_int_* cast621 = (struct std__less_int_*)base620;
        int* t622 = __k595;
        struct std___Rb_tree_node_base* t623 = __position594._M_node;
        int* r624 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t623);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r625 = std__less_int___operator___int_const___int_const___const(cast621, t622, r624);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        if (r625) {
          struct std___Rb_tree_iterator_int_ __before626;
          struct std___Rb_tree_node_base* t627 = __position594._M_node;
          std___Rb_tree_iterator_int____Rb_tree_iterator(&__before626, t627);
            struct std___Rb_tree_node_base* t628 = __position594._M_node;
            struct std___Rb_tree_node_base** r629 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t597);
            struct std___Rb_tree_node_base* t630 = *r629;
            _Bool c631 = ((t628 == t630)) ? 1 : 0;
            if (c631) {
              struct std___Rb_tree_node_base** r632 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t597);
              struct std___Rb_tree_node_base** r633 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t597);
              _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval596, r632, r633);
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t634 = __retval596;
              return t634;
            } else {
                struct std___Rb_tree_key_compare_std__less_int__* base635 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t597->_M_impl) + 0);
                struct std__less_int_* cast636 = (struct std__less_int_*)base635;
                struct std___Rb_tree_iterator_int_* r637 = std___Rb_tree_iterator_int___operator__(&__before626);
                struct std___Rb_tree_node_base* t638 = r637->_M_node;
                int* r639 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t638);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                int* t640 = __k595;
                _Bool r641 = std__less_int___operator___int_const___int_const___const(cast636, r639, t640);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                if (r641) {
                    struct std___Rb_tree_node_base* t642 = __before626._M_node;
                    struct std___Rb_tree_node_base* r643 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t642);
                    _Bool cast644 = (_Bool)r643;
                    _Bool u645 = !cast644;
                    if (u645) {
                      struct std___Rb_tree_node_base* ref_tmp1646;
                      struct std___Rb_tree_node_base* c647 = ((void*)0);
                      ref_tmp1646 = c647;
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval596, &ref_tmp1646, &__before626._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t648 = __retval596;
                      return t648;
                    } else {
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval596, &__position594._M_node, &__position594._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t649 = __retval596;
                      return t649;
                    }
                } else {
                  int* t650 = __k595;
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r651 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(t597, t650);
                  if (__cir_exc_active) {
                    struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                    return __cir_eh_ret;
                  }
                  __retval596 = r651;
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t652 = __retval596;
                  return t652;
                }
            }
        } else {
            struct std___Rb_tree_key_compare_std__less_int__* base653 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t597->_M_impl) + 0);
            struct std__less_int_* cast654 = (struct std__less_int_*)base653;
            struct std___Rb_tree_node_base* t655 = __position594._M_node;
            int* r656 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t655);
            if (__cir_exc_active) {
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
              return __cir_eh_ret;
            }
            int* t657 = __k595;
            _Bool r658 = std__less_int___operator___int_const___int_const___const(cast654, r656, t657);
            if (__cir_exc_active) {
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
              return __cir_eh_ret;
            }
            if (r658) {
              struct std___Rb_tree_iterator_int_ __after659;
              struct std___Rb_tree_node_base* t660 = __position594._M_node;
              std___Rb_tree_iterator_int____Rb_tree_iterator(&__after659, t660);
                struct std___Rb_tree_node_base* t661 = __position594._M_node;
                struct std___Rb_tree_node_base** r662 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t597);
                struct std___Rb_tree_node_base* t663 = *r662;
                _Bool c664 = ((t661 == t663)) ? 1 : 0;
                if (c664) {
                  struct std___Rb_tree_node_base* ref_tmp2665;
                  struct std___Rb_tree_node_base* c666 = ((void*)0);
                  ref_tmp2665 = c666;
                  struct std___Rb_tree_node_base** r667 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t597);
                  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval596, &ref_tmp2665, r667);
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t668 = __retval596;
                  return t668;
                } else {
                    struct std___Rb_tree_key_compare_std__less_int__* base669 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t597->_M_impl) + 0);
                    struct std__less_int_* cast670 = (struct std__less_int_*)base669;
                    int* t671 = __k595;
                    struct std___Rb_tree_iterator_int_* r672 = std___Rb_tree_iterator_int___operator___2(&__after659);
                    struct std___Rb_tree_node_base* t673 = r672->_M_node;
                    int* r674 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t673);
                    if (__cir_exc_active) {
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                      return __cir_eh_ret;
                    }
                    _Bool r675 = std__less_int___operator___int_const___int_const___const(cast670, t671, r674);
                    if (__cir_exc_active) {
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                      return __cir_eh_ret;
                    }
                    if (r675) {
                        struct std___Rb_tree_node_base* t676 = __position594._M_node;
                        struct std___Rb_tree_node_base* r677 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t676);
                        _Bool cast678 = (_Bool)r677;
                        _Bool u679 = !cast678;
                        if (u679) {
                          struct std___Rb_tree_node_base* ref_tmp3680;
                          struct std___Rb_tree_node_base* c681 = ((void*)0);
                          ref_tmp3680 = c681;
                          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval596, &ref_tmp3680, &__position594._M_node);
                          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t682 = __retval596;
                          return t682;
                        } else {
                          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval596, &__after659._M_node, &__after659._M_node);
                          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t683 = __retval596;
                          return t683;
                        }
                    } else {
                      int* t684 = __k595;
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r685 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(t597, t684);
                      if (__cir_exc_active) {
                        struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                        return __cir_eh_ret;
                      }
                      __retval596 = r685;
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t686 = __retval596;
                      return t686;
                    }
                }
            } else {
              struct std___Rb_tree_node_base* ref_tmp4687;
              struct std___Rb_tree_node_base* c688 = ((void*)0);
              ref_tmp4687 = c688;
              _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval596, &__position594._M_node, &ref_tmp4687);
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t689 = __retval596;
              return t689;
            }
        }
    }
  abort();
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE17_M_insert_unique_IiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiESt23_Rb_tree_const_iteratorIiEOT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique__int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v690, struct std___Rb_tree_const_iterator_int_ v691, int* v692, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v693) {
bb694:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this695;
  struct std___Rb_tree_const_iterator_int_ __position696;
  int* __v697;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen698;
  struct std___Rb_tree_iterator_int_ __retval699;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __res700;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0701;
  struct std___Identity_int_ ref_tmp0702;
  this695 = v690;
  __position696 = v691;
  __v697 = v692;
  __node_gen698 = v693;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t703 = this695;
  agg_tmp0701 = __position696; // copy
  int* t704 = __v697;
  int* r705 = std___Identity_int___operator___int___const(&ref_tmp0702, t704);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_const_iterator_int_ t706 = agg_tmp0701;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r707 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_unique_pos(t703, t706, r705);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __res700 = r707;
    struct std___Rb_tree_node_base* t708 = __res700.second;
    _Bool cast709 = (_Bool)t708;
    if (cast709) {
      struct std___Rb_tree_node_base* t710 = __res700.first;
      struct std___Rb_tree_node_base* t711 = __res700.second;
      int* t712 = __v697;
      struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t713 = __node_gen698;
      struct std___Rb_tree_iterator_int_ r714 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t703, t710, t711, t712, t713);
      if (__cir_exc_active) {
        struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      __retval699 = r714;
      struct std___Rb_tree_iterator_int_ t715 = __retval699;
      return t715;
    }
  struct std___Rb_tree_node_base* t716 = __res700.first;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval699, t716);
  struct std___Rb_tree_iterator_int_ t717 = __retval699;
  return t717;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE17_M_insert_unique_IiEESt17_Rb_tree_iteratorIiESt23_Rb_tree_const_iteratorIiEOT_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique__int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v718, struct std___Rb_tree_const_iterator_int_ v719, int* v720) {
bb721:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this722;
  struct std___Rb_tree_const_iterator_int_ __pos723;
  int* __x724;
  struct std___Rb_tree_iterator_int_ __retval725;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node __an726;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0727;
  this722 = v718;
  __pos723 = v719;
  __x724 = v720;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t728 = this722;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(&__an726, t728);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  agg_tmp0727 = __pos723; // copy
  int* t729 = __x724;
  struct std___Rb_tree_const_iterator_int_ t730 = agg_tmp0727;
  struct std___Rb_tree_iterator_int_ r731 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique__int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t728, t730, t729, &__an726);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval725 = r731;
  struct std___Rb_tree_iterator_int_ t732 = __retval725;
  return t732;
}

// function: _ZNSt3setIiSt4lessIiESaIiEE6insertESt23_Rb_tree_const_iteratorIiEOi
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____insert_2(struct std__set_int__std__less_int___std__allocator_int__* v733, struct std___Rb_tree_const_iterator_int_ v734, int* v735) {
bb736:
  struct std__set_int__std__less_int___std__allocator_int__* this737;
  struct std___Rb_tree_const_iterator_int_ __position738;
  int* __x739;
  struct std___Rb_tree_const_iterator_int_ __retval740;
  struct std___Rb_tree_iterator_int_ ref_tmp0741;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0742;
  this737 = v733;
  __position738 = v734;
  __x739 = v735;
  struct std__set_int__std__less_int___std__allocator_int__* t743 = this737;
  agg_tmp0742 = __position738; // copy
  int* t744 = __x739;
  struct std___Rb_tree_const_iterator_int_ t745 = agg_tmp0742;
  struct std___Rb_tree_iterator_int_ r746 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique__int_(&t743->_M_t, t745, t744);
  if (__cir_exc_active) {
    struct std___Rb_tree_const_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  ref_tmp0741 = r746;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&__retval740, &ref_tmp0741);
  struct std___Rb_tree_const_iterator_int_ t747 = __retval740;
  return t747;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v748, int v749) {
bb750:
  int __a751;
  int __b752;
  int __retval753;
  __a751 = v748;
  __b752 = v749;
  int t754 = __a751;
  int t755 = __b752;
  int b756 = t754 | t755;
  __retval753 = b756;
  int t757 = __retval753;
  return t757;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v758) {
bb759:
  struct std__basic_ios_char__std__char_traits_char__* this760;
  int __retval761;
  this760 = v758;
  struct std__basic_ios_char__std__char_traits_char__* t762 = this760;
  struct std__ios_base* base763 = (struct std__ios_base*)((char *)t762 + 0);
  int t764 = base763->_M_streambuf_state;
  __retval761 = t764;
  int t765 = __retval761;
  return t765;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v766, int v767) {
bb768:
  struct std__basic_ios_char__std__char_traits_char__* this769;
  int __state770;
  this769 = v766;
  __state770 = v767;
  struct std__basic_ios_char__std__char_traits_char__* t771 = this769;
  int r772 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t771);
  if (__cir_exc_active) {
    return;
  }
  int t773 = __state770;
  int r774 = std__operator_(r772, t773);
  std__basic_ios_char__std__char_traits_char_____clear(t771, r774);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v775, char* v776) {
bb777:
  char* __c1778;
  char* __c2779;
  _Bool __retval780;
  __c1778 = v775;
  __c2779 = v776;
  char* t781 = __c1778;
  char t782 = *t781;
  int cast783 = (int)t782;
  char* t784 = __c2779;
  char t785 = *t784;
  int cast786 = (int)t785;
  _Bool c787 = ((cast783 == cast786)) ? 1 : 0;
  __retval780 = c787;
  _Bool t788 = __retval780;
  return t788;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v789) {
bb790:
  char* __p791;
  unsigned long __retval792;
  unsigned long __i793;
  __p791 = v789;
  unsigned long c794 = 0;
  __i793 = c794;
    char ref_tmp0795;
    while (1) {
      unsigned long t796 = __i793;
      char* t797 = __p791;
      char* ptr798 = &(t797)[t796];
      char c799 = 0;
      ref_tmp0795 = c799;
      _Bool r800 = __gnu_cxx__char_traits_char___eq(ptr798, &ref_tmp0795);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u801 = !r800;
      if (!u801) break;
      unsigned long t802 = __i793;
      unsigned long u803 = t802 + 1;
      __i793 = u803;
    }
  unsigned long t804 = __i793;
  __retval792 = t804;
  unsigned long t805 = __retval792;
  return t805;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v806) {
bb807:
  char* __s808;
  unsigned long __retval809;
  __s808 = v806;
    _Bool r810 = std____is_constant_evaluated();
    if (r810) {
      char* t811 = __s808;
      unsigned long r812 = __gnu_cxx__char_traits_char___length(t811);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval809 = r812;
      unsigned long t813 = __retval809;
      return t813;
    }
  char* t814 = __s808;
  unsigned long r815 = strlen(t814);
  __retval809 = r815;
  unsigned long t816 = __retval809;
  return t816;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v817, char* v818) {
bb819:
  struct std__basic_ostream_char__std__char_traits_char__* __out820;
  char* __s821;
  struct std__basic_ostream_char__std__char_traits_char__* __retval822;
  __out820 = v817;
  __s821 = v818;
    char* t823 = __s821;
    _Bool cast824 = (_Bool)t823;
    _Bool u825 = !cast824;
    if (u825) {
      struct std__basic_ostream_char__std__char_traits_char__* t826 = __out820;
      void** v827 = (void**)t826;
      void* v828 = *((void**)v827);
      unsigned char* cast829 = (unsigned char*)v828;
      long c830 = -24;
      unsigned char* ptr831 = &(cast829)[c830];
      long* cast832 = (long*)ptr831;
      long t833 = *cast832;
      unsigned char* cast834 = (unsigned char*)t826;
      unsigned char* ptr835 = &(cast834)[t833];
      struct std__basic_ostream_char__std__char_traits_char__* cast836 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr835;
      struct std__basic_ios_char__std__char_traits_char__* cast837 = (struct std__basic_ios_char__std__char_traits_char__*)cast836;
      int t838 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast837, t838);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t839 = __out820;
      char* t840 = __s821;
      char* t841 = __s821;
      unsigned long r842 = std__char_traits_char___length(t841);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast843 = (long)r842;
      struct std__basic_ostream_char__std__char_traits_char__* r844 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t839, t840, cast843);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t845 = __out820;
  __retval822 = t845;
  struct std__basic_ostream_char__std__char_traits_char__* t846 = __retval822;
  return t846;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* v847, struct std___Rb_tree_node_base* v848) {
bb849:
  struct std___Rb_tree_const_iterator_int_* this850;
  struct std___Rb_tree_node_base* __x851;
  this850 = v847;
  __x851 = v848;
  struct std___Rb_tree_const_iterator_int_* t852 = this850;
  struct std___Rb_tree_node_base* t853 = __x851;
  t852->_M_node = t853;
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5beginEv
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v854) {
bb855:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this856;
  struct std___Rb_tree_const_iterator_int_ __retval857;
  this856 = v854;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t858 = this856;
  struct std___Rb_tree_header* base859 = (struct std___Rb_tree_header*)((char *)&(t858->_M_impl) + 8);
  struct std___Rb_tree_node_base* t860 = base859->_M_header._M_left;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval857, t860);
  struct std___Rb_tree_const_iterator_int_ t861 = __retval857;
  return t861;
}

// function: _ZNKSt3setIiSt4lessIiESaIiEE5beginEv
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____begin___const(struct std__set_int__std__less_int___std__allocator_int__* v862) {
bb863:
  struct std__set_int__std__less_int___std__allocator_int__* this864;
  struct std___Rb_tree_const_iterator_int_ __retval865;
  this864 = v862;
  struct std__set_int__std__less_int___std__allocator_int__* t866 = this864;
  struct std___Rb_tree_const_iterator_int_ r867 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(&t866->_M_t);
  __retval865 = r867;
  struct std___Rb_tree_const_iterator_int_ t868 = __retval865;
  return t868;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEaSEOS0_
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* v869, struct std___Rb_tree_const_iterator_int_* v870) {
bb871:
  struct std___Rb_tree_const_iterator_int_* this872;
  struct std___Rb_tree_const_iterator_int_* unnamed873;
  struct std___Rb_tree_const_iterator_int_* __retval874;
  this872 = v869;
  unnamed873 = v870;
  struct std___Rb_tree_const_iterator_int_* t875 = this872;
  struct std___Rb_tree_const_iterator_int_* t876 = unnamed873;
  struct std___Rb_tree_node_base* t877 = t876->_M_node;
  t875->_M_node = t877;
  __retval874 = t875;
  struct std___Rb_tree_const_iterator_int_* t878 = __retval874;
  return t878;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEppEi
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* v879, int v880) {
bb881:
  struct std___Rb_tree_const_iterator_int_* this882;
  int unnamed883;
  struct std___Rb_tree_const_iterator_int_ __retval884;
  this882 = v879;
  unnamed883 = v880;
  struct std___Rb_tree_const_iterator_int_* t885 = this882;
  __retval884 = *t885; // copy
  struct std___Rb_tree_node_base* t886 = t885->_M_node;
  struct std___Rb_tree_node_base* r887 = std___Rb_tree_increment(t886);
  t885->_M_node = r887;
  struct std___Rb_tree_const_iterator_int_ t888 = __retval884;
  return t888;
}

// function: _ZNSt3setIiSt4lessIiESaIiEED2Ev
void std__set_int__std__less_int___std__allocator_int______set(struct std__set_int__std__less_int___std__allocator_int__* v889) {
bb890:
  struct std__set_int__std__less_int___std__allocator_int__* this891;
  this891 = v889;
  struct std__set_int__std__less_int___std__allocator_int__* t892 = this891;
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(&t892->_M_t);
  }
  return;
}

// function: main
int main() {
bb893:
  int __retval894;
  struct std__set_int__std__less_int___std__allocator_int__ myset895;
  struct std___Rb_tree_const_iterator_int_ it896;
  struct std__pair_std___Rb_tree_const_iterator_int___bool_ ret897;
  struct std__pair_std___Rb_tree_const_iterator_int___bool_ ref_tmp1898;
  int ref_tmp2899;
  struct std___Rb_tree_const_iterator_int_ agg_tmp1900;
  int ref_tmp3901;
  struct std___Rb_tree_const_iterator_int_ agg_tmp2902;
  struct std___Rb_tree_const_iterator_int_ agg_tmp3903;
  int ref_tmp4904;
  struct std___Rb_tree_const_iterator_int_ agg_tmp4905;
  struct std___Rb_tree_const_iterator_int_ agg_tmp5906;
  int ref_tmp5907;
  struct std___Rb_tree_const_iterator_int_ agg_tmp6908;
  int myints909[3];
  struct std___Rb_tree_const_iterator_int_ ref_tmp6910;
  struct std___Rb_tree_const_iterator_int_ agg_tmp7911;
  struct std___Rb_tree_const_iterator_int_ agg_tmp8912;
  struct std___Rb_tree_const_iterator_int_ agg_tmp9913;
  struct std___Rb_tree_const_iterator_int_ agg_tmp10914;
  struct std___Rb_tree_const_iterator_int_ agg_tmp11915;
  struct std___Rb_tree_const_iterator_int_ agg_tmp12916;
  struct std___Rb_tree_const_iterator_int_ agg_tmp13917;
  int c918 = 0;
  __retval894 = c918;
  std__set_int__std__less_int___std__allocator_int_____set(&myset895);
    std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(&it896);
    _ZNSt4pairISt23_Rb_tree_const_iteratorIiEbEC2EvQaa26is_default_constructible_vIT_E26is_default_constructible_vIT0_E(&ret897);
      int i919;
      int ref_tmp0920;
      struct std__pair_std___Rb_tree_const_iterator_int___bool_ agg_tmp0921;
      int c922 = 1;
      i919 = c922;
      while (1) {
        int t924 = i919;
        int c925 = 5;
        _Bool c926 = ((t924 <= c925)) ? 1 : 0;
        if (!c926) break;
        int t927 = i919;
        int c928 = 10;
        int b929 = t927 * c928;
        ref_tmp0920 = b929;
        struct std__pair_std___Rb_tree_const_iterator_int___bool_ r930 = std__set_int__std__less_int___std__allocator_int_____insert(&myset895, &ref_tmp0920);
        if (__cir_exc_active) {
          {
            std__set_int__std__less_int___std__allocator_int______set(&myset895);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        agg_tmp0921 = r930;
      for_step923: ;
        int t931 = i919;
        int u932 = t931 + 1;
        i919 = u932;
      }
    unsigned long r933 = std__set_int__std__less_int___std__allocator_int_____size___const(&myset895);
    unsigned long c934 = 5;
    _Bool c935 = ((r933 == c934)) ? 1 : 0;
    if (c935) {
    } else {
      char* cast936 = (char*)&(_str);
      char* c937 = _str_1;
      unsigned int c938 = 22;
      char* cast939 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast936, c937, c938, cast939);
    }
    int c940 = 20;
    ref_tmp2899 = c940;
    struct std__pair_std___Rb_tree_const_iterator_int___bool_ r941 = std__set_int__std__less_int___std__allocator_int_____insert(&myset895, &ref_tmp2899);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset895);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    ref_tmp1898 = r941;
    struct std__pair_std___Rb_tree_const_iterator_int___bool_* r942 = _ZNSt4pairISt23_Rb_tree_const_iteratorIiEbEaSEOS2_Qcl13_S_assignableIT_T0_EE(&ret897, &ref_tmp1898);
    _Bool t943 = ret897.second;
    _Bool u944 = !t943;
    if (u944) {
    } else {
      char* cast945 = (char*)&(_str_2);
      char* c946 = _str_1;
      unsigned int c947 = 25;
      char* cast948 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast945, c946, c947, cast948);
    }
    int* r949 = std___Rb_tree_const_iterator_int___operator____const(&ret897.first);
    int t950 = *r949;
    int c951 = 20;
    _Bool c952 = ((t950 == c951)) ? 1 : 0;
    if (c952) {
    } else {
      char* cast953 = (char*)&(_str_3);
      char* c954 = _str_1;
      unsigned int c955 = 26;
      char* cast956 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast953, c954, c955, cast956);
    }
      _Bool t957 = ret897.second;
      int cast958 = (int)t957;
      _Bool c959 = 0;
      int cast960 = (int)c959;
      _Bool c961 = ((cast958 == cast960)) ? 1 : 0;
      if (c961) {
        struct std___Rb_tree_const_iterator_int_* r962 = std___Rb_tree_const_iterator_int___operator__2(&it896, &ret897.first);
      }
    agg_tmp1900 = it896; // copy
    int c963 = 25;
    ref_tmp3901 = c963;
    struct std___Rb_tree_const_iterator_int_ t964 = agg_tmp1900;
    struct std___Rb_tree_const_iterator_int_ r965 = std__set_int__std__less_int___std__allocator_int_____insert_2(&myset895, t964, &ref_tmp3901);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset895);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp2902 = r965;
    agg_tmp3903 = it896; // copy
    int c966 = 24;
    ref_tmp4904 = c966;
    struct std___Rb_tree_const_iterator_int_ t967 = agg_tmp3903;
    struct std___Rb_tree_const_iterator_int_ r968 = std__set_int__std__less_int___std__allocator_int_____insert_2(&myset895, t967, &ref_tmp4904);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset895);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp4905 = r968;
    agg_tmp5906 = it896; // copy
    int c969 = 26;
    ref_tmp5907 = c969;
    struct std___Rb_tree_const_iterator_int_ t970 = agg_tmp5906;
    struct std___Rb_tree_const_iterator_int_ r971 = std__set_int__std__less_int___std__allocator_int_____insert_2(&myset895, t970, &ref_tmp5907);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset895);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp6908 = r971;
    // array copy
    __builtin_memcpy(myints909, __const_main_myints, (unsigned long)3 * sizeof(__const_main_myints[0]));
    char* cast972 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* r973 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast972);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset895);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std___Rb_tree_const_iterator_int_ r974 = std__set_int__std__less_int___std__allocator_int_____begin___const(&myset895);
    ref_tmp6910 = r974;
    struct std___Rb_tree_const_iterator_int_* r975 = std___Rb_tree_const_iterator_int___operator_(&it896, &ref_tmp6910);
    int* r976 = std___Rb_tree_const_iterator_int___operator____const(&it896);
    int t977 = *r976;
    int c978 = 10;
    _Bool c979 = ((t977 == c978)) ? 1 : 0;
    if (c979) {
    } else {
      char* cast980 = (char*)&(_str_5);
      char* c981 = _str_1;
      unsigned int c982 = 41;
      char* cast983 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast980, c981, c982, cast983);
    }
    int c984 = 0;
    struct std___Rb_tree_const_iterator_int_ r985 = std___Rb_tree_const_iterator_int___operator__(&it896, c984);
    agg_tmp7911 = r985;
    int* r986 = std___Rb_tree_const_iterator_int___operator____const(&it896);
    int t987 = *r986;
    int c988 = 20;
    _Bool c989 = ((t987 == c988)) ? 1 : 0;
    if (c989) {
    } else {
      char* cast990 = (char*)&(_str_6);
      char* c991 = _str_1;
      unsigned int c992 = 45;
      char* cast993 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast990, c991, c992, cast993);
    }
    int c994 = 0;
    struct std___Rb_tree_const_iterator_int_ r995 = std___Rb_tree_const_iterator_int___operator__(&it896, c994);
    agg_tmp8912 = r995;
    int* r996 = std___Rb_tree_const_iterator_int___operator____const(&it896);
    int t997 = *r996;
    int c998 = 24;
    _Bool c999 = ((t997 == c998)) ? 1 : 0;
    if (c999) {
    } else {
      char* cast1000 = (char*)&(_str_7);
      char* c1001 = _str_1;
      unsigned int c1002 = 47;
      char* cast1003 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1000, c1001, c1002, cast1003);
    }
    int c1004 = 0;
    struct std___Rb_tree_const_iterator_int_ r1005 = std___Rb_tree_const_iterator_int___operator__(&it896, c1004);
    agg_tmp9913 = r1005;
    int* r1006 = std___Rb_tree_const_iterator_int___operator____const(&it896);
    int t1007 = *r1006;
    int c1008 = 25;
    _Bool c1009 = ((t1007 == c1008)) ? 1 : 0;
    if (c1009) {
    } else {
      char* cast1010 = (char*)&(_str_8);
      char* c1011 = _str_1;
      unsigned int c1012 = 49;
      char* cast1013 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1010, c1011, c1012, cast1013);
    }
    int c1014 = 0;
    struct std___Rb_tree_const_iterator_int_ r1015 = std___Rb_tree_const_iterator_int___operator__(&it896, c1014);
    agg_tmp10914 = r1015;
    int* r1016 = std___Rb_tree_const_iterator_int___operator____const(&it896);
    int t1017 = *r1016;
    int c1018 = 26;
    _Bool c1019 = ((t1017 == c1018)) ? 1 : 0;
    if (c1019) {
    } else {
      char* cast1020 = (char*)&(_str_9);
      char* c1021 = _str_1;
      unsigned int c1022 = 51;
      char* cast1023 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1020, c1021, c1022, cast1023);
    }
    int c1024 = 0;
    struct std___Rb_tree_const_iterator_int_ r1025 = std___Rb_tree_const_iterator_int___operator__(&it896, c1024);
    agg_tmp11915 = r1025;
    int* r1026 = std___Rb_tree_const_iterator_int___operator____const(&it896);
    int t1027 = *r1026;
    int c1028 = 30;
    _Bool c1029 = ((t1027 == c1028)) ? 1 : 0;
    if (c1029) {
    } else {
      char* cast1030 = (char*)&(_str_10);
      char* c1031 = _str_1;
      unsigned int c1032 = 53;
      char* cast1033 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1030, c1031, c1032, cast1033);
    }
    int c1034 = 0;
    struct std___Rb_tree_const_iterator_int_ r1035 = std___Rb_tree_const_iterator_int___operator__(&it896, c1034);
    agg_tmp12916 = r1035;
    int* r1036 = std___Rb_tree_const_iterator_int___operator____const(&it896);
    int t1037 = *r1036;
    int c1038 = 40;
    _Bool c1039 = ((t1037 == c1038)) ? 1 : 0;
    if (c1039) {
    } else {
      char* cast1040 = (char*)&(_str_11);
      char* c1041 = _str_1;
      unsigned int c1042 = 55;
      char* cast1043 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1040, c1041, c1042, cast1043);
    }
    int c1044 = 0;
    struct std___Rb_tree_const_iterator_int_ r1045 = std___Rb_tree_const_iterator_int___operator__(&it896, c1044);
    agg_tmp13917 = r1045;
    int* r1046 = std___Rb_tree_const_iterator_int___operator____const(&it896);
    int t1047 = *r1046;
    int c1048 = 50;
    _Bool c1049 = ((t1047 == c1048)) ? 1 : 0;
    if (c1049) {
    } else {
      char* cast1050 = (char*)&(_str_12);
      char* c1051 = _str_1;
      unsigned int c1052 = 57;
      char* cast1053 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1050, c1051, c1052, cast1053);
    }
    int c1054 = 0;
    __retval894 = c1054;
    int t1055 = __retval894;
    int ret_val1056 = t1055;
    {
      std__set_int__std__less_int___std__allocator_int______set(&myset895);
    }
    return ret_val1056;
  int t1057 = __retval894;
  return t1057;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1058) {
bb1059:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1060;
  this1060 = v1058;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1061 = this1060;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(&t1061->_M_impl);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1062) {
bb1063:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1064;
  this1064 = v1062;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1065 = this1064;
    struct std___Rb_tree_node_int_* r1066 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(t1065);
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t1065, r1066);
    if (__cir_exc_active) {
      {
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t1065->_M_impl);
      }
      return;
    }
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t1065->_M_impl);
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v1067) {
bb1068:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this1069;
  this1069 = v1067;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t1070 = this1069;
  struct std__allocator_std___Rb_tree_node_int__* base1071 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t1070 + 0);
  std__allocator_std___Rb_tree_node_int_____allocator(base1071);
    struct std___Rb_tree_key_compare_std__less_int__* base1072 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)t1070 + 0);
    std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(base1072);
    struct std___Rb_tree_header* base1073 = (struct std___Rb_tree_header*)((char *)t1070 + 8);
    std___Rb_tree_header___Rb_tree_header(base1073);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v1074) {
bb1075:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this1076;
  this1076 = v1074;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t1077 = this1076;
  {
    struct std__allocator_std___Rb_tree_node_int__* base1078 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t1077 + 0);
    std__allocator_std___Rb_tree_node_int______allocator(base1078);
  }
  return;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEEC2Ev
void std____new_allocator_std___Rb_tree_node_int_______new_allocator(struct std____new_allocator_std___Rb_tree_node_int__* v1079) {
bb1080:
  struct std____new_allocator_std___Rb_tree_node_int__* this1081;
  this1081 = v1079;
  struct std____new_allocator_std___Rb_tree_node_int__* t1082 = this1081;
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEEC2Ev
void std__allocator_std___Rb_tree_node_int_____allocator(struct std__allocator_std___Rb_tree_node_int__* v1083) {
bb1084:
  struct std__allocator_std___Rb_tree_node_int__* this1085;
  this1085 = v1083;
  struct std__allocator_std___Rb_tree_node_int__* t1086 = this1085;
  struct std____new_allocator_std___Rb_tree_node_int__* base1087 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t1086 + 0);
  std____new_allocator_std___Rb_tree_node_int_______new_allocator(base1087);
  return;
}

// function: _ZNSt20_Rb_tree_key_compareISt4lessIiEEC2Ev
void std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(struct std___Rb_tree_key_compare_std__less_int__* v1088) {
bb1089:
  struct std___Rb_tree_key_compare_std__less_int__* this1090;
  this1090 = v1088;
  return;
}

// function: _ZNSt15_Rb_tree_header8_M_resetEv
void std___Rb_tree_header___M_reset(struct std___Rb_tree_header* v1091) {
bb1092:
  struct std___Rb_tree_header* this1093;
  this1093 = v1091;
  struct std___Rb_tree_header* t1094 = this1093;
  struct std___Rb_tree_node_base* c1095 = ((void*)0);
  t1094->_M_header._M_parent = c1095;
  t1094->_M_header._M_left = &t1094->_M_header;
  t1094->_M_header._M_right = &t1094->_M_header;
  unsigned long c1096 = 0;
  t1094->_M_node_count = c1096;
  return;
}

// function: _ZNSt15_Rb_tree_headerC2Ev
void std___Rb_tree_header___Rb_tree_header(struct std___Rb_tree_header* v1097) {
bb1098:
  struct std___Rb_tree_header* this1099;
  this1099 = v1097;
  struct std___Rb_tree_header* t1100 = this1099;
  unsigned int c1101 = 0;
  t1100->_M_header._M_color = c1101;
  std___Rb_tree_header___M_reset(t1100);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEED2Ev
void std__allocator_std___Rb_tree_node_int______allocator(struct std__allocator_std___Rb_tree_node_int__* v1102) {
bb1103:
  struct std__allocator_std___Rb_tree_node_int__* this1104;
  this1104 = v1102;
  struct std__allocator_std___Rb_tree_node_int__* t1105 = this1104;
  return;
}

// function: _ZNSt13_Rb_tree_nodeIiE11_M_node_ptrEv
struct std___Rb_tree_node_int_* std___Rb_tree_node_int____M_node_ptr(struct std___Rb_tree_node_int_* v1106) {
bb1107:
  struct std___Rb_tree_node_int_* this1108;
  struct std___Rb_tree_node_int_* __retval1109;
  this1108 = v1106;
  struct std___Rb_tree_node_int_* t1110 = this1108;
  __retval1109 = t1110;
  struct std___Rb_tree_node_int_* t1111 = __retval1109;
  return t1111;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(struct std___Rb_tree_node_int_* v1112) {
bb1113:
  struct std___Rb_tree_node_int_* __x1114;
  struct std___Rb_tree_node_int_* __retval1115;
  __x1114 = v1112;
  struct std___Rb_tree_node_int_* t1116 = __x1114;
  struct std___Rb_tree_node_base* base1117 = (struct std___Rb_tree_node_base*)((char *)t1116 + 0);
  struct std___Rb_tree_node_base* t1118 = base1117->_M_right;
  _Bool cast1119 = (_Bool)t1118;
  struct std___Rb_tree_node_int_* ternary1120;
  if (cast1119) {
    struct std___Rb_tree_node_int_* t1121 = __x1114;
    struct std___Rb_tree_node_base* base1122 = (struct std___Rb_tree_node_base*)((char *)t1121 + 0);
    struct std___Rb_tree_node_base* t1123 = base1122->_M_right;
    struct std___Rb_tree_node_int_* derived1124 = (struct std___Rb_tree_node_int_*)((char *)t1123 - 0);
    struct std___Rb_tree_node_int_* r1125 = std___Rb_tree_node_int____M_node_ptr(derived1124);
    ternary1120 = (struct std___Rb_tree_node_int_*)r1125;
  } else {
    struct std___Rb_tree_node_int_* c1126 = ((void*)0);
    ternary1120 = (struct std___Rb_tree_node_int_*)c1126;
  }
  __retval1115 = ternary1120;
  struct std___Rb_tree_node_int_* t1127 = __retval1115;
  return t1127;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(struct std___Rb_tree_node_int_* v1128) {
bb1129:
  struct std___Rb_tree_node_int_* __x1130;
  struct std___Rb_tree_node_int_* __retval1131;
  __x1130 = v1128;
  struct std___Rb_tree_node_int_* t1132 = __x1130;
  struct std___Rb_tree_node_base* base1133 = (struct std___Rb_tree_node_base*)((char *)t1132 + 0);
  struct std___Rb_tree_node_base* t1134 = base1133->_M_left;
  _Bool cast1135 = (_Bool)t1134;
  struct std___Rb_tree_node_int_* ternary1136;
  if (cast1135) {
    struct std___Rb_tree_node_int_* t1137 = __x1130;
    struct std___Rb_tree_node_base* base1138 = (struct std___Rb_tree_node_base*)((char *)t1137 + 0);
    struct std___Rb_tree_node_base* t1139 = base1138->_M_left;
    struct std___Rb_tree_node_int_* derived1140 = (struct std___Rb_tree_node_int_*)((char *)t1139 - 0);
    struct std___Rb_tree_node_int_* r1141 = std___Rb_tree_node_int____M_node_ptr(derived1140);
    ternary1136 = (struct std___Rb_tree_node_int_*)r1141;
  } else {
    struct std___Rb_tree_node_int_* c1142 = ((void*)0);
    ternary1136 = (struct std___Rb_tree_node_int_*)c1142;
  }
  __retval1131 = ternary1136;
  struct std___Rb_tree_node_int_* t1143 = __retval1131;
  return t1143;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1144) {
bb1145:
  int* __location1146;
  __location1146 = v1144;
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(struct std__allocator_std___Rb_tree_node_int__* v1147, int* v1148) {
bb1149:
  struct std__allocator_std___Rb_tree_node_int__* __a1150;
  int* __p1151;
  __a1150 = v1147;
  __p1151 = v1148;
  int* t1152 = __p1151;
  void_std__destroy_at_int_(t1152);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___Rb_tree_node_int__* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1153) {
bb1154:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1155;
  struct std__allocator_std___Rb_tree_node_int__* __retval1156;
  this1155 = v1153;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1157 = this1155;
  struct std__allocator_std___Rb_tree_node_int__* base1158 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)&(t1157->_M_impl) + 0);
  __retval1156 = base1158;
  struct std__allocator_std___Rb_tree_node_int__* t1159 = __retval1156;
  return t1159;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v1160) {
bb1161:
  struct __gnu_cxx____aligned_membuf_int_* this1162;
  void* __retval1163;
  this1162 = v1160;
  struct __gnu_cxx____aligned_membuf_int_* t1164 = this1162;
  void* cast1165 = (void*)&(t1164->_M_storage);
  __retval1163 = cast1165;
  void* t1166 = __retval1163;
  return t1166;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v1167) {
bb1168:
  struct __gnu_cxx____aligned_membuf_int_* this1169;
  int* __retval1170;
  this1169 = v1167;
  struct __gnu_cxx____aligned_membuf_int_* t1171 = this1169;
  void* r1172 = __gnu_cxx____aligned_membuf_int____M_addr(t1171);
  int* cast1173 = (int*)r1172;
  __retval1170 = cast1173;
  int* t1174 = __retval1170;
  return t1174;
}

// function: _ZNSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr(struct std___Rb_tree_node_int_* v1175) {
bb1176:
  struct std___Rb_tree_node_int_* this1177;
  int* __retval1178;
  this1177 = v1175;
  struct std___Rb_tree_node_int_* t1179 = this1177;
  int* r1180 = __gnu_cxx____aligned_membuf_int____M_ptr(&t1179->_M_storage);
  __retval1178 = r1180;
  int* t1181 = __retval1178;
  return t1181;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_destroy_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1182, struct std___Rb_tree_node_int_* v1183) {
bb1184:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1185;
  struct std___Rb_tree_node_int_* __p1186;
  this1185 = v1182;
  __p1186 = v1183;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1187 = this1185;
  struct std__allocator_std___Rb_tree_node_int__* r1188 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t1187);
  struct std___Rb_tree_node_int_* t1189 = __p1186;
  int* r1190 = std___Rb_tree_node_int____M_valptr(t1189);
  if (__cir_exc_active) {
    return;
  }
  void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(r1188, r1190);
  struct std___Rb_tree_node_int_* t1191 = __p1186;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1192:
  _Bool __retval1193;
    _Bool c1194 = 0;
    __retval1193 = c1194;
    _Bool t1195 = __retval1193;
    return t1195;
  abort();
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___Rb_tree_node_int_____deallocate(struct std____new_allocator_std___Rb_tree_node_int__* v1196, struct std___Rb_tree_node_int_* v1197, unsigned long v1198) {
bb1199:
  struct std____new_allocator_std___Rb_tree_node_int__* this1200;
  struct std___Rb_tree_node_int_* __p1201;
  unsigned long __n1202;
  this1200 = v1196;
  __p1201 = v1197;
  __n1202 = v1198;
  struct std____new_allocator_std___Rb_tree_node_int__* t1203 = this1200;
    unsigned long c1204 = 8;
    unsigned long c1205 = 16;
    _Bool c1206 = ((c1204 > c1205)) ? 1 : 0;
    if (c1206) {
      struct std___Rb_tree_node_int_* t1207 = __p1201;
      void* cast1208 = (void*)t1207;
      unsigned long t1209 = __n1202;
      unsigned long c1210 = 40;
      unsigned long b1211 = t1209 * c1210;
      unsigned long c1212 = 8;
      operator_delete_3(cast1208, b1211, c1212);
      return;
    }
  struct std___Rb_tree_node_int_* t1213 = __p1201;
  void* cast1214 = (void*)t1213;
  unsigned long t1215 = __n1202;
  unsigned long c1216 = 40;
  unsigned long b1217 = t1215 * c1216;
  operator_delete_2(cast1214, b1217);
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE10deallocateEPS0_m
void std__allocator_std___Rb_tree_node_int_____deallocate(struct std__allocator_std___Rb_tree_node_int__* v1218, struct std___Rb_tree_node_int_* v1219, unsigned long v1220) {
bb1221:
  struct std__allocator_std___Rb_tree_node_int__* this1222;
  struct std___Rb_tree_node_int_* __p1223;
  unsigned long __n1224;
  this1222 = v1218;
  __p1223 = v1219;
  __n1224 = v1220;
  struct std__allocator_std___Rb_tree_node_int__* t1225 = this1222;
    _Bool r1226 = std____is_constant_evaluated();
    if (r1226) {
      struct std___Rb_tree_node_int_* t1227 = __p1223;
      void* cast1228 = (void*)t1227;
      operator_delete(cast1228);
      return;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base1229 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t1225 + 0);
  struct std___Rb_tree_node_int_* t1230 = __p1223;
  unsigned long t1231 = __n1224;
  std____new_allocator_std___Rb_tree_node_int_____deallocate(base1229, t1230, t1231);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(struct std__allocator_std___Rb_tree_node_int__* v1232, struct std___Rb_tree_node_int_* v1233, unsigned long v1234) {
bb1235:
  struct std__allocator_std___Rb_tree_node_int__* __a1236;
  struct std___Rb_tree_node_int_* __p1237;
  unsigned long __n1238;
  __a1236 = v1232;
  __p1237 = v1233;
  __n1238 = v1234;
  struct std__allocator_std___Rb_tree_node_int__* t1239 = __a1236;
  struct std___Rb_tree_node_int_* t1240 = __p1237;
  unsigned long t1241 = __n1238;
  std__allocator_std___Rb_tree_node_int_____deallocate(t1239, t1240, t1241);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_put_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1242, struct std___Rb_tree_node_int_* v1243) {
bb1244:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1245;
  struct std___Rb_tree_node_int_* __p1246;
  this1245 = v1242;
  __p1246 = v1243;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1247 = this1245;
  struct std__allocator_std___Rb_tree_node_int__* r1248 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t1247);
  struct std___Rb_tree_node_int_* t1249 = __p1246;
  unsigned long c1250 = 1;
  std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(r1248, t1249, c1250);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_drop_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1251, struct std___Rb_tree_node_int_* v1252) {
bb1253:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1254;
  struct std___Rb_tree_node_int_* __p1255;
  this1254 = v1251;
  __p1255 = v1252;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1256 = this1254;
  struct std___Rb_tree_node_int_* t1257 = __p1255;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(t1256, t1257);
  struct std___Rb_tree_node_int_* t1258 = __p1255;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t1256, t1258);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1259, struct std___Rb_tree_node_int_* v1260) {
bb1261:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1262;
  struct std___Rb_tree_node_int_* __x1263;
  this1262 = v1259;
  __x1263 = v1260;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1264 = this1262;
    while (1) {
      struct std___Rb_tree_node_int_* t1265 = __x1263;
      _Bool cast1266 = (_Bool)t1265;
      if (!cast1266) break;
        struct std___Rb_tree_node_int_* __y1267;
        struct std___Rb_tree_node_int_* t1268 = __x1263;
        struct std___Rb_tree_node_int_* r1269 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(t1268);
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t1264, r1269);
        if (__cir_exc_active) {
          return;
        }
        struct std___Rb_tree_node_int_* t1270 = __x1263;
        struct std___Rb_tree_node_int_* r1271 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(t1270);
        if (__cir_exc_active) {
          return;
        }
        __y1267 = r1271;
        struct std___Rb_tree_node_int_* t1272 = __x1263;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(t1264, t1272);
        struct std___Rb_tree_node_int_* t1273 = __y1267;
        __x1263 = t1273;
    }
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_M_begin_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1274) {
bb1275:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1276;
  struct std___Rb_tree_node_int_* __retval1277;
  struct std___Rb_tree_node_base* __begin1278;
  this1276 = v1274;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1279 = this1276;
  struct std___Rb_tree_header* base1280 = (struct std___Rb_tree_header*)((char *)&(t1279->_M_impl) + 8);
  struct std___Rb_tree_node_base* t1281 = base1280->_M_header._M_parent;
  __begin1278 = t1281;
  struct std___Rb_tree_node_base* t1282 = __begin1278;
  _Bool cast1283 = (_Bool)t1282;
  struct std___Rb_tree_node_int_* ternary1284;
  if (cast1283) {
    struct std___Rb_tree_node_base* t1285 = __begin1278;
    struct std___Rb_tree_node_int_* derived1286 = (struct std___Rb_tree_node_int_*)((char *)t1285 - 0);
    struct std___Rb_tree_node_int_* r1287 = std___Rb_tree_node_int____M_node_ptr(derived1286);
    ternary1284 = (struct std___Rb_tree_node_int_*)r1287;
  } else {
    struct std___Rb_tree_node_int_* c1288 = ((void*)0);
    ternary1284 = (struct std___Rb_tree_node_int_*)c1288;
  }
  __retval1277 = ternary1284;
  struct std___Rb_tree_node_int_* t1289 = __retval1277;
  return t1289;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2ERKSt17_Rb_tree_iteratorIiE
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(struct std___Rb_tree_const_iterator_int_* v1290, struct std___Rb_tree_iterator_int_* v1291) {
bb1292:
  struct std___Rb_tree_const_iterator_int_* this1293;
  struct std___Rb_tree_iterator_int_* __it1294;
  this1293 = v1290;
  __it1294 = v1291;
  struct std___Rb_tree_const_iterator_int_* t1295 = this1293;
  struct std___Rb_tree_iterator_int_* t1296 = __it1294;
  struct std___Rb_tree_node_base* t1297 = t1296->_M_node;
  t1295->_M_node = t1297;
  return;
}

