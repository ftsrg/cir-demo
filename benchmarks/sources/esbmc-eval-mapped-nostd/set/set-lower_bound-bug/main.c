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
struct std__set_int__std__less_int___std__allocator_int__ { struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ _M_t; };

int __const_main_b[9] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[18] = "myset.size() == 9";
char _str_1[111] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/set/set-lower_bound-bug/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[13] = "*itlow != 30";
char _str_3[12] = "*itup == 70";
char _str_4[18] = "myset.size() == 5";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_5[16] = "myset contains:";
char _str_6[2] = " ";
void std__set_int__std__less_int___std__allocator_int_____set_int__(struct std__set_int__std__less_int___std__allocator_int__* p0, int* p1, int* p2);
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(struct std___Rb_tree_const_iterator_int_* p0);
unsigned long std__set_int__std__less_int___std__allocator_int_____size___const(struct std__set_int__std__less_int___std__allocator_int__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_lower_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, int* p3);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____lower_bound(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____lower_bound(struct std__set_int__std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_const_iterator_int_* p1);
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* p0);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_upper_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, int* p3);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____upper_bound(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____upper_bound(struct std__set_int__std__less_int___std__allocator_int__* p0, int* p1);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____clear(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
extern struct std___Rb_tree_node_base* std___Rb_tree_rebalance_for_erase(struct std___Rb_tree_node_base* p0, struct std___Rb_tree_node_base* p1);
struct std___Rb_tree_node_base* std____rb_tree___Node_traits_int__int_____S_rebalance_for_erase(struct std___Rb_tree_node_base* p0, struct std___Rb_tree_node_base* p1);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux_2(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1, struct std___Rb_tree_const_iterator_int_ p2);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase_abi_cxx11_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1, struct std___Rb_tree_const_iterator_int_ p2);
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____erase_abi_cxx11_(struct std__set_int__std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1, struct std___Rb_tree_const_iterator_int_ p2);
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
_Bool std__operator___2(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_const_iterator_int_* p1);
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____end___const(struct std__set_int__std__less_int___std__allocator_int__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
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
void std__set_int__std__less_int___std__allocator_int______set(struct std__set_int__std__less_int___std__allocator_int__* p0);
int main();
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
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
extern void *malloc(unsigned long);
extern void free(void*);
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
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* p0);
void std__allocator_std___Rb_tree_node_int______allocator(struct std__allocator_std___Rb_tree_node_int__* p0);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* p0, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p1);
struct std___Rb_tree_node_base* std___Rb_tree_node_base___M_base_ptr___const(struct std___Rb_tree_node_base* p0);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
_Bool std__less_int___operator___int_const___int_const___const(struct std__less_int_* p0, int* p1, int* p2);
int* std___Identity_int___operator___int_const___const(struct std___Identity_int_* p0, int* p1);
void* __gnu_cxx____aligned_membuf_int____M_addr___const(struct __gnu_cxx____aligned_membuf_int_* p0);
int* __gnu_cxx____aligned_membuf_int____M_ptr___const(struct __gnu_cxx____aligned_membuf_int_* p0);
int* std___Rb_tree_node_int____M_valptr___const(struct std___Rb_tree_node_int_* p0);
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(struct std___Rb_tree_node_int_* p0);
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(struct std___Rb_tree_node_base* p0);
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* p0, struct std___Rb_tree_node_base** p1, struct std___Rb_tree_node_base** p2);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(struct std___Rb_tree_node_base* p0);
_Bool std__operator__(struct std___Rb_tree_iterator_int_* p0, struct std___Rb_tree_iterator_int_* p1);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* p0, struct std___Rb_tree_node_base** p1, struct std___Rb_tree_node_base** p2);
extern struct std___Rb_tree_node_base* std___Rb_tree_decrement(struct std___Rb_tree_node_base* p0);
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator__(struct std___Rb_tree_iterator_int_* p0);
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(struct std___Rb_tree_node_base* p0);
extern struct std___Rb_tree_node_base* std___Rb_tree_increment(struct std___Rb_tree_node_base* p0);
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator___2(struct std___Rb_tree_iterator_int_* p0);
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* p0, struct std___Rb_tree_node_base** p1, struct std___Rb_tree_node_base** p2);
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_unique_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1, int* p2);
int* std___Identity_int___operator___int___const(struct std___Identity_int_* p0, int* p1);
extern void std____throw_bad_array_new_length();
void* operator_new(unsigned long p0) { return malloc(p0); }
unsigned long std____new_allocator_std___Rb_tree_node_int______M_max_size___const(struct std____new_allocator_std___Rb_tree_node_int__* p0);
extern void std____throw_bad_alloc();
void* operator_new_2(unsigned long p0, unsigned long p1) { return malloc(p0); }
struct std___Rb_tree_node_int_* std____new_allocator_std___Rb_tree_node_int_____allocate(struct std____new_allocator_std___Rb_tree_node_int__* p0, unsigned long p1, void* p2);
struct std___Rb_tree_node_int_* std__allocator_std___Rb_tree_node_int_____allocate(struct std__allocator_std___Rb_tree_node_int__* p0, unsigned long p1);
struct std___Rb_tree_node_int_* std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(struct std__allocator_std___Rb_tree_node_int__* p0, unsigned long p1);
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
extern int __gxx_personality_v0();
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int__(struct std__allocator_std___Rb_tree_node_int__* p0, int* p1, int* p2);
void void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_int_* p1, int* p2);
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1);
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int___int___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* p0, int* p1);
extern void std___Rb_tree_insert_and_rebalance(_Bool p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, struct std___Rb_tree_node_base* p3);
void std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(_Bool p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, struct std___Rb_tree_node_base* p3);
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, int* p3, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* p4);
void std___Rb_tree_iterator_int____Rb_tree_iterator(struct std___Rb_tree_iterator_int_* p0, struct std___Rb_tree_node_base* p1);
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, struct std___Rb_tree_const_iterator_int_ p1, int* p2, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* p3);
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0);
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(struct std___Rb_tree_const_iterator_int_* p0, struct std___Rb_tree_iterator_int_* p1);
void std__enable_if___same_value_type_int____value__void___type_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_range_unique_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* p0, int* p1, int* p2);
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* p0);
void std____new_allocator_std___Rb_tree_node_int_______new_allocator(struct std____new_allocator_std___Rb_tree_node_int__* p0);
void std__allocator_std___Rb_tree_node_int_____allocator(struct std__allocator_std___Rb_tree_node_int__* p0);
void std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(struct std___Rb_tree_key_compare_std__less_int__* p0);
void std___Rb_tree_header___M_reset(struct std___Rb_tree_header* p0);
void std___Rb_tree_header___Rb_tree_header(struct std___Rb_tree_header* p0);

// function: _ZNSt3setIiSt4lessIiESaIiEEC2IPiEET_S6_
void std__set_int__std__less_int___std__allocator_int_____set_int__(struct std__set_int__std__less_int___std__allocator_int__* v0, int* v1, int* v2) {
bb3:
  struct std__set_int__std__less_int___std__allocator_int__* this4;
  int* __first5;
  int* __last6;
  this4 = v0;
  __first5 = v1;
  __last6 = v2;
  struct std__set_int__std__less_int___std__allocator_int__* t7 = this4;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__ c8 = {0};
  t7->_M_t = c8;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(&t7->_M_t);
    int* t9 = __first5;
    int* t10 = __last6;
    std__enable_if___same_value_type_int____value__void___type_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_range_unique_int__(&t7->_M_t, t9, t10);
    if (__cir_exc_active) {
      {
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(&t7->_M_t);
      }
      return;
    }
  return;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2Ev
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(struct std___Rb_tree_const_iterator_int_* v11) {
bb12:
  struct std___Rb_tree_const_iterator_int_* this13;
  this13 = v11;
  struct std___Rb_tree_const_iterator_int_* t14 = this13;
  struct std___Rb_tree_node_base* c15 = ((void*)0);
  t14->_M_node = c15;
  return;
}

// function: _ZNKSt3setIiSt4lessIiESaIiEE4sizeEv
unsigned long std__set_int__std__less_int___std__allocator_int_____size___const(struct std__set_int__std__less_int___std__allocator_int__* v16) {
bb17:
  struct std__set_int__std__less_int___std__allocator_int__* this18;
  unsigned long __retval19;
  this18 = v16;
  struct std__set_int__std__less_int___std__allocator_int__* t20 = this18;
  unsigned long r21 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(&t20->_M_t);
  __retval19 = r21;
  unsigned long t22 = __retval19;
  return t22;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE14_M_lower_boundEPSt18_Rb_tree_node_baseS7_RKi
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_lower_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v23, struct std___Rb_tree_node_base* v24, struct std___Rb_tree_node_base* v25, int* v26) {
bb27:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this28;
  struct std___Rb_tree_node_base* __x29;
  struct std___Rb_tree_node_base* __y30;
  int* __k31;
  struct std___Rb_tree_node_base* __retval32;
  this28 = v23;
  __x29 = v24;
  __y30 = v25;
  __k31 = v26;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t33 = this28;
    while (1) {
      struct std___Rb_tree_node_base* t34 = __x29;
      _Bool cast35 = (_Bool)t34;
      if (!cast35) break;
        struct std___Rb_tree_key_compare_std__less_int__* base36 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t33->_M_impl) + 0);
        struct std__less_int_* cast37 = (struct std__less_int_*)base36;
        struct std___Rb_tree_node_base* t38 = __x29;
        int* r39 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t38);
        if (__cir_exc_active) {
          struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
          return __cir_eh_ret;
        }
        int* t40 = __k31;
        _Bool r41 = std__less_int___operator___int_const___int_const___const(cast37, r39, t40);
        if (__cir_exc_active) {
          struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
          return __cir_eh_ret;
        }
        _Bool u42 = !r41;
        if (u42) {
          struct std___Rb_tree_node_base* t43 = __x29;
          __y30 = t43;
          struct std___Rb_tree_node_base* t44 = __x29;
          struct std___Rb_tree_node_base* r45 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t44);
          __x29 = r45;
        } else {
          struct std___Rb_tree_node_base* t46 = __x29;
          struct std___Rb_tree_node_base* r47 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t46);
          __x29 = r47;
        }
    }
  struct std___Rb_tree_node_base* t48 = __y30;
  __retval32 = t48;
  struct std___Rb_tree_node_base* t49 = __retval32;
  return t49;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11lower_boundERKi
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____lower_bound(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v50, int* v51) {
bb52:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this53;
  int* __k54;
  struct std___Rb_tree_iterator_int_ __retval55;
  this53 = v50;
  __k54 = v51;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t56 = this53;
  struct std___Rb_tree_node_base* r57 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t56);
  struct std___Rb_tree_node_base* r58 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t56);
  int* t59 = __k54;
  struct std___Rb_tree_node_base* r60 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_lower_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(t56, r57, r58, t59);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval55, r60);
  struct std___Rb_tree_iterator_int_ t61 = __retval55;
  return t61;
}

// function: _ZNSt3setIiSt4lessIiESaIiEE11lower_boundERKi
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____lower_bound(struct std__set_int__std__less_int___std__allocator_int__* v62, int* v63) {
bb64:
  struct std__set_int__std__less_int___std__allocator_int__* this65;
  int* __x66;
  struct std___Rb_tree_const_iterator_int_ __retval67;
  struct std___Rb_tree_iterator_int_ ref_tmp068;
  this65 = v62;
  __x66 = v63;
  struct std__set_int__std__less_int___std__allocator_int__* t69 = this65;
  int* t70 = __x66;
  struct std___Rb_tree_iterator_int_ r71 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____lower_bound(&t69->_M_t, t70);
  if (__cir_exc_active) {
    struct std___Rb_tree_const_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  ref_tmp068 = r71;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&__retval67, &ref_tmp068);
  struct std___Rb_tree_const_iterator_int_ t72 = __retval67;
  return t72;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEaSEOS0_
struct std___Rb_tree_const_iterator_int_* std___Rb_tree_const_iterator_int___operator_(struct std___Rb_tree_const_iterator_int_* v73, struct std___Rb_tree_const_iterator_int_* v74) {
bb75:
  struct std___Rb_tree_const_iterator_int_* this76;
  struct std___Rb_tree_const_iterator_int_* unnamed77;
  struct std___Rb_tree_const_iterator_int_* __retval78;
  this76 = v73;
  unnamed77 = v74;
  struct std___Rb_tree_const_iterator_int_* t79 = this76;
  struct std___Rb_tree_const_iterator_int_* t80 = unnamed77;
  struct std___Rb_tree_node_base* t81 = t80->_M_node;
  t79->_M_node = t81;
  __retval78 = t79;
  struct std___Rb_tree_const_iterator_int_* t82 = __retval78;
  return t82;
}

// function: _ZNKSt23_Rb_tree_const_iteratorIiEdeEv
int* std___Rb_tree_const_iterator_int___operator____const(struct std___Rb_tree_const_iterator_int_* v83) {
bb84:
  struct std___Rb_tree_const_iterator_int_* this85;
  int* __retval86;
  this85 = v83;
  struct std___Rb_tree_const_iterator_int_* t87 = this85;
  struct std___Rb_tree_node_base* t88 = t87->_M_node;
  struct std___Rb_tree_node_int_* derived89 = ((t88) ? (struct std___Rb_tree_node_int_*)((char *)t88 - 0) : (struct std___Rb_tree_node_int_*)0);
  int* r90 = std___Rb_tree_node_int____M_valptr___const(derived89);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval86 = r90;
  int* t91 = __retval86;
  return t91;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE14_M_upper_boundEPSt18_Rb_tree_node_baseS7_RKi
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_upper_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v92, struct std___Rb_tree_node_base* v93, struct std___Rb_tree_node_base* v94, int* v95) {
bb96:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this97;
  struct std___Rb_tree_node_base* __x98;
  struct std___Rb_tree_node_base* __y99;
  int* __k100;
  struct std___Rb_tree_node_base* __retval101;
  this97 = v92;
  __x98 = v93;
  __y99 = v94;
  __k100 = v95;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t102 = this97;
    while (1) {
      struct std___Rb_tree_node_base* t103 = __x98;
      _Bool cast104 = (_Bool)t103;
      if (!cast104) break;
        struct std___Rb_tree_key_compare_std__less_int__* base105 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t102->_M_impl) + 0);
        struct std__less_int_* cast106 = (struct std__less_int_*)base105;
        int* t107 = __k100;
        struct std___Rb_tree_node_base* t108 = __x98;
        int* r109 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t108);
        if (__cir_exc_active) {
          struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
          return __cir_eh_ret;
        }
        _Bool r110 = std__less_int___operator___int_const___int_const___const(cast106, t107, r109);
        if (__cir_exc_active) {
          struct std___Rb_tree_node_base* __cir_eh_ret = (struct std___Rb_tree_node_base*)0;
          return __cir_eh_ret;
        }
        if (r110) {
          struct std___Rb_tree_node_base* t111 = __x98;
          __y99 = t111;
          struct std___Rb_tree_node_base* t112 = __x98;
          struct std___Rb_tree_node_base* r113 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t112);
          __x98 = r113;
        } else {
          struct std___Rb_tree_node_base* t114 = __x98;
          struct std___Rb_tree_node_base* r115 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t114);
          __x98 = r115;
        }
    }
  struct std___Rb_tree_node_base* t116 = __y99;
  __retval101 = t116;
  struct std___Rb_tree_node_base* t117 = __retval101;
  return t117;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11upper_boundERKi
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____upper_bound(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v118, int* v119) {
bb120:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this121;
  int* __k122;
  struct std___Rb_tree_iterator_int_ __retval123;
  this121 = v118;
  __k122 = v119;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t124 = this121;
  struct std___Rb_tree_node_base* r125 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t124);
  struct std___Rb_tree_node_base* r126 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t124);
  int* t127 = __k122;
  struct std___Rb_tree_node_base* r128 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_upper_bound_std___Rb_tree_node_base___std___Rb_tree_node_base___int_const___const(t124, r125, r126, t127);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval123, r128);
  struct std___Rb_tree_iterator_int_ t129 = __retval123;
  return t129;
}

// function: _ZNSt3setIiSt4lessIiESaIiEE11upper_boundERKi
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____upper_bound(struct std__set_int__std__less_int___std__allocator_int__* v130, int* v131) {
bb132:
  struct std__set_int__std__less_int___std__allocator_int__* this133;
  int* __x134;
  struct std___Rb_tree_const_iterator_int_ __retval135;
  struct std___Rb_tree_iterator_int_ ref_tmp0136;
  this133 = v130;
  __x134 = v131;
  struct std__set_int__std__less_int___std__allocator_int__* t137 = this133;
  int* t138 = __x134;
  struct std___Rb_tree_iterator_int_ r139 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____upper_bound(&t137->_M_t, t138);
  if (__cir_exc_active) {
    struct std___Rb_tree_const_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  ref_tmp0136 = r139;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&__retval135, &ref_tmp0136);
  struct std___Rb_tree_const_iterator_int_ t140 = __retval135;
  return t140;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5clearEv
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____clear(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v141) {
bb142:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this143;
  this143 = v141;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t144 = this143;
  struct std___Rb_tree_node_int_* r145 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(t144);
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t144, r145);
  if (__cir_exc_active) {
    return;
  }
  struct std___Rb_tree_header* base146 = (struct std___Rb_tree_header*)((char *)&(t144->_M_impl) + 8);
  std___Rb_tree_header___M_reset(base146);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt9__rb_tree12_Node_traitsIiPiE22_S_rebalance_for_eraseEPSt18_Rb_tree_node_baseRS3_
struct std___Rb_tree_node_base* std____rb_tree___Node_traits_int__int_____S_rebalance_for_erase(struct std___Rb_tree_node_base* v147, struct std___Rb_tree_node_base* v148) {
bb149:
  struct std___Rb_tree_node_base* __z150;
  struct std___Rb_tree_node_base* __header151;
  struct std___Rb_tree_node_base* __retval152;
  __z150 = v147;
  __header151 = v148;
  struct std___Rb_tree_node_base* t153 = __z150;
  struct std___Rb_tree_node_base* t154 = __header151;
  struct std___Rb_tree_node_base* r155 = std___Rb_tree_rebalance_for_erase(t153, t154);
  __retval152 = r155;
  struct std___Rb_tree_node_base* t156 = __retval152;
  return t156;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_erase_auxESt23_Rb_tree_const_iteratorIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v157, struct std___Rb_tree_const_iterator_int_ v158) {
bb159:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this160;
  struct std___Rb_tree_const_iterator_int_ __position161;
  struct std___Rb_tree_node_base* __y162;
  this160 = v157;
  __position161 = v158;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t163 = this160;
  struct std___Rb_tree_node_base* t164 = __position161._M_node;
  struct std___Rb_tree_header* base165 = (struct std___Rb_tree_header*)((char *)&(t163->_M_impl) + 8);
  struct std___Rb_tree_node_base* r166 = std____rb_tree___Node_traits_int__int_____S_rebalance_for_erase(t164, &base165->_M_header);
  __y162 = r166;
  struct std___Rb_tree_node_base* t167 = __y162;
  struct std___Rb_tree_node_int_* derived168 = (struct std___Rb_tree_node_int_*)((char *)t167 - 0);
  struct std___Rb_tree_node_int_* r169 = std___Rb_tree_node_int____M_node_ptr(derived168);
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(t163, r169);
  struct std___Rb_tree_header* base170 = (struct std___Rb_tree_header*)((char *)&(t163->_M_impl) + 8);
  unsigned long t171 = base170->_M_node_count;
  unsigned long u172 = t171 - 1;
  base170->_M_node_count = u172;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_erase_auxESt23_Rb_tree_const_iteratorIiES7_
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux_2(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v173, struct std___Rb_tree_const_iterator_int_ v174, struct std___Rb_tree_const_iterator_int_ v175) {
bb176:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this177;
  struct std___Rb_tree_const_iterator_int_ __first178;
  struct std___Rb_tree_const_iterator_int_ __last179;
  this177 = v173;
  __first178 = v174;
  __last179 = v175;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t180 = this177;
    struct std___Rb_tree_const_iterator_int_ ref_tmp0181;
    struct std___Rb_tree_iterator_int_ ref_tmp1182;
    struct std___Rb_tree_iterator_int_ r183 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(t180);
    ref_tmp1182 = r183;
    std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&ref_tmp0181, &ref_tmp1182);
    _Bool r184 = std__operator___2(&__first178, &ref_tmp0181);
    _Bool ternary185;
    if (r184) {
      struct std___Rb_tree_const_iterator_int_ ref_tmp2186;
      struct std___Rb_tree_iterator_int_ ref_tmp3187;
      struct std___Rb_tree_iterator_int_ r188 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(t180);
      ref_tmp3187 = r188;
      std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&ref_tmp2186, &ref_tmp3187);
      _Bool r189 = std__operator___2(&__last179, &ref_tmp2186);
      ternary185 = (_Bool)r189;
    } else {
      _Bool c190 = 0;
      ternary185 = (_Bool)c190;
    }
    if (ternary185) {
      std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____clear(t180);
    } else {
        struct std___Rb_tree_const_iterator_int_ agg_tmp0191;
        while (1) {
          _Bool r192 = std__operator___2(&__first178, &__last179);
          _Bool u193 = !r192;
          if (!u193) break;
          int c194 = 0;
          struct std___Rb_tree_const_iterator_int_ r195 = std___Rb_tree_const_iterator_int___operator__(&__first178, c194);
          agg_tmp0191 = r195;
          struct std___Rb_tree_const_iterator_int_ t196 = agg_tmp0191;
          std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux(t180, t196);
          if (__cir_exc_active) {
            return;
          }
        }
    }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5eraseB5cxx11ESt23_Rb_tree_const_iteratorIiES7_
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase_abi_cxx11_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v197, struct std___Rb_tree_const_iterator_int_ v198, struct std___Rb_tree_const_iterator_int_ v199) {
bb200:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this201;
  struct std___Rb_tree_const_iterator_int_ __first202;
  struct std___Rb_tree_const_iterator_int_ __last203;
  struct std___Rb_tree_iterator_int_ __retval204;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0205;
  struct std___Rb_tree_const_iterator_int_ agg_tmp1206;
  this201 = v197;
  __first202 = v198;
  __last203 = v199;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t207 = this201;
  agg_tmp0205 = __first202; // copy
  agg_tmp1206 = __last203; // copy
  struct std___Rb_tree_const_iterator_int_ t208 = agg_tmp0205;
  struct std___Rb_tree_const_iterator_int_ t209 = agg_tmp1206;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase_aux_2(t207, t208, t209);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* t210 = __last203._M_node;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval204, t210);
  struct std___Rb_tree_iterator_int_ t211 = __retval204;
  return t211;
}

// function: _ZNSt3setIiSt4lessIiESaIiEE5eraseB5cxx11ESt23_Rb_tree_const_iteratorIiES5_
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____erase_abi_cxx11_(struct std__set_int__std__less_int___std__allocator_int__* v212, struct std___Rb_tree_const_iterator_int_ v213, struct std___Rb_tree_const_iterator_int_ v214) {
bb215:
  struct std__set_int__std__less_int___std__allocator_int__* this216;
  struct std___Rb_tree_const_iterator_int_ __first217;
  struct std___Rb_tree_const_iterator_int_ __last218;
  struct std___Rb_tree_const_iterator_int_ __retval219;
  struct std___Rb_tree_iterator_int_ ref_tmp0220;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0221;
  struct std___Rb_tree_const_iterator_int_ agg_tmp1222;
  this216 = v212;
  __first217 = v213;
  __last218 = v214;
  struct std__set_int__std__less_int___std__allocator_int__* t223 = this216;
  agg_tmp0221 = __first217; // copy
  agg_tmp1222 = __last218; // copy
  struct std___Rb_tree_const_iterator_int_ t224 = agg_tmp0221;
  struct std___Rb_tree_const_iterator_int_ t225 = agg_tmp1222;
  struct std___Rb_tree_iterator_int_ r226 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____erase_abi_cxx11_(&t223->_M_t, t224, t225);
  if (__cir_exc_active) {
    struct std___Rb_tree_const_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  ref_tmp0220 = r226;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&__retval219, &ref_tmp0220);
  struct std___Rb_tree_const_iterator_int_ t227 = __retval219;
  return t227;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v228, int v229) {
bb230:
  int __a231;
  int __b232;
  int __retval233;
  __a231 = v228;
  __b232 = v229;
  int t234 = __a231;
  int t235 = __b232;
  int b236 = t234 | t235;
  __retval233 = b236;
  int t237 = __retval233;
  return t237;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v238) {
bb239:
  struct std__basic_ios_char__std__char_traits_char__* this240;
  int __retval241;
  this240 = v238;
  struct std__basic_ios_char__std__char_traits_char__* t242 = this240;
  struct std__ios_base* base243 = (struct std__ios_base*)((char *)t242 + 0);
  int t244 = base243->_M_streambuf_state;
  __retval241 = t244;
  int t245 = __retval241;
  return t245;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v246, int v247) {
bb248:
  struct std__basic_ios_char__std__char_traits_char__* this249;
  int __state250;
  this249 = v246;
  __state250 = v247;
  struct std__basic_ios_char__std__char_traits_char__* t251 = this249;
  int r252 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t251);
  if (__cir_exc_active) {
    return;
  }
  int t253 = __state250;
  int r254 = std__operator_(r252, t253);
  std__basic_ios_char__std__char_traits_char_____clear(t251, r254);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v255, char* v256) {
bb257:
  char* __c1258;
  char* __c2259;
  _Bool __retval260;
  __c1258 = v255;
  __c2259 = v256;
  char* t261 = __c1258;
  char t262 = *t261;
  int cast263 = (int)t262;
  char* t264 = __c2259;
  char t265 = *t264;
  int cast266 = (int)t265;
  _Bool c267 = ((cast263 == cast266)) ? 1 : 0;
  __retval260 = c267;
  _Bool t268 = __retval260;
  return t268;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v269) {
bb270:
  char* __p271;
  unsigned long __retval272;
  unsigned long __i273;
  __p271 = v269;
  unsigned long c274 = 0;
  __i273 = c274;
    char ref_tmp0275;
    while (1) {
      unsigned long t276 = __i273;
      char* t277 = __p271;
      char* ptr278 = &(t277)[t276];
      char c279 = 0;
      ref_tmp0275 = c279;
      _Bool r280 = __gnu_cxx__char_traits_char___eq(ptr278, &ref_tmp0275);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u281 = !r280;
      if (!u281) break;
      unsigned long t282 = __i273;
      unsigned long u283 = t282 + 1;
      __i273 = u283;
    }
  unsigned long t284 = __i273;
  __retval272 = t284;
  unsigned long t285 = __retval272;
  return t285;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v286) {
bb287:
  char* __s288;
  unsigned long __retval289;
  __s288 = v286;
    _Bool r290 = std____is_constant_evaluated();
    if (r290) {
      char* t291 = __s288;
      unsigned long r292 = __gnu_cxx__char_traits_char___length(t291);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval289 = r292;
      unsigned long t293 = __retval289;
      return t293;
    }
  char* t294 = __s288;
  unsigned long r295 = strlen(t294);
  __retval289 = r295;
  unsigned long t296 = __retval289;
  return t296;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v297, char* v298) {
bb299:
  struct std__basic_ostream_char__std__char_traits_char__* __out300;
  char* __s301;
  struct std__basic_ostream_char__std__char_traits_char__* __retval302;
  __out300 = v297;
  __s301 = v298;
    char* t303 = __s301;
    _Bool cast304 = (_Bool)t303;
    _Bool u305 = !cast304;
    if (u305) {
      struct std__basic_ostream_char__std__char_traits_char__* t306 = __out300;
      void** v307 = (void**)t306;
      void* v308 = *((void**)v307);
      unsigned char* cast309 = (unsigned char*)v308;
      long c310 = -24;
      unsigned char* ptr311 = &(cast309)[c310];
      long* cast312 = (long*)ptr311;
      long t313 = *cast312;
      unsigned char* cast314 = (unsigned char*)t306;
      unsigned char* ptr315 = &(cast314)[t313];
      struct std__basic_ostream_char__std__char_traits_char__* cast316 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr315;
      struct std__basic_ios_char__std__char_traits_char__* cast317 = (struct std__basic_ios_char__std__char_traits_char__*)cast316;
      int t318 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast317, t318);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t319 = __out300;
      char* t320 = __s301;
      char* t321 = __s301;
      unsigned long r322 = std__char_traits_char___length(t321);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast323 = (long)r322;
      struct std__basic_ostream_char__std__char_traits_char__* r324 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t319, t320, cast323);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t325 = __out300;
  __retval302 = t325;
  struct std__basic_ostream_char__std__char_traits_char__* t326 = __retval302;
  return t326;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_int_* v327, struct std___Rb_tree_node_base* v328) {
bb329:
  struct std___Rb_tree_const_iterator_int_* this330;
  struct std___Rb_tree_node_base* __x331;
  this330 = v327;
  __x331 = v328;
  struct std___Rb_tree_const_iterator_int_* t332 = this330;
  struct std___Rb_tree_node_base* t333 = __x331;
  t332->_M_node = t333;
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5beginEv
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v334) {
bb335:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this336;
  struct std___Rb_tree_const_iterator_int_ __retval337;
  this336 = v334;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t338 = this336;
  struct std___Rb_tree_header* base339 = (struct std___Rb_tree_header*)((char *)&(t338->_M_impl) + 8);
  struct std___Rb_tree_node_base* t340 = base339->_M_header._M_left;
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval337, t340);
  struct std___Rb_tree_const_iterator_int_ t341 = __retval337;
  return t341;
}

// function: _ZNKSt3setIiSt4lessIiESaIiEE5beginEv
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____begin___const(struct std__set_int__std__less_int___std__allocator_int__* v342) {
bb343:
  struct std__set_int__std__less_int___std__allocator_int__* this344;
  struct std___Rb_tree_const_iterator_int_ __retval345;
  this344 = v342;
  struct std__set_int__std__less_int___std__allocator_int__* t346 = this344;
  struct std___Rb_tree_const_iterator_int_ r347 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin___const(&t346->_M_t);
  __retval345 = r347;
  struct std___Rb_tree_const_iterator_int_ t348 = __retval345;
  return t348;
}

// function: _ZSteqRKSt23_Rb_tree_const_iteratorIiES2_
_Bool std__operator___2(struct std___Rb_tree_const_iterator_int_* v349, struct std___Rb_tree_const_iterator_int_* v350) {
bb351:
  struct std___Rb_tree_const_iterator_int_* __x352;
  struct std___Rb_tree_const_iterator_int_* __y353;
  _Bool __retval354;
  __x352 = v349;
  __y353 = v350;
  struct std___Rb_tree_const_iterator_int_* t355 = __x352;
  struct std___Rb_tree_node_base* t356 = t355->_M_node;
  struct std___Rb_tree_const_iterator_int_* t357 = __y353;
  struct std___Rb_tree_node_base* t358 = t357->_M_node;
  _Bool c359 = ((t356 == t358)) ? 1 : 0;
  __retval354 = c359;
  _Bool t360 = __retval354;
  return t360;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE3endEv
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v361) {
bb362:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this363;
  struct std___Rb_tree_const_iterator_int_ __retval364;
  this363 = v361;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t365 = this363;
  struct std___Rb_tree_node_base* r366 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t365);
  std___Rb_tree_const_iterator_int____Rb_tree_const_iterator(&__retval364, r366);
  struct std___Rb_tree_const_iterator_int_ t367 = __retval364;
  return t367;
}

// function: _ZNKSt3setIiSt4lessIiESaIiEE3endEv
struct std___Rb_tree_const_iterator_int_ std__set_int__std__less_int___std__allocator_int_____end___const(struct std__set_int__std__less_int___std__allocator_int__* v368) {
bb369:
  struct std__set_int__std__less_int___std__allocator_int__* this370;
  struct std___Rb_tree_const_iterator_int_ __retval371;
  this370 = v368;
  struct std__set_int__std__less_int___std__allocator_int__* t372 = this370;
  struct std___Rb_tree_const_iterator_int_ r373 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end___const(&t372->_M_t);
  __retval371 = r373;
  struct std___Rb_tree_const_iterator_int_ t374 = __retval371;
  return t374;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEppEi
struct std___Rb_tree_const_iterator_int_ std___Rb_tree_const_iterator_int___operator__(struct std___Rb_tree_const_iterator_int_* v375, int v376) {
bb377:
  struct std___Rb_tree_const_iterator_int_* this378;
  int unnamed379;
  struct std___Rb_tree_const_iterator_int_ __retval380;
  this378 = v375;
  unnamed379 = v376;
  struct std___Rb_tree_const_iterator_int_* t381 = this378;
  __retval380 = *t381; // copy
  struct std___Rb_tree_node_base* t382 = t381->_M_node;
  struct std___Rb_tree_node_base* r383 = std___Rb_tree_increment(t382);
  t381->_M_node = r383;
  struct std___Rb_tree_const_iterator_int_ t384 = __retval380;
  return t384;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v385, void* v386) {
bb387:
  struct std__basic_ostream_char__std__char_traits_char__* this388;
  void* __pf389;
  struct std__basic_ostream_char__std__char_traits_char__* __retval390;
  this388 = v385;
  __pf389 = v386;
  struct std__basic_ostream_char__std__char_traits_char__* t391 = this388;
  void* t392 = __pf389;
  struct std__basic_ostream_char__std__char_traits_char__* r393 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t392)(t391);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval390 = r393;
  struct std__basic_ostream_char__std__char_traits_char__* t394 = __retval390;
  return t394;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v395) {
bb396:
  struct std__basic_ostream_char__std__char_traits_char__* __os397;
  struct std__basic_ostream_char__std__char_traits_char__* __retval398;
  __os397 = v395;
  struct std__basic_ostream_char__std__char_traits_char__* t399 = __os397;
  struct std__basic_ostream_char__std__char_traits_char__* r400 = std__ostream__flush(t399);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval398 = r400;
  struct std__basic_ostream_char__std__char_traits_char__* t401 = __retval398;
  return t401;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v402) {
bb403:
  struct std__ctype_char_* __f404;
  struct std__ctype_char_* __retval405;
  __f404 = v402;
    struct std__ctype_char_* t406 = __f404;
    _Bool cast407 = (_Bool)t406;
    _Bool u408 = !cast407;
    if (u408) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t409 = __f404;
  __retval405 = t409;
  struct std__ctype_char_* t410 = __retval405;
  return t410;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v411, char v412) {
bb413:
  struct std__ctype_char_* this414;
  char __c415;
  char __retval416;
  this414 = v411;
  __c415 = v412;
  struct std__ctype_char_* t417 = this414;
    char t418 = t417->_M_widen_ok;
    _Bool cast419 = (_Bool)t418;
    if (cast419) {
      char t420 = __c415;
      unsigned char cast421 = (unsigned char)t420;
      unsigned long cast422 = (unsigned long)cast421;
      char t423 = t417->_M_widen[cast422];
      __retval416 = t423;
      char t424 = __retval416;
      return t424;
    }
  std__ctype_char____M_widen_init___const(t417);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t425 = __c415;
  void** v426 = (void**)t417;
  void* v427 = *((void**)v426);
  char vcall430 = (char)__VERIFIER_virtual_call_char_char(t417, 6, t425);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval416 = vcall430;
  char t431 = __retval416;
  return t431;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v432, char v433) {
bb434:
  struct std__basic_ios_char__std__char_traits_char__* this435;
  char __c436;
  char __retval437;
  this435 = v432;
  __c436 = v433;
  struct std__basic_ios_char__std__char_traits_char__* t438 = this435;
  struct std__ctype_char_* t439 = t438->_M_ctype;
  struct std__ctype_char_* r440 = std__ctype_char__const__std____check_facet_std__ctype_char___(t439);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t441 = __c436;
  char r442 = std__ctype_char___widen_char__const(r440, t441);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval437 = r442;
  char t443 = __retval437;
  return t443;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v444) {
bb445:
  struct std__basic_ostream_char__std__char_traits_char__* __os446;
  struct std__basic_ostream_char__std__char_traits_char__* __retval447;
  __os446 = v444;
  struct std__basic_ostream_char__std__char_traits_char__* t448 = __os446;
  struct std__basic_ostream_char__std__char_traits_char__* t449 = __os446;
  void** v450 = (void**)t449;
  void* v451 = *((void**)v450);
  unsigned char* cast452 = (unsigned char*)v451;
  long c453 = -24;
  unsigned char* ptr454 = &(cast452)[c453];
  long* cast455 = (long*)ptr454;
  long t456 = *cast455;
  unsigned char* cast457 = (unsigned char*)t449;
  unsigned char* ptr458 = &(cast457)[t456];
  struct std__basic_ostream_char__std__char_traits_char__* cast459 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr458;
  struct std__basic_ios_char__std__char_traits_char__* cast460 = (struct std__basic_ios_char__std__char_traits_char__*)cast459;
  char c461 = 10;
  char r462 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast460, c461);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r463 = std__ostream__put(t448, r462);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r464 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r463);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval447 = r464;
  struct std__basic_ostream_char__std__char_traits_char__* t465 = __retval447;
  return t465;
}

// function: _ZNSt3setIiSt4lessIiESaIiEED2Ev
void std__set_int__std__less_int___std__allocator_int______set(struct std__set_int__std__less_int___std__allocator_int__* v466) {
bb467:
  struct std__set_int__std__less_int___std__allocator_int__* this468;
  this468 = v466;
  struct std__set_int__std__less_int___std__allocator_int__* t469 = this468;
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(&t469->_M_t);
  }
  return;
}

// function: main
int main() {
bb470:
  int __retval471;
  int b472[9];
  struct std__set_int__std__less_int___std__allocator_int__ myset473;
  struct std___Rb_tree_const_iterator_int_ it474;
  struct std___Rb_tree_const_iterator_int_ itlow475;
  struct std___Rb_tree_const_iterator_int_ itup476;
  struct std___Rb_tree_const_iterator_int_ ref_tmp0477;
  int ref_tmp1478;
  struct std___Rb_tree_const_iterator_int_ ref_tmp2479;
  int ref_tmp3480;
  struct std___Rb_tree_const_iterator_int_ agg_tmp0481;
  struct std___Rb_tree_const_iterator_int_ agg_tmp1482;
  struct std___Rb_tree_const_iterator_int_ agg_tmp2483;
  int c484 = 0;
  __retval471 = c484;
  // array copy
  __builtin_memcpy(b472, __const_main_b, (unsigned long)9 * sizeof(__const_main_b[0]));
  int* cast485 = (int*)&(b472);
  int* cast486 = (int*)&(b472);
  int c487 = 9;
  int* ptr488 = &(cast486)[c487];
  std__set_int__std__less_int___std__allocator_int_____set_int__(&myset473, cast485, ptr488);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(&it474);
    std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(&itlow475);
    std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_3(&itup476);
    unsigned long r489 = std__set_int__std__less_int___std__allocator_int_____size___const(&myset473);
    unsigned long c490 = 9;
    _Bool c491 = ((r489 == c490)) ? 1 : 0;
    if (c491) {
    } else {
      char* cast492 = (char*)&(_str);
      char* c493 = _str_1;
      unsigned int c494 = 22;
      char* cast495 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast492, c493, c494, cast495);
    }
    int c496 = 30;
    ref_tmp1478 = c496;
    struct std___Rb_tree_const_iterator_int_ r497 = std__set_int__std__less_int___std__allocator_int_____lower_bound(&myset473, &ref_tmp1478);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset473);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    ref_tmp0477 = r497;
    struct std___Rb_tree_const_iterator_int_* r498 = std___Rb_tree_const_iterator_int___operator_(&itlow475, &ref_tmp0477);
    int* r499 = std___Rb_tree_const_iterator_int___operator____const(&itlow475);
    int t500 = *r499;
    int c501 = 30;
    _Bool c502 = ((t500 != c501)) ? 1 : 0;
    if (c502) {
    } else {
      char* cast503 = (char*)&(_str_2);
      char* c504 = _str_1;
      unsigned int c505 = 24;
      char* cast506 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast503, c504, c505, cast506);
    }
    int c507 = 60;
    ref_tmp3480 = c507;
    struct std___Rb_tree_const_iterator_int_ r508 = std__set_int__std__less_int___std__allocator_int_____upper_bound(&myset473, &ref_tmp3480);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset473);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    ref_tmp2479 = r508;
    struct std___Rb_tree_const_iterator_int_* r509 = std___Rb_tree_const_iterator_int___operator_(&itup476, &ref_tmp2479);
    int* r510 = std___Rb_tree_const_iterator_int___operator____const(&itup476);
    int t511 = *r510;
    int c512 = 70;
    _Bool c513 = ((t511 == c512)) ? 1 : 0;
    if (c513) {
    } else {
      char* cast514 = (char*)&(_str_3);
      char* c515 = _str_1;
      unsigned int c516 = 26;
      char* cast517 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast514, c515, c516, cast517);
    }
    agg_tmp0481 = itlow475; // copy
    agg_tmp1482 = itup476; // copy
    struct std___Rb_tree_const_iterator_int_ t518 = agg_tmp0481;
    struct std___Rb_tree_const_iterator_int_ t519 = agg_tmp1482;
    struct std___Rb_tree_const_iterator_int_ r520 = std__set_int__std__less_int___std__allocator_int_____erase_abi_cxx11_(&myset473, t518, t519);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset473);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp2483 = r520;
    unsigned long r521 = std__set_int__std__less_int___std__allocator_int_____size___const(&myset473);
    unsigned long c522 = 5;
    _Bool c523 = ((r521 == c522)) ? 1 : 0;
    if (c523) {
    } else {
      char* cast524 = (char*)&(_str_4);
      char* c525 = _str_1;
      unsigned int c526 = 28;
      char* cast527 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast524, c525, c526, cast527);
    }
    char* cast528 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* r529 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast528);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset473);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      struct std___Rb_tree_const_iterator_int_ ref_tmp4530;
      struct std___Rb_tree_const_iterator_int_ ref_tmp5531;
      struct std___Rb_tree_const_iterator_int_ agg_tmp3532;
      struct std___Rb_tree_const_iterator_int_ r533 = std__set_int__std__less_int___std__allocator_int_____begin___const(&myset473);
      ref_tmp4530 = r533;
      struct std___Rb_tree_const_iterator_int_* r534 = std___Rb_tree_const_iterator_int___operator_(&it474, &ref_tmp4530);
      while (1) {
        struct std___Rb_tree_const_iterator_int_ r536 = std__set_int__std__less_int___std__allocator_int_____end___const(&myset473);
        ref_tmp5531 = r536;
        _Bool r537 = std__operator___2(&it474, &ref_tmp5531);
        _Bool u538 = !r537;
        if (!u538) break;
        char* cast539 = (char*)&(_str_6);
        struct std__basic_ostream_char__std__char_traits_char__* r540 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast539);
        if (__cir_exc_active) {
          {
            std__set_int__std__less_int___std__allocator_int______set(&myset473);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        int* r541 = std___Rb_tree_const_iterator_int___operator____const(&it474);
        int t542 = *r541;
        struct std__basic_ostream_char__std__char_traits_char__* r543 = std__ostream__operator__(r540, t542);
        if (__cir_exc_active) {
          {
            std__set_int__std__less_int___std__allocator_int______set(&myset473);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
      for_step535: ;
        int c544 = 0;
        struct std___Rb_tree_const_iterator_int_ r545 = std___Rb_tree_const_iterator_int___operator__(&it474, c544);
        agg_tmp3532 = r545;
      }
    struct std__basic_ostream_char__std__char_traits_char__* r546 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__set_int__std__less_int___std__allocator_int______set(&myset473);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c547 = 0;
    __retval471 = c547;
    int t548 = __retval471;
    int ret_val549 = t548;
    {
      std__set_int__std__less_int___std__allocator_int______set(&myset473);
    }
    return ret_val549;
  int t550 = __retval471;
  return t550;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v551) {
bb552:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this553;
  this553 = v551;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t554 = this553;
    struct std___Rb_tree_node_int_* r555 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(t554);
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t554, r555);
    if (__cir_exc_active) {
      {
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t554->_M_impl);
      }
      return;
    }
  {
    std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(&t554->_M_impl);
  }
  return;
}

// function: _ZNSt13_Rb_tree_nodeIiE11_M_node_ptrEv
struct std___Rb_tree_node_int_* std___Rb_tree_node_int____M_node_ptr(struct std___Rb_tree_node_int_* v556) {
bb557:
  struct std___Rb_tree_node_int_* this558;
  struct std___Rb_tree_node_int_* __retval559;
  this558 = v556;
  struct std___Rb_tree_node_int_* t560 = this558;
  __retval559 = t560;
  struct std___Rb_tree_node_int_* t561 = __retval559;
  return t561;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(struct std___Rb_tree_node_int_* v562) {
bb563:
  struct std___Rb_tree_node_int_* __x564;
  struct std___Rb_tree_node_int_* __retval565;
  __x564 = v562;
  struct std___Rb_tree_node_int_* t566 = __x564;
  struct std___Rb_tree_node_base* base567 = (struct std___Rb_tree_node_base*)((char *)t566 + 0);
  struct std___Rb_tree_node_base* t568 = base567->_M_right;
  _Bool cast569 = (_Bool)t568;
  struct std___Rb_tree_node_int_* ternary570;
  if (cast569) {
    struct std___Rb_tree_node_int_* t571 = __x564;
    struct std___Rb_tree_node_base* base572 = (struct std___Rb_tree_node_base*)((char *)t571 + 0);
    struct std___Rb_tree_node_base* t573 = base572->_M_right;
    struct std___Rb_tree_node_int_* derived574 = (struct std___Rb_tree_node_int_*)((char *)t573 - 0);
    struct std___Rb_tree_node_int_* r575 = std___Rb_tree_node_int____M_node_ptr(derived574);
    ternary570 = (struct std___Rb_tree_node_int_*)r575;
  } else {
    struct std___Rb_tree_node_int_* c576 = ((void*)0);
    ternary570 = (struct std___Rb_tree_node_int_*)c576;
  }
  __retval565 = ternary570;
  struct std___Rb_tree_node_int_* t577 = __retval565;
  return t577;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt13_Rb_tree_nodeIiE
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(struct std___Rb_tree_node_int_* v578) {
bb579:
  struct std___Rb_tree_node_int_* __x580;
  struct std___Rb_tree_node_int_* __retval581;
  __x580 = v578;
  struct std___Rb_tree_node_int_* t582 = __x580;
  struct std___Rb_tree_node_base* base583 = (struct std___Rb_tree_node_base*)((char *)t582 + 0);
  struct std___Rb_tree_node_base* t584 = base583->_M_left;
  _Bool cast585 = (_Bool)t584;
  struct std___Rb_tree_node_int_* ternary586;
  if (cast585) {
    struct std___Rb_tree_node_int_* t587 = __x580;
    struct std___Rb_tree_node_base* base588 = (struct std___Rb_tree_node_base*)((char *)t587 + 0);
    struct std___Rb_tree_node_base* t589 = base588->_M_left;
    struct std___Rb_tree_node_int_* derived590 = (struct std___Rb_tree_node_int_*)((char *)t589 - 0);
    struct std___Rb_tree_node_int_* r591 = std___Rb_tree_node_int____M_node_ptr(derived590);
    ternary586 = (struct std___Rb_tree_node_int_*)r591;
  } else {
    struct std___Rb_tree_node_int_* c592 = ((void*)0);
    ternary586 = (struct std___Rb_tree_node_int_*)c592;
  }
  __retval581 = ternary586;
  struct std___Rb_tree_node_int_* t593 = __retval581;
  return t593;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v594) {
bb595:
  int* __location596;
  __location596 = v594;
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE7destroyIiEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(struct std__allocator_std___Rb_tree_node_int__* v597, int* v598) {
bb599:
  struct std__allocator_std___Rb_tree_node_int__* __a600;
  int* __p601;
  __a600 = v597;
  __p601 = v598;
  int* t602 = __p601;
  void_std__destroy_at_int_(t602);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE21_M_get_Node_allocatorEv
struct std__allocator_std___Rb_tree_node_int__* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v603) {
bb604:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this605;
  struct std__allocator_std___Rb_tree_node_int__* __retval606;
  this605 = v603;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t607 = this605;
  struct std__allocator_std___Rb_tree_node_int__* base608 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)&(t607->_M_impl) + 0);
  __retval606 = base608;
  struct std__allocator_std___Rb_tree_node_int__* t609 = __retval606;
  return t609;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr(struct __gnu_cxx____aligned_membuf_int_* v610) {
bb611:
  struct __gnu_cxx____aligned_membuf_int_* this612;
  void* __retval613;
  this612 = v610;
  struct __gnu_cxx____aligned_membuf_int_* t614 = this612;
  void* cast615 = (void*)&(t614->_M_storage);
  __retval613 = cast615;
  void* t616 = __retval613;
  return t616;
}

// function: _ZN9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr(struct __gnu_cxx____aligned_membuf_int_* v617) {
bb618:
  struct __gnu_cxx____aligned_membuf_int_* this619;
  int* __retval620;
  this619 = v617;
  struct __gnu_cxx____aligned_membuf_int_* t621 = this619;
  void* r622 = __gnu_cxx____aligned_membuf_int____M_addr(t621);
  int* cast623 = (int*)r622;
  __retval620 = cast623;
  int* t624 = __retval620;
  return t624;
}

// function: _ZNSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr(struct std___Rb_tree_node_int_* v625) {
bb626:
  struct std___Rb_tree_node_int_* this627;
  int* __retval628;
  this627 = v625;
  struct std___Rb_tree_node_int_* t629 = this627;
  int* r630 = __gnu_cxx____aligned_membuf_int____M_ptr(&t629->_M_storage);
  __retval628 = r630;
  int* t631 = __retval628;
  return t631;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE15_M_destroy_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v632, struct std___Rb_tree_node_int_* v633) {
bb634:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this635;
  struct std___Rb_tree_node_int_* __p636;
  this635 = v632;
  __p636 = v633;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t637 = this635;
  struct std__allocator_std___Rb_tree_node_int__* r638 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t637);
  struct std___Rb_tree_node_int_* t639 = __p636;
  int* r640 = std___Rb_tree_node_int____M_valptr(t639);
  if (__cir_exc_active) {
    return;
  }
  void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______destroy_int_(r638, r640);
  struct std___Rb_tree_node_int_* t641 = __p636;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb642:
  _Bool __retval643;
    _Bool c644 = 0;
    __retval643 = c644;
    _Bool t645 = __retval643;
    return t645;
  abort();
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE10deallocateEPS1_m
void std____new_allocator_std___Rb_tree_node_int_____deallocate(struct std____new_allocator_std___Rb_tree_node_int__* v646, struct std___Rb_tree_node_int_* v647, unsigned long v648) {
bb649:
  struct std____new_allocator_std___Rb_tree_node_int__* this650;
  struct std___Rb_tree_node_int_* __p651;
  unsigned long __n652;
  this650 = v646;
  __p651 = v647;
  __n652 = v648;
  struct std____new_allocator_std___Rb_tree_node_int__* t653 = this650;
    unsigned long c654 = 8;
    unsigned long c655 = 16;
    _Bool c656 = ((c654 > c655)) ? 1 : 0;
    if (c656) {
      struct std___Rb_tree_node_int_* t657 = __p651;
      void* cast658 = (void*)t657;
      unsigned long t659 = __n652;
      unsigned long c660 = 40;
      unsigned long b661 = t659 * c660;
      unsigned long c662 = 8;
      operator_delete_3(cast658, b661, c662);
      return;
    }
  struct std___Rb_tree_node_int_* t663 = __p651;
  void* cast664 = (void*)t663;
  unsigned long t665 = __n652;
  unsigned long c666 = 40;
  unsigned long b667 = t665 * c666;
  operator_delete_2(cast664, b667);
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE10deallocateEPS0_m
void std__allocator_std___Rb_tree_node_int_____deallocate(struct std__allocator_std___Rb_tree_node_int__* v668, struct std___Rb_tree_node_int_* v669, unsigned long v670) {
bb671:
  struct std__allocator_std___Rb_tree_node_int__* this672;
  struct std___Rb_tree_node_int_* __p673;
  unsigned long __n674;
  this672 = v668;
  __p673 = v669;
  __n674 = v670;
  struct std__allocator_std___Rb_tree_node_int__* t675 = this672;
    _Bool r676 = std____is_constant_evaluated();
    if (r676) {
      struct std___Rb_tree_node_int_* t677 = __p673;
      void* cast678 = (void*)t677;
      operator_delete(cast678);
      return;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base679 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t675 + 0);
  struct std___Rb_tree_node_int_* t680 = __p673;
  unsigned long t681 = __n674;
  std____new_allocator_std___Rb_tree_node_int_____deallocate(base679, t680, t681);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(struct std__allocator_std___Rb_tree_node_int__* v682, struct std___Rb_tree_node_int_* v683, unsigned long v684) {
bb685:
  struct std__allocator_std___Rb_tree_node_int__* __a686;
  struct std___Rb_tree_node_int_* __p687;
  unsigned long __n688;
  __a686 = v682;
  __p687 = v683;
  __n688 = v684;
  struct std__allocator_std___Rb_tree_node_int__* t689 = __a686;
  struct std___Rb_tree_node_int_* t690 = __p687;
  unsigned long t691 = __n688;
  std__allocator_std___Rb_tree_node_int_____deallocate(t689, t690, t691);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_put_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v692, struct std___Rb_tree_node_int_* v693) {
bb694:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this695;
  struct std___Rb_tree_node_int_* __p696;
  this695 = v692;
  __p696 = v693;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t697 = this695;
  struct std__allocator_std___Rb_tree_node_int__* r698 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t697);
  struct std___Rb_tree_node_int_* t699 = __p696;
  unsigned long c700 = 1;
  std__allocator_traits_std__allocator_std___Rb_tree_node_int_______deallocate(r698, t699, c700);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_drop_nodeEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v701, struct std___Rb_tree_node_int_* v702) {
bb703:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this704;
  struct std___Rb_tree_node_int_* __p705;
  this704 = v701;
  __p705 = v702;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t706 = this704;
  struct std___Rb_tree_node_int_* t707 = __p705;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_destroy_node(t706, t707);
  struct std___Rb_tree_node_int_* t708 = __p705;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t706, t708);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_eraseEPSt13_Rb_tree_nodeIiE
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v709, struct std___Rb_tree_node_int_* v710) {
bb711:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this712;
  struct std___Rb_tree_node_int_* __x713;
  this712 = v709;
  __x713 = v710;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t714 = this712;
    while (1) {
      struct std___Rb_tree_node_int_* t715 = __x713;
      _Bool cast716 = (_Bool)t715;
      if (!cast716) break;
        struct std___Rb_tree_node_int_* __y717;
        struct std___Rb_tree_node_int_* t718 = __x713;
        struct std___Rb_tree_node_int_* r719 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right(t718);
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_erase(t714, r719);
        if (__cir_exc_active) {
          return;
        }
        struct std___Rb_tree_node_int_* t720 = __x713;
        struct std___Rb_tree_node_int_* r721 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left(t720);
        if (__cir_exc_active) {
          return;
        }
        __y717 = r721;
        struct std___Rb_tree_node_int_* t722 = __x713;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_drop_node(t714, t722);
        struct std___Rb_tree_node_int_* t723 = __y717;
        __x713 = t723;
    }
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_M_begin_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin_node___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v724) {
bb725:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this726;
  struct std___Rb_tree_node_int_* __retval727;
  struct std___Rb_tree_node_base* __begin728;
  this726 = v724;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t729 = this726;
  struct std___Rb_tree_header* base730 = (struct std___Rb_tree_header*)((char *)&(t729->_M_impl) + 8);
  struct std___Rb_tree_node_base* t731 = base730->_M_header._M_parent;
  __begin728 = t731;
  struct std___Rb_tree_node_base* t732 = __begin728;
  _Bool cast733 = (_Bool)t732;
  struct std___Rb_tree_node_int_* ternary734;
  if (cast733) {
    struct std___Rb_tree_node_base* t735 = __begin728;
    struct std___Rb_tree_node_int_* derived736 = (struct std___Rb_tree_node_int_*)((char *)t735 - 0);
    struct std___Rb_tree_node_int_* r737 = std___Rb_tree_node_int____M_node_ptr(derived736);
    ternary734 = (struct std___Rb_tree_node_int_*)r737;
  } else {
    struct std___Rb_tree_node_int_* c738 = ((void*)0);
    ternary734 = (struct std___Rb_tree_node_int_*)c738;
  }
  __retval727 = ternary734;
  struct std___Rb_tree_node_int_* t739 = __retval727;
  return t739;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EED2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true_____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v740) {
bb741:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this742;
  this742 = v740;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t743 = this742;
  {
    struct std__allocator_std___Rb_tree_node_int__* base744 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t743 + 0);
    std__allocator_std___Rb_tree_node_int______allocator(base744);
  }
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEED2Ev
void std__allocator_std___Rb_tree_node_int______allocator(struct std__allocator_std___Rb_tree_node_int__* v745) {
bb746:
  struct std__allocator_std___Rb_tree_node_int__* this747;
  this747 = v745;
  struct std__allocator_std___Rb_tree_node_int__* t748 = this747;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v749) {
bb750:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this751;
  this751 = v749;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t752 = this751;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(&t752->_M_impl);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeC2ERS5_
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v753, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v754) {
bb755:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this756;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* __t757;
  this756 = v753;
  __t757 = v754;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t758 = this756;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t759 = __t757;
  t758->_M_t = t759;
  return;
}

// function: _ZNKSt18_Rb_tree_node_base11_M_base_ptrEv
struct std___Rb_tree_node_base* std___Rb_tree_node_base___M_base_ptr___const(struct std___Rb_tree_node_base* v760) {
bb761:
  struct std___Rb_tree_node_base* this762;
  struct std___Rb_tree_node_base* __retval763;
  this762 = v760;
  struct std___Rb_tree_node_base* t764 = this762;
  __retval763 = t764;
  struct std___Rb_tree_node_base* t765 = __retval763;
  return t765;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_M_endEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v766) {
bb767:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this768;
  struct std___Rb_tree_node_base* __retval769;
  this768 = v766;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t770 = this768;
  struct std___Rb_tree_header* base771 = (struct std___Rb_tree_header*)((char *)&(t770->_M_impl) + 8);
  struct std___Rb_tree_node_base* r772 = std___Rb_tree_node_base___M_base_ptr___const(&base771->_M_header);
  __retval769 = r772;
  struct std___Rb_tree_node_base* t773 = __retval769;
  return t773;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE4sizeEv
unsigned long std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v774) {
bb775:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this776;
  unsigned long __retval777;
  this776 = v774;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t778 = this776;
  struct std___Rb_tree_header* base779 = (struct std___Rb_tree_header*)((char *)&(t778->_M_impl) + 8);
  unsigned long t780 = base779->_M_node_count;
  __retval777 = t780;
  unsigned long t781 = __retval777;
  return t781;
}

// function: _ZNKSt4lessIiEclERKiS2_
_Bool std__less_int___operator___int_const___int_const___const(struct std__less_int_* v782, int* v783, int* v784) {
bb785:
  struct std__less_int_* this786;
  int* __x787;
  int* __y788;
  _Bool __retval789;
  this786 = v782;
  __x787 = v783;
  __y788 = v784;
  struct std__less_int_* t790 = this786;
  int* t791 = __x787;
  int t792 = *t791;
  int* t793 = __y788;
  int t794 = *t793;
  _Bool c795 = ((t792 < t794)) ? 1 : 0;
  __retval789 = c795;
  _Bool t796 = __retval789;
  return t796;
}

// function: _ZNKSt9_IdentityIiEclERKi
int* std___Identity_int___operator___int_const___const(struct std___Identity_int_* v797, int* v798) {
bb799:
  struct std___Identity_int_* this800;
  int* __x801;
  int* __retval802;
  this800 = v797;
  __x801 = v798;
  struct std___Identity_int_* t803 = this800;
  int* t804 = __x801;
  __retval802 = t804;
  int* t805 = __retval802;
  return t805;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE7_M_addrEv
void* __gnu_cxx____aligned_membuf_int____M_addr___const(struct __gnu_cxx____aligned_membuf_int_* v806) {
bb807:
  struct __gnu_cxx____aligned_membuf_int_* this808;
  void* __retval809;
  this808 = v806;
  struct __gnu_cxx____aligned_membuf_int_* t810 = this808;
  void* cast811 = (void*)&(t810->_M_storage);
  __retval809 = cast811;
  void* t812 = __retval809;
  return t812;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIiE6_M_ptrEv
int* __gnu_cxx____aligned_membuf_int____M_ptr___const(struct __gnu_cxx____aligned_membuf_int_* v813) {
bb814:
  struct __gnu_cxx____aligned_membuf_int_* this815;
  int* __retval816;
  this815 = v813;
  struct __gnu_cxx____aligned_membuf_int_* t817 = this815;
  void* r818 = __gnu_cxx____aligned_membuf_int____M_addr___const(t817);
  int* cast819 = (int*)r818;
  __retval816 = cast819;
  int* t820 = __retval816;
  return t820;
}

// function: _ZNKSt13_Rb_tree_nodeIiE9_M_valptrEv
int* std___Rb_tree_node_int____M_valptr___const(struct std___Rb_tree_node_int_* v821) {
bb822:
  struct std___Rb_tree_node_int_* this823;
  int* __retval824;
  this823 = v821;
  struct std___Rb_tree_node_int_* t825 = this823;
  int* r826 = __gnu_cxx____aligned_membuf_int____M_ptr___const(&t825->_M_storage);
  __retval824 = r826;
  int* t827 = __retval824;
  return t827;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_S_keyERKSt13_Rb_tree_nodeIiE
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(struct std___Rb_tree_node_int_* v828) {
bb829:
  struct std___Rb_tree_node_int_* __node830;
  int* __retval831;
  struct std___Identity_int_ ref_tmp0832;
  __node830 = v828;
  struct std___Rb_tree_node_int_* t833 = __node830;
  int* r834 = std___Rb_tree_node_int____M_valptr___const(t833);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r835 = std___Identity_int___operator___int_const___const(&ref_tmp0832, r834);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval831 = r835;
  int* t836 = __retval831;
  return t836;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE6_S_keyEPSt18_Rb_tree_node_base
int* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(struct std___Rb_tree_node_base* v837) {
bb838:
  struct std___Rb_tree_node_base* __x839;
  int* __retval840;
  __x839 = v837;
  struct std___Rb_tree_node_base* t841 = __x839;
  struct std___Rb_tree_node_int_* derived842 = (struct std___Rb_tree_node_int_*)((char *)t841 - 0);
  int* r843 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key_2(derived842);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval840 = r843;
  int* t844 = __retval840;
  return t844;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE12_M_rightmostEv
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v845) {
bb846:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this847;
  struct std___Rb_tree_node_base** __retval848;
  this847 = v845;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t849 = this847;
  struct std___Rb_tree_header* base850 = (struct std___Rb_tree_header*)((char *)&(t849->_M_impl) + 8);
  __retval848 = &base850->_M_header._M_right;
  struct std___Rb_tree_node_base** t851 = __retval848;
  return t851;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v852, struct std___Rb_tree_node_base** v853, struct std___Rb_tree_node_base** v854) {
bb855:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this856;
  struct std___Rb_tree_node_base** __x857;
  struct std___Rb_tree_node_base** __y858;
  this856 = v852;
  __x857 = v853;
  __y858 = v854;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t859 = this856;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base860 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t859 + 0);
  struct std___Rb_tree_node_base** t861 = __x857;
  struct std___Rb_tree_node_base* t862 = *t861;
  t859->first = t862;
  struct std___Rb_tree_node_base** t863 = __y858;
  struct std___Rb_tree_node_base* t864 = *t863;
  t859->second = t864;
  return;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_M_beginEv
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v865) {
bb866:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this867;
  struct std___Rb_tree_node_base* __retval868;
  this867 = v865;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t869 = this867;
  struct std___Rb_tree_header* base870 = (struct std___Rb_tree_header*)((char *)&(t869->_M_impl) + 8);
  struct std___Rb_tree_node_base* t871 = base870->_M_header._M_parent;
  __retval868 = t871;
  struct std___Rb_tree_node_base* t872 = __retval868;
  return t872;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE7_S_leftEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(struct std___Rb_tree_node_base* v873) {
bb874:
  struct std___Rb_tree_node_base* __x875;
  struct std___Rb_tree_node_base* __retval876;
  __x875 = v873;
  struct std___Rb_tree_node_base* t877 = __x875;
  struct std___Rb_tree_node_base* t878 = t877->_M_left;
  __retval876 = t878;
  struct std___Rb_tree_node_base* t879 = __retval876;
  return t879;
}

// function: _ZSteqRKSt17_Rb_tree_iteratorIiES2_
_Bool std__operator__(struct std___Rb_tree_iterator_int_* v880, struct std___Rb_tree_iterator_int_* v881) {
bb882:
  struct std___Rb_tree_iterator_int_* __x883;
  struct std___Rb_tree_iterator_int_* __y884;
  _Bool __retval885;
  __x883 = v880;
  __y884 = v881;
  struct std___Rb_tree_iterator_int_* t886 = __x883;
  struct std___Rb_tree_node_base* t887 = t886->_M_node;
  struct std___Rb_tree_iterator_int_* t888 = __y884;
  struct std___Rb_tree_node_base* t889 = t888->_M_node;
  _Bool c890 = ((t887 == t889)) ? 1 : 0;
  __retval885 = c890;
  _Bool t891 = __retval885;
  return t891;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE5beginEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v892) {
bb893:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this894;
  struct std___Rb_tree_iterator_int_ __retval895;
  this894 = v892;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t896 = this894;
  struct std___Rb_tree_header* base897 = (struct std___Rb_tree_header*)((char *)&(t896->_M_impl) + 8);
  struct std___Rb_tree_node_base* t898 = base897->_M_header._M_left;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval895, t898);
  struct std___Rb_tree_iterator_int_ t899 = __retval895;
  return t899;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE24_M_get_insert_unique_posERKi
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v900, int* v901) {
bb902:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this903;
  int* __k904;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval905;
  struct std___Rb_tree_node_base* __x906;
  struct std___Rb_tree_node_base* __y907;
  _Bool __comp908;
  struct std___Rb_tree_iterator_int_ __j909;
  struct std___Rb_tree_node_base* ref_tmp1910;
  this903 = v900;
  __k904 = v901;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t911 = this903;
  struct std___Rb_tree_node_base* r912 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_begin___const(t911);
  __x906 = r912;
  struct std___Rb_tree_node_base* r913 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t911);
  __y907 = r913;
  _Bool c914 = 1;
  __comp908 = c914;
    while (1) {
      struct std___Rb_tree_node_base* t915 = __x906;
      _Bool cast916 = (_Bool)t915;
      if (!cast916) break;
        struct std___Rb_tree_node_base* t917 = __x906;
        __y907 = t917;
        struct std___Rb_tree_key_compare_std__less_int__* base918 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t911->_M_impl) + 0);
        struct std__less_int_* cast919 = (struct std__less_int_*)base918;
        int* t920 = __k904;
        struct std___Rb_tree_node_base* t921 = __x906;
        int* r922 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t921);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r923 = std__less_int___operator___int_const___int_const___const(cast919, t920, r922);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        __comp908 = r923;
        _Bool t924 = __comp908;
        struct std___Rb_tree_node_base* ternary925;
        if (t924) {
          struct std___Rb_tree_node_base* t926 = __x906;
          struct std___Rb_tree_node_base* r927 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_left_2(t926);
          ternary925 = (struct std___Rb_tree_node_base*)r927;
        } else {
          struct std___Rb_tree_node_base* t928 = __x906;
          struct std___Rb_tree_node_base* r929 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t928);
          ternary925 = (struct std___Rb_tree_node_base*)r929;
        }
        __x906 = ternary925;
    }
  struct std___Rb_tree_node_base* t930 = __y907;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__j909, t930);
    _Bool t931 = __comp908;
    if (t931) {
        struct std___Rb_tree_iterator_int_ ref_tmp0932;
        struct std___Rb_tree_iterator_int_ r933 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____begin(t911);
        ref_tmp0932 = r933;
        _Bool r934 = std__operator__(&__j909, &ref_tmp0932);
        if (r934) {
          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval905, &__x906, &__y907);
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t935 = __retval905;
          return t935;
        } else {
          struct std___Rb_tree_iterator_int_* r936 = std___Rb_tree_iterator_int___operator__(&__j909);
        }
    }
    struct std___Rb_tree_key_compare_std__less_int__* base937 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t911->_M_impl) + 0);
    struct std__less_int_* cast938 = (struct std__less_int_*)base937;
    struct std___Rb_tree_node_base* t939 = __j909._M_node;
    int* r940 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t939);
    if (__cir_exc_active) {
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    int* t941 = __k904;
    _Bool r942 = std__less_int___operator___int_const___int_const___const(cast938, r940, t941);
    if (__cir_exc_active) {
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    if (r942) {
      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval905, &__x906, &__y907);
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t943 = __retval905;
      return t943;
    }
  struct std___Rb_tree_node_base* c944 = ((void*)0);
  ref_tmp1910 = c944;
  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval905, &__j909._M_node, &ref_tmp1910);
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t945 = __retval905;
  return t945;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_leftmostEv
struct std___Rb_tree_node_base** std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v946) {
bb947:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this948;
  struct std___Rb_tree_node_base** __retval949;
  this948 = v946;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t950 = this948;
  struct std___Rb_tree_header* base951 = (struct std___Rb_tree_header*)((char *)&(t950->_M_impl) + 8);
  __retval949 = &base951->_M_header._M_left;
  struct std___Rb_tree_node_base** t952 = __retval949;
  return t952;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v953, struct std___Rb_tree_node_base** v954, struct std___Rb_tree_node_base** v955) {
bb956:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this957;
  struct std___Rb_tree_node_base** __x958;
  struct std___Rb_tree_node_base** __y959;
  this957 = v953;
  __x958 = v954;
  __y959 = v955;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t960 = this957;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base961 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t960 + 0);
  struct std___Rb_tree_node_base** t962 = __x958;
  struct std___Rb_tree_node_base* t963 = *t962;
  t960->first = t963;
  struct std___Rb_tree_node_base** t964 = __y959;
  struct std___Rb_tree_node_base* t965 = *t964;
  t960->second = t965;
  return;
}

// function: _ZNSt17_Rb_tree_iteratorIiEmmEv
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator__(struct std___Rb_tree_iterator_int_* v966) {
bb967:
  struct std___Rb_tree_iterator_int_* this968;
  struct std___Rb_tree_iterator_int_* __retval969;
  this968 = v966;
  struct std___Rb_tree_iterator_int_* t970 = this968;
  struct std___Rb_tree_node_base* t971 = t970->_M_node;
  struct std___Rb_tree_node_base* r972 = std___Rb_tree_decrement(t971);
  t970->_M_node = r972;
  __retval969 = t970;
  struct std___Rb_tree_iterator_int_* t973 = __retval969;
  return t973;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE8_S_rightEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(struct std___Rb_tree_node_base* v974) {
bb975:
  struct std___Rb_tree_node_base* __x976;
  struct std___Rb_tree_node_base* __retval977;
  __x976 = v974;
  struct std___Rb_tree_node_base* t978 = __x976;
  struct std___Rb_tree_node_base* t979 = t978->_M_right;
  __retval977 = t979;
  struct std___Rb_tree_node_base* t980 = __retval977;
  return t980;
}

// function: _ZNSt17_Rb_tree_iteratorIiEppEv
struct std___Rb_tree_iterator_int_* std___Rb_tree_iterator_int___operator___2(struct std___Rb_tree_iterator_int_* v981) {
bb982:
  struct std___Rb_tree_iterator_int_* this983;
  struct std___Rb_tree_iterator_int_* __retval984;
  this983 = v981;
  struct std___Rb_tree_iterator_int_* t985 = this983;
  struct std___Rb_tree_node_base* t986 = t985->_M_node;
  struct std___Rb_tree_node_base* r987 = std___Rb_tree_increment(t986);
  t985->_M_node = r987;
  __retval984 = t985;
  struct std___Rb_tree_iterator_int_* t988 = __retval984;
  return t988;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v989, struct std___Rb_tree_node_base** v990, struct std___Rb_tree_node_base** v991) {
bb992:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this993;
  struct std___Rb_tree_node_base** __x994;
  struct std___Rb_tree_node_base** __y995;
  this993 = v989;
  __x994 = v990;
  __y995 = v991;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t996 = this993;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base997 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t996 + 0);
  struct std___Rb_tree_node_base** t998 = __x994;
  struct std___Rb_tree_node_base* t999 = *t998;
  t996->first = t999;
  struct std___Rb_tree_node_base** t1000 = __y995;
  struct std___Rb_tree_node_base* t1001 = *t1000;
  t996->second = t1001;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE29_M_get_insert_hint_unique_posESt23_Rb_tree_const_iteratorIiERKi
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_unique_pos(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1002, struct std___Rb_tree_const_iterator_int_ v1003, int* v1004) {
bb1005:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1006;
  struct std___Rb_tree_const_iterator_int_ __position1007;
  int* __k1008;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval1009;
  this1006 = v1002;
  __position1007 = v1003;
  __k1008 = v1004;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1010 = this1006;
    struct std___Rb_tree_node_base* t1011 = __position1007._M_node;
    struct std___Rb_tree_node_base* r1012 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t1010);
    _Bool c1013 = ((t1011 == r1012)) ? 1 : 0;
    if (c1013) {
        unsigned long r1014 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____size___const(t1010);
        unsigned long c1015 = 0;
        _Bool c1016 = ((r1014 > c1015)) ? 1 : 0;
        _Bool ternary1017;
        if (c1016) {
          struct std___Rb_tree_key_compare_std__less_int__* base1018 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t1010->_M_impl) + 0);
          struct std__less_int_* cast1019 = (struct std__less_int_*)base1018;
          struct std___Rb_tree_node_base** r1020 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t1010);
          struct std___Rb_tree_node_base* t1021 = *r1020;
          int* r1022 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1021);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          int* t1023 = __k1008;
          _Bool r1024 = std__less_int___operator___int_const___int_const___const(cast1019, r1022, t1023);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          ternary1017 = (_Bool)r1024;
        } else {
          _Bool c1025 = 0;
          ternary1017 = (_Bool)c1025;
        }
        if (ternary1017) {
          struct std___Rb_tree_node_base* ref_tmp01026;
          struct std___Rb_tree_node_base* c1027 = ((void*)0);
          ref_tmp01026 = c1027;
          struct std___Rb_tree_node_base** r1028 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t1010);
          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval1009, &ref_tmp01026, r1028);
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1029 = __retval1009;
          return t1029;
        } else {
          int* t1030 = __k1008;
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r1031 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(t1010, t1030);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          __retval1009 = r1031;
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1032 = __retval1009;
          return t1032;
        }
    } else {
        struct std___Rb_tree_key_compare_std__less_int__* base1033 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t1010->_M_impl) + 0);
        struct std__less_int_* cast1034 = (struct std__less_int_*)base1033;
        int* t1035 = __k1008;
        struct std___Rb_tree_node_base* t1036 = __position1007._M_node;
        int* r1037 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1036);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r1038 = std__less_int___operator___int_const___int_const___const(cast1034, t1035, r1037);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        if (r1038) {
          struct std___Rb_tree_iterator_int_ __before1039;
          struct std___Rb_tree_node_base* t1040 = __position1007._M_node;
          std___Rb_tree_iterator_int____Rb_tree_iterator(&__before1039, t1040);
            struct std___Rb_tree_node_base* t1041 = __position1007._M_node;
            struct std___Rb_tree_node_base** r1042 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t1010);
            struct std___Rb_tree_node_base* t1043 = *r1042;
            _Bool c1044 = ((t1041 == t1043)) ? 1 : 0;
            if (c1044) {
              struct std___Rb_tree_node_base** r1045 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t1010);
              struct std___Rb_tree_node_base** r1046 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_leftmost(t1010);
              _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval1009, r1045, r1046);
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1047 = __retval1009;
              return t1047;
            } else {
                struct std___Rb_tree_key_compare_std__less_int__* base1048 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t1010->_M_impl) + 0);
                struct std__less_int_* cast1049 = (struct std__less_int_*)base1048;
                struct std___Rb_tree_iterator_int_* r1050 = std___Rb_tree_iterator_int___operator__(&__before1039);
                struct std___Rb_tree_node_base* t1051 = r1050->_M_node;
                int* r1052 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1051);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                int* t1053 = __k1008;
                _Bool r1054 = std__less_int___operator___int_const___int_const___const(cast1049, r1052, t1053);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                if (r1054) {
                    struct std___Rb_tree_node_base* t1055 = __before1039._M_node;
                    struct std___Rb_tree_node_base* r1056 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t1055);
                    _Bool cast1057 = (_Bool)r1056;
                    _Bool u1058 = !cast1057;
                    if (u1058) {
                      struct std___Rb_tree_node_base* ref_tmp11059;
                      struct std___Rb_tree_node_base* c1060 = ((void*)0);
                      ref_tmp11059 = c1060;
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval1009, &ref_tmp11059, &__before1039._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1061 = __retval1009;
                      return t1061;
                    } else {
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval1009, &__position1007._M_node, &__position1007._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1062 = __retval1009;
                      return t1062;
                    }
                } else {
                  int* t1063 = __k1008;
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r1064 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(t1010, t1063);
                  if (__cir_exc_active) {
                    struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                    return __cir_eh_ret;
                  }
                  __retval1009 = r1064;
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1065 = __retval1009;
                  return t1065;
                }
            }
        } else {
            struct std___Rb_tree_key_compare_std__less_int__* base1066 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t1010->_M_impl) + 0);
            struct std__less_int_* cast1067 = (struct std__less_int_*)base1066;
            struct std___Rb_tree_node_base* t1068 = __position1007._M_node;
            int* r1069 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1068);
            if (__cir_exc_active) {
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
              return __cir_eh_ret;
            }
            int* t1070 = __k1008;
            _Bool r1071 = std__less_int___operator___int_const___int_const___const(cast1067, r1069, t1070);
            if (__cir_exc_active) {
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
              return __cir_eh_ret;
            }
            if (r1071) {
              struct std___Rb_tree_iterator_int_ __after1072;
              struct std___Rb_tree_node_base* t1073 = __position1007._M_node;
              std___Rb_tree_iterator_int____Rb_tree_iterator(&__after1072, t1073);
                struct std___Rb_tree_node_base* t1074 = __position1007._M_node;
                struct std___Rb_tree_node_base** r1075 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t1010);
                struct std___Rb_tree_node_base* t1076 = *r1075;
                _Bool c1077 = ((t1074 == t1076)) ? 1 : 0;
                if (c1077) {
                  struct std___Rb_tree_node_base* ref_tmp21078;
                  struct std___Rb_tree_node_base* c1079 = ((void*)0);
                  ref_tmp21078 = c1079;
                  struct std___Rb_tree_node_base** r1080 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_rightmost(t1010);
                  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval1009, &ref_tmp21078, r1080);
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1081 = __retval1009;
                  return t1081;
                } else {
                    struct std___Rb_tree_key_compare_std__less_int__* base1082 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t1010->_M_impl) + 0);
                    struct std__less_int_* cast1083 = (struct std__less_int_*)base1082;
                    int* t1084 = __k1008;
                    struct std___Rb_tree_iterator_int_* r1085 = std___Rb_tree_iterator_int___operator___2(&__after1072);
                    struct std___Rb_tree_node_base* t1086 = r1085->_M_node;
                    int* r1087 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1086);
                    if (__cir_exc_active) {
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                      return __cir_eh_ret;
                    }
                    _Bool r1088 = std__less_int___operator___int_const___int_const___const(cast1083, t1084, r1087);
                    if (__cir_exc_active) {
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                      return __cir_eh_ret;
                    }
                    if (r1088) {
                        struct std___Rb_tree_node_base* t1089 = __position1007._M_node;
                        struct std___Rb_tree_node_base* r1090 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_right_2(t1089);
                        _Bool cast1091 = (_Bool)r1090;
                        _Bool u1092 = !cast1091;
                        if (u1092) {
                          struct std___Rb_tree_node_base* ref_tmp31093;
                          struct std___Rb_tree_node_base* c1094 = ((void*)0);
                          ref_tmp31093 = c1094;
                          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval1009, &ref_tmp31093, &__position1007._M_node);
                          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1095 = __retval1009;
                          return t1095;
                        } else {
                          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval1009, &__after1072._M_node, &__after1072._M_node);
                          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1096 = __retval1009;
                          return t1096;
                        }
                    } else {
                      int* t1097 = __k1008;
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r1098 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_unique_pos(t1010, t1097);
                      if (__cir_exc_active) {
                        struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                        return __cir_eh_ret;
                      }
                      __retval1009 = r1098;
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1099 = __retval1009;
                      return t1099;
                    }
                }
            } else {
              struct std___Rb_tree_node_base* ref_tmp41100;
              struct std___Rb_tree_node_base* c1101 = ((void*)0);
              ref_tmp41100 = c1101;
              _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval1009, &__position1007._M_node, &ref_tmp41100);
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1102 = __retval1009;
              return t1102;
            }
        }
    }
  abort();
}

// function: _ZNKSt9_IdentityIiEclERi
int* std___Identity_int___operator___int___const(struct std___Identity_int_* v1103, int* v1104) {
bb1105:
  struct std___Identity_int_* this1106;
  int* __x1107;
  int* __retval1108;
  this1106 = v1103;
  __x1107 = v1104;
  struct std___Identity_int_* t1109 = this1106;
  int* t1110 = __x1107;
  __retval1108 = t1110;
  int* t1111 = __retval1108;
  return t1111;
}

// function: _ZNKSt15__new_allocatorISt13_Rb_tree_nodeIiEE11_M_max_sizeEv
unsigned long std____new_allocator_std___Rb_tree_node_int______M_max_size___const(struct std____new_allocator_std___Rb_tree_node_int__* v1112) {
bb1113:
  struct std____new_allocator_std___Rb_tree_node_int__* this1114;
  unsigned long __retval1115;
  this1114 = v1112;
  struct std____new_allocator_std___Rb_tree_node_int__* t1116 = this1114;
  unsigned long c1117 = 9223372036854775807;
  unsigned long c1118 = 40;
  unsigned long b1119 = c1117 / c1118;
  __retval1115 = b1119;
  unsigned long t1120 = __retval1115;
  return t1120;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEE8allocateEmPKv
struct std___Rb_tree_node_int_* std____new_allocator_std___Rb_tree_node_int_____allocate(struct std____new_allocator_std___Rb_tree_node_int__* v1121, unsigned long v1122, void* v1123) {
bb1124:
  struct std____new_allocator_std___Rb_tree_node_int__* this1125;
  unsigned long __n1126;
  void* unnamed1127;
  struct std___Rb_tree_node_int_* __retval1128;
  this1125 = v1121;
  __n1126 = v1122;
  unnamed1127 = v1123;
  struct std____new_allocator_std___Rb_tree_node_int__* t1129 = this1125;
    unsigned long t1130 = __n1126;
    unsigned long r1131 = std____new_allocator_std___Rb_tree_node_int______M_max_size___const(t1129);
    _Bool c1132 = ((t1130 > r1131)) ? 1 : 0;
    if (c1132) {
        unsigned long t1133 = __n1126;
        unsigned long c1134 = -1;
        unsigned long c1135 = 40;
        unsigned long b1136 = c1134 / c1135;
        _Bool c1137 = ((t1133 > b1136)) ? 1 : 0;
        if (c1137) {
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
    unsigned long c1138 = 8;
    unsigned long c1139 = 16;
    _Bool c1140 = ((c1138 > c1139)) ? 1 : 0;
    if (c1140) {
      unsigned long __al1141;
      unsigned long c1142 = 8;
      __al1141 = c1142;
      unsigned long t1143 = __n1126;
      unsigned long c1144 = 40;
      unsigned long b1145 = t1143 * c1144;
      unsigned long t1146 = __al1141;
      void* r1147 = operator_new_2(b1145, t1146);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast1148 = (struct std___Rb_tree_node_int_*)r1147;
      __retval1128 = cast1148;
      struct std___Rb_tree_node_int_* t1149 = __retval1128;
      return t1149;
    }
  unsigned long t1150 = __n1126;
  unsigned long c1151 = 40;
  unsigned long b1152 = t1150 * c1151;
  void* r1153 = operator_new(b1152);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* cast1154 = (struct std___Rb_tree_node_int_*)r1153;
  __retval1128 = cast1154;
  struct std___Rb_tree_node_int_* t1155 = __retval1128;
  return t1155;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEE8allocateEm
struct std___Rb_tree_node_int_* std__allocator_std___Rb_tree_node_int_____allocate(struct std__allocator_std___Rb_tree_node_int__* v1156, unsigned long v1157) {
bb1158:
  struct std__allocator_std___Rb_tree_node_int__* this1159;
  unsigned long __n1160;
  struct std___Rb_tree_node_int_* __retval1161;
  this1159 = v1156;
  __n1160 = v1157;
  struct std__allocator_std___Rb_tree_node_int__* t1162 = this1159;
    _Bool r1163 = std____is_constant_evaluated();
    if (r1163) {
        unsigned long t1164 = __n1160;
        unsigned long c1165 = 40;
        unsigned long ovr1166;
        _Bool ovf1167 = __builtin_mul_overflow(t1164, c1165, &ovr1166);
        __n1160 = ovr1166;
        if (ovf1167) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1168 = __n1160;
      void* r1169 = operator_new(t1168);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_int_* cast1170 = (struct std___Rb_tree_node_int_*)r1169;
      __retval1161 = cast1170;
      struct std___Rb_tree_node_int_* t1171 = __retval1161;
      return t1171;
    }
  struct std____new_allocator_std___Rb_tree_node_int__* base1172 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t1162 + 0);
  unsigned long t1173 = __n1160;
  void* c1174 = ((void*)0);
  struct std___Rb_tree_node_int_* r1175 = std____new_allocator_std___Rb_tree_node_int_____allocate(base1172, t1173, c1174);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval1161 = r1175;
  struct std___Rb_tree_node_int_* t1176 = __retval1161;
  return t1176;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE8allocateERS2_m
struct std___Rb_tree_node_int_* std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(struct std__allocator_std___Rb_tree_node_int__* v1177, unsigned long v1178) {
bb1179:
  struct std__allocator_std___Rb_tree_node_int__* __a1180;
  unsigned long __n1181;
  struct std___Rb_tree_node_int_* __retval1182;
  __a1180 = v1177;
  __n1181 = v1178;
  struct std__allocator_std___Rb_tree_node_int__* t1183 = __a1180;
  unsigned long t1184 = __n1181;
  struct std___Rb_tree_node_int_* r1185 = std__allocator_std___Rb_tree_node_int_____allocate(t1183, t1184);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval1182 = r1185;
  struct std___Rb_tree_node_int_* t1186 = __retval1182;
  return t1186;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_M_get_nodeEv
struct std___Rb_tree_node_int_* std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1187) {
bb1188:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1189;
  struct std___Rb_tree_node_int_* __retval1190;
  this1189 = v1187;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1191 = this1189;
  struct std__allocator_std___Rb_tree_node_int__* r1192 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t1191);
  unsigned long c1193 = 1;
  struct std___Rb_tree_node_int_* r1194 = std__allocator_traits_std__allocator_std___Rb_tree_node_int_______allocate(r1192, c1193);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval1190 = r1194;
  struct std___Rb_tree_node_int_* t1195 = __retval1190;
  return t1195;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v1196, int* v1197) {
bb1198:
  int* __location1199;
  int* __args1200;
  int* __retval1201;
  void* __loc1202;
  __location1199 = v1196;
  __args1200 = v1197;
  int* t1203 = __location1199;
  void* cast1204 = (void*)t1203;
  __loc1202 = cast1204;
    void* t1205 = __loc1202;
    int* cast1206 = (int*)t1205;
    int* t1207 = __args1200;
    int t1208 = *t1207;
    *cast1206 = t1208;
    __retval1201 = cast1206;
    int* t1209 = __retval1201;
    return t1209;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIiEEE9constructIiJRiEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int__(struct std__allocator_std___Rb_tree_node_int__* v1210, int* v1211, int* v1212) {
bb1213:
  struct std__allocator_std___Rb_tree_node_int__* __a1214;
  int* __p1215;
  int* __args1216;
  __a1214 = v1210;
  __p1215 = v1211;
  __args1216 = v1212;
  int* t1217 = __p1215;
  int* t1218 = __args1216;
  int* r1219 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t1217, t1218);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE17_M_construct_nodeIJRiEEEvPSt13_Rb_tree_nodeIiEDpOT_
void void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1220, struct std___Rb_tree_node_int_* v1221, int* v1222) {
bb1223:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1224;
  struct std___Rb_tree_node_int_* __node1225;
  int* __args1226;
  this1224 = v1220;
  __node1225 = v1221;
  __args1226 = v1222;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1227 = this1224;
      struct std__allocator_std___Rb_tree_node_int__* r1229 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_Node_allocator(t1227);
      struct std___Rb_tree_node_int_* t1230 = __node1225;
      int* r1231 = std___Rb_tree_node_int____M_valptr(t1230);
      if (__cir_exc_active) {
        goto cir_try_dispatch1228;
      }
      int* t1232 = __args1226;
      void_std__allocator_traits_std__allocator_std___Rb_tree_node_int_______construct_int__int__(r1229, r1231, t1232);
    cir_try_dispatch1228: ;
    if (__cir_exc_active) {
    {
      int ca_tok1233 = 0;
      void* ca_exn1234 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Rb_tree_node_int_* t1235 = __node1225;
        struct std___Rb_tree_node_int_* t1236 = __node1225;
        std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_put_node(t1227, t1236);
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
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1237, int* v1238) {
bb1239:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1240;
  int* __args1241;
  struct std___Rb_tree_node_int_* __retval1242;
  struct std___Rb_tree_node_int_* __tmp1243;
  this1240 = v1237;
  __args1241 = v1238;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1244 = this1240;
  struct std___Rb_tree_node_int_* r1245 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_node(t1244);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __tmp1243 = r1245;
  struct std___Rb_tree_node_int_* t1246 = __tmp1243;
  int* t1247 = __args1241;
  void_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_construct_node_int__(t1244, t1246, t1247);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_int_* t1248 = __tmp1243;
  __retval1242 = t1248;
  struct std___Rb_tree_node_int_* t1249 = __retval1242;
  return t1249;
}

// function: _ZNKSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE11_Alloc_nodeclIRiEEPSt13_Rb_tree_nodeIiEOT_
struct std___Rb_tree_node_int_* std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int___int___const(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v1250, int* v1251) {
bb1252:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* this1253;
  int* __arg1254;
  struct std___Rb_tree_node_int_* __retval1255;
  this1253 = v1250;
  __arg1254 = v1251;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t1256 = this1253;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1257 = t1256->_M_t;
  int* t1258 = __arg1254;
  struct std___Rb_tree_node_int_* r1259 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_create_node_int__(t1257, t1258);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_int_* __cir_eh_ret = (struct std___Rb_tree_node_int_*)0;
    return __cir_eh_ret;
  }
  __retval1255 = r1259;
  struct std___Rb_tree_node_int_* t1260 = __retval1255;
  return t1260;
}

// function: _ZNSt9__rb_tree12_Node_traitsIiPiE23_S_insert_and_rebalanceEbPSt18_Rb_tree_node_baseS4_RS3_
void std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(_Bool v1261, struct std___Rb_tree_node_base* v1262, struct std___Rb_tree_node_base* v1263, struct std___Rb_tree_node_base* v1264) {
bb1265:
  _Bool __insert_left1266;
  struct std___Rb_tree_node_base* __x1267;
  struct std___Rb_tree_node_base* __p1268;
  struct std___Rb_tree_node_base* __header1269;
  __insert_left1266 = v1261;
  __x1267 = v1262;
  __p1268 = v1263;
  __header1269 = v1264;
  _Bool t1270 = __insert_left1266;
  struct std___Rb_tree_node_base* t1271 = __x1267;
  struct std___Rb_tree_node_base* t1272 = __p1268;
  struct std___Rb_tree_node_base* t1273 = __header1269;
  std___Rb_tree_insert_and_rebalance(t1270, t1271, t1272, t1273);
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE10_M_insert_IRiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiEPSt18_Rb_tree_node_baseSC_OT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1274, struct std___Rb_tree_node_base* v1275, struct std___Rb_tree_node_base* v1276, int* v1277, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v1278) {
bb1279:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1280;
  struct std___Rb_tree_node_base* __x1281;
  struct std___Rb_tree_node_base* __p1282;
  int* __v1283;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen1284;
  struct std___Rb_tree_iterator_int_ __retval1285;
  _Bool __insert_left1286;
  struct std___Rb_tree_node_base* __z1287;
  this1280 = v1274;
  __x1281 = v1275;
  __p1282 = v1276;
  __v1283 = v1277;
  __node_gen1284 = v1278;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1288 = this1280;
  struct std___Rb_tree_node_base* t1289 = __x1281;
  _Bool cast1290 = (_Bool)t1289;
  _Bool ternary1291;
  if (cast1290) {
    _Bool c1292 = 1;
    ternary1291 = (_Bool)c1292;
  } else {
    struct std___Rb_tree_node_base* t1293 = __p1282;
    struct std___Rb_tree_node_base* r1294 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t1288);
    _Bool c1295 = ((t1293 == r1294)) ? 1 : 0;
    ternary1291 = (_Bool)c1295;
  }
  _Bool ternary1296;
  if (ternary1291) {
    _Bool c1297 = 1;
    ternary1296 = (_Bool)c1297;
  } else {
    struct std___Identity_int_ ref_tmp01298;
    struct std___Rb_tree_key_compare_std__less_int__* base1299 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)&(t1288->_M_impl) + 0);
    struct std__less_int_* cast1300 = (struct std__less_int_*)base1299;
    int* t1301 = __v1283;
    int* r1302 = std___Identity_int___operator___int___const(&ref_tmp01298, t1301);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    struct std___Rb_tree_node_base* t1303 = __p1282;
    int* r1304 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______S_key(t1303);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r1305 = std__less_int___operator___int_const___int_const___const(cast1300, r1302, r1304);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    ternary1296 = (_Bool)r1305;
  }
  __insert_left1286 = ternary1296;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t1306 = __node_gen1284;
  int* t1307 = __v1283;
  struct std___Rb_tree_node_int_* r1308 = std___Rb_tree_node_int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node__operator___int___int___const(t1306, t1307);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* base1309 = (struct std___Rb_tree_node_base*)((char *)r1308 + 0);
  struct std___Rb_tree_node_base* r1310 = std___Rb_tree_node_base___M_base_ptr___const(base1309);
  __z1287 = r1310;
  _Bool t1311 = __insert_left1286;
  struct std___Rb_tree_node_base* t1312 = __z1287;
  struct std___Rb_tree_node_base* t1313 = __p1282;
  struct std___Rb_tree_header* base1314 = (struct std___Rb_tree_header*)((char *)&(t1288->_M_impl) + 8);
  std____rb_tree___Node_traits_int__int_____S_insert_and_rebalance(t1311, t1312, t1313, &base1314->_M_header);
  struct std___Rb_tree_header* base1315 = (struct std___Rb_tree_header*)((char *)&(t1288->_M_impl) + 8);
  unsigned long t1316 = base1315->_M_node_count;
  unsigned long u1317 = t1316 + 1;
  base1315->_M_node_count = u1317;
  struct std___Rb_tree_node_base* t1318 = __z1287;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval1285, t1318);
  struct std___Rb_tree_iterator_int_ t1319 = __retval1285;
  return t1319;
}

// function: _ZNSt17_Rb_tree_iteratorIiEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_iterator_int____Rb_tree_iterator(struct std___Rb_tree_iterator_int_* v1320, struct std___Rb_tree_node_base* v1321) {
bb1322:
  struct std___Rb_tree_iterator_int_* this1323;
  struct std___Rb_tree_node_base* __x1324;
  this1323 = v1320;
  __x1324 = v1321;
  struct std___Rb_tree_iterator_int_* t1325 = this1323;
  struct std___Rb_tree_node_base* t1326 = __x1324;
  t1325->_M_node = t1326;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE17_M_insert_unique_IRiNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIiESt23_Rb_tree_const_iteratorIiEOT_RT0_
struct std___Rb_tree_iterator_int_ std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1327, struct std___Rb_tree_const_iterator_int_ v1328, int* v1329, struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* v1330) {
bb1331:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1332;
  struct std___Rb_tree_const_iterator_int_ __position1333;
  int* __v1334;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* __node_gen1335;
  struct std___Rb_tree_iterator_int_ __retval1336;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __res1337;
  struct std___Rb_tree_const_iterator_int_ agg_tmp01338;
  struct std___Identity_int_ ref_tmp01339;
  this1332 = v1327;
  __position1333 = v1328;
  __v1334 = v1329;
  __node_gen1335 = v1330;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1340 = this1332;
  agg_tmp01338 = __position1333; // copy
  int* t1341 = __v1334;
  int* r1342 = std___Identity_int___operator___int___const(&ref_tmp01339, t1341);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_const_iterator_int_ t1343 = agg_tmp01338;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r1344 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_get_insert_hint_unique_pos(t1340, t1343, r1342);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __res1337 = r1344;
    struct std___Rb_tree_node_base* t1345 = __res1337.second;
    _Bool cast1346 = (_Bool)t1345;
    if (cast1346) {
      struct std___Rb_tree_node_base* t1347 = __res1337.first;
      struct std___Rb_tree_node_base* t1348 = __res1337.second;
      int* t1349 = __v1334;
      struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node* t1350 = __node_gen1335;
      struct std___Rb_tree_iterator_int_ r1351 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t1340, t1347, t1348, t1349, t1350);
      if (__cir_exc_active) {
        struct std___Rb_tree_iterator_int_ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      __retval1336 = r1351;
      struct std___Rb_tree_iterator_int_ t1352 = __retval1336;
      return t1352;
    }
  struct std___Rb_tree_node_base* t1353 = __res1337.first;
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval1336, t1353);
  struct std___Rb_tree_iterator_int_ t1354 = __retval1336;
  return t1354;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE3endEv
struct std___Rb_tree_iterator_int_ std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1355) {
bb1356:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1357;
  struct std___Rb_tree_iterator_int_ __retval1358;
  this1357 = v1355;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1359 = this1357;
  struct std___Rb_tree_node_base* r1360 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_end___const(t1359);
  std___Rb_tree_iterator_int____Rb_tree_iterator(&__retval1358, r1360);
  struct std___Rb_tree_iterator_int_ t1361 = __retval1358;
  return t1361;
}

// function: _ZNSt23_Rb_tree_const_iteratorIiEC2ERKSt17_Rb_tree_iteratorIiE
void std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(struct std___Rb_tree_const_iterator_int_* v1362, struct std___Rb_tree_iterator_int_* v1363) {
bb1364:
  struct std___Rb_tree_const_iterator_int_* this1365;
  struct std___Rb_tree_iterator_int_* __it1366;
  this1365 = v1362;
  __it1366 = v1363;
  struct std___Rb_tree_const_iterator_int_* t1367 = this1365;
  struct std___Rb_tree_iterator_int_* t1368 = __it1366;
  struct std___Rb_tree_node_base* t1369 = t1368->_M_node;
  t1367->_M_node = t1369;
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE22_M_insert_range_uniqueIPiEENSt9enable_ifIXsr17__same_value_typeIT_EE5valueEvE4typeES9_S9_
void std__enable_if___same_value_type_int____value__void___type_std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_range_unique_int__(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* v1370, int* v1371, int* v1372) {
bb1373:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* this1374;
  int* __first1375;
  int* __last1376;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Alloc_node __an1377;
  this1374 = v1370;
  __first1375 = v1371;
  __last1376 = v1372;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int__* t1378 = this1374;
  std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node___Alloc_node(&__an1377, t1378);
  if (__cir_exc_active) {
    return;
  }
    struct std___Rb_tree_const_iterator_int_ agg_tmp01379;
    struct std___Rb_tree_iterator_int_ ref_tmp01380;
    struct std___Rb_tree_iterator_int_ agg_tmp11381;
    while (1) {
      int* t1383 = __first1375;
      int* t1384 = __last1376;
      _Bool c1385 = ((t1383 != t1384)) ? 1 : 0;
      if (!c1385) break;
      struct std___Rb_tree_iterator_int_ r1386 = std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____end(t1378);
      ref_tmp01380 = r1386;
      std___Rb_tree_const_iterator_int____Rb_tree_const_iterator_2(&agg_tmp01379, &ref_tmp01380);
      int* t1387 = __first1375;
      struct std___Rb_tree_const_iterator_int_ t1388 = agg_tmp01379;
      struct std___Rb_tree_iterator_int_ r1389 = std___Rb_tree_iterator_int__std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______M_insert_unique__int___std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Alloc_node_(t1378, t1388, t1387, &__an1377);
      if (__cir_exc_active) {
        return;
      }
      agg_tmp11381 = r1389;
    for_step1382: ;
      int* t1390 = __first1375;
      int c1391 = 1;
      int* ptr1392 = &(t1390)[c1391];
      __first1375 = ptr1392;
    }
  return;
}

// function: _ZNSt8_Rb_treeIiiSt9_IdentityIiESt4lessIiESaIiEE13_Rb_tree_implIS3_Lb1EEC2Ev
void std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int______Rb_tree_impl_std__less_int___true____Rb_tree_impl(struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* v1393) {
bb1394:
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* this1395;
  this1395 = v1393;
  struct std___Rb_tree_int__int__std___Identity_int___std__less_int___std__allocator_int_____Rb_tree_impl_std__less_int___true_* t1396 = this1395;
  struct std__allocator_std___Rb_tree_node_int__* base1397 = (struct std__allocator_std___Rb_tree_node_int__*)((char *)t1396 + 0);
  std__allocator_std___Rb_tree_node_int_____allocator(base1397);
    struct std___Rb_tree_key_compare_std__less_int__* base1398 = (struct std___Rb_tree_key_compare_std__less_int__*)((char *)t1396 + 0);
    std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(base1398);
    struct std___Rb_tree_header* base1399 = (struct std___Rb_tree_header*)((char *)t1396 + 8);
    std___Rb_tree_header___Rb_tree_header(base1399);
  return;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIiEEC2Ev
void std____new_allocator_std___Rb_tree_node_int_______new_allocator(struct std____new_allocator_std___Rb_tree_node_int__* v1400) {
bb1401:
  struct std____new_allocator_std___Rb_tree_node_int__* this1402;
  this1402 = v1400;
  struct std____new_allocator_std___Rb_tree_node_int__* t1403 = this1402;
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIiEEC2Ev
void std__allocator_std___Rb_tree_node_int_____allocator(struct std__allocator_std___Rb_tree_node_int__* v1404) {
bb1405:
  struct std__allocator_std___Rb_tree_node_int__* this1406;
  this1406 = v1404;
  struct std__allocator_std___Rb_tree_node_int__* t1407 = this1406;
  struct std____new_allocator_std___Rb_tree_node_int__* base1408 = (struct std____new_allocator_std___Rb_tree_node_int__*)((char *)t1407 + 0);
  std____new_allocator_std___Rb_tree_node_int_______new_allocator(base1408);
  return;
}

// function: _ZNSt20_Rb_tree_key_compareISt4lessIiEEC2Ev
void std___Rb_tree_key_compare_std__less_int______Rb_tree_key_compare(struct std___Rb_tree_key_compare_std__less_int__* v1409) {
bb1410:
  struct std___Rb_tree_key_compare_std__less_int__* this1411;
  this1411 = v1409;
  return;
}

// function: _ZNSt15_Rb_tree_header8_M_resetEv
void std___Rb_tree_header___M_reset(struct std___Rb_tree_header* v1412) {
bb1413:
  struct std___Rb_tree_header* this1414;
  this1414 = v1412;
  struct std___Rb_tree_header* t1415 = this1414;
  struct std___Rb_tree_node_base* c1416 = ((void*)0);
  t1415->_M_header._M_parent = c1416;
  t1415->_M_header._M_left = &t1415->_M_header;
  t1415->_M_header._M_right = &t1415->_M_header;
  unsigned long c1417 = 0;
  t1415->_M_node_count = c1417;
  return;
}

// function: _ZNSt15_Rb_tree_headerC2Ev
void std___Rb_tree_header___Rb_tree_header(struct std___Rb_tree_header* v1418) {
bb1419:
  struct std___Rb_tree_header* this1420;
  this1420 = v1418;
  struct std___Rb_tree_header* t1421 = this1420;
  unsigned int c1422 = 0;
  t1421->_M_header._M_color = c1422;
  std___Rb_tree_header___M_reset(t1421);
  if (__cir_exc_active) {
    return;
  }
  return;
}

