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

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[5] = "v1 =";
char _str_1[2] = " ";
char _str_2[26] = "vector::_M_realloc_append";
char _str_3[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv[35] = "reference std::vector<int>::back()";
char _str_4[15] = "!this->empty()";
char _str_5[26] = "vector::_M_realloc_insert";
char _str_6[23] = "vector::_M_fill_insert";
char _str_7[23] = "vector::_M_fill_append";
struct std__ranges____imove___IterMove _ZNSt6ranges4_Cpo9iter_moveE;
char _str_8[98] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_uninitialized.h";
char __PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_[140] = "_ForwardIterator std::__do_uninit_fill_n(_ForwardIterator, _Size _Tp &) [_ForwardIterator = int *, _Size = unsigned long, _Tp = int]";
char _str_9[9] = "__n >= 0";
char _str_10[24] = "vector::_M_range_insert";
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* p0, int* p1, int* p2);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* p0);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* p0);
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* p0);
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
extern void std____throw_length_error(char* p0);
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, char* p2);
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
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
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* p0, int* p1, unsigned long p2, struct std___Vector_base_int__std__allocator_int__* p3);
int* int__std__to_address_int_(int* p0);
int* auto_std____to_address_int__(int** p0);
_Bool std__is_constant_evaluated();
void __gnu_cxx____normal_iterator_int___void_____normal_iterator(struct __gnu_cxx____normal_iterator_int____void_* p0, int** p1);
void void_std__destroy_at_int_(int* p0);
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* p0, int* p1);
void void_std____relocate_object_a_int__int__std__allocator_int___(int* p0, int* p1, struct std__allocator_int_* p2);
int* __gnu_cxx____normal_iterator_int___void___operator____const(struct __gnu_cxx____normal_iterator_int____void_* p0);
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator__(struct __gnu_cxx____normal_iterator_int____void_* p0);
struct __gnu_cxx____normal_iterator_int____void_ __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(int* p0, int* p1, struct __gnu_cxx____normal_iterator_int____void_ p2, struct std__allocator_int_* p3);
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator_(struct __gnu_cxx____normal_iterator_int____void_* p0, struct __gnu_cxx____normal_iterator_int____void_* p1);
int** __gnu_cxx____normal_iterator_int___void___base___const(struct __gnu_cxx____normal_iterator_int____void_* p0);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
int* std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
int* int__std____niter_base_int__(int* p0);
int* int__std____relocate_a_int___int___std__allocator_int___(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
int* std__vector_int__std__allocator_int______S_relocate(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* p0);
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* p0);
void void_std__vector_int__std__allocator_int______M_realloc_append_int_(struct std__vector_int__std__allocator_int__* p0, int* p1);
int** __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0);
_Bool _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p1);
void __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin___const(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end___const(struct std__vector_int__std__allocator_int__* p0);
_Bool std__vector_int__std__allocator_int_____empty___const(struct std__vector_int__std__allocator_int__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
int* std__vector_int__std__allocator_int_____back(struct std__vector_int__std__allocator_int__* p0);
int* int__std__vector_int__std__allocator_int_____emplace_back_int_(struct std__vector_int__std__allocator_int__* p0, int* p1);
void std__vector_int__std__allocator_int_____push_back(struct std__vector_int__std__allocator_int__* p0, int* p1);
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
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
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
long __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int_const___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p1);
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____cbegin___const(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____cend___const(struct std__vector_int__std__allocator_int__* p0);
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
int* int__std____copy_move_backward_a_true__int___int__(int* p0, int* p1, int* p2);
int* int__std____miter_base_int__(int* p0);
int* int__std__move_backward_int___int__(int* p0, int* p1, int* p2);
void void_std__vector_int__std__allocator_int______M_insert_aux_int_(struct std__vector_int__std__allocator_int__* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2);
void void_std__vector_int__std__allocator_int______M_realloc_insert_int_(struct std__vector_int__std__allocator_int__* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int______M_insert_rval(struct std__vector_int__std__allocator_int__* p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p1, int* p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____insert(struct std__vector_int__std__allocator_int__* p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p1, int* p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
void _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2IPiQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
void std__vector_int__std__allocator_int______M_fill_append(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, int* p2);
void std__vector_int__std__allocator_int______Temporary_value___Temporary_value_int_const__(struct std__vector_int__std__allocator_int_____Temporary_value* p0, struct std__vector_int__std__allocator_int__* p1, int* p2);
int* std__vector_int__std__allocator_int______Temporary_value___M_val(struct std__vector_int__std__allocator_int_____Temporary_value* p0);
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* p0, int** p1);
int** std__move_iterator_int____base___const__(struct std__move_iterator_int___* p0);
_Bool bool_std__operator___int__(struct std__move_iterator_int___* p0, struct std__move_iterator_int___* p1);
void void_std___Construct_int__int_(int* p0, int* p1);
int* _ZNKSt6ranges7__imove9_IterMoveclIRKPiQoo11__adl_imoveIT_ErqTDTdeclsr3stdE7declvalIS6_EEEEEENS1_8__resultIS6_E4typeEOS6_(struct std__ranges____imove___IterMove* p0, int** p1);
int* std__move_iterator_int____operator____const(struct std__move_iterator_int___* p0);
struct std__move_iterator_int___* std__move_iterator_int____operator__(struct std__move_iterator_int___* p0);
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* p0);
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* p0);
int* int__std____do_uninit_copy_std__move_iterator_int____std__move_iterator_int____int__(struct std__move_iterator_int___ p0, struct std__move_iterator_int___ p1, int* p2);
int* int__std__uninitialized_copy_std__move_iterator_int____int__(struct std__move_iterator_int___ p0, struct std__move_iterator_int___ p1, int* p2);
int* int__std____uninitialized_copy_a_std__move_iterator_int____std__move_iterator_int____int___int_(struct std__move_iterator_int___ p0, struct std__move_iterator_int___ p1, int* p2, struct std__allocator_int_* p3);
void std__move_iterator_int____move_iterator(struct std__move_iterator_int___* p0, int* p1);
struct std__move_iterator_int___ std__move_iterator_int___std__make_move_iterator_int__(int* p0);
int* int__std____uninitialized_move_a_int___int___std__allocator_int___(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
void void_std____fill_a1_int___int_(int* p0, int* p1, int* p2);
void void_std____fill_a_int___int_(int* p0, int* p1, int* p2);
void void_std__fill_int___int_(int* p0, int* p1, int* p2);
void void_std___Construct_int__int_const__(int* p0, int* p1);
int* int__std____do_uninit_fill_n_int___unsigned_long__int_(int* p0, unsigned long p1, int* p2);
int* int__std__uninitialized_fill_n_int___unsigned_long__int_(int* p0, unsigned long p1, int* p2);
int* int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(int* p0, unsigned long p1, int* p2, struct std__allocator_int_* p3);
void std__vector_int__std__allocator_int______Temporary_value____Temporary_value(struct std__vector_int__std__allocator_int_____Temporary_value* p0);
extern int __gxx_personality_v0();
struct std__move_iterator_int___ std__move_iterator_int___std____make_move_if_noexcept_iterator_int__std__move_iterator_int____(int* p0);
int* int__std____uninitialized_move_if_noexcept_a_int___int___std__allocator_int___(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);
void std__vector_int__std__allocator_int______M_fill_insert(struct std__vector_int__std__allocator_int__* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, unsigned long p2, int* p3);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____insert_2(struct std__vector_int__std__allocator_int__* p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p1, unsigned long p2, int* p3);
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
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* p0);
int main();
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0);
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0);
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* p0);
_Bool std____is_constant_evaluated();
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_int___deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* p0, int* p1, unsigned long p2);
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* p0);
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* p0);
void std__allocator_int___allocator(struct std__allocator_int_* p0);
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p0);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int______Temporary_value___Storage___Storage(union std__vector_int__std__allocator_int_____Temporary_value___Storage* p0);
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(struct std__allocator_int_* p0, int* p1, int* p2);
int* std__vector_int__std__allocator_int______Temporary_value___M_ptr(struct std__vector_int__std__allocator_int_____Temporary_value* p0);
void std__vector_int__std__allocator_int______Temporary_value___Storage____Storage(union std__vector_int__std__allocator_int_____Temporary_value___Storage* p0);
void void_std___Destroy_int__(int* p0, int* p1);

// function: _ZNSt6vectorIiSaIiEEC2Ev
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* v0) {
bb1:
  struct std__vector_int__std__allocator_int__* this2;
  this2 = v0;
  struct std__vector_int__std__allocator_int__* t3 = this2;
  struct std___Vector_base_int__std__allocator_int__* base4 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t3 + 0);
  std___Vector_base_int__std__allocator_int______Vector_base(base4);
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2Ev
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v5) {
bb6:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this7;
  this7 = v5;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t8 = this7;
  int* c9 = ((void*)0);
  t8->_M_current = c9;
  return;
}

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v10, int* v11) {
bb12:
  int* __location13;
  int* __args14;
  int* __retval15;
  void* __loc16;
  __location13 = v10;
  __args14 = v11;
  int* t17 = __location13;
  void* cast18 = (void*)t17;
  __loc16 = cast18;
    void* t19 = __loc16;
    int* cast20 = (int*)t19;
    int* t21 = __args14;
    int t22 = *t21;
    *cast20 = t22;
    __retval15 = cast20;
    int* t23 = __retval15;
    return t23;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* v24, int* v25, int* v26) {
bb27:
  struct std__allocator_int_* __a28;
  int* __p29;
  int* __args30;
  __a28 = v24;
  __p29 = v25;
  __args30 = v26;
  int* t31 = __p29;
  int* t32 = __args30;
  int* r33 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t31, t32);
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v34, unsigned long* v35) {
bb36:
  unsigned long* __a37;
  unsigned long* __b38;
  unsigned long* __retval39;
  __a37 = v34;
  __b38 = v35;
    unsigned long* t40 = __b38;
    unsigned long t41 = *t40;
    unsigned long* t42 = __a37;
    unsigned long t43 = *t42;
    _Bool c44 = ((t41 < t43)) ? 1 : 0;
    if (c44) {
      unsigned long* t45 = __b38;
      __retval39 = t45;
      unsigned long* t46 = __retval39;
      return t46;
    }
  unsigned long* t47 = __a37;
  __retval39 = t47;
  unsigned long* t48 = __retval39;
  return t48;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v49) {
bb50:
  struct std__allocator_int_* __a51;
  unsigned long __retval52;
  unsigned long __diffmax53;
  unsigned long __allocmax54;
  __a51 = v49;
  unsigned long c55 = 2305843009213693951;
  __diffmax53 = c55;
  unsigned long c56 = 4611686018427387903;
  __allocmax54 = c56;
  unsigned long* r57 = unsigned_long_const__std__min_unsigned_long_(&__diffmax53, &__allocmax54);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long t58 = *r57;
  __retval52 = t58;
  unsigned long t59 = __retval52;
  return t59;
}

// function: _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* v60) {
bb61:
  struct std___Vector_base_int__std__allocator_int__* this62;
  struct std__allocator_int_* __retval63;
  this62 = v60;
  struct std___Vector_base_int__std__allocator_int__* t64 = this62;
  struct std__allocator_int_* base65 = (struct std__allocator_int_*)((char *)&(t64->_M_impl) + 0);
  __retval63 = base65;
  struct std__allocator_int_* t66 = __retval63;
  return t66;
}

// function: _ZNKSt6vectorIiSaIiEE8max_sizeEv
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* v67) {
bb68:
  struct std__vector_int__std__allocator_int__* this69;
  unsigned long __retval70;
  this69 = v67;
  struct std__vector_int__std__allocator_int__* t71 = this69;
  struct std___Vector_base_int__std__allocator_int__* base72 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t71 + 0);
  struct std__allocator_int_* r73 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(base72);
  unsigned long r74 = std__vector_int__std__allocator_int______S_max_size(r73);
  __retval70 = r74;
  unsigned long t75 = __retval70;
  return t75;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v76) {
bb77:
  struct std__vector_int__std__allocator_int__* this78;
  unsigned long __retval79;
  long __dif80;
  this78 = v76;
  struct std__vector_int__std__allocator_int__* t81 = this78;
  struct std___Vector_base_int__std__allocator_int__* base82 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t81 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base83 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base82->_M_impl) + 0);
  int* t84 = base83->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base85 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t81 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base86 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base85->_M_impl) + 0);
  int* t87 = base86->_M_start;
  long diff88 = t84 - t87;
  __dif80 = diff88;
    long t89 = __dif80;
    long c90 = 0;
    _Bool c91 = ((t89 < c90)) ? 1 : 0;
    if (c91) {
      __builtin_unreachable();
    }
  long t92 = __dif80;
  unsigned long cast93 = (unsigned long)t92;
  __retval79 = cast93;
  unsigned long t94 = __retval79;
  return t94;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v95, unsigned long* v96) {
bb97:
  unsigned long* __a98;
  unsigned long* __b99;
  unsigned long* __retval100;
  __a98 = v95;
  __b99 = v96;
    unsigned long* t101 = __a98;
    unsigned long t102 = *t101;
    unsigned long* t103 = __b99;
    unsigned long t104 = *t103;
    _Bool c105 = ((t102 < t104)) ? 1 : 0;
    if (c105) {
      unsigned long* t106 = __b99;
      __retval100 = t106;
      unsigned long* t107 = __retval100;
      return t107;
    }
  unsigned long* t108 = __a98;
  __retval100 = t108;
  unsigned long* t109 = __retval100;
  return t109;
}

// function: _ZNKSt6vectorIiSaIiEE12_M_check_lenEmPKc
unsigned long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std__vector_int__std__allocator_int__* v110, unsigned long v111, char* v112) {
bb113:
  struct std__vector_int__std__allocator_int__* this114;
  unsigned long __n115;
  char* __s116;
  unsigned long __retval117;
  unsigned long __len118;
  unsigned long ref_tmp0119;
  this114 = v110;
  __n115 = v111;
  __s116 = v112;
  struct std__vector_int__std__allocator_int__* t120 = this114;
    unsigned long r121 = std__vector_int__std__allocator_int_____max_size___const(t120);
    unsigned long r122 = std__vector_int__std__allocator_int_____size___const(t120);
    unsigned long b123 = r121 - r122;
    unsigned long t124 = __n115;
    _Bool c125 = ((b123 < t124)) ? 1 : 0;
    if (c125) {
      char* t126 = __s116;
      std____throw_length_error(t126);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
    }
  unsigned long r127 = std__vector_int__std__allocator_int_____size___const(t120);
  unsigned long r128 = std__vector_int__std__allocator_int_____size___const(t120);
  ref_tmp0119 = r128;
  unsigned long* r129 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp0119, &__n115);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long t130 = *r129;
  unsigned long b131 = r127 + t130;
  __len118 = b131;
  unsigned long t132 = __len118;
  unsigned long r133 = std__vector_int__std__allocator_int_____size___const(t120);
  _Bool c134 = ((t132 < r133)) ? 1 : 0;
  _Bool ternary135;
  if (c134) {
    _Bool c136 = 1;
    ternary135 = (_Bool)c136;
  } else {
    unsigned long t137 = __len118;
    unsigned long r138 = std__vector_int__std__allocator_int_____max_size___const(t120);
    _Bool c139 = ((t137 > r138)) ? 1 : 0;
    ternary135 = (_Bool)c139;
  }
  unsigned long ternary140;
  if (ternary135) {
    unsigned long r141 = std__vector_int__std__allocator_int_____max_size___const(t120);
    ternary140 = (unsigned long)r141;
  } else {
    unsigned long t142 = __len118;
    ternary140 = (unsigned long)t142;
  }
  __retval117 = ternary140;
  unsigned long t143 = __retval117;
  return t143;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v144) {
bb145:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this146;
  int** __retval147;
  this146 = v144;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t148 = this146;
  __retval147 = &t148->_M_current;
  int** t149 = __retval147;
  return t149;
}

// function: _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v150, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v151) {
bb152:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs153;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs154;
  long __retval155;
  __lhs153 = v150;
  __rhs154 = v151;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t156 = __lhs153;
  int** r157 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t156);
  int* t158 = *r157;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t159 = __rhs154;
  int** r160 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t159);
  int* t161 = *r160;
  long diff162 = t158 - t161;
  __retval155 = diff162;
  long t163 = __retval155;
  return t163;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v164) {
bb165:
  struct std____new_allocator_int_* this166;
  unsigned long __retval167;
  this166 = v164;
  struct std____new_allocator_int_* t168 = this166;
  unsigned long c169 = 9223372036854775807;
  unsigned long c170 = 4;
  unsigned long b171 = c169 / c170;
  __retval167 = b171;
  unsigned long t172 = __retval167;
  return t172;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v173, unsigned long v174, void* v175) {
bb176:
  struct std____new_allocator_int_* this177;
  unsigned long __n178;
  void* unnamed179;
  int* __retval180;
  this177 = v173;
  __n178 = v174;
  unnamed179 = v175;
  struct std____new_allocator_int_* t181 = this177;
    unsigned long t182 = __n178;
    unsigned long r183 = std____new_allocator_int____M_max_size___const(t181);
    _Bool c184 = ((t182 > r183)) ? 1 : 0;
    if (c184) {
        unsigned long t185 = __n178;
        unsigned long c186 = -1;
        unsigned long c187 = 4;
        unsigned long b188 = c186 / c187;
        _Bool c189 = ((t185 > b188)) ? 1 : 0;
        if (c189) {
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
    unsigned long c190 = 4;
    unsigned long c191 = 16;
    _Bool c192 = ((c190 > c191)) ? 1 : 0;
    if (c192) {
      unsigned long __al193;
      unsigned long c194 = 4;
      __al193 = c194;
      unsigned long t195 = __n178;
      unsigned long c196 = 4;
      unsigned long b197 = t195 * c196;
      unsigned long t198 = __al193;
      void* r199 = operator_new_2(b197, t198);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast200 = (int*)r199;
      __retval180 = cast200;
      int* t201 = __retval180;
      return t201;
    }
  unsigned long t202 = __n178;
  unsigned long c203 = 4;
  unsigned long b204 = t202 * c203;
  void* r205 = operator_new(b204);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* cast206 = (int*)r205;
  __retval180 = cast206;
  int* t207 = __retval180;
  return t207;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v208, unsigned long v209) {
bb210:
  struct std__allocator_int_* this211;
  unsigned long __n212;
  int* __retval213;
  this211 = v208;
  __n212 = v209;
  struct std__allocator_int_* t214 = this211;
    _Bool r215 = std____is_constant_evaluated();
    if (r215) {
        unsigned long t216 = __n212;
        unsigned long c217 = 4;
        unsigned long ovr218;
        _Bool ovf219 = __builtin_mul_overflow(t216, c217, &ovr218);
        __n212 = ovr218;
        if (ovf219) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t220 = __n212;
      void* r221 = operator_new(t220);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast222 = (int*)r221;
      __retval213 = cast222;
      int* t223 = __retval213;
      return t223;
    }
  struct std____new_allocator_int_* base224 = (struct std____new_allocator_int_*)((char *)t214 + 0);
  unsigned long t225 = __n212;
  void* c226 = ((void*)0);
  int* r227 = std____new_allocator_int___allocate(base224, t225, c226);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval213 = r227;
  int* t228 = __retval213;
  return t228;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v229, unsigned long v230) {
bb231:
  struct std__allocator_int_* __a232;
  unsigned long __n233;
  int* __retval234;
  __a232 = v229;
  __n233 = v230;
  struct std__allocator_int_* t235 = __a232;
  unsigned long t236 = __n233;
  int* r237 = std__allocator_int___allocate(t235, t236);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval234 = r237;
  int* t238 = __retval234;
  return t238;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v239, unsigned long v240) {
bb241:
  struct std___Vector_base_int__std__allocator_int__* this242;
  unsigned long __n243;
  int* __retval244;
  this242 = v239;
  __n243 = v240;
  struct std___Vector_base_int__std__allocator_int__* t245 = this242;
  unsigned long t246 = __n243;
  unsigned long c247 = 0;
  _Bool c248 = ((t246 != c247)) ? 1 : 0;
  int* ternary249;
  if (c248) {
    struct std__allocator_int_* base250 = (struct std__allocator_int_*)((char *)&(t245->_M_impl) + 0);
    unsigned long t251 = __n243;
    int* r252 = std__allocator_traits_std__allocator_int_____allocate(base250, t251);
    if (__cir_exc_active) {
      int* __cir_eh_ret = (int*)0;
      return __cir_eh_ret;
    }
    ternary249 = (int*)r252;
  } else {
    int* c253 = ((void*)0);
    ternary249 = (int*)c253;
  }
  __retval244 = ternary249;
  int* t254 = __retval244;
  return t254;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocC2EPimRSt12_Vector_baseIiS0_E
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v255, int* v256, unsigned long v257, struct std___Vector_base_int__std__allocator_int__* v258) {
bb259:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this260;
  int* __s261;
  unsigned long __l262;
  struct std___Vector_base_int__std__allocator_int__* __vect263;
  this260 = v255;
  __s261 = v256;
  __l262 = v257;
  __vect263 = v258;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t264 = this260;
  int* t265 = __s261;
  t264->_M_storage = t265;
  unsigned long t266 = __l262;
  t264->_M_len = t266;
  struct std___Vector_base_int__std__allocator_int__* t267 = __vect263;
  t264->_M_vect = t267;
  return;
}

// function: _ZSt10to_addressIiEPT_S1_
int* int__std__to_address_int_(int* v268) {
bb269:
  int* __ptr270;
  int* __retval271;
  __ptr270 = v268;
  int* t272 = __ptr270;
  __retval271 = t272;
  int* t273 = __retval271;
  return t273;
}

// function: _ZSt12__to_addressIPiEDaRKT_
int* auto_std____to_address_int__(int** v274) {
bb275:
  int** __ptr276;
  int* __retval277;
  __ptr276 = v274;
  int** t278 = __ptr276;
  int* t279 = *t278;
  int* r280 = int__std__to_address_int_(t279);
  __retval277 = r280;
  int* t281 = __retval277;
  return t281;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb282:
  _Bool __retval283;
    _Bool c284 = 0;
    __retval283 = c284;
    _Bool t285 = __retval283;
    return t285;
  abort();
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEC2ERKS1_
void __gnu_cxx____normal_iterator_int___void_____normal_iterator(struct __gnu_cxx____normal_iterator_int____void_* v286, int** v287) {
bb288:
  struct __gnu_cxx____normal_iterator_int____void_* this289;
  int** __i290;
  this289 = v286;
  __i290 = v287;
  struct __gnu_cxx____normal_iterator_int____void_* t291 = this289;
  int** t292 = __i290;
  int* t293 = *t292;
  t291->_M_current = t293;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v294) {
bb295:
  int* __location296;
  __location296 = v294;
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE7destroyIiEEvRS0_PT_
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* v297, int* v298) {
bb299:
  struct std__allocator_int_* __a300;
  int* __p301;
  __a300 = v297;
  __p301 = v298;
  int* t302 = __p301;
  void_std__destroy_at_int_(t302);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt19__relocate_object_aIiiSaIiEEvPT_PT0_RT1_
void void_std____relocate_object_a_int__int__std__allocator_int___(int* v303, int* v304, struct std__allocator_int_* v305) {
bb306:
  int* __dest307;
  int* __orig308;
  struct std__allocator_int_* __alloc309;
  __dest307 = v303;
  __orig308 = v304;
  __alloc309 = v305;
  struct std__allocator_int_* t310 = __alloc309;
  int* t311 = __dest307;
  int* t312 = __orig308;
  void_std__allocator_traits_std__allocator_int_____construct_int__int_(t310, t311, t312);
  struct std__allocator_int_* t313 = __alloc309;
  int* t314 = __orig308;
  void_std__allocator_traits_std__allocator_int_____destroy_int_(t313, t314);
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivEdeEv
int* __gnu_cxx____normal_iterator_int___void___operator____const(struct __gnu_cxx____normal_iterator_int____void_* v315) {
bb316:
  struct __gnu_cxx____normal_iterator_int____void_* this317;
  int* __retval318;
  this317 = v315;
  struct __gnu_cxx____normal_iterator_int____void_* t319 = this317;
  int* t320 = t319->_M_current;
  __retval318 = t320;
  int* t321 = __retval318;
  return t321;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEppEv
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator__(struct __gnu_cxx____normal_iterator_int____void_* v322) {
bb323:
  struct __gnu_cxx____normal_iterator_int____void_* this324;
  struct __gnu_cxx____normal_iterator_int____void_* __retval325;
  this324 = v322;
  struct __gnu_cxx____normal_iterator_int____void_* t326 = this324;
  int* t327 = t326->_M_current;
  int c328 = 1;
  int* ptr329 = &(t327)[c328];
  t326->_M_current = ptr329;
  __retval325 = t326;
  struct __gnu_cxx____normal_iterator_int____void_* t330 = __retval325;
  return t330;
}

// function: _ZSt14__relocate_a_1IPiN9__gnu_cxx17__normal_iteratorIS0_vEESaIiEET0_T_S6_S5_RT1_
struct __gnu_cxx____normal_iterator_int____void_ __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(int* v331, int* v332, struct __gnu_cxx____normal_iterator_int____void_ v333, struct std__allocator_int_* v334) {
bb335:
  int* __first336;
  int* __last337;
  struct __gnu_cxx____normal_iterator_int____void_ __result338;
  struct std__allocator_int_* __alloc339;
  struct __gnu_cxx____normal_iterator_int____void_ __retval340;
  __first336 = v331;
  __last337 = v332;
  __result338 = v333;
  __alloc339 = v334;
  __retval340 = __result338; // copy
    while (1) {
      int* t342 = __first336;
      int* t343 = __last337;
      _Bool c344 = ((t342 != t343)) ? 1 : 0;
      if (!c344) break;
      int* r345 = __gnu_cxx____normal_iterator_int___void___operator____const(&__retval340);
      int* t346 = __first336;
      struct std__allocator_int_* t347 = __alloc339;
      void_std____relocate_object_a_int__int__std__allocator_int___(r345, t346, t347);
    for_step341: ;
      int* t348 = __first336;
      int c349 = 1;
      int* ptr350 = &(t348)[c349];
      __first336 = ptr350;
      struct __gnu_cxx____normal_iterator_int____void_* r351 = __gnu_cxx____normal_iterator_int___void___operator__(&__retval340);
    }
  struct __gnu_cxx____normal_iterator_int____void_ t352 = __retval340;
  return t352;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEaSEOS2_
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator_(struct __gnu_cxx____normal_iterator_int____void_* v353, struct __gnu_cxx____normal_iterator_int____void_* v354) {
bb355:
  struct __gnu_cxx____normal_iterator_int____void_* this356;
  struct __gnu_cxx____normal_iterator_int____void_* unnamed357;
  struct __gnu_cxx____normal_iterator_int____void_* __retval358;
  this356 = v353;
  unnamed357 = v354;
  struct __gnu_cxx____normal_iterator_int____void_* t359 = this356;
  struct __gnu_cxx____normal_iterator_int____void_* t360 = unnamed357;
  int* t361 = t360->_M_current;
  t359->_M_current = t361;
  __retval358 = t359;
  struct __gnu_cxx____normal_iterator_int____void_* t362 = __retval358;
  return t362;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivE4baseEv
int** __gnu_cxx____normal_iterator_int___void___base___const(struct __gnu_cxx____normal_iterator_int____void_* v363) {
bb364:
  struct __gnu_cxx____normal_iterator_int____void_* this365;
  int** __retval366;
  this365 = v363;
  struct __gnu_cxx____normal_iterator_int____void_* t367 = this365;
  __retval366 = &t367->_M_current;
  int** t368 = __retval366;
  return t368;
}

// function: _ZSt14__relocate_a_1IiiENSt9enable_ifIXsr3std24__is_bitwise_relocatableIT_EE5valueEPS1_E4typeES2_S2_S2_RSaIT0_E
int* std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(int* v369, int* v370, int* v371, struct std__allocator_int_* v372) {
bb373:
  int* __first374;
  int* __last375;
  int* __result376;
  struct std__allocator_int_* __alloc377;
  int* __retval378;
  long __count379;
  __first374 = v369;
  __last375 = v370;
  __result376 = v371;
  __alloc377 = v372;
  int* t380 = __last375;
  int* t381 = __first374;
  long diff382 = t380 - t381;
  __count379 = diff382;
    long t383 = __count379;
    long c384 = 0;
    _Bool c385 = ((t383 > c384)) ? 1 : 0;
    if (c385) {
        _Bool r386 = std__is_constant_evaluated();
        if (r386) {
          struct __gnu_cxx____normal_iterator_int____void_ __out387;
          struct __gnu_cxx____normal_iterator_int____void_ ref_tmp0388;
          struct __gnu_cxx____normal_iterator_int____void_ agg_tmp0389;
          __gnu_cxx____normal_iterator_int___void_____normal_iterator(&__out387, &__result376);
          int* t390 = __first374;
          int* t391 = __last375;
          agg_tmp0389 = __out387; // copy
          struct std__allocator_int_* t392 = __alloc377;
          struct __gnu_cxx____normal_iterator_int____void_ t393 = agg_tmp0389;
          struct __gnu_cxx____normal_iterator_int____void_ r394 = __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(t390, t391, t393, t392);
          ref_tmp0388 = r394;
          struct __gnu_cxx____normal_iterator_int____void_* r395 = __gnu_cxx____normal_iterator_int___void___operator_(&__out387, &ref_tmp0388);
          int** r396 = __gnu_cxx____normal_iterator_int___void___base___const(&__out387);
          int* t397 = *r396;
          __retval378 = t397;
          int* t398 = __retval378;
          return t398;
        }
      int* t399 = __result376;
      void* cast400 = (void*)t399;
      int* t401 = __first374;
      void* cast402 = (void*)t401;
      long t403 = __count379;
      unsigned long cast404 = (unsigned long)t403;
      unsigned long c405 = 4;
      unsigned long b406 = cast404 * c405;
      void* r407 = memcpy(cast400, cast402, b406);
    }
  int* t408 = __result376;
  long t409 = __count379;
  int* ptr410 = &(t408)[t409];
  __retval378 = ptr410;
  int* t411 = __retval378;
  return t411;
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v412) {
bb413:
  int* __it414;
  int* __retval415;
  __it414 = v412;
  int* t416 = __it414;
  __retval415 = t416;
  int* t417 = __retval415;
  return t417;
}

// function: _ZSt12__relocate_aIPiS0_SaIiEET0_T_S3_S2_RT1_
int* int__std____relocate_a_int___int___std__allocator_int___(int* v418, int* v419, int* v420, struct std__allocator_int_* v421) {
bb422:
  int* __first423;
  int* __last424;
  int* __result425;
  struct std__allocator_int_* __alloc426;
  int* __retval427;
  __first423 = v418;
  __last424 = v419;
  __result425 = v420;
  __alloc426 = v421;
  int* t428 = __first423;
  int* r429 = int__std____niter_base_int__(t428);
  int* t430 = __last424;
  int* r431 = int__std____niter_base_int__(t430);
  int* t432 = __result425;
  int* r433 = int__std____niter_base_int__(t432);
  struct std__allocator_int_* t434 = __alloc426;
  int* r435 = std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(r429, r431, r433, t434);
  __retval427 = r435;
  int* t436 = __retval427;
  return t436;
}

// function: _ZNSt6vectorIiSaIiEE11_S_relocateEPiS2_S2_RS0_
int* std__vector_int__std__allocator_int______S_relocate(int* v437, int* v438, int* v439, struct std__allocator_int_* v440) {
bb441:
  int* __first442;
  int* __last443;
  int* __result444;
  struct std__allocator_int_* __alloc445;
  int* __retval446;
  __first442 = v437;
  __last443 = v438;
  __result444 = v439;
  __alloc445 = v440;
  int* t447 = __first442;
  int* t448 = __last443;
  int* t449 = __result444;
  struct std__allocator_int_* t450 = __alloc445;
  int* r451 = int__std____relocate_a_int___int___std__allocator_int___(t447, t448, t449, t450);
  __retval446 = r451;
  int* t452 = __retval446;
  return t452;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v453) {
bb454:
  struct std___Vector_base_int__std__allocator_int__* this455;
  struct std__allocator_int_* __retval456;
  this455 = v453;
  struct std___Vector_base_int__std__allocator_int__* t457 = this455;
  struct std__allocator_int_* base458 = (struct std__allocator_int_*)((char *)&(t457->_M_impl) + 0);
  __retval456 = base458;
  struct std__allocator_int_* t459 = __retval456;
  return t459;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocD2Ev
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v460) {
bb461:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this462;
  this462 = v460;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t463 = this462;
    int* t464 = t463->_M_storage;
    _Bool cast465 = (_Bool)t464;
    if (cast465) {
      struct std___Vector_base_int__std__allocator_int__* t466 = t463->_M_vect;
      int* t467 = t463->_M_storage;
      unsigned long t468 = t463->_M_len;
      std___Vector_base_int__std__allocator_int______M_deallocate(t466, t467, t468);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_M_realloc_appendIJiEEEvDpOT_
void void_std__vector_int__std__allocator_int______M_realloc_append_int_(struct std__vector_int__std__allocator_int__* v469, int* v470) {
bb471:
  struct std__vector_int__std__allocator_int__* this472;
  int* __args473;
  unsigned long __len474;
  int* __old_start475;
  int* __old_finish476;
  unsigned long __elems477;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0478;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1479;
  int* __new_start480;
  int* __new_finish481;
  this472 = v469;
  __args473 = v470;
  struct std__vector_int__std__allocator_int__* t482 = this472;
  unsigned long c483 = 1;
  char* cast484 = (char*)&(_str_2);
  unsigned long r485 = std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(t482, c483, cast484);
  if (__cir_exc_active) {
    return;
  }
  __len474 = r485;
    unsigned long t486 = __len474;
    unsigned long c487 = 0;
    _Bool c488 = ((t486 <= c487)) ? 1 : 0;
    if (c488) {
      __builtin_unreachable();
    }
  struct std___Vector_base_int__std__allocator_int__* base489 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t482 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base490 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base489->_M_impl) + 0);
  int* t491 = base490->_M_start;
  __old_start475 = t491;
  struct std___Vector_base_int__std__allocator_int__* base492 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t482 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base493 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base492->_M_impl) + 0);
  int* t494 = base493->_M_finish;
  __old_finish476 = t494;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r495 = std__vector_int__std__allocator_int_____end(t482);
  ref_tmp0478 = r495;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r496 = std__vector_int__std__allocator_int_____begin(t482);
  ref_tmp1479 = r496;
  long r497 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&ref_tmp0478, &ref_tmp1479);
  unsigned long cast498 = (unsigned long)r497;
  __elems477 = cast498;
  struct std___Vector_base_int__std__allocator_int__* base499 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t482 + 0);
  unsigned long t500 = __len474;
  int* r501 = std___Vector_base_int__std__allocator_int______M_allocate(base499, t500);
  if (__cir_exc_active) {
    return;
  }
  __new_start480 = r501;
  int* t502 = __new_start480;
  __new_finish481 = t502;
    struct std__vector_int__std__allocator_int_____Guard_alloc __guard503;
    int* ref_tmp2504;
    int* t505 = __new_start480;
    unsigned long t506 = __len474;
    struct std___Vector_base_int__std__allocator_int__* base507 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t482 + 0);
    std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(&__guard503, t505, t506, base507);
    if (__cir_exc_active) {
      return;
    }
      struct std___Vector_base_int__std__allocator_int__* base508 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t482 + 0);
      struct std__allocator_int_* base509 = (struct std__allocator_int_*)((char *)&(base508->_M_impl) + 0);
      int* t510 = __new_start480;
      unsigned long t511 = __elems477;
      int* ptr512 = &(t510)[t511];
      ref_tmp2504 = ptr512;
      int* r513 = auto_std____to_address_int__(&ref_tmp2504);
      int* t514 = __args473;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_(base509, r513, t514);
        int* t515 = __old_start475;
        int* t516 = __old_finish476;
        int* t517 = __new_start480;
        struct std___Vector_base_int__std__allocator_int__* base518 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t482 + 0);
        struct std__allocator_int_* r519 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base518);
        int* r520 = std__vector_int__std__allocator_int______S_relocate(t515, t516, t517, r519);
        __new_finish481 = r520;
        int* t521 = __new_finish481;
        int c522 = 1;
        int* ptr523 = &(t521)[c522];
        __new_finish481 = ptr523;
      int* t524 = __old_start475;
      __guard503._M_storage = t524;
      struct std___Vector_base_int__std__allocator_int__* base525 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t482 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base526 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base525->_M_impl) + 0);
      int* t527 = base526->_M_end_of_storage;
      int* t528 = __old_start475;
      long diff529 = t527 - t528;
      unsigned long cast530 = (unsigned long)diff529;
      __guard503._M_len = cast530;
    {
      std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(&__guard503);
    }
  int* t531 = __new_start480;
  struct std___Vector_base_int__std__allocator_int__* base532 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t482 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base533 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base532->_M_impl) + 0);
  base533->_M_start = t531;
  int* t534 = __new_finish481;
  struct std___Vector_base_int__std__allocator_int__* base535 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t482 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base536 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base535->_M_impl) + 0);
  base536->_M_finish = t534;
  int* t537 = __new_start480;
  unsigned long t538 = __len474;
  int* ptr539 = &(t537)[t538];
  struct std___Vector_base_int__std__allocator_int__* base540 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t482 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base541 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base540->_M_impl) + 0);
  base541->_M_end_of_storage = ptr539;
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v542) {
bb543:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this544;
  int** __retval545;
  this544 = v542;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t546 = this544;
  __retval545 = &t546->_M_current;
  int** t547 = __retval545;
  return t547;
}

// function: _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v548, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v549) {
bb550:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __lhs551;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __rhs552;
  _Bool __retval553;
  __lhs551 = v548;
  __rhs552 = v549;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t554 = __lhs551;
  int** r555 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t554);
  int* t556 = *r555;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t557 = __rhs552;
  int** r558 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t557);
  int* t559 = *r558;
  _Bool c560 = ((t556 == t559)) ? 1 : 0;
  __retval553 = c560;
  _Bool t561 = __retval553;
  return t561;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2ERKS2_
void __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v562, int** v563) {
bb564:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this565;
  int** __i566;
  this565 = v562;
  __i566 = v563;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t567 = this565;
  int** t568 = __i566;
  int* t569 = *t568;
  t567->_M_current = t569;
  return;
}

// function: _ZNKSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin___const(struct std__vector_int__std__allocator_int__* v570) {
bb571:
  struct std__vector_int__std__allocator_int__* this572;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval573;
  this572 = v570;
  struct std__vector_int__std__allocator_int__* t574 = this572;
  struct std___Vector_base_int__std__allocator_int__* base575 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t574 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base576 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base575->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval573, &base576->_M_start);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t577 = __retval573;
  return t577;
}

// function: _ZNKSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end___const(struct std__vector_int__std__allocator_int__* v578) {
bb579:
  struct std__vector_int__std__allocator_int__* this580;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval581;
  this580 = v578;
  struct std__vector_int__std__allocator_int__* t582 = this580;
  struct std___Vector_base_int__std__allocator_int__* base583 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t582 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base584 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base583->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval581, &base584->_M_finish);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t585 = __retval581;
  return t585;
}

// function: _ZNKSt6vectorIiSaIiEE5emptyEv
_Bool std__vector_int__std__allocator_int_____empty___const(struct std__vector_int__std__allocator_int__* v586) {
bb587:
  struct std__vector_int__std__allocator_int__* this588;
  _Bool __retval589;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp0590;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp1591;
  this588 = v586;
  struct std__vector_int__std__allocator_int__* t592 = this588;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r593 = std__vector_int__std__allocator_int_____begin___const(t592);
  ref_tmp0590 = r593;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r594 = std__vector_int__std__allocator_int_____end___const(t592);
  ref_tmp1591 = r594;
  _Bool r595 = _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&ref_tmp0590, &ref_tmp1591);
  __retval589 = r595;
  _Bool t596 = __retval589;
  return t596;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v597, int** v598) {
bb599:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this600;
  int** __i601;
  this600 = v597;
  __i601 = v598;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t602 = this600;
  int** t603 = __i601;
  int* t604 = *t603;
  t602->_M_current = t604;
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEmiEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v605, long v606) {
bb607:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this608;
  long __n609;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval610;
  int* ref_tmp0611;
  this608 = v605;
  __n609 = v606;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t612 = this608;
  int* t613 = t612->_M_current;
  long t614 = __n609;
  long u615 = -t614;
  int* ptr616 = &(t613)[u615];
  ref_tmp0611 = ptr616;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval610, &ref_tmp0611);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t617 = __retval610;
  return t617;
}

// function: _ZNSt6vectorIiSaIiEE4backEv
int* std__vector_int__std__allocator_int_____back(struct std__vector_int__std__allocator_int__* v618) {
bb619:
  struct std__vector_int__std__allocator_int__* this620;
  int* __retval621;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0622;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1623;
  this620 = v618;
  struct std__vector_int__std__allocator_int__* t624 = this620;
    do {
          _Bool r625 = std__vector_int__std__allocator_int_____empty___const(t624);
          if (r625) {
            char* cast626 = (char*)&(_str_3);
            int c627 = 1370;
            char* cast628 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv);
            char* cast629 = (char*)&(_str_4);
            std____glibcxx_assert_fail(cast626, c627, cast628, cast629);
          }
      _Bool c630 = 0;
      if (!c630) break;
    } while (1);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r631 = std__vector_int__std__allocator_int_____end(t624);
  ref_tmp1623 = r631;
  long c632 = 1;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r633 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&ref_tmp1623, c632);
  ref_tmp0622 = r633;
  int* r634 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0622);
  __retval621 = r634;
  int* t635 = __retval621;
  return t635;
}

// function: _ZNSt6vectorIiSaIiEE12emplace_backIJiEEERiDpOT_
int* int__std__vector_int__std__allocator_int_____emplace_back_int_(struct std__vector_int__std__allocator_int__* v636, int* v637) {
bb638:
  struct std__vector_int__std__allocator_int__* this639;
  int* __args640;
  int* __retval641;
  this639 = v636;
  __args640 = v637;
  struct std__vector_int__std__allocator_int__* t642 = this639;
    struct std___Vector_base_int__std__allocator_int__* base643 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t642 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base644 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base643->_M_impl) + 0);
    int* t645 = base644->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base646 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t642 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base647 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base646->_M_impl) + 0);
    int* t648 = base647->_M_end_of_storage;
    _Bool c649 = ((t645 != t648)) ? 1 : 0;
    if (c649) {
      struct std___Vector_base_int__std__allocator_int__* base650 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t642 + 0);
      struct std__allocator_int_* base651 = (struct std__allocator_int_*)((char *)&(base650->_M_impl) + 0);
      struct std___Vector_base_int__std__allocator_int__* base652 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t642 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base653 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base652->_M_impl) + 0);
      int* t654 = base653->_M_finish;
      int* t655 = __args640;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_(base651, t654, t655);
      struct std___Vector_base_int__std__allocator_int__* base656 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t642 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base657 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base656->_M_impl) + 0);
      int* t658 = base657->_M_finish;
      int c659 = 1;
      int* ptr660 = &(t658)[c659];
      base657->_M_finish = ptr660;
    } else {
      int* t661 = __args640;
      void_std__vector_int__std__allocator_int______M_realloc_append_int_(t642, t661);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
    }
  int* r662 = std__vector_int__std__allocator_int_____back(t642);
  __retval641 = r662;
  int* t663 = __retval641;
  return t663;
}

// function: _ZNSt6vectorIiSaIiEE9push_backEOi
void std__vector_int__std__allocator_int_____push_back(struct std__vector_int__std__allocator_int__* v664, int* v665) {
bb666:
  struct std__vector_int__std__allocator_int__* this667;
  int* __x668;
  this667 = v664;
  __x668 = v665;
  struct std__vector_int__std__allocator_int__* t669 = this667;
  int* t670 = __x668;
  int* r671 = int__std__vector_int__std__allocator_int_____emplace_back_int_(t669, t670);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v672, int v673) {
bb674:
  int __a675;
  int __b676;
  int __retval677;
  __a675 = v672;
  __b676 = v673;
  int t678 = __a675;
  int t679 = __b676;
  int b680 = t678 | t679;
  __retval677 = b680;
  int t681 = __retval677;
  return t681;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v682) {
bb683:
  struct std__basic_ios_char__std__char_traits_char__* this684;
  int __retval685;
  this684 = v682;
  struct std__basic_ios_char__std__char_traits_char__* t686 = this684;
  struct std__ios_base* base687 = (struct std__ios_base*)((char *)t686 + 0);
  int t688 = base687->_M_streambuf_state;
  __retval685 = t688;
  int t689 = __retval685;
  return t689;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v690, int v691) {
bb692:
  struct std__basic_ios_char__std__char_traits_char__* this693;
  int __state694;
  this693 = v690;
  __state694 = v691;
  struct std__basic_ios_char__std__char_traits_char__* t695 = this693;
  int r696 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t695);
  if (__cir_exc_active) {
    return;
  }
  int t697 = __state694;
  int r698 = std__operator_(r696, t697);
  std__basic_ios_char__std__char_traits_char_____clear(t695, r698);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v699, char* v700) {
bb701:
  char* __c1702;
  char* __c2703;
  _Bool __retval704;
  __c1702 = v699;
  __c2703 = v700;
  char* t705 = __c1702;
  char t706 = *t705;
  int cast707 = (int)t706;
  char* t708 = __c2703;
  char t709 = *t708;
  int cast710 = (int)t709;
  _Bool c711 = ((cast707 == cast710)) ? 1 : 0;
  __retval704 = c711;
  _Bool t712 = __retval704;
  return t712;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v713) {
bb714:
  char* __p715;
  unsigned long __retval716;
  unsigned long __i717;
  __p715 = v713;
  unsigned long c718 = 0;
  __i717 = c718;
    char ref_tmp0719;
    while (1) {
      unsigned long t720 = __i717;
      char* t721 = __p715;
      char* ptr722 = &(t721)[t720];
      char c723 = 0;
      ref_tmp0719 = c723;
      _Bool r724 = __gnu_cxx__char_traits_char___eq(ptr722, &ref_tmp0719);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u725 = !r724;
      if (!u725) break;
      unsigned long t726 = __i717;
      unsigned long u727 = t726 + 1;
      __i717 = u727;
    }
  unsigned long t728 = __i717;
  __retval716 = t728;
  unsigned long t729 = __retval716;
  return t729;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v730) {
bb731:
  char* __s732;
  unsigned long __retval733;
  __s732 = v730;
    _Bool r734 = std____is_constant_evaluated();
    if (r734) {
      char* t735 = __s732;
      unsigned long r736 = __gnu_cxx__char_traits_char___length(t735);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval733 = r736;
      unsigned long t737 = __retval733;
      return t737;
    }
  char* t738 = __s732;
  unsigned long r739 = strlen(t738);
  __retval733 = r739;
  unsigned long t740 = __retval733;
  return t740;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v741, char* v742) {
bb743:
  struct std__basic_ostream_char__std__char_traits_char__* __out744;
  char* __s745;
  struct std__basic_ostream_char__std__char_traits_char__* __retval746;
  __out744 = v741;
  __s745 = v742;
    char* t747 = __s745;
    _Bool cast748 = (_Bool)t747;
    _Bool u749 = !cast748;
    if (u749) {
      struct std__basic_ostream_char__std__char_traits_char__* t750 = __out744;
      void** v751 = (void**)t750;
      void* v752 = *((void**)v751);
      unsigned char* cast753 = (unsigned char*)v752;
      long c754 = -24;
      unsigned char* ptr755 = &(cast753)[c754];
      long* cast756 = (long*)ptr755;
      long t757 = *cast756;
      unsigned char* cast758 = (unsigned char*)t750;
      unsigned char* ptr759 = &(cast758)[t757];
      struct std__basic_ostream_char__std__char_traits_char__* cast760 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr759;
      struct std__basic_ios_char__std__char_traits_char__* cast761 = (struct std__basic_ios_char__std__char_traits_char__*)cast760;
      int t762 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast761, t762);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t763 = __out744;
      char* t764 = __s745;
      char* t765 = __s745;
      unsigned long r766 = std__char_traits_char___length(t765);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast767 = (long)r766;
      struct std__basic_ostream_char__std__char_traits_char__* r768 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t763, t764, cast767);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t769 = __out744;
  __retval746 = t769;
  struct std__basic_ostream_char__std__char_traits_char__* t770 = __retval746;
  return t770;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v771) {
bb772:
  struct std__vector_int__std__allocator_int__* this773;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval774;
  this773 = v771;
  struct std__vector_int__std__allocator_int__* t775 = this773;
  struct std___Vector_base_int__std__allocator_int__* base776 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t775 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base777 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base776->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval774, &base777->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t778 = __retval774;
  return t778;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSEOS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v779, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v780) {
bb781:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this782;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed783;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval784;
  this782 = v779;
  unnamed783 = v780;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t785 = this782;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t786 = unnamed783;
  int* t787 = t786->_M_current;
  t785->_M_current = t787;
  __retval784 = t785;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t788 = __retval784;
  return t788;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v789, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v790) {
bb791:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs792;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs793;
  _Bool __retval794;
  __lhs792 = v789;
  __rhs793 = v790;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t795 = __lhs792;
  int** r796 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t795);
  int* t797 = *r796;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t798 = __rhs793;
  int** r799 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t798);
  int* t800 = *r799;
  _Bool c801 = ((t797 == t800)) ? 1 : 0;
  __retval794 = c801;
  _Bool t802 = __retval794;
  return t802;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v803) {
bb804:
  struct std__vector_int__std__allocator_int__* this805;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval806;
  this805 = v803;
  struct std__vector_int__std__allocator_int__* t807 = this805;
  struct std___Vector_base_int__std__allocator_int__* base808 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t807 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base809 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base808->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval806, &base809->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t810 = __retval806;
  return t810;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v811) {
bb812:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this813;
  int* __retval814;
  this813 = v811;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t815 = this813;
  int* t816 = t815->_M_current;
  __retval814 = t816;
  int* t817 = __retval814;
  return t817;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEi
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___3(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v818, int v819) {
bb820:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this821;
  int unnamed822;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval823;
  int* ref_tmp0824;
  this821 = v818;
  unnamed822 = v819;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t825 = this821;
  int* t826 = t825->_M_current;
  int c827 = 1;
  int* ptr828 = &(t826)[c827];
  t825->_M_current = ptr828;
  ref_tmp0824 = t826;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval823, &ref_tmp0824);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t829 = __retval823;
  return t829;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v830, void* v831) {
bb832:
  struct std__basic_ostream_char__std__char_traits_char__* this833;
  void* __pf834;
  struct std__basic_ostream_char__std__char_traits_char__* __retval835;
  this833 = v830;
  __pf834 = v831;
  struct std__basic_ostream_char__std__char_traits_char__* t836 = this833;
  void* t837 = __pf834;
  struct std__basic_ostream_char__std__char_traits_char__* r838 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t837)(t836);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval835 = r838;
  struct std__basic_ostream_char__std__char_traits_char__* t839 = __retval835;
  return t839;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v840) {
bb841:
  struct std__basic_ostream_char__std__char_traits_char__* __os842;
  struct std__basic_ostream_char__std__char_traits_char__* __retval843;
  __os842 = v840;
  struct std__basic_ostream_char__std__char_traits_char__* t844 = __os842;
  struct std__basic_ostream_char__std__char_traits_char__* r845 = std__ostream__flush(t844);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval843 = r845;
  struct std__basic_ostream_char__std__char_traits_char__* t846 = __retval843;
  return t846;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v847) {
bb848:
  struct std__ctype_char_* __f849;
  struct std__ctype_char_* __retval850;
  __f849 = v847;
    struct std__ctype_char_* t851 = __f849;
    _Bool cast852 = (_Bool)t851;
    _Bool u853 = !cast852;
    if (u853) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t854 = __f849;
  __retval850 = t854;
  struct std__ctype_char_* t855 = __retval850;
  return t855;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v856, char v857) {
bb858:
  struct std__ctype_char_* this859;
  char __c860;
  char __retval861;
  this859 = v856;
  __c860 = v857;
  struct std__ctype_char_* t862 = this859;
    char t863 = t862->_M_widen_ok;
    _Bool cast864 = (_Bool)t863;
    if (cast864) {
      char t865 = __c860;
      unsigned char cast866 = (unsigned char)t865;
      unsigned long cast867 = (unsigned long)cast866;
      char t868 = t862->_M_widen[cast867];
      __retval861 = t868;
      char t869 = __retval861;
      return t869;
    }
  std__ctype_char____M_widen_init___const(t862);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t870 = __c860;
  void** v871 = (void**)t862;
  void* v872 = *((void**)v871);
  char vcall875 = (char)__VERIFIER_virtual_call_char_char(t862, 6, t870);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval861 = vcall875;
  char t876 = __retval861;
  return t876;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v877, char v878) {
bb879:
  struct std__basic_ios_char__std__char_traits_char__* this880;
  char __c881;
  char __retval882;
  this880 = v877;
  __c881 = v878;
  struct std__basic_ios_char__std__char_traits_char__* t883 = this880;
  struct std__ctype_char_* t884 = t883->_M_ctype;
  struct std__ctype_char_* r885 = std__ctype_char__const__std____check_facet_std__ctype_char___(t884);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t886 = __c881;
  char r887 = std__ctype_char___widen_char__const(r885, t886);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval882 = r887;
  char t888 = __retval882;
  return t888;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v889) {
bb890:
  struct std__basic_ostream_char__std__char_traits_char__* __os891;
  struct std__basic_ostream_char__std__char_traits_char__* __retval892;
  __os891 = v889;
  struct std__basic_ostream_char__std__char_traits_char__* t893 = __os891;
  struct std__basic_ostream_char__std__char_traits_char__* t894 = __os891;
  void** v895 = (void**)t894;
  void* v896 = *((void**)v895);
  unsigned char* cast897 = (unsigned char*)v896;
  long c898 = -24;
  unsigned char* ptr899 = &(cast897)[c898];
  long* cast900 = (long*)ptr899;
  long t901 = *cast900;
  unsigned char* cast902 = (unsigned char*)t894;
  unsigned char* ptr903 = &(cast902)[t901];
  struct std__basic_ostream_char__std__char_traits_char__* cast904 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr903;
  struct std__basic_ios_char__std__char_traits_char__* cast905 = (struct std__basic_ios_char__std__char_traits_char__*)cast904;
  char c906 = 10;
  char r907 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast905, c906);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r908 = std__ostream__put(t893, r907);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r909 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r908);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval892 = r909;
  struct std__basic_ostream_char__std__char_traits_char__* t910 = __retval892;
  return t910;
}

// function: _ZN9__gnu_cxxmiIPKiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS9_SC_
long __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int_const___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v911, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v912) {
bb913:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __lhs914;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __rhs915;
  long __retval916;
  __lhs914 = v911;
  __rhs915 = v912;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t917 = __lhs914;
  int** r918 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t917);
  int* t919 = *r918;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t920 = __rhs915;
  int** r921 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t920);
  int* t922 = *r921;
  long diff923 = t919 - t922;
  __retval916 = diff923;
  long t924 = __retval916;
  return t924;
}

// function: _ZNKSt6vectorIiSaIiEE6cbeginEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____cbegin___const(struct std__vector_int__std__allocator_int__* v925) {
bb926:
  struct std__vector_int__std__allocator_int__* this927;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval928;
  this927 = v925;
  struct std__vector_int__std__allocator_int__* t929 = this927;
  struct std___Vector_base_int__std__allocator_int__* base930 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t929 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base931 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base930->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval928, &base931->_M_start);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t932 = __retval928;
  return t932;
}

// function: _ZNKSt6vectorIiSaIiEE4cendEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____cend___const(struct std__vector_int__std__allocator_int__* v933) {
bb934:
  struct std__vector_int__std__allocator_int__* this935;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval936;
  this935 = v933;
  struct std__vector_int__std__allocator_int__* t937 = this935;
  struct std___Vector_base_int__std__allocator_int__* base938 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t937 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base939 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base938->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval936, &base939->_M_finish);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t940 = __retval936;
  return t940;
}

// function: _ZSt12__niter_wrapIPiET_RKS1_S1_
int* int__std____niter_wrap_int__(int** v941, int* v942) {
bb943:
  int** unnamed944;
  int* __res945;
  int* __retval946;
  unnamed944 = v941;
  __res945 = v942;
  int* t947 = __res945;
  __retval946 = t947;
  int* t948 = __retval946;
  return t948;
}

// function: _ZSt10__distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_St26random_access_iterator_tag
long std__iterator_traits_int____difference_type_std____distance_int__(int* v949, int* v950, struct std__random_access_iterator_tag v951) {
bb952:
  int* __first953;
  int* __last954;
  struct std__random_access_iterator_tag unnamed955;
  long __retval956;
  __first953 = v949;
  __last954 = v950;
  unnamed955 = v951;
  int* t957 = __last954;
  int* t958 = __first953;
  long diff959 = t957 - t958;
  __retval956 = diff959;
  long t960 = __retval956;
  return t960;
}

// function: _ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** v961) {
bb962:
  int** unnamed963;
  struct std__random_access_iterator_tag __retval964;
  unnamed963 = v961;
  struct std__random_access_iterator_tag t965 = __retval964;
  return t965;
}

// function: _ZSt8distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_
long std__iterator_traits_int____difference_type_std__distance_int__(int* v966, int* v967) {
bb968:
  int* __first969;
  int* __last970;
  long __retval971;
  struct std__random_access_iterator_tag agg_tmp0972;
  __first969 = v966;
  __last970 = v967;
  int* t973 = __first969;
  int* t974 = __last970;
  struct std__random_access_iterator_tag r975 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first969);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  agg_tmp0972 = r975;
  struct std__random_access_iterator_tag t976 = agg_tmp0972;
  long r977 = std__iterator_traits_int____difference_type_std____distance_int__(t973, t974, t976);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  __retval971 = r977;
  long t978 = __retval971;
  return t978;
}

// function: _ZSt9__advanceIPilEvRT_T0_St26random_access_iterator_tag
void void_std____advance_int___long_(int** v979, long v980, struct std__random_access_iterator_tag v981) {
bb982:
  int** __i983;
  long __n984;
  struct std__random_access_iterator_tag unnamed985;
  __i983 = v979;
  __n984 = v980;
  unnamed985 = v981;
    long t986 = __n984;
    _Bool isconst987 = 0;
    _Bool ternary988;
    if (isconst987) {
      long t989 = __n984;
      long c990 = 1;
      _Bool c991 = ((t989 == c990)) ? 1 : 0;
      ternary988 = (_Bool)c991;
    } else {
      _Bool c992 = 0;
      ternary988 = (_Bool)c992;
    }
    if (ternary988) {
      int** t993 = __i983;
      int* t994 = *t993;
      int c995 = 1;
      int* ptr996 = &(t994)[c995];
      *t993 = ptr996;
    } else {
        long t997 = __n984;
        _Bool isconst998 = 0;
        _Bool ternary999;
        if (isconst998) {
          long t1000 = __n984;
          long c1001 = -1;
          _Bool c1002 = ((t1000 == c1001)) ? 1 : 0;
          ternary999 = (_Bool)c1002;
        } else {
          _Bool c1003 = 0;
          ternary999 = (_Bool)c1003;
        }
        if (ternary999) {
          int** t1004 = __i983;
          int* t1005 = *t1004;
          int c1006 = -1;
          int* ptr1007 = &(t1005)[c1006];
          *t1004 = ptr1007;
        } else {
          long t1008 = __n984;
          int** t1009 = __i983;
          int* t1010 = *t1009;
          int* ptr1011 = &(t1010)[t1008];
          *t1009 = ptr1011;
        }
    }
  return;
}

// function: _ZSt7advanceIPilEvRT_T0_
void void_std__advance_int___long_(int** v1012, long v1013) {
bb1014:
  int** __i1015;
  long __n1016;
  long __d1017;
  struct std__random_access_iterator_tag agg_tmp01018;
  __i1015 = v1012;
  __n1016 = v1013;
  long t1019 = __n1016;
  __d1017 = t1019;
  int** t1020 = __i1015;
  long t1021 = __d1017;
  int** t1022 = __i1015;
  struct std__random_access_iterator_tag r1023 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(t1022);
  if (__cir_exc_active) {
    return;
  }
  agg_tmp01018 = r1023;
  struct std__random_access_iterator_tag t1024 = agg_tmp01018;
  void_std____advance_int___long_(t1020, t1021, t1024);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt12__assign_oneILb1EPiS0_EvRT0_RT1_
void void_std____assign_one_true__int___int__(int** v1025, int** v1026) {
bb1027:
  int** __out1028;
  int** __in1029;
  __out1028 = v1025;
  __in1029 = v1026;
    int** t1030 = __in1029;
    int* t1031 = *t1030;
    int t1032 = *t1031;
    int** t1033 = __out1028;
    int* t1034 = *t1033;
    *t1034 = t1032;
  return;
}

// function: _ZSt23__copy_move_backward_a2ILb1EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_backward_a2_true__int___int__(int* v1035, int* v1036, int* v1037) {
bb1038:
  int* __first1039;
  int* __last1040;
  int* __result1041;
  int* __retval1042;
  __first1039 = v1035;
  __last1040 = v1036;
  __result1041 = v1037;
      _Bool r1043 = std__is_constant_evaluated();
      if (r1043) {
      } else {
          long __n1044;
          int* t1045 = __first1039;
          int* t1046 = __last1040;
          long r1047 = std__iterator_traits_int____difference_type_std__distance_int__(t1045, t1046);
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
          __n1044 = r1047;
          long t1048 = __n1044;
          long u1049 = -t1048;
          void_std__advance_int___long_(&__result1041, u1049);
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
            long t1050 = __n1044;
            long c1051 = 1;
            _Bool c1052 = ((t1050 > c1051)) ? 1 : 0;
            if (c1052) {
              int* t1053 = __result1041;
              void* cast1054 = (void*)t1053;
              int* t1055 = __first1039;
              void* cast1056 = (void*)t1055;
              long t1057 = __n1044;
              unsigned long cast1058 = (unsigned long)t1057;
              unsigned long c1059 = 4;
              unsigned long b1060 = cast1058 * c1059;
              void* r1061 = memmove(cast1054, cast1056, b1060);
            } else {
                long t1062 = __n1044;
                long c1063 = 1;
                _Bool c1064 = ((t1062 == c1063)) ? 1 : 0;
                if (c1064) {
                  void_std____assign_one_true__int___int__(&__result1041, &__first1039);
                  if (__cir_exc_active) {
                    int* __cir_eh_ret = (int*)0;
                    return __cir_eh_ret;
                  }
                }
            }
          int* t1065 = __result1041;
          __retval1042 = t1065;
          int* t1066 = __retval1042;
          return t1066;
      }
    while (1) {
      int* t1067 = __first1039;
      int* t1068 = __last1040;
      _Bool c1069 = ((t1067 != t1068)) ? 1 : 0;
      if (!c1069) break;
        int* t1070 = __last1040;
        int c1071 = -1;
        int* ptr1072 = &(t1070)[c1071];
        __last1040 = ptr1072;
        int* t1073 = __result1041;
        int c1074 = -1;
        int* ptr1075 = &(t1073)[c1074];
        __result1041 = ptr1075;
        void_std____assign_one_true__int___int__(&__result1041, &__last1040);
        if (__cir_exc_active) {
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
    }
  int* t1076 = __result1041;
  __retval1042 = t1076;
  int* t1077 = __retval1042;
  return t1077;
}

// function: _ZSt23__copy_move_backward_a1ILb1EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_backward_a1_true__int___int__(int* v1078, int* v1079, int* v1080) {
bb1081:
  int* __first1082;
  int* __last1083;
  int* __result1084;
  int* __retval1085;
  __first1082 = v1078;
  __last1083 = v1079;
  __result1084 = v1080;
  int* t1086 = __first1082;
  int* t1087 = __last1083;
  int* t1088 = __result1084;
  int* r1089 = int__std____copy_move_backward_a2_true__int___int__(t1086, t1087, t1088);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1085 = r1089;
  int* t1090 = __retval1085;
  return t1090;
}

// function: _ZSt22__copy_move_backward_aILb1EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_backward_a_true__int___int__(int* v1091, int* v1092, int* v1093) {
bb1094:
  int* __first1095;
  int* __last1096;
  int* __result1097;
  int* __retval1098;
  __first1095 = v1091;
  __last1096 = v1092;
  __result1097 = v1093;
  int* t1099 = __first1095;
  int* r1100 = int__std____niter_base_int__(t1099);
  int* t1101 = __last1096;
  int* r1102 = int__std____niter_base_int__(t1101);
  int* t1103 = __result1097;
  int* r1104 = int__std____niter_base_int__(t1103);
  int* r1105 = int__std____copy_move_backward_a1_true__int___int__(r1100, r1102, r1104);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r1106 = int__std____niter_wrap_int__(&__result1097, r1105);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1098 = r1106;
  int* t1107 = __retval1098;
  return t1107;
}

// function: _ZSt12__miter_baseIPiET_S1_
int* int__std____miter_base_int__(int* v1108) {
bb1109:
  int* __it1110;
  int* __retval1111;
  __it1110 = v1108;
  int* t1112 = __it1110;
  __retval1111 = t1112;
  int* t1113 = __retval1111;
  return t1113;
}

// function: _ZSt13move_backwardIPiS0_ET0_T_S2_S1_
int* int__std__move_backward_int___int__(int* v1114, int* v1115, int* v1116) {
bb1117:
  int* __first1118;
  int* __last1119;
  int* __result1120;
  int* __retval1121;
  __first1118 = v1114;
  __last1119 = v1115;
  __result1120 = v1116;
  int* t1122 = __first1118;
  int* r1123 = int__std____miter_base_int__(t1122);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* t1124 = __last1119;
  int* r1125 = int__std____miter_base_int__(t1124);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* t1126 = __result1120;
  int* r1127 = int__std____copy_move_backward_a_true__int___int__(r1123, r1125, t1126);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1121 = r1127;
  int* t1128 = __retval1121;
  return t1128;
}

// function: _ZNSt6vectorIiSaIiEE13_M_insert_auxIiEEvN9__gnu_cxx17__normal_iteratorIPiS1_EEOT_
void void_std__vector_int__std__allocator_int______M_insert_aux_int_(struct std__vector_int__std__allocator_int__* v1129, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1130, int* v1131) {
bb1132:
  struct std__vector_int__std__allocator_int__* this1133;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __position1134;
  int* __arg1135;
  this1133 = v1129;
  __position1134 = v1130;
  __arg1135 = v1131;
  struct std__vector_int__std__allocator_int__* t1136 = this1133;
  struct std___Vector_base_int__std__allocator_int__* base1137 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1136 + 0);
  struct std__allocator_int_* base1138 = (struct std__allocator_int_*)((char *)&(base1137->_M_impl) + 0);
  struct std___Vector_base_int__std__allocator_int__* base1139 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1136 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1140 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1139->_M_impl) + 0);
  int* t1141 = base1140->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base1142 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1136 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1143 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1142->_M_impl) + 0);
  int* t1144 = base1143->_M_finish;
  int c1145 = -1;
  int* ptr1146 = &(t1144)[c1145];
  void_std__allocator_traits_std__allocator_int_____construct_int__int_(base1138, t1141, ptr1146);
  struct std___Vector_base_int__std__allocator_int__* base1147 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1136 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1148 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1147->_M_impl) + 0);
  int* t1149 = base1148->_M_finish;
  int c1150 = 1;
  int* ptr1151 = &(t1149)[c1150];
  base1148->_M_finish = ptr1151;
  int** r1152 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__position1134);
  int* t1153 = *r1152;
  struct std___Vector_base_int__std__allocator_int__* base1154 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1136 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1155 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1154->_M_impl) + 0);
  int* t1156 = base1155->_M_finish;
  int c1157 = -2;
  int* ptr1158 = &(t1156)[c1157];
  struct std___Vector_base_int__std__allocator_int__* base1159 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1136 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1160 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1159->_M_impl) + 0);
  int* t1161 = base1160->_M_finish;
  int c1162 = -1;
  int* ptr1163 = &(t1161)[c1162];
  int* r1164 = int__std__move_backward_int___int__(t1153, ptr1158, ptr1163);
  if (__cir_exc_active) {
    return;
  }
  int* t1165 = __arg1135;
  int t1166 = *t1165;
  int* r1167 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__position1134);
  *r1167 = t1166;
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_M_realloc_insertIJiEEEvN9__gnu_cxx17__normal_iteratorIPiS1_EEDpOT_
void void_std__vector_int__std__allocator_int______M_realloc_insert_int_(struct std__vector_int__std__allocator_int__* v1168, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1169, int* v1170) {
bb1171:
  struct std__vector_int__std__allocator_int__* this1172;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __position1173;
  int* __args1174;
  unsigned long __len1175;
  int* __old_start1176;
  int* __old_finish1177;
  unsigned long __elems_before1178;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp01179;
  int* __new_start1180;
  int* __new_finish1181;
  this1172 = v1168;
  __position1173 = v1169;
  __args1174 = v1170;
  struct std__vector_int__std__allocator_int__* t1182 = this1172;
  unsigned long c1183 = 1;
  char* cast1184 = (char*)&(_str_5);
  unsigned long r1185 = std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(t1182, c1183, cast1184);
  if (__cir_exc_active) {
    return;
  }
  __len1175 = r1185;
    unsigned long t1186 = __len1175;
    unsigned long c1187 = 0;
    _Bool c1188 = ((t1186 <= c1187)) ? 1 : 0;
    if (c1188) {
      __builtin_unreachable();
    }
  struct std___Vector_base_int__std__allocator_int__* base1189 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1182 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1190 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1189->_M_impl) + 0);
  int* t1191 = base1190->_M_start;
  __old_start1176 = t1191;
  struct std___Vector_base_int__std__allocator_int__* base1192 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1182 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1193 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1192->_M_impl) + 0);
  int* t1194 = base1193->_M_finish;
  __old_finish1177 = t1194;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1195 = std__vector_int__std__allocator_int_____begin(t1182);
  ref_tmp01179 = r1195;
  long r1196 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__position1173, &ref_tmp01179);
  unsigned long cast1197 = (unsigned long)r1196;
  __elems_before1178 = cast1197;
  struct std___Vector_base_int__std__allocator_int__* base1198 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1182 + 0);
  unsigned long t1199 = __len1175;
  int* r1200 = std___Vector_base_int__std__allocator_int______M_allocate(base1198, t1199);
  if (__cir_exc_active) {
    return;
  }
  __new_start1180 = r1200;
  int* t1201 = __new_start1180;
  __new_finish1181 = t1201;
    struct std__vector_int__std__allocator_int_____Guard_alloc __guard1202;
    int* ref_tmp11203;
    int* t1204 = __new_start1180;
    unsigned long t1205 = __len1175;
    struct std___Vector_base_int__std__allocator_int__* base1206 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1182 + 0);
    std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(&__guard1202, t1204, t1205, base1206);
    if (__cir_exc_active) {
      return;
    }
      struct std___Vector_base_int__std__allocator_int__* base1207 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1182 + 0);
      struct std__allocator_int_* base1208 = (struct std__allocator_int_*)((char *)&(base1207->_M_impl) + 0);
      int* t1209 = __new_start1180;
      unsigned long t1210 = __elems_before1178;
      int* ptr1211 = &(t1209)[t1210];
      ref_tmp11203 = ptr1211;
      int* r1212 = auto_std____to_address_int__(&ref_tmp11203);
      int* t1213 = __args1174;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_(base1208, r1212, t1213);
        int* t1214 = __old_start1176;
        int** r1215 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__position1173);
        int* t1216 = *r1215;
        int* t1217 = __new_start1180;
        struct std___Vector_base_int__std__allocator_int__* base1218 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1182 + 0);
        struct std__allocator_int_* r1219 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1218);
        int* r1220 = std__vector_int__std__allocator_int______S_relocate(t1214, t1216, t1217, r1219);
        __new_finish1181 = r1220;
        int* t1221 = __new_finish1181;
        int c1222 = 1;
        int* ptr1223 = &(t1221)[c1222];
        __new_finish1181 = ptr1223;
        int** r1224 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__position1173);
        int* t1225 = *r1224;
        int* t1226 = __old_finish1177;
        int* t1227 = __new_finish1181;
        struct std___Vector_base_int__std__allocator_int__* base1228 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1182 + 0);
        struct std__allocator_int_* r1229 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1228);
        int* r1230 = std__vector_int__std__allocator_int______S_relocate(t1225, t1226, t1227, r1229);
        __new_finish1181 = r1230;
      int* t1231 = __old_start1176;
      __guard1202._M_storage = t1231;
      struct std___Vector_base_int__std__allocator_int__* base1232 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1182 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1233 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1232->_M_impl) + 0);
      int* t1234 = base1233->_M_end_of_storage;
      int* t1235 = __old_start1176;
      long diff1236 = t1234 - t1235;
      unsigned long cast1237 = (unsigned long)diff1236;
      __guard1202._M_len = cast1237;
    {
      std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(&__guard1202);
    }
  int* t1238 = __new_start1180;
  struct std___Vector_base_int__std__allocator_int__* base1239 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1182 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1240 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1239->_M_impl) + 0);
  base1240->_M_start = t1238;
  int* t1241 = __new_finish1181;
  struct std___Vector_base_int__std__allocator_int__* base1242 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1182 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1243 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1242->_M_impl) + 0);
  base1243->_M_finish = t1241;
  int* t1244 = __new_start1180;
  unsigned long t1245 = __len1175;
  int* ptr1246 = &(t1244)[t1245];
  struct std___Vector_base_int__std__allocator_int__* base1247 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1182 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1248 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1247->_M_impl) + 0);
  base1248->_M_end_of_storage = ptr1246;
  return;
}

// function: _ZNSt6vectorIiSaIiEE14_M_insert_rvalEN9__gnu_cxx17__normal_iteratorIPKiS1_EEOi
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int______M_insert_rval(struct std__vector_int__std__allocator_int__* v1249, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v1250, int* v1251) {
bb1252:
  struct std__vector_int__std__allocator_int__* this1253;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __position1254;
  int* __v1255;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1256;
  long __n1257;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp01258;
  int* ref_tmp41259;
  this1253 = v1249;
  __position1254 = v1250;
  __v1255 = v1251;
  struct std__vector_int__std__allocator_int__* t1260 = this1253;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r1261 = std__vector_int__std__allocator_int_____cbegin___const(t1260);
  ref_tmp01258 = r1261;
  long r1262 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int_const___std__vector_int__std__allocator_int_____(&__position1254, &ref_tmp01258);
  __n1257 = r1262;
    struct std___Vector_base_int__std__allocator_int__* base1263 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1260 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1264 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1263->_M_impl) + 0);
    int* t1265 = base1264->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base1266 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1260 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1267 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1266->_M_impl) + 0);
    int* t1268 = base1267->_M_end_of_storage;
    _Bool c1269 = ((t1265 != t1268)) ? 1 : 0;
    if (c1269) {
        struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp11270;
        struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r1271 = std__vector_int__std__allocator_int_____cend___const(t1260);
        ref_tmp11270 = r1271;
        _Bool r1272 = _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__position1254, &ref_tmp11270);
        if (r1272) {
          struct std___Vector_base_int__std__allocator_int__* base1273 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1260 + 0);
          struct std__allocator_int_* base1274 = (struct std__allocator_int_*)((char *)&(base1273->_M_impl) + 0);
          struct std___Vector_base_int__std__allocator_int__* base1275 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1260 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1276 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1275->_M_impl) + 0);
          int* t1277 = base1276->_M_finish;
          int* t1278 = __v1255;
          void_std__allocator_traits_std__allocator_int_____construct_int__int_(base1274, t1277, t1278);
          struct std___Vector_base_int__std__allocator_int__* base1279 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1260 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1280 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1279->_M_impl) + 0);
          int* t1281 = base1280->_M_finish;
          int c1282 = 1;
          int* ptr1283 = &(t1281)[c1282];
          base1280->_M_finish = ptr1283;
        } else {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01284;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp21285;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1286 = std__vector_int__std__allocator_int_____begin(t1260);
          ref_tmp21285 = r1286;
          long t1287 = __n1257;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1288 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&ref_tmp21285, t1287);
          agg_tmp01284 = r1288;
          int* t1289 = __v1255;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1290 = agg_tmp01284;
          void_std__vector_int__std__allocator_int______M_insert_aux_int_(t1260, t1290, t1289);
          if (__cir_exc_active) {
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
        }
    } else {
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11291;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp31292;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1293 = std__vector_int__std__allocator_int_____begin(t1260);
      ref_tmp31292 = r1293;
      long t1294 = __n1257;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1295 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&ref_tmp31292, t1294);
      agg_tmp11291 = r1295;
      int* t1296 = __v1255;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1297 = agg_tmp11291;
      void_std__vector_int__std__allocator_int______M_realloc_insert_int_(t1260, t1297, t1296);
      if (__cir_exc_active) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
    }
  struct std___Vector_base_int__std__allocator_int__* base1298 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1260 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1299 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1298->_M_impl) + 0);
  int* t1300 = base1299->_M_start;
  long t1301 = __n1257;
  int* ptr1302 = &(t1300)[t1301];
  ref_tmp41259 = ptr1302;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval1256, &ref_tmp41259);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1303 = __retval1256;
  return t1303;
}

// function: _ZNSt6vectorIiSaIiEE6insertEN9__gnu_cxx17__normal_iteratorIPKiS1_EEOi
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____insert(struct std__vector_int__std__allocator_int__* v1304, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v1305, int* v1306) {
bb1307:
  struct std__vector_int__std__allocator_int__* this1308;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __position1309;
  int* __x1310;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1311;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp01312;
  this1308 = v1304;
  __position1309 = v1305;
  __x1310 = v1306;
  struct std__vector_int__std__allocator_int__* t1313 = this1308;
  agg_tmp01312 = __position1309; // copy
  int* t1314 = __x1310;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t1315 = agg_tmp01312;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1316 = std__vector_int__std__allocator_int______M_insert_rval(t1313, t1315, t1314);
  if (__cir_exc_active) {
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1311 = r1316;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1317 = __retval1311;
  return t1317;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEplEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1318, long v1319) {
bb1320:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this1321;
  long __n1322;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1323;
  int* ref_tmp01324;
  this1321 = v1318;
  __n1322 = v1319;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1325 = this1321;
  int* t1326 = t1325->_M_current;
  long t1327 = __n1322;
  int* ptr1328 = &(t1326)[t1327];
  ref_tmp01324 = ptr1328;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval1323, &ref_tmp01324);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1329 = __retval1323;
  return t1329;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2IPiQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE
void _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2IPiQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v1330, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1331) {
bb1332:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this1333;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __i1334;
  this1333 = v1330;
  __i1334 = v1331;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t1335 = this1333;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1336 = __i1334;
  int** r1337 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t1336);
  int* t1338 = *r1337;
  t1335->_M_current = t1338;
  return;
}

// function: _ZNSt6vectorIiSaIiEE14_M_fill_appendEmRKi
void std__vector_int__std__allocator_int______M_fill_append(struct std__vector_int__std__allocator_int__* v1339, unsigned long v1340, int* v1341) {
bb1342:
  struct std__vector_int__std__allocator_int__* this1343;
  unsigned long __n1344;
  int* __x1345;
  this1343 = v1339;
  __n1344 = v1340;
  __x1345 = v1341;
  struct std__vector_int__std__allocator_int__* t1346 = this1343;
    struct std___Vector_base_int__std__allocator_int__* base1347 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1346 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1348 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1347->_M_impl) + 0);
    int* t1349 = base1348->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int__* base1350 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1346 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1351 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1350->_M_impl) + 0);
    int* t1352 = base1351->_M_finish;
    long diff1353 = t1349 - t1352;
    unsigned long cast1354 = (unsigned long)diff1353;
    unsigned long t1355 = __n1344;
    _Bool c1356 = ((cast1354 >= t1355)) ? 1 : 0;
    if (c1356) {
      struct std___Vector_base_int__std__allocator_int__* base1357 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1346 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1358 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1357->_M_impl) + 0);
      int* t1359 = base1358->_M_finish;
      unsigned long t1360 = __n1344;
      int* t1361 = __x1345;
      struct std___Vector_base_int__std__allocator_int__* base1362 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1346 + 0);
      struct std__allocator_int_* r1363 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1362);
      int* r1364 = int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(t1359, t1360, t1361, r1363);
      if (__cir_exc_active) {
        return;
      }
      struct std___Vector_base_int__std__allocator_int__* base1365 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1346 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1366 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1365->_M_impl) + 0);
      base1366->_M_finish = r1364;
    } else {
      int* __old_start1367;
      int* __old_finish1368;
      unsigned long __old_size1369;
      unsigned long __len1370;
      int* __new_start1371;
      int* __new_finish1372;
      struct std___Vector_base_int__std__allocator_int__* base1373 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1346 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1374 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1373->_M_impl) + 0);
      int* t1375 = base1374->_M_start;
      __old_start1367 = t1375;
      struct std___Vector_base_int__std__allocator_int__* base1376 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1346 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1377 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1376->_M_impl) + 0);
      int* t1378 = base1377->_M_finish;
      __old_finish1368 = t1378;
      int* t1379 = __old_finish1368;
      int* t1380 = __old_start1367;
      long diff1381 = t1379 - t1380;
      unsigned long cast1382 = (unsigned long)diff1381;
      __old_size1369 = cast1382;
      unsigned long t1383 = __n1344;
      char* cast1384 = (char*)&(_str_7);
      unsigned long r1385 = std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(t1346, t1383, cast1384);
      if (__cir_exc_active) {
        return;
      }
      __len1370 = r1385;
      struct std___Vector_base_int__std__allocator_int__* base1386 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1346 + 0);
      unsigned long t1387 = __len1370;
      int* r1388 = std___Vector_base_int__std__allocator_int______M_allocate(base1386, t1387);
      if (__cir_exc_active) {
        return;
      }
      __new_start1371 = r1388;
      int* t1389 = __new_start1371;
      unsigned long t1390 = __old_size1369;
      int* ptr1391 = &(t1389)[t1390];
      __new_finish1372 = ptr1391;
          int* t1393 = __new_finish1372;
          unsigned long t1394 = __n1344;
          int* t1395 = __x1345;
          struct std___Vector_base_int__std__allocator_int__* base1396 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1346 + 0);
          struct std__allocator_int_* r1397 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1396);
          int* r1398 = int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(t1393, t1394, t1395, r1397);
          if (__cir_exc_active) {
            goto cir_try_dispatch1392;
          }
          __new_finish1372 = r1398;
          int* t1399 = __old_start1367;
          int* t1400 = __old_finish1368;
          int* t1401 = __new_start1371;
          struct std___Vector_base_int__std__allocator_int__* base1402 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1346 + 0);
          struct std__allocator_int_* r1403 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1402);
          int* r1404 = int__std____uninitialized_move_if_noexcept_a_int___int___std__allocator_int___(t1399, t1400, t1401, r1403);
          if (__cir_exc_active) {
            goto cir_try_dispatch1392;
          }
        cir_try_dispatch1392: ;
        if (__cir_exc_active) {
        {
          int ca_tok1405 = 0;
          void* ca_exn1406 = (void*)__cir_exc_ptr;
          __cir_exc_active = 0;
            int* t1407 = __new_start1371;
            unsigned long t1408 = __old_size1369;
            int* ptr1409 = &(t1407)[t1408];
            int* t1410 = __new_finish1372;
            struct std___Vector_base_int__std__allocator_int__* base1411 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1346 + 0);
            struct std__allocator_int_* r1412 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1411);
            void_std___Destroy_int___int_(ptr1409, t1410, r1412);
            if (__cir_exc_active) {
              {
                if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
              }
              return;
            }
            struct std___Vector_base_int__std__allocator_int__* base1413 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1346 + 0);
            int* t1414 = __new_start1371;
            unsigned long t1415 = __len1370;
            std___Vector_base_int__std__allocator_int______M_deallocate(base1413, t1414, t1415);
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
      int* t1416 = __old_start1367;
      int* t1417 = __old_finish1368;
      struct std___Vector_base_int__std__allocator_int__* base1418 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1346 + 0);
      struct std__allocator_int_* r1419 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1418);
      void_std___Destroy_int___int_(t1416, t1417, r1419);
      if (__cir_exc_active) {
        return;
      }
      struct std___Vector_base_int__std__allocator_int__* base1420 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1346 + 0);
      int* t1421 = __old_start1367;
      struct std___Vector_base_int__std__allocator_int__* base1422 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1346 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1423 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1422->_M_impl) + 0);
      int* t1424 = base1423->_M_end_of_storage;
      int* t1425 = __old_start1367;
      long diff1426 = t1424 - t1425;
      unsigned long cast1427 = (unsigned long)diff1426;
      std___Vector_base_int__std__allocator_int______M_deallocate(base1420, t1421, cast1427);
      if (__cir_exc_active) {
        return;
      }
      int* t1428 = __new_start1371;
      struct std___Vector_base_int__std__allocator_int__* base1429 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1346 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1430 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1429->_M_impl) + 0);
      base1430->_M_start = t1428;
      int* t1431 = __new_finish1372;
      struct std___Vector_base_int__std__allocator_int__* base1432 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1346 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1433 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1432->_M_impl) + 0);
      base1433->_M_finish = t1431;
      int* t1434 = __new_start1371;
      unsigned long t1435 = __len1370;
      int* ptr1436 = &(t1434)[t1435];
      struct std___Vector_base_int__std__allocator_int__* base1437 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1346 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1438 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1437->_M_impl) + 0);
      base1438->_M_end_of_storage = ptr1436;
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE16_Temporary_valueC2IJRKiEEEPS1_DpOT_
void std__vector_int__std__allocator_int______Temporary_value___Temporary_value_int_const__(struct std__vector_int__std__allocator_int_____Temporary_value* v1439, struct std__vector_int__std__allocator_int__* v1440, int* v1441) {
bb1442:
  struct std__vector_int__std__allocator_int_____Temporary_value* this1443;
  struct std__vector_int__std__allocator_int__* __vec1444;
  int* __args1445;
  this1443 = v1439;
  __vec1444 = v1440;
  __args1445 = v1441;
  struct std__vector_int__std__allocator_int_____Temporary_value* t1446 = this1443;
  struct std__vector_int__std__allocator_int__* t1447 = __vec1444;
  t1446->_M_this = t1447;
  std__vector_int__std__allocator_int______Temporary_value___Storage___Storage(&t1446->_M_storage);
  if (__cir_exc_active) {
    return;
  }
    struct std__vector_int__std__allocator_int__* t1448 = t1446->_M_this;
    struct std___Vector_base_int__std__allocator_int__* base1449 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1448 + 0);
    struct std__allocator_int_* base1450 = (struct std__allocator_int_*)((char *)&(base1449->_M_impl) + 0);
    int* r1451 = std__vector_int__std__allocator_int______Temporary_value___M_ptr(t1446);
    int* t1452 = __args1445;
    void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(base1450, r1451, t1452);
  return;
}

// function: _ZNSt6vectorIiSaIiEE16_Temporary_value6_M_valEv
int* std__vector_int__std__allocator_int______Temporary_value___M_val(struct std__vector_int__std__allocator_int_____Temporary_value* v1453) {
bb1454:
  struct std__vector_int__std__allocator_int_____Temporary_value* this1455;
  int* __retval1456;
  this1455 = v1453;
  struct std__vector_int__std__allocator_int_____Temporary_value* t1457 = this1455;
  __retval1456 = &t1457->_M_storage._M_val;
  int* t1458 = __retval1456;
  return t1458;
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1459, int** v1460) {
bb1461:
  struct std___UninitDestroyGuard_int____void_* this1462;
  int** __first1463;
  this1462 = v1459;
  __first1463 = v1460;
  struct std___UninitDestroyGuard_int____void_* t1464 = this1462;
  int** t1465 = __first1463;
  int* t1466 = *t1465;
  t1464->_M_first = t1466;
  int** t1467 = __first1463;
  t1464->_M_cur = t1467;
  return;
}

// function: _ZNKRSt13move_iteratorIPiE4baseEv
int** std__move_iterator_int____base___const__(struct std__move_iterator_int___* v1468) {
bb1469:
  struct std__move_iterator_int___* this1470;
  int** __retval1471;
  this1470 = v1468;
  struct std__move_iterator_int___* t1472 = this1470;
  __retval1471 = &t1472->_M_current;
  int** t1473 = __retval1471;
  return t1473;
}

// function: _ZSteqIPiEbRKSt13move_iteratorIT_ES5_
_Bool bool_std__operator___int__(struct std__move_iterator_int___* v1474, struct std__move_iterator_int___* v1475) {
bb1476:
  struct std__move_iterator_int___* __x1477;
  struct std__move_iterator_int___* __y1478;
  _Bool __retval1479;
  __x1477 = v1474;
  __y1478 = v1475;
  struct std__move_iterator_int___* t1480 = __x1477;
  int** r1481 = std__move_iterator_int____base___const__(t1480);
  int* t1482 = *r1481;
  struct std__move_iterator_int___* t1483 = __y1478;
  int** r1484 = std__move_iterator_int____base___const__(t1483);
  int* t1485 = *r1484;
  _Bool c1486 = ((t1482 == t1485)) ? 1 : 0;
  __retval1479 = c1486;
  _Bool t1487 = __retval1479;
  return t1487;
}

// function: _ZSt10_ConstructIiJiEEvPT_DpOT0_
void void_std___Construct_int__int_(int* v1488, int* v1489) {
bb1490:
  int* __p1491;
  int* __args1492;
  __p1491 = v1488;
  __args1492 = v1489;
    _Bool r1493 = std____is_constant_evaluated();
    if (r1493) {
      int* t1494 = __p1491;
      int* t1495 = __args1492;
      int* r1496 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t1494, t1495);
      return;
    }
  int* t1497 = __p1491;
  void* cast1498 = (void*)t1497;
  int* cast1499 = (int*)cast1498;
  int* t1500 = __args1492;
  int t1501 = *t1500;
  *cast1499 = t1501;
  return;
}

// function: _ZNKSt6ranges7__imove9_IterMoveclIRKPiQoo11__adl_imoveIT_ErqTDTdeclsr3stdE7declvalIS6_EEEEEENS1_8__resultIS6_E4typeEOS6_
int* _ZNKSt6ranges7__imove9_IterMoveclIRKPiQoo11__adl_imoveIT_ErqTDTdeclsr3stdE7declvalIS6_EEEEEENS1_8__resultIS6_E4typeEOS6_(struct std__ranges____imove___IterMove* v1502, int** v1503) {
bb1504:
  struct std__ranges____imove___IterMove* this1505;
  int** __e1506;
  int* __retval1507;
  this1505 = v1502;
  __e1506 = v1503;
  struct std__ranges____imove___IterMove* t1508 = this1505;
      int** t1509 = __e1506;
      int* t1510 = *t1509;
      __retval1507 = t1510;
      int* t1511 = __retval1507;
      return t1511;
  abort();
}

// function: _ZNKSt13move_iteratorIPiEdeEv
int* std__move_iterator_int____operator____const(struct std__move_iterator_int___* v1512) {
bb1513:
  struct std__move_iterator_int___* this1514;
  int* __retval1515;
  this1514 = v1512;
  struct std__move_iterator_int___* t1516 = this1514;
  int* r1517 = _ZNKSt6ranges7__imove9_IterMoveclIRKPiQoo11__adl_imoveIT_ErqTDTdeclsr3stdE7declvalIS6_EEEEEENS1_8__resultIS6_E4typeEOS6_(&_ZNSt6ranges4_Cpo9iter_moveE, &t1516->_M_current);
  __retval1515 = r1517;
  int* t1518 = __retval1515;
  return t1518;
}

// function: _ZNSt13move_iteratorIPiEppEv
struct std__move_iterator_int___* std__move_iterator_int____operator__(struct std__move_iterator_int___* v1519) {
bb1520:
  struct std__move_iterator_int___* this1521;
  struct std__move_iterator_int___* __retval1522;
  this1521 = v1519;
  struct std__move_iterator_int___* t1523 = this1521;
  int* t1524 = t1523->_M_current;
  int c1525 = 1;
  int* ptr1526 = &(t1524)[c1525];
  t1523->_M_current = ptr1526;
  __retval1522 = t1523;
  struct std__move_iterator_int___* t1527 = __retval1522;
  return t1527;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v1528) {
bb1529:
  struct std___UninitDestroyGuard_int____void_* this1530;
  this1530 = v1528;
  struct std___UninitDestroyGuard_int____void_* t1531 = this1530;
  int** c1532 = ((void*)0);
  t1531->_M_cur = c1532;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1533) {
bb1534:
  struct std___UninitDestroyGuard_int____void_* this1535;
  this1535 = v1533;
  struct std___UninitDestroyGuard_int____void_* t1536 = this1535;
    int** t1537 = t1536->_M_cur;
    int** c1538 = ((void*)0);
    _Bool c1539 = ((t1537 != c1538)) ? 1 : 0;
    if (c1539) {
      int* t1540 = t1536->_M_first;
      int** t1541 = t1536->_M_cur;
      int* t1542 = *t1541;
      void_std___Destroy_int__(t1540, t1542);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZSt16__do_uninit_copyISt13move_iteratorIPiES2_S1_ET1_T_T0_S3_
int* int__std____do_uninit_copy_std__move_iterator_int____std__move_iterator_int____int__(struct std__move_iterator_int___ v1543, struct std__move_iterator_int___ v1544, int* v1545) {
bb1546:
  struct std__move_iterator_int___ __first1547;
  struct std__move_iterator_int___ __last1548;
  int* __result1549;
  int* __retval1550;
  struct std___UninitDestroyGuard_int____void_ __guard1551;
  __first1547 = v1543;
  __last1548 = v1544;
  __result1549 = v1545;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard1551, &__result1549);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
      while (1) {
        _Bool r1553 = bool_std__operator___int__(&__first1547, &__last1548);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1551);
          }
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
        _Bool u1554 = !r1553;
        if (!u1554) break;
        int* t1555 = __result1549;
        int* r1556 = std__move_iterator_int____operator____const(&__first1547);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1551);
          }
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
        void_std___Construct_int__int_(t1555, r1556);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1551);
          }
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
      for_step1552: ;
        struct std__move_iterator_int___* r1557 = std__move_iterator_int____operator__(&__first1547);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1551);
          }
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
        int* t1558 = __result1549;
        int c1559 = 1;
        int* ptr1560 = &(t1558)[c1559];
        __result1549 = ptr1560;
      }
    std___UninitDestroyGuard_int___void___release(&__guard1551);
    if (__cir_exc_active) {
      {
        std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1551);
      }
      int* __cir_eh_ret = (int*)0;
      return __cir_eh_ret;
    }
    int* t1561 = __result1549;
    __retval1550 = t1561;
    int* t1562 = __retval1550;
    int* ret_val1563 = t1562;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1551);
    }
    return ret_val1563;
  abort();
}

// function: _ZSt18uninitialized_copyISt13move_iteratorIPiES1_ET0_T_S4_S3_
int* int__std__uninitialized_copy_std__move_iterator_int____int__(struct std__move_iterator_int___ v1564, struct std__move_iterator_int___ v1565, int* v1566) {
bb1567:
  struct std__move_iterator_int___ __first1568;
  struct std__move_iterator_int___ __last1569;
  int* __result1570;
  int* __retval1571;
  __first1568 = v1564;
  __last1569 = v1565;
  __result1570 = v1566;
        struct std__move_iterator_int___ agg_tmp01572;
        struct std__move_iterator_int___ agg_tmp11573;
        agg_tmp01572 = __first1568; // copy
        agg_tmp11573 = __last1569; // copy
        int* t1574 = __result1570;
        struct std__move_iterator_int___ t1575 = agg_tmp01572;
        struct std__move_iterator_int___ t1576 = agg_tmp11573;
        int* r1577 = int__std____do_uninit_copy_std__move_iterator_int____std__move_iterator_int____int__(t1575, t1576, t1574);
        if (__cir_exc_active) {
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
        __retval1571 = r1577;
        int* t1578 = __retval1571;
        return t1578;
  abort();
}

// function: _ZSt22__uninitialized_copy_aISt13move_iteratorIPiES2_S1_iET1_T_T0_S3_RSaIT2_E
int* int__std____uninitialized_copy_a_std__move_iterator_int____std__move_iterator_int____int___int_(struct std__move_iterator_int___ v1579, struct std__move_iterator_int___ v1580, int* v1581, struct std__allocator_int_* v1582) {
bb1583:
  struct std__move_iterator_int___ __first1584;
  struct std__move_iterator_int___ __last1585;
  int* __result1586;
  struct std__allocator_int_* unnamed1587;
  int* __retval1588;
  __first1584 = v1579;
  __last1585 = v1580;
  __result1586 = v1581;
  unnamed1587 = v1582;
    _Bool r1589 = std__is_constant_evaluated();
    if (r1589) {
      struct std__move_iterator_int___ agg_tmp01590;
      struct std__move_iterator_int___ agg_tmp11591;
      agg_tmp01590 = __first1584; // copy
      agg_tmp11591 = __last1585; // copy
      int* t1592 = __result1586;
      struct std__move_iterator_int___ t1593 = agg_tmp01590;
      struct std__move_iterator_int___ t1594 = agg_tmp11591;
      int* r1595 = int__std____do_uninit_copy_std__move_iterator_int____std__move_iterator_int____int__(t1593, t1594, t1592);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      __retval1588 = r1595;
      int* t1596 = __retval1588;
      return t1596;
    }
    struct std__move_iterator_int___ agg_tmp21597;
    struct std__move_iterator_int___ agg_tmp31598;
    agg_tmp21597 = __first1584; // copy
    agg_tmp31598 = __last1585; // copy
    int* t1599 = __result1586;
    struct std__move_iterator_int___ t1600 = agg_tmp21597;
    struct std__move_iterator_int___ t1601 = agg_tmp31598;
    int* r1602 = int__std__uninitialized_copy_std__move_iterator_int____int__(t1600, t1601, t1599);
    if (__cir_exc_active) {
      int* __cir_eh_ret = (int*)0;
      return __cir_eh_ret;
    }
    __retval1588 = r1602;
    int* t1603 = __retval1588;
    return t1603;
  abort();
}

// function: _ZNSt13move_iteratorIPiEC2ES0_
void std__move_iterator_int____move_iterator(struct std__move_iterator_int___* v1604, int* v1605) {
bb1606:
  struct std__move_iterator_int___* this1607;
  int* __i1608;
  this1607 = v1604;
  __i1608 = v1605;
  struct std__move_iterator_int___* t1609 = this1607;
  struct std____detail____move_iter_cat_int___* base1610 = (struct std____detail____move_iter_cat_int___*)((char *)t1609 + 0);
  int* t1611 = __i1608;
  t1609->_M_current = t1611;
  return;
}

// function: _ZSt18make_move_iteratorIPiESt13move_iteratorIT_ES2_
struct std__move_iterator_int___ std__move_iterator_int___std__make_move_iterator_int__(int* v1612) {
bb1613:
  int* __i1614;
  struct std__move_iterator_int___ __retval1615;
  __i1614 = v1612;
  int* t1616 = __i1614;
  std__move_iterator_int____move_iterator(&__retval1615, t1616);
  if (__cir_exc_active) {
    struct std__move_iterator_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std__move_iterator_int___ t1617 = __retval1615;
  return t1617;
}

// function: _ZSt22__uninitialized_move_aIPiS0_SaIiEET0_T_S3_S2_RT1_
int* int__std____uninitialized_move_a_int___int___std__allocator_int___(int* v1618, int* v1619, int* v1620, struct std__allocator_int_* v1621) {
bb1622:
  int* __first1623;
  int* __last1624;
  int* __result1625;
  struct std__allocator_int_* __alloc1626;
  int* __retval1627;
  struct std__move_iterator_int___ agg_tmp01628;
  struct std__move_iterator_int___ agg_tmp11629;
  __first1623 = v1618;
  __last1624 = v1619;
  __result1625 = v1620;
  __alloc1626 = v1621;
  int* t1630 = __first1623;
  struct std__move_iterator_int___ r1631 = std__move_iterator_int___std__make_move_iterator_int__(t1630);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  agg_tmp01628 = r1631;
  int* t1632 = __last1624;
  struct std__move_iterator_int___ r1633 = std__move_iterator_int___std__make_move_iterator_int__(t1632);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  agg_tmp11629 = r1633;
  int* t1634 = __result1625;
  struct std__allocator_int_* t1635 = __alloc1626;
  struct std__move_iterator_int___ t1636 = agg_tmp01628;
  struct std__move_iterator_int___ t1637 = agg_tmp11629;
  int* r1638 = int__std____uninitialized_copy_a_std__move_iterator_int____std__move_iterator_int____int___int_(t1636, t1637, t1634, t1635);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1627 = r1638;
  int* t1639 = __retval1627;
  return t1639;
}

// function: _ZSt9__fill_a1IPiiEvT_S1_RKT0_
void void_std____fill_a1_int___int_(int* v1640, int* v1641, int* v1642) {
bb1643:
  int* __first1644;
  int* __last1645;
  int* __value1646;
  _Bool __load_outside_loop1647;
  int __val1648;
  __first1644 = v1640;
  __last1645 = v1641;
  __value1646 = v1642;
  _Bool c1649 = 1;
  __load_outside_loop1647 = c1649;
  int* t1650 = __value1646;
  int t1651 = *t1650;
  __val1648 = t1651;
    while (1) {
      int* t1653 = __first1644;
      int* t1654 = __last1645;
      _Bool c1655 = ((t1653 != t1654)) ? 1 : 0;
      if (!c1655) break;
      int t1656 = __val1648;
      int* t1657 = __first1644;
      *t1657 = t1656;
    for_step1652: ;
      int* t1658 = __first1644;
      int c1659 = 1;
      int* ptr1660 = &(t1658)[c1659];
      __first1644 = ptr1660;
    }
  return;
}

// function: _ZSt8__fill_aIPiiEvT_S1_RKT0_
void void_std____fill_a_int___int_(int* v1661, int* v1662, int* v1663) {
bb1664:
  int* __first1665;
  int* __last1666;
  int* __value1667;
  __first1665 = v1661;
  __last1666 = v1662;
  __value1667 = v1663;
  int* t1668 = __first1665;
  int* t1669 = __last1666;
  int* t1670 = __value1667;
  void_std____fill_a1_int___int_(t1668, t1669, t1670);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt4fillIPiiEvT_S1_RKT0_
void void_std__fill_int___int_(int* v1671, int* v1672, int* v1673) {
bb1674:
  int* __first1675;
  int* __last1676;
  int* __value1677;
  __first1675 = v1671;
  __last1676 = v1672;
  __value1677 = v1673;
  int* t1678 = __first1675;
  int* t1679 = __last1676;
  int* t1680 = __value1677;
  void_std____fill_a_int___int_(t1678, t1679, t1680);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt10_ConstructIiJRKiEEvPT_DpOT0_
void void_std___Construct_int__int_const__(int* v1681, int* v1682) {
bb1683:
  int* __p1684;
  int* __args1685;
  __p1684 = v1681;
  __args1685 = v1682;
    _Bool r1686 = std____is_constant_evaluated();
    if (r1686) {
      int* t1687 = __p1684;
      int* t1688 = __args1685;
      int* r1689 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1687, t1688);
      return;
    }
  int* t1690 = __p1684;
  void* cast1691 = (void*)t1690;
  int* cast1692 = (int*)cast1691;
  int* t1693 = __args1685;
  int t1694 = *t1693;
  *cast1692 = t1694;
  return;
}

// function: _ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_
int* int__std____do_uninit_fill_n_int___unsigned_long__int_(int* v1695, unsigned long v1696, int* v1697) {
bb1698:
  int* __first1699;
  unsigned long __n1700;
  int* __x1701;
  int* __retval1702;
  struct std___UninitDestroyGuard_int____void_ __guard1703;
  __first1699 = v1695;
  __n1700 = v1696;
  __x1701 = v1697;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard1703, &__first1699);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
        do {
              unsigned long t1704 = __n1700;
              unsigned long c1705 = 0;
              _Bool c1706 = ((t1704 >= c1705)) ? 1 : 0;
              _Bool u1707 = !c1706;
              if (u1707) {
                char* cast1708 = (char*)&(_str_8);
                int c1709 = 463;
                char* cast1710 = (char*)&(__PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_);
                char* cast1711 = (char*)&(_str_9);
                std____glibcxx_assert_fail(cast1708, c1709, cast1710, cast1711);
              }
          _Bool c1712 = 0;
          if (!c1712) break;
        } while (1);
      while (1) {
        unsigned long t1714 = __n1700;
        unsigned long u1715 = t1714 - 1;
        __n1700 = u1715;
        _Bool cast1716 = (_Bool)t1714;
        if (!cast1716) break;
        int* t1717 = __first1699;
        int* t1718 = __x1701;
        void_std___Construct_int__int_const__(t1717, t1718);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1703);
          }
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
      for_step1713: ;
        int* t1719 = __first1699;
        int c1720 = 1;
        int* ptr1721 = &(t1719)[c1720];
        __first1699 = ptr1721;
      }
    std___UninitDestroyGuard_int___void___release(&__guard1703);
    if (__cir_exc_active) {
      {
        std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1703);
      }
      int* __cir_eh_ret = (int*)0;
      return __cir_eh_ret;
    }
    int* t1722 = __first1699;
    __retval1702 = t1722;
    int* t1723 = __retval1702;
    int* ret_val1724 = t1723;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1703);
    }
    return ret_val1724;
  abort();
}

// function: _ZSt20uninitialized_fill_nIPimiET_S1_T0_RKT1_
int* int__std__uninitialized_fill_n_int___unsigned_long__int_(int* v1725, unsigned long v1726, int* v1727) {
bb1728:
  int* __first1729;
  unsigned long __n1730;
  int* __x1731;
  int* __retval1732;
  __first1729 = v1725;
  __n1730 = v1726;
  __x1731 = v1727;
  int* t1733 = __first1729;
  unsigned long t1734 = __n1730;
  int* t1735 = __x1731;
  int* r1736 = int__std____do_uninit_fill_n_int___unsigned_long__int_(t1733, t1734, t1735);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1732 = r1736;
  int* t1737 = __retval1732;
  return t1737;
}

// function: _ZSt24__uninitialized_fill_n_aIPimiiET_S1_T0_RKT1_RSaIT2_E
int* int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(int* v1738, unsigned long v1739, int* v1740, struct std__allocator_int_* v1741) {
bb1742:
  int* __first1743;
  unsigned long __n1744;
  int* __x1745;
  struct std__allocator_int_* unnamed1746;
  int* __retval1747;
  __first1743 = v1738;
  __n1744 = v1739;
  __x1745 = v1740;
  unnamed1746 = v1741;
    _Bool r1748 = std__is_constant_evaluated();
    if (r1748) {
      int* t1749 = __first1743;
      unsigned long t1750 = __n1744;
      int* t1751 = __x1745;
      int* r1752 = int__std____do_uninit_fill_n_int___unsigned_long__int_(t1749, t1750, t1751);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      __retval1747 = r1752;
      int* t1753 = __retval1747;
      return t1753;
    }
  int* t1754 = __first1743;
  unsigned long t1755 = __n1744;
  int* t1756 = __x1745;
  int* r1757 = int__std__uninitialized_fill_n_int___unsigned_long__int_(t1754, t1755, t1756);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1747 = r1757;
  int* t1758 = __retval1747;
  return t1758;
}

// function: _ZNSt6vectorIiSaIiEE16_Temporary_valueD2Ev
void std__vector_int__std__allocator_int______Temporary_value____Temporary_value(struct std__vector_int__std__allocator_int_____Temporary_value* v1759) {
bb1760:
  struct std__vector_int__std__allocator_int_____Temporary_value* this1761;
  this1761 = v1759;
  struct std__vector_int__std__allocator_int_____Temporary_value* t1762 = this1761;
    struct std__vector_int__std__allocator_int__* t1763 = t1762->_M_this;
    struct std___Vector_base_int__std__allocator_int__* base1764 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1763 + 0);
    struct std__allocator_int_* base1765 = (struct std__allocator_int_*)((char *)&(base1764->_M_impl) + 0);
    int* r1766 = std__vector_int__std__allocator_int______Temporary_value___M_ptr(t1762);
    void_std__allocator_traits_std__allocator_int_____destroy_int_(base1765, r1766);
  {
    std__vector_int__std__allocator_int______Temporary_value___Storage____Storage(&t1762->_M_storage);
  }
  return;
}

// function: _ZSt32__make_move_if_noexcept_iteratorIiSt13move_iteratorIPiEET0_PT_
struct std__move_iterator_int___ std__move_iterator_int___std____make_move_if_noexcept_iterator_int__std__move_iterator_int____(int* v1767) {
bb1768:
  int* __i1769;
  struct std__move_iterator_int___ __retval1770;
  __i1769 = v1767;
  int* t1771 = __i1769;
  std__move_iterator_int____move_iterator(&__retval1770, t1771);
  if (__cir_exc_active) {
    struct std__move_iterator_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std__move_iterator_int___ t1772 = __retval1770;
  return t1772;
}

// function: _ZSt34__uninitialized_move_if_noexcept_aIPiS0_SaIiEET0_T_S3_S2_RT1_
int* int__std____uninitialized_move_if_noexcept_a_int___int___std__allocator_int___(int* v1773, int* v1774, int* v1775, struct std__allocator_int_* v1776) {
bb1777:
  int* __first1778;
  int* __last1779;
  int* __result1780;
  struct std__allocator_int_* __alloc1781;
  int* __retval1782;
  struct std__move_iterator_int___ agg_tmp01783;
  struct std__move_iterator_int___ agg_tmp11784;
  __first1778 = v1773;
  __last1779 = v1774;
  __result1780 = v1775;
  __alloc1781 = v1776;
  int* t1785 = __first1778;
  struct std__move_iterator_int___ r1786 = std__move_iterator_int___std____make_move_if_noexcept_iterator_int__std__move_iterator_int____(t1785);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  agg_tmp01783 = r1786;
  int* t1787 = __last1779;
  struct std__move_iterator_int___ r1788 = std__move_iterator_int___std____make_move_if_noexcept_iterator_int__std__move_iterator_int____(t1787);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  agg_tmp11784 = r1788;
  int* t1789 = __result1780;
  struct std__allocator_int_* t1790 = __alloc1781;
  struct std__move_iterator_int___ t1791 = agg_tmp01783;
  struct std__move_iterator_int___ t1792 = agg_tmp11784;
  int* r1793 = int__std____uninitialized_copy_a_std__move_iterator_int____std__move_iterator_int____int___int_(t1791, t1792, t1789, t1790);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1782 = r1793;
  int* t1794 = __retval1782;
  return t1794;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1795, int* v1796, struct std__allocator_int_* v1797) {
bb1798:
  int* __first1799;
  int* __last1800;
  struct std__allocator_int_* unnamed1801;
  __first1799 = v1795;
  __last1800 = v1796;
  unnamed1801 = v1797;
  int* t1802 = __first1799;
  int* t1803 = __last1800;
  void_std___Destroy_int__(t1802, t1803);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt6vectorIiSaIiEE14_M_fill_insertEN9__gnu_cxx17__normal_iteratorIPiS1_EEmRKi
void std__vector_int__std__allocator_int______M_fill_insert(struct std__vector_int__std__allocator_int__* v1804, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1805, unsigned long v1806, int* v1807) {
bb1808:
  struct std__vector_int__std__allocator_int__* this1809;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __position1810;
  unsigned long __n1811;
  int* __x1812;
  this1809 = v1804;
  __position1810 = v1805;
  __n1811 = v1806;
  __x1812 = v1807;
  struct std__vector_int__std__allocator_int__* t1813 = this1809;
    unsigned long t1814 = __n1811;
    unsigned long c1815 = 0;
    _Bool c1816 = ((t1814 != c1815)) ? 1 : 0;
    if (c1816) {
        int** r1817 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__position1810);
        int* t1818 = *r1817;
        struct std___Vector_base_int__std__allocator_int__* base1819 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1813 + 0);
        struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1820 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1819->_M_impl) + 0);
        int* t1821 = base1820->_M_finish;
        _Bool c1822 = ((t1818 == t1821)) ? 1 : 0;
        if (c1822) {
          unsigned long t1823 = __n1811;
          int* t1824 = __x1812;
          std__vector_int__std__allocator_int______M_fill_append(t1813, t1823, t1824);
          if (__cir_exc_active) {
            return;
          }
        } else {
            struct std___Vector_base_int__std__allocator_int__* base1825 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1813 + 0);
            struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1826 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1825->_M_impl) + 0);
            int* t1827 = base1826->_M_end_of_storage;
            struct std___Vector_base_int__std__allocator_int__* base1828 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1813 + 0);
            struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1829 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1828->_M_impl) + 0);
            int* t1830 = base1829->_M_finish;
            long diff1831 = t1827 - t1830;
            unsigned long cast1832 = (unsigned long)diff1831;
            unsigned long t1833 = __n1811;
            _Bool c1834 = ((cast1832 >= t1833)) ? 1 : 0;
            if (c1834) {
              struct std__vector_int__std__allocator_int_____Temporary_value __tmp1835;
              int* __x_copy1836;
              unsigned long __elems_after1837;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp01838;
              int* __old_finish1839;
              int* t1840 = __x1812;
              std__vector_int__std__allocator_int______Temporary_value___Temporary_value_int_const__(&__tmp1835, t1813, t1840);
              if (__cir_exc_active) {
                return;
              }
                int* r1841 = std__vector_int__std__allocator_int______Temporary_value___M_val(&__tmp1835);
                __x_copy1836 = r1841;
                struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1842 = std__vector_int__std__allocator_int_____end(t1813);
                ref_tmp01838 = r1842;
                long r1843 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&ref_tmp01838, &__position1810);
                unsigned long cast1844 = (unsigned long)r1843;
                __elems_after1837 = cast1844;
                struct std___Vector_base_int__std__allocator_int__* base1845 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1813 + 0);
                struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1846 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1845->_M_impl) + 0);
                int* t1847 = base1846->_M_finish;
                __old_finish1839 = t1847;
                  unsigned long t1848 = __elems_after1837;
                  unsigned long t1849 = __n1811;
                  _Bool c1850 = ((t1848 > t1849)) ? 1 : 0;
                  if (c1850) {
                    int* t1851 = __old_finish1839;
                    unsigned long t1852 = __n1811;
                    long cast1853 = (long)t1852;
                    long u1854 = -cast1853;
                    int* ptr1855 = &(t1851)[u1854];
                    int* t1856 = __old_finish1839;
                    int* t1857 = __old_finish1839;
                    struct std___Vector_base_int__std__allocator_int__* base1858 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1813 + 0);
                    struct std__allocator_int_* r1859 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1858);
                    int* r1860 = int__std____uninitialized_move_a_int___int___std__allocator_int___(ptr1855, t1856, t1857, r1859);
                    if (__cir_exc_active) {
                      {
                        std__vector_int__std__allocator_int______Temporary_value____Temporary_value(&__tmp1835);
                      }
                      return;
                    }
                    unsigned long t1861 = __n1811;
                    struct std___Vector_base_int__std__allocator_int__* base1862 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1813 + 0);
                    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1863 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1862->_M_impl) + 0);
                    int* t1864 = base1863->_M_finish;
                    int* ptr1865 = &(t1864)[t1861];
                    base1863->_M_finish = ptr1865;
                    int** r1866 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__position1810);
                    int* t1867 = *r1866;
                    int* t1868 = __old_finish1839;
                    unsigned long t1869 = __n1811;
                    long cast1870 = (long)t1869;
                    long u1871 = -cast1870;
                    int* ptr1872 = &(t1868)[u1871];
                    int* t1873 = __old_finish1839;
                    int* r1874 = int__std__move_backward_int___int__(t1867, ptr1872, t1873);
                    if (__cir_exc_active) {
                      {
                        std__vector_int__std__allocator_int______Temporary_value____Temporary_value(&__tmp1835);
                      }
                      return;
                    }
                    int** r1875 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__position1810);
                    int* t1876 = *r1875;
                    int** r1877 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__position1810);
                    int* t1878 = *r1877;
                    unsigned long t1879 = __n1811;
                    int* ptr1880 = &(t1878)[t1879];
                    int* t1881 = __x_copy1836;
                    void_std__fill_int___int_(t1876, ptr1880, t1881);
                    if (__cir_exc_active) {
                      {
                        std__vector_int__std__allocator_int______Temporary_value____Temporary_value(&__tmp1835);
                      }
                      return;
                    }
                  } else {
                    int* t1882 = __old_finish1839;
                    unsigned long t1883 = __n1811;
                    unsigned long t1884 = __elems_after1837;
                    unsigned long b1885 = t1883 - t1884;
                    int* t1886 = __x_copy1836;
                    struct std___Vector_base_int__std__allocator_int__* base1887 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1813 + 0);
                    struct std__allocator_int_* r1888 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1887);
                    int* r1889 = int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(t1882, b1885, t1886, r1888);
                    if (__cir_exc_active) {
                      {
                        std__vector_int__std__allocator_int______Temporary_value____Temporary_value(&__tmp1835);
                      }
                      return;
                    }
                    struct std___Vector_base_int__std__allocator_int__* base1890 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1813 + 0);
                    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1891 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1890->_M_impl) + 0);
                    base1891->_M_finish = r1889;
                    int** r1892 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__position1810);
                    int* t1893 = *r1892;
                    int* t1894 = __old_finish1839;
                    struct std___Vector_base_int__std__allocator_int__* base1895 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1813 + 0);
                    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1896 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1895->_M_impl) + 0);
                    int* t1897 = base1896->_M_finish;
                    struct std___Vector_base_int__std__allocator_int__* base1898 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1813 + 0);
                    struct std__allocator_int_* r1899 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1898);
                    int* r1900 = int__std____uninitialized_move_a_int___int___std__allocator_int___(t1893, t1894, t1897, r1899);
                    if (__cir_exc_active) {
                      {
                        std__vector_int__std__allocator_int______Temporary_value____Temporary_value(&__tmp1835);
                      }
                      return;
                    }
                    unsigned long t1901 = __elems_after1837;
                    struct std___Vector_base_int__std__allocator_int__* base1902 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1813 + 0);
                    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1903 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1902->_M_impl) + 0);
                    int* t1904 = base1903->_M_finish;
                    int* ptr1905 = &(t1904)[t1901];
                    base1903->_M_finish = ptr1905;
                    int** r1906 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__position1810);
                    int* t1907 = *r1906;
                    int* t1908 = __old_finish1839;
                    int* t1909 = __x_copy1836;
                    void_std__fill_int___int_(t1907, t1908, t1909);
                    if (__cir_exc_active) {
                      {
                        std__vector_int__std__allocator_int______Temporary_value____Temporary_value(&__tmp1835);
                      }
                      return;
                    }
                  }
              {
                std__vector_int__std__allocator_int______Temporary_value____Temporary_value(&__tmp1835);
              }
            } else {
              int* __old_start1910;
              int* __old_finish1911;
              int* __pos1912;
              unsigned long __len1913;
              unsigned long __elems_before1914;
              int* __new_start1915;
              int* __new_finish1916;
              struct std___Vector_base_int__std__allocator_int__* base1917 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1813 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1918 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1917->_M_impl) + 0);
              int* t1919 = base1918->_M_start;
              __old_start1910 = t1919;
              struct std___Vector_base_int__std__allocator_int__* base1920 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1813 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1921 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1920->_M_impl) + 0);
              int* t1922 = base1921->_M_finish;
              __old_finish1911 = t1922;
              int** r1923 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__position1810);
              int* t1924 = *r1923;
              __pos1912 = t1924;
              unsigned long t1925 = __n1811;
              char* cast1926 = (char*)&(_str_6);
              unsigned long r1927 = std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(t1813, t1925, cast1926);
              if (__cir_exc_active) {
                return;
              }
              __len1913 = r1927;
              int* t1928 = __pos1912;
              int* t1929 = __old_start1910;
              long diff1930 = t1928 - t1929;
              unsigned long cast1931 = (unsigned long)diff1930;
              __elems_before1914 = cast1931;
              struct std___Vector_base_int__std__allocator_int__* base1932 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1813 + 0);
              unsigned long t1933 = __len1913;
              int* r1934 = std___Vector_base_int__std__allocator_int______M_allocate(base1932, t1933);
              if (__cir_exc_active) {
                return;
              }
              __new_start1915 = r1934;
              int* t1935 = __new_start1915;
              __new_finish1916 = t1935;
                  int* t1937 = __new_start1915;
                  unsigned long t1938 = __elems_before1914;
                  int* ptr1939 = &(t1937)[t1938];
                  unsigned long t1940 = __n1811;
                  int* t1941 = __x1812;
                  struct std___Vector_base_int__std__allocator_int__* base1942 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1813 + 0);
                  struct std__allocator_int_* r1943 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1942);
                  int* r1944 = int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(ptr1939, t1940, t1941, r1943);
                  if (__cir_exc_active) {
                    goto cir_try_dispatch1936;
                  }
                  int* c1945 = ((void*)0);
                  __new_finish1916 = c1945;
                  int* t1946 = __old_start1910;
                  int* t1947 = __pos1912;
                  int* t1948 = __new_start1915;
                  struct std___Vector_base_int__std__allocator_int__* base1949 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1813 + 0);
                  struct std__allocator_int_* r1950 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1949);
                  int* r1951 = int__std____uninitialized_move_if_noexcept_a_int___int___std__allocator_int___(t1946, t1947, t1948, r1950);
                  if (__cir_exc_active) {
                    goto cir_try_dispatch1936;
                  }
                  __new_finish1916 = r1951;
                  unsigned long t1952 = __n1811;
                  int* t1953 = __new_finish1916;
                  int* ptr1954 = &(t1953)[t1952];
                  __new_finish1916 = ptr1954;
                  int* t1955 = __pos1912;
                  int* t1956 = __old_finish1911;
                  int* t1957 = __new_finish1916;
                  struct std___Vector_base_int__std__allocator_int__* base1958 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1813 + 0);
                  struct std__allocator_int_* r1959 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1958);
                  int* r1960 = int__std____uninitialized_move_if_noexcept_a_int___int___std__allocator_int___(t1955, t1956, t1957, r1959);
                  if (__cir_exc_active) {
                    goto cir_try_dispatch1936;
                  }
                  __new_finish1916 = r1960;
                cir_try_dispatch1936: ;
                if (__cir_exc_active) {
                {
                  int ca_tok1961 = 0;
                  void* ca_exn1962 = (void*)__cir_exc_ptr;
                  __cir_exc_active = 0;
                      int* t1963 = __new_finish1916;
                      _Bool cast1964 = (_Bool)t1963;
                      _Bool u1965 = !cast1964;
                      if (u1965) {
                        int* t1966 = __new_start1915;
                        unsigned long t1967 = __elems_before1914;
                        int* ptr1968 = &(t1966)[t1967];
                        int* t1969 = __new_start1915;
                        unsigned long t1970 = __elems_before1914;
                        int* ptr1971 = &(t1969)[t1970];
                        unsigned long t1972 = __n1811;
                        int* ptr1973 = &(ptr1971)[t1972];
                        struct std___Vector_base_int__std__allocator_int__* base1974 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1813 + 0);
                        struct std__allocator_int_* r1975 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1974);
                        void_std___Destroy_int___int_(ptr1968, ptr1973, r1975);
                        if (__cir_exc_active) {
                          {
                            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                          }
                          return;
                        }
                      } else {
                        int* t1976 = __new_start1915;
                        int* t1977 = __new_finish1916;
                        struct std___Vector_base_int__std__allocator_int__* base1978 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1813 + 0);
                        struct std__allocator_int_* r1979 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1978);
                        void_std___Destroy_int___int_(t1976, t1977, r1979);
                        if (__cir_exc_active) {
                          {
                            if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                          }
                          return;
                        }
                      }
                    struct std___Vector_base_int__std__allocator_int__* base1980 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1813 + 0);
                    int* t1981 = __new_start1915;
                    unsigned long t1982 = __len1913;
                    std___Vector_base_int__std__allocator_int______M_deallocate(base1980, t1981, t1982);
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
              int* t1983 = __old_start1910;
              int* t1984 = __old_finish1911;
              struct std___Vector_base_int__std__allocator_int__* base1985 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1813 + 0);
              struct std__allocator_int_* r1986 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1985);
              void_std___Destroy_int___int_(t1983, t1984, r1986);
              if (__cir_exc_active) {
                return;
              }
              struct std___Vector_base_int__std__allocator_int__* base1987 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1813 + 0);
              int* t1988 = __old_start1910;
              struct std___Vector_base_int__std__allocator_int__* base1989 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1813 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1990 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1989->_M_impl) + 0);
              int* t1991 = base1990->_M_end_of_storage;
              int* t1992 = __old_start1910;
              long diff1993 = t1991 - t1992;
              unsigned long cast1994 = (unsigned long)diff1993;
              std___Vector_base_int__std__allocator_int______M_deallocate(base1987, t1988, cast1994);
              if (__cir_exc_active) {
                return;
              }
              int* t1995 = __new_start1915;
              struct std___Vector_base_int__std__allocator_int__* base1996 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1813 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1997 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1996->_M_impl) + 0);
              base1997->_M_start = t1995;
              int* t1998 = __new_finish1916;
              struct std___Vector_base_int__std__allocator_int__* base1999 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1813 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2000 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1999->_M_impl) + 0);
              base2000->_M_finish = t1998;
              int* t2001 = __new_start1915;
              unsigned long t2002 = __len1913;
              int* ptr2003 = &(t2001)[t2002];
              struct std___Vector_base_int__std__allocator_int__* base2004 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1813 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2005 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base2004->_M_impl) + 0);
              base2005->_M_end_of_storage = ptr2003;
            }
        }
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE6insertEN9__gnu_cxx17__normal_iteratorIPKiS1_EEmRS4_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____insert_2(struct std__vector_int__std__allocator_int__* v2006, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v2007, unsigned long v2008, int* v2009) {
bb2010:
  struct std__vector_int__std__allocator_int__* this2011;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __position2012;
  unsigned long __n2013;
  int* __x2014;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval2015;
  long __offset2016;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp02017;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp02018;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp12019;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp22020;
  this2011 = v2006;
  __position2012 = v2007;
  __n2013 = v2008;
  __x2014 = v2009;
  struct std__vector_int__std__allocator_int__* t2021 = this2011;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r2022 = std__vector_int__std__allocator_int_____cbegin___const(t2021);
  ref_tmp02017 = r2022;
  long r2023 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int_const___std__vector_int__std__allocator_int_____(&__position2012, &ref_tmp02017);
  __offset2016 = r2023;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2024 = std__vector_int__std__allocator_int_____begin(t2021);
  ref_tmp12019 = r2024;
  long t2025 = __offset2016;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2026 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&ref_tmp12019, t2025);
  agg_tmp02018 = r2026;
  unsigned long t2027 = __n2013;
  int* t2028 = __x2014;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2029 = agg_tmp02018;
  std__vector_int__std__allocator_int______M_fill_insert(t2021, t2029, t2027, t2028);
  if (__cir_exc_active) {
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2030 = std__vector_int__std__allocator_int_____begin(t2021);
  ref_tmp22020 = r2030;
  long t2031 = __offset2016;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2032 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&ref_tmp22020, t2031);
  __retval2015 = r2032;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2033 = __retval2015;
  return t2033;
}

// function: _ZSt10__distanceIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEENSt15iterator_traitsIT_E15difference_typeES8_S8_St26random_access_iterator_tag
long std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________difference_type_std____distance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v2034, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v2035, struct std__random_access_iterator_tag v2036) {
bb2037:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first2038;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last2039;
  struct std__random_access_iterator_tag unnamed2040;
  long __retval2041;
  __first2038 = v2034;
  __last2039 = v2035;
  unnamed2040 = v2036;
  long r2042 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last2039, &__first2038);
  __retval2041 = r2042;
  long t2043 = __retval2041;
  return t2043;
}

// function: _ZSt8distanceIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEENSt15iterator_traitsIT_E15difference_typeES8_S8_
long std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________difference_type_std__distance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v2044, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v2045) {
bb2046:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first2047;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last2048;
  long __retval2049;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp02050;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp12051;
  struct std__random_access_iterator_tag agg_tmp22052;
  __first2047 = v2044;
  __last2048 = v2045;
  agg_tmp02050 = __first2047; // copy
  agg_tmp12051 = __last2048; // copy
  struct std__random_access_iterator_tag r2053 = std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__first2047);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  agg_tmp22052 = r2053;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2054 = agg_tmp02050;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2055 = agg_tmp12051;
  struct std__random_access_iterator_tag t2056 = agg_tmp22052;
  long r2057 = std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________difference_type_std____distance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t2054, t2055, t2056);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  __retval2049 = r2057;
  long t2058 = __retval2049;
  return t2058;
}

// function: _ZSt12__niter_wrapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES2_ET_S7_T0_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____niter_wrap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v2059, int* v2060) {
bb2061:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __from2062;
  int* __res2063;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval2064;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp02065;
  __from2062 = v2059;
  __res2063 = v2060;
  int* t2066 = __res2063;
  int* r2067 = int__std____niter_base_int__(t2066);
  agg_tmp02065 = __from2062; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2068 = agg_tmp02065;
  int* r2069 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t2068);
  long diff2070 = r2067 - r2069;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2071 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__from2062, diff2070);
  __retval2064 = r2071;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2072 = __retval2064;
  return t2072;
}

// function: _ZSt12__assign_oneILb0EPiS0_EvRT0_RT1_
void void_std____assign_one_false__int___int__(int** v2073, int** v2074) {
bb2075:
  int** __out2076;
  int** __in2077;
  __out2076 = v2073;
  __in2077 = v2074;
    int** t2078 = __in2077;
    int* t2079 = *t2078;
    int t2080 = *t2079;
    int** t2081 = __out2076;
    int* t2082 = *t2081;
    *t2082 = t2080;
  return;
}

// function: _ZSt14__copy_move_a2ILb0EPiS0_S0_ET2_T0_T1_S1_
int* int__std____copy_move_a2_false__int___int___int__(int* v2083, int* v2084, int* v2085) {
bb2086:
  int* __first2087;
  int* __last2088;
  int* __result2089;
  int* __retval2090;
  __first2087 = v2083;
  __last2088 = v2084;
  __result2089 = v2085;
      _Bool r2091 = std____is_constant_evaluated();
      if (r2091) {
      } else {
          long __n2092;
          int* t2093 = __first2087;
          int* t2094 = __last2088;
          long r2095 = std__iterator_traits_int____difference_type_std__distance_int__(t2093, t2094);
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
          __n2092 = r2095;
            long t2096 = __n2092;
            long c2097 = 1;
            _Bool c2098 = ((t2096 > c2097)) ? 1 : 0;
            if (c2098) {
              int* t2099 = __result2089;
              void* cast2100 = (void*)t2099;
              int* t2101 = __first2087;
              void* cast2102 = (void*)t2101;
              long t2103 = __n2092;
              unsigned long cast2104 = (unsigned long)t2103;
              unsigned long c2105 = 4;
              unsigned long b2106 = cast2104 * c2105;
              void* r2107 = memmove(cast2100, cast2102, b2106);
              long t2108 = __n2092;
              int* t2109 = __result2089;
              int* ptr2110 = &(t2109)[t2108];
              __result2089 = ptr2110;
            } else {
                long t2111 = __n2092;
                long c2112 = 1;
                _Bool c2113 = ((t2111 == c2112)) ? 1 : 0;
                if (c2113) {
                  void_std____assign_one_false__int___int__(&__result2089, &__first2087);
                  if (__cir_exc_active) {
                    int* __cir_eh_ret = (int*)0;
                    return __cir_eh_ret;
                  }
                  int* t2114 = __result2089;
                  int c2115 = 1;
                  int* ptr2116 = &(t2114)[c2115];
                  __result2089 = ptr2116;
                }
            }
          int* t2117 = __result2089;
          __retval2090 = t2117;
          int* t2118 = __retval2090;
          return t2118;
      }
    while (1) {
      int* t2120 = __first2087;
      int* t2121 = __last2088;
      _Bool c2122 = ((t2120 != t2121)) ? 1 : 0;
      if (!c2122) break;
      void_std____assign_one_false__int___int__(&__result2089, &__first2087);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
    for_step2119: ;
      int* t2123 = __result2089;
      int c2124 = 1;
      int* ptr2125 = &(t2123)[c2124];
      __result2089 = ptr2125;
      int* t2126 = __first2087;
      int c2127 = 1;
      int* ptr2128 = &(t2126)[c2127];
      __first2087 = ptr2128;
    }
  int* t2129 = __result2089;
  __retval2090 = t2129;
  int* t2130 = __retval2090;
  return t2130;
}

// function: _ZSt14__copy_move_a1ILb0EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_a1_false__int___int__(int* v2131, int* v2132, int* v2133) {
bb2134:
  int* __first2135;
  int* __last2136;
  int* __result2137;
  int* __retval2138;
  __first2135 = v2131;
  __last2136 = v2132;
  __result2137 = v2133;
  int* t2139 = __first2135;
  int* t2140 = __last2136;
  int* t2141 = __result2137;
  int* r2142 = int__std____copy_move_a2_false__int___int___int__(t2139, t2140, t2141);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval2138 = r2142;
  int* t2143 = __retval2138;
  return t2143;
}

// function: _ZSt12__niter_baseIPiSt6vectorIiSaIiEEET_N9__gnu_cxx17__normal_iteratorIS4_T0_EE
int* int__std____niter_base_int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v2144) {
bb2145:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it2146;
  int* __retval2147;
  __it2146 = v2144;
  int** r2148 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__it2146);
  int* t2149 = *r2148;
  __retval2147 = t2149;
  int* t2150 = __retval2147;
  return t2150;
}

// function: _ZSt13__copy_move_aILb0EN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_ET1_T0_S8_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____copy_move_a_false____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v2151, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v2152, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v2153) {
bb2154:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first2155;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last2156;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result2157;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval2158;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp02159;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp12160;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp22161;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp32162;
  __first2155 = v2151;
  __last2156 = v2152;
  __result2157 = v2153;
  agg_tmp02159 = __result2157; // copy
  agg_tmp12160 = __first2155; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2163 = agg_tmp12160;
  int* r2164 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t2163);
  agg_tmp22161 = __last2156; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2165 = agg_tmp22161;
  int* r2166 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t2165);
  agg_tmp32162 = __result2157; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2167 = agg_tmp32162;
  int* r2168 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t2167);
  int* r2169 = int__std____copy_move_a1_false__int___int__(r2164, r2166, r2168);
  if (__cir_exc_active) {
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2170 = agg_tmp02159;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2171 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____niter_wrap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(t2170, r2169);
  if (__cir_exc_active) {
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval2158 = r2171;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2172 = __retval2158;
  return t2172;
}

// function: _ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEET_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v2173) {
bb2174:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it2175;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval2176;
  __it2175 = v2173;
  __retval2176 = __it2175; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2177 = __retval2176;
  return t2177;
}

// function: _ZSt4copyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_ET0_T_S8_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v2178, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v2179, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v2180) {
bb2181:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first2182;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last2183;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result2184;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval2185;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp02186;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp12187;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp22188;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp32189;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp42190;
  __first2182 = v2178;
  __last2183 = v2179;
  __result2184 = v2180;
  agg_tmp12187 = __first2182; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2191 = agg_tmp12187;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2192 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t2191);
  if (__cir_exc_active) {
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  agg_tmp02186 = r2192;
  agg_tmp32189 = __last2183; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2193 = agg_tmp32189;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2194 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t2193);
  if (__cir_exc_active) {
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  agg_tmp22188 = r2194;
  agg_tmp42190 = __result2184; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2195 = agg_tmp02186;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2196 = agg_tmp22188;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2197 = agg_tmp42190;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2198 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____copy_move_a_false____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t2195, t2196, t2197);
  if (__cir_exc_active) {
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval2185 = r2198;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2199 = __retval2185;
  return t2199;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___4(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v2200) {
bb2201:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this2202;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval2203;
  this2202 = v2200;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t2204 = this2202;
  int* t2205 = t2204->_M_current;
  int c2206 = 1;
  int* ptr2207 = &(t2205)[c2206];
  t2204->_M_current = ptr2207;
  __retval2203 = t2204;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t2208 = __retval2203;
  return t2208;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEmmEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v2209) {
bb2210:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this2211;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval2212;
  this2211 = v2209;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t2213 = this2211;
  int* t2214 = t2213->_M_current;
  int c2215 = -1;
  int* ptr2216 = &(t2214)[c2215];
  t2213->_M_current = ptr2216;
  __retval2212 = t2213;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t2217 = __retval2212;
  return t2217;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEpLEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v2218, long v2219) {
bb2220:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this2221;
  long __n2222;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval2223;
  this2221 = v2218;
  __n2222 = v2219;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t2224 = this2221;
  long t2225 = __n2222;
  int* t2226 = t2224->_M_current;
  int* ptr2227 = &(t2226)[t2225];
  t2224->_M_current = ptr2227;
  __retval2223 = t2224;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t2228 = __retval2223;
  return t2228;
}

// function: _ZSt9__advanceIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEElEvRT_T0_St26random_access_iterator_tag
void void_std____advance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v2229, long v2230, struct std__random_access_iterator_tag v2231) {
bb2232:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __i2233;
  long __n2234;
  struct std__random_access_iterator_tag unnamed2235;
  __i2233 = v2229;
  __n2234 = v2230;
  unnamed2235 = v2231;
    long t2236 = __n2234;
    _Bool isconst2237 = 0;
    _Bool ternary2238;
    if (isconst2237) {
      long t2239 = __n2234;
      long c2240 = 1;
      _Bool c2241 = ((t2239 == c2240)) ? 1 : 0;
      ternary2238 = (_Bool)c2241;
    } else {
      _Bool c2242 = 0;
      ternary2238 = (_Bool)c2242;
    }
    if (ternary2238) {
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t2243 = __i2233;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r2244 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___4(t2243);
    } else {
        long t2245 = __n2234;
        _Bool isconst2246 = 0;
        _Bool ternary2247;
        if (isconst2246) {
          long t2248 = __n2234;
          long c2249 = -1;
          _Bool c2250 = ((t2248 == c2249)) ? 1 : 0;
          ternary2247 = (_Bool)c2250;
        } else {
          _Bool c2251 = 0;
          ternary2247 = (_Bool)c2251;
        }
        if (ternary2247) {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t2252 = __i2233;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r2253 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(t2252);
        } else {
          long t2254 = __n2234;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t2255 = __i2233;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r2256 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(t2255, t2254);
        }
    }
  return;
}

// function: _ZSt7advanceIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEmEvRT_T0_
void void_std__advance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______unsigned_long_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v2257, unsigned long v2258) {
bb2259:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __i2260;
  unsigned long __n2261;
  long __d2262;
  struct std__random_access_iterator_tag agg_tmp02263;
  __i2260 = v2257;
  __n2261 = v2258;
  unsigned long t2264 = __n2261;
  long cast2265 = (long)t2264;
  __d2262 = cast2265;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t2266 = __i2260;
  long t2267 = __d2262;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t2268 = __i2260;
  struct std__random_access_iterator_tag r2269 = std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t2268);
  if (__cir_exc_active) {
    return;
  }
  agg_tmp02263 = r2269;
  struct std__random_access_iterator_tag t2270 = agg_tmp02263;
  void_std____advance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long_(t2266, t2267, t2270);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v2271, int* v2272) {
bb2273:
  int* __location2274;
  int* __args2275;
  int* __retval2276;
  void* __loc2277;
  __location2274 = v2271;
  __args2275 = v2272;
  int* t2278 = __location2274;
  void* cast2279 = (void*)t2278;
  __loc2277 = cast2279;
    void* t2280 = __loc2277;
    int* cast2281 = (int*)t2280;
    int* t2282 = __args2275;
    int t2283 = *t2282;
    *cast2281 = t2283;
    __retval2276 = cast2281;
    int* t2284 = __retval2276;
    return t2284;
  abort();
}

// function: _ZSt10_ConstructIiJRiEEvPT_DpOT0_
void void_std___Construct_int__int__(int* v2285, int* v2286) {
bb2287:
  int* __p2288;
  int* __args2289;
  __p2288 = v2285;
  __args2289 = v2286;
    _Bool r2290 = std____is_constant_evaluated();
    if (r2290) {
      int* t2291 = __p2288;
      int* t2292 = __args2289;
      int* r2293 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t2291, t2292);
      return;
    }
  int* t2294 = __p2288;
  void* cast2295 = (void*)t2294;
  int* cast2296 = (int*)cast2295;
  int* t2297 = __args2289;
  int t2298 = *t2297;
  *cast2296 = t2298;
  return;
}

// function: _ZSt16__do_uninit_copyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_S2_ET1_T_T0_S7_
int* int__std____do_uninit_copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v2299, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v2300, int* v2301) {
bb2302:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first2303;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last2304;
  int* __result2305;
  int* __retval2306;
  struct std___UninitDestroyGuard_int____void_ __guard2307;
  __first2303 = v2299;
  __last2304 = v2300;
  __result2305 = v2301;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard2307, &__result2305);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
      while (1) {
        _Bool r2309 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first2303, &__last2304);
        _Bool u2310 = !r2309;
        if (!u2310) break;
        int* t2311 = __result2305;
        int* r2312 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first2303);
        void_std___Construct_int__int__(t2311, r2312);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard2307);
          }
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
      for_step2308: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r2313 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___4(&__first2303);
        int* t2314 = __result2305;
        int c2315 = 1;
        int* ptr2316 = &(t2314)[c2315];
        __result2305 = ptr2316;
      }
    std___UninitDestroyGuard_int___void___release(&__guard2307);
    if (__cir_exc_active) {
      {
        std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard2307);
      }
      int* __cir_eh_ret = (int*)0;
      return __cir_eh_ret;
    }
    int* t2317 = __result2305;
    __retval2306 = t2317;
    int* t2318 = __retval2306;
    int* ret_val2319 = t2318;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard2307);
    }
    return ret_val2319;
  abort();
}

// function: _ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES2_ET0_T_S8_S7_
int* int__std__uninitialized_copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v2320, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v2321, int* v2322) {
bb2323:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first2324;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last2325;
  int* __result2326;
  int* __retval2327;
  __first2324 = v2320;
  __last2325 = v2321;
  __result2326 = v2322;
      long __n2328;
      long r2329 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last2325, &__first2324);
      __n2328 = r2329;
        long t2330 = __n2328;
        long c2331 = 0;
        _Bool c2332 = ((t2330 > c2331)) ? 1 : 0;
        if (c2332) {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp02333;
          int* t2334 = __result2326;
          int* r2335 = int__std____niter_base_int__(t2334);
          void* cast2336 = (void*)r2335;
          agg_tmp02333 = __first2324; // copy
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2337 = agg_tmp02333;
          int* r2338 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t2337);
          void* cast2339 = (void*)r2338;
          long t2340 = __n2328;
          unsigned long cast2341 = (unsigned long)t2340;
          unsigned long c2342 = 4;
          unsigned long b2343 = cast2341 * c2342;
          void* r2344 = memcpy(cast2336, cast2339, b2343);
          long t2345 = __n2328;
          int* t2346 = __result2326;
          int* ptr2347 = &(t2346)[t2345];
          __result2326 = ptr2347;
        }
      int* t2348 = __result2326;
      __retval2327 = t2348;
      int* t2349 = __retval2327;
      return t2349;
  abort();
}

// function: _ZSt22__uninitialized_copy_aIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_S2_iET1_T_T0_S7_RSaIT2_E
int* int__std____uninitialized_copy_a___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v2350, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v2351, int* v2352, struct std__allocator_int_* v2353) {
bb2354:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first2355;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last2356;
  int* __result2357;
  struct std__allocator_int_* unnamed2358;
  int* __retval2359;
  __first2355 = v2350;
  __last2356 = v2351;
  __result2357 = v2352;
  unnamed2358 = v2353;
    _Bool r2360 = std__is_constant_evaluated();
    if (r2360) {
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp02361;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp12362;
      agg_tmp02361 = __first2355; // copy
      agg_tmp12362 = __last2356; // copy
      int* t2363 = __result2357;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2364 = agg_tmp02361;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2365 = agg_tmp12362;
      int* r2366 = int__std____do_uninit_copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(t2364, t2365, t2363);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      __retval2359 = r2366;
      int* t2367 = __retval2359;
      return t2367;
    }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp22368;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp32369;
    agg_tmp22368 = __first2355; // copy
    agg_tmp32369 = __last2356; // copy
    int* t2370 = __result2357;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2371 = agg_tmp22368;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2372 = agg_tmp32369;
    int* r2373 = int__std__uninitialized_copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(t2371, t2372, t2370);
    if (__cir_exc_active) {
      int* __cir_eh_ret = (int*)0;
      return __cir_eh_ret;
    }
    __retval2359 = r2373;
    int* t2374 = __retval2359;
    return t2374;
  abort();
}

// function: _ZNSt6vectorIiSaIiEE15_M_range_insertIN9__gnu_cxx17__normal_iteratorIPiS1_EEEEvS6_T_S7_St20forward_iterator_tag
void void_std__vector_int__std__allocator_int______M_range_insert___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct std__vector_int__std__allocator_int__* v2375, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v2376, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v2377, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v2378, struct std__forward_iterator_tag v2379) {
bb2380:
  struct std__vector_int__std__allocator_int__* this2381;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __position2382;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first2383;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last2384;
  struct std__forward_iterator_tag unnamed2385;
  this2381 = v2375;
  __position2382 = v2376;
  __first2383 = v2377;
  __last2384 = v2378;
  unnamed2385 = v2379;
  struct std__vector_int__std__allocator_int__* t2386 = this2381;
    _Bool r2387 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first2383, &__last2384);
    _Bool u2388 = !r2387;
    if (u2388) {
      unsigned long __n2389;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp02390;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp12391;
      agg_tmp02390 = __first2383; // copy
      agg_tmp12391 = __last2384; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2392 = agg_tmp02390;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2393 = agg_tmp12391;
      long r2394 = std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________difference_type_std__distance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t2392, t2393);
      if (__cir_exc_active) {
        return;
      }
      unsigned long cast2395 = (unsigned long)r2394;
      __n2389 = cast2395;
        struct std___Vector_base_int__std__allocator_int__* base2396 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2386 + 0);
        struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2397 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base2396->_M_impl) + 0);
        int* t2398 = base2397->_M_end_of_storage;
        struct std___Vector_base_int__std__allocator_int__* base2399 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2386 + 0);
        struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2400 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base2399->_M_impl) + 0);
        int* t2401 = base2400->_M_finish;
        long diff2402 = t2398 - t2401;
        unsigned long cast2403 = (unsigned long)diff2402;
        unsigned long t2404 = __n2389;
        _Bool c2405 = ((cast2403 >= t2404)) ? 1 : 0;
        if (c2405) {
          unsigned long __elems_after2406;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp02407;
          int* __old_finish2408;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2409 = std__vector_int__std__allocator_int_____end(t2386);
          ref_tmp02407 = r2409;
          long r2410 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&ref_tmp02407, &__position2382);
          unsigned long cast2411 = (unsigned long)r2410;
          __elems_after2406 = cast2411;
          struct std___Vector_base_int__std__allocator_int__* base2412 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2386 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2413 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base2412->_M_impl) + 0);
          int* t2414 = base2413->_M_finish;
          __old_finish2408 = t2414;
            unsigned long t2415 = __elems_after2406;
            unsigned long t2416 = __n2389;
            _Bool c2417 = ((t2415 > t2416)) ? 1 : 0;
            if (c2417) {
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp22418;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp32419;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp42420;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp52421;
              struct std___Vector_base_int__std__allocator_int__* base2422 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2386 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2423 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base2422->_M_impl) + 0);
              int* t2424 = base2423->_M_finish;
              unsigned long t2425 = __n2389;
              long cast2426 = (long)t2425;
              long u2427 = -cast2426;
              int* ptr2428 = &(t2424)[u2427];
              struct std___Vector_base_int__std__allocator_int__* base2429 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2386 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2430 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base2429->_M_impl) + 0);
              int* t2431 = base2430->_M_finish;
              struct std___Vector_base_int__std__allocator_int__* base2432 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2386 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2433 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base2432->_M_impl) + 0);
              int* t2434 = base2433->_M_finish;
              struct std___Vector_base_int__std__allocator_int__* base2435 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2386 + 0);
              struct std__allocator_int_* r2436 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base2435);
              int* r2437 = int__std____uninitialized_move_a_int___int___std__allocator_int___(ptr2428, t2431, t2434, r2436);
              if (__cir_exc_active) {
                return;
              }
              unsigned long t2438 = __n2389;
              struct std___Vector_base_int__std__allocator_int__* base2439 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2386 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2440 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base2439->_M_impl) + 0);
              int* t2441 = base2440->_M_finish;
              int* ptr2442 = &(t2441)[t2438];
              base2440->_M_finish = ptr2442;
              int** r2443 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__position2382);
              int* t2444 = *r2443;
              int* t2445 = __old_finish2408;
              unsigned long t2446 = __n2389;
              long cast2447 = (long)t2446;
              long u2448 = -cast2447;
              int* ptr2449 = &(t2445)[u2448];
              int* t2450 = __old_finish2408;
              int* r2451 = int__std__move_backward_int___int__(t2444, ptr2449, t2450);
              if (__cir_exc_active) {
                return;
              }
              agg_tmp22418 = __first2383; // copy
              agg_tmp32419 = __last2384; // copy
              agg_tmp42420 = __position2382; // copy
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2452 = agg_tmp22418;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2453 = agg_tmp32419;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2454 = agg_tmp42420;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2455 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t2452, t2453, t2454);
              if (__cir_exc_active) {
                return;
              }
              agg_tmp52421 = r2455;
            } else {
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __mid2456;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp62457;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp72458;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp82459;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp92460;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp102461;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp112462;
              __mid2456 = __first2383; // copy
              unsigned long t2463 = __elems_after2406;
              void_std__advance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______unsigned_long_(&__mid2456, t2463);
              if (__cir_exc_active) {
                return;
              }
              agg_tmp62457 = __mid2456; // copy
              agg_tmp72458 = __last2384; // copy
              struct std___Vector_base_int__std__allocator_int__* base2464 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2386 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2465 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base2464->_M_impl) + 0);
              int* t2466 = base2465->_M_finish;
              struct std___Vector_base_int__std__allocator_int__* base2467 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2386 + 0);
              struct std__allocator_int_* r2468 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base2467);
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2469 = agg_tmp62457;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2470 = agg_tmp72458;
              int* r2471 = int__std____uninitialized_copy_a___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___int_(t2469, t2470, t2466, r2468);
              if (__cir_exc_active) {
                return;
              }
              unsigned long t2472 = __n2389;
              unsigned long t2473 = __elems_after2406;
              unsigned long b2474 = t2472 - t2473;
              struct std___Vector_base_int__std__allocator_int__* base2475 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2386 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2476 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base2475->_M_impl) + 0);
              int* t2477 = base2476->_M_finish;
              int* ptr2478 = &(t2477)[b2474];
              base2476->_M_finish = ptr2478;
              int** r2479 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__position2382);
              int* t2480 = *r2479;
              int* t2481 = __old_finish2408;
              struct std___Vector_base_int__std__allocator_int__* base2482 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2386 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2483 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base2482->_M_impl) + 0);
              int* t2484 = base2483->_M_finish;
              struct std___Vector_base_int__std__allocator_int__* base2485 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2386 + 0);
              struct std__allocator_int_* r2486 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base2485);
              int* r2487 = int__std____uninitialized_move_a_int___int___std__allocator_int___(t2480, t2481, t2484, r2486);
              if (__cir_exc_active) {
                return;
              }
              unsigned long t2488 = __elems_after2406;
              struct std___Vector_base_int__std__allocator_int__* base2489 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2386 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2490 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base2489->_M_impl) + 0);
              int* t2491 = base2490->_M_finish;
              int* ptr2492 = &(t2491)[t2488];
              base2490->_M_finish = ptr2492;
              agg_tmp82459 = __first2383; // copy
              agg_tmp92460 = __mid2456; // copy
              agg_tmp102461 = __position2382; // copy
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2493 = agg_tmp82459;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2494 = agg_tmp92460;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2495 = agg_tmp102461;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2496 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t2493, t2494, t2495);
              if (__cir_exc_active) {
                return;
              }
              agg_tmp112462 = r2496;
            }
        } else {
          int* __old_start2497;
          int* __old_finish2498;
          unsigned long __len2499;
          int* __new_start2500;
          int* __new_finish2501;
          struct std___Vector_base_int__std__allocator_int__* base2502 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2386 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2503 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base2502->_M_impl) + 0);
          int* t2504 = base2503->_M_start;
          __old_start2497 = t2504;
          struct std___Vector_base_int__std__allocator_int__* base2505 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2386 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2506 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base2505->_M_impl) + 0);
          int* t2507 = base2506->_M_finish;
          __old_finish2498 = t2507;
          unsigned long t2508 = __n2389;
          char* cast2509 = (char*)&(_str_10);
          unsigned long r2510 = std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(t2386, t2508, cast2509);
          if (__cir_exc_active) {
            return;
          }
          __len2499 = r2510;
          struct std___Vector_base_int__std__allocator_int__* base2511 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2386 + 0);
          unsigned long t2512 = __len2499;
          int* r2513 = std___Vector_base_int__std__allocator_int______M_allocate(base2511, t2512);
          if (__cir_exc_active) {
            return;
          }
          __new_start2500 = r2513;
          int* t2514 = __new_start2500;
          __new_finish2501 = t2514;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp122515;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp132516;
              int* t2518 = __old_start2497;
              int** r2519 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__position2382);
              int* t2520 = *r2519;
              int* t2521 = __new_start2500;
              struct std___Vector_base_int__std__allocator_int__* base2522 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2386 + 0);
              struct std__allocator_int_* r2523 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base2522);
              int* r2524 = int__std____uninitialized_move_if_noexcept_a_int___int___std__allocator_int___(t2518, t2520, t2521, r2523);
              if (__cir_exc_active) {
                goto cir_try_dispatch2517;
              }
              __new_finish2501 = r2524;
              agg_tmp122515 = __first2383; // copy
              agg_tmp132516 = __last2384; // copy
              int* t2525 = __new_finish2501;
              struct std___Vector_base_int__std__allocator_int__* base2526 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2386 + 0);
              struct std__allocator_int_* r2527 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base2526);
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2528 = agg_tmp122515;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2529 = agg_tmp132516;
              int* r2530 = int__std____uninitialized_copy_a___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___int_(t2528, t2529, t2525, r2527);
              if (__cir_exc_active) {
                goto cir_try_dispatch2517;
              }
              __new_finish2501 = r2530;
              int** r2531 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__position2382);
              int* t2532 = *r2531;
              int* t2533 = __old_finish2498;
              int* t2534 = __new_finish2501;
              struct std___Vector_base_int__std__allocator_int__* base2535 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2386 + 0);
              struct std__allocator_int_* r2536 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base2535);
              int* r2537 = int__std____uninitialized_move_if_noexcept_a_int___int___std__allocator_int___(t2532, t2533, t2534, r2536);
              if (__cir_exc_active) {
                goto cir_try_dispatch2517;
              }
              __new_finish2501 = r2537;
            cir_try_dispatch2517: ;
            if (__cir_exc_active) {
            {
              int ca_tok2538 = 0;
              void* ca_exn2539 = (void*)__cir_exc_ptr;
              __cir_exc_active = 0;
                int* t2540 = __new_start2500;
                int* t2541 = __new_finish2501;
                struct std___Vector_base_int__std__allocator_int__* base2542 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2386 + 0);
                struct std__allocator_int_* r2543 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base2542);
                void_std___Destroy_int___int_(t2540, t2541, r2543);
                if (__cir_exc_active) {
                  {
                    if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                  }
                  return;
                }
                struct std___Vector_base_int__std__allocator_int__* base2544 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2386 + 0);
                int* t2545 = __new_start2500;
                unsigned long t2546 = __len2499;
                std___Vector_base_int__std__allocator_int______M_deallocate(base2544, t2545, t2546);
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
          int* t2547 = __old_start2497;
          int* t2548 = __old_finish2498;
          struct std___Vector_base_int__std__allocator_int__* base2549 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2386 + 0);
          struct std__allocator_int_* r2550 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base2549);
          void_std___Destroy_int___int_(t2547, t2548, r2550);
          if (__cir_exc_active) {
            return;
          }
          struct std___Vector_base_int__std__allocator_int__* base2551 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2386 + 0);
          int* t2552 = __old_start2497;
          struct std___Vector_base_int__std__allocator_int__* base2553 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2386 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2554 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base2553->_M_impl) + 0);
          int* t2555 = base2554->_M_end_of_storage;
          int* t2556 = __old_start2497;
          long diff2557 = t2555 - t2556;
          unsigned long cast2558 = (unsigned long)diff2557;
          std___Vector_base_int__std__allocator_int______M_deallocate(base2551, t2552, cast2558);
          if (__cir_exc_active) {
            return;
          }
          int* t2559 = __new_start2500;
          struct std___Vector_base_int__std__allocator_int__* base2560 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2386 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2561 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base2560->_M_impl) + 0);
          base2561->_M_start = t2559;
          int* t2562 = __new_finish2501;
          struct std___Vector_base_int__std__allocator_int__* base2563 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2386 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2564 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base2563->_M_impl) + 0);
          base2564->_M_finish = t2562;
          int* t2565 = __new_start2500;
          unsigned long t2566 = __len2499;
          int* ptr2567 = &(t2565)[t2566];
          struct std___Vector_base_int__std__allocator_int__* base2568 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2386 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2569 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base2568->_M_impl) + 0);
          base2569->_M_end_of_storage = ptr2567;
        }
    }
  return;
}

// function: _ZSt19__iterator_categoryIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEENSt15iterator_traitsIT_E17iterator_categoryERKS8_
struct std__random_access_iterator_tag std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v2570) {
bb2571:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed2572;
  struct std__random_access_iterator_tag __retval2573;
  unnamed2572 = v2570;
  struct std__random_access_iterator_tag t2574 = __retval2573;
  return t2574;
}

// function: _ZNSt6vectorIiSaIiEE6insertIN9__gnu_cxx17__normal_iteratorIPiS1_EEvEES6_NS4_IPKiS1_EET_SA_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__vector_int__std__allocator_int_____insert___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______void_(struct std__vector_int__std__allocator_int__* v2575, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v2576, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v2577, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v2578) {
bb2579:
  struct std__vector_int__std__allocator_int__* this2580;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __position2581;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first2582;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last2583;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval2584;
  long __offset2585;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp02586;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp02587;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp12588;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp12589;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp22590;
  struct std__forward_iterator_tag agg_tmp32591;
  struct std__random_access_iterator_tag ref_tmp22592;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp32593;
  this2580 = v2575;
  __position2581 = v2576;
  __first2582 = v2577;
  __last2583 = v2578;
  struct std__vector_int__std__allocator_int__* t2594 = this2580;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r2595 = std__vector_int__std__allocator_int_____cbegin___const(t2594);
  ref_tmp02586 = r2595;
  long r2596 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int_const___std__vector_int__std__allocator_int_____(&__position2581, &ref_tmp02586);
  __offset2585 = r2596;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2597 = std__vector_int__std__allocator_int_____begin(t2594);
  ref_tmp12588 = r2597;
  long t2598 = __offset2585;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2599 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&ref_tmp12588, t2598);
  agg_tmp02587 = r2599;
  agg_tmp12589 = __first2582; // copy
  agg_tmp22590 = __last2583; // copy
  struct std__random_access_iterator_tag r2600 = std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__first2582);
  if (__cir_exc_active) {
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  ref_tmp22592 = r2600;
  struct std__forward_iterator_tag* base2601 = (struct std__forward_iterator_tag*)((char *)&(ref_tmp22592) + 0);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2602 = agg_tmp02587;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2603 = agg_tmp12589;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2604 = agg_tmp22590;
  struct std__forward_iterator_tag t2605 = agg_tmp32591;
  void_std__vector_int__std__allocator_int______M_range_insert___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t2594, t2602, t2603, t2604, t2605);
  if (__cir_exc_active) {
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2606 = std__vector_int__std__allocator_int_____begin(t2594);
  ref_tmp32593 = r2606;
  long t2607 = __offset2585;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2608 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&ref_tmp32593, t2607);
  __retval2584 = r2608;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2609 = __retval2584;
  return t2609;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v2610) {
bb2611:
  struct std__vector_int__std__allocator_int__* this2612;
  this2612 = v2610;
  struct std__vector_int__std__allocator_int__* t2613 = this2612;
    struct std___Vector_base_int__std__allocator_int__* base2614 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2613 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2615 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base2614->_M_impl) + 0);
    int* t2616 = base2615->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base2617 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2613 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2618 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base2617->_M_impl) + 0);
    int* t2619 = base2618->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base2620 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2613 + 0);
    struct std__allocator_int_* r2621 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base2620);
    void_std___Destroy_int___int_(t2616, t2619, r2621);
    if (__cir_exc_active) {
      {
        struct std___Vector_base_int__std__allocator_int__* base2622 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2613 + 0);
        std___Vector_base_int__std__allocator_int_______Vector_base(base2622);
      }
      return;
    }
  {
    struct std___Vector_base_int__std__allocator_int__* base2623 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2613 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base2623);
  }
  return;
}

// function: main
int main() {
bb2624:
  int __retval2625;
  struct std__vector_int__std__allocator_int__ v12626;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ Iter2627;
  int ref_tmp02628;
  int ref_tmp12629;
  int ref_tmp22630;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp12631;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp52632;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp62633;
  int ref_tmp72634;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp22635;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp42636;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp102637;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp112638;
  int ref_tmp122639;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp52640;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp72641;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp152642;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp162643;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp82644;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp172645;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp92646;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp182647;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp102648;
  int c2649 = 0;
  __retval2625 = c2649;
  std__vector_int__std__allocator_int_____vector(&v12626);
    __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&Iter2627);
    int c2650 = 10;
    ref_tmp02628 = c2650;
    std__vector_int__std__allocator_int_____push_back(&v12626, &ref_tmp02628);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&v12626);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c2651 = 20;
    ref_tmp12629 = c2651;
    std__vector_int__std__allocator_int_____push_back(&v12626, &ref_tmp12629);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&v12626);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c2652 = 30;
    ref_tmp22630 = c2652;
    std__vector_int__std__allocator_int_____push_back(&v12626, &ref_tmp22630);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&v12626);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    char* cast2653 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r2654 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast2653);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&v12626);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp32655;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp42656;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp02657;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2658 = std__vector_int__std__allocator_int_____begin(&v12626);
      ref_tmp32655 = r2658;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r2659 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&Iter2627, &ref_tmp32655);
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2661 = std__vector_int__std__allocator_int_____end(&v12626);
        ref_tmp42656 = r2661;
        _Bool r2662 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&Iter2627, &ref_tmp42656);
        _Bool u2663 = !r2662;
        if (!u2663) break;
        char* cast2664 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* r2665 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast2664);
        if (__cir_exc_active) {
          {
            std__vector_int__std__allocator_int______vector(&v12626);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        int* r2666 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&Iter2627);
        int t2667 = *r2666;
        struct std__basic_ostream_char__std__char_traits_char__* r2668 = std__ostream__operator__(r2665, t2667);
        if (__cir_exc_active) {
          {
            std__vector_int__std__allocator_int______vector(&v12626);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
      for_step2660: ;
        int c2669 = 0;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2670 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___3(&Iter2627, c2669);
        agg_tmp02657 = r2670;
      }
    struct std__basic_ostream_char__std__char_traits_char__* r2671 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&v12626);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2672 = std__vector_int__std__allocator_int_____begin(&v12626);
    ref_tmp62633 = r2672;
    long c2673 = 1;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2674 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&ref_tmp62633, c2673);
    ref_tmp52632 = r2674;
    _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2IPiQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE(&agg_tmp12631, &ref_tmp52632);
    int c2675 = 40;
    ref_tmp72634 = c2675;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t2676 = agg_tmp12631;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2677 = std__vector_int__std__allocator_int_____insert(&v12626, t2676, &ref_tmp72634);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&v12626);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp22635 = r2677;
    char* cast2678 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r2679 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast2678);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&v12626);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp82680;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp92681;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp32682;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2683 = std__vector_int__std__allocator_int_____begin(&v12626);
      ref_tmp82680 = r2683;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r2684 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&Iter2627, &ref_tmp82680);
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2686 = std__vector_int__std__allocator_int_____end(&v12626);
        ref_tmp92681 = r2686;
        _Bool r2687 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&Iter2627, &ref_tmp92681);
        _Bool u2688 = !r2687;
        if (!u2688) break;
        char* cast2689 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* r2690 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast2689);
        if (__cir_exc_active) {
          {
            std__vector_int__std__allocator_int______vector(&v12626);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        int* r2691 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&Iter2627);
        int t2692 = *r2691;
        struct std__basic_ostream_char__std__char_traits_char__* r2693 = std__ostream__operator__(r2690, t2692);
        if (__cir_exc_active) {
          {
            std__vector_int__std__allocator_int______vector(&v12626);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
      for_step2685: ;
        int c2694 = 0;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2695 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___3(&Iter2627, c2694);
        agg_tmp32682 = r2695;
      }
    struct std__basic_ostream_char__std__char_traits_char__* r2696 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&v12626);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2697 = std__vector_int__std__allocator_int_____begin(&v12626);
    ref_tmp112638 = r2697;
    long c2698 = 2;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2699 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&ref_tmp112638, c2698);
    ref_tmp102637 = r2699;
    _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2IPiQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE(&agg_tmp42636, &ref_tmp102637);
    unsigned long c2700 = 4;
    int c2701 = 50;
    ref_tmp122639 = c2701;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t2702 = agg_tmp42636;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2703 = std__vector_int__std__allocator_int_____insert_2(&v12626, t2702, c2700, &ref_tmp122639);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&v12626);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp52640 = r2703;
    char* cast2704 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r2705 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast2704);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&v12626);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp132706;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp142707;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp62708;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2709 = std__vector_int__std__allocator_int_____begin(&v12626);
      ref_tmp132706 = r2709;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r2710 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&Iter2627, &ref_tmp132706);
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2712 = std__vector_int__std__allocator_int_____end(&v12626);
        ref_tmp142707 = r2712;
        _Bool r2713 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&Iter2627, &ref_tmp142707);
        _Bool u2714 = !r2713;
        if (!u2714) break;
        char* cast2715 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* r2716 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast2715);
        if (__cir_exc_active) {
          {
            std__vector_int__std__allocator_int______vector(&v12626);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        int* r2717 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&Iter2627);
        int t2718 = *r2717;
        struct std__basic_ostream_char__std__char_traits_char__* r2719 = std__ostream__operator__(r2716, t2718);
        if (__cir_exc_active) {
          {
            std__vector_int__std__allocator_int______vector(&v12626);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
      for_step2711: ;
        int c2720 = 0;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2721 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___3(&Iter2627, c2720);
        agg_tmp62708 = r2721;
      }
    struct std__basic_ostream_char__std__char_traits_char__* r2722 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&v12626);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2723 = std__vector_int__std__allocator_int_____begin(&v12626);
    ref_tmp162643 = r2723;
    long c2724 = 1;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2725 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&ref_tmp162643, c2724);
    ref_tmp152642 = r2725;
    _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2IPiQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE(&agg_tmp72641, &ref_tmp152642);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2726 = std__vector_int__std__allocator_int_____begin(&v12626);
    ref_tmp172645 = r2726;
    long c2727 = 2;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2728 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&ref_tmp172645, c2727);
    agg_tmp82644 = r2728;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2729 = std__vector_int__std__allocator_int_____begin(&v12626);
    ref_tmp182647 = r2729;
    long c2730 = 4;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2731 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&ref_tmp182647, c2730);
    agg_tmp92646 = r2731;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t2732 = agg_tmp72641;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2733 = agg_tmp82644;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2734 = agg_tmp92646;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2735 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__vector_int__std__allocator_int_____insert___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______void_(&v12626, t2732, t2733, t2734);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&v12626);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp102648 = r2735;
    char* cast2736 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r2737 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast2736);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&v12626);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp192738;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp202739;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp112740;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2741 = std__vector_int__std__allocator_int_____begin(&v12626);
      ref_tmp192738 = r2741;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r2742 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&Iter2627, &ref_tmp192738);
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2744 = std__vector_int__std__allocator_int_____end(&v12626);
        ref_tmp202739 = r2744;
        _Bool r2745 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&Iter2627, &ref_tmp202739);
        _Bool u2746 = !r2745;
        if (!u2746) break;
        char* cast2747 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* r2748 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast2747);
        if (__cir_exc_active) {
          {
            std__vector_int__std__allocator_int______vector(&v12626);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        int* r2749 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&Iter2627);
        int t2750 = *r2749;
        struct std__basic_ostream_char__std__char_traits_char__* r2751 = std__ostream__operator__(r2748, t2750);
        if (__cir_exc_active) {
          {
            std__vector_int__std__allocator_int______vector(&v12626);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
      for_step2743: ;
        int c2752 = 0;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2753 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___3(&Iter2627, c2752);
        agg_tmp112740 = r2753;
      }
    struct std__basic_ostream_char__std__char_traits_char__* r2754 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&v12626);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
  {
    std__vector_int__std__allocator_int______vector(&v12626);
  }
  int t2755 = __retval2625;
  return t2755;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v2756) {
bb2757:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this2758;
  this2758 = v2756;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t2759 = this2758;
  struct std__allocator_int_* base2760 = (struct std__allocator_int_*)((char *)t2759 + 0);
  std__allocator_int___allocator(base2760);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2761 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t2759 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base2761);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v2762) {
bb2763:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this2764;
  this2764 = v2762;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t2765 = this2764;
  {
    struct std__allocator_int_* base2766 = (struct std__allocator_int_*)((char *)t2765 + 0);
    std__allocator_int____allocator(base2766);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2Ev
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v2767) {
bb2768:
  struct std___Vector_base_int__std__allocator_int__* this2769;
  this2769 = v2767;
  struct std___Vector_base_int__std__allocator_int__* t2770 = this2769;
  _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(&t2770->_M_impl);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb2771:
  _Bool __retval2772;
    _Bool c2773 = 0;
    __retval2772 = c2773;
    _Bool t2774 = __retval2772;
    return t2774;
  abort();
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v2775, int* v2776, unsigned long v2777) {
bb2778:
  struct std____new_allocator_int_* this2779;
  int* __p2780;
  unsigned long __n2781;
  this2779 = v2775;
  __p2780 = v2776;
  __n2781 = v2777;
  struct std____new_allocator_int_* t2782 = this2779;
    unsigned long c2783 = 4;
    unsigned long c2784 = 16;
    _Bool c2785 = ((c2783 > c2784)) ? 1 : 0;
    if (c2785) {
      int* t2786 = __p2780;
      void* cast2787 = (void*)t2786;
      unsigned long t2788 = __n2781;
      unsigned long c2789 = 4;
      unsigned long b2790 = t2788 * c2789;
      unsigned long c2791 = 4;
      operator_delete_3(cast2787, b2790, c2791);
      return;
    }
  int* t2792 = __p2780;
  void* cast2793 = (void*)t2792;
  unsigned long t2794 = __n2781;
  unsigned long c2795 = 4;
  unsigned long b2796 = t2794 * c2795;
  operator_delete_2(cast2793, b2796);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v2797, int* v2798, unsigned long v2799) {
bb2800:
  struct std__allocator_int_* this2801;
  int* __p2802;
  unsigned long __n2803;
  this2801 = v2797;
  __p2802 = v2798;
  __n2803 = v2799;
  struct std__allocator_int_* t2804 = this2801;
    _Bool r2805 = std____is_constant_evaluated();
    if (r2805) {
      int* t2806 = __p2802;
      void* cast2807 = (void*)t2806;
      operator_delete(cast2807);
      return;
    }
  struct std____new_allocator_int_* base2808 = (struct std____new_allocator_int_*)((char *)t2804 + 0);
  int* t2809 = __p2802;
  unsigned long t2810 = __n2803;
  std____new_allocator_int___deallocate(base2808, t2809, t2810);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v2811, int* v2812, unsigned long v2813) {
bb2814:
  struct std__allocator_int_* __a2815;
  int* __p2816;
  unsigned long __n2817;
  __a2815 = v2811;
  __p2816 = v2812;
  __n2817 = v2813;
  struct std__allocator_int_* t2818 = __a2815;
  int* t2819 = __p2816;
  unsigned long t2820 = __n2817;
  std__allocator_int___deallocate(t2818, t2819, t2820);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v2821, int* v2822, unsigned long v2823) {
bb2824:
  struct std___Vector_base_int__std__allocator_int__* this2825;
  int* __p2826;
  unsigned long __n2827;
  this2825 = v2821;
  __p2826 = v2822;
  __n2827 = v2823;
  struct std___Vector_base_int__std__allocator_int__* t2828 = this2825;
    int* t2829 = __p2826;
    _Bool cast2830 = (_Bool)t2829;
    if (cast2830) {
      struct std__allocator_int_* base2831 = (struct std__allocator_int_*)((char *)&(t2828->_M_impl) + 0);
      int* t2832 = __p2826;
      unsigned long t2833 = __n2827;
      std__allocator_traits_std__allocator_int_____deallocate(base2831, t2832, t2833);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v2834) {
bb2835:
  struct std___Vector_base_int__std__allocator_int__* this2836;
  this2836 = v2834;
  struct std___Vector_base_int__std__allocator_int__* t2837 = this2836;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2838 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t2837->_M_impl) + 0);
    int* t2839 = base2838->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2840 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t2837->_M_impl) + 0);
    int* t2841 = base2840->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2842 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t2837->_M_impl) + 0);
    int* t2843 = base2842->_M_start;
    long diff2844 = t2841 - t2843;
    unsigned long cast2845 = (unsigned long)diff2844;
    std___Vector_base_int__std__allocator_int______M_deallocate(t2837, t2839, cast2845);
    if (__cir_exc_active) {
      {
        std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t2837->_M_impl);
      }
      return;
    }
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t2837->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v2846) {
bb2847:
  struct std____new_allocator_int_* this2848;
  this2848 = v2846;
  struct std____new_allocator_int_* t2849 = this2848;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v2850) {
bb2851:
  struct std__allocator_int_* this2852;
  this2852 = v2850;
  struct std__allocator_int_* t2853 = this2852;
  struct std____new_allocator_int_* base2854 = (struct std____new_allocator_int_*)((char *)t2853 + 0);
  std____new_allocator_int_____new_allocator(base2854);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v2855) {
bb2856:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this2857;
  this2857 = v2855;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t2858 = this2857;
  int* c2859 = ((void*)0);
  t2858->_M_start = c2859;
  int* c2860 = ((void*)0);
  t2858->_M_finish = c2860;
  int* c2861 = ((void*)0);
  t2858->_M_end_of_storage = c2861;
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v2862) {
bb2863:
  struct std__allocator_int_* this2864;
  this2864 = v2862;
  struct std__allocator_int_* t2865 = this2864;
  return;
}

// function: _ZNSt6vectorIiSaIiEE16_Temporary_value8_StorageC2Ev
void std__vector_int__std__allocator_int______Temporary_value___Storage___Storage(union std__vector_int__std__allocator_int_____Temporary_value___Storage* v2866) {
bb2867:
  union std__vector_int__std__allocator_int_____Temporary_value___Storage* this2868;
  this2868 = v2866;
  union std__vector_int__std__allocator_int_____Temporary_value___Storage* t2869 = this2868;
  unsigned char c2870 = 0;
  t2869->_M_byte = c2870;
  return;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v2871, int* v2872) {
bb2873:
  int* __location2874;
  int* __args2875;
  int* __retval2876;
  void* __loc2877;
  __location2874 = v2871;
  __args2875 = v2872;
  int* t2878 = __location2874;
  void* cast2879 = (void*)t2878;
  __loc2877 = cast2879;
    void* t2880 = __loc2877;
    int* cast2881 = (int*)t2880;
    int* t2882 = __args2875;
    int t2883 = *t2882;
    *cast2881 = t2883;
    __retval2876 = cast2881;
    int* t2884 = __retval2876;
    return t2884;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJRKiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(struct std__allocator_int_* v2885, int* v2886, int* v2887) {
bb2888:
  struct std__allocator_int_* __a2889;
  int* __p2890;
  int* __args2891;
  __a2889 = v2885;
  __p2890 = v2886;
  __args2891 = v2887;
  int* t2892 = __p2890;
  int* t2893 = __args2891;
  int* r2894 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t2892, t2893);
  return;
}

// function: _ZNSt6vectorIiSaIiEE16_Temporary_value6_M_ptrEv
int* std__vector_int__std__allocator_int______Temporary_value___M_ptr(struct std__vector_int__std__allocator_int_____Temporary_value* v2895) {
bb2896:
  struct std__vector_int__std__allocator_int_____Temporary_value* this2897;
  int* __retval2898;
  this2897 = v2895;
  struct std__vector_int__std__allocator_int_____Temporary_value* t2899 = this2897;
  __retval2898 = &t2899->_M_storage._M_val;
  int* t2900 = __retval2898;
  return t2900;
}

// function: _ZNSt6vectorIiSaIiEE16_Temporary_value8_StorageD2Ev
void std__vector_int__std__allocator_int______Temporary_value___Storage____Storage(union std__vector_int__std__allocator_int_____Temporary_value___Storage* v2901) {
bb2902:
  union std__vector_int__std__allocator_int_____Temporary_value___Storage* this2903;
  this2903 = v2901;
  union std__vector_int__std__allocator_int_____Temporary_value___Storage* t2904 = this2903;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v2905, int* v2906) {
bb2907:
  int* __first2908;
  int* __last2909;
  __first2908 = v2905;
  __last2909 = v2906;
      _Bool r2910 = std____is_constant_evaluated();
      if (r2910) {
          while (1) {
            int* t2912 = __first2908;
            int* t2913 = __last2909;
            _Bool c2914 = ((t2912 != t2913)) ? 1 : 0;
            if (!c2914) break;
            int* t2915 = __first2908;
            void_std__destroy_at_int_(t2915);
            if (__cir_exc_active) {
              return;
            }
          for_step2911: ;
            int* t2916 = __first2908;
            int c2917 = 1;
            int* ptr2918 = &(t2916)[c2917];
            __first2908 = ptr2918;
          }
      }
  return;
}

