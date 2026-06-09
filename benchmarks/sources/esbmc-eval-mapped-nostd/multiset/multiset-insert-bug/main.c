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
struct std___Identity_int_ { unsigned char __field0; };
struct std___Rb_tree_const_iterator_int_ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* _M_t; };
struct std___Rb_tree_iterator_int_ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_key_compare_std__less_int__ { unsigned char __field0; };
struct std___Rb_tree_node_base { unsigned int _M_color; struct std___Rb_tree_node_base* _M_parent; struct std___Rb_tree_node_base* _M_left; struct std___Rb_tree_node_base* _M_right; };
struct std___Rb_tree_node_int_ { struct std___Rb_tree_node_base __field0; struct __gnu_cxx____aligned_membuf_int_ _M_storage; unsigned char __field2[4]; } __attribute__((packed));
struct std____new_allocator_std___Rb_tree_node_int__ { unsigned char __field0; };
struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___ { unsigned char __field0; };
struct std__allocator_std___Rb_tree_node_int__ { unsigned char __field0; };
struct std__less_int_ { unsigned char __field0; };
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ { struct std___Rb_tree_key_compare_std__less_int__ __field0; struct std___Rb_tree_header __field1; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ _M_impl; };
struct std__multiset_int__std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ _M_t; };

int __const_main_myints[3] = {5, 10, 15};
char _str[18] = "myset.size() == 5";
char _str_1[116] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/multiset/multiset-insert-bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[19] = "myset.size() == 12";
char _str_3[9] = "*it == 5";
char _str_4[10] = "*it == 10";
char _str_5[10] = "*it != 15";
char _str_6[10] = "*it == 20";
char _str_7[10] = "*it == 24";
char _str_8[10] = "*it == 25";
char _str_9[10] = "*it == 26";
char _str_10[10] = "*it == 30";
char _str_11[10] = "*it == 40";
char _str_12[10] = "*it != 50";
void std__multiset_int__std__less_int___std__allocator_int_____multiset(struct std__multiset_int__std__less_int___std__allocator_int__* p0);
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(struct std___Rb_tree_const_iterator_int_* p0);
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
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* p0, struct std___Rb_tree_node_base** p1, struct std___Rb_tree_node_base** p2);
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_equal_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
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
void std___Rb_tree_iterator_int____Rb_tree_iterator(struct std___Rb_tree_iterator_int_* p0, struct std___Rb_tree_node_base* p1);
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, int* p3, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* p4);
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_iterator_int_* p1);
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____insert(struct std__multiset_int__std__less_int___std__allocator_int__* p0, int* p1);
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
unsigned long std__multiset_int__std__less_int___std__allocator_int_____size___const(struct std__multiset_int__std__less_int___std__allocator_int__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_const_iterator_int_* p1);
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* p0, struct std___Rb_tree_node_base** p1, struct std___Rb_tree_node_base** p2);
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
extern struct std___Rb_tree_node_base* std___Rb_tree_decrement(struct std___Rb_tree_node_base* p0);
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator__(struct std___Rb_tree_iterator_int_* p0);
extern struct std___Rb_tree_node_base* std___Rb_tree_increment(struct std___Rb_tree_node_base* p0);
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator___2(struct std___Rb_tree_iterator_int_* p0);
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* p0, struct std___Rb_tree_node_base** p1, struct std___Rb_tree_node_base** p2);
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_equal_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1, int* p2);
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_lower_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_base* p1, int* p2);
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal_lower_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal__int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1, int* p2, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* p3);
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal__int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1, int* p2);
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____insert_2(struct std__multiset_int__std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1, int* p2);
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int__(struct std__allocator_std___Rb_tree_node_int__* p0, int* p1, int* p2);
void void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_int_* p1, int* p2);
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int___int___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* p0, int* p1);
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, int* p3, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* p4);
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_lower_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_base* p1, int* p2);
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal_lower_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1, int* p2, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* p3);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void std__enable_if___same_value_type_int____value__void___type_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_range_equal_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1, int* p2);
void void_std__multiset_int__std__less_int___std__allocator_int_____insert_int__(struct std__multiset_int__std__less_int___std__allocator_int__* p0, int* p1, int* p2);
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_node_base* p1);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____begin___const(struct std__multiset_int__std__less_int___std__allocator_int__* p0);
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* p0);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* p0, int p1);
void std__multiset_int__std__less_int___std__allocator_int______multiset(struct std__multiset_int__std__less_int___std__allocator_int__* p0);
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

// function: _ZNSt8multisetIiSt4lessIiESaIiEEC2Ev
void std__multiset_int__std__less_int___std__allocator_int_____multiset(struct std__multiset_int__std__less_int___std__allocator_int__* v0) {
bb1:
  struct std__multiset_int__std__less_int___std__allocator_int__* this2;
  this2 = v0;
  struct std__multiset_int__std__less_int___std__allocator_int__* t3 = this2;
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

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v108, struct std___Rb_tree_node_base** v109, struct std___Rb_tree_node_base** v110) {
bb111:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this112;
  struct std___Rb_tree_node_base** __x113;
  struct std___Rb_tree_node_base** __y114;
  this112 = v108;
  __x113 = v109;
  __y114 = v110;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t115 = this112;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base116 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t115 + 0);
  struct std___Rb_tree_node_base** t117 = __x113;
  struct std___Rb_tree_node_base* t118 = *t117;
  t115->first = t118;
  struct std___Rb_tree_node_base** t119 = __y114;
  struct std___Rb_tree_node_base* t120 = *t119;
  t115->second = t120;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE23_M_get_insert_equal_posERKi
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_equal_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v121, int* v122) {
bb123:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this124;
  int* __k125;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval126;
  struct std___Rb_tree_node_base* __x127;
  struct std___Rb_tree_node_base* __y128;
  this124 = v121;
  __k125 = v122;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t129 = this124;
  struct std___Rb_tree_node_base* r130 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t129);
  __x127 = r130;
  struct std___Rb_tree_node_base* r131 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t129);
  __y128 = r131;
    while (1) {
      struct std___Rb_tree_node_base* t132 = __x127;
      _Bool cast133 = (_Bool)t132;
      if (!cast133) break;
        struct std___Rb_tree_node_base* t134 = __x127;
        __y128 = t134;
        struct std___Rb_tree_key_compare_std__less_int__* base135 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t129->_M_impl) + 0);
        struct std__less_int_* cast136 = (struct std__less_int_*)base135;
        int* t137 = __k125;
        struct std___Rb_tree_node_base* t138 = __x127;
        int* r139 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t138);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r140 = std__less_int___operator___int_const___int_const___const(cast136, t137, r139);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        struct std___Rb_tree_node_base* ternary141;
        if (r140) {
          struct std___Rb_tree_node_base* t142 = __x127;
          struct std___Rb_tree_node_base* r143 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t142);
          ternary141 = (struct std___Rb_tree_node_base*)r143;
        } else {
          struct std___Rb_tree_node_base* t144 = __x127;
          struct std___Rb_tree_node_base* r145 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t144);
          ternary141 = (struct std___Rb_tree_node_base*)r145;
        }
        __x127 = ternary141;
    }
  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval126, &__x127, &__y128);
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t146 = __retval126;
  return t146;
}

// function: _ZNKSt9_IdentityIiEclERi
int* std___Identity_int___operator___int___const(struct std___Identity_int_* v147, int* v148) {
bb149:
  struct std___Identity_int_* this150;
  int* __x151;
  int* __retval152;
  this150 = v147;
  __x151 = v148;
  struct std___Identity_int_* t153 = this150;
  int* t154 = __x151;
  __retval152 = t154;
  int* t155 = __retval152;
  return t155;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeC2ERS5_
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v156, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v157) {
bb158:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this159;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* __t160;
  this159 = v156;
  __t160 = v157;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t161 = this159;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t162 = __t160;
  t161->_M_t = t162;
  return;
}

// function: _ZNKSt15__new_allocatorISt13_Rb_tree_nodeIiEE11_M_max_sizeEv
unsigned long std____new_allocator_std___Rb_tree_node_int______M_max_size___const(struct std____new_allocator_std___Rb_tree_node_int__* v163) {
bb164:
  struct std____new_allocator_std___Rb_tree_node_int__* this165;
  unsigned long __retval166;
  this165 = v163;
  struct std____new_allocator_std___Rb_tree_node_int__* t167 = this165;
  unsigned long c168 = 9223372036854775807;
  unsigned long c169 = 40;
  unsigned long b170 = c168 / c169;
  __retval166 = b170;
  unsigned long t171 = __retval166;
  return t171;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE8allocateEmPKv
struct std___Rb_tree_node_int_* std____new_allocator_std___Rb_tree_node_int_____allocate(struct std____new_allocator_std___Rb_tree_node_int__* v172, unsigned long v173, void* v174) {
bb175:
  struct std____new_allocator_std___Rb_tree_node_int__* this176;
  unsigned long __n177;
  void* unnamed178;
  struct std___Rb_tree_node_int_* __retval179;
  this176 = v172;
  __n177 = v173;
  unnamed178 = v174;
  struct std____new_allocator_std___Rb_tree_node_int__* t180 = this176;
    unsigned long t181 = __n177;
    unsigned long r182 = std____new_allocator_std___Rb_tree_node_int______M_max_size___const(t180);
    _Bool c183 = ((t181 > r182)) ? 1 : 0;
    if (c183) {
        unsigned long t184 = __n177;
        unsigned long c185 = -1;
        unsigned long c186 = 40;
        unsigned long b187 = c185 / c186;
        _Bool c188 = ((t184 > b187)) ? 1 : 0;
        if (c188) {
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
    unsigned long c189 = 8;
    unsigned long c190 = 16;
    _Bool c191 = ((c189 > c190)) ? 1 : 0;
    if (c191) {
      unsigned long __al192;
      unsigned long c193 = 8;
      __al192 = c193;
      unsigned long t194 = __n177;
      unsigned long c195 = 40;
      unsigned long b196 = t194 * c195;
      unsigned long t197 = __al192;
      void* r198 = operator_new_2(b196, t197);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast199 = (struct std___Rb_tree_node_int_*)r198;
      __retval179 = cast199;
      struct std___Rb_tree_node_int_* t200 = __retval179;
      return t200;
    }
  unsigned long t201 = __n177;
  unsigned long c202 = 40;
  unsigned long b203 = t201 * c202;
  void* r204 = operator_new(b203);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* cast205 = (struct std___Rb_tree_node_int_*)r204;
  __retval179 = cast205;
  struct std___Rb_tree_node_int_* t206 = __retval179;
  return t206;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE8allocateEm
struct std___Rb_tree_node_int_* std__allocator_std___Rb_tree_node_int_____allocate(struct std__allocator_std___Rb_tree_node_int__* v207, unsigned long v208) {
bb209:
  struct std__allocator_std___Rb_tree_node_int__* this210;
  unsigned long __n211;
  struct std___Rb_tree_node_int_* __retval212;
  this210 = v207;
  __n211 = v208;
  struct std__allocator_std___Rb_tree_node_int__* t213 = this210;
    _Bool r214 = std____is_constant_evaluated();
    if (r214) {
        unsigned long t215 = __n211;
        unsigned long c216 = 40;
        unsigned long ovr217;
        _Bool ovf218 = __builtin_mul_overflow(t215, c216, &ovr217);
        __n211 = ovr217;
        if (ovf218) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t219 = __n211;
      void* r220 = operator_new(t219);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast221 = (struct std___Rb_tree_node_int_*)r220;
      __retval212 = cast221;
      struct std___Rb_tree_node_int_* t222 = __retval212;
      return t222;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base223 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t213 + 0);
  unsigned long t224 = __n211;
  void* c225 = ((void*)0);
  struct std___Rb_tree_node_int_* r226 = std____new_allocator_std___Rb_tree_node_int_____allocate(base223, t224, c225);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval212 = r226;
  struct std___Rb_tree_node_int_* t227 = __retval212;
  return t227;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE8allocateERS2_m
struct std___Rb_tree_node_int_* std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(struct std__allocator_std___Rb_tree_node_int__* v228, unsigned long v229) {
bb230:
  struct std__allocator_std___Rb_tree_node_int__* __a231;
  unsigned long __n232;
  struct std___Rb_tree_node_int_* __retval233;
  __a231 = v228;
  __n232 = v229;
  struct std__allocator_std___Rb_tree_node_int__* t234 = __a231;
  unsigned long t235 = __n232;
  struct std___Rb_tree_node_int_* r236 = std__allocator_std___Rb_tree_node_int_____allocate(t234, t235);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval233 = r236;
  struct std___Rb_tree_node_int_* t237 = __retval233;
  return t237;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_get_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v238) {
bb239:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this240;
  struct std___Rb_tree_node_int_* __retval241;
  this240 = v238;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t242 = this240;
  struct std__allocator_std___Rb_tree_node_int__* r243 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t242);
  unsigned long c244 = 1;
  struct std___Rb_tree_node_int_* r245 = std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(r243, c244);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval241 = r245;
  struct std___Rb_tree_node_int_* t246 = __retval241;
  return t246;
}

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v247, int* v248) {
bb249:
  int* __location250;
  int* __args251;
  int* __retval252;
  void* __loc253;
  __location250 = v247;
  __args251 = v248;
  int* t254 = __location250;
  void* cast255 = (void*)t254;
  __loc253 = cast255;
    void* t256 = __loc253;
    int* cast257 = (int*)t256;
    int* t258 = __args251;
    int t259 = *t258;
    *cast257 = t259;
    __retval252 = cast257;
    int* t260 = __retval252;
    return t260;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE9constructIiJiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int_(struct std__allocator_std___Rb_tree_node_int__* v261, int* v262, int* v263) {
bb264:
  struct std__allocator_std___Rb_tree_node_int__* __a265;
  int* __p266;
  int* __args267;
  __a265 = v261;
  __p266 = v262;
  __args267 = v263;
  int* t268 = __p266;
  int* t269 = __args267;
  int* r270 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t268, t269);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE17_M_construct_nodeIJiEEEvPSt13_Rb_tree_nodeIiEDpOT_
void void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v271, struct std___Rb_tree_node_int_* v272, int* v273) {
bb274:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this275;
  struct std___Rb_tree_node_int_* __node276;
  int* __args277;
  this275 = v271;
  __node276 = v272;
  __args277 = v273;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t278 = this275;
      struct std__allocator_std___Rb_tree_node_int__* r280 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t278);
      struct std___Rb_tree_node_int_* t281 = __node276;
      int* r282 = std___Rb_tree_node_int____M_valptr(t281);
      if (__cir_exc_active) {
        goto cir_try_dispatch279;
      }
      int* t283 = __args277;
      void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int_(r280, r282, t283);
    cir_try_dispatch279: ;
    if (__cir_exc_active) {
    {
      int ca_tok284 = 0;
      void* ca_exn285 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Rb_tree_node_int_* t286 = __node276;
        struct std___Rb_tree_node_int_* t287 = __node276;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t278, t287);
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
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v288, int* v289) {
bb290:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this291;
  int* __args292;
  struct std___Rb_tree_node_int_* __retval293;
  struct std___Rb_tree_node_int_* __tmp294;
  this291 = v288;
  __args292 = v289;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t295 = this291;
  struct std___Rb_tree_node_int_* r296 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(t295);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __tmp294 = r296;
  struct std___Rb_tree_node_int_* t297 = __tmp294;
  int* t298 = __args292;
  void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int_(t295, t297, t298);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* t299 = __tmp294;
  __retval293 = t299;
  struct std___Rb_tree_node_int_* t300 = __retval293;
  return t300;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeclIiEEPSt13_Rb_tree_nodeIiEOT_
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int__int____const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v301, int* v302) {
bb303:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this304;
  int* __arg305;
  struct std___Rb_tree_node_int_* __retval306;
  this304 = v301;
  __arg305 = v302;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t307 = this304;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t308 = t307->_M_t;
  int* t309 = __arg305;
  struct std___Rb_tree_node_int_* r310 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int_(t308, t309);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval306 = r310;
  struct std___Rb_tree_node_int_* t311 = __retval306;
  return t311;
}

// function: _ZNSt9__rb_tree12_Node_traitsIiPiE23_S_insert_and_rebalanceEbPSt18_Rb_tree_node_baseS4_RS3_
void std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(_Bool v312, struct std___Rb_tree_node_base* v313, struct std___Rb_tree_node_base* v314, struct std___Rb_tree_node_base* v315) {
bb316:
  _Bool __insert_left317;
  struct std___Rb_tree_node_base* __x318;
  struct std___Rb_tree_node_base* __p319;
  struct std___Rb_tree_node_base* __header320;
  __insert_left317 = v312;
  __x318 = v313;
  __p319 = v314;
  __header320 = v315;
  _Bool t321 = __insert_left317;
  struct std___Rb_tree_node_base* t322 = __x318;
  struct std___Rb_tree_node_base* t323 = __p319;
  struct std___Rb_tree_node_base* t324 = __header320;
  std___Rb_tree_insert_and_rebalance(t321, t322, t323, t324);
  return;
}

// function: _ZNSt17_Rb_tree_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_iterator_int____Rb_tree_iterator(struct std___Rb_tree_iterator_int_* v325, struct std___Rb_tree_node_base* v326) {
bb327:
  struct std___Rb_tree_iterator_int_* this328;
  struct std___Rb_tree_node_base* __x329;
  this328 = v325;
  __x329 = v326;
  struct std___Rb_tree_iterator_int_* t330 = this328;
  struct std___Rb_tree_node_base* t331 = __x329;
  t330->_M_node = t331;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE10_M_insert_IiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiEPSt18_Rb_tree_node_baseSB_OT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v332, struct std___Rb_tree_node_base* v333, struct std___Rb_tree_node_base* v334, int* v335, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v336) {
bb337:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this338;
  struct std___Rb_tree_node_base* __x339;
  struct std___Rb_tree_node_base* __p340;
  int* __v341;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen342;
  struct std___Rb_tree_iterator_int_ __retval343;
  _Bool __insert_left344;
  struct std___Rb_tree_node_base* __z345;
  this338 = v332;
  __x339 = v333;
  __p340 = v334;
  __v341 = v335;
  __node_gen342 = v336;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t346 = this338;
  struct std___Rb_tree_node_base* t347 = __x339;
  _Bool cast348 = (_Bool)t347;
  _Bool ternary349;
  if (cast348) {
    _Bool c350 = 1;
    ternary349 = (_Bool)c350;
  } else {
    struct std___Rb_tree_node_base* t351 = __p340;
    struct std___Rb_tree_node_base* r352 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t346);
    _Bool c353 = ((t351 == r352)) ? 1 : 0;
    ternary349 = (_Bool)c353;
  }
  _Bool ternary354;
  if (ternary349) {
    _Bool c355 = 1;
    ternary354 = (_Bool)c355;
  } else {
    struct std___Identity_int_ ref_tmp0356;
    struct std___Rb_tree_key_compare_std__less_int__* base357 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t346->_M_impl) + 0);
    struct std__less_int_* cast358 = (struct std__less_int_*)base357;
    int* t359 = __v341;
    int* r360 = std___Identity_int___operator___int___const(&ref_tmp0356, t359);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    struct std___Rb_tree_node_base* t361 = __p340;
    int* r362 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t361);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r363 = std__less_int___operator___int_const___int_const___const(cast358, r360, r362);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    ternary354 = (_Bool)r363;
  }
  __insert_left344 = ternary354;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t364 = __node_gen342;
  int* t365 = __v341;
  struct std___Rb_tree_node_int_* r366 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int__int____const(t364, t365);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* base367 = (struct std___Rb_tree_node_base*)((char *)r366 + 0);
  struct std___Rb_tree_node_base* r368 = std___Rb_tree_node_base___M_base_ptr___const(base367);
  __z345 = r368;
  _Bool t369 = __insert_left344;
  struct std___Rb_tree_node_base* t370 = __z345;
  struct std___Rb_tree_node_base* t371 = __p340;
  struct std___Rb_tree_header* base372 = (struct std___Rb_tree_header*)((char *)&(t346->_M_impl) + 8);
  std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(t369, t370, t371, &base372->_M_header);
  struct std___Rb_tree_header* base373 = (struct std___Rb_tree_header*)((char *)&(t346->_M_impl) + 8);
  unsigned long t374 = base373->_M_node_count;
  unsigned long u375 = t374 + 1;
  base373->_M_node_count = u375;
  struct std___Rb_tree_node_base* t376 = __z345;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval343, t376);
  struct std___Rb_tree_iterator_int_ t377 = __retval343;
  return t377;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_insert_equalIiEESt17_Rb_tree_iteratorIiEOT_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v378, int* v379) {
bb380:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this381;
  int* __v382;
  struct std___Rb_tree_iterator_int_ __retval383;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __res384;
  struct std___Identity_int_ ref_tmp0385;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node __an386;
  this381 = v378;
  __v382 = v379;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t387 = this381;
  int* t388 = __v382;
  int* r389 = std___Identity_int___operator___int___const(&ref_tmp0385, t388);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r390 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_equal_pos(t387, r389);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __res384 = r390;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(&__an386, t387);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* t391 = __res384.first;
  struct std___Rb_tree_node_base* t392 = __res384.second;
  int* t393 = __v382;
  struct std___Rb_tree_iterator_int_ r394 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t387, t391, t392, t393, &__an386);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval383 = r394;
  struct std___Rb_tree_iterator_int_ t395 = __retval383;
  return t395;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2ERKSt17_Rb_tree_iteratorIiE
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(struct std___Rb_tree_const_iterator_int_* v396, struct std___Rb_tree_iterator_int_* v397) {
bb398:
  struct std___Rb_tree_const_iterator_int_* this399;
  struct std___Rb_tree_iterator_int_* __it400;
  this399 = v396;
  __it400 = v397;
  struct std___Rb_tree_const_iterator_int_* t401 = this399;
  struct std___Rb_tree_iterator_int_* t402 = __it400;
  struct std___Rb_tree_node_base* t403 = t402->_M_node;
  t401->_M_node = t403;
  return;
}

// function: _ZNSt8multisetIiSt4lessIiESaIiEE6insertEOi
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____insert(struct std__multiset_int__std__less_int___std__allocator_int__* v404, int* v405) {
bb406:
  struct std__multiset_int__std__less_int___std__allocator_int__* this407;
  int* __x408;
  struct std___Rb_tree_const_iterator_int_ __retval409;
  struct std___Rb_tree_iterator_int_ ref_tmp0410;
  this407 = v404;
  __x408 = v405;
  struct std__multiset_int__std__less_int___std__allocator_int__* t411 = this407;
  int* t412 = __x408;
  struct std___Rb_tree_iterator_int_ r413 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal_int_(&t411->_M_t, t412);
  if (__cir_exc_active) {
    struct std___Rb_tree_const_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  ref_tmp0410 = r413;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&__retval409, &ref_tmp0410);
  struct std___Rb_tree_const_iterator_int_ t414 = __retval409;
  return t414;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE4sizeEv
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v415) {
bb416:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this417;
  unsigned long __retval418;
  this417 = v415;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t419 = this417;
  struct std___Rb_tree_header* base420 = (struct std___Rb_tree_header*)((char *)&(t419->_M_impl) + 8);
  unsigned long t421 = base420->_M_node_count;
  __retval418 = t421;
  unsigned long t422 = __retval418;
  return t422;
}

// function: _ZNKSt8multisetIiSt4lessIiESaIiEE4sizeEv
unsigned long std__multiset_int__std__less_int___std__allocator_int_____size___const(struct std__multiset_int__std__less_int___std__allocator_int__* v423) {
bb424:
  struct std__multiset_int__std__less_int___std__allocator_int__* this425;
  unsigned long __retval426;
  this425 = v423;
  struct std__multiset_int__std__less_int___std__allocator_int__* t427 = this425;
  unsigned long r428 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(&t427->_M_t);
  __retval426 = r428;
  unsigned long t429 = __retval426;
  return t429;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEaSEOS0_
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* v430, struct std___Rb_tree_const_iterator_int_* v431) {
bb432:
  struct std___Rb_tree_const_iterator_int_* this433;
  struct std___Rb_tree_const_iterator_int_* unnamed434;
  struct std___Rb_tree_const_iterator_int_* __retval435;
  this433 = v430;
  unnamed434 = v431;
  struct std___Rb_tree_const_iterator_int_* t436 = this433;
  struct std___Rb_tree_const_iterator_int_* t437 = unnamed434;
  struct std___Rb_tree_node_base* t438 = t437->_M_node;
  t436->_M_node = t438;
  __retval435 = t436;
  struct std___Rb_tree_const_iterator_int_* t439 = __retval435;
  return t439;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_rightmostEv
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v440) {
bb441:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this442;
  struct std___Rb_tree_node_base** __retval443;
  this442 = v440;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t444 = this442;
  struct std___Rb_tree_header* base445 = (struct std___Rb_tree_header*)((char *)&(t444->_M_impl) + 8);
  __retval443 = &base445->_M_header._M_right;
  struct std___Rb_tree_node_base** t446 = __retval443;
  return t446;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v447, struct std___Rb_tree_node_base** v448, struct std___Rb_tree_node_base** v449) {
bb450:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this451;
  struct std___Rb_tree_node_base** __x452;
  struct std___Rb_tree_node_base** __y453;
  this451 = v447;
  __x452 = v448;
  __y453 = v449;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t454 = this451;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base455 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t454 + 0);
  struct std___Rb_tree_node_base** t456 = __x452;
  struct std___Rb_tree_node_base* t457 = *t456;
  t454->first = t457;
  struct std___Rb_tree_node_base** t458 = __y453;
  struct std___Rb_tree_node_base* t459 = *t458;
  t454->second = t459;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_leftmostEv
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v460) {
bb461:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this462;
  struct std___Rb_tree_node_base** __retval463;
  this462 = v460;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t464 = this462;
  struct std___Rb_tree_header* base465 = (struct std___Rb_tree_header*)((char *)&(t464->_M_impl) + 8);
  __retval463 = &base465->_M_header._M_left;
  struct std___Rb_tree_node_base** t466 = __retval463;
  return t466;
}

// function: _ZNSt17_Rb_tree_iteratorIiEmmEv
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator__(struct std___Rb_tree_iterator_int_* v467) {
bb468:
  struct std___Rb_tree_iterator_int_* this469;
  struct std___Rb_tree_iterator_int_* __retval470;
  this469 = v467;
  struct std___Rb_tree_iterator_int_* t471 = this469;
  struct std___Rb_tree_node_base* t472 = t471->_M_node;
  struct std___Rb_tree_node_base* r473 = std___Rb_tree_decrement(t472);
  t471->_M_node = r473;
  __retval470 = t471;
  struct std___Rb_tree_iterator_int_* t474 = __retval470;
  return t474;
}

// function: _ZNSt17_Rb_tree_iteratorIiEppEv
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator___2(struct std___Rb_tree_iterator_int_* v475) {
bb476:
  struct std___Rb_tree_iterator_int_* this477;
  struct std___Rb_tree_iterator_int_* __retval478;
  this477 = v475;
  struct std___Rb_tree_iterator_int_* t479 = this477;
  struct std___Rb_tree_node_base* t480 = t479->_M_node;
  struct std___Rb_tree_node_base* r481 = std___Rb_tree_increment(t480);
  t479->_M_node = r481;
  __retval478 = t479;
  struct std___Rb_tree_iterator_int_* t482 = __retval478;
  return t482;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v483, struct std___Rb_tree_node_base** v484, struct std___Rb_tree_node_base** v485) {
bb486:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this487;
  struct std___Rb_tree_node_base** __x488;
  struct std___Rb_tree_node_base** __y489;
  this487 = v483;
  __x488 = v484;
  __y489 = v485;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t490 = this487;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base491 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t490 + 0);
  struct std___Rb_tree_node_base** t492 = __x488;
  struct std___Rb_tree_node_base* t493 = *t492;
  t490->first = t493;
  struct std___Rb_tree_node_base** t494 = __y489;
  struct std___Rb_tree_node_base* t495 = *t494;
  t490->second = t495;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE28_M_get_insert_hint_equal_posESt23_Rb_tree_const_iteratorIiERKi
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_equal_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v496, struct std___Rb_tree_const_iterator_int_ v497, int* v498) {
bb499:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this500;
  struct std___Rb_tree_const_iterator_int_ __position501;
  int* __k502;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval503;
  this500 = v496;
  __position501 = v497;
  __k502 = v498;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t504 = this500;
    struct std___Rb_tree_node_base* t505 = __position501._M_node;
    struct std___Rb_tree_node_base* r506 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t504);
    _Bool c507 = ((t505 == r506)) ? 1 : 0;
    if (c507) {
        unsigned long r508 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(t504);
        unsigned long c509 = 0;
        _Bool c510 = ((r508 > c509)) ? 1 : 0;
        _Bool ternary511;
        if (c510) {
          struct std___Rb_tree_key_compare_std__less_int__* base512 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t504->_M_impl) + 0);
          struct std__less_int_* cast513 = (struct std__less_int_*)base512;
          int* t514 = __k502;
          struct std___Rb_tree_node_base** r515 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t504);
          struct std___Rb_tree_node_base* t516 = *r515;
          int* r517 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t516);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          _Bool r518 = std__less_int___operator___int_const___int_const___const(cast513, t514, r517);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          _Bool u519 = !r518;
          ternary511 = (_Bool)u519;
        } else {
          _Bool c520 = 0;
          ternary511 = (_Bool)c520;
        }
        if (ternary511) {
          struct std___Rb_tree_node_base* ref_tmp0521;
          struct std___Rb_tree_node_base* c522 = ((void*)0);
          ref_tmp0521 = c522;
          struct std___Rb_tree_node_base** r523 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t504);
          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval503, &ref_tmp0521, r523);
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t524 = __retval503;
          return t524;
        } else {
          int* t525 = __k502;
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r526 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_equal_pos(t504, t525);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          __retval503 = r526;
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t527 = __retval503;
          return t527;
        }
    } else {
        struct std___Rb_tree_key_compare_std__less_int__* base528 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t504->_M_impl) + 0);
        struct std__less_int_* cast529 = (struct std__less_int_*)base528;
        struct std___Rb_tree_node_base* t530 = __position501._M_node;
        int* r531 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t530);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        int* t532 = __k502;
        _Bool r533 = std__less_int___operator___int_const___int_const___const(cast529, r531, t532);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool u534 = !r533;
        if (u534) {
          struct std___Rb_tree_iterator_int_ __before535;
          struct std___Rb_tree_node_base* t536 = __position501._M_node;
          std___Rb_tree_iterator_int____Rb_tree_iterator(&__before535, t536);
            struct std___Rb_tree_node_base* t537 = __position501._M_node;
            struct std___Rb_tree_node_base** r538 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t504);
            struct std___Rb_tree_node_base* t539 = *r538;
            _Bool c540 = ((t537 == t539)) ? 1 : 0;
            if (c540) {
              struct std___Rb_tree_node_base** r541 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t504);
              struct std___Rb_tree_node_base** r542 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t504);
              _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval503, r541, r542);
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t543 = __retval503;
              return t543;
            } else {
                struct std___Rb_tree_key_compare_std__less_int__* base544 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t504->_M_impl) + 0);
                struct std__less_int_* cast545 = (struct std__less_int_*)base544;
                int* t546 = __k502;
                struct std___Rb_tree_iterator_int_* r547 = std___Rb_tree_iterator_int___operator__(&__before535);
                struct std___Rb_tree_node_base* t548 = r547->_M_node;
                int* r549 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t548);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                _Bool r550 = std__less_int___operator___int_const___int_const___const(cast545, t546, r549);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                _Bool u551 = !r550;
                if (u551) {
                    struct std___Rb_tree_node_base* t552 = __before535._M_node;
                    struct std___Rb_tree_node_base* r553 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t552);
                    _Bool cast554 = (_Bool)r553;
                    _Bool u555 = !cast554;
                    if (u555) {
                      struct std___Rb_tree_node_base* ref_tmp1556;
                      struct std___Rb_tree_node_base* c557 = ((void*)0);
                      ref_tmp1556 = c557;
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval503, &ref_tmp1556, &__before535._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t558 = __retval503;
                      return t558;
                    } else {
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval503, &__position501._M_node, &__position501._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t559 = __retval503;
                      return t559;
                    }
                } else {
                  int* t560 = __k502;
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r561 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_equal_pos(t504, t560);
                  if (__cir_exc_active) {
                    struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                    return __cir_eh_ret;
                  }
                  __retval503 = r561;
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t562 = __retval503;
                  return t562;
                }
            }
        } else {
          struct std___Rb_tree_iterator_int_ __after563;
          struct std___Rb_tree_node_base* t564 = __position501._M_node;
          std___Rb_tree_iterator_int____Rb_tree_iterator(&__after563, t564);
            struct std___Rb_tree_node_base* t565 = __position501._M_node;
            struct std___Rb_tree_node_base** r566 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t504);
            struct std___Rb_tree_node_base* t567 = *r566;
            _Bool c568 = ((t565 == t567)) ? 1 : 0;
            if (c568) {
              struct std___Rb_tree_node_base* ref_tmp2569;
              struct std___Rb_tree_node_base* c570 = ((void*)0);
              ref_tmp2569 = c570;
              struct std___Rb_tree_node_base** r571 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t504);
              _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval503, &ref_tmp2569, r571);
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t572 = __retval503;
              return t572;
            } else {
                struct std___Rb_tree_key_compare_std__less_int__* base573 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t504->_M_impl) + 0);
                struct std__less_int_* cast574 = (struct std__less_int_*)base573;
                struct std___Rb_tree_iterator_int_* r575 = std___Rb_tree_iterator_int___operator___2(&__after563);
                struct std___Rb_tree_node_base* t576 = r575->_M_node;
                int* r577 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t576);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                int* t578 = __k502;
                _Bool r579 = std__less_int___operator___int_const___int_const___const(cast574, r577, t578);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                _Bool u580 = !r579;
                if (u580) {
                    struct std___Rb_tree_node_base* t581 = __position501._M_node;
                    struct std___Rb_tree_node_base* r582 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t581);
                    _Bool cast583 = (_Bool)r582;
                    _Bool u584 = !cast583;
                    if (u584) {
                      struct std___Rb_tree_node_base* ref_tmp3585;
                      struct std___Rb_tree_node_base* c586 = ((void*)0);
                      ref_tmp3585 = c586;
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval503, &ref_tmp3585, &__position501._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t587 = __retval503;
                      return t587;
                    } else {
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval503, &__after563._M_node, &__after563._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t588 = __retval503;
                      return t588;
                    }
                } else {
                  struct std___Rb_tree_node_base* ref_tmp4589;
                  struct std___Rb_tree_node_base* ref_tmp5590;
                  struct std___Rb_tree_node_base* c591 = ((void*)0);
                  ref_tmp4589 = c591;
                  struct std___Rb_tree_node_base* c592 = ((void*)0);
                  ref_tmp5590 = c592;
                  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(&__retval503, &ref_tmp4589, &ref_tmp5590);
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t593 = __retval503;
                  return t593;
                }
            }
        }
    }
  abort();
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_insert_lowerIiEESt17_Rb_tree_iteratorIiEPSt18_Rb_tree_node_baseOT_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_lower_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v594, struct std___Rb_tree_node_base* v595, int* v596) {
bb597:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this598;
  struct std___Rb_tree_node_base* __p599;
  int* __v600;
  struct std___Rb_tree_iterator_int_ __retval601;
  _Bool __insert_left602;
  struct std___Rb_tree_node_base* __z603;
  this598 = v594;
  __p599 = v595;
  __v600 = v596;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t604 = this598;
  struct std___Rb_tree_node_base* t605 = __p599;
  struct std___Rb_tree_node_base* r606 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t604);
  _Bool c607 = ((t605 == r606)) ? 1 : 0;
  _Bool ternary608;
  if (c607) {
    _Bool c609 = 1;
    ternary608 = (_Bool)c609;
  } else {
    struct std___Identity_int_ ref_tmp0610;
    struct std___Rb_tree_key_compare_std__less_int__* base611 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t604->_M_impl) + 0);
    struct std__less_int_* cast612 = (struct std__less_int_*)base611;
    struct std___Rb_tree_node_base* t613 = __p599;
    int* r614 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t613);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    int* t615 = __v600;
    int* r616 = std___Identity_int___operator___int___const(&ref_tmp0610, t615);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r617 = std__less_int___operator___int_const___int_const___const(cast612, r614, r616);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool u618 = !r617;
    ternary608 = (_Bool)u618;
  }
  __insert_left602 = ternary608;
  int* t619 = __v600;
  struct std___Rb_tree_node_int_* r620 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int_(t604, t619);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* base621 = (struct std___Rb_tree_node_base*)((char *)r620 + 0);
  struct std___Rb_tree_node_base* r622 = std___Rb_tree_node_base___M_base_ptr___const(base621);
  __z603 = r622;
  _Bool t623 = __insert_left602;
  struct std___Rb_tree_node_base* t624 = __z603;
  struct std___Rb_tree_node_base* t625 = __p599;
  struct std___Rb_tree_header* base626 = (struct std___Rb_tree_header*)((char *)&(t604->_M_impl) + 8);
  std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(t623, t624, t625, &base626->_M_header);
  struct std___Rb_tree_header* base627 = (struct std___Rb_tree_header*)((char *)&(t604->_M_impl) + 8);
  unsigned long t628 = base627->_M_node_count;
  unsigned long u629 = t628 + 1;
  base627->_M_node_count = u629;
  struct std___Rb_tree_node_base* t630 = __z603;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval601, t630);
  struct std___Rb_tree_iterator_int_ t631 = __retval601;
  return t631;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_insert_equal_lowerIiEESt17_Rb_tree_iteratorIiEOT_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal_lower_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v632, int* v633) {
bb634:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this635;
  int* __v636;
  struct std___Rb_tree_iterator_int_ __retval637;
  struct std___Rb_tree_node_base* __x638;
  struct std___Rb_tree_node_base* __y639;
  this635 = v632;
  __v636 = v633;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t640 = this635;
  struct std___Rb_tree_node_base* r641 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t640);
  __x638 = r641;
  struct std___Rb_tree_node_base* r642 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t640);
  __y639 = r642;
    while (1) {
      struct std___Rb_tree_node_base* t643 = __x638;
      _Bool cast644 = (_Bool)t643;
      if (!cast644) break;
        struct std___Identity_int_ ref_tmp0645;
        struct std___Rb_tree_node_base** tmp_exprcleanup646;
        struct std___Rb_tree_node_base* t647 = __x638;
        __y639 = t647;
        struct std___Rb_tree_key_compare_std__less_int__* base648 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t640->_M_impl) + 0);
        struct std__less_int_* cast649 = (struct std__less_int_*)base648;
        struct std___Rb_tree_node_base* t650 = __x638;
        int* r651 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t650);
        if (__cir_exc_active) {
          struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        int* t652 = __v636;
        int* r653 = std___Identity_int___operator___int___const(&ref_tmp0645, t652);
        if (__cir_exc_active) {
          struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r654 = std__less_int___operator___int_const___int_const___const(cast649, r651, r653);
        if (__cir_exc_active) {
          struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool u655 = !r654;
        struct std___Rb_tree_node_base* ternary656;
        if (u655) {
          struct std___Rb_tree_node_base* t657 = __x638;
          struct std___Rb_tree_node_base* r658 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t657);
          ternary656 = (struct std___Rb_tree_node_base*)r658;
        } else {
          struct std___Rb_tree_node_base* t659 = __x638;
          struct std___Rb_tree_node_base* r660 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t659);
          ternary656 = (struct std___Rb_tree_node_base*)r660;
        }
        __x638 = ternary656;
        tmp_exprcleanup646 = &__x638;
        struct std___Rb_tree_node_base** t661 = tmp_exprcleanup646;
    }
  struct std___Rb_tree_node_base* t662 = __y639;
  int* t663 = __v636;
  struct std___Rb_tree_iterator_int_ r664 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_lower_int_(t640, t662, t663);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval637 = r664;
  struct std___Rb_tree_iterator_int_ t665 = __retval637;
  return t665;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE16_M_insert_equal_IiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiESt23_Rb_tree_const_iteratorIiEOT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal__int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v666, struct std___Rb_tree_const_iterator_int_ v667, int* v668, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v669) {
bb670:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this671;
  struct std___Rb_tree_const_iterator_int_ __position672;
  int* __v673;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen674;
  struct std___Rb_tree_iterator_int_ __retval675;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __res676;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0677;
  struct std___Identity_int_ ref_tmp0678;
  this671 = v666;
  __position672 = v667;
  __v673 = v668;
  __node_gen674 = v669;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t679 = this671;
  agg_tmp0677 = __position672; // copy
  int* t680 = __v673;
  int* r681 = std___Identity_int___operator___int___const(&ref_tmp0678, t680);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_const_iterator_int_ t682 = agg_tmp0677;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r683 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_equal_pos(t679, t682, r681);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __res676 = r683;
    struct std___Rb_tree_node_base* t684 = __res676.second;
    _Bool cast685 = (_Bool)t684;
    if (cast685) {
      struct std___Rb_tree_node_base* t686 = __res676.first;
      struct std___Rb_tree_node_base* t687 = __res676.second;
      int* t688 = __v673;
      struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t689 = __node_gen674;
      struct std___Rb_tree_iterator_int_ r690 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t679, t686, t687, t688, t689);
      if (__cir_exc_active) {
        struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      __retval675 = r690;
      struct std___Rb_tree_iterator_int_ t691 = __retval675;
      return t691;
    }
  int* t692 = __v673;
  struct std___Rb_tree_iterator_int_ r693 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal_lower_int_(t679, t692);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval675 = r693;
  struct std___Rb_tree_iterator_int_ t694 = __retval675;
  return t694;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE16_M_insert_equal_IiEESt17_Rb_tree_iteratorIiESt23_Rb_tree_const_iteratorIiEOT_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal__int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v695, struct std___Rb_tree_const_iterator_int_ v696, int* v697) {
bb698:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this699;
  struct std___Rb_tree_const_iterator_int_ __pos700;
  int* __x701;
  struct std___Rb_tree_iterator_int_ __retval702;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node __an703;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0704;
  this699 = v695;
  __pos700 = v696;
  __x701 = v697;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t705 = this699;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(&__an703, t705);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  agg_tmp0704 = __pos700; // copy
  int* t706 = __x701;
  struct std___Rb_tree_const_iterator_int_ t707 = agg_tmp0704;
  struct std___Rb_tree_iterator_int_ r708 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal__int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t705, t707, t706, &__an703);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval702 = r708;
  struct std___Rb_tree_iterator_int_ t709 = __retval702;
  return t709;
}

// function: _ZNSt8multisetIiSt4lessIiESaIiEE6insertESt23_Rb_tree_const_iteratorIiEOi
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____insert_2(struct std__multiset_int__std__less_int___std__allocator_int__* v710, struct std___Rb_tree_const_iterator_int_ v711, int* v712) {
bb713:
  struct std__multiset_int__std__less_int___std__allocator_int__* this714;
  struct std___Rb_tree_const_iterator_int_ __position715;
  int* __x716;
  struct std___Rb_tree_const_iterator_int_ __retval717;
  struct std___Rb_tree_iterator_int_ ref_tmp0718;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0719;
  this714 = v710;
  __position715 = v711;
  __x716 = v712;
  struct std__multiset_int__std__less_int___std__allocator_int__* t720 = this714;
  agg_tmp0719 = __position715; // copy
  int* t721 = __x716;
  struct std___Rb_tree_const_iterator_int_ t722 = agg_tmp0719;
  struct std___Rb_tree_iterator_int_ r723 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal__int_(&t720->_M_t, t722, t721);
  if (__cir_exc_active) {
    struct std___Rb_tree_const_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  ref_tmp0718 = r723;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&__retval717, &ref_tmp0718);
  struct std___Rb_tree_const_iterator_int_ t724 = __retval717;
  return t724;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v725, int* v726) {
bb727:
  int* __location728;
  int* __args729;
  int* __retval730;
  void* __loc731;
  __location728 = v725;
  __args729 = v726;
  int* t732 = __location728;
  void* cast733 = (void*)t732;
  __loc731 = cast733;
    void* t734 = __loc731;
    int* cast735 = (int*)t734;
    int* t736 = __args729;
    int t737 = *t736;
    *cast735 = t737;
    __retval730 = cast735;
    int* t738 = __retval730;
    return t738;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE9constructIiJRiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int__(struct std__allocator_std___Rb_tree_node_int__* v739, int* v740, int* v741) {
bb742:
  struct std__allocator_std___Rb_tree_node_int__* __a743;
  int* __p744;
  int* __args745;
  __a743 = v739;
  __p744 = v740;
  __args745 = v741;
  int* t746 = __p744;
  int* t747 = __args745;
  int* r748 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t746, t747);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE17_M_construct_nodeIJRiEEEvPSt13_Rb_tree_nodeIiEDpOT_
void void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v749, struct std___Rb_tree_node_int_* v750, int* v751) {
bb752:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this753;
  struct std___Rb_tree_node_int_* __node754;
  int* __args755;
  this753 = v749;
  __node754 = v750;
  __args755 = v751;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t756 = this753;
      struct std__allocator_std___Rb_tree_node_int__* r758 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t756);
      struct std___Rb_tree_node_int_* t759 = __node754;
      int* r760 = std___Rb_tree_node_int____M_valptr(t759);
      if (__cir_exc_active) {
        goto cir_try_dispatch757;
      }
      int* t761 = __args755;
      void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int__(r758, r760, t761);
    cir_try_dispatch757: ;
    if (__cir_exc_active) {
    {
      int ca_tok762 = 0;
      void* ca_exn763 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Rb_tree_node_int_* t764 = __node754;
        struct std___Rb_tree_node_int_* t765 = __node754;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t756, t765);
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

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE14_M_create_nodeIJRiEEEPSt13_Rb_tree_nodeIiEDpOT_
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v766, int* v767) {
bb768:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this769;
  int* __args770;
  struct std___Rb_tree_node_int_* __retval771;
  struct std___Rb_tree_node_int_* __tmp772;
  this769 = v766;
  __args770 = v767;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t773 = this769;
  struct std___Rb_tree_node_int_* r774 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(t773);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __tmp772 = r774;
  struct std___Rb_tree_node_int_* t775 = __tmp772;
  int* t776 = __args770;
  void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int__(t773, t775, t776);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* t777 = __tmp772;
  __retval771 = t777;
  struct std___Rb_tree_node_int_* t778 = __retval771;
  return t778;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeclIRiEEPSt13_Rb_tree_nodeIiEOT_
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int___int___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v779, int* v780) {
bb781:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this782;
  int* __arg783;
  struct std___Rb_tree_node_int_* __retval784;
  this782 = v779;
  __arg783 = v780;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t785 = this782;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t786 = t785->_M_t;
  int* t787 = __arg783;
  struct std___Rb_tree_node_int_* r788 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int__(t786, t787);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval784 = r788;
  struct std___Rb_tree_node_int_* t789 = __retval784;
  return t789;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE10_M_insert_IRiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiEPSt18_Rb_tree_node_baseSC_OT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v790, struct std___Rb_tree_node_base* v791, struct std___Rb_tree_node_base* v792, int* v793, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v794) {
bb795:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this796;
  struct std___Rb_tree_node_base* __x797;
  struct std___Rb_tree_node_base* __p798;
  int* __v799;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen800;
  struct std___Rb_tree_iterator_int_ __retval801;
  _Bool __insert_left802;
  struct std___Rb_tree_node_base* __z803;
  this796 = v790;
  __x797 = v791;
  __p798 = v792;
  __v799 = v793;
  __node_gen800 = v794;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t804 = this796;
  struct std___Rb_tree_node_base* t805 = __x797;
  _Bool cast806 = (_Bool)t805;
  _Bool ternary807;
  if (cast806) {
    _Bool c808 = 1;
    ternary807 = (_Bool)c808;
  } else {
    struct std___Rb_tree_node_base* t809 = __p798;
    struct std___Rb_tree_node_base* r810 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t804);
    _Bool c811 = ((t809 == r810)) ? 1 : 0;
    ternary807 = (_Bool)c811;
  }
  _Bool ternary812;
  if (ternary807) {
    _Bool c813 = 1;
    ternary812 = (_Bool)c813;
  } else {
    struct std___Identity_int_ ref_tmp0814;
    struct std___Rb_tree_key_compare_std__less_int__* base815 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t804->_M_impl) + 0);
    struct std__less_int_* cast816 = (struct std__less_int_*)base815;
    int* t817 = __v799;
    int* r818 = std___Identity_int___operator___int___const(&ref_tmp0814, t817);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    struct std___Rb_tree_node_base* t819 = __p798;
    int* r820 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t819);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r821 = std__less_int___operator___int_const___int_const___const(cast816, r818, r820);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    ternary812 = (_Bool)r821;
  }
  __insert_left802 = ternary812;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t822 = __node_gen800;
  int* t823 = __v799;
  struct std___Rb_tree_node_int_* r824 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int___int___const(t822, t823);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* base825 = (struct std___Rb_tree_node_base*)((char *)r824 + 0);
  struct std___Rb_tree_node_base* r826 = std___Rb_tree_node_base___M_base_ptr___const(base825);
  __z803 = r826;
  _Bool t827 = __insert_left802;
  struct std___Rb_tree_node_base* t828 = __z803;
  struct std___Rb_tree_node_base* t829 = __p798;
  struct std___Rb_tree_header* base830 = (struct std___Rb_tree_header*)((char *)&(t804->_M_impl) + 8);
  std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(t827, t828, t829, &base830->_M_header);
  struct std___Rb_tree_header* base831 = (struct std___Rb_tree_header*)((char *)&(t804->_M_impl) + 8);
  unsigned long t832 = base831->_M_node_count;
  unsigned long u833 = t832 + 1;
  base831->_M_node_count = u833;
  struct std___Rb_tree_node_base* t834 = __z803;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval801, t834);
  struct std___Rb_tree_iterator_int_ t835 = __retval801;
  return t835;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_insert_lowerIRiEESt17_Rb_tree_iteratorIiEPSt18_Rb_tree_node_baseOT_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_lower_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v836, struct std___Rb_tree_node_base* v837, int* v838) {
bb839:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this840;
  struct std___Rb_tree_node_base* __p841;
  int* __v842;
  struct std___Rb_tree_iterator_int_ __retval843;
  _Bool __insert_left844;
  struct std___Rb_tree_node_base* __z845;
  this840 = v836;
  __p841 = v837;
  __v842 = v838;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t846 = this840;
  struct std___Rb_tree_node_base* t847 = __p841;
  struct std___Rb_tree_node_base* r848 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t846);
  _Bool c849 = ((t847 == r848)) ? 1 : 0;
  _Bool ternary850;
  if (c849) {
    _Bool c851 = 1;
    ternary850 = (_Bool)c851;
  } else {
    struct std___Identity_int_ ref_tmp0852;
    struct std___Rb_tree_key_compare_std__less_int__* base853 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t846->_M_impl) + 0);
    struct std__less_int_* cast854 = (struct std__less_int_*)base853;
    struct std___Rb_tree_node_base* t855 = __p841;
    int* r856 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t855);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    int* t857 = __v842;
    int* r858 = std___Identity_int___operator___int___const(&ref_tmp0852, t857);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r859 = std__less_int___operator___int_const___int_const___const(cast854, r856, r858);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool u860 = !r859;
    ternary850 = (_Bool)u860;
  }
  __insert_left844 = ternary850;
  int* t861 = __v842;
  struct std___Rb_tree_node_int_* r862 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int__(t846, t861);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* base863 = (struct std___Rb_tree_node_base*)((char *)r862 + 0);
  struct std___Rb_tree_node_base* r864 = std___Rb_tree_node_base___M_base_ptr___const(base863);
  __z845 = r864;
  _Bool t865 = __insert_left844;
  struct std___Rb_tree_node_base* t866 = __z845;
  struct std___Rb_tree_node_base* t867 = __p841;
  struct std___Rb_tree_header* base868 = (struct std___Rb_tree_header*)((char *)&(t846->_M_impl) + 8);
  std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(t865, t866, t867, &base868->_M_header);
  struct std___Rb_tree_header* base869 = (struct std___Rb_tree_header*)((char *)&(t846->_M_impl) + 8);
  unsigned long t870 = base869->_M_node_count;
  unsigned long u871 = t870 + 1;
  base869->_M_node_count = u871;
  struct std___Rb_tree_node_base* t872 = __z845;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval843, t872);
  struct std___Rb_tree_iterator_int_ t873 = __retval843;
  return t873;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_insert_equal_lowerIRiEESt17_Rb_tree_iteratorIiEOT_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal_lower_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v874, int* v875) {
bb876:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this877;
  int* __v878;
  struct std___Rb_tree_iterator_int_ __retval879;
  struct std___Rb_tree_node_base* __x880;
  struct std___Rb_tree_node_base* __y881;
  this877 = v874;
  __v878 = v875;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t882 = this877;
  struct std___Rb_tree_node_base* r883 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t882);
  __x880 = r883;
  struct std___Rb_tree_node_base* r884 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t882);
  __y881 = r884;
    while (1) {
      struct std___Rb_tree_node_base* t885 = __x880;
      _Bool cast886 = (_Bool)t885;
      if (!cast886) break;
        struct std___Identity_int_ ref_tmp0887;
        struct std___Rb_tree_node_base** tmp_exprcleanup888;
        struct std___Rb_tree_node_base* t889 = __x880;
        __y881 = t889;
        struct std___Rb_tree_key_compare_std__less_int__* base890 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t882->_M_impl) + 0);
        struct std__less_int_* cast891 = (struct std__less_int_*)base890;
        struct std___Rb_tree_node_base* t892 = __x880;
        int* r893 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t892);
        if (__cir_exc_active) {
          struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        int* t894 = __v878;
        int* r895 = std___Identity_int___operator___int___const(&ref_tmp0887, t894);
        if (__cir_exc_active) {
          struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r896 = std__less_int___operator___int_const___int_const___const(cast891, r893, r895);
        if (__cir_exc_active) {
          struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool u897 = !r896;
        struct std___Rb_tree_node_base* ternary898;
        if (u897) {
          struct std___Rb_tree_node_base* t899 = __x880;
          struct std___Rb_tree_node_base* r900 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t899);
          ternary898 = (struct std___Rb_tree_node_base*)r900;
        } else {
          struct std___Rb_tree_node_base* t901 = __x880;
          struct std___Rb_tree_node_base* r902 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t901);
          ternary898 = (struct std___Rb_tree_node_base*)r902;
        }
        __x880 = ternary898;
        tmp_exprcleanup888 = &__x880;
        struct std___Rb_tree_node_base** t903 = tmp_exprcleanup888;
    }
  struct std___Rb_tree_node_base* t904 = __y881;
  int* t905 = __v878;
  struct std___Rb_tree_iterator_int_ r906 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_lower_int__(t882, t904, t905);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval879 = r906;
  struct std___Rb_tree_iterator_int_ t907 = __retval879;
  return t907;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE16_M_insert_equal_IRiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiESt23_Rb_tree_const_iteratorIiEOT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v908, struct std___Rb_tree_const_iterator_int_ v909, int* v910, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v911) {
bb912:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this913;
  struct std___Rb_tree_const_iterator_int_ __position914;
  int* __v915;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen916;
  struct std___Rb_tree_iterator_int_ __retval917;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __res918;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0919;
  struct std___Identity_int_ ref_tmp0920;
  this913 = v908;
  __position914 = v909;
  __v915 = v910;
  __node_gen916 = v911;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t921 = this913;
  agg_tmp0919 = __position914; // copy
  int* t922 = __v915;
  int* r923 = std___Identity_int___operator___int___const(&ref_tmp0920, t922);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_const_iterator_int_ t924 = agg_tmp0919;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r925 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_equal_pos(t921, t924, r923);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __res918 = r925;
    struct std___Rb_tree_node_base* t926 = __res918.second;
    _Bool cast927 = (_Bool)t926;
    if (cast927) {
      struct std___Rb_tree_node_base* t928 = __res918.first;
      struct std___Rb_tree_node_base* t929 = __res918.second;
      int* t930 = __v915;
      struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t931 = __node_gen916;
      struct std___Rb_tree_iterator_int_ r932 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t921, t928, t929, t930, t931);
      if (__cir_exc_active) {
        struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      __retval917 = r932;
      struct std___Rb_tree_iterator_int_ t933 = __retval917;
      return t933;
    }
  int* t934 = __v915;
  struct std___Rb_tree_iterator_int_ r935 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal_lower_int__(t921, t934);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval917 = r935;
  struct std___Rb_tree_iterator_int_ t936 = __retval917;
  return t936;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE3endEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v937) {
bb938:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this939;
  struct std___Rb_tree_iterator_int_ __retval940;
  this939 = v937;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t941 = this939;
  struct std___Rb_tree_node_base* r942 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t941);
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval940, r942);
  struct std___Rb_tree_iterator_int_ t943 = __retval940;
  return t943;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_insert_range_equalIPiEENSt9enable_ifIXsr17__same_value_typeIT_EE5valueEvE4typeES9_S9_
void std__enable_if___same_value_type_int____value__void___type_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_range_equal_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v944, int* v945, int* v946) {
bb947:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this948;
  int* __first949;
  int* __last950;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node __an951;
  this948 = v944;
  __first949 = v945;
  __last950 = v946;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t952 = this948;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(&__an951, t952);
  if (__cir_exc_active) {
    return;
  }
    struct std___Rb_tree_const_iterator_int_ agg_tmp0953;
    struct std___Rb_tree_iterator_int_ ref_tmp0954;
    struct std___Rb_tree_iterator_int_ agg_tmp1955;
    while (1) {
      int* t957 = __first949;
      int* t958 = __last950;
      _Bool c959 = ((t957 != t958)) ? 1 : 0;
      if (!c959) break;
      struct std___Rb_tree_iterator_int_ r960 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(t952);
      ref_tmp0954 = r960;
      std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&agg_tmp0953, &ref_tmp0954);
      int* t961 = __first949;
      struct std___Rb_tree_const_iterator_int_ t962 = agg_tmp0953;
      struct std___Rb_tree_iterator_int_ r963 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t952, t962, t961, &__an951);
      if (__cir_exc_active) {
        return;
      }
      agg_tmp1955 = r963;
    for_step956: ;
      int* t964 = __first949;
      int c965 = 1;
      int* ptr966 = &(t964)[c965];
      __first949 = ptr966;
    }
  return;
}

// function: _ZNSt8multisetIiSt4lessIiESaIiEE6insertIPiEEvT_S6_
void void_std__multiset_int__std__less_int___std__allocator_int_____insert_int__(struct std__multiset_int__std__less_int___std__allocator_int__* v967, int* v968, int* v969) {
bb970:
  struct std__multiset_int__std__less_int___std__allocator_int__* this971;
  int* __first972;
  int* __last973;
  this971 = v967;
  __first972 = v968;
  __last973 = v969;
  struct std__multiset_int__std__less_int___std__allocator_int__* t974 = this971;
  int* t975 = __first972;
  int* t976 = __last973;
  std__enable_if___same_value_type_int____value__void___type_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_range_equal_int__(&t974->_M_t, t975, t976);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* v977, struct std___Rb_tree_node_base* v978) {
bb979:
  struct std___Rb_tree_const_iterator_int_* this980;
  struct std___Rb_tree_node_base* __x981;
  this980 = v977;
  __x981 = v978;
  struct std___Rb_tree_const_iterator_int_* t982 = this980;
  struct std___Rb_tree_node_base* t983 = __x981;
  t982->_M_node = t983;
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5beginEv
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v984) {
bb985:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this986;
  struct std___Rb_tree_const_iterator_int_ __retval987;
  this986 = v984;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t988 = this986;
  struct std___Rb_tree_header* base989 = (struct std___Rb_tree_header*)((char *)&(t988->_M_impl) + 8);
  struct std___Rb_tree_node_base* t990 = base989->_M_header._M_left;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval987, t990);
  struct std___Rb_tree_const_iterator_int_ t991 = __retval987;
  return t991;
}

// function: _ZNKSt8multisetIiSt4lessIiESaIiEE5beginEv
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____begin___const(struct std__multiset_int__std__less_int___std__allocator_int__* v992) {
bb993:
  struct std__multiset_int__std__less_int___std__allocator_int__* this994;
  struct std___Rb_tree_const_iterator_int_ __retval995;
  this994 = v992;
  struct std__multiset_int__std__less_int___std__allocator_int__* t996 = this994;
  struct std___Rb_tree_const_iterator_int_ r997 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(&t996->_M_t);
  __retval995 = r997;
  struct std___Rb_tree_const_iterator_int_ t998 = __retval995;
  return t998;
}

// function: _ZNKSt23_Rb_tree_const_iteratorIiEdeEv
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* v999) {
bb1000:
  struct std___Rb_tree_const_iterator_int_* this1001;
  int* __retval1002;
  this1001 = v999;
  struct std___Rb_tree_const_iterator_int_* t1003 = this1001;
  struct std___Rb_tree_node_base* t1004 = t1003->_M_node;
  struct std___Rb_tree_node_int_* derived1005 = ((t1004) ? (struct std___Rb_tree_node_int_*)((char *)t1004 - 0) : (struct std___Rb_tree_node_int_*)0);
  int* r1006 = std___Rb_tree_node_int____M_valptr___const(derived1005);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1002 = r1006;
  int* t1007 = __retval1002;
  return t1007;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEppEi
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* v1008, int v1009) {
bb1010:
  struct std___Rb_tree_const_iterator_int_* this1011;
  int unnamed1012;
  struct std___Rb_tree_const_iterator_int_ __retval1013;
  this1011 = v1008;
  unnamed1012 = v1009;
  struct std___Rb_tree_const_iterator_int_* t1014 = this1011;
  __retval1013 = *t1014; // copy
  struct std___Rb_tree_node_base* t1015 = t1014->_M_node;
  struct std___Rb_tree_node_base* r1016 = std___Rb_tree_increment(t1015);
  t1014->_M_node = r1016;
  struct std___Rb_tree_const_iterator_int_ t1017 = __retval1013;
  return t1017;
}

// function: _ZNSt8multisetIiSt4lessIiESaIiEED2Ev
void std__multiset_int__std__less_int___std__allocator_int______multiset(struct std__multiset_int__std__less_int___std__allocator_int__* v1018) {
bb1019:
  struct std__multiset_int__std__less_int___std__allocator_int__* this1020;
  this1020 = v1018;
  struct std__multiset_int__std__less_int___std__allocator_int__* t1021 = this1020;
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(&t1021->_M_t);
  }
  return;
}

// function: main
int main() {
bb1022:
  int __retval1023;
  struct std__multiset_int__std__less_int___std__allocator_int__ myset1024;
  struct std___Rb_tree_const_iterator_int_ it1025;
  struct std___Rb_tree_const_iterator_int_ ref_tmp11026;
  int ref_tmp21027;
  struct std___Rb_tree_const_iterator_int_ agg_tmp11028;
  int ref_tmp31029;
  struct std___Rb_tree_const_iterator_int_ agg_tmp21030;
  struct std___Rb_tree_const_iterator_int_ agg_tmp31031;
  int ref_tmp41032;
  struct std___Rb_tree_const_iterator_int_ agg_tmp41033;
  struct std___Rb_tree_const_iterator_int_ agg_tmp51034;
  int ref_tmp51035;
  struct std___Rb_tree_const_iterator_int_ agg_tmp61036;
  int myints1037[3];
  struct std___Rb_tree_const_iterator_int_ ref_tmp61038;
  struct std___Rb_tree_const_iterator_int_ agg_tmp71039;
  struct std___Rb_tree_const_iterator_int_ agg_tmp81040;
  struct std___Rb_tree_const_iterator_int_ agg_tmp91041;
  struct std___Rb_tree_const_iterator_int_ agg_tmp101042;
  struct std___Rb_tree_const_iterator_int_ agg_tmp111043;
  struct std___Rb_tree_const_iterator_int_ agg_tmp121044;
  struct std___Rb_tree_const_iterator_int_ agg_tmp131045;
  struct std___Rb_tree_const_iterator_int_ agg_tmp141046;
  struct std___Rb_tree_const_iterator_int_ agg_tmp151047;
  struct std___Rb_tree_const_iterator_int_ agg_tmp161048;
  struct std___Rb_tree_const_iterator_int_ agg_tmp171049;
  int c1050 = 0;
  __retval1023 = c1050;
  std__multiset_int__std__less_int___std__allocator_int_____multiset(&myset1024);
    std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(&it1025);
      int i1051;
      int ref_tmp01052;
      struct std___Rb_tree_const_iterator_int_ agg_tmp01053;
      int c1054 = 1;
      i1051 = c1054;
      while (1) {
        int t1056 = i1051;
        int c1057 = 5;
        _Bool c1058 = ((t1056 <= c1057)) ? 1 : 0;
        if (!c1058) break;
        int t1059 = i1051;
        int c1060 = 10;
        int b1061 = t1059 * c1060;
        ref_tmp01052 = b1061;
        struct std___Rb_tree_const_iterator_int_ r1062 = std__multiset_int__std__less_int___std__allocator_int_____insert(&myset1024, &ref_tmp01052);
        if (__cir_exc_active) {
          {
            std__multiset_int__std__less_int___std__allocator_int______multiset(&myset1024);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        agg_tmp01053 = r1062;
      for_step1055: ;
        int t1063 = i1051;
        int u1064 = t1063 + 1;
        i1051 = u1064;
      }
    unsigned long r1065 = std__multiset_int__std__less_int___std__allocator_int_____size___const(&myset1024);
    unsigned long c1066 = 5;
    _Bool c1067 = ((r1065 == c1066)) ? 1 : 0;
    if (c1067) {
    } else {
      char* cast1068 = (char*)&(_str);
      char* c1069 = _str_1;
      unsigned int c1070 = 21;
      char* cast1071 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1068, c1069, c1070, cast1071);
    }
    int c1072 = 20;
    ref_tmp21027 = c1072;
    struct std___Rb_tree_const_iterator_int_ r1073 = std__multiset_int__std__less_int___std__allocator_int_____insert(&myset1024, &ref_tmp21027);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset1024);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    ref_tmp11026 = r1073;
    struct std___Rb_tree_const_iterator_int_* r1074 = std___Rb_tree_const_iterator_int___operator_(&it1025, &ref_tmp11026);
    agg_tmp11028 = it1025; // copy
    int c1075 = 25;
    ref_tmp31029 = c1075;
    struct std___Rb_tree_const_iterator_int_ t1076 = agg_tmp11028;
    struct std___Rb_tree_const_iterator_int_ r1077 = std__multiset_int__std__less_int___std__allocator_int_____insert_2(&myset1024, t1076, &ref_tmp31029);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset1024);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp21030 = r1077;
    agg_tmp31031 = it1025; // copy
    int c1078 = 24;
    ref_tmp41032 = c1078;
    struct std___Rb_tree_const_iterator_int_ t1079 = agg_tmp31031;
    struct std___Rb_tree_const_iterator_int_ r1080 = std__multiset_int__std__less_int___std__allocator_int_____insert_2(&myset1024, t1079, &ref_tmp41032);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset1024);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp41033 = r1080;
    agg_tmp51034 = it1025; // copy
    int c1081 = 26;
    ref_tmp51035 = c1081;
    struct std___Rb_tree_const_iterator_int_ t1082 = agg_tmp51034;
    struct std___Rb_tree_const_iterator_int_ r1083 = std__multiset_int__std__less_int___std__allocator_int_____insert_2(&myset1024, t1082, &ref_tmp51035);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset1024);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp61036 = r1083;
    // array copy
    __builtin_memcpy(myints1037, __const_main_myints, (unsigned long)3 * sizeof(__const_main_myints[0]));
    int* cast1084 = (int*)&(myints1037);
    int* cast1085 = (int*)&(myints1037);
    int c1086 = 3;
    int* ptr1087 = &(cast1085)[c1086];
    void_std__multiset_int__std__less_int___std__allocator_int_____insert_int__(&myset1024, cast1084, ptr1087);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset1024);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r1088 = std__multiset_int__std__less_int___std__allocator_int_____size___const(&myset1024);
    unsigned long c1089 = 12;
    _Bool c1090 = ((r1088 == c1089)) ? 1 : 0;
    if (c1090) {
    } else {
      char* cast1091 = (char*)&(_str_2);
      char* c1092 = _str_1;
      unsigned int c1093 = 31;
      char* cast1094 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1091, c1092, c1093, cast1094);
    }
    struct std___Rb_tree_const_iterator_int_ r1095 = std__multiset_int__std__less_int___std__allocator_int_____begin___const(&myset1024);
    ref_tmp61038 = r1095;
    struct std___Rb_tree_const_iterator_int_* r1096 = std___Rb_tree_const_iterator_int___operator_(&it1025, &ref_tmp61038);
    int* r1097 = std___Rb_tree_const_iterator_int___operator____const(&it1025);
    int t1098 = *r1097;
    int c1099 = 5;
    _Bool c1100 = ((t1098 == c1099)) ? 1 : 0;
    if (c1100) {
    } else {
      char* cast1101 = (char*)&(_str_3);
      char* c1102 = _str_1;
      unsigned int c1103 = 34;
      char* cast1104 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1101, c1102, c1103, cast1104);
    }
    int c1105 = 0;
    struct std___Rb_tree_const_iterator_int_ r1106 = std___Rb_tree_const_iterator_int___operator__(&it1025, c1105);
    agg_tmp71039 = r1106;
    int* r1107 = std___Rb_tree_const_iterator_int___operator____const(&it1025);
    int t1108 = *r1107;
    int c1109 = 10;
    _Bool c1110 = ((t1108 == c1109)) ? 1 : 0;
    if (c1110) {
    } else {
      char* cast1111 = (char*)&(_str_4);
      char* c1112 = _str_1;
      unsigned int c1113 = 36;
      char* cast1114 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1111, c1112, c1113, cast1114);
    }
    int c1115 = 0;
    struct std___Rb_tree_const_iterator_int_ r1116 = std___Rb_tree_const_iterator_int___operator__(&it1025, c1115);
    agg_tmp81040 = r1116;
    int* r1117 = std___Rb_tree_const_iterator_int___operator____const(&it1025);
    int t1118 = *r1117;
    int c1119 = 10;
    _Bool c1120 = ((t1118 == c1119)) ? 1 : 0;
    if (c1120) {
    } else {
      char* cast1121 = (char*)&(_str_4);
      char* c1122 = _str_1;
      unsigned int c1123 = 38;
      char* cast1124 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1121, c1122, c1123, cast1124);
    }
    int c1125 = 0;
    struct std___Rb_tree_const_iterator_int_ r1126 = std___Rb_tree_const_iterator_int___operator__(&it1025, c1125);
    agg_tmp91041 = r1126;
    int* r1127 = std___Rb_tree_const_iterator_int___operator____const(&it1025);
    int t1128 = *r1127;
    int c1129 = 15;
    _Bool c1130 = ((t1128 != c1129)) ? 1 : 0;
    if (c1130) {
    } else {
      char* cast1131 = (char*)&(_str_5);
      char* c1132 = _str_1;
      unsigned int c1133 = 40;
      char* cast1134 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1131, c1132, c1133, cast1134);
    }
    int c1135 = 0;
    struct std___Rb_tree_const_iterator_int_ r1136 = std___Rb_tree_const_iterator_int___operator__(&it1025, c1135);
    agg_tmp101042 = r1136;
    int* r1137 = std___Rb_tree_const_iterator_int___operator____const(&it1025);
    int t1138 = *r1137;
    int c1139 = 20;
    _Bool c1140 = ((t1138 == c1139)) ? 1 : 0;
    if (c1140) {
    } else {
      char* cast1141 = (char*)&(_str_6);
      char* c1142 = _str_1;
      unsigned int c1143 = 42;
      char* cast1144 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1141, c1142, c1143, cast1144);
    }
    int c1145 = 0;
    struct std___Rb_tree_const_iterator_int_ r1146 = std___Rb_tree_const_iterator_int___operator__(&it1025, c1145);
    agg_tmp111043 = r1146;
    int* r1147 = std___Rb_tree_const_iterator_int___operator____const(&it1025);
    int t1148 = *r1147;
    int c1149 = 20;
    _Bool c1150 = ((t1148 == c1149)) ? 1 : 0;
    if (c1150) {
    } else {
      char* cast1151 = (char*)&(_str_6);
      char* c1152 = _str_1;
      unsigned int c1153 = 44;
      char* cast1154 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1151, c1152, c1153, cast1154);
    }
    int c1155 = 0;
    struct std___Rb_tree_const_iterator_int_ r1156 = std___Rb_tree_const_iterator_int___operator__(&it1025, c1155);
    agg_tmp121044 = r1156;
    int* r1157 = std___Rb_tree_const_iterator_int___operator____const(&it1025);
    int t1158 = *r1157;
    int c1159 = 24;
    _Bool c1160 = ((t1158 == c1159)) ? 1 : 0;
    if (c1160) {
    } else {
      char* cast1161 = (char*)&(_str_7);
      char* c1162 = _str_1;
      unsigned int c1163 = 46;
      char* cast1164 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1161, c1162, c1163, cast1164);
    }
    int c1165 = 0;
    struct std___Rb_tree_const_iterator_int_ r1166 = std___Rb_tree_const_iterator_int___operator__(&it1025, c1165);
    agg_tmp131045 = r1166;
    int* r1167 = std___Rb_tree_const_iterator_int___operator____const(&it1025);
    int t1168 = *r1167;
    int c1169 = 25;
    _Bool c1170 = ((t1168 == c1169)) ? 1 : 0;
    if (c1170) {
    } else {
      char* cast1171 = (char*)&(_str_8);
      char* c1172 = _str_1;
      unsigned int c1173 = 48;
      char* cast1174 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1171, c1172, c1173, cast1174);
    }
    int c1175 = 0;
    struct std___Rb_tree_const_iterator_int_ r1176 = std___Rb_tree_const_iterator_int___operator__(&it1025, c1175);
    agg_tmp141046 = r1176;
    int* r1177 = std___Rb_tree_const_iterator_int___operator____const(&it1025);
    int t1178 = *r1177;
    int c1179 = 26;
    _Bool c1180 = ((t1178 == c1179)) ? 1 : 0;
    if (c1180) {
    } else {
      char* cast1181 = (char*)&(_str_9);
      char* c1182 = _str_1;
      unsigned int c1183 = 50;
      char* cast1184 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1181, c1182, c1183, cast1184);
    }
    int c1185 = 0;
    struct std___Rb_tree_const_iterator_int_ r1186 = std___Rb_tree_const_iterator_int___operator__(&it1025, c1185);
    agg_tmp151047 = r1186;
    int* r1187 = std___Rb_tree_const_iterator_int___operator____const(&it1025);
    int t1188 = *r1187;
    int c1189 = 30;
    _Bool c1190 = ((t1188 == c1189)) ? 1 : 0;
    if (c1190) {
    } else {
      char* cast1191 = (char*)&(_str_10);
      char* c1192 = _str_1;
      unsigned int c1193 = 52;
      char* cast1194 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1191, c1192, c1193, cast1194);
    }
    int c1195 = 0;
    struct std___Rb_tree_const_iterator_int_ r1196 = std___Rb_tree_const_iterator_int___operator__(&it1025, c1195);
    agg_tmp161048 = r1196;
    int* r1197 = std___Rb_tree_const_iterator_int___operator____const(&it1025);
    int t1198 = *r1197;
    int c1199 = 40;
    _Bool c1200 = ((t1198 == c1199)) ? 1 : 0;
    if (c1200) {
    } else {
      char* cast1201 = (char*)&(_str_11);
      char* c1202 = _str_1;
      unsigned int c1203 = 54;
      char* cast1204 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1201, c1202, c1203, cast1204);
    }
    int c1205 = 0;
    struct std___Rb_tree_const_iterator_int_ r1206 = std___Rb_tree_const_iterator_int___operator__(&it1025, c1205);
    agg_tmp171049 = r1206;
    int* r1207 = std___Rb_tree_const_iterator_int___operator____const(&it1025);
    int t1208 = *r1207;
    int c1209 = 50;
    _Bool c1210 = ((t1208 != c1209)) ? 1 : 0;
    if (c1210) {
    } else {
      char* cast1211 = (char*)&(_str_12);
      char* c1212 = _str_1;
      unsigned int c1213 = 56;
      char* cast1214 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1211, c1212, c1213, cast1214);
    }
    int c1215 = 0;
    __retval1023 = c1215;
    int t1216 = __retval1023;
    int ret_val1217 = t1216;
    {
      std__multiset_int__std__less_int___std__allocator_int______multiset(&myset1024);
    }
    return ret_val1217;
  int t1218 = __retval1023;
  return t1218;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1219) {
bb1220:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1221;
  this1221 = v1219;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1222 = this1221;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(&t1222->_M_impl);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1223) {
bb1224:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1225;
  this1225 = v1223;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1226 = this1225;
    struct std___Rb_tree_node_int_* r1227 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(t1226);
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t1226, r1227);
    if (__cir_exc_active) {
      {
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t1226->_M_impl);
      }
      return;
    }
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t1226->_M_impl);
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v1228) {
bb1229:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this1230;
  this1230 = v1228;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t1231 = this1230;
  struct std__allocator_std___Rb_tree_node_int__* base1232 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t1231 + 0);
  std__allocator_std___Rb_tree_node_int_____allocator(base1232);
    struct std___Rb_tree_key_compare_std__less_int__* base1233 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)t1231 + 0);
    std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(base1233);
    struct std___Rb_tree_header* base1234 = (struct std___Rb_tree_header*)((char *)t1231 + 8);
    std___Rb_tree_header___Rb_tree_header(base1234);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v1235) {
bb1236:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this1237;
  this1237 = v1235;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t1238 = this1237;
  {
    struct std__allocator_std___Rb_tree_node_int__* base1239 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t1238 + 0);
    std__allocator_std___Rb_tree_node_int______allocator(base1239);
  }
  return;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEEC2Ev
void std____new_allocator_std___Rb_tree_node_int_______new_allocator(struct std____new_allocator_std___Rb_tree_node_int__* v1240) {
bb1241:
  struct std____new_allocator_std___Rb_tree_node_int__* this1242;
  this1242 = v1240;
  struct std____new_allocator_std___Rb_tree_node_int__* t1243 = this1242;
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEEC2Ev
void std__allocator_std___Rb_tree_node_int_____allocator(struct std__allocator_std___Rb_tree_node_int__* v1244) {
bb1245:
  struct std__allocator_std___Rb_tree_node_int__* this1246;
  this1246 = v1244;
  struct std__allocator_std___Rb_tree_node_int__* t1247 = this1246;
  struct std____new_allocator_std___Rb_tree_node_int__* base1248 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t1247 + 0);
  std____new_allocator_std___Rb_tree_node_int_______new_allocator(base1248);
  return;
}

// function: _ZNSt20_Rb_tree_key_compareISt4lessIiEEC2Ev
void std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(struct std___Rb_tree_key_compare_std__less_int__* v1249) {
bb1250:
  struct std___Rb_tree_key_compare_std__less_int__* this1251;
  this1251 = v1249;
  return;
}

// function: _ZNSt15_Rb_tree_header8_M_resetEv
void std___Rb_tree_header___M_reset(struct std___Rb_tree_header* v1252) {
bb1253:
  struct std___Rb_tree_header* this1254;
  this1254 = v1252;
  struct std___Rb_tree_header* t1255 = this1254;
  struct std___Rb_tree_node_base* c1256 = ((void*)0);
  t1255->_M_header._M_parent = c1256;
  t1255->_M_header._M_left = &t1255->_M_header;
  t1255->_M_header._M_right = &t1255->_M_header;
  unsigned long c1257 = 0;
  t1255->_M_node_count = c1257;
  return;
}

// function: _ZNSt15_Rb_tree_headerC2Ev
void std___Rb_tree_header___Rb_tree_header(struct std___Rb_tree_header* v1258) {
bb1259:
  struct std___Rb_tree_header* this1260;
  this1260 = v1258;
  struct std___Rb_tree_header* t1261 = this1260;
  unsigned int c1262 = 0;
  t1261->_M_header._M_color = c1262;
  std___Rb_tree_header___M_reset(t1261);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEED2Ev
void std__allocator_std___Rb_tree_node_int______allocator(struct std__allocator_std___Rb_tree_node_int__* v1263) {
bb1264:
  struct std__allocator_std___Rb_tree_node_int__* this1265;
  this1265 = v1263;
  struct std__allocator_std___Rb_tree_node_int__* t1266 = this1265;
  return;
}

// function: _ZNSt13_Rb_tree_nodeIiE11_M_node_ptrEv
struct std___Rb_tree_node_int_* std___Rb_tree_node_int____M_node_ptr(struct std___Rb_tree_node_int_* v1267) {
bb1268:
  struct std___Rb_tree_node_int_* this1269;
  struct std___Rb_tree_node_int_* __retval1270;
  this1269 = v1267;
  struct std___Rb_tree_node_int_* t1271 = this1269;
  __retval1270 = t1271;
  struct std___Rb_tree_node_int_* t1272 = __retval1270;
  return t1272;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(struct std___Rb_tree_node_int_* v1273) {
bb1274:
  struct std___Rb_tree_node_int_* __x1275;
  struct std___Rb_tree_node_int_* __retval1276;
  __x1275 = v1273;
  struct std___Rb_tree_node_int_* t1277 = __x1275;
  struct std___Rb_tree_node_base* base1278 = (struct std___Rb_tree_node_base*)((char *)t1277 + 0);
  struct std___Rb_tree_node_base* t1279 = base1278->_M_right;
  _Bool cast1280 = (_Bool)t1279;
  struct std___Rb_tree_node_int_* ternary1281;
  if (cast1280) {
    struct std___Rb_tree_node_int_* t1282 = __x1275;
    struct std___Rb_tree_node_base* base1283 = (struct std___Rb_tree_node_base*)((char *)t1282 + 0);
    struct std___Rb_tree_node_base* t1284 = base1283->_M_right;
    struct std___Rb_tree_node_int_* derived1285 = (struct std___Rb_tree_node_int_*)((char *)t1284 - 0);
    struct std___Rb_tree_node_int_* r1286 = std___Rb_tree_node_int____M_node_ptr(derived1285);
    ternary1281 = (struct std___Rb_tree_node_int_*)r1286;
  } else {
    struct std___Rb_tree_node_int_* c1287 = ((void*)0);
    ternary1281 = (struct std___Rb_tree_node_int_*)c1287;
  }
  __retval1276 = ternary1281;
  struct std___Rb_tree_node_int_* t1288 = __retval1276;
  return t1288;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(struct std___Rb_tree_node_int_* v1289) {
bb1290:
  struct std___Rb_tree_node_int_* __x1291;
  struct std___Rb_tree_node_int_* __retval1292;
  __x1291 = v1289;
  struct std___Rb_tree_node_int_* t1293 = __x1291;
  struct std___Rb_tree_node_base* base1294 = (struct std___Rb_tree_node_base*)((char *)t1293 + 0);
  struct std___Rb_tree_node_base* t1295 = base1294->_M_left;
  _Bool cast1296 = (_Bool)t1295;
  struct std___Rb_tree_node_int_* ternary1297;
  if (cast1296) {
    struct std___Rb_tree_node_int_* t1298 = __x1291;
    struct std___Rb_tree_node_base* base1299 = (struct std___Rb_tree_node_base*)((char *)t1298 + 0);
    struct std___Rb_tree_node_base* t1300 = base1299->_M_left;
    struct std___Rb_tree_node_int_* derived1301 = (struct std___Rb_tree_node_int_*)((char *)t1300 - 0);
    struct std___Rb_tree_node_int_* r1302 = std___Rb_tree_node_int____M_node_ptr(derived1301);
    ternary1297 = (struct std___Rb_tree_node_int_*)r1302;
  } else {
    struct std___Rb_tree_node_int_* c1303 = ((void*)0);
    ternary1297 = (struct std___Rb_tree_node_int_*)c1303;
  }
  __retval1292 = ternary1297;
  struct std___Rb_tree_node_int_* t1304 = __retval1292;
  return t1304;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1305) {
bb1306:
  int* __location1307;
  __location1307 = v1305;
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(struct std__allocator_std___Rb_tree_node_int__* v1308, int* v1309) {
bb1310:
  struct std__allocator_std___Rb_tree_node_int__* __a1311;
  int* __p1312;
  __a1311 = v1308;
  __p1312 = v1309;
  int* t1313 = __p1312;
  void_std__destroy_at_int_(t1313);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___Rb_tree_node_int__* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1314) {
bb1315:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1316;
  struct std__allocator_std___Rb_tree_node_int__* __retval1317;
  this1316 = v1314;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1318 = this1316;
  struct std__allocator_std___Rb_tree_node_int__* base1319 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)&(t1318->_M_impl) + 0);
  __retval1317 = base1319;
  struct std__allocator_std___Rb_tree_node_int__* t1320 = __retval1317;
  return t1320;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v1321) {
bb1322:
  struct __gnu_cxx____aligned_membuf_int_* this1323;
  void* __retval1324;
  this1323 = v1321;
  struct __gnu_cxx____aligned_membuf_int_* t1325 = this1323;
  void* cast1326 = (void*)&(t1325->_M_storage);
  __retval1324 = cast1326;
  void* t1327 = __retval1324;
  return t1327;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v1328) {
bb1329:
  struct __gnu_cxx____aligned_membuf_int_* this1330;
  int* __retval1331;
  this1330 = v1328;
  struct __gnu_cxx____aligned_membuf_int_* t1332 = this1330;
  void* r1333 = __gnu_cxx____aligned_membuf_int____M_addr(t1332);
  int* cast1334 = (int*)r1333;
  __retval1331 = cast1334;
  int* t1335 = __retval1331;
  return t1335;
}

// function: _ZNSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr(struct std___Rb_tree_node_int_* v1336) {
bb1337:
  struct std___Rb_tree_node_int_* this1338;
  int* __retval1339;
  this1338 = v1336;
  struct std___Rb_tree_node_int_* t1340 = this1338;
  int* r1341 = __gnu_cxx____aligned_membuf_int____M_ptr(&t1340->_M_storage);
  __retval1339 = r1341;
  int* t1342 = __retval1339;
  return t1342;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_destroy_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1343, struct std___Rb_tree_node_int_* v1344) {
bb1345:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1346;
  struct std___Rb_tree_node_int_* __p1347;
  this1346 = v1343;
  __p1347 = v1344;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1348 = this1346;
  struct std__allocator_std___Rb_tree_node_int__* r1349 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t1348);
  struct std___Rb_tree_node_int_* t1350 = __p1347;
  int* r1351 = std___Rb_tree_node_int____M_valptr(t1350);
  if (__cir_exc_active) {
    return;
  }
  void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(r1349, r1351);
  struct std___Rb_tree_node_int_* t1352 = __p1347;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1353:
  _Bool __retval1354;
    _Bool c1355 = 0;
    __retval1354 = c1355;
    _Bool t1356 = __retval1354;
    return t1356;
  abort();
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___Rb_tree_node_int_____deallocate(struct std____new_allocator_std___Rb_tree_node_int__* v1357, struct std___Rb_tree_node_int_* v1358, unsigned long v1359) {
bb1360:
  struct std____new_allocator_std___Rb_tree_node_int__* this1361;
  struct std___Rb_tree_node_int_* __p1362;
  unsigned long __n1363;
  this1361 = v1357;
  __p1362 = v1358;
  __n1363 = v1359;
  struct std____new_allocator_std___Rb_tree_node_int__* t1364 = this1361;
    unsigned long c1365 = 8;
    unsigned long c1366 = 16;
    _Bool c1367 = ((c1365 > c1366)) ? 1 : 0;
    if (c1367) {
      struct std___Rb_tree_node_int_* t1368 = __p1362;
      void* cast1369 = (void*)t1368;
      unsigned long t1370 = __n1363;
      unsigned long c1371 = 40;
      unsigned long b1372 = t1370 * c1371;
      unsigned long c1373 = 8;
      operator_delete_3(cast1369, b1372, c1373);
      return;
    }
  struct std___Rb_tree_node_int_* t1374 = __p1362;
  void* cast1375 = (void*)t1374;
  unsigned long t1376 = __n1363;
  unsigned long c1377 = 40;
  unsigned long b1378 = t1376 * c1377;
  operator_delete_2(cast1375, b1378);
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE10deallocateEPS0_m
void std__allocator_std___Rb_tree_node_int_____deallocate(struct std__allocator_std___Rb_tree_node_int__* v1379, struct std___Rb_tree_node_int_* v1380, unsigned long v1381) {
bb1382:
  struct std__allocator_std___Rb_tree_node_int__* this1383;
  struct std___Rb_tree_node_int_* __p1384;
  unsigned long __n1385;
  this1383 = v1379;
  __p1384 = v1380;
  __n1385 = v1381;
  struct std__allocator_std___Rb_tree_node_int__* t1386 = this1383;
    _Bool r1387 = std____is_constant_evaluated();
    if (r1387) {
      struct std___Rb_tree_node_int_* t1388 = __p1384;
      void* cast1389 = (void*)t1388;
      operator_delete(cast1389);
      return;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base1390 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t1386 + 0);
  struct std___Rb_tree_node_int_* t1391 = __p1384;
  unsigned long t1392 = __n1385;
  std____new_allocator_std___Rb_tree_node_int_____deallocate(base1390, t1391, t1392);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(struct std__allocator_std___Rb_tree_node_int__* v1393, struct std___Rb_tree_node_int_* v1394, unsigned long v1395) {
bb1396:
  struct std__allocator_std___Rb_tree_node_int__* __a1397;
  struct std___Rb_tree_node_int_* __p1398;
  unsigned long __n1399;
  __a1397 = v1393;
  __p1398 = v1394;
  __n1399 = v1395;
  struct std__allocator_std___Rb_tree_node_int__* t1400 = __a1397;
  struct std___Rb_tree_node_int_* t1401 = __p1398;
  unsigned long t1402 = __n1399;
  std__allocator_std___Rb_tree_node_int_____deallocate(t1400, t1401, t1402);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_put_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1403, struct std___Rb_tree_node_int_* v1404) {
bb1405:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1406;
  struct std___Rb_tree_node_int_* __p1407;
  this1406 = v1403;
  __p1407 = v1404;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1408 = this1406;
  struct std__allocator_std___Rb_tree_node_int__* r1409 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t1408);
  struct std___Rb_tree_node_int_* t1410 = __p1407;
  unsigned long c1411 = 1;
  std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(r1409, t1410, c1411);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_drop_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1412, struct std___Rb_tree_node_int_* v1413) {
bb1414:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1415;
  struct std___Rb_tree_node_int_* __p1416;
  this1415 = v1412;
  __p1416 = v1413;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1417 = this1415;
  struct std___Rb_tree_node_int_* t1418 = __p1416;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(t1417, t1418);
  struct std___Rb_tree_node_int_* t1419 = __p1416;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t1417, t1419);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1420, struct std___Rb_tree_node_int_* v1421) {
bb1422:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1423;
  struct std___Rb_tree_node_int_* __x1424;
  this1423 = v1420;
  __x1424 = v1421;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1425 = this1423;
    while (1) {
      struct std___Rb_tree_node_int_* t1426 = __x1424;
      _Bool cast1427 = (_Bool)t1426;
      if (!cast1427) break;
        struct std___Rb_tree_node_int_* __y1428;
        struct std___Rb_tree_node_int_* t1429 = __x1424;
        struct std___Rb_tree_node_int_* r1430 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(t1429);
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t1425, r1430);
        if (__cir_exc_active) {
          return;
        }
        struct std___Rb_tree_node_int_* t1431 = __x1424;
        struct std___Rb_tree_node_int_* r1432 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(t1431);
        if (__cir_exc_active) {
          return;
        }
        __y1428 = r1432;
        struct std___Rb_tree_node_int_* t1433 = __x1424;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(t1425, t1433);
        struct std___Rb_tree_node_int_* t1434 = __y1428;
        __x1424 = t1434;
    }
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_M_begin_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1435) {
bb1436:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1437;
  struct std___Rb_tree_node_int_* __retval1438;
  struct std___Rb_tree_node_base* __begin1439;
  this1437 = v1435;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1440 = this1437;
  struct std___Rb_tree_header* base1441 = (struct std___Rb_tree_header*)((char *)&(t1440->_M_impl) + 8);
  struct std___Rb_tree_node_base* t1442 = base1441->_M_header._M_parent;
  __begin1439 = t1442;
  struct std___Rb_tree_node_base* t1443 = __begin1439;
  _Bool cast1444 = (_Bool)t1443;
  struct std___Rb_tree_node_int_* ternary1445;
  if (cast1444) {
    struct std___Rb_tree_node_base* t1446 = __begin1439;
    struct std___Rb_tree_node_int_* derived1447 = (struct std___Rb_tree_node_int_*)((char *)t1446 - 0);
    struct std___Rb_tree_node_int_* r1448 = std___Rb_tree_node_int____M_node_ptr(derived1447);
    ternary1445 = (struct std___Rb_tree_node_int_*)r1448;
  } else {
    struct std___Rb_tree_node_int_* c1449 = ((void*)0);
    ternary1445 = (struct std___Rb_tree_node_int_*)c1449;
  }
  __retval1438 = ternary1445;
  struct std___Rb_tree_node_int_* t1450 = __retval1438;
  return t1450;
}

