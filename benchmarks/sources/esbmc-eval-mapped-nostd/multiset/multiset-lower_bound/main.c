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
char _str[18] = "myset.size() == 9";
char _str_1[117] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/multiset/multiset-lower_bound/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[13] = "*itlow == 30";
char _str_3[12] = "*itup == 70";
char _str_4[18] = "myset.size() == 5";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_5[16] = "myset contains:";
char _str_6[2] = " ";
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
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_lower_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, int* p3);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____lower_bound(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____lower_bound(struct std__multiset_int__std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_const_iterator_int_* p1);
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* p0);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_upper_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, int* p3);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____upper_bound(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____upper_bound(struct std__multiset_int__std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____clear(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
extern struct std___Rb_tree_node_base* std___Rb_tree_rebalance_for_erase(struct std___Rb_tree_node_base* p0, struct std___Rb_tree_node_base* p1);
struct std___Rb_tree_node_base* std____rb_tree___Node_traits_int__int_____S_rebalance_for_erase(struct std___Rb_tree_node_base* p0, struct std___Rb_tree_node_base* p1);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux_2(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1, struct std___Rb_tree_const_iterator_int_ p2);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase_abi_cxx11_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1, struct std___Rb_tree_const_iterator_int_ p2);
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____erase_abi_cxx11_(struct std__multiset_int__std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1, struct std___Rb_tree_const_iterator_int_ p2);
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
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____begin___const(struct std__multiset_int__std__less_int___std__allocator_int__* p0);
_Bool std__operator__(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_const_iterator_int_* p1);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____end___const(struct std__multiset_int__std__less_int___std__allocator_int__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
extern struct std___Rb_tree_node_base* std___Rb_tree_increment(struct std___Rb_tree_node_base* p0);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* p0, int p1);
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

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11lower_boundERKi
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____lower_bound(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v457, int* v458) {
bb459:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this460;
  int* __k461;
  struct std___Rb_tree_iterator_int_ __retval462;
  this460 = v457;
  __k461 = v458;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t463 = this460;
  struct std___Rb_tree_node_base* r464 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t463);
  struct std___Rb_tree_node_base* r465 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t463);
  int* t466 = __k461;
  struct std___Rb_tree_node_base* r467 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_lower_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(t463, r464, r465, t466);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval462, r467);
  struct std___Rb_tree_iterator_int_ t468 = __retval462;
  return t468;
}

// function: _ZNSt8multisetIiSt4lessIiESaIiEE11lower_boundERKi
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____lower_bound(struct std__multiset_int__std__less_int___std__allocator_int__* v469, int* v470) {
bb471:
  struct std__multiset_int__std__less_int___std__allocator_int__* this472;
  int* __x473;
  struct std___Rb_tree_const_iterator_int_ __retval474;
  struct std___Rb_tree_iterator_int_ ref_tmp0475;
  this472 = v469;
  __x473 = v470;
  struct std__multiset_int__std__less_int___std__allocator_int__* t476 = this472;
  int* t477 = __x473;
  struct std___Rb_tree_iterator_int_ r478 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____lower_bound(&t476->_M_t, t477);
  if (__cir_exc_active) {
    struct std___Rb_tree_const_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  ref_tmp0475 = r478;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&__retval474, &ref_tmp0475);
  struct std___Rb_tree_const_iterator_int_ t479 = __retval474;
  return t479;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEaSEOS0_
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* v480, struct std___Rb_tree_const_iterator_int_* v481) {
bb482:
  struct std___Rb_tree_const_iterator_int_* this483;
  struct std___Rb_tree_const_iterator_int_* unnamed484;
  struct std___Rb_tree_const_iterator_int_* __retval485;
  this483 = v480;
  unnamed484 = v481;
  struct std___Rb_tree_const_iterator_int_* t486 = this483;
  struct std___Rb_tree_const_iterator_int_* t487 = unnamed484;
  struct std___Rb_tree_node_base* t488 = t487->_M_node;
  t486->_M_node = t488;
  __retval485 = t486;
  struct std___Rb_tree_const_iterator_int_* t489 = __retval485;
  return t489;
}

// function: _ZNKSt23_Rb_tree_const_iteratorIiEdeEv
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* v490) {
bb491:
  struct std___Rb_tree_const_iterator_int_* this492;
  int* __retval493;
  this492 = v490;
  struct std___Rb_tree_const_iterator_int_* t494 = this492;
  struct std___Rb_tree_node_base* t495 = t494->_M_node;
  struct std___Rb_tree_node_int_* derived496 = ((t495) ? (struct std___Rb_tree_node_int_*)((char *)t495 - 0) : (struct std___Rb_tree_node_int_*)0);
  int* r497 = std___Rb_tree_node_int____M_valptr___const(derived496);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval493 = r497;
  int* t498 = __retval493;
  return t498;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE14_M_upper_boundEPSt18_Rb_tree_node_baseS7_RKi
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_upper_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v499, struct std___Rb_tree_node_base* v500, struct std___Rb_tree_node_base* v501, int* v502) {
bb503:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this504;
  struct std___Rb_tree_node_base* __x505;
  struct std___Rb_tree_node_base* __y506;
  int* __k507;
  struct std___Rb_tree_node_base* __retval508;
  this504 = v499;
  __x505 = v500;
  __y506 = v501;
  __k507 = v502;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t509 = this504;
    while (1) {
      struct std___Rb_tree_node_base* t510 = __x505;
      _Bool cast511 = (_Bool)t510;
      if (!cast511) break;
        struct std___Rb_tree_key_compare_std__less_int__* base512 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t509->_M_impl) + 0);
        struct std__less_int_* cast513 = (struct std__less_int_*)base512;
        int* t514 = __k507;
        struct std___Rb_tree_node_base* t515 = __x505;
        int* r516 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t515);
        if (__cir_exc_active) {
          struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
          return __cir_eh_ret;
        }
        _Bool r517 = std__less_int___operator___int_const___int_const___const(cast513, t514, r516);
        if (__cir_exc_active) {
          struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
          return __cir_eh_ret;
        }
        if (r517) {
          struct std___Rb_tree_node_base* t518 = __x505;
          __y506 = t518;
          struct std___Rb_tree_node_base* t519 = __x505;
          struct std___Rb_tree_node_base* r520 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t519);
          __x505 = r520;
        } else {
          struct std___Rb_tree_node_base* t521 = __x505;
          struct std___Rb_tree_node_base* r522 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t521);
          __x505 = r522;
        }
    }
  struct std___Rb_tree_node_base* t523 = __y506;
  __retval508 = t523;
  struct std___Rb_tree_node_base* t524 = __retval508;
  return t524;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11upper_boundERKi
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____upper_bound(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v525, int* v526) {
bb527:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this528;
  int* __k529;
  struct std___Rb_tree_iterator_int_ __retval530;
  this528 = v525;
  __k529 = v526;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t531 = this528;
  struct std___Rb_tree_node_base* r532 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t531);
  struct std___Rb_tree_node_base* r533 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t531);
  int* t534 = __k529;
  struct std___Rb_tree_node_base* r535 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_upper_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(t531, r532, r533, t534);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval530, r535);
  struct std___Rb_tree_iterator_int_ t536 = __retval530;
  return t536;
}

// function: _ZNSt8multisetIiSt4lessIiESaIiEE11upper_boundERKi
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____upper_bound(struct std__multiset_int__std__less_int___std__allocator_int__* v537, int* v538) {
bb539:
  struct std__multiset_int__std__less_int___std__allocator_int__* this540;
  int* __x541;
  struct std___Rb_tree_const_iterator_int_ __retval542;
  struct std___Rb_tree_iterator_int_ ref_tmp0543;
  this540 = v537;
  __x541 = v538;
  struct std__multiset_int__std__less_int___std__allocator_int__* t544 = this540;
  int* t545 = __x541;
  struct std___Rb_tree_iterator_int_ r546 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____upper_bound(&t544->_M_t, t545);
  if (__cir_exc_active) {
    struct std___Rb_tree_const_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  ref_tmp0543 = r546;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&__retval542, &ref_tmp0543);
  struct std___Rb_tree_const_iterator_int_ t547 = __retval542;
  return t547;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5beginEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v548) {
bb549:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this550;
  struct std___Rb_tree_iterator_int_ __retval551;
  this550 = v548;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t552 = this550;
  struct std___Rb_tree_header* base553 = (struct std___Rb_tree_header*)((char *)&(t552->_M_impl) + 8);
  struct std___Rb_tree_node_base* t554 = base553->_M_header._M_left;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval551, t554);
  struct std___Rb_tree_iterator_int_ t555 = __retval551;
  return t555;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE3endEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v556) {
bb557:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this558;
  struct std___Rb_tree_iterator_int_ __retval559;
  this558 = v556;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t560 = this558;
  struct std___Rb_tree_node_base* r561 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t560);
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval559, r561);
  struct std___Rb_tree_iterator_int_ t562 = __retval559;
  return t562;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5clearEv
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____clear(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v563) {
bb564:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this565;
  this565 = v563;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t566 = this565;
  struct std___Rb_tree_node_int_* r567 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(t566);
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t566, r567);
  if (__cir_exc_active) {
    return;
  }
  struct std___Rb_tree_header* base568 = (struct std___Rb_tree_header*)((char *)&(t566->_M_impl) + 8);
  std___Rb_tree_header___M_reset(base568);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt9__rb_tree12_Node_traitsIiPiE22_S_rebalance_for_eraseEPSt18_Rb_tree_node_baseRS3_
struct std___Rb_tree_node_base* std____rb_tree___Node_traits_int__int_____S_rebalance_for_erase(struct std___Rb_tree_node_base* v569, struct std___Rb_tree_node_base* v570) {
bb571:
  struct std___Rb_tree_node_base* __z572;
  struct std___Rb_tree_node_base* __header573;
  struct std___Rb_tree_node_base* __retval574;
  __z572 = v569;
  __header573 = v570;
  struct std___Rb_tree_node_base* t575 = __z572;
  struct std___Rb_tree_node_base* t576 = __header573;
  struct std___Rb_tree_node_base* r577 = std___Rb_tree_rebalance_for_erase(t575, t576);
  __retval574 = r577;
  struct std___Rb_tree_node_base* t578 = __retval574;
  return t578;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_erase_auxESt23_Rb_tree_const_iteratorIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v579, struct std___Rb_tree_const_iterator_int_ v580) {
bb581:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this582;
  struct std___Rb_tree_const_iterator_int_ __position583;
  struct std___Rb_tree_node_base* __y584;
  this582 = v579;
  __position583 = v580;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t585 = this582;
  struct std___Rb_tree_node_base* t586 = __position583._M_node;
  struct std___Rb_tree_header* base587 = (struct std___Rb_tree_header*)((char *)&(t585->_M_impl) + 8);
  struct std___Rb_tree_node_base* r588 = std____rb_tree___Node_traits_int__int_____S_rebalance_for_erase(t586, &base587->_M_header);
  __y584 = r588;
  struct std___Rb_tree_node_base* t589 = __y584;
  struct std___Rb_tree_node_int_* derived590 = (struct std___Rb_tree_node_int_*)((char *)t589 - 0);
  struct std___Rb_tree_node_int_* r591 = std___Rb_tree_node_int____M_node_ptr(derived590);
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(t585, r591);
  struct std___Rb_tree_header* base592 = (struct std___Rb_tree_header*)((char *)&(t585->_M_impl) + 8);
  unsigned long t593 = base592->_M_node_count;
  unsigned long u594 = t593 - 1;
  base592->_M_node_count = u594;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_erase_auxESt23_Rb_tree_const_iteratorIiES7_
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux_2(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v595, struct std___Rb_tree_const_iterator_int_ v596, struct std___Rb_tree_const_iterator_int_ v597) {
bb598:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this599;
  struct std___Rb_tree_const_iterator_int_ __first600;
  struct std___Rb_tree_const_iterator_int_ __last601;
  this599 = v595;
  __first600 = v596;
  __last601 = v597;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t602 = this599;
    struct std___Rb_tree_const_iterator_int_ ref_tmp0603;
    struct std___Rb_tree_iterator_int_ ref_tmp1604;
    struct std___Rb_tree_iterator_int_ r605 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(t602);
    ref_tmp1604 = r605;
    std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&ref_tmp0603, &ref_tmp1604);
    _Bool r606 = std__operator__(&__first600, &ref_tmp0603);
    _Bool ternary607;
    if (r606) {
      struct std___Rb_tree_const_iterator_int_ ref_tmp2608;
      struct std___Rb_tree_iterator_int_ ref_tmp3609;
      struct std___Rb_tree_iterator_int_ r610 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(t602);
      ref_tmp3609 = r610;
      std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&ref_tmp2608, &ref_tmp3609);
      _Bool r611 = std__operator__(&__last601, &ref_tmp2608);
      ternary607 = (_Bool)r611;
    } else {
      _Bool c612 = 0;
      ternary607 = (_Bool)c612;
    }
    if (ternary607) {
      std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____clear(t602);
    } else {
        struct std___Rb_tree_const_iterator_int_ agg_tmp0613;
        while (1) {
          _Bool r614 = std__operator__(&__first600, &__last601);
          _Bool u615 = !r614;
          if (!u615) break;
          int c616 = 0;
          struct std___Rb_tree_const_iterator_int_ r617 = std___Rb_tree_const_iterator_int___operator__(&__first600, c616);
          agg_tmp0613 = r617;
          struct std___Rb_tree_const_iterator_int_ t618 = agg_tmp0613;
          std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux(t602, t618);
          if (__cir_exc_active) {
            return;
          }
        }
    }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5eraseB5cxx11ESt23_Rb_tree_const_iteratorIiES7_
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase_abi_cxx11_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v619, struct std___Rb_tree_const_iterator_int_ v620, struct std___Rb_tree_const_iterator_int_ v621) {
bb622:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this623;
  struct std___Rb_tree_const_iterator_int_ __first624;
  struct std___Rb_tree_const_iterator_int_ __last625;
  struct std___Rb_tree_iterator_int_ __retval626;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0627;
  struct std___Rb_tree_const_iterator_int_ agg_tmp1628;
  this623 = v619;
  __first624 = v620;
  __last625 = v621;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t629 = this623;
  agg_tmp0627 = __first624; // copy
  agg_tmp1628 = __last625; // copy
  struct std___Rb_tree_const_iterator_int_ t630 = agg_tmp0627;
  struct std___Rb_tree_const_iterator_int_ t631 = agg_tmp1628;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux_2(t629, t630, t631);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* t632 = __last625._M_node;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval626, t632);
  struct std___Rb_tree_iterator_int_ t633 = __retval626;
  return t633;
}

// function: _ZNSt8multisetIiSt4lessIiESaIiEE5eraseB5cxx11ESt23_Rb_tree_const_iteratorIiES5_
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____erase_abi_cxx11_(struct std__multiset_int__std__less_int___std__allocator_int__* v634, struct std___Rb_tree_const_iterator_int_ v635, struct std___Rb_tree_const_iterator_int_ v636) {
bb637:
  struct std__multiset_int__std__less_int___std__allocator_int__* this638;
  struct std___Rb_tree_const_iterator_int_ __first639;
  struct std___Rb_tree_const_iterator_int_ __last640;
  struct std___Rb_tree_const_iterator_int_ __retval641;
  struct std___Rb_tree_iterator_int_ ref_tmp0642;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0643;
  struct std___Rb_tree_const_iterator_int_ agg_tmp1644;
  this638 = v634;
  __first639 = v635;
  __last640 = v636;
  struct std__multiset_int__std__less_int___std__allocator_int__* t645 = this638;
  agg_tmp0643 = __first639; // copy
  agg_tmp1644 = __last640; // copy
  struct std___Rb_tree_const_iterator_int_ t646 = agg_tmp0643;
  struct std___Rb_tree_const_iterator_int_ t647 = agg_tmp1644;
  struct std___Rb_tree_iterator_int_ r648 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase_abi_cxx11_(&t645->_M_t, t646, t647);
  if (__cir_exc_active) {
    struct std___Rb_tree_const_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  ref_tmp0642 = r648;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&__retval641, &ref_tmp0642);
  struct std___Rb_tree_const_iterator_int_ t649 = __retval641;
  return t649;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v650, int v651) {
bb652:
  int __a653;
  int __b654;
  int __retval655;
  __a653 = v650;
  __b654 = v651;
  int t656 = __a653;
  int t657 = __b654;
  int b658 = t656 | t657;
  __retval655 = b658;
  int t659 = __retval655;
  return t659;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v660) {
bb661:
  struct std__basic_ios_char__std__char_traits_char__* this662;
  int __retval663;
  this662 = v660;
  struct std__basic_ios_char__std__char_traits_char__* t664 = this662;
  struct std__ios_base* base665 = (struct std__ios_base*)((char *)t664 + 0);
  int t666 = base665->_M_streambuf_state;
  __retval663 = t666;
  int t667 = __retval663;
  return t667;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v668, int v669) {
bb670:
  struct std__basic_ios_char__std__char_traits_char__* this671;
  int __state672;
  this671 = v668;
  __state672 = v669;
  struct std__basic_ios_char__std__char_traits_char__* t673 = this671;
  int r674 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t673);
  if (__cir_exc_active) {
    return;
  }
  int t675 = __state672;
  int r676 = std__operator_(r674, t675);
  std__basic_ios_char__std__char_traits_char_____clear(t673, r676);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v677, char* v678) {
bb679:
  char* __c1680;
  char* __c2681;
  _Bool __retval682;
  __c1680 = v677;
  __c2681 = v678;
  char* t683 = __c1680;
  char t684 = *t683;
  int cast685 = (int)t684;
  char* t686 = __c2681;
  char t687 = *t686;
  int cast688 = (int)t687;
  _Bool c689 = ((cast685 == cast688)) ? 1 : 0;
  __retval682 = c689;
  _Bool t690 = __retval682;
  return t690;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v691) {
bb692:
  char* __p693;
  unsigned long __retval694;
  unsigned long __i695;
  __p693 = v691;
  unsigned long c696 = 0;
  __i695 = c696;
    char ref_tmp0697;
    while (1) {
      unsigned long t698 = __i695;
      char* t699 = __p693;
      char* ptr700 = &(t699)[t698];
      char c701 = 0;
      ref_tmp0697 = c701;
      _Bool r702 = __gnu_cxx__char_traits_char___eq(ptr700, &ref_tmp0697);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u703 = !r702;
      if (!u703) break;
      unsigned long t704 = __i695;
      unsigned long u705 = t704 + 1;
      __i695 = u705;
    }
  unsigned long t706 = __i695;
  __retval694 = t706;
  unsigned long t707 = __retval694;
  return t707;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v708) {
bb709:
  char* __s710;
  unsigned long __retval711;
  __s710 = v708;
    _Bool r712 = std____is_constant_evaluated();
    if (r712) {
      char* t713 = __s710;
      unsigned long r714 = __gnu_cxx__char_traits_char___length(t713);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval711 = r714;
      unsigned long t715 = __retval711;
      return t715;
    }
  char* t716 = __s710;
  unsigned long r717 = strlen(t716);
  __retval711 = r717;
  unsigned long t718 = __retval711;
  return t718;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v719, char* v720) {
bb721:
  struct std__basic_ostream_char__std__char_traits_char__* __out722;
  char* __s723;
  struct std__basic_ostream_char__std__char_traits_char__* __retval724;
  __out722 = v719;
  __s723 = v720;
    char* t725 = __s723;
    _Bool cast726 = (_Bool)t725;
    _Bool u727 = !cast726;
    if (u727) {
      struct std__basic_ostream_char__std__char_traits_char__* t728 = __out722;
      void** v729 = (void**)t728;
      void* v730 = *((void**)v729);
      unsigned char* cast731 = (unsigned char*)v730;
      long c732 = -24;
      unsigned char* ptr733 = &(cast731)[c732];
      long* cast734 = (long*)ptr733;
      long t735 = *cast734;
      unsigned char* cast736 = (unsigned char*)t728;
      unsigned char* ptr737 = &(cast736)[t735];
      struct std__basic_ostream_char__std__char_traits_char__* cast738 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr737;
      struct std__basic_ios_char__std__char_traits_char__* cast739 = (struct std__basic_ios_char__std__char_traits_char__*)cast738;
      int t740 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast739, t740);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t741 = __out722;
      char* t742 = __s723;
      char* t743 = __s723;
      unsigned long r744 = std__char_traits_char___length(t743);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast745 = (long)r744;
      struct std__basic_ostream_char__std__char_traits_char__* r746 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t741, t742, cast745);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t747 = __out722;
  __retval724 = t747;
  struct std__basic_ostream_char__std__char_traits_char__* t748 = __retval724;
  return t748;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* v749, struct std___Rb_tree_node_base* v750) {
bb751:
  struct std___Rb_tree_const_iterator_int_* this752;
  struct std___Rb_tree_node_base* __x753;
  this752 = v749;
  __x753 = v750;
  struct std___Rb_tree_const_iterator_int_* t754 = this752;
  struct std___Rb_tree_node_base* t755 = __x753;
  t754->_M_node = t755;
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5beginEv
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v756) {
bb757:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this758;
  struct std___Rb_tree_const_iterator_int_ __retval759;
  this758 = v756;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t760 = this758;
  struct std___Rb_tree_header* base761 = (struct std___Rb_tree_header*)((char *)&(t760->_M_impl) + 8);
  struct std___Rb_tree_node_base* t762 = base761->_M_header._M_left;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval759, t762);
  struct std___Rb_tree_const_iterator_int_ t763 = __retval759;
  return t763;
}

// function: _ZNKSt8multisetIiSt4lessIiESaIiEE5beginEv
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____begin___const(struct std__multiset_int__std__less_int___std__allocator_int__* v764) {
bb765:
  struct std__multiset_int__std__less_int___std__allocator_int__* this766;
  struct std___Rb_tree_const_iterator_int_ __retval767;
  this766 = v764;
  struct std__multiset_int__std__less_int___std__allocator_int__* t768 = this766;
  struct std___Rb_tree_const_iterator_int_ r769 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(&t768->_M_t);
  __retval767 = r769;
  struct std___Rb_tree_const_iterator_int_ t770 = __retval767;
  return t770;
}

// function: _ZSteqRKSt23_Rb_tree_const_iteratorIiES2_
_Bool std__operator__(struct std___Rb_tree_const_iterator_int_* v771, struct std___Rb_tree_const_iterator_int_* v772) {
bb773:
  struct std___Rb_tree_const_iterator_int_* __x774;
  struct std___Rb_tree_const_iterator_int_* __y775;
  _Bool __retval776;
  __x774 = v771;
  __y775 = v772;
  struct std___Rb_tree_const_iterator_int_* t777 = __x774;
  struct std___Rb_tree_node_base* t778 = t777->_M_node;
  struct std___Rb_tree_const_iterator_int_* t779 = __y775;
  struct std___Rb_tree_node_base* t780 = t779->_M_node;
  _Bool c781 = ((t778 == t780)) ? 1 : 0;
  __retval776 = c781;
  _Bool t782 = __retval776;
  return t782;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE3endEv
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v783) {
bb784:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this785;
  struct std___Rb_tree_const_iterator_int_ __retval786;
  this785 = v783;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t787 = this785;
  struct std___Rb_tree_node_base* r788 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t787);
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval786, r788);
  struct std___Rb_tree_const_iterator_int_ t789 = __retval786;
  return t789;
}

// function: _ZNKSt8multisetIiSt4lessIiESaIiEE3endEv
struct std___Rb_tree_const_iterator_int_ std__multiset_int__std__less_int___std__allocator_int_____end___const(struct std__multiset_int__std__less_int___std__allocator_int__* v790) {
bb791:
  struct std__multiset_int__std__less_int___std__allocator_int__* this792;
  struct std___Rb_tree_const_iterator_int_ __retval793;
  this792 = v790;
  struct std__multiset_int__std__less_int___std__allocator_int__* t794 = this792;
  struct std___Rb_tree_const_iterator_int_ r795 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(&t794->_M_t);
  __retval793 = r795;
  struct std___Rb_tree_const_iterator_int_ t796 = __retval793;
  return t796;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEppEi
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* v797, int v798) {
bb799:
  struct std___Rb_tree_const_iterator_int_* this800;
  int unnamed801;
  struct std___Rb_tree_const_iterator_int_ __retval802;
  this800 = v797;
  unnamed801 = v798;
  struct std___Rb_tree_const_iterator_int_* t803 = this800;
  __retval802 = *t803; // copy
  struct std___Rb_tree_node_base* t804 = t803->_M_node;
  struct std___Rb_tree_node_base* r805 = std___Rb_tree_increment(t804);
  t803->_M_node = r805;
  struct std___Rb_tree_const_iterator_int_ t806 = __retval802;
  return t806;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v807, void* v808) {
bb809:
  struct std__basic_ostream_char__std__char_traits_char__* this810;
  void* __pf811;
  struct std__basic_ostream_char__std__char_traits_char__* __retval812;
  this810 = v807;
  __pf811 = v808;
  struct std__basic_ostream_char__std__char_traits_char__* t813 = this810;
  void* t814 = __pf811;
  struct std__basic_ostream_char__std__char_traits_char__* r815 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t814)(t813);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval812 = r815;
  struct std__basic_ostream_char__std__char_traits_char__* t816 = __retval812;
  return t816;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v817) {
bb818:
  struct std__basic_ostream_char__std__char_traits_char__* __os819;
  struct std__basic_ostream_char__std__char_traits_char__* __retval820;
  __os819 = v817;
  struct std__basic_ostream_char__std__char_traits_char__* t821 = __os819;
  struct std__basic_ostream_char__std__char_traits_char__* r822 = std__ostream__flush(t821);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval820 = r822;
  struct std__basic_ostream_char__std__char_traits_char__* t823 = __retval820;
  return t823;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v824) {
bb825:
  struct std__ctype_char_* __f826;
  struct std__ctype_char_* __retval827;
  __f826 = v824;
    struct std__ctype_char_* t828 = __f826;
    _Bool cast829 = (_Bool)t828;
    _Bool u830 = !cast829;
    if (u830) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t831 = __f826;
  __retval827 = t831;
  struct std__ctype_char_* t832 = __retval827;
  return t832;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v833, char v834) {
bb835:
  struct std__ctype_char_* this836;
  char __c837;
  char __retval838;
  this836 = v833;
  __c837 = v834;
  struct std__ctype_char_* t839 = this836;
    char t840 = t839->_M_widen_ok;
    _Bool cast841 = (_Bool)t840;
    if (cast841) {
      char t842 = __c837;
      unsigned char cast843 = (unsigned char)t842;
      unsigned long cast844 = (unsigned long)cast843;
      char t845 = t839->_M_widen[cast844];
      __retval838 = t845;
      char t846 = __retval838;
      return t846;
    }
  std__ctype_char____M_widen_init___const(t839);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t847 = __c837;
  void** v848 = (void**)t839;
  void* v849 = *((void**)v848);
  char vcall852 = (char)__VERIFIER_virtual_call_char_char(t839, 6, t847);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval838 = vcall852;
  char t853 = __retval838;
  return t853;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v854, char v855) {
bb856:
  struct std__basic_ios_char__std__char_traits_char__* this857;
  char __c858;
  char __retval859;
  this857 = v854;
  __c858 = v855;
  struct std__basic_ios_char__std__char_traits_char__* t860 = this857;
  struct std__ctype_char_* t861 = t860->_M_ctype;
  struct std__ctype_char_* r862 = std__ctype_char__const__std____check_facet_std__ctype_char___(t861);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t863 = __c858;
  char r864 = std__ctype_char___widen_char__const(r862, t863);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval859 = r864;
  char t865 = __retval859;
  return t865;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v866) {
bb867:
  struct std__basic_ostream_char__std__char_traits_char__* __os868;
  struct std__basic_ostream_char__std__char_traits_char__* __retval869;
  __os868 = v866;
  struct std__basic_ostream_char__std__char_traits_char__* t870 = __os868;
  struct std__basic_ostream_char__std__char_traits_char__* t871 = __os868;
  void** v872 = (void**)t871;
  void* v873 = *((void**)v872);
  unsigned char* cast874 = (unsigned char*)v873;
  long c875 = -24;
  unsigned char* ptr876 = &(cast874)[c875];
  long* cast877 = (long*)ptr876;
  long t878 = *cast877;
  unsigned char* cast879 = (unsigned char*)t871;
  unsigned char* ptr880 = &(cast879)[t878];
  struct std__basic_ostream_char__std__char_traits_char__* cast881 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr880;
  struct std__basic_ios_char__std__char_traits_char__* cast882 = (struct std__basic_ios_char__std__char_traits_char__*)cast881;
  char c883 = 10;
  char r884 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast882, c883);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r885 = std__ostream__put(t870, r884);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r886 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r885);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval869 = r886;
  struct std__basic_ostream_char__std__char_traits_char__* t887 = __retval869;
  return t887;
}

// function: _ZNSt8multisetIiSt4lessIiESaIiEED2Ev
void std__multiset_int__std__less_int___std__allocator_int______multiset(struct std__multiset_int__std__less_int___std__allocator_int__* v888) {
bb889:
  struct std__multiset_int__std__less_int___std__allocator_int__* this890;
  this890 = v888;
  struct std__multiset_int__std__less_int___std__allocator_int__* t891 = this890;
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(&t891->_M_t);
  }
  return;
}

// function: main
int main() {
bb892:
  int __retval893;
  struct std__multiset_int__std__less_int___std__allocator_int__ myset894;
  struct std___Rb_tree_const_iterator_int_ it895;
  struct std___Rb_tree_const_iterator_int_ itlow896;
  struct std___Rb_tree_const_iterator_int_ itup897;
  struct std___Rb_tree_const_iterator_int_ ref_tmp1898;
  int ref_tmp2899;
  struct std___Rb_tree_const_iterator_int_ ref_tmp3900;
  int ref_tmp4901;
  struct std___Rb_tree_const_iterator_int_ agg_tmp1902;
  struct std___Rb_tree_const_iterator_int_ agg_tmp2903;
  struct std___Rb_tree_const_iterator_int_ agg_tmp3904;
  int c905 = 0;
  __retval893 = c905;
  std__multiset_int__std__less_int___std__allocator_int_____multiset(&myset894);
    std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(&it895);
    std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(&itlow896);
    std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(&itup897);
      int i906;
      int ref_tmp0907;
      struct std___Rb_tree_const_iterator_int_ agg_tmp0908;
      int c909 = 1;
      i906 = c909;
      while (1) {
        int t911 = i906;
        int c912 = 10;
        _Bool c913 = ((t911 < c912)) ? 1 : 0;
        if (!c913) break;
        int t914 = i906;
        int c915 = 10;
        int b916 = t914 * c915;
        ref_tmp0907 = b916;
        struct std___Rb_tree_const_iterator_int_ r917 = std__multiset_int__std__less_int___std__allocator_int_____insert(&myset894, &ref_tmp0907);
        if (__cir_exc_active) {
          {
            std__multiset_int__std__less_int___std__allocator_int______multiset(&myset894);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        agg_tmp0908 = r917;
      for_step910: ;
        int t918 = i906;
        int u919 = t918 + 1;
        i906 = u919;
      }
    unsigned long r920 = std__multiset_int__std__less_int___std__allocator_int_____size___const(&myset894);
    unsigned long c921 = 9;
    _Bool c922 = ((r920 == c921)) ? 1 : 0;
    if (c922) {
    } else {
      char* cast923 = (char*)&(_str);
      char* c924 = _str_1;
      unsigned int c925 = 19;
      char* cast926 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast923, c924, c925, cast926);
    }
    int c927 = 30;
    ref_tmp2899 = c927;
    struct std___Rb_tree_const_iterator_int_ r928 = std__multiset_int__std__less_int___std__allocator_int_____lower_bound(&myset894, &ref_tmp2899);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset894);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    ref_tmp1898 = r928;
    struct std___Rb_tree_const_iterator_int_* r929 = std___Rb_tree_const_iterator_int___operator_(&itlow896, &ref_tmp1898);
    int* r930 = std___Rb_tree_const_iterator_int___operator____const(&itlow896);
    int t931 = *r930;
    int c932 = 30;
    _Bool c933 = ((t931 == c932)) ? 1 : 0;
    if (c933) {
    } else {
      char* cast934 = (char*)&(_str_2);
      char* c935 = _str_1;
      unsigned int c936 = 21;
      char* cast937 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast934, c935, c936, cast937);
    }
    int c938 = 60;
    ref_tmp4901 = c938;
    struct std___Rb_tree_const_iterator_int_ r939 = std__multiset_int__std__less_int___std__allocator_int_____upper_bound(&myset894, &ref_tmp4901);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset894);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    ref_tmp3900 = r939;
    struct std___Rb_tree_const_iterator_int_* r940 = std___Rb_tree_const_iterator_int___operator_(&itup897, &ref_tmp3900);
    int* r941 = std___Rb_tree_const_iterator_int___operator____const(&itup897);
    int t942 = *r941;
    int c943 = 70;
    _Bool c944 = ((t942 == c943)) ? 1 : 0;
    if (c944) {
    } else {
      char* cast945 = (char*)&(_str_3);
      char* c946 = _str_1;
      unsigned int c947 = 23;
      char* cast948 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast945, c946, c947, cast948);
    }
    agg_tmp1902 = itlow896; // copy
    agg_tmp2903 = itup897; // copy
    struct std___Rb_tree_const_iterator_int_ t949 = agg_tmp1902;
    struct std___Rb_tree_const_iterator_int_ t950 = agg_tmp2903;
    struct std___Rb_tree_const_iterator_int_ r951 = std__multiset_int__std__less_int___std__allocator_int_____erase_abi_cxx11_(&myset894, t949, t950);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset894);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp3904 = r951;
    unsigned long r952 = std__multiset_int__std__less_int___std__allocator_int_____size___const(&myset894);
    unsigned long c953 = 5;
    _Bool c954 = ((r952 == c953)) ? 1 : 0;
    if (c954) {
    } else {
      char* cast955 = (char*)&(_str_4);
      char* c956 = _str_1;
      unsigned int c957 = 25;
      char* cast958 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast955, c956, c957, cast958);
    }
    char* cast959 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* r960 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast959);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset894);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      struct std___Rb_tree_const_iterator_int_ ref_tmp5961;
      struct std___Rb_tree_const_iterator_int_ ref_tmp6962;
      struct std___Rb_tree_const_iterator_int_ agg_tmp4963;
      struct std___Rb_tree_const_iterator_int_ r964 = std__multiset_int__std__less_int___std__allocator_int_____begin___const(&myset894);
      ref_tmp5961 = r964;
      struct std___Rb_tree_const_iterator_int_* r965 = std___Rb_tree_const_iterator_int___operator_(&it895, &ref_tmp5961);
      while (1) {
        struct std___Rb_tree_const_iterator_int_ r967 = std__multiset_int__std__less_int___std__allocator_int_____end___const(&myset894);
        ref_tmp6962 = r967;
        _Bool r968 = std__operator__(&it895, &ref_tmp6962);
        _Bool u969 = !r968;
        if (!u969) break;
        char* cast970 = (char*)&(_str_6);
        struct std__basic_ostream_char__std__char_traits_char__* r971 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast970);
        if (__cir_exc_active) {
          {
            std__multiset_int__std__less_int___std__allocator_int______multiset(&myset894);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        int* r972 = std___Rb_tree_const_iterator_int___operator____const(&it895);
        int t973 = *r972;
        struct std__basic_ostream_char__std__char_traits_char__* r974 = std__ostream__operator__(r971, t973);
        if (__cir_exc_active) {
          {
            std__multiset_int__std__less_int___std__allocator_int______multiset(&myset894);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
      for_step966: ;
        int c975 = 0;
        struct std___Rb_tree_const_iterator_int_ r976 = std___Rb_tree_const_iterator_int___operator__(&it895, c975);
        agg_tmp4963 = r976;
      }
    struct std__basic_ostream_char__std__char_traits_char__* r977 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__multiset_int__std__less_int___std__allocator_int______multiset(&myset894);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c978 = 0;
    __retval893 = c978;
    int t979 = __retval893;
    int ret_val980 = t979;
    {
      std__multiset_int__std__less_int___std__allocator_int______multiset(&myset894);
    }
    return ret_val980;
  int t981 = __retval893;
  return t981;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v982) {
bb983:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this984;
  this984 = v982;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t985 = this984;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(&t985->_M_impl);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v986) {
bb987:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this988;
  this988 = v986;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t989 = this988;
    struct std___Rb_tree_node_int_* r990 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(t989);
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t989, r990);
    if (__cir_exc_active) {
      {
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t989->_M_impl);
      }
      return;
    }
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t989->_M_impl);
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v991) {
bb992:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this993;
  this993 = v991;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t994 = this993;
  struct std__allocator_std___Rb_tree_node_int__* base995 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t994 + 0);
  std__allocator_std___Rb_tree_node_int_____allocator(base995);
    struct std___Rb_tree_key_compare_std__less_int__* base996 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)t994 + 0);
    std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(base996);
    struct std___Rb_tree_header* base997 = (struct std___Rb_tree_header*)((char *)t994 + 8);
    std___Rb_tree_header___Rb_tree_header(base997);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v998) {
bb999:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this1000;
  this1000 = v998;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t1001 = this1000;
  {
    struct std__allocator_std___Rb_tree_node_int__* base1002 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t1001 + 0);
    std__allocator_std___Rb_tree_node_int______allocator(base1002);
  }
  return;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEEC2Ev
void std____new_allocator_std___Rb_tree_node_int_______new_allocator(struct std____new_allocator_std___Rb_tree_node_int__* v1003) {
bb1004:
  struct std____new_allocator_std___Rb_tree_node_int__* this1005;
  this1005 = v1003;
  struct std____new_allocator_std___Rb_tree_node_int__* t1006 = this1005;
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEEC2Ev
void std__allocator_std___Rb_tree_node_int_____allocator(struct std__allocator_std___Rb_tree_node_int__* v1007) {
bb1008:
  struct std__allocator_std___Rb_tree_node_int__* this1009;
  this1009 = v1007;
  struct std__allocator_std___Rb_tree_node_int__* t1010 = this1009;
  struct std____new_allocator_std___Rb_tree_node_int__* base1011 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t1010 + 0);
  std____new_allocator_std___Rb_tree_node_int_______new_allocator(base1011);
  return;
}

// function: _ZNSt20_Rb_tree_key_compareISt4lessIiEEC2Ev
void std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(struct std___Rb_tree_key_compare_std__less_int__* v1012) {
bb1013:
  struct std___Rb_tree_key_compare_std__less_int__* this1014;
  this1014 = v1012;
  return;
}

// function: _ZNSt15_Rb_tree_header8_M_resetEv
void std___Rb_tree_header___M_reset(struct std___Rb_tree_header* v1015) {
bb1016:
  struct std___Rb_tree_header* this1017;
  this1017 = v1015;
  struct std___Rb_tree_header* t1018 = this1017;
  struct std___Rb_tree_node_base* c1019 = ((void*)0);
  t1018->_M_header._M_parent = c1019;
  t1018->_M_header._M_left = &t1018->_M_header;
  t1018->_M_header._M_right = &t1018->_M_header;
  unsigned long c1020 = 0;
  t1018->_M_node_count = c1020;
  return;
}

// function: _ZNSt15_Rb_tree_headerC2Ev
void std___Rb_tree_header___Rb_tree_header(struct std___Rb_tree_header* v1021) {
bb1022:
  struct std___Rb_tree_header* this1023;
  this1023 = v1021;
  struct std___Rb_tree_header* t1024 = this1023;
  unsigned int c1025 = 0;
  t1024->_M_header._M_color = c1025;
  std___Rb_tree_header___M_reset(t1024);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEED2Ev
void std__allocator_std___Rb_tree_node_int______allocator(struct std__allocator_std___Rb_tree_node_int__* v1026) {
bb1027:
  struct std__allocator_std___Rb_tree_node_int__* this1028;
  this1028 = v1026;
  struct std__allocator_std___Rb_tree_node_int__* t1029 = this1028;
  return;
}

// function: _ZNSt13_Rb_tree_nodeIiE11_M_node_ptrEv
struct std___Rb_tree_node_int_* std___Rb_tree_node_int____M_node_ptr(struct std___Rb_tree_node_int_* v1030) {
bb1031:
  struct std___Rb_tree_node_int_* this1032;
  struct std___Rb_tree_node_int_* __retval1033;
  this1032 = v1030;
  struct std___Rb_tree_node_int_* t1034 = this1032;
  __retval1033 = t1034;
  struct std___Rb_tree_node_int_* t1035 = __retval1033;
  return t1035;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(struct std___Rb_tree_node_int_* v1036) {
bb1037:
  struct std___Rb_tree_node_int_* __x1038;
  struct std___Rb_tree_node_int_* __retval1039;
  __x1038 = v1036;
  struct std___Rb_tree_node_int_* t1040 = __x1038;
  struct std___Rb_tree_node_base* base1041 = (struct std___Rb_tree_node_base*)((char *)t1040 + 0);
  struct std___Rb_tree_node_base* t1042 = base1041->_M_right;
  _Bool cast1043 = (_Bool)t1042;
  struct std___Rb_tree_node_int_* ternary1044;
  if (cast1043) {
    struct std___Rb_tree_node_int_* t1045 = __x1038;
    struct std___Rb_tree_node_base* base1046 = (struct std___Rb_tree_node_base*)((char *)t1045 + 0);
    struct std___Rb_tree_node_base* t1047 = base1046->_M_right;
    struct std___Rb_tree_node_int_* derived1048 = (struct std___Rb_tree_node_int_*)((char *)t1047 - 0);
    struct std___Rb_tree_node_int_* r1049 = std___Rb_tree_node_int____M_node_ptr(derived1048);
    ternary1044 = (struct std___Rb_tree_node_int_*)r1049;
  } else {
    struct std___Rb_tree_node_int_* c1050 = ((void*)0);
    ternary1044 = (struct std___Rb_tree_node_int_*)c1050;
  }
  __retval1039 = ternary1044;
  struct std___Rb_tree_node_int_* t1051 = __retval1039;
  return t1051;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(struct std___Rb_tree_node_int_* v1052) {
bb1053:
  struct std___Rb_tree_node_int_* __x1054;
  struct std___Rb_tree_node_int_* __retval1055;
  __x1054 = v1052;
  struct std___Rb_tree_node_int_* t1056 = __x1054;
  struct std___Rb_tree_node_base* base1057 = (struct std___Rb_tree_node_base*)((char *)t1056 + 0);
  struct std___Rb_tree_node_base* t1058 = base1057->_M_left;
  _Bool cast1059 = (_Bool)t1058;
  struct std___Rb_tree_node_int_* ternary1060;
  if (cast1059) {
    struct std___Rb_tree_node_int_* t1061 = __x1054;
    struct std___Rb_tree_node_base* base1062 = (struct std___Rb_tree_node_base*)((char *)t1061 + 0);
    struct std___Rb_tree_node_base* t1063 = base1062->_M_left;
    struct std___Rb_tree_node_int_* derived1064 = (struct std___Rb_tree_node_int_*)((char *)t1063 - 0);
    struct std___Rb_tree_node_int_* r1065 = std___Rb_tree_node_int____M_node_ptr(derived1064);
    ternary1060 = (struct std___Rb_tree_node_int_*)r1065;
  } else {
    struct std___Rb_tree_node_int_* c1066 = ((void*)0);
    ternary1060 = (struct std___Rb_tree_node_int_*)c1066;
  }
  __retval1055 = ternary1060;
  struct std___Rb_tree_node_int_* t1067 = __retval1055;
  return t1067;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1068) {
bb1069:
  int* __location1070;
  __location1070 = v1068;
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(struct std__allocator_std___Rb_tree_node_int__* v1071, int* v1072) {
bb1073:
  struct std__allocator_std___Rb_tree_node_int__* __a1074;
  int* __p1075;
  __a1074 = v1071;
  __p1075 = v1072;
  int* t1076 = __p1075;
  void_std__destroy_at_int_(t1076);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___Rb_tree_node_int__* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1077) {
bb1078:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1079;
  struct std__allocator_std___Rb_tree_node_int__* __retval1080;
  this1079 = v1077;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1081 = this1079;
  struct std__allocator_std___Rb_tree_node_int__* base1082 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)&(t1081->_M_impl) + 0);
  __retval1080 = base1082;
  struct std__allocator_std___Rb_tree_node_int__* t1083 = __retval1080;
  return t1083;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v1084) {
bb1085:
  struct __gnu_cxx____aligned_membuf_int_* this1086;
  void* __retval1087;
  this1086 = v1084;
  struct __gnu_cxx____aligned_membuf_int_* t1088 = this1086;
  void* cast1089 = (void*)&(t1088->_M_storage);
  __retval1087 = cast1089;
  void* t1090 = __retval1087;
  return t1090;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v1091) {
bb1092:
  struct __gnu_cxx____aligned_membuf_int_* this1093;
  int* __retval1094;
  this1093 = v1091;
  struct __gnu_cxx____aligned_membuf_int_* t1095 = this1093;
  void* r1096 = __gnu_cxx____aligned_membuf_int____M_addr(t1095);
  int* cast1097 = (int*)r1096;
  __retval1094 = cast1097;
  int* t1098 = __retval1094;
  return t1098;
}

// function: _ZNSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr(struct std___Rb_tree_node_int_* v1099) {
bb1100:
  struct std___Rb_tree_node_int_* this1101;
  int* __retval1102;
  this1101 = v1099;
  struct std___Rb_tree_node_int_* t1103 = this1101;
  int* r1104 = __gnu_cxx____aligned_membuf_int____M_ptr(&t1103->_M_storage);
  __retval1102 = r1104;
  int* t1105 = __retval1102;
  return t1105;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_destroy_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1106, struct std___Rb_tree_node_int_* v1107) {
bb1108:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1109;
  struct std___Rb_tree_node_int_* __p1110;
  this1109 = v1106;
  __p1110 = v1107;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1111 = this1109;
  struct std__allocator_std___Rb_tree_node_int__* r1112 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t1111);
  struct std___Rb_tree_node_int_* t1113 = __p1110;
  int* r1114 = std___Rb_tree_node_int____M_valptr(t1113);
  if (__cir_exc_active) {
    return;
  }
  void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(r1112, r1114);
  struct std___Rb_tree_node_int_* t1115 = __p1110;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1116:
  _Bool __retval1117;
    _Bool c1118 = 0;
    __retval1117 = c1118;
    _Bool t1119 = __retval1117;
    return t1119;
  abort();
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___Rb_tree_node_int_____deallocate(struct std____new_allocator_std___Rb_tree_node_int__* v1120, struct std___Rb_tree_node_int_* v1121, unsigned long v1122) {
bb1123:
  struct std____new_allocator_std___Rb_tree_node_int__* this1124;
  struct std___Rb_tree_node_int_* __p1125;
  unsigned long __n1126;
  this1124 = v1120;
  __p1125 = v1121;
  __n1126 = v1122;
  struct std____new_allocator_std___Rb_tree_node_int__* t1127 = this1124;
    unsigned long c1128 = 8;
    unsigned long c1129 = 16;
    _Bool c1130 = ((c1128 > c1129)) ? 1 : 0;
    if (c1130) {
      struct std___Rb_tree_node_int_* t1131 = __p1125;
      void* cast1132 = (void*)t1131;
      unsigned long t1133 = __n1126;
      unsigned long c1134 = 40;
      unsigned long b1135 = t1133 * c1134;
      unsigned long c1136 = 8;
      operator_delete_3(cast1132, b1135, c1136);
      return;
    }
  struct std___Rb_tree_node_int_* t1137 = __p1125;
  void* cast1138 = (void*)t1137;
  unsigned long t1139 = __n1126;
  unsigned long c1140 = 40;
  unsigned long b1141 = t1139 * c1140;
  operator_delete_2(cast1138, b1141);
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE10deallocateEPS0_m
void std__allocator_std___Rb_tree_node_int_____deallocate(struct std__allocator_std___Rb_tree_node_int__* v1142, struct std___Rb_tree_node_int_* v1143, unsigned long v1144) {
bb1145:
  struct std__allocator_std___Rb_tree_node_int__* this1146;
  struct std___Rb_tree_node_int_* __p1147;
  unsigned long __n1148;
  this1146 = v1142;
  __p1147 = v1143;
  __n1148 = v1144;
  struct std__allocator_std___Rb_tree_node_int__* t1149 = this1146;
    _Bool r1150 = std____is_constant_evaluated();
    if (r1150) {
      struct std___Rb_tree_node_int_* t1151 = __p1147;
      void* cast1152 = (void*)t1151;
      operator_delete(cast1152);
      return;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base1153 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t1149 + 0);
  struct std___Rb_tree_node_int_* t1154 = __p1147;
  unsigned long t1155 = __n1148;
  std____new_allocator_std___Rb_tree_node_int_____deallocate(base1153, t1154, t1155);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(struct std__allocator_std___Rb_tree_node_int__* v1156, struct std___Rb_tree_node_int_* v1157, unsigned long v1158) {
bb1159:
  struct std__allocator_std___Rb_tree_node_int__* __a1160;
  struct std___Rb_tree_node_int_* __p1161;
  unsigned long __n1162;
  __a1160 = v1156;
  __p1161 = v1157;
  __n1162 = v1158;
  struct std__allocator_std___Rb_tree_node_int__* t1163 = __a1160;
  struct std___Rb_tree_node_int_* t1164 = __p1161;
  unsigned long t1165 = __n1162;
  std__allocator_std___Rb_tree_node_int_____deallocate(t1163, t1164, t1165);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_put_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1166, struct std___Rb_tree_node_int_* v1167) {
bb1168:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1169;
  struct std___Rb_tree_node_int_* __p1170;
  this1169 = v1166;
  __p1170 = v1167;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1171 = this1169;
  struct std__allocator_std___Rb_tree_node_int__* r1172 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t1171);
  struct std___Rb_tree_node_int_* t1173 = __p1170;
  unsigned long c1174 = 1;
  std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(r1172, t1173, c1174);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_drop_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1175, struct std___Rb_tree_node_int_* v1176) {
bb1177:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1178;
  struct std___Rb_tree_node_int_* __p1179;
  this1178 = v1175;
  __p1179 = v1176;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1180 = this1178;
  struct std___Rb_tree_node_int_* t1181 = __p1179;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(t1180, t1181);
  struct std___Rb_tree_node_int_* t1182 = __p1179;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t1180, t1182);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1183, struct std___Rb_tree_node_int_* v1184) {
bb1185:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1186;
  struct std___Rb_tree_node_int_* __x1187;
  this1186 = v1183;
  __x1187 = v1184;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1188 = this1186;
    while (1) {
      struct std___Rb_tree_node_int_* t1189 = __x1187;
      _Bool cast1190 = (_Bool)t1189;
      if (!cast1190) break;
        struct std___Rb_tree_node_int_* __y1191;
        struct std___Rb_tree_node_int_* t1192 = __x1187;
        struct std___Rb_tree_node_int_* r1193 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(t1192);
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t1188, r1193);
        if (__cir_exc_active) {
          return;
        }
        struct std___Rb_tree_node_int_* t1194 = __x1187;
        struct std___Rb_tree_node_int_* r1195 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(t1194);
        if (__cir_exc_active) {
          return;
        }
        __y1191 = r1195;
        struct std___Rb_tree_node_int_* t1196 = __x1187;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(t1188, t1196);
        struct std___Rb_tree_node_int_* t1197 = __y1191;
        __x1187 = t1197;
    }
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_M_begin_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1198) {
bb1199:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1200;
  struct std___Rb_tree_node_int_* __retval1201;
  struct std___Rb_tree_node_base* __begin1202;
  this1200 = v1198;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1203 = this1200;
  struct std___Rb_tree_header* base1204 = (struct std___Rb_tree_header*)((char *)&(t1203->_M_impl) + 8);
  struct std___Rb_tree_node_base* t1205 = base1204->_M_header._M_parent;
  __begin1202 = t1205;
  struct std___Rb_tree_node_base* t1206 = __begin1202;
  _Bool cast1207 = (_Bool)t1206;
  struct std___Rb_tree_node_int_* ternary1208;
  if (cast1207) {
    struct std___Rb_tree_node_base* t1209 = __begin1202;
    struct std___Rb_tree_node_int_* derived1210 = (struct std___Rb_tree_node_int_*)((char *)t1209 - 0);
    struct std___Rb_tree_node_int_* r1211 = std___Rb_tree_node_int____M_node_ptr(derived1210);
    ternary1208 = (struct std___Rb_tree_node_int_*)r1211;
  } else {
    struct std___Rb_tree_node_int_* c1212 = ((void*)0);
    ternary1208 = (struct std___Rb_tree_node_int_*)c1212;
  }
  __retval1201 = ternary1208;
  struct std___Rb_tree_node_int_* t1213 = __retval1201;
  return t1213;
}

