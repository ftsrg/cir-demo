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
char _str[18] = "myset.size() == 3";
char _str_1[111] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/multiset/multiset-empty/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[10] = "*it == 10";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[16] = "myset contains:";
char _str_4[2] = " ";
char _str_5[29] = "myset.begin() == myset.end()";
char _str_6[18] = "myset.size() == 0";
char _str_7[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_tree.h";
char __PRETTY_FUNCTION____ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5eraseB5cxx11ESt23_Rb_tree_const_iteratorIiE[210] = "iterator std::_Rb_tree<int, int, std::_Identity<int>, std::less<int>>::erase(const_iterator) [_Key = int, _Val = int, _KeyOfValue = std::_Identity<int>, _Compare = std::less<int>, _Alloc = std::allocator<int>]";
char _str_8[20] = "__position != end()";
void std__multiset_int__std__less_int___std__allocator_int_____multiset(struct std__multiset_int__std__less_int___std__allocator_int__* p0);
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
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_node_base* p1);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____begin___const(struct std__multiset_int__std__less_int___std__allocator_int__* p0);
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* p0);
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
_Bool std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____empty___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
_Bool std__multiset_int__std__less_int___std__allocator_int_____empty___const(struct std__multiset_int__std__less_int___std__allocator_int__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
extern struct std___Rb_tree_node_base* std___Rb_tree_increment(struct std___Rb_tree_node_base* p0);
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* p0);
extern struct std___Rb_tree_node_base* std___Rb_tree_rebalance_for_erase(struct std___Rb_tree_node_base* p0, struct std___Rb_tree_node_base* p1);
struct std___Rb_tree_node_base* std____rb_tree___Node_traits_int__int_____S_rebalance_for_erase(struct std___Rb_tree_node_base* p0, struct std___Rb_tree_node_base* p1);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase_abi_cxx11_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1);
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____erase_abi_cxx11_(struct std__multiset_int__std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1);
_Bool std__operator__(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_const_iterator_int_* p1);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____end___const(struct std__multiset_int__std__less_int___std__allocator_int__* p0);
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

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_beginEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v4) {
bb5:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this6;
  struct std___Rb_tree_node_base* __retval7;
  this6 = v4;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t8 = this6;
  struct std___Rb_tree_header* base9 = (struct std___Rb_tree_header*)((char *)&(t8->_M_impl) + 8);
  struct std___Rb_tree_node_base* t10 = base9->_M_header._M_parent;
  __retval7 = t10;
  struct std___Rb_tree_node_base* t11 = __retval7;
  return t11;
}

// function: _ZNKSt18_Rb_tree_node_base11_M_base_ptrEv
struct std___Rb_tree_node_base* std___Rb_tree_node_base___M_base_ptr___const(struct std___Rb_tree_node_base* v12) {
bb13:
  struct std___Rb_tree_node_base* this14;
  struct std___Rb_tree_node_base* __retval15;
  this14 = v12;
  struct std___Rb_tree_node_base* t16 = this14;
  __retval15 = t16;
  struct std___Rb_tree_node_base* t17 = __retval15;
  return t17;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_M_endEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v18) {
bb19:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this20;
  struct std___Rb_tree_node_base* __retval21;
  this20 = v18;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t22 = this20;
  struct std___Rb_tree_header* base23 = (struct std___Rb_tree_header*)((char *)&(t22->_M_impl) + 8);
  struct std___Rb_tree_node_base* r24 = std___Rb_tree_node_base___M_base_ptr___const(&base23->_M_header);
  __retval21 = r24;
  struct std___Rb_tree_node_base* t25 = __retval21;
  return t25;
}

// function: _ZNKSt4lessIiEclERKiS2_
_Bool std__less_int___operator___int_const___int_const___const(struct std__less_int_* v26, int* v27, int* v28) {
bb29:
  struct std__less_int_* this30;
  int* __x31;
  int* __y32;
  _Bool __retval33;
  this30 = v26;
  __x31 = v27;
  __y32 = v28;
  struct std__less_int_* t34 = this30;
  int* t35 = __x31;
  int t36 = *t35;
  int* t37 = __y32;
  int t38 = *t37;
  _Bool c39 = ((t36 < t38)) ? 1 : 0;
  __retval33 = c39;
  _Bool t40 = __retval33;
  return t40;
}

// function: _ZNKSt9_IdentityIiEclERKi
int* std___Identity_int___operator___int_const___const(struct std___Identity_int_* v41, int* v42) {
bb43:
  struct std___Identity_int_* this44;
  int* __x45;
  int* __retval46;
  this44 = v41;
  __x45 = v42;
  struct std___Identity_int_* t47 = this44;
  int* t48 = __x45;
  __retval46 = t48;
  int* t49 = __retval46;
  return t49;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr___const(struct __gnu_cxx____aligned_membuf_int_* v50) {
bb51:
  struct __gnu_cxx____aligned_membuf_int_* this52;
  void* __retval53;
  this52 = v50;
  struct __gnu_cxx____aligned_membuf_int_* t54 = this52;
  void* cast55 = (void*)&(t54->_M_storage);
  __retval53 = cast55;
  void* t56 = __retval53;
  return t56;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr___const(struct __gnu_cxx____aligned_membuf_int_* v57) {
bb58:
  struct __gnu_cxx____aligned_membuf_int_* this59;
  int* __retval60;
  this59 = v57;
  struct __gnu_cxx____aligned_membuf_int_* t61 = this59;
  void* r62 = __gnu_cxx____aligned_membuf_int____M_addr___const(t61);
  int* cast63 = (int*)r62;
  __retval60 = cast63;
  int* t64 = __retval60;
  return t64;
}

// function: _ZNKSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr___const(struct std___Rb_tree_node_int_* v65) {
bb66:
  struct std___Rb_tree_node_int_* this67;
  int* __retval68;
  this67 = v65;
  struct std___Rb_tree_node_int_* t69 = this67;
  int* r70 = __gnu_cxx____aligned_membuf_int____M_ptr___const(&t69->_M_storage);
  __retval68 = r70;
  int* t71 = __retval68;
  return t71;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_S_keyERKSt13_Rb_tree_nodeIiE
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(struct std___Rb_tree_node_int_* v72) {
bb73:
  struct std___Rb_tree_node_int_* __node74;
  int* __retval75;
  struct std___Identity_int_ ref_tmp076;
  __node74 = v72;
  struct std___Rb_tree_node_int_* t77 = __node74;
  int* r78 = std___Rb_tree_node_int____M_valptr___const(t77);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r79 = std___Identity_int___operator___int_const___const(&ref_tmp076, r78);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval75 = r79;
  int* t80 = __retval75;
  return t80;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_S_keyEPSt18_Rb_tree_node_base
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(struct std___Rb_tree_node_base* v81) {
bb82:
  struct std___Rb_tree_node_base* __x83;
  int* __retval84;
  __x83 = v81;
  struct std___Rb_tree_node_base* t85 = __x83;
  struct std___Rb_tree_node_int_* derived86 = (struct std___Rb_tree_node_int_*)((char *)t85 - 0);
  int* r87 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(derived86);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval84 = r87;
  int* t88 = __retval84;
  return t88;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(struct std___Rb_tree_node_base* v89) {
bb90:
  struct std___Rb_tree_node_base* __x91;
  struct std___Rb_tree_node_base* __retval92;
  __x91 = v89;
  struct std___Rb_tree_node_base* t93 = __x91;
  struct std___Rb_tree_node_base* t94 = t93->_M_left;
  __retval92 = t94;
  struct std___Rb_tree_node_base* t95 = __retval92;
  return t95;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(struct std___Rb_tree_node_base* v96) {
bb97:
  struct std___Rb_tree_node_base* __x98;
  struct std___Rb_tree_node_base* __retval99;
  __x98 = v96;
  struct std___Rb_tree_node_base* t100 = __x98;
  struct std___Rb_tree_node_base* t101 = t100->_M_right;
  __retval99 = t101;
  struct std___Rb_tree_node_base* t102 = __retval99;
  return t102;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v103, struct std___Rb_tree_node_base** v104, struct std___Rb_tree_node_base** v105) {
bb106:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this107;
  struct std___Rb_tree_node_base** __x108;
  struct std___Rb_tree_node_base** __y109;
  this107 = v103;
  __x108 = v104;
  __y109 = v105;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t110 = this107;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base111 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t110 + 0);
  struct std___Rb_tree_node_base** t112 = __x108;
  struct std___Rb_tree_node_base* t113 = *t112;
  t110->first = t113;
  struct std___Rb_tree_node_base** t114 = __y109;
  struct std___Rb_tree_node_base* t115 = *t114;
  t110->second = t115;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE23_M_get_insert_equal_posERKi
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_equal_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v116, int* v117) {
bb118:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this119;
  int* __k120;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval121;
  struct std___Rb_tree_node_base* __x122;
  struct std___Rb_tree_node_base* __y123;
  this119 = v116;
  __k120 = v117;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t124 = this119;
  struct std___Rb_tree_node_base* r125 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t124);
  __x122 = r125;
  struct std___Rb_tree_node_base* r126 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t124);
  __y123 = r126;
    while (1) {
      struct std___Rb_tree_node_base* t127 = __x122;
      _Bool cast128 = (_Bool)t127;
      if (!cast128) break;
        struct std___Rb_tree_node_base* t129 = __x122;
        __y123 = t129;
        struct std___Rb_tree_key_compare_std__less_int__* base130 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t124->_M_impl) + 0);
        struct std__less_int_* cast131 = (struct std__less_int_*)base130;
        int* t132 = __k120;
        struct std___Rb_tree_node_base* t133 = __x122;
        int* r134 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t133);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r135 = std__less_int___operator___int_const___int_const___const(cast131, t132, r134);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        struct std___Rb_tree_node_base* ternary136;
        if (r135) {
          struct std___Rb_tree_node_base* t137 = __x122;
          struct std___Rb_tree_node_base* r138 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t137);
          ternary136 = (struct std___Rb_tree_node_base*)r138;
        } else {
          struct std___Rb_tree_node_base* t139 = __x122;
          struct std___Rb_tree_node_base* r140 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t139);
          ternary136 = (struct std___Rb_tree_node_base*)r140;
        }
        __x122 = ternary136;
    }
  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval121, &__x122, &__y123);
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t141 = __retval121;
  return t141;
}

// function: _ZNKSt9_IdentityIiEclERi
int* std___Identity_int___operator___int___const(struct std___Identity_int_* v142, int* v143) {
bb144:
  struct std___Identity_int_* this145;
  int* __x146;
  int* __retval147;
  this145 = v142;
  __x146 = v143;
  struct std___Identity_int_* t148 = this145;
  int* t149 = __x146;
  __retval147 = t149;
  int* t150 = __retval147;
  return t150;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeC2ERS5_
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v151, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v152) {
bb153:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this154;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* __t155;
  this154 = v151;
  __t155 = v152;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t156 = this154;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t157 = __t155;
  t156->_M_t = t157;
  return;
}

// function: _ZNKSt15__new_allocatorISt13_Rb_tree_nodeIiEE11_M_max_sizeEv
unsigned long std____new_allocator_std___Rb_tree_node_int______M_max_size___const(struct std____new_allocator_std___Rb_tree_node_int__* v158) {
bb159:
  struct std____new_allocator_std___Rb_tree_node_int__* this160;
  unsigned long __retval161;
  this160 = v158;
  struct std____new_allocator_std___Rb_tree_node_int__* t162 = this160;
  unsigned long c163 = 9223372036854775807;
  unsigned long c164 = 40;
  unsigned long b165 = c163 / c164;
  __retval161 = b165;
  unsigned long t166 = __retval161;
  return t166;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE8allocateEmPKv
struct std___Rb_tree_node_int_* std____new_allocator_std___Rb_tree_node_int_____allocate(struct std____new_allocator_std___Rb_tree_node_int__* v167, unsigned long v168, void* v169) {
bb170:
  struct std____new_allocator_std___Rb_tree_node_int__* this171;
  unsigned long __n172;
  void* unnamed173;
  struct std___Rb_tree_node_int_* __retval174;
  this171 = v167;
  __n172 = v168;
  unnamed173 = v169;
  struct std____new_allocator_std___Rb_tree_node_int__* t175 = this171;
    unsigned long t176 = __n172;
    unsigned long r177 = std____new_allocator_std___Rb_tree_node_int______M_max_size___const(t175);
    _Bool c178 = ((t176 > r177)) ? 1 : 0;
    if (c178) {
        unsigned long t179 = __n172;
        unsigned long c180 = -1;
        unsigned long c181 = 40;
        unsigned long b182 = c180 / c181;
        _Bool c183 = ((t179 > b182)) ? 1 : 0;
        if (c183) {
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
    unsigned long c184 = 8;
    unsigned long c185 = 16;
    _Bool c186 = ((c184 > c185)) ? 1 : 0;
    if (c186) {
      unsigned long __al187;
      unsigned long c188 = 8;
      __al187 = c188;
      unsigned long t189 = __n172;
      unsigned long c190 = 40;
      unsigned long b191 = t189 * c190;
      unsigned long t192 = __al187;
      void* r193 = operator_new_2(b191, t192);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast194 = (struct std___Rb_tree_node_int_*)r193;
      __retval174 = cast194;
      struct std___Rb_tree_node_int_* t195 = __retval174;
      return t195;
    }
  unsigned long t196 = __n172;
  unsigned long c197 = 40;
  unsigned long b198 = t196 * c197;
  void* r199 = operator_new(b198);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* cast200 = (struct std___Rb_tree_node_int_*)r199;
  __retval174 = cast200;
  struct std___Rb_tree_node_int_* t201 = __retval174;
  return t201;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE8allocateEm
struct std___Rb_tree_node_int_* std__allocator_std___Rb_tree_node_int_____allocate(struct std__allocator_std___Rb_tree_node_int__* v202, unsigned long v203) {
bb204:
  struct std__allocator_std___Rb_tree_node_int__* this205;
  unsigned long __n206;
  struct std___Rb_tree_node_int_* __retval207;
  this205 = v202;
  __n206 = v203;
  struct std__allocator_std___Rb_tree_node_int__* t208 = this205;
    _Bool r209 = std____is_constant_evaluated();
    if (r209) {
        unsigned long t210 = __n206;
        unsigned long c211 = 40;
        unsigned long ovr212;
        _Bool ovf213 = __builtin_mul_overflow(t210, c211, &ovr212);
        __n206 = ovr212;
        if (ovf213) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t214 = __n206;
      void* r215 = operator_new(t214);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast216 = (struct std___Rb_tree_node_int_*)r215;
      __retval207 = cast216;
      struct std___Rb_tree_node_int_* t217 = __retval207;
      return t217;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base218 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t208 + 0);
  unsigned long t219 = __n206;
  void* c220 = ((void*)0);
  struct std___Rb_tree_node_int_* r221 = std____new_allocator_std___Rb_tree_node_int_____allocate(base218, t219, c220);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval207 = r221;
  struct std___Rb_tree_node_int_* t222 = __retval207;
  return t222;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE8allocateERS2_m
struct std___Rb_tree_node_int_* std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(struct std__allocator_std___Rb_tree_node_int__* v223, unsigned long v224) {
bb225:
  struct std__allocator_std___Rb_tree_node_int__* __a226;
  unsigned long __n227;
  struct std___Rb_tree_node_int_* __retval228;
  __a226 = v223;
  __n227 = v224;
  struct std__allocator_std___Rb_tree_node_int__* t229 = __a226;
  unsigned long t230 = __n227;
  struct std___Rb_tree_node_int_* r231 = std__allocator_std___Rb_tree_node_int_____allocate(t229, t230);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval228 = r231;
  struct std___Rb_tree_node_int_* t232 = __retval228;
  return t232;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_get_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v233) {
bb234:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this235;
  struct std___Rb_tree_node_int_* __retval236;
  this235 = v233;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t237 = this235;
  struct std__allocator_std___Rb_tree_node_int__* r238 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t237);
  unsigned long c239 = 1;
  struct std___Rb_tree_node_int_* r240 = std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(r238, c239);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval236 = r240;
  struct std___Rb_tree_node_int_* t241 = __retval236;
  return t241;
}

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v242, int* v243) {
bb244:
  int* __location245;
  int* __args246;
  int* __retval247;
  void* __loc248;
  __location245 = v242;
  __args246 = v243;
  int* t249 = __location245;
  void* cast250 = (void*)t249;
  __loc248 = cast250;
    void* t251 = __loc248;
    int* cast252 = (int*)t251;
    int* t253 = __args246;
    int t254 = *t253;
    *cast252 = t254;
    __retval247 = cast252;
    int* t255 = __retval247;
    return t255;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE9constructIiJiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int_(struct std__allocator_std___Rb_tree_node_int__* v256, int* v257, int* v258) {
bb259:
  struct std__allocator_std___Rb_tree_node_int__* __a260;
  int* __p261;
  int* __args262;
  __a260 = v256;
  __p261 = v257;
  __args262 = v258;
  int* t263 = __p261;
  int* t264 = __args262;
  int* r265 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t263, t264);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE17_M_construct_nodeIJiEEEvPSt13_Rb_tree_nodeIiEDpOT_
void void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v266, struct std___Rb_tree_node_int_* v267, int* v268) {
bb269:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this270;
  struct std___Rb_tree_node_int_* __node271;
  int* __args272;
  this270 = v266;
  __node271 = v267;
  __args272 = v268;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t273 = this270;
      struct std__allocator_std___Rb_tree_node_int__* r275 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t273);
      struct std___Rb_tree_node_int_* t276 = __node271;
      int* r277 = std___Rb_tree_node_int____M_valptr(t276);
      if (__cir_exc_active) {
        goto cir_try_dispatch274;
      }
      int* t278 = __args272;
      void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int_(r275, r277, t278);
    cir_try_dispatch274: ;
    if (__cir_exc_active) {
    {
      int ca_tok279 = 0;
      void* ca_exn280 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Rb_tree_node_int_* t281 = __node271;
        struct std___Rb_tree_node_int_* t282 = __node271;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t273, t282);
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
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v283, int* v284) {
bb285:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this286;
  int* __args287;
  struct std___Rb_tree_node_int_* __retval288;
  struct std___Rb_tree_node_int_* __tmp289;
  this286 = v283;
  __args287 = v284;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t290 = this286;
  struct std___Rb_tree_node_int_* r291 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(t290);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __tmp289 = r291;
  struct std___Rb_tree_node_int_* t292 = __tmp289;
  int* t293 = __args287;
  void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int_(t290, t292, t293);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* t294 = __tmp289;
  __retval288 = t294;
  struct std___Rb_tree_node_int_* t295 = __retval288;
  return t295;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeclIiEEPSt13_Rb_tree_nodeIiEOT_
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int__int____const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v296, int* v297) {
bb298:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this299;
  int* __arg300;
  struct std___Rb_tree_node_int_* __retval301;
  this299 = v296;
  __arg300 = v297;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t302 = this299;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t303 = t302->_M_t;
  int* t304 = __arg300;
  struct std___Rb_tree_node_int_* r305 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int_(t303, t304);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval301 = r305;
  struct std___Rb_tree_node_int_* t306 = __retval301;
  return t306;
}

// function: _ZNSt9__rb_tree12_Node_traitsIiPiE23_S_insert_and_rebalanceEbPSt18_Rb_tree_node_baseS4_RS3_
void std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(_Bool v307, struct std___Rb_tree_node_base* v308, struct std___Rb_tree_node_base* v309, struct std___Rb_tree_node_base* v310) {
bb311:
  _Bool __insert_left312;
  struct std___Rb_tree_node_base* __x313;
  struct std___Rb_tree_node_base* __p314;
  struct std___Rb_tree_node_base* __header315;
  __insert_left312 = v307;
  __x313 = v308;
  __p314 = v309;
  __header315 = v310;
  _Bool t316 = __insert_left312;
  struct std___Rb_tree_node_base* t317 = __x313;
  struct std___Rb_tree_node_base* t318 = __p314;
  struct std___Rb_tree_node_base* t319 = __header315;
  std___Rb_tree_insert_and_rebalance(t316, t317, t318, t319);
  return;
}

// function: _ZNSt17_Rb_tree_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_iterator_int____Rb_tree_iterator(struct std___Rb_tree_iterator_int_* v320, struct std___Rb_tree_node_base* v321) {
bb322:
  struct std___Rb_tree_iterator_int_* this323;
  struct std___Rb_tree_node_base* __x324;
  this323 = v320;
  __x324 = v321;
  struct std___Rb_tree_iterator_int_* t325 = this323;
  struct std___Rb_tree_node_base* t326 = __x324;
  t325->_M_node = t326;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE10_M_insert_IiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiEPSt18_Rb_tree_node_baseSB_OT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v327, struct std___Rb_tree_node_base* v328, struct std___Rb_tree_node_base* v329, int* v330, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v331) {
bb332:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this333;
  struct std___Rb_tree_node_base* __x334;
  struct std___Rb_tree_node_base* __p335;
  int* __v336;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen337;
  struct std___Rb_tree_iterator_int_ __retval338;
  _Bool __insert_left339;
  struct std___Rb_tree_node_base* __z340;
  this333 = v327;
  __x334 = v328;
  __p335 = v329;
  __v336 = v330;
  __node_gen337 = v331;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t341 = this333;
  struct std___Rb_tree_node_base* t342 = __x334;
  _Bool cast343 = (_Bool)t342;
  _Bool ternary344;
  if (cast343) {
    _Bool c345 = 1;
    ternary344 = (_Bool)c345;
  } else {
    struct std___Rb_tree_node_base* t346 = __p335;
    struct std___Rb_tree_node_base* r347 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t341);
    _Bool c348 = ((t346 == r347)) ? 1 : 0;
    ternary344 = (_Bool)c348;
  }
  _Bool ternary349;
  if (ternary344) {
    _Bool c350 = 1;
    ternary349 = (_Bool)c350;
  } else {
    struct std___Identity_int_ ref_tmp0351;
    struct std___Rb_tree_key_compare_std__less_int__* base352 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t341->_M_impl) + 0);
    struct std__less_int_* cast353 = (struct std__less_int_*)base352;
    int* t354 = __v336;
    int* r355 = std___Identity_int___operator___int___const(&ref_tmp0351, t354);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    struct std___Rb_tree_node_base* t356 = __p335;
    int* r357 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t356);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r358 = std__less_int___operator___int_const___int_const___const(cast353, r355, r357);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    ternary349 = (_Bool)r358;
  }
  __insert_left339 = ternary349;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t359 = __node_gen337;
  int* t360 = __v336;
  struct std___Rb_tree_node_int_* r361 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int__int____const(t359, t360);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* base362 = (struct std___Rb_tree_node_base*)((char *)r361 + 0);
  struct std___Rb_tree_node_base* r363 = std___Rb_tree_node_base___M_base_ptr___const(base362);
  __z340 = r363;
  _Bool t364 = __insert_left339;
  struct std___Rb_tree_node_base* t365 = __z340;
  struct std___Rb_tree_node_base* t366 = __p335;
  struct std___Rb_tree_header* base367 = (struct std___Rb_tree_header*)((char *)&(t341->_M_impl) + 8);
  std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(t364, t365, t366, &base367->_M_header);
  struct std___Rb_tree_header* base368 = (struct std___Rb_tree_header*)((char *)&(t341->_M_impl) + 8);
  unsigned long t369 = base368->_M_node_count;
  unsigned long u370 = t369 + 1;
  base368->_M_node_count = u370;
  struct std___Rb_tree_node_base* t371 = __z340;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval338, t371);
  struct std___Rb_tree_iterator_int_ t372 = __retval338;
  return t372;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_insert_equalIiEESt17_Rb_tree_iteratorIiEOT_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v373, int* v374) {
bb375:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this376;
  int* __v377;
  struct std___Rb_tree_iterator_int_ __retval378;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __res379;
  struct std___Identity_int_ ref_tmp0380;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node __an381;
  this376 = v373;
  __v377 = v374;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t382 = this376;
  int* t383 = __v377;
  int* r384 = std___Identity_int___operator___int___const(&ref_tmp0380, t383);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r385 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_equal_pos(t382, r384);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __res379 = r385;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(&__an381, t382);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* t386 = __res379.first;
  struct std___Rb_tree_node_base* t387 = __res379.second;
  int* t388 = __v377;
  struct std___Rb_tree_iterator_int_ r389 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t382, t386, t387, t388, &__an381);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval378 = r389;
  struct std___Rb_tree_iterator_int_ t390 = __retval378;
  return t390;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2ERKSt17_Rb_tree_iteratorIiE
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(struct std___Rb_tree_const_iterator_int_* v391, struct std___Rb_tree_iterator_int_* v392) {
bb393:
  struct std___Rb_tree_const_iterator_int_* this394;
  struct std___Rb_tree_iterator_int_* __it395;
  this394 = v391;
  __it395 = v392;
  struct std___Rb_tree_const_iterator_int_* t396 = this394;
  struct std___Rb_tree_iterator_int_* t397 = __it395;
  struct std___Rb_tree_node_base* t398 = t397->_M_node;
  t396->_M_node = t398;
  return;
}

// function: _ZNSt8multisetIiSt4lessIiESaIiEE6insertEOi
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____insert(struct std__multiset_int__std__less_int___std__allocator_int__* v399, int* v400) {
bb401:
  struct std__multiset_int__std__less_int___std__allocator_int__* this402;
  int* __x403;
  struct std___Rb_tree_const_iterator_int_ __retval404;
  struct std___Rb_tree_iterator_int_ ref_tmp0405;
  this402 = v399;
  __x403 = v400;
  struct std__multiset_int__std__less_int___std__allocator_int__* t406 = this402;
  int* t407 = __x403;
  struct std___Rb_tree_iterator_int_ r408 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_equal_int_(&t406->_M_t, t407);
  if (__cir_exc_active) {
    struct std___Rb_tree_const_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  ref_tmp0405 = r408;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&__retval404, &ref_tmp0405);
  struct std___Rb_tree_const_iterator_int_ t409 = __retval404;
  return t409;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE4sizeEv
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v410) {
bb411:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this412;
  unsigned long __retval413;
  this412 = v410;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t414 = this412;
  struct std___Rb_tree_header* base415 = (struct std___Rb_tree_header*)((char *)&(t414->_M_impl) + 8);
  unsigned long t416 = base415->_M_node_count;
  __retval413 = t416;
  unsigned long t417 = __retval413;
  return t417;
}

// function: _ZNKSt8multisetIiSt4lessIiESaIiEE4sizeEv
unsigned long std__multiset_int__std__less_int___std__allocator_int_____size___const(struct std__multiset_int__std__less_int___std__allocator_int__* v418) {
bb419:
  struct std__multiset_int__std__less_int___std__allocator_int__* this420;
  unsigned long __retval421;
  this420 = v418;
  struct std__multiset_int__std__less_int___std__allocator_int__* t422 = this420;
  unsigned long r423 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(&t422->_M_t);
  __retval421 = r423;
  unsigned long t424 = __retval421;
  return t424;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* v425, struct std___Rb_tree_node_base* v426) {
bb427:
  struct std___Rb_tree_const_iterator_int_* this428;
  struct std___Rb_tree_node_base* __x429;
  this428 = v425;
  __x429 = v426;
  struct std___Rb_tree_const_iterator_int_* t430 = this428;
  struct std___Rb_tree_node_base* t431 = __x429;
  t430->_M_node = t431;
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5beginEv
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v432) {
bb433:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this434;
  struct std___Rb_tree_const_iterator_int_ __retval435;
  this434 = v432;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t436 = this434;
  struct std___Rb_tree_header* base437 = (struct std___Rb_tree_header*)((char *)&(t436->_M_impl) + 8);
  struct std___Rb_tree_node_base* t438 = base437->_M_header._M_left;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval435, t438);
  struct std___Rb_tree_const_iterator_int_ t439 = __retval435;
  return t439;
}

// function: _ZNKSt8multisetIiSt4lessIiESaIiEE5beginEv
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____begin___const(struct std__multiset_int__std__less_int___std__allocator_int__* v440) {
bb441:
  struct std__multiset_int__std__less_int___std__allocator_int__* this442;
  struct std___Rb_tree_const_iterator_int_ __retval443;
  this442 = v440;
  struct std__multiset_int__std__less_int___std__allocator_int__* t444 = this442;
  struct std___Rb_tree_const_iterator_int_ r445 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(&t444->_M_t);
  __retval443 = r445;
  struct std___Rb_tree_const_iterator_int_ t446 = __retval443;
  return t446;
}

// function: _ZNKSt23_Rb_tree_const_iteratorIiEdeEv
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* v447) {
bb448:
  struct std___Rb_tree_const_iterator_int_* this449;
  int* __retval450;
  this449 = v447;
  struct std___Rb_tree_const_iterator_int_* t451 = this449;
  struct std___Rb_tree_node_base* t452 = t451->_M_node;
  struct std___Rb_tree_node_int_* derived453 = ((t452) ? (struct std___Rb_tree_node_int_*)((char *)t452 - 0) : (struct std___Rb_tree_node_int_*)0);
  int* r454 = std___Rb_tree_node_int____M_valptr___const(derived453);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval450 = r454;
  int* t455 = __retval450;
  return t455;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v456, int v457) {
bb458:
  int __a459;
  int __b460;
  int __retval461;
  __a459 = v456;
  __b460 = v457;
  int t462 = __a459;
  int t463 = __b460;
  int b464 = t462 | t463;
  __retval461 = b464;
  int t465 = __retval461;
  return t465;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v466) {
bb467:
  struct std__basic_ios_char__std__char_traits_char__* this468;
  int __retval469;
  this468 = v466;
  struct std__basic_ios_char__std__char_traits_char__* t470 = this468;
  struct std__ios_base* base471 = (struct std__ios_base*)((char *)t470 + 0);
  int t472 = base471->_M_streambuf_state;
  __retval469 = t472;
  int t473 = __retval469;
  return t473;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v474, int v475) {
bb476:
  struct std__basic_ios_char__std__char_traits_char__* this477;
  int __state478;
  this477 = v474;
  __state478 = v475;
  struct std__basic_ios_char__std__char_traits_char__* t479 = this477;
  int r480 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t479);
  if (__cir_exc_active) {
    return;
  }
  int t481 = __state478;
  int r482 = std__operator_(r480, t481);
  std__basic_ios_char__std__char_traits_char_____clear(t479, r482);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v483, char* v484) {
bb485:
  char* __c1486;
  char* __c2487;
  _Bool __retval488;
  __c1486 = v483;
  __c2487 = v484;
  char* t489 = __c1486;
  char t490 = *t489;
  int cast491 = (int)t490;
  char* t492 = __c2487;
  char t493 = *t492;
  int cast494 = (int)t493;
  _Bool c495 = ((cast491 == cast494)) ? 1 : 0;
  __retval488 = c495;
  _Bool t496 = __retval488;
  return t496;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v497) {
bb498:
  char* __p499;
  unsigned long __retval500;
  unsigned long __i501;
  __p499 = v497;
  unsigned long c502 = 0;
  __i501 = c502;
    char ref_tmp0503;
    while (1) {
      unsigned long t504 = __i501;
      char* t505 = __p499;
      char* ptr506 = &(t505)[t504];
      char c507 = 0;
      ref_tmp0503 = c507;
      _Bool r508 = __gnu_cxx__char_traits_char___eq(ptr506, &ref_tmp0503);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u509 = !r508;
      if (!u509) break;
      unsigned long t510 = __i501;
      unsigned long u511 = t510 + 1;
      __i501 = u511;
    }
  unsigned long t512 = __i501;
  __retval500 = t512;
  unsigned long t513 = __retval500;
  return t513;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v514) {
bb515:
  char* __s516;
  unsigned long __retval517;
  __s516 = v514;
    _Bool r518 = std____is_constant_evaluated();
    if (r518) {
      char* t519 = __s516;
      unsigned long r520 = __gnu_cxx__char_traits_char___length(t519);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval517 = r520;
      unsigned long t521 = __retval517;
      return t521;
    }
  char* t522 = __s516;
  unsigned long r523 = strlen(t522);
  __retval517 = r523;
  unsigned long t524 = __retval517;
  return t524;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v525, char* v526) {
bb527:
  struct std__basic_ostream_char__std__char_traits_char__* __out528;
  char* __s529;
  struct std__basic_ostream_char__std__char_traits_char__* __retval530;
  __out528 = v525;
  __s529 = v526;
    char* t531 = __s529;
    _Bool cast532 = (_Bool)t531;
    _Bool u533 = !cast532;
    if (u533) {
      struct std__basic_ostream_char__std__char_traits_char__* t534 = __out528;
      void** v535 = (void**)t534;
      void* v536 = *((void**)v535);
      unsigned char* cast537 = (unsigned char*)v536;
      long c538 = -24;
      unsigned char* ptr539 = &(cast537)[c538];
      long* cast540 = (long*)ptr539;
      long t541 = *cast540;
      unsigned char* cast542 = (unsigned char*)t534;
      unsigned char* ptr543 = &(cast542)[t541];
      struct std__basic_ostream_char__std__char_traits_char__* cast544 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr543;
      struct std__basic_ios_char__std__char_traits_char__* cast545 = (struct std__basic_ios_char__std__char_traits_char__*)cast544;
      int t546 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast545, t546);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t547 = __out528;
      char* t548 = __s529;
      char* t549 = __s529;
      unsigned long r550 = std__char_traits_char___length(t549);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast551 = (long)r550;
      struct std__basic_ostream_char__std__char_traits_char__* r552 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t547, t548, cast551);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t553 = __out528;
  __retval530 = t553;
  struct std__basic_ostream_char__std__char_traits_char__* t554 = __retval530;
  return t554;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5emptyEv
_Bool std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____empty___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v555) {
bb556:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this557;
  _Bool __retval558;
  this557 = v555;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t559 = this557;
  struct std___Rb_tree_header* base560 = (struct std___Rb_tree_header*)((char *)&(t559->_M_impl) + 8);
  unsigned long t561 = base560->_M_node_count;
  unsigned long c562 = 0;
  _Bool c563 = ((t561 == c562)) ? 1 : 0;
  __retval558 = c563;
  _Bool t564 = __retval558;
  return t564;
}

// function: _ZNKSt8multisetIiSt4lessIiESaIiEE5emptyEv
_Bool std__multiset_int__std__less_int___std__allocator_int_____empty___const(struct std__multiset_int__std__less_int___std__allocator_int__* v565) {
bb566:
  struct std__multiset_int__std__less_int___std__allocator_int__* this567;
  _Bool __retval568;
  this567 = v565;
  struct std__multiset_int__std__less_int___std__allocator_int__* t569 = this567;
  _Bool r570 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____empty___const(&t569->_M_t);
  __retval568 = r570;
  _Bool t571 = __retval568;
  return t571;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE3endEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v572) {
bb573:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this574;
  struct std___Rb_tree_iterator_int_ __retval575;
  this574 = v572;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t576 = this574;
  struct std___Rb_tree_node_base* r577 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t576);
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval575, r577);
  struct std___Rb_tree_iterator_int_ t578 = __retval575;
  return t578;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEppEv
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* v579) {
bb580:
  struct std___Rb_tree_const_iterator_int_* this581;
  struct std___Rb_tree_const_iterator_int_* __retval582;
  this581 = v579;
  struct std___Rb_tree_const_iterator_int_* t583 = this581;
  struct std___Rb_tree_node_base* t584 = t583->_M_node;
  struct std___Rb_tree_node_base* r585 = std___Rb_tree_increment(t584);
  t583->_M_node = r585;
  __retval582 = t583;
  struct std___Rb_tree_const_iterator_int_* t586 = __retval582;
  return t586;
}

// function: _ZNSt9__rb_tree12_Node_traitsIiPiE22_S_rebalance_for_eraseEPSt18_Rb_tree_node_baseRS3_
struct std___Rb_tree_node_base* std____rb_tree___Node_traits_int__int_____S_rebalance_for_erase(struct std___Rb_tree_node_base* v587, struct std___Rb_tree_node_base* v588) {
bb589:
  struct std___Rb_tree_node_base* __z590;
  struct std___Rb_tree_node_base* __header591;
  struct std___Rb_tree_node_base* __retval592;
  __z590 = v587;
  __header591 = v588;
  struct std___Rb_tree_node_base* t593 = __z590;
  struct std___Rb_tree_node_base* t594 = __header591;
  struct std___Rb_tree_node_base* r595 = std___Rb_tree_rebalance_for_erase(t593, t594);
  __retval592 = r595;
  struct std___Rb_tree_node_base* t596 = __retval592;
  return t596;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_erase_auxESt23_Rb_tree_const_iteratorIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v597, struct std___Rb_tree_const_iterator_int_ v598) {
bb599:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this600;
  struct std___Rb_tree_const_iterator_int_ __position601;
  struct std___Rb_tree_node_base* __y602;
  this600 = v597;
  __position601 = v598;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t603 = this600;
  struct std___Rb_tree_node_base* t604 = __position601._M_node;
  struct std___Rb_tree_header* base605 = (struct std___Rb_tree_header*)((char *)&(t603->_M_impl) + 8);
  struct std___Rb_tree_node_base* r606 = std____rb_tree___Node_traits_int__int_____S_rebalance_for_erase(t604, &base605->_M_header);
  __y602 = r606;
  struct std___Rb_tree_node_base* t607 = __y602;
  struct std___Rb_tree_node_int_* derived608 = (struct std___Rb_tree_node_int_*)((char *)t607 - 0);
  struct std___Rb_tree_node_int_* r609 = std___Rb_tree_node_int____M_node_ptr(derived608);
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(t603, r609);
  struct std___Rb_tree_header* base610 = (struct std___Rb_tree_header*)((char *)&(t603->_M_impl) + 8);
  unsigned long t611 = base610->_M_node_count;
  unsigned long u612 = t611 - 1;
  base610->_M_node_count = u612;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5eraseB5cxx11ESt23_Rb_tree_const_iteratorIiE
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase_abi_cxx11_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v613, struct std___Rb_tree_const_iterator_int_ v614) {
bb615:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this616;
  struct std___Rb_tree_const_iterator_int_ __position617;
  struct std___Rb_tree_iterator_int_ __retval618;
  struct std___Rb_tree_const_iterator_int_ __result619;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0620;
  this616 = v613;
  __position617 = v614;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t621 = this616;
    do {
          struct std___Rb_tree_const_iterator_int_ ref_tmp0622;
          struct std___Rb_tree_iterator_int_ ref_tmp1623;
          struct std___Rb_tree_iterator_int_ r624 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(t621);
          ref_tmp1623 = r624;
          std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&ref_tmp0622, &ref_tmp1623);
          _Bool r625 = std__operator__(&__position617, &ref_tmp0622);
          if (r625) {
            char* cast626 = (char*)&(_str_7);
            int c627 = 1818;
            char* cast628 = (char*)&(__PRETTY_FUNCTION____ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5eraseB5cxx11ESt23_Rb_tree_const_iteratorIiE);
            char* cast629 = (char*)&(_str_8);
            std____glibcxx_assert_fail(cast626, c627, cast628, cast629);
          }
      _Bool c630 = 0;
      if (!c630) break;
    } while (1);
  __result619 = __position617; // copy
  struct std___Rb_tree_const_iterator_int_* r631 = std___Rb_tree_const_iterator_int___operator__(&__result619);
  agg_tmp0620 = __position617; // copy
  struct std___Rb_tree_const_iterator_int_ t632 = agg_tmp0620;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux(t621, t632);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* t633 = __result619._M_node;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval618, t633);
  struct std___Rb_tree_iterator_int_ t634 = __retval618;
  return t634;
}

// function: _ZNSt8multisetIiSt4lessIiESaIiEE5eraseB5cxx11ESt23_Rb_tree_const_iteratorIiE
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____erase_abi_cxx11_(struct std__multiset_int__std__less_int___std__allocator_int__* v635, struct std___Rb_tree_const_iterator_int_ v636) {
bb637:
  struct std__multiset_int__std__less_int___std__allocator_int__* this638;
  struct std___Rb_tree_const_iterator_int_ __position639;
  struct std___Rb_tree_const_iterator_int_ __retval640;
  struct std___Rb_tree_iterator_int_ ref_tmp0641;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0642;
  this638 = v635;
  __position639 = v636;
  struct std__multiset_int__std__less_int___std__allocator_int__* t643 = this638;
  agg_tmp0642 = __position639; // copy
  struct std___Rb_tree_const_iterator_int_ t644 = agg_tmp0642;
  struct std___Rb_tree_iterator_int_ r645 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase_abi_cxx11_(&t643->_M_t, t644);
  if (__cir_exc_active) {
    struct std___Rb_tree_const_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  ref_tmp0641 = r645;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&__retval640, &ref_tmp0641);
  struct std___Rb_tree_const_iterator_int_ t646 = __retval640;
  return t646;
}

// function: _ZSteqRKSt23_Rb_tree_const_iteratorIiES2_
_Bool std__operator__(struct std___Rb_tree_const_iterator_int_* v647, struct std___Rb_tree_const_iterator_int_* v648) {
bb649:
  struct std___Rb_tree_const_iterator_int_* __x650;
  struct std___Rb_tree_const_iterator_int_* __y651;
  _Bool __retval652;
  __x650 = v647;
  __y651 = v648;
  struct std___Rb_tree_const_iterator_int_* t653 = __x650;
  struct std___Rb_tree_node_base* t654 = t653->_M_node;
  struct std___Rb_tree_const_iterator_int_* t655 = __y651;
  struct std___Rb_tree_node_base* t656 = t655->_M_node;
  _Bool c657 = ((t654 == t656)) ? 1 : 0;
  __retval652 = c657;
  _Bool t658 = __retval652;
  return t658;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE3endEv
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v659) {
bb660:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this661;
  struct std___Rb_tree_const_iterator_int_ __retval662;
  this661 = v659;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t663 = this661;
  struct std___Rb_tree_node_base* r664 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t663);
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval662, r664);
  struct std___Rb_tree_const_iterator_int_ t665 = __retval662;
  return t665;
}

// function: _ZNKSt8multisetIiSt4lessIiESaIiEE3endEv
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____end___const(struct std__multiset_int__std__less_int___std__allocator_int__* v666) {
bb667:
  struct std__multiset_int__std__less_int___std__allocator_int__* this668;
  struct std___Rb_tree_const_iterator_int_ __retval669;
  this668 = v666;
  struct std__multiset_int__std__less_int___std__allocator_int__* t670 = this668;
  struct std___Rb_tree_const_iterator_int_ r671 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(&t670->_M_t);
  __retval669 = r671;
  struct std___Rb_tree_const_iterator_int_ t672 = __retval669;
  return t672;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v673, void* v674) {
bb675:
  struct std__basic_ostream_char__std__char_traits_char__* this676;
  void* __pf677;
  struct std__basic_ostream_char__std__char_traits_char__* __retval678;
  this676 = v673;
  __pf677 = v674;
  struct std__basic_ostream_char__std__char_traits_char__* t679 = this676;
  void* t680 = __pf677;
  struct std__basic_ostream_char__std__char_traits_char__* r681 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t680)(t679);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval678 = r681;
  struct std__basic_ostream_char__std__char_traits_char__* t682 = __retval678;
  return t682;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v683) {
bb684:
  struct std__basic_ostream_char__std__char_traits_char__* __os685;
  struct std__basic_ostream_char__std__char_traits_char__* __retval686;
  __os685 = v683;
  struct std__basic_ostream_char__std__char_traits_char__* t687 = __os685;
  struct std__basic_ostream_char__std__char_traits_char__* r688 = std__ostream__flush(t687);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval686 = r688;
  struct std__basic_ostream_char__std__char_traits_char__* t689 = __retval686;
  return t689;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v690) {
bb691:
  struct std__ctype_char_* __f692;
  struct std__ctype_char_* __retval693;
  __f692 = v690;
    struct std__ctype_char_* t694 = __f692;
    _Bool cast695 = (_Bool)t694;
    _Bool u696 = !cast695;
    if (u696) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t697 = __f692;
  __retval693 = t697;
  struct std__ctype_char_* t698 = __retval693;
  return t698;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v699, char v700) {
bb701:
  struct std__ctype_char_* this702;
  char __c703;
  char __retval704;
  this702 = v699;
  __c703 = v700;
  struct std__ctype_char_* t705 = this702;
    char t706 = t705->_M_widen_ok;
    _Bool cast707 = (_Bool)t706;
    if (cast707) {
      char t708 = __c703;
      unsigned char cast709 = (unsigned char)t708;
      unsigned long cast710 = (unsigned long)cast709;
      char t711 = t705->_M_widen[cast710];
      __retval704 = t711;
      char t712 = __retval704;
      return t712;
    }
  std__ctype_char____M_widen_init___const(t705);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t713 = __c703;
  void** v714 = (void**)t705;
  void* v715 = *((void**)v714);
  char vcall718 = (char)__VERIFIER_virtual_call_char_char(t705, 6, t713);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval704 = vcall718;
  char t719 = __retval704;
  return t719;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v720, char v721) {
bb722:
  struct std__basic_ios_char__std__char_traits_char__* this723;
  char __c724;
  char __retval725;
  this723 = v720;
  __c724 = v721;
  struct std__basic_ios_char__std__char_traits_char__* t726 = this723;
  struct std__ctype_char_* t727 = t726->_M_ctype;
  struct std__ctype_char_* r728 = std__ctype_char__const__std____check_facet_std__ctype_char___(t727);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t729 = __c724;
  char r730 = std__ctype_char___widen_char__const(r728, t729);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval725 = r730;
  char t731 = __retval725;
  return t731;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v732) {
bb733:
  struct std__basic_ostream_char__std__char_traits_char__* __os734;
  struct std__basic_ostream_char__std__char_traits_char__* __retval735;
  __os734 = v732;
  struct std__basic_ostream_char__std__char_traits_char__* t736 = __os734;
  struct std__basic_ostream_char__std__char_traits_char__* t737 = __os734;
  void** v738 = (void**)t737;
  void* v739 = *((void**)v738);
  unsigned char* cast740 = (unsigned char*)v739;
  long c741 = -24;
  unsigned char* ptr742 = &(cast740)[c741];
  long* cast743 = (long*)ptr742;
  long t744 = *cast743;
  unsigned char* cast745 = (unsigned char*)t737;
  unsigned char* ptr746 = &(cast745)[t744];
  struct std__basic_ostream_char__std__char_traits_char__* cast747 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr746;
  struct std__basic_ios_char__std__char_traits_char__* cast748 = (struct std__basic_ios_char__std__char_traits_char__*)cast747;
  char c749 = 10;
  char r750 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast748, c749);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r751 = std__ostream__put(t736, r750);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r752 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r751);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval735 = r752;
  struct std__basic_ostream_char__std__char_traits_char__* t753 = __retval735;
  return t753;
}

// function: _ZNSt8multisetIiSt4lessIiESaIiEED2Ev
void std__multiset_int__std__less_int___std__allocator_int______multiset(struct std__multiset_int__std__less_int___std__allocator_int__* v754) {
bb755:
  struct std__multiset_int__std__less_int___std__allocator_int__* this756;
  this756 = v754;
  struct std__multiset_int__std__less_int___std__allocator_int__* t757 = this756;
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(&t757->_M_t);
  }
  return;
}

// function: main
int main() {
bb758:
  int __retval759;
  struct std__multiset_int__std__less_int___std__allocator_int__ myset760;
  int ref_tmp0761;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0762;
  int ref_tmp1763;
  struct std___Rb_tree_const_iterator_int_ agg_tmp1764;
  int ref_tmp2765;
  struct std___Rb_tree_const_iterator_int_ agg_tmp2766;
  struct std___Rb_tree_const_iterator_int_ it767;
  struct std___Rb_tree_const_iterator_int_ ref_tmp4768;
  struct std___Rb_tree_const_iterator_int_ ref_tmp5769;
  int c770 = 0;
  __retval759 = c770;
  std__multiset_int__std__less_int___std__allocator_int_____multiset(&myset760);
    int c771 = 20;
    ref_tmp0761 = c771;
    struct std___Rb_tree_const_iterator_int_ r772 = std__multiset_int__std__less_int___std__allocator_int_____insert(&myset760, &ref_tmp0761);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset760);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp0762 = r772;
    int c773 = 30;
    ref_tmp1763 = c773;
    struct std___Rb_tree_const_iterator_int_ r774 = std__multiset_int__std__less_int___std__allocator_int_____insert(&myset760, &ref_tmp1763);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset760);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp1764 = r774;
    int c775 = 10;
    ref_tmp2765 = c775;
    struct std___Rb_tree_const_iterator_int_ r776 = std__multiset_int__std__less_int___std__allocator_int_____insert(&myset760, &ref_tmp2765);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset760);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp2766 = r776;
    unsigned long r777 = std__multiset_int__std__less_int___std__allocator_int_____size___const(&myset760);
    unsigned long c778 = 3;
    _Bool c779 = ((r777 == c778)) ? 1 : 0;
    if (c779) {
    } else {
      char* cast780 = (char*)&(_str);
      char* c781 = _str_1;
      unsigned int c782 = 20;
      char* cast783 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast780, c781, c782, cast783);
    }
    struct std___Rb_tree_const_iterator_int_ r784 = std__multiset_int__std__less_int___std__allocator_int_____begin___const(&myset760);
    it767 = r784;
    int* r785 = std___Rb_tree_const_iterator_int___operator____const(&it767);
    int t786 = *r785;
    int c787 = 10;
    _Bool c788 = ((t786 == c787)) ? 1 : 0;
    if (c788) {
    } else {
      char* cast789 = (char*)&(_str_2);
      char* c790 = _str_1;
      unsigned int c791 = 22;
      char* cast792 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast789, c790, c791, cast792);
    }
    char* cast793 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r794 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast793);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset760);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      while (1) {
        _Bool r795 = std__multiset_int__std__less_int___std__allocator_int_____empty___const(&myset760);
        _Bool u796 = !r795;
        if (!u796) break;
          struct std___Rb_tree_const_iterator_int_ ref_tmp3797;
          struct std___Rb_tree_const_iterator_int_ agg_tmp3798;
          struct std___Rb_tree_const_iterator_int_ agg_tmp4799;
          char* cast800 = (char*)&(_str_4);
          struct std__basic_ostream_char__std__char_traits_char__* r801 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast800);
          if (__cir_exc_active) {
            {
              std__multiset_int__std__less_int___std__allocator_int______multiset(&myset760);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          struct std___Rb_tree_const_iterator_int_ r802 = std__multiset_int__std__less_int___std__allocator_int_____begin___const(&myset760);
          ref_tmp3797 = r802;
          int* r803 = std___Rb_tree_const_iterator_int___operator____const(&ref_tmp3797);
          int t804 = *r803;
          struct std__basic_ostream_char__std__char_traits_char__* r805 = std__ostream__operator__(r801, t804);
          if (__cir_exc_active) {
            {
              std__multiset_int__std__less_int___std__allocator_int______multiset(&myset760);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          struct std___Rb_tree_const_iterator_int_ r806 = std__multiset_int__std__less_int___std__allocator_int_____begin___const(&myset760);
          agg_tmp3798 = r806;
          struct std___Rb_tree_const_iterator_int_ t807 = agg_tmp3798;
          struct std___Rb_tree_const_iterator_int_ r808 = std__multiset_int__std__less_int___std__allocator_int_____erase_abi_cxx11_(&myset760, t807);
          if (__cir_exc_active) {
            {
              std__multiset_int__std__less_int___std__allocator_int______multiset(&myset760);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          agg_tmp4799 = r808;
      }
    struct std___Rb_tree_const_iterator_int_ r809 = std__multiset_int__std__less_int___std__allocator_int_____begin___const(&myset760);
    ref_tmp4768 = r809;
    struct std___Rb_tree_const_iterator_int_ r810 = std__multiset_int__std__less_int___std__allocator_int_____end___const(&myset760);
    ref_tmp5769 = r810;
    _Bool r811 = std__operator__(&ref_tmp4768, &ref_tmp5769);
    if (r811) {
    } else {
      char* cast812 = (char*)&(_str_5);
      char* c813 = _str_1;
      unsigned int c814 = 29;
      char* cast815 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast812, c813, c814, cast815);
    }
    unsigned long r816 = std__multiset_int__std__less_int___std__allocator_int_____size___const(&myset760);
    unsigned long c817 = 0;
    _Bool c818 = ((r816 == c817)) ? 1 : 0;
    if (c818) {
    } else {
      char* cast819 = (char*)&(_str_6);
      char* c820 = _str_1;
      unsigned int c821 = 30;
      char* cast822 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast819, c820, c821, cast822);
    }
    struct std__basic_ostream_char__std__char_traits_char__* r823 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset760);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c824 = 0;
    __retval759 = c824;
    int t825 = __retval759;
    int ret_val826 = t825;
    {
      std__multiset_int__std__less_int___std__allocator_int______multiset(&myset760);
    }
    return ret_val826;
  int t827 = __retval759;
  return t827;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v828) {
bb829:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this830;
  this830 = v828;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t831 = this830;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(&t831->_M_impl);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v832) {
bb833:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this834;
  this834 = v832;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t835 = this834;
    struct std___Rb_tree_node_int_* r836 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(t835);
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t835, r836);
    if (__cir_exc_active) {
      {
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t835->_M_impl);
      }
      return;
    }
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t835->_M_impl);
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v837) {
bb838:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this839;
  this839 = v837;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t840 = this839;
  struct std__allocator_std___Rb_tree_node_int__* base841 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t840 + 0);
  std__allocator_std___Rb_tree_node_int_____allocator(base841);
    struct std___Rb_tree_key_compare_std__less_int__* base842 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)t840 + 0);
    std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(base842);
    struct std___Rb_tree_header* base843 = (struct std___Rb_tree_header*)((char *)t840 + 8);
    std___Rb_tree_header___Rb_tree_header(base843);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v844) {
bb845:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this846;
  this846 = v844;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t847 = this846;
  {
    struct std__allocator_std___Rb_tree_node_int__* base848 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t847 + 0);
    std__allocator_std___Rb_tree_node_int______allocator(base848);
  }
  return;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEEC2Ev
void std____new_allocator_std___Rb_tree_node_int_______new_allocator(struct std____new_allocator_std___Rb_tree_node_int__* v849) {
bb850:
  struct std____new_allocator_std___Rb_tree_node_int__* this851;
  this851 = v849;
  struct std____new_allocator_std___Rb_tree_node_int__* t852 = this851;
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEEC2Ev
void std__allocator_std___Rb_tree_node_int_____allocator(struct std__allocator_std___Rb_tree_node_int__* v853) {
bb854:
  struct std__allocator_std___Rb_tree_node_int__* this855;
  this855 = v853;
  struct std__allocator_std___Rb_tree_node_int__* t856 = this855;
  struct std____new_allocator_std___Rb_tree_node_int__* base857 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t856 + 0);
  std____new_allocator_std___Rb_tree_node_int_______new_allocator(base857);
  return;
}

// function: _ZNSt20_Rb_tree_key_compareISt4lessIiEEC2Ev
void std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(struct std___Rb_tree_key_compare_std__less_int__* v858) {
bb859:
  struct std___Rb_tree_key_compare_std__less_int__* this860;
  this860 = v858;
  return;
}

// function: _ZNSt15_Rb_tree_header8_M_resetEv
void std___Rb_tree_header___M_reset(struct std___Rb_tree_header* v861) {
bb862:
  struct std___Rb_tree_header* this863;
  this863 = v861;
  struct std___Rb_tree_header* t864 = this863;
  struct std___Rb_tree_node_base* c865 = ((void*)0);
  t864->_M_header._M_parent = c865;
  t864->_M_header._M_left = &t864->_M_header;
  t864->_M_header._M_right = &t864->_M_header;
  unsigned long c866 = 0;
  t864->_M_node_count = c866;
  return;
}

// function: _ZNSt15_Rb_tree_headerC2Ev
void std___Rb_tree_header___Rb_tree_header(struct std___Rb_tree_header* v867) {
bb868:
  struct std___Rb_tree_header* this869;
  this869 = v867;
  struct std___Rb_tree_header* t870 = this869;
  unsigned int c871 = 0;
  t870->_M_header._M_color = c871;
  std___Rb_tree_header___M_reset(t870);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEED2Ev
void std__allocator_std___Rb_tree_node_int______allocator(struct std__allocator_std___Rb_tree_node_int__* v872) {
bb873:
  struct std__allocator_std___Rb_tree_node_int__* this874;
  this874 = v872;
  struct std__allocator_std___Rb_tree_node_int__* t875 = this874;
  return;
}

// function: _ZNSt13_Rb_tree_nodeIiE11_M_node_ptrEv
struct std___Rb_tree_node_int_* std___Rb_tree_node_int____M_node_ptr(struct std___Rb_tree_node_int_* v876) {
bb877:
  struct std___Rb_tree_node_int_* this878;
  struct std___Rb_tree_node_int_* __retval879;
  this878 = v876;
  struct std___Rb_tree_node_int_* t880 = this878;
  __retval879 = t880;
  struct std___Rb_tree_node_int_* t881 = __retval879;
  return t881;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(struct std___Rb_tree_node_int_* v882) {
bb883:
  struct std___Rb_tree_node_int_* __x884;
  struct std___Rb_tree_node_int_* __retval885;
  __x884 = v882;
  struct std___Rb_tree_node_int_* t886 = __x884;
  struct std___Rb_tree_node_base* base887 = (struct std___Rb_tree_node_base*)((char *)t886 + 0);
  struct std___Rb_tree_node_base* t888 = base887->_M_right;
  _Bool cast889 = (_Bool)t888;
  struct std___Rb_tree_node_int_* ternary890;
  if (cast889) {
    struct std___Rb_tree_node_int_* t891 = __x884;
    struct std___Rb_tree_node_base* base892 = (struct std___Rb_tree_node_base*)((char *)t891 + 0);
    struct std___Rb_tree_node_base* t893 = base892->_M_right;
    struct std___Rb_tree_node_int_* derived894 = (struct std___Rb_tree_node_int_*)((char *)t893 - 0);
    struct std___Rb_tree_node_int_* r895 = std___Rb_tree_node_int____M_node_ptr(derived894);
    ternary890 = (struct std___Rb_tree_node_int_*)r895;
  } else {
    struct std___Rb_tree_node_int_* c896 = ((void*)0);
    ternary890 = (struct std___Rb_tree_node_int_*)c896;
  }
  __retval885 = ternary890;
  struct std___Rb_tree_node_int_* t897 = __retval885;
  return t897;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(struct std___Rb_tree_node_int_* v898) {
bb899:
  struct std___Rb_tree_node_int_* __x900;
  struct std___Rb_tree_node_int_* __retval901;
  __x900 = v898;
  struct std___Rb_tree_node_int_* t902 = __x900;
  struct std___Rb_tree_node_base* base903 = (struct std___Rb_tree_node_base*)((char *)t902 + 0);
  struct std___Rb_tree_node_base* t904 = base903->_M_left;
  _Bool cast905 = (_Bool)t904;
  struct std___Rb_tree_node_int_* ternary906;
  if (cast905) {
    struct std___Rb_tree_node_int_* t907 = __x900;
    struct std___Rb_tree_node_base* base908 = (struct std___Rb_tree_node_base*)((char *)t907 + 0);
    struct std___Rb_tree_node_base* t909 = base908->_M_left;
    struct std___Rb_tree_node_int_* derived910 = (struct std___Rb_tree_node_int_*)((char *)t909 - 0);
    struct std___Rb_tree_node_int_* r911 = std___Rb_tree_node_int____M_node_ptr(derived910);
    ternary906 = (struct std___Rb_tree_node_int_*)r911;
  } else {
    struct std___Rb_tree_node_int_* c912 = ((void*)0);
    ternary906 = (struct std___Rb_tree_node_int_*)c912;
  }
  __retval901 = ternary906;
  struct std___Rb_tree_node_int_* t913 = __retval901;
  return t913;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v914) {
bb915:
  int* __location916;
  __location916 = v914;
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(struct std__allocator_std___Rb_tree_node_int__* v917, int* v918) {
bb919:
  struct std__allocator_std___Rb_tree_node_int__* __a920;
  int* __p921;
  __a920 = v917;
  __p921 = v918;
  int* t922 = __p921;
  void_std__destroy_at_int_(t922);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___Rb_tree_node_int__* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v923) {
bb924:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this925;
  struct std__allocator_std___Rb_tree_node_int__* __retval926;
  this925 = v923;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t927 = this925;
  struct std__allocator_std___Rb_tree_node_int__* base928 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)&(t927->_M_impl) + 0);
  __retval926 = base928;
  struct std__allocator_std___Rb_tree_node_int__* t929 = __retval926;
  return t929;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v930) {
bb931:
  struct __gnu_cxx____aligned_membuf_int_* this932;
  void* __retval933;
  this932 = v930;
  struct __gnu_cxx____aligned_membuf_int_* t934 = this932;
  void* cast935 = (void*)&(t934->_M_storage);
  __retval933 = cast935;
  void* t936 = __retval933;
  return t936;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v937) {
bb938:
  struct __gnu_cxx____aligned_membuf_int_* this939;
  int* __retval940;
  this939 = v937;
  struct __gnu_cxx____aligned_membuf_int_* t941 = this939;
  void* r942 = __gnu_cxx____aligned_membuf_int____M_addr(t941);
  int* cast943 = (int*)r942;
  __retval940 = cast943;
  int* t944 = __retval940;
  return t944;
}

// function: _ZNSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr(struct std___Rb_tree_node_int_* v945) {
bb946:
  struct std___Rb_tree_node_int_* this947;
  int* __retval948;
  this947 = v945;
  struct std___Rb_tree_node_int_* t949 = this947;
  int* r950 = __gnu_cxx____aligned_membuf_int____M_ptr(&t949->_M_storage);
  __retval948 = r950;
  int* t951 = __retval948;
  return t951;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_destroy_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v952, struct std___Rb_tree_node_int_* v953) {
bb954:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this955;
  struct std___Rb_tree_node_int_* __p956;
  this955 = v952;
  __p956 = v953;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t957 = this955;
  struct std__allocator_std___Rb_tree_node_int__* r958 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t957);
  struct std___Rb_tree_node_int_* t959 = __p956;
  int* r960 = std___Rb_tree_node_int____M_valptr(t959);
  if (__cir_exc_active) {
    return;
  }
  void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(r958, r960);
  struct std___Rb_tree_node_int_* t961 = __p956;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb962:
  _Bool __retval963;
    _Bool c964 = 0;
    __retval963 = c964;
    _Bool t965 = __retval963;
    return t965;
  abort();
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___Rb_tree_node_int_____deallocate(struct std____new_allocator_std___Rb_tree_node_int__* v966, struct std___Rb_tree_node_int_* v967, unsigned long v968) {
bb969:
  struct std____new_allocator_std___Rb_tree_node_int__* this970;
  struct std___Rb_tree_node_int_* __p971;
  unsigned long __n972;
  this970 = v966;
  __p971 = v967;
  __n972 = v968;
  struct std____new_allocator_std___Rb_tree_node_int__* t973 = this970;
    unsigned long c974 = 8;
    unsigned long c975 = 16;
    _Bool c976 = ((c974 > c975)) ? 1 : 0;
    if (c976) {
      struct std___Rb_tree_node_int_* t977 = __p971;
      void* cast978 = (void*)t977;
      unsigned long t979 = __n972;
      unsigned long c980 = 40;
      unsigned long b981 = t979 * c980;
      unsigned long c982 = 8;
      operator_delete_3(cast978, b981, c982);
      return;
    }
  struct std___Rb_tree_node_int_* t983 = __p971;
  void* cast984 = (void*)t983;
  unsigned long t985 = __n972;
  unsigned long c986 = 40;
  unsigned long b987 = t985 * c986;
  operator_delete_2(cast984, b987);
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE10deallocateEPS0_m
void std__allocator_std___Rb_tree_node_int_____deallocate(struct std__allocator_std___Rb_tree_node_int__* v988, struct std___Rb_tree_node_int_* v989, unsigned long v990) {
bb991:
  struct std__allocator_std___Rb_tree_node_int__* this992;
  struct std___Rb_tree_node_int_* __p993;
  unsigned long __n994;
  this992 = v988;
  __p993 = v989;
  __n994 = v990;
  struct std__allocator_std___Rb_tree_node_int__* t995 = this992;
    _Bool r996 = std____is_constant_evaluated();
    if (r996) {
      struct std___Rb_tree_node_int_* t997 = __p993;
      void* cast998 = (void*)t997;
      operator_delete(cast998);
      return;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base999 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t995 + 0);
  struct std___Rb_tree_node_int_* t1000 = __p993;
  unsigned long t1001 = __n994;
  std____new_allocator_std___Rb_tree_node_int_____deallocate(base999, t1000, t1001);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(struct std__allocator_std___Rb_tree_node_int__* v1002, struct std___Rb_tree_node_int_* v1003, unsigned long v1004) {
bb1005:
  struct std__allocator_std___Rb_tree_node_int__* __a1006;
  struct std___Rb_tree_node_int_* __p1007;
  unsigned long __n1008;
  __a1006 = v1002;
  __p1007 = v1003;
  __n1008 = v1004;
  struct std__allocator_std___Rb_tree_node_int__* t1009 = __a1006;
  struct std___Rb_tree_node_int_* t1010 = __p1007;
  unsigned long t1011 = __n1008;
  std__allocator_std___Rb_tree_node_int_____deallocate(t1009, t1010, t1011);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_put_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1012, struct std___Rb_tree_node_int_* v1013) {
bb1014:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1015;
  struct std___Rb_tree_node_int_* __p1016;
  this1015 = v1012;
  __p1016 = v1013;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1017 = this1015;
  struct std__allocator_std___Rb_tree_node_int__* r1018 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t1017);
  struct std___Rb_tree_node_int_* t1019 = __p1016;
  unsigned long c1020 = 1;
  std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(r1018, t1019, c1020);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_drop_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1021, struct std___Rb_tree_node_int_* v1022) {
bb1023:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1024;
  struct std___Rb_tree_node_int_* __p1025;
  this1024 = v1021;
  __p1025 = v1022;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1026 = this1024;
  struct std___Rb_tree_node_int_* t1027 = __p1025;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(t1026, t1027);
  struct std___Rb_tree_node_int_* t1028 = __p1025;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t1026, t1028);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1029, struct std___Rb_tree_node_int_* v1030) {
bb1031:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1032;
  struct std___Rb_tree_node_int_* __x1033;
  this1032 = v1029;
  __x1033 = v1030;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1034 = this1032;
    while (1) {
      struct std___Rb_tree_node_int_* t1035 = __x1033;
      _Bool cast1036 = (_Bool)t1035;
      if (!cast1036) break;
        struct std___Rb_tree_node_int_* __y1037;
        struct std___Rb_tree_node_int_* t1038 = __x1033;
        struct std___Rb_tree_node_int_* r1039 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(t1038);
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t1034, r1039);
        if (__cir_exc_active) {
          return;
        }
        struct std___Rb_tree_node_int_* t1040 = __x1033;
        struct std___Rb_tree_node_int_* r1041 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(t1040);
        if (__cir_exc_active) {
          return;
        }
        __y1037 = r1041;
        struct std___Rb_tree_node_int_* t1042 = __x1033;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(t1034, t1042);
        struct std___Rb_tree_node_int_* t1043 = __y1037;
        __x1033 = t1043;
    }
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_M_begin_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1044) {
bb1045:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1046;
  struct std___Rb_tree_node_int_* __retval1047;
  struct std___Rb_tree_node_base* __begin1048;
  this1046 = v1044;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1049 = this1046;
  struct std___Rb_tree_header* base1050 = (struct std___Rb_tree_header*)((char *)&(t1049->_M_impl) + 8);
  struct std___Rb_tree_node_base* t1051 = base1050->_M_header._M_parent;
  __begin1048 = t1051;
  struct std___Rb_tree_node_base* t1052 = __begin1048;
  _Bool cast1053 = (_Bool)t1052;
  struct std___Rb_tree_node_int_* ternary1054;
  if (cast1053) {
    struct std___Rb_tree_node_base* t1055 = __begin1048;
    struct std___Rb_tree_node_int_* derived1056 = (struct std___Rb_tree_node_int_*)((char *)t1055 - 0);
    struct std___Rb_tree_node_int_* r1057 = std___Rb_tree_node_int____M_node_ptr(derived1056);
    ternary1054 = (struct std___Rb_tree_node_int_*)r1057;
  } else {
    struct std___Rb_tree_node_int_* c1058 = ((void*)0);
    ternary1054 = (struct std___Rb_tree_node_int_*)c1058;
  }
  __retval1047 = ternary1054;
  struct std___Rb_tree_node_int_* t1059 = __retval1047;
  return t1059;
}

