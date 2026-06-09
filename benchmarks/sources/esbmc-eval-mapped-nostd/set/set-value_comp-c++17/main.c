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
struct std__binary_function_int__int__bool_ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___ { unsigned char __field0; };
struct std__less_int_ { unsigned char __field0; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__pair_std___Rb_tree_const_iterator_int___bool_ { struct std___Rb_tree_const_iterator_int_ first; _Bool second; unsigned char __field2[7]; } __attribute__((packed));
struct std__pair_std___Rb_tree_iterator_int___bool_ { struct std___Rb_tree_iterator_int_ first; _Bool second; unsigned char __field2[7]; } __attribute__((packed));
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ { struct std___Rb_tree_const_iterator_int_ current; };
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
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[16] = "myset contains:";
char _str_1[13] = "highest == 5";
char _str_2[112] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/set/set-value_comp-c++17/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[9] = "*it == 0";
char _str_4[2] = " ";
void std__set_int__std__less_int___std__allocator_int_____set(struct std__set_int__std__less_int___std__allocator_int__* p0);
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(struct std___Rb_tree_const_iterator_int_* p0);
struct std__less_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____key_comp___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std__less_int_ std__set_int__std__less_int___std__allocator_int_____value_comp___const(struct std__set_int__std__less_int___std__allocator_int__* p0);
struct std__binary_function_int__int__bool_* std__binary_function_int__int__bool___operator_(struct std__binary_function_int__int__bool_* p0, struct std__binary_function_int__int__bool_* p1);
struct std__less_int_* std__less_int___operator_(struct std__less_int_* p0, struct std__less_int_* p1);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_node_base* std___Rb_tree_node_base___M_base_ptr___const(struct std___Rb_tree_node_base* p0);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
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
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator__(struct std___Rb_tree_iterator_int_* p0);
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* p0, struct std___Rb_tree_node_base** p1, struct std___Rb_tree_node_base** p2);
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
int* std___Identity_int___operator___int_const___const(struct std___Identity_int_* p0, int* p1);
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
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int_const__(struct std__allocator_std___Rb_tree_node_int__* p0, int* p1, int* p2);
void void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int_const__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_int_* p1, int* p2);
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int_const__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int_const___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* p0, int* p1);
extern void std___Rb_tree_insert_and_rebalance(_Bool p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, struct std___Rb_tree_node_base* p3);
void std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(_Bool p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, struct std___Rb_tree_node_base* p3);
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int_const___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, int* p3, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* p4);
void _ZNSt4pairISt17_Rb_tree_iteratorIiEbEC2IS1_bQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(struct std__pair_std___Rb_tree_iterator_int___bool_* p0, struct std___Rb_tree_iterator_int_* p1, _Bool* p2);
void std___Rb_tree_iterator_int____Rb_tree_iterator(struct std___Rb_tree_iterator_int_* p0, struct std___Rb_tree_node_base* p1);
struct std__pair_std___Rb_tree_iterator_int___bool_ std__pair_std___Rb_tree_iterator_int___bool__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique_int_const__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
void _ZNSt4pairISt23_Rb_tree_const_iteratorIiEbEC2IRSt17_Rb_tree_iteratorIiERbQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS8_S9_EEEEOT_OT0_(struct std__pair_std___Rb_tree_const_iterator_int___bool_* p0, struct std___Rb_tree_iterator_int_* p1, _Bool* p2);
struct std__pair_std___Rb_tree_const_iterator_int___bool_ std__set_int__std__less_int___std__allocator_int_____insert(struct std__set_int__std__less_int___std__allocator_int__* p0, int* p1);
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
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void std__reverse_iterator_std___Rb_tree_const_iterator_int_____reverse_iterator(struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1);
struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____rbegin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ std__set_int__std__less_int___std__allocator_int_____rbegin___const(struct std__set_int__std__less_int___std__allocator_int__* p0);
extern struct std___Rb_tree_node_base* std___Rb_tree_decrement(struct std___Rb_tree_node_base* p0);
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* p0);
int* std__reverse_iterator_std___Rb_tree_const_iterator_int_____operator____const(struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____begin___const(struct std__set_int__std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_const_iterator_int_* p1);
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
_Bool std__less_int___operator___int_const___int_const___const(struct std__less_int_* p0, int* p1, int* p2);
extern struct std___Rb_tree_node_base* std___Rb_tree_increment(struct std___Rb_tree_node_base* p0);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_const_iterator_int___operator___2(struct std___Rb_tree_const_iterator_int_* p0, int p1);
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

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8key_compEv
struct std__less_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____key_comp___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v9) {
bb10:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this11;
  struct std__less_int_ __retval12;
  this11 = v9;
  struct std__less_int_ t13 = __retval12;
  return t13;
}

// function: _ZNKSt3setIiSt4lessIiESaIiEE10value_compEv
struct std__less_int_ std__set_int__std__less_int___std__allocator_int_____value_comp___const(struct std__set_int__std__less_int___std__allocator_int__* v14) {
bb15:
  struct std__set_int__std__less_int___std__allocator_int__* this16;
  struct std__less_int_ __retval17;
  this16 = v14;
  struct std__set_int__std__less_int___std__allocator_int__* t18 = this16;
  struct std__less_int_ r19 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____key_comp___const(&t18->_M_t);
  if (__cir_exc_active) {
    struct std__less_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval17 = r19;
  struct std__less_int_ t20 = __retval17;
  return t20;
}

// function: _ZNSt15binary_functionIiibEaSEOS0_
struct std__binary_function_int__int__bool_* std__binary_function_int__int__bool___operator_(struct std__binary_function_int__int__bool_* v21, struct std__binary_function_int__int__bool_* v22) {
bb23:
  struct std__binary_function_int__int__bool_* this24;
  struct std__binary_function_int__int__bool_* unnamed25;
  struct std__binary_function_int__int__bool_* __retval26;
  this24 = v21;
  unnamed25 = v22;
  struct std__binary_function_int__int__bool_* t27 = this24;
  __retval26 = t27;
  struct std__binary_function_int__int__bool_* t28 = __retval26;
  return t28;
}

// function: _ZNSt4lessIiEaSEOS0_
struct std__less_int_* std__less_int___operator_(struct std__less_int_* v29, struct std__less_int_* v30) {
bb31:
  struct std__less_int_* this32;
  struct std__less_int_* unnamed33;
  struct std__less_int_* __retval34;
  this32 = v29;
  unnamed33 = v30;
  struct std__less_int_* t35 = this32;
  struct std__binary_function_int__int__bool_* base36 = (struct std__binary_function_int__int__bool_*)((char *)t35 + 0);
  struct std__less_int_* t37 = unnamed33;
  struct std__binary_function_int__int__bool_* base38 = (struct std__binary_function_int__int__bool_*)((char *)t37 + 0);
  struct std__binary_function_int__int__bool_* r39 = std__binary_function_int__int__bool___operator_(base36, base38);
  __retval34 = t35;
  struct std__less_int_* t40 = __retval34;
  return t40;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_beginEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v41) {
bb42:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this43;
  struct std___Rb_tree_node_base* __retval44;
  this43 = v41;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t45 = this43;
  struct std___Rb_tree_header* base46 = (struct std___Rb_tree_header*)((char *)&(t45->_M_impl) + 8);
  struct std___Rb_tree_node_base* t47 = base46->_M_header._M_parent;
  __retval44 = t47;
  struct std___Rb_tree_node_base* t48 = __retval44;
  return t48;
}

// function: _ZNKSt18_Rb_tree_node_base11_M_base_ptrEv
struct std___Rb_tree_node_base* std___Rb_tree_node_base___M_base_ptr___const(struct std___Rb_tree_node_base* v49) {
bb50:
  struct std___Rb_tree_node_base* this51;
  struct std___Rb_tree_node_base* __retval52;
  this51 = v49;
  struct std___Rb_tree_node_base* t53 = this51;
  __retval52 = t53;
  struct std___Rb_tree_node_base* t54 = __retval52;
  return t54;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_M_endEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v55) {
bb56:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this57;
  struct std___Rb_tree_node_base* __retval58;
  this57 = v55;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t59 = this57;
  struct std___Rb_tree_header* base60 = (struct std___Rb_tree_header*)((char *)&(t59->_M_impl) + 8);
  struct std___Rb_tree_node_base* r61 = std___Rb_tree_node_base___M_base_ptr___const(&base60->_M_header);
  __retval58 = r61;
  struct std___Rb_tree_node_base* t62 = __retval58;
  return t62;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr___const(struct __gnu_cxx____aligned_membuf_int_* v63) {
bb64:
  struct __gnu_cxx____aligned_membuf_int_* this65;
  void* __retval66;
  this65 = v63;
  struct __gnu_cxx____aligned_membuf_int_* t67 = this65;
  void* cast68 = (void*)&(t67->_M_storage);
  __retval66 = cast68;
  void* t69 = __retval66;
  return t69;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr___const(struct __gnu_cxx____aligned_membuf_int_* v70) {
bb71:
  struct __gnu_cxx____aligned_membuf_int_* this72;
  int* __retval73;
  this72 = v70;
  struct __gnu_cxx____aligned_membuf_int_* t74 = this72;
  void* r75 = __gnu_cxx____aligned_membuf_int____M_addr___const(t74);
  int* cast76 = (int*)r75;
  __retval73 = cast76;
  int* t77 = __retval73;
  return t77;
}

// function: _ZNKSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr___const(struct std___Rb_tree_node_int_* v78) {
bb79:
  struct std___Rb_tree_node_int_* this80;
  int* __retval81;
  this80 = v78;
  struct std___Rb_tree_node_int_* t82 = this80;
  int* r83 = __gnu_cxx____aligned_membuf_int____M_ptr___const(&t82->_M_storage);
  __retval81 = r83;
  int* t84 = __retval81;
  return t84;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_S_keyERKSt13_Rb_tree_nodeIiE
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(struct std___Rb_tree_node_int_* v85) {
bb86:
  struct std___Rb_tree_node_int_* __node87;
  int* __retval88;
  struct std___Identity_int_ ref_tmp089;
  __node87 = v85;
  struct std___Rb_tree_node_int_* t90 = __node87;
  int* r91 = std___Rb_tree_node_int____M_valptr___const(t90);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r92 = std___Identity_int___operator___int_const___const(&ref_tmp089, r91);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval88 = r92;
  int* t93 = __retval88;
  return t93;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_S_keyEPSt18_Rb_tree_node_base
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(struct std___Rb_tree_node_base* v94) {
bb95:
  struct std___Rb_tree_node_base* __x96;
  int* __retval97;
  __x96 = v94;
  struct std___Rb_tree_node_base* t98 = __x96;
  struct std___Rb_tree_node_int_* derived99 = (struct std___Rb_tree_node_int_*)((char *)t98 - 0);
  int* r100 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(derived99);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval97 = r100;
  int* t101 = __retval97;
  return t101;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(struct std___Rb_tree_node_base* v102) {
bb103:
  struct std___Rb_tree_node_base* __x104;
  struct std___Rb_tree_node_base* __retval105;
  __x104 = v102;
  struct std___Rb_tree_node_base* t106 = __x104;
  struct std___Rb_tree_node_base* t107 = t106->_M_left;
  __retval105 = t107;
  struct std___Rb_tree_node_base* t108 = __retval105;
  return t108;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(struct std___Rb_tree_node_base* v109) {
bb110:
  struct std___Rb_tree_node_base* __x111;
  struct std___Rb_tree_node_base* __retval112;
  __x111 = v109;
  struct std___Rb_tree_node_base* t113 = __x111;
  struct std___Rb_tree_node_base* t114 = t113->_M_right;
  __retval112 = t114;
  struct std___Rb_tree_node_base* t115 = __retval112;
  return t115;
}

// function: _ZSteqRKSt17_Rb_tree_iteratorIiES2_
_Bool std__operator__(struct std___Rb_tree_iterator_int_* v116, struct std___Rb_tree_iterator_int_* v117) {
bb118:
  struct std___Rb_tree_iterator_int_* __x119;
  struct std___Rb_tree_iterator_int_* __y120;
  _Bool __retval121;
  __x119 = v116;
  __y120 = v117;
  struct std___Rb_tree_iterator_int_* t122 = __x119;
  struct std___Rb_tree_node_base* t123 = t122->_M_node;
  struct std___Rb_tree_iterator_int_* t124 = __y120;
  struct std___Rb_tree_node_base* t125 = t124->_M_node;
  _Bool c126 = ((t123 == t125)) ? 1 : 0;
  __retval121 = c126;
  _Bool t127 = __retval121;
  return t127;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5beginEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v128) {
bb129:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this130;
  struct std___Rb_tree_iterator_int_ __retval131;
  this130 = v128;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t132 = this130;
  struct std___Rb_tree_header* base133 = (struct std___Rb_tree_header*)((char *)&(t132->_M_impl) + 8);
  struct std___Rb_tree_node_base* t134 = base133->_M_header._M_left;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval131, t134);
  struct std___Rb_tree_iterator_int_ t135 = __retval131;
  return t135;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v136, struct std___Rb_tree_node_base** v137, struct std___Rb_tree_node_base** v138) {
bb139:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this140;
  struct std___Rb_tree_node_base** __x141;
  struct std___Rb_tree_node_base** __y142;
  this140 = v136;
  __x141 = v137;
  __y142 = v138;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t143 = this140;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base144 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t143 + 0);
  struct std___Rb_tree_node_base** t145 = __x141;
  struct std___Rb_tree_node_base* t146 = *t145;
  t143->first = t146;
  struct std___Rb_tree_node_base** t147 = __y142;
  struct std___Rb_tree_node_base* t148 = *t147;
  t143->second = t148;
  return;
}

// function: _ZNSt17_Rb_tree_iteratorIiEmmEv
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator__(struct std___Rb_tree_iterator_int_* v149) {
bb150:
  struct std___Rb_tree_iterator_int_* this151;
  struct std___Rb_tree_iterator_int_* __retval152;
  this151 = v149;
  struct std___Rb_tree_iterator_int_* t153 = this151;
  struct std___Rb_tree_node_base* t154 = t153->_M_node;
  struct std___Rb_tree_node_base* r155 = std___Rb_tree_decrement(t154);
  t153->_M_node = r155;
  __retval152 = t153;
  struct std___Rb_tree_iterator_int_* t156 = __retval152;
  return t156;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v157, struct std___Rb_tree_node_base** v158, struct std___Rb_tree_node_base** v159) {
bb160:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this161;
  struct std___Rb_tree_node_base** __x162;
  struct std___Rb_tree_node_base** __y163;
  this161 = v157;
  __x162 = v158;
  __y163 = v159;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t164 = this161;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base165 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t164 + 0);
  struct std___Rb_tree_node_base** t166 = __x162;
  struct std___Rb_tree_node_base* t167 = *t166;
  t164->first = t167;
  struct std___Rb_tree_node_base** t168 = __y163;
  struct std___Rb_tree_node_base* t169 = *t168;
  t164->second = t169;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE24_M_get_insert_unique_posERKi
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v170, int* v171) {
bb172:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this173;
  int* __k174;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval175;
  struct std___Rb_tree_node_base* __x176;
  struct std___Rb_tree_node_base* __y177;
  _Bool __comp178;
  struct std___Rb_tree_iterator_int_ __j179;
  struct std___Rb_tree_node_base* ref_tmp1180;
  this173 = v170;
  __k174 = v171;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t181 = this173;
  struct std___Rb_tree_node_base* r182 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t181);
  __x176 = r182;
  struct std___Rb_tree_node_base* r183 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t181);
  __y177 = r183;
  _Bool c184 = 1;
  __comp178 = c184;
    while (1) {
      struct std___Rb_tree_node_base* t185 = __x176;
      _Bool cast186 = (_Bool)t185;
      if (!cast186) break;
        struct std___Rb_tree_node_base* t187 = __x176;
        __y177 = t187;
        struct std___Rb_tree_key_compare_std__less_int__* base188 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t181->_M_impl) + 0);
        struct std__less_int_* cast189 = (struct std__less_int_*)base188;
        int* t190 = __k174;
        struct std___Rb_tree_node_base* t191 = __x176;
        int* r192 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t191);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r193 = std__less_int___operator___int_const___int_const___const(cast189, t190, r192);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        __comp178 = r193;
        _Bool t194 = __comp178;
        struct std___Rb_tree_node_base* ternary195;
        if (t194) {
          struct std___Rb_tree_node_base* t196 = __x176;
          struct std___Rb_tree_node_base* r197 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t196);
          ternary195 = (struct std___Rb_tree_node_base*)r197;
        } else {
          struct std___Rb_tree_node_base* t198 = __x176;
          struct std___Rb_tree_node_base* r199 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t198);
          ternary195 = (struct std___Rb_tree_node_base*)r199;
        }
        __x176 = ternary195;
    }
  struct std___Rb_tree_node_base* t200 = __y177;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__j179, t200);
    _Bool t201 = __comp178;
    if (t201) {
        struct std___Rb_tree_iterator_int_ ref_tmp0202;
        struct std___Rb_tree_iterator_int_ r203 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(t181);
        ref_tmp0202 = r203;
        _Bool r204 = std__operator__(&__j179, &ref_tmp0202);
        if (r204) {
          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval175, &__x176, &__y177);
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t205 = __retval175;
          return t205;
        } else {
          struct std___Rb_tree_iterator_int_* r206 = std___Rb_tree_iterator_int___operator__(&__j179);
        }
    }
    struct std___Rb_tree_key_compare_std__less_int__* base207 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t181->_M_impl) + 0);
    struct std__less_int_* cast208 = (struct std__less_int_*)base207;
    struct std___Rb_tree_node_base* t209 = __j179._M_node;
    int* r210 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t209);
    if (__cir_exc_active) {
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    int* t211 = __k174;
    _Bool r212 = std__less_int___operator___int_const___int_const___const(cast208, r210, t211);
    if (__cir_exc_active) {
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    if (r212) {
      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval175, &__x176, &__y177);
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t213 = __retval175;
      return t213;
    }
  struct std___Rb_tree_node_base* c214 = ((void*)0);
  ref_tmp1180 = c214;
  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval175, &__j179._M_node, &ref_tmp1180);
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t215 = __retval175;
  return t215;
}

// function: _ZNKSt9_IdentityIiEclERKi
int* std___Identity_int___operator___int_const___const(struct std___Identity_int_* v216, int* v217) {
bb218:
  struct std___Identity_int_* this219;
  int* __x220;
  int* __retval221;
  this219 = v216;
  __x220 = v217;
  struct std___Identity_int_* t222 = this219;
  int* t223 = __x220;
  __retval221 = t223;
  int* t224 = __retval221;
  return t224;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeC2ERS5_
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v225, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v226) {
bb227:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this228;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* __t229;
  this228 = v225;
  __t229 = v226;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t230 = this228;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t231 = __t229;
  t230->_M_t = t231;
  return;
}

// function: _ZNKSt15__new_allocatorISt13_Rb_tree_nodeIiEE11_M_max_sizeEv
unsigned long std____new_allocator_std___Rb_tree_node_int______M_max_size___const(struct std____new_allocator_std___Rb_tree_node_int__* v232) {
bb233:
  struct std____new_allocator_std___Rb_tree_node_int__* this234;
  unsigned long __retval235;
  this234 = v232;
  struct std____new_allocator_std___Rb_tree_node_int__* t236 = this234;
  unsigned long c237 = 9223372036854775807;
  unsigned long c238 = 40;
  unsigned long b239 = c237 / c238;
  __retval235 = b239;
  unsigned long t240 = __retval235;
  return t240;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE8allocateEmPKv
struct std___Rb_tree_node_int_* std____new_allocator_std___Rb_tree_node_int_____allocate(struct std____new_allocator_std___Rb_tree_node_int__* v241, unsigned long v242, void* v243) {
bb244:
  struct std____new_allocator_std___Rb_tree_node_int__* this245;
  unsigned long __n246;
  void* unnamed247;
  struct std___Rb_tree_node_int_* __retval248;
  this245 = v241;
  __n246 = v242;
  unnamed247 = v243;
  struct std____new_allocator_std___Rb_tree_node_int__* t249 = this245;
    unsigned long t250 = __n246;
    unsigned long r251 = std____new_allocator_std___Rb_tree_node_int______M_max_size___const(t249);
    _Bool c252 = ((t250 > r251)) ? 1 : 0;
    if (c252) {
        unsigned long t253 = __n246;
        unsigned long c254 = -1;
        unsigned long c255 = 40;
        unsigned long b256 = c254 / c255;
        _Bool c257 = ((t253 > b256)) ? 1 : 0;
        if (c257) {
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
    unsigned long c258 = 8;
    unsigned long c259 = 16;
    _Bool c260 = ((c258 > c259)) ? 1 : 0;
    if (c260) {
      unsigned long __al261;
      unsigned long c262 = 8;
      __al261 = c262;
      unsigned long t263 = __n246;
      unsigned long c264 = 40;
      unsigned long b265 = t263 * c264;
      unsigned long t266 = __al261;
      void* r267 = operator_new_2(b265, t266);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast268 = (struct std___Rb_tree_node_int_*)r267;
      __retval248 = cast268;
      struct std___Rb_tree_node_int_* t269 = __retval248;
      return t269;
    }
  unsigned long t270 = __n246;
  unsigned long c271 = 40;
  unsigned long b272 = t270 * c271;
  void* r273 = operator_new(b272);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* cast274 = (struct std___Rb_tree_node_int_*)r273;
  __retval248 = cast274;
  struct std___Rb_tree_node_int_* t275 = __retval248;
  return t275;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE8allocateEm
struct std___Rb_tree_node_int_* std__allocator_std___Rb_tree_node_int_____allocate(struct std__allocator_std___Rb_tree_node_int__* v276, unsigned long v277) {
bb278:
  struct std__allocator_std___Rb_tree_node_int__* this279;
  unsigned long __n280;
  struct std___Rb_tree_node_int_* __retval281;
  this279 = v276;
  __n280 = v277;
  struct std__allocator_std___Rb_tree_node_int__* t282 = this279;
    _Bool r283 = std____is_constant_evaluated();
    if (r283) {
        unsigned long t284 = __n280;
        unsigned long c285 = 40;
        unsigned long ovr286;
        _Bool ovf287 = __builtin_mul_overflow(t284, c285, &ovr286);
        __n280 = ovr286;
        if (ovf287) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t288 = __n280;
      void* r289 = operator_new(t288);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast290 = (struct std___Rb_tree_node_int_*)r289;
      __retval281 = cast290;
      struct std___Rb_tree_node_int_* t291 = __retval281;
      return t291;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base292 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t282 + 0);
  unsigned long t293 = __n280;
  void* c294 = ((void*)0);
  struct std___Rb_tree_node_int_* r295 = std____new_allocator_std___Rb_tree_node_int_____allocate(base292, t293, c294);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval281 = r295;
  struct std___Rb_tree_node_int_* t296 = __retval281;
  return t296;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE8allocateERS2_m
struct std___Rb_tree_node_int_* std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(struct std__allocator_std___Rb_tree_node_int__* v297, unsigned long v298) {
bb299:
  struct std__allocator_std___Rb_tree_node_int__* __a300;
  unsigned long __n301;
  struct std___Rb_tree_node_int_* __retval302;
  __a300 = v297;
  __n301 = v298;
  struct std__allocator_std___Rb_tree_node_int__* t303 = __a300;
  unsigned long t304 = __n301;
  struct std___Rb_tree_node_int_* r305 = std__allocator_std___Rb_tree_node_int_____allocate(t303, t304);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval302 = r305;
  struct std___Rb_tree_node_int_* t306 = __retval302;
  return t306;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_get_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v307) {
bb308:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this309;
  struct std___Rb_tree_node_int_* __retval310;
  this309 = v307;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t311 = this309;
  struct std__allocator_std___Rb_tree_node_int__* r312 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t311);
  unsigned long c313 = 1;
  struct std___Rb_tree_node_int_* r314 = std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(r312, c313);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval310 = r314;
  struct std___Rb_tree_node_int_* t315 = __retval310;
  return t315;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v316, int* v317) {
bb318:
  int* __location319;
  int* __args320;
  int* __retval321;
  void* __loc322;
  __location319 = v316;
  __args320 = v317;
  int* t323 = __location319;
  void* cast324 = (void*)t323;
  __loc322 = cast324;
    void* t325 = __loc322;
    int* cast326 = (int*)t325;
    int* t327 = __args320;
    int t328 = *t327;
    *cast326 = t328;
    __retval321 = cast326;
    int* t329 = __retval321;
    return t329;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE9constructIiJRKiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int_const__(struct std__allocator_std___Rb_tree_node_int__* v330, int* v331, int* v332) {
bb333:
  struct std__allocator_std___Rb_tree_node_int__* __a334;
  int* __p335;
  int* __args336;
  __a334 = v330;
  __p335 = v331;
  __args336 = v332;
  int* t337 = __p335;
  int* t338 = __args336;
  int* r339 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t337, t338);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE17_M_construct_nodeIJRKiEEEvPSt13_Rb_tree_nodeIiEDpOT_
void void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int_const__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v340, struct std___Rb_tree_node_int_* v341, int* v342) {
bb343:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this344;
  struct std___Rb_tree_node_int_* __node345;
  int* __args346;
  this344 = v340;
  __node345 = v341;
  __args346 = v342;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t347 = this344;
      struct std__allocator_std___Rb_tree_node_int__* r349 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t347);
      struct std___Rb_tree_node_int_* t350 = __node345;
      int* r351 = std___Rb_tree_node_int____M_valptr(t350);
      if (__cir_exc_active) {
        goto cir_try_dispatch348;
      }
      int* t352 = __args346;
      void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int_const__(r349, r351, t352);
    cir_try_dispatch348: ;
    if (__cir_exc_active) {
    {
      int ca_tok353 = 0;
      void* ca_exn354 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Rb_tree_node_int_* t355 = __node345;
        struct std___Rb_tree_node_int_* t356 = __node345;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t347, t356);
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

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE14_M_create_nodeIJRKiEEEPSt13_Rb_tree_nodeIiEDpOT_
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int_const__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v357, int* v358) {
bb359:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this360;
  int* __args361;
  struct std___Rb_tree_node_int_* __retval362;
  struct std___Rb_tree_node_int_* __tmp363;
  this360 = v357;
  __args361 = v358;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t364 = this360;
  struct std___Rb_tree_node_int_* r365 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(t364);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __tmp363 = r365;
  struct std___Rb_tree_node_int_* t366 = __tmp363;
  int* t367 = __args361;
  void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int_const__(t364, t366, t367);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* t368 = __tmp363;
  __retval362 = t368;
  struct std___Rb_tree_node_int_* t369 = __retval362;
  return t369;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeclIRKiEEPSt13_Rb_tree_nodeIiEOT_
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int_const___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v370, int* v371) {
bb372:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this373;
  int* __arg374;
  struct std___Rb_tree_node_int_* __retval375;
  this373 = v370;
  __arg374 = v371;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t376 = this373;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t377 = t376->_M_t;
  int* t378 = __arg374;
  struct std___Rb_tree_node_int_* r379 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int_const__(t377, t378);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval375 = r379;
  struct std___Rb_tree_node_int_* t380 = __retval375;
  return t380;
}

// function: _ZNSt9__rb_tree12_Node_traitsIiPiE23_S_insert_and_rebalanceEbPSt18_Rb_tree_node_baseS4_RS3_
void std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(_Bool v381, struct std___Rb_tree_node_base* v382, struct std___Rb_tree_node_base* v383, struct std___Rb_tree_node_base* v384) {
bb385:
  _Bool __insert_left386;
  struct std___Rb_tree_node_base* __x387;
  struct std___Rb_tree_node_base* __p388;
  struct std___Rb_tree_node_base* __header389;
  __insert_left386 = v381;
  __x387 = v382;
  __p388 = v383;
  __header389 = v384;
  _Bool t390 = __insert_left386;
  struct std___Rb_tree_node_base* t391 = __x387;
  struct std___Rb_tree_node_base* t392 = __p388;
  struct std___Rb_tree_node_base* t393 = __header389;
  std___Rb_tree_insert_and_rebalance(t390, t391, t392, t393);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE10_M_insert_IRKiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiEPSt18_Rb_tree_node_baseSD_OT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int_const___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v394, struct std___Rb_tree_node_base* v395, struct std___Rb_tree_node_base* v396, int* v397, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v398) {
bb399:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this400;
  struct std___Rb_tree_node_base* __x401;
  struct std___Rb_tree_node_base* __p402;
  int* __v403;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen404;
  struct std___Rb_tree_iterator_int_ __retval405;
  _Bool __insert_left406;
  struct std___Rb_tree_node_base* __z407;
  this400 = v394;
  __x401 = v395;
  __p402 = v396;
  __v403 = v397;
  __node_gen404 = v398;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t408 = this400;
  struct std___Rb_tree_node_base* t409 = __x401;
  _Bool cast410 = (_Bool)t409;
  _Bool ternary411;
  if (cast410) {
    _Bool c412 = 1;
    ternary411 = (_Bool)c412;
  } else {
    struct std___Rb_tree_node_base* t413 = __p402;
    struct std___Rb_tree_node_base* r414 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t408);
    _Bool c415 = ((t413 == r414)) ? 1 : 0;
    ternary411 = (_Bool)c415;
  }
  _Bool ternary416;
  if (ternary411) {
    _Bool c417 = 1;
    ternary416 = (_Bool)c417;
  } else {
    struct std___Identity_int_ ref_tmp0418;
    struct std___Rb_tree_key_compare_std__less_int__* base419 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t408->_M_impl) + 0);
    struct std__less_int_* cast420 = (struct std__less_int_*)base419;
    int* t421 = __v403;
    int* r422 = std___Identity_int___operator___int_const___const(&ref_tmp0418, t421);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    struct std___Rb_tree_node_base* t423 = __p402;
    int* r424 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t423);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r425 = std__less_int___operator___int_const___int_const___const(cast420, r422, r424);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    ternary416 = (_Bool)r425;
  }
  __insert_left406 = ternary416;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t426 = __node_gen404;
  int* t427 = __v403;
  struct std___Rb_tree_node_int_* r428 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int_const___int_const___const(t426, t427);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* base429 = (struct std___Rb_tree_node_base*)((char *)r428 + 0);
  struct std___Rb_tree_node_base* r430 = std___Rb_tree_node_base___M_base_ptr___const(base429);
  __z407 = r430;
  _Bool t431 = __insert_left406;
  struct std___Rb_tree_node_base* t432 = __z407;
  struct std___Rb_tree_node_base* t433 = __p402;
  struct std___Rb_tree_header* base434 = (struct std___Rb_tree_header*)((char *)&(t408->_M_impl) + 8);
  std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(t431, t432, t433, &base434->_M_header);
  struct std___Rb_tree_header* base435 = (struct std___Rb_tree_header*)((char *)&(t408->_M_impl) + 8);
  unsigned long t436 = base435->_M_node_count;
  unsigned long u437 = t436 + 1;
  base435->_M_node_count = u437;
  struct std___Rb_tree_node_base* t438 = __z407;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval405, t438);
  struct std___Rb_tree_iterator_int_ t439 = __retval405;
  return t439;
}

// function: _ZNSt4pairISt17_Rb_tree_iteratorIiEbEC2IS1_bQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_
void _ZNSt4pairISt17_Rb_tree_iteratorIiEbEC2IS1_bQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(struct std__pair_std___Rb_tree_iterator_int___bool_* v440, struct std___Rb_tree_iterator_int_* v441, _Bool* v442) {
bb443:
  struct std__pair_std___Rb_tree_iterator_int___bool_* this444;
  struct std___Rb_tree_iterator_int_* __x445;
  _Bool* __y446;
  this444 = v440;
  __x445 = v441;
  __y446 = v442;
  struct std__pair_std___Rb_tree_iterator_int___bool_* t447 = this444;
  struct std____pair_base_std___Rb_tree_iterator_int___bool_* base448 = (struct std____pair_base_std___Rb_tree_iterator_int___bool_*)((char *)t447 + 0);
  struct std___Rb_tree_iterator_int_* t449 = __x445;
  t447->first = *t449; // copy
  _Bool* t450 = __y446;
  _Bool t451 = *t450;
  t447->second = t451;
  return;
}

// function: _ZNSt17_Rb_tree_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_iterator_int____Rb_tree_iterator(struct std___Rb_tree_iterator_int_* v452, struct std___Rb_tree_node_base* v453) {
bb454:
  struct std___Rb_tree_iterator_int_* this455;
  struct std___Rb_tree_node_base* __x456;
  this455 = v452;
  __x456 = v453;
  struct std___Rb_tree_iterator_int_* t457 = this455;
  struct std___Rb_tree_node_base* t458 = __x456;
  t457->_M_node = t458;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE16_M_insert_uniqueIRKiEESt4pairISt17_Rb_tree_iteratorIiEbEOT_
struct std__pair_std___Rb_tree_iterator_int___bool_ std__pair_std___Rb_tree_iterator_int___bool__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique_int_const__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v459, int* v460) {
bb461:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this462;
  int* __v463;
  struct std__pair_std___Rb_tree_iterator_int___bool_ __retval464;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __res465;
  struct std___Identity_int_ ref_tmp0466;
  struct std___Rb_tree_iterator_int_ ref_tmp3467;
  _Bool ref_tmp4468;
  this462 = v459;
  __v463 = v460;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t469 = this462;
  int* t470 = __v463;
  int* r471 = std___Identity_int___operator___int_const___const(&ref_tmp0466, t470);
  if (__cir_exc_active) {
    struct std__pair_std___Rb_tree_iterator_int___bool_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r472 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(t469, r471);
  if (__cir_exc_active) {
    struct std__pair_std___Rb_tree_iterator_int___bool_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __res465 = r472;
    struct std___Rb_tree_node_base* t473 = __res465.second;
    _Bool cast474 = (_Bool)t473;
    if (cast474) {
      struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node __an475;
      struct std___Rb_tree_iterator_int_ ref_tmp1476;
      _Bool ref_tmp2477;
      std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(&__an475, t469);
      if (__cir_exc_active) {
        struct std__pair_std___Rb_tree_iterator_int___bool_ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_base* t478 = __res465.first;
      struct std___Rb_tree_node_base* t479 = __res465.second;
      int* t480 = __v463;
      struct std___Rb_tree_iterator_int_ r481 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int_const___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t469, t478, t479, t480, &__an475);
      if (__cir_exc_active) {
        struct std__pair_std___Rb_tree_iterator_int___bool_ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      ref_tmp1476 = r481;
      _Bool c482 = 1;
      ref_tmp2477 = c482;
      _ZNSt4pairISt17_Rb_tree_iteratorIiEbEC2IS1_bQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(&__retval464, &ref_tmp1476, &ref_tmp2477);
      struct std__pair_std___Rb_tree_iterator_int___bool_ t483 = __retval464;
      return t483;
    }
  struct std___Rb_tree_node_base* t484 = __res465.first;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&ref_tmp3467, t484);
  _Bool c485 = 0;
  ref_tmp4468 = c485;
  _ZNSt4pairISt17_Rb_tree_iteratorIiEbEC2IS1_bQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(&__retval464, &ref_tmp3467, &ref_tmp4468);
  struct std__pair_std___Rb_tree_iterator_int___bool_ t486 = __retval464;
  return t486;
}

// function: _ZNSt4pairISt23_Rb_tree_const_iteratorIiEbEC2IRSt17_Rb_tree_iteratorIiERbQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS8_S9_EEEEOT_OT0_
void _ZNSt4pairISt23_Rb_tree_const_iteratorIiEbEC2IRSt17_Rb_tree_iteratorIiERbQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS8_S9_EEEEOT_OT0_(struct std__pair_std___Rb_tree_const_iterator_int___bool_* v487, struct std___Rb_tree_iterator_int_* v488, _Bool* v489) {
bb490:
  struct std__pair_std___Rb_tree_const_iterator_int___bool_* this491;
  struct std___Rb_tree_iterator_int_* __x492;
  _Bool* __y493;
  this491 = v487;
  __x492 = v488;
  __y493 = v489;
  struct std__pair_std___Rb_tree_const_iterator_int___bool_* t494 = this491;
  struct std____pair_base_std___Rb_tree_const_iterator_int___bool_* base495 = (struct std____pair_base_std___Rb_tree_const_iterator_int___bool_*)((char *)t494 + 0);
  struct std___Rb_tree_iterator_int_* t496 = __x492;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&t494->first, t496);
  _Bool* t497 = __y493;
  _Bool t498 = *t497;
  t494->second = t498;
  return;
}

// function: _ZNSt3setIiSt4lessIiESaIiEE6insertERKi
struct std__pair_std___Rb_tree_const_iterator_int___bool_ std__set_int__std__less_int___std__allocator_int_____insert(struct std__set_int__std__less_int___std__allocator_int__* v499, int* v500) {
bb501:
  struct std__set_int__std__less_int___std__allocator_int__* this502;
  int* __x503;
  struct std__pair_std___Rb_tree_const_iterator_int___bool_ __retval504;
  struct std__pair_std___Rb_tree_iterator_int___bool_ __p505;
  this502 = v499;
  __x503 = v500;
  struct std__set_int__std__less_int___std__allocator_int__* t506 = this502;
  int* t507 = __x503;
  struct std__pair_std___Rb_tree_iterator_int___bool_ r508 = std__pair_std___Rb_tree_iterator_int___bool__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique_int_const__(&t506->_M_t, t507);
  if (__cir_exc_active) {
    struct std__pair_std___Rb_tree_const_iterator_int___bool_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __p505 = r508;
  _ZNSt4pairISt23_Rb_tree_const_iteratorIiEbEC2IRSt17_Rb_tree_iteratorIiERbQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS8_S9_EEEEOT_OT0_(&__retval504, &__p505.first, &__p505.second);
  struct std__pair_std___Rb_tree_const_iterator_int___bool_ t509 = __retval504;
  return t509;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v510, int v511) {
bb512:
  int __a513;
  int __b514;
  int __retval515;
  __a513 = v510;
  __b514 = v511;
  int t516 = __a513;
  int t517 = __b514;
  int b518 = t516 | t517;
  __retval515 = b518;
  int t519 = __retval515;
  return t519;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v520) {
bb521:
  struct std__basic_ios_char__std__char_traits_char__* this522;
  int __retval523;
  this522 = v520;
  struct std__basic_ios_char__std__char_traits_char__* t524 = this522;
  struct std__ios_base* base525 = (struct std__ios_base*)((char *)t524 + 0);
  int t526 = base525->_M_streambuf_state;
  __retval523 = t526;
  int t527 = __retval523;
  return t527;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v528, int v529) {
bb530:
  struct std__basic_ios_char__std__char_traits_char__* this531;
  int __state532;
  this531 = v528;
  __state532 = v529;
  struct std__basic_ios_char__std__char_traits_char__* t533 = this531;
  int r534 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t533);
  if (__cir_exc_active) {
    return;
  }
  int t535 = __state532;
  int r536 = std__operator_(r534, t535);
  std__basic_ios_char__std__char_traits_char_____clear(t533, r536);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v537, char* v538) {
bb539:
  char* __c1540;
  char* __c2541;
  _Bool __retval542;
  __c1540 = v537;
  __c2541 = v538;
  char* t543 = __c1540;
  char t544 = *t543;
  int cast545 = (int)t544;
  char* t546 = __c2541;
  char t547 = *t546;
  int cast548 = (int)t547;
  _Bool c549 = ((cast545 == cast548)) ? 1 : 0;
  __retval542 = c549;
  _Bool t550 = __retval542;
  return t550;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v551) {
bb552:
  char* __p553;
  unsigned long __retval554;
  unsigned long __i555;
  __p553 = v551;
  unsigned long c556 = 0;
  __i555 = c556;
    char ref_tmp0557;
    while (1) {
      unsigned long t558 = __i555;
      char* t559 = __p553;
      char* ptr560 = &(t559)[t558];
      char c561 = 0;
      ref_tmp0557 = c561;
      _Bool r562 = __gnu_cxx__char_traits_char___eq(ptr560, &ref_tmp0557);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u563 = !r562;
      if (!u563) break;
      unsigned long t564 = __i555;
      unsigned long u565 = t564 + 1;
      __i555 = u565;
    }
  unsigned long t566 = __i555;
  __retval554 = t566;
  unsigned long t567 = __retval554;
  return t567;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v568) {
bb569:
  char* __s570;
  unsigned long __retval571;
  __s570 = v568;
    _Bool r572 = std____is_constant_evaluated();
    if (r572) {
      char* t573 = __s570;
      unsigned long r574 = __gnu_cxx__char_traits_char___length(t573);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval571 = r574;
      unsigned long t575 = __retval571;
      return t575;
    }
  char* t576 = __s570;
  unsigned long r577 = strlen(t576);
  __retval571 = r577;
  unsigned long t578 = __retval571;
  return t578;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v579, char* v580) {
bb581:
  struct std__basic_ostream_char__std__char_traits_char__* __out582;
  char* __s583;
  struct std__basic_ostream_char__std__char_traits_char__* __retval584;
  __out582 = v579;
  __s583 = v580;
    char* t585 = __s583;
    _Bool cast586 = (_Bool)t585;
    _Bool u587 = !cast586;
    if (u587) {
      struct std__basic_ostream_char__std__char_traits_char__* t588 = __out582;
      void** v589 = (void**)t588;
      void* v590 = *((void**)v589);
      unsigned char* cast591 = (unsigned char*)v590;
      long c592 = -24;
      unsigned char* ptr593 = &(cast591)[c592];
      long* cast594 = (long*)ptr593;
      long t595 = *cast594;
      unsigned char* cast596 = (unsigned char*)t588;
      unsigned char* ptr597 = &(cast596)[t595];
      struct std__basic_ostream_char__std__char_traits_char__* cast598 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr597;
      struct std__basic_ios_char__std__char_traits_char__* cast599 = (struct std__basic_ios_char__std__char_traits_char__*)cast598;
      int t600 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast599, t600);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t601 = __out582;
      char* t602 = __s583;
      char* t603 = __s583;
      unsigned long r604 = std__char_traits_char___length(t603);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast605 = (long)r604;
      struct std__basic_ostream_char__std__char_traits_char__* r606 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t601, t602, cast605);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t607 = __out582;
  __retval584 = t607;
  struct std__basic_ostream_char__std__char_traits_char__* t608 = __retval584;
  return t608;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* v609, struct std___Rb_tree_node_base* v610) {
bb611:
  struct std___Rb_tree_const_iterator_int_* this612;
  struct std___Rb_tree_node_base* __x613;
  this612 = v609;
  __x613 = v610;
  struct std___Rb_tree_const_iterator_int_* t614 = this612;
  struct std___Rb_tree_node_base* t615 = __x613;
  t614->_M_node = t615;
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE3endEv
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v616) {
bb617:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this618;
  struct std___Rb_tree_const_iterator_int_ __retval619;
  this618 = v616;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t620 = this618;
  struct std___Rb_tree_node_base* r621 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t620);
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval619, r621);
  struct std___Rb_tree_const_iterator_int_ t622 = __retval619;
  return t622;
}

// function: _ZNSt16reverse_iteratorISt23_Rb_tree_const_iteratorIiEEC2ES1_
void std__reverse_iterator_std___Rb_tree_const_iterator_int_____reverse_iterator(struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* v623, struct std___Rb_tree_const_iterator_int_ v624) {
bb625:
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* this626;
  struct std___Rb_tree_const_iterator_int_ __x627;
  this626 = v623;
  __x627 = v624;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* t628 = this626;
  struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___* base629 = (struct std__iterator_std__bidirectional_iterator_tag__int__long_int___int___*)((char *)t628 + 0);
  t628->current = __x627; // copy
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6rbeginEv
struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____rbegin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v630) {
bb631:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this632;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ __retval633;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0634;
  this632 = v630;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t635 = this632;
  struct std___Rb_tree_const_iterator_int_ r636 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(t635);
  agg_tmp0634 = r636;
  struct std___Rb_tree_const_iterator_int_ t637 = agg_tmp0634;
  std__reverse_iterator_std___Rb_tree_const_iterator_int_____reverse_iterator(&__retval633, t637);
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ t638 = __retval633;
  return t638;
}

// function: _ZNKSt3setIiSt4lessIiESaIiEE6rbeginEv
struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ std__set_int__std__less_int___std__allocator_int_____rbegin___const(struct std__set_int__std__less_int___std__allocator_int__* v639) {
bb640:
  struct std__set_int__std__less_int___std__allocator_int__* this641;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ __retval642;
  this641 = v639;
  struct std__set_int__std__less_int___std__allocator_int__* t643 = this641;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ r644 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____rbegin___const(&t643->_M_t);
  __retval642 = r644;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ t645 = __retval642;
  return t645;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEmmEv
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* v646) {
bb647:
  struct std___Rb_tree_const_iterator_int_* this648;
  struct std___Rb_tree_const_iterator_int_* __retval649;
  this648 = v646;
  struct std___Rb_tree_const_iterator_int_* t650 = this648;
  struct std___Rb_tree_node_base* t651 = t650->_M_node;
  struct std___Rb_tree_node_base* r652 = std___Rb_tree_decrement(t651);
  t650->_M_node = r652;
  __retval649 = t650;
  struct std___Rb_tree_const_iterator_int_* t653 = __retval649;
  return t653;
}

// function: _ZNKSt16reverse_iteratorISt23_Rb_tree_const_iteratorIiEEdeEv
int* std__reverse_iterator_std___Rb_tree_const_iterator_int_____operator____const(struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* v654) {
bb655:
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* this656;
  int* __retval657;
  struct std___Rb_tree_const_iterator_int_ __tmp658;
  this656 = v654;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__* t659 = this656;
  __tmp658 = t659->current; // copy
  struct std___Rb_tree_const_iterator_int_* r660 = std___Rb_tree_const_iterator_int___operator__(&__tmp658);
  int* r661 = std___Rb_tree_const_iterator_int___operator____const(r660);
  __retval657 = r661;
  int* t662 = __retval657;
  return t662;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5beginEv
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v663) {
bb664:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this665;
  struct std___Rb_tree_const_iterator_int_ __retval666;
  this665 = v663;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t667 = this665;
  struct std___Rb_tree_header* base668 = (struct std___Rb_tree_header*)((char *)&(t667->_M_impl) + 8);
  struct std___Rb_tree_node_base* t669 = base668->_M_header._M_left;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval666, t669);
  struct std___Rb_tree_const_iterator_int_ t670 = __retval666;
  return t670;
}

// function: _ZNKSt3setIiSt4lessIiESaIiEE5beginEv
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____begin___const(struct std__set_int__std__less_int___std__allocator_int__* v671) {
bb672:
  struct std__set_int__std__less_int___std__allocator_int__* this673;
  struct std___Rb_tree_const_iterator_int_ __retval674;
  this673 = v671;
  struct std__set_int__std__less_int___std__allocator_int__* t675 = this673;
  struct std___Rb_tree_const_iterator_int_ r676 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(&t675->_M_t);
  __retval674 = r676;
  struct std___Rb_tree_const_iterator_int_ t677 = __retval674;
  return t677;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEaSEOS0_
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* v678, struct std___Rb_tree_const_iterator_int_* v679) {
bb680:
  struct std___Rb_tree_const_iterator_int_* this681;
  struct std___Rb_tree_const_iterator_int_* unnamed682;
  struct std___Rb_tree_const_iterator_int_* __retval683;
  this681 = v678;
  unnamed682 = v679;
  struct std___Rb_tree_const_iterator_int_* t684 = this681;
  struct std___Rb_tree_const_iterator_int_* t685 = unnamed682;
  struct std___Rb_tree_node_base* t686 = t685->_M_node;
  t684->_M_node = t686;
  __retval683 = t684;
  struct std___Rb_tree_const_iterator_int_* t687 = __retval683;
  return t687;
}

// function: _ZNKSt23_Rb_tree_const_iteratorIiEdeEv
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* v688) {
bb689:
  struct std___Rb_tree_const_iterator_int_* this690;
  int* __retval691;
  this690 = v688;
  struct std___Rb_tree_const_iterator_int_* t692 = this690;
  struct std___Rb_tree_node_base* t693 = t692->_M_node;
  struct std___Rb_tree_node_int_* derived694 = ((t693) ? (struct std___Rb_tree_node_int_*)((char *)t693 - 0) : (struct std___Rb_tree_node_int_*)0);
  int* r695 = std___Rb_tree_node_int____M_valptr___const(derived694);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval691 = r695;
  int* t696 = __retval691;
  return t696;
}

// function: _ZNKSt4lessIiEclERKiS2_
_Bool std__less_int___operator___int_const___int_const___const(struct std__less_int_* v697, int* v698, int* v699) {
bb700:
  struct std__less_int_* this701;
  int* __x702;
  int* __y703;
  _Bool __retval704;
  this701 = v697;
  __x702 = v698;
  __y703 = v699;
  struct std__less_int_* t705 = this701;
  int* t706 = __x702;
  int t707 = *t706;
  int* t708 = __y703;
  int t709 = *t708;
  _Bool c710 = ((t707 < t709)) ? 1 : 0;
  __retval704 = c710;
  _Bool t711 = __retval704;
  return t711;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEppEi
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_const_iterator_int___operator___2(struct std___Rb_tree_const_iterator_int_* v712, int v713) {
bb714:
  struct std___Rb_tree_const_iterator_int_* this715;
  int unnamed716;
  struct std___Rb_tree_const_iterator_int_ __retval717;
  this715 = v712;
  unnamed716 = v713;
  struct std___Rb_tree_const_iterator_int_* t718 = this715;
  __retval717 = *t718; // copy
  struct std___Rb_tree_node_base* t719 = t718->_M_node;
  struct std___Rb_tree_node_base* r720 = std___Rb_tree_increment(t719);
  t718->_M_node = r720;
  struct std___Rb_tree_const_iterator_int_ t721 = __retval717;
  return t721;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v722, void* v723) {
bb724:
  struct std__basic_ostream_char__std__char_traits_char__* this725;
  void* __pf726;
  struct std__basic_ostream_char__std__char_traits_char__* __retval727;
  this725 = v722;
  __pf726 = v723;
  struct std__basic_ostream_char__std__char_traits_char__* t728 = this725;
  void* t729 = __pf726;
  struct std__basic_ostream_char__std__char_traits_char__* r730 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t729)(t728);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval727 = r730;
  struct std__basic_ostream_char__std__char_traits_char__* t731 = __retval727;
  return t731;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v732) {
bb733:
  struct std__basic_ostream_char__std__char_traits_char__* __os734;
  struct std__basic_ostream_char__std__char_traits_char__* __retval735;
  __os734 = v732;
  struct std__basic_ostream_char__std__char_traits_char__* t736 = __os734;
  struct std__basic_ostream_char__std__char_traits_char__* r737 = std__ostream__flush(t736);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval735 = r737;
  struct std__basic_ostream_char__std__char_traits_char__* t738 = __retval735;
  return t738;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v739) {
bb740:
  struct std__ctype_char_* __f741;
  struct std__ctype_char_* __retval742;
  __f741 = v739;
    struct std__ctype_char_* t743 = __f741;
    _Bool cast744 = (_Bool)t743;
    _Bool u745 = !cast744;
    if (u745) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t746 = __f741;
  __retval742 = t746;
  struct std__ctype_char_* t747 = __retval742;
  return t747;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v748, char v749) {
bb750:
  struct std__ctype_char_* this751;
  char __c752;
  char __retval753;
  this751 = v748;
  __c752 = v749;
  struct std__ctype_char_* t754 = this751;
    char t755 = t754->_M_widen_ok;
    _Bool cast756 = (_Bool)t755;
    if (cast756) {
      char t757 = __c752;
      unsigned char cast758 = (unsigned char)t757;
      unsigned long cast759 = (unsigned long)cast758;
      char t760 = t754->_M_widen[cast759];
      __retval753 = t760;
      char t761 = __retval753;
      return t761;
    }
  std__ctype_char____M_widen_init___const(t754);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t762 = __c752;
  void** v763 = (void**)t754;
  void* v764 = *((void**)v763);
  char vcall767 = (char)__VERIFIER_virtual_call_char_char(t754, 6, t762);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval753 = vcall767;
  char t768 = __retval753;
  return t768;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v769, char v770) {
bb771:
  struct std__basic_ios_char__std__char_traits_char__* this772;
  char __c773;
  char __retval774;
  this772 = v769;
  __c773 = v770;
  struct std__basic_ios_char__std__char_traits_char__* t775 = this772;
  struct std__ctype_char_* t776 = t775->_M_ctype;
  struct std__ctype_char_* r777 = std__ctype_char__const__std____check_facet_std__ctype_char___(t776);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t778 = __c773;
  char r779 = std__ctype_char___widen_char__const(r777, t778);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval774 = r779;
  char t780 = __retval774;
  return t780;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v781) {
bb782:
  struct std__basic_ostream_char__std__char_traits_char__* __os783;
  struct std__basic_ostream_char__std__char_traits_char__* __retval784;
  __os783 = v781;
  struct std__basic_ostream_char__std__char_traits_char__* t785 = __os783;
  struct std__basic_ostream_char__std__char_traits_char__* t786 = __os783;
  void** v787 = (void**)t786;
  void* v788 = *((void**)v787);
  unsigned char* cast789 = (unsigned char*)v788;
  long c790 = -24;
  unsigned char* ptr791 = &(cast789)[c790];
  long* cast792 = (long*)ptr791;
  long t793 = *cast792;
  unsigned char* cast794 = (unsigned char*)t786;
  unsigned char* ptr795 = &(cast794)[t793];
  struct std__basic_ostream_char__std__char_traits_char__* cast796 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr795;
  struct std__basic_ios_char__std__char_traits_char__* cast797 = (struct std__basic_ios_char__std__char_traits_char__*)cast796;
  char c798 = 10;
  char r799 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast797, c798);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r800 = std__ostream__put(t785, r799);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r801 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r800);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval784 = r801;
  struct std__basic_ostream_char__std__char_traits_char__* t802 = __retval784;
  return t802;
}

// function: _ZNSt3setIiSt4lessIiESaIiEED2Ev
void std__set_int__std__less_int___std__allocator_int______set(struct std__set_int__std__less_int___std__allocator_int__* v803) {
bb804:
  struct std__set_int__std__less_int___std__allocator_int__* this805;
  this805 = v803;
  struct std__set_int__std__less_int___std__allocator_int__* t806 = this805;
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(&t806->_M_t);
  }
  return;
}

// function: main
int main() {
bb807:
  int __retval808;
  struct std__set_int__std__less_int___std__allocator_int__ myset809;
  struct std__less_int_ mycomp810;
  struct std___Rb_tree_const_iterator_int_ it811;
  int i812;
  int highest813;
  struct std__less_int_ ref_tmp0814;
  struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ ref_tmp1815;
  struct std___Rb_tree_const_iterator_int_ ref_tmp2816;
  int c817 = 0;
  __retval808 = c817;
  std__set_int__std__less_int___std__allocator_int_____set(&myset809);
    std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(&it811);
    struct std__less_int_ r818 = std__set_int__std__less_int___std__allocator_int_____value_comp___const(&myset809);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset809);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    ref_tmp0814 = r818;
    struct std__less_int_* r819 = std__less_int___operator_(&mycomp810, &ref_tmp0814);
      struct std__pair_std___Rb_tree_const_iterator_int___bool_ agg_tmp0820;
      int c821 = 0;
      i812 = c821;
      while (1) {
        int t823 = i812;
        int c824 = 5;
        _Bool c825 = ((t823 <= c824)) ? 1 : 0;
        if (!c825) break;
        struct std__pair_std___Rb_tree_const_iterator_int___bool_ r826 = std__set_int__std__less_int___std__allocator_int_____insert(&myset809, &i812);
        if (__cir_exc_active) {
          {
            std__set_int__std__less_int___std__allocator_int______set(&myset809);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        agg_tmp0820 = r826;
      for_step822: ;
        int t827 = i812;
        int u828 = t827 + 1;
        i812 = u828;
      }
    char* cast829 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r830 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast829);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset809);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__reverse_iterator_std___Rb_tree_const_iterator_int__ r831 = std__set_int__std__less_int___std__allocator_int_____rbegin___const(&myset809);
    ref_tmp1815 = r831;
    int* r832 = std__reverse_iterator_std___Rb_tree_const_iterator_int_____operator____const(&ref_tmp1815);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset809);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int t833 = *r832;
    highest813 = t833;
    int t834 = highest813;
    int c835 = 5;
    _Bool c836 = ((t834 == c835)) ? 1 : 0;
    if (c836) {
    } else {
      char* cast837 = (char*)&(_str_1);
      char* c838 = _str_2;
      unsigned int c839 = 27;
      char* cast840 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast837, c838, c839, cast840);
    }
    struct std___Rb_tree_const_iterator_int_ r841 = std__set_int__std__less_int___std__allocator_int_____begin___const(&myset809);
    ref_tmp2816 = r841;
    struct std___Rb_tree_const_iterator_int_* r842 = std___Rb_tree_const_iterator_int___operator_(&it811, &ref_tmp2816);
    int* r843 = std___Rb_tree_const_iterator_int___operator____const(&it811);
    int t844 = *r843;
    int c845 = 0;
    _Bool c846 = ((t844 == c845)) ? 1 : 0;
    if (c846) {
    } else {
      char* cast847 = (char*)&(_str_3);
      char* c848 = _str_2;
      unsigned int c849 = 29;
      char* cast850 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast847, c848, c849, cast850);
    }
      struct std___Rb_tree_const_iterator_int_ ref_tmp3851;
      do {
          char* cast852 = (char*)&(_str_4);
          struct std__basic_ostream_char__std__char_traits_char__* r853 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast852);
          if (__cir_exc_active) {
            {
              std__set_int__std__less_int___std__allocator_int______set(&myset809);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          int* r854 = std___Rb_tree_const_iterator_int___operator____const(&it811);
          int t855 = *r854;
          struct std__basic_ostream_char__std__char_traits_char__* r856 = std__ostream__operator__(r853, t855);
          if (__cir_exc_active) {
            {
              std__set_int__std__less_int___std__allocator_int______set(&myset809);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
        int c857 = 0;
        struct std___Rb_tree_const_iterator_int_ r858 = std___Rb_tree_const_iterator_int___operator___2(&it811, c857);
        ref_tmp3851 = r858;
        int* r859 = std___Rb_tree_const_iterator_int___operator____const(&ref_tmp3851);
        _Bool r860 = std__less_int___operator___int_const___int_const___const(&mycomp810, r859, &highest813);
        if (__cir_exc_active) {
          {
            std__set_int__std__less_int___std__allocator_int______set(&myset809);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        if (!r860) break;
      } while (1);
    struct std__basic_ostream_char__std__char_traits_char__* r861 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset809);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c862 = 0;
    __retval808 = c862;
    int t863 = __retval808;
    int ret_val864 = t863;
    {
      std__set_int__std__less_int___std__allocator_int______set(&myset809);
    }
    return ret_val864;
  int t865 = __retval808;
  return t865;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v866) {
bb867:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this868;
  this868 = v866;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t869 = this868;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(&t869->_M_impl);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v870) {
bb871:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this872;
  this872 = v870;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t873 = this872;
    struct std___Rb_tree_node_int_* r874 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(t873);
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t873, r874);
    if (__cir_exc_active) {
      {
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t873->_M_impl);
      }
      return;
    }
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t873->_M_impl);
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v875) {
bb876:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this877;
  this877 = v875;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t878 = this877;
  struct std__allocator_std___Rb_tree_node_int__* base879 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t878 + 0);
  std__allocator_std___Rb_tree_node_int_____allocator(base879);
    struct std___Rb_tree_key_compare_std__less_int__* base880 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)t878 + 0);
    std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(base880);
    struct std___Rb_tree_header* base881 = (struct std___Rb_tree_header*)((char *)t878 + 8);
    std___Rb_tree_header___Rb_tree_header(base881);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v882) {
bb883:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this884;
  this884 = v882;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t885 = this884;
  {
    struct std__allocator_std___Rb_tree_node_int__* base886 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t885 + 0);
    std__allocator_std___Rb_tree_node_int______allocator(base886);
  }
  return;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEEC2Ev
void std____new_allocator_std___Rb_tree_node_int_______new_allocator(struct std____new_allocator_std___Rb_tree_node_int__* v887) {
bb888:
  struct std____new_allocator_std___Rb_tree_node_int__* this889;
  this889 = v887;
  struct std____new_allocator_std___Rb_tree_node_int__* t890 = this889;
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEEC2Ev
void std__allocator_std___Rb_tree_node_int_____allocator(struct std__allocator_std___Rb_tree_node_int__* v891) {
bb892:
  struct std__allocator_std___Rb_tree_node_int__* this893;
  this893 = v891;
  struct std__allocator_std___Rb_tree_node_int__* t894 = this893;
  struct std____new_allocator_std___Rb_tree_node_int__* base895 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t894 + 0);
  std____new_allocator_std___Rb_tree_node_int_______new_allocator(base895);
  return;
}

// function: _ZNSt20_Rb_tree_key_compareISt4lessIiEEC2Ev
void std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(struct std___Rb_tree_key_compare_std__less_int__* v896) {
bb897:
  struct std___Rb_tree_key_compare_std__less_int__* this898;
  this898 = v896;
  return;
}

// function: _ZNSt15_Rb_tree_header8_M_resetEv
void std___Rb_tree_header___M_reset(struct std___Rb_tree_header* v899) {
bb900:
  struct std___Rb_tree_header* this901;
  this901 = v899;
  struct std___Rb_tree_header* t902 = this901;
  struct std___Rb_tree_node_base* c903 = ((void*)0);
  t902->_M_header._M_parent = c903;
  t902->_M_header._M_left = &t902->_M_header;
  t902->_M_header._M_right = &t902->_M_header;
  unsigned long c904 = 0;
  t902->_M_node_count = c904;
  return;
}

// function: _ZNSt15_Rb_tree_headerC2Ev
void std___Rb_tree_header___Rb_tree_header(struct std___Rb_tree_header* v905) {
bb906:
  struct std___Rb_tree_header* this907;
  this907 = v905;
  struct std___Rb_tree_header* t908 = this907;
  unsigned int c909 = 0;
  t908->_M_header._M_color = c909;
  std___Rb_tree_header___M_reset(t908);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEED2Ev
void std__allocator_std___Rb_tree_node_int______allocator(struct std__allocator_std___Rb_tree_node_int__* v910) {
bb911:
  struct std__allocator_std___Rb_tree_node_int__* this912;
  this912 = v910;
  struct std__allocator_std___Rb_tree_node_int__* t913 = this912;
  return;
}

// function: _ZNSt13_Rb_tree_nodeIiE11_M_node_ptrEv
struct std___Rb_tree_node_int_* std___Rb_tree_node_int____M_node_ptr(struct std___Rb_tree_node_int_* v914) {
bb915:
  struct std___Rb_tree_node_int_* this916;
  struct std___Rb_tree_node_int_* __retval917;
  this916 = v914;
  struct std___Rb_tree_node_int_* t918 = this916;
  __retval917 = t918;
  struct std___Rb_tree_node_int_* t919 = __retval917;
  return t919;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(struct std___Rb_tree_node_int_* v920) {
bb921:
  struct std___Rb_tree_node_int_* __x922;
  struct std___Rb_tree_node_int_* __retval923;
  __x922 = v920;
  struct std___Rb_tree_node_int_* t924 = __x922;
  struct std___Rb_tree_node_base* base925 = (struct std___Rb_tree_node_base*)((char *)t924 + 0);
  struct std___Rb_tree_node_base* t926 = base925->_M_right;
  _Bool cast927 = (_Bool)t926;
  struct std___Rb_tree_node_int_* ternary928;
  if (cast927) {
    struct std___Rb_tree_node_int_* t929 = __x922;
    struct std___Rb_tree_node_base* base930 = (struct std___Rb_tree_node_base*)((char *)t929 + 0);
    struct std___Rb_tree_node_base* t931 = base930->_M_right;
    struct std___Rb_tree_node_int_* derived932 = (struct std___Rb_tree_node_int_*)((char *)t931 - 0);
    struct std___Rb_tree_node_int_* r933 = std___Rb_tree_node_int____M_node_ptr(derived932);
    ternary928 = (struct std___Rb_tree_node_int_*)r933;
  } else {
    struct std___Rb_tree_node_int_* c934 = ((void*)0);
    ternary928 = (struct std___Rb_tree_node_int_*)c934;
  }
  __retval923 = ternary928;
  struct std___Rb_tree_node_int_* t935 = __retval923;
  return t935;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(struct std___Rb_tree_node_int_* v936) {
bb937:
  struct std___Rb_tree_node_int_* __x938;
  struct std___Rb_tree_node_int_* __retval939;
  __x938 = v936;
  struct std___Rb_tree_node_int_* t940 = __x938;
  struct std___Rb_tree_node_base* base941 = (struct std___Rb_tree_node_base*)((char *)t940 + 0);
  struct std___Rb_tree_node_base* t942 = base941->_M_left;
  _Bool cast943 = (_Bool)t942;
  struct std___Rb_tree_node_int_* ternary944;
  if (cast943) {
    struct std___Rb_tree_node_int_* t945 = __x938;
    struct std___Rb_tree_node_base* base946 = (struct std___Rb_tree_node_base*)((char *)t945 + 0);
    struct std___Rb_tree_node_base* t947 = base946->_M_left;
    struct std___Rb_tree_node_int_* derived948 = (struct std___Rb_tree_node_int_*)((char *)t947 - 0);
    struct std___Rb_tree_node_int_* r949 = std___Rb_tree_node_int____M_node_ptr(derived948);
    ternary944 = (struct std___Rb_tree_node_int_*)r949;
  } else {
    struct std___Rb_tree_node_int_* c950 = ((void*)0);
    ternary944 = (struct std___Rb_tree_node_int_*)c950;
  }
  __retval939 = ternary944;
  struct std___Rb_tree_node_int_* t951 = __retval939;
  return t951;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v952) {
bb953:
  int* __location954;
  __location954 = v952;
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(struct std__allocator_std___Rb_tree_node_int__* v955, int* v956) {
bb957:
  struct std__allocator_std___Rb_tree_node_int__* __a958;
  int* __p959;
  __a958 = v955;
  __p959 = v956;
  int* t960 = __p959;
  void_std__destroy_at_int_(t960);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___Rb_tree_node_int__* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v961) {
bb962:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this963;
  struct std__allocator_std___Rb_tree_node_int__* __retval964;
  this963 = v961;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t965 = this963;
  struct std__allocator_std___Rb_tree_node_int__* base966 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)&(t965->_M_impl) + 0);
  __retval964 = base966;
  struct std__allocator_std___Rb_tree_node_int__* t967 = __retval964;
  return t967;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v968) {
bb969:
  struct __gnu_cxx____aligned_membuf_int_* this970;
  void* __retval971;
  this970 = v968;
  struct __gnu_cxx____aligned_membuf_int_* t972 = this970;
  void* cast973 = (void*)&(t972->_M_storage);
  __retval971 = cast973;
  void* t974 = __retval971;
  return t974;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v975) {
bb976:
  struct __gnu_cxx____aligned_membuf_int_* this977;
  int* __retval978;
  this977 = v975;
  struct __gnu_cxx____aligned_membuf_int_* t979 = this977;
  void* r980 = __gnu_cxx____aligned_membuf_int____M_addr(t979);
  int* cast981 = (int*)r980;
  __retval978 = cast981;
  int* t982 = __retval978;
  return t982;
}

// function: _ZNSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr(struct std___Rb_tree_node_int_* v983) {
bb984:
  struct std___Rb_tree_node_int_* this985;
  int* __retval986;
  this985 = v983;
  struct std___Rb_tree_node_int_* t987 = this985;
  int* r988 = __gnu_cxx____aligned_membuf_int____M_ptr(&t987->_M_storage);
  __retval986 = r988;
  int* t989 = __retval986;
  return t989;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_destroy_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v990, struct std___Rb_tree_node_int_* v991) {
bb992:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this993;
  struct std___Rb_tree_node_int_* __p994;
  this993 = v990;
  __p994 = v991;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t995 = this993;
  struct std__allocator_std___Rb_tree_node_int__* r996 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t995);
  struct std___Rb_tree_node_int_* t997 = __p994;
  int* r998 = std___Rb_tree_node_int____M_valptr(t997);
  if (__cir_exc_active) {
    return;
  }
  void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(r996, r998);
  struct std___Rb_tree_node_int_* t999 = __p994;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1000:
  _Bool __retval1001;
    _Bool c1002 = 0;
    __retval1001 = c1002;
    _Bool t1003 = __retval1001;
    return t1003;
  abort();
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___Rb_tree_node_int_____deallocate(struct std____new_allocator_std___Rb_tree_node_int__* v1004, struct std___Rb_tree_node_int_* v1005, unsigned long v1006) {
bb1007:
  struct std____new_allocator_std___Rb_tree_node_int__* this1008;
  struct std___Rb_tree_node_int_* __p1009;
  unsigned long __n1010;
  this1008 = v1004;
  __p1009 = v1005;
  __n1010 = v1006;
  struct std____new_allocator_std___Rb_tree_node_int__* t1011 = this1008;
    unsigned long c1012 = 8;
    unsigned long c1013 = 16;
    _Bool c1014 = ((c1012 > c1013)) ? 1 : 0;
    if (c1014) {
      struct std___Rb_tree_node_int_* t1015 = __p1009;
      void* cast1016 = (void*)t1015;
      unsigned long t1017 = __n1010;
      unsigned long c1018 = 40;
      unsigned long b1019 = t1017 * c1018;
      unsigned long c1020 = 8;
      operator_delete_3(cast1016, b1019, c1020);
      return;
    }
  struct std___Rb_tree_node_int_* t1021 = __p1009;
  void* cast1022 = (void*)t1021;
  unsigned long t1023 = __n1010;
  unsigned long c1024 = 40;
  unsigned long b1025 = t1023 * c1024;
  operator_delete_2(cast1022, b1025);
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE10deallocateEPS0_m
void std__allocator_std___Rb_tree_node_int_____deallocate(struct std__allocator_std___Rb_tree_node_int__* v1026, struct std___Rb_tree_node_int_* v1027, unsigned long v1028) {
bb1029:
  struct std__allocator_std___Rb_tree_node_int__* this1030;
  struct std___Rb_tree_node_int_* __p1031;
  unsigned long __n1032;
  this1030 = v1026;
  __p1031 = v1027;
  __n1032 = v1028;
  struct std__allocator_std___Rb_tree_node_int__* t1033 = this1030;
    _Bool r1034 = std____is_constant_evaluated();
    if (r1034) {
      struct std___Rb_tree_node_int_* t1035 = __p1031;
      void* cast1036 = (void*)t1035;
      operator_delete(cast1036);
      return;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base1037 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t1033 + 0);
  struct std___Rb_tree_node_int_* t1038 = __p1031;
  unsigned long t1039 = __n1032;
  std____new_allocator_std___Rb_tree_node_int_____deallocate(base1037, t1038, t1039);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(struct std__allocator_std___Rb_tree_node_int__* v1040, struct std___Rb_tree_node_int_* v1041, unsigned long v1042) {
bb1043:
  struct std__allocator_std___Rb_tree_node_int__* __a1044;
  struct std___Rb_tree_node_int_* __p1045;
  unsigned long __n1046;
  __a1044 = v1040;
  __p1045 = v1041;
  __n1046 = v1042;
  struct std__allocator_std___Rb_tree_node_int__* t1047 = __a1044;
  struct std___Rb_tree_node_int_* t1048 = __p1045;
  unsigned long t1049 = __n1046;
  std__allocator_std___Rb_tree_node_int_____deallocate(t1047, t1048, t1049);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_put_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1050, struct std___Rb_tree_node_int_* v1051) {
bb1052:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1053;
  struct std___Rb_tree_node_int_* __p1054;
  this1053 = v1050;
  __p1054 = v1051;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1055 = this1053;
  struct std__allocator_std___Rb_tree_node_int__* r1056 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t1055);
  struct std___Rb_tree_node_int_* t1057 = __p1054;
  unsigned long c1058 = 1;
  std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(r1056, t1057, c1058);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_drop_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1059, struct std___Rb_tree_node_int_* v1060) {
bb1061:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1062;
  struct std___Rb_tree_node_int_* __p1063;
  this1062 = v1059;
  __p1063 = v1060;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1064 = this1062;
  struct std___Rb_tree_node_int_* t1065 = __p1063;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(t1064, t1065);
  struct std___Rb_tree_node_int_* t1066 = __p1063;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t1064, t1066);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1067, struct std___Rb_tree_node_int_* v1068) {
bb1069:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1070;
  struct std___Rb_tree_node_int_* __x1071;
  this1070 = v1067;
  __x1071 = v1068;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1072 = this1070;
    while (1) {
      struct std___Rb_tree_node_int_* t1073 = __x1071;
      _Bool cast1074 = (_Bool)t1073;
      if (!cast1074) break;
        struct std___Rb_tree_node_int_* __y1075;
        struct std___Rb_tree_node_int_* t1076 = __x1071;
        struct std___Rb_tree_node_int_* r1077 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(t1076);
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t1072, r1077);
        if (__cir_exc_active) {
          return;
        }
        struct std___Rb_tree_node_int_* t1078 = __x1071;
        struct std___Rb_tree_node_int_* r1079 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(t1078);
        if (__cir_exc_active) {
          return;
        }
        __y1075 = r1079;
        struct std___Rb_tree_node_int_* t1080 = __x1071;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(t1072, t1080);
        struct std___Rb_tree_node_int_* t1081 = __y1075;
        __x1071 = t1081;
    }
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_M_begin_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1082) {
bb1083:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1084;
  struct std___Rb_tree_node_int_* __retval1085;
  struct std___Rb_tree_node_base* __begin1086;
  this1084 = v1082;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1087 = this1084;
  struct std___Rb_tree_header* base1088 = (struct std___Rb_tree_header*)((char *)&(t1087->_M_impl) + 8);
  struct std___Rb_tree_node_base* t1089 = base1088->_M_header._M_parent;
  __begin1086 = t1089;
  struct std___Rb_tree_node_base* t1090 = __begin1086;
  _Bool cast1091 = (_Bool)t1090;
  struct std___Rb_tree_node_int_* ternary1092;
  if (cast1091) {
    struct std___Rb_tree_node_base* t1093 = __begin1086;
    struct std___Rb_tree_node_int_* derived1094 = (struct std___Rb_tree_node_int_*)((char *)t1093 - 0);
    struct std___Rb_tree_node_int_* r1095 = std___Rb_tree_node_int____M_node_ptr(derived1094);
    ternary1092 = (struct std___Rb_tree_node_int_*)r1095;
  } else {
    struct std___Rb_tree_node_int_* c1096 = ((void*)0);
    ternary1092 = (struct std___Rb_tree_node_int_*)c1096;
  }
  __retval1085 = ternary1092;
  struct std___Rb_tree_node_int_* t1097 = __retval1085;
  return t1097;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2ERKSt17_Rb_tree_iteratorIiE
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(struct std___Rb_tree_const_iterator_int_* v1098, struct std___Rb_tree_iterator_int_* v1099) {
bb1100:
  struct std___Rb_tree_const_iterator_int_* this1101;
  struct std___Rb_tree_iterator_int_* __it1102;
  this1101 = v1098;
  __it1102 = v1099;
  struct std___Rb_tree_const_iterator_int_* t1103 = this1101;
  struct std___Rb_tree_iterator_int_* t1104 = __it1102;
  struct std___Rb_tree_node_base* t1105 = t1104->_M_node;
  t1103->_M_node = t1105;
  return;
}

