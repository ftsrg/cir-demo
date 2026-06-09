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
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_ _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__set_int__std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ _M_t; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[18] = "myset.size() == 3";
char _str_1[101] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/set/set-empty/main.cpp";
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
void std__set_int__std__less_int___std__allocator_int_____set(struct std__set_int__std__less_int___std__allocator_int__* p0);
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
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_node_base* p1);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____begin___const(struct std__set_int__std__less_int___std__allocator_int__* p0);
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
_Bool std__set_int__std__less_int___std__allocator_int_____empty___const(struct std__set_int__std__less_int___std__allocator_int__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
extern struct std___Rb_tree_node_base* std___Rb_tree_increment(struct std___Rb_tree_node_base* p0);
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* p0);
extern struct std___Rb_tree_node_base* std___Rb_tree_rebalance_for_erase(struct std___Rb_tree_node_base* p0, struct std___Rb_tree_node_base* p1);
struct std___Rb_tree_node_base* std____rb_tree___Node_traits_int__int_____S_rebalance_for_erase(struct std___Rb_tree_node_base* p0, struct std___Rb_tree_node_base* p1);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase_abi_cxx11_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1);
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____erase_abi_cxx11_(struct std__set_int__std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1);
_Bool std__operator___2(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_const_iterator_int_* p1);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____end___const(struct std__set_int__std__less_int___std__allocator_int__* p0);
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

// function: _ZSteqRKSt17_Rb_tree_iteratorIiES2_
_Bool std__operator__(struct std___Rb_tree_iterator_int_* v103, struct std___Rb_tree_iterator_int_* v104) {
bb105:
  struct std___Rb_tree_iterator_int_* __x106;
  struct std___Rb_tree_iterator_int_* __y107;
  _Bool __retval108;
  __x106 = v103;
  __y107 = v104;
  struct std___Rb_tree_iterator_int_* t109 = __x106;
  struct std___Rb_tree_node_base* t110 = t109->_M_node;
  struct std___Rb_tree_iterator_int_* t111 = __y107;
  struct std___Rb_tree_node_base* t112 = t111->_M_node;
  _Bool c113 = ((t110 == t112)) ? 1 : 0;
  __retval108 = c113;
  _Bool t114 = __retval108;
  return t114;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5beginEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v115) {
bb116:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this117;
  struct std___Rb_tree_iterator_int_ __retval118;
  this117 = v115;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t119 = this117;
  struct std___Rb_tree_header* base120 = (struct std___Rb_tree_header*)((char *)&(t119->_M_impl) + 8);
  struct std___Rb_tree_node_base* t121 = base120->_M_header._M_left;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval118, t121);
  struct std___Rb_tree_iterator_int_ t122 = __retval118;
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

// function: _ZNSt17_Rb_tree_iteratorIiEmmEv
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator__(struct std___Rb_tree_iterator_int_* v136) {
bb137:
  struct std___Rb_tree_iterator_int_* this138;
  struct std___Rb_tree_iterator_int_* __retval139;
  this138 = v136;
  struct std___Rb_tree_iterator_int_* t140 = this138;
  struct std___Rb_tree_node_base* t141 = t140->_M_node;
  struct std___Rb_tree_node_base* r142 = std___Rb_tree_decrement(t141);
  t140->_M_node = r142;
  __retval139 = t140;
  struct std___Rb_tree_iterator_int_* t143 = __retval139;
  return t143;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v144, struct std___Rb_tree_node_base** v145, struct std___Rb_tree_node_base** v146) {
bb147:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this148;
  struct std___Rb_tree_node_base** __x149;
  struct std___Rb_tree_node_base** __y150;
  this148 = v144;
  __x149 = v145;
  __y150 = v146;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t151 = this148;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base152 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t151 + 0);
  struct std___Rb_tree_node_base** t153 = __x149;
  struct std___Rb_tree_node_base* t154 = *t153;
  t151->first = t154;
  struct std___Rb_tree_node_base** t155 = __y150;
  struct std___Rb_tree_node_base* t156 = *t155;
  t151->second = t156;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE24_M_get_insert_unique_posERKi
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v157, int* v158) {
bb159:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this160;
  int* __k161;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval162;
  struct std___Rb_tree_node_base* __x163;
  struct std___Rb_tree_node_base* __y164;
  _Bool __comp165;
  struct std___Rb_tree_iterator_int_ __j166;
  struct std___Rb_tree_node_base* ref_tmp1167;
  this160 = v157;
  __k161 = v158;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t168 = this160;
  struct std___Rb_tree_node_base* r169 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t168);
  __x163 = r169;
  struct std___Rb_tree_node_base* r170 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t168);
  __y164 = r170;
  _Bool c171 = 1;
  __comp165 = c171;
    while (1) {
      struct std___Rb_tree_node_base* t172 = __x163;
      _Bool cast173 = (_Bool)t172;
      if (!cast173) break;
        struct std___Rb_tree_node_base* t174 = __x163;
        __y164 = t174;
        struct std___Rb_tree_key_compare_std__less_int__* base175 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t168->_M_impl) + 0);
        struct std__less_int_* cast176 = (struct std__less_int_*)base175;
        int* t177 = __k161;
        struct std___Rb_tree_node_base* t178 = __x163;
        int* r179 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t178);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r180 = std__less_int___operator___int_const___int_const___const(cast176, t177, r179);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        __comp165 = r180;
        _Bool t181 = __comp165;
        struct std___Rb_tree_node_base* ternary182;
        if (t181) {
          struct std___Rb_tree_node_base* t183 = __x163;
          struct std___Rb_tree_node_base* r184 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t183);
          ternary182 = (struct std___Rb_tree_node_base*)r184;
        } else {
          struct std___Rb_tree_node_base* t185 = __x163;
          struct std___Rb_tree_node_base* r186 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t185);
          ternary182 = (struct std___Rb_tree_node_base*)r186;
        }
        __x163 = ternary182;
    }
  struct std___Rb_tree_node_base* t187 = __y164;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__j166, t187);
    _Bool t188 = __comp165;
    if (t188) {
        struct std___Rb_tree_iterator_int_ ref_tmp0189;
        struct std___Rb_tree_iterator_int_ r190 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(t168);
        ref_tmp0189 = r190;
        _Bool r191 = std__operator__(&__j166, &ref_tmp0189);
        if (r191) {
          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval162, &__x163, &__y164);
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t192 = __retval162;
          return t192;
        } else {
          struct std___Rb_tree_iterator_int_* r193 = std___Rb_tree_iterator_int___operator__(&__j166);
        }
    }
    struct std___Rb_tree_key_compare_std__less_int__* base194 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t168->_M_impl) + 0);
    struct std__less_int_* cast195 = (struct std__less_int_*)base194;
    struct std___Rb_tree_node_base* t196 = __j166._M_node;
    int* r197 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t196);
    if (__cir_exc_active) {
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    int* t198 = __k161;
    _Bool r199 = std__less_int___operator___int_const___int_const___const(cast195, r197, t198);
    if (__cir_exc_active) {
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    if (r199) {
      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval162, &__x163, &__y164);
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t200 = __retval162;
      return t200;
    }
  struct std___Rb_tree_node_base* c201 = ((void*)0);
  ref_tmp1167 = c201;
  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval162, &__j166._M_node, &ref_tmp1167);
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t202 = __retval162;
  return t202;
}

// function: _ZNKSt9_IdentityIiEclERi
int* std___Identity_int___operator___int___const(struct std___Identity_int_* v203, int* v204) {
bb205:
  struct std___Identity_int_* this206;
  int* __x207;
  int* __retval208;
  this206 = v203;
  __x207 = v204;
  struct std___Identity_int_* t209 = this206;
  int* t210 = __x207;
  __retval208 = t210;
  int* t211 = __retval208;
  return t211;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeC2ERS5_
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v212, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v213) {
bb214:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this215;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* __t216;
  this215 = v212;
  __t216 = v213;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t217 = this215;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t218 = __t216;
  t217->_M_t = t218;
  return;
}

// function: _ZNKSt15__new_allocatorISt13_Rb_tree_nodeIiEE11_M_max_sizeEv
unsigned long std____new_allocator_std___Rb_tree_node_int______M_max_size___const(struct std____new_allocator_std___Rb_tree_node_int__* v219) {
bb220:
  struct std____new_allocator_std___Rb_tree_node_int__* this221;
  unsigned long __retval222;
  this221 = v219;
  struct std____new_allocator_std___Rb_tree_node_int__* t223 = this221;
  unsigned long c224 = 9223372036854775807;
  unsigned long c225 = 40;
  unsigned long b226 = c224 / c225;
  __retval222 = b226;
  unsigned long t227 = __retval222;
  return t227;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE8allocateEmPKv
struct std___Rb_tree_node_int_* std____new_allocator_std___Rb_tree_node_int_____allocate(struct std____new_allocator_std___Rb_tree_node_int__* v228, unsigned long v229, void* v230) {
bb231:
  struct std____new_allocator_std___Rb_tree_node_int__* this232;
  unsigned long __n233;
  void* unnamed234;
  struct std___Rb_tree_node_int_* __retval235;
  this232 = v228;
  __n233 = v229;
  unnamed234 = v230;
  struct std____new_allocator_std___Rb_tree_node_int__* t236 = this232;
    unsigned long t237 = __n233;
    unsigned long r238 = std____new_allocator_std___Rb_tree_node_int______M_max_size___const(t236);
    _Bool c239 = ((t237 > r238)) ? 1 : 0;
    if (c239) {
        unsigned long t240 = __n233;
        unsigned long c241 = -1;
        unsigned long c242 = 40;
        unsigned long b243 = c241 / c242;
        _Bool c244 = ((t240 > b243)) ? 1 : 0;
        if (c244) {
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
    unsigned long c245 = 8;
    unsigned long c246 = 16;
    _Bool c247 = ((c245 > c246)) ? 1 : 0;
    if (c247) {
      unsigned long __al248;
      unsigned long c249 = 8;
      __al248 = c249;
      unsigned long t250 = __n233;
      unsigned long c251 = 40;
      unsigned long b252 = t250 * c251;
      unsigned long t253 = __al248;
      void* r254 = operator_new_2(b252, t253);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast255 = (struct std___Rb_tree_node_int_*)r254;
      __retval235 = cast255;
      struct std___Rb_tree_node_int_* t256 = __retval235;
      return t256;
    }
  unsigned long t257 = __n233;
  unsigned long c258 = 40;
  unsigned long b259 = t257 * c258;
  void* r260 = operator_new(b259);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* cast261 = (struct std___Rb_tree_node_int_*)r260;
  __retval235 = cast261;
  struct std___Rb_tree_node_int_* t262 = __retval235;
  return t262;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE8allocateEm
struct std___Rb_tree_node_int_* std__allocator_std___Rb_tree_node_int_____allocate(struct std__allocator_std___Rb_tree_node_int__* v263, unsigned long v264) {
bb265:
  struct std__allocator_std___Rb_tree_node_int__* this266;
  unsigned long __n267;
  struct std___Rb_tree_node_int_* __retval268;
  this266 = v263;
  __n267 = v264;
  struct std__allocator_std___Rb_tree_node_int__* t269 = this266;
    _Bool r270 = std____is_constant_evaluated();
    if (r270) {
        unsigned long t271 = __n267;
        unsigned long c272 = 40;
        unsigned long ovr273;
        _Bool ovf274 = __builtin_mul_overflow(t271, c272, &ovr273);
        __n267 = ovr273;
        if (ovf274) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t275 = __n267;
      void* r276 = operator_new(t275);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast277 = (struct std___Rb_tree_node_int_*)r276;
      __retval268 = cast277;
      struct std___Rb_tree_node_int_* t278 = __retval268;
      return t278;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base279 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t269 + 0);
  unsigned long t280 = __n267;
  void* c281 = ((void*)0);
  struct std___Rb_tree_node_int_* r282 = std____new_allocator_std___Rb_tree_node_int_____allocate(base279, t280, c281);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval268 = r282;
  struct std___Rb_tree_node_int_* t283 = __retval268;
  return t283;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE8allocateERS2_m
struct std___Rb_tree_node_int_* std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(struct std__allocator_std___Rb_tree_node_int__* v284, unsigned long v285) {
bb286:
  struct std__allocator_std___Rb_tree_node_int__* __a287;
  unsigned long __n288;
  struct std___Rb_tree_node_int_* __retval289;
  __a287 = v284;
  __n288 = v285;
  struct std__allocator_std___Rb_tree_node_int__* t290 = __a287;
  unsigned long t291 = __n288;
  struct std___Rb_tree_node_int_* r292 = std__allocator_std___Rb_tree_node_int_____allocate(t290, t291);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval289 = r292;
  struct std___Rb_tree_node_int_* t293 = __retval289;
  return t293;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_get_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v294) {
bb295:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this296;
  struct std___Rb_tree_node_int_* __retval297;
  this296 = v294;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t298 = this296;
  struct std__allocator_std___Rb_tree_node_int__* r299 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t298);
  unsigned long c300 = 1;
  struct std___Rb_tree_node_int_* r301 = std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(r299, c300);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval297 = r301;
  struct std___Rb_tree_node_int_* t302 = __retval297;
  return t302;
}

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v303, int* v304) {
bb305:
  int* __location306;
  int* __args307;
  int* __retval308;
  void* __loc309;
  __location306 = v303;
  __args307 = v304;
  int* t310 = __location306;
  void* cast311 = (void*)t310;
  __loc309 = cast311;
    void* t312 = __loc309;
    int* cast313 = (int*)t312;
    int* t314 = __args307;
    int t315 = *t314;
    *cast313 = t315;
    __retval308 = cast313;
    int* t316 = __retval308;
    return t316;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE9constructIiJiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int_(struct std__allocator_std___Rb_tree_node_int__* v317, int* v318, int* v319) {
bb320:
  struct std__allocator_std___Rb_tree_node_int__* __a321;
  int* __p322;
  int* __args323;
  __a321 = v317;
  __p322 = v318;
  __args323 = v319;
  int* t324 = __p322;
  int* t325 = __args323;
  int* r326 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t324, t325);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE17_M_construct_nodeIJiEEEvPSt13_Rb_tree_nodeIiEDpOT_
void void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v327, struct std___Rb_tree_node_int_* v328, int* v329) {
bb330:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this331;
  struct std___Rb_tree_node_int_* __node332;
  int* __args333;
  this331 = v327;
  __node332 = v328;
  __args333 = v329;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t334 = this331;
      struct std__allocator_std___Rb_tree_node_int__* r336 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t334);
      struct std___Rb_tree_node_int_* t337 = __node332;
      int* r338 = std___Rb_tree_node_int____M_valptr(t337);
      if (__cir_exc_active) {
        goto cir_try_dispatch335;
      }
      int* t339 = __args333;
      void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int_(r336, r338, t339);
    cir_try_dispatch335: ;
    if (__cir_exc_active) {
    {
      int ca_tok340 = 0;
      void* ca_exn341 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Rb_tree_node_int_* t342 = __node332;
        struct std___Rb_tree_node_int_* t343 = __node332;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t334, t343);
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
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v344, int* v345) {
bb346:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this347;
  int* __args348;
  struct std___Rb_tree_node_int_* __retval349;
  struct std___Rb_tree_node_int_* __tmp350;
  this347 = v344;
  __args348 = v345;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t351 = this347;
  struct std___Rb_tree_node_int_* r352 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(t351);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __tmp350 = r352;
  struct std___Rb_tree_node_int_* t353 = __tmp350;
  int* t354 = __args348;
  void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int_(t351, t353, t354);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* t355 = __tmp350;
  __retval349 = t355;
  struct std___Rb_tree_node_int_* t356 = __retval349;
  return t356;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeclIiEEPSt13_Rb_tree_nodeIiEOT_
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int__int____const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v357, int* v358) {
bb359:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this360;
  int* __arg361;
  struct std___Rb_tree_node_int_* __retval362;
  this360 = v357;
  __arg361 = v358;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t363 = this360;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t364 = t363->_M_t;
  int* t365 = __arg361;
  struct std___Rb_tree_node_int_* r366 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int_(t364, t365);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval362 = r366;
  struct std___Rb_tree_node_int_* t367 = __retval362;
  return t367;
}

// function: _ZNSt9__rb_tree12_Node_traitsIiPiE23_S_insert_and_rebalanceEbPSt18_Rb_tree_node_baseS4_RS3_
void std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(_Bool v368, struct std___Rb_tree_node_base* v369, struct std___Rb_tree_node_base* v370, struct std___Rb_tree_node_base* v371) {
bb372:
  _Bool __insert_left373;
  struct std___Rb_tree_node_base* __x374;
  struct std___Rb_tree_node_base* __p375;
  struct std___Rb_tree_node_base* __header376;
  __insert_left373 = v368;
  __x374 = v369;
  __p375 = v370;
  __header376 = v371;
  _Bool t377 = __insert_left373;
  struct std___Rb_tree_node_base* t378 = __x374;
  struct std___Rb_tree_node_base* t379 = __p375;
  struct std___Rb_tree_node_base* t380 = __header376;
  std___Rb_tree_insert_and_rebalance(t377, t378, t379, t380);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE10_M_insert_IiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiEPSt18_Rb_tree_node_baseSB_OT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v381, struct std___Rb_tree_node_base* v382, struct std___Rb_tree_node_base* v383, int* v384, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v385) {
bb386:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this387;
  struct std___Rb_tree_node_base* __x388;
  struct std___Rb_tree_node_base* __p389;
  int* __v390;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen391;
  struct std___Rb_tree_iterator_int_ __retval392;
  _Bool __insert_left393;
  struct std___Rb_tree_node_base* __z394;
  this387 = v381;
  __x388 = v382;
  __p389 = v383;
  __v390 = v384;
  __node_gen391 = v385;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t395 = this387;
  struct std___Rb_tree_node_base* t396 = __x388;
  _Bool cast397 = (_Bool)t396;
  _Bool ternary398;
  if (cast397) {
    _Bool c399 = 1;
    ternary398 = (_Bool)c399;
  } else {
    struct std___Rb_tree_node_base* t400 = __p389;
    struct std___Rb_tree_node_base* r401 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t395);
    _Bool c402 = ((t400 == r401)) ? 1 : 0;
    ternary398 = (_Bool)c402;
  }
  _Bool ternary403;
  if (ternary398) {
    _Bool c404 = 1;
    ternary403 = (_Bool)c404;
  } else {
    struct std___Identity_int_ ref_tmp0405;
    struct std___Rb_tree_key_compare_std__less_int__* base406 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t395->_M_impl) + 0);
    struct std__less_int_* cast407 = (struct std__less_int_*)base406;
    int* t408 = __v390;
    int* r409 = std___Identity_int___operator___int___const(&ref_tmp0405, t408);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    struct std___Rb_tree_node_base* t410 = __p389;
    int* r411 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t410);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r412 = std__less_int___operator___int_const___int_const___const(cast407, r409, r411);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    ternary403 = (_Bool)r412;
  }
  __insert_left393 = ternary403;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t413 = __node_gen391;
  int* t414 = __v390;
  struct std___Rb_tree_node_int_* r415 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int__int____const(t413, t414);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* base416 = (struct std___Rb_tree_node_base*)((char *)r415 + 0);
  struct std___Rb_tree_node_base* r417 = std___Rb_tree_node_base___M_base_ptr___const(base416);
  __z394 = r417;
  _Bool t418 = __insert_left393;
  struct std___Rb_tree_node_base* t419 = __z394;
  struct std___Rb_tree_node_base* t420 = __p389;
  struct std___Rb_tree_header* base421 = (struct std___Rb_tree_header*)((char *)&(t395->_M_impl) + 8);
  std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(t418, t419, t420, &base421->_M_header);
  struct std___Rb_tree_header* base422 = (struct std___Rb_tree_header*)((char *)&(t395->_M_impl) + 8);
  unsigned long t423 = base422->_M_node_count;
  unsigned long u424 = t423 + 1;
  base422->_M_node_count = u424;
  struct std___Rb_tree_node_base* t425 = __z394;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval392, t425);
  struct std___Rb_tree_iterator_int_ t426 = __retval392;
  return t426;
}

// function: _ZNSt4pairISt17_Rb_tree_iteratorIiEbEC2IS1_bQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_
void _ZNSt4pairISt17_Rb_tree_iteratorIiEbEC2IS1_bQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(struct std__pair_std___Rb_tree_iterator_int___bool_* v427, struct std___Rb_tree_iterator_int_* v428, _Bool* v429) {
bb430:
  struct std__pair_std___Rb_tree_iterator_int___bool_* this431;
  struct std___Rb_tree_iterator_int_* __x432;
  _Bool* __y433;
  this431 = v427;
  __x432 = v428;
  __y433 = v429;
  struct std__pair_std___Rb_tree_iterator_int___bool_* t434 = this431;
  struct std____pair_base_std___Rb_tree_iterator_int___bool_* base435 = (struct std____pair_base_std___Rb_tree_iterator_int___bool_*)((char *)t434 + 0);
  struct std___Rb_tree_iterator_int_* t436 = __x432;
  t434->first = *t436; // copy
  _Bool* t437 = __y433;
  _Bool t438 = *t437;
  t434->second = t438;
  return;
}

// function: _ZNSt17_Rb_tree_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_iterator_int____Rb_tree_iterator(struct std___Rb_tree_iterator_int_* v439, struct std___Rb_tree_node_base* v440) {
bb441:
  struct std___Rb_tree_iterator_int_* this442;
  struct std___Rb_tree_node_base* __x443;
  this442 = v439;
  __x443 = v440;
  struct std___Rb_tree_iterator_int_* t444 = this442;
  struct std___Rb_tree_node_base* t445 = __x443;
  t444->_M_node = t445;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE16_M_insert_uniqueIiEESt4pairISt17_Rb_tree_iteratorIiEbEOT_
struct std__pair_std___Rb_tree_iterator_int___bool_ std__pair_std___Rb_tree_iterator_int___bool__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique_int_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v446, int* v447) {
bb448:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this449;
  int* __v450;
  struct std__pair_std___Rb_tree_iterator_int___bool_ __retval451;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __res452;
  struct std___Identity_int_ ref_tmp0453;
  struct std___Rb_tree_iterator_int_ ref_tmp3454;
  _Bool ref_tmp4455;
  this449 = v446;
  __v450 = v447;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t456 = this449;
  int* t457 = __v450;
  int* r458 = std___Identity_int___operator___int___const(&ref_tmp0453, t457);
  if (__cir_exc_active) {
    struct std__pair_std___Rb_tree_iterator_int___bool_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r459 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(t456, r458);
  if (__cir_exc_active) {
    struct std__pair_std___Rb_tree_iterator_int___bool_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __res452 = r459;
    struct std___Rb_tree_node_base* t460 = __res452.second;
    _Bool cast461 = (_Bool)t460;
    if (cast461) {
      struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node __an462;
      struct std___Rb_tree_iterator_int_ ref_tmp1463;
      _Bool ref_tmp2464;
      std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(&__an462, t456);
      if (__cir_exc_active) {
        struct std__pair_std___Rb_tree_iterator_int___bool_ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_base* t465 = __res452.first;
      struct std___Rb_tree_node_base* t466 = __res452.second;
      int* t467 = __v450;
      struct std___Rb_tree_iterator_int_ r468 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t456, t465, t466, t467, &__an462);
      if (__cir_exc_active) {
        struct std__pair_std___Rb_tree_iterator_int___bool_ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      ref_tmp1463 = r468;
      _Bool c469 = 1;
      ref_tmp2464 = c469;
      _ZNSt4pairISt17_Rb_tree_iteratorIiEbEC2IS1_bQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(&__retval451, &ref_tmp1463, &ref_tmp2464);
      struct std__pair_std___Rb_tree_iterator_int___bool_ t470 = __retval451;
      return t470;
    }
  struct std___Rb_tree_node_base* t471 = __res452.first;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&ref_tmp3454, t471);
  _Bool c472 = 0;
  ref_tmp4455 = c472;
  _ZNSt4pairISt17_Rb_tree_iteratorIiEbEC2IS1_bQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(&__retval451, &ref_tmp3454, &ref_tmp4455);
  struct std__pair_std___Rb_tree_iterator_int___bool_ t473 = __retval451;
  return t473;
}

// function: _ZNSt4pairISt23_Rb_tree_const_iteratorIiEbEC2IRSt17_Rb_tree_iteratorIiERbQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS8_S9_EEEEOT_OT0_
void _ZNSt4pairISt23_Rb_tree_const_iteratorIiEbEC2IRSt17_Rb_tree_iteratorIiERbQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS8_S9_EEEEOT_OT0_(struct std__pair_std___Rb_tree_const_iterator_int___bool_* v474, struct std___Rb_tree_iterator_int_* v475, _Bool* v476) {
bb477:
  struct std__pair_std___Rb_tree_const_iterator_int___bool_* this478;
  struct std___Rb_tree_iterator_int_* __x479;
  _Bool* __y480;
  this478 = v474;
  __x479 = v475;
  __y480 = v476;
  struct std__pair_std___Rb_tree_const_iterator_int___bool_* t481 = this478;
  struct std____pair_base_std___Rb_tree_const_iterator_int___bool_* base482 = (struct std____pair_base_std___Rb_tree_const_iterator_int___bool_*)((char *)t481 + 0);
  struct std___Rb_tree_iterator_int_* t483 = __x479;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&t481->first, t483);
  _Bool* t484 = __y480;
  _Bool t485 = *t484;
  t481->second = t485;
  return;
}

// function: _ZNSt3setIiSt4lessIiESaIiEE6insertEOi
struct std__pair_std___Rb_tree_const_iterator_int___bool_ std__set_int__std__less_int___std__allocator_int_____insert(struct std__set_int__std__less_int___std__allocator_int__* v486, int* v487) {
bb488:
  struct std__set_int__std__less_int___std__allocator_int__* this489;
  int* __x490;
  struct std__pair_std___Rb_tree_const_iterator_int___bool_ __retval491;
  struct std__pair_std___Rb_tree_iterator_int___bool_ __p492;
  this489 = v486;
  __x490 = v487;
  struct std__set_int__std__less_int___std__allocator_int__* t493 = this489;
  int* t494 = __x490;
  struct std__pair_std___Rb_tree_iterator_int___bool_ r495 = std__pair_std___Rb_tree_iterator_int___bool__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique_int_(&t493->_M_t, t494);
  if (__cir_exc_active) {
    struct std__pair_std___Rb_tree_const_iterator_int___bool_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __p492 = r495;
  _ZNSt4pairISt23_Rb_tree_const_iteratorIiEbEC2IRSt17_Rb_tree_iteratorIiERbQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS8_S9_EEEEOT_OT0_(&__retval491, &__p492.first, &__p492.second);
  struct std__pair_std___Rb_tree_const_iterator_int___bool_ t496 = __retval491;
  return t496;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE4sizeEv
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v497) {
bb498:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this499;
  unsigned long __retval500;
  this499 = v497;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t501 = this499;
  struct std___Rb_tree_header* base502 = (struct std___Rb_tree_header*)((char *)&(t501->_M_impl) + 8);
  unsigned long t503 = base502->_M_node_count;
  __retval500 = t503;
  unsigned long t504 = __retval500;
  return t504;
}

// function: _ZNKSt3setIiSt4lessIiESaIiEE4sizeEv
unsigned long std__set_int__std__less_int___std__allocator_int_____size___const(struct std__set_int__std__less_int___std__allocator_int__* v505) {
bb506:
  struct std__set_int__std__less_int___std__allocator_int__* this507;
  unsigned long __retval508;
  this507 = v505;
  struct std__set_int__std__less_int___std__allocator_int__* t509 = this507;
  unsigned long r510 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(&t509->_M_t);
  __retval508 = r510;
  unsigned long t511 = __retval508;
  return t511;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* v512, struct std___Rb_tree_node_base* v513) {
bb514:
  struct std___Rb_tree_const_iterator_int_* this515;
  struct std___Rb_tree_node_base* __x516;
  this515 = v512;
  __x516 = v513;
  struct std___Rb_tree_const_iterator_int_* t517 = this515;
  struct std___Rb_tree_node_base* t518 = __x516;
  t517->_M_node = t518;
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5beginEv
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v519) {
bb520:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this521;
  struct std___Rb_tree_const_iterator_int_ __retval522;
  this521 = v519;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t523 = this521;
  struct std___Rb_tree_header* base524 = (struct std___Rb_tree_header*)((char *)&(t523->_M_impl) + 8);
  struct std___Rb_tree_node_base* t525 = base524->_M_header._M_left;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval522, t525);
  struct std___Rb_tree_const_iterator_int_ t526 = __retval522;
  return t526;
}

// function: _ZNKSt3setIiSt4lessIiESaIiEE5beginEv
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____begin___const(struct std__set_int__std__less_int___std__allocator_int__* v527) {
bb528:
  struct std__set_int__std__less_int___std__allocator_int__* this529;
  struct std___Rb_tree_const_iterator_int_ __retval530;
  this529 = v527;
  struct std__set_int__std__less_int___std__allocator_int__* t531 = this529;
  struct std___Rb_tree_const_iterator_int_ r532 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(&t531->_M_t);
  __retval530 = r532;
  struct std___Rb_tree_const_iterator_int_ t533 = __retval530;
  return t533;
}

// function: _ZNKSt23_Rb_tree_const_iteratorIiEdeEv
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* v534) {
bb535:
  struct std___Rb_tree_const_iterator_int_* this536;
  int* __retval537;
  this536 = v534;
  struct std___Rb_tree_const_iterator_int_* t538 = this536;
  struct std___Rb_tree_node_base* t539 = t538->_M_node;
  struct std___Rb_tree_node_int_* derived540 = ((t539) ? (struct std___Rb_tree_node_int_*)((char *)t539 - 0) : (struct std___Rb_tree_node_int_*)0);
  int* r541 = std___Rb_tree_node_int____M_valptr___const(derived540);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval537 = r541;
  int* t542 = __retval537;
  return t542;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v543, int v544) {
bb545:
  int __a546;
  int __b547;
  int __retval548;
  __a546 = v543;
  __b547 = v544;
  int t549 = __a546;
  int t550 = __b547;
  int b551 = t549 | t550;
  __retval548 = b551;
  int t552 = __retval548;
  return t552;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v553) {
bb554:
  struct std__basic_ios_char__std__char_traits_char__* this555;
  int __retval556;
  this555 = v553;
  struct std__basic_ios_char__std__char_traits_char__* t557 = this555;
  struct std__ios_base* base558 = (struct std__ios_base*)((char *)t557 + 0);
  int t559 = base558->_M_streambuf_state;
  __retval556 = t559;
  int t560 = __retval556;
  return t560;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v561, int v562) {
bb563:
  struct std__basic_ios_char__std__char_traits_char__* this564;
  int __state565;
  this564 = v561;
  __state565 = v562;
  struct std__basic_ios_char__std__char_traits_char__* t566 = this564;
  int r567 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t566);
  if (__cir_exc_active) {
    return;
  }
  int t568 = __state565;
  int r569 = std__operator_(r567, t568);
  std__basic_ios_char__std__char_traits_char_____clear(t566, r569);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v570, char* v571) {
bb572:
  char* __c1573;
  char* __c2574;
  _Bool __retval575;
  __c1573 = v570;
  __c2574 = v571;
  char* t576 = __c1573;
  char t577 = *t576;
  int cast578 = (int)t577;
  char* t579 = __c2574;
  char t580 = *t579;
  int cast581 = (int)t580;
  _Bool c582 = ((cast578 == cast581)) ? 1 : 0;
  __retval575 = c582;
  _Bool t583 = __retval575;
  return t583;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v584) {
bb585:
  char* __p586;
  unsigned long __retval587;
  unsigned long __i588;
  __p586 = v584;
  unsigned long c589 = 0;
  __i588 = c589;
    char ref_tmp0590;
    while (1) {
      unsigned long t591 = __i588;
      char* t592 = __p586;
      char* ptr593 = &(t592)[t591];
      char c594 = 0;
      ref_tmp0590 = c594;
      _Bool r595 = __gnu_cxx__char_traits_char___eq(ptr593, &ref_tmp0590);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u596 = !r595;
      if (!u596) break;
      unsigned long t597 = __i588;
      unsigned long u598 = t597 + 1;
      __i588 = u598;
    }
  unsigned long t599 = __i588;
  __retval587 = t599;
  unsigned long t600 = __retval587;
  return t600;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v601) {
bb602:
  char* __s603;
  unsigned long __retval604;
  __s603 = v601;
    _Bool r605 = std____is_constant_evaluated();
    if (r605) {
      char* t606 = __s603;
      unsigned long r607 = __gnu_cxx__char_traits_char___length(t606);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval604 = r607;
      unsigned long t608 = __retval604;
      return t608;
    }
  char* t609 = __s603;
  unsigned long r610 = strlen(t609);
  __retval604 = r610;
  unsigned long t611 = __retval604;
  return t611;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v612, char* v613) {
bb614:
  struct std__basic_ostream_char__std__char_traits_char__* __out615;
  char* __s616;
  struct std__basic_ostream_char__std__char_traits_char__* __retval617;
  __out615 = v612;
  __s616 = v613;
    char* t618 = __s616;
    _Bool cast619 = (_Bool)t618;
    _Bool u620 = !cast619;
    if (u620) {
      struct std__basic_ostream_char__std__char_traits_char__* t621 = __out615;
      void** v622 = (void**)t621;
      void* v623 = *((void**)v622);
      unsigned char* cast624 = (unsigned char*)v623;
      long c625 = -24;
      unsigned char* ptr626 = &(cast624)[c625];
      long* cast627 = (long*)ptr626;
      long t628 = *cast627;
      unsigned char* cast629 = (unsigned char*)t621;
      unsigned char* ptr630 = &(cast629)[t628];
      struct std__basic_ostream_char__std__char_traits_char__* cast631 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr630;
      struct std__basic_ios_char__std__char_traits_char__* cast632 = (struct std__basic_ios_char__std__char_traits_char__*)cast631;
      int t633 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast632, t633);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t634 = __out615;
      char* t635 = __s616;
      char* t636 = __s616;
      unsigned long r637 = std__char_traits_char___length(t636);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast638 = (long)r637;
      struct std__basic_ostream_char__std__char_traits_char__* r639 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t634, t635, cast638);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t640 = __out615;
  __retval617 = t640;
  struct std__basic_ostream_char__std__char_traits_char__* t641 = __retval617;
  return t641;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5emptyEv
_Bool std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____empty___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v642) {
bb643:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this644;
  _Bool __retval645;
  this644 = v642;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t646 = this644;
  struct std___Rb_tree_header* base647 = (struct std___Rb_tree_header*)((char *)&(t646->_M_impl) + 8);
  unsigned long t648 = base647->_M_node_count;
  unsigned long c649 = 0;
  _Bool c650 = ((t648 == c649)) ? 1 : 0;
  __retval645 = c650;
  _Bool t651 = __retval645;
  return t651;
}

// function: _ZNKSt3setIiSt4lessIiESaIiEE5emptyEv
_Bool std__set_int__std__less_int___std__allocator_int_____empty___const(struct std__set_int__std__less_int___std__allocator_int__* v652) {
bb653:
  struct std__set_int__std__less_int___std__allocator_int__* this654;
  _Bool __retval655;
  this654 = v652;
  struct std__set_int__std__less_int___std__allocator_int__* t656 = this654;
  _Bool r657 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____empty___const(&t656->_M_t);
  __retval655 = r657;
  _Bool t658 = __retval655;
  return t658;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE3endEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v659) {
bb660:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this661;
  struct std___Rb_tree_iterator_int_ __retval662;
  this661 = v659;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t663 = this661;
  struct std___Rb_tree_node_base* r664 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t663);
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval662, r664);
  struct std___Rb_tree_iterator_int_ t665 = __retval662;
  return t665;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEppEv
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* v666) {
bb667:
  struct std___Rb_tree_const_iterator_int_* this668;
  struct std___Rb_tree_const_iterator_int_* __retval669;
  this668 = v666;
  struct std___Rb_tree_const_iterator_int_* t670 = this668;
  struct std___Rb_tree_node_base* t671 = t670->_M_node;
  struct std___Rb_tree_node_base* r672 = std___Rb_tree_increment(t671);
  t670->_M_node = r672;
  __retval669 = t670;
  struct std___Rb_tree_const_iterator_int_* t673 = __retval669;
  return t673;
}

// function: _ZNSt9__rb_tree12_Node_traitsIiPiE22_S_rebalance_for_eraseEPSt18_Rb_tree_node_baseRS3_
struct std___Rb_tree_node_base* std____rb_tree___Node_traits_int__int_____S_rebalance_for_erase(struct std___Rb_tree_node_base* v674, struct std___Rb_tree_node_base* v675) {
bb676:
  struct std___Rb_tree_node_base* __z677;
  struct std___Rb_tree_node_base* __header678;
  struct std___Rb_tree_node_base* __retval679;
  __z677 = v674;
  __header678 = v675;
  struct std___Rb_tree_node_base* t680 = __z677;
  struct std___Rb_tree_node_base* t681 = __header678;
  struct std___Rb_tree_node_base* r682 = std___Rb_tree_rebalance_for_erase(t680, t681);
  __retval679 = r682;
  struct std___Rb_tree_node_base* t683 = __retval679;
  return t683;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_erase_auxESt23_Rb_tree_const_iteratorIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v684, struct std___Rb_tree_const_iterator_int_ v685) {
bb686:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this687;
  struct std___Rb_tree_const_iterator_int_ __position688;
  struct std___Rb_tree_node_base* __y689;
  this687 = v684;
  __position688 = v685;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t690 = this687;
  struct std___Rb_tree_node_base* t691 = __position688._M_node;
  struct std___Rb_tree_header* base692 = (struct std___Rb_tree_header*)((char *)&(t690->_M_impl) + 8);
  struct std___Rb_tree_node_base* r693 = std____rb_tree___Node_traits_int__int_____S_rebalance_for_erase(t691, &base692->_M_header);
  __y689 = r693;
  struct std___Rb_tree_node_base* t694 = __y689;
  struct std___Rb_tree_node_int_* derived695 = (struct std___Rb_tree_node_int_*)((char *)t694 - 0);
  struct std___Rb_tree_node_int_* r696 = std___Rb_tree_node_int____M_node_ptr(derived695);
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(t690, r696);
  struct std___Rb_tree_header* base697 = (struct std___Rb_tree_header*)((char *)&(t690->_M_impl) + 8);
  unsigned long t698 = base697->_M_node_count;
  unsigned long u699 = t698 - 1;
  base697->_M_node_count = u699;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5eraseB5cxx11ESt23_Rb_tree_const_iteratorIiE
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase_abi_cxx11_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v700, struct std___Rb_tree_const_iterator_int_ v701) {
bb702:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this703;
  struct std___Rb_tree_const_iterator_int_ __position704;
  struct std___Rb_tree_iterator_int_ __retval705;
  struct std___Rb_tree_const_iterator_int_ __result706;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0707;
  this703 = v700;
  __position704 = v701;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t708 = this703;
    do {
          struct std___Rb_tree_const_iterator_int_ ref_tmp0709;
          struct std___Rb_tree_iterator_int_ ref_tmp1710;
          struct std___Rb_tree_iterator_int_ r711 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(t708);
          ref_tmp1710 = r711;
          std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&ref_tmp0709, &ref_tmp1710);
          _Bool r712 = std__operator___2(&__position704, &ref_tmp0709);
          if (r712) {
            char* cast713 = (char*)&(_str_7);
            int c714 = 1818;
            char* cast715 = (char*)&(__PRETTY_FUNCTION____ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5eraseB5cxx11ESt23_Rb_tree_const_iteratorIiE);
            char* cast716 = (char*)&(_str_8);
            std____glibcxx_assert_fail(cast713, c714, cast715, cast716);
          }
      _Bool c717 = 0;
      if (!c717) break;
    } while (1);
  __result706 = __position704; // copy
  struct std___Rb_tree_const_iterator_int_* r718 = std___Rb_tree_const_iterator_int___operator__(&__result706);
  agg_tmp0707 = __position704; // copy
  struct std___Rb_tree_const_iterator_int_ t719 = agg_tmp0707;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux(t708, t719);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* t720 = __result706._M_node;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval705, t720);
  struct std___Rb_tree_iterator_int_ t721 = __retval705;
  return t721;
}

// function: _ZNSt3setIiSt4lessIiESaIiEE5eraseB5cxx11ESt23_Rb_tree_const_iteratorIiE
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____erase_abi_cxx11_(struct std__set_int__std__less_int___std__allocator_int__* v722, struct std___Rb_tree_const_iterator_int_ v723) {
bb724:
  struct std__set_int__std__less_int___std__allocator_int__* this725;
  struct std___Rb_tree_const_iterator_int_ __position726;
  struct std___Rb_tree_const_iterator_int_ __retval727;
  struct std___Rb_tree_iterator_int_ ref_tmp0728;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0729;
  this725 = v722;
  __position726 = v723;
  struct std__set_int__std__less_int___std__allocator_int__* t730 = this725;
  agg_tmp0729 = __position726; // copy
  struct std___Rb_tree_const_iterator_int_ t731 = agg_tmp0729;
  struct std___Rb_tree_iterator_int_ r732 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase_abi_cxx11_(&t730->_M_t, t731);
  if (__cir_exc_active) {
    struct std___Rb_tree_const_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  ref_tmp0728 = r732;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&__retval727, &ref_tmp0728);
  struct std___Rb_tree_const_iterator_int_ t733 = __retval727;
  return t733;
}

// function: _ZSteqRKSt23_Rb_tree_const_iteratorIiES2_
_Bool std__operator___2(struct std___Rb_tree_const_iterator_int_* v734, struct std___Rb_tree_const_iterator_int_* v735) {
bb736:
  struct std___Rb_tree_const_iterator_int_* __x737;
  struct std___Rb_tree_const_iterator_int_* __y738;
  _Bool __retval739;
  __x737 = v734;
  __y738 = v735;
  struct std___Rb_tree_const_iterator_int_* t740 = __x737;
  struct std___Rb_tree_node_base* t741 = t740->_M_node;
  struct std___Rb_tree_const_iterator_int_* t742 = __y738;
  struct std___Rb_tree_node_base* t743 = t742->_M_node;
  _Bool c744 = ((t741 == t743)) ? 1 : 0;
  __retval739 = c744;
  _Bool t745 = __retval739;
  return t745;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE3endEv
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v746) {
bb747:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this748;
  struct std___Rb_tree_const_iterator_int_ __retval749;
  this748 = v746;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t750 = this748;
  struct std___Rb_tree_node_base* r751 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t750);
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval749, r751);
  struct std___Rb_tree_const_iterator_int_ t752 = __retval749;
  return t752;
}

// function: _ZNKSt3setIiSt4lessIiESaIiEE3endEv
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____end___const(struct std__set_int__std__less_int___std__allocator_int__* v753) {
bb754:
  struct std__set_int__std__less_int___std__allocator_int__* this755;
  struct std___Rb_tree_const_iterator_int_ __retval756;
  this755 = v753;
  struct std__set_int__std__less_int___std__allocator_int__* t757 = this755;
  struct std___Rb_tree_const_iterator_int_ r758 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(&t757->_M_t);
  __retval756 = r758;
  struct std___Rb_tree_const_iterator_int_ t759 = __retval756;
  return t759;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v760, void* v761) {
bb762:
  struct std__basic_ostream_char__std__char_traits_char__* this763;
  void* __pf764;
  struct std__basic_ostream_char__std__char_traits_char__* __retval765;
  this763 = v760;
  __pf764 = v761;
  struct std__basic_ostream_char__std__char_traits_char__* t766 = this763;
  void* t767 = __pf764;
  struct std__basic_ostream_char__std__char_traits_char__* r768 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t767)(t766);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval765 = r768;
  struct std__basic_ostream_char__std__char_traits_char__* t769 = __retval765;
  return t769;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v770) {
bb771:
  struct std__basic_ostream_char__std__char_traits_char__* __os772;
  struct std__basic_ostream_char__std__char_traits_char__* __retval773;
  __os772 = v770;
  struct std__basic_ostream_char__std__char_traits_char__* t774 = __os772;
  struct std__basic_ostream_char__std__char_traits_char__* r775 = std__ostream__flush(t774);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval773 = r775;
  struct std__basic_ostream_char__std__char_traits_char__* t776 = __retval773;
  return t776;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v777) {
bb778:
  struct std__ctype_char_* __f779;
  struct std__ctype_char_* __retval780;
  __f779 = v777;
    struct std__ctype_char_* t781 = __f779;
    _Bool cast782 = (_Bool)t781;
    _Bool u783 = !cast782;
    if (u783) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t784 = __f779;
  __retval780 = t784;
  struct std__ctype_char_* t785 = __retval780;
  return t785;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v786, char v787) {
bb788:
  struct std__ctype_char_* this789;
  char __c790;
  char __retval791;
  this789 = v786;
  __c790 = v787;
  struct std__ctype_char_* t792 = this789;
    char t793 = t792->_M_widen_ok;
    _Bool cast794 = (_Bool)t793;
    if (cast794) {
      char t795 = __c790;
      unsigned char cast796 = (unsigned char)t795;
      unsigned long cast797 = (unsigned long)cast796;
      char t798 = t792->_M_widen[cast797];
      __retval791 = t798;
      char t799 = __retval791;
      return t799;
    }
  std__ctype_char____M_widen_init___const(t792);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t800 = __c790;
  void** v801 = (void**)t792;
  void* v802 = *((void**)v801);
  char vcall805 = (char)__VERIFIER_virtual_call_char_char(t792, 6, t800);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval791 = vcall805;
  char t806 = __retval791;
  return t806;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v807, char v808) {
bb809:
  struct std__basic_ios_char__std__char_traits_char__* this810;
  char __c811;
  char __retval812;
  this810 = v807;
  __c811 = v808;
  struct std__basic_ios_char__std__char_traits_char__* t813 = this810;
  struct std__ctype_char_* t814 = t813->_M_ctype;
  struct std__ctype_char_* r815 = std__ctype_char__const__std____check_facet_std__ctype_char___(t814);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t816 = __c811;
  char r817 = std__ctype_char___widen_char__const(r815, t816);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval812 = r817;
  char t818 = __retval812;
  return t818;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v819) {
bb820:
  struct std__basic_ostream_char__std__char_traits_char__* __os821;
  struct std__basic_ostream_char__std__char_traits_char__* __retval822;
  __os821 = v819;
  struct std__basic_ostream_char__std__char_traits_char__* t823 = __os821;
  struct std__basic_ostream_char__std__char_traits_char__* t824 = __os821;
  void** v825 = (void**)t824;
  void* v826 = *((void**)v825);
  unsigned char* cast827 = (unsigned char*)v826;
  long c828 = -24;
  unsigned char* ptr829 = &(cast827)[c828];
  long* cast830 = (long*)ptr829;
  long t831 = *cast830;
  unsigned char* cast832 = (unsigned char*)t824;
  unsigned char* ptr833 = &(cast832)[t831];
  struct std__basic_ostream_char__std__char_traits_char__* cast834 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr833;
  struct std__basic_ios_char__std__char_traits_char__* cast835 = (struct std__basic_ios_char__std__char_traits_char__*)cast834;
  char c836 = 10;
  char r837 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast835, c836);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r838 = std__ostream__put(t823, r837);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r839 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r838);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval822 = r839;
  struct std__basic_ostream_char__std__char_traits_char__* t840 = __retval822;
  return t840;
}

// function: _ZNSt3setIiSt4lessIiESaIiEED2Ev
void std__set_int__std__less_int___std__allocator_int______set(struct std__set_int__std__less_int___std__allocator_int__* v841) {
bb842:
  struct std__set_int__std__less_int___std__allocator_int__* this843;
  this843 = v841;
  struct std__set_int__std__less_int___std__allocator_int__* t844 = this843;
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(&t844->_M_t);
  }
  return;
}

// function: main
int main() {
bb845:
  int __retval846;
  struct std__set_int__std__less_int___std__allocator_int__ myset847;
  int ref_tmp0848;
  struct std__pair_std___Rb_tree_const_iterator_int___bool_ agg_tmp0849;
  int ref_tmp1850;
  struct std__pair_std___Rb_tree_const_iterator_int___bool_ agg_tmp1851;
  int ref_tmp2852;
  struct std__pair_std___Rb_tree_const_iterator_int___bool_ agg_tmp2853;
  struct std___Rb_tree_const_iterator_int_ it854;
  struct std___Rb_tree_const_iterator_int_ ref_tmp4855;
  struct std___Rb_tree_const_iterator_int_ ref_tmp5856;
  int c857 = 0;
  __retval846 = c857;
  std__set_int__std__less_int___std__allocator_int_____set(&myset847);
    int c858 = 20;
    ref_tmp0848 = c858;
    struct std__pair_std___Rb_tree_const_iterator_int___bool_ r859 = std__set_int__std__less_int___std__allocator_int_____insert(&myset847, &ref_tmp0848);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset847);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp0849 = r859;
    int c860 = 30;
    ref_tmp1850 = c860;
    struct std__pair_std___Rb_tree_const_iterator_int___bool_ r861 = std__set_int__std__less_int___std__allocator_int_____insert(&myset847, &ref_tmp1850);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset847);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp1851 = r861;
    int c862 = 10;
    ref_tmp2852 = c862;
    struct std__pair_std___Rb_tree_const_iterator_int___bool_ r863 = std__set_int__std__less_int___std__allocator_int_____insert(&myset847, &ref_tmp2852);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset847);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp2853 = r863;
    unsigned long r864 = std__set_int__std__less_int___std__allocator_int_____size___const(&myset847);
    unsigned long c865 = 3;
    _Bool c866 = ((r864 == c865)) ? 1 : 0;
    if (c866) {
    } else {
      char* cast867 = (char*)&(_str);
      char* c868 = _str_1;
      unsigned int c869 = 20;
      char* cast870 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast867, c868, c869, cast870);
    }
    struct std___Rb_tree_const_iterator_int_ r871 = std__set_int__std__less_int___std__allocator_int_____begin___const(&myset847);
    it854 = r871;
    int* r872 = std___Rb_tree_const_iterator_int___operator____const(&it854);
    int t873 = *r872;
    int c874 = 10;
    _Bool c875 = ((t873 == c874)) ? 1 : 0;
    if (c875) {
    } else {
      char* cast876 = (char*)&(_str_2);
      char* c877 = _str_1;
      unsigned int c878 = 22;
      char* cast879 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast876, c877, c878, cast879);
    }
    char* cast880 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r881 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast880);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset847);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      while (1) {
        _Bool r882 = std__set_int__std__less_int___std__allocator_int_____empty___const(&myset847);
        _Bool u883 = !r882;
        if (!u883) break;
          struct std___Rb_tree_const_iterator_int_ ref_tmp3884;
          struct std___Rb_tree_const_iterator_int_ agg_tmp3885;
          struct std___Rb_tree_const_iterator_int_ agg_tmp4886;
          char* cast887 = (char*)&(_str_4);
          struct std__basic_ostream_char__std__char_traits_char__* r888 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast887);
          if (__cir_exc_active) {
            {
              std__set_int__std__less_int___std__allocator_int______set(&myset847);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          struct std___Rb_tree_const_iterator_int_ r889 = std__set_int__std__less_int___std__allocator_int_____begin___const(&myset847);
          ref_tmp3884 = r889;
          int* r890 = std___Rb_tree_const_iterator_int___operator____const(&ref_tmp3884);
          int t891 = *r890;
          struct std__basic_ostream_char__std__char_traits_char__* r892 = std__ostream__operator__(r888, t891);
          if (__cir_exc_active) {
            {
              std__set_int__std__less_int___std__allocator_int______set(&myset847);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          struct std___Rb_tree_const_iterator_int_ r893 = std__set_int__std__less_int___std__allocator_int_____begin___const(&myset847);
          agg_tmp3885 = r893;
          struct std___Rb_tree_const_iterator_int_ t894 = agg_tmp3885;
          struct std___Rb_tree_const_iterator_int_ r895 = std__set_int__std__less_int___std__allocator_int_____erase_abi_cxx11_(&myset847, t894);
          if (__cir_exc_active) {
            {
              std__set_int__std__less_int___std__allocator_int______set(&myset847);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          agg_tmp4886 = r895;
      }
    struct std___Rb_tree_const_iterator_int_ r896 = std__set_int__std__less_int___std__allocator_int_____begin___const(&myset847);
    ref_tmp4855 = r896;
    struct std___Rb_tree_const_iterator_int_ r897 = std__set_int__std__less_int___std__allocator_int_____end___const(&myset847);
    ref_tmp5856 = r897;
    _Bool r898 = std__operator___2(&ref_tmp4855, &ref_tmp5856);
    if (r898) {
    } else {
      char* cast899 = (char*)&(_str_5);
      char* c900 = _str_1;
      unsigned int c901 = 29;
      char* cast902 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast899, c900, c901, cast902);
    }
    unsigned long r903 = std__set_int__std__less_int___std__allocator_int_____size___const(&myset847);
    unsigned long c904 = 0;
    _Bool c905 = ((r903 == c904)) ? 1 : 0;
    if (c905) {
    } else {
      char* cast906 = (char*)&(_str_6);
      char* c907 = _str_1;
      unsigned int c908 = 30;
      char* cast909 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast906, c907, c908, cast909);
    }
    struct std__basic_ostream_char__std__char_traits_char__* r910 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset847);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c911 = 0;
    __retval846 = c911;
    int t912 = __retval846;
    int ret_val913 = t912;
    {
      std__set_int__std__less_int___std__allocator_int______set(&myset847);
    }
    return ret_val913;
  int t914 = __retval846;
  return t914;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v915) {
bb916:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this917;
  this917 = v915;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t918 = this917;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(&t918->_M_impl);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v919) {
bb920:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this921;
  this921 = v919;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t922 = this921;
    struct std___Rb_tree_node_int_* r923 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(t922);
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t922, r923);
    if (__cir_exc_active) {
      {
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t922->_M_impl);
      }
      return;
    }
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t922->_M_impl);
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v924) {
bb925:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this926;
  this926 = v924;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t927 = this926;
  struct std__allocator_std___Rb_tree_node_int__* base928 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t927 + 0);
  std__allocator_std___Rb_tree_node_int_____allocator(base928);
    struct std___Rb_tree_key_compare_std__less_int__* base929 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)t927 + 0);
    std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(base929);
    struct std___Rb_tree_header* base930 = (struct std___Rb_tree_header*)((char *)t927 + 8);
    std___Rb_tree_header___Rb_tree_header(base930);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v931) {
bb932:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this933;
  this933 = v931;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t934 = this933;
  {
    struct std__allocator_std___Rb_tree_node_int__* base935 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t934 + 0);
    std__allocator_std___Rb_tree_node_int______allocator(base935);
  }
  return;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEEC2Ev
void std____new_allocator_std___Rb_tree_node_int_______new_allocator(struct std____new_allocator_std___Rb_tree_node_int__* v936) {
bb937:
  struct std____new_allocator_std___Rb_tree_node_int__* this938;
  this938 = v936;
  struct std____new_allocator_std___Rb_tree_node_int__* t939 = this938;
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEEC2Ev
void std__allocator_std___Rb_tree_node_int_____allocator(struct std__allocator_std___Rb_tree_node_int__* v940) {
bb941:
  struct std__allocator_std___Rb_tree_node_int__* this942;
  this942 = v940;
  struct std__allocator_std___Rb_tree_node_int__* t943 = this942;
  struct std____new_allocator_std___Rb_tree_node_int__* base944 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t943 + 0);
  std____new_allocator_std___Rb_tree_node_int_______new_allocator(base944);
  return;
}

// function: _ZNSt20_Rb_tree_key_compareISt4lessIiEEC2Ev
void std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(struct std___Rb_tree_key_compare_std__less_int__* v945) {
bb946:
  struct std___Rb_tree_key_compare_std__less_int__* this947;
  this947 = v945;
  return;
}

// function: _ZNSt15_Rb_tree_header8_M_resetEv
void std___Rb_tree_header___M_reset(struct std___Rb_tree_header* v948) {
bb949:
  struct std___Rb_tree_header* this950;
  this950 = v948;
  struct std___Rb_tree_header* t951 = this950;
  struct std___Rb_tree_node_base* c952 = ((void*)0);
  t951->_M_header._M_parent = c952;
  t951->_M_header._M_left = &t951->_M_header;
  t951->_M_header._M_right = &t951->_M_header;
  unsigned long c953 = 0;
  t951->_M_node_count = c953;
  return;
}

// function: _ZNSt15_Rb_tree_headerC2Ev
void std___Rb_tree_header___Rb_tree_header(struct std___Rb_tree_header* v954) {
bb955:
  struct std___Rb_tree_header* this956;
  this956 = v954;
  struct std___Rb_tree_header* t957 = this956;
  unsigned int c958 = 0;
  t957->_M_header._M_color = c958;
  std___Rb_tree_header___M_reset(t957);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEED2Ev
void std__allocator_std___Rb_tree_node_int______allocator(struct std__allocator_std___Rb_tree_node_int__* v959) {
bb960:
  struct std__allocator_std___Rb_tree_node_int__* this961;
  this961 = v959;
  struct std__allocator_std___Rb_tree_node_int__* t962 = this961;
  return;
}

// function: _ZNSt13_Rb_tree_nodeIiE11_M_node_ptrEv
struct std___Rb_tree_node_int_* std___Rb_tree_node_int____M_node_ptr(struct std___Rb_tree_node_int_* v963) {
bb964:
  struct std___Rb_tree_node_int_* this965;
  struct std___Rb_tree_node_int_* __retval966;
  this965 = v963;
  struct std___Rb_tree_node_int_* t967 = this965;
  __retval966 = t967;
  struct std___Rb_tree_node_int_* t968 = __retval966;
  return t968;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(struct std___Rb_tree_node_int_* v969) {
bb970:
  struct std___Rb_tree_node_int_* __x971;
  struct std___Rb_tree_node_int_* __retval972;
  __x971 = v969;
  struct std___Rb_tree_node_int_* t973 = __x971;
  struct std___Rb_tree_node_base* base974 = (struct std___Rb_tree_node_base*)((char *)t973 + 0);
  struct std___Rb_tree_node_base* t975 = base974->_M_right;
  _Bool cast976 = (_Bool)t975;
  struct std___Rb_tree_node_int_* ternary977;
  if (cast976) {
    struct std___Rb_tree_node_int_* t978 = __x971;
    struct std___Rb_tree_node_base* base979 = (struct std___Rb_tree_node_base*)((char *)t978 + 0);
    struct std___Rb_tree_node_base* t980 = base979->_M_right;
    struct std___Rb_tree_node_int_* derived981 = (struct std___Rb_tree_node_int_*)((char *)t980 - 0);
    struct std___Rb_tree_node_int_* r982 = std___Rb_tree_node_int____M_node_ptr(derived981);
    ternary977 = (struct std___Rb_tree_node_int_*)r982;
  } else {
    struct std___Rb_tree_node_int_* c983 = ((void*)0);
    ternary977 = (struct std___Rb_tree_node_int_*)c983;
  }
  __retval972 = ternary977;
  struct std___Rb_tree_node_int_* t984 = __retval972;
  return t984;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(struct std___Rb_tree_node_int_* v985) {
bb986:
  struct std___Rb_tree_node_int_* __x987;
  struct std___Rb_tree_node_int_* __retval988;
  __x987 = v985;
  struct std___Rb_tree_node_int_* t989 = __x987;
  struct std___Rb_tree_node_base* base990 = (struct std___Rb_tree_node_base*)((char *)t989 + 0);
  struct std___Rb_tree_node_base* t991 = base990->_M_left;
  _Bool cast992 = (_Bool)t991;
  struct std___Rb_tree_node_int_* ternary993;
  if (cast992) {
    struct std___Rb_tree_node_int_* t994 = __x987;
    struct std___Rb_tree_node_base* base995 = (struct std___Rb_tree_node_base*)((char *)t994 + 0);
    struct std___Rb_tree_node_base* t996 = base995->_M_left;
    struct std___Rb_tree_node_int_* derived997 = (struct std___Rb_tree_node_int_*)((char *)t996 - 0);
    struct std___Rb_tree_node_int_* r998 = std___Rb_tree_node_int____M_node_ptr(derived997);
    ternary993 = (struct std___Rb_tree_node_int_*)r998;
  } else {
    struct std___Rb_tree_node_int_* c999 = ((void*)0);
    ternary993 = (struct std___Rb_tree_node_int_*)c999;
  }
  __retval988 = ternary993;
  struct std___Rb_tree_node_int_* t1000 = __retval988;
  return t1000;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1001) {
bb1002:
  int* __location1003;
  __location1003 = v1001;
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(struct std__allocator_std___Rb_tree_node_int__* v1004, int* v1005) {
bb1006:
  struct std__allocator_std___Rb_tree_node_int__* __a1007;
  int* __p1008;
  __a1007 = v1004;
  __p1008 = v1005;
  int* t1009 = __p1008;
  void_std__destroy_at_int_(t1009);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___Rb_tree_node_int__* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1010) {
bb1011:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1012;
  struct std__allocator_std___Rb_tree_node_int__* __retval1013;
  this1012 = v1010;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1014 = this1012;
  struct std__allocator_std___Rb_tree_node_int__* base1015 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)&(t1014->_M_impl) + 0);
  __retval1013 = base1015;
  struct std__allocator_std___Rb_tree_node_int__* t1016 = __retval1013;
  return t1016;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v1017) {
bb1018:
  struct __gnu_cxx____aligned_membuf_int_* this1019;
  void* __retval1020;
  this1019 = v1017;
  struct __gnu_cxx____aligned_membuf_int_* t1021 = this1019;
  void* cast1022 = (void*)&(t1021->_M_storage);
  __retval1020 = cast1022;
  void* t1023 = __retval1020;
  return t1023;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v1024) {
bb1025:
  struct __gnu_cxx____aligned_membuf_int_* this1026;
  int* __retval1027;
  this1026 = v1024;
  struct __gnu_cxx____aligned_membuf_int_* t1028 = this1026;
  void* r1029 = __gnu_cxx____aligned_membuf_int____M_addr(t1028);
  int* cast1030 = (int*)r1029;
  __retval1027 = cast1030;
  int* t1031 = __retval1027;
  return t1031;
}

// function: _ZNSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr(struct std___Rb_tree_node_int_* v1032) {
bb1033:
  struct std___Rb_tree_node_int_* this1034;
  int* __retval1035;
  this1034 = v1032;
  struct std___Rb_tree_node_int_* t1036 = this1034;
  int* r1037 = __gnu_cxx____aligned_membuf_int____M_ptr(&t1036->_M_storage);
  __retval1035 = r1037;
  int* t1038 = __retval1035;
  return t1038;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_destroy_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1039, struct std___Rb_tree_node_int_* v1040) {
bb1041:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1042;
  struct std___Rb_tree_node_int_* __p1043;
  this1042 = v1039;
  __p1043 = v1040;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1044 = this1042;
  struct std__allocator_std___Rb_tree_node_int__* r1045 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t1044);
  struct std___Rb_tree_node_int_* t1046 = __p1043;
  int* r1047 = std___Rb_tree_node_int____M_valptr(t1046);
  if (__cir_exc_active) {
    return;
  }
  void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(r1045, r1047);
  struct std___Rb_tree_node_int_* t1048 = __p1043;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1049:
  _Bool __retval1050;
    _Bool c1051 = 0;
    __retval1050 = c1051;
    _Bool t1052 = __retval1050;
    return t1052;
  abort();
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___Rb_tree_node_int_____deallocate(struct std____new_allocator_std___Rb_tree_node_int__* v1053, struct std___Rb_tree_node_int_* v1054, unsigned long v1055) {
bb1056:
  struct std____new_allocator_std___Rb_tree_node_int__* this1057;
  struct std___Rb_tree_node_int_* __p1058;
  unsigned long __n1059;
  this1057 = v1053;
  __p1058 = v1054;
  __n1059 = v1055;
  struct std____new_allocator_std___Rb_tree_node_int__* t1060 = this1057;
    unsigned long c1061 = 8;
    unsigned long c1062 = 16;
    _Bool c1063 = ((c1061 > c1062)) ? 1 : 0;
    if (c1063) {
      struct std___Rb_tree_node_int_* t1064 = __p1058;
      void* cast1065 = (void*)t1064;
      unsigned long t1066 = __n1059;
      unsigned long c1067 = 40;
      unsigned long b1068 = t1066 * c1067;
      unsigned long c1069 = 8;
      operator_delete_3(cast1065, b1068, c1069);
      return;
    }
  struct std___Rb_tree_node_int_* t1070 = __p1058;
  void* cast1071 = (void*)t1070;
  unsigned long t1072 = __n1059;
  unsigned long c1073 = 40;
  unsigned long b1074 = t1072 * c1073;
  operator_delete_2(cast1071, b1074);
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE10deallocateEPS0_m
void std__allocator_std___Rb_tree_node_int_____deallocate(struct std__allocator_std___Rb_tree_node_int__* v1075, struct std___Rb_tree_node_int_* v1076, unsigned long v1077) {
bb1078:
  struct std__allocator_std___Rb_tree_node_int__* this1079;
  struct std___Rb_tree_node_int_* __p1080;
  unsigned long __n1081;
  this1079 = v1075;
  __p1080 = v1076;
  __n1081 = v1077;
  struct std__allocator_std___Rb_tree_node_int__* t1082 = this1079;
    _Bool r1083 = std____is_constant_evaluated();
    if (r1083) {
      struct std___Rb_tree_node_int_* t1084 = __p1080;
      void* cast1085 = (void*)t1084;
      operator_delete(cast1085);
      return;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base1086 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t1082 + 0);
  struct std___Rb_tree_node_int_* t1087 = __p1080;
  unsigned long t1088 = __n1081;
  std____new_allocator_std___Rb_tree_node_int_____deallocate(base1086, t1087, t1088);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(struct std__allocator_std___Rb_tree_node_int__* v1089, struct std___Rb_tree_node_int_* v1090, unsigned long v1091) {
bb1092:
  struct std__allocator_std___Rb_tree_node_int__* __a1093;
  struct std___Rb_tree_node_int_* __p1094;
  unsigned long __n1095;
  __a1093 = v1089;
  __p1094 = v1090;
  __n1095 = v1091;
  struct std__allocator_std___Rb_tree_node_int__* t1096 = __a1093;
  struct std___Rb_tree_node_int_* t1097 = __p1094;
  unsigned long t1098 = __n1095;
  std__allocator_std___Rb_tree_node_int_____deallocate(t1096, t1097, t1098);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_put_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1099, struct std___Rb_tree_node_int_* v1100) {
bb1101:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1102;
  struct std___Rb_tree_node_int_* __p1103;
  this1102 = v1099;
  __p1103 = v1100;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1104 = this1102;
  struct std__allocator_std___Rb_tree_node_int__* r1105 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t1104);
  struct std___Rb_tree_node_int_* t1106 = __p1103;
  unsigned long c1107 = 1;
  std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(r1105, t1106, c1107);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_drop_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1108, struct std___Rb_tree_node_int_* v1109) {
bb1110:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1111;
  struct std___Rb_tree_node_int_* __p1112;
  this1111 = v1108;
  __p1112 = v1109;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1113 = this1111;
  struct std___Rb_tree_node_int_* t1114 = __p1112;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(t1113, t1114);
  struct std___Rb_tree_node_int_* t1115 = __p1112;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t1113, t1115);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1116, struct std___Rb_tree_node_int_* v1117) {
bb1118:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1119;
  struct std___Rb_tree_node_int_* __x1120;
  this1119 = v1116;
  __x1120 = v1117;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1121 = this1119;
    while (1) {
      struct std___Rb_tree_node_int_* t1122 = __x1120;
      _Bool cast1123 = (_Bool)t1122;
      if (!cast1123) break;
        struct std___Rb_tree_node_int_* __y1124;
        struct std___Rb_tree_node_int_* t1125 = __x1120;
        struct std___Rb_tree_node_int_* r1126 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(t1125);
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t1121, r1126);
        if (__cir_exc_active) {
          return;
        }
        struct std___Rb_tree_node_int_* t1127 = __x1120;
        struct std___Rb_tree_node_int_* r1128 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(t1127);
        if (__cir_exc_active) {
          return;
        }
        __y1124 = r1128;
        struct std___Rb_tree_node_int_* t1129 = __x1120;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(t1121, t1129);
        struct std___Rb_tree_node_int_* t1130 = __y1124;
        __x1120 = t1130;
    }
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_M_begin_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1131) {
bb1132:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1133;
  struct std___Rb_tree_node_int_* __retval1134;
  struct std___Rb_tree_node_base* __begin1135;
  this1133 = v1131;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1136 = this1133;
  struct std___Rb_tree_header* base1137 = (struct std___Rb_tree_header*)((char *)&(t1136->_M_impl) + 8);
  struct std___Rb_tree_node_base* t1138 = base1137->_M_header._M_parent;
  __begin1135 = t1138;
  struct std___Rb_tree_node_base* t1139 = __begin1135;
  _Bool cast1140 = (_Bool)t1139;
  struct std___Rb_tree_node_int_* ternary1141;
  if (cast1140) {
    struct std___Rb_tree_node_base* t1142 = __begin1135;
    struct std___Rb_tree_node_int_* derived1143 = (struct std___Rb_tree_node_int_*)((char *)t1142 - 0);
    struct std___Rb_tree_node_int_* r1144 = std___Rb_tree_node_int____M_node_ptr(derived1143);
    ternary1141 = (struct std___Rb_tree_node_int_*)r1144;
  } else {
    struct std___Rb_tree_node_int_* c1145 = ((void*)0);
    ternary1141 = (struct std___Rb_tree_node_int_*)c1145;
  }
  __retval1134 = ternary1141;
  struct std___Rb_tree_node_int_* t1146 = __retval1134;
  return t1146;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2ERKSt17_Rb_tree_iteratorIiE
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(struct std___Rb_tree_const_iterator_int_* v1147, struct std___Rb_tree_iterator_int_* v1148) {
bb1149:
  struct std___Rb_tree_const_iterator_int_* this1150;
  struct std___Rb_tree_iterator_int_* __it1151;
  this1150 = v1147;
  __it1151 = v1148;
  struct std___Rb_tree_const_iterator_int_* t1152 = this1150;
  struct std___Rb_tree_iterator_int_* t1153 = __it1151;
  struct std___Rb_tree_node_base* t1154 = t1153->_M_node;
  t1152->_M_node = t1154;
  return;
}

