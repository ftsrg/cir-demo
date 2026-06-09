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
struct std__multiset_int__std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ _M_t; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[10] = "*it == 20";
char _str_1[111] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/multiset/multiset-erase/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[10] = "*it == 30";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[16] = "myset contains:";
char _str_4[2] = " ";
char _str_5[9] = "*it == i";
char _str_6[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_tree.h";
char __PRETTY_FUNCTION____ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5eraseB5cxx11ESt23_Rb_tree_const_iteratorIiE[210] = "iterator std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>>::erase(const_iterator) [_Key = int, _Val = int, _KeyOfValue = std::_Identity<int>, _Compare = std::less<int>, _Alloc = std::allocator<int>]";
char _str_7[20] = "__position != end()";
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
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_node_base* p1);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____begin___const(struct std__multiset_int__std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_const_iterator_int_* p1);
extern struct std___Rb_tree_node_base* std___Rb_tree_increment(struct std___Rb_tree_node_base* p0);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* p0, int p1);
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
extern struct std___Rb_tree_node_base* std___Rb_tree_rebalance_for_erase(struct std___Rb_tree_node_base* p0, struct std___Rb_tree_node_base* p1);
struct std___Rb_tree_node_base* std____rb_tree___Node_traits_int__int_____S_rebalance_for_erase(struct std___Rb_tree_node_base* p0, struct std___Rb_tree_node_base* p1);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase_abi_cxx11_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1);
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____erase_abi_cxx11_(struct std__multiset_int__std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_lower_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, int* p3);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_upper_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, int* p3);
void _ZNSt4pairISt17_Rb_tree_iteratorIiES1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__* p0, struct std___Rb_tree_iterator_int_* p1, struct std___Rb_tree_iterator_int_* p2);
struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____equal_range(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____clear(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux_2(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1, struct std___Rb_tree_const_iterator_int_ p2);
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
unsigned long std__multiset_int__std__less_int___std__allocator_int_____erase(struct std__multiset_int__std__less_int___std__allocator_int__* p0, int* p1);
_Bool std__operator__(struct std___Rb_tree_iterator_int_* p0, struct std___Rb_tree_iterator_int_* p1);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____find(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____find(struct std__multiset_int__std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase_abi_cxx11__2(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1, struct std___Rb_tree_const_iterator_int_ p2);
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____erase_abi_cxx11__2(struct std__multiset_int__std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1, struct std___Rb_tree_const_iterator_int_ p2);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____end___const(struct std__multiset_int__std__less_int___std__allocator_int__* p0);
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
_Bool std__operator___2(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_const_iterator_int_* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator___2(struct std___Rb_tree_const_iterator_int_* p0);
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

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* v415, struct std___Rb_tree_node_base* v416) {
bb417:
  struct std___Rb_tree_const_iterator_int_* this418;
  struct std___Rb_tree_node_base* __x419;
  this418 = v415;
  __x419 = v416;
  struct std___Rb_tree_const_iterator_int_* t420 = this418;
  struct std___Rb_tree_node_base* t421 = __x419;
  t420->_M_node = t421;
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5beginEv
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v422) {
bb423:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this424;
  struct std___Rb_tree_const_iterator_int_ __retval425;
  this424 = v422;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t426 = this424;
  struct std___Rb_tree_header* base427 = (struct std___Rb_tree_header*)((char *)&(t426->_M_impl) + 8);
  struct std___Rb_tree_node_base* t428 = base427->_M_header._M_left;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval425, t428);
  struct std___Rb_tree_const_iterator_int_ t429 = __retval425;
  return t429;
}

// function: _ZNKSt8multisetIiSt4lessIiESaIiEE5beginEv
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____begin___const(struct std__multiset_int__std__less_int___std__allocator_int__* v430) {
bb431:
  struct std__multiset_int__std__less_int___std__allocator_int__* this432;
  struct std___Rb_tree_const_iterator_int_ __retval433;
  this432 = v430;
  struct std__multiset_int__std__less_int___std__allocator_int__* t434 = this432;
  struct std___Rb_tree_const_iterator_int_ r435 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(&t434->_M_t);
  __retval433 = r435;
  struct std___Rb_tree_const_iterator_int_ t436 = __retval433;
  return t436;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEaSEOS0_
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* v437, struct std___Rb_tree_const_iterator_int_* v438) {
bb439:
  struct std___Rb_tree_const_iterator_int_* this440;
  struct std___Rb_tree_const_iterator_int_* unnamed441;
  struct std___Rb_tree_const_iterator_int_* __retval442;
  this440 = v437;
  unnamed441 = v438;
  struct std___Rb_tree_const_iterator_int_* t443 = this440;
  struct std___Rb_tree_const_iterator_int_* t444 = unnamed441;
  struct std___Rb_tree_node_base* t445 = t444->_M_node;
  t443->_M_node = t445;
  __retval442 = t443;
  struct std___Rb_tree_const_iterator_int_* t446 = __retval442;
  return t446;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEppEi
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* v447, int v448) {
bb449:
  struct std___Rb_tree_const_iterator_int_* this450;
  int unnamed451;
  struct std___Rb_tree_const_iterator_int_ __retval452;
  this450 = v447;
  unnamed451 = v448;
  struct std___Rb_tree_const_iterator_int_* t453 = this450;
  __retval452 = *t453; // copy
  struct std___Rb_tree_node_base* t454 = t453->_M_node;
  struct std___Rb_tree_node_base* r455 = std___Rb_tree_increment(t454);
  t453->_M_node = r455;
  struct std___Rb_tree_const_iterator_int_ t456 = __retval452;
  return t456;
}

// function: _ZNKSt23_Rb_tree_const_iteratorIiEdeEv
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* v457) {
bb458:
  struct std___Rb_tree_const_iterator_int_* this459;
  int* __retval460;
  this459 = v457;
  struct std___Rb_tree_const_iterator_int_* t461 = this459;
  struct std___Rb_tree_node_base* t462 = t461->_M_node;
  struct std___Rb_tree_node_int_* derived463 = ((t462) ? (struct std___Rb_tree_node_int_*)((char *)t462 - 0) : (struct std___Rb_tree_node_int_*)0);
  int* r464 = std___Rb_tree_node_int____M_valptr___const(derived463);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval460 = r464;
  int* t465 = __retval460;
  return t465;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE3endEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v466) {
bb467:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this468;
  struct std___Rb_tree_iterator_int_ __retval469;
  this468 = v466;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t470 = this468;
  struct std___Rb_tree_node_base* r471 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t470);
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval469, r471);
  struct std___Rb_tree_iterator_int_ t472 = __retval469;
  return t472;
}

// function: _ZNSt9__rb_tree12_Node_traitsIiPiE22_S_rebalance_for_eraseEPSt18_Rb_tree_node_baseRS3_
struct std___Rb_tree_node_base* std____rb_tree___Node_traits_int__int_____S_rebalance_for_erase(struct std___Rb_tree_node_base* v473, struct std___Rb_tree_node_base* v474) {
bb475:
  struct std___Rb_tree_node_base* __z476;
  struct std___Rb_tree_node_base* __header477;
  struct std___Rb_tree_node_base* __retval478;
  __z476 = v473;
  __header477 = v474;
  struct std___Rb_tree_node_base* t479 = __z476;
  struct std___Rb_tree_node_base* t480 = __header477;
  struct std___Rb_tree_node_base* r481 = std___Rb_tree_rebalance_for_erase(t479, t480);
  __retval478 = r481;
  struct std___Rb_tree_node_base* t482 = __retval478;
  return t482;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_erase_auxESt23_Rb_tree_const_iteratorIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v483, struct std___Rb_tree_const_iterator_int_ v484) {
bb485:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this486;
  struct std___Rb_tree_const_iterator_int_ __position487;
  struct std___Rb_tree_node_base* __y488;
  this486 = v483;
  __position487 = v484;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t489 = this486;
  struct std___Rb_tree_node_base* t490 = __position487._M_node;
  struct std___Rb_tree_header* base491 = (struct std___Rb_tree_header*)((char *)&(t489->_M_impl) + 8);
  struct std___Rb_tree_node_base* r492 = std____rb_tree___Node_traits_int__int_____S_rebalance_for_erase(t490, &base491->_M_header);
  __y488 = r492;
  struct std___Rb_tree_node_base* t493 = __y488;
  struct std___Rb_tree_node_int_* derived494 = (struct std___Rb_tree_node_int_*)((char *)t493 - 0);
  struct std___Rb_tree_node_int_* r495 = std___Rb_tree_node_int____M_node_ptr(derived494);
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(t489, r495);
  struct std___Rb_tree_header* base496 = (struct std___Rb_tree_header*)((char *)&(t489->_M_impl) + 8);
  unsigned long t497 = base496->_M_node_count;
  unsigned long u498 = t497 - 1;
  base496->_M_node_count = u498;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5eraseB5cxx11ESt23_Rb_tree_const_iteratorIiE
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase_abi_cxx11_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v499, struct std___Rb_tree_const_iterator_int_ v500) {
bb501:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this502;
  struct std___Rb_tree_const_iterator_int_ __position503;
  struct std___Rb_tree_iterator_int_ __retval504;
  struct std___Rb_tree_const_iterator_int_ __result505;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0506;
  this502 = v499;
  __position503 = v500;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t507 = this502;
    do {
          struct std___Rb_tree_const_iterator_int_ ref_tmp0508;
          struct std___Rb_tree_iterator_int_ ref_tmp1509;
          struct std___Rb_tree_iterator_int_ r510 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(t507);
          ref_tmp1509 = r510;
          std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&ref_tmp0508, &ref_tmp1509);
          _Bool r511 = std__operator___2(&__position503, &ref_tmp0508);
          if (r511) {
            char* cast512 = (char*)&(_str_6);
            int c513 = 1818;
            char* cast514 = (char*)&(__PRETTY_FUNCTION____ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5eraseB5cxx11ESt23_Rb_tree_const_iteratorIiE);
            char* cast515 = (char*)&(_str_7);
            std____glibcxx_assert_fail(cast512, c513, cast514, cast515);
          }
      _Bool c516 = 0;
      if (!c516) break;
    } while (1);
  __result505 = __position503; // copy
  struct std___Rb_tree_const_iterator_int_* r517 = std___Rb_tree_const_iterator_int___operator___2(&__result505);
  agg_tmp0506 = __position503; // copy
  struct std___Rb_tree_const_iterator_int_ t518 = agg_tmp0506;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux(t507, t518);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* t519 = __result505._M_node;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval504, t519);
  struct std___Rb_tree_iterator_int_ t520 = __retval504;
  return t520;
}

// function: _ZNSt8multisetIiSt4lessIiESaIiEE5eraseB5cxx11ESt23_Rb_tree_const_iteratorIiE
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____erase_abi_cxx11_(struct std__multiset_int__std__less_int___std__allocator_int__* v521, struct std___Rb_tree_const_iterator_int_ v522) {
bb523:
  struct std__multiset_int__std__less_int___std__allocator_int__* this524;
  struct std___Rb_tree_const_iterator_int_ __position525;
  struct std___Rb_tree_const_iterator_int_ __retval526;
  struct std___Rb_tree_iterator_int_ ref_tmp0527;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0528;
  this524 = v521;
  __position525 = v522;
  struct std__multiset_int__std__less_int___std__allocator_int__* t529 = this524;
  agg_tmp0528 = __position525; // copy
  struct std___Rb_tree_const_iterator_int_ t530 = agg_tmp0528;
  struct std___Rb_tree_iterator_int_ r531 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase_abi_cxx11_(&t529->_M_t, t530);
  if (__cir_exc_active) {
    struct std___Rb_tree_const_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  ref_tmp0527 = r531;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&__retval526, &ref_tmp0527);
  struct std___Rb_tree_const_iterator_int_ t532 = __retval526;
  return t532;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE14_M_lower_boundEPSt18_Rb_tree_node_baseS7_RKi
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_lower_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v533, struct std___Rb_tree_node_base* v534, struct std___Rb_tree_node_base* v535, int* v536) {
bb537:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this538;
  struct std___Rb_tree_node_base* __x539;
  struct std___Rb_tree_node_base* __y540;
  int* __k541;
  struct std___Rb_tree_node_base* __retval542;
  this538 = v533;
  __x539 = v534;
  __y540 = v535;
  __k541 = v536;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t543 = this538;
    while (1) {
      struct std___Rb_tree_node_base* t544 = __x539;
      _Bool cast545 = (_Bool)t544;
      if (!cast545) break;
        struct std___Rb_tree_key_compare_std__less_int__* base546 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t543->_M_impl) + 0);
        struct std__less_int_* cast547 = (struct std__less_int_*)base546;
        struct std___Rb_tree_node_base* t548 = __x539;
        int* r549 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t548);
        if (__cir_exc_active) {
          struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
          return __cir_eh_ret;
        }
        int* t550 = __k541;
        _Bool r551 = std__less_int___operator___int_const___int_const___const(cast547, r549, t550);
        if (__cir_exc_active) {
          struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
          return __cir_eh_ret;
        }
        _Bool u552 = !r551;
        if (u552) {
          struct std___Rb_tree_node_base* t553 = __x539;
          __y540 = t553;
          struct std___Rb_tree_node_base* t554 = __x539;
          struct std___Rb_tree_node_base* r555 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t554);
          __x539 = r555;
        } else {
          struct std___Rb_tree_node_base* t556 = __x539;
          struct std___Rb_tree_node_base* r557 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t556);
          __x539 = r557;
        }
    }
  struct std___Rb_tree_node_base* t558 = __y540;
  __retval542 = t558;
  struct std___Rb_tree_node_base* t559 = __retval542;
  return t559;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE14_M_upper_boundEPSt18_Rb_tree_node_baseS7_RKi
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_upper_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v560, struct std___Rb_tree_node_base* v561, struct std___Rb_tree_node_base* v562, int* v563) {
bb564:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this565;
  struct std___Rb_tree_node_base* __x566;
  struct std___Rb_tree_node_base* __y567;
  int* __k568;
  struct std___Rb_tree_node_base* __retval569;
  this565 = v560;
  __x566 = v561;
  __y567 = v562;
  __k568 = v563;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t570 = this565;
    while (1) {
      struct std___Rb_tree_node_base* t571 = __x566;
      _Bool cast572 = (_Bool)t571;
      if (!cast572) break;
        struct std___Rb_tree_key_compare_std__less_int__* base573 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t570->_M_impl) + 0);
        struct std__less_int_* cast574 = (struct std__less_int_*)base573;
        int* t575 = __k568;
        struct std___Rb_tree_node_base* t576 = __x566;
        int* r577 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t576);
        if (__cir_exc_active) {
          struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
          return __cir_eh_ret;
        }
        _Bool r578 = std__less_int___operator___int_const___int_const___const(cast574, t575, r577);
        if (__cir_exc_active) {
          struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
          return __cir_eh_ret;
        }
        if (r578) {
          struct std___Rb_tree_node_base* t579 = __x566;
          __y567 = t579;
          struct std___Rb_tree_node_base* t580 = __x566;
          struct std___Rb_tree_node_base* r581 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t580);
          __x566 = r581;
        } else {
          struct std___Rb_tree_node_base* t582 = __x566;
          struct std___Rb_tree_node_base* r583 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t582);
          __x566 = r583;
        }
    }
  struct std___Rb_tree_node_base* t584 = __y567;
  __retval569 = t584;
  struct std___Rb_tree_node_base* t585 = __retval569;
  return t585;
}

// function: _ZNSt4pairISt17_Rb_tree_iteratorIiES1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_
void _ZNSt4pairISt17_Rb_tree_iteratorIiES1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__* v586, struct std___Rb_tree_iterator_int_* v587, struct std___Rb_tree_iterator_int_* v588) {
bb589:
  struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__* this590;
  struct std___Rb_tree_iterator_int_* __x591;
  struct std___Rb_tree_iterator_int_* __y592;
  this590 = v586;
  __x591 = v587;
  __y592 = v588;
  struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__* t593 = this590;
  struct std____pair_base_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__* base594 = (struct std____pair_base_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__*)((char *)t593 + 0);
  struct std___Rb_tree_iterator_int_* t595 = __x591;
  t593->first = *t595; // copy
  struct std___Rb_tree_iterator_int_* t596 = __y592;
  t593->second = *t596; // copy
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11equal_rangeERKi
struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____equal_range(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v597, int* v598) {
bb599:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this600;
  int* __k601;
  struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ __retval602;
  struct std___Rb_tree_node_base* __x603;
  struct std___Rb_tree_node_base* __y604;
  struct std___Rb_tree_iterator_int_ ref_tmp2605;
  struct std___Rb_tree_iterator_int_ ref_tmp3606;
  this600 = v597;
  __k601 = v598;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t607 = this600;
  struct std___Rb_tree_node_base* r608 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t607);
  __x603 = r608;
  struct std___Rb_tree_node_base* r609 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t607);
  __y604 = r609;
    while (1) {
      struct std___Rb_tree_node_base* t610 = __x603;
      _Bool cast611 = (_Bool)t610;
      if (!cast611) break;
          struct std___Rb_tree_key_compare_std__less_int__* base612 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t607->_M_impl) + 0);
          struct std__less_int_* cast613 = (struct std__less_int_*)base612;
          struct std___Rb_tree_node_base* t614 = __x603;
          int* r615 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t614);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          int* t616 = __k601;
          _Bool r617 = std__less_int___operator___int_const___int_const___const(cast613, r615, t616);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          if (r617) {
            struct std___Rb_tree_node_base* t618 = __x603;
            struct std___Rb_tree_node_base* r619 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t618);
            __x603 = r619;
          } else {
              struct std___Rb_tree_key_compare_std__less_int__* base620 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t607->_M_impl) + 0);
              struct std__less_int_* cast621 = (struct std__less_int_*)base620;
              int* t622 = __k601;
              struct std___Rb_tree_node_base* t623 = __x603;
              int* r624 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t623);
              if (__cir_exc_active) {
                struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ __cir_eh_ret = {0};
                return __cir_eh_ret;
              }
              _Bool r625 = std__less_int___operator___int_const___int_const___const(cast621, t622, r624);
              if (__cir_exc_active) {
                struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ __cir_eh_ret = {0};
                return __cir_eh_ret;
              }
              if (r625) {
                struct std___Rb_tree_node_base* t626 = __x603;
                __y604 = t626;
                struct std___Rb_tree_node_base* t627 = __x603;
                struct std___Rb_tree_node_base* r628 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t627);
                __x603 = r628;
              } else {
                struct std___Rb_tree_node_base* __xu629;
                struct std___Rb_tree_node_base* __yu630;
                struct std___Rb_tree_iterator_int_ ref_tmp0631;
                struct std___Rb_tree_iterator_int_ ref_tmp1632;
                struct std___Rb_tree_node_base* t633 = __x603;
                __xu629 = t633;
                struct std___Rb_tree_node_base* t634 = __y604;
                __yu630 = t634;
                struct std___Rb_tree_node_base* t635 = __x603;
                __y604 = t635;
                struct std___Rb_tree_node_base* t636 = __x603;
                struct std___Rb_tree_node_base* r637 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t636);
                __x603 = r637;
                struct std___Rb_tree_node_base* t638 = __xu629;
                struct std___Rb_tree_node_base* r639 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t638);
                __xu629 = r639;
                struct std___Rb_tree_node_base* t640 = __x603;
                struct std___Rb_tree_node_base* t641 = __y604;
                int* t642 = __k601;
                struct std___Rb_tree_node_base* r643 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_lower_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(t607, t640, t641, t642);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                std___Rb_tree_iterator_int____Rb_tree_iterator(&ref_tmp0631, r643);
                struct std___Rb_tree_node_base* t644 = __xu629;
                struct std___Rb_tree_node_base* t645 = __yu630;
                int* t646 = __k601;
                struct std___Rb_tree_node_base* r647 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_upper_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(t607, t644, t645, t646);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                std___Rb_tree_iterator_int____Rb_tree_iterator(&ref_tmp1632, r647);
                _ZNSt4pairISt17_Rb_tree_iteratorIiES1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(&__retval602, &ref_tmp0631, &ref_tmp1632);
                struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ t648 = __retval602;
                struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ ret_val649 = t648;
                return ret_val649;
              }
          }
    }
  struct std___Rb_tree_node_base* t650 = __y604;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&ref_tmp2605, t650);
  struct std___Rb_tree_node_base* t651 = __y604;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&ref_tmp3606, t651);
  _ZNSt4pairISt17_Rb_tree_iteratorIiES1_EC2IS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(&__retval602, &ref_tmp2605, &ref_tmp3606);
  struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ t652 = __retval602;
  return t652;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE4sizeEv
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v653) {
bb654:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this655;
  unsigned long __retval656;
  this655 = v653;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t657 = this655;
  struct std___Rb_tree_header* base658 = (struct std___Rb_tree_header*)((char *)&(t657->_M_impl) + 8);
  unsigned long t659 = base658->_M_node_count;
  __retval656 = t659;
  unsigned long t660 = __retval656;
  return t660;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5beginEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v661) {
bb662:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this663;
  struct std___Rb_tree_iterator_int_ __retval664;
  this663 = v661;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t665 = this663;
  struct std___Rb_tree_header* base666 = (struct std___Rb_tree_header*)((char *)&(t665->_M_impl) + 8);
  struct std___Rb_tree_node_base* t667 = base666->_M_header._M_left;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval664, t667);
  struct std___Rb_tree_iterator_int_ t668 = __retval664;
  return t668;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5clearEv
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____clear(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v669) {
bb670:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this671;
  this671 = v669;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t672 = this671;
  struct std___Rb_tree_node_int_* r673 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(t672);
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t672, r673);
  if (__cir_exc_active) {
    return;
  }
  struct std___Rb_tree_header* base674 = (struct std___Rb_tree_header*)((char *)&(t672->_M_impl) + 8);
  std___Rb_tree_header___M_reset(base674);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_erase_auxESt23_Rb_tree_const_iteratorIiES7_
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux_2(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v675, struct std___Rb_tree_const_iterator_int_ v676, struct std___Rb_tree_const_iterator_int_ v677) {
bb678:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this679;
  struct std___Rb_tree_const_iterator_int_ __first680;
  struct std___Rb_tree_const_iterator_int_ __last681;
  this679 = v675;
  __first680 = v676;
  __last681 = v677;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t682 = this679;
    struct std___Rb_tree_const_iterator_int_ ref_tmp0683;
    struct std___Rb_tree_iterator_int_ ref_tmp1684;
    struct std___Rb_tree_iterator_int_ r685 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(t682);
    ref_tmp1684 = r685;
    std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&ref_tmp0683, &ref_tmp1684);
    _Bool r686 = std__operator___2(&__first680, &ref_tmp0683);
    _Bool ternary687;
    if (r686) {
      struct std___Rb_tree_const_iterator_int_ ref_tmp2688;
      struct std___Rb_tree_iterator_int_ ref_tmp3689;
      struct std___Rb_tree_iterator_int_ r690 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(t682);
      ref_tmp3689 = r690;
      std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&ref_tmp2688, &ref_tmp3689);
      _Bool r691 = std__operator___2(&__last681, &ref_tmp2688);
      ternary687 = (_Bool)r691;
    } else {
      _Bool c692 = 0;
      ternary687 = (_Bool)c692;
    }
    if (ternary687) {
      std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____clear(t682);
    } else {
        struct std___Rb_tree_const_iterator_int_ agg_tmp0693;
        while (1) {
          _Bool r694 = std__operator___2(&__first680, &__last681);
          _Bool u695 = !r694;
          if (!u695) break;
          int c696 = 0;
          struct std___Rb_tree_const_iterator_int_ r697 = std___Rb_tree_const_iterator_int___operator__(&__first680, c696);
          agg_tmp0693 = r697;
          struct std___Rb_tree_const_iterator_int_ t698 = agg_tmp0693;
          std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux(t682, t698);
          if (__cir_exc_active) {
            return;
          }
        }
    }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5eraseERKi
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v699, int* v700) {
bb701:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this702;
  int* __x703;
  unsigned long __retval704;
  struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ __p705;
  unsigned long __old_size706;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0707;
  struct std___Rb_tree_const_iterator_int_ agg_tmp1708;
  this702 = v699;
  __x703 = v700;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t709 = this702;
  int* t710 = __x703;
  struct std__pair_std___Rb_tree_iterator_int___std___Rb_tree_iterator_int__ r711 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____equal_range(t709, t710);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __p705 = r711;
  unsigned long r712 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(t709);
  __old_size706 = r712;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&agg_tmp0707, &__p705.first);
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&agg_tmp1708, &__p705.second);
  struct std___Rb_tree_const_iterator_int_ t713 = agg_tmp0707;
  struct std___Rb_tree_const_iterator_int_ t714 = agg_tmp1708;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux_2(t709, t713, t714);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long t715 = __old_size706;
  unsigned long r716 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(t709);
  unsigned long b717 = t715 - r716;
  __retval704 = b717;
  unsigned long t718 = __retval704;
  return t718;
}

// function: _ZNSt8multisetIiSt4lessIiESaIiEE5eraseERKi
unsigned long std__multiset_int__std__less_int___std__allocator_int_____erase(struct std__multiset_int__std__less_int___std__allocator_int__* v719, int* v720) {
bb721:
  struct std__multiset_int__std__less_int___std__allocator_int__* this722;
  int* __x723;
  unsigned long __retval724;
  this722 = v719;
  __x723 = v720;
  struct std__multiset_int__std__less_int___std__allocator_int__* t725 = this722;
  int* t726 = __x723;
  unsigned long r727 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase(&t725->_M_t, t726);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  __retval724 = r727;
  unsigned long t728 = __retval724;
  return t728;
}

// function: _ZSteqRKSt17_Rb_tree_iteratorIiES2_
_Bool std__operator__(struct std___Rb_tree_iterator_int_* v729, struct std___Rb_tree_iterator_int_* v730) {
bb731:
  struct std___Rb_tree_iterator_int_* __x732;
  struct std___Rb_tree_iterator_int_* __y733;
  _Bool __retval734;
  __x732 = v729;
  __y733 = v730;
  struct std___Rb_tree_iterator_int_* t735 = __x732;
  struct std___Rb_tree_node_base* t736 = t735->_M_node;
  struct std___Rb_tree_iterator_int_* t737 = __y733;
  struct std___Rb_tree_node_base* t738 = t737->_M_node;
  _Bool c739 = ((t736 == t738)) ? 1 : 0;
  __retval734 = c739;
  _Bool t740 = __retval734;
  return t740;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE4findERKi
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____find(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v741, int* v742) {
bb743:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this744;
  int* __k745;
  struct std___Rb_tree_iterator_int_ __retval746;
  struct std___Rb_tree_iterator_int_ __j747;
  struct std___Rb_tree_iterator_int_ ref_tmp0748;
  this744 = v741;
  __k745 = v742;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t749 = this744;
  struct std___Rb_tree_node_base* r750 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t749);
  struct std___Rb_tree_node_base* r751 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t749);
  int* t752 = __k745;
  struct std___Rb_tree_node_base* r753 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_lower_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(t749, r750, r751, t752);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__j747, r753);
  struct std___Rb_tree_iterator_int_ r754 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(t749);
  ref_tmp0748 = r754;
  _Bool r755 = std__operator__(&__j747, &ref_tmp0748);
  _Bool ternary756;
  if (r755) {
    _Bool c757 = 1;
    ternary756 = (_Bool)c757;
  } else {
    struct std___Rb_tree_key_compare_std__less_int__* base758 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t749->_M_impl) + 0);
    struct std__less_int_* cast759 = (struct std__less_int_*)base758;
    int* t760 = __k745;
    struct std___Rb_tree_node_base* t761 = __j747._M_node;
    int* r762 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t761);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r763 = std__less_int___operator___int_const___int_const___const(cast759, t760, r762);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    ternary756 = (_Bool)r763;
  }
  if (ternary756) {
    struct std___Rb_tree_iterator_int_ r764 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(t749);
    __retval746 = r764;
  } else {
    __retval746 = __j747; // copy
  }
  struct std___Rb_tree_iterator_int_ t765 = __retval746;
  return t765;
}

// function: _ZNSt8multisetIiSt4lessIiESaIiEE4findERKi
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____find(struct std__multiset_int__std__less_int___std__allocator_int__* v766, int* v767) {
bb768:
  struct std__multiset_int__std__less_int___std__allocator_int__* this769;
  int* __x770;
  struct std___Rb_tree_const_iterator_int_ __retval771;
  struct std___Rb_tree_iterator_int_ ref_tmp0772;
  this769 = v766;
  __x770 = v767;
  struct std__multiset_int__std__less_int___std__allocator_int__* t773 = this769;
  int* t774 = __x770;
  struct std___Rb_tree_iterator_int_ r775 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____find(&t773->_M_t, t774);
  if (__cir_exc_active) {
    struct std___Rb_tree_const_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  ref_tmp0772 = r775;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&__retval771, &ref_tmp0772);
  struct std___Rb_tree_const_iterator_int_ t776 = __retval771;
  return t776;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5eraseB5cxx11ESt23_Rb_tree_const_iteratorIiES7_
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase_abi_cxx11__2(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v777, struct std___Rb_tree_const_iterator_int_ v778, struct std___Rb_tree_const_iterator_int_ v779) {
bb780:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this781;
  struct std___Rb_tree_const_iterator_int_ __first782;
  struct std___Rb_tree_const_iterator_int_ __last783;
  struct std___Rb_tree_iterator_int_ __retval784;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0785;
  struct std___Rb_tree_const_iterator_int_ agg_tmp1786;
  this781 = v777;
  __first782 = v778;
  __last783 = v779;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t787 = this781;
  agg_tmp0785 = __first782; // copy
  agg_tmp1786 = __last783; // copy
  struct std___Rb_tree_const_iterator_int_ t788 = agg_tmp0785;
  struct std___Rb_tree_const_iterator_int_ t789 = agg_tmp1786;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux_2(t787, t788, t789);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* t790 = __last783._M_node;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval784, t790);
  struct std___Rb_tree_iterator_int_ t791 = __retval784;
  return t791;
}

// function: _ZNSt8multisetIiSt4lessIiESaIiEE5eraseB5cxx11ESt23_Rb_tree_const_iteratorIiES5_
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____erase_abi_cxx11__2(struct std__multiset_int__std__less_int___std__allocator_int__* v792, struct std___Rb_tree_const_iterator_int_ v793, struct std___Rb_tree_const_iterator_int_ v794) {
bb795:
  struct std__multiset_int__std__less_int___std__allocator_int__* this796;
  struct std___Rb_tree_const_iterator_int_ __first797;
  struct std___Rb_tree_const_iterator_int_ __last798;
  struct std___Rb_tree_const_iterator_int_ __retval799;
  struct std___Rb_tree_iterator_int_ ref_tmp0800;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0801;
  struct std___Rb_tree_const_iterator_int_ agg_tmp1802;
  this796 = v792;
  __first797 = v793;
  __last798 = v794;
  struct std__multiset_int__std__less_int___std__allocator_int__* t803 = this796;
  agg_tmp0801 = __first797; // copy
  agg_tmp1802 = __last798; // copy
  struct std___Rb_tree_const_iterator_int_ t804 = agg_tmp0801;
  struct std___Rb_tree_const_iterator_int_ t805 = agg_tmp1802;
  struct std___Rb_tree_iterator_int_ r806 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase_abi_cxx11__2(&t803->_M_t, t804, t805);
  if (__cir_exc_active) {
    struct std___Rb_tree_const_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  ref_tmp0800 = r806;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&__retval799, &ref_tmp0800);
  struct std___Rb_tree_const_iterator_int_ t807 = __retval799;
  return t807;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE3endEv
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v808) {
bb809:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this810;
  struct std___Rb_tree_const_iterator_int_ __retval811;
  this810 = v808;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t812 = this810;
  struct std___Rb_tree_node_base* r813 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t812);
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval811, r813);
  struct std___Rb_tree_const_iterator_int_ t814 = __retval811;
  return t814;
}

// function: _ZNKSt8multisetIiSt4lessIiESaIiEE3endEv
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____end___const(struct std__multiset_int__std__less_int___std__allocator_int__* v815) {
bb816:
  struct std__multiset_int__std__less_int___std__allocator_int__* this817;
  struct std___Rb_tree_const_iterator_int_ __retval818;
  this817 = v815;
  struct std__multiset_int__std__less_int___std__allocator_int__* t819 = this817;
  struct std___Rb_tree_const_iterator_int_ r820 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(&t819->_M_t);
  __retval818 = r820;
  struct std___Rb_tree_const_iterator_int_ t821 = __retval818;
  return t821;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v822, int v823) {
bb824:
  int __a825;
  int __b826;
  int __retval827;
  __a825 = v822;
  __b826 = v823;
  int t828 = __a825;
  int t829 = __b826;
  int b830 = t828 | t829;
  __retval827 = b830;
  int t831 = __retval827;
  return t831;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v832) {
bb833:
  struct std__basic_ios_char__std__char_traits_char__* this834;
  int __retval835;
  this834 = v832;
  struct std__basic_ios_char__std__char_traits_char__* t836 = this834;
  struct std__ios_base* base837 = (struct std__ios_base*)((char *)t836 + 0);
  int t838 = base837->_M_streambuf_state;
  __retval835 = t838;
  int t839 = __retval835;
  return t839;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v840, int v841) {
bb842:
  struct std__basic_ios_char__std__char_traits_char__* this843;
  int __state844;
  this843 = v840;
  __state844 = v841;
  struct std__basic_ios_char__std__char_traits_char__* t845 = this843;
  int r846 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t845);
  if (__cir_exc_active) {
    return;
  }
  int t847 = __state844;
  int r848 = std__operator_(r846, t847);
  std__basic_ios_char__std__char_traits_char_____clear(t845, r848);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v849, char* v850) {
bb851:
  char* __c1852;
  char* __c2853;
  _Bool __retval854;
  __c1852 = v849;
  __c2853 = v850;
  char* t855 = __c1852;
  char t856 = *t855;
  int cast857 = (int)t856;
  char* t858 = __c2853;
  char t859 = *t858;
  int cast860 = (int)t859;
  _Bool c861 = ((cast857 == cast860)) ? 1 : 0;
  __retval854 = c861;
  _Bool t862 = __retval854;
  return t862;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v863) {
bb864:
  char* __p865;
  unsigned long __retval866;
  unsigned long __i867;
  __p865 = v863;
  unsigned long c868 = 0;
  __i867 = c868;
    char ref_tmp0869;
    while (1) {
      unsigned long t870 = __i867;
      char* t871 = __p865;
      char* ptr872 = &(t871)[t870];
      char c873 = 0;
      ref_tmp0869 = c873;
      _Bool r874 = __gnu_cxx__char_traits_char___eq(ptr872, &ref_tmp0869);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u875 = !r874;
      if (!u875) break;
      unsigned long t876 = __i867;
      unsigned long u877 = t876 + 1;
      __i867 = u877;
    }
  unsigned long t878 = __i867;
  __retval866 = t878;
  unsigned long t879 = __retval866;
  return t879;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v880) {
bb881:
  char* __s882;
  unsigned long __retval883;
  __s882 = v880;
    _Bool r884 = std____is_constant_evaluated();
    if (r884) {
      char* t885 = __s882;
      unsigned long r886 = __gnu_cxx__char_traits_char___length(t885);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval883 = r886;
      unsigned long t887 = __retval883;
      return t887;
    }
  char* t888 = __s882;
  unsigned long r889 = strlen(t888);
  __retval883 = r889;
  unsigned long t890 = __retval883;
  return t890;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v891, char* v892) {
bb893:
  struct std__basic_ostream_char__std__char_traits_char__* __out894;
  char* __s895;
  struct std__basic_ostream_char__std__char_traits_char__* __retval896;
  __out894 = v891;
  __s895 = v892;
    char* t897 = __s895;
    _Bool cast898 = (_Bool)t897;
    _Bool u899 = !cast898;
    if (u899) {
      struct std__basic_ostream_char__std__char_traits_char__* t900 = __out894;
      void** v901 = (void**)t900;
      void* v902 = *((void**)v901);
      unsigned char* cast903 = (unsigned char*)v902;
      long c904 = -24;
      unsigned char* ptr905 = &(cast903)[c904];
      long* cast906 = (long*)ptr905;
      long t907 = *cast906;
      unsigned char* cast908 = (unsigned char*)t900;
      unsigned char* ptr909 = &(cast908)[t907];
      struct std__basic_ostream_char__std__char_traits_char__* cast910 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr909;
      struct std__basic_ios_char__std__char_traits_char__* cast911 = (struct std__basic_ios_char__std__char_traits_char__*)cast910;
      int t912 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast911, t912);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t913 = __out894;
      char* t914 = __s895;
      char* t915 = __s895;
      unsigned long r916 = std__char_traits_char___length(t915);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast917 = (long)r916;
      struct std__basic_ostream_char__std__char_traits_char__* r918 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t913, t914, cast917);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t919 = __out894;
  __retval896 = t919;
  struct std__basic_ostream_char__std__char_traits_char__* t920 = __retval896;
  return t920;
}

// function: _ZSteqRKSt23_Rb_tree_const_iteratorIiES2_
_Bool std__operator___2(struct std___Rb_tree_const_iterator_int_* v921, struct std___Rb_tree_const_iterator_int_* v922) {
bb923:
  struct std___Rb_tree_const_iterator_int_* __x924;
  struct std___Rb_tree_const_iterator_int_* __y925;
  _Bool __retval926;
  __x924 = v921;
  __y925 = v922;
  struct std___Rb_tree_const_iterator_int_* t927 = __x924;
  struct std___Rb_tree_node_base* t928 = t927->_M_node;
  struct std___Rb_tree_const_iterator_int_* t929 = __y925;
  struct std___Rb_tree_node_base* t930 = t929->_M_node;
  _Bool c931 = ((t928 == t930)) ? 1 : 0;
  __retval926 = c931;
  _Bool t932 = __retval926;
  return t932;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEppEv
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator___2(struct std___Rb_tree_const_iterator_int_* v933) {
bb934:
  struct std___Rb_tree_const_iterator_int_* this935;
  struct std___Rb_tree_const_iterator_int_* __retval936;
  this935 = v933;
  struct std___Rb_tree_const_iterator_int_* t937 = this935;
  struct std___Rb_tree_node_base* t938 = t937->_M_node;
  struct std___Rb_tree_node_base* r939 = std___Rb_tree_increment(t938);
  t937->_M_node = r939;
  __retval936 = t937;
  struct std___Rb_tree_const_iterator_int_* t940 = __retval936;
  return t940;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v941, void* v942) {
bb943:
  struct std__basic_ostream_char__std__char_traits_char__* this944;
  void* __pf945;
  struct std__basic_ostream_char__std__char_traits_char__* __retval946;
  this944 = v941;
  __pf945 = v942;
  struct std__basic_ostream_char__std__char_traits_char__* t947 = this944;
  void* t948 = __pf945;
  struct std__basic_ostream_char__std__char_traits_char__* r949 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t948)(t947);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval946 = r949;
  struct std__basic_ostream_char__std__char_traits_char__* t950 = __retval946;
  return t950;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v951) {
bb952:
  struct std__basic_ostream_char__std__char_traits_char__* __os953;
  struct std__basic_ostream_char__std__char_traits_char__* __retval954;
  __os953 = v951;
  struct std__basic_ostream_char__std__char_traits_char__* t955 = __os953;
  struct std__basic_ostream_char__std__char_traits_char__* r956 = std__ostream__flush(t955);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval954 = r956;
  struct std__basic_ostream_char__std__char_traits_char__* t957 = __retval954;
  return t957;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v958) {
bb959:
  struct std__ctype_char_* __f960;
  struct std__ctype_char_* __retval961;
  __f960 = v958;
    struct std__ctype_char_* t962 = __f960;
    _Bool cast963 = (_Bool)t962;
    _Bool u964 = !cast963;
    if (u964) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t965 = __f960;
  __retval961 = t965;
  struct std__ctype_char_* t966 = __retval961;
  return t966;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v967, char v968) {
bb969:
  struct std__ctype_char_* this970;
  char __c971;
  char __retval972;
  this970 = v967;
  __c971 = v968;
  struct std__ctype_char_* t973 = this970;
    char t974 = t973->_M_widen_ok;
    _Bool cast975 = (_Bool)t974;
    if (cast975) {
      char t976 = __c971;
      unsigned char cast977 = (unsigned char)t976;
      unsigned long cast978 = (unsigned long)cast977;
      char t979 = t973->_M_widen[cast978];
      __retval972 = t979;
      char t980 = __retval972;
      return t980;
    }
  std__ctype_char____M_widen_init___const(t973);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t981 = __c971;
  void** v982 = (void**)t973;
  void* v983 = *((void**)v982);
  char vcall986 = (char)__VERIFIER_virtual_call_char_char(t973, 6, t981);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval972 = vcall986;
  char t987 = __retval972;
  return t987;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v988, char v989) {
bb990:
  struct std__basic_ios_char__std__char_traits_char__* this991;
  char __c992;
  char __retval993;
  this991 = v988;
  __c992 = v989;
  struct std__basic_ios_char__std__char_traits_char__* t994 = this991;
  struct std__ctype_char_* t995 = t994->_M_ctype;
  struct std__ctype_char_* r996 = std__ctype_char__const__std____check_facet_std__ctype_char___(t995);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t997 = __c992;
  char r998 = std__ctype_char___widen_char__const(r996, t997);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval993 = r998;
  char t999 = __retval993;
  return t999;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1000) {
bb1001:
  struct std__basic_ostream_char__std__char_traits_char__* __os1002;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1003;
  __os1002 = v1000;
  struct std__basic_ostream_char__std__char_traits_char__* t1004 = __os1002;
  struct std__basic_ostream_char__std__char_traits_char__* t1005 = __os1002;
  void** v1006 = (void**)t1005;
  void* v1007 = *((void**)v1006);
  unsigned char* cast1008 = (unsigned char*)v1007;
  long c1009 = -24;
  unsigned char* ptr1010 = &(cast1008)[c1009];
  long* cast1011 = (long*)ptr1010;
  long t1012 = *cast1011;
  unsigned char* cast1013 = (unsigned char*)t1005;
  unsigned char* ptr1014 = &(cast1013)[t1012];
  struct std__basic_ostream_char__std__char_traits_char__* cast1015 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1014;
  struct std__basic_ios_char__std__char_traits_char__* cast1016 = (struct std__basic_ios_char__std__char_traits_char__*)cast1015;
  char c1017 = 10;
  char r1018 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast1016, c1017);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r1019 = std__ostream__put(t1004, r1018);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r1020 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r1019);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval1003 = r1020;
  struct std__basic_ostream_char__std__char_traits_char__* t1021 = __retval1003;
  return t1021;
}

// function: _ZNSt8multisetIiSt4lessIiESaIiEED2Ev
void std__multiset_int__std__less_int___std__allocator_int______multiset(struct std__multiset_int__std__less_int___std__allocator_int__* v1022) {
bb1023:
  struct std__multiset_int__std__less_int___std__allocator_int__* this1024;
  this1024 = v1022;
  struct std__multiset_int__std__less_int___std__allocator_int__* t1025 = this1024;
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(&t1025->_M_t);
  }
  return;
}

// function: main
int main() {
bb1026:
  int __retval1027;
  struct std__multiset_int__std__less_int___std__allocator_int__ myset1028;
  struct std___Rb_tree_const_iterator_int_ it1029;
  int i1030;
  struct std___Rb_tree_const_iterator_int_ ref_tmp11031;
  struct std___Rb_tree_const_iterator_int_ agg_tmp11032;
  struct std___Rb_tree_const_iterator_int_ agg_tmp21033;
  struct std___Rb_tree_const_iterator_int_ agg_tmp31034;
  struct std___Rb_tree_const_iterator_int_ ref_tmp21035;
  struct std___Rb_tree_const_iterator_int_ agg_tmp41036;
  int ref_tmp31037;
  struct std___Rb_tree_const_iterator_int_ ref_tmp41038;
  int ref_tmp51039;
  struct std___Rb_tree_const_iterator_int_ agg_tmp51040;
  struct std___Rb_tree_const_iterator_int_ agg_tmp61041;
  struct std___Rb_tree_const_iterator_int_ agg_tmp71042;
  int c1043 = 0;
  __retval1027 = c1043;
  std__multiset_int__std__less_int___std__allocator_int_____multiset(&myset1028);
    std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(&it1029);
      int i1044;
      int ref_tmp01045;
      struct std___Rb_tree_const_iterator_int_ agg_tmp01046;
      int c1047 = 1;
      i1044 = c1047;
      while (1) {
        int t1049 = i1044;
        int c1050 = 10;
        _Bool c1051 = ((t1049 < c1050)) ? 1 : 0;
        if (!c1051) break;
        int t1052 = i1044;
        int c1053 = 10;
        int b1054 = t1052 * c1053;
        ref_tmp01045 = b1054;
        struct std___Rb_tree_const_iterator_int_ r1055 = std__multiset_int__std__less_int___std__allocator_int_____insert(&myset1028, &ref_tmp01045);
        if (__cir_exc_active) {
          {
            std__multiset_int__std__less_int___std__allocator_int______multiset(&myset1028);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        agg_tmp01046 = r1055;
      for_step1048: ;
        int t1056 = i1044;
        int u1057 = t1056 + 1;
        i1044 = u1057;
      }
    struct std___Rb_tree_const_iterator_int_ r1058 = std__multiset_int__std__less_int___std__allocator_int_____begin___const(&myset1028);
    ref_tmp11031 = r1058;
    struct std___Rb_tree_const_iterator_int_* r1059 = std___Rb_tree_const_iterator_int___operator_(&it1029, &ref_tmp11031);
    int c1060 = 0;
    struct std___Rb_tree_const_iterator_int_ r1061 = std___Rb_tree_const_iterator_int___operator__(&it1029, c1060);
    agg_tmp11032 = r1061;
    int* r1062 = std___Rb_tree_const_iterator_int___operator____const(&it1029);
    int t1063 = *r1062;
    int c1064 = 20;
    _Bool c1065 = ((t1063 == c1064)) ? 1 : 0;
    if (c1065) {
    } else {
      char* cast1066 = (char*)&(_str);
      char* c1067 = _str_1;
      unsigned int c1068 = 24;
      char* cast1069 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1066, c1067, c1068, cast1069);
    }
    agg_tmp21033 = it1029; // copy
    struct std___Rb_tree_const_iterator_int_ t1070 = agg_tmp21033;
    struct std___Rb_tree_const_iterator_int_ r1071 = std__multiset_int__std__less_int___std__allocator_int_____erase_abi_cxx11_(&myset1028, t1070);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset1028);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp31034 = r1071;
    struct std___Rb_tree_const_iterator_int_ r1072 = std__multiset_int__std__less_int___std__allocator_int_____begin___const(&myset1028);
    ref_tmp21035 = r1072;
    struct std___Rb_tree_const_iterator_int_* r1073 = std___Rb_tree_const_iterator_int___operator_(&it1029, &ref_tmp21035);
    int c1074 = 0;
    struct std___Rb_tree_const_iterator_int_ r1075 = std___Rb_tree_const_iterator_int___operator__(&it1029, c1074);
    agg_tmp41036 = r1075;
    int* r1076 = std___Rb_tree_const_iterator_int___operator____const(&it1029);
    int t1077 = *r1076;
    int c1078 = 30;
    _Bool c1079 = ((t1077 == c1078)) ? 1 : 0;
    if (c1079) {
    } else {
      char* cast1080 = (char*)&(_str_2);
      char* c1081 = _str_1;
      unsigned int c1082 = 28;
      char* cast1083 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1080, c1081, c1082, cast1083);
    }
    int c1084 = 40;
    ref_tmp31037 = c1084;
    unsigned long r1085 = std__multiset_int__std__less_int___std__allocator_int_____erase(&myset1028, &ref_tmp31037);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset1028);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c1086 = 60;
    ref_tmp51039 = c1086;
    struct std___Rb_tree_const_iterator_int_ r1087 = std__multiset_int__std__less_int___std__allocator_int_____find(&myset1028, &ref_tmp51039);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset1028);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    ref_tmp41038 = r1087;
    struct std___Rb_tree_const_iterator_int_* r1088 = std___Rb_tree_const_iterator_int___operator_(&it1029, &ref_tmp41038);
    agg_tmp51040 = it1029; // copy
    struct std___Rb_tree_const_iterator_int_ r1089 = std__multiset_int__std__less_int___std__allocator_int_____end___const(&myset1028);
    agg_tmp61041 = r1089;
    struct std___Rb_tree_const_iterator_int_ t1090 = agg_tmp51040;
    struct std___Rb_tree_const_iterator_int_ t1091 = agg_tmp61041;
    struct std___Rb_tree_const_iterator_int_ r1092 = std__multiset_int__std__less_int___std__allocator_int_____erase_abi_cxx11__2(&myset1028, t1090, t1091);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset1028);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp71042 = r1092;
    char* cast1093 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r1094 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1093);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset1028);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      struct std___Rb_tree_const_iterator_int_ ref_tmp61095;
      struct std___Rb_tree_const_iterator_int_ ref_tmp71096;
      struct std___Rb_tree_const_iterator_int_ r1097 = std__multiset_int__std__less_int___std__allocator_int_____begin___const(&myset1028);
      ref_tmp61095 = r1097;
      struct std___Rb_tree_const_iterator_int_* r1098 = std___Rb_tree_const_iterator_int___operator_(&it1029, &ref_tmp61095);
      int c1099 = 10;
      i1030 = c1099;
      while (1) {
        struct std___Rb_tree_const_iterator_int_ r1101 = std__multiset_int__std__less_int___std__allocator_int_____end___const(&myset1028);
        ref_tmp71096 = r1101;
        _Bool r1102 = std__operator___2(&it1029, &ref_tmp71096);
        _Bool u1103 = !r1102;
        if (!u1103) break;
          char* cast1104 = (char*)&(_str_4);
          struct std__basic_ostream_char__std__char_traits_char__* r1105 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1104);
          if (__cir_exc_active) {
            {
              std__multiset_int__std__less_int___std__allocator_int______multiset(&myset1028);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          int* r1106 = std___Rb_tree_const_iterator_int___operator____const(&it1029);
          int t1107 = *r1106;
          struct std__basic_ostream_char__std__char_traits_char__* r1108 = std__ostream__operator__(r1105, t1107);
          if (__cir_exc_active) {
            {
              std__multiset_int__std__less_int___std__allocator_int______multiset(&myset1028);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          int* r1109 = std___Rb_tree_const_iterator_int___operator____const(&it1029);
          int t1110 = *r1109;
          int t1111 = i1030;
          _Bool c1112 = ((t1110 == t1111)) ? 1 : 0;
          if (c1112) {
          } else {
            char* cast1113 = (char*)&(_str_5);
            char* c1114 = _str_1;
            unsigned int c1115 = 37;
            char* cast1116 = (char*)&(__PRETTY_FUNCTION___main);
            __assert_fail(cast1113, c1114, c1115, cast1116);
          }
      for_step1100: ;
        struct std___Rb_tree_const_iterator_int_* r1117 = std___Rb_tree_const_iterator_int___operator___2(&it1029);
        int c1118 = 20;
        int t1119 = i1030;
        int b1120 = t1119 + c1118;
        i1030 = b1120;
      }
    struct std__basic_ostream_char__std__char_traits_char__* r1121 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset1028);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c1122 = 0;
    __retval1027 = c1122;
    int t1123 = __retval1027;
    int ret_val1124 = t1123;
    {
      std__multiset_int__std__less_int___std__allocator_int______multiset(&myset1028);
    }
    return ret_val1124;
  int t1125 = __retval1027;
  return t1125;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1126) {
bb1127:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1128;
  this1128 = v1126;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1129 = this1128;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(&t1129->_M_impl);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1130) {
bb1131:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1132;
  this1132 = v1130;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1133 = this1132;
    struct std___Rb_tree_node_int_* r1134 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(t1133);
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t1133, r1134);
    if (__cir_exc_active) {
      {
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t1133->_M_impl);
      }
      return;
    }
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t1133->_M_impl);
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v1135) {
bb1136:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this1137;
  this1137 = v1135;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t1138 = this1137;
  struct std__allocator_std___Rb_tree_node_int__* base1139 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t1138 + 0);
  std__allocator_std___Rb_tree_node_int_____allocator(base1139);
    struct std___Rb_tree_key_compare_std__less_int__* base1140 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)t1138 + 0);
    std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(base1140);
    struct std___Rb_tree_header* base1141 = (struct std___Rb_tree_header*)((char *)t1138 + 8);
    std___Rb_tree_header___Rb_tree_header(base1141);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v1142) {
bb1143:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this1144;
  this1144 = v1142;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t1145 = this1144;
  {
    struct std__allocator_std___Rb_tree_node_int__* base1146 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t1145 + 0);
    std__allocator_std___Rb_tree_node_int______allocator(base1146);
  }
  return;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEEC2Ev
void std____new_allocator_std___Rb_tree_node_int_______new_allocator(struct std____new_allocator_std___Rb_tree_node_int__* v1147) {
bb1148:
  struct std____new_allocator_std___Rb_tree_node_int__* this1149;
  this1149 = v1147;
  struct std____new_allocator_std___Rb_tree_node_int__* t1150 = this1149;
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEEC2Ev
void std__allocator_std___Rb_tree_node_int_____allocator(struct std__allocator_std___Rb_tree_node_int__* v1151) {
bb1152:
  struct std__allocator_std___Rb_tree_node_int__* this1153;
  this1153 = v1151;
  struct std__allocator_std___Rb_tree_node_int__* t1154 = this1153;
  struct std____new_allocator_std___Rb_tree_node_int__* base1155 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t1154 + 0);
  std____new_allocator_std___Rb_tree_node_int_______new_allocator(base1155);
  return;
}

// function: _ZNSt20_Rb_tree_key_compareISt4lessIiEEC2Ev
void std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(struct std___Rb_tree_key_compare_std__less_int__* v1156) {
bb1157:
  struct std___Rb_tree_key_compare_std__less_int__* this1158;
  this1158 = v1156;
  return;
}

// function: _ZNSt15_Rb_tree_header8_M_resetEv
void std___Rb_tree_header___M_reset(struct std___Rb_tree_header* v1159) {
bb1160:
  struct std___Rb_tree_header* this1161;
  this1161 = v1159;
  struct std___Rb_tree_header* t1162 = this1161;
  struct std___Rb_tree_node_base* c1163 = ((void*)0);
  t1162->_M_header._M_parent = c1163;
  t1162->_M_header._M_left = &t1162->_M_header;
  t1162->_M_header._M_right = &t1162->_M_header;
  unsigned long c1164 = 0;
  t1162->_M_node_count = c1164;
  return;
}

// function: _ZNSt15_Rb_tree_headerC2Ev
void std___Rb_tree_header___Rb_tree_header(struct std___Rb_tree_header* v1165) {
bb1166:
  struct std___Rb_tree_header* this1167;
  this1167 = v1165;
  struct std___Rb_tree_header* t1168 = this1167;
  unsigned int c1169 = 0;
  t1168->_M_header._M_color = c1169;
  std___Rb_tree_header___M_reset(t1168);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEED2Ev
void std__allocator_std___Rb_tree_node_int______allocator(struct std__allocator_std___Rb_tree_node_int__* v1170) {
bb1171:
  struct std__allocator_std___Rb_tree_node_int__* this1172;
  this1172 = v1170;
  struct std__allocator_std___Rb_tree_node_int__* t1173 = this1172;
  return;
}

// function: _ZNSt13_Rb_tree_nodeIiE11_M_node_ptrEv
struct std___Rb_tree_node_int_* std___Rb_tree_node_int____M_node_ptr(struct std___Rb_tree_node_int_* v1174) {
bb1175:
  struct std___Rb_tree_node_int_* this1176;
  struct std___Rb_tree_node_int_* __retval1177;
  this1176 = v1174;
  struct std___Rb_tree_node_int_* t1178 = this1176;
  __retval1177 = t1178;
  struct std___Rb_tree_node_int_* t1179 = __retval1177;
  return t1179;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(struct std___Rb_tree_node_int_* v1180) {
bb1181:
  struct std___Rb_tree_node_int_* __x1182;
  struct std___Rb_tree_node_int_* __retval1183;
  __x1182 = v1180;
  struct std___Rb_tree_node_int_* t1184 = __x1182;
  struct std___Rb_tree_node_base* base1185 = (struct std___Rb_tree_node_base*)((char *)t1184 + 0);
  struct std___Rb_tree_node_base* t1186 = base1185->_M_right;
  _Bool cast1187 = (_Bool)t1186;
  struct std___Rb_tree_node_int_* ternary1188;
  if (cast1187) {
    struct std___Rb_tree_node_int_* t1189 = __x1182;
    struct std___Rb_tree_node_base* base1190 = (struct std___Rb_tree_node_base*)((char *)t1189 + 0);
    struct std___Rb_tree_node_base* t1191 = base1190->_M_right;
    struct std___Rb_tree_node_int_* derived1192 = (struct std___Rb_tree_node_int_*)((char *)t1191 - 0);
    struct std___Rb_tree_node_int_* r1193 = std___Rb_tree_node_int____M_node_ptr(derived1192);
    ternary1188 = (struct std___Rb_tree_node_int_*)r1193;
  } else {
    struct std___Rb_tree_node_int_* c1194 = ((void*)0);
    ternary1188 = (struct std___Rb_tree_node_int_*)c1194;
  }
  __retval1183 = ternary1188;
  struct std___Rb_tree_node_int_* t1195 = __retval1183;
  return t1195;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(struct std___Rb_tree_node_int_* v1196) {
bb1197:
  struct std___Rb_tree_node_int_* __x1198;
  struct std___Rb_tree_node_int_* __retval1199;
  __x1198 = v1196;
  struct std___Rb_tree_node_int_* t1200 = __x1198;
  struct std___Rb_tree_node_base* base1201 = (struct std___Rb_tree_node_base*)((char *)t1200 + 0);
  struct std___Rb_tree_node_base* t1202 = base1201->_M_left;
  _Bool cast1203 = (_Bool)t1202;
  struct std___Rb_tree_node_int_* ternary1204;
  if (cast1203) {
    struct std___Rb_tree_node_int_* t1205 = __x1198;
    struct std___Rb_tree_node_base* base1206 = (struct std___Rb_tree_node_base*)((char *)t1205 + 0);
    struct std___Rb_tree_node_base* t1207 = base1206->_M_left;
    struct std___Rb_tree_node_int_* derived1208 = (struct std___Rb_tree_node_int_*)((char *)t1207 - 0);
    struct std___Rb_tree_node_int_* r1209 = std___Rb_tree_node_int____M_node_ptr(derived1208);
    ternary1204 = (struct std___Rb_tree_node_int_*)r1209;
  } else {
    struct std___Rb_tree_node_int_* c1210 = ((void*)0);
    ternary1204 = (struct std___Rb_tree_node_int_*)c1210;
  }
  __retval1199 = ternary1204;
  struct std___Rb_tree_node_int_* t1211 = __retval1199;
  return t1211;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1212) {
bb1213:
  int* __location1214;
  __location1214 = v1212;
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(struct std__allocator_std___Rb_tree_node_int__* v1215, int* v1216) {
bb1217:
  struct std__allocator_std___Rb_tree_node_int__* __a1218;
  int* __p1219;
  __a1218 = v1215;
  __p1219 = v1216;
  int* t1220 = __p1219;
  void_std__destroy_at_int_(t1220);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___Rb_tree_node_int__* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1221) {
bb1222:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1223;
  struct std__allocator_std___Rb_tree_node_int__* __retval1224;
  this1223 = v1221;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1225 = this1223;
  struct std__allocator_std___Rb_tree_node_int__* base1226 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)&(t1225->_M_impl) + 0);
  __retval1224 = base1226;
  struct std__allocator_std___Rb_tree_node_int__* t1227 = __retval1224;
  return t1227;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v1228) {
bb1229:
  struct __gnu_cxx____aligned_membuf_int_* this1230;
  void* __retval1231;
  this1230 = v1228;
  struct __gnu_cxx____aligned_membuf_int_* t1232 = this1230;
  void* cast1233 = (void*)&(t1232->_M_storage);
  __retval1231 = cast1233;
  void* t1234 = __retval1231;
  return t1234;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v1235) {
bb1236:
  struct __gnu_cxx____aligned_membuf_int_* this1237;
  int* __retval1238;
  this1237 = v1235;
  struct __gnu_cxx____aligned_membuf_int_* t1239 = this1237;
  void* r1240 = __gnu_cxx____aligned_membuf_int____M_addr(t1239);
  int* cast1241 = (int*)r1240;
  __retval1238 = cast1241;
  int* t1242 = __retval1238;
  return t1242;
}

// function: _ZNSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr(struct std___Rb_tree_node_int_* v1243) {
bb1244:
  struct std___Rb_tree_node_int_* this1245;
  int* __retval1246;
  this1245 = v1243;
  struct std___Rb_tree_node_int_* t1247 = this1245;
  int* r1248 = __gnu_cxx____aligned_membuf_int____M_ptr(&t1247->_M_storage);
  __retval1246 = r1248;
  int* t1249 = __retval1246;
  return t1249;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_destroy_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1250, struct std___Rb_tree_node_int_* v1251) {
bb1252:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1253;
  struct std___Rb_tree_node_int_* __p1254;
  this1253 = v1250;
  __p1254 = v1251;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1255 = this1253;
  struct std__allocator_std___Rb_tree_node_int__* r1256 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t1255);
  struct std___Rb_tree_node_int_* t1257 = __p1254;
  int* r1258 = std___Rb_tree_node_int____M_valptr(t1257);
  if (__cir_exc_active) {
    return;
  }
  void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(r1256, r1258);
  struct std___Rb_tree_node_int_* t1259 = __p1254;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1260:
  _Bool __retval1261;
    _Bool c1262 = 0;
    __retval1261 = c1262;
    _Bool t1263 = __retval1261;
    return t1263;
  abort();
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___Rb_tree_node_int_____deallocate(struct std____new_allocator_std___Rb_tree_node_int__* v1264, struct std___Rb_tree_node_int_* v1265, unsigned long v1266) {
bb1267:
  struct std____new_allocator_std___Rb_tree_node_int__* this1268;
  struct std___Rb_tree_node_int_* __p1269;
  unsigned long __n1270;
  this1268 = v1264;
  __p1269 = v1265;
  __n1270 = v1266;
  struct std____new_allocator_std___Rb_tree_node_int__* t1271 = this1268;
    unsigned long c1272 = 8;
    unsigned long c1273 = 16;
    _Bool c1274 = ((c1272 > c1273)) ? 1 : 0;
    if (c1274) {
      struct std___Rb_tree_node_int_* t1275 = __p1269;
      void* cast1276 = (void*)t1275;
      unsigned long t1277 = __n1270;
      unsigned long c1278 = 40;
      unsigned long b1279 = t1277 * c1278;
      unsigned long c1280 = 8;
      operator_delete_3(cast1276, b1279, c1280);
      return;
    }
  struct std___Rb_tree_node_int_* t1281 = __p1269;
  void* cast1282 = (void*)t1281;
  unsigned long t1283 = __n1270;
  unsigned long c1284 = 40;
  unsigned long b1285 = t1283 * c1284;
  operator_delete_2(cast1282, b1285);
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE10deallocateEPS0_m
void std__allocator_std___Rb_tree_node_int_____deallocate(struct std__allocator_std___Rb_tree_node_int__* v1286, struct std___Rb_tree_node_int_* v1287, unsigned long v1288) {
bb1289:
  struct std__allocator_std___Rb_tree_node_int__* this1290;
  struct std___Rb_tree_node_int_* __p1291;
  unsigned long __n1292;
  this1290 = v1286;
  __p1291 = v1287;
  __n1292 = v1288;
  struct std__allocator_std___Rb_tree_node_int__* t1293 = this1290;
    _Bool r1294 = std____is_constant_evaluated();
    if (r1294) {
      struct std___Rb_tree_node_int_* t1295 = __p1291;
      void* cast1296 = (void*)t1295;
      operator_delete(cast1296);
      return;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base1297 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t1293 + 0);
  struct std___Rb_tree_node_int_* t1298 = __p1291;
  unsigned long t1299 = __n1292;
  std____new_allocator_std___Rb_tree_node_int_____deallocate(base1297, t1298, t1299);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(struct std__allocator_std___Rb_tree_node_int__* v1300, struct std___Rb_tree_node_int_* v1301, unsigned long v1302) {
bb1303:
  struct std__allocator_std___Rb_tree_node_int__* __a1304;
  struct std___Rb_tree_node_int_* __p1305;
  unsigned long __n1306;
  __a1304 = v1300;
  __p1305 = v1301;
  __n1306 = v1302;
  struct std__allocator_std___Rb_tree_node_int__* t1307 = __a1304;
  struct std___Rb_tree_node_int_* t1308 = __p1305;
  unsigned long t1309 = __n1306;
  std__allocator_std___Rb_tree_node_int_____deallocate(t1307, t1308, t1309);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_put_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1310, struct std___Rb_tree_node_int_* v1311) {
bb1312:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1313;
  struct std___Rb_tree_node_int_* __p1314;
  this1313 = v1310;
  __p1314 = v1311;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1315 = this1313;
  struct std__allocator_std___Rb_tree_node_int__* r1316 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t1315);
  struct std___Rb_tree_node_int_* t1317 = __p1314;
  unsigned long c1318 = 1;
  std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(r1316, t1317, c1318);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_drop_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1319, struct std___Rb_tree_node_int_* v1320) {
bb1321:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1322;
  struct std___Rb_tree_node_int_* __p1323;
  this1322 = v1319;
  __p1323 = v1320;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1324 = this1322;
  struct std___Rb_tree_node_int_* t1325 = __p1323;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(t1324, t1325);
  struct std___Rb_tree_node_int_* t1326 = __p1323;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t1324, t1326);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1327, struct std___Rb_tree_node_int_* v1328) {
bb1329:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1330;
  struct std___Rb_tree_node_int_* __x1331;
  this1330 = v1327;
  __x1331 = v1328;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1332 = this1330;
    while (1) {
      struct std___Rb_tree_node_int_* t1333 = __x1331;
      _Bool cast1334 = (_Bool)t1333;
      if (!cast1334) break;
        struct std___Rb_tree_node_int_* __y1335;
        struct std___Rb_tree_node_int_* t1336 = __x1331;
        struct std___Rb_tree_node_int_* r1337 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(t1336);
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t1332, r1337);
        if (__cir_exc_active) {
          return;
        }
        struct std___Rb_tree_node_int_* t1338 = __x1331;
        struct std___Rb_tree_node_int_* r1339 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(t1338);
        if (__cir_exc_active) {
          return;
        }
        __y1335 = r1339;
        struct std___Rb_tree_node_int_* t1340 = __x1331;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(t1332, t1340);
        struct std___Rb_tree_node_int_* t1341 = __y1335;
        __x1331 = t1341;
    }
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_M_begin_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1342) {
bb1343:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1344;
  struct std___Rb_tree_node_int_* __retval1345;
  struct std___Rb_tree_node_base* __begin1346;
  this1344 = v1342;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1347 = this1344;
  struct std___Rb_tree_header* base1348 = (struct std___Rb_tree_header*)((char *)&(t1347->_M_impl) + 8);
  struct std___Rb_tree_node_base* t1349 = base1348->_M_header._M_parent;
  __begin1346 = t1349;
  struct std___Rb_tree_node_base* t1350 = __begin1346;
  _Bool cast1351 = (_Bool)t1350;
  struct std___Rb_tree_node_int_* ternary1352;
  if (cast1351) {
    struct std___Rb_tree_node_base* t1353 = __begin1346;
    struct std___Rb_tree_node_int_* derived1354 = (struct std___Rb_tree_node_int_*)((char *)t1353 - 0);
    struct std___Rb_tree_node_int_* r1355 = std___Rb_tree_node_int____M_node_ptr(derived1354);
    ternary1352 = (struct std___Rb_tree_node_int_*)r1355;
  } else {
    struct std___Rb_tree_node_int_* c1356 = ((void*)0);
    ternary1352 = (struct std___Rb_tree_node_int_*)c1356;
  }
  __retval1345 = ternary1352;
  struct std___Rb_tree_node_int_* t1357 = __retval1345;
  return t1357;
}

