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
struct __gnu_cxx____aligned_membuf_double_ { unsigned char _M_storage[8]; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Identity_double_ { unsigned char __field0; };
struct std___Rb_tree_const_iterator_double_ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_____Alloc_node { struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* _M_t; };
struct std___Rb_tree_iterator_double_ { struct std___Rb_tree_node_base* _M_node; };
struct std___Rb_tree_key_compare_std__less_double__ { unsigned char __field0; };
struct std___Rb_tree_node_base { unsigned int _M_color; struct std___Rb_tree_node_base* _M_parent; struct std___Rb_tree_node_base* _M_left; struct std___Rb_tree_node_base* _M_right; };
struct std___Rb_tree_node_double_ { struct std___Rb_tree_node_base __field0; struct __gnu_cxx____aligned_membuf_double_ _M_storage; };
struct std____new_allocator_std___Rb_tree_node_double__ { unsigned char __field0; };
struct std____pair_base_std___Rb_tree_const_iterator_double___bool_ { unsigned char __field0; };
struct std____pair_base_std___Rb_tree_iterator_double___bool_ { unsigned char __field0; };
struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___ { unsigned char __field0; };
struct std__allocator_std___Rb_tree_node_double__ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__iterator_std__output_iterator_tag__void__void__void__void_ { unsigned char __field0; };
struct std__less_double_ { unsigned char __field0; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__ostream_iterator_double__char__std__char_traits_char__ { struct std__basic_ostream_char__std__char_traits_char__* _M_stream; char* _M_string; };
struct std__pair_std___Rb_tree_const_iterator_double___bool_ { struct std___Rb_tree_const_iterator_double_ first; _Bool second; unsigned char __field2[7]; } __attribute__((packed));
struct std__pair_std___Rb_tree_iterator_double___bool_ { struct std___Rb_tree_iterator_double_ first; _Bool second; unsigned char __field2[7]; } __attribute__((packed));
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ { struct std___Rb_tree_node_base* first; struct std___Rb_tree_node_base* second; };
struct std___Rb_tree_header { struct std___Rb_tree_node_base _M_header; unsigned long _M_node_count; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_____Rb_tree_impl_std__less_double___true_ { struct std___Rb_tree_key_compare_std__less_double__ __field0; struct std___Rb_tree_header __field1; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__ { struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_____Rb_tree_impl_std__less_double___true_ _M_impl; };
struct std__set_double__std__less_double___std__allocator_double__ { struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__ _M_t; };

double __const_main_a[5] = {0x1.0cccccccccccdp1, 0x1.0cccccccccccdp2, 0x1.3p3, 0x1.0cccccccccccdp1, 0x1.d99999999999ap1};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[2] = " ";
char _str_1[21] = "doubleSet contains: ";
char _str_2[3] = "\n\n";
char _str_3[5] = " was";
char _str_4[9] = " was not";
char _str_5[10] = " inserted";
char _str_6[22] = "\ndoubleSet contains: ";
void std__set_double__std__less_double___std__allocator_double_____set_double__(struct std__set_double__std__less_double___std__allocator_double__* p0, double* p1, double* p2);
void std__ostream_iterator_double__char__std__char_traits_char_____ostream_iterator_2(struct std__ostream_iterator_double__char__std__char_traits_char__* p0, struct std__basic_ostream_char__std__char_traits_char__* p1, char* p2);
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
struct std__ostream_iterator_double__char__std__char_traits_char__ std__ostream_iterator_double__char__std__char_traits_char____std____niter_wrap_std__ostream_iterator_double__char__std__char_traits_char_____(struct std__ostream_iterator_double__char__std__char_traits_char__* p0, struct std__ostream_iterator_double__char__std__char_traits_char__ p1);
_Bool std__operator___2(struct std___Rb_tree_const_iterator_double_* p0, struct std___Rb_tree_const_iterator_double_* p1);
struct std__ostream_iterator_double__char__std__char_traits_char__* std__ostream_iterator_double__char__std__char_traits_char_____operator__2(struct std__ostream_iterator_double__char__std__char_traits_char__* p0);
struct std__ostream_iterator_double__char__std__char_traits_char__* std__ostream_iterator_double__char__std__char_traits_char_____operator_(struct std__ostream_iterator_double__char__std__char_traits_char__* p0, double* p1);
void void_std____assign_one_false__std__ostream_iterator_double__char__std__char_traits_char_____std___Rb_tree_const_iterator_double___(struct std__ostream_iterator_double__char__std__char_traits_char__* p0, struct std___Rb_tree_const_iterator_double_* p1);
struct std__ostream_iterator_double__char__std__char_traits_char__* std__ostream_iterator_double__char__std__char_traits_char_____operator__(struct std__ostream_iterator_double__char__std__char_traits_char__* p0);
extern struct std___Rb_tree_node_base* std___Rb_tree_increment(struct std___Rb_tree_node_base* p0);
struct std___Rb_tree_const_iterator_double_* std___Rb_tree_const_iterator_double___operator__(struct std___Rb_tree_const_iterator_double_* p0);
struct std__ostream_iterator_double__char__std__char_traits_char__ std__ostream_iterator_double__char__std__char_traits_char____std____copy_move_a2_false__std___Rb_tree_const_iterator_double___std___Rb_tree_const_iterator_double___std__ostream_iterator_double__char__std__char_traits_char_____(struct std___Rb_tree_const_iterator_double_ p0, struct std___Rb_tree_const_iterator_double_ p1, struct std__ostream_iterator_double__char__std__char_traits_char__ p2);
struct std__ostream_iterator_double__char__std__char_traits_char__ std__ostream_iterator_double__char__std__char_traits_char____std____copy_move_a1_false__std___Rb_tree_const_iterator_double___std__ostream_iterator_double__char__std__char_traits_char_____(struct std___Rb_tree_const_iterator_double_ p0, struct std___Rb_tree_const_iterator_double_ p1, struct std__ostream_iterator_double__char__std__char_traits_char__ p2);
struct std___Rb_tree_const_iterator_double_ std___Rb_tree_const_iterator_double__std____niter_base_std___Rb_tree_const_iterator_double___(struct std___Rb_tree_const_iterator_double_ p0);
struct std__ostream_iterator_double__char__std__char_traits_char__ std__ostream_iterator_double__char__std__char_traits_char____std____niter_base_std__ostream_iterator_double__char__std__char_traits_char_____(struct std__ostream_iterator_double__char__std__char_traits_char__ p0);
struct std__ostream_iterator_double__char__std__char_traits_char__ std__ostream_iterator_double__char__std__char_traits_char____std____copy_move_a_false__std___Rb_tree_const_iterator_double___std__ostream_iterator_double__char__std__char_traits_char_____(struct std___Rb_tree_const_iterator_double_ p0, struct std___Rb_tree_const_iterator_double_ p1, struct std__ostream_iterator_double__char__std__char_traits_char__ p2);
struct std___Rb_tree_const_iterator_double_ std___Rb_tree_const_iterator_double__std____miter_base_std___Rb_tree_const_iterator_double___(struct std___Rb_tree_const_iterator_double_ p0);
struct std__ostream_iterator_double__char__std__char_traits_char__ std__ostream_iterator_double__char__std__char_traits_char____std__copy_std___Rb_tree_const_iterator_double___std__ostream_iterator_double__char__std__char_traits_char_____(struct std___Rb_tree_const_iterator_double_ p0, struct std___Rb_tree_const_iterator_double_ p1, struct std__ostream_iterator_double__char__std__char_traits_char__ p2);
void std___Rb_tree_const_iterator_double____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_double_* p0, struct std___Rb_tree_node_base* p1);
struct std___Rb_tree_const_iterator_double_ std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_____begin___const(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* p0);
struct std___Rb_tree_const_iterator_double_ std__set_double__std__less_double___std__allocator_double_____begin___const(struct std__set_double__std__less_double___std__allocator_double__* p0);
struct std___Rb_tree_const_iterator_double_ std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_____end___const(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* p0);
struct std___Rb_tree_const_iterator_double_ std__set_double__std__less_double___std__allocator_double_____end___const(struct std__set_double__std__less_double___std__allocator_double__* p0);
void std__ostream_iterator_double__char__std__char_traits_char_____ostream_iterator(struct std__ostream_iterator_double__char__std__char_traits_char__* p0, struct std__ostream_iterator_double__char__std__char_traits_char__* p1);
void _ZNSt4pairISt23_Rb_tree_const_iteratorIdEbEC2EvQaa26is_default_constructible_vIT_E26is_default_constructible_vIT0_E(struct std__pair_std___Rb_tree_const_iterator_double___bool_* p0);
double* _ZSt12construct_atIdJdEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(double* p0, double* p1);
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_double_______construct_double__double_(struct std__allocator_std___Rb_tree_node_double__* p0, double* p1, double* p2);
void void_std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_construct_node_double_(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* p0, struct std___Rb_tree_node_double_* p1, double* p2);
struct std___Rb_tree_node_double_* std___Rb_tree_node_double___std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_create_node_double_(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* p0, double* p1);
struct std___Rb_tree_node_double_* std___Rb_tree_node_double___std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______Alloc_node__operator___double__double____const(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_____Alloc_node* p0, double* p1);
struct std___Rb_tree_iterator_double_ std___Rb_tree_iterator_double__std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_insert__double__std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______Alloc_node_(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, double* p3, struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_____Alloc_node* p4);
void _ZNSt4pairISt17_Rb_tree_iteratorIdEbEC2IS1_bQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(struct std__pair_std___Rb_tree_iterator_double___bool_* p0, struct std___Rb_tree_iterator_double_* p1, _Bool* p2);
struct std__pair_std___Rb_tree_iterator_double___bool_ std__pair_std___Rb_tree_iterator_double___bool__std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_insert_unique_double_(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* p0, double* p1);
void _ZNSt4pairISt23_Rb_tree_const_iteratorIdEbEC2IRSt17_Rb_tree_iteratorIdERbQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS8_S9_EEEEOT_OT0_(struct std__pair_std___Rb_tree_const_iterator_double___bool_* p0, struct std___Rb_tree_iterator_double_* p1, _Bool* p2);
struct std__pair_std___Rb_tree_const_iterator_double___bool_ std__set_double__std__less_double___std__allocator_double_____insert(struct std__set_double__std__less_double___std__allocator_double__* p0, double* p1);
struct std___Rb_tree_const_iterator_double_* std___Rb_tree_const_iterator_double___operator_(struct std___Rb_tree_const_iterator_double_* p0, struct std___Rb_tree_const_iterator_double_* p1);
struct std__pair_std___Rb_tree_const_iterator_double___bool_* _ZNSt4pairISt23_Rb_tree_const_iteratorIdEbEaSEOS2_Qcl13_S_assignableIT_T0_EE(struct std__pair_std___Rb_tree_const_iterator_double___bool_* p0, struct std__pair_std___Rb_tree_const_iterator_double___bool_* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_double_(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
double* std___Rb_tree_const_iterator_double___operator____const(struct std___Rb_tree_const_iterator_double_* p0);
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
void std__set_double__std__less_double___std__allocator_double______set(struct std__set_double__std__less_double___std__allocator_double__* p0);
int main();
void std___Rb_tree_const_iterator_double____Rb_tree_const_iterator_3(struct std___Rb_tree_const_iterator_double_* p0);
void std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_______Rb_tree(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* p0);
struct std___Rb_tree_node_double_* std___Rb_tree_node_double____M_node_ptr(struct std___Rb_tree_node_double_* p0);
struct std___Rb_tree_node_double_* std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______S_right(struct std___Rb_tree_node_double_* p0);
struct std___Rb_tree_node_double_* std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______S_left(struct std___Rb_tree_node_double_* p0);
void void_std__destroy_at_double_(double* p0);
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_double_______destroy_double_(struct std__allocator_std___Rb_tree_node_double__* p0, double* p1);
struct std__allocator_std___Rb_tree_node_double__* std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_get_Node_allocator(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* p0);
void* __gnu_cxx____aligned_membuf_double____M_addr(struct __gnu_cxx____aligned_membuf_double_* p0);
double* __gnu_cxx____aligned_membuf_double____M_ptr(struct __gnu_cxx____aligned_membuf_double_* p0);
double* std___Rb_tree_node_double____M_valptr(struct std___Rb_tree_node_double_* p0);
void std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_destroy_node(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* p0, struct std___Rb_tree_node_double_* p1);
_Bool std____is_constant_evaluated();
extern void *malloc(unsigned long);
extern void free(void*);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_std___Rb_tree_node_double_____deallocate(struct std____new_allocator_std___Rb_tree_node_double__* p0, struct std___Rb_tree_node_double_* p1, unsigned long p2);
void std__allocator_std___Rb_tree_node_double_____deallocate(struct std__allocator_std___Rb_tree_node_double__* p0, struct std___Rb_tree_node_double_* p1, unsigned long p2);
void std__allocator_traits_std__allocator_std___Rb_tree_node_double_______deallocate(struct std__allocator_std___Rb_tree_node_double__* p0, struct std___Rb_tree_node_double_* p1, unsigned long p2);
void std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_put_node(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* p0, struct std___Rb_tree_node_double_* p1);
void std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_drop_node(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* p0, struct std___Rb_tree_node_double_* p1);
void std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_erase(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* p0, struct std___Rb_tree_node_double_* p1);
struct std___Rb_tree_node_double_* std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_begin_node___const(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* p0);
void std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______Rb_tree_impl_std__less_double___true_____Rb_tree_impl(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_____Rb_tree_impl_std__less_double___true_* p0);
void std__allocator_std___Rb_tree_node_double______allocator(struct std__allocator_std___Rb_tree_node_double__* p0);
void std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______Rb_tree(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* p0);
void std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______Alloc_node___Alloc_node(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_____Alloc_node* p0, struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* p1);
struct std___Rb_tree_node_base* std___Rb_tree_node_base___M_base_ptr___const(struct std___Rb_tree_node_base* p0);
struct std___Rb_tree_node_base* std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_end___const(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* p0);
unsigned long std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_____size___const(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* p0);
_Bool std__less_double___operator___double_const___double_const___const(struct std__less_double_* p0, double* p1, double* p2);
double* std___Identity_double___operator___double_const___const(struct std___Identity_double_* p0, double* p1);
void* __gnu_cxx____aligned_membuf_double____M_addr___const(struct __gnu_cxx____aligned_membuf_double_* p0);
double* __gnu_cxx____aligned_membuf_double____M_ptr___const(struct __gnu_cxx____aligned_membuf_double_* p0);
double* std___Rb_tree_node_double____M_valptr___const(struct std___Rb_tree_node_double_* p0);
double* std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______S_key_2(struct std___Rb_tree_node_double_* p0);
double* std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______S_key(struct std___Rb_tree_node_base* p0);
struct std___Rb_tree_node_base** std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_rightmost(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* p0);
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* p0, struct std___Rb_tree_node_base** p1, struct std___Rb_tree_node_base** p2);
struct std___Rb_tree_node_base* std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_begin___const(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* p0);
struct std___Rb_tree_node_base* std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______S_left_2(struct std___Rb_tree_node_base* p0);
_Bool std__operator__(struct std___Rb_tree_iterator_double_* p0, struct std___Rb_tree_iterator_double_* p1);
struct std___Rb_tree_iterator_double_ std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_____begin(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* p0);
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_get_insert_unique_pos(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* p0, double* p1);
struct std___Rb_tree_node_base** std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_leftmost(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* p0);
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* p0, struct std___Rb_tree_node_base** p1, struct std___Rb_tree_node_base** p2);
extern struct std___Rb_tree_node_base* std___Rb_tree_decrement(struct std___Rb_tree_node_base* p0);
struct std___Rb_tree_iterator_double_* std___Rb_tree_iterator_double___operator__(struct std___Rb_tree_iterator_double_* p0);
struct std___Rb_tree_node_base* std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______S_right_2(struct std___Rb_tree_node_base* p0);
struct std___Rb_tree_iterator_double_* std___Rb_tree_iterator_double___operator___2(struct std___Rb_tree_iterator_double_* p0);
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* p0, struct std___Rb_tree_node_base** p1, struct std___Rb_tree_node_base** p2);
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_get_insert_hint_unique_pos(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* p0, struct std___Rb_tree_const_iterator_double_ p1, double* p2);
double* std___Identity_double___operator___double___const(struct std___Identity_double_* p0, double* p1);
extern void std____throw_bad_array_new_length();
void* operator_new(unsigned long p0) { return malloc(p0); }
unsigned long std____new_allocator_std___Rb_tree_node_double______M_max_size___const(struct std____new_allocator_std___Rb_tree_node_double__* p0);
extern void std____throw_bad_alloc();
void* operator_new_2(unsigned long p0, unsigned long p1) { return malloc(p0); }
struct std___Rb_tree_node_double_* std____new_allocator_std___Rb_tree_node_double_____allocate(struct std____new_allocator_std___Rb_tree_node_double__* p0, unsigned long p1, void* p2);
struct std___Rb_tree_node_double_* std__allocator_std___Rb_tree_node_double_____allocate(struct std__allocator_std___Rb_tree_node_double__* p0, unsigned long p1);
struct std___Rb_tree_node_double_* std__allocator_traits_std__allocator_std___Rb_tree_node_double_______allocate(struct std__allocator_std___Rb_tree_node_double__* p0, unsigned long p1);
struct std___Rb_tree_node_double_* std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_get_node(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* p0);
extern int __gxx_personality_v0();
double* _ZSt12construct_atIdJRdEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(double* p0, double* p1);
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_double_______construct_double__double__(struct std__allocator_std___Rb_tree_node_double__* p0, double* p1, double* p2);
void void_std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_construct_node_double__(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* p0, struct std___Rb_tree_node_double_* p1, double* p2);
struct std___Rb_tree_node_double_* std___Rb_tree_node_double___std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_create_node_double__(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* p0, double* p1);
struct std___Rb_tree_node_double_* std___Rb_tree_node_double___std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______Alloc_node__operator___double___double___const(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_____Alloc_node* p0, double* p1);
extern void std___Rb_tree_insert_and_rebalance(_Bool p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, struct std___Rb_tree_node_base* p3);
void std____rb_tree___Node_traits_double__double_____S_insert_and_rebalance(_Bool p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, struct std___Rb_tree_node_base* p3);
struct std___Rb_tree_iterator_double_ std___Rb_tree_iterator_double__std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_insert__double___std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______Alloc_node_(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* p0, struct std___Rb_tree_node_base* p1, struct std___Rb_tree_node_base* p2, double* p3, struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_____Alloc_node* p4);
void std___Rb_tree_iterator_double____Rb_tree_iterator(struct std___Rb_tree_iterator_double_* p0, struct std___Rb_tree_node_base* p1);
struct std___Rb_tree_iterator_double_ std___Rb_tree_iterator_double__std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_insert_unique__double___std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______Alloc_node_(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* p0, struct std___Rb_tree_const_iterator_double_ p1, double* p2, struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_____Alloc_node* p3);
struct std___Rb_tree_iterator_double_ std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_____end(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* p0);
void std___Rb_tree_const_iterator_double____Rb_tree_const_iterator_2(struct std___Rb_tree_const_iterator_double_* p0, struct std___Rb_tree_iterator_double_* p1);
void std__enable_if___same_value_type_double____value__void___type_std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_insert_range_unique_double__(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* p0, double* p1, double* p2);
void std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______Rb_tree_impl_std__less_double___true____Rb_tree_impl(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_____Rb_tree_impl_std__less_double___true_* p0);
void std____new_allocator_std___Rb_tree_node_double_______new_allocator(struct std____new_allocator_std___Rb_tree_node_double__* p0);
void std__allocator_std___Rb_tree_node_double_____allocator(struct std__allocator_std___Rb_tree_node_double__* p0);
void std___Rb_tree_key_compare_std__less_double______Rb_tree_key_compare(struct std___Rb_tree_key_compare_std__less_double__* p0);
void std___Rb_tree_header___M_reset(struct std___Rb_tree_header* p0);
void std___Rb_tree_header___Rb_tree_header(struct std___Rb_tree_header* p0);

// function: _ZNSt3setIdSt4lessIdESaIdEEC2IPdEET_S6_
void std__set_double__std__less_double___std__allocator_double_____set_double__(struct std__set_double__std__less_double___std__allocator_double__* v0, double* v1, double* v2) {
bb3:
  struct std__set_double__std__less_double___std__allocator_double__* this4;
  double* __first5;
  double* __last6;
  this4 = v0;
  __first5 = v1;
  __last6 = v2;
  struct std__set_double__std__less_double___std__allocator_double__* t7 = this4;
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__ c8 = {0};
  t7->_M_t = c8;
  std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______Rb_tree(&t7->_M_t);
    double* t9 = __first5;
    double* t10 = __last6;
    std__enable_if___same_value_type_double____value__void___type_std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_insert_range_unique_double__(&t7->_M_t, t9, t10);
    if (__cir_exc_active) {
      {
        std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_______Rb_tree(&t7->_M_t);
      }
      return;
    }
  return;
}

// function: _ZNSt16ostream_iteratorIdcSt11char_traitsIcEEC2ERSoPKc
void std__ostream_iterator_double__char__std__char_traits_char_____ostream_iterator_2(struct std__ostream_iterator_double__char__std__char_traits_char__* v11, struct std__basic_ostream_char__std__char_traits_char__* v12, char* v13) {
bb14:
  struct std__ostream_iterator_double__char__std__char_traits_char__* this15;
  struct std__basic_ostream_char__std__char_traits_char__* __s16;
  char* __c17;
  this15 = v11;
  __s16 = v12;
  __c17 = v13;
  struct std__ostream_iterator_double__char__std__char_traits_char__* t18 = this15;
  struct std__iterator_std__output_iterator_tag__void__void__void__void_* base19 = (struct std__iterator_std__output_iterator_tag__void__void__void__void_*)((char *)t18 + 0);
  struct std__basic_ostream_char__std__char_traits_char__* t20 = __s16;
  t18->_M_stream = t20;
  char* t21 = __c17;
  t18->_M_string = t21;
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v22, int v23) {
bb24:
  int __a25;
  int __b26;
  int __retval27;
  __a25 = v22;
  __b26 = v23;
  int t28 = __a25;
  int t29 = __b26;
  int b30 = t28 | t29;
  __retval27 = b30;
  int t31 = __retval27;
  return t31;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v32) {
bb33:
  struct std__basic_ios_char__std__char_traits_char__* this34;
  int __retval35;
  this34 = v32;
  struct std__basic_ios_char__std__char_traits_char__* t36 = this34;
  struct std__ios_base* base37 = (struct std__ios_base*)((char *)t36 + 0);
  int t38 = base37->_M_streambuf_state;
  __retval35 = t38;
  int t39 = __retval35;
  return t39;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v40, int v41) {
bb42:
  struct std__basic_ios_char__std__char_traits_char__* this43;
  int __state44;
  this43 = v40;
  __state44 = v41;
  struct std__basic_ios_char__std__char_traits_char__* t45 = this43;
  int r46 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t45);
  if (__cir_exc_active) {
    return;
  }
  int t47 = __state44;
  int r48 = std__operator_(r46, t47);
  std__basic_ios_char__std__char_traits_char_____clear(t45, r48);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v49, char* v50) {
bb51:
  char* __c152;
  char* __c253;
  _Bool __retval54;
  __c152 = v49;
  __c253 = v50;
  char* t55 = __c152;
  char t56 = *t55;
  int cast57 = (int)t56;
  char* t58 = __c253;
  char t59 = *t58;
  int cast60 = (int)t59;
  _Bool c61 = ((cast57 == cast60)) ? 1 : 0;
  __retval54 = c61;
  _Bool t62 = __retval54;
  return t62;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v63) {
bb64:
  char* __p65;
  unsigned long __retval66;
  unsigned long __i67;
  __p65 = v63;
  unsigned long c68 = 0;
  __i67 = c68;
    char ref_tmp069;
    while (1) {
      unsigned long t70 = __i67;
      char* t71 = __p65;
      char* ptr72 = &(t71)[t70];
      char c73 = 0;
      ref_tmp069 = c73;
      _Bool r74 = __gnu_cxx__char_traits_char___eq(ptr72, &ref_tmp069);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u75 = !r74;
      if (!u75) break;
      unsigned long t76 = __i67;
      unsigned long u77 = t76 + 1;
      __i67 = u77;
    }
  unsigned long t78 = __i67;
  __retval66 = t78;
  unsigned long t79 = __retval66;
  return t79;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v80) {
bb81:
  char* __s82;
  unsigned long __retval83;
  __s82 = v80;
    _Bool r84 = std____is_constant_evaluated();
    if (r84) {
      char* t85 = __s82;
      unsigned long r86 = __gnu_cxx__char_traits_char___length(t85);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval83 = r86;
      unsigned long t87 = __retval83;
      return t87;
    }
  char* t88 = __s82;
  unsigned long r89 = strlen(t88);
  __retval83 = r89;
  unsigned long t90 = __retval83;
  return t90;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v91, char* v92) {
bb93:
  struct std__basic_ostream_char__std__char_traits_char__* __out94;
  char* __s95;
  struct std__basic_ostream_char__std__char_traits_char__* __retval96;
  __out94 = v91;
  __s95 = v92;
    char* t97 = __s95;
    _Bool cast98 = (_Bool)t97;
    _Bool u99 = !cast98;
    if (u99) {
      struct std__basic_ostream_char__std__char_traits_char__* t100 = __out94;
      void** v101 = (void**)t100;
      void* v102 = *((void**)v101);
      unsigned char* cast103 = (unsigned char*)v102;
      long c104 = -24;
      unsigned char* ptr105 = &(cast103)[c104];
      long* cast106 = (long*)ptr105;
      long t107 = *cast106;
      unsigned char* cast108 = (unsigned char*)t100;
      unsigned char* ptr109 = &(cast108)[t107];
      struct std__basic_ostream_char__std__char_traits_char__* cast110 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr109;
      struct std__basic_ios_char__std__char_traits_char__* cast111 = (struct std__basic_ios_char__std__char_traits_char__*)cast110;
      int t112 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast111, t112);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t113 = __out94;
      char* t114 = __s95;
      char* t115 = __s95;
      unsigned long r116 = std__char_traits_char___length(t115);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast117 = (long)r116;
      struct std__basic_ostream_char__std__char_traits_char__* r118 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t113, t114, cast117);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t119 = __out94;
  __retval96 = t119;
  struct std__basic_ostream_char__std__char_traits_char__* t120 = __retval96;
  return t120;
}

// function: _ZSt12__niter_wrapISt16ostream_iteratorIdcSt11char_traitsIcEEET_RKS4_S4_
struct std__ostream_iterator_double__char__std__char_traits_char__ std__ostream_iterator_double__char__std__char_traits_char____std____niter_wrap_std__ostream_iterator_double__char__std__char_traits_char_____(struct std__ostream_iterator_double__char__std__char_traits_char__* v121, struct std__ostream_iterator_double__char__std__char_traits_char__ v122) {
bb123:
  struct std__ostream_iterator_double__char__std__char_traits_char__* unnamed124;
  struct std__ostream_iterator_double__char__std__char_traits_char__ __res125;
  struct std__ostream_iterator_double__char__std__char_traits_char__ __retval126;
  unnamed124 = v121;
  __res125 = v122;
  std__ostream_iterator_double__char__std__char_traits_char_____ostream_iterator(&__retval126, &__res125);
  struct std__ostream_iterator_double__char__std__char_traits_char__ t127 = __retval126;
  return t127;
}

// function: _ZSteqRKSt23_Rb_tree_const_iteratorIdES2_
_Bool std__operator___2(struct std___Rb_tree_const_iterator_double_* v128, struct std___Rb_tree_const_iterator_double_* v129) {
bb130:
  struct std___Rb_tree_const_iterator_double_* __x131;
  struct std___Rb_tree_const_iterator_double_* __y132;
  _Bool __retval133;
  __x131 = v128;
  __y132 = v129;
  struct std___Rb_tree_const_iterator_double_* t134 = __x131;
  struct std___Rb_tree_node_base* t135 = t134->_M_node;
  struct std___Rb_tree_const_iterator_double_* t136 = __y132;
  struct std___Rb_tree_node_base* t137 = t136->_M_node;
  _Bool c138 = ((t135 == t137)) ? 1 : 0;
  __retval133 = c138;
  _Bool t139 = __retval133;
  return t139;
}

// function: _ZNSt16ostream_iteratorIdcSt11char_traitsIcEEdeEv
struct std__ostream_iterator_double__char__std__char_traits_char__* std__ostream_iterator_double__char__std__char_traits_char_____operator__2(struct std__ostream_iterator_double__char__std__char_traits_char__* v140) {
bb141:
  struct std__ostream_iterator_double__char__std__char_traits_char__* this142;
  struct std__ostream_iterator_double__char__std__char_traits_char__* __retval143;
  this142 = v140;
  struct std__ostream_iterator_double__char__std__char_traits_char__* t144 = this142;
  __retval143 = t144;
  struct std__ostream_iterator_double__char__std__char_traits_char__* t145 = __retval143;
  return t145;
}

// function: _ZNSt16ostream_iteratorIdcSt11char_traitsIcEEaSERKd
struct std__ostream_iterator_double__char__std__char_traits_char__* std__ostream_iterator_double__char__std__char_traits_char_____operator_(struct std__ostream_iterator_double__char__std__char_traits_char__* v146, double* v147) {
bb148:
  struct std__ostream_iterator_double__char__std__char_traits_char__* this149;
  double* __value150;
  struct std__ostream_iterator_double__char__std__char_traits_char__* __retval151;
  this149 = v146;
  __value150 = v147;
  struct std__ostream_iterator_double__char__std__char_traits_char__* t152 = this149;
  struct std__basic_ostream_char__std__char_traits_char__* t153 = t152->_M_stream;
  double* t154 = __value150;
  double t155 = *t154;
  struct std__basic_ostream_char__std__char_traits_char__* r156 = std__ostream__operator__(t153, t155);
  if (__cir_exc_active) {
    struct std__ostream_iterator_double__char__std__char_traits_char__* __cir_eh_ret = (struct std__ostream_iterator_double__char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
    char* t157 = t152->_M_string;
    _Bool cast158 = (_Bool)t157;
    if (cast158) {
      struct std__basic_ostream_char__std__char_traits_char__* t159 = t152->_M_stream;
      char* t160 = t152->_M_string;
      struct std__basic_ostream_char__std__char_traits_char__* r161 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(t159, t160);
      if (__cir_exc_active) {
        struct std__ostream_iterator_double__char__std__char_traits_char__* __cir_eh_ret = (struct std__ostream_iterator_double__char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  __retval151 = t152;
  struct std__ostream_iterator_double__char__std__char_traits_char__* t162 = __retval151;
  return t162;
}

// function: _ZSt12__assign_oneILb0ESt16ostream_iteratorIdcSt11char_traitsIcEESt23_Rb_tree_const_iteratorIdEEvRT0_RT1_
void void_std____assign_one_false__std__ostream_iterator_double__char__std__char_traits_char_____std___Rb_tree_const_iterator_double___(struct std__ostream_iterator_double__char__std__char_traits_char__* v163, struct std___Rb_tree_const_iterator_double_* v164) {
bb165:
  struct std__ostream_iterator_double__char__std__char_traits_char__* __out166;
  struct std___Rb_tree_const_iterator_double_* __in167;
  __out166 = v163;
  __in167 = v164;
    struct std___Rb_tree_const_iterator_double_* t168 = __in167;
    double* r169 = std___Rb_tree_const_iterator_double___operator____const(t168);
    struct std__ostream_iterator_double__char__std__char_traits_char__* t170 = __out166;
    struct std__ostream_iterator_double__char__std__char_traits_char__* r171 = std__ostream_iterator_double__char__std__char_traits_char_____operator__2(t170);
    struct std__ostream_iterator_double__char__std__char_traits_char__* r172 = std__ostream_iterator_double__char__std__char_traits_char_____operator_(r171, r169);
    if (__cir_exc_active) {
      return;
    }
  return;
}

// function: _ZNSt16ostream_iteratorIdcSt11char_traitsIcEEppEv
struct std__ostream_iterator_double__char__std__char_traits_char__* std__ostream_iterator_double__char__std__char_traits_char_____operator__(struct std__ostream_iterator_double__char__std__char_traits_char__* v173) {
bb174:
  struct std__ostream_iterator_double__char__std__char_traits_char__* this175;
  struct std__ostream_iterator_double__char__std__char_traits_char__* __retval176;
  this175 = v173;
  struct std__ostream_iterator_double__char__std__char_traits_char__* t177 = this175;
  __retval176 = t177;
  struct std__ostream_iterator_double__char__std__char_traits_char__* t178 = __retval176;
  return t178;
}

// function: _ZNSt23_Rb_tree_const_iteratorIdEppEv
struct std___Rb_tree_const_iterator_double_* std___Rb_tree_const_iterator_double___operator__(struct std___Rb_tree_const_iterator_double_* v179) {
bb180:
  struct std___Rb_tree_const_iterator_double_* this181;
  struct std___Rb_tree_const_iterator_double_* __retval182;
  this181 = v179;
  struct std___Rb_tree_const_iterator_double_* t183 = this181;
  struct std___Rb_tree_node_base* t184 = t183->_M_node;
  struct std___Rb_tree_node_base* r185 = std___Rb_tree_increment(t184);
  t183->_M_node = r185;
  __retval182 = t183;
  struct std___Rb_tree_const_iterator_double_* t186 = __retval182;
  return t186;
}

// function: _ZSt14__copy_move_a2ILb0ESt23_Rb_tree_const_iteratorIdES1_St16ostream_iteratorIdcSt11char_traitsIcEEET2_T0_T1_S6_
struct std__ostream_iterator_double__char__std__char_traits_char__ std__ostream_iterator_double__char__std__char_traits_char____std____copy_move_a2_false__std___Rb_tree_const_iterator_double___std___Rb_tree_const_iterator_double___std__ostream_iterator_double__char__std__char_traits_char_____(struct std___Rb_tree_const_iterator_double_ v187, struct std___Rb_tree_const_iterator_double_ v188, struct std__ostream_iterator_double__char__std__char_traits_char__ v189) {
bb190:
  struct std___Rb_tree_const_iterator_double_ __first191;
  struct std___Rb_tree_const_iterator_double_ __last192;
  struct std__ostream_iterator_double__char__std__char_traits_char__ __result193;
  struct std__ostream_iterator_double__char__std__char_traits_char__ __retval194;
  __first191 = v187;
  __last192 = v188;
  __result193 = v189;
    while (1) {
      _Bool r196 = std__operator___2(&__first191, &__last192);
      _Bool u197 = !r196;
      if (!u197) break;
      void_std____assign_one_false__std__ostream_iterator_double__char__std__char_traits_char_____std___Rb_tree_const_iterator_double___(&__result193, &__first191);
      if (__cir_exc_active) {
        struct std__ostream_iterator_double__char__std__char_traits_char__ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
    for_step195: ;
      struct std__ostream_iterator_double__char__std__char_traits_char__* r198 = std__ostream_iterator_double__char__std__char_traits_char_____operator__(&__result193);
      struct std___Rb_tree_const_iterator_double_* r199 = std___Rb_tree_const_iterator_double___operator__(&__first191);
    }
  std__ostream_iterator_double__char__std__char_traits_char_____ostream_iterator(&__retval194, &__result193);
  struct std__ostream_iterator_double__char__std__char_traits_char__ t200 = __retval194;
  return t200;
}

// function: _ZSt14__copy_move_a1ILb0ESt23_Rb_tree_const_iteratorIdESt16ostream_iteratorIdcSt11char_traitsIcEEET1_T0_S7_S6_
struct std__ostream_iterator_double__char__std__char_traits_char__ std__ostream_iterator_double__char__std__char_traits_char____std____copy_move_a1_false__std___Rb_tree_const_iterator_double___std__ostream_iterator_double__char__std__char_traits_char_____(struct std___Rb_tree_const_iterator_double_ v201, struct std___Rb_tree_const_iterator_double_ v202, struct std__ostream_iterator_double__char__std__char_traits_char__ v203) {
bb204:
  struct std___Rb_tree_const_iterator_double_ __first205;
  struct std___Rb_tree_const_iterator_double_ __last206;
  struct std__ostream_iterator_double__char__std__char_traits_char__ __result207;
  struct std__ostream_iterator_double__char__std__char_traits_char__ __retval208;
  struct std___Rb_tree_const_iterator_double_ agg_tmp0209;
  struct std___Rb_tree_const_iterator_double_ agg_tmp1210;
  struct std__ostream_iterator_double__char__std__char_traits_char__ agg_tmp2211;
  __first205 = v201;
  __last206 = v202;
  __result207 = v203;
  agg_tmp0209 = __first205; // copy
  agg_tmp1210 = __last206; // copy
  std__ostream_iterator_double__char__std__char_traits_char_____ostream_iterator(&agg_tmp2211, &__result207);
  struct std___Rb_tree_const_iterator_double_ t212 = agg_tmp0209;
  struct std___Rb_tree_const_iterator_double_ t213 = agg_tmp1210;
  struct std__ostream_iterator_double__char__std__char_traits_char__ t214 = agg_tmp2211;
  struct std__ostream_iterator_double__char__std__char_traits_char__ r215 = std__ostream_iterator_double__char__std__char_traits_char____std____copy_move_a2_false__std___Rb_tree_const_iterator_double___std___Rb_tree_const_iterator_double___std__ostream_iterator_double__char__std__char_traits_char_____(t212, t213, t214);
  if (__cir_exc_active) {
    struct std__ostream_iterator_double__char__std__char_traits_char__ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval208 = r215;
  struct std__ostream_iterator_double__char__std__char_traits_char__ t216 = __retval208;
  return t216;
}

// function: _ZSt12__niter_baseISt23_Rb_tree_const_iteratorIdEET_S2_
struct std___Rb_tree_const_iterator_double_ std___Rb_tree_const_iterator_double__std____niter_base_std___Rb_tree_const_iterator_double___(struct std___Rb_tree_const_iterator_double_ v217) {
bb218:
  struct std___Rb_tree_const_iterator_double_ __it219;
  struct std___Rb_tree_const_iterator_double_ __retval220;
  __it219 = v217;
  __retval220 = __it219; // copy
  struct std___Rb_tree_const_iterator_double_ t221 = __retval220;
  return t221;
}

// function: _ZSt12__niter_baseISt16ostream_iteratorIdcSt11char_traitsIcEEET_S4_
struct std__ostream_iterator_double__char__std__char_traits_char__ std__ostream_iterator_double__char__std__char_traits_char____std____niter_base_std__ostream_iterator_double__char__std__char_traits_char_____(struct std__ostream_iterator_double__char__std__char_traits_char__ v222) {
bb223:
  struct std__ostream_iterator_double__char__std__char_traits_char__ __it224;
  struct std__ostream_iterator_double__char__std__char_traits_char__ __retval225;
  __it224 = v222;
  std__ostream_iterator_double__char__std__char_traits_char_____ostream_iterator(&__retval225, &__it224);
  struct std__ostream_iterator_double__char__std__char_traits_char__ t226 = __retval225;
  return t226;
}

// function: _ZSt13__copy_move_aILb0ESt23_Rb_tree_const_iteratorIdESt16ostream_iteratorIdcSt11char_traitsIcEEET1_T0_S7_S6_
struct std__ostream_iterator_double__char__std__char_traits_char__ std__ostream_iterator_double__char__std__char_traits_char____std____copy_move_a_false__std___Rb_tree_const_iterator_double___std__ostream_iterator_double__char__std__char_traits_char_____(struct std___Rb_tree_const_iterator_double_ v227, struct std___Rb_tree_const_iterator_double_ v228, struct std__ostream_iterator_double__char__std__char_traits_char__ v229) {
bb230:
  struct std___Rb_tree_const_iterator_double_ __first231;
  struct std___Rb_tree_const_iterator_double_ __last232;
  struct std__ostream_iterator_double__char__std__char_traits_char__ __result233;
  struct std__ostream_iterator_double__char__std__char_traits_char__ __retval234;
  struct std__ostream_iterator_double__char__std__char_traits_char__ agg_tmp0235;
  struct std___Rb_tree_const_iterator_double_ agg_tmp1236;
  struct std___Rb_tree_const_iterator_double_ agg_tmp2237;
  struct std___Rb_tree_const_iterator_double_ agg_tmp3238;
  struct std___Rb_tree_const_iterator_double_ agg_tmp4239;
  struct std__ostream_iterator_double__char__std__char_traits_char__ agg_tmp5240;
  struct std__ostream_iterator_double__char__std__char_traits_char__ agg_tmp6241;
  __first231 = v227;
  __last232 = v228;
  __result233 = v229;
  agg_tmp2237 = __first231; // copy
  struct std___Rb_tree_const_iterator_double_ t242 = agg_tmp2237;
  struct std___Rb_tree_const_iterator_double_ r243 = std___Rb_tree_const_iterator_double__std____niter_base_std___Rb_tree_const_iterator_double___(t242);
  agg_tmp1236 = r243;
  agg_tmp4239 = __last232; // copy
  struct std___Rb_tree_const_iterator_double_ t244 = agg_tmp4239;
  struct std___Rb_tree_const_iterator_double_ r245 = std___Rb_tree_const_iterator_double__std____niter_base_std___Rb_tree_const_iterator_double___(t244);
  agg_tmp3238 = r245;
  std__ostream_iterator_double__char__std__char_traits_char_____ostream_iterator(&agg_tmp6241, &__result233);
  struct std__ostream_iterator_double__char__std__char_traits_char__ t246 = agg_tmp6241;
  struct std__ostream_iterator_double__char__std__char_traits_char__ r247 = std__ostream_iterator_double__char__std__char_traits_char____std____niter_base_std__ostream_iterator_double__char__std__char_traits_char_____(t246);
  agg_tmp5240 = r247;
  struct std___Rb_tree_const_iterator_double_ t248 = agg_tmp1236;
  struct std___Rb_tree_const_iterator_double_ t249 = agg_tmp3238;
  struct std__ostream_iterator_double__char__std__char_traits_char__ t250 = agg_tmp5240;
  struct std__ostream_iterator_double__char__std__char_traits_char__ r251 = std__ostream_iterator_double__char__std__char_traits_char____std____copy_move_a1_false__std___Rb_tree_const_iterator_double___std__ostream_iterator_double__char__std__char_traits_char_____(t248, t249, t250);
  if (__cir_exc_active) {
    struct std__ostream_iterator_double__char__std__char_traits_char__ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  agg_tmp0235 = r251;
  struct std__ostream_iterator_double__char__std__char_traits_char__ t252 = agg_tmp0235;
  struct std__ostream_iterator_double__char__std__char_traits_char__ r253 = std__ostream_iterator_double__char__std__char_traits_char____std____niter_wrap_std__ostream_iterator_double__char__std__char_traits_char_____(&__result233, t252);
  if (__cir_exc_active) {
    struct std__ostream_iterator_double__char__std__char_traits_char__ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval234 = r253;
  struct std__ostream_iterator_double__char__std__char_traits_char__ t254 = __retval234;
  return t254;
}

// function: _ZSt12__miter_baseISt23_Rb_tree_const_iteratorIdEET_S2_
struct std___Rb_tree_const_iterator_double_ std___Rb_tree_const_iterator_double__std____miter_base_std___Rb_tree_const_iterator_double___(struct std___Rb_tree_const_iterator_double_ v255) {
bb256:
  struct std___Rb_tree_const_iterator_double_ __it257;
  struct std___Rb_tree_const_iterator_double_ __retval258;
  __it257 = v255;
  __retval258 = __it257; // copy
  struct std___Rb_tree_const_iterator_double_ t259 = __retval258;
  return t259;
}

// function: _ZSt4copyISt23_Rb_tree_const_iteratorIdESt16ostream_iteratorIdcSt11char_traitsIcEEET0_T_S7_S6_
struct std__ostream_iterator_double__char__std__char_traits_char__ std__ostream_iterator_double__char__std__char_traits_char____std__copy_std___Rb_tree_const_iterator_double___std__ostream_iterator_double__char__std__char_traits_char_____(struct std___Rb_tree_const_iterator_double_ v260, struct std___Rb_tree_const_iterator_double_ v261, struct std__ostream_iterator_double__char__std__char_traits_char__ v262) {
bb263:
  struct std___Rb_tree_const_iterator_double_ __first264;
  struct std___Rb_tree_const_iterator_double_ __last265;
  struct std__ostream_iterator_double__char__std__char_traits_char__ __result266;
  struct std__ostream_iterator_double__char__std__char_traits_char__ __retval267;
  struct std___Rb_tree_const_iterator_double_ agg_tmp0268;
  struct std___Rb_tree_const_iterator_double_ agg_tmp1269;
  struct std___Rb_tree_const_iterator_double_ agg_tmp2270;
  struct std___Rb_tree_const_iterator_double_ agg_tmp3271;
  struct std__ostream_iterator_double__char__std__char_traits_char__ agg_tmp4272;
  __first264 = v260;
  __last265 = v261;
  __result266 = v262;
  agg_tmp1269 = __first264; // copy
  struct std___Rb_tree_const_iterator_double_ t273 = agg_tmp1269;
  struct std___Rb_tree_const_iterator_double_ r274 = std___Rb_tree_const_iterator_double__std____miter_base_std___Rb_tree_const_iterator_double___(t273);
  if (__cir_exc_active) {
    struct std__ostream_iterator_double__char__std__char_traits_char__ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  agg_tmp0268 = r274;
  agg_tmp3271 = __last265; // copy
  struct std___Rb_tree_const_iterator_double_ t275 = agg_tmp3271;
  struct std___Rb_tree_const_iterator_double_ r276 = std___Rb_tree_const_iterator_double__std____miter_base_std___Rb_tree_const_iterator_double___(t275);
  if (__cir_exc_active) {
    struct std__ostream_iterator_double__char__std__char_traits_char__ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  agg_tmp2270 = r276;
  std__ostream_iterator_double__char__std__char_traits_char_____ostream_iterator(&agg_tmp4272, &__result266);
  struct std___Rb_tree_const_iterator_double_ t277 = agg_tmp0268;
  struct std___Rb_tree_const_iterator_double_ t278 = agg_tmp2270;
  struct std__ostream_iterator_double__char__std__char_traits_char__ t279 = agg_tmp4272;
  struct std__ostream_iterator_double__char__std__char_traits_char__ r280 = std__ostream_iterator_double__char__std__char_traits_char____std____copy_move_a_false__std___Rb_tree_const_iterator_double___std__ostream_iterator_double__char__std__char_traits_char_____(t277, t278, t279);
  if (__cir_exc_active) {
    struct std__ostream_iterator_double__char__std__char_traits_char__ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval267 = r280;
  struct std__ostream_iterator_double__char__std__char_traits_char__ t281 = __retval267;
  return t281;
}

// function: _ZNSt23_Rb_tree_const_iteratorIdEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_const_iterator_double____Rb_tree_const_iterator(struct std___Rb_tree_const_iterator_double_* v282, struct std___Rb_tree_node_base* v283) {
bb284:
  struct std___Rb_tree_const_iterator_double_* this285;
  struct std___Rb_tree_node_base* __x286;
  this285 = v282;
  __x286 = v283;
  struct std___Rb_tree_const_iterator_double_* t287 = this285;
  struct std___Rb_tree_node_base* t288 = __x286;
  t287->_M_node = t288;
  return;
}

// function: _ZNKSt8_Rb_treeIddSt9_IdentityIdESt4lessIdESaIdEE5beginEv
struct std___Rb_tree_const_iterator_double_ std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_____begin___const(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* v289) {
bb290:
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* this291;
  struct std___Rb_tree_const_iterator_double_ __retval292;
  this291 = v289;
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* t293 = this291;
  struct std___Rb_tree_header* base294 = (struct std___Rb_tree_header*)((char *)&(t293->_M_impl) + 8);
  struct std___Rb_tree_node_base* t295 = base294->_M_header._M_left;
  std___Rb_tree_const_iterator_double____Rb_tree_const_iterator(&__retval292, t295);
  struct std___Rb_tree_const_iterator_double_ t296 = __retval292;
  return t296;
}

// function: _ZNKSt3setIdSt4lessIdESaIdEE5beginEv
struct std___Rb_tree_const_iterator_double_ std__set_double__std__less_double___std__allocator_double_____begin___const(struct std__set_double__std__less_double___std__allocator_double__* v297) {
bb298:
  struct std__set_double__std__less_double___std__allocator_double__* this299;
  struct std___Rb_tree_const_iterator_double_ __retval300;
  this299 = v297;
  struct std__set_double__std__less_double___std__allocator_double__* t301 = this299;
  struct std___Rb_tree_const_iterator_double_ r302 = std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_____begin___const(&t301->_M_t);
  __retval300 = r302;
  struct std___Rb_tree_const_iterator_double_ t303 = __retval300;
  return t303;
}

// function: _ZNKSt8_Rb_treeIddSt9_IdentityIdESt4lessIdESaIdEE3endEv
struct std___Rb_tree_const_iterator_double_ std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_____end___const(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* v304) {
bb305:
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* this306;
  struct std___Rb_tree_const_iterator_double_ __retval307;
  this306 = v304;
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* t308 = this306;
  struct std___Rb_tree_node_base* r309 = std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_end___const(t308);
  std___Rb_tree_const_iterator_double____Rb_tree_const_iterator(&__retval307, r309);
  struct std___Rb_tree_const_iterator_double_ t310 = __retval307;
  return t310;
}

// function: _ZNKSt3setIdSt4lessIdESaIdEE3endEv
struct std___Rb_tree_const_iterator_double_ std__set_double__std__less_double___std__allocator_double_____end___const(struct std__set_double__std__less_double___std__allocator_double__* v311) {
bb312:
  struct std__set_double__std__less_double___std__allocator_double__* this313;
  struct std___Rb_tree_const_iterator_double_ __retval314;
  this313 = v311;
  struct std__set_double__std__less_double___std__allocator_double__* t315 = this313;
  struct std___Rb_tree_const_iterator_double_ r316 = std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_____end___const(&t315->_M_t);
  __retval314 = r316;
  struct std___Rb_tree_const_iterator_double_ t317 = __retval314;
  return t317;
}

// function: _ZNSt16ostream_iteratorIdcSt11char_traitsIcEEC2ERKS2_
void std__ostream_iterator_double__char__std__char_traits_char_____ostream_iterator(struct std__ostream_iterator_double__char__std__char_traits_char__* v318, struct std__ostream_iterator_double__char__std__char_traits_char__* v319) {
bb320:
  struct std__ostream_iterator_double__char__std__char_traits_char__* this321;
  struct std__ostream_iterator_double__char__std__char_traits_char__* __obj322;
  this321 = v318;
  __obj322 = v319;
  struct std__ostream_iterator_double__char__std__char_traits_char__* t323 = this321;
  struct std__iterator_std__output_iterator_tag__void__void__void__void_* base324 = (struct std__iterator_std__output_iterator_tag__void__void__void__void_*)((char *)t323 + 0);
  struct std__ostream_iterator_double__char__std__char_traits_char__* t325 = __obj322;
  struct std__basic_ostream_char__std__char_traits_char__* t326 = t325->_M_stream;
  t323->_M_stream = t326;
  struct std__ostream_iterator_double__char__std__char_traits_char__* t327 = __obj322;
  char* t328 = t327->_M_string;
  t323->_M_string = t328;
  return;
}

// function: _ZNSt4pairISt23_Rb_tree_const_iteratorIdEbEC2EvQaa26is_default_constructible_vIT_E26is_default_constructible_vIT0_E
void _ZNSt4pairISt23_Rb_tree_const_iteratorIdEbEC2EvQaa26is_default_constructible_vIT_E26is_default_constructible_vIT0_E(struct std__pair_std___Rb_tree_const_iterator_double___bool_* v329) {
bb330:
  struct std__pair_std___Rb_tree_const_iterator_double___bool_* this331;
  this331 = v329;
  struct std__pair_std___Rb_tree_const_iterator_double___bool_* t332 = this331;
  struct std____pair_base_std___Rb_tree_const_iterator_double___bool_* base333 = (struct std____pair_base_std___Rb_tree_const_iterator_double___bool_*)((char *)t332 + 0);
  std___Rb_tree_const_iterator_double____Rb_tree_const_iterator_3(&t332->first);
  _Bool c334 = 0;
  t332->second = c334;
  return;
}

// function: _ZSt12construct_atIdJdEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
double* _ZSt12construct_atIdJdEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(double* v335, double* v336) {
bb337:
  double* __location338;
  double* __args339;
  double* __retval340;
  void* __loc341;
  __location338 = v335;
  __args339 = v336;
  double* t342 = __location338;
  void* cast343 = (void*)t342;
  __loc341 = cast343;
    void* t344 = __loc341;
    double* cast345 = (double*)t344;
    double* t346 = __args339;
    double t347 = *t346;
    *cast345 = t347;
    __retval340 = cast345;
    double* t348 = __retval340;
    return t348;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIdEEE9constructIdJdEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_double_______construct_double__double_(struct std__allocator_std___Rb_tree_node_double__* v349, double* v350, double* v351) {
bb352:
  struct std__allocator_std___Rb_tree_node_double__* __a353;
  double* __p354;
  double* __args355;
  __a353 = v349;
  __p354 = v350;
  __args355 = v351;
  double* t356 = __p354;
  double* t357 = __args355;
  double* r358 = _ZSt12construct_atIdJdEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t356, t357);
  return;
}

// function: _ZNSt8_Rb_treeIddSt9_IdentityIdESt4lessIdESaIdEE17_M_construct_nodeIJdEEEvPSt13_Rb_tree_nodeIdEDpOT_
void void_std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_construct_node_double_(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* v359, struct std___Rb_tree_node_double_* v360, double* v361) {
bb362:
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* this363;
  struct std___Rb_tree_node_double_* __node364;
  double* __args365;
  this363 = v359;
  __node364 = v360;
  __args365 = v361;
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* t366 = this363;
      struct std__allocator_std___Rb_tree_node_double__* r368 = std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_get_Node_allocator(t366);
      struct std___Rb_tree_node_double_* t369 = __node364;
      double* r370 = std___Rb_tree_node_double____M_valptr(t369);
      if (__cir_exc_active) {
        goto cir_try_dispatch367;
      }
      double* t371 = __args365;
      void_std__allocator_traits_std__allocator_std___Rb_tree_node_double_______construct_double__double_(r368, r370, t371);
    cir_try_dispatch367: ;
    if (__cir_exc_active) {
    {
      int ca_tok372 = 0;
      void* ca_exn373 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Rb_tree_node_double_* t374 = __node364;
        struct std___Rb_tree_node_double_* t375 = __node364;
        std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_put_node(t366, t375);
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

// function: _ZNSt8_Rb_treeIddSt9_IdentityIdESt4lessIdESaIdEE14_M_create_nodeIJdEEEPSt13_Rb_tree_nodeIdEDpOT_
struct std___Rb_tree_node_double_* std___Rb_tree_node_double___std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_create_node_double_(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* v376, double* v377) {
bb378:
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* this379;
  double* __args380;
  struct std___Rb_tree_node_double_* __retval381;
  struct std___Rb_tree_node_double_* __tmp382;
  this379 = v376;
  __args380 = v377;
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* t383 = this379;
  struct std___Rb_tree_node_double_* r384 = std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_get_node(t383);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_double_* __cir_eh_ret = (struct std___Rb_tree_node_double_*)0;
    return __cir_eh_ret;
  }
  __tmp382 = r384;
  struct std___Rb_tree_node_double_* t385 = __tmp382;
  double* t386 = __args380;
  void_std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_construct_node_double_(t383, t385, t386);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_double_* __cir_eh_ret = (struct std___Rb_tree_node_double_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_double_* t387 = __tmp382;
  __retval381 = t387;
  struct std___Rb_tree_node_double_* t388 = __retval381;
  return t388;
}

// function: _ZNKSt8_Rb_treeIddSt9_IdentityIdESt4lessIdESaIdEE11_Alloc_nodeclIdEEPSt13_Rb_tree_nodeIdEOT_
struct std___Rb_tree_node_double_* std___Rb_tree_node_double___std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______Alloc_node__operator___double__double____const(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_____Alloc_node* v389, double* v390) {
bb391:
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_____Alloc_node* this392;
  double* __arg393;
  struct std___Rb_tree_node_double_* __retval394;
  this392 = v389;
  __arg393 = v390;
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_____Alloc_node* t395 = this392;
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* t396 = t395->_M_t;
  double* t397 = __arg393;
  struct std___Rb_tree_node_double_* r398 = std___Rb_tree_node_double___std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_create_node_double_(t396, t397);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_double_* __cir_eh_ret = (struct std___Rb_tree_node_double_*)0;
    return __cir_eh_ret;
  }
  __retval394 = r398;
  struct std___Rb_tree_node_double_* t399 = __retval394;
  return t399;
}

// function: _ZNSt8_Rb_treeIddSt9_IdentityIdESt4lessIdESaIdEE10_M_insert_IdNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIdEPSt18_Rb_tree_node_baseSB_OT_RT0_
struct std___Rb_tree_iterator_double_ std___Rb_tree_iterator_double__std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_insert__double__std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______Alloc_node_(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* v400, struct std___Rb_tree_node_base* v401, struct std___Rb_tree_node_base* v402, double* v403, struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_____Alloc_node* v404) {
bb405:
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* this406;
  struct std___Rb_tree_node_base* __x407;
  struct std___Rb_tree_node_base* __p408;
  double* __v409;
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_____Alloc_node* __node_gen410;
  struct std___Rb_tree_iterator_double_ __retval411;
  _Bool __insert_left412;
  struct std___Rb_tree_node_base* __z413;
  this406 = v400;
  __x407 = v401;
  __p408 = v402;
  __v409 = v403;
  __node_gen410 = v404;
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* t414 = this406;
  struct std___Rb_tree_node_base* t415 = __x407;
  _Bool cast416 = (_Bool)t415;
  _Bool ternary417;
  if (cast416) {
    _Bool c418 = 1;
    ternary417 = (_Bool)c418;
  } else {
    struct std___Rb_tree_node_base* t419 = __p408;
    struct std___Rb_tree_node_base* r420 = std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_end___const(t414);
    _Bool c421 = ((t419 == r420)) ? 1 : 0;
    ternary417 = (_Bool)c421;
  }
  _Bool ternary422;
  if (ternary417) {
    _Bool c423 = 1;
    ternary422 = (_Bool)c423;
  } else {
    struct std___Identity_double_ ref_tmp0424;
    struct std___Rb_tree_key_compare_std__less_double__* base425 = (struct std___Rb_tree_key_compare_std__less_double__*)((char *)&(t414->_M_impl) + 0);
    struct std__less_double_* cast426 = (struct std__less_double_*)base425;
    double* t427 = __v409;
    double* r428 = std___Identity_double___operator___double___const(&ref_tmp0424, t427);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_double_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    struct std___Rb_tree_node_base* t429 = __p408;
    double* r430 = std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______S_key(t429);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_double_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r431 = std__less_double___operator___double_const___double_const___const(cast426, r428, r430);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_double_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    ternary422 = (_Bool)r431;
  }
  __insert_left412 = ternary422;
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_____Alloc_node* t432 = __node_gen410;
  double* t433 = __v409;
  struct std___Rb_tree_node_double_* r434 = std___Rb_tree_node_double___std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______Alloc_node__operator___double__double____const(t432, t433);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_double_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* base435 = (struct std___Rb_tree_node_base*)((char *)r434 + 0);
  struct std___Rb_tree_node_base* r436 = std___Rb_tree_node_base___M_base_ptr___const(base435);
  __z413 = r436;
  _Bool t437 = __insert_left412;
  struct std___Rb_tree_node_base* t438 = __z413;
  struct std___Rb_tree_node_base* t439 = __p408;
  struct std___Rb_tree_header* base440 = (struct std___Rb_tree_header*)((char *)&(t414->_M_impl) + 8);
  std____rb_tree___Node_traits_double__double_____S_insert_and_rebalance(t437, t438, t439, &base440->_M_header);
  struct std___Rb_tree_header* base441 = (struct std___Rb_tree_header*)((char *)&(t414->_M_impl) + 8);
  unsigned long t442 = base441->_M_node_count;
  unsigned long u443 = t442 + 1;
  base441->_M_node_count = u443;
  struct std___Rb_tree_node_base* t444 = __z413;
  std___Rb_tree_iterator_double____Rb_tree_iterator(&__retval411, t444);
  struct std___Rb_tree_iterator_double_ t445 = __retval411;
  return t445;
}

// function: _ZNSt4pairISt17_Rb_tree_iteratorIdEbEC2IS1_bQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_
void _ZNSt4pairISt17_Rb_tree_iteratorIdEbEC2IS1_bQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(struct std__pair_std___Rb_tree_iterator_double___bool_* v446, struct std___Rb_tree_iterator_double_* v447, _Bool* v448) {
bb449:
  struct std__pair_std___Rb_tree_iterator_double___bool_* this450;
  struct std___Rb_tree_iterator_double_* __x451;
  _Bool* __y452;
  this450 = v446;
  __x451 = v447;
  __y452 = v448;
  struct std__pair_std___Rb_tree_iterator_double___bool_* t453 = this450;
  struct std____pair_base_std___Rb_tree_iterator_double___bool_* base454 = (struct std____pair_base_std___Rb_tree_iterator_double___bool_*)((char *)t453 + 0);
  struct std___Rb_tree_iterator_double_* t455 = __x451;
  t453->first = *t455; // copy
  _Bool* t456 = __y452;
  _Bool t457 = *t456;
  t453->second = t457;
  return;
}

// function: _ZNSt8_Rb_treeIddSt9_IdentityIdESt4lessIdESaIdEE16_M_insert_uniqueIdEESt4pairISt17_Rb_tree_iteratorIdEbEOT_
struct std__pair_std___Rb_tree_iterator_double___bool_ std__pair_std___Rb_tree_iterator_double___bool__std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_insert_unique_double_(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* v458, double* v459) {
bb460:
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* this461;
  double* __v462;
  struct std__pair_std___Rb_tree_iterator_double___bool_ __retval463;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __res464;
  struct std___Identity_double_ ref_tmp0465;
  struct std___Rb_tree_iterator_double_ ref_tmp3466;
  _Bool ref_tmp4467;
  this461 = v458;
  __v462 = v459;
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* t468 = this461;
  double* t469 = __v462;
  double* r470 = std___Identity_double___operator___double___const(&ref_tmp0465, t469);
  if (__cir_exc_active) {
    struct std__pair_std___Rb_tree_iterator_double___bool_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r471 = std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_get_insert_unique_pos(t468, r470);
  if (__cir_exc_active) {
    struct std__pair_std___Rb_tree_iterator_double___bool_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __res464 = r471;
    struct std___Rb_tree_node_base* t472 = __res464.second;
    _Bool cast473 = (_Bool)t472;
    if (cast473) {
      struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_____Alloc_node __an474;
      struct std___Rb_tree_iterator_double_ ref_tmp1475;
      _Bool ref_tmp2476;
      std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______Alloc_node___Alloc_node(&__an474, t468);
      if (__cir_exc_active) {
        struct std__pair_std___Rb_tree_iterator_double___bool_ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_base* t477 = __res464.first;
      struct std___Rb_tree_node_base* t478 = __res464.second;
      double* t479 = __v462;
      struct std___Rb_tree_iterator_double_ r480 = std___Rb_tree_iterator_double__std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_insert__double__std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______Alloc_node_(t468, t477, t478, t479, &__an474);
      if (__cir_exc_active) {
        struct std__pair_std___Rb_tree_iterator_double___bool_ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      ref_tmp1475 = r480;
      _Bool c481 = 1;
      ref_tmp2476 = c481;
      _ZNSt4pairISt17_Rb_tree_iteratorIdEbEC2IS1_bQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(&__retval463, &ref_tmp1475, &ref_tmp2476);
      struct std__pair_std___Rb_tree_iterator_double___bool_ t482 = __retval463;
      return t482;
    }
  struct std___Rb_tree_node_base* t483 = __res464.first;
  std___Rb_tree_iterator_double____Rb_tree_iterator(&ref_tmp3466, t483);
  _Bool c484 = 0;
  ref_tmp4467 = c484;
  _ZNSt4pairISt17_Rb_tree_iteratorIdEbEC2IS1_bQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS4_S5_EEEEOT_OT0_(&__retval463, &ref_tmp3466, &ref_tmp4467);
  struct std__pair_std___Rb_tree_iterator_double___bool_ t485 = __retval463;
  return t485;
}

// function: _ZNSt4pairISt23_Rb_tree_const_iteratorIdEbEC2IRSt17_Rb_tree_iteratorIdERbQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS8_S9_EEEEOT_OT0_
void _ZNSt4pairISt23_Rb_tree_const_iteratorIdEbEC2IRSt17_Rb_tree_iteratorIdERbQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS8_S9_EEEEOT_OT0_(struct std__pair_std___Rb_tree_const_iterator_double___bool_* v486, struct std___Rb_tree_iterator_double_* v487, _Bool* v488) {
bb489:
  struct std__pair_std___Rb_tree_const_iterator_double___bool_* this490;
  struct std___Rb_tree_iterator_double_* __x491;
  _Bool* __y492;
  this490 = v486;
  __x491 = v487;
  __y492 = v488;
  struct std__pair_std___Rb_tree_const_iterator_double___bool_* t493 = this490;
  struct std____pair_base_std___Rb_tree_const_iterator_double___bool_* base494 = (struct std____pair_base_std___Rb_tree_const_iterator_double___bool_*)((char *)t493 + 0);
  struct std___Rb_tree_iterator_double_* t495 = __x491;
  std___Rb_tree_const_iterator_double____Rb_tree_const_iterator_2(&t493->first, t495);
  _Bool* t496 = __y492;
  _Bool t497 = *t496;
  t493->second = t497;
  return;
}

// function: _ZNSt3setIdSt4lessIdESaIdEE6insertEOd
struct std__pair_std___Rb_tree_const_iterator_double___bool_ std__set_double__std__less_double___std__allocator_double_____insert(struct std__set_double__std__less_double___std__allocator_double__* v498, double* v499) {
bb500:
  struct std__set_double__std__less_double___std__allocator_double__* this501;
  double* __x502;
  struct std__pair_std___Rb_tree_const_iterator_double___bool_ __retval503;
  struct std__pair_std___Rb_tree_iterator_double___bool_ __p504;
  this501 = v498;
  __x502 = v499;
  struct std__set_double__std__less_double___std__allocator_double__* t505 = this501;
  double* t506 = __x502;
  struct std__pair_std___Rb_tree_iterator_double___bool_ r507 = std__pair_std___Rb_tree_iterator_double___bool__std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_insert_unique_double_(&t505->_M_t, t506);
  if (__cir_exc_active) {
    struct std__pair_std___Rb_tree_const_iterator_double___bool_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __p504 = r507;
  _ZNSt4pairISt23_Rb_tree_const_iteratorIdEbEC2IRSt17_Rb_tree_iteratorIdERbQaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS8_S9_EEEEOT_OT0_(&__retval503, &__p504.first, &__p504.second);
  struct std__pair_std___Rb_tree_const_iterator_double___bool_ t508 = __retval503;
  return t508;
}

// function: _ZNSt23_Rb_tree_const_iteratorIdEaSEOS0_
struct std___Rb_tree_const_iterator_double_* std___Rb_tree_const_iterator_double___operator_(struct std___Rb_tree_const_iterator_double_* v509, struct std___Rb_tree_const_iterator_double_* v510) {
bb511:
  struct std___Rb_tree_const_iterator_double_* this512;
  struct std___Rb_tree_const_iterator_double_* unnamed513;
  struct std___Rb_tree_const_iterator_double_* __retval514;
  this512 = v509;
  unnamed513 = v510;
  struct std___Rb_tree_const_iterator_double_* t515 = this512;
  struct std___Rb_tree_const_iterator_double_* t516 = unnamed513;
  struct std___Rb_tree_node_base* t517 = t516->_M_node;
  t515->_M_node = t517;
  __retval514 = t515;
  struct std___Rb_tree_const_iterator_double_* t518 = __retval514;
  return t518;
}

// function: _ZNSt4pairISt23_Rb_tree_const_iteratorIdEbEaSEOS2_Qcl13_S_assignableIT_T0_EE
struct std__pair_std___Rb_tree_const_iterator_double___bool_* _ZNSt4pairISt23_Rb_tree_const_iteratorIdEbEaSEOS2_Qcl13_S_assignableIT_T0_EE(struct std__pair_std___Rb_tree_const_iterator_double___bool_* v519, struct std__pair_std___Rb_tree_const_iterator_double___bool_* v520) {
bb521:
  struct std__pair_std___Rb_tree_const_iterator_double___bool_* this522;
  struct std__pair_std___Rb_tree_const_iterator_double___bool_* __p523;
  struct std__pair_std___Rb_tree_const_iterator_double___bool_* __retval524;
  this522 = v519;
  __p523 = v520;
  struct std__pair_std___Rb_tree_const_iterator_double___bool_* t525 = this522;
  struct std__pair_std___Rb_tree_const_iterator_double___bool_* t526 = __p523;
  struct std___Rb_tree_const_iterator_double_* r527 = std___Rb_tree_const_iterator_double___operator_(&t525->first, &t526->first);
  struct std__pair_std___Rb_tree_const_iterator_double___bool_* t528 = __p523;
  _Bool t529 = t528->second;
  t525->second = t529;
  __retval524 = t525;
  struct std__pair_std___Rb_tree_const_iterator_double___bool_* t530 = __retval524;
  return t530;
}

// function: _ZNSolsEd
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v531, double v532) {
bb533:
  struct std__basic_ostream_char__std__char_traits_char__* this534;
  double __f535;
  struct std__basic_ostream_char__std__char_traits_char__* __retval536;
  this534 = v531;
  __f535 = v532;
  struct std__basic_ostream_char__std__char_traits_char__* t537 = this534;
  double t538 = __f535;
  struct std__basic_ostream_char__std__char_traits_char__* r539 = std__ostream__std__ostream___M_insert_double_(t537, t538);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval536 = r539;
  struct std__basic_ostream_char__std__char_traits_char__* t540 = __retval536;
  return t540;
}

// function: _ZNKSt23_Rb_tree_const_iteratorIdEdeEv
double* std___Rb_tree_const_iterator_double___operator____const(struct std___Rb_tree_const_iterator_double_* v541) {
bb542:
  struct std___Rb_tree_const_iterator_double_* this543;
  double* __retval544;
  this543 = v541;
  struct std___Rb_tree_const_iterator_double_* t545 = this543;
  struct std___Rb_tree_node_base* t546 = t545->_M_node;
  struct std___Rb_tree_node_double_* derived547 = ((t546) ? (struct std___Rb_tree_node_double_*)((char *)t546 - 0) : (struct std___Rb_tree_node_double_*)0);
  double* r548 = std___Rb_tree_node_double____M_valptr___const(derived547);
  if (__cir_exc_active) {
    double* __cir_eh_ret = (double*)0;
    return __cir_eh_ret;
  }
  __retval544 = r548;
  double* t549 = __retval544;
  return t549;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v550, void* v551) {
bb552:
  struct std__basic_ostream_char__std__char_traits_char__* this553;
  void* __pf554;
  struct std__basic_ostream_char__std__char_traits_char__* __retval555;
  this553 = v550;
  __pf554 = v551;
  struct std__basic_ostream_char__std__char_traits_char__* t556 = this553;
  void* t557 = __pf554;
  struct std__basic_ostream_char__std__char_traits_char__* r558 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t557)(t556);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval555 = r558;
  struct std__basic_ostream_char__std__char_traits_char__* t559 = __retval555;
  return t559;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v560) {
bb561:
  struct std__basic_ostream_char__std__char_traits_char__* __os562;
  struct std__basic_ostream_char__std__char_traits_char__* __retval563;
  __os562 = v560;
  struct std__basic_ostream_char__std__char_traits_char__* t564 = __os562;
  struct std__basic_ostream_char__std__char_traits_char__* r565 = std__ostream__flush(t564);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval563 = r565;
  struct std__basic_ostream_char__std__char_traits_char__* t566 = __retval563;
  return t566;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v567) {
bb568:
  struct std__ctype_char_* __f569;
  struct std__ctype_char_* __retval570;
  __f569 = v567;
    struct std__ctype_char_* t571 = __f569;
    _Bool cast572 = (_Bool)t571;
    _Bool u573 = !cast572;
    if (u573) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t574 = __f569;
  __retval570 = t574;
  struct std__ctype_char_* t575 = __retval570;
  return t575;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v576, char v577) {
bb578:
  struct std__ctype_char_* this579;
  char __c580;
  char __retval581;
  this579 = v576;
  __c580 = v577;
  struct std__ctype_char_* t582 = this579;
    char t583 = t582->_M_widen_ok;
    _Bool cast584 = (_Bool)t583;
    if (cast584) {
      char t585 = __c580;
      unsigned char cast586 = (unsigned char)t585;
      unsigned long cast587 = (unsigned long)cast586;
      char t588 = t582->_M_widen[cast587];
      __retval581 = t588;
      char t589 = __retval581;
      return t589;
    }
  std__ctype_char____M_widen_init___const(t582);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t590 = __c580;
  void** v591 = (void**)t582;
  void* v592 = *((void**)v591);
  char vcall595 = (char)__VERIFIER_virtual_call_char_char(t582, 6, t590);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval581 = vcall595;
  char t596 = __retval581;
  return t596;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v597, char v598) {
bb599:
  struct std__basic_ios_char__std__char_traits_char__* this600;
  char __c601;
  char __retval602;
  this600 = v597;
  __c601 = v598;
  struct std__basic_ios_char__std__char_traits_char__* t603 = this600;
  struct std__ctype_char_* t604 = t603->_M_ctype;
  struct std__ctype_char_* r605 = std__ctype_char__const__std____check_facet_std__ctype_char___(t604);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t606 = __c601;
  char r607 = std__ctype_char___widen_char__const(r605, t606);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval602 = r607;
  char t608 = __retval602;
  return t608;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v609) {
bb610:
  struct std__basic_ostream_char__std__char_traits_char__* __os611;
  struct std__basic_ostream_char__std__char_traits_char__* __retval612;
  __os611 = v609;
  struct std__basic_ostream_char__std__char_traits_char__* t613 = __os611;
  struct std__basic_ostream_char__std__char_traits_char__* t614 = __os611;
  void** v615 = (void**)t614;
  void* v616 = *((void**)v615);
  unsigned char* cast617 = (unsigned char*)v616;
  long c618 = -24;
  unsigned char* ptr619 = &(cast617)[c618];
  long* cast620 = (long*)ptr619;
  long t621 = *cast620;
  unsigned char* cast622 = (unsigned char*)t614;
  unsigned char* ptr623 = &(cast622)[t621];
  struct std__basic_ostream_char__std__char_traits_char__* cast624 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr623;
  struct std__basic_ios_char__std__char_traits_char__* cast625 = (struct std__basic_ios_char__std__char_traits_char__*)cast624;
  char c626 = 10;
  char r627 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast625, c626);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r628 = std__ostream__put(t613, r627);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r629 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r628);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval612 = r629;
  struct std__basic_ostream_char__std__char_traits_char__* t630 = __retval612;
  return t630;
}

// function: _ZNSt3setIdSt4lessIdESaIdEED2Ev
void std__set_double__std__less_double___std__allocator_double______set(struct std__set_double__std__less_double___std__allocator_double__* v631) {
bb632:
  struct std__set_double__std__less_double___std__allocator_double__* this633;
  this633 = v631;
  struct std__set_double__std__less_double___std__allocator_double__* t634 = this633;
  {
    std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_______Rb_tree(&t634->_M_t);
  }
  return;
}

// function: main
int main() {
bb635:
  int __retval636;
  int SIZE637;
  double a638[5];
  struct std__set_double__std__less_double___std__allocator_double__ doubleSet639;
  struct std__ostream_iterator_double__char__std__char_traits_char__ output640;
  struct std___Rb_tree_const_iterator_double_ agg_tmp0641;
  struct std___Rb_tree_const_iterator_double_ agg_tmp1642;
  struct std__ostream_iterator_double__char__std__char_traits_char__ agg_tmp2643;
  struct std__ostream_iterator_double__char__std__char_traits_char__ agg_tmp3644;
  struct std__pair_std___Rb_tree_const_iterator_double___bool_ p645;
  struct std__pair_std___Rb_tree_const_iterator_double___bool_ ref_tmp0646;
  double ref_tmp1647;
  struct std___Rb_tree_const_iterator_double_ agg_tmp4648;
  struct std___Rb_tree_const_iterator_double_ agg_tmp5649;
  struct std__ostream_iterator_double__char__std__char_traits_char__ agg_tmp6650;
  struct std__ostream_iterator_double__char__std__char_traits_char__ agg_tmp7651;
  struct std__pair_std___Rb_tree_const_iterator_double___bool_ ref_tmp2652;
  double ref_tmp3653;
  struct std___Rb_tree_const_iterator_double_ agg_tmp8654;
  struct std___Rb_tree_const_iterator_double_ agg_tmp9655;
  struct std__ostream_iterator_double__char__std__char_traits_char__ agg_tmp10656;
  struct std__ostream_iterator_double__char__std__char_traits_char__ agg_tmp11657;
  int c658 = 0;
  __retval636 = c658;
  int c659 = 5;
  SIZE637 = c659;
  // array copy
  __builtin_memcpy(a638, __const_main_a, (unsigned long)5 * sizeof(__const_main_a[0]));
  double* cast660 = (double*)&(a638);
  double* cast661 = (double*)&(a638);
  int t662 = SIZE637;
  double* ptr663 = &(cast661)[t662];
  std__set_double__std__less_double___std__allocator_double_____set_double__(&doubleSet639, cast660, ptr663);
  if (__cir_exc_active) {
    int __cir_eh_ret = (int)0;
    return __cir_eh_ret;
  }
    char* cast664 = (char*)&(_str);
    std__ostream_iterator_double__char__std__char_traits_char_____ostream_iterator_2(&output640, &_ZSt4cout, cast664);
    char* cast665 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* r666 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast665);
    if (__cir_exc_active) {
      {
        std__set_double__std__less_double___std__allocator_double______set(&doubleSet639);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std___Rb_tree_const_iterator_double_ r667 = std__set_double__std__less_double___std__allocator_double_____begin___const(&doubleSet639);
    agg_tmp0641 = r667;
    struct std___Rb_tree_const_iterator_double_ r668 = std__set_double__std__less_double___std__allocator_double_____end___const(&doubleSet639);
    agg_tmp1642 = r668;
    std__ostream_iterator_double__char__std__char_traits_char_____ostream_iterator(&agg_tmp2643, &output640);
    struct std___Rb_tree_const_iterator_double_ t669 = agg_tmp0641;
    struct std___Rb_tree_const_iterator_double_ t670 = agg_tmp1642;
    struct std__ostream_iterator_double__char__std__char_traits_char__ t671 = agg_tmp2643;
    struct std__ostream_iterator_double__char__std__char_traits_char__ r672 = std__ostream_iterator_double__char__std__char_traits_char____std__copy_std___Rb_tree_const_iterator_double___std__ostream_iterator_double__char__std__char_traits_char_____(t669, t670, t671);
    if (__cir_exc_active) {
      {
        std__set_double__std__less_double___std__allocator_double______set(&doubleSet639);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp3644 = r672;
    _ZNSt4pairISt23_Rb_tree_const_iteratorIdEbEC2EvQaa26is_default_constructible_vIT_E26is_default_constructible_vIT0_E(&p645);
    double c673 = 0x1.b99999999999ap3;
    ref_tmp1647 = c673;
    struct std__pair_std___Rb_tree_const_iterator_double___bool_ r674 = std__set_double__std__less_double___std__allocator_double_____insert(&doubleSet639, &ref_tmp1647);
    if (__cir_exc_active) {
      {
        std__set_double__std__less_double___std__allocator_double______set(&doubleSet639);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    ref_tmp0646 = r674;
    struct std__pair_std___Rb_tree_const_iterator_double___bool_* r675 = _ZNSt4pairISt23_Rb_tree_const_iteratorIdEbEaSEOS2_Qcl13_S_assignableIT_T0_EE(&p645, &ref_tmp0646);
    char* cast676 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r677 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast676);
    if (__cir_exc_active) {
      {
        std__set_double__std__less_double___std__allocator_double______set(&doubleSet639);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    double* r678 = std___Rb_tree_const_iterator_double___operator____const(&p645.first);
    double t679 = *r678;
    struct std__basic_ostream_char__std__char_traits_char__* r680 = std__ostream__operator__(r677, t679);
    if (__cir_exc_active) {
      {
        std__set_double__std__less_double___std__allocator_double______set(&doubleSet639);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    _Bool t681 = p645.second;
    char* cast682 = (char*)&(_str_3);
    char* cast683 = (char*)&(_str_4);
    char* sel684 = t681 ? cast682 : cast683;
    struct std__basic_ostream_char__std__char_traits_char__* r685 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r680, sel684);
    if (__cir_exc_active) {
      {
        std__set_double__std__less_double___std__allocator_double______set(&doubleSet639);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    char* cast686 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* r687 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r685, cast686);
    if (__cir_exc_active) {
      {
        std__set_double__std__less_double___std__allocator_double______set(&doubleSet639);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    char* cast688 = (char*)&(_str_6);
    struct std__basic_ostream_char__std__char_traits_char__* r689 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast688);
    if (__cir_exc_active) {
      {
        std__set_double__std__less_double___std__allocator_double______set(&doubleSet639);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std___Rb_tree_const_iterator_double_ r690 = std__set_double__std__less_double___std__allocator_double_____begin___const(&doubleSet639);
    agg_tmp4648 = r690;
    struct std___Rb_tree_const_iterator_double_ r691 = std__set_double__std__less_double___std__allocator_double_____end___const(&doubleSet639);
    agg_tmp5649 = r691;
    std__ostream_iterator_double__char__std__char_traits_char_____ostream_iterator(&agg_tmp6650, &output640);
    struct std___Rb_tree_const_iterator_double_ t692 = agg_tmp4648;
    struct std___Rb_tree_const_iterator_double_ t693 = agg_tmp5649;
    struct std__ostream_iterator_double__char__std__char_traits_char__ t694 = agg_tmp6650;
    struct std__ostream_iterator_double__char__std__char_traits_char__ r695 = std__ostream_iterator_double__char__std__char_traits_char____std__copy_std___Rb_tree_const_iterator_double___std__ostream_iterator_double__char__std__char_traits_char_____(t692, t693, t694);
    if (__cir_exc_active) {
      {
        std__set_double__std__less_double___std__allocator_double______set(&doubleSet639);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp7651 = r695;
    double c696 = 0x1.3p3;
    ref_tmp3653 = c696;
    struct std__pair_std___Rb_tree_const_iterator_double___bool_ r697 = std__set_double__std__less_double___std__allocator_double_____insert(&doubleSet639, &ref_tmp3653);
    if (__cir_exc_active) {
      {
        std__set_double__std__less_double___std__allocator_double______set(&doubleSet639);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    ref_tmp2652 = r697;
    struct std__pair_std___Rb_tree_const_iterator_double___bool_* r698 = _ZNSt4pairISt23_Rb_tree_const_iteratorIdEbEaSEOS2_Qcl13_S_assignableIT_T0_EE(&p645, &ref_tmp2652);
    char* cast699 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r700 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast699);
    if (__cir_exc_active) {
      {
        std__set_double__std__less_double___std__allocator_double______set(&doubleSet639);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    double* r701 = std___Rb_tree_const_iterator_double___operator____const(&p645.first);
    double t702 = *r701;
    struct std__basic_ostream_char__std__char_traits_char__* r703 = std__ostream__operator__(r700, t702);
    if (__cir_exc_active) {
      {
        std__set_double__std__less_double___std__allocator_double______set(&doubleSet639);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    _Bool t704 = p645.second;
    char* cast705 = (char*)&(_str_3);
    char* cast706 = (char*)&(_str_4);
    char* sel707 = t704 ? cast705 : cast706;
    struct std__basic_ostream_char__std__char_traits_char__* r708 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r703, sel707);
    if (__cir_exc_active) {
      {
        std__set_double__std__less_double___std__allocator_double______set(&doubleSet639);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    char* cast709 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* r710 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r708, cast709);
    if (__cir_exc_active) {
      {
        std__set_double__std__less_double___std__allocator_double______set(&doubleSet639);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    char* cast711 = (char*)&(_str_6);
    struct std__basic_ostream_char__std__char_traits_char__* r712 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast711);
    if (__cir_exc_active) {
      {
        std__set_double__std__less_double___std__allocator_double______set(&doubleSet639);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std___Rb_tree_const_iterator_double_ r713 = std__set_double__std__less_double___std__allocator_double_____begin___const(&doubleSet639);
    agg_tmp8654 = r713;
    struct std___Rb_tree_const_iterator_double_ r714 = std__set_double__std__less_double___std__allocator_double_____end___const(&doubleSet639);
    agg_tmp9655 = r714;
    std__ostream_iterator_double__char__std__char_traits_char_____ostream_iterator(&agg_tmp10656, &output640);
    struct std___Rb_tree_const_iterator_double_ t715 = agg_tmp8654;
    struct std___Rb_tree_const_iterator_double_ t716 = agg_tmp9655;
    struct std__ostream_iterator_double__char__std__char_traits_char__ t717 = agg_tmp10656;
    struct std__ostream_iterator_double__char__std__char_traits_char__ r718 = std__ostream_iterator_double__char__std__char_traits_char____std__copy_std___Rb_tree_const_iterator_double___std__ostream_iterator_double__char__std__char_traits_char_____(t715, t716, t717);
    if (__cir_exc_active) {
      {
        std__set_double__std__less_double___std__allocator_double______set(&doubleSet639);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp11657 = r718;
    struct std__basic_ostream_char__std__char_traits_char__* r719 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__set_double__std__less_double___std__allocator_double______set(&doubleSet639);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c720 = 0;
    __retval636 = c720;
    int t721 = __retval636;
    int ret_val722 = t721;
    {
      std__set_double__std__less_double___std__allocator_double______set(&doubleSet639);
    }
    return ret_val722;
  int t723 = __retval636;
  return t723;
}

// function: _ZNSt23_Rb_tree_const_iteratorIdEC2Ev
void std___Rb_tree_const_iterator_double____Rb_tree_const_iterator_3(struct std___Rb_tree_const_iterator_double_* v724) {
bb725:
  struct std___Rb_tree_const_iterator_double_* this726;
  this726 = v724;
  struct std___Rb_tree_const_iterator_double_* t727 = this726;
  struct std___Rb_tree_node_base* c728 = ((void*)0);
  t727->_M_node = c728;
  return;
}

// function: _ZNSt8_Rb_treeIddSt9_IdentityIdESt4lessIdESaIdEED2Ev
void std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_______Rb_tree(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* v729) {
bb730:
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* this731;
  this731 = v729;
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* t732 = this731;
    struct std___Rb_tree_node_double_* r733 = std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_begin_node___const(t732);
    std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_erase(t732, r733);
    if (__cir_exc_active) {
      {
        std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______Rb_tree_impl_std__less_double___true_____Rb_tree_impl(&t732->_M_impl);
      }
      return;
    }
  {
    std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______Rb_tree_impl_std__less_double___true_____Rb_tree_impl(&t732->_M_impl);
  }
  return;
}

// function: _ZNSt13_Rb_tree_nodeIdE11_M_node_ptrEv
struct std___Rb_tree_node_double_* std___Rb_tree_node_double____M_node_ptr(struct std___Rb_tree_node_double_* v734) {
bb735:
  struct std___Rb_tree_node_double_* this736;
  struct std___Rb_tree_node_double_* __retval737;
  this736 = v734;
  struct std___Rb_tree_node_double_* t738 = this736;
  __retval737 = t738;
  struct std___Rb_tree_node_double_* t739 = __retval737;
  return t739;
}

// function: _ZNSt8_Rb_treeIddSt9_IdentityIdESt4lessIdESaIdEE8_S_rightEPSt13_Rb_tree_nodeIdE
struct std___Rb_tree_node_double_* std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______S_right(struct std___Rb_tree_node_double_* v740) {
bb741:
  struct std___Rb_tree_node_double_* __x742;
  struct std___Rb_tree_node_double_* __retval743;
  __x742 = v740;
  struct std___Rb_tree_node_double_* t744 = __x742;
  struct std___Rb_tree_node_base* base745 = (struct std___Rb_tree_node_base*)((char *)t744 + 0);
  struct std___Rb_tree_node_base* t746 = base745->_M_right;
  _Bool cast747 = (_Bool)t746;
  struct std___Rb_tree_node_double_* ternary748;
  if (cast747) {
    struct std___Rb_tree_node_double_* t749 = __x742;
    struct std___Rb_tree_node_base* base750 = (struct std___Rb_tree_node_base*)((char *)t749 + 0);
    struct std___Rb_tree_node_base* t751 = base750->_M_right;
    struct std___Rb_tree_node_double_* derived752 = (struct std___Rb_tree_node_double_*)((char *)t751 - 0);
    struct std___Rb_tree_node_double_* r753 = std___Rb_tree_node_double____M_node_ptr(derived752);
    ternary748 = (struct std___Rb_tree_node_double_*)r753;
  } else {
    struct std___Rb_tree_node_double_* c754 = ((void*)0);
    ternary748 = (struct std___Rb_tree_node_double_*)c754;
  }
  __retval743 = ternary748;
  struct std___Rb_tree_node_double_* t755 = __retval743;
  return t755;
}

// function: _ZNSt8_Rb_treeIddSt9_IdentityIdESt4lessIdESaIdEE7_S_leftEPSt13_Rb_tree_nodeIdE
struct std___Rb_tree_node_double_* std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______S_left(struct std___Rb_tree_node_double_* v756) {
bb757:
  struct std___Rb_tree_node_double_* __x758;
  struct std___Rb_tree_node_double_* __retval759;
  __x758 = v756;
  struct std___Rb_tree_node_double_* t760 = __x758;
  struct std___Rb_tree_node_base* base761 = (struct std___Rb_tree_node_base*)((char *)t760 + 0);
  struct std___Rb_tree_node_base* t762 = base761->_M_left;
  _Bool cast763 = (_Bool)t762;
  struct std___Rb_tree_node_double_* ternary764;
  if (cast763) {
    struct std___Rb_tree_node_double_* t765 = __x758;
    struct std___Rb_tree_node_base* base766 = (struct std___Rb_tree_node_base*)((char *)t765 + 0);
    struct std___Rb_tree_node_base* t767 = base766->_M_left;
    struct std___Rb_tree_node_double_* derived768 = (struct std___Rb_tree_node_double_*)((char *)t767 - 0);
    struct std___Rb_tree_node_double_* r769 = std___Rb_tree_node_double____M_node_ptr(derived768);
    ternary764 = (struct std___Rb_tree_node_double_*)r769;
  } else {
    struct std___Rb_tree_node_double_* c770 = ((void*)0);
    ternary764 = (struct std___Rb_tree_node_double_*)c770;
  }
  __retval759 = ternary764;
  struct std___Rb_tree_node_double_* t771 = __retval759;
  return t771;
}

// function: _ZSt10destroy_atIdEvPT_
void void_std__destroy_at_double_(double* v772) {
bb773:
  double* __location774;
  __location774 = v772;
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIdEEE7destroyIdEEvRS2_PT_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_double_______destroy_double_(struct std__allocator_std___Rb_tree_node_double__* v775, double* v776) {
bb777:
  struct std__allocator_std___Rb_tree_node_double__* __a778;
  double* __p779;
  __a778 = v775;
  __p779 = v776;
  double* t780 = __p779;
  void_std__destroy_at_double_(t780);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIddSt9_IdentityIdESt4lessIdESaIdEE21_M_get_Node_allocatorEv
struct std__allocator_std___Rb_tree_node_double__* std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_get_Node_allocator(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* v781) {
bb782:
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* this783;
  struct std__allocator_std___Rb_tree_node_double__* __retval784;
  this783 = v781;
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* t785 = this783;
  struct std__allocator_std___Rb_tree_node_double__* base786 = (struct std__allocator_std___Rb_tree_node_double__*)((char *)&(t785->_M_impl) + 0);
  __retval784 = base786;
  struct std__allocator_std___Rb_tree_node_double__* t787 = __retval784;
  return t787;
}

// function: _ZN9__gnu_cxx16__aligned_membufIdE7_M_addrEv
void* __gnu_cxx____aligned_membuf_double____M_addr(struct __gnu_cxx____aligned_membuf_double_* v788) {
bb789:
  struct __gnu_cxx____aligned_membuf_double_* this790;
  void* __retval791;
  this790 = v788;
  struct __gnu_cxx____aligned_membuf_double_* t792 = this790;
  void* cast793 = (void*)&(t792->_M_storage);
  __retval791 = cast793;
  void* t794 = __retval791;
  return t794;
}

// function: _ZN9__gnu_cxx16__aligned_membufIdE6_M_ptrEv
double* __gnu_cxx____aligned_membuf_double____M_ptr(struct __gnu_cxx____aligned_membuf_double_* v795) {
bb796:
  struct __gnu_cxx____aligned_membuf_double_* this797;
  double* __retval798;
  this797 = v795;
  struct __gnu_cxx____aligned_membuf_double_* t799 = this797;
  void* r800 = __gnu_cxx____aligned_membuf_double____M_addr(t799);
  double* cast801 = (double*)r800;
  __retval798 = cast801;
  double* t802 = __retval798;
  return t802;
}

// function: _ZNSt13_Rb_tree_nodeIdE9_M_valptrEv
double* std___Rb_tree_node_double____M_valptr(struct std___Rb_tree_node_double_* v803) {
bb804:
  struct std___Rb_tree_node_double_* this805;
  double* __retval806;
  this805 = v803;
  struct std___Rb_tree_node_double_* t807 = this805;
  double* r808 = __gnu_cxx____aligned_membuf_double____M_ptr(&t807->_M_storage);
  __retval806 = r808;
  double* t809 = __retval806;
  return t809;
}

// function: _ZNSt8_Rb_treeIddSt9_IdentityIdESt4lessIdESaIdEE15_M_destroy_nodeEPSt13_Rb_tree_nodeIdE
void std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_destroy_node(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* v810, struct std___Rb_tree_node_double_* v811) {
bb812:
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* this813;
  struct std___Rb_tree_node_double_* __p814;
  this813 = v810;
  __p814 = v811;
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* t815 = this813;
  struct std__allocator_std___Rb_tree_node_double__* r816 = std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_get_Node_allocator(t815);
  struct std___Rb_tree_node_double_* t817 = __p814;
  double* r818 = std___Rb_tree_node_double____M_valptr(t817);
  if (__cir_exc_active) {
    return;
  }
  void_std__allocator_traits_std__allocator_std___Rb_tree_node_double_______destroy_double_(r816, r818);
  struct std___Rb_tree_node_double_* t819 = __p814;
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb820:
  _Bool __retval821;
    _Bool c822 = 0;
    __retval821 = c822;
    _Bool t823 = __retval821;
    return t823;
  abort();
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIdEE10deallocateEPS1_m
void std____new_allocator_std___Rb_tree_node_double_____deallocate(struct std____new_allocator_std___Rb_tree_node_double__* v824, struct std___Rb_tree_node_double_* v825, unsigned long v826) {
bb827:
  struct std____new_allocator_std___Rb_tree_node_double__* this828;
  struct std___Rb_tree_node_double_* __p829;
  unsigned long __n830;
  this828 = v824;
  __p829 = v825;
  __n830 = v826;
  struct std____new_allocator_std___Rb_tree_node_double__* t831 = this828;
    unsigned long c832 = 8;
    unsigned long c833 = 16;
    _Bool c834 = ((c832 > c833)) ? 1 : 0;
    if (c834) {
      struct std___Rb_tree_node_double_* t835 = __p829;
      void* cast836 = (void*)t835;
      unsigned long t837 = __n830;
      unsigned long c838 = 40;
      unsigned long b839 = t837 * c838;
      unsigned long c840 = 8;
      operator_delete_3(cast836, b839, c840);
      return;
    }
  struct std___Rb_tree_node_double_* t841 = __p829;
  void* cast842 = (void*)t841;
  unsigned long t843 = __n830;
  unsigned long c844 = 40;
  unsigned long b845 = t843 * c844;
  operator_delete_2(cast842, b845);
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIdEE10deallocateEPS0_m
void std__allocator_std___Rb_tree_node_double_____deallocate(struct std__allocator_std___Rb_tree_node_double__* v846, struct std___Rb_tree_node_double_* v847, unsigned long v848) {
bb849:
  struct std__allocator_std___Rb_tree_node_double__* this850;
  struct std___Rb_tree_node_double_* __p851;
  unsigned long __n852;
  this850 = v846;
  __p851 = v847;
  __n852 = v848;
  struct std__allocator_std___Rb_tree_node_double__* t853 = this850;
    _Bool r854 = std____is_constant_evaluated();
    if (r854) {
      struct std___Rb_tree_node_double_* t855 = __p851;
      void* cast856 = (void*)t855;
      operator_delete(cast856);
      return;
    }
  struct std____new_allocator_std___Rb_tree_node_double__* base857 = (struct std____new_allocator_std___Rb_tree_node_double__*)((char *)t853 + 0);
  struct std___Rb_tree_node_double_* t858 = __p851;
  unsigned long t859 = __n852;
  std____new_allocator_std___Rb_tree_node_double_____deallocate(base857, t858, t859);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIdEEE10deallocateERS2_PS1_m
void std__allocator_traits_std__allocator_std___Rb_tree_node_double_______deallocate(struct std__allocator_std___Rb_tree_node_double__* v860, struct std___Rb_tree_node_double_* v861, unsigned long v862) {
bb863:
  struct std__allocator_std___Rb_tree_node_double__* __a864;
  struct std___Rb_tree_node_double_* __p865;
  unsigned long __n866;
  __a864 = v860;
  __p865 = v861;
  __n866 = v862;
  struct std__allocator_std___Rb_tree_node_double__* t867 = __a864;
  struct std___Rb_tree_node_double_* t868 = __p865;
  unsigned long t869 = __n866;
  std__allocator_std___Rb_tree_node_double_____deallocate(t867, t868, t869);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIddSt9_IdentityIdESt4lessIdESaIdEE11_M_put_nodeEPSt13_Rb_tree_nodeIdE
void std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_put_node(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* v870, struct std___Rb_tree_node_double_* v871) {
bb872:
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* this873;
  struct std___Rb_tree_node_double_* __p874;
  this873 = v870;
  __p874 = v871;
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* t875 = this873;
  struct std__allocator_std___Rb_tree_node_double__* r876 = std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_get_Node_allocator(t875);
  struct std___Rb_tree_node_double_* t877 = __p874;
  unsigned long c878 = 1;
  std__allocator_traits_std__allocator_std___Rb_tree_node_double_______deallocate(r876, t877, c878);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt8_Rb_treeIddSt9_IdentityIdESt4lessIdESaIdEE12_M_drop_nodeEPSt13_Rb_tree_nodeIdE
void std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_drop_node(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* v879, struct std___Rb_tree_node_double_* v880) {
bb881:
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* this882;
  struct std___Rb_tree_node_double_* __p883;
  this882 = v879;
  __p883 = v880;
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* t884 = this882;
  struct std___Rb_tree_node_double_* t885 = __p883;
  std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_destroy_node(t884, t885);
  struct std___Rb_tree_node_double_* t886 = __p883;
  std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_put_node(t884, t886);
  return;
}

// function: _ZNSt8_Rb_treeIddSt9_IdentityIdESt4lessIdESaIdEE8_M_eraseEPSt13_Rb_tree_nodeIdE
void std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_erase(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* v887, struct std___Rb_tree_node_double_* v888) {
bb889:
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* this890;
  struct std___Rb_tree_node_double_* __x891;
  this890 = v887;
  __x891 = v888;
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* t892 = this890;
    while (1) {
      struct std___Rb_tree_node_double_* t893 = __x891;
      _Bool cast894 = (_Bool)t893;
      if (!cast894) break;
        struct std___Rb_tree_node_double_* __y895;
        struct std___Rb_tree_node_double_* t896 = __x891;
        struct std___Rb_tree_node_double_* r897 = std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______S_right(t896);
        std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_erase(t892, r897);
        if (__cir_exc_active) {
          return;
        }
        struct std___Rb_tree_node_double_* t898 = __x891;
        struct std___Rb_tree_node_double_* r899 = std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______S_left(t898);
        if (__cir_exc_active) {
          return;
        }
        __y895 = r899;
        struct std___Rb_tree_node_double_* t900 = __x891;
        std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_drop_node(t892, t900);
        struct std___Rb_tree_node_double_* t901 = __y895;
        __x891 = t901;
    }
  return;
}

// function: _ZNKSt8_Rb_treeIddSt9_IdentityIdESt4lessIdESaIdEE13_M_begin_nodeEv
struct std___Rb_tree_node_double_* std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_begin_node___const(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* v902) {
bb903:
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* this904;
  struct std___Rb_tree_node_double_* __retval905;
  struct std___Rb_tree_node_base* __begin906;
  this904 = v902;
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* t907 = this904;
  struct std___Rb_tree_header* base908 = (struct std___Rb_tree_header*)((char *)&(t907->_M_impl) + 8);
  struct std___Rb_tree_node_base* t909 = base908->_M_header._M_parent;
  __begin906 = t909;
  struct std___Rb_tree_node_base* t910 = __begin906;
  _Bool cast911 = (_Bool)t910;
  struct std___Rb_tree_node_double_* ternary912;
  if (cast911) {
    struct std___Rb_tree_node_base* t913 = __begin906;
    struct std___Rb_tree_node_double_* derived914 = (struct std___Rb_tree_node_double_*)((char *)t913 - 0);
    struct std___Rb_tree_node_double_* r915 = std___Rb_tree_node_double____M_node_ptr(derived914);
    ternary912 = (struct std___Rb_tree_node_double_*)r915;
  } else {
    struct std___Rb_tree_node_double_* c916 = ((void*)0);
    ternary912 = (struct std___Rb_tree_node_double_*)c916;
  }
  __retval905 = ternary912;
  struct std___Rb_tree_node_double_* t917 = __retval905;
  return t917;
}

// function: _ZNSt8_Rb_treeIddSt9_IdentityIdESt4lessIdESaIdEE13_Rb_tree_implIS3_Lb1EED2Ev
void std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______Rb_tree_impl_std__less_double___true_____Rb_tree_impl(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_____Rb_tree_impl_std__less_double___true_* v918) {
bb919:
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_____Rb_tree_impl_std__less_double___true_* this920;
  this920 = v918;
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_____Rb_tree_impl_std__less_double___true_* t921 = this920;
  {
    struct std__allocator_std___Rb_tree_node_double__* base922 = (struct std__allocator_std___Rb_tree_node_double__*)((char *)t921 + 0);
    std__allocator_std___Rb_tree_node_double______allocator(base922);
  }
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIdEED2Ev
void std__allocator_std___Rb_tree_node_double______allocator(struct std__allocator_std___Rb_tree_node_double__* v923) {
bb924:
  struct std__allocator_std___Rb_tree_node_double__* this925;
  this925 = v923;
  struct std__allocator_std___Rb_tree_node_double__* t926 = this925;
  return;
}

// function: _ZNSt8_Rb_treeIddSt9_IdentityIdESt4lessIdESaIdEEC2Ev
void std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______Rb_tree(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* v927) {
bb928:
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* this929;
  this929 = v927;
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* t930 = this929;
  std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______Rb_tree_impl_std__less_double___true____Rb_tree_impl(&t930->_M_impl);
  return;
}

// function: _ZNSt8_Rb_treeIddSt9_IdentityIdESt4lessIdESaIdEE11_Alloc_nodeC2ERS5_
void std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______Alloc_node___Alloc_node(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_____Alloc_node* v931, struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* v932) {
bb933:
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_____Alloc_node* this934;
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* __t935;
  this934 = v931;
  __t935 = v932;
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_____Alloc_node* t936 = this934;
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* t937 = __t935;
  t936->_M_t = t937;
  return;
}

// function: _ZNKSt18_Rb_tree_node_base11_M_base_ptrEv
struct std___Rb_tree_node_base* std___Rb_tree_node_base___M_base_ptr___const(struct std___Rb_tree_node_base* v938) {
bb939:
  struct std___Rb_tree_node_base* this940;
  struct std___Rb_tree_node_base* __retval941;
  this940 = v938;
  struct std___Rb_tree_node_base* t942 = this940;
  __retval941 = t942;
  struct std___Rb_tree_node_base* t943 = __retval941;
  return t943;
}

// function: _ZNKSt8_Rb_treeIddSt9_IdentityIdESt4lessIdESaIdEE6_M_endEv
struct std___Rb_tree_node_base* std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_end___const(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* v944) {
bb945:
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* this946;
  struct std___Rb_tree_node_base* __retval947;
  this946 = v944;
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* t948 = this946;
  struct std___Rb_tree_header* base949 = (struct std___Rb_tree_header*)((char *)&(t948->_M_impl) + 8);
  struct std___Rb_tree_node_base* r950 = std___Rb_tree_node_base___M_base_ptr___const(&base949->_M_header);
  __retval947 = r950;
  struct std___Rb_tree_node_base* t951 = __retval947;
  return t951;
}

// function: _ZNKSt8_Rb_treeIddSt9_IdentityIdESt4lessIdESaIdEE4sizeEv
unsigned long std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_____size___const(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* v952) {
bb953:
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* this954;
  unsigned long __retval955;
  this954 = v952;
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* t956 = this954;
  struct std___Rb_tree_header* base957 = (struct std___Rb_tree_header*)((char *)&(t956->_M_impl) + 8);
  unsigned long t958 = base957->_M_node_count;
  __retval955 = t958;
  unsigned long t959 = __retval955;
  return t959;
}

// function: _ZNKSt4lessIdEclERKdS2_
_Bool std__less_double___operator___double_const___double_const___const(struct std__less_double_* v960, double* v961, double* v962) {
bb963:
  struct std__less_double_* this964;
  double* __x965;
  double* __y966;
  _Bool __retval967;
  this964 = v960;
  __x965 = v961;
  __y966 = v962;
  struct std__less_double_* t968 = this964;
  double* t969 = __x965;
  double t970 = *t969;
  double* t971 = __y966;
  double t972 = *t971;
  _Bool c973 = ((t970 < t972)) ? 1 : 0;
  __retval967 = c973;
  _Bool t974 = __retval967;
  return t974;
}

// function: _ZNKSt9_IdentityIdEclERKd
double* std___Identity_double___operator___double_const___const(struct std___Identity_double_* v975, double* v976) {
bb977:
  struct std___Identity_double_* this978;
  double* __x979;
  double* __retval980;
  this978 = v975;
  __x979 = v976;
  struct std___Identity_double_* t981 = this978;
  double* t982 = __x979;
  __retval980 = t982;
  double* t983 = __retval980;
  return t983;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIdE7_M_addrEv
void* __gnu_cxx____aligned_membuf_double____M_addr___const(struct __gnu_cxx____aligned_membuf_double_* v984) {
bb985:
  struct __gnu_cxx____aligned_membuf_double_* this986;
  void* __retval987;
  this986 = v984;
  struct __gnu_cxx____aligned_membuf_double_* t988 = this986;
  void* cast989 = (void*)&(t988->_M_storage);
  __retval987 = cast989;
  void* t990 = __retval987;
  return t990;
}

// function: _ZNK9__gnu_cxx16__aligned_membufIdE6_M_ptrEv
double* __gnu_cxx____aligned_membuf_double____M_ptr___const(struct __gnu_cxx____aligned_membuf_double_* v991) {
bb992:
  struct __gnu_cxx____aligned_membuf_double_* this993;
  double* __retval994;
  this993 = v991;
  struct __gnu_cxx____aligned_membuf_double_* t995 = this993;
  void* r996 = __gnu_cxx____aligned_membuf_double____M_addr___const(t995);
  double* cast997 = (double*)r996;
  __retval994 = cast997;
  double* t998 = __retval994;
  return t998;
}

// function: _ZNKSt13_Rb_tree_nodeIdE9_M_valptrEv
double* std___Rb_tree_node_double____M_valptr___const(struct std___Rb_tree_node_double_* v999) {
bb1000:
  struct std___Rb_tree_node_double_* this1001;
  double* __retval1002;
  this1001 = v999;
  struct std___Rb_tree_node_double_* t1003 = this1001;
  double* r1004 = __gnu_cxx____aligned_membuf_double____M_ptr___const(&t1003->_M_storage);
  __retval1002 = r1004;
  double* t1005 = __retval1002;
  return t1005;
}

// function: _ZNSt8_Rb_treeIddSt9_IdentityIdESt4lessIdESaIdEE6_S_keyERKSt13_Rb_tree_nodeIdE
double* std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______S_key_2(struct std___Rb_tree_node_double_* v1006) {
bb1007:
  struct std___Rb_tree_node_double_* __node1008;
  double* __retval1009;
  struct std___Identity_double_ ref_tmp01010;
  __node1008 = v1006;
  struct std___Rb_tree_node_double_* t1011 = __node1008;
  double* r1012 = std___Rb_tree_node_double____M_valptr___const(t1011);
  if (__cir_exc_active) {
    double* __cir_eh_ret = (double*)0;
    return __cir_eh_ret;
  }
  double* r1013 = std___Identity_double___operator___double_const___const(&ref_tmp01010, r1012);
  if (__cir_exc_active) {
    double* __cir_eh_ret = (double*)0;
    return __cir_eh_ret;
  }
  __retval1009 = r1013;
  double* t1014 = __retval1009;
  return t1014;
}

// function: _ZNSt8_Rb_treeIddSt9_IdentityIdESt4lessIdESaIdEE6_S_keyEPSt18_Rb_tree_node_base
double* std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______S_key(struct std___Rb_tree_node_base* v1015) {
bb1016:
  struct std___Rb_tree_node_base* __x1017;
  double* __retval1018;
  __x1017 = v1015;
  struct std___Rb_tree_node_base* t1019 = __x1017;
  struct std___Rb_tree_node_double_* derived1020 = (struct std___Rb_tree_node_double_*)((char *)t1019 - 0);
  double* r1021 = std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______S_key_2(derived1020);
  if (__cir_exc_active) {
    double* __cir_eh_ret = (double*)0;
    return __cir_eh_ret;
  }
  __retval1018 = r1021;
  double* t1022 = __retval1018;
  return t1022;
}

// function: _ZNSt8_Rb_treeIddSt9_IdentityIdESt4lessIdESaIdEE12_M_rightmostEv
struct std___Rb_tree_node_base** std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_rightmost(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* v1023) {
bb1024:
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* this1025;
  struct std___Rb_tree_node_base** __retval1026;
  this1025 = v1023;
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* t1027 = this1025;
  struct std___Rb_tree_header* base1028 = (struct std___Rb_tree_header*)((char *)&(t1027->_M_impl) + 8);
  __retval1026 = &base1028->_M_header._M_right;
  struct std___Rb_tree_node_base** t1029 = __retval1026;
  return t1029;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v1030, struct std___Rb_tree_node_base** v1031, struct std___Rb_tree_node_base** v1032) {
bb1033:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this1034;
  struct std___Rb_tree_node_base** __x1035;
  struct std___Rb_tree_node_base** __y1036;
  this1034 = v1030;
  __x1035 = v1031;
  __y1036 = v1032;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t1037 = this1034;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base1038 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t1037 + 0);
  struct std___Rb_tree_node_base** t1039 = __x1035;
  struct std___Rb_tree_node_base* t1040 = *t1039;
  t1037->first = t1040;
  struct std___Rb_tree_node_base** t1041 = __y1036;
  struct std___Rb_tree_node_base* t1042 = *t1041;
  t1037->second = t1042;
  return;
}

// function: _ZNKSt8_Rb_treeIddSt9_IdentityIdESt4lessIdESaIdEE8_M_beginEv
struct std___Rb_tree_node_base* std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_begin___const(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* v1043) {
bb1044:
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* this1045;
  struct std___Rb_tree_node_base* __retval1046;
  this1045 = v1043;
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* t1047 = this1045;
  struct std___Rb_tree_header* base1048 = (struct std___Rb_tree_header*)((char *)&(t1047->_M_impl) + 8);
  struct std___Rb_tree_node_base* t1049 = base1048->_M_header._M_parent;
  __retval1046 = t1049;
  struct std___Rb_tree_node_base* t1050 = __retval1046;
  return t1050;
}

// function: _ZNSt8_Rb_treeIddSt9_IdentityIdESt4lessIdESaIdEE7_S_leftEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______S_left_2(struct std___Rb_tree_node_base* v1051) {
bb1052:
  struct std___Rb_tree_node_base* __x1053;
  struct std___Rb_tree_node_base* __retval1054;
  __x1053 = v1051;
  struct std___Rb_tree_node_base* t1055 = __x1053;
  struct std___Rb_tree_node_base* t1056 = t1055->_M_left;
  __retval1054 = t1056;
  struct std___Rb_tree_node_base* t1057 = __retval1054;
  return t1057;
}

// function: _ZSteqRKSt17_Rb_tree_iteratorIdES2_
_Bool std__operator__(struct std___Rb_tree_iterator_double_* v1058, struct std___Rb_tree_iterator_double_* v1059) {
bb1060:
  struct std___Rb_tree_iterator_double_* __x1061;
  struct std___Rb_tree_iterator_double_* __y1062;
  _Bool __retval1063;
  __x1061 = v1058;
  __y1062 = v1059;
  struct std___Rb_tree_iterator_double_* t1064 = __x1061;
  struct std___Rb_tree_node_base* t1065 = t1064->_M_node;
  struct std___Rb_tree_iterator_double_* t1066 = __y1062;
  struct std___Rb_tree_node_base* t1067 = t1066->_M_node;
  _Bool c1068 = ((t1065 == t1067)) ? 1 : 0;
  __retval1063 = c1068;
  _Bool t1069 = __retval1063;
  return t1069;
}

// function: _ZNSt8_Rb_treeIddSt9_IdentityIdESt4lessIdESaIdEE5beginEv
struct std___Rb_tree_iterator_double_ std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_____begin(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* v1070) {
bb1071:
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* this1072;
  struct std___Rb_tree_iterator_double_ __retval1073;
  this1072 = v1070;
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* t1074 = this1072;
  struct std___Rb_tree_header* base1075 = (struct std___Rb_tree_header*)((char *)&(t1074->_M_impl) + 8);
  struct std___Rb_tree_node_base* t1076 = base1075->_M_header._M_left;
  std___Rb_tree_iterator_double____Rb_tree_iterator(&__retval1073, t1076);
  struct std___Rb_tree_iterator_double_ t1077 = __retval1073;
  return t1077;
}

// function: _ZNSt8_Rb_treeIddSt9_IdentityIdESt4lessIdESaIdEE24_M_get_insert_unique_posERKd
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_get_insert_unique_pos(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* v1078, double* v1079) {
bb1080:
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* this1081;
  double* __k1082;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval1083;
  struct std___Rb_tree_node_base* __x1084;
  struct std___Rb_tree_node_base* __y1085;
  _Bool __comp1086;
  struct std___Rb_tree_iterator_double_ __j1087;
  struct std___Rb_tree_node_base* ref_tmp11088;
  this1081 = v1078;
  __k1082 = v1079;
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* t1089 = this1081;
  struct std___Rb_tree_node_base* r1090 = std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_begin___const(t1089);
  __x1084 = r1090;
  struct std___Rb_tree_node_base* r1091 = std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_end___const(t1089);
  __y1085 = r1091;
  _Bool c1092 = 1;
  __comp1086 = c1092;
    while (1) {
      struct std___Rb_tree_node_base* t1093 = __x1084;
      _Bool cast1094 = (_Bool)t1093;
      if (!cast1094) break;
        struct std___Rb_tree_node_base* t1095 = __x1084;
        __y1085 = t1095;
        struct std___Rb_tree_key_compare_std__less_double__* base1096 = (struct std___Rb_tree_key_compare_std__less_double__*)((char *)&(t1089->_M_impl) + 0);
        struct std__less_double_* cast1097 = (struct std__less_double_*)base1096;
        double* t1098 = __k1082;
        struct std___Rb_tree_node_base* t1099 = __x1084;
        double* r1100 = std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______S_key(t1099);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r1101 = std__less_double___operator___double_const___double_const___const(cast1097, t1098, r1100);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        __comp1086 = r1101;
        _Bool t1102 = __comp1086;
        struct std___Rb_tree_node_base* ternary1103;
        if (t1102) {
          struct std___Rb_tree_node_base* t1104 = __x1084;
          struct std___Rb_tree_node_base* r1105 = std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______S_left_2(t1104);
          ternary1103 = (struct std___Rb_tree_node_base*)r1105;
        } else {
          struct std___Rb_tree_node_base* t1106 = __x1084;
          struct std___Rb_tree_node_base* r1107 = std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______S_right_2(t1106);
          ternary1103 = (struct std___Rb_tree_node_base*)r1107;
        }
        __x1084 = ternary1103;
    }
  struct std___Rb_tree_node_base* t1108 = __y1085;
  std___Rb_tree_iterator_double____Rb_tree_iterator(&__j1087, t1108);
    _Bool t1109 = __comp1086;
    if (t1109) {
        struct std___Rb_tree_iterator_double_ ref_tmp01110;
        struct std___Rb_tree_iterator_double_ r1111 = std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_____begin(t1089);
        ref_tmp01110 = r1111;
        _Bool r1112 = std__operator__(&__j1087, &ref_tmp01110);
        if (r1112) {
          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval1083, &__x1084, &__y1085);
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1113 = __retval1083;
          return t1113;
        } else {
          struct std___Rb_tree_iterator_double_* r1114 = std___Rb_tree_iterator_double___operator__(&__j1087);
        }
    }
    struct std___Rb_tree_key_compare_std__less_double__* base1115 = (struct std___Rb_tree_key_compare_std__less_double__*)((char *)&(t1089->_M_impl) + 0);
    struct std__less_double_* cast1116 = (struct std__less_double_*)base1115;
    struct std___Rb_tree_node_base* t1117 = __j1087._M_node;
    double* r1118 = std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______S_key(t1117);
    if (__cir_exc_active) {
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    double* t1119 = __k1082;
    _Bool r1120 = std__less_double___operator___double_const___double_const___const(cast1116, r1118, t1119);
    if (__cir_exc_active) {
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    if (r1120) {
      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval1083, &__x1084, &__y1085);
      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1121 = __retval1083;
      return t1121;
    }
  struct std___Rb_tree_node_base* c1122 = ((void*)0);
  ref_tmp11088 = c1122;
  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval1083, &__j1087._M_node, &ref_tmp11088);
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1123 = __retval1083;
  return t1123;
}

// function: _ZNSt8_Rb_treeIddSt9_IdentityIdESt4lessIdESaIdEE11_M_leftmostEv
struct std___Rb_tree_node_base** std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_leftmost(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* v1124) {
bb1125:
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* this1126;
  struct std___Rb_tree_node_base** __retval1127;
  this1126 = v1124;
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* t1128 = this1126;
  struct std___Rb_tree_header* base1129 = (struct std___Rb_tree_header*)((char *)&(t1128->_M_impl) + 8);
  __retval1127 = &base1129->_M_header._M_left;
  struct std___Rb_tree_node_base** t1130 = __retval1127;
  return t1130;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v1131, struct std___Rb_tree_node_base** v1132, struct std___Rb_tree_node_base** v1133) {
bb1134:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this1135;
  struct std___Rb_tree_node_base** __x1136;
  struct std___Rb_tree_node_base** __y1137;
  this1135 = v1131;
  __x1136 = v1132;
  __y1137 = v1133;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t1138 = this1135;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base1139 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t1138 + 0);
  struct std___Rb_tree_node_base** t1140 = __x1136;
  struct std___Rb_tree_node_base* t1141 = *t1140;
  t1138->first = t1141;
  struct std___Rb_tree_node_base** t1142 = __y1137;
  struct std___Rb_tree_node_base* t1143 = *t1142;
  t1138->second = t1143;
  return;
}

// function: _ZNSt17_Rb_tree_iteratorIdEmmEv
struct std___Rb_tree_iterator_double_* std___Rb_tree_iterator_double___operator__(struct std___Rb_tree_iterator_double_* v1144) {
bb1145:
  struct std___Rb_tree_iterator_double_* this1146;
  struct std___Rb_tree_iterator_double_* __retval1147;
  this1146 = v1144;
  struct std___Rb_tree_iterator_double_* t1148 = this1146;
  struct std___Rb_tree_node_base* t1149 = t1148->_M_node;
  struct std___Rb_tree_node_base* r1150 = std___Rb_tree_decrement(t1149);
  t1148->_M_node = r1150;
  __retval1147 = t1148;
  struct std___Rb_tree_iterator_double_* t1151 = __retval1147;
  return t1151;
}

// function: _ZNSt8_Rb_treeIddSt9_IdentityIdESt4lessIdESaIdEE8_S_rightEPSt18_Rb_tree_node_base
struct std___Rb_tree_node_base* std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______S_right_2(struct std___Rb_tree_node_base* v1152) {
bb1153:
  struct std___Rb_tree_node_base* __x1154;
  struct std___Rb_tree_node_base* __retval1155;
  __x1154 = v1152;
  struct std___Rb_tree_node_base* t1156 = __x1154;
  struct std___Rb_tree_node_base* t1157 = t1156->_M_right;
  __retval1155 = t1157;
  struct std___Rb_tree_node_base* t1158 = __retval1155;
  return t1158;
}

// function: _ZNSt17_Rb_tree_iteratorIdEppEv
struct std___Rb_tree_iterator_double_* std___Rb_tree_iterator_double___operator___2(struct std___Rb_tree_iterator_double_* v1159) {
bb1160:
  struct std___Rb_tree_iterator_double_* this1161;
  struct std___Rb_tree_iterator_double_* __retval1162;
  this1161 = v1159;
  struct std___Rb_tree_iterator_double_* t1163 = this1161;
  struct std___Rb_tree_node_base* t1164 = t1163->_M_node;
  struct std___Rb_tree_node_base* r1165 = std___Rb_tree_increment(t1164);
  t1163->_M_node = r1165;
  __retval1162 = t1163;
  struct std___Rb_tree_iterator_double_* t1166 = __retval1162;
  return t1166;
}

// function: _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_
void _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* v1167, struct std___Rb_tree_node_base** v1168, struct std___Rb_tree_node_base** v1169) {
bb1170:
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* this1171;
  struct std___Rb_tree_node_base** __x1172;
  struct std___Rb_tree_node_base** __y1173;
  this1171 = v1167;
  __x1172 = v1168;
  __y1173 = v1169;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___* t1174 = this1171;
  struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___* base1175 = (struct std____pair_base_std___Rb_tree_node_base____std___Rb_tree_node_base___*)((char *)t1174 + 0);
  struct std___Rb_tree_node_base** t1176 = __x1172;
  struct std___Rb_tree_node_base* t1177 = *t1176;
  t1174->first = t1177;
  struct std___Rb_tree_node_base** t1178 = __y1173;
  struct std___Rb_tree_node_base* t1179 = *t1178;
  t1174->second = t1179;
  return;
}

// function: _ZNSt8_Rb_treeIddSt9_IdentityIdESt4lessIdESaIdEE29_M_get_insert_hint_unique_posESt23_Rb_tree_const_iteratorIdERKd
struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_get_insert_hint_unique_pos(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* v1180, struct std___Rb_tree_const_iterator_double_ v1181, double* v1182) {
bb1183:
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* this1184;
  struct std___Rb_tree_const_iterator_double_ __position1185;
  double* __k1186;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __retval1187;
  this1184 = v1180;
  __position1185 = v1181;
  __k1186 = v1182;
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* t1188 = this1184;
    struct std___Rb_tree_node_base* t1189 = __position1185._M_node;
    struct std___Rb_tree_node_base* r1190 = std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_end___const(t1188);
    _Bool c1191 = ((t1189 == r1190)) ? 1 : 0;
    if (c1191) {
        unsigned long r1192 = std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_____size___const(t1188);
        unsigned long c1193 = 0;
        _Bool c1194 = ((r1192 > c1193)) ? 1 : 0;
        _Bool ternary1195;
        if (c1194) {
          struct std___Rb_tree_key_compare_std__less_double__* base1196 = (struct std___Rb_tree_key_compare_std__less_double__*)((char *)&(t1188->_M_impl) + 0);
          struct std__less_double_* cast1197 = (struct std__less_double_*)base1196;
          struct std___Rb_tree_node_base** r1198 = std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_rightmost(t1188);
          struct std___Rb_tree_node_base* t1199 = *r1198;
          double* r1200 = std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______S_key(t1199);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          double* t1201 = __k1186;
          _Bool r1202 = std__less_double___operator___double_const___double_const___const(cast1197, r1200, t1201);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          ternary1195 = (_Bool)r1202;
        } else {
          _Bool c1203 = 0;
          ternary1195 = (_Bool)c1203;
        }
        if (ternary1195) {
          struct std___Rb_tree_node_base* ref_tmp01204;
          struct std___Rb_tree_node_base* c1205 = ((void*)0);
          ref_tmp01204 = c1205;
          struct std___Rb_tree_node_base** r1206 = std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_rightmost(t1188);
          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval1187, &ref_tmp01204, r1206);
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1207 = __retval1187;
          return t1207;
        } else {
          double* t1208 = __k1186;
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r1209 = std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_get_insert_unique_pos(t1188, t1208);
          if (__cir_exc_active) {
            struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          __retval1187 = r1209;
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1210 = __retval1187;
          return t1210;
        }
    } else {
        struct std___Rb_tree_key_compare_std__less_double__* base1211 = (struct std___Rb_tree_key_compare_std__less_double__*)((char *)&(t1188->_M_impl) + 0);
        struct std__less_double_* cast1212 = (struct std__less_double_*)base1211;
        double* t1213 = __k1186;
        struct std___Rb_tree_node_base* t1214 = __position1185._M_node;
        double* r1215 = std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______S_key(t1214);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        _Bool r1216 = std__less_double___operator___double_const___double_const___const(cast1212, t1213, r1215);
        if (__cir_exc_active) {
          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
          return __cir_eh_ret;
        }
        if (r1216) {
          struct std___Rb_tree_iterator_double_ __before1217;
          struct std___Rb_tree_node_base* t1218 = __position1185._M_node;
          std___Rb_tree_iterator_double____Rb_tree_iterator(&__before1217, t1218);
            struct std___Rb_tree_node_base* t1219 = __position1185._M_node;
            struct std___Rb_tree_node_base** r1220 = std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_leftmost(t1188);
            struct std___Rb_tree_node_base* t1221 = *r1220;
            _Bool c1222 = ((t1219 == t1221)) ? 1 : 0;
            if (c1222) {
              struct std___Rb_tree_node_base** r1223 = std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_leftmost(t1188);
              struct std___Rb_tree_node_base** r1224 = std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_leftmost(t1188);
              _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval1187, r1223, r1224);
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1225 = __retval1187;
              return t1225;
            } else {
                struct std___Rb_tree_key_compare_std__less_double__* base1226 = (struct std___Rb_tree_key_compare_std__less_double__*)((char *)&(t1188->_M_impl) + 0);
                struct std__less_double_* cast1227 = (struct std__less_double_*)base1226;
                struct std___Rb_tree_iterator_double_* r1228 = std___Rb_tree_iterator_double___operator__(&__before1217);
                struct std___Rb_tree_node_base* t1229 = r1228->_M_node;
                double* r1230 = std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______S_key(t1229);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                double* t1231 = __k1186;
                _Bool r1232 = std__less_double___operator___double_const___double_const___const(cast1227, r1230, t1231);
                if (__cir_exc_active) {
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                  return __cir_eh_ret;
                }
                if (r1232) {
                    struct std___Rb_tree_node_base* t1233 = __before1217._M_node;
                    struct std___Rb_tree_node_base* r1234 = std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______S_right_2(t1233);
                    _Bool cast1235 = (_Bool)r1234;
                    _Bool u1236 = !cast1235;
                    if (u1236) {
                      struct std___Rb_tree_node_base* ref_tmp11237;
                      struct std___Rb_tree_node_base* c1238 = ((void*)0);
                      ref_tmp11237 = c1238;
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval1187, &ref_tmp11237, &__before1217._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1239 = __retval1187;
                      return t1239;
                    } else {
                      _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval1187, &__position1185._M_node, &__position1185._M_node);
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1240 = __retval1187;
                      return t1240;
                    }
                } else {
                  double* t1241 = __k1186;
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r1242 = std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_get_insert_unique_pos(t1188, t1241);
                  if (__cir_exc_active) {
                    struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                    return __cir_eh_ret;
                  }
                  __retval1187 = r1242;
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1243 = __retval1187;
                  return t1243;
                }
            }
        } else {
            struct std___Rb_tree_key_compare_std__less_double__* base1244 = (struct std___Rb_tree_key_compare_std__less_double__*)((char *)&(t1188->_M_impl) + 0);
            struct std__less_double_* cast1245 = (struct std__less_double_*)base1244;
            struct std___Rb_tree_node_base* t1246 = __position1185._M_node;
            double* r1247 = std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______S_key(t1246);
            if (__cir_exc_active) {
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
              return __cir_eh_ret;
            }
            double* t1248 = __k1186;
            _Bool r1249 = std__less_double___operator___double_const___double_const___const(cast1245, r1247, t1248);
            if (__cir_exc_active) {
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
              return __cir_eh_ret;
            }
            if (r1249) {
              struct std___Rb_tree_iterator_double_ __after1250;
              struct std___Rb_tree_node_base* t1251 = __position1185._M_node;
              std___Rb_tree_iterator_double____Rb_tree_iterator(&__after1250, t1251);
                struct std___Rb_tree_node_base* t1252 = __position1185._M_node;
                struct std___Rb_tree_node_base** r1253 = std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_rightmost(t1188);
                struct std___Rb_tree_node_base* t1254 = *r1253;
                _Bool c1255 = ((t1252 == t1254)) ? 1 : 0;
                if (c1255) {
                  struct std___Rb_tree_node_base* ref_tmp21256;
                  struct std___Rb_tree_node_base* c1257 = ((void*)0);
                  ref_tmp21256 = c1257;
                  struct std___Rb_tree_node_base** r1258 = std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_rightmost(t1188);
                  _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval1187, &ref_tmp21256, r1258);
                  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1259 = __retval1187;
                  return t1259;
                } else {
                    struct std___Rb_tree_key_compare_std__less_double__* base1260 = (struct std___Rb_tree_key_compare_std__less_double__*)((char *)&(t1188->_M_impl) + 0);
                    struct std__less_double_* cast1261 = (struct std__less_double_*)base1260;
                    double* t1262 = __k1186;
                    struct std___Rb_tree_iterator_double_* r1263 = std___Rb_tree_iterator_double___operator___2(&__after1250);
                    struct std___Rb_tree_node_base* t1264 = r1263->_M_node;
                    double* r1265 = std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______S_key(t1264);
                    if (__cir_exc_active) {
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                      return __cir_eh_ret;
                    }
                    _Bool r1266 = std__less_double___operator___double_const___double_const___const(cast1261, t1262, r1265);
                    if (__cir_exc_active) {
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                      return __cir_eh_ret;
                    }
                    if (r1266) {
                        struct std___Rb_tree_node_base* t1267 = __position1185._M_node;
                        struct std___Rb_tree_node_base* r1268 = std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______S_right_2(t1267);
                        _Bool cast1269 = (_Bool)r1268;
                        _Bool u1270 = !cast1269;
                        if (u1270) {
                          struct std___Rb_tree_node_base* ref_tmp31271;
                          struct std___Rb_tree_node_base* c1272 = ((void*)0);
                          ref_tmp31271 = c1272;
                          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IS1_RS1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval1187, &ref_tmp31271, &__position1185._M_node);
                          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1273 = __retval1187;
                          return t1273;
                        } else {
                          _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S4_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval1187, &__after1250._M_node, &__after1250._M_node);
                          struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1274 = __retval1187;
                          return t1274;
                        }
                    } else {
                      double* t1275 = __k1186;
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r1276 = std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_get_insert_unique_pos(t1188, t1275);
                      if (__cir_exc_active) {
                        struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __cir_eh_ret = {0};
                        return __cir_eh_ret;
                      }
                      __retval1187 = r1276;
                      struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1277 = __retval1187;
                      return t1277;
                    }
                }
            } else {
              struct std___Rb_tree_node_base* ref_tmp41278;
              struct std___Rb_tree_node_base* c1279 = ((void*)0);
              ref_tmp41278 = c1279;
              _ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2IRS1_S1_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesIS5_S6_EEEEOT_OT0_(&__retval1187, &__position1185._M_node, &ref_tmp41278);
              struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ t1280 = __retval1187;
              return t1280;
            }
        }
    }
  abort();
}

// function: _ZNKSt9_IdentityIdEclERd
double* std___Identity_double___operator___double___const(struct std___Identity_double_* v1281, double* v1282) {
bb1283:
  struct std___Identity_double_* this1284;
  double* __x1285;
  double* __retval1286;
  this1284 = v1281;
  __x1285 = v1282;
  struct std___Identity_double_* t1287 = this1284;
  double* t1288 = __x1285;
  __retval1286 = t1288;
  double* t1289 = __retval1286;
  return t1289;
}

// function: _ZNKSt15__new_allocatorISt13_Rb_tree_nodeIdEE11_M_max_sizeEv
unsigned long std____new_allocator_std___Rb_tree_node_double______M_max_size___const(struct std____new_allocator_std___Rb_tree_node_double__* v1290) {
bb1291:
  struct std____new_allocator_std___Rb_tree_node_double__* this1292;
  unsigned long __retval1293;
  this1292 = v1290;
  struct std____new_allocator_std___Rb_tree_node_double__* t1294 = this1292;
  unsigned long c1295 = 9223372036854775807;
  unsigned long c1296 = 40;
  unsigned long b1297 = c1295 / c1296;
  __retval1293 = b1297;
  unsigned long t1298 = __retval1293;
  return t1298;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIdEE8allocateEmPKv
struct std___Rb_tree_node_double_* std____new_allocator_std___Rb_tree_node_double_____allocate(struct std____new_allocator_std___Rb_tree_node_double__* v1299, unsigned long v1300, void* v1301) {
bb1302:
  struct std____new_allocator_std___Rb_tree_node_double__* this1303;
  unsigned long __n1304;
  void* unnamed1305;
  struct std___Rb_tree_node_double_* __retval1306;
  this1303 = v1299;
  __n1304 = v1300;
  unnamed1305 = v1301;
  struct std____new_allocator_std___Rb_tree_node_double__* t1307 = this1303;
    unsigned long t1308 = __n1304;
    unsigned long r1309 = std____new_allocator_std___Rb_tree_node_double______M_max_size___const(t1307);
    _Bool c1310 = ((t1308 > r1309)) ? 1 : 0;
    if (c1310) {
        unsigned long t1311 = __n1304;
        unsigned long c1312 = -1;
        unsigned long c1313 = 40;
        unsigned long b1314 = c1312 / c1313;
        _Bool c1315 = ((t1311 > b1314)) ? 1 : 0;
        if (c1315) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            struct std___Rb_tree_node_double_* __cir_eh_ret = (struct std___Rb_tree_node_double_*)0;
            return __cir_eh_ret;
          }
        }
      std____throw_bad_alloc();
      if (__cir_exc_active) {
        struct std___Rb_tree_node_double_* __cir_eh_ret = (struct std___Rb_tree_node_double_*)0;
        return __cir_eh_ret;
      }
    }
    unsigned long c1316 = 8;
    unsigned long c1317 = 16;
    _Bool c1318 = ((c1316 > c1317)) ? 1 : 0;
    if (c1318) {
      unsigned long __al1319;
      unsigned long c1320 = 8;
      __al1319 = c1320;
      unsigned long t1321 = __n1304;
      unsigned long c1322 = 40;
      unsigned long b1323 = t1321 * c1322;
      unsigned long t1324 = __al1319;
      void* r1325 = operator_new_2(b1323, t1324);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_double_* __cir_eh_ret = (struct std___Rb_tree_node_double_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_double_* cast1326 = (struct std___Rb_tree_node_double_*)r1325;
      __retval1306 = cast1326;
      struct std___Rb_tree_node_double_* t1327 = __retval1306;
      return t1327;
    }
  unsigned long t1328 = __n1304;
  unsigned long c1329 = 40;
  unsigned long b1330 = t1328 * c1329;
  void* r1331 = operator_new(b1330);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_double_* __cir_eh_ret = (struct std___Rb_tree_node_double_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_double_* cast1332 = (struct std___Rb_tree_node_double_*)r1331;
  __retval1306 = cast1332;
  struct std___Rb_tree_node_double_* t1333 = __retval1306;
  return t1333;
}

// function: _ZNSaISt13_Rb_tree_nodeIdEE8allocateEm
struct std___Rb_tree_node_double_* std__allocator_std___Rb_tree_node_double_____allocate(struct std__allocator_std___Rb_tree_node_double__* v1334, unsigned long v1335) {
bb1336:
  struct std__allocator_std___Rb_tree_node_double__* this1337;
  unsigned long __n1338;
  struct std___Rb_tree_node_double_* __retval1339;
  this1337 = v1334;
  __n1338 = v1335;
  struct std__allocator_std___Rb_tree_node_double__* t1340 = this1337;
    _Bool r1341 = std____is_constant_evaluated();
    if (r1341) {
        unsigned long t1342 = __n1338;
        unsigned long c1343 = 40;
        unsigned long ovr1344;
        _Bool ovf1345 = __builtin_mul_overflow(t1342, c1343, &ovr1344);
        __n1338 = ovr1344;
        if (ovf1345) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            struct std___Rb_tree_node_double_* __cir_eh_ret = (struct std___Rb_tree_node_double_*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1346 = __n1338;
      void* r1347 = operator_new(t1346);
      if (__cir_exc_active) {
        struct std___Rb_tree_node_double_* __cir_eh_ret = (struct std___Rb_tree_node_double_*)0;
        return __cir_eh_ret;
      }
      struct std___Rb_tree_node_double_* cast1348 = (struct std___Rb_tree_node_double_*)r1347;
      __retval1339 = cast1348;
      struct std___Rb_tree_node_double_* t1349 = __retval1339;
      return t1349;
    }
  struct std____new_allocator_std___Rb_tree_node_double__* base1350 = (struct std____new_allocator_std___Rb_tree_node_double__*)((char *)t1340 + 0);
  unsigned long t1351 = __n1338;
  void* c1352 = ((void*)0);
  struct std___Rb_tree_node_double_* r1353 = std____new_allocator_std___Rb_tree_node_double_____allocate(base1350, t1351, c1352);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_double_* __cir_eh_ret = (struct std___Rb_tree_node_double_*)0;
    return __cir_eh_ret;
  }
  __retval1339 = r1353;
  struct std___Rb_tree_node_double_* t1354 = __retval1339;
  return t1354;
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIdEEE8allocateERS2_m
struct std___Rb_tree_node_double_* std__allocator_traits_std__allocator_std___Rb_tree_node_double_______allocate(struct std__allocator_std___Rb_tree_node_double__* v1355, unsigned long v1356) {
bb1357:
  struct std__allocator_std___Rb_tree_node_double__* __a1358;
  unsigned long __n1359;
  struct std___Rb_tree_node_double_* __retval1360;
  __a1358 = v1355;
  __n1359 = v1356;
  struct std__allocator_std___Rb_tree_node_double__* t1361 = __a1358;
  unsigned long t1362 = __n1359;
  struct std___Rb_tree_node_double_* r1363 = std__allocator_std___Rb_tree_node_double_____allocate(t1361, t1362);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_double_* __cir_eh_ret = (struct std___Rb_tree_node_double_*)0;
    return __cir_eh_ret;
  }
  __retval1360 = r1363;
  struct std___Rb_tree_node_double_* t1364 = __retval1360;
  return t1364;
}

// function: _ZNSt8_Rb_treeIddSt9_IdentityIdESt4lessIdESaIdEE11_M_get_nodeEv
struct std___Rb_tree_node_double_* std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_get_node(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* v1365) {
bb1366:
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* this1367;
  struct std___Rb_tree_node_double_* __retval1368;
  this1367 = v1365;
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* t1369 = this1367;
  struct std__allocator_std___Rb_tree_node_double__* r1370 = std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_get_Node_allocator(t1369);
  unsigned long c1371 = 1;
  struct std___Rb_tree_node_double_* r1372 = std__allocator_traits_std__allocator_std___Rb_tree_node_double_______allocate(r1370, c1371);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_double_* __cir_eh_ret = (struct std___Rb_tree_node_double_*)0;
    return __cir_eh_ret;
  }
  __retval1368 = r1372;
  struct std___Rb_tree_node_double_* t1373 = __retval1368;
  return t1373;
}

// function: _ZSt12construct_atIdJRdEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
double* _ZSt12construct_atIdJRdEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(double* v1374, double* v1375) {
bb1376:
  double* __location1377;
  double* __args1378;
  double* __retval1379;
  void* __loc1380;
  __location1377 = v1374;
  __args1378 = v1375;
  double* t1381 = __location1377;
  void* cast1382 = (void*)t1381;
  __loc1380 = cast1382;
    void* t1383 = __loc1380;
    double* cast1384 = (double*)t1383;
    double* t1385 = __args1378;
    double t1386 = *t1385;
    *cast1384 = t1386;
    __retval1379 = cast1384;
    double* t1387 = __retval1379;
    return t1387;
  abort();
}

// function: _ZNSt16allocator_traitsISaISt13_Rb_tree_nodeIdEEE9constructIdJRdEEEvRS2_PT_DpOT0_
void void_std__allocator_traits_std__allocator_std___Rb_tree_node_double_______construct_double__double__(struct std__allocator_std___Rb_tree_node_double__* v1388, double* v1389, double* v1390) {
bb1391:
  struct std__allocator_std___Rb_tree_node_double__* __a1392;
  double* __p1393;
  double* __args1394;
  __a1392 = v1388;
  __p1393 = v1389;
  __args1394 = v1390;
  double* t1395 = __p1393;
  double* t1396 = __args1394;
  double* r1397 = _ZSt12construct_atIdJRdEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t1395, t1396);
  return;
}

// function: _ZNSt8_Rb_treeIddSt9_IdentityIdESt4lessIdESaIdEE17_M_construct_nodeIJRdEEEvPSt13_Rb_tree_nodeIdEDpOT_
void void_std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_construct_node_double__(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* v1398, struct std___Rb_tree_node_double_* v1399, double* v1400) {
bb1401:
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* this1402;
  struct std___Rb_tree_node_double_* __node1403;
  double* __args1404;
  this1402 = v1398;
  __node1403 = v1399;
  __args1404 = v1400;
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* t1405 = this1402;
      struct std__allocator_std___Rb_tree_node_double__* r1407 = std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_get_Node_allocator(t1405);
      struct std___Rb_tree_node_double_* t1408 = __node1403;
      double* r1409 = std___Rb_tree_node_double____M_valptr(t1408);
      if (__cir_exc_active) {
        goto cir_try_dispatch1406;
      }
      double* t1410 = __args1404;
      void_std__allocator_traits_std__allocator_std___Rb_tree_node_double_______construct_double__double__(r1407, r1409, t1410);
    cir_try_dispatch1406: ;
    if (__cir_exc_active) {
    {
      int ca_tok1411 = 0;
      void* ca_exn1412 = (void*)__cir_exc_ptr;
      __cir_exc_active = 0;
        struct std___Rb_tree_node_double_* t1413 = __node1403;
        struct std___Rb_tree_node_double_* t1414 = __node1403;
        std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_put_node(t1405, t1414);
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

// function: _ZNSt8_Rb_treeIddSt9_IdentityIdESt4lessIdESaIdEE14_M_create_nodeIJRdEEEPSt13_Rb_tree_nodeIdEDpOT_
struct std___Rb_tree_node_double_* std___Rb_tree_node_double___std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_create_node_double__(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* v1415, double* v1416) {
bb1417:
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* this1418;
  double* __args1419;
  struct std___Rb_tree_node_double_* __retval1420;
  struct std___Rb_tree_node_double_* __tmp1421;
  this1418 = v1415;
  __args1419 = v1416;
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* t1422 = this1418;
  struct std___Rb_tree_node_double_* r1423 = std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_get_node(t1422);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_double_* __cir_eh_ret = (struct std___Rb_tree_node_double_*)0;
    return __cir_eh_ret;
  }
  __tmp1421 = r1423;
  struct std___Rb_tree_node_double_* t1424 = __tmp1421;
  double* t1425 = __args1419;
  void_std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_construct_node_double__(t1422, t1424, t1425);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_double_* __cir_eh_ret = (struct std___Rb_tree_node_double_*)0;
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_double_* t1426 = __tmp1421;
  __retval1420 = t1426;
  struct std___Rb_tree_node_double_* t1427 = __retval1420;
  return t1427;
}

// function: _ZNKSt8_Rb_treeIddSt9_IdentityIdESt4lessIdESaIdEE11_Alloc_nodeclIRdEEPSt13_Rb_tree_nodeIdEOT_
struct std___Rb_tree_node_double_* std___Rb_tree_node_double___std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______Alloc_node__operator___double___double___const(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_____Alloc_node* v1428, double* v1429) {
bb1430:
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_____Alloc_node* this1431;
  double* __arg1432;
  struct std___Rb_tree_node_double_* __retval1433;
  this1431 = v1428;
  __arg1432 = v1429;
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_____Alloc_node* t1434 = this1431;
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* t1435 = t1434->_M_t;
  double* t1436 = __arg1432;
  struct std___Rb_tree_node_double_* r1437 = std___Rb_tree_node_double___std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_create_node_double__(t1435, t1436);
  if (__cir_exc_active) {
    struct std___Rb_tree_node_double_* __cir_eh_ret = (struct std___Rb_tree_node_double_*)0;
    return __cir_eh_ret;
  }
  __retval1433 = r1437;
  struct std___Rb_tree_node_double_* t1438 = __retval1433;
  return t1438;
}

// function: _ZNSt9__rb_tree12_Node_traitsIdPdE23_S_insert_and_rebalanceEbPSt18_Rb_tree_node_baseS4_RS3_
void std____rb_tree___Node_traits_double__double_____S_insert_and_rebalance(_Bool v1439, struct std___Rb_tree_node_base* v1440, struct std___Rb_tree_node_base* v1441, struct std___Rb_tree_node_base* v1442) {
bb1443:
  _Bool __insert_left1444;
  struct std___Rb_tree_node_base* __x1445;
  struct std___Rb_tree_node_base* __p1446;
  struct std___Rb_tree_node_base* __header1447;
  __insert_left1444 = v1439;
  __x1445 = v1440;
  __p1446 = v1441;
  __header1447 = v1442;
  _Bool t1448 = __insert_left1444;
  struct std___Rb_tree_node_base* t1449 = __x1445;
  struct std___Rb_tree_node_base* t1450 = __p1446;
  struct std___Rb_tree_node_base* t1451 = __header1447;
  std___Rb_tree_insert_and_rebalance(t1448, t1449, t1450, t1451);
  return;
}

// function: _ZNSt8_Rb_treeIddSt9_IdentityIdESt4lessIdESaIdEE10_M_insert_IRdNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIdEPSt18_Rb_tree_node_baseSC_OT_RT0_
struct std___Rb_tree_iterator_double_ std___Rb_tree_iterator_double__std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_insert__double___std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______Alloc_node_(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* v1452, struct std___Rb_tree_node_base* v1453, struct std___Rb_tree_node_base* v1454, double* v1455, struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_____Alloc_node* v1456) {
bb1457:
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* this1458;
  struct std___Rb_tree_node_base* __x1459;
  struct std___Rb_tree_node_base* __p1460;
  double* __v1461;
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_____Alloc_node* __node_gen1462;
  struct std___Rb_tree_iterator_double_ __retval1463;
  _Bool __insert_left1464;
  struct std___Rb_tree_node_base* __z1465;
  this1458 = v1452;
  __x1459 = v1453;
  __p1460 = v1454;
  __v1461 = v1455;
  __node_gen1462 = v1456;
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* t1466 = this1458;
  struct std___Rb_tree_node_base* t1467 = __x1459;
  _Bool cast1468 = (_Bool)t1467;
  _Bool ternary1469;
  if (cast1468) {
    _Bool c1470 = 1;
    ternary1469 = (_Bool)c1470;
  } else {
    struct std___Rb_tree_node_base* t1471 = __p1460;
    struct std___Rb_tree_node_base* r1472 = std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_end___const(t1466);
    _Bool c1473 = ((t1471 == r1472)) ? 1 : 0;
    ternary1469 = (_Bool)c1473;
  }
  _Bool ternary1474;
  if (ternary1469) {
    _Bool c1475 = 1;
    ternary1474 = (_Bool)c1475;
  } else {
    struct std___Identity_double_ ref_tmp01476;
    struct std___Rb_tree_key_compare_std__less_double__* base1477 = (struct std___Rb_tree_key_compare_std__less_double__*)((char *)&(t1466->_M_impl) + 0);
    struct std__less_double_* cast1478 = (struct std__less_double_*)base1477;
    double* t1479 = __v1461;
    double* r1480 = std___Identity_double___operator___double___const(&ref_tmp01476, t1479);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_double_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    struct std___Rb_tree_node_base* t1481 = __p1460;
    double* r1482 = std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______S_key(t1481);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_double_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    _Bool r1483 = std__less_double___operator___double_const___double_const___const(cast1478, r1480, r1482);
    if (__cir_exc_active) {
      struct std___Rb_tree_iterator_double_ __cir_eh_ret = {0};
      return __cir_eh_ret;
    }
    ternary1474 = (_Bool)r1483;
  }
  __insert_left1464 = ternary1474;
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_____Alloc_node* t1484 = __node_gen1462;
  double* t1485 = __v1461;
  struct std___Rb_tree_node_double_* r1486 = std___Rb_tree_node_double___std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______Alloc_node__operator___double___double___const(t1484, t1485);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_double_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_node_base* base1487 = (struct std___Rb_tree_node_base*)((char *)r1486 + 0);
  struct std___Rb_tree_node_base* r1488 = std___Rb_tree_node_base___M_base_ptr___const(base1487);
  __z1465 = r1488;
  _Bool t1489 = __insert_left1464;
  struct std___Rb_tree_node_base* t1490 = __z1465;
  struct std___Rb_tree_node_base* t1491 = __p1460;
  struct std___Rb_tree_header* base1492 = (struct std___Rb_tree_header*)((char *)&(t1466->_M_impl) + 8);
  std____rb_tree___Node_traits_double__double_____S_insert_and_rebalance(t1489, t1490, t1491, &base1492->_M_header);
  struct std___Rb_tree_header* base1493 = (struct std___Rb_tree_header*)((char *)&(t1466->_M_impl) + 8);
  unsigned long t1494 = base1493->_M_node_count;
  unsigned long u1495 = t1494 + 1;
  base1493->_M_node_count = u1495;
  struct std___Rb_tree_node_base* t1496 = __z1465;
  std___Rb_tree_iterator_double____Rb_tree_iterator(&__retval1463, t1496);
  struct std___Rb_tree_iterator_double_ t1497 = __retval1463;
  return t1497;
}

// function: _ZNSt17_Rb_tree_iteratorIdEC2EPSt18_Rb_tree_node_base
void std___Rb_tree_iterator_double____Rb_tree_iterator(struct std___Rb_tree_iterator_double_* v1498, struct std___Rb_tree_node_base* v1499) {
bb1500:
  struct std___Rb_tree_iterator_double_* this1501;
  struct std___Rb_tree_node_base* __x1502;
  this1501 = v1498;
  __x1502 = v1499;
  struct std___Rb_tree_iterator_double_* t1503 = this1501;
  struct std___Rb_tree_node_base* t1504 = __x1502;
  t1503->_M_node = t1504;
  return;
}

// function: _ZNSt8_Rb_treeIddSt9_IdentityIdESt4lessIdESaIdEE17_M_insert_unique_IRdNS5_11_Alloc_nodeEEESt17_Rb_tree_iteratorIdESt23_Rb_tree_const_iteratorIdEOT_RT0_
struct std___Rb_tree_iterator_double_ std___Rb_tree_iterator_double__std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_insert_unique__double___std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______Alloc_node_(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* v1505, struct std___Rb_tree_const_iterator_double_ v1506, double* v1507, struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_____Alloc_node* v1508) {
bb1509:
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* this1510;
  struct std___Rb_tree_const_iterator_double_ __position1511;
  double* __v1512;
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_____Alloc_node* __node_gen1513;
  struct std___Rb_tree_iterator_double_ __retval1514;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ __res1515;
  struct std___Rb_tree_const_iterator_double_ agg_tmp01516;
  struct std___Identity_double_ ref_tmp01517;
  this1510 = v1505;
  __position1511 = v1506;
  __v1512 = v1507;
  __node_gen1513 = v1508;
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* t1518 = this1510;
  agg_tmp01516 = __position1511; // copy
  double* t1519 = __v1512;
  double* r1520 = std___Identity_double___operator___double___const(&ref_tmp01517, t1519);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_double_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std___Rb_tree_const_iterator_double_ t1521 = agg_tmp01516;
  struct std__pair_std___Rb_tree_node_base____std___Rb_tree_node_base___ r1522 = std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_get_insert_hint_unique_pos(t1518, t1521, r1520);
  if (__cir_exc_active) {
    struct std___Rb_tree_iterator_double_ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __res1515 = r1522;
    struct std___Rb_tree_node_base* t1523 = __res1515.second;
    _Bool cast1524 = (_Bool)t1523;
    if (cast1524) {
      struct std___Rb_tree_node_base* t1525 = __res1515.first;
      struct std___Rb_tree_node_base* t1526 = __res1515.second;
      double* t1527 = __v1512;
      struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_____Alloc_node* t1528 = __node_gen1513;
      struct std___Rb_tree_iterator_double_ r1529 = std___Rb_tree_iterator_double__std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_insert__double___std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______Alloc_node_(t1518, t1525, t1526, t1527, t1528);
      if (__cir_exc_active) {
        struct std___Rb_tree_iterator_double_ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      __retval1514 = r1529;
      struct std___Rb_tree_iterator_double_ t1530 = __retval1514;
      return t1530;
    }
  struct std___Rb_tree_node_base* t1531 = __res1515.first;
  std___Rb_tree_iterator_double____Rb_tree_iterator(&__retval1514, t1531);
  struct std___Rb_tree_iterator_double_ t1532 = __retval1514;
  return t1532;
}

// function: _ZNSt8_Rb_treeIddSt9_IdentityIdESt4lessIdESaIdEE3endEv
struct std___Rb_tree_iterator_double_ std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_____end(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* v1533) {
bb1534:
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* this1535;
  struct std___Rb_tree_iterator_double_ __retval1536;
  this1535 = v1533;
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* t1537 = this1535;
  struct std___Rb_tree_node_base* r1538 = std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_end___const(t1537);
  std___Rb_tree_iterator_double____Rb_tree_iterator(&__retval1536, r1538);
  struct std___Rb_tree_iterator_double_ t1539 = __retval1536;
  return t1539;
}

// function: _ZNSt23_Rb_tree_const_iteratorIdEC2ERKSt17_Rb_tree_iteratorIdE
void std___Rb_tree_const_iterator_double____Rb_tree_const_iterator_2(struct std___Rb_tree_const_iterator_double_* v1540, struct std___Rb_tree_iterator_double_* v1541) {
bb1542:
  struct std___Rb_tree_const_iterator_double_* this1543;
  struct std___Rb_tree_iterator_double_* __it1544;
  this1543 = v1540;
  __it1544 = v1541;
  struct std___Rb_tree_const_iterator_double_* t1545 = this1543;
  struct std___Rb_tree_iterator_double_* t1546 = __it1544;
  struct std___Rb_tree_node_base* t1547 = t1546->_M_node;
  t1545->_M_node = t1547;
  return;
}

// function: _ZNSt8_Rb_treeIddSt9_IdentityIdESt4lessIdESaIdEE22_M_insert_range_uniqueIPdEENSt9enable_ifIXsr17__same_value_typeIT_EE5valueEvE4typeES9_S9_
void std__enable_if___same_value_type_double____value__void___type_std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_insert_range_unique_double__(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* v1548, double* v1549, double* v1550) {
bb1551:
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* this1552;
  double* __first1553;
  double* __last1554;
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_____Alloc_node __an1555;
  this1552 = v1548;
  __first1553 = v1549;
  __last1554 = v1550;
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double__* t1556 = this1552;
  std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______Alloc_node___Alloc_node(&__an1555, t1556);
  if (__cir_exc_active) {
    return;
  }
    struct std___Rb_tree_const_iterator_double_ agg_tmp01557;
    struct std___Rb_tree_iterator_double_ ref_tmp01558;
    struct std___Rb_tree_iterator_double_ agg_tmp11559;
    while (1) {
      double* t1561 = __first1553;
      double* t1562 = __last1554;
      _Bool c1563 = ((t1561 != t1562)) ? 1 : 0;
      if (!c1563) break;
      struct std___Rb_tree_iterator_double_ r1564 = std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_____end(t1556);
      ref_tmp01558 = r1564;
      std___Rb_tree_const_iterator_double____Rb_tree_const_iterator_2(&agg_tmp01557, &ref_tmp01558);
      double* t1565 = __first1553;
      struct std___Rb_tree_const_iterator_double_ t1566 = agg_tmp01557;
      struct std___Rb_tree_iterator_double_ r1567 = std___Rb_tree_iterator_double__std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______M_insert_unique__double___std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______Alloc_node_(t1556, t1566, t1565, &__an1555);
      if (__cir_exc_active) {
        return;
      }
      agg_tmp11559 = r1567;
    for_step1560: ;
      double* t1568 = __first1553;
      int c1569 = 1;
      double* ptr1570 = &(t1568)[c1569];
      __first1553 = ptr1570;
    }
  return;
}

// function: _ZNSt8_Rb_treeIddSt9_IdentityIdESt4lessIdESaIdEE13_Rb_tree_implIS3_Lb1EEC2Ev
void std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double______Rb_tree_impl_std__less_double___true____Rb_tree_impl(struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_____Rb_tree_impl_std__less_double___true_* v1571) {
bb1572:
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_____Rb_tree_impl_std__less_double___true_* this1573;
  this1573 = v1571;
  struct std___Rb_tree_double__double__std___Identity_double___std__less_double___std__allocator_double_____Rb_tree_impl_std__less_double___true_* t1574 = this1573;
  struct std__allocator_std___Rb_tree_node_double__* base1575 = (struct std__allocator_std___Rb_tree_node_double__*)((char *)t1574 + 0);
  std__allocator_std___Rb_tree_node_double_____allocator(base1575);
    struct std___Rb_tree_key_compare_std__less_double__* base1576 = (struct std___Rb_tree_key_compare_std__less_double__*)((char *)t1574 + 0);
    std___Rb_tree_key_compare_std__less_double______Rb_tree_key_compare(base1576);
    struct std___Rb_tree_header* base1577 = (struct std___Rb_tree_header*)((char *)t1574 + 8);
    std___Rb_tree_header___Rb_tree_header(base1577);
  return;
}

// function: _ZNSt15__new_allocatorISt13_Rb_tree_nodeIdEEC2Ev
void std____new_allocator_std___Rb_tree_node_double_______new_allocator(struct std____new_allocator_std___Rb_tree_node_double__* v1578) {
bb1579:
  struct std____new_allocator_std___Rb_tree_node_double__* this1580;
  this1580 = v1578;
  struct std____new_allocator_std___Rb_tree_node_double__* t1581 = this1580;
  return;
}

// function: _ZNSaISt13_Rb_tree_nodeIdEEC2Ev
void std__allocator_std___Rb_tree_node_double_____allocator(struct std__allocator_std___Rb_tree_node_double__* v1582) {
bb1583:
  struct std__allocator_std___Rb_tree_node_double__* this1584;
  this1584 = v1582;
  struct std__allocator_std___Rb_tree_node_double__* t1585 = this1584;
  struct std____new_allocator_std___Rb_tree_node_double__* base1586 = (struct std____new_allocator_std___Rb_tree_node_double__*)((char *)t1585 + 0);
  std____new_allocator_std___Rb_tree_node_double_______new_allocator(base1586);
  return;
}

// function: _ZNSt20_Rb_tree_key_compareISt4lessIdEEC2Ev
void std___Rb_tree_key_compare_std__less_double______Rb_tree_key_compare(struct std___Rb_tree_key_compare_std__less_double__* v1587) {
bb1588:
  struct std___Rb_tree_key_compare_std__less_double__* this1589;
  this1589 = v1587;
  return;
}

// function: _ZNSt15_Rb_tree_header8_M_resetEv
void std___Rb_tree_header___M_reset(struct std___Rb_tree_header* v1590) {
bb1591:
  struct std___Rb_tree_header* this1592;
  this1592 = v1590;
  struct std___Rb_tree_header* t1593 = this1592;
  struct std___Rb_tree_node_base* c1594 = ((void*)0);
  t1593->_M_header._M_parent = c1594;
  t1593->_M_header._M_left = &t1593->_M_header;
  t1593->_M_header._M_right = &t1593->_M_header;
  unsigned long c1595 = 0;
  t1593->_M_node_count = c1595;
  return;
}

// function: _ZNSt15_Rb_tree_headerC2Ev
void std___Rb_tree_header___Rb_tree_header(struct std___Rb_tree_header* v1596) {
bb1597:
  struct std___Rb_tree_header* this1598;
  this1598 = v1596;
  struct std___Rb_tree_header* t1599 = this1598;
  unsigned int c1600 = 0;
  t1599->_M_header._M_color = c1600;
  std___Rb_tree_header___M_reset(t1599);
  if (__cir_exc_active) {
    return;
  }
  return;
}

