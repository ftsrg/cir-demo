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
char _str[18] = "myset.size() == 0";
char _str_1[110] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/multiset/multiset-find/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[18] = "myset.size() == 5";
char _str_3[10] = "*it == 20";
char _str_4[10] = "*it == 50";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_5[16] = "myset contains:";
char _str_6[2] = " ";
char _str_7[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_tree.h";
char __PRETTY_FUNCTION____ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5eraseB5cxx11ESt23_Rb_tree_const_iteratorIiE[210] = "iterator std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>>::erase(const_iterator) [_Key = int, _Val = int, _KeyOfValue = std::_Identity<int>, _Compare = std::less<int>, _Alloc = std::allocator<int>]";
char _str_8[20] = "__position != end()";
void std__multiset_int__std__less_int___std__allocator_int_____multiset(struct std__multiset_int__std__less_int___std__allocator_int__* p0);
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(struct std___Rb_tree_const_iterator_int_* p0);
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
unsigned long std__multiset_int__std__less_int___std__allocator_int_____size___const(struct std__multiset_int__std__less_int___std__allocator_int__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
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
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_lower_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, int* p3);
_Bool std__operator__(struct std___Rb_tree_iterator_int_* p0, struct std___Rb_tree_iterator_int_* p1);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____find(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____find(struct std__multiset_int__std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_const_iterator_int_* p1);
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
extern struct std___Rb_tree_node_base* std___Rb_tree_increment(struct std___Rb_tree_node_base* p0);
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator___2(struct std___Rb_tree_const_iterator_int_* p0);
extern struct std___Rb_tree_node_base* std___Rb_tree_rebalance_for_erase(struct std___Rb_tree_node_base* p0, struct std___Rb_tree_node_base* p1);
struct std___Rb_tree_node_base* std____rb_tree___Node_traits_int__int_____S_rebalance_for_erase(struct std___Rb_tree_node_base* p0, struct std___Rb_tree_node_base* p1);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase_abi_cxx11_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1);
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____erase_abi_cxx11_(struct std__multiset_int__std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1);
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_node_base* p1);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____begin___const(struct std__multiset_int__std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* p0, int p1);
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
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____end___const(struct std__multiset_int__std__less_int___std__allocator_int__* p0);
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

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE4sizeEv
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v9) {
bb10:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this11;
  unsigned long __retval12;
  this11 = v9;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t13 = this11;
  struct std___Rb_tree_header* base14 = (struct std___Rb_tree_header*)((char *)&(t13->_M_impl) + 8);
  unsigned long t15 = base14->_M_node_count;
  __retval12 = t15;
  unsigned long t16 = __retval12;
  return t16;
}

// function: _ZNKSt8multisetIiSt4lessIiESaIiEE4sizeEv
unsigned long std__multiset_int__std__less_int___std__allocator_int_____size___const(struct std__multiset_int__std__less_int___std__allocator_int__* v17) {
bb18:
  struct std__multiset_int__std__less_int___std__allocator_int__* this19;
  unsigned long __retval20;
  this19 = v17;
  struct std__multiset_int__std__less_int___std__allocator_int__* t21 = this19;
  unsigned long r22 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(&t21->_M_t);
  __retval20 = r22;
  unsigned long t23 = __retval20;
  return t23;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_beginEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v24) {
bb25:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this26;
  struct std___Rb_tree_node_base* __retval27;
  this26 = v24;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t28 = this26;
  struct std___Rb_tree_header* base29 = (struct std___Rb_tree_header*)((char *)&(t28->_M_impl) + 8);
  struct std___Rb_tree_node_base* t30 = base29->_M_header._M_parent;
  __retval27 = t30;
  struct std___Rb_tree_node_base* t31 = __retval27;
  return t31;
}

// function: _ZNKSt18_Rb_tree_node_base11_M_base_ptrEv
struct std___Rb_tree_node_base* std___Rb_tree_node_base___M_base_ptr___const(struct std___Rb_tree_node_base* v32) {
bb33:
  struct std___Rb_tree_node_base* this34;
  struct std___Rb_tree_node_base* __retval35;
  this34 = v32;
  struct std___Rb_tree_node_base* t36 = this34;
  __retval35 = t36;
  struct std___Rb_tree_node_base* t37 = __retval35;
  return t37;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_M_endEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v38) {
bb39:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this40;
  struct std___Rb_tree_node_base* __retval41;
  this40 = v38;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t42 = this40;
  struct std___Rb_tree_header* base43 = (struct std___Rb_tree_header*)((char *)&(t42->_M_impl) + 8);
  struct std___Rb_tree_node_base* r44 = std___Rb_tree_node_base___M_base_ptr___const(&base43->_M_header);
  __retval41 = r44;
  struct std___Rb_tree_node_base* t45 = __retval41;
  return t45;
}

// function: _ZNKSt4lessIiEclERKiS2_
_Bool std__less_int___operator___int_const___int_const___const(struct std__less_int_* v46, int* v47, int* v48) {
bb49:
  struct std__less_int_* this50;
  int* __x51;
  int* __y52;
  _Bool __retval53;
  this50 = v46;
  __x51 = v47;
  __y52 = v48;
  struct std__less_int_* t54 = this50;
  int* t55 = __x51;
  int t56 = *t55;
  int* t57 = __y52;
  int t58 = *t57;
  _Bool c59 = ((t56 < t58)) ? 1 : 0;
  __retval53 = c59;
  _Bool t60 = __retval53;
  return t60;
}

// function: _ZNKSt9_IdentityIiEclERKi
int* std___Identity_int___operator___int_const___const(struct std___Identity_int_* v61, int* v62) {
bb63:
  struct std___Identity_int_* this64;
  int* __x65;
  int* __retval66;
  this64 = v61;
  __x65 = v62;
  struct std___Identity_int_* t67 = this64;
  int* t68 = __x65;
  __retval66 = t68;
  int* t69 = __retval66;
  return t69;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr___const(struct __gnu_cxx____aligned_membuf_int_* v70) {
bb71:
  struct __gnu_cxx____aligned_membuf_int_* this72;
  void* __retval73;
  this72 = v70;
  struct __gnu_cxx____aligned_membuf_int_* t74 = this72;
  void* cast75 = (void*)&(t74->_M_storage);
  __retval73 = cast75;
  void* t76 = __retval73;
  return t76;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr___const(struct __gnu_cxx____aligned_membuf_int_* v77) {
bb78:
  struct __gnu_cxx____aligned_membuf_int_* this79;
  int* __retval80;
  this79 = v77;
  struct __gnu_cxx____aligned_membuf_int_* t81 = this79;
  void* r82 = __gnu_cxx____aligned_membuf_int____M_addr___const(t81);
  int* cast83 = (int*)r82;
  __retval80 = cast83;
  int* t84 = __retval80;
  return t84;
}

// function: _ZNKSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr___const(struct std___Rb_tree_node_int_* v85) {
bb86:
  struct std___Rb_tree_node_int_* this87;
  int* __retval88;
  this87 = v85;
  struct std___Rb_tree_node_int_* t89 = this87;
  int* r90 = __gnu_cxx____aligned_membuf_int____M_ptr___const(&t89->_M_storage);
  __retval88 = r90;
  int* t91 = __retval88;
  return t91;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_S_keyERKSt13_Rb_tree_nodeIiE
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(struct std___Rb_tree_node_int_* v92) {
bb93:
  struct std___Rb_tree_node_int_* __node94;
  int* __retval95;
  struct std___Identity_int_ ref_tmp096;
  __node94 = v92;
  struct std___Rb_tree_node_int_* t97 = __node94;
  int* r98 = std___Rb_tree_node_int____M_valptr___const(t97);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r99 = std___Identity_int___operator___int_const___const(&ref_tmp096, r98);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval95 = r99;
  int* t100 = __retval95;
  return t100;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_S_keyEPSt18_Rb_tree_node_base
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(struct std___Rb_tree_node_base* v101) {
bb102:
  struct std___Rb_tree_node_base* __x103;
  int* __retval104;
  __x103 = v101;
  struct std___Rb_tree_node_base* t105 = __x103;
  struct std___Rb_tree_node_int_* derived106 = (struct std___Rb_tree_node_int_*)((char *)t105 - 0);
  int* r107 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(derived106);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval104 = r107;
  int* t108 = __retval104;
  return t108;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(struct std___Rb_tree_node_base* v109) {
bb110:
  struct std___Rb_tree_node_base* __x111;
  struct std___Rb_tree_node_base* __retval112;
  __x111 = v109;
  struct std___Rb_tree_node_base* t113 = __x111;
  struct std___Rb_tree_node_base* t114 = t113->_M_left;
  __retval112 = t114;
  struct std___Rb_tree_node_base* t115 = __retval112;
  return t115;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(struct std___Rb_tree_node_base* v116) {
bb117:
  struct std___Rb_tree_node_base* __x118;
  struct std___Rb_tree_node_base* __retval119;
  __x118 = v116;
  struct std___Rb_tree_node_base* t120 = __x118;
  struct std___Rb_tree_node_base* t121 = t120->_M_right;
  __retval119 = t121;
  struct std___Rb_tree_node_base* t122 = __retval119;
  return t122;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v123, struct std___Rb_tree_node_base** v124, struct std___Rb_tree_node_base** v125) {
bb126:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this127;
  struct std___Rb_tree_node_base** __x128;
  struct std___Rb_tree_node_base** __y129;
  this127 = v123;
  __x128 = v124;
  __y129 = v125;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t130 = this127;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base131 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t130 + 0);
  struct std___Rb_tree_node_base** t132 = __x128;
  struct std___Rb_tree_node_base* t133 = *t132;
  t130->first = t133;
  struct std___Rb_tree_node_base** t134 = __y129;
  struct std___Rb_tree_node_base* t135 = *t134;
  t130->second = t135;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE23_M_get_insert_equal_posERKi
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_equal_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v136, int* v137) {
bb138:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this139;
  int* __k140;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval141;
  struct std___Rb_tree_node_base* __x142;
  struct std___Rb_tree_node_base* __y143;
  this139 = v136;
  __k140 = v137;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t144 = this139;
  struct std___Rb_tree_node_base* r145 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t144);
  __x142 = r145;
  struct std___Rb_tree_node_base* r146 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t144);
  __y143 = r146;
    while (1) {
      struct std___Rb_tree_node_base* t147 = __x142;
      _Bool cast148 = (_Bool)t147;
      if (!cast148) break;
        struct std___Rb_tree_node_base* t149 = __x142;
        __y143 = t149;
        struct std___Rb_tree_key_compare_std__less_int__* base150 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t144->_M_impl) + 0);
        struct std__less_int_* cast151 = (struct std__less_int_*)base150;
        int* t152 = __k140;
        struct std___Rb_tree_node_base* t153 = __x142;
        int* r154 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t153);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r155 = std__less_int___operator___int_const___int_const___const(cast151, t152, r154);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        struct std___Rb_tree_node_base* ternary156;
        if (r155) {
          struct std___Rb_tree_node_base* t157 = __x142;
          struct std___Rb_tree_node_base* r158 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t157);
          ternary156 = (struct std___Rb_tree_node_base*)r158;
        } else {
          struct std___Rb_tree_node_base* t159 = __x142;
          struct std___Rb_tree_node_base* r160 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t159);
          ternary156 = (struct std___Rb_tree_node_base*)r160;
        }
        __x142 = ternary156;
    }
  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval141, &__x142, &__y143);
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t161 = __retval141;
  return t161;
}

// function: _ZNKSt9_IdentityIiEclERi
int* std___Identity_int___operator___int___const(struct std___Identity_int_* v162, int* v163) {
bb164:
  struct std___Identity_int_* this165;
  int* __x166;
  int* __retval167;
  this165 = v162;
  __x166 = v163;
  struct std___Identity_int_* t168 = this165;
  int* t169 = __x166;
  __retval167 = t169;
  int* t170 = __retval167;
  return t170;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeC2ERS5_
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v171, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v172) {
bb173:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this174;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* __t175;
  this174 = v171;
  __t175 = v172;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t176 = this174;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t177 = __t175;
  t176->_M_t = t177;
  return;
}

// function: _ZNKSt15__new_allocatorISt13_Rb_tree_nodeIiEE11_M_max_sizeEv
unsigned long std____new_allocator_std___Rb_tree_node_int______M_max_size___const(struct std____new_allocator_std___Rb_tree_node_int__* v178) {
bb179:
  struct std____new_allocator_std___Rb_tree_node_int__* this180;
  unsigned long __retval181;
  this180 = v178;
  struct std____new_allocator_std___Rb_tree_node_int__* t182 = this180;
  unsigned long c183 = 9223372036854775807;
  unsigned long c184 = 40;
  unsigned long b185 = c183 / c184;
  __retval181 = b185;
  unsigned long t186 = __retval181;
  return t186;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE8allocateEmPKv
struct std___Rb_tree_node_int_* std____new_allocator_std___Rb_tree_node_int_____allocate(struct std____new_allocator_std___Rb_tree_node_int__* v187, unsigned long v188, void* v189) {
bb190:
  struct std____new_allocator_std___Rb_tree_node_int__* this191;
  unsigned long __n192;
  void* unnamed193;
  struct std___Rb_tree_node_int_* __retval194;
  this191 = v187;
  __n192 = v188;
  unnamed193 = v189;
  struct std____new_allocator_std___Rb_tree_node_int__* t195 = this191;
    unsigned long t196 = __n192;
    unsigned long r197 = std____new_allocator_std___Rb_tree_node_int______M_max_size___const(t195);
    _Bool c198 = ((t196 > r197)) ? 1 : 0;
    if (c198) {
        unsigned long t199 = __n192;
        unsigned long c200 = -1;
        unsigned long c201 = 40;
        unsigned long b202 = c200 / c201;
        _Bool c203 = ((t199 > b202)) ? 1 : 0;
        if (c203) {
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
    unsigned long c204 = 8;
    unsigned long c205 = 16;
    _Bool c206 = ((c204 > c205)) ? 1 : 0;
    if (c206) {
      unsigned long __al207;
      unsigned long c208 = 8;
      __al207 = c208;
      unsigned long t209 = __n192;
      unsigned long c210 = 40;
      unsigned long b211 = t209 * c210;
      unsigned long t212 = __al207;
      void* r213 = operator_new_2(b211, t212);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast214 = (struct std___Rb_tree_node_int_*)r213;
      __retval194 = cast214;
      struct std___Rb_tree_node_int_* t215 = __retval194;
      return t215;
    }
  unsigned long t216 = __n192;
  unsigned long c217 = 40;
  unsigned long b218 = t216 * c217;
  void* r219 = operator_new(b218);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* cast220 = (struct std___Rb_tree_node_int_*)r219;
  __retval194 = cast220;
  struct std___Rb_tree_node_int_* t221 = __retval194;
  return t221;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE8allocateEm
struct std___Rb_tree_node_int_* std__allocator_std___Rb_tree_node_int_____allocate(struct std__allocator_std___Rb_tree_node_int__* v222, unsigned long v223) {
bb224:
  struct std__allocator_std___Rb_tree_node_int__* this225;
  unsigned long __n226;
  struct std___Rb_tree_node_int_* __retval227;
  this225 = v222;
  __n226 = v223;
  struct std__allocator_std___Rb_tree_node_int__* t228 = this225;
    _Bool r229 = std____is_constant_evaluated();
    if (r229) {
        unsigned long t230 = __n226;
        unsigned long c231 = 40;
        unsigned long ovr232;
        _Bool ovf233 = __builtin_mul_overflow(t230, c231, &ovr232);
        __n226 = ovr232;
        if (ovf233) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t234 = __n226;
      void* r235 = operator_new(t234);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast236 = (struct std___Rb_tree_node_int_*)r235;
      __retval227 = cast236;
      struct std___Rb_tree_node_int_* t237 = __retval227;
      return t237;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base238 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t228 + 0);
  unsigned long t239 = __n226;
  void* c240 = ((void*)0);
  struct std___Rb_tree_node_int_* r241 = std____new_allocator_std___Rb_tree_node_int_____allocate(base238, t239, c240);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval227 = r241;
  struct std___Rb_tree_node_int_* t242 = __retval227;
  return t242;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE8allocateERS2_m
struct std___Rb_tree_node_int_* std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(struct std__allocator_std___Rb_tree_node_int__* v243, unsigned long v244) {
bb245:
  struct std__allocator_std___Rb_tree_node_int__* __a246;
  unsigned long __n247;
  struct std___Rb_tree_node_int_* __retval248;
  __a246 = v243;
  __n247 = v244;
  struct std__allocator_std___Rb_tree_node_int__* t249 = __a246;
  unsigned long t250 = __n247;
  struct std___Rb_tree_node_int_* r251 = std__allocator_std___Rb_tree_node_int_____allocate(t249, t250);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval248 = r251;
  struct std___Rb_tree_node_int_* t252 = __retval248;
  return t252;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_get_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v253) {
bb254:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this255;
  struct std___Rb_tree_node_int_* __retval256;
  this255 = v253;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t257 = this255;
  struct std__allocator_std___Rb_tree_node_int__* r258 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t257);
  unsigned long c259 = 1;
  struct std___Rb_tree_node_int_* r260 = std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(r258, c259);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval256 = r260;
  struct std___Rb_tree_node_int_* t261 = __retval256;
  return t261;
}

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v262, int* v263) {
bb264:
  int* __location265;
  int* __args266;
  int* __retval267;
  void* __loc268;
  __location265 = v262;
  __args266 = v263;
  int* t269 = __location265;
  void* cast270 = (void*)t269;
  __loc268 = cast270;
    void* t271 = __loc268;
    int* cast272 = (int*)t271;
    int* t273 = __args266;
    int t274 = *t273;
    *cast272 = t274;
    __retval267 = cast272;
    int* t275 = __retval267;
    return t275;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE9constructIiJiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int_(struct std__allocator_std___Rb_tree_node_int__* v276, int* v277, int* v278) {
bb279:
  struct std__allocator_std___Rb_tree_node_int__* __a280;
  int* __p281;
  int* __args282;
  __a280 = v276;
  __p281 = v277;
  __args282 = v278;
  int* t283 = __p281;
  int* t284 = __args282;
  int* r285 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t283, t284);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE17_M_construct_nodeIJiEEEvPSt13_Rb_tree_nodeIiEDpOT_
void void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v286, struct std___Rb_tree_node_int_* v287, int* v288) {
bb289:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this290;
  struct std___Rb_tree_node_int_* __node291;
  int* __args292;
  this290 = v286;
  __node291 = v287;
  __args292 = v288;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t293 = this290;
      struct std__allocator_std___Rb_tree_node_int__* r295 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t293);
      struct std___Rb_tree_node_int_* t296 = __node291;
      int* r297 = std___Rb_tree_node_int____M_valptr(t296);
      if (__cir_exc_active) {
        goto cir_try_dispatch294;
      }
      int* t298 = __args292;
      void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int_(r295, r297, t298);
    cir_try_dispatch294: ;
    if (__cir_exc_active) {
    {
      int ca_tok299 = 0;
      void* ca_exn300 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Rb_tree_node_int_* t301 = __node291;
        struct std___Rb_tree_node_int_* t302 = __node291;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t293, t302);
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
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v303, int* v304) {
bb305:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this306;
  int* __args307;
  struct std___Rb_tree_node_int_* __retval308;
  struct std___Rb_tree_node_int_* __tmp309;
  this306 = v303;
  __args307 = v304;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t310 = this306;
  struct std___Rb_tree_node_int_* r311 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(t310);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __tmp309 = r311;
  struct std___Rb_tree_node_int_* t312 = __tmp309;
  int* t313 = __args307;
  void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int_(t310, t312, t313);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* t314 = __tmp309;
  __retval308 = t314;
  struct std___Rb_tree_node_int_* t315 = __retval308;
  return t315;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeclIiEEPSt13_Rb_tree_nodeIiEOT_
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int__int____const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v316, int* v317) {
bb318:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this319;
  int* __arg320;
  struct std___Rb_tree_node_int_* __retval321;
  this319 = v316;
  __arg320 = v317;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t322 = this319;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t323 = t322->_M_t;
  int* t324 = __arg320;
  struct std___Rb_tree_node_int_* r325 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int_(t323, t324);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval321 = r325;
  struct std___Rb_tree_node_int_* t326 = __retval321;
  return t326;
}

// function: _ZNSt9__rb_tree12_Node_traitsIiPiE23_S_insert_and_rebalanceEbPSt18_Rb_tree_node_baseS4_RS3_
void std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(_Bool v327, struct std___Rb_tree_node_base* v328, struct std___Rb_tree_node_base* v329, struct std___Rb_tree_node_base* v330) {
bb331:
  _Bool __insert_left332;
  struct std___Rb_tree_node_base* __x333;
  struct std___Rb_tree_node_base* __p334;
  struct std___Rb_tree_node_base* __header335;
  __insert_left332 = v327;
  __x333 = v328;
  __p334 = v329;
  __header335 = v330;
  _Bool t336 = __insert_left332;
  struct std___Rb_tree_node_base* t337 = __x333;
  struct std___Rb_tree_node_base* t338 = __p334;
  struct std___Rb_tree_node_base* t339 = __header335;
  std___Rb_tree_insert_and_rebalance(t336, t337, t338, t339);
  return;
}

// function: _ZNSt17_Rb_tree_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_iterator_int____Rb_tree_iterator(struct std___Rb_tree_iterator_int_* v340, struct std___Rb_tree_node_base* v341) {
bb342:
  struct std___Rb_tree_iterator_int_* this343;
  struct std___Rb_tree_node_base* __x344;
  this343 = v340;
  __x344 = v341;
  struct std___Rb_tree_iterator_int_* t345 = this343;
  struct std___Rb_tree_node_base* t346 = __x344;
  t345->_M_node = t346;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE10_M_insert_IiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiEPSt18_Rb_tree_node_baseSB_OT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v347, struct std___Rb_tree_node_base* v348, struct std___Rb_tree_node_base* v349, int* v350, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v351) {
bb352:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this353;
  struct std___Rb_tree_node_base* __x354;
  struct std___Rb_tree_node_base* __p355;
  int* __v356;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen357;
  struct std___Rb_tree_iterator_int_ __retval358;
  _Bool __insert_left359;
  struct std___Rb_tree_node_base* __z360;
  this353 = v347;
  __x354 = v348;
  __p355 = v349;
  __v356 = v350;
  __node_gen357 = v351;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t361 = this353;
  struct std___Rb_tree_node_base* t362 = __x354;
  _Bool cast363 = (_Bool)t362;
  _Bool ternary364;
  if (cast363) {
    _Bool c365 = 1;
    ternary364 = (_Bool)c365;
  } else {
    struct std___Rb_tree_node_base* t366 = __p355;
    struct std___Rb_tree_node_base* r367 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t361);
    _Bool c368 = ((t366 == r367)) ? 1 : 0;
    ternary364 = (_Bool)c368;
  }
  _Bool ternary369;
  if (ternary364) {
    _Bool c370 = 1;
    ternary369 = (_Bool)c370;
  } else {
    struct std___Identity_int_ ref_tmp0371;
    struct std___Rb_tree_key_compare_std__less_int__* base372 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t361->_M_impl) + 0);
    struct std__less_int_* cast373 = (struct std__less_int_*)base372;
    int* t374 = __v356;
    int* r375 = std___Identity_int___operator___int___const(&ref_tmp0371, t374);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    struct std___Rb_tree_node_base* t376 = __p355;
    int* r377 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t376);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r378 = std__less_int___operator___int_const___int_const___const(cast373, r375, r377);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    ternary369 = (_Bool)r378;
  }
  __insert_left359 = ternary369;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t379 = __node_gen357;
  int* t380 = __v356;
  struct std___Rb_tree_node_int_* r381 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int__int____const(t379, t380);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* base382 = (struct std___Rb_tree_node_base*)((char *)r381 + 0);
  struct std___Rb_tree_node_base* r383 = std___Rb_tree_node_base___M_base_ptr___const(base382);
  __z360 = r383;
  _Bool t384 = __insert_left359;
  struct std___Rb_tree_node_base* t385 = __z360;
  struct std___Rb_tree_node_base* t386 = __p355;
  struct std___Rb_tree_header* base387 = (struct std___Rb_tree_header*)((char *)&(t361->_M_impl) + 8);
  std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(t384, t385, t386, &base387->_M_header);
  struct std___Rb_tree_header* base388 = (struct std___Rb_tree_header*)((char *)&(t361->_M_impl) + 8);
  unsigned long t389 = base388->_M_node_count;
  unsigned long u390 = t389 + 1;
  base388->_M_node_count = u390;
  struct std___Rb_tree_node_base* t391 = __z360;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval358, t391);
  struct std___Rb_tree_iterator_int_ t392 = __retval358;
  return t392;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_insert_equalIiEESt17_Rb_tree_iteratorIiEOT_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v393, int* v394) {
bb395:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this396;
  int* __v397;
  struct std___Rb_tree_iterator_int_ __retval398;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __res399;
  struct std___Identity_int_ ref_tmp0400;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node __an401;
  this396 = v393;
  __v397 = v394;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t402 = this396;
  int* t403 = __v397;
  int* r404 = std___Identity_int___operator___int___const(&ref_tmp0400, t403);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r405 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_equal_pos(t402, r404);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __res399 = r405;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(&__an401, t402);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* t406 = __res399.first;
  struct std___Rb_tree_node_base* t407 = __res399.second;
  int* t408 = __v397;
  struct std___Rb_tree_iterator_int_ r409 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t402, t406, t407, t408, &__an401);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval398 = r409;
  struct std___Rb_tree_iterator_int_ t410 = __retval398;
  return t410;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2ERKSt17_Rb_tree_iteratorIiE
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(struct std___Rb_tree_const_iterator_int_* v411, struct std___Rb_tree_iterator_int_* v412) {
bb413:
  struct std___Rb_tree_const_iterator_int_* this414;
  struct std___Rb_tree_iterator_int_* __it415;
  this414 = v411;
  __it415 = v412;
  struct std___Rb_tree_const_iterator_int_* t416 = this414;
  struct std___Rb_tree_iterator_int_* t417 = __it415;
  struct std___Rb_tree_node_base* t418 = t417->_M_node;
  t416->_M_node = t418;
  return;
}

// function: _ZNSt8multisetIiSt4lessIiESaIiEE6insertEOi
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____insert(struct std__multiset_int__std__less_int___std__allocator_int__* v419, int* v420) {
bb421:
  struct std__multiset_int__std__less_int___std__allocator_int__* this422;
  int* __x423;
  struct std___Rb_tree_const_iterator_int_ __retval424;
  struct std___Rb_tree_iterator_int_ ref_tmp0425;
  this422 = v419;
  __x423 = v420;
  struct std__multiset_int__std__less_int___std__allocator_int__* t426 = this422;
  int* t427 = __x423;
  struct std___Rb_tree_iterator_int_ r428 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal_int_(&t426->_M_t, t427);
  if (__cir_exc_active) {
    struct std___Rb_tree_const_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  ref_tmp0425 = r428;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&__retval424, &ref_tmp0425);
  struct std___Rb_tree_const_iterator_int_ t429 = __retval424;
  return t429;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE14_M_lower_boundEPSt18_Rb_tree_node_baseS7_RKi
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_lower_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v430, struct std___Rb_tree_node_base* v431, struct std___Rb_tree_node_base* v432, int* v433) {
bb434:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this435;
  struct std___Rb_tree_node_base* __x436;
  struct std___Rb_tree_node_base* __y437;
  int* __k438;
  struct std___Rb_tree_node_base* __retval439;
  this435 = v430;
  __x436 = v431;
  __y437 = v432;
  __k438 = v433;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t440 = this435;
    while (1) {
      struct std___Rb_tree_node_base* t441 = __x436;
      _Bool cast442 = (_Bool)t441;
      if (!cast442) break;
        struct std___Rb_tree_key_compare_std__less_int__* base443 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t440->_M_impl) + 0);
        struct std__less_int_* cast444 = (struct std__less_int_*)base443;
        struct std___Rb_tree_node_base* t445 = __x436;
        int* r446 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t445);
        if (__cir_exc_active) {
          struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
          return __cir_eh_ret;
        }
        int* t447 = __k438;
        _Bool r448 = std__less_int___operator___int_const___int_const___const(cast444, r446, t447);
        if (__cir_exc_active) {
          struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
          return __cir_eh_ret;
        }
        _Bool u449 = !r448;
        if (u449) {
          struct std___Rb_tree_node_base* t450 = __x436;
          __y437 = t450;
          struct std___Rb_tree_node_base* t451 = __x436;
          struct std___Rb_tree_node_base* r452 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t451);
          __x436 = r452;
        } else {
          struct std___Rb_tree_node_base* t453 = __x436;
          struct std___Rb_tree_node_base* r454 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t453);
          __x436 = r454;
        }
    }
  struct std___Rb_tree_node_base* t455 = __y437;
  __retval439 = t455;
  struct std___Rb_tree_node_base* t456 = __retval439;
  return t456;
}

// function: _ZSteqRKSt17_Rb_tree_iteratorIiES2_
_Bool std__operator__(struct std___Rb_tree_iterator_int_* v457, struct std___Rb_tree_iterator_int_* v458) {
bb459:
  struct std___Rb_tree_iterator_int_* __x460;
  struct std___Rb_tree_iterator_int_* __y461;
  _Bool __retval462;
  __x460 = v457;
  __y461 = v458;
  struct std___Rb_tree_iterator_int_* t463 = __x460;
  struct std___Rb_tree_node_base* t464 = t463->_M_node;
  struct std___Rb_tree_iterator_int_* t465 = __y461;
  struct std___Rb_tree_node_base* t466 = t465->_M_node;
  _Bool c467 = ((t464 == t466)) ? 1 : 0;
  __retval462 = c467;
  _Bool t468 = __retval462;
  return t468;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE3endEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v469) {
bb470:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this471;
  struct std___Rb_tree_iterator_int_ __retval472;
  this471 = v469;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t473 = this471;
  struct std___Rb_tree_node_base* r474 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t473);
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval472, r474);
  struct std___Rb_tree_iterator_int_ t475 = __retval472;
  return t475;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE4findERKi
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____find(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v476, int* v477) {
bb478:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this479;
  int* __k480;
  struct std___Rb_tree_iterator_int_ __retval481;
  struct std___Rb_tree_iterator_int_ __j482;
  struct std___Rb_tree_iterator_int_ ref_tmp0483;
  this479 = v476;
  __k480 = v477;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t484 = this479;
  struct std___Rb_tree_node_base* r485 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t484);
  struct std___Rb_tree_node_base* r486 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t484);
  int* t487 = __k480;
  struct std___Rb_tree_node_base* r488 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_lower_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(t484, r485, r486, t487);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__j482, r488);
  struct std___Rb_tree_iterator_int_ r489 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(t484);
  ref_tmp0483 = r489;
  _Bool r490 = std__operator__(&__j482, &ref_tmp0483);
  _Bool ternary491;
  if (r490) {
    _Bool c492 = 1;
    ternary491 = (_Bool)c492;
  } else {
    struct std___Rb_tree_key_compare_std__less_int__* base493 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t484->_M_impl) + 0);
    struct std__less_int_* cast494 = (struct std__less_int_*)base493;
    int* t495 = __k480;
    struct std___Rb_tree_node_base* t496 = __j482._M_node;
    int* r497 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t496);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r498 = std__less_int___operator___int_const___int_const___const(cast494, t495, r497);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    ternary491 = (_Bool)r498;
  }
  if (ternary491) {
    struct std___Rb_tree_iterator_int_ r499 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(t484);
    __retval481 = r499;
  } else {
    __retval481 = __j482; // copy
  }
  struct std___Rb_tree_iterator_int_ t500 = __retval481;
  return t500;
}

// function: _ZNSt8multisetIiSt4lessIiESaIiEE4findERKi
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____find(struct std__multiset_int__std__less_int___std__allocator_int__* v501, int* v502) {
bb503:
  struct std__multiset_int__std__less_int___std__allocator_int__* this504;
  int* __x505;
  struct std___Rb_tree_const_iterator_int_ __retval506;
  struct std___Rb_tree_iterator_int_ ref_tmp0507;
  this504 = v501;
  __x505 = v502;
  struct std__multiset_int__std__less_int___std__allocator_int__* t508 = this504;
  int* t509 = __x505;
  struct std___Rb_tree_iterator_int_ r510 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____find(&t508->_M_t, t509);
  if (__cir_exc_active) {
    struct std___Rb_tree_const_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  ref_tmp0507 = r510;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&__retval506, &ref_tmp0507);
  struct std___Rb_tree_const_iterator_int_ t511 = __retval506;
  return t511;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEaSEOS0_
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* v512, struct std___Rb_tree_const_iterator_int_* v513) {
bb514:
  struct std___Rb_tree_const_iterator_int_* this515;
  struct std___Rb_tree_const_iterator_int_* unnamed516;
  struct std___Rb_tree_const_iterator_int_* __retval517;
  this515 = v512;
  unnamed516 = v513;
  struct std___Rb_tree_const_iterator_int_* t518 = this515;
  struct std___Rb_tree_const_iterator_int_* t519 = unnamed516;
  struct std___Rb_tree_node_base* t520 = t519->_M_node;
  t518->_M_node = t520;
  __retval517 = t518;
  struct std___Rb_tree_const_iterator_int_* t521 = __retval517;
  return t521;
}

// function: _ZNKSt23_Rb_tree_const_iteratorIiEdeEv
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* v522) {
bb523:
  struct std___Rb_tree_const_iterator_int_* this524;
  int* __retval525;
  this524 = v522;
  struct std___Rb_tree_const_iterator_int_* t526 = this524;
  struct std___Rb_tree_node_base* t527 = t526->_M_node;
  struct std___Rb_tree_node_int_* derived528 = ((t527) ? (struct std___Rb_tree_node_int_*)((char *)t527 - 0) : (struct std___Rb_tree_node_int_*)0);
  int* r529 = std___Rb_tree_node_int____M_valptr___const(derived528);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval525 = r529;
  int* t530 = __retval525;
  return t530;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEppEv
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator___2(struct std___Rb_tree_const_iterator_int_* v531) {
bb532:
  struct std___Rb_tree_const_iterator_int_* this533;
  struct std___Rb_tree_const_iterator_int_* __retval534;
  this533 = v531;
  struct std___Rb_tree_const_iterator_int_* t535 = this533;
  struct std___Rb_tree_node_base* t536 = t535->_M_node;
  struct std___Rb_tree_node_base* r537 = std___Rb_tree_increment(t536);
  t535->_M_node = r537;
  __retval534 = t535;
  struct std___Rb_tree_const_iterator_int_* t538 = __retval534;
  return t538;
}

// function: _ZNSt9__rb_tree12_Node_traitsIiPiE22_S_rebalance_for_eraseEPSt18_Rb_tree_node_baseRS3_
struct std___Rb_tree_node_base* std____rb_tree___Node_traits_int__int_____S_rebalance_for_erase(struct std___Rb_tree_node_base* v539, struct std___Rb_tree_node_base* v540) {
bb541:
  struct std___Rb_tree_node_base* __z542;
  struct std___Rb_tree_node_base* __header543;
  struct std___Rb_tree_node_base* __retval544;
  __z542 = v539;
  __header543 = v540;
  struct std___Rb_tree_node_base* t545 = __z542;
  struct std___Rb_tree_node_base* t546 = __header543;
  struct std___Rb_tree_node_base* r547 = std___Rb_tree_rebalance_for_erase(t545, t546);
  __retval544 = r547;
  struct std___Rb_tree_node_base* t548 = __retval544;
  return t548;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_erase_auxESt23_Rb_tree_const_iteratorIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v549, struct std___Rb_tree_const_iterator_int_ v550) {
bb551:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this552;
  struct std___Rb_tree_const_iterator_int_ __position553;
  struct std___Rb_tree_node_base* __y554;
  this552 = v549;
  __position553 = v550;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t555 = this552;
  struct std___Rb_tree_node_base* t556 = __position553._M_node;
  struct std___Rb_tree_header* base557 = (struct std___Rb_tree_header*)((char *)&(t555->_M_impl) + 8);
  struct std___Rb_tree_node_base* r558 = std____rb_tree___Node_traits_int__int_____S_rebalance_for_erase(t556, &base557->_M_header);
  __y554 = r558;
  struct std___Rb_tree_node_base* t559 = __y554;
  struct std___Rb_tree_node_int_* derived560 = (struct std___Rb_tree_node_int_*)((char *)t559 - 0);
  struct std___Rb_tree_node_int_* r561 = std___Rb_tree_node_int____M_node_ptr(derived560);
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(t555, r561);
  struct std___Rb_tree_header* base562 = (struct std___Rb_tree_header*)((char *)&(t555->_M_impl) + 8);
  unsigned long t563 = base562->_M_node_count;
  unsigned long u564 = t563 - 1;
  base562->_M_node_count = u564;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5eraseB5cxx11ESt23_Rb_tree_const_iteratorIiE
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase_abi_cxx11_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v565, struct std___Rb_tree_const_iterator_int_ v566) {
bb567:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this568;
  struct std___Rb_tree_const_iterator_int_ __position569;
  struct std___Rb_tree_iterator_int_ __retval570;
  struct std___Rb_tree_const_iterator_int_ __result571;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0572;
  this568 = v565;
  __position569 = v566;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t573 = this568;
    do {
          struct std___Rb_tree_const_iterator_int_ ref_tmp0574;
          struct std___Rb_tree_iterator_int_ ref_tmp1575;
          struct std___Rb_tree_iterator_int_ r576 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(t573);
          ref_tmp1575 = r576;
          std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&ref_tmp0574, &ref_tmp1575);
          _Bool r577 = std__operator___2(&__position569, &ref_tmp0574);
          if (r577) {
            char* cast578 = (char*)&(_str_7);
            int c579 = 1818;
            char* cast580 = (char*)&(__PRETTY_FUNCTION____ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5eraseB5cxx11ESt23_Rb_tree_const_iteratorIiE);
            char* cast581 = (char*)&(_str_8);
            std____glibcxx_assert_fail(cast578, c579, cast580, cast581);
          }
      _Bool c582 = 0;
      if (!c582) break;
    } while (1);
  __result571 = __position569; // copy
  struct std___Rb_tree_const_iterator_int_* r583 = std___Rb_tree_const_iterator_int___operator___2(&__result571);
  agg_tmp0572 = __position569; // copy
  struct std___Rb_tree_const_iterator_int_ t584 = agg_tmp0572;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux(t573, t584);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* t585 = __result571._M_node;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval570, t585);
  struct std___Rb_tree_iterator_int_ t586 = __retval570;
  return t586;
}

// function: _ZNSt8multisetIiSt4lessIiESaIiEE5eraseB5cxx11ESt23_Rb_tree_const_iteratorIiE
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____erase_abi_cxx11_(struct std__multiset_int__std__less_int___std__allocator_int__* v587, struct std___Rb_tree_const_iterator_int_ v588) {
bb589:
  struct std__multiset_int__std__less_int___std__allocator_int__* this590;
  struct std___Rb_tree_const_iterator_int_ __position591;
  struct std___Rb_tree_const_iterator_int_ __retval592;
  struct std___Rb_tree_iterator_int_ ref_tmp0593;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0594;
  this590 = v587;
  __position591 = v588;
  struct std__multiset_int__std__less_int___std__allocator_int__* t595 = this590;
  agg_tmp0594 = __position591; // copy
  struct std___Rb_tree_const_iterator_int_ t596 = agg_tmp0594;
  struct std___Rb_tree_iterator_int_ r597 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase_abi_cxx11_(&t595->_M_t, t596);
  if (__cir_exc_active) {
    struct std___Rb_tree_const_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  ref_tmp0593 = r597;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&__retval592, &ref_tmp0593);
  struct std___Rb_tree_const_iterator_int_ t598 = __retval592;
  return t598;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* v599, struct std___Rb_tree_node_base* v600) {
bb601:
  struct std___Rb_tree_const_iterator_int_* this602;
  struct std___Rb_tree_node_base* __x603;
  this602 = v599;
  __x603 = v600;
  struct std___Rb_tree_const_iterator_int_* t604 = this602;
  struct std___Rb_tree_node_base* t605 = __x603;
  t604->_M_node = t605;
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5beginEv
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v606) {
bb607:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this608;
  struct std___Rb_tree_const_iterator_int_ __retval609;
  this608 = v606;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t610 = this608;
  struct std___Rb_tree_header* base611 = (struct std___Rb_tree_header*)((char *)&(t610->_M_impl) + 8);
  struct std___Rb_tree_node_base* t612 = base611->_M_header._M_left;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval609, t612);
  struct std___Rb_tree_const_iterator_int_ t613 = __retval609;
  return t613;
}

// function: _ZNKSt8multisetIiSt4lessIiESaIiEE5beginEv
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____begin___const(struct std__multiset_int__std__less_int___std__allocator_int__* v614) {
bb615:
  struct std__multiset_int__std__less_int___std__allocator_int__* this616;
  struct std___Rb_tree_const_iterator_int_ __retval617;
  this616 = v614;
  struct std__multiset_int__std__less_int___std__allocator_int__* t618 = this616;
  struct std___Rb_tree_const_iterator_int_ r619 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(&t618->_M_t);
  __retval617 = r619;
  struct std___Rb_tree_const_iterator_int_ t620 = __retval617;
  return t620;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEppEi
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* v621, int v622) {
bb623:
  struct std___Rb_tree_const_iterator_int_* this624;
  int unnamed625;
  struct std___Rb_tree_const_iterator_int_ __retval626;
  this624 = v621;
  unnamed625 = v622;
  struct std___Rb_tree_const_iterator_int_* t627 = this624;
  __retval626 = *t627; // copy
  struct std___Rb_tree_node_base* t628 = t627->_M_node;
  struct std___Rb_tree_node_base* r629 = std___Rb_tree_increment(t628);
  t627->_M_node = r629;
  struct std___Rb_tree_const_iterator_int_ t630 = __retval626;
  return t630;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v631, int v632) {
bb633:
  int __a634;
  int __b635;
  int __retval636;
  __a634 = v631;
  __b635 = v632;
  int t637 = __a634;
  int t638 = __b635;
  int b639 = t637 | t638;
  __retval636 = b639;
  int t640 = __retval636;
  return t640;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v641) {
bb642:
  struct std__basic_ios_char__std__char_traits_char__* this643;
  int __retval644;
  this643 = v641;
  struct std__basic_ios_char__std__char_traits_char__* t645 = this643;
  struct std__ios_base* base646 = (struct std__ios_base*)((char *)t645 + 0);
  int t647 = base646->_M_streambuf_state;
  __retval644 = t647;
  int t648 = __retval644;
  return t648;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v649, int v650) {
bb651:
  struct std__basic_ios_char__std__char_traits_char__* this652;
  int __state653;
  this652 = v649;
  __state653 = v650;
  struct std__basic_ios_char__std__char_traits_char__* t654 = this652;
  int r655 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t654);
  if (__cir_exc_active) {
    return;
  }
  int t656 = __state653;
  int r657 = std__operator_(r655, t656);
  std__basic_ios_char__std__char_traits_char_____clear(t654, r657);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v658, char* v659) {
bb660:
  char* __c1661;
  char* __c2662;
  _Bool __retval663;
  __c1661 = v658;
  __c2662 = v659;
  char* t664 = __c1661;
  char t665 = *t664;
  int cast666 = (int)t665;
  char* t667 = __c2662;
  char t668 = *t667;
  int cast669 = (int)t668;
  _Bool c670 = ((cast666 == cast669)) ? 1 : 0;
  __retval663 = c670;
  _Bool t671 = __retval663;
  return t671;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v672) {
bb673:
  char* __p674;
  unsigned long __retval675;
  unsigned long __i676;
  __p674 = v672;
  unsigned long c677 = 0;
  __i676 = c677;
    char ref_tmp0678;
    while (1) {
      unsigned long t679 = __i676;
      char* t680 = __p674;
      char* ptr681 = &(t680)[t679];
      char c682 = 0;
      ref_tmp0678 = c682;
      _Bool r683 = __gnu_cxx__char_traits_char___eq(ptr681, &ref_tmp0678);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u684 = !r683;
      if (!u684) break;
      unsigned long t685 = __i676;
      unsigned long u686 = t685 + 1;
      __i676 = u686;
    }
  unsigned long t687 = __i676;
  __retval675 = t687;
  unsigned long t688 = __retval675;
  return t688;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v689) {
bb690:
  char* __s691;
  unsigned long __retval692;
  __s691 = v689;
    _Bool r693 = std____is_constant_evaluated();
    if (r693) {
      char* t694 = __s691;
      unsigned long r695 = __gnu_cxx__char_traits_char___length(t694);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval692 = r695;
      unsigned long t696 = __retval692;
      return t696;
    }
  char* t697 = __s691;
  unsigned long r698 = strlen(t697);
  __retval692 = r698;
  unsigned long t699 = __retval692;
  return t699;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v700, char* v701) {
bb702:
  struct std__basic_ostream_char__std__char_traits_char__* __out703;
  char* __s704;
  struct std__basic_ostream_char__std__char_traits_char__* __retval705;
  __out703 = v700;
  __s704 = v701;
    char* t706 = __s704;
    _Bool cast707 = (_Bool)t706;
    _Bool u708 = !cast707;
    if (u708) {
      struct std__basic_ostream_char__std__char_traits_char__* t709 = __out703;
      void** v710 = (void**)t709;
      void* v711 = *((void**)v710);
      unsigned char* cast712 = (unsigned char*)v711;
      long c713 = -24;
      unsigned char* ptr714 = &(cast712)[c713];
      long* cast715 = (long*)ptr714;
      long t716 = *cast715;
      unsigned char* cast717 = (unsigned char*)t709;
      unsigned char* ptr718 = &(cast717)[t716];
      struct std__basic_ostream_char__std__char_traits_char__* cast719 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr718;
      struct std__basic_ios_char__std__char_traits_char__* cast720 = (struct std__basic_ios_char__std__char_traits_char__*)cast719;
      int t721 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast720, t721);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t722 = __out703;
      char* t723 = __s704;
      char* t724 = __s704;
      unsigned long r725 = std__char_traits_char___length(t724);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast726 = (long)r725;
      struct std__basic_ostream_char__std__char_traits_char__* r727 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t722, t723, cast726);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t728 = __out703;
  __retval705 = t728;
  struct std__basic_ostream_char__std__char_traits_char__* t729 = __retval705;
  return t729;
}

// function: _ZSteqRKSt23_Rb_tree_const_iteratorIiES2_
_Bool std__operator___2(struct std___Rb_tree_const_iterator_int_* v730, struct std___Rb_tree_const_iterator_int_* v731) {
bb732:
  struct std___Rb_tree_const_iterator_int_* __x733;
  struct std___Rb_tree_const_iterator_int_* __y734;
  _Bool __retval735;
  __x733 = v730;
  __y734 = v731;
  struct std___Rb_tree_const_iterator_int_* t736 = __x733;
  struct std___Rb_tree_node_base* t737 = t736->_M_node;
  struct std___Rb_tree_const_iterator_int_* t738 = __y734;
  struct std___Rb_tree_node_base* t739 = t738->_M_node;
  _Bool c740 = ((t737 == t739)) ? 1 : 0;
  __retval735 = c740;
  _Bool t741 = __retval735;
  return t741;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE3endEv
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v742) {
bb743:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this744;
  struct std___Rb_tree_const_iterator_int_ __retval745;
  this744 = v742;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t746 = this744;
  struct std___Rb_tree_node_base* r747 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t746);
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval745, r747);
  struct std___Rb_tree_const_iterator_int_ t748 = __retval745;
  return t748;
}

// function: _ZNKSt8multisetIiSt4lessIiESaIiEE3endEv
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____end___const(struct std__multiset_int__std__less_int___std__allocator_int__* v749) {
bb750:
  struct std__multiset_int__std__less_int___std__allocator_int__* this751;
  struct std___Rb_tree_const_iterator_int_ __retval752;
  this751 = v749;
  struct std__multiset_int__std__less_int___std__allocator_int__* t753 = this751;
  struct std___Rb_tree_const_iterator_int_ r754 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(&t753->_M_t);
  __retval752 = r754;
  struct std___Rb_tree_const_iterator_int_ t755 = __retval752;
  return t755;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v756, void* v757) {
bb758:
  struct std__basic_ostream_char__std__char_traits_char__* this759;
  void* __pf760;
  struct std__basic_ostream_char__std__char_traits_char__* __retval761;
  this759 = v756;
  __pf760 = v757;
  struct std__basic_ostream_char__std__char_traits_char__* t762 = this759;
  void* t763 = __pf760;
  struct std__basic_ostream_char__std__char_traits_char__* r764 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t763)(t762);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval761 = r764;
  struct std__basic_ostream_char__std__char_traits_char__* t765 = __retval761;
  return t765;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v766) {
bb767:
  struct std__basic_ostream_char__std__char_traits_char__* __os768;
  struct std__basic_ostream_char__std__char_traits_char__* __retval769;
  __os768 = v766;
  struct std__basic_ostream_char__std__char_traits_char__* t770 = __os768;
  struct std__basic_ostream_char__std__char_traits_char__* r771 = std__ostream__flush(t770);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval769 = r771;
  struct std__basic_ostream_char__std__char_traits_char__* t772 = __retval769;
  return t772;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v773) {
bb774:
  struct std__ctype_char_* __f775;
  struct std__ctype_char_* __retval776;
  __f775 = v773;
    struct std__ctype_char_* t777 = __f775;
    _Bool cast778 = (_Bool)t777;
    _Bool u779 = !cast778;
    if (u779) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t780 = __f775;
  __retval776 = t780;
  struct std__ctype_char_* t781 = __retval776;
  return t781;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v782, char v783) {
bb784:
  struct std__ctype_char_* this785;
  char __c786;
  char __retval787;
  this785 = v782;
  __c786 = v783;
  struct std__ctype_char_* t788 = this785;
    char t789 = t788->_M_widen_ok;
    _Bool cast790 = (_Bool)t789;
    if (cast790) {
      char t791 = __c786;
      unsigned char cast792 = (unsigned char)t791;
      unsigned long cast793 = (unsigned long)cast792;
      char t794 = t788->_M_widen[cast793];
      __retval787 = t794;
      char t795 = __retval787;
      return t795;
    }
  std__ctype_char____M_widen_init___const(t788);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t796 = __c786;
  void** v797 = (void**)t788;
  void* v798 = *((void**)v797);
  char vcall801 = (char)__VERIFIER_virtual_call_char_char(t788, 6, t796);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval787 = vcall801;
  char t802 = __retval787;
  return t802;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v803, char v804) {
bb805:
  struct std__basic_ios_char__std__char_traits_char__* this806;
  char __c807;
  char __retval808;
  this806 = v803;
  __c807 = v804;
  struct std__basic_ios_char__std__char_traits_char__* t809 = this806;
  struct std__ctype_char_* t810 = t809->_M_ctype;
  struct std__ctype_char_* r811 = std__ctype_char__const__std____check_facet_std__ctype_char___(t810);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t812 = __c807;
  char r813 = std__ctype_char___widen_char__const(r811, t812);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval808 = r813;
  char t814 = __retval808;
  return t814;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v815) {
bb816:
  struct std__basic_ostream_char__std__char_traits_char__* __os817;
  struct std__basic_ostream_char__std__char_traits_char__* __retval818;
  __os817 = v815;
  struct std__basic_ostream_char__std__char_traits_char__* t819 = __os817;
  struct std__basic_ostream_char__std__char_traits_char__* t820 = __os817;
  void** v821 = (void**)t820;
  void* v822 = *((void**)v821);
  unsigned char* cast823 = (unsigned char*)v822;
  long c824 = -24;
  unsigned char* ptr825 = &(cast823)[c824];
  long* cast826 = (long*)ptr825;
  long t827 = *cast826;
  unsigned char* cast828 = (unsigned char*)t820;
  unsigned char* ptr829 = &(cast828)[t827];
  struct std__basic_ostream_char__std__char_traits_char__* cast830 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr829;
  struct std__basic_ios_char__std__char_traits_char__* cast831 = (struct std__basic_ios_char__std__char_traits_char__*)cast830;
  char c832 = 10;
  char r833 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast831, c832);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r834 = std__ostream__put(t819, r833);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r835 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r834);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval818 = r835;
  struct std__basic_ostream_char__std__char_traits_char__* t836 = __retval818;
  return t836;
}

// function: _ZNSt8multisetIiSt4lessIiESaIiEED2Ev
void std__multiset_int__std__less_int___std__allocator_int______multiset(struct std__multiset_int__std__less_int___std__allocator_int__* v837) {
bb838:
  struct std__multiset_int__std__less_int___std__allocator_int__* this839;
  this839 = v837;
  struct std__multiset_int__std__less_int___std__allocator_int__* t840 = this839;
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(&t840->_M_t);
  }
  return;
}

// function: main
int main() {
bb841:
  int __retval842;
  struct std__multiset_int__std__less_int___std__allocator_int__ myset843;
  struct std___Rb_tree_const_iterator_int_ it844;
  int i845;
  struct std___Rb_tree_const_iterator_int_ ref_tmp1846;
  int ref_tmp2847;
  struct std___Rb_tree_const_iterator_int_ agg_tmp1848;
  struct std___Rb_tree_const_iterator_int_ agg_tmp2849;
  struct std___Rb_tree_const_iterator_int_ agg_tmp3850;
  int ref_tmp3851;
  struct std___Rb_tree_const_iterator_int_ agg_tmp4852;
  struct std___Rb_tree_const_iterator_int_ ref_tmp4853;
  struct std___Rb_tree_const_iterator_int_ agg_tmp5854;
  struct std___Rb_tree_const_iterator_int_ agg_tmp6855;
  int c856 = 0;
  __retval842 = c856;
  std__multiset_int__std__less_int___std__allocator_int_____multiset(&myset843);
    std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(&it844);
    unsigned long r857 = std__multiset_int__std__less_int___std__allocator_int_____size___const(&myset843);
    unsigned long c858 = 0;
    _Bool c859 = ((r857 == c858)) ? 1 : 0;
    if (c859) {
    } else {
      char* cast860 = (char*)&(_str);
      char* c861 = _str_1;
      unsigned int c862 = 18;
      char* cast863 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast860, c861, c862, cast863);
    }
      int ref_tmp0864;
      struct std___Rb_tree_const_iterator_int_ agg_tmp0865;
      int c866 = 1;
      i845 = c866;
      while (1) {
        int t868 = i845;
        int c869 = 5;
        _Bool c870 = ((t868 <= c869)) ? 1 : 0;
        if (!c870) break;
        int t871 = i845;
        int c872 = 10;
        int b873 = t871 * c872;
        ref_tmp0864 = b873;
        struct std___Rb_tree_const_iterator_int_ r874 = std__multiset_int__std__less_int___std__allocator_int_____insert(&myset843, &ref_tmp0864);
        if (__cir_exc_active) {
          {
            std__multiset_int__std__less_int___std__allocator_int______multiset(&myset843);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        agg_tmp0865 = r874;
      for_step867: ;
        int t875 = i845;
        int u876 = t875 + 1;
        i845 = u876;
      }
    unsigned long r877 = std__multiset_int__std__less_int___std__allocator_int_____size___const(&myset843);
    unsigned long c878 = 5;
    _Bool c879 = ((r877 == c878)) ? 1 : 0;
    if (c879) {
    } else {
      char* cast880 = (char*)&(_str_2);
      char* c881 = _str_1;
      unsigned int c882 = 21;
      char* cast883 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast880, c881, c882, cast883);
    }
    int c884 = 20;
    ref_tmp2847 = c884;
    struct std___Rb_tree_const_iterator_int_ r885 = std__multiset_int__std__less_int___std__allocator_int_____find(&myset843, &ref_tmp2847);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset843);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    ref_tmp1846 = r885;
    struct std___Rb_tree_const_iterator_int_* r886 = std___Rb_tree_const_iterator_int___operator_(&it844, &ref_tmp1846);
    int* r887 = std___Rb_tree_const_iterator_int___operator____const(&it844);
    int t888 = *r887;
    int c889 = 20;
    _Bool c890 = ((t888 == c889)) ? 1 : 0;
    if (c890) {
    } else {
      char* cast891 = (char*)&(_str_3);
      char* c892 = _str_1;
      unsigned int c893 = 23;
      char* cast894 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast891, c892, c893, cast894);
    }
    agg_tmp1848 = it844; // copy
    struct std___Rb_tree_const_iterator_int_ t895 = agg_tmp1848;
    struct std___Rb_tree_const_iterator_int_ r896 = std__multiset_int__std__less_int___std__allocator_int_____erase_abi_cxx11_(&myset843, t895);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset843);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp2849 = r896;
    int c897 = 40;
    ref_tmp3851 = c897;
    struct std___Rb_tree_const_iterator_int_ r898 = std__multiset_int__std__less_int___std__allocator_int_____find(&myset843, &ref_tmp3851);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset843);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp3850 = r898;
    struct std___Rb_tree_const_iterator_int_ t899 = agg_tmp3850;
    struct std___Rb_tree_const_iterator_int_ r900 = std__multiset_int__std__less_int___std__allocator_int_____erase_abi_cxx11_(&myset843, t899);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset843);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp4852 = r900;
    struct std___Rb_tree_const_iterator_int_ r901 = std__multiset_int__std__less_int___std__allocator_int_____begin___const(&myset843);
    ref_tmp4853 = r901;
    struct std___Rb_tree_const_iterator_int_* r902 = std___Rb_tree_const_iterator_int___operator_(&it844, &ref_tmp4853);
    int c903 = 0;
    struct std___Rb_tree_const_iterator_int_ r904 = std___Rb_tree_const_iterator_int___operator__(&it844, c903);
    agg_tmp5854 = r904;
    int c905 = 0;
    struct std___Rb_tree_const_iterator_int_ r906 = std___Rb_tree_const_iterator_int___operator__(&it844, c905);
    agg_tmp6855 = r906;
    int* r907 = std___Rb_tree_const_iterator_int___operator____const(&it844);
    int t908 = *r907;
    int c909 = 50;
    _Bool c910 = ((t908 == c909)) ? 1 : 0;
    if (c910) {
    } else {
      char* cast911 = (char*)&(_str_4);
      char* c912 = _str_1;
      unsigned int c913 = 28;
      char* cast914 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast911, c912, c913, cast914);
    }
    char* cast915 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* r916 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast915);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset843);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      struct std___Rb_tree_const_iterator_int_ ref_tmp5917;
      struct std___Rb_tree_const_iterator_int_ ref_tmp6918;
      struct std___Rb_tree_const_iterator_int_ agg_tmp7919;
      struct std___Rb_tree_const_iterator_int_ r920 = std__multiset_int__std__less_int___std__allocator_int_____begin___const(&myset843);
      ref_tmp5917 = r920;
      struct std___Rb_tree_const_iterator_int_* r921 = std___Rb_tree_const_iterator_int___operator_(&it844, &ref_tmp5917);
      while (1) {
        struct std___Rb_tree_const_iterator_int_ r923 = std__multiset_int__std__less_int___std__allocator_int_____end___const(&myset843);
        ref_tmp6918 = r923;
        _Bool r924 = std__operator___2(&it844, &ref_tmp6918);
        _Bool u925 = !r924;
        if (!u925) break;
        char* cast926 = (char*)&(_str_6);
        struct std__basic_ostream_char__std__char_traits_char__* r927 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast926);
        if (__cir_exc_active) {
          {
            std__multiset_int__std__less_int___std__allocator_int______multiset(&myset843);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        int* r928 = std___Rb_tree_const_iterator_int___operator____const(&it844);
        int t929 = *r928;
        struct std__basic_ostream_char__std__char_traits_char__* r930 = std__ostream__operator__(r927, t929);
        if (__cir_exc_active) {
          {
            std__multiset_int__std__less_int___std__allocator_int______multiset(&myset843);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
      for_step922: ;
        int c931 = 0;
        struct std___Rb_tree_const_iterator_int_ r932 = std___Rb_tree_const_iterator_int___operator__(&it844, c931);
        agg_tmp7919 = r932;
      }
    struct std__basic_ostream_char__std__char_traits_char__* r933 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset843);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c934 = 0;
    __retval842 = c934;
    int t935 = __retval842;
    int ret_val936 = t935;
    {
      std__multiset_int__std__less_int___std__allocator_int______multiset(&myset843);
    }
    return ret_val936;
  int t937 = __retval842;
  return t937;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v938) {
bb939:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this940;
  this940 = v938;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t941 = this940;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(&t941->_M_impl);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v942) {
bb943:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this944;
  this944 = v942;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t945 = this944;
    struct std___Rb_tree_node_int_* r946 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(t945);
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t945, r946);
    if (__cir_exc_active) {
      {
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t945->_M_impl);
      }
      return;
    }
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t945->_M_impl);
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v947) {
bb948:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this949;
  this949 = v947;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t950 = this949;
  struct std__allocator_std___Rb_tree_node_int__* base951 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t950 + 0);
  std__allocator_std___Rb_tree_node_int_____allocator(base951);
    struct std___Rb_tree_key_compare_std__less_int__* base952 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)t950 + 0);
    std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(base952);
    struct std___Rb_tree_header* base953 = (struct std___Rb_tree_header*)((char *)t950 + 8);
    std___Rb_tree_header___Rb_tree_header(base953);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v954) {
bb955:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this956;
  this956 = v954;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t957 = this956;
  {
    struct std__allocator_std___Rb_tree_node_int__* base958 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t957 + 0);
    std__allocator_std___Rb_tree_node_int______allocator(base958);
  }
  return;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEEC2Ev
void std____new_allocator_std___Rb_tree_node_int_______new_allocator(struct std____new_allocator_std___Rb_tree_node_int__* v959) {
bb960:
  struct std____new_allocator_std___Rb_tree_node_int__* this961;
  this961 = v959;
  struct std____new_allocator_std___Rb_tree_node_int__* t962 = this961;
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEEC2Ev
void std__allocator_std___Rb_tree_node_int_____allocator(struct std__allocator_std___Rb_tree_node_int__* v963) {
bb964:
  struct std__allocator_std___Rb_tree_node_int__* this965;
  this965 = v963;
  struct std__allocator_std___Rb_tree_node_int__* t966 = this965;
  struct std____new_allocator_std___Rb_tree_node_int__* base967 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t966 + 0);
  std____new_allocator_std___Rb_tree_node_int_______new_allocator(base967);
  return;
}

// function: _ZNSt20_Rb_tree_key_compareISt4lessIiEEC2Ev
void std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(struct std___Rb_tree_key_compare_std__less_int__* v968) {
bb969:
  struct std___Rb_tree_key_compare_std__less_int__* this970;
  this970 = v968;
  return;
}

// function: _ZNSt15_Rb_tree_header8_M_resetEv
void std___Rb_tree_header___M_reset(struct std___Rb_tree_header* v971) {
bb972:
  struct std___Rb_tree_header* this973;
  this973 = v971;
  struct std___Rb_tree_header* t974 = this973;
  struct std___Rb_tree_node_base* c975 = ((void*)0);
  t974->_M_header._M_parent = c975;
  t974->_M_header._M_left = &t974->_M_header;
  t974->_M_header._M_right = &t974->_M_header;
  unsigned long c976 = 0;
  t974->_M_node_count = c976;
  return;
}

// function: _ZNSt15_Rb_tree_headerC2Ev
void std___Rb_tree_header___Rb_tree_header(struct std___Rb_tree_header* v977) {
bb978:
  struct std___Rb_tree_header* this979;
  this979 = v977;
  struct std___Rb_tree_header* t980 = this979;
  unsigned int c981 = 0;
  t980->_M_header._M_color = c981;
  std___Rb_tree_header___M_reset(t980);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEED2Ev
void std__allocator_std___Rb_tree_node_int______allocator(struct std__allocator_std___Rb_tree_node_int__* v982) {
bb983:
  struct std__allocator_std___Rb_tree_node_int__* this984;
  this984 = v982;
  struct std__allocator_std___Rb_tree_node_int__* t985 = this984;
  return;
}

// function: _ZNSt13_Rb_tree_nodeIiE11_M_node_ptrEv
struct std___Rb_tree_node_int_* std___Rb_tree_node_int____M_node_ptr(struct std___Rb_tree_node_int_* v986) {
bb987:
  struct std___Rb_tree_node_int_* this988;
  struct std___Rb_tree_node_int_* __retval989;
  this988 = v986;
  struct std___Rb_tree_node_int_* t990 = this988;
  __retval989 = t990;
  struct std___Rb_tree_node_int_* t991 = __retval989;
  return t991;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(struct std___Rb_tree_node_int_* v992) {
bb993:
  struct std___Rb_tree_node_int_* __x994;
  struct std___Rb_tree_node_int_* __retval995;
  __x994 = v992;
  struct std___Rb_tree_node_int_* t996 = __x994;
  struct std___Rb_tree_node_base* base997 = (struct std___Rb_tree_node_base*)((char *)t996 + 0);
  struct std___Rb_tree_node_base* t998 = base997->_M_right;
  _Bool cast999 = (_Bool)t998;
  struct std___Rb_tree_node_int_* ternary1000;
  if (cast999) {
    struct std___Rb_tree_node_int_* t1001 = __x994;
    struct std___Rb_tree_node_base* base1002 = (struct std___Rb_tree_node_base*)((char *)t1001 + 0);
    struct std___Rb_tree_node_base* t1003 = base1002->_M_right;
    struct std___Rb_tree_node_int_* derived1004 = (struct std___Rb_tree_node_int_*)((char *)t1003 - 0);
    struct std___Rb_tree_node_int_* r1005 = std___Rb_tree_node_int____M_node_ptr(derived1004);
    ternary1000 = (struct std___Rb_tree_node_int_*)r1005;
  } else {
    struct std___Rb_tree_node_int_* c1006 = ((void*)0);
    ternary1000 = (struct std___Rb_tree_node_int_*)c1006;
  }
  __retval995 = ternary1000;
  struct std___Rb_tree_node_int_* t1007 = __retval995;
  return t1007;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(struct std___Rb_tree_node_int_* v1008) {
bb1009:
  struct std___Rb_tree_node_int_* __x1010;
  struct std___Rb_tree_node_int_* __retval1011;
  __x1010 = v1008;
  struct std___Rb_tree_node_int_* t1012 = __x1010;
  struct std___Rb_tree_node_base* base1013 = (struct std___Rb_tree_node_base*)((char *)t1012 + 0);
  struct std___Rb_tree_node_base* t1014 = base1013->_M_left;
  _Bool cast1015 = (_Bool)t1014;
  struct std___Rb_tree_node_int_* ternary1016;
  if (cast1015) {
    struct std___Rb_tree_node_int_* t1017 = __x1010;
    struct std___Rb_tree_node_base* base1018 = (struct std___Rb_tree_node_base*)((char *)t1017 + 0);
    struct std___Rb_tree_node_base* t1019 = base1018->_M_left;
    struct std___Rb_tree_node_int_* derived1020 = (struct std___Rb_tree_node_int_*)((char *)t1019 - 0);
    struct std___Rb_tree_node_int_* r1021 = std___Rb_tree_node_int____M_node_ptr(derived1020);
    ternary1016 = (struct std___Rb_tree_node_int_*)r1021;
  } else {
    struct std___Rb_tree_node_int_* c1022 = ((void*)0);
    ternary1016 = (struct std___Rb_tree_node_int_*)c1022;
  }
  __retval1011 = ternary1016;
  struct std___Rb_tree_node_int_* t1023 = __retval1011;
  return t1023;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1024) {
bb1025:
  int* __location1026;
  __location1026 = v1024;
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(struct std__allocator_std___Rb_tree_node_int__* v1027, int* v1028) {
bb1029:
  struct std__allocator_std___Rb_tree_node_int__* __a1030;
  int* __p1031;
  __a1030 = v1027;
  __p1031 = v1028;
  int* t1032 = __p1031;
  void_std__destroy_at_int_(t1032);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___Rb_tree_node_int__* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1033) {
bb1034:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1035;
  struct std__allocator_std___Rb_tree_node_int__* __retval1036;
  this1035 = v1033;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1037 = this1035;
  struct std__allocator_std___Rb_tree_node_int__* base1038 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)&(t1037->_M_impl) + 0);
  __retval1036 = base1038;
  struct std__allocator_std___Rb_tree_node_int__* t1039 = __retval1036;
  return t1039;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v1040) {
bb1041:
  struct __gnu_cxx____aligned_membuf_int_* this1042;
  void* __retval1043;
  this1042 = v1040;
  struct __gnu_cxx____aligned_membuf_int_* t1044 = this1042;
  void* cast1045 = (void*)&(t1044->_M_storage);
  __retval1043 = cast1045;
  void* t1046 = __retval1043;
  return t1046;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v1047) {
bb1048:
  struct __gnu_cxx____aligned_membuf_int_* this1049;
  int* __retval1050;
  this1049 = v1047;
  struct __gnu_cxx____aligned_membuf_int_* t1051 = this1049;
  void* r1052 = __gnu_cxx____aligned_membuf_int____M_addr(t1051);
  int* cast1053 = (int*)r1052;
  __retval1050 = cast1053;
  int* t1054 = __retval1050;
  return t1054;
}

// function: _ZNSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr(struct std___Rb_tree_node_int_* v1055) {
bb1056:
  struct std___Rb_tree_node_int_* this1057;
  int* __retval1058;
  this1057 = v1055;
  struct std___Rb_tree_node_int_* t1059 = this1057;
  int* r1060 = __gnu_cxx____aligned_membuf_int____M_ptr(&t1059->_M_storage);
  __retval1058 = r1060;
  int* t1061 = __retval1058;
  return t1061;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_destroy_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1062, struct std___Rb_tree_node_int_* v1063) {
bb1064:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1065;
  struct std___Rb_tree_node_int_* __p1066;
  this1065 = v1062;
  __p1066 = v1063;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1067 = this1065;
  struct std__allocator_std___Rb_tree_node_int__* r1068 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t1067);
  struct std___Rb_tree_node_int_* t1069 = __p1066;
  int* r1070 = std___Rb_tree_node_int____M_valptr(t1069);
  if (__cir_exc_active) {
    return;
  }
  void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(r1068, r1070);
  struct std___Rb_tree_node_int_* t1071 = __p1066;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1072:
  _Bool __retval1073;
    _Bool c1074 = 0;
    __retval1073 = c1074;
    _Bool t1075 = __retval1073;
    return t1075;
  abort();
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___Rb_tree_node_int_____deallocate(struct std____new_allocator_std___Rb_tree_node_int__* v1076, struct std___Rb_tree_node_int_* v1077, unsigned long v1078) {
bb1079:
  struct std____new_allocator_std___Rb_tree_node_int__* this1080;
  struct std___Rb_tree_node_int_* __p1081;
  unsigned long __n1082;
  this1080 = v1076;
  __p1081 = v1077;
  __n1082 = v1078;
  struct std____new_allocator_std___Rb_tree_node_int__* t1083 = this1080;
    unsigned long c1084 = 8;
    unsigned long c1085 = 16;
    _Bool c1086 = ((c1084 > c1085)) ? 1 : 0;
    if (c1086) {
      struct std___Rb_tree_node_int_* t1087 = __p1081;
      void* cast1088 = (void*)t1087;
      unsigned long t1089 = __n1082;
      unsigned long c1090 = 40;
      unsigned long b1091 = t1089 * c1090;
      unsigned long c1092 = 8;
      operator_delete_3(cast1088, b1091, c1092);
      return;
    }
  struct std___Rb_tree_node_int_* t1093 = __p1081;
  void* cast1094 = (void*)t1093;
  unsigned long t1095 = __n1082;
  unsigned long c1096 = 40;
  unsigned long b1097 = t1095 * c1096;
  operator_delete_2(cast1094, b1097);
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE10deallocateEPS0_m
void std__allocator_std___Rb_tree_node_int_____deallocate(struct std__allocator_std___Rb_tree_node_int__* v1098, struct std___Rb_tree_node_int_* v1099, unsigned long v1100) {
bb1101:
  struct std__allocator_std___Rb_tree_node_int__* this1102;
  struct std___Rb_tree_node_int_* __p1103;
  unsigned long __n1104;
  this1102 = v1098;
  __p1103 = v1099;
  __n1104 = v1100;
  struct std__allocator_std___Rb_tree_node_int__* t1105 = this1102;
    _Bool r1106 = std____is_constant_evaluated();
    if (r1106) {
      struct std___Rb_tree_node_int_* t1107 = __p1103;
      void* cast1108 = (void*)t1107;
      operator_delete(cast1108);
      return;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base1109 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t1105 + 0);
  struct std___Rb_tree_node_int_* t1110 = __p1103;
  unsigned long t1111 = __n1104;
  std____new_allocator_std___Rb_tree_node_int_____deallocate(base1109, t1110, t1111);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(struct std__allocator_std___Rb_tree_node_int__* v1112, struct std___Rb_tree_node_int_* v1113, unsigned long v1114) {
bb1115:
  struct std__allocator_std___Rb_tree_node_int__* __a1116;
  struct std___Rb_tree_node_int_* __p1117;
  unsigned long __n1118;
  __a1116 = v1112;
  __p1117 = v1113;
  __n1118 = v1114;
  struct std__allocator_std___Rb_tree_node_int__* t1119 = __a1116;
  struct std___Rb_tree_node_int_* t1120 = __p1117;
  unsigned long t1121 = __n1118;
  std__allocator_std___Rb_tree_node_int_____deallocate(t1119, t1120, t1121);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_put_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1122, struct std___Rb_tree_node_int_* v1123) {
bb1124:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1125;
  struct std___Rb_tree_node_int_* __p1126;
  this1125 = v1122;
  __p1126 = v1123;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1127 = this1125;
  struct std__allocator_std___Rb_tree_node_int__* r1128 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t1127);
  struct std___Rb_tree_node_int_* t1129 = __p1126;
  unsigned long c1130 = 1;
  std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(r1128, t1129, c1130);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_drop_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1131, struct std___Rb_tree_node_int_* v1132) {
bb1133:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1134;
  struct std___Rb_tree_node_int_* __p1135;
  this1134 = v1131;
  __p1135 = v1132;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1136 = this1134;
  struct std___Rb_tree_node_int_* t1137 = __p1135;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(t1136, t1137);
  struct std___Rb_tree_node_int_* t1138 = __p1135;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t1136, t1138);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1139, struct std___Rb_tree_node_int_* v1140) {
bb1141:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1142;
  struct std___Rb_tree_node_int_* __x1143;
  this1142 = v1139;
  __x1143 = v1140;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1144 = this1142;
    while (1) {
      struct std___Rb_tree_node_int_* t1145 = __x1143;
      _Bool cast1146 = (_Bool)t1145;
      if (!cast1146) break;
        struct std___Rb_tree_node_int_* __y1147;
        struct std___Rb_tree_node_int_* t1148 = __x1143;
        struct std___Rb_tree_node_int_* r1149 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(t1148);
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t1144, r1149);
        if (__cir_exc_active) {
          return;
        }
        struct std___Rb_tree_node_int_* t1150 = __x1143;
        struct std___Rb_tree_node_int_* r1151 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(t1150);
        if (__cir_exc_active) {
          return;
        }
        __y1147 = r1151;
        struct std___Rb_tree_node_int_* t1152 = __x1143;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(t1144, t1152);
        struct std___Rb_tree_node_int_* t1153 = __y1147;
        __x1143 = t1153;
    }
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_M_begin_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1154) {
bb1155:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1156;
  struct std___Rb_tree_node_int_* __retval1157;
  struct std___Rb_tree_node_base* __begin1158;
  this1156 = v1154;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1159 = this1156;
  struct std___Rb_tree_header* base1160 = (struct std___Rb_tree_header*)((char *)&(t1159->_M_impl) + 8);
  struct std___Rb_tree_node_base* t1161 = base1160->_M_header._M_parent;
  __begin1158 = t1161;
  struct std___Rb_tree_node_base* t1162 = __begin1158;
  _Bool cast1163 = (_Bool)t1162;
  struct std___Rb_tree_node_int_* ternary1164;
  if (cast1163) {
    struct std___Rb_tree_node_base* t1165 = __begin1158;
    struct std___Rb_tree_node_int_* derived1166 = (struct std___Rb_tree_node_int_*)((char *)t1165 - 0);
    struct std___Rb_tree_node_int_* r1167 = std___Rb_tree_node_int____M_node_ptr(derived1166);
    ternary1164 = (struct std___Rb_tree_node_int_*)r1167;
  } else {
    struct std___Rb_tree_node_int_* c1168 = ((void*)0);
    ternary1164 = (struct std___Rb_tree_node_int_*)c1168;
  }
  __retval1157 = ternary1164;
  struct std___Rb_tree_node_int_* t1169 = __retval1157;
  return t1169;
}

