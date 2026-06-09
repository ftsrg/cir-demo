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
// Virtual dispatch: default implementations (override as `weak`).
// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable
// pointer is at offset 0; the function is vtable[slot].
__attribute__((weak)) char __VERIFIER_virtual_call_char_char(void* __obj, int __slot, char __a0) {
  void* __fn = ((void**)*(void**)__obj)[__slot];
  return ((char(*)(void*, char))__fn)(__obj, __a0);
}

// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_ { unsigned char __field0; };
struct std__allocator_int_ { unsigned char __field0; };
struct std__integral_constant_bool__true_ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

struct std__vector_int__std__allocator_int__ __const_main_ref_tmp4;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[16] = "Size of first: ";
char _str_1[17] = "Size of second: ";
char _str_2[49] = "cannot create std::vector larger than max_size()";
char _str_3[98] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_uninitialized.h";
char __PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_[140] = "_ForwardIterator std::__do_uninit_fill_n(_ForwardIterator, _Size _Tp &) [_ForwardIterator = int *, _Size = unsigned long, _Tp = int]";
char _str_4[9] = "__n >= 0";
_Bool _ZNSt17integral_constantIbLb0EE5valueE;
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector_2(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, int* p2, struct std__allocator_int_* p3);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
_Bool __gnu_cxx____alloc_traits_std__allocator_int___int____S_propagate_on_copy_assign();
_Bool __gnu_cxx____alloc_traits_std__allocator_int___int____S_always_equal();
_Bool std__operator__(struct std__allocator_int_* p0, struct std__allocator_int_* p1);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* p0);
void std__vector_int__std__allocator_int______M_erase_at_end(struct std__vector_int__std__allocator_int__* p0, int* p1);
void std__vector_int__std__allocator_int_____clear(struct std__vector_int__std__allocator_int__* p0);
void void_std____alloc_on_copy_std__allocator_int___(struct std__allocator_int_* p0, struct std__allocator_int_* p1);
unsigned long std__vector_int__std__allocator_int_____capacity___const(struct std__vector_int__std__allocator_int__* p0);
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* p0, int* p1, unsigned long p2, struct std___Vector_base_int__std__allocator_int__* p3);
int** __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0);
_Bool _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p1);
int* __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0);
int* int__std____do_uninit_copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p1, int* p2);
long __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int_const___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p1);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
int* int__std____niter_base_int__(int* p0);
int* int_const__std____niter_base_int_const___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p0);
int* int__std__uninitialized_copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p1, int* p2);
int* int__std____uninitialized_copy_a___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______int___int_(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p1, int* p2, struct std__allocator_int_* p3);
int* std__vector_int__std__allocator_int______Guard_alloc___M_release(struct std__vector_int__std__allocator_int_____Guard_alloc* p0);
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* p0);
int* int__std__vector_int__std__allocator_int______M_allocate_and_copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p2, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p3);
void __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin___const(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end___const(struct std__vector_int__std__allocator_int__* p0);
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
void void_std___Destroy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1);
void void_std___Destroy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct std__allocator_int_* p2);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____niter_wrap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, int* p1);
long std__iterator_traits_int_const____difference_type_std____distance_int_const__(int* p0, int* p1, struct std__random_access_iterator_tag p2);
struct std__random_access_iterator_tag std__iterator_traits_int_const____iterator_category_std____iterator_category_int_const__(int** p0);
long std__iterator_traits_int_const____difference_type_std__distance_int_const__(int* p0, int* p1);
extern void* memmove(void* p0, void* p1, unsigned long p2);
void void_std____assign_one_false__int___int_const__(int** p0, int** p1);
int* int__std____copy_move_a2_false__int_const___int_const___int__(int* p0, int* p1, int* p2);
int* int__std____copy_move_a1_false__int_const___int__(int* p0, int* p1, int* p2);
int* int__std____niter_base_int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____copy_move_a_false____gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
int* int__std____niter_wrap_int__(int** p0, int* p1);
long std__iterator_traits_int____difference_type_std____distance_int__(int* p0, int* p1, struct std__random_access_iterator_tag p2);
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** p0);
long std__iterator_traits_int____difference_type_std__distance_int__(int* p0, int* p1);
void void_std____assign_one_false__int___int__(int** p0, int** p1);
int* int__std____copy_move_a2_false__int___int___int__(int* p0, int* p1, int* p2);
int* int__std____copy_move_a1_false__int___int__(int* p0, int* p1, int* p2);
int* int__std____copy_move_a_false__int___int__(int* p0, int* p1, int* p2);
int* int__std____miter_base_int__(int* p0);
int* int__std__copy_int___int__(int* p0, int* p1, int* p2);
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* p0, int* p1);
void void_std___Construct_int__int__(int* p0, int* p1);
int* int__std____do_uninit_copy_int___int___int__(int* p0, int* p1, int* p2);
int* int__std__uninitialized_copy_int___int__(int* p0, int* p1, int* p2);
int* int__std____uninitialized_copy_a_int___int___int___int_(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
struct std__vector_int__std__allocator_int__* std__vector_int__std__allocator_int_____operator__2(struct std__vector_int__std__allocator_int__* p0, struct std__vector_int__std__allocator_int__* p1);
void std__vector_int__std__allocator_int_____vector_3(struct std__vector_int__std__allocator_int__* p0);
struct std__allocator_int_ std___Vector_base_int__std__allocator_int_____get_allocator___const(struct std___Vector_base_int__std__allocator_int__* p0);
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0, struct std__allocator_int_* p1);
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p0);
void std___Vector_base_int__std__allocator_int______Vector_impl_data___M_copy_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p0, struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p1);
void std___Vector_base_int__std__allocator_int______Vector_impl_data___M_swap_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p0, struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p1);
struct std____new_allocator_int_* std____new_allocator_int___operator_(struct std____new_allocator_int_* p0, struct std____new_allocator_int_* p1);
struct std__allocator_int_* std__allocator_int___operator_(struct std__allocator_int_* p0, struct std__allocator_int_* p1);
void void_std____alloc_on_move_std__allocator_int___(struct std__allocator_int_* p0, struct std__allocator_int_* p1);
void std__vector_int__std__allocator_int______M_move_assign(struct std__vector_int__std__allocator_int__* p0, struct std__vector_int__std__allocator_int__* p1, struct std__integral_constant_bool__true_ p2);
struct std__vector_int__std__allocator_int__* std__vector_int__std__allocator_int_____operator_(struct std__vector_int__std__allocator_int__* p0, struct std__vector_int__std__allocator_int__* p1);
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* p0);
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
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
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
int main();
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* p0);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* p0);
void std__allocator_int___allocator(struct std__allocator_int_* p0, struct std__allocator_int_* p1);
extern void std____throw_length_error(char* p0);
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long p0, struct std__allocator_int_* p1);
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0, struct std__allocator_int_* p1);
_Bool std____is_constant_evaluated();
extern void std____throw_bad_array_new_length();
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* p0);
extern void std____throw_bad_alloc();
void* operator_new_2(unsigned long p0, unsigned long p1) { return malloc(p0); }
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* p0, unsigned long p1, void* p2);
int* std__allocator_int___allocate(struct std__allocator_int_* p0, unsigned long p1);
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* p0, unsigned long p1);
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* p0, unsigned long p1);
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* p0, unsigned long p1);
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0);
void std___Vector_base_int__std__allocator_int______Vector_base_2(struct std___Vector_base_int__std__allocator_int__* p0, unsigned long p1, struct std__allocator_int_* p2);
_Bool std__is_constant_evaluated();
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* p0, int** p1);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* p0, int* p1);
void void_std___Construct_int__int_const__(int* p0, int* p1);
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* p0);
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* p0);
int* int__std____do_uninit_fill_n_int___unsigned_long__int_(int* p0, unsigned long p1, int* p2);
int* int__std__uninitialized_fill_n_int___unsigned_long__int_(int* p0, unsigned long p1, int* p2);
int* int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(int* p0, unsigned long p1, int* p2, struct std__allocator_int_* p3);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* p0);
void std__vector_int__std__allocator_int______M_fill_initialize(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, int* p2);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_int___deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* p0, int* p1, unsigned long p2);
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* p0);
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* p0, struct std____new_allocator_int_* p1);
void void_std__destroy_at_int_(int* p0);
void void_std___Destroy_int__(int* p0, int* p1);
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0);
void std___Vector_base_int__std__allocator_int______Vector_base_3(struct std___Vector_base_int__std__allocator_int__* p0);
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* p0, struct std__allocator_int_* p1);

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator_2(struct std__allocator_int_* v0) {
bb1:
  struct std__allocator_int_* this2;
  this2 = v0;
  struct std__allocator_int_* t3 = this2;
  struct std____new_allocator_int_* base4 = (struct std____new_allocator_int_*)((char *)t3 + 0);
  std____new_allocator_int_____new_allocator_2(base4);
  return;
}

// function: _ZNSt6vectorIiSaIiEEC2EmRKiRKS0_
void std__vector_int__std__allocator_int_____vector_2(struct std__vector_int__std__allocator_int__* v5, unsigned long v6, int* v7, struct std__allocator_int_* v8) {
bb9:
  struct std__vector_int__std__allocator_int__* this10;
  unsigned long __n11;
  int* __value12;
  struct std__allocator_int_* __a13;
  this10 = v5;
  __n11 = v6;
  __value12 = v7;
  __a13 = v8;
  struct std__vector_int__std__allocator_int__* t14 = this10;
  struct std___Vector_base_int__std__allocator_int__* base15 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t14 + 0);
  unsigned long t16 = __n11;
  struct std__allocator_int_* t17 = __a13;
  unsigned long r18 = std__vector_int__std__allocator_int______S_check_init_len(t16, t17);
  struct std__allocator_int_* t19 = __a13;
  std___Vector_base_int__std__allocator_int______Vector_base_2(base15, r18, t19);
    unsigned long t20 = __n11;
    int* t21 = __value12;
    std__vector_int__std__allocator_int______M_fill_initialize(t14, t20, t21);
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v22) {
bb23:
  struct std__allocator_int_* this24;
  this24 = v22;
  struct std__allocator_int_* t25 = this24;
  return;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIiEiE27_S_propagate_on_copy_assignEv
_Bool __gnu_cxx____alloc_traits_std__allocator_int___int____S_propagate_on_copy_assign() {
bb26:
  _Bool __retval27;
  _Bool t28 = _ZNSt17integral_constantIbLb0EE5valueE;
  __retval27 = t28;
  _Bool t29 = __retval27;
  return t29;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIiEiE15_S_always_equalEv
_Bool __gnu_cxx____alloc_traits_std__allocator_int___int____S_always_equal() {
bb30:
  _Bool __retval31;
  _Bool t32 = _ZNSt17integral_constantIbLb1EE5valueE;
  __retval31 = t32;
  _Bool t33 = __retval31;
  return t33;
}

// function: _ZSteqRKSaIiES1_
_Bool std__operator__(struct std__allocator_int_* v34, struct std__allocator_int_* v35) {
bb36:
  struct std__allocator_int_* unnamed37;
  struct std__allocator_int_* unnamed38;
  _Bool __retval39;
  unnamed37 = v34;
  unnamed38 = v35;
  _Bool c40 = 1;
  __retval39 = c40;
  _Bool t41 = __retval39;
  return t41;
}

// function: _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* v42) {
bb43:
  struct std___Vector_base_int__std__allocator_int__* this44;
  struct std__allocator_int_* __retval45;
  this44 = v42;
  struct std___Vector_base_int__std__allocator_int__* t46 = this44;
  struct std__allocator_int_* base47 = (struct std__allocator_int_*)((char *)&(t46->_M_impl) + 0);
  __retval45 = base47;
  struct std__allocator_int_* t48 = __retval45;
  return t48;
}

// function: _ZNSt6vectorIiSaIiEE15_M_erase_at_endEPi
void std__vector_int__std__allocator_int______M_erase_at_end(struct std__vector_int__std__allocator_int__* v49, int* v50) {
bb51:
  struct std__vector_int__std__allocator_int__* this52;
  int* __pos53;
  this52 = v49;
  __pos53 = v50;
  struct std__vector_int__std__allocator_int__* t54 = this52;
    unsigned long __n55;
    struct std___Vector_base_int__std__allocator_int__* base56 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t54 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base57 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base56->_M_impl) + 0);
    int* t58 = base57->_M_finish;
    int* t59 = __pos53;
    long diff60 = t58 - t59;
    unsigned long cast61 = (unsigned long)diff60;
    __n55 = cast61;
    unsigned long t62 = __n55;
    _Bool cast63 = (_Bool)t62;
    if (cast63) {
      int* t64 = __pos53;
      struct std___Vector_base_int__std__allocator_int__* base65 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t54 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base66 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base65->_M_impl) + 0);
      int* t67 = base66->_M_finish;
      struct std___Vector_base_int__std__allocator_int__* base68 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t54 + 0);
      struct std__allocator_int_* r69 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base68);
      void_std___Destroy_int___int_(t64, t67, r69);
      int* t70 = __pos53;
      struct std___Vector_base_int__std__allocator_int__* base71 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t54 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base72 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base71->_M_impl) + 0);
      base72->_M_finish = t70;
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE5clearEv
void std__vector_int__std__allocator_int_____clear(struct std__vector_int__std__allocator_int__* v73) {
bb74:
  struct std__vector_int__std__allocator_int__* this75;
  this75 = v73;
  struct std__vector_int__std__allocator_int__* t76 = this75;
  struct std___Vector_base_int__std__allocator_int__* base77 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t76 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base78 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base77->_M_impl) + 0);
  int* t79 = base78->_M_start;
  std__vector_int__std__allocator_int______M_erase_at_end(t76, t79);
  return;
}

// function: _ZSt15__alloc_on_copyISaIiEEvRT_RKS1_
void void_std____alloc_on_copy_std__allocator_int___(struct std__allocator_int_* v80, struct std__allocator_int_* v81) {
bb82:
  struct std__allocator_int_* __one83;
  struct std__allocator_int_* __two84;
  __one83 = v80;
  __two84 = v81;
  return;
}

// function: _ZNKSt6vectorIiSaIiEE8capacityEv
unsigned long std__vector_int__std__allocator_int_____capacity___const(struct std__vector_int__std__allocator_int__* v85) {
bb86:
  struct std__vector_int__std__allocator_int__* this87;
  unsigned long __retval88;
  long __dif89;
  this87 = v85;
  struct std__vector_int__std__allocator_int__* t90 = this87;
  struct std___Vector_base_int__std__allocator_int__* base91 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t90 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base92 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base91->_M_impl) + 0);
  int* t93 = base92->_M_end_of_storage;
  struct std___Vector_base_int__std__allocator_int__* base94 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t90 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base95 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base94->_M_impl) + 0);
  int* t96 = base95->_M_start;
  long diff97 = t93 - t96;
  __dif89 = diff97;
    long t98 = __dif89;
    long c99 = 0;
    _Bool c100 = ((t98 < c99)) ? 1 : 0;
    if (c100) {
      __builtin_unreachable();
    }
  long t101 = __dif89;
  unsigned long cast102 = (unsigned long)t101;
  __retval88 = cast102;
  unsigned long t103 = __retval88;
  return t103;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocC2EPimRSt12_Vector_baseIiS0_E
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v104, int* v105, unsigned long v106, struct std___Vector_base_int__std__allocator_int__* v107) {
bb108:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this109;
  int* __s110;
  unsigned long __l111;
  struct std___Vector_base_int__std__allocator_int__* __vect112;
  this109 = v104;
  __s110 = v105;
  __l111 = v106;
  __vect112 = v107;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t113 = this109;
  int* t114 = __s110;
  t113->_M_storage = t114;
  unsigned long t115 = __l111;
  t113->_M_len = t115;
  struct std___Vector_base_int__std__allocator_int__* t116 = __vect112;
  t113->_M_vect = t116;
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v117) {
bb118:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this119;
  int** __retval120;
  this119 = v117;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t121 = this119;
  __retval120 = &t121->_M_current;
  int** t122 = __retval120;
  return t122;
}

// function: _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v123, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v124) {
bb125:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __lhs126;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __rhs127;
  _Bool __retval128;
  __lhs126 = v123;
  __rhs127 = v124;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t129 = __lhs126;
  int** r130 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t129);
  int* t131 = *r130;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t132 = __rhs127;
  int** r133 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t132);
  int* t134 = *r133;
  _Bool c135 = ((t131 == t134)) ? 1 : 0;
  __retval128 = c135;
  _Bool t136 = __retval128;
  return t136;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v137) {
bb138:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this139;
  int* __retval140;
  this139 = v137;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t141 = this139;
  int* t142 = t141->_M_current;
  __retval140 = t142;
  int* t143 = __retval140;
  return t143;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v144) {
bb145:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this146;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __retval147;
  this146 = v144;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t148 = this146;
  int* t149 = t148->_M_current;
  int c150 = 1;
  int* ptr151 = &(t149)[c150];
  t148->_M_current = ptr151;
  __retval147 = t148;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t152 = __retval147;
  return t152;
}

// function: _ZSt16__do_uninit_copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEES7_PiET1_T_T0_S9_
int* int__std____do_uninit_copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v153, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v154, int* v155) {
bb156:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __first157;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __last158;
  int* __result159;
  int* __retval160;
  struct std___UninitDestroyGuard_int____void_ __guard161;
  __first157 = v153;
  __last158 = v154;
  __result159 = v155;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard161, &__result159);
      while (1) {
        _Bool r163 = _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first157, &__last158);
        _Bool u164 = !r163;
        if (!u164) break;
        int* t165 = __result159;
        int* r166 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______operator____const(&__first157);
        void_std___Construct_int__int_const__(t165, r166);
      for_step162: ;
        struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* r167 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______operator__(&__first157);
        int* t168 = __result159;
        int c169 = 1;
        int* ptr170 = &(t168)[c169];
        __result159 = ptr170;
      }
    std___UninitDestroyGuard_int___void___release(&__guard161);
    int* t171 = __result159;
    __retval160 = t171;
    int* t172 = __retval160;
    int* ret_val173 = t172;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard161);
    }
    return ret_val173;
  abort();
}

// function: _ZN9__gnu_cxxmiIPKiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS9_SC_
long __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int_const___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v174, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v175) {
bb176:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __lhs177;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __rhs178;
  long __retval179;
  __lhs177 = v174;
  __rhs178 = v175;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t180 = __lhs177;
  int** r181 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t180);
  int* t182 = *r181;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t183 = __rhs178;
  int** r184 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t183);
  int* t185 = *r184;
  long diff186 = t182 - t185;
  __retval179 = diff186;
  long t187 = __retval179;
  return t187;
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v188) {
bb189:
  int* __it190;
  int* __retval191;
  __it190 = v188;
  int* t192 = __it190;
  __retval191 = t192;
  int* t193 = __retval191;
  return t193;
}

// function: _ZSt12__niter_baseIPKiSt6vectorIiSaIiEEET_N9__gnu_cxx17__normal_iteratorIS5_T0_EE
int* int_const__std____niter_base_int_const___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v194) {
bb195:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __it196;
  int* __retval197;
  __it196 = v194;
  int** r198 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(&__it196);
  int* t199 = *r198;
  __retval197 = t199;
  int* t200 = __retval197;
  return t200;
}

// function: _ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET0_T_SA_S9_
int* int__std__uninitialized_copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v201, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v202, int* v203) {
bb204:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __first205;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __last206;
  int* __result207;
  int* __retval208;
  __first205 = v201;
  __last206 = v202;
  __result207 = v203;
      long __n209;
      long r210 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int_const___std__vector_int__std__allocator_int_____(&__last206, &__first205);
      __n209 = r210;
        long t211 = __n209;
        long c212 = 0;
        _Bool c213 = ((t211 > c212)) ? 1 : 0;
        if (c213) {
          struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp0214;
          int* t215 = __result207;
          int* r216 = int__std____niter_base_int__(t215);
          void* cast217 = (void*)r216;
          agg_tmp0214 = __first205; // copy
          struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t218 = agg_tmp0214;
          int* r219 = int_const__std____niter_base_int_const___std__vector_int__std__allocator_int_____(t218);
          void* cast220 = (void*)r219;
          long t221 = __n209;
          unsigned long cast222 = (unsigned long)t221;
          unsigned long c223 = 4;
          unsigned long b224 = cast222 * c223;
          void* r225 = memcpy(cast217, cast220, b224);
          long t226 = __n209;
          int* t227 = __result207;
          int* ptr228 = &(t227)[t226];
          __result207 = ptr228;
        }
      int* t229 = __result207;
      __retval208 = t229;
      int* t230 = __retval208;
      return t230;
  abort();
}

// function: _ZSt22__uninitialized_copy_aIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEES7_PiiET1_T_T0_S9_RSaIT2_E
int* int__std____uninitialized_copy_a___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______int___int_(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v231, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v232, int* v233, struct std__allocator_int_* v234) {
bb235:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __first236;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __last237;
  int* __result238;
  struct std__allocator_int_* unnamed239;
  int* __retval240;
  __first236 = v231;
  __last237 = v232;
  __result238 = v233;
  unnamed239 = v234;
    _Bool r241 = std__is_constant_evaluated();
    if (r241) {
      struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp0242;
      struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp1243;
      agg_tmp0242 = __first236; // copy
      agg_tmp1243 = __last237; // copy
      int* t244 = __result238;
      struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t245 = agg_tmp0242;
      struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t246 = agg_tmp1243;
      int* r247 = int__std____do_uninit_copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______int__(t245, t246, t244);
      __retval240 = r247;
      int* t248 = __retval240;
      return t248;
    }
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp2249;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp3250;
    agg_tmp2249 = __first236; // copy
    agg_tmp3250 = __last237; // copy
    int* t251 = __result238;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t252 = agg_tmp2249;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t253 = agg_tmp3250;
    int* r254 = int__std__uninitialized_copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______int__(t252, t253, t251);
    __retval240 = r254;
    int* t255 = __retval240;
    return t255;
  abort();
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_alloc10_M_releaseEv
int* std__vector_int__std__allocator_int______Guard_alloc___M_release(struct std__vector_int__std__allocator_int_____Guard_alloc* v256) {
bb257:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this258;
  int* __retval259;
  int* __res260;
  this258 = v256;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t261 = this258;
  int* t262 = t261->_M_storage;
  __res260 = t262;
  int* c263 = ((void*)0);
  t261->_M_storage = c263;
  int* t264 = __res260;
  __retval259 = t264;
  int* t265 = __retval259;
  return t265;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocD2Ev
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v266) {
bb267:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this268;
  this268 = v266;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t269 = this268;
    int* t270 = t269->_M_storage;
    _Bool cast271 = (_Bool)t270;
    if (cast271) {
      struct std___Vector_base_int__std__allocator_int__* t272 = t269->_M_vect;
      int* t273 = t269->_M_storage;
      unsigned long t274 = t269->_M_len;
      std___Vector_base_int__std__allocator_int______M_deallocate(t272, t273, t274);
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE20_M_allocate_and_copyIN9__gnu_cxx17__normal_iteratorIPKiS1_EEEEPimT_S9_
int* int__std__vector_int__std__allocator_int______M_allocate_and_copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______(struct std__vector_int__std__allocator_int__* v275, unsigned long v276, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v277, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v278) {
bb279:
  struct std__vector_int__std__allocator_int__* this280;
  unsigned long __n281;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __first282;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __last283;
  int* __retval284;
  struct std__vector_int__std__allocator_int_____Guard_alloc __guard285;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp0286;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp1287;
  this280 = v275;
  __n281 = v276;
  __first282 = v277;
  __last283 = v278;
  struct std__vector_int__std__allocator_int__* t288 = this280;
  struct std___Vector_base_int__std__allocator_int__* base289 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t288 + 0);
  unsigned long t290 = __n281;
  int* r291 = std___Vector_base_int__std__allocator_int______M_allocate(base289, t290);
  unsigned long t292 = __n281;
  struct std___Vector_base_int__std__allocator_int__* base293 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t288 + 0);
  std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(&__guard285, r291, t292, base293);
    agg_tmp0286 = __first282; // copy
    agg_tmp1287 = __last283; // copy
    int* t294 = __guard285._M_storage;
    struct std___Vector_base_int__std__allocator_int__* base295 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t288 + 0);
    struct std__allocator_int_* r296 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base295);
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t297 = agg_tmp0286;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t298 = agg_tmp1287;
    int* r299 = int__std____uninitialized_copy_a___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______int___int_(t297, t298, t294, r296);
    int* r300 = std__vector_int__std__allocator_int______Guard_alloc___M_release(&__guard285);
    __retval284 = r300;
    int* t301 = __retval284;
    int* ret_val302 = t301;
    {
      std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(&__guard285);
    }
    return ret_val302;
  abort();
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2ERKS2_
void __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v303, int** v304) {
bb305:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this306;
  int** __i307;
  this306 = v303;
  __i307 = v304;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t308 = this306;
  int** t309 = __i307;
  int* t310 = *t309;
  t308->_M_current = t310;
  return;
}

// function: _ZNKSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin___const(struct std__vector_int__std__allocator_int__* v311) {
bb312:
  struct std__vector_int__std__allocator_int__* this313;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval314;
  this313 = v311;
  struct std__vector_int__std__allocator_int__* t315 = this313;
  struct std___Vector_base_int__std__allocator_int__* base316 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t315 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base317 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base316->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval314, &base317->_M_start);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t318 = __retval314;
  return t318;
}

// function: _ZNKSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end___const(struct std__vector_int__std__allocator_int__* v319) {
bb320:
  struct std__vector_int__std__allocator_int__* this321;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval322;
  this321 = v319;
  struct std__vector_int__std__allocator_int__* t323 = this321;
  struct std___Vector_base_int__std__allocator_int__* base324 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t323 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base325 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base324->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval322, &base325->_M_finish);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t326 = __retval322;
  return t326;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v327, int* v328, struct std__allocator_int_* v329) {
bb330:
  int* __first331;
  int* __last332;
  struct std__allocator_int_* unnamed333;
  __first331 = v327;
  __last332 = v328;
  unnamed333 = v329;
  int* t334 = __first331;
  int* t335 = __last332;
  void_std___Destroy_int__(t334, t335);
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v336) {
bb337:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this338;
  int** __retval339;
  this338 = v336;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t340 = this338;
  __retval339 = &t340->_M_current;
  int** t341 = __retval339;
  return t341;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v342, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v343) {
bb344:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs345;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs346;
  _Bool __retval347;
  __lhs345 = v342;
  __rhs346 = v343;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t348 = __lhs345;
  int** r349 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t348);
  int* t350 = *r349;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t351 = __rhs346;
  int** r352 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t351);
  int* t353 = *r352;
  _Bool c354 = ((t350 == t353)) ? 1 : 0;
  __retval347 = c354;
  _Bool t355 = __retval347;
  return t355;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v356) {
bb357:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this358;
  int* __retval359;
  this358 = v356;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t360 = this358;
  int* t361 = t360->_M_current;
  __retval359 = t361;
  int* t362 = __retval359;
  return t362;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v363) {
bb364:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this365;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval366;
  this365 = v363;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t367 = this365;
  int* t368 = t367->_M_current;
  int c369 = 1;
  int* ptr370 = &(t368)[c369];
  t367->_M_current = ptr370;
  __retval366 = t367;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t371 = __retval366;
  return t371;
}

// function: _ZSt8_DestroyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEvT_S7_
void void_std___Destroy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v372, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v373) {
bb374:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first375;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last376;
  __first375 = v372;
  __last376 = v373;
      _Bool r377 = std____is_constant_evaluated();
      if (r377) {
          while (1) {
            _Bool r379 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first375, &__last376);
            _Bool u380 = !r379;
            if (!u380) break;
            int* r381 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first375);
            void_std__destroy_at_int_(r381);
          for_step378: ;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r382 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__first375);
          }
      }
  return;
}

// function: _ZSt8_DestroyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiEvT_S7_RSaIT0_E
void void_std___Destroy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v383, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v384, struct std__allocator_int_* v385) {
bb386:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first387;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last388;
  struct std__allocator_int_* unnamed389;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0390;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1391;
  __first387 = v383;
  __last388 = v384;
  unnamed389 = v385;
  agg_tmp0390 = __first387; // copy
  agg_tmp1391 = __last388; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t392 = agg_tmp0390;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t393 = agg_tmp1391;
  void_std___Destroy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t392, t393);
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v394, int** v395) {
bb396:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this397;
  int** __i398;
  this397 = v394;
  __i398 = v395;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t399 = this397;
  int** t400 = __i398;
  int* t401 = *t400;
  t399->_M_current = t401;
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEplEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v402, long v403) {
bb404:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this405;
  long __n406;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval407;
  int* ref_tmp0408;
  this405 = v402;
  __n406 = v403;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t409 = this405;
  int* t410 = t409->_M_current;
  long t411 = __n406;
  int* ptr412 = &(t410)[t411];
  ref_tmp0408 = ptr412;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval407, &ref_tmp0408);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t413 = __retval407;
  return t413;
}

// function: _ZSt12__niter_wrapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES2_ET_S7_T0_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____niter_wrap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v414, int* v415) {
bb416:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __from417;
  int* __res418;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval419;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0420;
  __from417 = v414;
  __res418 = v415;
  int* t421 = __res418;
  int* r422 = int__std____niter_base_int__(t421);
  agg_tmp0420 = __from417; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t423 = agg_tmp0420;
  int* r424 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t423);
  long diff425 = r422 - r424;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r426 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__from417, diff425);
  __retval419 = r426;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t427 = __retval419;
  return t427;
}

// function: _ZSt10__distanceIPKiENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_int_const____difference_type_std____distance_int_const__(int* v428, int* v429, struct std__random_access_iterator_tag v430) {
bb431:
  int* __first432;
  int* __last433;
  struct std__random_access_iterator_tag unnamed434;
  long __retval435;
  __first432 = v428;
  __last433 = v429;
  unnamed434 = v430;
  int* t436 = __last433;
  int* t437 = __first432;
  long diff438 = t436 - t437;
  __retval435 = diff438;
  long t439 = __retval435;
  return t439;
}

// function: _ZSt19__iterator_categoryIPKiENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_int_const____iterator_category_std____iterator_category_int_const__(int** v440) {
bb441:
  int** unnamed442;
  struct std__random_access_iterator_tag __retval443;
  unnamed442 = v440;
  struct std__random_access_iterator_tag t444 = __retval443;
  return t444;
}

// function: _ZSt8distanceIPKiENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_int_const____difference_type_std__distance_int_const__(int* v445, int* v446) {
bb447:
  int* __first448;
  int* __last449;
  long __retval450;
  struct std__random_access_iterator_tag agg_tmp0451;
  __first448 = v445;
  __last449 = v446;
  int* t452 = __first448;
  int* t453 = __last449;
  struct std__random_access_iterator_tag r454 = std__iterator_traits_int_const____iterator_category_std____iterator_category_int_const__(&__first448);
  agg_tmp0451 = r454;
  struct std__random_access_iterator_tag t455 = agg_tmp0451;
  long r456 = std__iterator_traits_int_const____difference_type_std____distance_int_const__(t452, t453, t455);
  __retval450 = r456;
  long t457 = __retval450;
  return t457;
}

// function: _ZSt12__assign_oneILb0EPiPKiEvRT0_RT1_
void void_std____assign_one_false__int___int_const__(int** v458, int** v459) {
bb460:
  int** __out461;
  int** __in462;
  __out461 = v458;
  __in462 = v459;
    int** t463 = __in462;
    int* t464 = *t463;
    int t465 = *t464;
    int** t466 = __out461;
    int* t467 = *t466;
    *t467 = t465;
  return;
}

// function: _ZSt14__copy_move_a2ILb0EPKiS1_PiET2_T0_T1_S3_
int* int__std____copy_move_a2_false__int_const___int_const___int__(int* v468, int* v469, int* v470) {
bb471:
  int* __first472;
  int* __last473;
  int* __result474;
  int* __retval475;
  __first472 = v468;
  __last473 = v469;
  __result474 = v470;
      _Bool r476 = std____is_constant_evaluated();
      if (r476) {
      } else {
          long __n477;
          int* t478 = __first472;
          int* t479 = __last473;
          long r480 = std__iterator_traits_int_const____difference_type_std__distance_int_const__(t478, t479);
          __n477 = r480;
            long t481 = __n477;
            long c482 = 1;
            _Bool c483 = ((t481 > c482)) ? 1 : 0;
            if (c483) {
              int* t484 = __result474;
              void* cast485 = (void*)t484;
              int* t486 = __first472;
              void* cast487 = (void*)t486;
              long t488 = __n477;
              unsigned long cast489 = (unsigned long)t488;
              unsigned long c490 = 4;
              unsigned long b491 = cast489 * c490;
              void* r492 = memmove(cast485, cast487, b491);
              long t493 = __n477;
              int* t494 = __result474;
              int* ptr495 = &(t494)[t493];
              __result474 = ptr495;
            } else {
                long t496 = __n477;
                long c497 = 1;
                _Bool c498 = ((t496 == c497)) ? 1 : 0;
                if (c498) {
                  void_std____assign_one_false__int___int_const__(&__result474, &__first472);
                  int* t499 = __result474;
                  int c500 = 1;
                  int* ptr501 = &(t499)[c500];
                  __result474 = ptr501;
                }
            }
          int* t502 = __result474;
          __retval475 = t502;
          int* t503 = __retval475;
          return t503;
      }
    while (1) {
      int* t505 = __first472;
      int* t506 = __last473;
      _Bool c507 = ((t505 != t506)) ? 1 : 0;
      if (!c507) break;
      void_std____assign_one_false__int___int_const__(&__result474, &__first472);
    for_step504: ;
      int* t508 = __result474;
      int c509 = 1;
      int* ptr510 = &(t508)[c509];
      __result474 = ptr510;
      int* t511 = __first472;
      int c512 = 1;
      int* ptr513 = &(t511)[c512];
      __first472 = ptr513;
    }
  int* t514 = __result474;
  __retval475 = t514;
  int* t515 = __retval475;
  return t515;
}

// function: _ZSt14__copy_move_a1ILb0EPKiPiET1_T0_S4_S3_
int* int__std____copy_move_a1_false__int_const___int__(int* v516, int* v517, int* v518) {
bb519:
  int* __first520;
  int* __last521;
  int* __result522;
  int* __retval523;
  __first520 = v516;
  __last521 = v517;
  __result522 = v518;
  int* t524 = __first520;
  int* t525 = __last521;
  int* t526 = __result522;
  int* r527 = int__std____copy_move_a2_false__int_const___int_const___int__(t524, t525, t526);
  __retval523 = r527;
  int* t528 = __retval523;
  return t528;
}

// function: _ZSt12__niter_baseIPiSt6vectorIiSaIiEEET_N9__gnu_cxx17__normal_iteratorIS4_T0_EE
int* int__std____niter_base_int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v529) {
bb530:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it531;
  int* __retval532;
  __it531 = v529;
  int** r533 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__it531);
  int* t534 = *r533;
  __retval532 = t534;
  int* t535 = __retval532;
  return t535;
}

// function: _ZSt13__copy_move_aILb0EN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEENS1_IPiS6_EEET1_T0_SB_SA_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____copy_move_a_false____gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v536, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v537, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v538) {
bb539:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __first540;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __last541;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result542;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval543;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0544;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp1545;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp2546;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3547;
  __first540 = v536;
  __last541 = v537;
  __result542 = v538;
  agg_tmp0544 = __result542; // copy
  agg_tmp1545 = __first540; // copy
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t548 = agg_tmp1545;
  int* r549 = int_const__std____niter_base_int_const___std__vector_int__std__allocator_int_____(t548);
  agg_tmp2546 = __last541; // copy
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t550 = agg_tmp2546;
  int* r551 = int_const__std____niter_base_int_const___std__vector_int__std__allocator_int_____(t550);
  agg_tmp3547 = __result542; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t552 = agg_tmp3547;
  int* r553 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t552);
  int* r554 = int__std____copy_move_a1_false__int_const___int__(r549, r551, r553);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t555 = agg_tmp0544;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r556 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____niter_wrap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(t555, r554);
  __retval543 = r556;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t557 = __retval543;
  return t557;
}

// function: _ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEET_S8_
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v558) {
bb559:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __it560;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval561;
  __it560 = v558;
  __retval561 = __it560; // copy
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t562 = __retval561;
  return t562;
}

// function: _ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEENS1_IPiS6_EEET0_T_SB_SA_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v563, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v564, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v565) {
bb566:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __first567;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __last568;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result569;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval570;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp0571;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp1572;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp2573;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp3574;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp4575;
  __first567 = v563;
  __last568 = v564;
  __result569 = v565;
  agg_tmp1572 = __first567; // copy
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t576 = agg_tmp1572;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r577 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______(t576);
  agg_tmp0571 = r577;
  agg_tmp3574 = __last568; // copy
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t578 = agg_tmp3574;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r579 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______(t578);
  agg_tmp2573 = r579;
  agg_tmp4575 = __result569; // copy
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t580 = agg_tmp0571;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t581 = agg_tmp2573;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t582 = agg_tmp4575;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r583 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____copy_move_a_false____gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t580, t581, t582);
  __retval570 = r583;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t584 = __retval570;
  return t584;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v585) {
bb586:
  struct std__vector_int__std__allocator_int__* this587;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval588;
  this587 = v585;
  struct std__vector_int__std__allocator_int__* t589 = this587;
  struct std___Vector_base_int__std__allocator_int__* base590 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t589 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base591 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base590->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval588, &base591->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t592 = __retval588;
  return t592;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v593) {
bb594:
  struct std__vector_int__std__allocator_int__* this595;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval596;
  this595 = v593;
  struct std__vector_int__std__allocator_int__* t597 = this595;
  struct std___Vector_base_int__std__allocator_int__* base598 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t597 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base599 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base598->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval596, &base599->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t600 = __retval596;
  return t600;
}

// function: _ZSt12__niter_wrapIPiET_RKS1_S1_
int* int__std____niter_wrap_int__(int** v601, int* v602) {
bb603:
  int** unnamed604;
  int* __res605;
  int* __retval606;
  unnamed604 = v601;
  __res605 = v602;
  int* t607 = __res605;
  __retval606 = t607;
  int* t608 = __retval606;
  return t608;
}

// function: _ZSt10__distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_St26random_access_iterator_tag
long std__iterator_traits_int____difference_type_std____distance_int__(int* v609, int* v610, struct std__random_access_iterator_tag v611) {
bb612:
  int* __first613;
  int* __last614;
  struct std__random_access_iterator_tag unnamed615;
  long __retval616;
  __first613 = v609;
  __last614 = v610;
  unnamed615 = v611;
  int* t617 = __last614;
  int* t618 = __first613;
  long diff619 = t617 - t618;
  __retval616 = diff619;
  long t620 = __retval616;
  return t620;
}

// function: _ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** v621) {
bb622:
  int** unnamed623;
  struct std__random_access_iterator_tag __retval624;
  unnamed623 = v621;
  struct std__random_access_iterator_tag t625 = __retval624;
  return t625;
}

// function: _ZSt8distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_
long std__iterator_traits_int____difference_type_std__distance_int__(int* v626, int* v627) {
bb628:
  int* __first629;
  int* __last630;
  long __retval631;
  struct std__random_access_iterator_tag agg_tmp0632;
  __first629 = v626;
  __last630 = v627;
  int* t633 = __first629;
  int* t634 = __last630;
  struct std__random_access_iterator_tag r635 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first629);
  agg_tmp0632 = r635;
  struct std__random_access_iterator_tag t636 = agg_tmp0632;
  long r637 = std__iterator_traits_int____difference_type_std____distance_int__(t633, t634, t636);
  __retval631 = r637;
  long t638 = __retval631;
  return t638;
}

// function: _ZSt12__assign_oneILb0EPiS0_EvRT0_RT1_
void void_std____assign_one_false__int___int__(int** v639, int** v640) {
bb641:
  int** __out642;
  int** __in643;
  __out642 = v639;
  __in643 = v640;
    int** t644 = __in643;
    int* t645 = *t644;
    int t646 = *t645;
    int** t647 = __out642;
    int* t648 = *t647;
    *t648 = t646;
  return;
}

// function: _ZSt14__copy_move_a2ILb0EPiS0_S0_ET2_T0_T1_S1_
int* int__std____copy_move_a2_false__int___int___int__(int* v649, int* v650, int* v651) {
bb652:
  int* __first653;
  int* __last654;
  int* __result655;
  int* __retval656;
  __first653 = v649;
  __last654 = v650;
  __result655 = v651;
      _Bool r657 = std____is_constant_evaluated();
      if (r657) {
      } else {
          long __n658;
          int* t659 = __first653;
          int* t660 = __last654;
          long r661 = std__iterator_traits_int____difference_type_std__distance_int__(t659, t660);
          __n658 = r661;
            long t662 = __n658;
            long c663 = 1;
            _Bool c664 = ((t662 > c663)) ? 1 : 0;
            if (c664) {
              int* t665 = __result655;
              void* cast666 = (void*)t665;
              int* t667 = __first653;
              void* cast668 = (void*)t667;
              long t669 = __n658;
              unsigned long cast670 = (unsigned long)t669;
              unsigned long c671 = 4;
              unsigned long b672 = cast670 * c671;
              void* r673 = memmove(cast666, cast668, b672);
              long t674 = __n658;
              int* t675 = __result655;
              int* ptr676 = &(t675)[t674];
              __result655 = ptr676;
            } else {
                long t677 = __n658;
                long c678 = 1;
                _Bool c679 = ((t677 == c678)) ? 1 : 0;
                if (c679) {
                  void_std____assign_one_false__int___int__(&__result655, &__first653);
                  int* t680 = __result655;
                  int c681 = 1;
                  int* ptr682 = &(t680)[c681];
                  __result655 = ptr682;
                }
            }
          int* t683 = __result655;
          __retval656 = t683;
          int* t684 = __retval656;
          return t684;
      }
    while (1) {
      int* t686 = __first653;
      int* t687 = __last654;
      _Bool c688 = ((t686 != t687)) ? 1 : 0;
      if (!c688) break;
      void_std____assign_one_false__int___int__(&__result655, &__first653);
    for_step685: ;
      int* t689 = __result655;
      int c690 = 1;
      int* ptr691 = &(t689)[c690];
      __result655 = ptr691;
      int* t692 = __first653;
      int c693 = 1;
      int* ptr694 = &(t692)[c693];
      __first653 = ptr694;
    }
  int* t695 = __result655;
  __retval656 = t695;
  int* t696 = __retval656;
  return t696;
}

// function: _ZSt14__copy_move_a1ILb0EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_a1_false__int___int__(int* v697, int* v698, int* v699) {
bb700:
  int* __first701;
  int* __last702;
  int* __result703;
  int* __retval704;
  __first701 = v697;
  __last702 = v698;
  __result703 = v699;
  int* t705 = __first701;
  int* t706 = __last702;
  int* t707 = __result703;
  int* r708 = int__std____copy_move_a2_false__int___int___int__(t705, t706, t707);
  __retval704 = r708;
  int* t709 = __retval704;
  return t709;
}

// function: _ZSt13__copy_move_aILb0EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_a_false__int___int__(int* v710, int* v711, int* v712) {
bb713:
  int* __first714;
  int* __last715;
  int* __result716;
  int* __retval717;
  __first714 = v710;
  __last715 = v711;
  __result716 = v712;
  int* t718 = __first714;
  int* r719 = int__std____niter_base_int__(t718);
  int* t720 = __last715;
  int* r721 = int__std____niter_base_int__(t720);
  int* t722 = __result716;
  int* r723 = int__std____niter_base_int__(t722);
  int* r724 = int__std____copy_move_a1_false__int___int__(r719, r721, r723);
  int* r725 = int__std____niter_wrap_int__(&__result716, r724);
  __retval717 = r725;
  int* t726 = __retval717;
  return t726;
}

// function: _ZSt12__miter_baseIPiET_S1_
int* int__std____miter_base_int__(int* v727) {
bb728:
  int* __it729;
  int* __retval730;
  __it729 = v727;
  int* t731 = __it729;
  __retval730 = t731;
  int* t732 = __retval730;
  return t732;
}

// function: _ZSt4copyIPiS0_ET0_T_S2_S1_
int* int__std__copy_int___int__(int* v733, int* v734, int* v735) {
bb736:
  int* __first737;
  int* __last738;
  int* __result739;
  int* __retval740;
  __first737 = v733;
  __last738 = v734;
  __result739 = v735;
  int* t741 = __first737;
  int* r742 = int__std____miter_base_int__(t741);
  int* t743 = __last738;
  int* r744 = int__std____miter_base_int__(t743);
  int* t745 = __result739;
  int* r746 = int__std____copy_move_a_false__int___int__(r742, r744, t745);
  __retval740 = r746;
  int* t747 = __retval740;
  return t747;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v748, int* v749) {
bb750:
  int* __location751;
  int* __args752;
  int* __retval753;
  void* __loc754;
  __location751 = v748;
  __args752 = v749;
  int* t755 = __location751;
  void* cast756 = (void*)t755;
  __loc754 = cast756;
    void* t757 = __loc754;
    int* cast758 = (int*)t757;
    int* t759 = __args752;
    int t760 = *t759;
    *cast758 = t760;
    __retval753 = cast758;
    int* t761 = __retval753;
    return t761;
  abort();
}

// function: _ZSt10_ConstructIiJRiEEvPT_DpOT0_
void void_std___Construct_int__int__(int* v762, int* v763) {
bb764:
  int* __p765;
  int* __args766;
  __p765 = v762;
  __args766 = v763;
    _Bool r767 = std____is_constant_evaluated();
    if (r767) {
      int* t768 = __p765;
      int* t769 = __args766;
      int* r770 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t768, t769);
      return;
    }
  int* t771 = __p765;
  void* cast772 = (void*)t771;
  int* cast773 = (int*)cast772;
  int* t774 = __args766;
  int t775 = *t774;
  *cast773 = t775;
  return;
}

// function: _ZSt16__do_uninit_copyIPiS0_S0_ET1_T_T0_S1_
int* int__std____do_uninit_copy_int___int___int__(int* v776, int* v777, int* v778) {
bb779:
  int* __first780;
  int* __last781;
  int* __result782;
  int* __retval783;
  struct std___UninitDestroyGuard_int____void_ __guard784;
  __first780 = v776;
  __last781 = v777;
  __result782 = v778;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard784, &__result782);
      while (1) {
        int* t786 = __first780;
        int* t787 = __last781;
        _Bool c788 = ((t786 != t787)) ? 1 : 0;
        if (!c788) break;
        int* t789 = __result782;
        int* t790 = __first780;
        void_std___Construct_int__int__(t789, t790);
      for_step785: ;
        int* t791 = __first780;
        int c792 = 1;
        int* ptr793 = &(t791)[c792];
        __first780 = ptr793;
        int* t794 = __result782;
        int c795 = 1;
        int* ptr796 = &(t794)[c795];
        __result782 = ptr796;
      }
    std___UninitDestroyGuard_int___void___release(&__guard784);
    int* t797 = __result782;
    __retval783 = t797;
    int* t798 = __retval783;
    int* ret_val799 = t798;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard784);
    }
    return ret_val799;
  abort();
}

// function: _ZSt18uninitialized_copyIPiS0_ET0_T_S2_S1_
int* int__std__uninitialized_copy_int___int__(int* v800, int* v801, int* v802) {
bb803:
  int* __first804;
  int* __last805;
  int* __result806;
  int* __retval807;
  __first804 = v800;
  __last805 = v801;
  __result806 = v802;
      long __n808;
      int* t809 = __last805;
      int* t810 = __first804;
      long diff811 = t809 - t810;
      __n808 = diff811;
        long t812 = __n808;
        long c813 = 0;
        _Bool c814 = ((t812 > c813)) ? 1 : 0;
        if (c814) {
          int* t815 = __result806;
          int* r816 = int__std____niter_base_int__(t815);
          void* cast817 = (void*)r816;
          int* t818 = __first804;
          int* r819 = int__std____niter_base_int__(t818);
          void* cast820 = (void*)r819;
          long t821 = __n808;
          unsigned long cast822 = (unsigned long)t821;
          unsigned long c823 = 4;
          unsigned long b824 = cast822 * c823;
          void* r825 = memcpy(cast817, cast820, b824);
          long t826 = __n808;
          int* t827 = __result806;
          int* ptr828 = &(t827)[t826];
          __result806 = ptr828;
        }
      int* t829 = __result806;
      __retval807 = t829;
      int* t830 = __retval807;
      return t830;
  abort();
}

// function: _ZSt22__uninitialized_copy_aIPiS0_S0_iET1_T_T0_S1_RSaIT2_E
int* int__std____uninitialized_copy_a_int___int___int___int_(int* v831, int* v832, int* v833, struct std__allocator_int_* v834) {
bb835:
  int* __first836;
  int* __last837;
  int* __result838;
  struct std__allocator_int_* unnamed839;
  int* __retval840;
  __first836 = v831;
  __last837 = v832;
  __result838 = v833;
  unnamed839 = v834;
    _Bool r841 = std__is_constant_evaluated();
    if (r841) {
      int* t842 = __first836;
      int* t843 = __last837;
      int* t844 = __result838;
      int* r845 = int__std____do_uninit_copy_int___int___int__(t842, t843, t844);
      __retval840 = r845;
      int* t846 = __retval840;
      return t846;
    }
    int* t847 = __first836;
    int* t848 = __last837;
    int* t849 = __result838;
    int* r850 = int__std__uninitialized_copy_int___int__(t847, t848, t849);
    __retval840 = r850;
    int* t851 = __retval840;
    return t851;
  abort();
}

// function: _ZNSt6vectorIiSaIiEEaSERKS1_
struct std__vector_int__std__allocator_int__* std__vector_int__std__allocator_int_____operator__2(struct std__vector_int__std__allocator_int__* v852, struct std__vector_int__std__allocator_int__* v853) {
bb854:
  struct std__vector_int__std__allocator_int__* this855;
  struct std__vector_int__std__allocator_int__* __x856;
  struct std__vector_int__std__allocator_int__* __retval857;
  this855 = v852;
  __x856 = v853;
  struct std__vector_int__std__allocator_int__* t858 = this855;
    struct std__vector_int__std__allocator_int__* t859 = __x856;
    _Bool c860 = ((t859 != t858)) ? 1 : 0;
    if (c860) {
      unsigned long __xlen861;
        _Bool r862 = __gnu_cxx____alloc_traits_std__allocator_int___int____S_propagate_on_copy_assign();
        if (r862) {
            _Bool r863 = __gnu_cxx____alloc_traits_std__allocator_int___int____S_always_equal();
            _Bool u864 = !r863;
            _Bool ternary865;
            if (u864) {
              struct std___Vector_base_int__std__allocator_int__* base866 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t858 + 0);
              struct std__allocator_int_* r867 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base866);
              struct std__vector_int__std__allocator_int__* t868 = __x856;
              struct std___Vector_base_int__std__allocator_int__* base869 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t868 + 0);
              struct std__allocator_int_* r870 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(base869);
              _Bool r871 = std__operator__(r867, r870);
              _Bool u872 = !r871;
              ternary865 = (_Bool)u872;
            } else {
              _Bool c873 = 0;
              ternary865 = (_Bool)c873;
            }
            if (ternary865) {
              std__vector_int__std__allocator_int_____clear(t858);
              struct std___Vector_base_int__std__allocator_int__* base874 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t858 + 0);
              struct std___Vector_base_int__std__allocator_int__* base875 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t858 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base876 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base875->_M_impl) + 0);
              int* t877 = base876->_M_start;
              struct std___Vector_base_int__std__allocator_int__* base878 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t858 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base879 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base878->_M_impl) + 0);
              int* t880 = base879->_M_end_of_storage;
              struct std___Vector_base_int__std__allocator_int__* base881 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t858 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base882 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base881->_M_impl) + 0);
              int* t883 = base882->_M_start;
              long diff884 = t880 - t883;
              unsigned long cast885 = (unsigned long)diff884;
              std___Vector_base_int__std__allocator_int______M_deallocate(base874, t877, cast885);
              int* c886 = ((void*)0);
              struct std___Vector_base_int__std__allocator_int__* base887 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t858 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base888 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base887->_M_impl) + 0);
              base888->_M_start = c886;
              int* c889 = ((void*)0);
              struct std___Vector_base_int__std__allocator_int__* base890 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t858 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base891 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base890->_M_impl) + 0);
              base891->_M_finish = c889;
              int* c892 = ((void*)0);
              struct std___Vector_base_int__std__allocator_int__* base893 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t858 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base894 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base893->_M_impl) + 0);
              base894->_M_end_of_storage = c892;
            }
          struct std___Vector_base_int__std__allocator_int__* base895 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t858 + 0);
          struct std__allocator_int_* r896 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base895);
          struct std__vector_int__std__allocator_int__* t897 = __x856;
          struct std___Vector_base_int__std__allocator_int__* base898 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t897 + 0);
          struct std__allocator_int_* r899 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(base898);
          void_std____alloc_on_copy_std__allocator_int___(r896, r899);
        }
      struct std__vector_int__std__allocator_int__* t900 = __x856;
      unsigned long r901 = std__vector_int__std__allocator_int_____size___const(t900);
      __xlen861 = r901;
        unsigned long t902 = __xlen861;
        unsigned long r903 = std__vector_int__std__allocator_int_____capacity___const(t858);
        _Bool c904 = ((t902 > r903)) ? 1 : 0;
        if (c904) {
          int* __tmp905;
          struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp0906;
          struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp1907;
          unsigned long t908 = __xlen861;
          struct std__vector_int__std__allocator_int__* t909 = __x856;
          struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r910 = std__vector_int__std__allocator_int_____begin___const(t909);
          agg_tmp0906 = r910;
          struct std__vector_int__std__allocator_int__* t911 = __x856;
          struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r912 = std__vector_int__std__allocator_int_____end___const(t911);
          agg_tmp1907 = r912;
          struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t913 = agg_tmp0906;
          struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t914 = agg_tmp1907;
          int* r915 = int__std__vector_int__std__allocator_int______M_allocate_and_copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______(t858, t908, t913, t914);
          __tmp905 = r915;
          struct std___Vector_base_int__std__allocator_int__* base916 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t858 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base917 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base916->_M_impl) + 0);
          int* t918 = base917->_M_start;
          struct std___Vector_base_int__std__allocator_int__* base919 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t858 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base920 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base919->_M_impl) + 0);
          int* t921 = base920->_M_finish;
          struct std___Vector_base_int__std__allocator_int__* base922 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t858 + 0);
          struct std__allocator_int_* r923 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base922);
          void_std___Destroy_int___int_(t918, t921, r923);
          struct std___Vector_base_int__std__allocator_int__* base924 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t858 + 0);
          struct std___Vector_base_int__std__allocator_int__* base925 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t858 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base926 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base925->_M_impl) + 0);
          int* t927 = base926->_M_start;
          struct std___Vector_base_int__std__allocator_int__* base928 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t858 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base929 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base928->_M_impl) + 0);
          int* t930 = base929->_M_end_of_storage;
          struct std___Vector_base_int__std__allocator_int__* base931 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t858 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base932 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base931->_M_impl) + 0);
          int* t933 = base932->_M_start;
          long diff934 = t930 - t933;
          unsigned long cast935 = (unsigned long)diff934;
          std___Vector_base_int__std__allocator_int______M_deallocate(base924, t927, cast935);
          int* t936 = __tmp905;
          struct std___Vector_base_int__std__allocator_int__* base937 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t858 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base938 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base937->_M_impl) + 0);
          base938->_M_start = t936;
          struct std___Vector_base_int__std__allocator_int__* base939 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t858 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base940 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base939->_M_impl) + 0);
          int* t941 = base940->_M_start;
          unsigned long t942 = __xlen861;
          int* ptr943 = &(t941)[t942];
          struct std___Vector_base_int__std__allocator_int__* base944 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t858 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base945 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base944->_M_impl) + 0);
          base945->_M_end_of_storage = ptr943;
        } else {
            unsigned long r946 = std__vector_int__std__allocator_int_____size___const(t858);
            unsigned long t947 = __xlen861;
            _Bool c948 = ((r946 >= t947)) ? 1 : 0;
            if (c948) {
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2949;
              struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp3950;
              struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp4951;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp5952;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp6953;
              struct std__vector_int__std__allocator_int__* t954 = __x856;
              struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r955 = std__vector_int__std__allocator_int_____begin___const(t954);
              agg_tmp3950 = r955;
              struct std__vector_int__std__allocator_int__* t956 = __x856;
              struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r957 = std__vector_int__std__allocator_int_____end___const(t956);
              agg_tmp4951 = r957;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r958 = std__vector_int__std__allocator_int_____begin(t858);
              agg_tmp5952 = r958;
              struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t959 = agg_tmp3950;
              struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t960 = agg_tmp4951;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t961 = agg_tmp5952;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r962 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t959, t960, t961);
              agg_tmp2949 = r962;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r963 = std__vector_int__std__allocator_int_____end(t858);
              agg_tmp6953 = r963;
              struct std___Vector_base_int__std__allocator_int__* base964 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t858 + 0);
              struct std__allocator_int_* r965 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base964);
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t966 = agg_tmp2949;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t967 = agg_tmp6953;
              void_std___Destroy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(t966, t967, r965);
            } else {
              struct std__vector_int__std__allocator_int__* t968 = __x856;
              struct std___Vector_base_int__std__allocator_int__* base969 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t968 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base970 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base969->_M_impl) + 0);
              int* t971 = base970->_M_start;
              struct std__vector_int__std__allocator_int__* t972 = __x856;
              struct std___Vector_base_int__std__allocator_int__* base973 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t972 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base974 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base973->_M_impl) + 0);
              int* t975 = base974->_M_start;
              unsigned long r976 = std__vector_int__std__allocator_int_____size___const(t858);
              int* ptr977 = &(t975)[r976];
              struct std___Vector_base_int__std__allocator_int__* base978 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t858 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base979 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base978->_M_impl) + 0);
              int* t980 = base979->_M_start;
              int* r981 = int__std__copy_int___int__(t971, ptr977, t980);
              struct std__vector_int__std__allocator_int__* t982 = __x856;
              struct std___Vector_base_int__std__allocator_int__* base983 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t982 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base984 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base983->_M_impl) + 0);
              int* t985 = base984->_M_start;
              unsigned long r986 = std__vector_int__std__allocator_int_____size___const(t858);
              int* ptr987 = &(t985)[r986];
              struct std__vector_int__std__allocator_int__* t988 = __x856;
              struct std___Vector_base_int__std__allocator_int__* base989 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t988 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base990 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base989->_M_impl) + 0);
              int* t991 = base990->_M_finish;
              struct std___Vector_base_int__std__allocator_int__* base992 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t858 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base993 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base992->_M_impl) + 0);
              int* t994 = base993->_M_finish;
              struct std___Vector_base_int__std__allocator_int__* base995 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t858 + 0);
              struct std__allocator_int_* r996 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base995);
              int* r997 = int__std____uninitialized_copy_a_int___int___int___int_(ptr987, t991, t994, r996);
            }
        }
      struct std___Vector_base_int__std__allocator_int__* base998 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t858 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base999 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base998->_M_impl) + 0);
      int* t1000 = base999->_M_start;
      unsigned long t1001 = __xlen861;
      int* ptr1002 = &(t1000)[t1001];
      struct std___Vector_base_int__std__allocator_int__* base1003 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t858 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1004 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1003->_M_impl) + 0);
      base1004->_M_finish = ptr1002;
    }
  __retval857 = t858;
  struct std__vector_int__std__allocator_int__* t1005 = __retval857;
  return t1005;
}

// function: _ZNSt6vectorIiSaIiEEC2Ev
void std__vector_int__std__allocator_int_____vector_3(struct std__vector_int__std__allocator_int__* v1006) {
bb1007:
  struct std__vector_int__std__allocator_int__* this1008;
  this1008 = v1006;
  struct std__vector_int__std__allocator_int__* t1009 = this1008;
  struct std___Vector_base_int__std__allocator_int__* base1010 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1009 + 0);
  std___Vector_base_int__std__allocator_int______Vector_base_3(base1010);
  return;
}

// function: _ZNKSt12_Vector_baseIiSaIiEE13get_allocatorEv
struct std__allocator_int_ std___Vector_base_int__std__allocator_int_____get_allocator___const(struct std___Vector_base_int__std__allocator_int__* v1011) {
bb1012:
  struct std___Vector_base_int__std__allocator_int__* this1013;
  struct std__allocator_int_ __retval1014;
  this1013 = v1011;
  struct std___Vector_base_int__std__allocator_int__* t1015 = this1013;
  struct std__allocator_int_* r1016 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(t1015);
  std__allocator_int___allocator(&__retval1014, r1016);
  struct std__allocator_int_ t1017 = __retval1014;
  return t1017;
}

// function: _ZNSt6vectorIiSaIiEEC2ERKS0_
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* v1018, struct std__allocator_int_* v1019) {
bb1020:
  struct std__vector_int__std__allocator_int__* this1021;
  struct std__allocator_int_* __a1022;
  this1021 = v1018;
  __a1022 = v1019;
  struct std__vector_int__std__allocator_int__* t1023 = this1021;
  struct std___Vector_base_int__std__allocator_int__* base1024 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1023 + 0);
  struct std__allocator_int_* t1025 = __a1022;
  std___Vector_base_int__std__allocator_int______Vector_base(base1024, t1025);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1026) {
bb1027:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1028;
  this1028 = v1026;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1029 = this1028;
  int* c1030 = ((void*)0);
  t1029->_M_start = c1030;
  int* c1031 = ((void*)0);
  t1029->_M_finish = c1031;
  int* c1032 = ((void*)0);
  t1029->_M_end_of_storage = c1032;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_data12_M_copy_dataERKS2_
void std___Vector_base_int__std__allocator_int______Vector_impl_data___M_copy_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1033, struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1034) {
bb1035:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1036;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* __x1037;
  this1036 = v1033;
  __x1037 = v1034;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1038 = this1036;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1039 = __x1037;
  int* t1040 = t1039->_M_start;
  t1038->_M_start = t1040;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1041 = __x1037;
  int* t1042 = t1041->_M_finish;
  t1038->_M_finish = t1042;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1043 = __x1037;
  int* t1044 = t1043->_M_end_of_storage;
  t1038->_M_end_of_storage = t1044;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_data12_M_swap_dataERS2_
void std___Vector_base_int__std__allocator_int______Vector_impl_data___M_swap_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1045, struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1046) {
bb1047:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1048;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* __x1049;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __tmp1050;
  this1048 = v1045;
  __x1049 = v1046;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1051 = this1048;
  std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(&__tmp1050);
  std___Vector_base_int__std__allocator_int______Vector_impl_data___M_copy_data(&__tmp1050, t1051);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1052 = __x1049;
  std___Vector_base_int__std__allocator_int______Vector_impl_data___M_copy_data(t1051, t1052);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1053 = __x1049;
  std___Vector_base_int__std__allocator_int______Vector_impl_data___M_copy_data(t1053, &__tmp1050);
  return;
}

// function: _ZNSt15__new_allocatorIiEaSERKS0_
struct std____new_allocator_int_* std____new_allocator_int___operator_(struct std____new_allocator_int_* v1054, struct std____new_allocator_int_* v1055) {
bb1056:
  struct std____new_allocator_int_* this1057;
  struct std____new_allocator_int_* unnamed1058;
  struct std____new_allocator_int_* __retval1059;
  this1057 = v1054;
  unnamed1058 = v1055;
  struct std____new_allocator_int_* t1060 = this1057;
  __retval1059 = t1060;
  struct std____new_allocator_int_* t1061 = __retval1059;
  return t1061;
}

// function: _ZNSaIiEaSERKS_
struct std__allocator_int_* std__allocator_int___operator_(struct std__allocator_int_* v1062, struct std__allocator_int_* v1063) {
bb1064:
  struct std__allocator_int_* this1065;
  struct std__allocator_int_* unnamed1066;
  struct std__allocator_int_* __retval1067;
  this1065 = v1062;
  unnamed1066 = v1063;
  struct std__allocator_int_* t1068 = this1065;
  struct std____new_allocator_int_* base1069 = (struct std____new_allocator_int_*)((char *)t1068 + 0);
  struct std__allocator_int_* t1070 = unnamed1066;
  struct std____new_allocator_int_* base1071 = (struct std____new_allocator_int_*)((char *)t1070 + 0);
  struct std____new_allocator_int_* r1072 = std____new_allocator_int___operator_(base1069, base1071);
  __retval1067 = t1068;
  struct std__allocator_int_* t1073 = __retval1067;
  return t1073;
}

// function: _ZSt15__alloc_on_moveISaIiEEvRT_S2_
void void_std____alloc_on_move_std__allocator_int___(struct std__allocator_int_* v1074, struct std__allocator_int_* v1075) {
bb1076:
  struct std__allocator_int_* __one1077;
  struct std__allocator_int_* __two1078;
  __one1077 = v1074;
  __two1078 = v1075;
    struct std__allocator_int_* t1079 = __two1078;
    struct std__allocator_int_* t1080 = __one1077;
    struct std__allocator_int_* r1081 = std__allocator_int___operator_(t1080, t1079);
  return;
}

// function: _ZNSt6vectorIiSaIiEE14_M_move_assignEOS1_St17integral_constantIbLb1EE
void std__vector_int__std__allocator_int______M_move_assign(struct std__vector_int__std__allocator_int__* v1082, struct std__vector_int__std__allocator_int__* v1083, struct std__integral_constant_bool__true_ v1084) {
bb1085:
  struct std__vector_int__std__allocator_int__* this1086;
  struct std__vector_int__std__allocator_int__* __x1087;
  struct std__integral_constant_bool__true_ unnamed1088;
  struct std__vector_int__std__allocator_int__ __tmp1089;
  struct std__allocator_int_ ref_tmp01090;
  this1086 = v1082;
  __x1087 = v1083;
  unnamed1088 = v1084;
  struct std__vector_int__std__allocator_int__* t1091 = this1086;
  struct std___Vector_base_int__std__allocator_int__* base1092 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1091 + 0);
  struct std__allocator_int_ r1093 = std___Vector_base_int__std__allocator_int_____get_allocator___const(base1092);
  ref_tmp01090 = r1093;
    std__vector_int__std__allocator_int_____vector(&__tmp1089, &ref_tmp01090);
  {
    std__allocator_int____allocator(&ref_tmp01090);
  }
    struct std___Vector_base_int__std__allocator_int__* base1094 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1091 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1095 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1094->_M_impl) + 0);
    struct std__vector_int__std__allocator_int__* t1096 = __x1087;
    struct std___Vector_base_int__std__allocator_int__* base1097 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1096 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1098 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1097->_M_impl) + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___M_swap_data(base1095, base1098);
    struct std___Vector_base_int__std__allocator_int__* base1099 = (struct std___Vector_base_int__std__allocator_int__*)((char *)&(__tmp1089) + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1100 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1099->_M_impl) + 0);
    struct std__vector_int__std__allocator_int__* t1101 = __x1087;
    struct std___Vector_base_int__std__allocator_int__* base1102 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1101 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1103 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1102->_M_impl) + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___M_swap_data(base1100, base1103);
    struct std___Vector_base_int__std__allocator_int__* base1104 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1091 + 0);
    struct std__allocator_int_* r1105 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1104);
    struct std__vector_int__std__allocator_int__* t1106 = __x1087;
    struct std___Vector_base_int__std__allocator_int__* base1107 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1106 + 0);
    struct std__allocator_int_* r1108 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1107);
    void_std____alloc_on_move_std__allocator_int___(r1105, r1108);
  {
    std__vector_int__std__allocator_int______vector(&__tmp1089);
  }
  return;
}

// function: _ZNSt6vectorIiSaIiEEaSEOS1_
struct std__vector_int__std__allocator_int__* std__vector_int__std__allocator_int_____operator_(struct std__vector_int__std__allocator_int__* v1109, struct std__vector_int__std__allocator_int__* v1110) {
bb1111:
  struct std__vector_int__std__allocator_int__* this1112;
  struct std__vector_int__std__allocator_int__* __x1113;
  struct std__vector_int__std__allocator_int__* __retval1114;
  _Bool __move_storage1115;
  struct std__integral_constant_bool__true_ agg_tmp01116;
  this1112 = v1109;
  __x1113 = v1110;
  struct std__vector_int__std__allocator_int__* t1117 = this1112;
  _Bool c1118 = 1;
  __move_storage1115 = c1118;
  struct std__vector_int__std__allocator_int__* t1119 = __x1113;
  struct std__integral_constant_bool__true_ t1120 = agg_tmp01116;
  std__vector_int__std__allocator_int______M_move_assign(t1117, t1119, t1120);
  __retval1114 = t1117;
  struct std__vector_int__std__allocator_int__* t1121 = __retval1114;
  return t1121;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v1122) {
bb1123:
  struct std__vector_int__std__allocator_int__* this1124;
  this1124 = v1122;
  struct std__vector_int__std__allocator_int__* t1125 = this1124;
    struct std___Vector_base_int__std__allocator_int__* base1126 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1125 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1127 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1126->_M_impl) + 0);
    int* t1128 = base1127->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base1129 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1125 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1130 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1129->_M_impl) + 0);
    int* t1131 = base1130->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base1132 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1125 + 0);
    struct std__allocator_int_* r1133 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1132);
    void_std___Destroy_int___int_(t1128, t1131, r1133);
  {
    struct std___Vector_base_int__std__allocator_int__* base1134 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1125 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base1134);
  }
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v1135, int v1136) {
bb1137:
  int __a1138;
  int __b1139;
  int __retval1140;
  __a1138 = v1135;
  __b1139 = v1136;
  int t1141 = __a1138;
  int t1142 = __b1139;
  int b1143 = t1141 | t1142;
  __retval1140 = b1143;
  int t1144 = __retval1140;
  return t1144;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v1145) {
bb1146:
  struct std__basic_ios_char__std__char_traits_char__* this1147;
  int __retval1148;
  this1147 = v1145;
  struct std__basic_ios_char__std__char_traits_char__* t1149 = this1147;
  struct std__ios_base* base1150 = (struct std__ios_base*)((char *)t1149 + 0);
  int t1151 = base1150->_M_streambuf_state;
  __retval1148 = t1151;
  int t1152 = __retval1148;
  return t1152;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v1153, int v1154) {
bb1155:
  struct std__basic_ios_char__std__char_traits_char__* this1156;
  int __state1157;
  this1156 = v1153;
  __state1157 = v1154;
  struct std__basic_ios_char__std__char_traits_char__* t1158 = this1156;
  int r1159 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t1158);
  int t1160 = __state1157;
  int r1161 = std__operator_(r1159, t1160);
  std__basic_ios_char__std__char_traits_char_____clear(t1158, r1161);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v1162, char* v1163) {
bb1164:
  char* __c11165;
  char* __c21166;
  _Bool __retval1167;
  __c11165 = v1162;
  __c21166 = v1163;
  char* t1168 = __c11165;
  char t1169 = *t1168;
  int cast1170 = (int)t1169;
  char* t1171 = __c21166;
  char t1172 = *t1171;
  int cast1173 = (int)t1172;
  _Bool c1174 = ((cast1170 == cast1173)) ? 1 : 0;
  __retval1167 = c1174;
  _Bool t1175 = __retval1167;
  return t1175;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v1176) {
bb1177:
  char* __p1178;
  unsigned long __retval1179;
  unsigned long __i1180;
  __p1178 = v1176;
  unsigned long c1181 = 0;
  __i1180 = c1181;
    char ref_tmp01182;
    while (1) {
      unsigned long t1183 = __i1180;
      char* t1184 = __p1178;
      char* ptr1185 = &(t1184)[t1183];
      char c1186 = 0;
      ref_tmp01182 = c1186;
      _Bool r1187 = __gnu_cxx__char_traits_char___eq(ptr1185, &ref_tmp01182);
      _Bool u1188 = !r1187;
      if (!u1188) break;
      unsigned long t1189 = __i1180;
      unsigned long u1190 = t1189 + 1;
      __i1180 = u1190;
    }
  unsigned long t1191 = __i1180;
  __retval1179 = t1191;
  unsigned long t1192 = __retval1179;
  return t1192;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v1193) {
bb1194:
  char* __s1195;
  unsigned long __retval1196;
  __s1195 = v1193;
    _Bool r1197 = std____is_constant_evaluated();
    if (r1197) {
      char* t1198 = __s1195;
      unsigned long r1199 = __gnu_cxx__char_traits_char___length(t1198);
      __retval1196 = r1199;
      unsigned long t1200 = __retval1196;
      return t1200;
    }
  char* t1201 = __s1195;
  unsigned long r1202 = strlen(t1201);
  __retval1196 = r1202;
  unsigned long t1203 = __retval1196;
  return t1203;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1204, char* v1205) {
bb1206:
  struct std__basic_ostream_char__std__char_traits_char__* __out1207;
  char* __s1208;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1209;
  __out1207 = v1204;
  __s1208 = v1205;
    char* t1210 = __s1208;
    _Bool cast1211 = (_Bool)t1210;
    _Bool u1212 = !cast1211;
    if (u1212) {
      struct std__basic_ostream_char__std__char_traits_char__* t1213 = __out1207;
      void** v1214 = (void**)t1213;
      void* v1215 = *((void**)v1214);
      unsigned char* cast1216 = (unsigned char*)v1215;
      long c1217 = -24;
      unsigned char* ptr1218 = &(cast1216)[c1217];
      long* cast1219 = (long*)ptr1218;
      long t1220 = *cast1219;
      unsigned char* cast1221 = (unsigned char*)t1213;
      unsigned char* ptr1222 = &(cast1221)[t1220];
      struct std__basic_ostream_char__std__char_traits_char__* cast1223 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1222;
      struct std__basic_ios_char__std__char_traits_char__* cast1224 = (struct std__basic_ios_char__std__char_traits_char__*)cast1223;
      int t1225 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast1224, t1225);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t1226 = __out1207;
      char* t1227 = __s1208;
      char* t1228 = __s1208;
      unsigned long r1229 = std__char_traits_char___length(t1228);
      long cast1230 = (long)r1229;
      struct std__basic_ostream_char__std__char_traits_char__* r1231 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t1226, t1227, cast1230);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t1232 = __out1207;
  __retval1209 = t1232;
  struct std__basic_ostream_char__std__char_traits_char__* t1233 = __retval1209;
  return t1233;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v1234) {
bb1235:
  struct std__vector_int__std__allocator_int__* this1236;
  unsigned long __retval1237;
  long __dif1238;
  this1236 = v1234;
  struct std__vector_int__std__allocator_int__* t1239 = this1236;
  struct std___Vector_base_int__std__allocator_int__* base1240 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1239 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1241 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1240->_M_impl) + 0);
  int* t1242 = base1241->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base1243 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1239 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1244 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1243->_M_impl) + 0);
  int* t1245 = base1244->_M_start;
  long diff1246 = t1242 - t1245;
  __dif1238 = diff1246;
    long t1247 = __dif1238;
    long c1248 = 0;
    _Bool c1249 = ((t1247 < c1248)) ? 1 : 0;
    if (c1249) {
      __builtin_unreachable();
    }
  long t1250 = __dif1238;
  unsigned long cast1251 = (unsigned long)t1250;
  __retval1237 = cast1251;
  unsigned long t1252 = __retval1237;
  return t1252;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v1253, void* v1254) {
bb1255:
  struct std__basic_ostream_char__std__char_traits_char__* this1256;
  void* __pf1257;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1258;
  this1256 = v1253;
  __pf1257 = v1254;
  struct std__basic_ostream_char__std__char_traits_char__* t1259 = this1256;
  void* t1260 = __pf1257;
  struct std__basic_ostream_char__std__char_traits_char__* r1261 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t1260)(t1259);
  __retval1258 = r1261;
  struct std__basic_ostream_char__std__char_traits_char__* t1262 = __retval1258;
  return t1262;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1263) {
bb1264:
  struct std__basic_ostream_char__std__char_traits_char__* __os1265;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1266;
  __os1265 = v1263;
  struct std__basic_ostream_char__std__char_traits_char__* t1267 = __os1265;
  struct std__basic_ostream_char__std__char_traits_char__* r1268 = std__ostream__flush(t1267);
  __retval1266 = r1268;
  struct std__basic_ostream_char__std__char_traits_char__* t1269 = __retval1266;
  return t1269;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v1270) {
bb1271:
  struct std__ctype_char_* __f1272;
  struct std__ctype_char_* __retval1273;
  __f1272 = v1270;
    struct std__ctype_char_* t1274 = __f1272;
    _Bool cast1275 = (_Bool)t1274;
    _Bool u1276 = !cast1275;
    if (u1276) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t1277 = __f1272;
  __retval1273 = t1277;
  struct std__ctype_char_* t1278 = __retval1273;
  return t1278;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v1279, char v1280) {
bb1281:
  struct std__ctype_char_* this1282;
  char __c1283;
  char __retval1284;
  this1282 = v1279;
  __c1283 = v1280;
  struct std__ctype_char_* t1285 = this1282;
    char t1286 = t1285->_M_widen_ok;
    _Bool cast1287 = (_Bool)t1286;
    if (cast1287) {
      char t1288 = __c1283;
      unsigned char cast1289 = (unsigned char)t1288;
      unsigned long cast1290 = (unsigned long)cast1289;
      char t1291 = t1285->_M_widen[cast1290];
      __retval1284 = t1291;
      char t1292 = __retval1284;
      return t1292;
    }
  std__ctype_char____M_widen_init___const(t1285);
  char t1293 = __c1283;
  void** v1294 = (void**)t1285;
  void* v1295 = *((void**)v1294);
  char vcall1298 = (char)__VERIFIER_virtual_call_char_char(t1285, 6, t1293);
  __retval1284 = vcall1298;
  char t1299 = __retval1284;
  return t1299;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v1300, char v1301) {
bb1302:
  struct std__basic_ios_char__std__char_traits_char__* this1303;
  char __c1304;
  char __retval1305;
  this1303 = v1300;
  __c1304 = v1301;
  struct std__basic_ios_char__std__char_traits_char__* t1306 = this1303;
  struct std__ctype_char_* t1307 = t1306->_M_ctype;
  struct std__ctype_char_* r1308 = std__ctype_char__const__std____check_facet_std__ctype_char___(t1307);
  char t1309 = __c1304;
  char r1310 = std__ctype_char___widen_char__const(r1308, t1309);
  __retval1305 = r1310;
  char t1311 = __retval1305;
  return t1311;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1312) {
bb1313:
  struct std__basic_ostream_char__std__char_traits_char__* __os1314;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1315;
  __os1314 = v1312;
  struct std__basic_ostream_char__std__char_traits_char__* t1316 = __os1314;
  struct std__basic_ostream_char__std__char_traits_char__* t1317 = __os1314;
  void** v1318 = (void**)t1317;
  void* v1319 = *((void**)v1318);
  unsigned char* cast1320 = (unsigned char*)v1319;
  long c1321 = -24;
  unsigned char* ptr1322 = &(cast1320)[c1321];
  long* cast1323 = (long*)ptr1322;
  long t1324 = *cast1323;
  unsigned char* cast1325 = (unsigned char*)t1317;
  unsigned char* ptr1326 = &(cast1325)[t1324];
  struct std__basic_ostream_char__std__char_traits_char__* cast1327 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1326;
  struct std__basic_ios_char__std__char_traits_char__* cast1328 = (struct std__basic_ios_char__std__char_traits_char__*)cast1327;
  char c1329 = 10;
  char r1330 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast1328, c1329);
  struct std__basic_ostream_char__std__char_traits_char__* r1331 = std__ostream__put(t1316, r1330);
  struct std__basic_ostream_char__std__char_traits_char__* r1332 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r1331);
  __retval1315 = r1332;
  struct std__basic_ostream_char__std__char_traits_char__* t1333 = __retval1315;
  return t1333;
}

// function: main
int main() {
bb1334:
  int __retval1335;
  struct std__vector_int__std__allocator_int__ first1336;
  int ref_tmp01337;
  struct std__allocator_int_ ref_tmp11338;
  struct std__vector_int__std__allocator_int__ second1339;
  int ref_tmp21340;
  struct std__allocator_int_ ref_tmp31341;
  struct std__vector_int__std__allocator_int__ ref_tmp41342;
  struct std__vector_int__std__allocator_int__* tmp_exprcleanup1343;
  int c1344 = 0;
  __retval1335 = c1344;
  unsigned long c1345 = 3;
  int c1346 = 0;
  ref_tmp01337 = c1346;
  std__allocator_int___allocator_2(&ref_tmp11338);
    std__vector_int__std__allocator_int_____vector_2(&first1336, c1345, &ref_tmp01337, &ref_tmp11338);
  {
    std__allocator_int____allocator(&ref_tmp11338);
  }
    unsigned long c1347 = 5;
    int c1348 = 0;
    ref_tmp21340 = c1348;
    std__allocator_int___allocator_2(&ref_tmp31341);
      std__vector_int__std__allocator_int_____vector_2(&second1339, c1347, &ref_tmp21340, &ref_tmp31341);
    {
      std__allocator_int____allocator(&ref_tmp31341);
    }
      struct std__vector_int__std__allocator_int__* r1349 = std__vector_int__std__allocator_int_____operator__2(&second1339, &first1336);
      ref_tmp41342 = *&__const_main_ref_tmp4; // copy
      std__vector_int__std__allocator_int_____vector_3(&ref_tmp41342);
        struct std__vector_int__std__allocator_int__* r1350 = std__vector_int__std__allocator_int_____operator_(&first1336, &ref_tmp41342);
        tmp_exprcleanup1343 = r1350;
      {
        std__vector_int__std__allocator_int______vector(&ref_tmp41342);
      }
      struct std__vector_int__std__allocator_int__* t1351 = tmp_exprcleanup1343;
      char* cast1352 = (char*)&(_str);
      struct std__basic_ostream_char__std__char_traits_char__* r1353 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1352);
      unsigned long r1354 = std__vector_int__std__allocator_int_____size___const(&first1336);
      int cast1355 = (int)r1354;
      struct std__basic_ostream_char__std__char_traits_char__* r1356 = std__ostream__operator__(r1353, cast1355);
      struct std__basic_ostream_char__std__char_traits_char__* r1357 = std__ostream__operator___std__ostream_____(r1356, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      char* cast1358 = (char*)&(_str_1);
      struct std__basic_ostream_char__std__char_traits_char__* r1359 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1358);
      unsigned long r1360 = std__vector_int__std__allocator_int_____size___const(&second1339);
      int cast1361 = (int)r1360;
      struct std__basic_ostream_char__std__char_traits_char__* r1362 = std__ostream__operator__(r1359, cast1361);
      struct std__basic_ostream_char__std__char_traits_char__* r1363 = std__ostream__operator___std__ostream_____(r1362, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      int c1364 = 0;
      __retval1335 = c1364;
      int t1365 = __retval1335;
      int ret_val1366 = t1365;
      {
        std__vector_int__std__allocator_int______vector(&second1339);
      }
      {
        std__vector_int__std__allocator_int______vector(&first1336);
      }
      return ret_val1366;
  int t1367 = __retval1335;
  return t1367;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v1368) {
bb1369:
  struct std____new_allocator_int_* this1370;
  this1370 = v1368;
  struct std____new_allocator_int_* t1371 = this1370;
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v1372, unsigned long* v1373) {
bb1374:
  unsigned long* __a1375;
  unsigned long* __b1376;
  unsigned long* __retval1377;
  __a1375 = v1372;
  __b1376 = v1373;
    unsigned long* t1378 = __b1376;
    unsigned long t1379 = *t1378;
    unsigned long* t1380 = __a1375;
    unsigned long t1381 = *t1380;
    _Bool c1382 = ((t1379 < t1381)) ? 1 : 0;
    if (c1382) {
      unsigned long* t1383 = __b1376;
      __retval1377 = t1383;
      unsigned long* t1384 = __retval1377;
      return t1384;
    }
  unsigned long* t1385 = __a1375;
  __retval1377 = t1385;
  unsigned long* t1386 = __retval1377;
  return t1386;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v1387) {
bb1388:
  struct std__allocator_int_* __a1389;
  unsigned long __retval1390;
  unsigned long __diffmax1391;
  unsigned long __allocmax1392;
  __a1389 = v1387;
  unsigned long c1393 = 2305843009213693951;
  __diffmax1391 = c1393;
  unsigned long c1394 = 4611686018427387903;
  __allocmax1392 = c1394;
  unsigned long* r1395 = unsigned_long_const__std__min_unsigned_long_(&__diffmax1391, &__allocmax1392);
  unsigned long t1396 = *r1395;
  __retval1390 = t1396;
  unsigned long t1397 = __retval1390;
  return t1397;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v1398, struct std__allocator_int_* v1399) {
bb1400:
  struct std__allocator_int_* this1401;
  struct std__allocator_int_* __a1402;
  this1401 = v1398;
  __a1402 = v1399;
  struct std__allocator_int_* t1403 = this1401;
  struct std____new_allocator_int_* base1404 = (struct std____new_allocator_int_*)((char *)t1403 + 0);
  struct std__allocator_int_* t1405 = __a1402;
  struct std____new_allocator_int_* base1406 = (struct std____new_allocator_int_*)((char *)t1405 + 0);
  std____new_allocator_int_____new_allocator(base1404, base1406);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v1407, struct std__allocator_int_* v1408) {
bb1409:
  unsigned long __n1410;
  struct std__allocator_int_* __a1411;
  unsigned long __retval1412;
  __n1410 = v1407;
  __a1411 = v1408;
    struct std__allocator_int_ ref_tmp01413;
    _Bool tmp_exprcleanup1414;
    unsigned long t1415 = __n1410;
    struct std__allocator_int_* t1416 = __a1411;
    std__allocator_int___allocator(&ref_tmp01413, t1416);
      unsigned long r1417 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp01413);
      _Bool c1418 = ((t1415 > r1417)) ? 1 : 0;
      tmp_exprcleanup1414 = c1418;
    {
      std__allocator_int____allocator(&ref_tmp01413);
    }
    _Bool t1419 = tmp_exprcleanup1414;
    if (t1419) {
      char* cast1420 = (char*)&(_str_2);
      std____throw_length_error(cast1420);
    }
  unsigned long t1421 = __n1410;
  __retval1412 = t1421;
  unsigned long t1422 = __retval1412;
  return t1422;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1423, struct std__allocator_int_* v1424) {
bb1425:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1426;
  struct std__allocator_int_* __a1427;
  this1426 = v1423;
  __a1427 = v1424;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1428 = this1426;
  struct std__allocator_int_* base1429 = (struct std__allocator_int_*)((char *)t1428 + 0);
  struct std__allocator_int_* t1430 = __a1427;
  std__allocator_int___allocator(base1429, t1430);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1431 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t1428 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base1431);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1432:
  _Bool __retval1433;
    _Bool c1434 = 0;
    __retval1433 = c1434;
    _Bool t1435 = __retval1433;
    return t1435;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v1436) {
bb1437:
  struct std____new_allocator_int_* this1438;
  unsigned long __retval1439;
  this1438 = v1436;
  struct std____new_allocator_int_* t1440 = this1438;
  unsigned long c1441 = 9223372036854775807;
  unsigned long c1442 = 4;
  unsigned long b1443 = c1441 / c1442;
  __retval1439 = b1443;
  unsigned long t1444 = __retval1439;
  return t1444;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v1445, unsigned long v1446, void* v1447) {
bb1448:
  struct std____new_allocator_int_* this1449;
  unsigned long __n1450;
  void* unnamed1451;
  int* __retval1452;
  this1449 = v1445;
  __n1450 = v1446;
  unnamed1451 = v1447;
  struct std____new_allocator_int_* t1453 = this1449;
    unsigned long t1454 = __n1450;
    unsigned long r1455 = std____new_allocator_int____M_max_size___const(t1453);
    _Bool c1456 = ((t1454 > r1455)) ? 1 : 0;
    if (c1456) {
        unsigned long t1457 = __n1450;
        unsigned long c1458 = -1;
        unsigned long c1459 = 4;
        unsigned long b1460 = c1458 / c1459;
        _Bool c1461 = ((t1457 > b1460)) ? 1 : 0;
        if (c1461) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c1462 = 4;
    unsigned long c1463 = 16;
    _Bool c1464 = ((c1462 > c1463)) ? 1 : 0;
    if (c1464) {
      unsigned long __al1465;
      unsigned long c1466 = 4;
      __al1465 = c1466;
      unsigned long t1467 = __n1450;
      unsigned long c1468 = 4;
      unsigned long b1469 = t1467 * c1468;
      unsigned long t1470 = __al1465;
      void* r1471 = operator_new_2(b1469, t1470);
      int* cast1472 = (int*)r1471;
      __retval1452 = cast1472;
      int* t1473 = __retval1452;
      return t1473;
    }
  unsigned long t1474 = __n1450;
  unsigned long c1475 = 4;
  unsigned long b1476 = t1474 * c1475;
  void* r1477 = operator_new(b1476);
  int* cast1478 = (int*)r1477;
  __retval1452 = cast1478;
  int* t1479 = __retval1452;
  return t1479;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v1480, unsigned long v1481) {
bb1482:
  struct std__allocator_int_* this1483;
  unsigned long __n1484;
  int* __retval1485;
  this1483 = v1480;
  __n1484 = v1481;
  struct std__allocator_int_* t1486 = this1483;
    _Bool r1487 = std____is_constant_evaluated();
    if (r1487) {
        unsigned long t1488 = __n1484;
        unsigned long c1489 = 4;
        unsigned long ovr1490;
        _Bool ovf1491 = __builtin_mul_overflow(t1488, c1489, &ovr1490);
        __n1484 = ovr1490;
        if (ovf1491) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1492 = __n1484;
      void* r1493 = operator_new(t1492);
      int* cast1494 = (int*)r1493;
      __retval1485 = cast1494;
      int* t1495 = __retval1485;
      return t1495;
    }
  struct std____new_allocator_int_* base1496 = (struct std____new_allocator_int_*)((char *)t1486 + 0);
  unsigned long t1497 = __n1484;
  void* c1498 = ((void*)0);
  int* r1499 = std____new_allocator_int___allocate(base1496, t1497, c1498);
  __retval1485 = r1499;
  int* t1500 = __retval1485;
  return t1500;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v1501, unsigned long v1502) {
bb1503:
  struct std__allocator_int_* __a1504;
  unsigned long __n1505;
  int* __retval1506;
  __a1504 = v1501;
  __n1505 = v1502;
  struct std__allocator_int_* t1507 = __a1504;
  unsigned long t1508 = __n1505;
  int* r1509 = std__allocator_int___allocate(t1507, t1508);
  __retval1506 = r1509;
  int* t1510 = __retval1506;
  return t1510;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v1511, unsigned long v1512) {
bb1513:
  struct std___Vector_base_int__std__allocator_int__* this1514;
  unsigned long __n1515;
  int* __retval1516;
  this1514 = v1511;
  __n1515 = v1512;
  struct std___Vector_base_int__std__allocator_int__* t1517 = this1514;
  unsigned long t1518 = __n1515;
  unsigned long c1519 = 0;
  _Bool c1520 = ((t1518 != c1519)) ? 1 : 0;
  int* ternary1521;
  if (c1520) {
    struct std__allocator_int_* base1522 = (struct std__allocator_int_*)((char *)&(t1517->_M_impl) + 0);
    unsigned long t1523 = __n1515;
    int* r1524 = std__allocator_traits_std__allocator_int_____allocate(base1522, t1523);
    ternary1521 = (int*)r1524;
  } else {
    int* c1525 = ((void*)0);
    ternary1521 = (int*)c1525;
  }
  __retval1516 = ternary1521;
  int* t1526 = __retval1516;
  return t1526;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* v1527, unsigned long v1528) {
bb1529:
  struct std___Vector_base_int__std__allocator_int__* this1530;
  unsigned long __n1531;
  this1530 = v1527;
  __n1531 = v1528;
  struct std___Vector_base_int__std__allocator_int__* t1532 = this1530;
  unsigned long t1533 = __n1531;
  int* r1534 = std___Vector_base_int__std__allocator_int______M_allocate(t1532, t1533);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1535 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1532->_M_impl) + 0);
  base1535->_M_start = r1534;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1536 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1532->_M_impl) + 0);
  int* t1537 = base1536->_M_start;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1538 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1532->_M_impl) + 0);
  base1538->_M_finish = t1537;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1539 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1532->_M_impl) + 0);
  int* t1540 = base1539->_M_start;
  unsigned long t1541 = __n1531;
  int* ptr1542 = &(t1540)[t1541];
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1543 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1532->_M_impl) + 0);
  base1543->_M_end_of_storage = ptr1542;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1544) {
bb1545:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1546;
  this1546 = v1544;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1547 = this1546;
  {
    struct std__allocator_int_* base1548 = (struct std__allocator_int_*)((char *)t1547 + 0);
    std__allocator_int____allocator(base1548);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_
void std___Vector_base_int__std__allocator_int______Vector_base_2(struct std___Vector_base_int__std__allocator_int__* v1549, unsigned long v1550, struct std__allocator_int_* v1551) {
bb1552:
  struct std___Vector_base_int__std__allocator_int__* this1553;
  unsigned long __n1554;
  struct std__allocator_int_* __a1555;
  this1553 = v1549;
  __n1554 = v1550;
  __a1555 = v1551;
  struct std___Vector_base_int__std__allocator_int__* t1556 = this1553;
  struct std__allocator_int_* t1557 = __a1555;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t1556->_M_impl, t1557);
    unsigned long t1558 = __n1554;
    std___Vector_base_int__std__allocator_int______M_create_storage(t1556, t1558);
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1559:
  _Bool __retval1560;
    _Bool c1561 = 0;
    __retval1560 = c1561;
    _Bool t1562 = __retval1560;
    return t1562;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1563, int** v1564) {
bb1565:
  struct std___UninitDestroyGuard_int____void_* this1566;
  int** __first1567;
  this1566 = v1563;
  __first1567 = v1564;
  struct std___UninitDestroyGuard_int____void_* t1568 = this1566;
  int** t1569 = __first1567;
  int* t1570 = *t1569;
  t1568->_M_first = t1570;
  int** t1571 = __first1567;
  t1568->_M_cur = t1571;
  return;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v1572, int* v1573) {
bb1574:
  int* __location1575;
  int* __args1576;
  int* __retval1577;
  void* __loc1578;
  __location1575 = v1572;
  __args1576 = v1573;
  int* t1579 = __location1575;
  void* cast1580 = (void*)t1579;
  __loc1578 = cast1580;
    void* t1581 = __loc1578;
    int* cast1582 = (int*)t1581;
    int* t1583 = __args1576;
    int t1584 = *t1583;
    *cast1582 = t1584;
    __retval1577 = cast1582;
    int* t1585 = __retval1577;
    return t1585;
  abort();
}

// function: _ZSt10_ConstructIiJRKiEEvPT_DpOT0_
void void_std___Construct_int__int_const__(int* v1586, int* v1587) {
bb1588:
  int* __p1589;
  int* __args1590;
  __p1589 = v1586;
  __args1590 = v1587;
    _Bool r1591 = std____is_constant_evaluated();
    if (r1591) {
      int* t1592 = __p1589;
      int* t1593 = __args1590;
      int* r1594 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1592, t1593);
      return;
    }
  int* t1595 = __p1589;
  void* cast1596 = (void*)t1595;
  int* cast1597 = (int*)cast1596;
  int* t1598 = __args1590;
  int t1599 = *t1598;
  *cast1597 = t1599;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v1600) {
bb1601:
  struct std___UninitDestroyGuard_int____void_* this1602;
  this1602 = v1600;
  struct std___UninitDestroyGuard_int____void_* t1603 = this1602;
  int** c1604 = ((void*)0);
  t1603->_M_cur = c1604;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1605) {
bb1606:
  struct std___UninitDestroyGuard_int____void_* this1607;
  this1607 = v1605;
  struct std___UninitDestroyGuard_int____void_* t1608 = this1607;
    int** t1609 = t1608->_M_cur;
    int** c1610 = ((void*)0);
    _Bool c1611 = ((t1609 != c1610)) ? 1 : 0;
    if (c1611) {
      int* t1612 = t1608->_M_first;
      int** t1613 = t1608->_M_cur;
      int* t1614 = *t1613;
      void_std___Destroy_int__(t1612, t1614);
    }
  return;
}

// function: _ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_
int* int__std____do_uninit_fill_n_int___unsigned_long__int_(int* v1615, unsigned long v1616, int* v1617) {
bb1618:
  int* __first1619;
  unsigned long __n1620;
  int* __x1621;
  int* __retval1622;
  struct std___UninitDestroyGuard_int____void_ __guard1623;
  __first1619 = v1615;
  __n1620 = v1616;
  __x1621 = v1617;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard1623, &__first1619);
        do {
              unsigned long t1624 = __n1620;
              unsigned long c1625 = 0;
              _Bool c1626 = ((t1624 >= c1625)) ? 1 : 0;
              _Bool u1627 = !c1626;
              if (u1627) {
                char* cast1628 = (char*)&(_str_3);
                int c1629 = 463;
                char* cast1630 = (char*)&(__PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_);
                char* cast1631 = (char*)&(_str_4);
                std____glibcxx_assert_fail(cast1628, c1629, cast1630, cast1631);
              }
          _Bool c1632 = 0;
          if (!c1632) break;
        } while (1);
      while (1) {
        unsigned long t1634 = __n1620;
        unsigned long u1635 = t1634 - 1;
        __n1620 = u1635;
        _Bool cast1636 = (_Bool)t1634;
        if (!cast1636) break;
        int* t1637 = __first1619;
        int* t1638 = __x1621;
        void_std___Construct_int__int_const__(t1637, t1638);
      for_step1633: ;
        int* t1639 = __first1619;
        int c1640 = 1;
        int* ptr1641 = &(t1639)[c1640];
        __first1619 = ptr1641;
      }
    std___UninitDestroyGuard_int___void___release(&__guard1623);
    int* t1642 = __first1619;
    __retval1622 = t1642;
    int* t1643 = __retval1622;
    int* ret_val1644 = t1643;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1623);
    }
    return ret_val1644;
  abort();
}

// function: _ZSt20uninitialized_fill_nIPimiET_S1_T0_RKT1_
int* int__std__uninitialized_fill_n_int___unsigned_long__int_(int* v1645, unsigned long v1646, int* v1647) {
bb1648:
  int* __first1649;
  unsigned long __n1650;
  int* __x1651;
  int* __retval1652;
  __first1649 = v1645;
  __n1650 = v1646;
  __x1651 = v1647;
  int* t1653 = __first1649;
  unsigned long t1654 = __n1650;
  int* t1655 = __x1651;
  int* r1656 = int__std____do_uninit_fill_n_int___unsigned_long__int_(t1653, t1654, t1655);
  __retval1652 = r1656;
  int* t1657 = __retval1652;
  return t1657;
}

// function: _ZSt24__uninitialized_fill_n_aIPimiiET_S1_T0_RKT1_RSaIT2_E
int* int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(int* v1658, unsigned long v1659, int* v1660, struct std__allocator_int_* v1661) {
bb1662:
  int* __first1663;
  unsigned long __n1664;
  int* __x1665;
  struct std__allocator_int_* unnamed1666;
  int* __retval1667;
  __first1663 = v1658;
  __n1664 = v1659;
  __x1665 = v1660;
  unnamed1666 = v1661;
    _Bool r1668 = std__is_constant_evaluated();
    if (r1668) {
      int* t1669 = __first1663;
      unsigned long t1670 = __n1664;
      int* t1671 = __x1665;
      int* r1672 = int__std____do_uninit_fill_n_int___unsigned_long__int_(t1669, t1670, t1671);
      __retval1667 = r1672;
      int* t1673 = __retval1667;
      return t1673;
    }
  int* t1674 = __first1663;
  unsigned long t1675 = __n1664;
  int* t1676 = __x1665;
  int* r1677 = int__std__uninitialized_fill_n_int___unsigned_long__int_(t1674, t1675, t1676);
  __retval1667 = r1677;
  int* t1678 = __retval1667;
  return t1678;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v1679) {
bb1680:
  struct std___Vector_base_int__std__allocator_int__* this1681;
  struct std__allocator_int_* __retval1682;
  this1681 = v1679;
  struct std___Vector_base_int__std__allocator_int__* t1683 = this1681;
  struct std__allocator_int_* base1684 = (struct std__allocator_int_*)((char *)&(t1683->_M_impl) + 0);
  __retval1682 = base1684;
  struct std__allocator_int_* t1685 = __retval1682;
  return t1685;
}

// function: _ZNSt6vectorIiSaIiEE18_M_fill_initializeEmRKi
void std__vector_int__std__allocator_int______M_fill_initialize(struct std__vector_int__std__allocator_int__* v1686, unsigned long v1687, int* v1688) {
bb1689:
  struct std__vector_int__std__allocator_int__* this1690;
  unsigned long __n1691;
  int* __value1692;
  this1690 = v1686;
  __n1691 = v1687;
  __value1692 = v1688;
  struct std__vector_int__std__allocator_int__* t1693 = this1690;
  struct std___Vector_base_int__std__allocator_int__* base1694 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1693 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1695 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1694->_M_impl) + 0);
  int* t1696 = base1695->_M_start;
  unsigned long t1697 = __n1691;
  int* t1698 = __value1692;
  struct std___Vector_base_int__std__allocator_int__* base1699 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1693 + 0);
  struct std__allocator_int_* r1700 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1699);
  int* r1701 = int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(t1696, t1697, t1698, r1700);
  struct std___Vector_base_int__std__allocator_int__* base1702 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1693 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1703 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1702->_M_impl) + 0);
  base1703->_M_finish = r1701;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1704, int* v1705, unsigned long v1706) {
bb1707:
  struct std____new_allocator_int_* this1708;
  int* __p1709;
  unsigned long __n1710;
  this1708 = v1704;
  __p1709 = v1705;
  __n1710 = v1706;
  struct std____new_allocator_int_* t1711 = this1708;
    unsigned long c1712 = 4;
    unsigned long c1713 = 16;
    _Bool c1714 = ((c1712 > c1713)) ? 1 : 0;
    if (c1714) {
      int* t1715 = __p1709;
      void* cast1716 = (void*)t1715;
      unsigned long t1717 = __n1710;
      unsigned long c1718 = 4;
      unsigned long b1719 = t1717 * c1718;
      unsigned long c1720 = 4;
      operator_delete_3(cast1716, b1719, c1720);
      return;
    }
  int* t1721 = __p1709;
  void* cast1722 = (void*)t1721;
  unsigned long t1723 = __n1710;
  unsigned long c1724 = 4;
  unsigned long b1725 = t1723 * c1724;
  operator_delete_2(cast1722, b1725);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1726, int* v1727, unsigned long v1728) {
bb1729:
  struct std__allocator_int_* this1730;
  int* __p1731;
  unsigned long __n1732;
  this1730 = v1726;
  __p1731 = v1727;
  __n1732 = v1728;
  struct std__allocator_int_* t1733 = this1730;
    _Bool r1734 = std____is_constant_evaluated();
    if (r1734) {
      int* t1735 = __p1731;
      void* cast1736 = (void*)t1735;
      operator_delete(cast1736);
      return;
    }
  struct std____new_allocator_int_* base1737 = (struct std____new_allocator_int_*)((char *)t1733 + 0);
  int* t1738 = __p1731;
  unsigned long t1739 = __n1732;
  std____new_allocator_int___deallocate(base1737, t1738, t1739);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1740, int* v1741, unsigned long v1742) {
bb1743:
  struct std__allocator_int_* __a1744;
  int* __p1745;
  unsigned long __n1746;
  __a1744 = v1740;
  __p1745 = v1741;
  __n1746 = v1742;
  struct std__allocator_int_* t1747 = __a1744;
  int* t1748 = __p1745;
  unsigned long t1749 = __n1746;
  std__allocator_int___deallocate(t1747, t1748, t1749);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v1750, int* v1751, unsigned long v1752) {
bb1753:
  struct std___Vector_base_int__std__allocator_int__* this1754;
  int* __p1755;
  unsigned long __n1756;
  this1754 = v1750;
  __p1755 = v1751;
  __n1756 = v1752;
  struct std___Vector_base_int__std__allocator_int__* t1757 = this1754;
    int* t1758 = __p1755;
    _Bool cast1759 = (_Bool)t1758;
    if (cast1759) {
      struct std__allocator_int_* base1760 = (struct std__allocator_int_*)((char *)&(t1757->_M_impl) + 0);
      int* t1761 = __p1755;
      unsigned long t1762 = __n1756;
      std__allocator_traits_std__allocator_int_____deallocate(base1760, t1761, t1762);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1763) {
bb1764:
  struct std___Vector_base_int__std__allocator_int__* this1765;
  this1765 = v1763;
  struct std___Vector_base_int__std__allocator_int__* t1766 = this1765;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1767 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1766->_M_impl) + 0);
    int* t1768 = base1767->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1769 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1766->_M_impl) + 0);
    int* t1770 = base1769->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1771 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1766->_M_impl) + 0);
    int* t1772 = base1771->_M_start;
    long diff1773 = t1770 - t1772;
    unsigned long cast1774 = (unsigned long)diff1773;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1766, t1768, cast1774);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1766->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1775, struct std____new_allocator_int_* v1776) {
bb1777:
  struct std____new_allocator_int_* this1778;
  struct std____new_allocator_int_* unnamed1779;
  this1778 = v1775;
  unnamed1779 = v1776;
  struct std____new_allocator_int_* t1780 = this1778;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1781) {
bb1782:
  int* __location1783;
  __location1783 = v1781;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1784, int* v1785) {
bb1786:
  int* __first1787;
  int* __last1788;
  __first1787 = v1784;
  __last1788 = v1785;
      _Bool r1789 = std____is_constant_evaluated();
      if (r1789) {
          while (1) {
            int* t1791 = __first1787;
            int* t1792 = __last1788;
            _Bool c1793 = ((t1791 != t1792)) ? 1 : 0;
            if (!c1793) break;
            int* t1794 = __first1787;
            void_std__destroy_at_int_(t1794);
          for_step1790: ;
            int* t1795 = __first1787;
            int c1796 = 1;
            int* ptr1797 = &(t1795)[c1796];
            __first1787 = ptr1797;
          }
      }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1798) {
bb1799:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1800;
  this1800 = v1798;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1801 = this1800;
  struct std__allocator_int_* base1802 = (struct std__allocator_int_*)((char *)t1801 + 0);
  std__allocator_int___allocator_2(base1802);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1803 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t1801 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base1803);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2Ev
void std___Vector_base_int__std__allocator_int______Vector_base_3(struct std___Vector_base_int__std__allocator_int__* v1804) {
bb1805:
  struct std___Vector_base_int__std__allocator_int__* this1806;
  this1806 = v1804;
  struct std___Vector_base_int__std__allocator_int__* t1807 = this1806;
  _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(&t1807->_M_impl);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1808, struct std__allocator_int_* v1809) {
bb1810:
  struct std___Vector_base_int__std__allocator_int__* this1811;
  struct std__allocator_int_* __a1812;
  this1811 = v1808;
  __a1812 = v1809;
  struct std___Vector_base_int__std__allocator_int__* t1813 = this1811;
  struct std__allocator_int_* t1814 = __a1812;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t1813->_M_impl, t1814);
  return;
}

