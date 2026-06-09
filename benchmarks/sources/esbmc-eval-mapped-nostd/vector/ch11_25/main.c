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
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____normal_iterator_int____void_ { int* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____cmp_cat____unspec { unsigned char __field0; };
struct std____detail___Synth3way { unsigned char __field0; };
struct std____detail____move_iter_cat_int___ { unsigned char __field0; };
struct std____new_allocator_int_ { unsigned char __field0; };
struct std__allocator_int_ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__move_iterator_int___ { int* _M_current; };
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__ranges____imove___IterMove { unsigned char __field0; };
struct std__strong_ordering { char _M_value; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
union std__vector_int__std__allocator_int_____Temporary_value___Storage { unsigned char _M_byte; int _M_val; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std__vector_int__std__allocator_int_____Temporary_value { struct std__vector_int__std__allocator_int__* _M_this; union std__vector_int__std__allocator_int_____Temporary_value___Storage _M_storage; unsigned char __field2[4]; } __attribute__((packed));
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

struct std____cmp_cat____unspec __const_main_agg_tmp10;
int __const_main_myarray[3] = {501, 502, 503};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[19] = "myvector contains:";
char _str_1[2] = " ";
char _str_2[49] = "cannot create std::vector larger than max_size()";
char _str_3[98] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_uninitialized.h";
char __PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_[140] = "_ForwardIterator std::__do_uninit_fill_n(_ForwardIterator, _Size _Tp &) [_ForwardIterator = int *, _Size = unsigned long, _Tp = int]";
char _str_4[9] = "__n >= 0";
char _str_5[26] = "vector::_M_realloc_insert";
char _str_6[23] = "vector::_M_fill_insert";
char _str_7[23] = "vector::_M_fill_append";
struct std__ranges____imove___IterMove _ZNSt6ranges4_Cpo9iter_moveE;
char _str_8[24] = "vector::_M_range_insert";
struct std____detail___Synth3way _ZNSt8__detail11__synth3wayE;
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, int* p2, struct std__allocator_int_* p3);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
int** __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0);
long __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int_const___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p1);
void __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____cbegin___const(struct std__vector_int__std__allocator_int__* p0);
_Bool _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p1);
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____cend___const(struct std__vector_int__std__allocator_int__* p0);
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* p0, int* p1, int* p2);
int* int__std____niter_wrap_int__(int** p0, int* p1);
long std__iterator_traits_int____difference_type_std____distance_int__(int* p0, int* p1, struct std__random_access_iterator_tag p2);
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** p0);
long std__iterator_traits_int____difference_type_std__distance_int__(int* p0, int* p1);
void void_std____advance_int___long_(int** p0, long p1, struct std__random_access_iterator_tag p2);
void void_std__advance_int___long_(int** p0, long p1);
extern void* memmove(void* p0, void* p1, unsigned long p2);
void void_std____assign_one_true__int___int__(int** p0, int** p1);
int* int__std____copy_move_backward_a2_true__int___int__(int* p0, int* p1, int* p2);
int* int__std____copy_move_backward_a1_true__int___int__(int* p0, int* p1, int* p2);
int* int__std____niter_base_int__(int* p0);
int* int__std____copy_move_backward_a_true__int___int__(int* p0, int* p1, int* p2);
int* int__std____miter_base_int__(int* p0);
int* int__std__move_backward_int___int__(int* p0, int* p1, int* p2);
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
void void_std__vector_int__std__allocator_int______M_insert_aux_int_(struct std__vector_int__std__allocator_int__* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* p0);
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* p0);
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, char* p2);
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* p0, int* p1, unsigned long p2, struct std___Vector_base_int__std__allocator_int__* p3);
int* int__std__to_address_int_(int* p0);
int* auto_std____to_address_int__(int** p0);
void __gnu_cxx____normal_iterator_int___void_____normal_iterator(struct __gnu_cxx____normal_iterator_int____void_* p0, int** p1);
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* p0, int* p1);
void void_std____relocate_object_a_int__int__std__allocator_int___(int* p0, int* p1, struct std__allocator_int_* p2);
int* __gnu_cxx____normal_iterator_int___void___operator____const(struct __gnu_cxx____normal_iterator_int____void_* p0);
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator__(struct __gnu_cxx____normal_iterator_int____void_* p0);
struct __gnu_cxx____normal_iterator_int____void_ __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(int* p0, int* p1, struct __gnu_cxx____normal_iterator_int____void_ p2, struct std__allocator_int_* p3);
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator_(struct __gnu_cxx____normal_iterator_int____void_* p0, struct __gnu_cxx____normal_iterator_int____void_* p1);
int** __gnu_cxx____normal_iterator_int___void___base___const(struct __gnu_cxx____normal_iterator_int____void_* p0);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
int* std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
int* int__std____relocate_a_int___int___std__allocator_int___(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
int* std__vector_int__std__allocator_int______S_relocate(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* p0);
void void_std__vector_int__std__allocator_int______M_realloc_insert_int_(struct std__vector_int__std__allocator_int__* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int______M_insert_rval(struct std__vector_int__std__allocator_int__* p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p1, int* p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____insert(struct std__vector_int__std__allocator_int__* p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p1, int* p2);
void _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2IPiQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
void std__vector_int__std__allocator_int______M_fill_append(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, int* p2);
void std__vector_int__std__allocator_int______Temporary_value___Temporary_value_int_const__(struct std__vector_int__std__allocator_int_____Temporary_value* p0, struct std__vector_int__std__allocator_int__* p1, int* p2);
int* std__vector_int__std__allocator_int______Temporary_value___M_val(struct std__vector_int__std__allocator_int_____Temporary_value* p0);
int** std__move_iterator_int____base___const__(struct std__move_iterator_int___* p0);
_Bool bool_std__operator___int__(struct std__move_iterator_int___* p0, struct std__move_iterator_int___* p1);
void void_std___Construct_int__int_(int* p0, int* p1);
int* _ZNKSt6ranges7__imove9_IterMoveclIRKPiQoo11__adl_imoveIT_ErqTDTdeclsr3stdE7declvalIS6_EEEEEENS1_8__resultIS6_E4typeEOS6_(struct std__ranges____imove___IterMove* p0, int** p1);
int* std__move_iterator_int____operator____const(struct std__move_iterator_int___* p0);
struct std__move_iterator_int___* std__move_iterator_int____operator__(struct std__move_iterator_int___* p0);
int* int__std____do_uninit_copy_std__move_iterator_int____std__move_iterator_int____int__(struct std__move_iterator_int___ p0, struct std__move_iterator_int___ p1, int* p2);
int* int__std__uninitialized_copy_std__move_iterator_int____int__(struct std__move_iterator_int___ p0, struct std__move_iterator_int___ p1, int* p2);
int* int__std____uninitialized_copy_a_std__move_iterator_int____std__move_iterator_int____int___int_(struct std__move_iterator_int___ p0, struct std__move_iterator_int___ p1, int* p2, struct std__allocator_int_* p3);
void std__move_iterator_int____move_iterator(struct std__move_iterator_int___* p0, int* p1);
struct std__move_iterator_int___ std__move_iterator_int___std__make_move_iterator_int__(int* p0);
int* int__std____uninitialized_move_a_int___int___std__allocator_int___(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
void void_std____fill_a1_int___int_(int* p0, int* p1, int* p2);
void void_std____fill_a_int___int_(int* p0, int* p1, int* p2);
void void_std__fill_int___int_(int* p0, int* p1, int* p2);
void std__vector_int__std__allocator_int______Temporary_value____Temporary_value(struct std__vector_int__std__allocator_int_____Temporary_value* p0);
extern int __gxx_personality_v0();
struct std__move_iterator_int___ std__move_iterator_int___std____make_move_if_noexcept_iterator_int__std__move_iterator_int____(int* p0);
int* int__std____uninitialized_move_if_noexcept_a_int___int___std__allocator_int___(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);
void std__vector_int__std__allocator_int______M_fill_insert(struct std__vector_int__std__allocator_int__* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, unsigned long p2, int* p3);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____insert_2(struct std__vector_int__std__allocator_int__* p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p1, unsigned long p2, int* p3);
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
long std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________difference_type_std____distance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct std__random_access_iterator_tag p2);
long std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________difference_type_std__distance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____niter_wrap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, int* p1);
void void_std____assign_one_false__int___int__(int** p0, int** p1);
int* int__std____copy_move_a2_false__int___int___int__(int* p0, int* p1, int* p2);
int* int__std____copy_move_a1_false__int___int__(int* p0, int* p1, int* p2);
int* int__std____niter_base_int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____copy_move_a_false____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___4(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
void void_std____advance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1, struct std__random_access_iterator_tag p2);
void void_std__advance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______unsigned_long_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, unsigned long p1);
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* p0, int* p1);
void void_std___Construct_int__int__(int* p0, int* p1);
int* int__std____do_uninit_copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2);
int* int__std__uninitialized_copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2);
int* int__std____uninitialized_copy_a___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2, struct std__allocator_int_* p3);
void void_std__vector_int__std__allocator_int______M_range_insert___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct std__vector_int__std__allocator_int__* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p3, struct std__forward_iterator_tag p4);
struct std__random_access_iterator_tag std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__vector_int__std__allocator_int_____insert___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______void_(struct std__vector_int__std__allocator_int__* p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p3);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____copy_move_a_false__int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(int* p0, int* p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__copy_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(int* p0, int* p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
void void_std__advance_int___unsigned_long_(int** p0, unsigned long p1);
int* int__std____do_uninit_copy_int___int___int__(int* p0, int* p1, int* p2);
int* int__std__uninitialized_copy_int___int__(int* p0, int* p1, int* p2);
int* int__std____uninitialized_copy_a_int___int___int___int_(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
void void_std__vector_int__std__allocator_int______M_range_insert_int__(struct std__vector_int__std__allocator_int__* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2, int* p3, struct std__forward_iterator_tag p4);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__vector_int__std__allocator_int_____insert_int___void_(struct std__vector_int__std__allocator_int__* p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p1, int* p2, int* p3);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator__2(int p0, int p1);
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* p0);
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1, long p2);
_Bool __gnu_cxx__char_traits_char___eq(char* p0, char* p1);
unsigned long __gnu_cxx__char_traits_char___length(char* p0);
extern unsigned long strlen(char* p0);
unsigned long std__char_traits_char___length(char* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, char* p1);
_Bool std__operator_(struct std__strong_ordering p0, struct std____cmp_cat____unspec p1);
struct std__strong_ordering _ZNKSt8__detail10_Synth3wayclIPiS2_EEDaRKT_RKT0_QrqXltfp_fp0_RNS_18__boolean_testableEXltfp0_fp_RNS_18__boolean_testableEE(struct std____detail___Synth3way* p0, int** p1, int** p2);
struct std__strong_ordering decltype__std____detail____synth3way__std__declval_int_________std__declval_int___________gnu_cxx__operator____int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___3(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int p1);
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
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* p0);
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
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* p0, unsigned long p1, struct std__allocator_int_* p2);
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
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p0);
void void_std__destroy_at_int_(int* p0);
void void_std___Destroy_int__(int* p0, int* p1);
void std__vector_int__std__allocator_int______Temporary_value___Storage___Storage(union std__vector_int__std__allocator_int_____Temporary_value___Storage* p0);
void void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(struct std__allocator_int_* p0, int* p1, int* p2);
int* std__vector_int__std__allocator_int______Temporary_value___M_ptr(struct std__vector_int__std__allocator_int_____Temporary_value* p0);
void std__vector_int__std__allocator_int______Temporary_value___Storage____Storage(union std__vector_int__std__allocator_int_____Temporary_value___Storage* p0);

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
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* v5, unsigned long v6, int* v7, struct std__allocator_int_* v8) {
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
  if (__cir_exc_active) {
    return;
  }
  struct std__allocator_int_* t19 = __a13;
  std___Vector_base_int__std__allocator_int______Vector_base(base15, r18, t19);
  if (__cir_exc_active) {
    return;
  }
    unsigned long t20 = __n11;
    int* t21 = __value12;
    std__vector_int__std__allocator_int______M_fill_initialize(t14, t20, t21);
    if (__cir_exc_active) {
      {
        struct std___Vector_base_int__std__allocator_int__* base22 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t14 + 0);
        std___Vector_base_int__std__allocator_int_______Vector_base(base22);
      }
      return;
    }
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v23) {
bb24:
  struct std__allocator_int_* this25;
  this25 = v23;
  struct std__allocator_int_* t26 = this25;
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2Ev
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v27) {
bb28:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this29;
  this29 = v27;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t30 = this29;
  int* c31 = ((void*)0);
  t30->_M_current = c31;
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v32, int** v33) {
bb34:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this35;
  int** __i36;
  this35 = v32;
  __i36 = v33;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t37 = this35;
  int** t38 = __i36;
  int* t39 = *t38;
  t37->_M_current = t39;
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v40) {
bb41:
  struct std__vector_int__std__allocator_int__* this42;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval43;
  this42 = v40;
  struct std__vector_int__std__allocator_int__* t44 = this42;
  struct std___Vector_base_int__std__allocator_int__* base45 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t44 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base46 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base45->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval43, &base46->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t47 = __retval43;
  return t47;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSEOS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v48, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v49) {
bb50:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this51;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed52;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval53;
  this51 = v48;
  unnamed52 = v49;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t54 = this51;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t55 = unnamed52;
  int* t56 = t55->_M_current;
  t54->_M_current = t56;
  __retval53 = t54;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t57 = __retval53;
  return t57;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v58) {
bb59:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this60;
  int** __retval61;
  this60 = v58;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t62 = this60;
  __retval61 = &t62->_M_current;
  int** t63 = __retval61;
  return t63;
}

// function: _ZN9__gnu_cxxmiIPKiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS9_SC_
long __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int_const___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v64, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v65) {
bb66:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __lhs67;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __rhs68;
  long __retval69;
  __lhs67 = v64;
  __rhs68 = v65;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t70 = __lhs67;
  int** r71 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t70);
  int* t72 = *r71;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t73 = __rhs68;
  int** r74 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t73);
  int* t75 = *r74;
  long diff76 = t72 - t75;
  __retval69 = diff76;
  long t77 = __retval69;
  return t77;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2ERKS2_
void __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v78, int** v79) {
bb80:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this81;
  int** __i82;
  this81 = v78;
  __i82 = v79;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t83 = this81;
  int** t84 = __i82;
  int* t85 = *t84;
  t83->_M_current = t85;
  return;
}

// function: _ZNKSt6vectorIiSaIiEE6cbeginEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____cbegin___const(struct std__vector_int__std__allocator_int__* v86) {
bb87:
  struct std__vector_int__std__allocator_int__* this88;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval89;
  this88 = v86;
  struct std__vector_int__std__allocator_int__* t90 = this88;
  struct std___Vector_base_int__std__allocator_int__* base91 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t90 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base92 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base91->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval89, &base92->_M_start);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t93 = __retval89;
  return t93;
}

// function: _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v94, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v95) {
bb96:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __lhs97;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __rhs98;
  _Bool __retval99;
  __lhs97 = v94;
  __rhs98 = v95;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t100 = __lhs97;
  int** r101 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t100);
  int* t102 = *r101;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t103 = __rhs98;
  int** r104 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t103);
  int* t105 = *r104;
  _Bool c106 = ((t102 == t105)) ? 1 : 0;
  __retval99 = c106;
  _Bool t107 = __retval99;
  return t107;
}

// function: _ZNKSt6vectorIiSaIiEE4cendEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____cend___const(struct std__vector_int__std__allocator_int__* v108) {
bb109:
  struct std__vector_int__std__allocator_int__* this110;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval111;
  this110 = v108;
  struct std__vector_int__std__allocator_int__* t112 = this110;
  struct std___Vector_base_int__std__allocator_int__* base113 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t112 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base114 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base113->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval111, &base114->_M_finish);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t115 = __retval111;
  return t115;
}

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v116, int* v117) {
bb118:
  int* __location119;
  int* __args120;
  int* __retval121;
  void* __loc122;
  __location119 = v116;
  __args120 = v117;
  int* t123 = __location119;
  void* cast124 = (void*)t123;
  __loc122 = cast124;
    void* t125 = __loc122;
    int* cast126 = (int*)t125;
    int* t127 = __args120;
    int t128 = *t127;
    *cast126 = t128;
    __retval121 = cast126;
    int* t129 = __retval121;
    return t129;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* v130, int* v131, int* v132) {
bb133:
  struct std__allocator_int_* __a134;
  int* __p135;
  int* __args136;
  __a134 = v130;
  __p135 = v131;
  __args136 = v132;
  int* t137 = __p135;
  int* t138 = __args136;
  int* r139 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t137, t138);
  return;
}

// function: _ZSt12__niter_wrapIPiET_RKS1_S1_
int* int__std____niter_wrap_int__(int** v140, int* v141) {
bb142:
  int** unnamed143;
  int* __res144;
  int* __retval145;
  unnamed143 = v140;
  __res144 = v141;
  int* t146 = __res144;
  __retval145 = t146;
  int* t147 = __retval145;
  return t147;
}

// function: _ZSt10__distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_St26random_access_iterator_tag
long std__iterator_traits_int____difference_type_std____distance_int__(int* v148, int* v149, struct std__random_access_iterator_tag v150) {
bb151:
  int* __first152;
  int* __last153;
  struct std__random_access_iterator_tag unnamed154;
  long __retval155;
  __first152 = v148;
  __last153 = v149;
  unnamed154 = v150;
  int* t156 = __last153;
  int* t157 = __first152;
  long diff158 = t156 - t157;
  __retval155 = diff158;
  long t159 = __retval155;
  return t159;
}

// function: _ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** v160) {
bb161:
  int** unnamed162;
  struct std__random_access_iterator_tag __retval163;
  unnamed162 = v160;
  struct std__random_access_iterator_tag t164 = __retval163;
  return t164;
}

// function: _ZSt8distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_
long std__iterator_traits_int____difference_type_std__distance_int__(int* v165, int* v166) {
bb167:
  int* __first168;
  int* __last169;
  long __retval170;
  struct std__random_access_iterator_tag agg_tmp0171;
  __first168 = v165;
  __last169 = v166;
  int* t172 = __first168;
  int* t173 = __last169;
  struct std__random_access_iterator_tag r174 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first168);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  agg_tmp0171 = r174;
  struct std__random_access_iterator_tag t175 = agg_tmp0171;
  long r176 = std__iterator_traits_int____difference_type_std____distance_int__(t172, t173, t175);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  __retval170 = r176;
  long t177 = __retval170;
  return t177;
}

// function: _ZSt9__advanceIPilEvRT_T0_St26random_access_iterator_tag
void void_std____advance_int___long_(int** v178, long v179, struct std__random_access_iterator_tag v180) {
bb181:
  int** __i182;
  long __n183;
  struct std__random_access_iterator_tag unnamed184;
  __i182 = v178;
  __n183 = v179;
  unnamed184 = v180;
    long t185 = __n183;
    _Bool isconst186 = 0;
    _Bool ternary187;
    if (isconst186) {
      long t188 = __n183;
      long c189 = 1;
      _Bool c190 = ((t188 == c189)) ? 1 : 0;
      ternary187 = (_Bool)c190;
    } else {
      _Bool c191 = 0;
      ternary187 = (_Bool)c191;
    }
    if (ternary187) {
      int** t192 = __i182;
      int* t193 = *t192;
      int c194 = 1;
      int* ptr195 = &(t193)[c194];
      *t192 = ptr195;
    } else {
        long t196 = __n183;
        _Bool isconst197 = 0;
        _Bool ternary198;
        if (isconst197) {
          long t199 = __n183;
          long c200 = -1;
          _Bool c201 = ((t199 == c200)) ? 1 : 0;
          ternary198 = (_Bool)c201;
        } else {
          _Bool c202 = 0;
          ternary198 = (_Bool)c202;
        }
        if (ternary198) {
          int** t203 = __i182;
          int* t204 = *t203;
          int c205 = -1;
          int* ptr206 = &(t204)[c205];
          *t203 = ptr206;
        } else {
          long t207 = __n183;
          int** t208 = __i182;
          int* t209 = *t208;
          int* ptr210 = &(t209)[t207];
          *t208 = ptr210;
        }
    }
  return;
}

// function: _ZSt7advanceIPilEvRT_T0_
void void_std__advance_int___long_(int** v211, long v212) {
bb213:
  int** __i214;
  long __n215;
  long __d216;
  struct std__random_access_iterator_tag agg_tmp0217;
  __i214 = v211;
  __n215 = v212;
  long t218 = __n215;
  __d216 = t218;
  int** t219 = __i214;
  long t220 = __d216;
  int** t221 = __i214;
  struct std__random_access_iterator_tag r222 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(t221);
  if (__cir_exc_active) {
    return;
  }
  agg_tmp0217 = r222;
  struct std__random_access_iterator_tag t223 = agg_tmp0217;
  void_std____advance_int___long_(t219, t220, t223);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt12__assign_oneILb1EPiS0_EvRT0_RT1_
void void_std____assign_one_true__int___int__(int** v224, int** v225) {
bb226:
  int** __out227;
  int** __in228;
  __out227 = v224;
  __in228 = v225;
    int** t229 = __in228;
    int* t230 = *t229;
    int t231 = *t230;
    int** t232 = __out227;
    int* t233 = *t232;
    *t233 = t231;
  return;
}

// function: _ZSt23__copy_move_backward_a2ILb1EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_backward_a2_true__int___int__(int* v234, int* v235, int* v236) {
bb237:
  int* __first238;
  int* __last239;
  int* __result240;
  int* __retval241;
  __first238 = v234;
  __last239 = v235;
  __result240 = v236;
      _Bool r242 = std__is_constant_evaluated();
      if (r242) {
      } else {
          long __n243;
          int* t244 = __first238;
          int* t245 = __last239;
          long r246 = std__iterator_traits_int____difference_type_std__distance_int__(t244, t245);
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
          __n243 = r246;
          long t247 = __n243;
          long u248 = -t247;
          void_std__advance_int___long_(&__result240, u248);
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
            long t249 = __n243;
            long c250 = 1;
            _Bool c251 = ((t249 > c250)) ? 1 : 0;
            if (c251) {
              int* t252 = __result240;
              void* cast253 = (void*)t252;
              int* t254 = __first238;
              void* cast255 = (void*)t254;
              long t256 = __n243;
              unsigned long cast257 = (unsigned long)t256;
              unsigned long c258 = 4;
              unsigned long b259 = cast257 * c258;
              void* r260 = memmove(cast253, cast255, b259);
            } else {
                long t261 = __n243;
                long c262 = 1;
                _Bool c263 = ((t261 == c262)) ? 1 : 0;
                if (c263) {
                  void_std____assign_one_true__int___int__(&__result240, &__first238);
                  if (__cir_exc_active) {
                    int* __cir_eh_ret = (int*)0;
                    return __cir_eh_ret;
                  }
                }
            }
          int* t264 = __result240;
          __retval241 = t264;
          int* t265 = __retval241;
          return t265;
      }
    while (1) {
      int* t266 = __first238;
      int* t267 = __last239;
      _Bool c268 = ((t266 != t267)) ? 1 : 0;
      if (!c268) break;
        int* t269 = __last239;
        int c270 = -1;
        int* ptr271 = &(t269)[c270];
        __last239 = ptr271;
        int* t272 = __result240;
        int c273 = -1;
        int* ptr274 = &(t272)[c273];
        __result240 = ptr274;
        void_std____assign_one_true__int___int__(&__result240, &__last239);
        if (__cir_exc_active) {
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
    }
  int* t275 = __result240;
  __retval241 = t275;
  int* t276 = __retval241;
  return t276;
}

// function: _ZSt23__copy_move_backward_a1ILb1EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_backward_a1_true__int___int__(int* v277, int* v278, int* v279) {
bb280:
  int* __first281;
  int* __last282;
  int* __result283;
  int* __retval284;
  __first281 = v277;
  __last282 = v278;
  __result283 = v279;
  int* t285 = __first281;
  int* t286 = __last282;
  int* t287 = __result283;
  int* r288 = int__std____copy_move_backward_a2_true__int___int__(t285, t286, t287);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval284 = r288;
  int* t289 = __retval284;
  return t289;
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v290) {
bb291:
  int* __it292;
  int* __retval293;
  __it292 = v290;
  int* t294 = __it292;
  __retval293 = t294;
  int* t295 = __retval293;
  return t295;
}

// function: _ZSt22__copy_move_backward_aILb1EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_backward_a_true__int___int__(int* v296, int* v297, int* v298) {
bb299:
  int* __first300;
  int* __last301;
  int* __result302;
  int* __retval303;
  __first300 = v296;
  __last301 = v297;
  __result302 = v298;
  int* t304 = __first300;
  int* r305 = int__std____niter_base_int__(t304);
  int* t306 = __last301;
  int* r307 = int__std____niter_base_int__(t306);
  int* t308 = __result302;
  int* r309 = int__std____niter_base_int__(t308);
  int* r310 = int__std____copy_move_backward_a1_true__int___int__(r305, r307, r309);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r311 = int__std____niter_wrap_int__(&__result302, r310);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval303 = r311;
  int* t312 = __retval303;
  return t312;
}

// function: _ZSt12__miter_baseIPiET_S1_
int* int__std____miter_base_int__(int* v313) {
bb314:
  int* __it315;
  int* __retval316;
  __it315 = v313;
  int* t317 = __it315;
  __retval316 = t317;
  int* t318 = __retval316;
  return t318;
}

// function: _ZSt13move_backwardIPiS0_ET0_T_S2_S1_
int* int__std__move_backward_int___int__(int* v319, int* v320, int* v321) {
bb322:
  int* __first323;
  int* __last324;
  int* __result325;
  int* __retval326;
  __first323 = v319;
  __last324 = v320;
  __result325 = v321;
  int* t327 = __first323;
  int* r328 = int__std____miter_base_int__(t327);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* t329 = __last324;
  int* r330 = int__std____miter_base_int__(t329);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* t331 = __result325;
  int* r332 = int__std____copy_move_backward_a_true__int___int__(r328, r330, t331);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval326 = r332;
  int* t333 = __retval326;
  return t333;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v334) {
bb335:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this336;
  int** __retval337;
  this336 = v334;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t338 = this336;
  __retval337 = &t338->_M_current;
  int** t339 = __retval337;
  return t339;
}

// function: _ZNSt6vectorIiSaIiEE13_M_insert_auxIiEEvN9__gnu_cxx17__normal_iteratorIPiS1_EEOT_
void void_std__vector_int__std__allocator_int______M_insert_aux_int_(struct std__vector_int__std__allocator_int__* v340, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v341, int* v342) {
bb343:
  struct std__vector_int__std__allocator_int__* this344;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __position345;
  int* __arg346;
  this344 = v340;
  __position345 = v341;
  __arg346 = v342;
  struct std__vector_int__std__allocator_int__* t347 = this344;
  struct std___Vector_base_int__std__allocator_int__* base348 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t347 + 0);
  struct std__allocator_int_* base349 = (struct std__allocator_int_*)((char *)&(base348->_M_impl) + 0);
  struct std___Vector_base_int__std__allocator_int__* base350 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t347 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base351 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base350->_M_impl) + 0);
  int* t352 = base351->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base353 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t347 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base354 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base353->_M_impl) + 0);
  int* t355 = base354->_M_finish;
  int c356 = -1;
  int* ptr357 = &(t355)[c356];
  void_std__allocator_traits_std__allocator_int_____construct_int__int_(base349, t352, ptr357);
  struct std___Vector_base_int__std__allocator_int__* base358 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t347 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base359 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base358->_M_impl) + 0);
  int* t360 = base359->_M_finish;
  int c361 = 1;
  int* ptr362 = &(t360)[c361];
  base359->_M_finish = ptr362;
  int** r363 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__position345);
  int* t364 = *r363;
  struct std___Vector_base_int__std__allocator_int__* base365 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t347 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base366 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base365->_M_impl) + 0);
  int* t367 = base366->_M_finish;
  int c368 = -2;
  int* ptr369 = &(t367)[c368];
  struct std___Vector_base_int__std__allocator_int__* base370 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t347 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base371 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base370->_M_impl) + 0);
  int* t372 = base371->_M_finish;
  int c373 = -1;
  int* ptr374 = &(t372)[c373];
  int* r375 = int__std__move_backward_int___int__(t364, ptr369, ptr374);
  if (__cir_exc_active) {
    return;
  }
  int* t376 = __arg346;
  int t377 = *t376;
  int* r378 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__position345);
  *r378 = t377;
  return;
}

// function: _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* v379) {
bb380:
  struct std___Vector_base_int__std__allocator_int__* this381;
  struct std__allocator_int_* __retval382;
  this381 = v379;
  struct std___Vector_base_int__std__allocator_int__* t383 = this381;
  struct std__allocator_int_* base384 = (struct std__allocator_int_*)((char *)&(t383->_M_impl) + 0);
  __retval382 = base384;
  struct std__allocator_int_* t385 = __retval382;
  return t385;
}

// function: _ZNKSt6vectorIiSaIiEE8max_sizeEv
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* v386) {
bb387:
  struct std__vector_int__std__allocator_int__* this388;
  unsigned long __retval389;
  this388 = v386;
  struct std__vector_int__std__allocator_int__* t390 = this388;
  struct std___Vector_base_int__std__allocator_int__* base391 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t390 + 0);
  struct std__allocator_int_* r392 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(base391);
  unsigned long r393 = std__vector_int__std__allocator_int______S_max_size(r392);
  __retval389 = r393;
  unsigned long t394 = __retval389;
  return t394;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v395) {
bb396:
  struct std__vector_int__std__allocator_int__* this397;
  unsigned long __retval398;
  long __dif399;
  this397 = v395;
  struct std__vector_int__std__allocator_int__* t400 = this397;
  struct std___Vector_base_int__std__allocator_int__* base401 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t400 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base402 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base401->_M_impl) + 0);
  int* t403 = base402->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base404 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t400 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base405 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base404->_M_impl) + 0);
  int* t406 = base405->_M_start;
  long diff407 = t403 - t406;
  __dif399 = diff407;
    long t408 = __dif399;
    long c409 = 0;
    _Bool c410 = ((t408 < c409)) ? 1 : 0;
    if (c410) {
      __builtin_unreachable();
    }
  long t411 = __dif399;
  unsigned long cast412 = (unsigned long)t411;
  __retval398 = cast412;
  unsigned long t413 = __retval398;
  return t413;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v414, unsigned long* v415) {
bb416:
  unsigned long* __a417;
  unsigned long* __b418;
  unsigned long* __retval419;
  __a417 = v414;
  __b418 = v415;
    unsigned long* t420 = __a417;
    unsigned long t421 = *t420;
    unsigned long* t422 = __b418;
    unsigned long t423 = *t422;
    _Bool c424 = ((t421 < t423)) ? 1 : 0;
    if (c424) {
      unsigned long* t425 = __b418;
      __retval419 = t425;
      unsigned long* t426 = __retval419;
      return t426;
    }
  unsigned long* t427 = __a417;
  __retval419 = t427;
  unsigned long* t428 = __retval419;
  return t428;
}

// function: _ZNKSt6vectorIiSaIiEE12_M_check_lenEmPKc
unsigned long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std__vector_int__std__allocator_int__* v429, unsigned long v430, char* v431) {
bb432:
  struct std__vector_int__std__allocator_int__* this433;
  unsigned long __n434;
  char* __s435;
  unsigned long __retval436;
  unsigned long __len437;
  unsigned long ref_tmp0438;
  this433 = v429;
  __n434 = v430;
  __s435 = v431;
  struct std__vector_int__std__allocator_int__* t439 = this433;
    unsigned long r440 = std__vector_int__std__allocator_int_____max_size___const(t439);
    unsigned long r441 = std__vector_int__std__allocator_int_____size___const(t439);
    unsigned long b442 = r440 - r441;
    unsigned long t443 = __n434;
    _Bool c444 = ((b442 < t443)) ? 1 : 0;
    if (c444) {
      char* t445 = __s435;
      std____throw_length_error(t445);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
    }
  unsigned long r446 = std__vector_int__std__allocator_int_____size___const(t439);
  unsigned long r447 = std__vector_int__std__allocator_int_____size___const(t439);
  ref_tmp0438 = r447;
  unsigned long* r448 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp0438, &__n434);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long t449 = *r448;
  unsigned long b450 = r446 + t449;
  __len437 = b450;
  unsigned long t451 = __len437;
  unsigned long r452 = std__vector_int__std__allocator_int_____size___const(t439);
  _Bool c453 = ((t451 < r452)) ? 1 : 0;
  _Bool ternary454;
  if (c453) {
    _Bool c455 = 1;
    ternary454 = (_Bool)c455;
  } else {
    unsigned long t456 = __len437;
    unsigned long r457 = std__vector_int__std__allocator_int_____max_size___const(t439);
    _Bool c458 = ((t456 > r457)) ? 1 : 0;
    ternary454 = (_Bool)c458;
  }
  unsigned long ternary459;
  if (ternary454) {
    unsigned long r460 = std__vector_int__std__allocator_int_____max_size___const(t439);
    ternary459 = (unsigned long)r460;
  } else {
    unsigned long t461 = __len437;
    ternary459 = (unsigned long)t461;
  }
  __retval436 = ternary459;
  unsigned long t462 = __retval436;
  return t462;
}

// function: _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v463, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v464) {
bb465:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs466;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs467;
  long __retval468;
  __lhs466 = v463;
  __rhs467 = v464;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t469 = __lhs466;
  int** r470 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t469);
  int* t471 = *r470;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t472 = __rhs467;
  int** r473 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t472);
  int* t474 = *r473;
  long diff475 = t471 - t474;
  __retval468 = diff475;
  long t476 = __retval468;
  return t476;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocC2EPimRSt12_Vector_baseIiS0_E
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v477, int* v478, unsigned long v479, struct std___Vector_base_int__std__allocator_int__* v480) {
bb481:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this482;
  int* __s483;
  unsigned long __l484;
  struct std___Vector_base_int__std__allocator_int__* __vect485;
  this482 = v477;
  __s483 = v478;
  __l484 = v479;
  __vect485 = v480;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t486 = this482;
  int* t487 = __s483;
  t486->_M_storage = t487;
  unsigned long t488 = __l484;
  t486->_M_len = t488;
  struct std___Vector_base_int__std__allocator_int__* t489 = __vect485;
  t486->_M_vect = t489;
  return;
}

// function: _ZSt10to_addressIiEPT_S1_
int* int__std__to_address_int_(int* v490) {
bb491:
  int* __ptr492;
  int* __retval493;
  __ptr492 = v490;
  int* t494 = __ptr492;
  __retval493 = t494;
  int* t495 = __retval493;
  return t495;
}

// function: _ZSt12__to_addressIPiEDaRKT_
int* auto_std____to_address_int__(int** v496) {
bb497:
  int** __ptr498;
  int* __retval499;
  __ptr498 = v496;
  int** t500 = __ptr498;
  int* t501 = *t500;
  int* r502 = int__std__to_address_int_(t501);
  __retval499 = r502;
  int* t503 = __retval499;
  return t503;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEC2ERKS1_
void __gnu_cxx____normal_iterator_int___void_____normal_iterator(struct __gnu_cxx____normal_iterator_int____void_* v504, int** v505) {
bb506:
  struct __gnu_cxx____normal_iterator_int____void_* this507;
  int** __i508;
  this507 = v504;
  __i508 = v505;
  struct __gnu_cxx____normal_iterator_int____void_* t509 = this507;
  int** t510 = __i508;
  int* t511 = *t510;
  t509->_M_current = t511;
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE7destroyIiEEvRS0_PT_
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* v512, int* v513) {
bb514:
  struct std__allocator_int_* __a515;
  int* __p516;
  __a515 = v512;
  __p516 = v513;
  int* t517 = __p516;
  void_std__destroy_at_int_(t517);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt19__relocate_object_aIiiSaIiEEvPT_PT0_RT1_
void void_std____relocate_object_a_int__int__std__allocator_int___(int* v518, int* v519, struct std__allocator_int_* v520) {
bb521:
  int* __dest522;
  int* __orig523;
  struct std__allocator_int_* __alloc524;
  __dest522 = v518;
  __orig523 = v519;
  __alloc524 = v520;
  struct std__allocator_int_* t525 = __alloc524;
  int* t526 = __dest522;
  int* t527 = __orig523;
  void_std__allocator_traits_std__allocator_int_____construct_int__int_(t525, t526, t527);
  struct std__allocator_int_* t528 = __alloc524;
  int* t529 = __orig523;
  void_std__allocator_traits_std__allocator_int_____destroy_int_(t528, t529);
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivEdeEv
int* __gnu_cxx____normal_iterator_int___void___operator____const(struct __gnu_cxx____normal_iterator_int____void_* v530) {
bb531:
  struct __gnu_cxx____normal_iterator_int____void_* this532;
  int* __retval533;
  this532 = v530;
  struct __gnu_cxx____normal_iterator_int____void_* t534 = this532;
  int* t535 = t534->_M_current;
  __retval533 = t535;
  int* t536 = __retval533;
  return t536;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEppEv
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator__(struct __gnu_cxx____normal_iterator_int____void_* v537) {
bb538:
  struct __gnu_cxx____normal_iterator_int____void_* this539;
  struct __gnu_cxx____normal_iterator_int____void_* __retval540;
  this539 = v537;
  struct __gnu_cxx____normal_iterator_int____void_* t541 = this539;
  int* t542 = t541->_M_current;
  int c543 = 1;
  int* ptr544 = &(t542)[c543];
  t541->_M_current = ptr544;
  __retval540 = t541;
  struct __gnu_cxx____normal_iterator_int____void_* t545 = __retval540;
  return t545;
}

// function: _ZSt14__relocate_a_1IPiN9__gnu_cxx17__normal_iteratorIS0_vEESaIiEET0_T_S6_S5_RT1_
struct __gnu_cxx____normal_iterator_int____void_ __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(int* v546, int* v547, struct __gnu_cxx____normal_iterator_int____void_ v548, struct std__allocator_int_* v549) {
bb550:
  int* __first551;
  int* __last552;
  struct __gnu_cxx____normal_iterator_int____void_ __result553;
  struct std__allocator_int_* __alloc554;
  struct __gnu_cxx____normal_iterator_int____void_ __retval555;
  __first551 = v546;
  __last552 = v547;
  __result553 = v548;
  __alloc554 = v549;
  __retval555 = __result553; // copy
    while (1) {
      int* t557 = __first551;
      int* t558 = __last552;
      _Bool c559 = ((t557 != t558)) ? 1 : 0;
      if (!c559) break;
      int* r560 = __gnu_cxx____normal_iterator_int___void___operator____const(&__retval555);
      int* t561 = __first551;
      struct std__allocator_int_* t562 = __alloc554;
      void_std____relocate_object_a_int__int__std__allocator_int___(r560, t561, t562);
    for_step556: ;
      int* t563 = __first551;
      int c564 = 1;
      int* ptr565 = &(t563)[c564];
      __first551 = ptr565;
      struct __gnu_cxx____normal_iterator_int____void_* r566 = __gnu_cxx____normal_iterator_int___void___operator__(&__retval555);
    }
  struct __gnu_cxx____normal_iterator_int____void_ t567 = __retval555;
  return t567;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEaSEOS2_
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator_(struct __gnu_cxx____normal_iterator_int____void_* v568, struct __gnu_cxx____normal_iterator_int____void_* v569) {
bb570:
  struct __gnu_cxx____normal_iterator_int____void_* this571;
  struct __gnu_cxx____normal_iterator_int____void_* unnamed572;
  struct __gnu_cxx____normal_iterator_int____void_* __retval573;
  this571 = v568;
  unnamed572 = v569;
  struct __gnu_cxx____normal_iterator_int____void_* t574 = this571;
  struct __gnu_cxx____normal_iterator_int____void_* t575 = unnamed572;
  int* t576 = t575->_M_current;
  t574->_M_current = t576;
  __retval573 = t574;
  struct __gnu_cxx____normal_iterator_int____void_* t577 = __retval573;
  return t577;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivE4baseEv
int** __gnu_cxx____normal_iterator_int___void___base___const(struct __gnu_cxx____normal_iterator_int____void_* v578) {
bb579:
  struct __gnu_cxx____normal_iterator_int____void_* this580;
  int** __retval581;
  this580 = v578;
  struct __gnu_cxx____normal_iterator_int____void_* t582 = this580;
  __retval581 = &t582->_M_current;
  int** t583 = __retval581;
  return t583;
}

// function: _ZSt14__relocate_a_1IiiENSt9enable_ifIXsr3std24__is_bitwise_relocatableIT_EE5valueEPS1_E4typeES2_S2_S2_RSaIT0_E
int* std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(int* v584, int* v585, int* v586, struct std__allocator_int_* v587) {
bb588:
  int* __first589;
  int* __last590;
  int* __result591;
  struct std__allocator_int_* __alloc592;
  int* __retval593;
  long __count594;
  __first589 = v584;
  __last590 = v585;
  __result591 = v586;
  __alloc592 = v587;
  int* t595 = __last590;
  int* t596 = __first589;
  long diff597 = t595 - t596;
  __count594 = diff597;
    long t598 = __count594;
    long c599 = 0;
    _Bool c600 = ((t598 > c599)) ? 1 : 0;
    if (c600) {
        _Bool r601 = std__is_constant_evaluated();
        if (r601) {
          struct __gnu_cxx____normal_iterator_int____void_ __out602;
          struct __gnu_cxx____normal_iterator_int____void_ ref_tmp0603;
          struct __gnu_cxx____normal_iterator_int____void_ agg_tmp0604;
          __gnu_cxx____normal_iterator_int___void_____normal_iterator(&__out602, &__result591);
          int* t605 = __first589;
          int* t606 = __last590;
          agg_tmp0604 = __out602; // copy
          struct std__allocator_int_* t607 = __alloc592;
          struct __gnu_cxx____normal_iterator_int____void_ t608 = agg_tmp0604;
          struct __gnu_cxx____normal_iterator_int____void_ r609 = __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(t605, t606, t608, t607);
          ref_tmp0603 = r609;
          struct __gnu_cxx____normal_iterator_int____void_* r610 = __gnu_cxx____normal_iterator_int___void___operator_(&__out602, &ref_tmp0603);
          int** r611 = __gnu_cxx____normal_iterator_int___void___base___const(&__out602);
          int* t612 = *r611;
          __retval593 = t612;
          int* t613 = __retval593;
          return t613;
        }
      int* t614 = __result591;
      void* cast615 = (void*)t614;
      int* t616 = __first589;
      void* cast617 = (void*)t616;
      long t618 = __count594;
      unsigned long cast619 = (unsigned long)t618;
      unsigned long c620 = 4;
      unsigned long b621 = cast619 * c620;
      void* r622 = memcpy(cast615, cast617, b621);
    }
  int* t623 = __result591;
  long t624 = __count594;
  int* ptr625 = &(t623)[t624];
  __retval593 = ptr625;
  int* t626 = __retval593;
  return t626;
}

// function: _ZSt12__relocate_aIPiS0_SaIiEET0_T_S3_S2_RT1_
int* int__std____relocate_a_int___int___std__allocator_int___(int* v627, int* v628, int* v629, struct std__allocator_int_* v630) {
bb631:
  int* __first632;
  int* __last633;
  int* __result634;
  struct std__allocator_int_* __alloc635;
  int* __retval636;
  __first632 = v627;
  __last633 = v628;
  __result634 = v629;
  __alloc635 = v630;
  int* t637 = __first632;
  int* r638 = int__std____niter_base_int__(t637);
  int* t639 = __last633;
  int* r640 = int__std____niter_base_int__(t639);
  int* t641 = __result634;
  int* r642 = int__std____niter_base_int__(t641);
  struct std__allocator_int_* t643 = __alloc635;
  int* r644 = std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(r638, r640, r642, t643);
  __retval636 = r644;
  int* t645 = __retval636;
  return t645;
}

// function: _ZNSt6vectorIiSaIiEE11_S_relocateEPiS2_S2_RS0_
int* std__vector_int__std__allocator_int______S_relocate(int* v646, int* v647, int* v648, struct std__allocator_int_* v649) {
bb650:
  int* __first651;
  int* __last652;
  int* __result653;
  struct std__allocator_int_* __alloc654;
  int* __retval655;
  __first651 = v646;
  __last652 = v647;
  __result653 = v648;
  __alloc654 = v649;
  int* t656 = __first651;
  int* t657 = __last652;
  int* t658 = __result653;
  struct std__allocator_int_* t659 = __alloc654;
  int* r660 = int__std____relocate_a_int___int___std__allocator_int___(t656, t657, t658, t659);
  __retval655 = r660;
  int* t661 = __retval655;
  return t661;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocD2Ev
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v662) {
bb663:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this664;
  this664 = v662;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t665 = this664;
    int* t666 = t665->_M_storage;
    _Bool cast667 = (_Bool)t666;
    if (cast667) {
      struct std___Vector_base_int__std__allocator_int__* t668 = t665->_M_vect;
      int* t669 = t665->_M_storage;
      unsigned long t670 = t665->_M_len;
      std___Vector_base_int__std__allocator_int______M_deallocate(t668, t669, t670);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_M_realloc_insertIJiEEEvN9__gnu_cxx17__normal_iteratorIPiS1_EEDpOT_
void void_std__vector_int__std__allocator_int______M_realloc_insert_int_(struct std__vector_int__std__allocator_int__* v671, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v672, int* v673) {
bb674:
  struct std__vector_int__std__allocator_int__* this675;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __position676;
  int* __args677;
  unsigned long __len678;
  int* __old_start679;
  int* __old_finish680;
  unsigned long __elems_before681;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0682;
  int* __new_start683;
  int* __new_finish684;
  this675 = v671;
  __position676 = v672;
  __args677 = v673;
  struct std__vector_int__std__allocator_int__* t685 = this675;
  unsigned long c686 = 1;
  char* cast687 = (char*)&(_str_5);
  unsigned long r688 = std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(t685, c686, cast687);
  if (__cir_exc_active) {
    return;
  }
  __len678 = r688;
    unsigned long t689 = __len678;
    unsigned long c690 = 0;
    _Bool c691 = ((t689 <= c690)) ? 1 : 0;
    if (c691) {
      __builtin_unreachable();
    }
  struct std___Vector_base_int__std__allocator_int__* base692 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t685 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base693 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base692->_M_impl) + 0);
  int* t694 = base693->_M_start;
  __old_start679 = t694;
  struct std___Vector_base_int__std__allocator_int__* base695 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t685 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base696 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base695->_M_impl) + 0);
  int* t697 = base696->_M_finish;
  __old_finish680 = t697;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r698 = std__vector_int__std__allocator_int_____begin(t685);
  ref_tmp0682 = r698;
  long r699 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__position676, &ref_tmp0682);
  unsigned long cast700 = (unsigned long)r699;
  __elems_before681 = cast700;
  struct std___Vector_base_int__std__allocator_int__* base701 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t685 + 0);
  unsigned long t702 = __len678;
  int* r703 = std___Vector_base_int__std__allocator_int______M_allocate(base701, t702);
  if (__cir_exc_active) {
    return;
  }
  __new_start683 = r703;
  int* t704 = __new_start683;
  __new_finish684 = t704;
    struct std__vector_int__std__allocator_int_____Guard_alloc __guard705;
    int* ref_tmp1706;
    int* t707 = __new_start683;
    unsigned long t708 = __len678;
    struct std___Vector_base_int__std__allocator_int__* base709 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t685 + 0);
    std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(&__guard705, t707, t708, base709);
    if (__cir_exc_active) {
      return;
    }
      struct std___Vector_base_int__std__allocator_int__* base710 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t685 + 0);
      struct std__allocator_int_* base711 = (struct std__allocator_int_*)((char *)&(base710->_M_impl) + 0);
      int* t712 = __new_start683;
      unsigned long t713 = __elems_before681;
      int* ptr714 = &(t712)[t713];
      ref_tmp1706 = ptr714;
      int* r715 = auto_std____to_address_int__(&ref_tmp1706);
      int* t716 = __args677;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_(base711, r715, t716);
        int* t717 = __old_start679;
        int** r718 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__position676);
        int* t719 = *r718;
        int* t720 = __new_start683;
        struct std___Vector_base_int__std__allocator_int__* base721 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t685 + 0);
        struct std__allocator_int_* r722 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base721);
        int* r723 = std__vector_int__std__allocator_int______S_relocate(t717, t719, t720, r722);
        __new_finish684 = r723;
        int* t724 = __new_finish684;
        int c725 = 1;
        int* ptr726 = &(t724)[c725];
        __new_finish684 = ptr726;
        int** r727 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__position676);
        int* t728 = *r727;
        int* t729 = __old_finish680;
        int* t730 = __new_finish684;
        struct std___Vector_base_int__std__allocator_int__* base731 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t685 + 0);
        struct std__allocator_int_* r732 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base731);
        int* r733 = std__vector_int__std__allocator_int______S_relocate(t728, t729, t730, r732);
        __new_finish684 = r733;
      int* t734 = __old_start679;
      __guard705._M_storage = t734;
      struct std___Vector_base_int__std__allocator_int__* base735 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t685 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base736 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base735->_M_impl) + 0);
      int* t737 = base736->_M_end_of_storage;
      int* t738 = __old_start679;
      long diff739 = t737 - t738;
      unsigned long cast740 = (unsigned long)diff739;
      __guard705._M_len = cast740;
    {
      std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(&__guard705);
    }
  int* t741 = __new_start683;
  struct std___Vector_base_int__std__allocator_int__* base742 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t685 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base743 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base742->_M_impl) + 0);
  base743->_M_start = t741;
  int* t744 = __new_finish684;
  struct std___Vector_base_int__std__allocator_int__* base745 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t685 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base746 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base745->_M_impl) + 0);
  base746->_M_finish = t744;
  int* t747 = __new_start683;
  unsigned long t748 = __len678;
  int* ptr749 = &(t747)[t748];
  struct std___Vector_base_int__std__allocator_int__* base750 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t685 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base751 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base750->_M_impl) + 0);
  base751->_M_end_of_storage = ptr749;
  return;
}

// function: _ZNSt6vectorIiSaIiEE14_M_insert_rvalEN9__gnu_cxx17__normal_iteratorIPKiS1_EEOi
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int______M_insert_rval(struct std__vector_int__std__allocator_int__* v752, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v753, int* v754) {
bb755:
  struct std__vector_int__std__allocator_int__* this756;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __position757;
  int* __v758;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval759;
  long __n760;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp0761;
  int* ref_tmp4762;
  this756 = v752;
  __position757 = v753;
  __v758 = v754;
  struct std__vector_int__std__allocator_int__* t763 = this756;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r764 = std__vector_int__std__allocator_int_____cbegin___const(t763);
  ref_tmp0761 = r764;
  long r765 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int_const___std__vector_int__std__allocator_int_____(&__position757, &ref_tmp0761);
  __n760 = r765;
    struct std___Vector_base_int__std__allocator_int__* base766 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t763 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base767 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base766->_M_impl) + 0);
    int* t768 = base767->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base769 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t763 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base770 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base769->_M_impl) + 0);
    int* t771 = base770->_M_end_of_storage;
    _Bool c772 = ((t768 != t771)) ? 1 : 0;
    if (c772) {
        struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp1773;
        struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r774 = std__vector_int__std__allocator_int_____cend___const(t763);
        ref_tmp1773 = r774;
        _Bool r775 = _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__position757, &ref_tmp1773);
        if (r775) {
          struct std___Vector_base_int__std__allocator_int__* base776 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t763 + 0);
          struct std__allocator_int_* base777 = (struct std__allocator_int_*)((char *)&(base776->_M_impl) + 0);
          struct std___Vector_base_int__std__allocator_int__* base778 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t763 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base779 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base778->_M_impl) + 0);
          int* t780 = base779->_M_finish;
          int* t781 = __v758;
          void_std__allocator_traits_std__allocator_int_____construct_int__int_(base777, t780, t781);
          struct std___Vector_base_int__std__allocator_int__* base782 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t763 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base783 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base782->_M_impl) + 0);
          int* t784 = base783->_M_finish;
          int c785 = 1;
          int* ptr786 = &(t784)[c785];
          base783->_M_finish = ptr786;
        } else {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0787;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp2788;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r789 = std__vector_int__std__allocator_int_____begin(t763);
          ref_tmp2788 = r789;
          long t790 = __n760;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r791 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&ref_tmp2788, t790);
          agg_tmp0787 = r791;
          int* t792 = __v758;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t793 = agg_tmp0787;
          void_std__vector_int__std__allocator_int______M_insert_aux_int_(t763, t793, t792);
          if (__cir_exc_active) {
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
        }
    } else {
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1794;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp3795;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r796 = std__vector_int__std__allocator_int_____begin(t763);
      ref_tmp3795 = r796;
      long t797 = __n760;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r798 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&ref_tmp3795, t797);
      agg_tmp1794 = r798;
      int* t799 = __v758;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t800 = agg_tmp1794;
      void_std__vector_int__std__allocator_int______M_realloc_insert_int_(t763, t800, t799);
      if (__cir_exc_active) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
    }
  struct std___Vector_base_int__std__allocator_int__* base801 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t763 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base802 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base801->_M_impl) + 0);
  int* t803 = base802->_M_start;
  long t804 = __n760;
  int* ptr805 = &(t803)[t804];
  ref_tmp4762 = ptr805;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval759, &ref_tmp4762);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t806 = __retval759;
  return t806;
}

// function: _ZNSt6vectorIiSaIiEE6insertEN9__gnu_cxx17__normal_iteratorIPKiS1_EEOi
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____insert(struct std__vector_int__std__allocator_int__* v807, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v808, int* v809) {
bb810:
  struct std__vector_int__std__allocator_int__* this811;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __position812;
  int* __x813;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval814;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp0815;
  this811 = v807;
  __position812 = v808;
  __x813 = v809;
  struct std__vector_int__std__allocator_int__* t816 = this811;
  agg_tmp0815 = __position812; // copy
  int* t817 = __x813;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t818 = agg_tmp0815;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r819 = std__vector_int__std__allocator_int______M_insert_rval(t816, t818, t817);
  if (__cir_exc_active) {
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval814 = r819;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t820 = __retval814;
  return t820;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2IPiQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE
void _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2IPiQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v821, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v822) {
bb823:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this824;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __i825;
  this824 = v821;
  __i825 = v822;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t826 = this824;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t827 = __i825;
  int** r828 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t827);
  int* t829 = *r828;
  t826->_M_current = t829;
  return;
}

// function: _ZNSt6vectorIiSaIiEE14_M_fill_appendEmRKi
void std__vector_int__std__allocator_int______M_fill_append(struct std__vector_int__std__allocator_int__* v830, unsigned long v831, int* v832) {
bb833:
  struct std__vector_int__std__allocator_int__* this834;
  unsigned long __n835;
  int* __x836;
  this834 = v830;
  __n835 = v831;
  __x836 = v832;
  struct std__vector_int__std__allocator_int__* t837 = this834;
    struct std___Vector_base_int__std__allocator_int__* base838 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t837 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base839 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base838->_M_impl) + 0);
    int* t840 = base839->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int__* base841 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t837 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base842 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base841->_M_impl) + 0);
    int* t843 = base842->_M_finish;
    long diff844 = t840 - t843;
    unsigned long cast845 = (unsigned long)diff844;
    unsigned long t846 = __n835;
    _Bool c847 = ((cast845 >= t846)) ? 1 : 0;
    if (c847) {
      struct std___Vector_base_int__std__allocator_int__* base848 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t837 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base849 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base848->_M_impl) + 0);
      int* t850 = base849->_M_finish;
      unsigned long t851 = __n835;
      int* t852 = __x836;
      struct std___Vector_base_int__std__allocator_int__* base853 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t837 + 0);
      struct std__allocator_int_* r854 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base853);
      int* r855 = int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(t850, t851, t852, r854);
      if (__cir_exc_active) {
        return;
      }
      struct std___Vector_base_int__std__allocator_int__* base856 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t837 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base857 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base856->_M_impl) + 0);
      base857->_M_finish = r855;
    } else {
      int* __old_start858;
      int* __old_finish859;
      unsigned long __old_size860;
      unsigned long __len861;
      int* __new_start862;
      int* __new_finish863;
      struct std___Vector_base_int__std__allocator_int__* base864 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t837 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base865 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base864->_M_impl) + 0);
      int* t866 = base865->_M_start;
      __old_start858 = t866;
      struct std___Vector_base_int__std__allocator_int__* base867 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t837 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base868 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base867->_M_impl) + 0);
      int* t869 = base868->_M_finish;
      __old_finish859 = t869;
      int* t870 = __old_finish859;
      int* t871 = __old_start858;
      long diff872 = t870 - t871;
      unsigned long cast873 = (unsigned long)diff872;
      __old_size860 = cast873;
      unsigned long t874 = __n835;
      char* cast875 = (char*)&(_str_7);
      unsigned long r876 = std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(t837, t874, cast875);
      if (__cir_exc_active) {
        return;
      }
      __len861 = r876;
      struct std___Vector_base_int__std__allocator_int__* base877 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t837 + 0);
      unsigned long t878 = __len861;
      int* r879 = std___Vector_base_int__std__allocator_int______M_allocate(base877, t878);
      if (__cir_exc_active) {
        return;
      }
      __new_start862 = r879;
      int* t880 = __new_start862;
      unsigned long t881 = __old_size860;
      int* ptr882 = &(t880)[t881];
      __new_finish863 = ptr882;
          int* t884 = __new_finish863;
          unsigned long t885 = __n835;
          int* t886 = __x836;
          struct std___Vector_base_int__std__allocator_int__* base887 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t837 + 0);
          struct std__allocator_int_* r888 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base887);
          int* r889 = int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(t884, t885, t886, r888);
          if (__cir_exc_active) {
            goto cir_try_dispatch883;
          }
          __new_finish863 = r889;
          int* t890 = __old_start858;
          int* t891 = __old_finish859;
          int* t892 = __new_start862;
          struct std___Vector_base_int__std__allocator_int__* base893 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t837 + 0);
          struct std__allocator_int_* r894 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base893);
          int* r895 = int__std____uninitialized_move_if_noexcept_a_int___int___std__allocator_int___(t890, t891, t892, r894);
          if (__cir_exc_active) {
            goto cir_try_dispatch883;
          }
        cir_try_dispatch883: ;
        if (__cir_exc_active) {
        {
          int ca_tok896 = 0;
          void* ca_exn897 = (void*)__cir_exc_ptr;
          __cir_exc_active = 0;
            int* t898 = __new_start862;
            unsigned long t899 = __old_size860;
            int* ptr900 = &(t898)[t899];
            int* t901 = __new_finish863;
            struct std___Vector_base_int__std__allocator_int__* base902 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t837 + 0);
            struct std__allocator_int_* r903 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base902);
            void_std___Destroy_int___int_(ptr900, t901, r903);
            if (__cir_exc_active) {
              {
                if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
              }
              return;
            }
            struct std___Vector_base_int__std__allocator_int__* base904 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t837 + 0);
            int* t905 = __new_start862;
            unsigned long t906 = __len861;
            std___Vector_base_int__std__allocator_int______M_deallocate(base904, t905, t906);
            if (__cir_exc_active) {
              {
                if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
              }
              return;
            }
            __cir_exc_active = 1;
            {
              if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
            }
            return;
            __builtin_unreachable();
        }
        }
      int* t907 = __old_start858;
      int* t908 = __old_finish859;
      struct std___Vector_base_int__std__allocator_int__* base909 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t837 + 0);
      struct std__allocator_int_* r910 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base909);
      void_std___Destroy_int___int_(t907, t908, r910);
      if (__cir_exc_active) {
        return;
      }
      struct std___Vector_base_int__std__allocator_int__* base911 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t837 + 0);
      int* t912 = __old_start858;
      struct std___Vector_base_int__std__allocator_int__* base913 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t837 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base914 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base913->_M_impl) + 0);
      int* t915 = base914->_M_end_of_storage;
      int* t916 = __old_start858;
      long diff917 = t915 - t916;
      unsigned long cast918 = (unsigned long)diff917;
      std___Vector_base_int__std__allocator_int______M_deallocate(base911, t912, cast918);
      if (__cir_exc_active) {
        return;
      }
      int* t919 = __new_start862;
      struct std___Vector_base_int__std__allocator_int__* base920 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t837 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base921 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base920->_M_impl) + 0);
      base921->_M_start = t919;
      int* t922 = __new_finish863;
      struct std___Vector_base_int__std__allocator_int__* base923 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t837 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base924 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base923->_M_impl) + 0);
      base924->_M_finish = t922;
      int* t925 = __new_start862;
      unsigned long t926 = __len861;
      int* ptr927 = &(t925)[t926];
      struct std___Vector_base_int__std__allocator_int__* base928 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t837 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base929 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base928->_M_impl) + 0);
      base929->_M_end_of_storage = ptr927;
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE16_Temporary_valueC2IJRKiEEEPS1_DpOT_
void std__vector_int__std__allocator_int______Temporary_value___Temporary_value_int_const__(struct std__vector_int__std__allocator_int_____Temporary_value* v930, struct std__vector_int__std__allocator_int__* v931, int* v932) {
bb933:
  struct std__vector_int__std__allocator_int_____Temporary_value* this934;
  struct std__vector_int__std__allocator_int__* __vec935;
  int* __args936;
  this934 = v930;
  __vec935 = v931;
  __args936 = v932;
  struct std__vector_int__std__allocator_int_____Temporary_value* t937 = this934;
  struct std__vector_int__std__allocator_int__* t938 = __vec935;
  t937->_M_this = t938;
  std__vector_int__std__allocator_int______Temporary_value___Storage___Storage(&t937->_M_storage);
  if (__cir_exc_active) {
    return;
  }
    struct std__vector_int__std__allocator_int__* t939 = t937->_M_this;
    struct std___Vector_base_int__std__allocator_int__* base940 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t939 + 0);
    struct std__allocator_int_* base941 = (struct std__allocator_int_*)((char *)&(base940->_M_impl) + 0);
    int* r942 = std__vector_int__std__allocator_int______Temporary_value___M_ptr(t937);
    int* t943 = __args936;
    void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(base941, r942, t943);
  return;
}

// function: _ZNSt6vectorIiSaIiEE16_Temporary_value6_M_valEv
int* std__vector_int__std__allocator_int______Temporary_value___M_val(struct std__vector_int__std__allocator_int_____Temporary_value* v944) {
bb945:
  struct std__vector_int__std__allocator_int_____Temporary_value* this946;
  int* __retval947;
  this946 = v944;
  struct std__vector_int__std__allocator_int_____Temporary_value* t948 = this946;
  __retval947 = &t948->_M_storage._M_val;
  int* t949 = __retval947;
  return t949;
}

// function: _ZNKRSt13move_iteratorIPiE4baseEv
int** std__move_iterator_int____base___const__(struct std__move_iterator_int___* v950) {
bb951:
  struct std__move_iterator_int___* this952;
  int** __retval953;
  this952 = v950;
  struct std__move_iterator_int___* t954 = this952;
  __retval953 = &t954->_M_current;
  int** t955 = __retval953;
  return t955;
}

// function: _ZSteqIPiEbRKSt13move_iteratorIT_ES5_
_Bool bool_std__operator___int__(struct std__move_iterator_int___* v956, struct std__move_iterator_int___* v957) {
bb958:
  struct std__move_iterator_int___* __x959;
  struct std__move_iterator_int___* __y960;
  _Bool __retval961;
  __x959 = v956;
  __y960 = v957;
  struct std__move_iterator_int___* t962 = __x959;
  int** r963 = std__move_iterator_int____base___const__(t962);
  int* t964 = *r963;
  struct std__move_iterator_int___* t965 = __y960;
  int** r966 = std__move_iterator_int____base___const__(t965);
  int* t967 = *r966;
  _Bool c968 = ((t964 == t967)) ? 1 : 0;
  __retval961 = c968;
  _Bool t969 = __retval961;
  return t969;
}

// function: _ZSt10_ConstructIiJiEEvPT_DpOT0_
void void_std___Construct_int__int_(int* v970, int* v971) {
bb972:
  int* __p973;
  int* __args974;
  __p973 = v970;
  __args974 = v971;
    _Bool r975 = std____is_constant_evaluated();
    if (r975) {
      int* t976 = __p973;
      int* t977 = __args974;
      int* r978 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t976, t977);
      return;
    }
  int* t979 = __p973;
  void* cast980 = (void*)t979;
  int* cast981 = (int*)cast980;
  int* t982 = __args974;
  int t983 = *t982;
  *cast981 = t983;
  return;
}

// function: _ZNKSt6ranges7__imove9_IterMoveclIRKPiQoo11__adl_imoveIT_ErqTDTdeclsr3stdE7declvalIS6_EEEEEENS1_8__resultIS6_E4typeEOS6_
int* _ZNKSt6ranges7__imove9_IterMoveclIRKPiQoo11__adl_imoveIT_ErqTDTdeclsr3stdE7declvalIS6_EEEEEENS1_8__resultIS6_E4typeEOS6_(struct std__ranges____imove___IterMove* v984, int** v985) {
bb986:
  struct std__ranges____imove___IterMove* this987;
  int** __e988;
  int* __retval989;
  this987 = v984;
  __e988 = v985;
  struct std__ranges____imove___IterMove* t990 = this987;
      int** t991 = __e988;
      int* t992 = *t991;
      __retval989 = t992;
      int* t993 = __retval989;
      return t993;
  abort();
}

// function: _ZNKSt13move_iteratorIPiEdeEv
int* std__move_iterator_int____operator____const(struct std__move_iterator_int___* v994) {
bb995:
  struct std__move_iterator_int___* this996;
  int* __retval997;
  this996 = v994;
  struct std__move_iterator_int___* t998 = this996;
  int* r999 = _ZNKSt6ranges7__imove9_IterMoveclIRKPiQoo11__adl_imoveIT_ErqTDTdeclsr3stdE7declvalIS6_EEEEEENS1_8__resultIS6_E4typeEOS6_(&_ZNSt6ranges4_Cpo9iter_moveE, &t998->_M_current);
  __retval997 = r999;
  int* t1000 = __retval997;
  return t1000;
}

// function: _ZNSt13move_iteratorIPiEppEv
struct std__move_iterator_int___* std__move_iterator_int____operator__(struct std__move_iterator_int___* v1001) {
bb1002:
  struct std__move_iterator_int___* this1003;
  struct std__move_iterator_int___* __retval1004;
  this1003 = v1001;
  struct std__move_iterator_int___* t1005 = this1003;
  int* t1006 = t1005->_M_current;
  int c1007 = 1;
  int* ptr1008 = &(t1006)[c1007];
  t1005->_M_current = ptr1008;
  __retval1004 = t1005;
  struct std__move_iterator_int___* t1009 = __retval1004;
  return t1009;
}

// function: _ZSt16__do_uninit_copyISt13move_iteratorIPiES2_S1_ET1_T_T0_S3_
int* int__std____do_uninit_copy_std__move_iterator_int____std__move_iterator_int____int__(struct std__move_iterator_int___ v1010, struct std__move_iterator_int___ v1011, int* v1012) {
bb1013:
  struct std__move_iterator_int___ __first1014;
  struct std__move_iterator_int___ __last1015;
  int* __result1016;
  int* __retval1017;
  struct std___UninitDestroyGuard_int____void_ __guard1018;
  __first1014 = v1010;
  __last1015 = v1011;
  __result1016 = v1012;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard1018, &__result1016);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
      while (1) {
        _Bool r1020 = bool_std__operator___int__(&__first1014, &__last1015);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1018);
          }
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
        _Bool u1021 = !r1020;
        if (!u1021) break;
        int* t1022 = __result1016;
        int* r1023 = std__move_iterator_int____operator____const(&__first1014);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1018);
          }
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
        void_std___Construct_int__int_(t1022, r1023);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1018);
          }
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
      for_step1019: ;
        struct std__move_iterator_int___* r1024 = std__move_iterator_int____operator__(&__first1014);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1018);
          }
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
        int* t1025 = __result1016;
        int c1026 = 1;
        int* ptr1027 = &(t1025)[c1026];
        __result1016 = ptr1027;
      }
    std___UninitDestroyGuard_int___void___release(&__guard1018);
    if (__cir_exc_active) {
      {
        std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1018);
      }
      int* __cir_eh_ret = (int*)0;
      return __cir_eh_ret;
    }
    int* t1028 = __result1016;
    __retval1017 = t1028;
    int* t1029 = __retval1017;
    int* ret_val1030 = t1029;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1018);
    }
    return ret_val1030;
  abort();
}

// function: _ZSt18uninitialized_copyISt13move_iteratorIPiES1_ET0_T_S4_S3_
int* int__std__uninitialized_copy_std__move_iterator_int____int__(struct std__move_iterator_int___ v1031, struct std__move_iterator_int___ v1032, int* v1033) {
bb1034:
  struct std__move_iterator_int___ __first1035;
  struct std__move_iterator_int___ __last1036;
  int* __result1037;
  int* __retval1038;
  __first1035 = v1031;
  __last1036 = v1032;
  __result1037 = v1033;
        struct std__move_iterator_int___ agg_tmp01039;
        struct std__move_iterator_int___ agg_tmp11040;
        agg_tmp01039 = __first1035; // copy
        agg_tmp11040 = __last1036; // copy
        int* t1041 = __result1037;
        struct std__move_iterator_int___ t1042 = agg_tmp01039;
        struct std__move_iterator_int___ t1043 = agg_tmp11040;
        int* r1044 = int__std____do_uninit_copy_std__move_iterator_int____std__move_iterator_int____int__(t1042, t1043, t1041);
        if (__cir_exc_active) {
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
        __retval1038 = r1044;
        int* t1045 = __retval1038;
        return t1045;
  abort();
}

// function: _ZSt22__uninitialized_copy_aISt13move_iteratorIPiES2_S1_iET1_T_T0_S3_RSaIT2_E
int* int__std____uninitialized_copy_a_std__move_iterator_int____std__move_iterator_int____int___int_(struct std__move_iterator_int___ v1046, struct std__move_iterator_int___ v1047, int* v1048, struct std__allocator_int_* v1049) {
bb1050:
  struct std__move_iterator_int___ __first1051;
  struct std__move_iterator_int___ __last1052;
  int* __result1053;
  struct std__allocator_int_* unnamed1054;
  int* __retval1055;
  __first1051 = v1046;
  __last1052 = v1047;
  __result1053 = v1048;
  unnamed1054 = v1049;
    _Bool r1056 = std__is_constant_evaluated();
    if (r1056) {
      struct std__move_iterator_int___ agg_tmp01057;
      struct std__move_iterator_int___ agg_tmp11058;
      agg_tmp01057 = __first1051; // copy
      agg_tmp11058 = __last1052; // copy
      int* t1059 = __result1053;
      struct std__move_iterator_int___ t1060 = agg_tmp01057;
      struct std__move_iterator_int___ t1061 = agg_tmp11058;
      int* r1062 = int__std____do_uninit_copy_std__move_iterator_int____std__move_iterator_int____int__(t1060, t1061, t1059);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      __retval1055 = r1062;
      int* t1063 = __retval1055;
      return t1063;
    }
    struct std__move_iterator_int___ agg_tmp21064;
    struct std__move_iterator_int___ agg_tmp31065;
    agg_tmp21064 = __first1051; // copy
    agg_tmp31065 = __last1052; // copy
    int* t1066 = __result1053;
    struct std__move_iterator_int___ t1067 = agg_tmp21064;
    struct std__move_iterator_int___ t1068 = agg_tmp31065;
    int* r1069 = int__std__uninitialized_copy_std__move_iterator_int____int__(t1067, t1068, t1066);
    if (__cir_exc_active) {
      int* __cir_eh_ret = (int*)0;
      return __cir_eh_ret;
    }
    __retval1055 = r1069;
    int* t1070 = __retval1055;
    return t1070;
  abort();
}

// function: _ZNSt13move_iteratorIPiEC2ES0_
void std__move_iterator_int____move_iterator(struct std__move_iterator_int___* v1071, int* v1072) {
bb1073:
  struct std__move_iterator_int___* this1074;
  int* __i1075;
  this1074 = v1071;
  __i1075 = v1072;
  struct std__move_iterator_int___* t1076 = this1074;
  struct std____detail____move_iter_cat_int___* base1077 = (struct std____detail____move_iter_cat_int___*)((char *)t1076 + 0);
  int* t1078 = __i1075;
  t1076->_M_current = t1078;
  return;
}

// function: _ZSt18make_move_iteratorIPiESt13move_iteratorIT_ES2_
struct std__move_iterator_int___ std__move_iterator_int___std__make_move_iterator_int__(int* v1079) {
bb1080:
  int* __i1081;
  struct std__move_iterator_int___ __retval1082;
  __i1081 = v1079;
  int* t1083 = __i1081;
  std__move_iterator_int____move_iterator(&__retval1082, t1083);
  if (__cir_exc_active) {
    struct std__move_iterator_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std__move_iterator_int___ t1084 = __retval1082;
  return t1084;
}

// function: _ZSt22__uninitialized_move_aIPiS0_SaIiEET0_T_S3_S2_RT1_
int* int__std____uninitialized_move_a_int___int___std__allocator_int___(int* v1085, int* v1086, int* v1087, struct std__allocator_int_* v1088) {
bb1089:
  int* __first1090;
  int* __last1091;
  int* __result1092;
  struct std__allocator_int_* __alloc1093;
  int* __retval1094;
  struct std__move_iterator_int___ agg_tmp01095;
  struct std__move_iterator_int___ agg_tmp11096;
  __first1090 = v1085;
  __last1091 = v1086;
  __result1092 = v1087;
  __alloc1093 = v1088;
  int* t1097 = __first1090;
  struct std__move_iterator_int___ r1098 = std__move_iterator_int___std__make_move_iterator_int__(t1097);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  agg_tmp01095 = r1098;
  int* t1099 = __last1091;
  struct std__move_iterator_int___ r1100 = std__move_iterator_int___std__make_move_iterator_int__(t1099);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  agg_tmp11096 = r1100;
  int* t1101 = __result1092;
  struct std__allocator_int_* t1102 = __alloc1093;
  struct std__move_iterator_int___ t1103 = agg_tmp01095;
  struct std__move_iterator_int___ t1104 = agg_tmp11096;
  int* r1105 = int__std____uninitialized_copy_a_std__move_iterator_int____std__move_iterator_int____int___int_(t1103, t1104, t1101, t1102);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1094 = r1105;
  int* t1106 = __retval1094;
  return t1106;
}

// function: _ZSt9__fill_a1IPiiEvT_S1_RKT0_
void void_std____fill_a1_int___int_(int* v1107, int* v1108, int* v1109) {
bb1110:
  int* __first1111;
  int* __last1112;
  int* __value1113;
  _Bool __load_outside_loop1114;
  int __val1115;
  __first1111 = v1107;
  __last1112 = v1108;
  __value1113 = v1109;
  _Bool c1116 = 1;
  __load_outside_loop1114 = c1116;
  int* t1117 = __value1113;
  int t1118 = *t1117;
  __val1115 = t1118;
    while (1) {
      int* t1120 = __first1111;
      int* t1121 = __last1112;
      _Bool c1122 = ((t1120 != t1121)) ? 1 : 0;
      if (!c1122) break;
      int t1123 = __val1115;
      int* t1124 = __first1111;
      *t1124 = t1123;
    for_step1119: ;
      int* t1125 = __first1111;
      int c1126 = 1;
      int* ptr1127 = &(t1125)[c1126];
      __first1111 = ptr1127;
    }
  return;
}

// function: _ZSt8__fill_aIPiiEvT_S1_RKT0_
void void_std____fill_a_int___int_(int* v1128, int* v1129, int* v1130) {
bb1131:
  int* __first1132;
  int* __last1133;
  int* __value1134;
  __first1132 = v1128;
  __last1133 = v1129;
  __value1134 = v1130;
  int* t1135 = __first1132;
  int* t1136 = __last1133;
  int* t1137 = __value1134;
  void_std____fill_a1_int___int_(t1135, t1136, t1137);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt4fillIPiiEvT_S1_RKT0_
void void_std__fill_int___int_(int* v1138, int* v1139, int* v1140) {
bb1141:
  int* __first1142;
  int* __last1143;
  int* __value1144;
  __first1142 = v1138;
  __last1143 = v1139;
  __value1144 = v1140;
  int* t1145 = __first1142;
  int* t1146 = __last1143;
  int* t1147 = __value1144;
  void_std____fill_a_int___int_(t1145, t1146, t1147);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt6vectorIiSaIiEE16_Temporary_valueD2Ev
void std__vector_int__std__allocator_int______Temporary_value____Temporary_value(struct std__vector_int__std__allocator_int_____Temporary_value* v1148) {
bb1149:
  struct std__vector_int__std__allocator_int_____Temporary_value* this1150;
  this1150 = v1148;
  struct std__vector_int__std__allocator_int_____Temporary_value* t1151 = this1150;
    struct std__vector_int__std__allocator_int__* t1152 = t1151->_M_this;
    struct std___Vector_base_int__std__allocator_int__* base1153 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1152 + 0);
    struct std__allocator_int_* base1154 = (struct std__allocator_int_*)((char *)&(base1153->_M_impl) + 0);
    int* r1155 = std__vector_int__std__allocator_int______Temporary_value___M_ptr(t1151);
    void_std__allocator_traits_std__allocator_int_____destroy_int_(base1154, r1155);
  {
    std__vector_int__std__allocator_int______Temporary_value___Storage____Storage(&t1151->_M_storage);
  }
  return;
}

// function: _ZSt32__make_move_if_noexcept_iteratorIiSt13move_iteratorIPiEET0_PT_
struct std__move_iterator_int___ std__move_iterator_int___std____make_move_if_noexcept_iterator_int__std__move_iterator_int____(int* v1156) {
bb1157:
  int* __i1158;
  struct std__move_iterator_int___ __retval1159;
  __i1158 = v1156;
  int* t1160 = __i1158;
  std__move_iterator_int____move_iterator(&__retval1159, t1160);
  if (__cir_exc_active) {
    struct std__move_iterator_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std__move_iterator_int___ t1161 = __retval1159;
  return t1161;
}

// function: _ZSt34__uninitialized_move_if_noexcept_aIPiS0_SaIiEET0_T_S3_S2_RT1_
int* int__std____uninitialized_move_if_noexcept_a_int___int___std__allocator_int___(int* v1162, int* v1163, int* v1164, struct std__allocator_int_* v1165) {
bb1166:
  int* __first1167;
  int* __last1168;
  int* __result1169;
  struct std__allocator_int_* __alloc1170;
  int* __retval1171;
  struct std__move_iterator_int___ agg_tmp01172;
  struct std__move_iterator_int___ agg_tmp11173;
  __first1167 = v1162;
  __last1168 = v1163;
  __result1169 = v1164;
  __alloc1170 = v1165;
  int* t1174 = __first1167;
  struct std__move_iterator_int___ r1175 = std__move_iterator_int___std____make_move_if_noexcept_iterator_int__std__move_iterator_int____(t1174);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  agg_tmp01172 = r1175;
  int* t1176 = __last1168;
  struct std__move_iterator_int___ r1177 = std__move_iterator_int___std____make_move_if_noexcept_iterator_int__std__move_iterator_int____(t1176);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  agg_tmp11173 = r1177;
  int* t1178 = __result1169;
  struct std__allocator_int_* t1179 = __alloc1170;
  struct std__move_iterator_int___ t1180 = agg_tmp01172;
  struct std__move_iterator_int___ t1181 = agg_tmp11173;
  int* r1182 = int__std____uninitialized_copy_a_std__move_iterator_int____std__move_iterator_int____int___int_(t1180, t1181, t1178, t1179);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1171 = r1182;
  int* t1183 = __retval1171;
  return t1183;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1184, int* v1185, struct std__allocator_int_* v1186) {
bb1187:
  int* __first1188;
  int* __last1189;
  struct std__allocator_int_* unnamed1190;
  __first1188 = v1184;
  __last1189 = v1185;
  unnamed1190 = v1186;
  int* t1191 = __first1188;
  int* t1192 = __last1189;
  void_std___Destroy_int__(t1191, t1192);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt6vectorIiSaIiEE14_M_fill_insertEN9__gnu_cxx17__normal_iteratorIPiS1_EEmRKi
void std__vector_int__std__allocator_int______M_fill_insert(struct std__vector_int__std__allocator_int__* v1193, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1194, unsigned long v1195, int* v1196) {
bb1197:
  struct std__vector_int__std__allocator_int__* this1198;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __position1199;
  unsigned long __n1200;
  int* __x1201;
  this1198 = v1193;
  __position1199 = v1194;
  __n1200 = v1195;
  __x1201 = v1196;
  struct std__vector_int__std__allocator_int__* t1202 = this1198;
    unsigned long t1203 = __n1200;
    unsigned long c1204 = 0;
    _Bool c1205 = ((t1203 != c1204)) ? 1 : 0;
    if (c1205) {
        int** r1206 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__position1199);
        int* t1207 = *r1206;
        struct std___Vector_base_int__std__allocator_int__* base1208 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1202 + 0);
        struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1209 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1208->_M_impl) + 0);
        int* t1210 = base1209->_M_finish;
        _Bool c1211 = ((t1207 == t1210)) ? 1 : 0;
        if (c1211) {
          unsigned long t1212 = __n1200;
          int* t1213 = __x1201;
          std__vector_int__std__allocator_int______M_fill_append(t1202, t1212, t1213);
          if (__cir_exc_active) {
            return;
          }
        } else {
            struct std___Vector_base_int__std__allocator_int__* base1214 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1202 + 0);
            struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1215 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1214->_M_impl) + 0);
            int* t1216 = base1215->_M_end_of_storage;
            struct std___Vector_base_int__std__allocator_int__* base1217 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1202 + 0);
            struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1218 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1217->_M_impl) + 0);
            int* t1219 = base1218->_M_finish;
            long diff1220 = t1216 - t1219;
            unsigned long cast1221 = (unsigned long)diff1220;
            unsigned long t1222 = __n1200;
            _Bool c1223 = ((cast1221 >= t1222)) ? 1 : 0;
            if (c1223) {
              struct std__vector_int__std__allocator_int_____Temporary_value __tmp1224;
              int* __x_copy1225;
              unsigned long __elems_after1226;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp01227;
              int* __old_finish1228;
              int* t1229 = __x1201;
              std__vector_int__std__allocator_int______Temporary_value___Temporary_value_int_const__(&__tmp1224, t1202, t1229);
              if (__cir_exc_active) {
                return;
              }
                int* r1230 = std__vector_int__std__allocator_int______Temporary_value___M_val(&__tmp1224);
                __x_copy1225 = r1230;
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1231 = std__vector_int__std__allocator_int_____end(t1202);
                ref_tmp01227 = r1231;
                long r1232 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&ref_tmp01227, &__position1199);
                unsigned long cast1233 = (unsigned long)r1232;
                __elems_after1226 = cast1233;
                struct std___Vector_base_int__std__allocator_int__* base1234 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1202 + 0);
                struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1235 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1234->_M_impl) + 0);
                int* t1236 = base1235->_M_finish;
                __old_finish1228 = t1236;
                  unsigned long t1237 = __elems_after1226;
                  unsigned long t1238 = __n1200;
                  _Bool c1239 = ((t1237 > t1238)) ? 1 : 0;
                  if (c1239) {
                    int* t1240 = __old_finish1228;
                    unsigned long t1241 = __n1200;
                    long cast1242 = (long)t1241;
                    long u1243 = -cast1242;
                    int* ptr1244 = &(t1240)[u1243];
                    int* t1245 = __old_finish1228;
                    int* t1246 = __old_finish1228;
                    struct std___Vector_base_int__std__allocator_int__* base1247 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1202 + 0);
                    struct std__allocator_int_* r1248 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1247);
                    int* r1249 = int__std____uninitialized_move_a_int___int___std__allocator_int___(ptr1244, t1245, t1246, r1248);
                    if (__cir_exc_active) {
                      {
                        std__vector_int__std__allocator_int______Temporary_value____Temporary_value(&__tmp1224);
                      }
                      return;
                    }
                    unsigned long t1250 = __n1200;
                    struct std___Vector_base_int__std__allocator_int__* base1251 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1202 + 0);
                    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1252 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1251->_M_impl) + 0);
                    int* t1253 = base1252->_M_finish;
                    int* ptr1254 = &(t1253)[t1250];
                    base1252->_M_finish = ptr1254;
                    int** r1255 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__position1199);
                    int* t1256 = *r1255;
                    int* t1257 = __old_finish1228;
                    unsigned long t1258 = __n1200;
                    long cast1259 = (long)t1258;
                    long u1260 = -cast1259;
                    int* ptr1261 = &(t1257)[u1260];
                    int* t1262 = __old_finish1228;
                    int* r1263 = int__std__move_backward_int___int__(t1256, ptr1261, t1262);
                    if (__cir_exc_active) {
                      {
                        std__vector_int__std__allocator_int______Temporary_value____Temporary_value(&__tmp1224);
                      }
                      return;
                    }
                    int** r1264 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__position1199);
                    int* t1265 = *r1264;
                    int** r1266 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__position1199);
                    int* t1267 = *r1266;
                    unsigned long t1268 = __n1200;
                    int* ptr1269 = &(t1267)[t1268];
                    int* t1270 = __x_copy1225;
                    void_std__fill_int___int_(t1265, ptr1269, t1270);
                    if (__cir_exc_active) {
                      {
                        std__vector_int__std__allocator_int______Temporary_value____Temporary_value(&__tmp1224);
                      }
                      return;
                    }
                  } else {
                    int* t1271 = __old_finish1228;
                    unsigned long t1272 = __n1200;
                    unsigned long t1273 = __elems_after1226;
                    unsigned long b1274 = t1272 - t1273;
                    int* t1275 = __x_copy1225;
                    struct std___Vector_base_int__std__allocator_int__* base1276 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1202 + 0);
                    struct std__allocator_int_* r1277 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1276);
                    int* r1278 = int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(t1271, b1274, t1275, r1277);
                    if (__cir_exc_active) {
                      {
                        std__vector_int__std__allocator_int______Temporary_value____Temporary_value(&__tmp1224);
                      }
                      return;
                    }
                    struct std___Vector_base_int__std__allocator_int__* base1279 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1202 + 0);
                    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1280 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1279->_M_impl) + 0);
                    base1280->_M_finish = r1278;
                    int** r1281 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__position1199);
                    int* t1282 = *r1281;
                    int* t1283 = __old_finish1228;
                    struct std___Vector_base_int__std__allocator_int__* base1284 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1202 + 0);
                    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1285 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1284->_M_impl) + 0);
                    int* t1286 = base1285->_M_finish;
                    struct std___Vector_base_int__std__allocator_int__* base1287 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1202 + 0);
                    struct std__allocator_int_* r1288 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1287);
                    int* r1289 = int__std____uninitialized_move_a_int___int___std__allocator_int___(t1282, t1283, t1286, r1288);
                    if (__cir_exc_active) {
                      {
                        std__vector_int__std__allocator_int______Temporary_value____Temporary_value(&__tmp1224);
                      }
                      return;
                    }
                    unsigned long t1290 = __elems_after1226;
                    struct std___Vector_base_int__std__allocator_int__* base1291 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1202 + 0);
                    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1292 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1291->_M_impl) + 0);
                    int* t1293 = base1292->_M_finish;
                    int* ptr1294 = &(t1293)[t1290];
                    base1292->_M_finish = ptr1294;
                    int** r1295 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__position1199);
                    int* t1296 = *r1295;
                    int* t1297 = __old_finish1228;
                    int* t1298 = __x_copy1225;
                    void_std__fill_int___int_(t1296, t1297, t1298);
                    if (__cir_exc_active) {
                      {
                        std__vector_int__std__allocator_int______Temporary_value____Temporary_value(&__tmp1224);
                      }
                      return;
                    }
                  }
              {
                std__vector_int__std__allocator_int______Temporary_value____Temporary_value(&__tmp1224);
              }
            } else {
              int* __old_start1299;
              int* __old_finish1300;
              int* __pos1301;
              unsigned long __len1302;
              unsigned long __elems_before1303;
              int* __new_start1304;
              int* __new_finish1305;
              struct std___Vector_base_int__std__allocator_int__* base1306 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1202 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1307 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1306->_M_impl) + 0);
              int* t1308 = base1307->_M_start;
              __old_start1299 = t1308;
              struct std___Vector_base_int__std__allocator_int__* base1309 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1202 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1310 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1309->_M_impl) + 0);
              int* t1311 = base1310->_M_finish;
              __old_finish1300 = t1311;
              int** r1312 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__position1199);
              int* t1313 = *r1312;
              __pos1301 = t1313;
              unsigned long t1314 = __n1200;
              char* cast1315 = (char*)&(_str_6);
              unsigned long r1316 = std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(t1202, t1314, cast1315);
              if (__cir_exc_active) {
                return;
              }
              __len1302 = r1316;
              int* t1317 = __pos1301;
              int* t1318 = __old_start1299;
              long diff1319 = t1317 - t1318;
              unsigned long cast1320 = (unsigned long)diff1319;
              __elems_before1303 = cast1320;
              struct std___Vector_base_int__std__allocator_int__* base1321 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1202 + 0);
              unsigned long t1322 = __len1302;
              int* r1323 = std___Vector_base_int__std__allocator_int______M_allocate(base1321, t1322);
              if (__cir_exc_active) {
                return;
              }
              __new_start1304 = r1323;
              int* t1324 = __new_start1304;
              __new_finish1305 = t1324;
                  int* t1326 = __new_start1304;
                  unsigned long t1327 = __elems_before1303;
                  int* ptr1328 = &(t1326)[t1327];
                  unsigned long t1329 = __n1200;
                  int* t1330 = __x1201;
                  struct std___Vector_base_int__std__allocator_int__* base1331 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1202 + 0);
                  struct std__allocator_int_* r1332 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1331);
                  int* r1333 = int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(ptr1328, t1329, t1330, r1332);
                  if (__cir_exc_active) {
                    goto cir_try_dispatch1325;
                  }
                  int* c1334 = ((void*)0);
                  __new_finish1305 = c1334;
                  int* t1335 = __old_start1299;
                  int* t1336 = __pos1301;
                  int* t1337 = __new_start1304;
                  struct std___Vector_base_int__std__allocator_int__* base1338 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1202 + 0);
                  struct std__allocator_int_* r1339 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1338);
                  int* r1340 = int__std____uninitialized_move_if_noexcept_a_int___int___std__allocator_int___(t1335, t1336, t1337, r1339);
                  if (__cir_exc_active) {
                    goto cir_try_dispatch1325;
                  }
                  __new_finish1305 = r1340;
                  unsigned long t1341 = __n1200;
                  int* t1342 = __new_finish1305;
                  int* ptr1343 = &(t1342)[t1341];
                  __new_finish1305 = ptr1343;
                  int* t1344 = __pos1301;
                  int* t1345 = __old_finish1300;
                  int* t1346 = __new_finish1305;
                  struct std___Vector_base_int__std__allocator_int__* base1347 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1202 + 0);
                  struct std__allocator_int_* r1348 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1347);
                  int* r1349 = int__std____uninitialized_move_if_noexcept_a_int___int___std__allocator_int___(t1344, t1345, t1346, r1348);
                  if (__cir_exc_active) {
                    goto cir_try_dispatch1325;
                  }
                  __new_finish1305 = r1349;
                cir_try_dispatch1325: ;
                if (__cir_exc_active) {
                {
                  int ca_tok1350 = 0;
                  void* ca_exn1351 = (void*)__cir_exc_ptr;
                  __cir_exc_active = 0;
                      int* t1352 = __new_finish1305;
                      _Bool cast1353 = (_Bool)t1352;
                      _Bool u1354 = !cast1353;
                      if (u1354) {
                        int* t1355 = __new_start1304;
                        unsigned long t1356 = __elems_before1303;
                        int* ptr1357 = &(t1355)[t1356];
                        int* t1358 = __new_start1304;
                        unsigned long t1359 = __elems_before1303;
                        int* ptr1360 = &(t1358)[t1359];
                        unsigned long t1361 = __n1200;
                        int* ptr1362 = &(ptr1360)[t1361];
                        struct std___Vector_base_int__std__allocator_int__* base1363 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1202 + 0);
                        struct std__allocator_int_* r1364 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1363);
                        void_std___Destroy_int___int_(ptr1357, ptr1362, r1364);
                        if (__cir_exc_active) {
                          {
                            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                          }
                          return;
                        }
                      } else {
                        int* t1365 = __new_start1304;
                        int* t1366 = __new_finish1305;
                        struct std___Vector_base_int__std__allocator_int__* base1367 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1202 + 0);
                        struct std__allocator_int_* r1368 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1367);
                        void_std___Destroy_int___int_(t1365, t1366, r1368);
                        if (__cir_exc_active) {
                          {
                            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                          }
                          return;
                        }
                      }
                    struct std___Vector_base_int__std__allocator_int__* base1369 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1202 + 0);
                    int* t1370 = __new_start1304;
                    unsigned long t1371 = __len1302;
                    std___Vector_base_int__std__allocator_int______M_deallocate(base1369, t1370, t1371);
                    if (__cir_exc_active) {
                      {
                        if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                      }
                      return;
                    }
                    __cir_exc_active = 1;
                    {
                      if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                    }
                    return;
                    __builtin_unreachable();
                }
                }
              int* t1372 = __old_start1299;
              int* t1373 = __old_finish1300;
              struct std___Vector_base_int__std__allocator_int__* base1374 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1202 + 0);
              struct std__allocator_int_* r1375 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1374);
              void_std___Destroy_int___int_(t1372, t1373, r1375);
              if (__cir_exc_active) {
                return;
              }
              struct std___Vector_base_int__std__allocator_int__* base1376 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1202 + 0);
              int* t1377 = __old_start1299;
              struct std___Vector_base_int__std__allocator_int__* base1378 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1202 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1379 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1378->_M_impl) + 0);
              int* t1380 = base1379->_M_end_of_storage;
              int* t1381 = __old_start1299;
              long diff1382 = t1380 - t1381;
              unsigned long cast1383 = (unsigned long)diff1382;
              std___Vector_base_int__std__allocator_int______M_deallocate(base1376, t1377, cast1383);
              if (__cir_exc_active) {
                return;
              }
              int* t1384 = __new_start1304;
              struct std___Vector_base_int__std__allocator_int__* base1385 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1202 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1386 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1385->_M_impl) + 0);
              base1386->_M_start = t1384;
              int* t1387 = __new_finish1305;
              struct std___Vector_base_int__std__allocator_int__* base1388 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1202 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1389 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1388->_M_impl) + 0);
              base1389->_M_finish = t1387;
              int* t1390 = __new_start1304;
              unsigned long t1391 = __len1302;
              int* ptr1392 = &(t1390)[t1391];
              struct std___Vector_base_int__std__allocator_int__* base1393 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1202 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1394 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1393->_M_impl) + 0);
              base1394->_M_end_of_storage = ptr1392;
            }
        }
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE6insertEN9__gnu_cxx17__normal_iteratorIPKiS1_EEmRS4_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____insert_2(struct std__vector_int__std__allocator_int__* v1395, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v1396, unsigned long v1397, int* v1398) {
bb1399:
  struct std__vector_int__std__allocator_int__* this1400;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __position1401;
  unsigned long __n1402;
  int* __x1403;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1404;
  long __offset1405;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp01406;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01407;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp11408;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp21409;
  this1400 = v1395;
  __position1401 = v1396;
  __n1402 = v1397;
  __x1403 = v1398;
  struct std__vector_int__std__allocator_int__* t1410 = this1400;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r1411 = std__vector_int__std__allocator_int_____cbegin___const(t1410);
  ref_tmp01406 = r1411;
  long r1412 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int_const___std__vector_int__std__allocator_int_____(&__position1401, &ref_tmp01406);
  __offset1405 = r1412;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1413 = std__vector_int__std__allocator_int_____begin(t1410);
  ref_tmp11408 = r1413;
  long t1414 = __offset1405;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1415 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&ref_tmp11408, t1414);
  agg_tmp01407 = r1415;
  unsigned long t1416 = __n1402;
  int* t1417 = __x1403;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1418 = agg_tmp01407;
  std__vector_int__std__allocator_int______M_fill_insert(t1410, t1418, t1416, t1417);
  if (__cir_exc_active) {
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1419 = std__vector_int__std__allocator_int_____begin(t1410);
  ref_tmp21409 = r1419;
  long t1420 = __offset1405;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1421 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&ref_tmp21409, t1420);
  __retval1404 = r1421;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1422 = __retval1404;
  return t1422;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1423, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1424) {
bb1425:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs1426;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs1427;
  _Bool __retval1428;
  __lhs1426 = v1423;
  __rhs1427 = v1424;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1429 = __lhs1426;
  int** r1430 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t1429);
  int* t1431 = *r1430;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1432 = __rhs1427;
  int** r1433 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t1432);
  int* t1434 = *r1433;
  _Bool c1435 = ((t1431 == t1434)) ? 1 : 0;
  __retval1428 = c1435;
  _Bool t1436 = __retval1428;
  return t1436;
}

// function: _ZSt10__distanceIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEENSt15iterator_traitsIT_E15difference_typeES8_S8_St26random_access_iterator_tag
long std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________difference_type_std____distance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1437, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1438, struct std__random_access_iterator_tag v1439) {
bb1440:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1441;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1442;
  struct std__random_access_iterator_tag unnamed1443;
  long __retval1444;
  __first1441 = v1437;
  __last1442 = v1438;
  unnamed1443 = v1439;
  long r1445 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last1442, &__first1441);
  __retval1444 = r1445;
  long t1446 = __retval1444;
  return t1446;
}

// function: _ZSt8distanceIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEENSt15iterator_traitsIT_E15difference_typeES8_S8_
long std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________difference_type_std__distance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1447, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1448) {
bb1449:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1450;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1451;
  long __retval1452;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01453;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11454;
  struct std__random_access_iterator_tag agg_tmp21455;
  __first1450 = v1447;
  __last1451 = v1448;
  agg_tmp01453 = __first1450; // copy
  agg_tmp11454 = __last1451; // copy
  struct std__random_access_iterator_tag r1456 = std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__first1450);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  agg_tmp21455 = r1456;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1457 = agg_tmp01453;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1458 = agg_tmp11454;
  struct std__random_access_iterator_tag t1459 = agg_tmp21455;
  long r1460 = std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________difference_type_std____distance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t1457, t1458, t1459);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  __retval1452 = r1460;
  long t1461 = __retval1452;
  return t1461;
}

// function: _ZSt12__niter_wrapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES2_ET_S7_T0_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____niter_wrap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1462, int* v1463) {
bb1464:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __from1465;
  int* __res1466;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1467;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01468;
  __from1465 = v1462;
  __res1466 = v1463;
  int* t1469 = __res1466;
  int* r1470 = int__std____niter_base_int__(t1469);
  agg_tmp01468 = __from1465; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1471 = agg_tmp01468;
  int* r1472 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t1471);
  long diff1473 = r1470 - r1472;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1474 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__from1465, diff1473);
  __retval1467 = r1474;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1475 = __retval1467;
  return t1475;
}

// function: _ZSt12__assign_oneILb0EPiS0_EvRT0_RT1_
void void_std____assign_one_false__int___int__(int** v1476, int** v1477) {
bb1478:
  int** __out1479;
  int** __in1480;
  __out1479 = v1476;
  __in1480 = v1477;
    int** t1481 = __in1480;
    int* t1482 = *t1481;
    int t1483 = *t1482;
    int** t1484 = __out1479;
    int* t1485 = *t1484;
    *t1485 = t1483;
  return;
}

// function: _ZSt14__copy_move_a2ILb0EPiS0_S0_ET2_T0_T1_S1_
int* int__std____copy_move_a2_false__int___int___int__(int* v1486, int* v1487, int* v1488) {
bb1489:
  int* __first1490;
  int* __last1491;
  int* __result1492;
  int* __retval1493;
  __first1490 = v1486;
  __last1491 = v1487;
  __result1492 = v1488;
      _Bool r1494 = std____is_constant_evaluated();
      if (r1494) {
      } else {
          long __n1495;
          int* t1496 = __first1490;
          int* t1497 = __last1491;
          long r1498 = std__iterator_traits_int____difference_type_std__distance_int__(t1496, t1497);
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
          __n1495 = r1498;
            long t1499 = __n1495;
            long c1500 = 1;
            _Bool c1501 = ((t1499 > c1500)) ? 1 : 0;
            if (c1501) {
              int* t1502 = __result1492;
              void* cast1503 = (void*)t1502;
              int* t1504 = __first1490;
              void* cast1505 = (void*)t1504;
              long t1506 = __n1495;
              unsigned long cast1507 = (unsigned long)t1506;
              unsigned long c1508 = 4;
              unsigned long b1509 = cast1507 * c1508;
              void* r1510 = memmove(cast1503, cast1505, b1509);
              long t1511 = __n1495;
              int* t1512 = __result1492;
              int* ptr1513 = &(t1512)[t1511];
              __result1492 = ptr1513;
            } else {
                long t1514 = __n1495;
                long c1515 = 1;
                _Bool c1516 = ((t1514 == c1515)) ? 1 : 0;
                if (c1516) {
                  void_std____assign_one_false__int___int__(&__result1492, &__first1490);
                  if (__cir_exc_active) {
                    int* __cir_eh_ret = (int*)0;
                    return __cir_eh_ret;
                  }
                  int* t1517 = __result1492;
                  int c1518 = 1;
                  int* ptr1519 = &(t1517)[c1518];
                  __result1492 = ptr1519;
                }
            }
          int* t1520 = __result1492;
          __retval1493 = t1520;
          int* t1521 = __retval1493;
          return t1521;
      }
    while (1) {
      int* t1523 = __first1490;
      int* t1524 = __last1491;
      _Bool c1525 = ((t1523 != t1524)) ? 1 : 0;
      if (!c1525) break;
      void_std____assign_one_false__int___int__(&__result1492, &__first1490);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
    for_step1522: ;
      int* t1526 = __result1492;
      int c1527 = 1;
      int* ptr1528 = &(t1526)[c1527];
      __result1492 = ptr1528;
      int* t1529 = __first1490;
      int c1530 = 1;
      int* ptr1531 = &(t1529)[c1530];
      __first1490 = ptr1531;
    }
  int* t1532 = __result1492;
  __retval1493 = t1532;
  int* t1533 = __retval1493;
  return t1533;
}

// function: _ZSt14__copy_move_a1ILb0EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_a1_false__int___int__(int* v1534, int* v1535, int* v1536) {
bb1537:
  int* __first1538;
  int* __last1539;
  int* __result1540;
  int* __retval1541;
  __first1538 = v1534;
  __last1539 = v1535;
  __result1540 = v1536;
  int* t1542 = __first1538;
  int* t1543 = __last1539;
  int* t1544 = __result1540;
  int* r1545 = int__std____copy_move_a2_false__int___int___int__(t1542, t1543, t1544);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1541 = r1545;
  int* t1546 = __retval1541;
  return t1546;
}

// function: _ZSt12__niter_baseIPiSt6vectorIiSaIiEEET_N9__gnu_cxx17__normal_iteratorIS4_T0_EE
int* int__std____niter_base_int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1547) {
bb1548:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it1549;
  int* __retval1550;
  __it1549 = v1547;
  int** r1551 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__it1549);
  int* t1552 = *r1551;
  __retval1550 = t1552;
  int* t1553 = __retval1550;
  return t1553;
}

// function: _ZSt13__copy_move_aILb0EN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_ET1_T0_S8_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____copy_move_a_false____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1554, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1555, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1556) {
bb1557:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1558;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1559;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result1560;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1561;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01562;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11563;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp21564;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp31565;
  __first1558 = v1554;
  __last1559 = v1555;
  __result1560 = v1556;
  agg_tmp01562 = __result1560; // copy
  agg_tmp11563 = __first1558; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1566 = agg_tmp11563;
  int* r1567 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t1566);
  agg_tmp21564 = __last1559; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1568 = agg_tmp21564;
  int* r1569 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t1568);
  agg_tmp31565 = __result1560; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1570 = agg_tmp31565;
  int* r1571 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t1570);
  int* r1572 = int__std____copy_move_a1_false__int___int__(r1567, r1569, r1571);
  if (__cir_exc_active) {
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1573 = agg_tmp01562;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1574 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____niter_wrap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(t1573, r1572);
  if (__cir_exc_active) {
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1561 = r1574;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1575 = __retval1561;
  return t1575;
}

// function: _ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEET_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1576) {
bb1577:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it1578;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1579;
  __it1578 = v1576;
  __retval1579 = __it1578; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1580 = __retval1579;
  return t1580;
}

// function: _ZSt4copyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_ET0_T_S8_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1581, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1582, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1583) {
bb1584:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1585;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1586;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result1587;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1588;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01589;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11590;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp21591;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp31592;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp41593;
  __first1585 = v1581;
  __last1586 = v1582;
  __result1587 = v1583;
  agg_tmp11590 = __first1585; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1594 = agg_tmp11590;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1595 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t1594);
  if (__cir_exc_active) {
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  agg_tmp01589 = r1595;
  agg_tmp31592 = __last1586; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1596 = agg_tmp31592;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1597 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t1596);
  if (__cir_exc_active) {
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  agg_tmp21591 = r1597;
  agg_tmp41593 = __result1587; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1598 = agg_tmp01589;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1599 = agg_tmp21591;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1600 = agg_tmp41593;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1601 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____copy_move_a_false____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t1598, t1599, t1600);
  if (__cir_exc_active) {
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1588 = r1601;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1602 = __retval1588;
  return t1602;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___4(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1603) {
bb1604:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this1605;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval1606;
  this1605 = v1603;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1607 = this1605;
  int* t1608 = t1607->_M_current;
  int c1609 = 1;
  int* ptr1610 = &(t1608)[c1609];
  t1607->_M_current = ptr1610;
  __retval1606 = t1607;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1611 = __retval1606;
  return t1611;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEmmEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1612) {
bb1613:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this1614;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval1615;
  this1614 = v1612;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1616 = this1614;
  int* t1617 = t1616->_M_current;
  int c1618 = -1;
  int* ptr1619 = &(t1617)[c1618];
  t1616->_M_current = ptr1619;
  __retval1615 = t1616;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1620 = __retval1615;
  return t1620;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEpLEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1621, long v1622) {
bb1623:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this1624;
  long __n1625;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval1626;
  this1624 = v1621;
  __n1625 = v1622;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1627 = this1624;
  long t1628 = __n1625;
  int* t1629 = t1627->_M_current;
  int* ptr1630 = &(t1629)[t1628];
  t1627->_M_current = ptr1630;
  __retval1626 = t1627;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1631 = __retval1626;
  return t1631;
}

// function: _ZSt9__advanceIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEElEvRT_T0_St26random_access_iterator_tag
void void_std____advance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1632, long v1633, struct std__random_access_iterator_tag v1634) {
bb1635:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __i1636;
  long __n1637;
  struct std__random_access_iterator_tag unnamed1638;
  __i1636 = v1632;
  __n1637 = v1633;
  unnamed1638 = v1634;
    long t1639 = __n1637;
    _Bool isconst1640 = 0;
    _Bool ternary1641;
    if (isconst1640) {
      long t1642 = __n1637;
      long c1643 = 1;
      _Bool c1644 = ((t1642 == c1643)) ? 1 : 0;
      ternary1641 = (_Bool)c1644;
    } else {
      _Bool c1645 = 0;
      ternary1641 = (_Bool)c1645;
    }
    if (ternary1641) {
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1646 = __i1636;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1647 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___4(t1646);
    } else {
        long t1648 = __n1637;
        _Bool isconst1649 = 0;
        _Bool ternary1650;
        if (isconst1649) {
          long t1651 = __n1637;
          long c1652 = -1;
          _Bool c1653 = ((t1651 == c1652)) ? 1 : 0;
          ternary1650 = (_Bool)c1653;
        } else {
          _Bool c1654 = 0;
          ternary1650 = (_Bool)c1654;
        }
        if (ternary1650) {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1655 = __i1636;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1656 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(t1655);
        } else {
          long t1657 = __n1637;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1658 = __i1636;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1659 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(t1658, t1657);
        }
    }
  return;
}

// function: _ZSt7advanceIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEmEvRT_T0_
void void_std__advance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______unsigned_long_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1660, unsigned long v1661) {
bb1662:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __i1663;
  unsigned long __n1664;
  long __d1665;
  struct std__random_access_iterator_tag agg_tmp01666;
  __i1663 = v1660;
  __n1664 = v1661;
  unsigned long t1667 = __n1664;
  long cast1668 = (long)t1667;
  __d1665 = cast1668;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1669 = __i1663;
  long t1670 = __d1665;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1671 = __i1663;
  struct std__random_access_iterator_tag r1672 = std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t1671);
  if (__cir_exc_active) {
    return;
  }
  agg_tmp01666 = r1672;
  struct std__random_access_iterator_tag t1673 = agg_tmp01666;
  void_std____advance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long_(t1669, t1670, t1673);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v1674, int* v1675) {
bb1676:
  int* __location1677;
  int* __args1678;
  int* __retval1679;
  void* __loc1680;
  __location1677 = v1674;
  __args1678 = v1675;
  int* t1681 = __location1677;
  void* cast1682 = (void*)t1681;
  __loc1680 = cast1682;
    void* t1683 = __loc1680;
    int* cast1684 = (int*)t1683;
    int* t1685 = __args1678;
    int t1686 = *t1685;
    *cast1684 = t1686;
    __retval1679 = cast1684;
    int* t1687 = __retval1679;
    return t1687;
  abort();
}

// function: _ZSt10_ConstructIiJRiEEvPT_DpOT0_
void void_std___Construct_int__int__(int* v1688, int* v1689) {
bb1690:
  int* __p1691;
  int* __args1692;
  __p1691 = v1688;
  __args1692 = v1689;
    _Bool r1693 = std____is_constant_evaluated();
    if (r1693) {
      int* t1694 = __p1691;
      int* t1695 = __args1692;
      int* r1696 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t1694, t1695);
      return;
    }
  int* t1697 = __p1691;
  void* cast1698 = (void*)t1697;
  int* cast1699 = (int*)cast1698;
  int* t1700 = __args1692;
  int t1701 = *t1700;
  *cast1699 = t1701;
  return;
}

// function: _ZSt16__do_uninit_copyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_S2_ET1_T_T0_S7_
int* int__std____do_uninit_copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1702, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1703, int* v1704) {
bb1705:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1706;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1707;
  int* __result1708;
  int* __retval1709;
  struct std___UninitDestroyGuard_int____void_ __guard1710;
  __first1706 = v1702;
  __last1707 = v1703;
  __result1708 = v1704;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard1710, &__result1708);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
      while (1) {
        _Bool r1712 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first1706, &__last1707);
        _Bool u1713 = !r1712;
        if (!u1713) break;
        int* t1714 = __result1708;
        int* r1715 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first1706);
        void_std___Construct_int__int__(t1714, r1715);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1710);
          }
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
      for_step1711: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1716 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___4(&__first1706);
        int* t1717 = __result1708;
        int c1718 = 1;
        int* ptr1719 = &(t1717)[c1718];
        __result1708 = ptr1719;
      }
    std___UninitDestroyGuard_int___void___release(&__guard1710);
    if (__cir_exc_active) {
      {
        std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1710);
      }
      int* __cir_eh_ret = (int*)0;
      return __cir_eh_ret;
    }
    int* t1720 = __result1708;
    __retval1709 = t1720;
    int* t1721 = __retval1709;
    int* ret_val1722 = t1721;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1710);
    }
    return ret_val1722;
  abort();
}

// function: _ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES2_ET0_T_S8_S7_
int* int__std__uninitialized_copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1723, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1724, int* v1725) {
bb1726:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1727;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1728;
  int* __result1729;
  int* __retval1730;
  __first1727 = v1723;
  __last1728 = v1724;
  __result1729 = v1725;
      long __n1731;
      long r1732 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last1728, &__first1727);
      __n1731 = r1732;
        long t1733 = __n1731;
        long c1734 = 0;
        _Bool c1735 = ((t1733 > c1734)) ? 1 : 0;
        if (c1735) {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01736;
          int* t1737 = __result1729;
          int* r1738 = int__std____niter_base_int__(t1737);
          void* cast1739 = (void*)r1738;
          agg_tmp01736 = __first1727; // copy
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1740 = agg_tmp01736;
          int* r1741 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t1740);
          void* cast1742 = (void*)r1741;
          long t1743 = __n1731;
          unsigned long cast1744 = (unsigned long)t1743;
          unsigned long c1745 = 4;
          unsigned long b1746 = cast1744 * c1745;
          void* r1747 = memcpy(cast1739, cast1742, b1746);
          long t1748 = __n1731;
          int* t1749 = __result1729;
          int* ptr1750 = &(t1749)[t1748];
          __result1729 = ptr1750;
        }
      int* t1751 = __result1729;
      __retval1730 = t1751;
      int* t1752 = __retval1730;
      return t1752;
  abort();
}

// function: _ZSt22__uninitialized_copy_aIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_S2_iET1_T_T0_S7_RSaIT2_E
int* int__std____uninitialized_copy_a___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1753, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1754, int* v1755, struct std__allocator_int_* v1756) {
bb1757:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1758;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1759;
  int* __result1760;
  struct std__allocator_int_* unnamed1761;
  int* __retval1762;
  __first1758 = v1753;
  __last1759 = v1754;
  __result1760 = v1755;
  unnamed1761 = v1756;
    _Bool r1763 = std__is_constant_evaluated();
    if (r1763) {
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01764;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11765;
      agg_tmp01764 = __first1758; // copy
      agg_tmp11765 = __last1759; // copy
      int* t1766 = __result1760;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1767 = agg_tmp01764;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1768 = agg_tmp11765;
      int* r1769 = int__std____do_uninit_copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(t1767, t1768, t1766);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      __retval1762 = r1769;
      int* t1770 = __retval1762;
      return t1770;
    }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp21771;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp31772;
    agg_tmp21771 = __first1758; // copy
    agg_tmp31772 = __last1759; // copy
    int* t1773 = __result1760;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1774 = agg_tmp21771;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1775 = agg_tmp31772;
    int* r1776 = int__std__uninitialized_copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(t1774, t1775, t1773);
    if (__cir_exc_active) {
      int* __cir_eh_ret = (int*)0;
      return __cir_eh_ret;
    }
    __retval1762 = r1776;
    int* t1777 = __retval1762;
    return t1777;
  abort();
}

// function: _ZNSt6vectorIiSaIiEE15_M_range_insertIN9__gnu_cxx17__normal_iteratorIPiS1_EEEEvS6_T_S7_St20forward_iterator_tag
void void_std__vector_int__std__allocator_int______M_range_insert___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct std__vector_int__std__allocator_int__* v1778, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1779, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1780, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1781, struct std__forward_iterator_tag v1782) {
bb1783:
  struct std__vector_int__std__allocator_int__* this1784;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __position1785;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1786;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1787;
  struct std__forward_iterator_tag unnamed1788;
  this1784 = v1778;
  __position1785 = v1779;
  __first1786 = v1780;
  __last1787 = v1781;
  unnamed1788 = v1782;
  struct std__vector_int__std__allocator_int__* t1789 = this1784;
    _Bool r1790 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first1786, &__last1787);
    _Bool u1791 = !r1790;
    if (u1791) {
      unsigned long __n1792;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01793;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11794;
      agg_tmp01793 = __first1786; // copy
      agg_tmp11794 = __last1787; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1795 = agg_tmp01793;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1796 = agg_tmp11794;
      long r1797 = std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________difference_type_std__distance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t1795, t1796);
      if (__cir_exc_active) {
        return;
      }
      unsigned long cast1798 = (unsigned long)r1797;
      __n1792 = cast1798;
        struct std___Vector_base_int__std__allocator_int__* base1799 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1789 + 0);
        struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1800 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1799->_M_impl) + 0);
        int* t1801 = base1800->_M_end_of_storage;
        struct std___Vector_base_int__std__allocator_int__* base1802 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1789 + 0);
        struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1803 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1802->_M_impl) + 0);
        int* t1804 = base1803->_M_finish;
        long diff1805 = t1801 - t1804;
        unsigned long cast1806 = (unsigned long)diff1805;
        unsigned long t1807 = __n1792;
        _Bool c1808 = ((cast1806 >= t1807)) ? 1 : 0;
        if (c1808) {
          unsigned long __elems_after1809;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp01810;
          int* __old_finish1811;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1812 = std__vector_int__std__allocator_int_____end(t1789);
          ref_tmp01810 = r1812;
          long r1813 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&ref_tmp01810, &__position1785);
          unsigned long cast1814 = (unsigned long)r1813;
          __elems_after1809 = cast1814;
          struct std___Vector_base_int__std__allocator_int__* base1815 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1789 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1816 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1815->_M_impl) + 0);
          int* t1817 = base1816->_M_finish;
          __old_finish1811 = t1817;
            unsigned long t1818 = __elems_after1809;
            unsigned long t1819 = __n1792;
            _Bool c1820 = ((t1818 > t1819)) ? 1 : 0;
            if (c1820) {
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp21821;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp31822;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp41823;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp51824;
              struct std___Vector_base_int__std__allocator_int__* base1825 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1789 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1826 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1825->_M_impl) + 0);
              int* t1827 = base1826->_M_finish;
              unsigned long t1828 = __n1792;
              long cast1829 = (long)t1828;
              long u1830 = -cast1829;
              int* ptr1831 = &(t1827)[u1830];
              struct std___Vector_base_int__std__allocator_int__* base1832 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1789 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1833 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1832->_M_impl) + 0);
              int* t1834 = base1833->_M_finish;
              struct std___Vector_base_int__std__allocator_int__* base1835 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1789 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1836 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1835->_M_impl) + 0);
              int* t1837 = base1836->_M_finish;
              struct std___Vector_base_int__std__allocator_int__* base1838 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1789 + 0);
              struct std__allocator_int_* r1839 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1838);
              int* r1840 = int__std____uninitialized_move_a_int___int___std__allocator_int___(ptr1831, t1834, t1837, r1839);
              if (__cir_exc_active) {
                return;
              }
              unsigned long t1841 = __n1792;
              struct std___Vector_base_int__std__allocator_int__* base1842 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1789 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1843 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1842->_M_impl) + 0);
              int* t1844 = base1843->_M_finish;
              int* ptr1845 = &(t1844)[t1841];
              base1843->_M_finish = ptr1845;
              int** r1846 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__position1785);
              int* t1847 = *r1846;
              int* t1848 = __old_finish1811;
              unsigned long t1849 = __n1792;
              long cast1850 = (long)t1849;
              long u1851 = -cast1850;
              int* ptr1852 = &(t1848)[u1851];
              int* t1853 = __old_finish1811;
              int* r1854 = int__std__move_backward_int___int__(t1847, ptr1852, t1853);
              if (__cir_exc_active) {
                return;
              }
              agg_tmp21821 = __first1786; // copy
              agg_tmp31822 = __last1787; // copy
              agg_tmp41823 = __position1785; // copy
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1855 = agg_tmp21821;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1856 = agg_tmp31822;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1857 = agg_tmp41823;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1858 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t1855, t1856, t1857);
              if (__cir_exc_active) {
                return;
              }
              agg_tmp51824 = r1858;
            } else {
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __mid1859;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp61860;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp71861;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp81862;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp91863;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp101864;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp111865;
              __mid1859 = __first1786; // copy
              unsigned long t1866 = __elems_after1809;
              void_std__advance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______unsigned_long_(&__mid1859, t1866);
              if (__cir_exc_active) {
                return;
              }
              agg_tmp61860 = __mid1859; // copy
              agg_tmp71861 = __last1787; // copy
              struct std___Vector_base_int__std__allocator_int__* base1867 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1789 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1868 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1867->_M_impl) + 0);
              int* t1869 = base1868->_M_finish;
              struct std___Vector_base_int__std__allocator_int__* base1870 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1789 + 0);
              struct std__allocator_int_* r1871 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1870);
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1872 = agg_tmp61860;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1873 = agg_tmp71861;
              int* r1874 = int__std____uninitialized_copy_a___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___int_(t1872, t1873, t1869, r1871);
              if (__cir_exc_active) {
                return;
              }
              unsigned long t1875 = __n1792;
              unsigned long t1876 = __elems_after1809;
              unsigned long b1877 = t1875 - t1876;
              struct std___Vector_base_int__std__allocator_int__* base1878 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1789 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1879 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1878->_M_impl) + 0);
              int* t1880 = base1879->_M_finish;
              int* ptr1881 = &(t1880)[b1877];
              base1879->_M_finish = ptr1881;
              int** r1882 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__position1785);
              int* t1883 = *r1882;
              int* t1884 = __old_finish1811;
              struct std___Vector_base_int__std__allocator_int__* base1885 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1789 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1886 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1885->_M_impl) + 0);
              int* t1887 = base1886->_M_finish;
              struct std___Vector_base_int__std__allocator_int__* base1888 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1789 + 0);
              struct std__allocator_int_* r1889 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1888);
              int* r1890 = int__std____uninitialized_move_a_int___int___std__allocator_int___(t1883, t1884, t1887, r1889);
              if (__cir_exc_active) {
                return;
              }
              unsigned long t1891 = __elems_after1809;
              struct std___Vector_base_int__std__allocator_int__* base1892 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1789 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1893 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1892->_M_impl) + 0);
              int* t1894 = base1893->_M_finish;
              int* ptr1895 = &(t1894)[t1891];
              base1893->_M_finish = ptr1895;
              agg_tmp81862 = __first1786; // copy
              agg_tmp91863 = __mid1859; // copy
              agg_tmp101864 = __position1785; // copy
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1896 = agg_tmp81862;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1897 = agg_tmp91863;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1898 = agg_tmp101864;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1899 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t1896, t1897, t1898);
              if (__cir_exc_active) {
                return;
              }
              agg_tmp111865 = r1899;
            }
        } else {
          int* __old_start1900;
          int* __old_finish1901;
          unsigned long __len1902;
          int* __new_start1903;
          int* __new_finish1904;
          struct std___Vector_base_int__std__allocator_int__* base1905 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1789 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1906 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1905->_M_impl) + 0);
          int* t1907 = base1906->_M_start;
          __old_start1900 = t1907;
          struct std___Vector_base_int__std__allocator_int__* base1908 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1789 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1909 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1908->_M_impl) + 0);
          int* t1910 = base1909->_M_finish;
          __old_finish1901 = t1910;
          unsigned long t1911 = __n1792;
          char* cast1912 = (char*)&(_str_8);
          unsigned long r1913 = std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(t1789, t1911, cast1912);
          if (__cir_exc_active) {
            return;
          }
          __len1902 = r1913;
          struct std___Vector_base_int__std__allocator_int__* base1914 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1789 + 0);
          unsigned long t1915 = __len1902;
          int* r1916 = std___Vector_base_int__std__allocator_int______M_allocate(base1914, t1915);
          if (__cir_exc_active) {
            return;
          }
          __new_start1903 = r1916;
          int* t1917 = __new_start1903;
          __new_finish1904 = t1917;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp121918;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp131919;
              int* t1921 = __old_start1900;
              int** r1922 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__position1785);
              int* t1923 = *r1922;
              int* t1924 = __new_start1903;
              struct std___Vector_base_int__std__allocator_int__* base1925 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1789 + 0);
              struct std__allocator_int_* r1926 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1925);
              int* r1927 = int__std____uninitialized_move_if_noexcept_a_int___int___std__allocator_int___(t1921, t1923, t1924, r1926);
              if (__cir_exc_active) {
                goto cir_try_dispatch1920;
              }
              __new_finish1904 = r1927;
              agg_tmp121918 = __first1786; // copy
              agg_tmp131919 = __last1787; // copy
              int* t1928 = __new_finish1904;
              struct std___Vector_base_int__std__allocator_int__* base1929 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1789 + 0);
              struct std__allocator_int_* r1930 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1929);
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1931 = agg_tmp121918;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1932 = agg_tmp131919;
              int* r1933 = int__std____uninitialized_copy_a___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___int_(t1931, t1932, t1928, r1930);
              if (__cir_exc_active) {
                goto cir_try_dispatch1920;
              }
              __new_finish1904 = r1933;
              int** r1934 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__position1785);
              int* t1935 = *r1934;
              int* t1936 = __old_finish1901;
              int* t1937 = __new_finish1904;
              struct std___Vector_base_int__std__allocator_int__* base1938 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1789 + 0);
              struct std__allocator_int_* r1939 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1938);
              int* r1940 = int__std____uninitialized_move_if_noexcept_a_int___int___std__allocator_int___(t1935, t1936, t1937, r1939);
              if (__cir_exc_active) {
                goto cir_try_dispatch1920;
              }
              __new_finish1904 = r1940;
            cir_try_dispatch1920: ;
            if (__cir_exc_active) {
            {
              int ca_tok1941 = 0;
              void* ca_exn1942 = (void*)__cir_exc_ptr;
              __cir_exc_active = 0;
                int* t1943 = __new_start1903;
                int* t1944 = __new_finish1904;
                struct std___Vector_base_int__std__allocator_int__* base1945 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1789 + 0);
                struct std__allocator_int_* r1946 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1945);
                void_std___Destroy_int___int_(t1943, t1944, r1946);
                if (__cir_exc_active) {
                  {
                    if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                  }
                  return;
                }
                struct std___Vector_base_int__std__allocator_int__* base1947 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1789 + 0);
                int* t1948 = __new_start1903;
                unsigned long t1949 = __len1902;
                std___Vector_base_int__std__allocator_int______M_deallocate(base1947, t1948, t1949);
                if (__cir_exc_active) {
                  {
                    if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                  }
                  return;
                }
                __cir_exc_active = 1;
                {
                  if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                }
                return;
                __builtin_unreachable();
            }
            }
          int* t1950 = __old_start1900;
          int* t1951 = __old_finish1901;
          struct std___Vector_base_int__std__allocator_int__* base1952 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1789 + 0);
          struct std__allocator_int_* r1953 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1952);
          void_std___Destroy_int___int_(t1950, t1951, r1953);
          if (__cir_exc_active) {
            return;
          }
          struct std___Vector_base_int__std__allocator_int__* base1954 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1789 + 0);
          int* t1955 = __old_start1900;
          struct std___Vector_base_int__std__allocator_int__* base1956 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1789 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1957 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1956->_M_impl) + 0);
          int* t1958 = base1957->_M_end_of_storage;
          int* t1959 = __old_start1900;
          long diff1960 = t1958 - t1959;
          unsigned long cast1961 = (unsigned long)diff1960;
          std___Vector_base_int__std__allocator_int______M_deallocate(base1954, t1955, cast1961);
          if (__cir_exc_active) {
            return;
          }
          int* t1962 = __new_start1903;
          struct std___Vector_base_int__std__allocator_int__* base1963 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1789 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1964 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1963->_M_impl) + 0);
          base1964->_M_start = t1962;
          int* t1965 = __new_finish1904;
          struct std___Vector_base_int__std__allocator_int__* base1966 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1789 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1967 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1966->_M_impl) + 0);
          base1967->_M_finish = t1965;
          int* t1968 = __new_start1903;
          unsigned long t1969 = __len1902;
          int* ptr1970 = &(t1968)[t1969];
          struct std___Vector_base_int__std__allocator_int__* base1971 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1789 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1972 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1971->_M_impl) + 0);
          base1972->_M_end_of_storage = ptr1970;
        }
    }
  return;
}

// function: _ZSt19__iterator_categoryIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEENSt15iterator_traitsIT_E17iterator_categoryERKS8_
struct std__random_access_iterator_tag std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1973) {
bb1974:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed1975;
  struct std__random_access_iterator_tag __retval1976;
  unnamed1975 = v1973;
  struct std__random_access_iterator_tag t1977 = __retval1976;
  return t1977;
}

// function: _ZNSt6vectorIiSaIiEE6insertIN9__gnu_cxx17__normal_iteratorIPiS1_EEvEES6_NS4_IPKiS1_EET_SA_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__vector_int__std__allocator_int_____insert___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______void_(struct std__vector_int__std__allocator_int__* v1978, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v1979, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1980, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1981) {
bb1982:
  struct std__vector_int__std__allocator_int__* this1983;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __position1984;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1985;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1986;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1987;
  long __offset1988;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp01989;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01990;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp11991;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11992;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp21993;
  struct std__forward_iterator_tag agg_tmp31994;
  struct std__random_access_iterator_tag ref_tmp21995;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp31996;
  this1983 = v1978;
  __position1984 = v1979;
  __first1985 = v1980;
  __last1986 = v1981;
  struct std__vector_int__std__allocator_int__* t1997 = this1983;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r1998 = std__vector_int__std__allocator_int_____cbegin___const(t1997);
  ref_tmp01989 = r1998;
  long r1999 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int_const___std__vector_int__std__allocator_int_____(&__position1984, &ref_tmp01989);
  __offset1988 = r1999;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2000 = std__vector_int__std__allocator_int_____begin(t1997);
  ref_tmp11991 = r2000;
  long t2001 = __offset1988;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2002 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&ref_tmp11991, t2001);
  agg_tmp01990 = r2002;
  agg_tmp11992 = __first1985; // copy
  agg_tmp21993 = __last1986; // copy
  struct std__random_access_iterator_tag r2003 = std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__first1985);
  if (__cir_exc_active) {
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  ref_tmp21995 = r2003;
  struct std__forward_iterator_tag* base2004 = (struct std__forward_iterator_tag*)((char *)&(ref_tmp21995) + 0);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2005 = agg_tmp01990;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2006 = agg_tmp11992;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2007 = agg_tmp21993;
  struct std__forward_iterator_tag t2008 = agg_tmp31994;
  void_std__vector_int__std__allocator_int______M_range_insert___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t1997, t2005, t2006, t2007, t2008);
  if (__cir_exc_active) {
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2009 = std__vector_int__std__allocator_int_____begin(t1997);
  ref_tmp31996 = r2009;
  long t2010 = __offset1988;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2011 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&ref_tmp31996, t2010);
  __retval1987 = r2011;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2012 = __retval1987;
  return t2012;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEplEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v2013, long v2014) {
bb2015:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this2016;
  long __n2017;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval2018;
  int* ref_tmp02019;
  this2016 = v2013;
  __n2017 = v2014;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t2020 = this2016;
  int* t2021 = t2020->_M_current;
  long t2022 = __n2017;
  int* ptr2023 = &(t2021)[t2022];
  ref_tmp02019 = ptr2023;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval2018, &ref_tmp02019);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2024 = __retval2018;
  return t2024;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v2025) {
bb2026:
  struct std__vector_int__std__allocator_int__* this2027;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval2028;
  this2027 = v2025;
  struct std__vector_int__std__allocator_int__* t2029 = this2027;
  struct std___Vector_base_int__std__allocator_int__* base2030 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2029 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2031 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base2030->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval2028, &base2031->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2032 = __retval2028;
  return t2032;
}

// function: _ZSt13__copy_move_aILb0EPiN9__gnu_cxx17__normal_iteratorIS0_St6vectorIiSaIiEEEEET1_T0_S8_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____copy_move_a_false__int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(int* v2033, int* v2034, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v2035) {
bb2036:
  int* __first2037;
  int* __last2038;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result2039;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval2040;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp02041;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp12042;
  __first2037 = v2033;
  __last2038 = v2034;
  __result2039 = v2035;
  agg_tmp02041 = __result2039; // copy
  int* t2043 = __first2037;
  int* r2044 = int__std____niter_base_int__(t2043);
  int* t2045 = __last2038;
  int* r2046 = int__std____niter_base_int__(t2045);
  agg_tmp12042 = __result2039; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2047 = agg_tmp12042;
  int* r2048 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t2047);
  int* r2049 = int__std____copy_move_a1_false__int___int__(r2044, r2046, r2048);
  if (__cir_exc_active) {
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2050 = agg_tmp02041;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2051 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____niter_wrap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(t2050, r2049);
  if (__cir_exc_active) {
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval2040 = r2051;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2052 = __retval2040;
  return t2052;
}

// function: _ZSt4copyIPiN9__gnu_cxx17__normal_iteratorIS0_St6vectorIiSaIiEEEEET0_T_S8_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__copy_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(int* v2053, int* v2054, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v2055) {
bb2056:
  int* __first2057;
  int* __last2058;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result2059;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval2060;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp02061;
  __first2057 = v2053;
  __last2058 = v2054;
  __result2059 = v2055;
  int* t2062 = __first2057;
  int* r2063 = int__std____miter_base_int__(t2062);
  if (__cir_exc_active) {
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  int* t2064 = __last2058;
  int* r2065 = int__std____miter_base_int__(t2064);
  if (__cir_exc_active) {
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  agg_tmp02061 = __result2059; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2066 = agg_tmp02061;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2067 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____copy_move_a_false__int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(r2063, r2065, t2066);
  if (__cir_exc_active) {
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval2060 = r2067;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2068 = __retval2060;
  return t2068;
}

// function: _ZSt7advanceIPimEvRT_T0_
void void_std__advance_int___unsigned_long_(int** v2069, unsigned long v2070) {
bb2071:
  int** __i2072;
  unsigned long __n2073;
  long __d2074;
  struct std__random_access_iterator_tag agg_tmp02075;
  __i2072 = v2069;
  __n2073 = v2070;
  unsigned long t2076 = __n2073;
  long cast2077 = (long)t2076;
  __d2074 = cast2077;
  int** t2078 = __i2072;
  long t2079 = __d2074;
  int** t2080 = __i2072;
  struct std__random_access_iterator_tag r2081 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(t2080);
  if (__cir_exc_active) {
    return;
  }
  agg_tmp02075 = r2081;
  struct std__random_access_iterator_tag t2082 = agg_tmp02075;
  void_std____advance_int___long_(t2078, t2079, t2082);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt16__do_uninit_copyIPiS0_S0_ET1_T_T0_S1_
int* int__std____do_uninit_copy_int___int___int__(int* v2083, int* v2084, int* v2085) {
bb2086:
  int* __first2087;
  int* __last2088;
  int* __result2089;
  int* __retval2090;
  struct std___UninitDestroyGuard_int____void_ __guard2091;
  __first2087 = v2083;
  __last2088 = v2084;
  __result2089 = v2085;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard2091, &__result2089);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
      while (1) {
        int* t2093 = __first2087;
        int* t2094 = __last2088;
        _Bool c2095 = ((t2093 != t2094)) ? 1 : 0;
        if (!c2095) break;
        int* t2096 = __result2089;
        int* t2097 = __first2087;
        void_std___Construct_int__int__(t2096, t2097);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard2091);
          }
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
      for_step2092: ;
        int* t2098 = __first2087;
        int c2099 = 1;
        int* ptr2100 = &(t2098)[c2099];
        __first2087 = ptr2100;
        int* t2101 = __result2089;
        int c2102 = 1;
        int* ptr2103 = &(t2101)[c2102];
        __result2089 = ptr2103;
      }
    std___UninitDestroyGuard_int___void___release(&__guard2091);
    if (__cir_exc_active) {
      {
        std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard2091);
      }
      int* __cir_eh_ret = (int*)0;
      return __cir_eh_ret;
    }
    int* t2104 = __result2089;
    __retval2090 = t2104;
    int* t2105 = __retval2090;
    int* ret_val2106 = t2105;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard2091);
    }
    return ret_val2106;
  abort();
}

// function: _ZSt18uninitialized_copyIPiS0_ET0_T_S2_S1_
int* int__std__uninitialized_copy_int___int__(int* v2107, int* v2108, int* v2109) {
bb2110:
  int* __first2111;
  int* __last2112;
  int* __result2113;
  int* __retval2114;
  __first2111 = v2107;
  __last2112 = v2108;
  __result2113 = v2109;
      long __n2115;
      int* t2116 = __last2112;
      int* t2117 = __first2111;
      long diff2118 = t2116 - t2117;
      __n2115 = diff2118;
        long t2119 = __n2115;
        long c2120 = 0;
        _Bool c2121 = ((t2119 > c2120)) ? 1 : 0;
        if (c2121) {
          int* t2122 = __result2113;
          int* r2123 = int__std____niter_base_int__(t2122);
          void* cast2124 = (void*)r2123;
          int* t2125 = __first2111;
          int* r2126 = int__std____niter_base_int__(t2125);
          void* cast2127 = (void*)r2126;
          long t2128 = __n2115;
          unsigned long cast2129 = (unsigned long)t2128;
          unsigned long c2130 = 4;
          unsigned long b2131 = cast2129 * c2130;
          void* r2132 = memcpy(cast2124, cast2127, b2131);
          long t2133 = __n2115;
          int* t2134 = __result2113;
          int* ptr2135 = &(t2134)[t2133];
          __result2113 = ptr2135;
        }
      int* t2136 = __result2113;
      __retval2114 = t2136;
      int* t2137 = __retval2114;
      return t2137;
  abort();
}

// function: _ZSt22__uninitialized_copy_aIPiS0_S0_iET1_T_T0_S1_RSaIT2_E
int* int__std____uninitialized_copy_a_int___int___int___int_(int* v2138, int* v2139, int* v2140, struct std__allocator_int_* v2141) {
bb2142:
  int* __first2143;
  int* __last2144;
  int* __result2145;
  struct std__allocator_int_* unnamed2146;
  int* __retval2147;
  __first2143 = v2138;
  __last2144 = v2139;
  __result2145 = v2140;
  unnamed2146 = v2141;
    _Bool r2148 = std__is_constant_evaluated();
    if (r2148) {
      int* t2149 = __first2143;
      int* t2150 = __last2144;
      int* t2151 = __result2145;
      int* r2152 = int__std____do_uninit_copy_int___int___int__(t2149, t2150, t2151);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      __retval2147 = r2152;
      int* t2153 = __retval2147;
      return t2153;
    }
    int* t2154 = __first2143;
    int* t2155 = __last2144;
    int* t2156 = __result2145;
    int* r2157 = int__std__uninitialized_copy_int___int__(t2154, t2155, t2156);
    if (__cir_exc_active) {
      int* __cir_eh_ret = (int*)0;
      return __cir_eh_ret;
    }
    __retval2147 = r2157;
    int* t2158 = __retval2147;
    return t2158;
  abort();
}

// function: _ZNSt6vectorIiSaIiEE15_M_range_insertIPiEEvN9__gnu_cxx17__normal_iteratorIS3_S1_EET_S7_St20forward_iterator_tag
void void_std__vector_int__std__allocator_int______M_range_insert_int__(struct std__vector_int__std__allocator_int__* v2159, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v2160, int* v2161, int* v2162, struct std__forward_iterator_tag v2163) {
bb2164:
  struct std__vector_int__std__allocator_int__* this2165;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __position2166;
  int* __first2167;
  int* __last2168;
  struct std__forward_iterator_tag unnamed2169;
  this2165 = v2159;
  __position2166 = v2160;
  __first2167 = v2161;
  __last2168 = v2162;
  unnamed2169 = v2163;
  struct std__vector_int__std__allocator_int__* t2170 = this2165;
    int* t2171 = __first2167;
    int* t2172 = __last2168;
    _Bool c2173 = ((t2171 != t2172)) ? 1 : 0;
    if (c2173) {
      unsigned long __n2174;
      int* t2175 = __first2167;
      int* t2176 = __last2168;
      long r2177 = std__iterator_traits_int____difference_type_std__distance_int__(t2175, t2176);
      if (__cir_exc_active) {
        return;
      }
      unsigned long cast2178 = (unsigned long)r2177;
      __n2174 = cast2178;
        struct std___Vector_base_int__std__allocator_int__* base2179 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2170 + 0);
        struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2180 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base2179->_M_impl) + 0);
        int* t2181 = base2180->_M_end_of_storage;
        struct std___Vector_base_int__std__allocator_int__* base2182 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2170 + 0);
        struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2183 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base2182->_M_impl) + 0);
        int* t2184 = base2183->_M_finish;
        long diff2185 = t2181 - t2184;
        unsigned long cast2186 = (unsigned long)diff2185;
        unsigned long t2187 = __n2174;
        _Bool c2188 = ((cast2186 >= t2187)) ? 1 : 0;
        if (c2188) {
          unsigned long __elems_after2189;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp02190;
          int* __old_finish2191;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2192 = std__vector_int__std__allocator_int_____end(t2170);
          ref_tmp02190 = r2192;
          long r2193 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&ref_tmp02190, &__position2166);
          unsigned long cast2194 = (unsigned long)r2193;
          __elems_after2189 = cast2194;
          struct std___Vector_base_int__std__allocator_int__* base2195 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2170 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2196 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base2195->_M_impl) + 0);
          int* t2197 = base2196->_M_finish;
          __old_finish2191 = t2197;
            unsigned long t2198 = __elems_after2189;
            unsigned long t2199 = __n2174;
            _Bool c2200 = ((t2198 > t2199)) ? 1 : 0;
            if (c2200) {
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp02201;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp12202;
              struct std___Vector_base_int__std__allocator_int__* base2203 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2170 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2204 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base2203->_M_impl) + 0);
              int* t2205 = base2204->_M_finish;
              unsigned long t2206 = __n2174;
              long cast2207 = (long)t2206;
              long u2208 = -cast2207;
              int* ptr2209 = &(t2205)[u2208];
              struct std___Vector_base_int__std__allocator_int__* base2210 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2170 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2211 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base2210->_M_impl) + 0);
              int* t2212 = base2211->_M_finish;
              struct std___Vector_base_int__std__allocator_int__* base2213 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2170 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2214 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base2213->_M_impl) + 0);
              int* t2215 = base2214->_M_finish;
              struct std___Vector_base_int__std__allocator_int__* base2216 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2170 + 0);
              struct std__allocator_int_* r2217 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base2216);
              int* r2218 = int__std____uninitialized_move_a_int___int___std__allocator_int___(ptr2209, t2212, t2215, r2217);
              if (__cir_exc_active) {
                return;
              }
              unsigned long t2219 = __n2174;
              struct std___Vector_base_int__std__allocator_int__* base2220 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2170 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2221 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base2220->_M_impl) + 0);
              int* t2222 = base2221->_M_finish;
              int* ptr2223 = &(t2222)[t2219];
              base2221->_M_finish = ptr2223;
              int** r2224 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__position2166);
              int* t2225 = *r2224;
              int* t2226 = __old_finish2191;
              unsigned long t2227 = __n2174;
              long cast2228 = (long)t2227;
              long u2229 = -cast2228;
              int* ptr2230 = &(t2226)[u2229];
              int* t2231 = __old_finish2191;
              int* r2232 = int__std__move_backward_int___int__(t2225, ptr2230, t2231);
              if (__cir_exc_active) {
                return;
              }
              int* t2233 = __first2167;
              int* t2234 = __last2168;
              agg_tmp02201 = __position2166; // copy
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2235 = agg_tmp02201;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2236 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__copy_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t2233, t2234, t2235);
              if (__cir_exc_active) {
                return;
              }
              agg_tmp12202 = r2236;
            } else {
              int* __mid2237;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp22238;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp32239;
              int* t2240 = __first2167;
              __mid2237 = t2240;
              unsigned long t2241 = __elems_after2189;
              void_std__advance_int___unsigned_long_(&__mid2237, t2241);
              if (__cir_exc_active) {
                return;
              }
              int* t2242 = __mid2237;
              int* t2243 = __last2168;
              struct std___Vector_base_int__std__allocator_int__* base2244 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2170 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2245 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base2244->_M_impl) + 0);
              int* t2246 = base2245->_M_finish;
              struct std___Vector_base_int__std__allocator_int__* base2247 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2170 + 0);
              struct std__allocator_int_* r2248 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base2247);
              int* r2249 = int__std____uninitialized_copy_a_int___int___int___int_(t2242, t2243, t2246, r2248);
              if (__cir_exc_active) {
                return;
              }
              unsigned long t2250 = __n2174;
              unsigned long t2251 = __elems_after2189;
              unsigned long b2252 = t2250 - t2251;
              struct std___Vector_base_int__std__allocator_int__* base2253 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2170 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2254 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base2253->_M_impl) + 0);
              int* t2255 = base2254->_M_finish;
              int* ptr2256 = &(t2255)[b2252];
              base2254->_M_finish = ptr2256;
              int** r2257 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__position2166);
              int* t2258 = *r2257;
              int* t2259 = __old_finish2191;
              struct std___Vector_base_int__std__allocator_int__* base2260 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2170 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2261 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base2260->_M_impl) + 0);
              int* t2262 = base2261->_M_finish;
              struct std___Vector_base_int__std__allocator_int__* base2263 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2170 + 0);
              struct std__allocator_int_* r2264 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base2263);
              int* r2265 = int__std____uninitialized_move_a_int___int___std__allocator_int___(t2258, t2259, t2262, r2264);
              if (__cir_exc_active) {
                return;
              }
              unsigned long t2266 = __elems_after2189;
              struct std___Vector_base_int__std__allocator_int__* base2267 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2170 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2268 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base2267->_M_impl) + 0);
              int* t2269 = base2268->_M_finish;
              int* ptr2270 = &(t2269)[t2266];
              base2268->_M_finish = ptr2270;
              int* t2271 = __first2167;
              int* t2272 = __mid2237;
              agg_tmp22238 = __position2166; // copy
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2273 = agg_tmp22238;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2274 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__copy_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t2271, t2272, t2273);
              if (__cir_exc_active) {
                return;
              }
              agg_tmp32239 = r2274;
            }
        } else {
          int* __old_start2275;
          int* __old_finish2276;
          unsigned long __len2277;
          int* __new_start2278;
          int* __new_finish2279;
          struct std___Vector_base_int__std__allocator_int__* base2280 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2170 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2281 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base2280->_M_impl) + 0);
          int* t2282 = base2281->_M_start;
          __old_start2275 = t2282;
          struct std___Vector_base_int__std__allocator_int__* base2283 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2170 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2284 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base2283->_M_impl) + 0);
          int* t2285 = base2284->_M_finish;
          __old_finish2276 = t2285;
          unsigned long t2286 = __n2174;
          char* cast2287 = (char*)&(_str_8);
          unsigned long r2288 = std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(t2170, t2286, cast2287);
          if (__cir_exc_active) {
            return;
          }
          __len2277 = r2288;
          struct std___Vector_base_int__std__allocator_int__* base2289 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2170 + 0);
          unsigned long t2290 = __len2277;
          int* r2291 = std___Vector_base_int__std__allocator_int______M_allocate(base2289, t2290);
          if (__cir_exc_active) {
            return;
          }
          __new_start2278 = r2291;
          int* t2292 = __new_start2278;
          __new_finish2279 = t2292;
              int* t2294 = __old_start2275;
              int** r2295 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__position2166);
              int* t2296 = *r2295;
              int* t2297 = __new_start2278;
              struct std___Vector_base_int__std__allocator_int__* base2298 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2170 + 0);
              struct std__allocator_int_* r2299 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base2298);
              int* r2300 = int__std____uninitialized_move_if_noexcept_a_int___int___std__allocator_int___(t2294, t2296, t2297, r2299);
              if (__cir_exc_active) {
                goto cir_try_dispatch2293;
              }
              __new_finish2279 = r2300;
              int* t2301 = __first2167;
              int* t2302 = __last2168;
              int* t2303 = __new_finish2279;
              struct std___Vector_base_int__std__allocator_int__* base2304 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2170 + 0);
              struct std__allocator_int_* r2305 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base2304);
              int* r2306 = int__std____uninitialized_copy_a_int___int___int___int_(t2301, t2302, t2303, r2305);
              if (__cir_exc_active) {
                goto cir_try_dispatch2293;
              }
              __new_finish2279 = r2306;
              int** r2307 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__position2166);
              int* t2308 = *r2307;
              int* t2309 = __old_finish2276;
              int* t2310 = __new_finish2279;
              struct std___Vector_base_int__std__allocator_int__* base2311 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2170 + 0);
              struct std__allocator_int_* r2312 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base2311);
              int* r2313 = int__std____uninitialized_move_if_noexcept_a_int___int___std__allocator_int___(t2308, t2309, t2310, r2312);
              if (__cir_exc_active) {
                goto cir_try_dispatch2293;
              }
              __new_finish2279 = r2313;
            cir_try_dispatch2293: ;
            if (__cir_exc_active) {
            {
              int ca_tok2314 = 0;
              void* ca_exn2315 = (void*)__cir_exc_ptr;
              __cir_exc_active = 0;
                int* t2316 = __new_start2278;
                int* t2317 = __new_finish2279;
                struct std___Vector_base_int__std__allocator_int__* base2318 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2170 + 0);
                struct std__allocator_int_* r2319 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base2318);
                void_std___Destroy_int___int_(t2316, t2317, r2319);
                if (__cir_exc_active) {
                  {
                    if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                  }
                  return;
                }
                struct std___Vector_base_int__std__allocator_int__* base2320 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2170 + 0);
                int* t2321 = __new_start2278;
                unsigned long t2322 = __len2277;
                std___Vector_base_int__std__allocator_int______M_deallocate(base2320, t2321, t2322);
                if (__cir_exc_active) {
                  {
                    if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                  }
                  return;
                }
                __cir_exc_active = 1;
                {
                  if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                }
                return;
                __builtin_unreachable();
            }
            }
          int* t2323 = __old_start2275;
          int* t2324 = __old_finish2276;
          struct std___Vector_base_int__std__allocator_int__* base2325 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2170 + 0);
          struct std__allocator_int_* r2326 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base2325);
          void_std___Destroy_int___int_(t2323, t2324, r2326);
          if (__cir_exc_active) {
            return;
          }
          struct std___Vector_base_int__std__allocator_int__* base2327 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2170 + 0);
          int* t2328 = __old_start2275;
          struct std___Vector_base_int__std__allocator_int__* base2329 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2170 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2330 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base2329->_M_impl) + 0);
          int* t2331 = base2330->_M_end_of_storage;
          int* t2332 = __old_start2275;
          long diff2333 = t2331 - t2332;
          unsigned long cast2334 = (unsigned long)diff2333;
          std___Vector_base_int__std__allocator_int______M_deallocate(base2327, t2328, cast2334);
          if (__cir_exc_active) {
            return;
          }
          int* t2335 = __new_start2278;
          struct std___Vector_base_int__std__allocator_int__* base2336 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2170 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2337 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base2336->_M_impl) + 0);
          base2337->_M_start = t2335;
          int* t2338 = __new_finish2279;
          struct std___Vector_base_int__std__allocator_int__* base2339 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2170 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2340 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base2339->_M_impl) + 0);
          base2340->_M_finish = t2338;
          int* t2341 = __new_start2278;
          unsigned long t2342 = __len2277;
          int* ptr2343 = &(t2341)[t2342];
          struct std___Vector_base_int__std__allocator_int__* base2344 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2170 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2345 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base2344->_M_impl) + 0);
          base2345->_M_end_of_storage = ptr2343;
        }
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE6insertIPivEEN9__gnu_cxx17__normal_iteratorIS3_S1_EENS5_IPKiS1_EET_SA_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__vector_int__std__allocator_int_____insert_int___void_(struct std__vector_int__std__allocator_int__* v2346, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v2347, int* v2348, int* v2349) {
bb2350:
  struct std__vector_int__std__allocator_int__* this2351;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __position2352;
  int* __first2353;
  int* __last2354;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval2355;
  long __offset2356;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp02357;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp02358;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp12359;
  struct std__forward_iterator_tag agg_tmp12360;
  struct std__random_access_iterator_tag ref_tmp22361;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp32362;
  this2351 = v2346;
  __position2352 = v2347;
  __first2353 = v2348;
  __last2354 = v2349;
  struct std__vector_int__std__allocator_int__* t2363 = this2351;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r2364 = std__vector_int__std__allocator_int_____cbegin___const(t2363);
  ref_tmp02357 = r2364;
  long r2365 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int_const___std__vector_int__std__allocator_int_____(&__position2352, &ref_tmp02357);
  __offset2356 = r2365;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2366 = std__vector_int__std__allocator_int_____begin(t2363);
  ref_tmp12359 = r2366;
  long t2367 = __offset2356;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2368 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&ref_tmp12359, t2367);
  agg_tmp02358 = r2368;
  int* t2369 = __first2353;
  int* t2370 = __last2354;
  struct std__random_access_iterator_tag r2371 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first2353);
  if (__cir_exc_active) {
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  ref_tmp22361 = r2371;
  struct std__forward_iterator_tag* base2372 = (struct std__forward_iterator_tag*)((char *)&(ref_tmp22361) + 0);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2373 = agg_tmp02358;
  struct std__forward_iterator_tag t2374 = agg_tmp12360;
  void_std__vector_int__std__allocator_int______M_range_insert_int__(t2363, t2373, t2369, t2370, t2374);
  if (__cir_exc_active) {
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2375 = std__vector_int__std__allocator_int_____begin(t2363);
  ref_tmp32362 = r2375;
  long t2376 = __offset2356;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2377 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&ref_tmp32362, t2376);
  __retval2355 = r2377;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2378 = __retval2355;
  return t2378;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator__2(int v2379, int v2380) {
bb2381:
  int __a2382;
  int __b2383;
  int __retval2384;
  __a2382 = v2379;
  __b2383 = v2380;
  int t2385 = __a2382;
  int t2386 = __b2383;
  int b2387 = t2385 | t2386;
  __retval2384 = b2387;
  int t2388 = __retval2384;
  return t2388;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v2389) {
bb2390:
  struct std__basic_ios_char__std__char_traits_char__* this2391;
  int __retval2392;
  this2391 = v2389;
  struct std__basic_ios_char__std__char_traits_char__* t2393 = this2391;
  struct std__ios_base* base2394 = (struct std__ios_base*)((char *)t2393 + 0);
  int t2395 = base2394->_M_streambuf_state;
  __retval2392 = t2395;
  int t2396 = __retval2392;
  return t2396;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v2397, int v2398) {
bb2399:
  struct std__basic_ios_char__std__char_traits_char__* this2400;
  int __state2401;
  this2400 = v2397;
  __state2401 = v2398;
  struct std__basic_ios_char__std__char_traits_char__* t2402 = this2400;
  int r2403 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t2402);
  if (__cir_exc_active) {
    return;
  }
  int t2404 = __state2401;
  int r2405 = std__operator__2(r2403, t2404);
  std__basic_ios_char__std__char_traits_char_____clear(t2402, r2405);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v2406, char* v2407) {
bb2408:
  char* __c12409;
  char* __c22410;
  _Bool __retval2411;
  __c12409 = v2406;
  __c22410 = v2407;
  char* t2412 = __c12409;
  char t2413 = *t2412;
  int cast2414 = (int)t2413;
  char* t2415 = __c22410;
  char t2416 = *t2415;
  int cast2417 = (int)t2416;
  _Bool c2418 = ((cast2414 == cast2417)) ? 1 : 0;
  __retval2411 = c2418;
  _Bool t2419 = __retval2411;
  return t2419;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v2420) {
bb2421:
  char* __p2422;
  unsigned long __retval2423;
  unsigned long __i2424;
  __p2422 = v2420;
  unsigned long c2425 = 0;
  __i2424 = c2425;
    char ref_tmp02426;
    while (1) {
      unsigned long t2427 = __i2424;
      char* t2428 = __p2422;
      char* ptr2429 = &(t2428)[t2427];
      char c2430 = 0;
      ref_tmp02426 = c2430;
      _Bool r2431 = __gnu_cxx__char_traits_char___eq(ptr2429, &ref_tmp02426);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u2432 = !r2431;
      if (!u2432) break;
      unsigned long t2433 = __i2424;
      unsigned long u2434 = t2433 + 1;
      __i2424 = u2434;
    }
  unsigned long t2435 = __i2424;
  __retval2423 = t2435;
  unsigned long t2436 = __retval2423;
  return t2436;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v2437) {
bb2438:
  char* __s2439;
  unsigned long __retval2440;
  __s2439 = v2437;
    _Bool r2441 = std____is_constant_evaluated();
    if (r2441) {
      char* t2442 = __s2439;
      unsigned long r2443 = __gnu_cxx__char_traits_char___length(t2442);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval2440 = r2443;
      unsigned long t2444 = __retval2440;
      return t2444;
    }
  char* t2445 = __s2439;
  unsigned long r2446 = strlen(t2445);
  __retval2440 = r2446;
  unsigned long t2447 = __retval2440;
  return t2447;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v2448, char* v2449) {
bb2450:
  struct std__basic_ostream_char__std__char_traits_char__* __out2451;
  char* __s2452;
  struct std__basic_ostream_char__std__char_traits_char__* __retval2453;
  __out2451 = v2448;
  __s2452 = v2449;
    char* t2454 = __s2452;
    _Bool cast2455 = (_Bool)t2454;
    _Bool u2456 = !cast2455;
    if (u2456) {
      struct std__basic_ostream_char__std__char_traits_char__* t2457 = __out2451;
      void** v2458 = (void**)t2457;
      void* v2459 = *((void**)v2458);
      unsigned char* cast2460 = (unsigned char*)v2459;
      long c2461 = -24;
      unsigned char* ptr2462 = &(cast2460)[c2461];
      long* cast2463 = (long*)ptr2462;
      long t2464 = *cast2463;
      unsigned char* cast2465 = (unsigned char*)t2457;
      unsigned char* ptr2466 = &(cast2465)[t2464];
      struct std__basic_ostream_char__std__char_traits_char__* cast2467 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr2466;
      struct std__basic_ios_char__std__char_traits_char__* cast2468 = (struct std__basic_ios_char__std__char_traits_char__*)cast2467;
      int t2469 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast2468, t2469);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t2470 = __out2451;
      char* t2471 = __s2452;
      char* t2472 = __s2452;
      unsigned long r2473 = std__char_traits_char___length(t2472);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast2474 = (long)r2473;
      struct std__basic_ostream_char__std__char_traits_char__* r2475 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t2470, t2471, cast2474);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t2476 = __out2451;
  __retval2453 = t2476;
  struct std__basic_ostream_char__std__char_traits_char__* t2477 = __retval2453;
  return t2477;
}

// function: _ZStltSt15strong_orderingNSt9__cmp_cat8__unspecE
_Bool std__operator_(struct std__strong_ordering v2478, struct std____cmp_cat____unspec v2479) {
bb2480:
  struct std__strong_ordering __v2481;
  struct std____cmp_cat____unspec unnamed2482;
  _Bool __retval2483;
  __v2481 = v2478;
  unnamed2482 = v2479;
  char t2484 = __v2481._M_value;
  int cast2485 = (int)t2484;
  int c2486 = 0;
  _Bool c2487 = ((cast2485 < c2486)) ? 1 : 0;
  __retval2483 = c2487;
  _Bool t2488 = __retval2483;
  return t2488;
}

// function: _ZNKSt8__detail10_Synth3wayclIPiS2_EEDaRKT_RKT0_QrqXltfp_fp0_RNS_18__boolean_testableEXltfp0_fp_RNS_18__boolean_testableEE
struct std__strong_ordering _ZNKSt8__detail10_Synth3wayclIPiS2_EEDaRKT_RKT0_QrqXltfp_fp0_RNS_18__boolean_testableEXltfp0_fp_RNS_18__boolean_testableEE(struct std____detail___Synth3way* v2489, int** v2490, int** v2491) {
bb2492:
  struct std____detail___Synth3way* this2493;
  int** __t2494;
  int** __u2495;
  struct std__strong_ordering __retval2496;
  this2493 = v2489;
  __t2494 = v2490;
  __u2495 = v2491;
  struct std____detail___Synth3way* t2497 = this2493;
    int** t2498 = __t2494;
    int* t2499 = *t2498;
    int** t2500 = __u2495;
    int* t2501 = *t2500;
    char c2502 = -1;
    char c2503 = 0;
    char c2504 = 1;
    _Bool c2505 = ((t2499 < t2501)) ? 1 : 0;
    char sel2506 = c2505 ? c2502 : c2504;
    _Bool c2507 = ((t2499 == t2501)) ? 1 : 0;
    char sel2508 = c2507 ? c2503 : sel2506;
    __retval2496._M_value = sel2508;
    struct std__strong_ordering t2509 = __retval2496;
    return t2509;
  abort();
}

// function: _ZN9__gnu_cxxssIPiSt6vectorIiSaIiEEEEDTclL_ZNSt8__detail11__synth3wayEEclsr3stdE7declvalIRT_EEclsr3stdE7declvalIS7_EEEERKNS_17__normal_iteratorIS6_T0_EESD_
struct std__strong_ordering decltype__std____detail____synth3way__std__declval_int_________std__declval_int___________gnu_cxx__operator____int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v2510, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v2511) {
bb2512:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs2513;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs2514;
  struct std__strong_ordering __retval2515;
  __lhs2513 = v2510;
  __rhs2514 = v2511;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t2516 = __lhs2513;
  int** r2517 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t2516);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t2518 = __rhs2514;
  int** r2519 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t2518);
  struct std__strong_ordering r2520 = _ZNKSt8__detail10_Synth3wayclIPiS2_EEDaRKT_RKT0_QrqXltfp_fp0_RNS_18__boolean_testableEXltfp0_fp_RNS_18__boolean_testableEE(&_ZNSt8__detail11__synth3wayE, r2517, r2519);
  __retval2515 = r2520;
  struct std__strong_ordering t2521 = __retval2515;
  return t2521;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v2522) {
bb2523:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this2524;
  int* __retval2525;
  this2524 = v2522;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t2526 = this2524;
  int* t2527 = t2526->_M_current;
  __retval2525 = t2527;
  int* t2528 = __retval2525;
  return t2528;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEi
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___3(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v2529, int v2530) {
bb2531:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this2532;
  int unnamed2533;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval2534;
  int* ref_tmp02535;
  this2532 = v2529;
  unnamed2533 = v2530;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t2536 = this2532;
  int* t2537 = t2536->_M_current;
  int c2538 = 1;
  int* ptr2539 = &(t2537)[c2538];
  t2536->_M_current = ptr2539;
  ref_tmp02535 = t2537;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval2534, &ref_tmp02535);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2540 = __retval2534;
  return t2540;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v2541, void* v2542) {
bb2543:
  struct std__basic_ostream_char__std__char_traits_char__* this2544;
  void* __pf2545;
  struct std__basic_ostream_char__std__char_traits_char__* __retval2546;
  this2544 = v2541;
  __pf2545 = v2542;
  struct std__basic_ostream_char__std__char_traits_char__* t2547 = this2544;
  void* t2548 = __pf2545;
  struct std__basic_ostream_char__std__char_traits_char__* r2549 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t2548)(t2547);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval2546 = r2549;
  struct std__basic_ostream_char__std__char_traits_char__* t2550 = __retval2546;
  return t2550;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v2551) {
bb2552:
  struct std__basic_ostream_char__std__char_traits_char__* __os2553;
  struct std__basic_ostream_char__std__char_traits_char__* __retval2554;
  __os2553 = v2551;
  struct std__basic_ostream_char__std__char_traits_char__* t2555 = __os2553;
  struct std__basic_ostream_char__std__char_traits_char__* r2556 = std__ostream__flush(t2555);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval2554 = r2556;
  struct std__basic_ostream_char__std__char_traits_char__* t2557 = __retval2554;
  return t2557;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v2558) {
bb2559:
  struct std__ctype_char_* __f2560;
  struct std__ctype_char_* __retval2561;
  __f2560 = v2558;
    struct std__ctype_char_* t2562 = __f2560;
    _Bool cast2563 = (_Bool)t2562;
    _Bool u2564 = !cast2563;
    if (u2564) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t2565 = __f2560;
  __retval2561 = t2565;
  struct std__ctype_char_* t2566 = __retval2561;
  return t2566;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v2567, char v2568) {
bb2569:
  struct std__ctype_char_* this2570;
  char __c2571;
  char __retval2572;
  this2570 = v2567;
  __c2571 = v2568;
  struct std__ctype_char_* t2573 = this2570;
    char t2574 = t2573->_M_widen_ok;
    _Bool cast2575 = (_Bool)t2574;
    if (cast2575) {
      char t2576 = __c2571;
      unsigned char cast2577 = (unsigned char)t2576;
      unsigned long cast2578 = (unsigned long)cast2577;
      char t2579 = t2573->_M_widen[cast2578];
      __retval2572 = t2579;
      char t2580 = __retval2572;
      return t2580;
    }
  std__ctype_char____M_widen_init___const(t2573);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t2581 = __c2571;
  void** v2582 = (void**)t2573;
  void* v2583 = *((void**)v2582);
  char vcall2586 = (char)__VERIFIER_virtual_call_char_char(t2573, 6, t2581);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval2572 = vcall2586;
  char t2587 = __retval2572;
  return t2587;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v2588, char v2589) {
bb2590:
  struct std__basic_ios_char__std__char_traits_char__* this2591;
  char __c2592;
  char __retval2593;
  this2591 = v2588;
  __c2592 = v2589;
  struct std__basic_ios_char__std__char_traits_char__* t2594 = this2591;
  struct std__ctype_char_* t2595 = t2594->_M_ctype;
  struct std__ctype_char_* r2596 = std__ctype_char__const__std____check_facet_std__ctype_char___(t2595);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t2597 = __c2592;
  char r2598 = std__ctype_char___widen_char__const(r2596, t2597);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval2593 = r2598;
  char t2599 = __retval2593;
  return t2599;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v2600) {
bb2601:
  struct std__basic_ostream_char__std__char_traits_char__* __os2602;
  struct std__basic_ostream_char__std__char_traits_char__* __retval2603;
  __os2602 = v2600;
  struct std__basic_ostream_char__std__char_traits_char__* t2604 = __os2602;
  struct std__basic_ostream_char__std__char_traits_char__* t2605 = __os2602;
  void** v2606 = (void**)t2605;
  void* v2607 = *((void**)v2606);
  unsigned char* cast2608 = (unsigned char*)v2607;
  long c2609 = -24;
  unsigned char* ptr2610 = &(cast2608)[c2609];
  long* cast2611 = (long*)ptr2610;
  long t2612 = *cast2611;
  unsigned char* cast2613 = (unsigned char*)t2605;
  unsigned char* ptr2614 = &(cast2613)[t2612];
  struct std__basic_ostream_char__std__char_traits_char__* cast2615 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr2614;
  struct std__basic_ios_char__std__char_traits_char__* cast2616 = (struct std__basic_ios_char__std__char_traits_char__*)cast2615;
  char c2617 = 10;
  char r2618 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast2616, c2617);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r2619 = std__ostream__put(t2604, r2618);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r2620 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r2619);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval2603 = r2620;
  struct std__basic_ostream_char__std__char_traits_char__* t2621 = __retval2603;
  return t2621;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v2622) {
bb2623:
  struct std__vector_int__std__allocator_int__* this2624;
  this2624 = v2622;
  struct std__vector_int__std__allocator_int__* t2625 = this2624;
    struct std___Vector_base_int__std__allocator_int__* base2626 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2625 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2627 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base2626->_M_impl) + 0);
    int* t2628 = base2627->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base2629 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2625 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2630 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base2629->_M_impl) + 0);
    int* t2631 = base2630->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base2632 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2625 + 0);
    struct std__allocator_int_* r2633 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base2632);
    void_std___Destroy_int___int_(t2628, t2631, r2633);
    if (__cir_exc_active) {
      {
        struct std___Vector_base_int__std__allocator_int__* base2634 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2625 + 0);
        std___Vector_base_int__std__allocator_int_______Vector_base(base2634);
      }
      return;
    }
  {
    struct std___Vector_base_int__std__allocator_int__* base2635 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2625 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base2635);
  }
  return;
}

// function: main
int main() {
bb2636:
  int __retval2637;
  struct std__vector_int__std__allocator_int__ myvector2638;
  int ref_tmp02639;
  struct std__allocator_int_ ref_tmp12640;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it2641;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp22642;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp32643;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp02644;
  int ref_tmp42645;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp12646;
  int ref_tmp52647;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp22648;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp62649;
  struct std__vector_int__std__allocator_int__ anothervector2650;
  int ref_tmp72651;
  struct std__allocator_int_ ref_tmp82652;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp32653;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp92654;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp42655;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp52656;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp62657;
  int myarray2658[3];
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp72659;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp102660;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp82661;
  int c2662 = 0;
  __retval2637 = c2662;
  unsigned long c2663 = 3;
  int c2664 = 100;
  ref_tmp02639 = c2664;
  std__allocator_int___allocator_2(&ref_tmp12640);
    std__vector_int__std__allocator_int_____vector(&myvector2638, c2663, &ref_tmp02639, &ref_tmp12640);
    if (__cir_exc_active) {
      {
        std__allocator_int____allocator(&ref_tmp12640);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
  {
    std__allocator_int____allocator(&ref_tmp12640);
  }
    __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&it2641);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2665 = std__vector_int__std__allocator_int_____begin(&myvector2638);
    ref_tmp22642 = r2665;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r2666 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it2641, &ref_tmp22642);
    _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2IPiQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE(&agg_tmp02644, &it2641);
    int c2667 = 200;
    ref_tmp42645 = c2667;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t2668 = agg_tmp02644;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2669 = std__vector_int__std__allocator_int_____insert(&myvector2638, t2668, &ref_tmp42645);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&myvector2638);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    ref_tmp32643 = r2669;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r2670 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it2641, &ref_tmp32643);
    _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2IPiQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE(&agg_tmp12646, &it2641);
    unsigned long c2671 = 2;
    int c2672 = 300;
    ref_tmp52647 = c2672;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t2673 = agg_tmp12646;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2674 = std__vector_int__std__allocator_int_____insert_2(&myvector2638, t2673, c2671, &ref_tmp52647);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&myvector2638);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp22648 = r2674;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2675 = std__vector_int__std__allocator_int_____begin(&myvector2638);
    ref_tmp62649 = r2675;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r2676 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it2641, &ref_tmp62649);
    unsigned long c2677 = 2;
    int c2678 = 400;
    ref_tmp72651 = c2678;
    std__allocator_int___allocator_2(&ref_tmp82652);
      std__vector_int__std__allocator_int_____vector(&anothervector2650, c2677, &ref_tmp72651, &ref_tmp82652);
      if (__cir_exc_active) {
        {
          std__allocator_int____allocator(&ref_tmp82652);
        }
        {
          std__vector_int__std__allocator_int______vector(&myvector2638);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
    {
      std__allocator_int____allocator(&ref_tmp82652);
    }
      long c2679 = 2;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2680 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&it2641, c2679);
      ref_tmp92654 = r2680;
      _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2IPiQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE(&agg_tmp32653, &ref_tmp92654);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2681 = std__vector_int__std__allocator_int_____begin(&anothervector2650);
      agg_tmp42655 = r2681;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2682 = std__vector_int__std__allocator_int_____end(&anothervector2650);
      agg_tmp52656 = r2682;
      struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t2683 = agg_tmp32653;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2684 = agg_tmp42655;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2685 = agg_tmp52656;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2686 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__vector_int__std__allocator_int_____insert___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______void_(&myvector2638, t2683, t2684, t2685);
      if (__cir_exc_active) {
        {
          std__vector_int__std__allocator_int______vector(&anothervector2650);
        }
        {
          std__vector_int__std__allocator_int______vector(&myvector2638);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      agg_tmp62657 = r2686;
      // array copy
      __builtin_memcpy(myarray2658, __const_main_myarray, (unsigned long)3 * sizeof(__const_main_myarray[0]));
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2687 = std__vector_int__std__allocator_int_____begin(&myvector2638);
      ref_tmp102660 = r2687;
      _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2IPiQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE(&agg_tmp72659, &ref_tmp102660);
      int* cast2688 = (int*)&(myarray2658);
      int* cast2689 = (int*)&(myarray2658);
      int c2690 = 3;
      int* ptr2691 = &(cast2689)[c2690];
      struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t2692 = agg_tmp72659;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2693 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__vector_int__std__allocator_int_____insert_int___void_(&myvector2638, t2692, cast2688, ptr2691);
      if (__cir_exc_active) {
        {
          std__vector_int__std__allocator_int______vector(&anothervector2650);
        }
        {
          std__vector_int__std__allocator_int______vector(&myvector2638);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      agg_tmp82661 = r2693;
      char* cast2694 = (char*)&(_str);
      struct std__basic_ostream_char__std__char_traits_char__* r2695 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast2694);
      if (__cir_exc_active) {
        {
          std__vector_int__std__allocator_int______vector(&anothervector2650);
        }
        {
          std__vector_int__std__allocator_int______vector(&myvector2638);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp112696;
        struct std__strong_ordering agg_tmp92697;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp122698;
        struct std____cmp_cat____unspec agg_tmp102699;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp112700;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2701 = std__vector_int__std__allocator_int_____begin(&myvector2638);
        ref_tmp112696 = r2701;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r2702 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it2641, &ref_tmp112696);
        while (1) {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2704 = std__vector_int__std__allocator_int_____end(&myvector2638);
          ref_tmp122698 = r2704;
          struct std__strong_ordering r2705 = decltype__std____detail____synth3way__std__declval_int_________std__declval_int___________gnu_cxx__operator____int___std__vector_int__std__allocator_int_____(&it2641, &ref_tmp122698);
          agg_tmp92697 = r2705;
          agg_tmp102699 = *&__const_main_agg_tmp10; // copy
          struct std__strong_ordering t2706 = agg_tmp92697;
          struct std____cmp_cat____unspec t2707 = agg_tmp102699;
          _Bool r2708 = std__operator_(t2706, t2707);
          if (!r2708) break;
          char* cast2709 = (char*)&(_str_1);
          struct std__basic_ostream_char__std__char_traits_char__* r2710 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast2709);
          if (__cir_exc_active) {
            {
              std__vector_int__std__allocator_int______vector(&anothervector2650);
            }
            {
              std__vector_int__std__allocator_int______vector(&myvector2638);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          int* r2711 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it2641);
          int t2712 = *r2711;
          struct std__basic_ostream_char__std__char_traits_char__* r2713 = std__ostream__operator__(r2710, t2712);
          if (__cir_exc_active) {
            {
              std__vector_int__std__allocator_int______vector(&anothervector2650);
            }
            {
              std__vector_int__std__allocator_int______vector(&myvector2638);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
        for_step2703: ;
          int c2714 = 0;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2715 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___3(&it2641, c2714);
          agg_tmp112700 = r2715;
        }
      struct std__basic_ostream_char__std__char_traits_char__* r2716 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      if (__cir_exc_active) {
        {
          std__vector_int__std__allocator_int______vector(&anothervector2650);
        }
        {
          std__vector_int__std__allocator_int______vector(&myvector2638);
        }
        int __cir_eh_ret = (int)0;
        return __cir_eh_ret;
      }
      int c2717 = 0;
      __retval2637 = c2717;
      int t2718 = __retval2637;
      int ret_val2719 = t2718;
      {
        std__vector_int__std__allocator_int______vector(&anothervector2650);
      }
      {
        std__vector_int__std__allocator_int______vector(&myvector2638);
      }
      return ret_val2719;
  int t2720 = __retval2637;
  return t2720;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v2721) {
bb2722:
  struct std____new_allocator_int_* this2723;
  this2723 = v2721;
  struct std____new_allocator_int_* t2724 = this2723;
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v2725, unsigned long* v2726) {
bb2727:
  unsigned long* __a2728;
  unsigned long* __b2729;
  unsigned long* __retval2730;
  __a2728 = v2725;
  __b2729 = v2726;
    unsigned long* t2731 = __b2729;
    unsigned long t2732 = *t2731;
    unsigned long* t2733 = __a2728;
    unsigned long t2734 = *t2733;
    _Bool c2735 = ((t2732 < t2734)) ? 1 : 0;
    if (c2735) {
      unsigned long* t2736 = __b2729;
      __retval2730 = t2736;
      unsigned long* t2737 = __retval2730;
      return t2737;
    }
  unsigned long* t2738 = __a2728;
  __retval2730 = t2738;
  unsigned long* t2739 = __retval2730;
  return t2739;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v2740) {
bb2741:
  struct std__allocator_int_* __a2742;
  unsigned long __retval2743;
  unsigned long __diffmax2744;
  unsigned long __allocmax2745;
  __a2742 = v2740;
  unsigned long c2746 = 2305843009213693951;
  __diffmax2744 = c2746;
  unsigned long c2747 = 4611686018427387903;
  __allocmax2745 = c2747;
  unsigned long* r2748 = unsigned_long_const__std__min_unsigned_long_(&__diffmax2744, &__allocmax2745);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long t2749 = *r2748;
  __retval2743 = t2749;
  unsigned long t2750 = __retval2743;
  return t2750;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v2751, struct std__allocator_int_* v2752) {
bb2753:
  struct std__allocator_int_* this2754;
  struct std__allocator_int_* __a2755;
  this2754 = v2751;
  __a2755 = v2752;
  struct std__allocator_int_* t2756 = this2754;
  struct std____new_allocator_int_* base2757 = (struct std____new_allocator_int_*)((char *)t2756 + 0);
  struct std__allocator_int_* t2758 = __a2755;
  struct std____new_allocator_int_* base2759 = (struct std____new_allocator_int_*)((char *)t2758 + 0);
  std____new_allocator_int_____new_allocator(base2757, base2759);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v2760, struct std__allocator_int_* v2761) {
bb2762:
  unsigned long __n2763;
  struct std__allocator_int_* __a2764;
  unsigned long __retval2765;
  __n2763 = v2760;
  __a2764 = v2761;
    struct std__allocator_int_ ref_tmp02766;
    _Bool tmp_exprcleanup2767;
    unsigned long t2768 = __n2763;
    struct std__allocator_int_* t2769 = __a2764;
    std__allocator_int___allocator(&ref_tmp02766, t2769);
      unsigned long r2770 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp02766);
      _Bool c2771 = ((t2768 > r2770)) ? 1 : 0;
      tmp_exprcleanup2767 = c2771;
    {
      std__allocator_int____allocator(&ref_tmp02766);
    }
    _Bool t2772 = tmp_exprcleanup2767;
    if (t2772) {
      char* cast2773 = (char*)&(_str_2);
      std____throw_length_error(cast2773);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
    }
  unsigned long t2774 = __n2763;
  __retval2765 = t2774;
  unsigned long t2775 = __retval2765;
  return t2775;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v2776, struct std__allocator_int_* v2777) {
bb2778:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this2779;
  struct std__allocator_int_* __a2780;
  this2779 = v2776;
  __a2780 = v2777;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t2781 = this2779;
  struct std__allocator_int_* base2782 = (struct std__allocator_int_*)((char *)t2781 + 0);
  struct std__allocator_int_* t2783 = __a2780;
  std__allocator_int___allocator(base2782, t2783);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2784 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t2781 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base2784);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb2785:
  _Bool __retval2786;
    _Bool c2787 = 0;
    __retval2786 = c2787;
    _Bool t2788 = __retval2786;
    return t2788;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v2789) {
bb2790:
  struct std____new_allocator_int_* this2791;
  unsigned long __retval2792;
  this2791 = v2789;
  struct std____new_allocator_int_* t2793 = this2791;
  unsigned long c2794 = 9223372036854775807;
  unsigned long c2795 = 4;
  unsigned long b2796 = c2794 / c2795;
  __retval2792 = b2796;
  unsigned long t2797 = __retval2792;
  return t2797;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v2798, unsigned long v2799, void* v2800) {
bb2801:
  struct std____new_allocator_int_* this2802;
  unsigned long __n2803;
  void* unnamed2804;
  int* __retval2805;
  this2802 = v2798;
  __n2803 = v2799;
  unnamed2804 = v2800;
  struct std____new_allocator_int_* t2806 = this2802;
    unsigned long t2807 = __n2803;
    unsigned long r2808 = std____new_allocator_int____M_max_size___const(t2806);
    _Bool c2809 = ((t2807 > r2808)) ? 1 : 0;
    if (c2809) {
        unsigned long t2810 = __n2803;
        unsigned long c2811 = -1;
        unsigned long c2812 = 4;
        unsigned long b2813 = c2811 / c2812;
        _Bool c2814 = ((t2810 > b2813)) ? 1 : 0;
        if (c2814) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
        }
      std____throw_bad_alloc();
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
    }
    unsigned long c2815 = 4;
    unsigned long c2816 = 16;
    _Bool c2817 = ((c2815 > c2816)) ? 1 : 0;
    if (c2817) {
      unsigned long __al2818;
      unsigned long c2819 = 4;
      __al2818 = c2819;
      unsigned long t2820 = __n2803;
      unsigned long c2821 = 4;
      unsigned long b2822 = t2820 * c2821;
      unsigned long t2823 = __al2818;
      void* r2824 = operator_new_2(b2822, t2823);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast2825 = (int*)r2824;
      __retval2805 = cast2825;
      int* t2826 = __retval2805;
      return t2826;
    }
  unsigned long t2827 = __n2803;
  unsigned long c2828 = 4;
  unsigned long b2829 = t2827 * c2828;
  void* r2830 = operator_new(b2829);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* cast2831 = (int*)r2830;
  __retval2805 = cast2831;
  int* t2832 = __retval2805;
  return t2832;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v2833, unsigned long v2834) {
bb2835:
  struct std__allocator_int_* this2836;
  unsigned long __n2837;
  int* __retval2838;
  this2836 = v2833;
  __n2837 = v2834;
  struct std__allocator_int_* t2839 = this2836;
    _Bool r2840 = std____is_constant_evaluated();
    if (r2840) {
        unsigned long t2841 = __n2837;
        unsigned long c2842 = 4;
        unsigned long ovr2843;
        _Bool ovf2844 = __builtin_mul_overflow(t2841, c2842, &ovr2843);
        __n2837 = ovr2843;
        if (ovf2844) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t2845 = __n2837;
      void* r2846 = operator_new(t2845);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast2847 = (int*)r2846;
      __retval2838 = cast2847;
      int* t2848 = __retval2838;
      return t2848;
    }
  struct std____new_allocator_int_* base2849 = (struct std____new_allocator_int_*)((char *)t2839 + 0);
  unsigned long t2850 = __n2837;
  void* c2851 = ((void*)0);
  int* r2852 = std____new_allocator_int___allocate(base2849, t2850, c2851);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval2838 = r2852;
  int* t2853 = __retval2838;
  return t2853;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v2854, unsigned long v2855) {
bb2856:
  struct std__allocator_int_* __a2857;
  unsigned long __n2858;
  int* __retval2859;
  __a2857 = v2854;
  __n2858 = v2855;
  struct std__allocator_int_* t2860 = __a2857;
  unsigned long t2861 = __n2858;
  int* r2862 = std__allocator_int___allocate(t2860, t2861);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval2859 = r2862;
  int* t2863 = __retval2859;
  return t2863;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v2864, unsigned long v2865) {
bb2866:
  struct std___Vector_base_int__std__allocator_int__* this2867;
  unsigned long __n2868;
  int* __retval2869;
  this2867 = v2864;
  __n2868 = v2865;
  struct std___Vector_base_int__std__allocator_int__* t2870 = this2867;
  unsigned long t2871 = __n2868;
  unsigned long c2872 = 0;
  _Bool c2873 = ((t2871 != c2872)) ? 1 : 0;
  int* ternary2874;
  if (c2873) {
    struct std__allocator_int_* base2875 = (struct std__allocator_int_*)((char *)&(t2870->_M_impl) + 0);
    unsigned long t2876 = __n2868;
    int* r2877 = std__allocator_traits_std__allocator_int_____allocate(base2875, t2876);
    if (__cir_exc_active) {
      int* __cir_eh_ret = (int*)0;
      return __cir_eh_ret;
    }
    ternary2874 = (int*)r2877;
  } else {
    int* c2878 = ((void*)0);
    ternary2874 = (int*)c2878;
  }
  __retval2869 = ternary2874;
  int* t2879 = __retval2869;
  return t2879;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* v2880, unsigned long v2881) {
bb2882:
  struct std___Vector_base_int__std__allocator_int__* this2883;
  unsigned long __n2884;
  this2883 = v2880;
  __n2884 = v2881;
  struct std___Vector_base_int__std__allocator_int__* t2885 = this2883;
  unsigned long t2886 = __n2884;
  int* r2887 = std___Vector_base_int__std__allocator_int______M_allocate(t2885, t2886);
  if (__cir_exc_active) {
    return;
  }
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2888 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t2885->_M_impl) + 0);
  base2888->_M_start = r2887;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2889 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t2885->_M_impl) + 0);
  int* t2890 = base2889->_M_start;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2891 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t2885->_M_impl) + 0);
  base2891->_M_finish = t2890;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2892 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t2885->_M_impl) + 0);
  int* t2893 = base2892->_M_start;
  unsigned long t2894 = __n2884;
  int* ptr2895 = &(t2893)[t2894];
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2896 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t2885->_M_impl) + 0);
  base2896->_M_end_of_storage = ptr2895;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v2897) {
bb2898:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this2899;
  this2899 = v2897;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t2900 = this2899;
  {
    struct std__allocator_int_* base2901 = (struct std__allocator_int_*)((char *)t2900 + 0);
    std__allocator_int____allocator(base2901);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v2902, unsigned long v2903, struct std__allocator_int_* v2904) {
bb2905:
  struct std___Vector_base_int__std__allocator_int__* this2906;
  unsigned long __n2907;
  struct std__allocator_int_* __a2908;
  this2906 = v2902;
  __n2907 = v2903;
  __a2908 = v2904;
  struct std___Vector_base_int__std__allocator_int__* t2909 = this2906;
  struct std__allocator_int_* t2910 = __a2908;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t2909->_M_impl, t2910);
    unsigned long t2911 = __n2907;
    std___Vector_base_int__std__allocator_int______M_create_storage(t2909, t2911);
    if (__cir_exc_active) {
      {
        std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t2909->_M_impl);
      }
      return;
    }
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb2912:
  _Bool __retval2913;
    _Bool c2914 = 0;
    __retval2913 = c2914;
    _Bool t2915 = __retval2913;
    return t2915;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v2916, int** v2917) {
bb2918:
  struct std___UninitDestroyGuard_int____void_* this2919;
  int** __first2920;
  this2919 = v2916;
  __first2920 = v2917;
  struct std___UninitDestroyGuard_int____void_* t2921 = this2919;
  int** t2922 = __first2920;
  int* t2923 = *t2922;
  t2921->_M_first = t2923;
  int** t2924 = __first2920;
  t2921->_M_cur = t2924;
  return;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v2925, int* v2926) {
bb2927:
  int* __location2928;
  int* __args2929;
  int* __retval2930;
  void* __loc2931;
  __location2928 = v2925;
  __args2929 = v2926;
  int* t2932 = __location2928;
  void* cast2933 = (void*)t2932;
  __loc2931 = cast2933;
    void* t2934 = __loc2931;
    int* cast2935 = (int*)t2934;
    int* t2936 = __args2929;
    int t2937 = *t2936;
    *cast2935 = t2937;
    __retval2930 = cast2935;
    int* t2938 = __retval2930;
    return t2938;
  abort();
}

// function: _ZSt10_ConstructIiJRKiEEvPT_DpOT0_
void void_std___Construct_int__int_const__(int* v2939, int* v2940) {
bb2941:
  int* __p2942;
  int* __args2943;
  __p2942 = v2939;
  __args2943 = v2940;
    _Bool r2944 = std____is_constant_evaluated();
    if (r2944) {
      int* t2945 = __p2942;
      int* t2946 = __args2943;
      int* r2947 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t2945, t2946);
      return;
    }
  int* t2948 = __p2942;
  void* cast2949 = (void*)t2948;
  int* cast2950 = (int*)cast2949;
  int* t2951 = __args2943;
  int t2952 = *t2951;
  *cast2950 = t2952;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v2953) {
bb2954:
  struct std___UninitDestroyGuard_int____void_* this2955;
  this2955 = v2953;
  struct std___UninitDestroyGuard_int____void_* t2956 = this2955;
  int** c2957 = ((void*)0);
  t2956->_M_cur = c2957;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v2958) {
bb2959:
  struct std___UninitDestroyGuard_int____void_* this2960;
  this2960 = v2958;
  struct std___UninitDestroyGuard_int____void_* t2961 = this2960;
    int** t2962 = t2961->_M_cur;
    int** c2963 = ((void*)0);
    _Bool c2964 = ((t2962 != c2963)) ? 1 : 0;
    if (c2964) {
      int* t2965 = t2961->_M_first;
      int** t2966 = t2961->_M_cur;
      int* t2967 = *t2966;
      void_std___Destroy_int__(t2965, t2967);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_
int* int__std____do_uninit_fill_n_int___unsigned_long__int_(int* v2968, unsigned long v2969, int* v2970) {
bb2971:
  int* __first2972;
  unsigned long __n2973;
  int* __x2974;
  int* __retval2975;
  struct std___UninitDestroyGuard_int____void_ __guard2976;
  __first2972 = v2968;
  __n2973 = v2969;
  __x2974 = v2970;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard2976, &__first2972);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
        do {
              unsigned long t2977 = __n2973;
              unsigned long c2978 = 0;
              _Bool c2979 = ((t2977 >= c2978)) ? 1 : 0;
              _Bool u2980 = !c2979;
              if (u2980) {
                char* cast2981 = (char*)&(_str_3);
                int c2982 = 463;
                char* cast2983 = (char*)&(__PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_);
                char* cast2984 = (char*)&(_str_4);
                std____glibcxx_assert_fail(cast2981, c2982, cast2983, cast2984);
              }
          _Bool c2985 = 0;
          if (!c2985) break;
        } while (1);
      while (1) {
        unsigned long t2987 = __n2973;
        unsigned long u2988 = t2987 - 1;
        __n2973 = u2988;
        _Bool cast2989 = (_Bool)t2987;
        if (!cast2989) break;
        int* t2990 = __first2972;
        int* t2991 = __x2974;
        void_std___Construct_int__int_const__(t2990, t2991);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard2976);
          }
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
      for_step2986: ;
        int* t2992 = __first2972;
        int c2993 = 1;
        int* ptr2994 = &(t2992)[c2993];
        __first2972 = ptr2994;
      }
    std___UninitDestroyGuard_int___void___release(&__guard2976);
    if (__cir_exc_active) {
      {
        std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard2976);
      }
      int* __cir_eh_ret = (int*)0;
      return __cir_eh_ret;
    }
    int* t2995 = __first2972;
    __retval2975 = t2995;
    int* t2996 = __retval2975;
    int* ret_val2997 = t2996;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard2976);
    }
    return ret_val2997;
  abort();
}

// function: _ZSt20uninitialized_fill_nIPimiET_S1_T0_RKT1_
int* int__std__uninitialized_fill_n_int___unsigned_long__int_(int* v2998, unsigned long v2999, int* v3000) {
bb3001:
  int* __first3002;
  unsigned long __n3003;
  int* __x3004;
  int* __retval3005;
  __first3002 = v2998;
  __n3003 = v2999;
  __x3004 = v3000;
  int* t3006 = __first3002;
  unsigned long t3007 = __n3003;
  int* t3008 = __x3004;
  int* r3009 = int__std____do_uninit_fill_n_int___unsigned_long__int_(t3006, t3007, t3008);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval3005 = r3009;
  int* t3010 = __retval3005;
  return t3010;
}

// function: _ZSt24__uninitialized_fill_n_aIPimiiET_S1_T0_RKT1_RSaIT2_E
int* int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(int* v3011, unsigned long v3012, int* v3013, struct std__allocator_int_* v3014) {
bb3015:
  int* __first3016;
  unsigned long __n3017;
  int* __x3018;
  struct std__allocator_int_* unnamed3019;
  int* __retval3020;
  __first3016 = v3011;
  __n3017 = v3012;
  __x3018 = v3013;
  unnamed3019 = v3014;
    _Bool r3021 = std__is_constant_evaluated();
    if (r3021) {
      int* t3022 = __first3016;
      unsigned long t3023 = __n3017;
      int* t3024 = __x3018;
      int* r3025 = int__std____do_uninit_fill_n_int___unsigned_long__int_(t3022, t3023, t3024);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      __retval3020 = r3025;
      int* t3026 = __retval3020;
      return t3026;
    }
  int* t3027 = __first3016;
  unsigned long t3028 = __n3017;
  int* t3029 = __x3018;
  int* r3030 = int__std__uninitialized_fill_n_int___unsigned_long__int_(t3027, t3028, t3029);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval3020 = r3030;
  int* t3031 = __retval3020;
  return t3031;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v3032) {
bb3033:
  struct std___Vector_base_int__std__allocator_int__* this3034;
  struct std__allocator_int_* __retval3035;
  this3034 = v3032;
  struct std___Vector_base_int__std__allocator_int__* t3036 = this3034;
  struct std__allocator_int_* base3037 = (struct std__allocator_int_*)((char *)&(t3036->_M_impl) + 0);
  __retval3035 = base3037;
  struct std__allocator_int_* t3038 = __retval3035;
  return t3038;
}

// function: _ZNSt6vectorIiSaIiEE18_M_fill_initializeEmRKi
void std__vector_int__std__allocator_int______M_fill_initialize(struct std__vector_int__std__allocator_int__* v3039, unsigned long v3040, int* v3041) {
bb3042:
  struct std__vector_int__std__allocator_int__* this3043;
  unsigned long __n3044;
  int* __value3045;
  this3043 = v3039;
  __n3044 = v3040;
  __value3045 = v3041;
  struct std__vector_int__std__allocator_int__* t3046 = this3043;
  struct std___Vector_base_int__std__allocator_int__* base3047 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t3046 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base3048 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base3047->_M_impl) + 0);
  int* t3049 = base3048->_M_start;
  unsigned long t3050 = __n3044;
  int* t3051 = __value3045;
  struct std___Vector_base_int__std__allocator_int__* base3052 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t3046 + 0);
  struct std__allocator_int_* r3053 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base3052);
  int* r3054 = int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(t3049, t3050, t3051, r3053);
  if (__cir_exc_active) {
    return;
  }
  struct std___Vector_base_int__std__allocator_int__* base3055 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t3046 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base3056 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base3055->_M_impl) + 0);
  base3056->_M_finish = r3054;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v3057, int* v3058, unsigned long v3059) {
bb3060:
  struct std____new_allocator_int_* this3061;
  int* __p3062;
  unsigned long __n3063;
  this3061 = v3057;
  __p3062 = v3058;
  __n3063 = v3059;
  struct std____new_allocator_int_* t3064 = this3061;
    unsigned long c3065 = 4;
    unsigned long c3066 = 16;
    _Bool c3067 = ((c3065 > c3066)) ? 1 : 0;
    if (c3067) {
      int* t3068 = __p3062;
      void* cast3069 = (void*)t3068;
      unsigned long t3070 = __n3063;
      unsigned long c3071 = 4;
      unsigned long b3072 = t3070 * c3071;
      unsigned long c3073 = 4;
      operator_delete_3(cast3069, b3072, c3073);
      return;
    }
  int* t3074 = __p3062;
  void* cast3075 = (void*)t3074;
  unsigned long t3076 = __n3063;
  unsigned long c3077 = 4;
  unsigned long b3078 = t3076 * c3077;
  operator_delete_2(cast3075, b3078);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v3079, int* v3080, unsigned long v3081) {
bb3082:
  struct std__allocator_int_* this3083;
  int* __p3084;
  unsigned long __n3085;
  this3083 = v3079;
  __p3084 = v3080;
  __n3085 = v3081;
  struct std__allocator_int_* t3086 = this3083;
    _Bool r3087 = std____is_constant_evaluated();
    if (r3087) {
      int* t3088 = __p3084;
      void* cast3089 = (void*)t3088;
      operator_delete(cast3089);
      return;
    }
  struct std____new_allocator_int_* base3090 = (struct std____new_allocator_int_*)((char *)t3086 + 0);
  int* t3091 = __p3084;
  unsigned long t3092 = __n3085;
  std____new_allocator_int___deallocate(base3090, t3091, t3092);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v3093, int* v3094, unsigned long v3095) {
bb3096:
  struct std__allocator_int_* __a3097;
  int* __p3098;
  unsigned long __n3099;
  __a3097 = v3093;
  __p3098 = v3094;
  __n3099 = v3095;
  struct std__allocator_int_* t3100 = __a3097;
  int* t3101 = __p3098;
  unsigned long t3102 = __n3099;
  std__allocator_int___deallocate(t3100, t3101, t3102);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v3103, int* v3104, unsigned long v3105) {
bb3106:
  struct std___Vector_base_int__std__allocator_int__* this3107;
  int* __p3108;
  unsigned long __n3109;
  this3107 = v3103;
  __p3108 = v3104;
  __n3109 = v3105;
  struct std___Vector_base_int__std__allocator_int__* t3110 = this3107;
    int* t3111 = __p3108;
    _Bool cast3112 = (_Bool)t3111;
    if (cast3112) {
      struct std__allocator_int_* base3113 = (struct std__allocator_int_*)((char *)&(t3110->_M_impl) + 0);
      int* t3114 = __p3108;
      unsigned long t3115 = __n3109;
      std__allocator_traits_std__allocator_int_____deallocate(base3113, t3114, t3115);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v3116) {
bb3117:
  struct std___Vector_base_int__std__allocator_int__* this3118;
  this3118 = v3116;
  struct std___Vector_base_int__std__allocator_int__* t3119 = this3118;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base3120 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t3119->_M_impl) + 0);
    int* t3121 = base3120->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base3122 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t3119->_M_impl) + 0);
    int* t3123 = base3122->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base3124 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t3119->_M_impl) + 0);
    int* t3125 = base3124->_M_start;
    long diff3126 = t3123 - t3125;
    unsigned long cast3127 = (unsigned long)diff3126;
    std___Vector_base_int__std__allocator_int______M_deallocate(t3119, t3121, cast3127);
    if (__cir_exc_active) {
      {
        std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t3119->_M_impl);
      }
      return;
    }
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t3119->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v3128, struct std____new_allocator_int_* v3129) {
bb3130:
  struct std____new_allocator_int_* this3131;
  struct std____new_allocator_int_* unnamed3132;
  this3131 = v3128;
  unnamed3132 = v3129;
  struct std____new_allocator_int_* t3133 = this3131;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v3134) {
bb3135:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this3136;
  this3136 = v3134;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t3137 = this3136;
  int* c3138 = ((void*)0);
  t3137->_M_start = c3138;
  int* c3139 = ((void*)0);
  t3137->_M_finish = c3139;
  int* c3140 = ((void*)0);
  t3137->_M_end_of_storage = c3140;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v3141) {
bb3142:
  int* __location3143;
  __location3143 = v3141;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v3144, int* v3145) {
bb3146:
  int* __first3147;
  int* __last3148;
  __first3147 = v3144;
  __last3148 = v3145;
      _Bool r3149 = std____is_constant_evaluated();
      if (r3149) {
          while (1) {
            int* t3151 = __first3147;
            int* t3152 = __last3148;
            _Bool c3153 = ((t3151 != t3152)) ? 1 : 0;
            if (!c3153) break;
            int* t3154 = __first3147;
            void_std__destroy_at_int_(t3154);
            if (__cir_exc_active) {
              return;
            }
          for_step3150: ;
            int* t3155 = __first3147;
            int c3156 = 1;
            int* ptr3157 = &(t3155)[c3156];
            __first3147 = ptr3157;
          }
      }
  return;
}

// function: _ZNSt6vectorIiSaIiEE16_Temporary_value8_StorageC2Ev
void std__vector_int__std__allocator_int______Temporary_value___Storage___Storage(union std__vector_int__std__allocator_int_____Temporary_value___Storage* v3158) {
bb3159:
  union std__vector_int__std__allocator_int_____Temporary_value___Storage* this3160;
  this3160 = v3158;
  union std__vector_int__std__allocator_int_____Temporary_value___Storage* t3161 = this3160;
  unsigned char c3162 = 0;
  t3161->_M_byte = c3162;
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJRKiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(struct std__allocator_int_* v3163, int* v3164, int* v3165) {
bb3166:
  struct std__allocator_int_* __a3167;
  int* __p3168;
  int* __args3169;
  __a3167 = v3163;
  __p3168 = v3164;
  __args3169 = v3165;
  int* t3170 = __p3168;
  int* t3171 = __args3169;
  int* r3172 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t3170, t3171);
  return;
}

// function: _ZNSt6vectorIiSaIiEE16_Temporary_value6_M_ptrEv
int* std__vector_int__std__allocator_int______Temporary_value___M_ptr(struct std__vector_int__std__allocator_int_____Temporary_value* v3173) {
bb3174:
  struct std__vector_int__std__allocator_int_____Temporary_value* this3175;
  int* __retval3176;
  this3175 = v3173;
  struct std__vector_int__std__allocator_int_____Temporary_value* t3177 = this3175;
  __retval3176 = &t3177->_M_storage._M_val;
  int* t3178 = __retval3176;
  return t3178;
}

// function: _ZNSt6vectorIiSaIiEE16_Temporary_value8_StorageD2Ev
void std__vector_int__std__allocator_int______Temporary_value___Storage____Storage(union std__vector_int__std__allocator_int_____Temporary_value___Storage* v3179) {
bb3180:
  union std__vector_int__std__allocator_int_____Temporary_value___Storage* this3181;
  this3181 = v3179;
  union std__vector_int__std__allocator_int_____Temporary_value___Storage* t3182 = this3181;
  return;
}

