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
struct __gnu_cxx____ops___Iter_equal_to_iter { unsigned char __field0; };
struct __gnu_cxx____ops___Iter_less_iter { unsigned char __field0; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_ { unsigned char __field0; };
struct std____pair_base___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ { unsigned char __field0; };
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
struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ { struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ first; struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ second; };
struct std__ranges____distance_fn { unsigned char __field0; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

char __const_main_c2[10] = "BYE BYE";
char __const_main_c1[10] = "HELLO";
int __const_main_a2[10] = {1, 2, 3, 4, 1000, 6, 7, 8, 9, 10};
int __const_main_a1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[2] = " ";
char _str_1[21] = "Vector v1 contains: ";
char _str_2[22] = "\nVector v2 contains: ";
char _str_3[22] = "\nVector v3 contains: ";
char _str_4[13] = "\n\nVector v1 ";
char _str_5[3] = "is";
char _str_6[7] = "is not";
char _str_7[22] = " equal to vector v2.\n";
char _str_8[11] = "Vector v1 ";
char _str_9[22] = " equal to vector v3.\n";
char _str_10[43] = "\nThere is a mismatch between v1 and v3 at ";
char _str_11[10] = "location ";
char _str_12[20] = "\nwhere v1 contains ";
char _str_13[18] = " and v3 contains ";
char _str_14[3] = "\n\n";
char _str_15[15] = " is less than ";
char _str_16[30] = " is greater than or equal to ";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_17[49] = "cannot create std::vector larger than max_size()";
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector_int___void_(struct std__vector_int__std__allocator_int__* p0, int* p1, int* p2, struct std__allocator_int_* p3);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator_2(struct std__ostream_iterator_int__char__std__char_traits_char__* p0, struct std__basic_ostream_char__std__char_traits_char__* p1, char* p2);
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
extern int memcmp(void* p0, void* p1, unsigned long p2);
int int_std____memcmp_int__int_(int* p0, int* p1, unsigned long p2);
_Bool bool_std____equal_true___equal_int_(int* p0, int* p1, int* p2);
_Bool bool_std____equal_aux1_int___int__(int* p0, int* p1, int* p2);
_Bool bool_std____equal_aux___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
_Bool bool_std__equal___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
void _ZNSt4pairIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_EC2EvQaa26is_default_constructible_vIT_E26is_default_constructible_vIT0_E(struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* p0);
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
_Bool bool___gnu_cxx____ops___Iter_equal_to_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(struct __gnu_cxx____ops___Iter_equal_to_iter* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
void _ZNSt4pairIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_EC2IRS6_S9_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesISA_SB_EEEEOT_OT0_(struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p2);
struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ std__pair___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int________std____mismatch___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_equal_to_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, struct __gnu_cxx____ops___Iter_equal_to_iter p3);
struct __gnu_cxx____ops___Iter_equal_to_iter __gnu_cxx____ops____iter_equal_to_iter();
struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ std__pair___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int________std__mismatch___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* _ZNSt4pairIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_EaSEOS7_Qcl13_S_assignableIT_T0_EE(struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* p0, struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_long_(struct std__basic_ostream_char__std__char_traits_char__* p0, long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___2(struct std__basic_ostream_char__std__char_traits_char__* p0, long p1);
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
char* char__std____lc_rai_std__random_access_iterator_tag__std__random_access_iterator_tag_____newlast1_char___char__(char* p0, char* p1, char* p2, char* p3);
_Bool bool_std____lc_rai_std__random_access_iterator_tag__std__random_access_iterator_tag_____cnd2_char__(char* p0, char* p1);
_Bool bool___gnu_cxx____ops___Iter_less_iter__operator___char___char___char___char___const(struct __gnu_cxx____ops___Iter_less_iter* p0, char* p1, char* p2);
_Bool bool_std____lexicographical_compare_impl_char___char_____gnu_cxx____ops___Iter_less_iter_(char* p0, char* p1, char* p2, char* p3, struct __gnu_cxx____ops___Iter_less_iter p4);
struct __gnu_cxx____ops___Iter_less_iter __gnu_cxx____ops____iter_less_iter();
_Bool bool_std____lexicographical_compare_false_____lc_char___char__(char* p0, char* p1, char* p2, char* p3);
_Bool bool_std____lexicographical_compare_aux1_char___char__(char* p0, char* p1, char* p2, char* p3);
char* char__std____niter_base_char__(char* p0);
_Bool bool_std____lexicographical_compare_aux_char___char__(char* p0, char* p1, char* p2, char* p3);
_Bool bool_std__lexicographical_compare_char___char__(char* p0, char* p1, char* p2, char* p3);
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
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);

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

// function: _ZNSt6vectorIiSaIiEEC2IPivEET_S4_RKS0_
void std__vector_int__std__allocator_int_____vector_int___void_(struct std__vector_int__std__allocator_int__* v5, int* v6, int* v7, struct std__allocator_int_* v8) {
bb9:
  struct std__vector_int__std__allocator_int__* this10;
  int* __first11;
  int* __last12;
  struct std__allocator_int_* __a13;
  this10 = v5;
  __first11 = v6;
  __last12 = v7;
  __a13 = v8;
  struct std__vector_int__std__allocator_int__* t14 = this10;
  struct std___Vector_base_int__std__allocator_int__* base15 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t14 + 0);
  struct std__allocator_int_* t16 = __a13;
  std___Vector_base_int__std__allocator_int______Vector_base(base15, t16);
      unsigned long __n17;
      int* t18 = __last12;
      long r19 = _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_(&_ZNSt6ranges8distanceE, &__first11, t18);
      unsigned long cast20 = (unsigned long)r19;
      __n17 = cast20;
      int* t21 = __first11;
      int* t22 = __last12;
      unsigned long t23 = __n17;
      void_std__vector_int__std__allocator_int______M_range_initialize_n_int___int__(t14, t21, t22, t23);
      {
        struct std___Vector_base_int__std__allocator_int__* base24 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t14 + 0);
        std___Vector_base_int__std__allocator_int_______Vector_base(base24);
      }
      return;
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v25) {
bb26:
  struct std__allocator_int_* this27;
  this27 = v25;
  struct std__allocator_int_* t28 = this27;
  return;
}

// function: _ZNSt16ostream_iteratorIicSt11char_traitsIcEEC2ERSoPKc
void std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator_2(struct std__ostream_iterator_int__char__std__char_traits_char__* v29, struct std__basic_ostream_char__std__char_traits_char__* v30, char* v31) {
bb32:
  struct std__ostream_iterator_int__char__std__char_traits_char__* this33;
  struct std__basic_ostream_char__std__char_traits_char__* __s34;
  char* __c35;
  this33 = v29;
  __s34 = v30;
  __c35 = v31;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t36 = this33;
  struct std__iterator_std__output_iterator_tag__void__void__void__void_* base37 = (struct std__iterator_std__output_iterator_tag__void__void__void__void_*)((char *)t36 + 0);
  struct std__basic_ostream_char__std__char_traits_char__* t38 = __s34;
  t36->_M_stream = t38;
  char* t39 = __c35;
  t36->_M_string = t39;
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

// function: _ZSt8__memcmpIiiEiPKT_PKT0_m
int int_std____memcmp_int__int_(int* v320, int* v321, unsigned long v322) {
bb323:
  int* __first1324;
  int* __first2325;
  unsigned long __num326;
  int __retval327;
  __first1324 = v320;
  __first2325 = v321;
  __num326 = v322;
    _Bool r328 = std__is_constant_evaluated();
    if (r328) {
        while (1) {
          unsigned long t330 = __num326;
          unsigned long c331 = 0;
          _Bool c332 = ((t330 > c331)) ? 1 : 0;
          if (!c332) break;
            int* t333 = __first1324;
            int t334 = *t333;
            int* t335 = __first2325;
            int t336 = *t335;
            _Bool c337 = ((t334 != t336)) ? 1 : 0;
            if (c337) {
              int* t338 = __first1324;
              int t339 = *t338;
              int* t340 = __first2325;
              int t341 = *t340;
              _Bool c342 = ((t339 < t341)) ? 1 : 0;
              int c343 = -1;
              int c344 = 1;
              int sel345 = c342 ? c343 : c344;
              __retval327 = sel345;
              int t346 = __retval327;
              int ret_val347 = t346;
              return ret_val347;
            }
        for_step329: ;
          int* t348 = __first1324;
          int c349 = 1;
          int* ptr350 = &(t348)[c349];
          __first1324 = ptr350;
          int* t351 = __first2325;
          int c352 = 1;
          int* ptr353 = &(t351)[c352];
          __first2325 = ptr353;
          unsigned long t354 = __num326;
          unsigned long u355 = t354 - 1;
          __num326 = u355;
        }
      int c356 = 0;
      __retval327 = c356;
      int t357 = __retval327;
      return t357;
    } else {
      int* t358 = __first1324;
      void* cast359 = (void*)t358;
      int* t360 = __first2325;
      void* cast361 = (void*)t360;
      unsigned long c362 = 4;
      unsigned long t363 = __num326;
      unsigned long b364 = c362 * t363;
      int r365 = memcmp(cast359, cast361, b364);
      __retval327 = r365;
      int t366 = __retval327;
      return t366;
    }
  abort();
}

// function: _ZNSt7__equalILb1EE5equalIiEEbPKT_S4_S4_
_Bool bool_std____equal_true___equal_int_(int* v367, int* v368, int* v369) {
bb370:
  int* __first1371;
  int* __last1372;
  int* __first2373;
  _Bool __retval374;
  __first1371 = v367;
  __last1372 = v368;
  __first2373 = v369;
    unsigned long __len375;
    int* t376 = __last1372;
    int* t377 = __first1371;
    long diff378 = t376 - t377;
    unsigned long cast379 = (unsigned long)diff378;
    __len375 = cast379;
    unsigned long t380 = __len375;
    _Bool cast381 = (_Bool)t380;
    if (cast381) {
      int* t382 = __first1371;
      int* t383 = __first2373;
      unsigned long t384 = __len375;
      int r385 = int_std____memcmp_int__int_(t382, t383, t384);
      _Bool cast386 = (_Bool)r385;
      _Bool u387 = !cast386;
      __retval374 = u387;
      _Bool t388 = __retval374;
      return t388;
    }
  _Bool c389 = 1;
  __retval374 = c389;
  _Bool t390 = __retval374;
  return t390;
}

// function: _ZSt12__equal_aux1IPiS0_EbT_S1_T0_
_Bool bool_std____equal_aux1_int___int__(int* v391, int* v392, int* v393) {
bb394:
  int* __first1395;
  int* __last1396;
  int* __first2397;
  _Bool __retval398;
  _Bool __simple399;
  __first1395 = v391;
  __last1396 = v392;
  __first2397 = v393;
  _Bool c400 = 1;
  __simple399 = c400;
  int* t401 = __first1395;
  int* t402 = __last1396;
  int* t403 = __first2397;
  _Bool r404 = bool_std____equal_true___equal_int_(t401, t402, t403);
  __retval398 = r404;
  _Bool t405 = __retval398;
  return t405;
}

// function: _ZSt11__equal_auxIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_EbT_S7_T0_
_Bool bool_std____equal_aux___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v406, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v407, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v408) {
bb409:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1410;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1411;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first2412;
  _Bool __retval413;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0414;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1415;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2416;
  __first1410 = v406;
  __last1411 = v407;
  __first2412 = v408;
  agg_tmp0414 = __first1410; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t417 = agg_tmp0414;
  int* r418 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t417);
  agg_tmp1415 = __last1411; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t419 = agg_tmp1415;
  int* r420 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t419);
  agg_tmp2416 = __first2412; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t421 = agg_tmp2416;
  int* r422 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t421);
  _Bool r423 = bool_std____equal_aux1_int___int__(r418, r420, r422);
  __retval413 = r423;
  _Bool t424 = __retval413;
  return t424;
}

// function: _ZSt5equalIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_EbT_S7_T0_
_Bool bool_std__equal___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v425, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v426, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v427) {
bb428:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1429;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1430;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first2431;
  _Bool __retval432;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0433;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1434;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2435;
  __first1429 = v425;
  __last1430 = v426;
  __first2431 = v427;
  agg_tmp0433 = __first1429; // copy
  agg_tmp1434 = __last1430; // copy
  agg_tmp2435 = __first2431; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t436 = agg_tmp0433;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t437 = agg_tmp1434;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t438 = agg_tmp2435;
  _Bool r439 = bool_std____equal_aux___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t436, t437, t438);
  __retval432 = r439;
  _Bool t440 = __retval432;
  return t440;
}

// function: _ZNSt4pairIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_EC2EvQaa26is_default_constructible_vIT_E26is_default_constructible_vIT0_E
void _ZNSt4pairIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_EC2EvQaa26is_default_constructible_vIT_E26is_default_constructible_vIT0_E(struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* v441) {
bb442:
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* this443;
  this443 = v441;
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* t444 = this443;
  struct std____pair_base___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* base445 = (struct std____pair_base___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____*)((char *)t444 + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&t444->first);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&t444->second);
  return;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v446, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v447) {
bb448:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs449;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs450;
  _Bool __retval451;
  __lhs449 = v446;
  __rhs450 = v447;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t452 = __lhs449;
  int** r453 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t452);
  int* t454 = *r453;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t455 = __rhs450;
  int** r456 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t455);
  int* t457 = *r456;
  _Bool c458 = ((t454 == t457)) ? 1 : 0;
  __retval451 = c458;
  _Bool t459 = __retval451;
  return t459;
}

// function: _ZNK9__gnu_cxx5__ops19_Iter_equal_to_iterclINS_17__normal_iteratorIPiSt6vectorIiSaIiEEEES8_EEbT_T0_
_Bool bool___gnu_cxx____ops___Iter_equal_to_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(struct __gnu_cxx____ops___Iter_equal_to_iter* v460, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v461, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v462) {
bb463:
  struct __gnu_cxx____ops___Iter_equal_to_iter* this464;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it1465;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it2466;
  _Bool __retval467;
  this464 = v460;
  __it1465 = v461;
  __it2466 = v462;
  struct __gnu_cxx____ops___Iter_equal_to_iter* t468 = this464;
  int* r469 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it1465);
  int t470 = *r469;
  int* r471 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it2466);
  int t472 = *r471;
  _Bool c473 = ((t470 == t472)) ? 1 : 0;
  __retval467 = c473;
  _Bool t474 = __retval467;
  return t474;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v475) {
bb476:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this477;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval478;
  this477 = v475;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t479 = this477;
  int* t480 = t479->_M_current;
  int c481 = 1;
  int* ptr482 = &(t480)[c481];
  t479->_M_current = ptr482;
  __retval478 = t479;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t483 = __retval478;
  return t483;
}

// function: _ZNSt4pairIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_EC2IRS6_S9_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesISA_SB_EEEEOT_OT0_
void _ZNSt4pairIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_EC2IRS6_S9_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesISA_SB_EEEEOT_OT0_(struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* v484, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v485, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v486) {
bb487:
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* this488;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __x489;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __y490;
  this488 = v484;
  __x489 = v485;
  __y490 = v486;
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* t491 = this488;
  struct std____pair_base___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* base492 = (struct std____pair_base___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____*)((char *)t491 + 0);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t493 = __x489;
  t491->first = *t493; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t494 = __y490;
  t491->second = *t494; // copy
  return;
}

// function: _ZSt10__mismatchIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_NS0_5__ops19_Iter_equal_to_iterEESt4pairIT_T0_ESA_SA_SB_T1_
struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ std__pair___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int________std____mismatch___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_equal_to_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v495, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v496, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v497, struct __gnu_cxx____ops___Iter_equal_to_iter v498) {
bb499:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1500;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1501;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first2502;
  struct __gnu_cxx____ops___Iter_equal_to_iter __binary_pred503;
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ __retval504;
  __first1500 = v495;
  __last1501 = v496;
  __first2502 = v497;
  __binary_pred503 = v498;
    while (1) {
      _Bool r505 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first1500, &__last1501);
      _Bool u506 = !r505;
      _Bool ternary507;
      if (u506) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0508;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1509;
        agg_tmp0508 = __first1500; // copy
        agg_tmp1509 = __first2502; // copy
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t510 = agg_tmp0508;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t511 = agg_tmp1509;
        _Bool r512 = bool___gnu_cxx____ops___Iter_equal_to_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(&__binary_pred503, t510, t511);
        ternary507 = (_Bool)r512;
      } else {
        _Bool c513 = 0;
        ternary507 = (_Bool)c513;
      }
      if (!ternary507) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r514 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__first1500);
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r515 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__first2502);
    }
  _ZNSt4pairIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_EC2IRS6_S9_Qaacl16_S_constructibleITL0__TL0_0_EEntcl10_S_danglesISA_SB_EEEEOT_OT0_(&__retval504, &__first1500, &__first2502);
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ t516 = __retval504;
  return t516;
}

// function: _ZN9__gnu_cxx5__ops20__iter_equal_to_iterEv
struct __gnu_cxx____ops___Iter_equal_to_iter __gnu_cxx____ops____iter_equal_to_iter() {
bb517:
  struct __gnu_cxx____ops___Iter_equal_to_iter __retval518;
  struct __gnu_cxx____ops___Iter_equal_to_iter t519 = __retval518;
  return t519;
}

// function: _ZSt8mismatchIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_ESt4pairIT_T0_ES8_S8_S9_
struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ std__pair___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int________std__mismatch___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v520, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v521, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v522) {
bb523:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1524;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1525;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first2526;
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ __retval527;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0528;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1529;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2530;
  struct __gnu_cxx____ops___Iter_equal_to_iter agg_tmp3531;
  __first1524 = v520;
  __last1525 = v521;
  __first2526 = v522;
  agg_tmp0528 = __first1524; // copy
  agg_tmp1529 = __last1525; // copy
  agg_tmp2530 = __first2526; // copy
  struct __gnu_cxx____ops___Iter_equal_to_iter r532 = __gnu_cxx____ops____iter_equal_to_iter();
  agg_tmp3531 = r532;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t533 = agg_tmp0528;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t534 = agg_tmp1529;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t535 = agg_tmp2530;
  struct __gnu_cxx____ops___Iter_equal_to_iter t536 = agg_tmp3531;
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ r537 = std__pair___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int________std____mismatch___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_equal_to_iter_(t533, t534, t535, t536);
  __retval527 = r537;
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ t538 = __retval527;
  return t538;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSEOS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v539, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v540) {
bb541:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this542;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed543;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval544;
  this542 = v539;
  unnamed543 = v540;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t545 = this542;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t546 = unnamed543;
  int* t547 = t546->_M_current;
  t545->_M_current = t547;
  __retval544 = t545;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t548 = __retval544;
  return t548;
}

// function: _ZNSt4pairIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_EaSEOS7_Qcl13_S_assignableIT_T0_EE
struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* _ZNSt4pairIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_EaSEOS7_Qcl13_S_assignableIT_T0_EE(struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* v549, struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* v550) {
bb551:
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* this552;
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* __p553;
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* __retval554;
  this552 = v549;
  __p553 = v550;
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* t555 = this552;
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* t556 = __p553;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r557 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&t555->first, &t556->first);
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* t558 = __p553;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r559 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&t555->second, &t558->second);
  __retval554 = t555;
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* t560 = __retval554;
  return t560;
}

// function: _ZNSolsEl
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___2(struct std__basic_ostream_char__std__char_traits_char__* v561, long v562) {
bb563:
  struct std__basic_ostream_char__std__char_traits_char__* this564;
  long __n565;
  struct std__basic_ostream_char__std__char_traits_char__* __retval566;
  this564 = v561;
  __n565 = v562;
  struct std__basic_ostream_char__std__char_traits_char__* t567 = this564;
  long t568 = __n565;
  struct std__basic_ostream_char__std__char_traits_char__* r569 = std__ostream__std__ostream___M_insert_long_(t567, t568);
  __retval566 = r569;
  struct std__basic_ostream_char__std__char_traits_char__* t570 = __retval566;
  return t570;
}

// function: _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v571, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v572) {
bb573:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs574;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs575;
  long __retval576;
  __lhs574 = v571;
  __rhs575 = v572;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t577 = __lhs574;
  int** r578 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t577);
  int* t579 = *r578;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t580 = __rhs575;
  int** r581 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t580);
  int* t582 = *r581;
  long diff583 = t579 - t582;
  __retval576 = diff583;
  long t584 = __retval576;
  return t584;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v585) {
bb586:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this587;
  int* __retval588;
  this587 = v585;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t589 = this587;
  int* t590 = t589->_M_current;
  __retval588 = t590;
  int* t591 = __retval588;
  return t591;
}

// function: _ZNSt8__lc_raiISt26random_access_iterator_tagS0_E10__newlast1IPcS3_EET_S4_S4_T0_S5_
char* char__std____lc_rai_std__random_access_iterator_tag__std__random_access_iterator_tag_____newlast1_char___char__(char* v592, char* v593, char* v594, char* v595) {
bb596:
  char* __first1597;
  char* __last1598;
  char* __first2599;
  char* __last2600;
  char* __retval601;
  long __diff1602;
  long __diff2603;
  __first1597 = v592;
  __last1598 = v593;
  __first2599 = v594;
  __last2600 = v595;
  char* t604 = __last1598;
  char* t605 = __first1597;
  long diff606 = t604 - t605;
  __diff1602 = diff606;
  char* t607 = __last2600;
  char* t608 = __first2599;
  long diff609 = t607 - t608;
  __diff2603 = diff609;
  long t610 = __diff2603;
  long t611 = __diff1602;
  _Bool c612 = ((t610 < t611)) ? 1 : 0;
  char* ternary613;
  if (c612) {
    char* t614 = __first1597;
    long t615 = __diff2603;
    char* ptr616 = &(t614)[t615];
    ternary613 = (char*)ptr616;
  } else {
    char* t617 = __last1598;
    ternary613 = (char*)t617;
  }
  __retval601 = ternary613;
  char* t618 = __retval601;
  return t618;
}

// function: _ZNSt8__lc_raiISt26random_access_iterator_tagS0_E6__cnd2IPcEEbT_S4_
_Bool bool_std____lc_rai_std__random_access_iterator_tag__std__random_access_iterator_tag_____cnd2_char__(char* v619, char* v620) {
bb621:
  char* unnamed622;
  char* unnamed623;
  _Bool __retval624;
  unnamed622 = v619;
  unnamed623 = v620;
  _Bool c625 = 1;
  __retval624 = c625;
  _Bool t626 = __retval624;
  return t626;
}

// function: _ZNK9__gnu_cxx5__ops15_Iter_less_iterclIPcS3_EEbT_T0_
_Bool bool___gnu_cxx____ops___Iter_less_iter__operator___char___char___char___char___const(struct __gnu_cxx____ops___Iter_less_iter* v627, char* v628, char* v629) {
bb630:
  struct __gnu_cxx____ops___Iter_less_iter* this631;
  char* __it1632;
  char* __it2633;
  _Bool __retval634;
  this631 = v627;
  __it1632 = v628;
  __it2633 = v629;
  struct __gnu_cxx____ops___Iter_less_iter* t635 = this631;
  char* t636 = __it1632;
  char t637 = *t636;
  int cast638 = (int)t637;
  char* t639 = __it2633;
  char t640 = *t639;
  int cast641 = (int)t640;
  _Bool c642 = ((cast638 < cast641)) ? 1 : 0;
  __retval634 = c642;
  _Bool t643 = __retval634;
  return t643;
}

// function: _ZSt30__lexicographical_compare_implIPcS0_N9__gnu_cxx5__ops15_Iter_less_iterEEbT_S4_T0_S5_T1_
_Bool bool_std____lexicographical_compare_impl_char___char_____gnu_cxx____ops___Iter_less_iter_(char* v644, char* v645, char* v646, char* v647, struct __gnu_cxx____ops___Iter_less_iter v648) {
bb649:
  char* __first1650;
  char* __last1651;
  char* __first2652;
  char* __last2653;
  struct __gnu_cxx____ops___Iter_less_iter __comp654;
  _Bool __retval655;
  __first1650 = v644;
  __last1651 = v645;
  __first2652 = v646;
  __last2653 = v647;
  __comp654 = v648;
  char* t656 = __first1650;
  char* t657 = __last1651;
  char* t658 = __first2652;
  char* t659 = __last2653;
  char* r660 = char__std____lc_rai_std__random_access_iterator_tag__std__random_access_iterator_tag_____newlast1_char___char__(t656, t657, t658, t659);
  __last1651 = r660;
    while (1) {
      char* t662 = __first1650;
      char* t663 = __last1651;
      _Bool c664 = ((t662 != t663)) ? 1 : 0;
      _Bool ternary665;
      if (c664) {
        char* t666 = __first2652;
        char* t667 = __last2653;
        _Bool r668 = bool_std____lc_rai_std__random_access_iterator_tag__std__random_access_iterator_tag_____cnd2_char__(t666, t667);
        ternary665 = (_Bool)r668;
      } else {
        _Bool c669 = 0;
        ternary665 = (_Bool)c669;
      }
      if (!ternary665) break;
          char* t670 = __first1650;
          char* t671 = __first2652;
          _Bool r672 = bool___gnu_cxx____ops___Iter_less_iter__operator___char___char___char___char___const(&__comp654, t670, t671);
          if (r672) {
            _Bool c673 = 1;
            __retval655 = c673;
            _Bool t674 = __retval655;
            _Bool ret_val675 = t674;
            return ret_val675;
          }
          char* t676 = __first2652;
          char* t677 = __first1650;
          _Bool r678 = bool___gnu_cxx____ops___Iter_less_iter__operator___char___char___char___char___const(&__comp654, t676, t677);
          if (r678) {
            _Bool c679 = 0;
            __retval655 = c679;
            _Bool t680 = __retval655;
            _Bool ret_val681 = t680;
            return ret_val681;
          }
    for_step661: ;
      char* t682 = __first1650;
      int c683 = 1;
      char* ptr684 = &(t682)[c683];
      __first1650 = ptr684;
      char* t685 = __first2652;
      int c686 = 1;
      char* ptr687 = &(t685)[c686];
      __first2652 = ptr687;
    }
  char* t688 = __first1650;
  char* t689 = __last1651;
  _Bool c690 = ((t688 == t689)) ? 1 : 0;
  _Bool ternary691;
  if (c690) {
    char* t692 = __first2652;
    char* t693 = __last2653;
    _Bool c694 = ((t692 != t693)) ? 1 : 0;
    ternary691 = (_Bool)c694;
  } else {
    _Bool c695 = 0;
    ternary691 = (_Bool)c695;
  }
  __retval655 = ternary691;
  _Bool t696 = __retval655;
  return t696;
}

// function: _ZN9__gnu_cxx5__ops16__iter_less_iterEv
struct __gnu_cxx____ops___Iter_less_iter __gnu_cxx____ops____iter_less_iter() {
bb697:
  struct __gnu_cxx____ops___Iter_less_iter __retval698;
  struct __gnu_cxx____ops___Iter_less_iter t699 = __retval698;
  return t699;
}

// function: _ZNSt25__lexicographical_compareILb0EE4__lcIPcS2_EEbT_S3_T0_S4_
_Bool bool_std____lexicographical_compare_false_____lc_char___char__(char* v700, char* v701, char* v702, char* v703) {
bb704:
  char* __first1705;
  char* __last1706;
  char* __first2707;
  char* __last2708;
  _Bool __retval709;
  struct __gnu_cxx____ops___Iter_less_iter agg_tmp0710;
  __first1705 = v700;
  __last1706 = v701;
  __first2707 = v702;
  __last2708 = v703;
  char* t711 = __first1705;
  char* t712 = __last1706;
  char* t713 = __first2707;
  char* t714 = __last2708;
  struct __gnu_cxx____ops___Iter_less_iter r715 = __gnu_cxx____ops____iter_less_iter();
  agg_tmp0710 = r715;
  struct __gnu_cxx____ops___Iter_less_iter t716 = agg_tmp0710;
  _Bool r717 = bool_std____lexicographical_compare_impl_char___char_____gnu_cxx____ops___Iter_less_iter_(t711, t712, t713, t714, t716);
  __retval709 = r717;
  _Bool t718 = __retval709;
  return t718;
}

// function: _ZSt30__lexicographical_compare_aux1IPcS0_EbT_S1_T0_S2_
_Bool bool_std____lexicographical_compare_aux1_char___char__(char* v719, char* v720, char* v721, char* v722) {
bb723:
  char* __first1724;
  char* __last1725;
  char* __first2726;
  char* __last2727;
  _Bool __retval728;
  _Bool __simple729;
  __first1724 = v719;
  __last1725 = v720;
  __first2726 = v721;
  __last2727 = v722;
  _Bool c730 = 0;
  __simple729 = c730;
  char* t731 = __first1724;
  char* t732 = __last1725;
  char* t733 = __first2726;
  char* t734 = __last2727;
  _Bool r735 = bool_std____lexicographical_compare_false_____lc_char___char__(t731, t732, t733, t734);
  __retval728 = r735;
  _Bool t736 = __retval728;
  return t736;
}

// function: _ZSt12__niter_baseIPcET_S1_
char* char__std____niter_base_char__(char* v737) {
bb738:
  char* __it739;
  char* __retval740;
  __it739 = v737;
  char* t741 = __it739;
  __retval740 = t741;
  char* t742 = __retval740;
  return t742;
}

// function: _ZSt29__lexicographical_compare_auxIPcS0_EbT_S1_T0_S2_
_Bool bool_std____lexicographical_compare_aux_char___char__(char* v743, char* v744, char* v745, char* v746) {
bb747:
  char* __first1748;
  char* __last1749;
  char* __first2750;
  char* __last2751;
  _Bool __retval752;
  __first1748 = v743;
  __last1749 = v744;
  __first2750 = v745;
  __last2751 = v746;
  char* t753 = __first1748;
  char* r754 = char__std____niter_base_char__(t753);
  char* t755 = __last1749;
  char* r756 = char__std____niter_base_char__(t755);
  char* t757 = __first2750;
  char* r758 = char__std____niter_base_char__(t757);
  char* t759 = __last2751;
  char* r760 = char__std____niter_base_char__(t759);
  _Bool r761 = bool_std____lexicographical_compare_aux1_char___char__(r754, r756, r758, r760);
  __retval752 = r761;
  _Bool t762 = __retval752;
  return t762;
}

// function: _ZSt23lexicographical_compareIPcS0_EbT_S1_T0_S2_
_Bool bool_std__lexicographical_compare_char___char__(char* v763, char* v764, char* v765, char* v766) {
bb767:
  char* __first1768;
  char* __last1769;
  char* __first2770;
  char* __last2771;
  _Bool __retval772;
  __first1768 = v763;
  __last1769 = v764;
  __first2770 = v765;
  __last2771 = v766;
  char* t773 = __first1768;
  char* t774 = __last1769;
  char* t775 = __first2770;
  char* t776 = __last2771;
  _Bool r777 = bool_std____lexicographical_compare_aux_char___char__(t773, t774, t775, t776);
  __retval772 = r777;
  _Bool t778 = __retval772;
  return t778;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v779, void* v780) {
bb781:
  struct std__basic_ostream_char__std__char_traits_char__* this782;
  void* __pf783;
  struct std__basic_ostream_char__std__char_traits_char__* __retval784;
  this782 = v779;
  __pf783 = v780;
  struct std__basic_ostream_char__std__char_traits_char__* t785 = this782;
  void* t786 = __pf783;
  struct std__basic_ostream_char__std__char_traits_char__* r787 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t786)(t785);
  __retval784 = r787;
  struct std__basic_ostream_char__std__char_traits_char__* t788 = __retval784;
  return t788;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v789) {
bb790:
  struct std__basic_ostream_char__std__char_traits_char__* __os791;
  struct std__basic_ostream_char__std__char_traits_char__* __retval792;
  __os791 = v789;
  struct std__basic_ostream_char__std__char_traits_char__* t793 = __os791;
  struct std__basic_ostream_char__std__char_traits_char__* r794 = std__ostream__flush(t793);
  __retval792 = r794;
  struct std__basic_ostream_char__std__char_traits_char__* t795 = __retval792;
  return t795;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v796) {
bb797:
  struct std__ctype_char_* __f798;
  struct std__ctype_char_* __retval799;
  __f798 = v796;
    struct std__ctype_char_* t800 = __f798;
    _Bool cast801 = (_Bool)t800;
    _Bool u802 = !cast801;
    if (u802) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t803 = __f798;
  __retval799 = t803;
  struct std__ctype_char_* t804 = __retval799;
  return t804;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v805, char v806) {
bb807:
  struct std__ctype_char_* this808;
  char __c809;
  char __retval810;
  this808 = v805;
  __c809 = v806;
  struct std__ctype_char_* t811 = this808;
    char t812 = t811->_M_widen_ok;
    _Bool cast813 = (_Bool)t812;
    if (cast813) {
      char t814 = __c809;
      unsigned char cast815 = (unsigned char)t814;
      unsigned long cast816 = (unsigned long)cast815;
      char t817 = t811->_M_widen[cast816];
      __retval810 = t817;
      char t818 = __retval810;
      return t818;
    }
  std__ctype_char____M_widen_init___const(t811);
  char t819 = __c809;
  void** v820 = (void**)t811;
  void* v821 = *((void**)v820);
  char vcall824 = (char)__VERIFIER_virtual_call_char_char(t811, 6, t819);
  __retval810 = vcall824;
  char t825 = __retval810;
  return t825;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v826, char v827) {
bb828:
  struct std__basic_ios_char__std__char_traits_char__* this829;
  char __c830;
  char __retval831;
  this829 = v826;
  __c830 = v827;
  struct std__basic_ios_char__std__char_traits_char__* t832 = this829;
  struct std__ctype_char_* t833 = t832->_M_ctype;
  struct std__ctype_char_* r834 = std__ctype_char__const__std____check_facet_std__ctype_char___(t833);
  char t835 = __c830;
  char r836 = std__ctype_char___widen_char__const(r834, t835);
  __retval831 = r836;
  char t837 = __retval831;
  return t837;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v838) {
bb839:
  struct std__basic_ostream_char__std__char_traits_char__* __os840;
  struct std__basic_ostream_char__std__char_traits_char__* __retval841;
  __os840 = v838;
  struct std__basic_ostream_char__std__char_traits_char__* t842 = __os840;
  struct std__basic_ostream_char__std__char_traits_char__* t843 = __os840;
  void** v844 = (void**)t843;
  void* v845 = *((void**)v844);
  unsigned char* cast846 = (unsigned char*)v845;
  long c847 = -24;
  unsigned char* ptr848 = &(cast846)[c847];
  long* cast849 = (long*)ptr848;
  long t850 = *cast849;
  unsigned char* cast851 = (unsigned char*)t843;
  unsigned char* ptr852 = &(cast851)[t850];
  struct std__basic_ostream_char__std__char_traits_char__* cast853 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr852;
  struct std__basic_ios_char__std__char_traits_char__* cast854 = (struct std__basic_ios_char__std__char_traits_char__*)cast853;
  char c855 = 10;
  char r856 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast854, c855);
  struct std__basic_ostream_char__std__char_traits_char__* r857 = std__ostream__put(t842, r856);
  struct std__basic_ostream_char__std__char_traits_char__* r858 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r857);
  __retval841 = r858;
  struct std__basic_ostream_char__std__char_traits_char__* t859 = __retval841;
  return t859;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v860) {
bb861:
  struct std__vector_int__std__allocator_int__* this862;
  this862 = v860;
  struct std__vector_int__std__allocator_int__* t863 = this862;
    struct std___Vector_base_int__std__allocator_int__* base864 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t863 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base865 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base864->_M_impl) + 0);
    int* t866 = base865->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base867 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t863 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base868 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base867->_M_impl) + 0);
    int* t869 = base868->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base870 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t863 + 0);
    struct std__allocator_int_* r871 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base870);
    void_std___Destroy_int___int_(t866, t869, r871);
  {
    struct std___Vector_base_int__std__allocator_int__* base872 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t863 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base872);
  }
  return;
}

// function: main
int main() {
bb873:
  int __retval874;
  int SIZE875;
  int a1876[10];
  int a2877[10];
  struct std__vector_int__std__allocator_int__ v1878;
  struct std__allocator_int_ ref_tmp0879;
  struct std__vector_int__std__allocator_int__ v2880;
  struct std__allocator_int_ ref_tmp1881;
  struct std__vector_int__std__allocator_int__ v3882;
  struct std__allocator_int_ ref_tmp2883;
  struct std__ostream_iterator_int__char__std__char_traits_char__ output884;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0885;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1886;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp2887;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp3888;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp4889;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp5890;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp6891;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp7892;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp8893;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp9894;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp10895;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp11896;
  _Bool result897;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp12898;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp13899;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp14900;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp15901;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp16902;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp17903;
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ location904;
  struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ ref_tmp3905;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp18906;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp19907;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp20908;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp4909;
  char c1910[10];
  char c2911[10];
  int c912 = 0;
  __retval874 = c912;
  int c913 = 10;
  SIZE875 = c913;
  // array copy
  __builtin_memcpy(a1876, __const_main_a1, (unsigned long)10 * sizeof(__const_main_a1[0]));
  // array copy
  __builtin_memcpy(a2877, __const_main_a2, (unsigned long)10 * sizeof(__const_main_a2[0]));
  int* cast914 = (int*)&(a1876);
  int* cast915 = (int*)&(a1876);
  int t916 = SIZE875;
  int* ptr917 = &(cast915)[t916];
  std__allocator_int___allocator_2(&ref_tmp0879);
    std__vector_int__std__allocator_int_____vector_int___void_(&v1878, cast914, ptr917, &ref_tmp0879);
  {
    std__allocator_int____allocator(&ref_tmp0879);
  }
    int* cast918 = (int*)&(a1876);
    int* cast919 = (int*)&(a1876);
    int t920 = SIZE875;
    int* ptr921 = &(cast919)[t920];
    std__allocator_int___allocator_2(&ref_tmp1881);
      std__vector_int__std__allocator_int_____vector_int___void_(&v2880, cast918, ptr921, &ref_tmp1881);
    {
      std__allocator_int____allocator(&ref_tmp1881);
    }
      int* cast922 = (int*)&(a2877);
      int* cast923 = (int*)&(a2877);
      int t924 = SIZE875;
      int* ptr925 = &(cast923)[t924];
      std__allocator_int___allocator_2(&ref_tmp2883);
        std__vector_int__std__allocator_int_____vector_int___void_(&v3882, cast922, ptr925, &ref_tmp2883);
      {
        std__allocator_int____allocator(&ref_tmp2883);
      }
        char* cast926 = (char*)&(_str);
        std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator_2(&output884, &_ZSt4cout, cast926);
        char* cast927 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* r928 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast927);
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r929 = std__vector_int__std__allocator_int_____begin(&v1878);
        agg_tmp0885 = r929;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r930 = std__vector_int__std__allocator_int_____end(&v1878);
        agg_tmp1886 = r930;
        std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp2887, &output884);
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t931 = agg_tmp0885;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t932 = agg_tmp1886;
        struct std__ostream_iterator_int__char__std__char_traits_char__ t933 = agg_tmp2887;
        struct std__ostream_iterator_int__char__std__char_traits_char__ r934 = std__ostream_iterator_int__char__std__char_traits_char____std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(t931, t932, t933);
        agg_tmp3888 = r934;
        char* cast935 = (char*)&(_str_2);
        struct std__basic_ostream_char__std__char_traits_char__* r936 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast935);
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r937 = std__vector_int__std__allocator_int_____begin(&v2880);
        agg_tmp4889 = r937;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r938 = std__vector_int__std__allocator_int_____end(&v2880);
        agg_tmp5890 = r938;
        std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp6891, &output884);
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t939 = agg_tmp4889;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t940 = agg_tmp5890;
        struct std__ostream_iterator_int__char__std__char_traits_char__ t941 = agg_tmp6891;
        struct std__ostream_iterator_int__char__std__char_traits_char__ r942 = std__ostream_iterator_int__char__std__char_traits_char____std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(t939, t940, t941);
        agg_tmp7892 = r942;
        char* cast943 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* r944 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast943);
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r945 = std__vector_int__std__allocator_int_____begin(&v3882);
        agg_tmp8893 = r945;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r946 = std__vector_int__std__allocator_int_____end(&v3882);
        agg_tmp9894 = r946;
        std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp10895, &output884);
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t947 = agg_tmp8893;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t948 = agg_tmp9894;
        struct std__ostream_iterator_int__char__std__char_traits_char__ t949 = agg_tmp10895;
        struct std__ostream_iterator_int__char__std__char_traits_char__ r950 = std__ostream_iterator_int__char__std__char_traits_char____std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(t947, t948, t949);
        agg_tmp11896 = r950;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r951 = std__vector_int__std__allocator_int_____begin(&v1878);
        agg_tmp12898 = r951;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r952 = std__vector_int__std__allocator_int_____end(&v1878);
        agg_tmp13899 = r952;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r953 = std__vector_int__std__allocator_int_____begin(&v2880);
        agg_tmp14900 = r953;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t954 = agg_tmp12898;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t955 = agg_tmp13899;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t956 = agg_tmp14900;
        _Bool r957 = bool_std__equal___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t954, t955, t956);
        result897 = r957;
        char* cast958 = (char*)&(_str_4);
        struct std__basic_ostream_char__std__char_traits_char__* r959 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast958);
        _Bool t960 = result897;
        char* cast961 = (char*)&(_str_5);
        char* cast962 = (char*)&(_str_6);
        char* sel963 = t960 ? cast961 : cast962;
        struct std__basic_ostream_char__std__char_traits_char__* r964 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r959, sel963);
        char* cast965 = (char*)&(_str_7);
        struct std__basic_ostream_char__std__char_traits_char__* r966 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r964, cast965);
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r967 = std__vector_int__std__allocator_int_____begin(&v1878);
        agg_tmp15901 = r967;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r968 = std__vector_int__std__allocator_int_____end(&v1878);
        agg_tmp16902 = r968;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r969 = std__vector_int__std__allocator_int_____begin(&v3882);
        agg_tmp17903 = r969;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t970 = agg_tmp15901;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t971 = agg_tmp16902;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t972 = agg_tmp17903;
        _Bool r973 = bool_std__equal___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t970, t971, t972);
        result897 = r973;
        char* cast974 = (char*)&(_str_8);
        struct std__basic_ostream_char__std__char_traits_char__* r975 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast974);
        _Bool t976 = result897;
        char* cast977 = (char*)&(_str_5);
        char* cast978 = (char*)&(_str_6);
        char* sel979 = t976 ? cast977 : cast978;
        struct std__basic_ostream_char__std__char_traits_char__* r980 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r975, sel979);
        char* cast981 = (char*)&(_str_9);
        struct std__basic_ostream_char__std__char_traits_char__* r982 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r980, cast981);
        _ZNSt4pairIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_EC2EvQaa26is_default_constructible_vIT_E26is_default_constructible_vIT0_E(&location904);
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r983 = std__vector_int__std__allocator_int_____begin(&v1878);
        agg_tmp18906 = r983;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r984 = std__vector_int__std__allocator_int_____end(&v1878);
        agg_tmp19907 = r984;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r985 = std__vector_int__std__allocator_int_____begin(&v3882);
        agg_tmp20908 = r985;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t986 = agg_tmp18906;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t987 = agg_tmp19907;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t988 = agg_tmp20908;
        struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____ r989 = std__pair___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int________std__mismatch___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t986, t987, t988);
        ref_tmp3905 = r989;
        struct std__pair___gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int_______gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int____* r990 = _ZNSt4pairIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_EaSEOS7_Qcl13_S_assignableIT_T0_EE(&location904, &ref_tmp3905);
        char* cast991 = (char*)&(_str_10);
        struct std__basic_ostream_char__std__char_traits_char__* r992 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast991);
        char* cast993 = (char*)&(_str_11);
        struct std__basic_ostream_char__std__char_traits_char__* r994 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r992, cast993);
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r995 = std__vector_int__std__allocator_int_____begin(&v1878);
        ref_tmp4909 = r995;
        long r996 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&location904.first, &ref_tmp4909);
        struct std__basic_ostream_char__std__char_traits_char__* r997 = std__ostream__operator___2(r994, r996);
        char* cast998 = (char*)&(_str_12);
        struct std__basic_ostream_char__std__char_traits_char__* r999 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r997, cast998);
        int* r1000 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&location904.first);
        int t1001 = *r1000;
        struct std__basic_ostream_char__std__char_traits_char__* r1002 = std__ostream__operator__(r999, t1001);
        char* cast1003 = (char*)&(_str_13);
        struct std__basic_ostream_char__std__char_traits_char__* r1004 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1002, cast1003);
        int* r1005 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&location904.second);
        int t1006 = *r1005;
        struct std__basic_ostream_char__std__char_traits_char__* r1007 = std__ostream__operator__(r1004, t1006);
        char* cast1008 = (char*)&(_str_14);
        struct std__basic_ostream_char__std__char_traits_char__* r1009 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1007, cast1008);
        // array copy
        __builtin_memcpy(c1910, __const_main_c1, (unsigned long)10 * sizeof(__const_main_c1[0]));
        // array copy
        __builtin_memcpy(c2911, __const_main_c2, (unsigned long)10 * sizeof(__const_main_c2[0]));
        char* cast1010 = (char*)&(c1910);
        char* cast1011 = (char*)&(c1910);
        int t1012 = SIZE875;
        char* ptr1013 = &(cast1011)[t1012];
        char* cast1014 = (char*)&(c2911);
        char* cast1015 = (char*)&(c2911);
        int t1016 = SIZE875;
        char* ptr1017 = &(cast1015)[t1016];
        _Bool r1018 = bool_std__lexicographical_compare_char___char__(cast1010, ptr1013, cast1014, ptr1017);
        result897 = r1018;
        char* cast1019 = (char*)&(c1910);
        struct std__basic_ostream_char__std__char_traits_char__* r1020 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1019);
        _Bool t1021 = result897;
        char* cast1022 = (char*)&(_str_15);
        char* cast1023 = (char*)&(_str_16);
        char* sel1024 = t1021 ? cast1022 : cast1023;
        struct std__basic_ostream_char__std__char_traits_char__* r1025 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1020, sel1024);
        char* cast1026 = (char*)&(c2911);
        struct std__basic_ostream_char__std__char_traits_char__* r1027 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1025, cast1026);
        struct std__basic_ostream_char__std__char_traits_char__* r1028 = std__ostream__operator___std__ostream_____(r1027, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        int c1029 = 0;
        __retval874 = c1029;
        int t1030 = __retval874;
        int ret_val1031 = t1030;
        {
          std__vector_int__std__allocator_int______vector(&v3882);
        }
        {
          std__vector_int__std__allocator_int______vector(&v2880);
        }
        {
          std__vector_int__std__allocator_int______vector(&v1878);
        }
        return ret_val1031;
  int t1032 = __retval874;
  return t1032;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v1033) {
bb1034:
  struct std____new_allocator_int_* this1035;
  this1035 = v1033;
  struct std____new_allocator_int_* t1036 = this1035;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1037, struct std__allocator_int_* v1038) {
bb1039:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1040;
  struct std__allocator_int_* __a1041;
  this1040 = v1037;
  __a1041 = v1038;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1042 = this1040;
  struct std__allocator_int_* base1043 = (struct std__allocator_int_*)((char *)t1042 + 0);
  struct std__allocator_int_* t1044 = __a1041;
  std__allocator_int___allocator(base1043, t1044);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1045 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t1042 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base1045);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1046) {
bb1047:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1048;
  this1048 = v1046;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1049 = this1048;
  {
    struct std__allocator_int_* base1050 = (struct std__allocator_int_*)((char *)t1049 + 0);
    std__allocator_int____allocator(base1050);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1051, struct std__allocator_int_* v1052) {
bb1053:
  struct std___Vector_base_int__std__allocator_int__* this1054;
  struct std__allocator_int_* __a1055;
  this1054 = v1051;
  __a1055 = v1052;
  struct std___Vector_base_int__std__allocator_int__* t1056 = this1054;
  struct std__allocator_int_* t1057 = __a1055;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t1056->_M_impl, t1057);
  return;
}

// function: _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_
long _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_(struct std__ranges____distance_fn* v1058, int** v1059, int* v1060) {
bb1061:
  struct std__ranges____distance_fn* this1062;
  int** __first1063;
  int* __last1064;
  long __retval1065;
  this1062 = v1058;
  __first1063 = v1059;
  __last1064 = v1060;
  struct std__ranges____distance_fn* t1066 = this1062;
  int* t1067 = __last1064;
  int** t1068 = __first1063;
  int* t1069 = *t1068;
  long diff1070 = t1067 - t1069;
  __retval1065 = diff1070;
  long t1071 = __retval1065;
  return t1071;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1072:
  _Bool __retval1073;
    _Bool c1074 = 0;
    __retval1073 = c1074;
    _Bool t1075 = __retval1073;
    return t1075;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v1076) {
bb1077:
  struct std____new_allocator_int_* this1078;
  unsigned long __retval1079;
  this1078 = v1076;
  struct std____new_allocator_int_* t1080 = this1078;
  unsigned long c1081 = 9223372036854775807;
  unsigned long c1082 = 4;
  unsigned long b1083 = c1081 / c1082;
  __retval1079 = b1083;
  unsigned long t1084 = __retval1079;
  return t1084;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v1085, unsigned long v1086, void* v1087) {
bb1088:
  struct std____new_allocator_int_* this1089;
  unsigned long __n1090;
  void* unnamed1091;
  int* __retval1092;
  this1089 = v1085;
  __n1090 = v1086;
  unnamed1091 = v1087;
  struct std____new_allocator_int_* t1093 = this1089;
    unsigned long t1094 = __n1090;
    unsigned long r1095 = std____new_allocator_int____M_max_size___const(t1093);
    _Bool c1096 = ((t1094 > r1095)) ? 1 : 0;
    if (c1096) {
        unsigned long t1097 = __n1090;
        unsigned long c1098 = -1;
        unsigned long c1099 = 4;
        unsigned long b1100 = c1098 / c1099;
        _Bool c1101 = ((t1097 > b1100)) ? 1 : 0;
        if (c1101) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c1102 = 4;
    unsigned long c1103 = 16;
    _Bool c1104 = ((c1102 > c1103)) ? 1 : 0;
    if (c1104) {
      unsigned long __al1105;
      unsigned long c1106 = 4;
      __al1105 = c1106;
      unsigned long t1107 = __n1090;
      unsigned long c1108 = 4;
      unsigned long b1109 = t1107 * c1108;
      unsigned long t1110 = __al1105;
      void* r1111 = operator_new_2(b1109, t1110);
      int* cast1112 = (int*)r1111;
      __retval1092 = cast1112;
      int* t1113 = __retval1092;
      return t1113;
    }
  unsigned long t1114 = __n1090;
  unsigned long c1115 = 4;
  unsigned long b1116 = t1114 * c1115;
  void* r1117 = operator_new(b1116);
  int* cast1118 = (int*)r1117;
  __retval1092 = cast1118;
  int* t1119 = __retval1092;
  return t1119;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v1120, unsigned long v1121) {
bb1122:
  struct std__allocator_int_* this1123;
  unsigned long __n1124;
  int* __retval1125;
  this1123 = v1120;
  __n1124 = v1121;
  struct std__allocator_int_* t1126 = this1123;
    _Bool r1127 = std____is_constant_evaluated();
    if (r1127) {
        unsigned long t1128 = __n1124;
        unsigned long c1129 = 4;
        unsigned long ovr1130;
        _Bool ovf1131 = __builtin_mul_overflow(t1128, c1129, &ovr1130);
        __n1124 = ovr1130;
        if (ovf1131) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1132 = __n1124;
      void* r1133 = operator_new(t1132);
      int* cast1134 = (int*)r1133;
      __retval1125 = cast1134;
      int* t1135 = __retval1125;
      return t1135;
    }
  struct std____new_allocator_int_* base1136 = (struct std____new_allocator_int_*)((char *)t1126 + 0);
  unsigned long t1137 = __n1124;
  void* c1138 = ((void*)0);
  int* r1139 = std____new_allocator_int___allocate(base1136, t1137, c1138);
  __retval1125 = r1139;
  int* t1140 = __retval1125;
  return t1140;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v1141, unsigned long v1142) {
bb1143:
  struct std__allocator_int_* __a1144;
  unsigned long __n1145;
  int* __retval1146;
  __a1144 = v1141;
  __n1145 = v1142;
  struct std__allocator_int_* t1147 = __a1144;
  unsigned long t1148 = __n1145;
  int* r1149 = std__allocator_int___allocate(t1147, t1148);
  __retval1146 = r1149;
  int* t1150 = __retval1146;
  return t1150;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v1151, unsigned long v1152) {
bb1153:
  struct std___Vector_base_int__std__allocator_int__* this1154;
  unsigned long __n1155;
  int* __retval1156;
  this1154 = v1151;
  __n1155 = v1152;
  struct std___Vector_base_int__std__allocator_int__* t1157 = this1154;
  unsigned long t1158 = __n1155;
  unsigned long c1159 = 0;
  _Bool c1160 = ((t1158 != c1159)) ? 1 : 0;
  int* ternary1161;
  if (c1160) {
    struct std__allocator_int_* base1162 = (struct std__allocator_int_*)((char *)&(t1157->_M_impl) + 0);
    unsigned long t1163 = __n1155;
    int* r1164 = std__allocator_traits_std__allocator_int_____allocate(base1162, t1163);
    ternary1161 = (int*)r1164;
  } else {
    int* c1165 = ((void*)0);
    ternary1161 = (int*)c1165;
  }
  __retval1156 = ternary1161;
  int* t1166 = __retval1156;
  return t1166;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v1167, unsigned long* v1168) {
bb1169:
  unsigned long* __a1170;
  unsigned long* __b1171;
  unsigned long* __retval1172;
  __a1170 = v1167;
  __b1171 = v1168;
    unsigned long* t1173 = __b1171;
    unsigned long t1174 = *t1173;
    unsigned long* t1175 = __a1170;
    unsigned long t1176 = *t1175;
    _Bool c1177 = ((t1174 < t1176)) ? 1 : 0;
    if (c1177) {
      unsigned long* t1178 = __b1171;
      __retval1172 = t1178;
      unsigned long* t1179 = __retval1172;
      return t1179;
    }
  unsigned long* t1180 = __a1170;
  __retval1172 = t1180;
  unsigned long* t1181 = __retval1172;
  return t1181;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v1182) {
bb1183:
  struct std__allocator_int_* __a1184;
  unsigned long __retval1185;
  unsigned long __diffmax1186;
  unsigned long __allocmax1187;
  __a1184 = v1182;
  unsigned long c1188 = 2305843009213693951;
  __diffmax1186 = c1188;
  unsigned long c1189 = 4611686018427387903;
  __allocmax1187 = c1189;
  unsigned long* r1190 = unsigned_long_const__std__min_unsigned_long_(&__diffmax1186, &__allocmax1187);
  unsigned long t1191 = *r1190;
  __retval1185 = t1191;
  unsigned long t1192 = __retval1185;
  return t1192;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v1193, struct std__allocator_int_* v1194) {
bb1195:
  struct std__allocator_int_* this1196;
  struct std__allocator_int_* __a1197;
  this1196 = v1193;
  __a1197 = v1194;
  struct std__allocator_int_* t1198 = this1196;
  struct std____new_allocator_int_* base1199 = (struct std____new_allocator_int_*)((char *)t1198 + 0);
  struct std__allocator_int_* t1200 = __a1197;
  struct std____new_allocator_int_* base1201 = (struct std____new_allocator_int_*)((char *)t1200 + 0);
  std____new_allocator_int_____new_allocator(base1199, base1201);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v1202, struct std__allocator_int_* v1203) {
bb1204:
  unsigned long __n1205;
  struct std__allocator_int_* __a1206;
  unsigned long __retval1207;
  __n1205 = v1202;
  __a1206 = v1203;
    struct std__allocator_int_ ref_tmp01208;
    _Bool tmp_exprcleanup1209;
    unsigned long t1210 = __n1205;
    struct std__allocator_int_* t1211 = __a1206;
    std__allocator_int___allocator(&ref_tmp01208, t1211);
      unsigned long r1212 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp01208);
      _Bool c1213 = ((t1210 > r1212)) ? 1 : 0;
      tmp_exprcleanup1209 = c1213;
    {
      std__allocator_int____allocator(&ref_tmp01208);
    }
    _Bool t1214 = tmp_exprcleanup1209;
    if (t1214) {
      char* cast1215 = (char*)&(_str_17);
      std____throw_length_error(cast1215);
    }
  unsigned long t1216 = __n1205;
  __retval1207 = t1216;
  unsigned long t1217 = __retval1207;
  return t1217;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v1218) {
bb1219:
  struct std___Vector_base_int__std__allocator_int__* this1220;
  struct std__allocator_int_* __retval1221;
  this1220 = v1218;
  struct std___Vector_base_int__std__allocator_int__* t1222 = this1220;
  struct std__allocator_int_* base1223 = (struct std__allocator_int_*)((char *)&(t1222->_M_impl) + 0);
  __retval1221 = base1223;
  struct std__allocator_int_* t1224 = __retval1221;
  return t1224;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1225:
  _Bool __retval1226;
    _Bool c1227 = 0;
    __retval1226 = c1227;
    _Bool t1228 = __retval1226;
    return t1228;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1229, int** v1230) {
bb1231:
  struct std___UninitDestroyGuard_int____void_* this1232;
  int** __first1233;
  this1232 = v1229;
  __first1233 = v1230;
  struct std___UninitDestroyGuard_int____void_* t1234 = this1232;
  int** t1235 = __first1233;
  int* t1236 = *t1235;
  t1234->_M_first = t1236;
  int** t1237 = __first1233;
  t1234->_M_cur = t1237;
  return;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v1238, int* v1239) {
bb1240:
  int* __location1241;
  int* __args1242;
  int* __retval1243;
  void* __loc1244;
  __location1241 = v1238;
  __args1242 = v1239;
  int* t1245 = __location1241;
  void* cast1246 = (void*)t1245;
  __loc1244 = cast1246;
    void* t1247 = __loc1244;
    int* cast1248 = (int*)t1247;
    int* t1249 = __args1242;
    int t1250 = *t1249;
    *cast1248 = t1250;
    __retval1243 = cast1248;
    int* t1251 = __retval1243;
    return t1251;
  abort();
}

// function: _ZSt10_ConstructIiJRiEEvPT_DpOT0_
void void_std___Construct_int__int__(int* v1252, int* v1253) {
bb1254:
  int* __p1255;
  int* __args1256;
  __p1255 = v1252;
  __args1256 = v1253;
    _Bool r1257 = std____is_constant_evaluated();
    if (r1257) {
      int* t1258 = __p1255;
      int* t1259 = __args1256;
      int* r1260 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t1258, t1259);
      return;
    }
  int* t1261 = __p1255;
  void* cast1262 = (void*)t1261;
  int* cast1263 = (int*)cast1262;
  int* t1264 = __args1256;
  int t1265 = *t1264;
  *cast1263 = t1265;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v1266) {
bb1267:
  struct std___UninitDestroyGuard_int____void_* this1268;
  this1268 = v1266;
  struct std___UninitDestroyGuard_int____void_* t1269 = this1268;
  int** c1270 = ((void*)0);
  t1269->_M_cur = c1270;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1271) {
bb1272:
  struct std___UninitDestroyGuard_int____void_* this1273;
  this1273 = v1271;
  struct std___UninitDestroyGuard_int____void_* t1274 = this1273;
    int** t1275 = t1274->_M_cur;
    int** c1276 = ((void*)0);
    _Bool c1277 = ((t1275 != c1276)) ? 1 : 0;
    if (c1277) {
      int* t1278 = t1274->_M_first;
      int** t1279 = t1274->_M_cur;
      int* t1280 = *t1279;
      void_std___Destroy_int__(t1278, t1280);
    }
  return;
}

// function: _ZSt16__do_uninit_copyIPiS0_S0_ET1_T_T0_S1_
int* int__std____do_uninit_copy_int___int___int__(int* v1281, int* v1282, int* v1283) {
bb1284:
  int* __first1285;
  int* __last1286;
  int* __result1287;
  int* __retval1288;
  struct std___UninitDestroyGuard_int____void_ __guard1289;
  __first1285 = v1281;
  __last1286 = v1282;
  __result1287 = v1283;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard1289, &__result1287);
      while (1) {
        int* t1291 = __first1285;
        int* t1292 = __last1286;
        _Bool c1293 = ((t1291 != t1292)) ? 1 : 0;
        if (!c1293) break;
        int* t1294 = __result1287;
        int* t1295 = __first1285;
        void_std___Construct_int__int__(t1294, t1295);
      for_step1290: ;
        int* t1296 = __first1285;
        int c1297 = 1;
        int* ptr1298 = &(t1296)[c1297];
        __first1285 = ptr1298;
        int* t1299 = __result1287;
        int c1300 = 1;
        int* ptr1301 = &(t1299)[c1300];
        __result1287 = ptr1301;
      }
    std___UninitDestroyGuard_int___void___release(&__guard1289);
    int* t1302 = __result1287;
    __retval1288 = t1302;
    int* t1303 = __retval1288;
    int* ret_val1304 = t1303;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1289);
    }
    return ret_val1304;
  abort();
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v1305) {
bb1306:
  int* __it1307;
  int* __retval1308;
  __it1307 = v1305;
  int* t1309 = __it1307;
  __retval1308 = t1309;
  int* t1310 = __retval1308;
  return t1310;
}

// function: _ZSt18uninitialized_copyIPiS0_ET0_T_S2_S1_
int* int__std__uninitialized_copy_int___int__(int* v1311, int* v1312, int* v1313) {
bb1314:
  int* __first1315;
  int* __last1316;
  int* __result1317;
  int* __retval1318;
  __first1315 = v1311;
  __last1316 = v1312;
  __result1317 = v1313;
      long __n1319;
      int* t1320 = __last1316;
      int* t1321 = __first1315;
      long diff1322 = t1320 - t1321;
      __n1319 = diff1322;
        long t1323 = __n1319;
        long c1324 = 0;
        _Bool c1325 = ((t1323 > c1324)) ? 1 : 0;
        if (c1325) {
          int* t1326 = __result1317;
          int* r1327 = int__std____niter_base_int__(t1326);
          void* cast1328 = (void*)r1327;
          int* t1329 = __first1315;
          int* r1330 = int__std____niter_base_int__(t1329);
          void* cast1331 = (void*)r1330;
          long t1332 = __n1319;
          unsigned long cast1333 = (unsigned long)t1332;
          unsigned long c1334 = 4;
          unsigned long b1335 = cast1333 * c1334;
          void* r1336 = memcpy(cast1328, cast1331, b1335);
          long t1337 = __n1319;
          int* t1338 = __result1317;
          int* ptr1339 = &(t1338)[t1337];
          __result1317 = ptr1339;
        }
      int* t1340 = __result1317;
      __retval1318 = t1340;
      int* t1341 = __retval1318;
      return t1341;
  abort();
}

// function: _ZSt22__uninitialized_copy_aIPiS0_S0_iET1_T_T0_S1_RSaIT2_E
int* int__std____uninitialized_copy_a_int___int___int___int_(int* v1342, int* v1343, int* v1344, struct std__allocator_int_* v1345) {
bb1346:
  int* __first1347;
  int* __last1348;
  int* __result1349;
  struct std__allocator_int_* unnamed1350;
  int* __retval1351;
  __first1347 = v1342;
  __last1348 = v1343;
  __result1349 = v1344;
  unnamed1350 = v1345;
    _Bool r1352 = std__is_constant_evaluated();
    if (r1352) {
      int* t1353 = __first1347;
      int* t1354 = __last1348;
      int* t1355 = __result1349;
      int* r1356 = int__std____do_uninit_copy_int___int___int__(t1353, t1354, t1355);
      __retval1351 = r1356;
      int* t1357 = __retval1351;
      return t1357;
    }
    int* t1358 = __first1347;
    int* t1359 = __last1348;
    int* t1360 = __result1349;
    int* r1361 = int__std__uninitialized_copy_int___int__(t1358, t1359, t1360);
    __retval1351 = r1361;
    int* t1362 = __retval1351;
    return t1362;
  abort();
}

// function: _ZNSt6vectorIiSaIiEE21_M_range_initialize_nIPiS3_EEvT_T0_m
void void_std__vector_int__std__allocator_int______M_range_initialize_n_int___int__(struct std__vector_int__std__allocator_int__* v1363, int* v1364, int* v1365, unsigned long v1366) {
bb1367:
  struct std__vector_int__std__allocator_int__* this1368;
  int* __first1369;
  int* __last1370;
  unsigned long __n1371;
  int* __start1372;
  this1368 = v1363;
  __first1369 = v1364;
  __last1370 = v1365;
  __n1371 = v1366;
  struct std__vector_int__std__allocator_int__* t1373 = this1368;
  struct std___Vector_base_int__std__allocator_int__* base1374 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1373 + 0);
  unsigned long t1375 = __n1371;
  struct std___Vector_base_int__std__allocator_int__* base1376 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1373 + 0);
  struct std__allocator_int_* r1377 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1376);
  unsigned long r1378 = std__vector_int__std__allocator_int______S_check_init_len(t1375, r1377);
  int* r1379 = std___Vector_base_int__std__allocator_int______M_allocate(base1374, r1378);
  __start1372 = r1379;
  int* t1380 = __start1372;
  struct std___Vector_base_int__std__allocator_int__* base1381 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1373 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1382 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1381->_M_impl) + 0);
  base1382->_M_finish = t1380;
  struct std___Vector_base_int__std__allocator_int__* base1383 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1373 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1384 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1383->_M_impl) + 0);
  base1384->_M_start = t1380;
  int* t1385 = __start1372;
  unsigned long t1386 = __n1371;
  int* ptr1387 = &(t1385)[t1386];
  struct std___Vector_base_int__std__allocator_int__* base1388 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1373 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1389 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1388->_M_impl) + 0);
  base1389->_M_end_of_storage = ptr1387;
  int* t1390 = __first1369;
  int* t1391 = __last1370;
  int* t1392 = __start1372;
  struct std___Vector_base_int__std__allocator_int__* base1393 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1373 + 0);
  struct std__allocator_int_* r1394 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1393);
  int* r1395 = int__std____uninitialized_copy_a_int___int___int___int_(t1390, t1391, t1392, r1394);
  struct std___Vector_base_int__std__allocator_int__* base1396 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1373 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1397 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1396->_M_impl) + 0);
  base1397->_M_finish = r1395;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1398, int* v1399, unsigned long v1400) {
bb1401:
  struct std____new_allocator_int_* this1402;
  int* __p1403;
  unsigned long __n1404;
  this1402 = v1398;
  __p1403 = v1399;
  __n1404 = v1400;
  struct std____new_allocator_int_* t1405 = this1402;
    unsigned long c1406 = 4;
    unsigned long c1407 = 16;
    _Bool c1408 = ((c1406 > c1407)) ? 1 : 0;
    if (c1408) {
      int* t1409 = __p1403;
      void* cast1410 = (void*)t1409;
      unsigned long t1411 = __n1404;
      unsigned long c1412 = 4;
      unsigned long b1413 = t1411 * c1412;
      unsigned long c1414 = 4;
      operator_delete_3(cast1410, b1413, c1414);
      return;
    }
  int* t1415 = __p1403;
  void* cast1416 = (void*)t1415;
  unsigned long t1417 = __n1404;
  unsigned long c1418 = 4;
  unsigned long b1419 = t1417 * c1418;
  operator_delete_2(cast1416, b1419);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1420, int* v1421, unsigned long v1422) {
bb1423:
  struct std__allocator_int_* this1424;
  int* __p1425;
  unsigned long __n1426;
  this1424 = v1420;
  __p1425 = v1421;
  __n1426 = v1422;
  struct std__allocator_int_* t1427 = this1424;
    _Bool r1428 = std____is_constant_evaluated();
    if (r1428) {
      int* t1429 = __p1425;
      void* cast1430 = (void*)t1429;
      operator_delete(cast1430);
      return;
    }
  struct std____new_allocator_int_* base1431 = (struct std____new_allocator_int_*)((char *)t1427 + 0);
  int* t1432 = __p1425;
  unsigned long t1433 = __n1426;
  std____new_allocator_int___deallocate(base1431, t1432, t1433);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1434, int* v1435, unsigned long v1436) {
bb1437:
  struct std__allocator_int_* __a1438;
  int* __p1439;
  unsigned long __n1440;
  __a1438 = v1434;
  __p1439 = v1435;
  __n1440 = v1436;
  struct std__allocator_int_* t1441 = __a1438;
  int* t1442 = __p1439;
  unsigned long t1443 = __n1440;
  std__allocator_int___deallocate(t1441, t1442, t1443);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v1444, int* v1445, unsigned long v1446) {
bb1447:
  struct std___Vector_base_int__std__allocator_int__* this1448;
  int* __p1449;
  unsigned long __n1450;
  this1448 = v1444;
  __p1449 = v1445;
  __n1450 = v1446;
  struct std___Vector_base_int__std__allocator_int__* t1451 = this1448;
    int* t1452 = __p1449;
    _Bool cast1453 = (_Bool)t1452;
    if (cast1453) {
      struct std__allocator_int_* base1454 = (struct std__allocator_int_*)((char *)&(t1451->_M_impl) + 0);
      int* t1455 = __p1449;
      unsigned long t1456 = __n1450;
      std__allocator_traits_std__allocator_int_____deallocate(base1454, t1455, t1456);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1457) {
bb1458:
  struct std___Vector_base_int__std__allocator_int__* this1459;
  this1459 = v1457;
  struct std___Vector_base_int__std__allocator_int__* t1460 = this1459;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1461 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1460->_M_impl) + 0);
    int* t1462 = base1461->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1463 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1460->_M_impl) + 0);
    int* t1464 = base1463->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1465 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1460->_M_impl) + 0);
    int* t1466 = base1465->_M_start;
    long diff1467 = t1464 - t1466;
    unsigned long cast1468 = (unsigned long)diff1467;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1460, t1462, cast1468);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1460->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1469, struct std____new_allocator_int_* v1470) {
bb1471:
  struct std____new_allocator_int_* this1472;
  struct std____new_allocator_int_* unnamed1473;
  this1472 = v1469;
  unnamed1473 = v1470;
  struct std____new_allocator_int_* t1474 = this1472;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1475) {
bb1476:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1477;
  this1477 = v1475;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1478 = this1477;
  int* c1479 = ((void*)0);
  t1478->_M_start = c1479;
  int* c1480 = ((void*)0);
  t1478->_M_finish = c1480;
  int* c1481 = ((void*)0);
  t1478->_M_end_of_storage = c1481;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1482) {
bb1483:
  int* __location1484;
  __location1484 = v1482;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1485, int* v1486) {
bb1487:
  int* __first1488;
  int* __last1489;
  __first1488 = v1485;
  __last1489 = v1486;
      _Bool r1490 = std____is_constant_evaluated();
      if (r1490) {
          while (1) {
            int* t1492 = __first1488;
            int* t1493 = __last1489;
            _Bool c1494 = ((t1492 != t1493)) ? 1 : 0;
            if (!c1494) break;
            int* t1495 = __first1488;
            void_std__destroy_at_int_(t1495);
          for_step1491: ;
            int* t1496 = __first1488;
            int c1497 = 1;
            int* ptr1498 = &(t1496)[c1497];
            __first1488 = ptr1498;
          }
      }
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2Ev
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1499) {
bb1500:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this1501;
  this1501 = v1499;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1502 = this1501;
  int* c1503 = ((void*)0);
  t1502->_M_current = c1503;
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1504, int* v1505, struct std__allocator_int_* v1506) {
bb1507:
  int* __first1508;
  int* __last1509;
  struct std__allocator_int_* unnamed1510;
  __first1508 = v1504;
  __last1509 = v1505;
  unnamed1510 = v1506;
  int* t1511 = __first1508;
  int* t1512 = __last1509;
  void_std___Destroy_int__(t1511, t1512);
  return;
}

