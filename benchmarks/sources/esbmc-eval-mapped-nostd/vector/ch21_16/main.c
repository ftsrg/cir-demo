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
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____ops___Iter_equals_val_const_int_ { int* _M_value; };
struct __gnu_cxx____ops___Iter_pred_bool_____int__ { void* _M_pred; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_ { unsigned char __field0; };
struct std__allocator_int_ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__iterator_std__output_iterator_tag__void__void__void__void_ { unsigned char __field0; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__ostream_iterator_int__char__std__char_traits_char__ { struct std__basic_ostream_char__std__char_traits_char__* _M_stream; char* _M_string; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__ranges____distance_fn { unsigned char __field0; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_a[10] = {10, 2, 10, 4, 16, 6, 14, 8, 12, 10};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[2] = " ";
char _str_1[40] = "Vector v1 before replacing all 10s:\n   ";
char _str_2[46] = "\nVector v1 after replacing 10s with 100s:\n   ";
char _str_3[38] = "\n\nVector v2 before replacing all 10s ";
char _str_4[17] = "and copying:\n   ";
char _str_5[46] = "\nVector c1 after replacing all 10s in v2:\n   ";
char _str_6[44] = "\n\nVector v3 before replacing values greater";
char _str_7[13] = " than 9:\n   ";
char _str_8[46] = "\nVector v3 after replacing all values greater";
char _str_9[23] = "\nthan 9 with 100s:\n   ";
char _str_10[49] = "\n\nVector v4 before replacing all values greater ";
char _str_11[24] = "than 9 and copying:\n   ";
char _str_12[47] = "\nVector c2 after replacing all values greater ";
char _str_13[18] = "than 9 in v4:\n   ";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_14[49] = "cannot create std::vector larger than max_size()";
void std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator_2(struct std__ostream_iterator_int__char__std__char_traits_char__* p0, struct std__basic_ostream_char__std__char_traits_char__* p1, char* p2);
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector_int___void_(struct std__vector_int__std__allocator_int__* p0, int* p1, int* p2, struct std__allocator_int_* p3);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
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
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____niter_wrap_std__ostream_iterator_int__char__std__char_traits_char_____(struct std__ostream_iterator_int__char__std__char_traits_char__* p0, struct std__ostream_iterator_int__char__std__char_traits_char__ p1);
struct std__ostream_iterator_int__char__std__char_traits_char__* std__ostream_iterator_int__char__std__char_traits_char_____operator__2(struct std__ostream_iterator_int__char__std__char_traits_char__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
struct std__ostream_iterator_int__char__std__char_traits_char__* std__ostream_iterator_int__char__std__char_traits_char_____operator_(struct std__ostream_iterator_int__char__std__char_traits_char__* p0, int* p1);
void void_std____assign_one_false__std__ostream_iterator_int__char__std__char_traits_char_____int__(struct std__ostream_iterator_int__char__std__char_traits_char__* p0, int** p1);
struct std__ostream_iterator_int__char__std__char_traits_char__* std__ostream_iterator_int__char__std__char_traits_char_____operator__(struct std__ostream_iterator_int__char__std__char_traits_char__* p0);
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a2_false__int___int___std__ostream_iterator_int__char__std__char_traits_char_____(int* p0, int* p1, struct std__ostream_iterator_int__char__std__char_traits_char__ p2);
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a1_false__int___std__ostream_iterator_int__char__std__char_traits_char_____(int* p0, int* p1, struct std__ostream_iterator_int__char__std__char_traits_char__ p2);
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
int* int__std____niter_base_int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0);
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____niter_base_std__ostream_iterator_int__char__std__char_traits_char_____(struct std__ostream_iterator_int__char__std__char_traits_char__ p0);
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a_false____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct std__ostream_iterator_int__char__std__char_traits_char__ p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0);
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct std__ostream_iterator_int__char__std__char_traits_char__ p2);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
void std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(struct std__ostream_iterator_int__char__std__char_traits_char__* p0, struct std__ostream_iterator_int__char__std__char_traits_char__* p1);
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
void void_std__replace___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2, int* p3);
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, struct std__allocator_int_* p2);
_Bool bool___gnu_cxx____ops___Iter_equals_val_int_const___operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____ops___Iter_equals_val_const_int_* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____replace_copy_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_equals_val_int_const___int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, struct __gnu_cxx____ops___Iter_equals_val_const_int_ p3, int* p4);
void __gnu_cxx____ops___Iter_equals_val_int_const____Iter_equals_val(struct __gnu_cxx____ops___Iter_equals_val_const_int_* p0, int* p1);
struct __gnu_cxx____ops___Iter_equals_val_const_int_ __gnu_cxx____ops___Iter_equals_val_int_const____gnu_cxx____ops____iter_equals_val_int_const_(int* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__replace_copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, int* p3, int* p4);
void void_std__replace_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool_____int___int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, void* p2, int* p3);
_Bool greater9(int p0);
_Bool bool___gnu_cxx____ops___Iter_pred_bool_____int____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____ops___Iter_pred_bool_____int__* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____replace_copy_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_pred_bool_____int____int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_pred_bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, struct __gnu_cxx____ops___Iter_pred_bool_____int__ p3, int* p4);
void __gnu_cxx____ops___Iter_pred_bool_____int_____Iter_pred_bool____(struct __gnu_cxx____ops___Iter_pred_bool_____int__* p0, void* p1);
struct __gnu_cxx____ops___Iter_pred_bool_____int__ __gnu_cxx____ops___Iter_pred_bool_____int_____gnu_cxx____ops____pred_iter_bool_____int___bool____(void* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__replace_copy_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool_____int___int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, void* p3, int* p4);
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
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0, struct std__allocator_int_* p1);
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0);
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* p0, struct std__allocator_int_* p1);
long _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_(struct std__ranges____distance_fn* p0, int** p1, int* p2);
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
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* p0);
void std__allocator_int___allocator(struct std__allocator_int_* p0, struct std__allocator_int_* p1);
extern void std____throw_length_error(char* p0);
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long p0, struct std__allocator_int_* p1);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* p0);
_Bool std__is_constant_evaluated();
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* p0, int** p1);
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* p0, int* p1);
void void_std___Construct_int__int__(int* p0, int* p1);
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* p0);
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* p0);
int* int__std____do_uninit_copy_int___int___int__(int* p0, int* p1, int* p2);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
int* int__std____niter_base_int__(int* p0);
int* int__std__uninitialized_copy_int___int__(int* p0, int* p1, int* p2);
int* int__std____uninitialized_copy_a_int___int___int___int_(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
void void_std__vector_int__std__allocator_int______M_range_initialize_n_int___int__(struct std__vector_int__std__allocator_int__* p0, int* p1, int* p2, unsigned long p3);
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
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* p0, unsigned long p1);
void std___Vector_base_int__std__allocator_int______Vector_base_2(struct std___Vector_base_int__std__allocator_int__* p0, unsigned long p1, struct std__allocator_int_* p2);
int* _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* p0);
void void_std___Construct_int_(int* p0);
int* int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(int* p0, unsigned long p1);
void void_std____fill_a1_int___int_(int* p0, int* p1, int* p2);
void void_std____fill_a_int___int_(int* p0, int* p1, int* p2);
int* int__std____fill_n_a_int___unsigned_long__int_(int* p0, unsigned long p1, int* p2, struct std__random_access_iterator_tag p3);
unsigned long std____size_to_integer(unsigned long p0);
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** p0);
int* int__std__fill_n_int___unsigned_long__int_(int* p0, unsigned long p1, int* p2);
int* int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(int* p0, unsigned long p1);
int* int__std____uninitialized_default_n_int___unsigned_long_(int* p0, unsigned long p1);
int* int__std____uninitialized_default_n_a_int___unsigned_long__int_(int* p0, unsigned long p1, struct std__allocator_int_* p2);
void std__vector_int__std__allocator_int______M_default_initialize(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);

// function: _ZNSt16ostream_iteratorIicSt11char_traitsIcEEC2ERSoPKc
void std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator_2(struct std__ostream_iterator_int__char__std__char_traits_char__* v0, struct std__basic_ostream_char__std__char_traits_char__* v1, char* v2) {
bb3:
  struct std__ostream_iterator_int__char__std__char_traits_char__* this4;
  struct std__basic_ostream_char__std__char_traits_char__* __s5;
  char* __c6;
  this4 = v0;
  __s5 = v1;
  __c6 = v2;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t7 = this4;
  struct std__iterator_std__output_iterator_tag__void__void__void__void_* base8 = (struct std__iterator_std__output_iterator_tag__void__void__void__void_*)((char *)t7 + 0);
  struct std__basic_ostream_char__std__char_traits_char__* t9 = __s5;
  t7->_M_stream = t9;
  char* t10 = __c6;
  t7->_M_string = t10;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator_2(struct std__allocator_int_* v11) {
bb12:
  struct std__allocator_int_* this13;
  this13 = v11;
  struct std__allocator_int_* t14 = this13;
  struct std____new_allocator_int_* base15 = (struct std____new_allocator_int_*)((char *)t14 + 0);
  std____new_allocator_int_____new_allocator_2(base15);
  return;
}

// function: _ZNSt6vectorIiSaIiEEC2IPivEET_S4_RKS0_
void std__vector_int__std__allocator_int_____vector_int___void_(struct std__vector_int__std__allocator_int__* v16, int* v17, int* v18, struct std__allocator_int_* v19) {
bb20:
  struct std__vector_int__std__allocator_int__* this21;
  int* __first22;
  int* __last23;
  struct std__allocator_int_* __a24;
  this21 = v16;
  __first22 = v17;
  __last23 = v18;
  __a24 = v19;
  struct std__vector_int__std__allocator_int__* t25 = this21;
  struct std___Vector_base_int__std__allocator_int__* base26 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t25 + 0);
  struct std__allocator_int_* t27 = __a24;
  std___Vector_base_int__std__allocator_int______Vector_base(base26, t27);
      unsigned long __n28;
      int* t29 = __last23;
      long r30 = _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_(&_ZNSt6ranges8distanceE, &__first22, t29);
      unsigned long cast31 = (unsigned long)r30;
      __n28 = cast31;
      int* t32 = __first22;
      int* t33 = __last23;
      unsigned long t34 = __n28;
      void_std__vector_int__std__allocator_int______M_range_initialize_n_int___int__(t25, t32, t33, t34);
      {
        struct std___Vector_base_int__std__allocator_int__* base35 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t25 + 0);
        std___Vector_base_int__std__allocator_int_______Vector_base(base35);
      }
      return;
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v36) {
bb37:
  struct std__allocator_int_* this38;
  this38 = v36;
  struct std__allocator_int_* t39 = this38;
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v40, int v41) {
bb42:
  int __a43;
  int __b44;
  int __retval45;
  __a43 = v40;
  __b44 = v41;
  int t46 = __a43;
  int t47 = __b44;
  int b48 = t46 | t47;
  __retval45 = b48;
  int t49 = __retval45;
  return t49;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v50) {
bb51:
  struct std__basic_ios_char__std__char_traits_char__* this52;
  int __retval53;
  this52 = v50;
  struct std__basic_ios_char__std__char_traits_char__* t54 = this52;
  struct std__ios_base* base55 = (struct std__ios_base*)((char *)t54 + 0);
  int t56 = base55->_M_streambuf_state;
  __retval53 = t56;
  int t57 = __retval53;
  return t57;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v58, int v59) {
bb60:
  struct std__basic_ios_char__std__char_traits_char__* this61;
  int __state62;
  this61 = v58;
  __state62 = v59;
  struct std__basic_ios_char__std__char_traits_char__* t63 = this61;
  int r64 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t63);
  int t65 = __state62;
  int r66 = std__operator_(r64, t65);
  std__basic_ios_char__std__char_traits_char_____clear(t63, r66);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v67, char* v68) {
bb69:
  char* __c170;
  char* __c271;
  _Bool __retval72;
  __c170 = v67;
  __c271 = v68;
  char* t73 = __c170;
  char t74 = *t73;
  int cast75 = (int)t74;
  char* t76 = __c271;
  char t77 = *t76;
  int cast78 = (int)t77;
  _Bool c79 = ((cast75 == cast78)) ? 1 : 0;
  __retval72 = c79;
  _Bool t80 = __retval72;
  return t80;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v81) {
bb82:
  char* __p83;
  unsigned long __retval84;
  unsigned long __i85;
  __p83 = v81;
  unsigned long c86 = 0;
  __i85 = c86;
    char ref_tmp087;
    while (1) {
      unsigned long t88 = __i85;
      char* t89 = __p83;
      char* ptr90 = &(t89)[t88];
      char c91 = 0;
      ref_tmp087 = c91;
      _Bool r92 = __gnu_cxx__char_traits_char___eq(ptr90, &ref_tmp087);
      _Bool u93 = !r92;
      if (!u93) break;
      unsigned long t94 = __i85;
      unsigned long u95 = t94 + 1;
      __i85 = u95;
    }
  unsigned long t96 = __i85;
  __retval84 = t96;
  unsigned long t97 = __retval84;
  return t97;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v98) {
bb99:
  char* __s100;
  unsigned long __retval101;
  __s100 = v98;
    _Bool r102 = std____is_constant_evaluated();
    if (r102) {
      char* t103 = __s100;
      unsigned long r104 = __gnu_cxx__char_traits_char___length(t103);
      __retval101 = r104;
      unsigned long t105 = __retval101;
      return t105;
    }
  char* t106 = __s100;
  unsigned long r107 = strlen(t106);
  __retval101 = r107;
  unsigned long t108 = __retval101;
  return t108;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v109, char* v110) {
bb111:
  struct std__basic_ostream_char__std__char_traits_char__* __out112;
  char* __s113;
  struct std__basic_ostream_char__std__char_traits_char__* __retval114;
  __out112 = v109;
  __s113 = v110;
    char* t115 = __s113;
    _Bool cast116 = (_Bool)t115;
    _Bool u117 = !cast116;
    if (u117) {
      struct std__basic_ostream_char__std__char_traits_char__* t118 = __out112;
      void** v119 = (void**)t118;
      void* v120 = *((void**)v119);
      unsigned char* cast121 = (unsigned char*)v120;
      long c122 = -24;
      unsigned char* ptr123 = &(cast121)[c122];
      long* cast124 = (long*)ptr123;
      long t125 = *cast124;
      unsigned char* cast126 = (unsigned char*)t118;
      unsigned char* ptr127 = &(cast126)[t125];
      struct std__basic_ostream_char__std__char_traits_char__* cast128 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr127;
      struct std__basic_ios_char__std__char_traits_char__* cast129 = (struct std__basic_ios_char__std__char_traits_char__*)cast128;
      int t130 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast129, t130);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t131 = __out112;
      char* t132 = __s113;
      char* t133 = __s113;
      unsigned long r134 = std__char_traits_char___length(t133);
      long cast135 = (long)r134;
      struct std__basic_ostream_char__std__char_traits_char__* r136 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t131, t132, cast135);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t137 = __out112;
  __retval114 = t137;
  struct std__basic_ostream_char__std__char_traits_char__* t138 = __retval114;
  return t138;
}

// function: _ZSt12__niter_wrapISt16ostream_iteratorIicSt11char_traitsIcEEET_RKS4_S4_
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____niter_wrap_std__ostream_iterator_int__char__std__char_traits_char_____(struct std__ostream_iterator_int__char__std__char_traits_char__* v139, struct std__ostream_iterator_int__char__std__char_traits_char__ v140) {
bb141:
  struct std__ostream_iterator_int__char__std__char_traits_char__* unnamed142;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __res143;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __retval144;
  unnamed142 = v139;
  __res143 = v140;
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&__retval144, &__res143);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t145 = __retval144;
  return t145;
}

// function: _ZNSt16ostream_iteratorIicSt11char_traitsIcEEdeEv
struct std__ostream_iterator_int__char__std__char_traits_char__* std__ostream_iterator_int__char__std__char_traits_char_____operator__2(struct std__ostream_iterator_int__char__std__char_traits_char__* v146) {
bb147:
  struct std__ostream_iterator_int__char__std__char_traits_char__* this148;
  struct std__ostream_iterator_int__char__std__char_traits_char__* __retval149;
  this148 = v146;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t150 = this148;
  __retval149 = t150;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t151 = __retval149;
  return t151;
}

// function: _ZNSt16ostream_iteratorIicSt11char_traitsIcEEaSERKi
struct std__ostream_iterator_int__char__std__char_traits_char__* std__ostream_iterator_int__char__std__char_traits_char_____operator_(struct std__ostream_iterator_int__char__std__char_traits_char__* v152, int* v153) {
bb154:
  struct std__ostream_iterator_int__char__std__char_traits_char__* this155;
  int* __value156;
  struct std__ostream_iterator_int__char__std__char_traits_char__* __retval157;
  this155 = v152;
  __value156 = v153;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t158 = this155;
  struct std__basic_ostream_char__std__char_traits_char__* t159 = t158->_M_stream;
  int* t160 = __value156;
  int t161 = *t160;
  struct std__basic_ostream_char__std__char_traits_char__* r162 = std__ostream__operator__(t159, t161);
    char* t163 = t158->_M_string;
    _Bool cast164 = (_Bool)t163;
    if (cast164) {
      struct std__basic_ostream_char__std__char_traits_char__* t165 = t158->_M_stream;
      char* t166 = t158->_M_string;
      struct std__basic_ostream_char__std__char_traits_char__* r167 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(t165, t166);
    }
  __retval157 = t158;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t168 = __retval157;
  return t168;
}

// function: _ZSt12__assign_oneILb0ESt16ostream_iteratorIicSt11char_traitsIcEEPiEvRT0_RT1_
void void_std____assign_one_false__std__ostream_iterator_int__char__std__char_traits_char_____int__(struct std__ostream_iterator_int__char__std__char_traits_char__* v169, int** v170) {
bb171:
  struct std__ostream_iterator_int__char__std__char_traits_char__* __out172;
  int** __in173;
  __out172 = v169;
  __in173 = v170;
    int** t174 = __in173;
    int* t175 = *t174;
    struct std__ostream_iterator_int__char__std__char_traits_char__* t176 = __out172;
    struct std__ostream_iterator_int__char__std__char_traits_char__* r177 = std__ostream_iterator_int__char__std__char_traits_char_____operator__2(t176);
    struct std__ostream_iterator_int__char__std__char_traits_char__* r178 = std__ostream_iterator_int__char__std__char_traits_char_____operator_(r177, t175);
  return;
}

// function: _ZNSt16ostream_iteratorIicSt11char_traitsIcEEppEv
struct std__ostream_iterator_int__char__std__char_traits_char__* std__ostream_iterator_int__char__std__char_traits_char_____operator__(struct std__ostream_iterator_int__char__std__char_traits_char__* v179) {
bb180:
  struct std__ostream_iterator_int__char__std__char_traits_char__* this181;
  struct std__ostream_iterator_int__char__std__char_traits_char__* __retval182;
  this181 = v179;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t183 = this181;
  __retval182 = t183;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t184 = __retval182;
  return t184;
}

// function: _ZSt14__copy_move_a2ILb0EPiS0_St16ostream_iteratorIicSt11char_traitsIcEEET2_T0_T1_S5_
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a2_false__int___int___std__ostream_iterator_int__char__std__char_traits_char_____(int* v185, int* v186, struct std__ostream_iterator_int__char__std__char_traits_char__ v187) {
bb188:
  int* __first189;
  int* __last190;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __result191;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __retval192;
  __first189 = v185;
  __last190 = v186;
  __result191 = v187;
    while (1) {
      int* t194 = __first189;
      int* t195 = __last190;
      _Bool c196 = ((t194 != t195)) ? 1 : 0;
      if (!c196) break;
      void_std____assign_one_false__std__ostream_iterator_int__char__std__char_traits_char_____int__(&__result191, &__first189);
    for_step193: ;
      struct std__ostream_iterator_int__char__std__char_traits_char__* r197 = std__ostream_iterator_int__char__std__char_traits_char_____operator__(&__result191);
      int* t198 = __first189;
      int c199 = 1;
      int* ptr200 = &(t198)[c199];
      __first189 = ptr200;
    }
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&__retval192, &__result191);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t201 = __retval192;
  return t201;
}

// function: _ZSt14__copy_move_a1ILb0EPiSt16ostream_iteratorIicSt11char_traitsIcEEET1_T0_S6_S5_
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a1_false__int___std__ostream_iterator_int__char__std__char_traits_char_____(int* v202, int* v203, struct std__ostream_iterator_int__char__std__char_traits_char__ v204) {
bb205:
  int* __first206;
  int* __last207;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __result208;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __retval209;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp0210;
  __first206 = v202;
  __last207 = v203;
  __result208 = v204;
  int* t211 = __first206;
  int* t212 = __last207;
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp0210, &__result208);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t213 = agg_tmp0210;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r214 = std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a2_false__int___int___std__ostream_iterator_int__char__std__char_traits_char_____(t211, t212, t213);
  __retval209 = r214;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t215 = __retval209;
  return t215;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v216) {
bb217:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this218;
  int** __retval219;
  this218 = v216;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t220 = this218;
  __retval219 = &t220->_M_current;
  int** t221 = __retval219;
  return t221;
}

// function: _ZSt12__niter_baseIPiSt6vectorIiSaIiEEET_N9__gnu_cxx17__normal_iteratorIS4_T0_EE
int* int__std____niter_base_int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v222) {
bb223:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it224;
  int* __retval225;
  __it224 = v222;
  int** r226 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__it224);
  int* t227 = *r226;
  __retval225 = t227;
  int* t228 = __retval225;
  return t228;
}

// function: _ZSt12__niter_baseISt16ostream_iteratorIicSt11char_traitsIcEEET_S4_
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____niter_base_std__ostream_iterator_int__char__std__char_traits_char_____(struct std__ostream_iterator_int__char__std__char_traits_char__ v229) {
bb230:
  struct std__ostream_iterator_int__char__std__char_traits_char__ __it231;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __retval232;
  __it231 = v229;
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&__retval232, &__it231);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t233 = __retval232;
  return t233;
}

// function: _ZSt13__copy_move_aILb0EN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEESt16ostream_iteratorIicSt11char_traitsIcEEET1_T0_SC_SB_
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a_false____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v234, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v235, struct std__ostream_iterator_int__char__std__char_traits_char__ v236) {
bb237:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first238;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last239;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __result240;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __retval241;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp0242;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1243;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2244;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp3245;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp4246;
  __first238 = v234;
  __last239 = v235;
  __result240 = v236;
  agg_tmp1243 = __first238; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t247 = agg_tmp1243;
  int* r248 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t247);
  agg_tmp2244 = __last239; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t249 = agg_tmp2244;
  int* r250 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t249);
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp4246, &__result240);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t251 = agg_tmp4246;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r252 = std__ostream_iterator_int__char__std__char_traits_char____std____niter_base_std__ostream_iterator_int__char__std__char_traits_char_____(t251);
  agg_tmp3245 = r252;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t253 = agg_tmp3245;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r254 = std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a1_false__int___std__ostream_iterator_int__char__std__char_traits_char_____(r248, r250, t253);
  agg_tmp0242 = r254;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t255 = agg_tmp0242;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r256 = std__ostream_iterator_int__char__std__char_traits_char____std____niter_wrap_std__ostream_iterator_int__char__std__char_traits_char_____(&__result240, t255);
  __retval241 = r256;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t257 = __retval241;
  return t257;
}

// function: _ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEET_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v258) {
bb259:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it260;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval261;
  __it260 = v258;
  __retval261 = __it260; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t262 = __retval261;
  return t262;
}

// function: _ZSt4copyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEESt16ostream_iteratorIicSt11char_traitsIcEEET0_T_SC_SB_
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v263, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v264, struct std__ostream_iterator_int__char__std__char_traits_char__ v265) {
bb266:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first267;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last268;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __result269;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __retval270;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0271;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1272;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2273;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3274;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp4275;
  __first267 = v263;
  __last268 = v264;
  __result269 = v265;
  agg_tmp1272 = __first267; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t276 = agg_tmp1272;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r277 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t276);
  agg_tmp0271 = r277;
  agg_tmp3274 = __last268; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t278 = agg_tmp3274;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r279 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t278);
  agg_tmp2273 = r279;
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp4275, &__result269);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t280 = agg_tmp0271;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t281 = agg_tmp2273;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t282 = agg_tmp4275;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r283 = std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a_false____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(t280, t281, t282);
  __retval270 = r283;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t284 = __retval270;
  return t284;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v285, int** v286) {
bb287:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this288;
  int** __i289;
  this288 = v285;
  __i289 = v286;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t290 = this288;
  int** t291 = __i289;
  int* t292 = *t291;
  t290->_M_current = t292;
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v293) {
bb294:
  struct std__vector_int__std__allocator_int__* this295;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval296;
  this295 = v293;
  struct std__vector_int__std__allocator_int__* t297 = this295;
  struct std___Vector_base_int__std__allocator_int__* base298 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t297 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base299 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base298->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval296, &base299->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t300 = __retval296;
  return t300;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v301) {
bb302:
  struct std__vector_int__std__allocator_int__* this303;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval304;
  this303 = v301;
  struct std__vector_int__std__allocator_int__* t305 = this303;
  struct std___Vector_base_int__std__allocator_int__* base306 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t305 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base307 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base306->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval304, &base307->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t308 = __retval304;
  return t308;
}

// function: _ZNSt16ostream_iteratorIicSt11char_traitsIcEEC2ERKS2_
void std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(struct std__ostream_iterator_int__char__std__char_traits_char__* v309, struct std__ostream_iterator_int__char__std__char_traits_char__* v310) {
bb311:
  struct std__ostream_iterator_int__char__std__char_traits_char__* this312;
  struct std__ostream_iterator_int__char__std__char_traits_char__* __obj313;
  this312 = v309;
  __obj313 = v310;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t314 = this312;
  struct std__iterator_std__output_iterator_tag__void__void__void__void_* base315 = (struct std__iterator_std__output_iterator_tag__void__void__void__void_*)((char *)t314 + 0);
  struct std__ostream_iterator_int__char__std__char_traits_char__* t316 = __obj313;
  struct std__basic_ostream_char__std__char_traits_char__* t317 = t316->_M_stream;
  t314->_M_stream = t317;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t318 = __obj313;
  char* t319 = t318->_M_string;
  t314->_M_string = t319;
  return;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v320, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v321) {
bb322:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs323;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs324;
  _Bool __retval325;
  __lhs323 = v320;
  __rhs324 = v321;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t326 = __lhs323;
  int** r327 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t326);
  int* t328 = *r327;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t329 = __rhs324;
  int** r330 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t329);
  int* t331 = *r330;
  _Bool c332 = ((t328 == t331)) ? 1 : 0;
  __retval325 = c332;
  _Bool t333 = __retval325;
  return t333;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v334) {
bb335:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this336;
  int* __retval337;
  this336 = v334;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t338 = this336;
  int* t339 = t338->_M_current;
  __retval337 = t339;
  int* t340 = __retval337;
  return t340;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v341) {
bb342:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this343;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval344;
  this343 = v341;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t345 = this343;
  int* t346 = t345->_M_current;
  int c347 = 1;
  int* ptr348 = &(t346)[c347];
  t345->_M_current = ptr348;
  __retval344 = t345;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t349 = __retval344;
  return t349;
}

// function: _ZSt7replaceIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiEvT_S7_RKT0_SA_
void void_std__replace___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v350, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v351, int* v352, int* v353) {
bb354:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first355;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last356;
  int* __old_value357;
  int* __new_value358;
  __first355 = v350;
  __last356 = v351;
  __old_value357 = v352;
  __new_value358 = v353;
    while (1) {
      _Bool r360 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first355, &__last356);
      _Bool u361 = !r360;
      if (!u361) break;
        int* r362 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first355);
        int t363 = *r362;
        int* t364 = __old_value357;
        int t365 = *t364;
        _Bool c366 = ((t363 == t365)) ? 1 : 0;
        if (c366) {
          int* t367 = __new_value358;
          int t368 = *t367;
          int* r369 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first355);
          *r369 = t368;
        }
    for_step359: ;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r370 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__first355);
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEEC2EmRKS0_
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* v371, unsigned long v372, struct std__allocator_int_* v373) {
bb374:
  struct std__vector_int__std__allocator_int__* this375;
  unsigned long __n376;
  struct std__allocator_int_* __a377;
  this375 = v371;
  __n376 = v372;
  __a377 = v373;
  struct std__vector_int__std__allocator_int__* t378 = this375;
  struct std___Vector_base_int__std__allocator_int__* base379 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t378 + 0);
  unsigned long t380 = __n376;
  struct std__allocator_int_* t381 = __a377;
  unsigned long r382 = std__vector_int__std__allocator_int______S_check_init_len(t380, t381);
  struct std__allocator_int_* t383 = __a377;
  std___Vector_base_int__std__allocator_int______Vector_base_2(base379, r382, t383);
    unsigned long t384 = __n376;
    std__vector_int__std__allocator_int______M_default_initialize(t378, t384);
  return;
}

// function: _ZN9__gnu_cxx5__ops16_Iter_equals_valIKiEclINS_17__normal_iteratorIPiSt6vectorIiSaIiEEEEEEbT_
_Bool bool___gnu_cxx____ops___Iter_equals_val_int_const___operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____ops___Iter_equals_val_const_int_* v385, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v386) {
bb387:
  struct __gnu_cxx____ops___Iter_equals_val_const_int_* this388;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it389;
  _Bool __retval390;
  this388 = v385;
  __it389 = v386;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_* t391 = this388;
  int* r392 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it389);
  int t393 = *r392;
  int* t394 = t391->_M_value;
  int t395 = *t394;
  _Bool c396 = ((t393 == t395)) ? 1 : 0;
  __retval390 = c396;
  _Bool t397 = __retval390;
  return t397;
}

// function: _ZSt17__replace_copy_ifIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_NS0_5__ops16_Iter_equals_valIKiEEiET0_T_SC_SB_T1_RKT2_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____replace_copy_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_equals_val_int_const___int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v398, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v399, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v400, struct __gnu_cxx____ops___Iter_equals_val_const_int_ v401, int* v402) {
bb403:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first404;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last405;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result406;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ __pred407;
  int* __new_value408;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval409;
  __first404 = v398;
  __last405 = v399;
  __result406 = v400;
  __pred407 = v401;
  __new_value408 = v402;
    while (1) {
      _Bool r411 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first404, &__last405);
      _Bool u412 = !r411;
      if (!u412) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0413;
        agg_tmp0413 = __first404; // copy
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t414 = agg_tmp0413;
        _Bool r415 = bool___gnu_cxx____ops___Iter_equals_val_int_const___operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__pred407, t414);
        if (r415) {
          int* t416 = __new_value408;
          int t417 = *t416;
          int* r418 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__result406);
          *r418 = t417;
        } else {
          int* r419 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first404);
          int t420 = *r419;
          int* r421 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__result406);
          *r421 = t420;
        }
    for_step410: ;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r422 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__first404);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r423 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__result406);
    }
  __retval409 = __result406; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t424 = __retval409;
  return t424;
}

// function: _ZN9__gnu_cxx5__ops16_Iter_equals_valIKiEC2ERS2_
void __gnu_cxx____ops___Iter_equals_val_int_const____Iter_equals_val(struct __gnu_cxx____ops___Iter_equals_val_const_int_* v425, int* v426) {
bb427:
  struct __gnu_cxx____ops___Iter_equals_val_const_int_* this428;
  int* __value429;
  this428 = v425;
  __value429 = v426;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_* t430 = this428;
  int* t431 = __value429;
  t430->_M_value = t431;
  return;
}

// function: _ZN9__gnu_cxx5__ops17__iter_equals_valIKiEENS0_16_Iter_equals_valIT_EERS4_
struct __gnu_cxx____ops___Iter_equals_val_const_int_ __gnu_cxx____ops___Iter_equals_val_int_const____gnu_cxx____ops____iter_equals_val_int_const_(int* v432) {
bb433:
  int* __val434;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ __retval435;
  __val434 = v432;
  int* t436 = __val434;
  __gnu_cxx____ops___Iter_equals_val_int_const____Iter_equals_val(&__retval435, t436);
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ t437 = __retval435;
  return t437;
}

// function: _ZSt12replace_copyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_iET0_T_S8_S7_RKT1_SB_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__replace_copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v438, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v439, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v440, int* v441, int* v442) {
bb443:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first444;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last445;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result446;
  int* __old_value447;
  int* __new_value448;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval449;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0450;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1451;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2452;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ agg_tmp3453;
  __first444 = v438;
  __last445 = v439;
  __result446 = v440;
  __old_value447 = v441;
  __new_value448 = v442;
  agg_tmp0450 = __first444; // copy
  agg_tmp1451 = __last445; // copy
  agg_tmp2452 = __result446; // copy
  int* t454 = __old_value447;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ r455 = __gnu_cxx____ops___Iter_equals_val_int_const____gnu_cxx____ops____iter_equals_val_int_const_(t454);
  agg_tmp3453 = r455;
  int* t456 = __new_value448;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t457 = agg_tmp0450;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t458 = agg_tmp1451;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t459 = agg_tmp2452;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ t460 = agg_tmp3453;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r461 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____replace_copy_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_equals_val_int_const___int_(t457, t458, t459, t460, t456);
  __retval449 = r461;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t462 = __retval449;
  return t462;
}

// function: _ZSt10replace_ifIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEPFbiEiEvT_S9_T0_RKT1_
void void_std__replace_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool_____int___int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v463, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v464, void* v465, int* v466) {
bb467:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first468;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last469;
  void* __pred470;
  int* __new_value471;
  __first468 = v463;
  __last469 = v464;
  __pred470 = v465;
  __new_value471 = v466;
    while (1) {
      _Bool r473 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first468, &__last469);
      _Bool u474 = !r473;
      if (!u474) break;
        void* t475 = __pred470;
        int* r476 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first468);
        int t477 = *r476;
        _Bool r478 = ((_Bool (*)(int))t475)(t477);
        if (r478) {
          int* t479 = __new_value471;
          int t480 = *t479;
          int* r481 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first468);
          *r481 = t480;
        }
    for_step472: ;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r482 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__first468);
    }
  return;
}

// function: _Z8greater9i
_Bool greater9(int v483) {
bb484:
  int x485;
  _Bool __retval486;
  x485 = v483;
  int t487 = x485;
  int c488 = 9;
  _Bool c489 = ((t487 > c488)) ? 1 : 0;
  __retval486 = c489;
  _Bool t490 = __retval486;
  return t490;
}

// function: _ZN9__gnu_cxx5__ops10_Iter_predIPFbiEEclINS_17__normal_iteratorIPiSt6vectorIiSaIiEEEEEEbT_
_Bool bool___gnu_cxx____ops___Iter_pred_bool_____int____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____ops___Iter_pred_bool_____int__* v491, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v492) {
bb493:
  struct __gnu_cxx____ops___Iter_pred_bool_____int__* this494;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it495;
  _Bool __retval496;
  this494 = v491;
  __it495 = v492;
  struct __gnu_cxx____ops___Iter_pred_bool_____int__* t497 = this494;
  void* t498 = t497->_M_pred;
  int* r499 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it495);
  int t500 = *r499;
  _Bool r501 = ((_Bool (*)(int))t498)(t500);
  __retval496 = r501;
  _Bool t502 = __retval496;
  return t502;
}

// function: _ZSt17__replace_copy_ifIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_NS0_5__ops10_Iter_predIPFbiEEEiET0_T_SD_SC_T1_RKT2_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____replace_copy_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_pred_bool_____int____int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_pred_bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v503, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v504, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v505, struct __gnu_cxx____ops___Iter_pred_bool_____int__ v506, int* v507) {
bb508:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first509;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last510;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result511;
  struct __gnu_cxx____ops___Iter_pred_bool_____int__ __pred512;
  int* __new_value513;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval514;
  __first509 = v503;
  __last510 = v504;
  __result511 = v505;
  __pred512 = v506;
  __new_value513 = v507;
    while (1) {
      _Bool r516 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first509, &__last510);
      _Bool u517 = !r516;
      if (!u517) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0518;
        agg_tmp0518 = __first509; // copy
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t519 = agg_tmp0518;
        _Bool r520 = bool___gnu_cxx____ops___Iter_pred_bool_____int____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__pred512, t519);
        if (r520) {
          int* t521 = __new_value513;
          int t522 = *t521;
          int* r523 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__result511);
          *r523 = t522;
        } else {
          int* r524 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first509);
          int t525 = *r524;
          int* r526 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__result511);
          *r526 = t525;
        }
    for_step515: ;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r527 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__first509);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r528 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__result511);
    }
  __retval514 = __result511; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t529 = __retval514;
  return t529;
}

// function: _ZN9__gnu_cxx5__ops10_Iter_predIPFbiEEC2ES3_
void __gnu_cxx____ops___Iter_pred_bool_____int_____Iter_pred_bool____(struct __gnu_cxx____ops___Iter_pred_bool_____int__* v530, void* v531) {
bb532:
  struct __gnu_cxx____ops___Iter_pred_bool_____int__* this533;
  void* __pred534;
  this533 = v530;
  __pred534 = v531;
  struct __gnu_cxx____ops___Iter_pred_bool_____int__* t535 = this533;
  void* t536 = __pred534;
  t535->_M_pred = t536;
  return;
}

// function: _ZN9__gnu_cxx5__ops11__pred_iterIPFbiEEENS0_10_Iter_predIT_EES5_
struct __gnu_cxx____ops___Iter_pred_bool_____int__ __gnu_cxx____ops___Iter_pred_bool_____int_____gnu_cxx____ops____pred_iter_bool_____int___bool____(void* v537) {
bb538:
  void* __pred539;
  struct __gnu_cxx____ops___Iter_pred_bool_____int__ __retval540;
  __pred539 = v537;
  void* t541 = __pred539;
  __gnu_cxx____ops___Iter_pred_bool_____int_____Iter_pred_bool____(&__retval540, t541);
  struct __gnu_cxx____ops___Iter_pred_bool_____int__ t542 = __retval540;
  return t542;
}

// function: _ZSt15replace_copy_ifIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_PFbiEiET0_T_SA_S9_T1_RKT2_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__replace_copy_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool_____int___int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v543, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v544, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v545, void* v546, int* v547) {
bb548:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first549;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last550;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result551;
  void* __pred552;
  int* __new_value553;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval554;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0555;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1556;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2557;
  struct __gnu_cxx____ops___Iter_pred_bool_____int__ agg_tmp3558;
  __first549 = v543;
  __last550 = v544;
  __result551 = v545;
  __pred552 = v546;
  __new_value553 = v547;
  agg_tmp0555 = __first549; // copy
  agg_tmp1556 = __last550; // copy
  agg_tmp2557 = __result551; // copy
  void* t559 = __pred552;
  struct __gnu_cxx____ops___Iter_pred_bool_____int__ r560 = __gnu_cxx____ops___Iter_pred_bool_____int_____gnu_cxx____ops____pred_iter_bool_____int___bool____(t559);
  agg_tmp3558 = r560;
  int* t561 = __new_value553;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t562 = agg_tmp0555;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t563 = agg_tmp1556;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t564 = agg_tmp2557;
  struct __gnu_cxx____ops___Iter_pred_bool_____int__ t565 = agg_tmp3558;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r566 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____replace_copy_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_pred_bool_____int____int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_pred_bool____(t562, t563, t564, t565, t561);
  __retval554 = r566;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t567 = __retval554;
  return t567;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v568, void* v569) {
bb570:
  struct std__basic_ostream_char__std__char_traits_char__* this571;
  void* __pf572;
  struct std__basic_ostream_char__std__char_traits_char__* __retval573;
  this571 = v568;
  __pf572 = v569;
  struct std__basic_ostream_char__std__char_traits_char__* t574 = this571;
  void* t575 = __pf572;
  struct std__basic_ostream_char__std__char_traits_char__* r576 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t575)(t574);
  __retval573 = r576;
  struct std__basic_ostream_char__std__char_traits_char__* t577 = __retval573;
  return t577;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v578) {
bb579:
  struct std__basic_ostream_char__std__char_traits_char__* __os580;
  struct std__basic_ostream_char__std__char_traits_char__* __retval581;
  __os580 = v578;
  struct std__basic_ostream_char__std__char_traits_char__* t582 = __os580;
  struct std__basic_ostream_char__std__char_traits_char__* r583 = std__ostream__flush(t582);
  __retval581 = r583;
  struct std__basic_ostream_char__std__char_traits_char__* t584 = __retval581;
  return t584;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v585) {
bb586:
  struct std__ctype_char_* __f587;
  struct std__ctype_char_* __retval588;
  __f587 = v585;
    struct std__ctype_char_* t589 = __f587;
    _Bool cast590 = (_Bool)t589;
    _Bool u591 = !cast590;
    if (u591) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t592 = __f587;
  __retval588 = t592;
  struct std__ctype_char_* t593 = __retval588;
  return t593;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v594, char v595) {
bb596:
  struct std__ctype_char_* this597;
  char __c598;
  char __retval599;
  this597 = v594;
  __c598 = v595;
  struct std__ctype_char_* t600 = this597;
    char t601 = t600->_M_widen_ok;
    _Bool cast602 = (_Bool)t601;
    if (cast602) {
      char t603 = __c598;
      unsigned char cast604 = (unsigned char)t603;
      unsigned long cast605 = (unsigned long)cast604;
      char t606 = t600->_M_widen[cast605];
      __retval599 = t606;
      char t607 = __retval599;
      return t607;
    }
  std__ctype_char____M_widen_init___const(t600);
  char t608 = __c598;
  void** v609 = (void**)t600;
  void* v610 = *((void**)v609);
  char vcall613 = (char)__VERIFIER_virtual_call_char_char(t600, 6, t608);
  __retval599 = vcall613;
  char t614 = __retval599;
  return t614;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v615, char v616) {
bb617:
  struct std__basic_ios_char__std__char_traits_char__* this618;
  char __c619;
  char __retval620;
  this618 = v615;
  __c619 = v616;
  struct std__basic_ios_char__std__char_traits_char__* t621 = this618;
  struct std__ctype_char_* t622 = t621->_M_ctype;
  struct std__ctype_char_* r623 = std__ctype_char__const__std____check_facet_std__ctype_char___(t622);
  char t624 = __c619;
  char r625 = std__ctype_char___widen_char__const(r623, t624);
  __retval620 = r625;
  char t626 = __retval620;
  return t626;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v627) {
bb628:
  struct std__basic_ostream_char__std__char_traits_char__* __os629;
  struct std__basic_ostream_char__std__char_traits_char__* __retval630;
  __os629 = v627;
  struct std__basic_ostream_char__std__char_traits_char__* t631 = __os629;
  struct std__basic_ostream_char__std__char_traits_char__* t632 = __os629;
  void** v633 = (void**)t632;
  void* v634 = *((void**)v633);
  unsigned char* cast635 = (unsigned char*)v634;
  long c636 = -24;
  unsigned char* ptr637 = &(cast635)[c636];
  long* cast638 = (long*)ptr637;
  long t639 = *cast638;
  unsigned char* cast640 = (unsigned char*)t632;
  unsigned char* ptr641 = &(cast640)[t639];
  struct std__basic_ostream_char__std__char_traits_char__* cast642 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr641;
  struct std__basic_ios_char__std__char_traits_char__* cast643 = (struct std__basic_ios_char__std__char_traits_char__*)cast642;
  char c644 = 10;
  char r645 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast643, c644);
  struct std__basic_ostream_char__std__char_traits_char__* r646 = std__ostream__put(t631, r645);
  struct std__basic_ostream_char__std__char_traits_char__* r647 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r646);
  __retval630 = r647;
  struct std__basic_ostream_char__std__char_traits_char__* t648 = __retval630;
  return t648;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v649) {
bb650:
  struct std__vector_int__std__allocator_int__* this651;
  this651 = v649;
  struct std__vector_int__std__allocator_int__* t652 = this651;
    struct std___Vector_base_int__std__allocator_int__* base653 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t652 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base654 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base653->_M_impl) + 0);
    int* t655 = base654->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base656 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t652 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base657 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base656->_M_impl) + 0);
    int* t658 = base657->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base659 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t652 + 0);
    struct std__allocator_int_* r660 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base659);
    void_std___Destroy_int___int_(t655, t658, r660);
  {
    struct std___Vector_base_int__std__allocator_int__* base661 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t652 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base661);
  }
  return;
}

// function: main
int main() {
bb662:
  int __retval663;
  int SIZE664;
  int a665[10];
  struct std__ostream_iterator_int__char__std__char_traits_char__ output666;
  struct std__vector_int__std__allocator_int__ v1667;
  struct std__allocator_int_ ref_tmp0668;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0669;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1670;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp2671;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp3672;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp4673;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp5674;
  int ref_tmp1675;
  int ref_tmp2676;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp6677;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp7678;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp8679;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp9680;
  struct std__vector_int__std__allocator_int__ v2681;
  struct std__allocator_int_ ref_tmp3682;
  struct std__vector_int__std__allocator_int__ c1683;
  struct std__allocator_int_ ref_tmp4684;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp10685;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11686;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp12687;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp13688;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp14689;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp15690;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp16691;
  int ref_tmp5692;
  int ref_tmp6693;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp17694;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp18695;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp19696;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp20697;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp21698;
  struct std__vector_int__std__allocator_int__ v3699;
  struct std__allocator_int_ ref_tmp7700;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp22701;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp23702;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp24703;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp25704;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp26705;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp27706;
  int ref_tmp8707;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp28708;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp29709;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp30710;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp31711;
  struct std__vector_int__std__allocator_int__ v4712;
  struct std__allocator_int_ ref_tmp9713;
  struct std__vector_int__std__allocator_int__ c2714;
  struct std__allocator_int_ ref_tmp10715;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp32716;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp33717;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp34718;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp35719;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp36720;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp37721;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp38722;
  int ref_tmp11723;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp39724;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp40725;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp41726;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp42727;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp43728;
  int c729 = 0;
  __retval663 = c729;
  int c730 = 10;
  SIZE664 = c730;
  // array copy
  __builtin_memcpy(a665, __const_main_a, (unsigned long)10 * sizeof(__const_main_a[0]));
  char* cast731 = (char*)&(_str);
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator_2(&output666, &_ZSt4cout, cast731);
  int* cast732 = (int*)&(a665);
  int* cast733 = (int*)&(a665);
  int t734 = SIZE664;
  int* ptr735 = &(cast733)[t734];
  std__allocator_int___allocator_2(&ref_tmp0668);
    std__vector_int__std__allocator_int_____vector_int___void_(&v1667, cast732, ptr735, &ref_tmp0668);
  {
    std__allocator_int____allocator(&ref_tmp0668);
  }
    char* cast736 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* r737 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast736);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r738 = std__vector_int__std__allocator_int_____begin(&v1667);
    agg_tmp0669 = r738;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r739 = std__vector_int__std__allocator_int_____end(&v1667);
    agg_tmp1670 = r739;
    std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp2671, &output666);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t740 = agg_tmp0669;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t741 = agg_tmp1670;
    struct std__ostream_iterator_int__char__std__char_traits_char__ t742 = agg_tmp2671;
    struct std__ostream_iterator_int__char__std__char_traits_char__ r743 = std__ostream_iterator_int__char__std__char_traits_char____std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(t740, t741, t742);
    agg_tmp3672 = r743;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r744 = std__vector_int__std__allocator_int_____begin(&v1667);
    agg_tmp4673 = r744;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r745 = std__vector_int__std__allocator_int_____end(&v1667);
    agg_tmp5674 = r745;
    int c746 = 10;
    ref_tmp1675 = c746;
    int c747 = 100;
    ref_tmp2676 = c747;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t748 = agg_tmp4673;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t749 = agg_tmp5674;
    void_std__replace___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(t748, t749, &ref_tmp1675, &ref_tmp2676);
    char* cast750 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r751 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast750);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r752 = std__vector_int__std__allocator_int_____begin(&v1667);
    agg_tmp6677 = r752;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r753 = std__vector_int__std__allocator_int_____end(&v1667);
    agg_tmp7678 = r753;
    std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp8679, &output666);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t754 = agg_tmp6677;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t755 = agg_tmp7678;
    struct std__ostream_iterator_int__char__std__char_traits_char__ t756 = agg_tmp8679;
    struct std__ostream_iterator_int__char__std__char_traits_char__ r757 = std__ostream_iterator_int__char__std__char_traits_char____std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(t754, t755, t756);
    agg_tmp9680 = r757;
    int* cast758 = (int*)&(a665);
    int* cast759 = (int*)&(a665);
    int t760 = SIZE664;
    int* ptr761 = &(cast759)[t760];
    std__allocator_int___allocator_2(&ref_tmp3682);
      std__vector_int__std__allocator_int_____vector_int___void_(&v2681, cast758, ptr761, &ref_tmp3682);
    {
      std__allocator_int____allocator(&ref_tmp3682);
    }
      int t762 = SIZE664;
      unsigned long cast763 = (unsigned long)t762;
      std__allocator_int___allocator_2(&ref_tmp4684);
        std__vector_int__std__allocator_int_____vector(&c1683, cast763, &ref_tmp4684);
      {
        std__allocator_int____allocator(&ref_tmp4684);
      }
        char* cast764 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* r765 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast764);
        char* cast766 = (char*)&(_str_4);
        struct std__basic_ostream_char__std__char_traits_char__* r767 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r765, cast766);
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r768 = std__vector_int__std__allocator_int_____begin(&v2681);
        agg_tmp10685 = r768;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r769 = std__vector_int__std__allocator_int_____end(&v2681);
        agg_tmp11686 = r769;
        std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp12687, &output666);
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t770 = agg_tmp10685;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t771 = agg_tmp11686;
        struct std__ostream_iterator_int__char__std__char_traits_char__ t772 = agg_tmp12687;
        struct std__ostream_iterator_int__char__std__char_traits_char__ r773 = std__ostream_iterator_int__char__std__char_traits_char____std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(t770, t771, t772);
        agg_tmp13688 = r773;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r774 = std__vector_int__std__allocator_int_____begin(&v2681);
        agg_tmp14689 = r774;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r775 = std__vector_int__std__allocator_int_____end(&v2681);
        agg_tmp15690 = r775;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r776 = std__vector_int__std__allocator_int_____begin(&c1683);
        agg_tmp16691 = r776;
        int c777 = 10;
        ref_tmp5692 = c777;
        int c778 = 100;
        ref_tmp6693 = c778;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t779 = agg_tmp14689;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t780 = agg_tmp15690;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t781 = agg_tmp16691;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r782 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__replace_copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(t779, t780, t781, &ref_tmp5692, &ref_tmp6693);
        agg_tmp17694 = r782;
        char* cast783 = (char*)&(_str_5);
        struct std__basic_ostream_char__std__char_traits_char__* r784 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast783);
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r785 = std__vector_int__std__allocator_int_____begin(&c1683);
        agg_tmp18695 = r785;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r786 = std__vector_int__std__allocator_int_____end(&c1683);
        agg_tmp19696 = r786;
        std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp20697, &output666);
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t787 = agg_tmp18695;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t788 = agg_tmp19696;
        struct std__ostream_iterator_int__char__std__char_traits_char__ t789 = agg_tmp20697;
        struct std__ostream_iterator_int__char__std__char_traits_char__ r790 = std__ostream_iterator_int__char__std__char_traits_char____std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(t787, t788, t789);
        agg_tmp21698 = r790;
        int* cast791 = (int*)&(a665);
        int* cast792 = (int*)&(a665);
        int t793 = SIZE664;
        int* ptr794 = &(cast792)[t793];
        std__allocator_int___allocator_2(&ref_tmp7700);
          std__vector_int__std__allocator_int_____vector_int___void_(&v3699, cast791, ptr794, &ref_tmp7700);
        {
          std__allocator_int____allocator(&ref_tmp7700);
        }
          char* cast795 = (char*)&(_str_6);
          struct std__basic_ostream_char__std__char_traits_char__* r796 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast795);
          char* cast797 = (char*)&(_str_7);
          struct std__basic_ostream_char__std__char_traits_char__* r798 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r796, cast797);
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r799 = std__vector_int__std__allocator_int_____begin(&v3699);
          agg_tmp22701 = r799;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r800 = std__vector_int__std__allocator_int_____end(&v3699);
          agg_tmp23702 = r800;
          std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp24703, &output666);
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t801 = agg_tmp22701;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t802 = agg_tmp23702;
          struct std__ostream_iterator_int__char__std__char_traits_char__ t803 = agg_tmp24703;
          struct std__ostream_iterator_int__char__std__char_traits_char__ r804 = std__ostream_iterator_int__char__std__char_traits_char____std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(t801, t802, t803);
          agg_tmp25704 = r804;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r805 = std__vector_int__std__allocator_int_____begin(&v3699);
          agg_tmp26705 = r805;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r806 = std__vector_int__std__allocator_int_____end(&v3699);
          agg_tmp27706 = r806;
          int c807 = 100;
          ref_tmp8707 = c807;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t808 = agg_tmp26705;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t809 = agg_tmp27706;
          void_std__replace_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool_____int___int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool____(t808, t809, &greater9, &ref_tmp8707);
          char* cast810 = (char*)&(_str_8);
          struct std__basic_ostream_char__std__char_traits_char__* r811 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast810);
          char* cast812 = (char*)&(_str_9);
          struct std__basic_ostream_char__std__char_traits_char__* r813 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r811, cast812);
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r814 = std__vector_int__std__allocator_int_____begin(&v3699);
          agg_tmp28708 = r814;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r815 = std__vector_int__std__allocator_int_____end(&v3699);
          agg_tmp29709 = r815;
          std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp30710, &output666);
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t816 = agg_tmp28708;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t817 = agg_tmp29709;
          struct std__ostream_iterator_int__char__std__char_traits_char__ t818 = agg_tmp30710;
          struct std__ostream_iterator_int__char__std__char_traits_char__ r819 = std__ostream_iterator_int__char__std__char_traits_char____std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(t816, t817, t818);
          agg_tmp31711 = r819;
          int* cast820 = (int*)&(a665);
          int* cast821 = (int*)&(a665);
          int t822 = SIZE664;
          int* ptr823 = &(cast821)[t822];
          std__allocator_int___allocator_2(&ref_tmp9713);
            std__vector_int__std__allocator_int_____vector_int___void_(&v4712, cast820, ptr823, &ref_tmp9713);
          {
            std__allocator_int____allocator(&ref_tmp9713);
          }
            int t824 = SIZE664;
            unsigned long cast825 = (unsigned long)t824;
            std__allocator_int___allocator_2(&ref_tmp10715);
              std__vector_int__std__allocator_int_____vector(&c2714, cast825, &ref_tmp10715);
            {
              std__allocator_int____allocator(&ref_tmp10715);
            }
              char* cast826 = (char*)&(_str_10);
              struct std__basic_ostream_char__std__char_traits_char__* r827 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast826);
              char* cast828 = (char*)&(_str_11);
              struct std__basic_ostream_char__std__char_traits_char__* r829 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r827, cast828);
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r830 = std__vector_int__std__allocator_int_____begin(&v4712);
              agg_tmp32716 = r830;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r831 = std__vector_int__std__allocator_int_____end(&v4712);
              agg_tmp33717 = r831;
              std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp34718, &output666);
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t832 = agg_tmp32716;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t833 = agg_tmp33717;
              struct std__ostream_iterator_int__char__std__char_traits_char__ t834 = agg_tmp34718;
              struct std__ostream_iterator_int__char__std__char_traits_char__ r835 = std__ostream_iterator_int__char__std__char_traits_char____std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(t832, t833, t834);
              agg_tmp35719 = r835;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r836 = std__vector_int__std__allocator_int_____begin(&v4712);
              agg_tmp36720 = r836;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r837 = std__vector_int__std__allocator_int_____end(&v4712);
              agg_tmp37721 = r837;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r838 = std__vector_int__std__allocator_int_____begin(&c2714);
              agg_tmp38722 = r838;
              int c839 = 100;
              ref_tmp11723 = c839;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t840 = agg_tmp36720;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t841 = agg_tmp37721;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t842 = agg_tmp38722;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r843 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__replace_copy_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool_____int___int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool____(t840, t841, t842, &greater9, &ref_tmp11723);
              agg_tmp39724 = r843;
              char* cast844 = (char*)&(_str_12);
              struct std__basic_ostream_char__std__char_traits_char__* r845 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast844);
              char* cast846 = (char*)&(_str_13);
              struct std__basic_ostream_char__std__char_traits_char__* r847 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r845, cast846);
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r848 = std__vector_int__std__allocator_int_____begin(&c2714);
              agg_tmp40725 = r848;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r849 = std__vector_int__std__allocator_int_____end(&c2714);
              agg_tmp41726 = r849;
              std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp42727, &output666);
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t850 = agg_tmp40725;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t851 = agg_tmp41726;
              struct std__ostream_iterator_int__char__std__char_traits_char__ t852 = agg_tmp42727;
              struct std__ostream_iterator_int__char__std__char_traits_char__ r853 = std__ostream_iterator_int__char__std__char_traits_char____std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(t850, t851, t852);
              agg_tmp43728 = r853;
              struct std__basic_ostream_char__std__char_traits_char__* r854 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
              int c855 = 0;
              __retval663 = c855;
              int t856 = __retval663;
              int ret_val857 = t856;
              {
                std__vector_int__std__allocator_int______vector(&c2714);
              }
              {
                std__vector_int__std__allocator_int______vector(&v4712);
              }
              {
                std__vector_int__std__allocator_int______vector(&v3699);
              }
              {
                std__vector_int__std__allocator_int______vector(&c1683);
              }
              {
                std__vector_int__std__allocator_int______vector(&v2681);
              }
              {
                std__vector_int__std__allocator_int______vector(&v1667);
              }
              return ret_val857;
  int t858 = __retval663;
  return t858;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v859) {
bb860:
  struct std____new_allocator_int_* this861;
  this861 = v859;
  struct std____new_allocator_int_* t862 = this861;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v863, struct std__allocator_int_* v864) {
bb865:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this866;
  struct std__allocator_int_* __a867;
  this866 = v863;
  __a867 = v864;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t868 = this866;
  struct std__allocator_int_* base869 = (struct std__allocator_int_*)((char *)t868 + 0);
  struct std__allocator_int_* t870 = __a867;
  std__allocator_int___allocator(base869, t870);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base871 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t868 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base871);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v872) {
bb873:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this874;
  this874 = v872;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t875 = this874;
  {
    struct std__allocator_int_* base876 = (struct std__allocator_int_*)((char *)t875 + 0);
    std__allocator_int____allocator(base876);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v877, struct std__allocator_int_* v878) {
bb879:
  struct std___Vector_base_int__std__allocator_int__* this880;
  struct std__allocator_int_* __a881;
  this880 = v877;
  __a881 = v878;
  struct std___Vector_base_int__std__allocator_int__* t882 = this880;
  struct std__allocator_int_* t883 = __a881;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t882->_M_impl, t883);
  return;
}

// function: _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_
long _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_(struct std__ranges____distance_fn* v884, int** v885, int* v886) {
bb887:
  struct std__ranges____distance_fn* this888;
  int** __first889;
  int* __last890;
  long __retval891;
  this888 = v884;
  __first889 = v885;
  __last890 = v886;
  struct std__ranges____distance_fn* t892 = this888;
  int* t893 = __last890;
  int** t894 = __first889;
  int* t895 = *t894;
  long diff896 = t893 - t895;
  __retval891 = diff896;
  long t897 = __retval891;
  return t897;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb898:
  _Bool __retval899;
    _Bool c900 = 0;
    __retval899 = c900;
    _Bool t901 = __retval899;
    return t901;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v902) {
bb903:
  struct std____new_allocator_int_* this904;
  unsigned long __retval905;
  this904 = v902;
  struct std____new_allocator_int_* t906 = this904;
  unsigned long c907 = 9223372036854775807;
  unsigned long c908 = 4;
  unsigned long b909 = c907 / c908;
  __retval905 = b909;
  unsigned long t910 = __retval905;
  return t910;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v911, unsigned long v912, void* v913) {
bb914:
  struct std____new_allocator_int_* this915;
  unsigned long __n916;
  void* unnamed917;
  int* __retval918;
  this915 = v911;
  __n916 = v912;
  unnamed917 = v913;
  struct std____new_allocator_int_* t919 = this915;
    unsigned long t920 = __n916;
    unsigned long r921 = std____new_allocator_int____M_max_size___const(t919);
    _Bool c922 = ((t920 > r921)) ? 1 : 0;
    if (c922) {
        unsigned long t923 = __n916;
        unsigned long c924 = -1;
        unsigned long c925 = 4;
        unsigned long b926 = c924 / c925;
        _Bool c927 = ((t923 > b926)) ? 1 : 0;
        if (c927) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c928 = 4;
    unsigned long c929 = 16;
    _Bool c930 = ((c928 > c929)) ? 1 : 0;
    if (c930) {
      unsigned long __al931;
      unsigned long c932 = 4;
      __al931 = c932;
      unsigned long t933 = __n916;
      unsigned long c934 = 4;
      unsigned long b935 = t933 * c934;
      unsigned long t936 = __al931;
      void* r937 = operator_new_2(b935, t936);
      int* cast938 = (int*)r937;
      __retval918 = cast938;
      int* t939 = __retval918;
      return t939;
    }
  unsigned long t940 = __n916;
  unsigned long c941 = 4;
  unsigned long b942 = t940 * c941;
  void* r943 = operator_new(b942);
  int* cast944 = (int*)r943;
  __retval918 = cast944;
  int* t945 = __retval918;
  return t945;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v946, unsigned long v947) {
bb948:
  struct std__allocator_int_* this949;
  unsigned long __n950;
  int* __retval951;
  this949 = v946;
  __n950 = v947;
  struct std__allocator_int_* t952 = this949;
    _Bool r953 = std____is_constant_evaluated();
    if (r953) {
        unsigned long t954 = __n950;
        unsigned long c955 = 4;
        unsigned long ovr956;
        _Bool ovf957 = __builtin_mul_overflow(t954, c955, &ovr956);
        __n950 = ovr956;
        if (ovf957) {
          std____throw_bad_array_new_length();
        }
      unsigned long t958 = __n950;
      void* r959 = operator_new(t958);
      int* cast960 = (int*)r959;
      __retval951 = cast960;
      int* t961 = __retval951;
      return t961;
    }
  struct std____new_allocator_int_* base962 = (struct std____new_allocator_int_*)((char *)t952 + 0);
  unsigned long t963 = __n950;
  void* c964 = ((void*)0);
  int* r965 = std____new_allocator_int___allocate(base962, t963, c964);
  __retval951 = r965;
  int* t966 = __retval951;
  return t966;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v967, unsigned long v968) {
bb969:
  struct std__allocator_int_* __a970;
  unsigned long __n971;
  int* __retval972;
  __a970 = v967;
  __n971 = v968;
  struct std__allocator_int_* t973 = __a970;
  unsigned long t974 = __n971;
  int* r975 = std__allocator_int___allocate(t973, t974);
  __retval972 = r975;
  int* t976 = __retval972;
  return t976;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v977, unsigned long v978) {
bb979:
  struct std___Vector_base_int__std__allocator_int__* this980;
  unsigned long __n981;
  int* __retval982;
  this980 = v977;
  __n981 = v978;
  struct std___Vector_base_int__std__allocator_int__* t983 = this980;
  unsigned long t984 = __n981;
  unsigned long c985 = 0;
  _Bool c986 = ((t984 != c985)) ? 1 : 0;
  int* ternary987;
  if (c986) {
    struct std__allocator_int_* base988 = (struct std__allocator_int_*)((char *)&(t983->_M_impl) + 0);
    unsigned long t989 = __n981;
    int* r990 = std__allocator_traits_std__allocator_int_____allocate(base988, t989);
    ternary987 = (int*)r990;
  } else {
    int* c991 = ((void*)0);
    ternary987 = (int*)c991;
  }
  __retval982 = ternary987;
  int* t992 = __retval982;
  return t992;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v993, unsigned long* v994) {
bb995:
  unsigned long* __a996;
  unsigned long* __b997;
  unsigned long* __retval998;
  __a996 = v993;
  __b997 = v994;
    unsigned long* t999 = __b997;
    unsigned long t1000 = *t999;
    unsigned long* t1001 = __a996;
    unsigned long t1002 = *t1001;
    _Bool c1003 = ((t1000 < t1002)) ? 1 : 0;
    if (c1003) {
      unsigned long* t1004 = __b997;
      __retval998 = t1004;
      unsigned long* t1005 = __retval998;
      return t1005;
    }
  unsigned long* t1006 = __a996;
  __retval998 = t1006;
  unsigned long* t1007 = __retval998;
  return t1007;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v1008) {
bb1009:
  struct std__allocator_int_* __a1010;
  unsigned long __retval1011;
  unsigned long __diffmax1012;
  unsigned long __allocmax1013;
  __a1010 = v1008;
  unsigned long c1014 = 2305843009213693951;
  __diffmax1012 = c1014;
  unsigned long c1015 = 4611686018427387903;
  __allocmax1013 = c1015;
  unsigned long* r1016 = unsigned_long_const__std__min_unsigned_long_(&__diffmax1012, &__allocmax1013);
  unsigned long t1017 = *r1016;
  __retval1011 = t1017;
  unsigned long t1018 = __retval1011;
  return t1018;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v1019, struct std__allocator_int_* v1020) {
bb1021:
  struct std__allocator_int_* this1022;
  struct std__allocator_int_* __a1023;
  this1022 = v1019;
  __a1023 = v1020;
  struct std__allocator_int_* t1024 = this1022;
  struct std____new_allocator_int_* base1025 = (struct std____new_allocator_int_*)((char *)t1024 + 0);
  struct std__allocator_int_* t1026 = __a1023;
  struct std____new_allocator_int_* base1027 = (struct std____new_allocator_int_*)((char *)t1026 + 0);
  std____new_allocator_int_____new_allocator(base1025, base1027);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v1028, struct std__allocator_int_* v1029) {
bb1030:
  unsigned long __n1031;
  struct std__allocator_int_* __a1032;
  unsigned long __retval1033;
  __n1031 = v1028;
  __a1032 = v1029;
    struct std__allocator_int_ ref_tmp01034;
    _Bool tmp_exprcleanup1035;
    unsigned long t1036 = __n1031;
    struct std__allocator_int_* t1037 = __a1032;
    std__allocator_int___allocator(&ref_tmp01034, t1037);
      unsigned long r1038 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp01034);
      _Bool c1039 = ((t1036 > r1038)) ? 1 : 0;
      tmp_exprcleanup1035 = c1039;
    {
      std__allocator_int____allocator(&ref_tmp01034);
    }
    _Bool t1040 = tmp_exprcleanup1035;
    if (t1040) {
      char* cast1041 = (char*)&(_str_14);
      std____throw_length_error(cast1041);
    }
  unsigned long t1042 = __n1031;
  __retval1033 = t1042;
  unsigned long t1043 = __retval1033;
  return t1043;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v1044) {
bb1045:
  struct std___Vector_base_int__std__allocator_int__* this1046;
  struct std__allocator_int_* __retval1047;
  this1046 = v1044;
  struct std___Vector_base_int__std__allocator_int__* t1048 = this1046;
  struct std__allocator_int_* base1049 = (struct std__allocator_int_*)((char *)&(t1048->_M_impl) + 0);
  __retval1047 = base1049;
  struct std__allocator_int_* t1050 = __retval1047;
  return t1050;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1051:
  _Bool __retval1052;
    _Bool c1053 = 0;
    __retval1052 = c1053;
    _Bool t1054 = __retval1052;
    return t1054;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1055, int** v1056) {
bb1057:
  struct std___UninitDestroyGuard_int____void_* this1058;
  int** __first1059;
  this1058 = v1055;
  __first1059 = v1056;
  struct std___UninitDestroyGuard_int____void_* t1060 = this1058;
  int** t1061 = __first1059;
  int* t1062 = *t1061;
  t1060->_M_first = t1062;
  int** t1063 = __first1059;
  t1060->_M_cur = t1063;
  return;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v1064, int* v1065) {
bb1066:
  int* __location1067;
  int* __args1068;
  int* __retval1069;
  void* __loc1070;
  __location1067 = v1064;
  __args1068 = v1065;
  int* t1071 = __location1067;
  void* cast1072 = (void*)t1071;
  __loc1070 = cast1072;
    void* t1073 = __loc1070;
    int* cast1074 = (int*)t1073;
    int* t1075 = __args1068;
    int t1076 = *t1075;
    *cast1074 = t1076;
    __retval1069 = cast1074;
    int* t1077 = __retval1069;
    return t1077;
  abort();
}

// function: _ZSt10_ConstructIiJRiEEvPT_DpOT0_
void void_std___Construct_int__int__(int* v1078, int* v1079) {
bb1080:
  int* __p1081;
  int* __args1082;
  __p1081 = v1078;
  __args1082 = v1079;
    _Bool r1083 = std____is_constant_evaluated();
    if (r1083) {
      int* t1084 = __p1081;
      int* t1085 = __args1082;
      int* r1086 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t1084, t1085);
      return;
    }
  int* t1087 = __p1081;
  void* cast1088 = (void*)t1087;
  int* cast1089 = (int*)cast1088;
  int* t1090 = __args1082;
  int t1091 = *t1090;
  *cast1089 = t1091;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v1092) {
bb1093:
  struct std___UninitDestroyGuard_int____void_* this1094;
  this1094 = v1092;
  struct std___UninitDestroyGuard_int____void_* t1095 = this1094;
  int** c1096 = ((void*)0);
  t1095->_M_cur = c1096;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1097) {
bb1098:
  struct std___UninitDestroyGuard_int____void_* this1099;
  this1099 = v1097;
  struct std___UninitDestroyGuard_int____void_* t1100 = this1099;
    int** t1101 = t1100->_M_cur;
    int** c1102 = ((void*)0);
    _Bool c1103 = ((t1101 != c1102)) ? 1 : 0;
    if (c1103) {
      int* t1104 = t1100->_M_first;
      int** t1105 = t1100->_M_cur;
      int* t1106 = *t1105;
      void_std___Destroy_int__(t1104, t1106);
    }
  return;
}

// function: _ZSt16__do_uninit_copyIPiS0_S0_ET1_T_T0_S1_
int* int__std____do_uninit_copy_int___int___int__(int* v1107, int* v1108, int* v1109) {
bb1110:
  int* __first1111;
  int* __last1112;
  int* __result1113;
  int* __retval1114;
  struct std___UninitDestroyGuard_int____void_ __guard1115;
  __first1111 = v1107;
  __last1112 = v1108;
  __result1113 = v1109;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard1115, &__result1113);
      while (1) {
        int* t1117 = __first1111;
        int* t1118 = __last1112;
        _Bool c1119 = ((t1117 != t1118)) ? 1 : 0;
        if (!c1119) break;
        int* t1120 = __result1113;
        int* t1121 = __first1111;
        void_std___Construct_int__int__(t1120, t1121);
      for_step1116: ;
        int* t1122 = __first1111;
        int c1123 = 1;
        int* ptr1124 = &(t1122)[c1123];
        __first1111 = ptr1124;
        int* t1125 = __result1113;
        int c1126 = 1;
        int* ptr1127 = &(t1125)[c1126];
        __result1113 = ptr1127;
      }
    std___UninitDestroyGuard_int___void___release(&__guard1115);
    int* t1128 = __result1113;
    __retval1114 = t1128;
    int* t1129 = __retval1114;
    int* ret_val1130 = t1129;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1115);
    }
    return ret_val1130;
  abort();
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v1131) {
bb1132:
  int* __it1133;
  int* __retval1134;
  __it1133 = v1131;
  int* t1135 = __it1133;
  __retval1134 = t1135;
  int* t1136 = __retval1134;
  return t1136;
}

// function: _ZSt18uninitialized_copyIPiS0_ET0_T_S2_S1_
int* int__std__uninitialized_copy_int___int__(int* v1137, int* v1138, int* v1139) {
bb1140:
  int* __first1141;
  int* __last1142;
  int* __result1143;
  int* __retval1144;
  __first1141 = v1137;
  __last1142 = v1138;
  __result1143 = v1139;
      long __n1145;
      int* t1146 = __last1142;
      int* t1147 = __first1141;
      long diff1148 = t1146 - t1147;
      __n1145 = diff1148;
        long t1149 = __n1145;
        long c1150 = 0;
        _Bool c1151 = ((t1149 > c1150)) ? 1 : 0;
        if (c1151) {
          int* t1152 = __result1143;
          int* r1153 = int__std____niter_base_int__(t1152);
          void* cast1154 = (void*)r1153;
          int* t1155 = __first1141;
          int* r1156 = int__std____niter_base_int__(t1155);
          void* cast1157 = (void*)r1156;
          long t1158 = __n1145;
          unsigned long cast1159 = (unsigned long)t1158;
          unsigned long c1160 = 4;
          unsigned long b1161 = cast1159 * c1160;
          void* r1162 = memcpy(cast1154, cast1157, b1161);
          long t1163 = __n1145;
          int* t1164 = __result1143;
          int* ptr1165 = &(t1164)[t1163];
          __result1143 = ptr1165;
        }
      int* t1166 = __result1143;
      __retval1144 = t1166;
      int* t1167 = __retval1144;
      return t1167;
  abort();
}

// function: _ZSt22__uninitialized_copy_aIPiS0_S0_iET1_T_T0_S1_RSaIT2_E
int* int__std____uninitialized_copy_a_int___int___int___int_(int* v1168, int* v1169, int* v1170, struct std__allocator_int_* v1171) {
bb1172:
  int* __first1173;
  int* __last1174;
  int* __result1175;
  struct std__allocator_int_* unnamed1176;
  int* __retval1177;
  __first1173 = v1168;
  __last1174 = v1169;
  __result1175 = v1170;
  unnamed1176 = v1171;
    _Bool r1178 = std__is_constant_evaluated();
    if (r1178) {
      int* t1179 = __first1173;
      int* t1180 = __last1174;
      int* t1181 = __result1175;
      int* r1182 = int__std____do_uninit_copy_int___int___int__(t1179, t1180, t1181);
      __retval1177 = r1182;
      int* t1183 = __retval1177;
      return t1183;
    }
    int* t1184 = __first1173;
    int* t1185 = __last1174;
    int* t1186 = __result1175;
    int* r1187 = int__std__uninitialized_copy_int___int__(t1184, t1185, t1186);
    __retval1177 = r1187;
    int* t1188 = __retval1177;
    return t1188;
  abort();
}

// function: _ZNSt6vectorIiSaIiEE21_M_range_initialize_nIPiS3_EEvT_T0_m
void void_std__vector_int__std__allocator_int______M_range_initialize_n_int___int__(struct std__vector_int__std__allocator_int__* v1189, int* v1190, int* v1191, unsigned long v1192) {
bb1193:
  struct std__vector_int__std__allocator_int__* this1194;
  int* __first1195;
  int* __last1196;
  unsigned long __n1197;
  int* __start1198;
  this1194 = v1189;
  __first1195 = v1190;
  __last1196 = v1191;
  __n1197 = v1192;
  struct std__vector_int__std__allocator_int__* t1199 = this1194;
  struct std___Vector_base_int__std__allocator_int__* base1200 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1199 + 0);
  unsigned long t1201 = __n1197;
  struct std___Vector_base_int__std__allocator_int__* base1202 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1199 + 0);
  struct std__allocator_int_* r1203 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1202);
  unsigned long r1204 = std__vector_int__std__allocator_int______S_check_init_len(t1201, r1203);
  int* r1205 = std___Vector_base_int__std__allocator_int______M_allocate(base1200, r1204);
  __start1198 = r1205;
  int* t1206 = __start1198;
  struct std___Vector_base_int__std__allocator_int__* base1207 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1199 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1208 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1207->_M_impl) + 0);
  base1208->_M_finish = t1206;
  struct std___Vector_base_int__std__allocator_int__* base1209 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1199 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1210 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1209->_M_impl) + 0);
  base1210->_M_start = t1206;
  int* t1211 = __start1198;
  unsigned long t1212 = __n1197;
  int* ptr1213 = &(t1211)[t1212];
  struct std___Vector_base_int__std__allocator_int__* base1214 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1199 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1215 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1214->_M_impl) + 0);
  base1215->_M_end_of_storage = ptr1213;
  int* t1216 = __first1195;
  int* t1217 = __last1196;
  int* t1218 = __start1198;
  struct std___Vector_base_int__std__allocator_int__* base1219 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1199 + 0);
  struct std__allocator_int_* r1220 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1219);
  int* r1221 = int__std____uninitialized_copy_a_int___int___int___int_(t1216, t1217, t1218, r1220);
  struct std___Vector_base_int__std__allocator_int__* base1222 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1199 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1223 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1222->_M_impl) + 0);
  base1223->_M_finish = r1221;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1224, int* v1225, unsigned long v1226) {
bb1227:
  struct std____new_allocator_int_* this1228;
  int* __p1229;
  unsigned long __n1230;
  this1228 = v1224;
  __p1229 = v1225;
  __n1230 = v1226;
  struct std____new_allocator_int_* t1231 = this1228;
    unsigned long c1232 = 4;
    unsigned long c1233 = 16;
    _Bool c1234 = ((c1232 > c1233)) ? 1 : 0;
    if (c1234) {
      int* t1235 = __p1229;
      void* cast1236 = (void*)t1235;
      unsigned long t1237 = __n1230;
      unsigned long c1238 = 4;
      unsigned long b1239 = t1237 * c1238;
      unsigned long c1240 = 4;
      operator_delete_3(cast1236, b1239, c1240);
      return;
    }
  int* t1241 = __p1229;
  void* cast1242 = (void*)t1241;
  unsigned long t1243 = __n1230;
  unsigned long c1244 = 4;
  unsigned long b1245 = t1243 * c1244;
  operator_delete_2(cast1242, b1245);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1246, int* v1247, unsigned long v1248) {
bb1249:
  struct std__allocator_int_* this1250;
  int* __p1251;
  unsigned long __n1252;
  this1250 = v1246;
  __p1251 = v1247;
  __n1252 = v1248;
  struct std__allocator_int_* t1253 = this1250;
    _Bool r1254 = std____is_constant_evaluated();
    if (r1254) {
      int* t1255 = __p1251;
      void* cast1256 = (void*)t1255;
      operator_delete(cast1256);
      return;
    }
  struct std____new_allocator_int_* base1257 = (struct std____new_allocator_int_*)((char *)t1253 + 0);
  int* t1258 = __p1251;
  unsigned long t1259 = __n1252;
  std____new_allocator_int___deallocate(base1257, t1258, t1259);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1260, int* v1261, unsigned long v1262) {
bb1263:
  struct std__allocator_int_* __a1264;
  int* __p1265;
  unsigned long __n1266;
  __a1264 = v1260;
  __p1265 = v1261;
  __n1266 = v1262;
  struct std__allocator_int_* t1267 = __a1264;
  int* t1268 = __p1265;
  unsigned long t1269 = __n1266;
  std__allocator_int___deallocate(t1267, t1268, t1269);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v1270, int* v1271, unsigned long v1272) {
bb1273:
  struct std___Vector_base_int__std__allocator_int__* this1274;
  int* __p1275;
  unsigned long __n1276;
  this1274 = v1270;
  __p1275 = v1271;
  __n1276 = v1272;
  struct std___Vector_base_int__std__allocator_int__* t1277 = this1274;
    int* t1278 = __p1275;
    _Bool cast1279 = (_Bool)t1278;
    if (cast1279) {
      struct std__allocator_int_* base1280 = (struct std__allocator_int_*)((char *)&(t1277->_M_impl) + 0);
      int* t1281 = __p1275;
      unsigned long t1282 = __n1276;
      std__allocator_traits_std__allocator_int_____deallocate(base1280, t1281, t1282);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1283) {
bb1284:
  struct std___Vector_base_int__std__allocator_int__* this1285;
  this1285 = v1283;
  struct std___Vector_base_int__std__allocator_int__* t1286 = this1285;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1287 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1286->_M_impl) + 0);
    int* t1288 = base1287->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1289 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1286->_M_impl) + 0);
    int* t1290 = base1289->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1291 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1286->_M_impl) + 0);
    int* t1292 = base1291->_M_start;
    long diff1293 = t1290 - t1292;
    unsigned long cast1294 = (unsigned long)diff1293;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1286, t1288, cast1294);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1286->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1295, struct std____new_allocator_int_* v1296) {
bb1297:
  struct std____new_allocator_int_* this1298;
  struct std____new_allocator_int_* unnamed1299;
  this1298 = v1295;
  unnamed1299 = v1296;
  struct std____new_allocator_int_* t1300 = this1298;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1301) {
bb1302:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1303;
  this1303 = v1301;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1304 = this1303;
  int* c1305 = ((void*)0);
  t1304->_M_start = c1305;
  int* c1306 = ((void*)0);
  t1304->_M_finish = c1306;
  int* c1307 = ((void*)0);
  t1304->_M_end_of_storage = c1307;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1308) {
bb1309:
  int* __location1310;
  __location1310 = v1308;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1311, int* v1312) {
bb1313:
  int* __first1314;
  int* __last1315;
  __first1314 = v1311;
  __last1315 = v1312;
      _Bool r1316 = std____is_constant_evaluated();
      if (r1316) {
          while (1) {
            int* t1318 = __first1314;
            int* t1319 = __last1315;
            _Bool c1320 = ((t1318 != t1319)) ? 1 : 0;
            if (!c1320) break;
            int* t1321 = __first1314;
            void_std__destroy_at_int_(t1321);
          for_step1317: ;
            int* t1322 = __first1314;
            int c1323 = 1;
            int* ptr1324 = &(t1322)[c1323];
            __first1314 = ptr1324;
          }
      }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* v1325, unsigned long v1326) {
bb1327:
  struct std___Vector_base_int__std__allocator_int__* this1328;
  unsigned long __n1329;
  this1328 = v1325;
  __n1329 = v1326;
  struct std___Vector_base_int__std__allocator_int__* t1330 = this1328;
  unsigned long t1331 = __n1329;
  int* r1332 = std___Vector_base_int__std__allocator_int______M_allocate(t1330, t1331);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1333 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1330->_M_impl) + 0);
  base1333->_M_start = r1332;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1334 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1330->_M_impl) + 0);
  int* t1335 = base1334->_M_start;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1336 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1330->_M_impl) + 0);
  base1336->_M_finish = t1335;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1337 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1330->_M_impl) + 0);
  int* t1338 = base1337->_M_start;
  unsigned long t1339 = __n1329;
  int* ptr1340 = &(t1338)[t1339];
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1341 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1330->_M_impl) + 0);
  base1341->_M_end_of_storage = ptr1340;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_
void std___Vector_base_int__std__allocator_int______Vector_base_2(struct std___Vector_base_int__std__allocator_int__* v1342, unsigned long v1343, struct std__allocator_int_* v1344) {
bb1345:
  struct std___Vector_base_int__std__allocator_int__* this1346;
  unsigned long __n1347;
  struct std__allocator_int_* __a1348;
  this1346 = v1342;
  __n1347 = v1343;
  __a1348 = v1344;
  struct std___Vector_base_int__std__allocator_int__* t1349 = this1346;
  struct std__allocator_int_* t1350 = __a1348;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t1349->_M_impl, t1350);
    unsigned long t1351 = __n1347;
    std___Vector_base_int__std__allocator_int______M_create_storage(t1349, t1351);
  return;
}

// function: _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v1352) {
bb1353:
  int* __location1354;
  int* __retval1355;
  void* __loc1356;
  __location1354 = v1352;
  int* t1357 = __location1354;
  void* cast1358 = (void*)t1357;
  __loc1356 = cast1358;
    void* t1359 = __loc1356;
    int* cast1360 = (int*)t1359;
    int c1361 = 0;
    *cast1360 = c1361;
    __retval1355 = cast1360;
    int* t1362 = __retval1355;
    return t1362;
  abort();
}

// function: _ZSt10_ConstructIiJEEvPT_DpOT0_
void void_std___Construct_int_(int* v1363) {
bb1364:
  int* __p1365;
  __p1365 = v1363;
    _Bool r1366 = std____is_constant_evaluated();
    if (r1366) {
      int* t1367 = __p1365;
      int* r1368 = _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t1367);
      return;
    }
  int* t1369 = __p1365;
  void* cast1370 = (void*)t1369;
  int* cast1371 = (int*)cast1370;
  int c1372 = 0;
  *cast1371 = c1372;
  return;
}

// function: _ZNSt27__uninitialized_default_n_1ILb0EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(int* v1373, unsigned long v1374) {
bb1375:
  int* __first1376;
  unsigned long __n1377;
  int* __retval1378;
  struct std___UninitDestroyGuard_int____void_ __guard1379;
  __first1376 = v1373;
  __n1377 = v1374;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard1379, &__first1376);
      while (1) {
        unsigned long t1381 = __n1377;
        unsigned long c1382 = 0;
        _Bool c1383 = ((t1381 > c1382)) ? 1 : 0;
        if (!c1383) break;
        int* t1384 = __first1376;
        void_std___Construct_int_(t1384);
      for_step1380: ;
        unsigned long t1385 = __n1377;
        unsigned long u1386 = t1385 - 1;
        __n1377 = u1386;
        int* t1387 = __first1376;
        int c1388 = 1;
        int* ptr1389 = &(t1387)[c1388];
        __first1376 = ptr1389;
      }
    std___UninitDestroyGuard_int___void___release(&__guard1379);
    int* t1390 = __first1376;
    __retval1378 = t1390;
    int* t1391 = __retval1378;
    int* ret_val1392 = t1391;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1379);
    }
    return ret_val1392;
  abort();
}

// function: _ZSt9__fill_a1IPiiEvT_S1_RKT0_
void void_std____fill_a1_int___int_(int* v1393, int* v1394, int* v1395) {
bb1396:
  int* __first1397;
  int* __last1398;
  int* __value1399;
  _Bool __load_outside_loop1400;
  int __val1401;
  __first1397 = v1393;
  __last1398 = v1394;
  __value1399 = v1395;
  _Bool c1402 = 1;
  __load_outside_loop1400 = c1402;
  int* t1403 = __value1399;
  int t1404 = *t1403;
  __val1401 = t1404;
    while (1) {
      int* t1406 = __first1397;
      int* t1407 = __last1398;
      _Bool c1408 = ((t1406 != t1407)) ? 1 : 0;
      if (!c1408) break;
      int t1409 = __val1401;
      int* t1410 = __first1397;
      *t1410 = t1409;
    for_step1405: ;
      int* t1411 = __first1397;
      int c1412 = 1;
      int* ptr1413 = &(t1411)[c1412];
      __first1397 = ptr1413;
    }
  return;
}

// function: _ZSt8__fill_aIPiiEvT_S1_RKT0_
void void_std____fill_a_int___int_(int* v1414, int* v1415, int* v1416) {
bb1417:
  int* __first1418;
  int* __last1419;
  int* __value1420;
  __first1418 = v1414;
  __last1419 = v1415;
  __value1420 = v1416;
  int* t1421 = __first1418;
  int* t1422 = __last1419;
  int* t1423 = __value1420;
  void_std____fill_a1_int___int_(t1421, t1422, t1423);
  return;
}

// function: _ZSt10__fill_n_aIPimiET_S1_T0_RKT1_St26random_access_iterator_tag
int* int__std____fill_n_a_int___unsigned_long__int_(int* v1424, unsigned long v1425, int* v1426, struct std__random_access_iterator_tag v1427) {
bb1428:
  int* __first1429;
  unsigned long __n1430;
  int* __value1431;
  struct std__random_access_iterator_tag unnamed1432;
  int* __retval1433;
  __first1429 = v1424;
  __n1430 = v1425;
  __value1431 = v1426;
  unnamed1432 = v1427;
    unsigned long t1434 = __n1430;
    unsigned long c1435 = 0;
    _Bool c1436 = ((t1434 <= c1435)) ? 1 : 0;
    if (c1436) {
      int* t1437 = __first1429;
      __retval1433 = t1437;
      int* t1438 = __retval1433;
      return t1438;
    }
  int* t1439 = __first1429;
  int* t1440 = __first1429;
  unsigned long t1441 = __n1430;
  int* ptr1442 = &(t1440)[t1441];
  int* t1443 = __value1431;
  void_std____fill_a_int___int_(t1439, ptr1442, t1443);
  int* t1444 = __first1429;
  unsigned long t1445 = __n1430;
  int* ptr1446 = &(t1444)[t1445];
  __retval1433 = ptr1446;
  int* t1447 = __retval1433;
  return t1447;
}

// function: _ZSt17__size_to_integerm
unsigned long std____size_to_integer(unsigned long v1448) {
bb1449:
  unsigned long __n1450;
  unsigned long __retval1451;
  __n1450 = v1448;
  unsigned long t1452 = __n1450;
  __retval1451 = t1452;
  unsigned long t1453 = __retval1451;
  return t1453;
}

// function: _ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** v1454) {
bb1455:
  int** unnamed1456;
  struct std__random_access_iterator_tag __retval1457;
  unnamed1456 = v1454;
  struct std__random_access_iterator_tag t1458 = __retval1457;
  return t1458;
}

// function: _ZSt6fill_nIPimiET_S1_T0_RKT1_
int* int__std__fill_n_int___unsigned_long__int_(int* v1459, unsigned long v1460, int* v1461) {
bb1462:
  int* __first1463;
  unsigned long __n1464;
  int* __value1465;
  int* __retval1466;
  struct std__random_access_iterator_tag agg_tmp01467;
  __first1463 = v1459;
  __n1464 = v1460;
  __value1465 = v1461;
  int* t1468 = __first1463;
  unsigned long t1469 = __n1464;
  unsigned long r1470 = std____size_to_integer(t1469);
  int* t1471 = __value1465;
  struct std__random_access_iterator_tag r1472 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first1463);
  agg_tmp01467 = r1472;
  struct std__random_access_iterator_tag t1473 = agg_tmp01467;
  int* r1474 = int__std____fill_n_a_int___unsigned_long__int_(t1468, r1470, t1471, t1473);
  __retval1466 = r1474;
  int* t1475 = __retval1466;
  return t1475;
}

// function: _ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(int* v1476, unsigned long v1477) {
bb1478:
  int* __first1479;
  unsigned long __n1480;
  int* __retval1481;
  __first1479 = v1476;
  __n1480 = v1477;
    unsigned long t1482 = __n1480;
    unsigned long c1483 = 0;
    _Bool c1484 = ((t1482 > c1483)) ? 1 : 0;
    if (c1484) {
      int* __val1485;
      int* t1486 = __first1479;
      __val1485 = t1486;
      int* t1487 = __val1485;
      void_std___Construct_int_(t1487);
      int* t1488 = __first1479;
      int c1489 = 1;
      int* ptr1490 = &(t1488)[c1489];
      __first1479 = ptr1490;
      int* t1491 = __first1479;
      unsigned long t1492 = __n1480;
      unsigned long c1493 = 1;
      unsigned long b1494 = t1492 - c1493;
      int* t1495 = __val1485;
      int* r1496 = int__std__fill_n_int___unsigned_long__int_(t1491, b1494, t1495);
      __first1479 = r1496;
    }
  int* t1497 = __first1479;
  __retval1481 = t1497;
  int* t1498 = __retval1481;
  return t1498;
}

// function: _ZSt25__uninitialized_default_nIPimET_S1_T0_
int* int__std____uninitialized_default_n_int___unsigned_long_(int* v1499, unsigned long v1500) {
bb1501:
  int* __first1502;
  unsigned long __n1503;
  int* __retval1504;
  _Bool __can_fill1505;
  __first1502 = v1499;
  __n1503 = v1500;
    _Bool r1506 = std__is_constant_evaluated();
    if (r1506) {
      int* t1507 = __first1502;
      unsigned long t1508 = __n1503;
      int* r1509 = int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(t1507, t1508);
      __retval1504 = r1509;
      int* t1510 = __retval1504;
      return t1510;
    }
  _Bool c1511 = 1;
  __can_fill1505 = c1511;
  int* t1512 = __first1502;
  unsigned long t1513 = __n1503;
  int* r1514 = int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(t1512, t1513);
  __retval1504 = r1514;
  int* t1515 = __retval1504;
  return t1515;
}

// function: _ZSt27__uninitialized_default_n_aIPimiET_S1_T0_RSaIT1_E
int* int__std____uninitialized_default_n_a_int___unsigned_long__int_(int* v1516, unsigned long v1517, struct std__allocator_int_* v1518) {
bb1519:
  int* __first1520;
  unsigned long __n1521;
  struct std__allocator_int_* unnamed1522;
  int* __retval1523;
  __first1520 = v1516;
  __n1521 = v1517;
  unnamed1522 = v1518;
  int* t1524 = __first1520;
  unsigned long t1525 = __n1521;
  int* r1526 = int__std____uninitialized_default_n_int___unsigned_long_(t1524, t1525);
  __retval1523 = r1526;
  int* t1527 = __retval1523;
  return t1527;
}

// function: _ZNSt6vectorIiSaIiEE21_M_default_initializeEm
void std__vector_int__std__allocator_int______M_default_initialize(struct std__vector_int__std__allocator_int__* v1528, unsigned long v1529) {
bb1530:
  struct std__vector_int__std__allocator_int__* this1531;
  unsigned long __n1532;
  this1531 = v1528;
  __n1532 = v1529;
  struct std__vector_int__std__allocator_int__* t1533 = this1531;
  struct std___Vector_base_int__std__allocator_int__* base1534 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1533 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1535 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1534->_M_impl) + 0);
  int* t1536 = base1535->_M_start;
  unsigned long t1537 = __n1532;
  struct std___Vector_base_int__std__allocator_int__* base1538 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1533 + 0);
  struct std__allocator_int_* r1539 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1538);
  int* r1540 = int__std____uninitialized_default_n_a_int___unsigned_long__int_(t1536, t1537, r1539);
  struct std___Vector_base_int__std__allocator_int__* base1541 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1533 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1542 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1541->_M_impl) + 0);
  base1542->_M_finish = r1540;
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1543, int* v1544, struct std__allocator_int_* v1545) {
bb1546:
  int* __first1547;
  int* __last1548;
  struct std__allocator_int_* unnamed1549;
  __first1547 = v1543;
  __last1548 = v1544;
  unnamed1549 = v1545;
  int* t1550 = __first1547;
  int* t1551 = __last1548;
  void_std___Destroy_int__(t1550, t1551);
  return;
}

