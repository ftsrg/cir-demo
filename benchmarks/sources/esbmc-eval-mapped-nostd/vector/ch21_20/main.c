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
struct std____cmp_cat____unspec { unsigned char __field0; };
struct std____detail___Synth3way { unsigned char __field0; };
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
struct std__strong_ordering { char _M_value; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_a2[5] = {2, 4, 5, 7, 9};
int __const_main_a1[5] = {1, 3, 5, 7, 9};
struct std____cmp_cat____unspec __const__ZSt9__reverseIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEvT_S7_St26random_access_iterator_tag_agg_tmp1;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[2] = " ";
char _str_1[21] = "Vector v1 contains: ";
char _str_2[22] = "\nVector v2 contains: ";
char _str_3[42] = "\n\nAfter copy_backward, results contains: ";
char _str_4[47] = "\n\nAfter merge of v1 and v2 results2 contains:\n";
char _str_5[35] = "\n\nAfter unique results2 contains:\n";
char _str_6[28] = "\n\nVector v1 after reverse: ";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_7[49] = "cannot create std::vector larger than max_size()";
struct std____detail___Synth3way _ZNSt8__detail11__synth3wayE;
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector_int___void_(struct std__vector_int__std__allocator_int__* p0, int* p1, int* p2, struct std__allocator_int_* p3);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator_2(struct std__ostream_iterator_int__char__std__char_traits_char__* p0, struct std__basic_ostream_char__std__char_traits_char__* p1, char* p2);
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
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, struct std__allocator_int_* p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____niter_wrap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, int* p1);
long std__iterator_traits_int____difference_type_std____distance_int__(int* p0, int* p1, struct std__random_access_iterator_tag p2);
long std__iterator_traits_int____difference_type_std__distance_int__(int* p0, int* p1);
void void_std____advance_int___long_(int** p0, long p1, struct std__random_access_iterator_tag p2);
void void_std__advance_int___long_(int** p0, long p1);
extern void* memmove(void* p0, void* p1, unsigned long p2);
void void_std____assign_one_false__int___int__(int** p0, int** p1);
int* int__std____copy_move_backward_a2_false__int___int__(int* p0, int* p1, int* p2);
int* int__std____copy_move_backward_a1_false__int___int__(int* p0, int* p1, int* p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____copy_move_backward_a_false____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__copy_backward___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
_Bool bool___gnu_cxx____ops___Iter_less_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(struct __gnu_cxx____ops___Iter_less_iter* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
int* int__std____copy_move_a2_false__int___int___int__(int* p0, int* p1, int* p2);
int* int__std____copy_move_a1_false__int___int__(int* p0, int* p1, int* p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____copy_move_a_false____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____merge___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p3, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p4, struct __gnu_cxx____ops___Iter_less_iter p5);
struct __gnu_cxx____ops___Iter_less_iter __gnu_cxx____ops____iter_less_iter();
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__merge___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p3, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p4);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____adjacent_find___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_equal_to_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____ops___Iter_equal_to_iter p2);
_Bool bool___gnu_cxx____ops___Iter_equal_to_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(struct __gnu_cxx____ops___Iter_equal_to_iter* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____unique___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_equal_to_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____ops___Iter_equal_to_iter p2);
struct __gnu_cxx____ops___Iter_equal_to_iter __gnu_cxx____ops____iter_equal_to_iter();
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__unique___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
_Bool std__operator_(struct std__strong_ordering p0, struct std____cmp_cat____unspec p1);
struct std__strong_ordering _ZNKSt8__detail10_Synth3wayclIPiS2_EEDaRKT_RKT0_QrqXltfp_fp0_RNS_18__boolean_testableEXltfp0_fp_RNS_18__boolean_testableEE(struct std____detail___Synth3way* p0, int** p1, int** p2);
struct std__strong_ordering decltype__std____detail____synth3way__std__declval_int_________std__declval_int___________gnu_cxx__operator____int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
void std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(int* p0, int* p1);
void void_std__iter_swap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1);
void void_std____reverse___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct std__random_access_iterator_tag p2);
struct std__random_access_iterator_tag std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
void void_std__reverse___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1);
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
int std__operator__2(int v40, int v41) {
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
  int r66 = std__operator__2(r64, t65);
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

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v320) {
bb321:
  struct std__vector_int__std__allocator_int__* this322;
  unsigned long __retval323;
  long __dif324;
  this322 = v320;
  struct std__vector_int__std__allocator_int__* t325 = this322;
  struct std___Vector_base_int__std__allocator_int__* base326 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t325 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base327 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base326->_M_impl) + 0);
  int* t328 = base327->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base329 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t325 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base330 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base329->_M_impl) + 0);
  int* t331 = base330->_M_start;
  long diff332 = t328 - t331;
  __dif324 = diff332;
    long t333 = __dif324;
    long c334 = 0;
    _Bool c335 = ((t333 < c334)) ? 1 : 0;
    if (c335) {
      __builtin_unreachable();
    }
  long t336 = __dif324;
  unsigned long cast337 = (unsigned long)t336;
  __retval323 = cast337;
  unsigned long t338 = __retval323;
  return t338;
}

// function: _ZNSt6vectorIiSaIiEEC2EmRKS0_
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* v339, unsigned long v340, struct std__allocator_int_* v341) {
bb342:
  struct std__vector_int__std__allocator_int__* this343;
  unsigned long __n344;
  struct std__allocator_int_* __a345;
  this343 = v339;
  __n344 = v340;
  __a345 = v341;
  struct std__vector_int__std__allocator_int__* t346 = this343;
  struct std___Vector_base_int__std__allocator_int__* base347 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t346 + 0);
  unsigned long t348 = __n344;
  struct std__allocator_int_* t349 = __a345;
  unsigned long r350 = std__vector_int__std__allocator_int______S_check_init_len(t348, t349);
  struct std__allocator_int_* t351 = __a345;
  std___Vector_base_int__std__allocator_int______Vector_base_2(base347, r350, t351);
    unsigned long t352 = __n344;
    std__vector_int__std__allocator_int______M_default_initialize(t346, t352);
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEplEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v353, long v354) {
bb355:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this356;
  long __n357;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval358;
  int* ref_tmp0359;
  this356 = v353;
  __n357 = v354;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t360 = this356;
  int* t361 = t360->_M_current;
  long t362 = __n357;
  int* ptr363 = &(t361)[t362];
  ref_tmp0359 = ptr363;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval358, &ref_tmp0359);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t364 = __retval358;
  return t364;
}

// function: _ZSt12__niter_wrapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES2_ET_S7_T0_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____niter_wrap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v365, int* v366) {
bb367:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __from368;
  int* __res369;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval370;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0371;
  __from368 = v365;
  __res369 = v366;
  int* t372 = __res369;
  int* r373 = int__std____niter_base_int__(t372);
  agg_tmp0371 = __from368; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t374 = agg_tmp0371;
  int* r375 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t374);
  long diff376 = r373 - r375;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r377 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__from368, diff376);
  __retval370 = r377;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t378 = __retval370;
  return t378;
}

// function: _ZSt10__distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_St26random_access_iterator_tag
long std__iterator_traits_int____difference_type_std____distance_int__(int* v379, int* v380, struct std__random_access_iterator_tag v381) {
bb382:
  int* __first383;
  int* __last384;
  struct std__random_access_iterator_tag unnamed385;
  long __retval386;
  __first383 = v379;
  __last384 = v380;
  unnamed385 = v381;
  int* t387 = __last384;
  int* t388 = __first383;
  long diff389 = t387 - t388;
  __retval386 = diff389;
  long t390 = __retval386;
  return t390;
}

// function: _ZSt8distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_
long std__iterator_traits_int____difference_type_std__distance_int__(int* v391, int* v392) {
bb393:
  int* __first394;
  int* __last395;
  long __retval396;
  struct std__random_access_iterator_tag agg_tmp0397;
  __first394 = v391;
  __last395 = v392;
  int* t398 = __first394;
  int* t399 = __last395;
  struct std__random_access_iterator_tag r400 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first394);
  agg_tmp0397 = r400;
  struct std__random_access_iterator_tag t401 = agg_tmp0397;
  long r402 = std__iterator_traits_int____difference_type_std____distance_int__(t398, t399, t401);
  __retval396 = r402;
  long t403 = __retval396;
  return t403;
}

// function: _ZSt9__advanceIPilEvRT_T0_St26random_access_iterator_tag
void void_std____advance_int___long_(int** v404, long v405, struct std__random_access_iterator_tag v406) {
bb407:
  int** __i408;
  long __n409;
  struct std__random_access_iterator_tag unnamed410;
  __i408 = v404;
  __n409 = v405;
  unnamed410 = v406;
    long t411 = __n409;
    _Bool isconst412 = 0;
    _Bool ternary413;
    if (isconst412) {
      long t414 = __n409;
      long c415 = 1;
      _Bool c416 = ((t414 == c415)) ? 1 : 0;
      ternary413 = (_Bool)c416;
    } else {
      _Bool c417 = 0;
      ternary413 = (_Bool)c417;
    }
    if (ternary413) {
      int** t418 = __i408;
      int* t419 = *t418;
      int c420 = 1;
      int* ptr421 = &(t419)[c420];
      *t418 = ptr421;
    } else {
        long t422 = __n409;
        _Bool isconst423 = 0;
        _Bool ternary424;
        if (isconst423) {
          long t425 = __n409;
          long c426 = -1;
          _Bool c427 = ((t425 == c426)) ? 1 : 0;
          ternary424 = (_Bool)c427;
        } else {
          _Bool c428 = 0;
          ternary424 = (_Bool)c428;
        }
        if (ternary424) {
          int** t429 = __i408;
          int* t430 = *t429;
          int c431 = -1;
          int* ptr432 = &(t430)[c431];
          *t429 = ptr432;
        } else {
          long t433 = __n409;
          int** t434 = __i408;
          int* t435 = *t434;
          int* ptr436 = &(t435)[t433];
          *t434 = ptr436;
        }
    }
  return;
}

// function: _ZSt7advanceIPilEvRT_T0_
void void_std__advance_int___long_(int** v437, long v438) {
bb439:
  int** __i440;
  long __n441;
  long __d442;
  struct std__random_access_iterator_tag agg_tmp0443;
  __i440 = v437;
  __n441 = v438;
  long t444 = __n441;
  __d442 = t444;
  int** t445 = __i440;
  long t446 = __d442;
  int** t447 = __i440;
  struct std__random_access_iterator_tag r448 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(t447);
  agg_tmp0443 = r448;
  struct std__random_access_iterator_tag t449 = agg_tmp0443;
  void_std____advance_int___long_(t445, t446, t449);
  return;
}

// function: _ZSt12__assign_oneILb0EPiS0_EvRT0_RT1_
void void_std____assign_one_false__int___int__(int** v450, int** v451) {
bb452:
  int** __out453;
  int** __in454;
  __out453 = v450;
  __in454 = v451;
    int** t455 = __in454;
    int* t456 = *t455;
    int t457 = *t456;
    int** t458 = __out453;
    int* t459 = *t458;
    *t459 = t457;
  return;
}

// function: _ZSt23__copy_move_backward_a2ILb0EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_backward_a2_false__int___int__(int* v460, int* v461, int* v462) {
bb463:
  int* __first464;
  int* __last465;
  int* __result466;
  int* __retval467;
  __first464 = v460;
  __last465 = v461;
  __result466 = v462;
      _Bool r468 = std__is_constant_evaluated();
      if (r468) {
      } else {
          long __n469;
          int* t470 = __first464;
          int* t471 = __last465;
          long r472 = std__iterator_traits_int____difference_type_std__distance_int__(t470, t471);
          __n469 = r472;
          long t473 = __n469;
          long u474 = -t473;
          void_std__advance_int___long_(&__result466, u474);
            long t475 = __n469;
            long c476 = 1;
            _Bool c477 = ((t475 > c476)) ? 1 : 0;
            if (c477) {
              int* t478 = __result466;
              void* cast479 = (void*)t478;
              int* t480 = __first464;
              void* cast481 = (void*)t480;
              long t482 = __n469;
              unsigned long cast483 = (unsigned long)t482;
              unsigned long c484 = 4;
              unsigned long b485 = cast483 * c484;
              void* r486 = memmove(cast479, cast481, b485);
            } else {
                long t487 = __n469;
                long c488 = 1;
                _Bool c489 = ((t487 == c488)) ? 1 : 0;
                if (c489) {
                  void_std____assign_one_false__int___int__(&__result466, &__first464);
                }
            }
          int* t490 = __result466;
          __retval467 = t490;
          int* t491 = __retval467;
          return t491;
      }
    while (1) {
      int* t492 = __first464;
      int* t493 = __last465;
      _Bool c494 = ((t492 != t493)) ? 1 : 0;
      if (!c494) break;
        int* t495 = __last465;
        int c496 = -1;
        int* ptr497 = &(t495)[c496];
        __last465 = ptr497;
        int* t498 = __result466;
        int c499 = -1;
        int* ptr500 = &(t498)[c499];
        __result466 = ptr500;
        void_std____assign_one_false__int___int__(&__result466, &__last465);
    }
  int* t501 = __result466;
  __retval467 = t501;
  int* t502 = __retval467;
  return t502;
}

// function: _ZSt23__copy_move_backward_a1ILb0EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_backward_a1_false__int___int__(int* v503, int* v504, int* v505) {
bb506:
  int* __first507;
  int* __last508;
  int* __result509;
  int* __retval510;
  __first507 = v503;
  __last508 = v504;
  __result509 = v505;
  int* t511 = __first507;
  int* t512 = __last508;
  int* t513 = __result509;
  int* r514 = int__std____copy_move_backward_a2_false__int___int__(t511, t512, t513);
  __retval510 = r514;
  int* t515 = __retval510;
  return t515;
}

// function: _ZSt22__copy_move_backward_aILb0EN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_ET1_T0_S8_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____copy_move_backward_a_false____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v516, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v517, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v518) {
bb519:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first520;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last521;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result522;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval523;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0524;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1525;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2526;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3527;
  __first520 = v516;
  __last521 = v517;
  __result522 = v518;
  agg_tmp0524 = __result522; // copy
  agg_tmp1525 = __first520; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t528 = agg_tmp1525;
  int* r529 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t528);
  agg_tmp2526 = __last521; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t530 = agg_tmp2526;
  int* r531 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t530);
  agg_tmp3527 = __result522; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t532 = agg_tmp3527;
  int* r533 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t532);
  int* r534 = int__std____copy_move_backward_a1_false__int___int__(r529, r531, r533);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t535 = agg_tmp0524;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r536 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____niter_wrap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(t535, r534);
  __retval523 = r536;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t537 = __retval523;
  return t537;
}

// function: _ZSt13copy_backwardIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_ET0_T_S8_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__copy_backward___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v538, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v539, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v540) {
bb541:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first542;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last543;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result544;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval545;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0546;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1547;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2548;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3549;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp4550;
  __first542 = v538;
  __last543 = v539;
  __result544 = v540;
  agg_tmp1547 = __first542; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t551 = agg_tmp1547;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r552 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t551);
  agg_tmp0546 = r552;
  agg_tmp3549 = __last543; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t553 = agg_tmp3549;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r554 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t553);
  agg_tmp2548 = r554;
  agg_tmp4550 = __result544; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t555 = agg_tmp0546;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t556 = agg_tmp2548;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t557 = agg_tmp4550;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r558 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____copy_move_backward_a_false____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t555, t556, t557);
  __retval545 = r558;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t559 = __retval545;
  return t559;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v560, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v561) {
bb562:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs563;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs564;
  _Bool __retval565;
  __lhs563 = v560;
  __rhs564 = v561;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t566 = __lhs563;
  int** r567 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t566);
  int* t568 = *r567;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t569 = __rhs564;
  int** r570 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t569);
  int* t571 = *r570;
  _Bool c572 = ((t568 == t571)) ? 1 : 0;
  __retval565 = c572;
  _Bool t573 = __retval565;
  return t573;
}

// function: _ZNK9__gnu_cxx5__ops15_Iter_less_iterclINS_17__normal_iteratorIPiSt6vectorIiSaIiEEEES8_EEbT_T0_
_Bool bool___gnu_cxx____ops___Iter_less_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(struct __gnu_cxx____ops___Iter_less_iter* v574, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v575, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v576) {
bb577:
  struct __gnu_cxx____ops___Iter_less_iter* this578;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it1579;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it2580;
  _Bool __retval581;
  this578 = v574;
  __it1579 = v575;
  __it2580 = v576;
  struct __gnu_cxx____ops___Iter_less_iter* t582 = this578;
  int* r583 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it1579);
  int t584 = *r583;
  int* r585 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it2580);
  int t586 = *r585;
  _Bool c587 = ((t584 < t586)) ? 1 : 0;
  __retval581 = c587;
  _Bool t588 = __retval581;
  return t588;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v589) {
bb590:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this591;
  int* __retval592;
  this591 = v589;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t593 = this591;
  int* t594 = t593->_M_current;
  __retval592 = t594;
  int* t595 = __retval592;
  return t595;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v596) {
bb597:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this598;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval599;
  this598 = v596;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t600 = this598;
  int* t601 = t600->_M_current;
  int c602 = 1;
  int* ptr603 = &(t601)[c602];
  t600->_M_current = ptr603;
  __retval599 = t600;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t604 = __retval599;
  return t604;
}

// function: _ZSt14__copy_move_a2ILb0EPiS0_S0_ET2_T0_T1_S1_
int* int__std____copy_move_a2_false__int___int___int__(int* v605, int* v606, int* v607) {
bb608:
  int* __first609;
  int* __last610;
  int* __result611;
  int* __retval612;
  __first609 = v605;
  __last610 = v606;
  __result611 = v607;
      _Bool r613 = std____is_constant_evaluated();
      if (r613) {
      } else {
          long __n614;
          int* t615 = __first609;
          int* t616 = __last610;
          long r617 = std__iterator_traits_int____difference_type_std__distance_int__(t615, t616);
          __n614 = r617;
            long t618 = __n614;
            long c619 = 1;
            _Bool c620 = ((t618 > c619)) ? 1 : 0;
            if (c620) {
              int* t621 = __result611;
              void* cast622 = (void*)t621;
              int* t623 = __first609;
              void* cast624 = (void*)t623;
              long t625 = __n614;
              unsigned long cast626 = (unsigned long)t625;
              unsigned long c627 = 4;
              unsigned long b628 = cast626 * c627;
              void* r629 = memmove(cast622, cast624, b628);
              long t630 = __n614;
              int* t631 = __result611;
              int* ptr632 = &(t631)[t630];
              __result611 = ptr632;
            } else {
                long t633 = __n614;
                long c634 = 1;
                _Bool c635 = ((t633 == c634)) ? 1 : 0;
                if (c635) {
                  void_std____assign_one_false__int___int__(&__result611, &__first609);
                  int* t636 = __result611;
                  int c637 = 1;
                  int* ptr638 = &(t636)[c637];
                  __result611 = ptr638;
                }
            }
          int* t639 = __result611;
          __retval612 = t639;
          int* t640 = __retval612;
          return t640;
      }
    while (1) {
      int* t642 = __first609;
      int* t643 = __last610;
      _Bool c644 = ((t642 != t643)) ? 1 : 0;
      if (!c644) break;
      void_std____assign_one_false__int___int__(&__result611, &__first609);
    for_step641: ;
      int* t645 = __result611;
      int c646 = 1;
      int* ptr647 = &(t645)[c646];
      __result611 = ptr647;
      int* t648 = __first609;
      int c649 = 1;
      int* ptr650 = &(t648)[c649];
      __first609 = ptr650;
    }
  int* t651 = __result611;
  __retval612 = t651;
  int* t652 = __retval612;
  return t652;
}

// function: _ZSt14__copy_move_a1ILb0EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_a1_false__int___int__(int* v653, int* v654, int* v655) {
bb656:
  int* __first657;
  int* __last658;
  int* __result659;
  int* __retval660;
  __first657 = v653;
  __last658 = v654;
  __result659 = v655;
  int* t661 = __first657;
  int* t662 = __last658;
  int* t663 = __result659;
  int* r664 = int__std____copy_move_a2_false__int___int___int__(t661, t662, t663);
  __retval660 = r664;
  int* t665 = __retval660;
  return t665;
}

// function: _ZSt13__copy_move_aILb0EN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_ET1_T0_S8_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____copy_move_a_false____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v666, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v667, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v668) {
bb669:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first670;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last671;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result672;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval673;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0674;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1675;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2676;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3677;
  __first670 = v666;
  __last671 = v667;
  __result672 = v668;
  agg_tmp0674 = __result672; // copy
  agg_tmp1675 = __first670; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t678 = agg_tmp1675;
  int* r679 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t678);
  agg_tmp2676 = __last671; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t680 = agg_tmp2676;
  int* r681 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t680);
  agg_tmp3677 = __result672; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t682 = agg_tmp3677;
  int* r683 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t682);
  int* r684 = int__std____copy_move_a1_false__int___int__(r679, r681, r683);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t685 = agg_tmp0674;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r686 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____niter_wrap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(t685, r684);
  __retval673 = r686;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t687 = __retval673;
  return t687;
}

// function: _ZSt4copyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_ET0_T_S8_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v688, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v689, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v690) {
bb691:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first692;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last693;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result694;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval695;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0696;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1697;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2698;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3699;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp4700;
  __first692 = v688;
  __last693 = v689;
  __result694 = v690;
  agg_tmp1697 = __first692; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t701 = agg_tmp1697;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r702 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t701);
  agg_tmp0696 = r702;
  agg_tmp3699 = __last693; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t703 = agg_tmp3699;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r704 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t703);
  agg_tmp2698 = r704;
  agg_tmp4700 = __result694; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t705 = agg_tmp0696;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t706 = agg_tmp2698;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t707 = agg_tmp4700;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r708 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____copy_move_a_false____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t705, t706, t707);
  __retval695 = r708;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t709 = __retval695;
  return t709;
}

// function: _ZSt7__mergeIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_S6_NS0_5__ops15_Iter_less_iterEET1_T_SA_T0_SB_S9_T2_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____merge___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v710, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v711, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v712, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v713, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v714, struct __gnu_cxx____ops___Iter_less_iter v715) {
bb716:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1717;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1718;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first2719;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last2720;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result721;
  struct __gnu_cxx____ops___Iter_less_iter __comp722;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval723;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2724;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3725;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp4726;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp5727;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp6728;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp7729;
  __first1717 = v710;
  __last1718 = v711;
  __first2719 = v712;
  __last2720 = v713;
  __result721 = v714;
  __comp722 = v715;
    while (1) {
      _Bool r730 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first1717, &__last1718);
      _Bool u731 = !r730;
      _Bool ternary732;
      if (u731) {
        _Bool r733 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first2719, &__last2720);
        _Bool u734 = !r733;
        ternary732 = (_Bool)u734;
      } else {
        _Bool c735 = 0;
        ternary732 = (_Bool)c735;
      }
      if (!ternary732) break;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0736;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1737;
          agg_tmp0736 = __first2719; // copy
          agg_tmp1737 = __first1717; // copy
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t738 = agg_tmp0736;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t739 = agg_tmp1737;
          _Bool r740 = bool___gnu_cxx____ops___Iter_less_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(&__comp722, t738, t739);
          if (r740) {
            int* r741 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first2719);
            int t742 = *r741;
            int* r743 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__result721);
            *r743 = t742;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r744 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(&__first2719);
          } else {
            int* r745 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first1717);
            int t746 = *r745;
            int* r747 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__result721);
            *r747 = t746;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r748 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(&__first1717);
          }
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r749 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(&__result721);
    }
  agg_tmp2724 = __first2719; // copy
  agg_tmp3725 = __last2720; // copy
  agg_tmp5727 = __first1717; // copy
  agg_tmp6728 = __last1718; // copy
  agg_tmp7729 = __result721; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t750 = agg_tmp5727;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t751 = agg_tmp6728;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t752 = agg_tmp7729;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r753 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t750, t751, t752);
  agg_tmp4726 = r753;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t754 = agg_tmp2724;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t755 = agg_tmp3725;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t756 = agg_tmp4726;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r757 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t754, t755, t756);
  __retval723 = r757;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t758 = __retval723;
  return t758;
}

// function: _ZN9__gnu_cxx5__ops16__iter_less_iterEv
struct __gnu_cxx____ops___Iter_less_iter __gnu_cxx____ops____iter_less_iter() {
bb759:
  struct __gnu_cxx____ops___Iter_less_iter __retval760;
  struct __gnu_cxx____ops___Iter_less_iter t761 = __retval760;
  return t761;
}

// function: _ZSt5mergeIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_S6_ET1_T_S8_T0_S9_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__merge___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v762, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v763, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v764, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v765, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v766) {
bb767:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1768;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1769;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first2770;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last2771;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result772;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval773;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0774;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1775;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2776;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3777;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp4778;
  struct __gnu_cxx____ops___Iter_less_iter agg_tmp5779;
  __first1768 = v762;
  __last1769 = v763;
  __first2770 = v764;
  __last2771 = v765;
  __result772 = v766;
  agg_tmp0774 = __first1768; // copy
  agg_tmp1775 = __last1769; // copy
  agg_tmp2776 = __first2770; // copy
  agg_tmp3777 = __last2771; // copy
  agg_tmp4778 = __result772; // copy
  struct __gnu_cxx____ops___Iter_less_iter r780 = __gnu_cxx____ops____iter_less_iter();
  agg_tmp5779 = r780;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t781 = agg_tmp0774;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t782 = agg_tmp1775;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t783 = agg_tmp2776;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t784 = agg_tmp3777;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t785 = agg_tmp4778;
  struct __gnu_cxx____ops___Iter_less_iter t786 = agg_tmp5779;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r787 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____merge___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(t781, t782, t783, t784, t785, t786);
  __retval773 = r787;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t788 = __retval773;
  return t788;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2Ev
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v789) {
bb790:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this791;
  this791 = v789;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t792 = this791;
  int* c793 = ((void*)0);
  t792->_M_current = c793;
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSERKS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v794, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v795) {
bb796:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this797;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed798;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval799;
  this797 = v794;
  unnamed798 = v795;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t800 = this797;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t801 = unnamed798;
  int* t802 = t801->_M_current;
  t800->_M_current = t802;
  __retval799 = t800;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t803 = __retval799;
  return t803;
}

// function: _ZSt15__adjacent_findIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops19_Iter_equal_to_iterEET_S9_S9_T0_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____adjacent_find___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_equal_to_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v804, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v805, struct __gnu_cxx____ops___Iter_equal_to_iter v806) {
bb807:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first808;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last809;
  struct __gnu_cxx____ops___Iter_equal_to_iter __binary_pred810;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval811;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __next812;
  __first808 = v804;
  __last809 = v805;
  __binary_pred810 = v806;
    _Bool r813 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first808, &__last809);
    if (r813) {
      __retval811 = __last809; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t814 = __retval811;
      return t814;
    }
  __next812 = __first808; // copy
    while (1) {
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r815 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(&__next812);
      _Bool r816 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(r815, &__last809);
      _Bool u817 = !r816;
      if (!u817) break;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0818;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1819;
          agg_tmp0818 = __first808; // copy
          agg_tmp1819 = __next812; // copy
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t820 = agg_tmp0818;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t821 = agg_tmp1819;
          _Bool r822 = bool___gnu_cxx____ops___Iter_equal_to_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(&__binary_pred810, t820, t821);
          if (r822) {
            __retval811 = __first808; // copy
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t823 = __retval811;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ret_val824 = t823;
            return ret_val824;
          }
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r825 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__2(&__first808, &__next812);
    }
  __retval811 = __last809; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t826 = __retval811;
  return t826;
}

// function: _ZNK9__gnu_cxx5__ops19_Iter_equal_to_iterclINS_17__normal_iteratorIPiSt6vectorIiSaIiEEEES8_EEbT_T0_
_Bool bool___gnu_cxx____ops___Iter_equal_to_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(struct __gnu_cxx____ops___Iter_equal_to_iter* v827, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v828, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v829) {
bb830:
  struct __gnu_cxx____ops___Iter_equal_to_iter* this831;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it1832;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it2833;
  _Bool __retval834;
  this831 = v827;
  __it1832 = v828;
  __it2833 = v829;
  struct __gnu_cxx____ops___Iter_equal_to_iter* t835 = this831;
  int* r836 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it1832);
  int t837 = *r836;
  int* r838 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it2833);
  int t839 = *r838;
  _Bool c840 = ((t837 == t839)) ? 1 : 0;
  __retval834 = c840;
  _Bool t841 = __retval834;
  return t841;
}

// function: _ZSt8__uniqueIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops19_Iter_equal_to_iterEET_S9_S9_T0_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____unique___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_equal_to_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v842, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v843, struct __gnu_cxx____ops___Iter_equal_to_iter v844) {
bb845:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first846;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last847;
  struct __gnu_cxx____ops___Iter_equal_to_iter __binary_pred848;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval849;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0850;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0851;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1852;
  struct __gnu_cxx____ops___Iter_equal_to_iter agg_tmp2853;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __dest854;
  __first846 = v842;
  __last847 = v843;
  __binary_pred848 = v844;
  agg_tmp0851 = __first846; // copy
  agg_tmp1852 = __last847; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t855 = agg_tmp0851;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t856 = agg_tmp1852;
  struct __gnu_cxx____ops___Iter_equal_to_iter t857 = agg_tmp2853;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r858 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____adjacent_find___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_equal_to_iter_(t855, t856, t857);
  ref_tmp0850 = r858;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r859 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&__first846, &ref_tmp0850);
    _Bool r860 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first846, &__last847);
    if (r860) {
      __retval849 = __last847; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t861 = __retval849;
      return t861;
    }
  __dest854 = __first846; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r862 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(&__first846);
    while (1) {
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r863 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(&__first846);
      _Bool r864 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(r863, &__last847);
      _Bool u865 = !r864;
      if (!u865) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3866;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp4867;
        agg_tmp3866 = __dest854; // copy
        agg_tmp4867 = __first846; // copy
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t868 = agg_tmp3866;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t869 = agg_tmp4867;
        _Bool r870 = bool___gnu_cxx____ops___Iter_equal_to_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(&__binary_pred848, t868, t869);
        _Bool u871 = !r870;
        if (u871) {
          int* r872 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first846);
          int t873 = *r872;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r874 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(&__dest854);
          int* r875 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(r874);
          *r875 = t873;
        }
    }
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r876 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(&__dest854);
  __retval849 = *r876; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t877 = __retval849;
  return t877;
}

// function: _ZN9__gnu_cxx5__ops20__iter_equal_to_iterEv
struct __gnu_cxx____ops___Iter_equal_to_iter __gnu_cxx____ops____iter_equal_to_iter() {
bb878:
  struct __gnu_cxx____ops___Iter_equal_to_iter __retval879;
  struct __gnu_cxx____ops___Iter_equal_to_iter t880 = __retval879;
  return t880;
}

// function: _ZSt6uniqueIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEET_S7_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__unique___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v881, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v882) {
bb883:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first884;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last885;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval886;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0887;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1888;
  struct __gnu_cxx____ops___Iter_equal_to_iter agg_tmp2889;
  __first884 = v881;
  __last885 = v882;
  agg_tmp0887 = __first884; // copy
  agg_tmp1888 = __last885; // copy
  struct __gnu_cxx____ops___Iter_equal_to_iter r890 = __gnu_cxx____ops____iter_equal_to_iter();
  agg_tmp2889 = r890;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t891 = agg_tmp0887;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t892 = agg_tmp1888;
  struct __gnu_cxx____ops___Iter_equal_to_iter t893 = agg_tmp2889;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r894 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____unique___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_equal_to_iter_(t891, t892, t893);
  __retval886 = r894;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t895 = __retval886;
  return t895;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSEOS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v896, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v897) {
bb898:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this899;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed900;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval901;
  this899 = v896;
  unnamed900 = v897;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t902 = this899;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t903 = unnamed900;
  int* t904 = t903->_M_current;
  t902->_M_current = t904;
  __retval901 = t902;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t905 = __retval901;
  return t905;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEmmEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v906) {
bb907:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this908;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval909;
  this908 = v906;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t910 = this908;
  int* t911 = t910->_M_current;
  int c912 = -1;
  int* ptr913 = &(t911)[c912];
  t910->_M_current = ptr913;
  __retval909 = t910;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t914 = __retval909;
  return t914;
}

// function: _ZStltSt15strong_orderingNSt9__cmp_cat8__unspecE
_Bool std__operator_(struct std__strong_ordering v915, struct std____cmp_cat____unspec v916) {
bb917:
  struct std__strong_ordering __v918;
  struct std____cmp_cat____unspec unnamed919;
  _Bool __retval920;
  __v918 = v915;
  unnamed919 = v916;
  char t921 = __v918._M_value;
  int cast922 = (int)t921;
  int c923 = 0;
  _Bool c924 = ((cast922 < c923)) ? 1 : 0;
  __retval920 = c924;
  _Bool t925 = __retval920;
  return t925;
}

// function: _ZNKSt8__detail10_Synth3wayclIPiS2_EEDaRKT_RKT0_QrqXltfp_fp0_RNS_18__boolean_testableEXltfp0_fp_RNS_18__boolean_testableEE
struct std__strong_ordering _ZNKSt8__detail10_Synth3wayclIPiS2_EEDaRKT_RKT0_QrqXltfp_fp0_RNS_18__boolean_testableEXltfp0_fp_RNS_18__boolean_testableEE(struct std____detail___Synth3way* v926, int** v927, int** v928) {
bb929:
  struct std____detail___Synth3way* this930;
  int** __t931;
  int** __u932;
  struct std__strong_ordering __retval933;
  this930 = v926;
  __t931 = v927;
  __u932 = v928;
  struct std____detail___Synth3way* t934 = this930;
    int** t935 = __t931;
    int* t936 = *t935;
    int** t937 = __u932;
    int* t938 = *t937;
    char c939 = -1;
    char c940 = 0;
    char c941 = 1;
    _Bool c942 = ((t936 < t938)) ? 1 : 0;
    char sel943 = c942 ? c939 : c941;
    _Bool c944 = ((t936 == t938)) ? 1 : 0;
    char sel945 = c944 ? c940 : sel943;
    __retval933._M_value = sel945;
    struct std__strong_ordering t946 = __retval933;
    return t946;
  abort();
}

// function: _ZN9__gnu_cxxssIPiSt6vectorIiSaIiEEEEDTclL_ZNSt8__detail11__synth3wayEEclsr3stdE7declvalIRT_EEclsr3stdE7declvalIS7_EEEERKNS_17__normal_iteratorIS6_T0_EESD_
struct std__strong_ordering decltype__std____detail____synth3way__std__declval_int_________std__declval_int___________gnu_cxx__operator____int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v947, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v948) {
bb949:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs950;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs951;
  struct std__strong_ordering __retval952;
  __lhs950 = v947;
  __rhs951 = v948;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t953 = __lhs950;
  int** r954 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t953);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t955 = __rhs951;
  int** r956 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t955);
  struct std__strong_ordering r957 = _ZNKSt8__detail10_Synth3wayclIPiS2_EEDaRKT_RKT0_QrqXltfp_fp0_RNS_18__boolean_testableEXltfp0_fp_RNS_18__boolean_testableEE(&_ZNSt8__detail11__synth3wayE, r954, r956);
  __retval952 = r957;
  struct std__strong_ordering t958 = __retval952;
  return t958;
}

// function: _ZSt4swapIiENSt9enable_ifIXsr6__and_ISt6__not_ISt15__is_tuple_likeIT_EESt21is_move_constructibleIS3_ESt18is_move_assignableIS3_EEE5valueEvE4typeERS3_SC_
void std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(int* v959, int* v960) {
bb961:
  int* __a962;
  int* __b963;
  int __tmp964;
  __a962 = v959;
  __b963 = v960;
  int* t965 = __a962;
  int t966 = *t965;
  __tmp964 = t966;
  int* t967 = __b963;
  int t968 = *t967;
  int* t969 = __a962;
  *t969 = t968;
  int t970 = __tmp964;
  int* t971 = __b963;
  *t971 = t970;
  return;
}

// function: _ZSt9iter_swapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_EvT_T0_
void void_std__iter_swap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v972, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v973) {
bb974:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __a975;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __b976;
  __a975 = v972;
  __b976 = v973;
  int* r977 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__a975);
  int* r978 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__b976);
  std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(r977, r978);
  return;
}

// function: _ZSt9__reverseIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEvT_S7_St26random_access_iterator_tag
void void_std____reverse___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v979, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v980, struct std__random_access_iterator_tag v981) {
bb982:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first983;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last984;
  struct std__random_access_iterator_tag unnamed985;
  __first983 = v979;
  __last984 = v980;
  unnamed985 = v981;
    _Bool r986 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first983, &__last984);
    if (r986) {
      return;
    }
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r987 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__last984);
    struct std__strong_ordering agg_tmp0988;
    struct std____cmp_cat____unspec agg_tmp1989;
    while (1) {
      struct std__strong_ordering r990 = decltype__std____detail____synth3way__std__declval_int_________std__declval_int___________gnu_cxx__operator____int___std__vector_int__std__allocator_int_____(&__first983, &__last984);
      agg_tmp0988 = r990;
      agg_tmp1989 = *&__const__ZSt9__reverseIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEvT_S7_St26random_access_iterator_tag_agg_tmp1; // copy
      struct std__strong_ordering t991 = agg_tmp0988;
      struct std____cmp_cat____unspec t992 = agg_tmp1989;
      _Bool r993 = std__operator_(t991, t992);
      if (!r993) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2994;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3995;
        agg_tmp2994 = __first983; // copy
        agg_tmp3995 = __last984; // copy
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t996 = agg_tmp2994;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t997 = agg_tmp3995;
        void_std__iter_swap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t996, t997);
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r998 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(&__first983);
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r999 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__last984);
    }
  return;
}

// function: _ZSt19__iterator_categoryIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEENSt15iterator_traitsIT_E17iterator_categoryERKS8_
struct std__random_access_iterator_tag std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1000) {
bb1001:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed1002;
  struct std__random_access_iterator_tag __retval1003;
  unnamed1002 = v1000;
  struct std__random_access_iterator_tag t1004 = __retval1003;
  return t1004;
}

// function: _ZSt7reverseIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEvT_S7_
void void_std__reverse___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1005, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1006) {
bb1007:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1008;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1009;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01010;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11011;
  struct std__random_access_iterator_tag agg_tmp21012;
  __first1008 = v1005;
  __last1009 = v1006;
  agg_tmp01010 = __first1008; // copy
  agg_tmp11011 = __last1009; // copy
  struct std__random_access_iterator_tag r1013 = std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__first1008);
  agg_tmp21012 = r1013;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1014 = agg_tmp01010;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1015 = agg_tmp11011;
  struct std__random_access_iterator_tag t1016 = agg_tmp21012;
  void_std____reverse___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t1014, t1015, t1016);
  return;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v1017, void* v1018) {
bb1019:
  struct std__basic_ostream_char__std__char_traits_char__* this1020;
  void* __pf1021;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1022;
  this1020 = v1017;
  __pf1021 = v1018;
  struct std__basic_ostream_char__std__char_traits_char__* t1023 = this1020;
  void* t1024 = __pf1021;
  struct std__basic_ostream_char__std__char_traits_char__* r1025 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t1024)(t1023);
  __retval1022 = r1025;
  struct std__basic_ostream_char__std__char_traits_char__* t1026 = __retval1022;
  return t1026;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1027) {
bb1028:
  struct std__basic_ostream_char__std__char_traits_char__* __os1029;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1030;
  __os1029 = v1027;
  struct std__basic_ostream_char__std__char_traits_char__* t1031 = __os1029;
  struct std__basic_ostream_char__std__char_traits_char__* r1032 = std__ostream__flush(t1031);
  __retval1030 = r1032;
  struct std__basic_ostream_char__std__char_traits_char__* t1033 = __retval1030;
  return t1033;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v1034) {
bb1035:
  struct std__ctype_char_* __f1036;
  struct std__ctype_char_* __retval1037;
  __f1036 = v1034;
    struct std__ctype_char_* t1038 = __f1036;
    _Bool cast1039 = (_Bool)t1038;
    _Bool u1040 = !cast1039;
    if (u1040) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t1041 = __f1036;
  __retval1037 = t1041;
  struct std__ctype_char_* t1042 = __retval1037;
  return t1042;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v1043, char v1044) {
bb1045:
  struct std__ctype_char_* this1046;
  char __c1047;
  char __retval1048;
  this1046 = v1043;
  __c1047 = v1044;
  struct std__ctype_char_* t1049 = this1046;
    char t1050 = t1049->_M_widen_ok;
    _Bool cast1051 = (_Bool)t1050;
    if (cast1051) {
      char t1052 = __c1047;
      unsigned char cast1053 = (unsigned char)t1052;
      unsigned long cast1054 = (unsigned long)cast1053;
      char t1055 = t1049->_M_widen[cast1054];
      __retval1048 = t1055;
      char t1056 = __retval1048;
      return t1056;
    }
  std__ctype_char____M_widen_init___const(t1049);
  char t1057 = __c1047;
  void** v1058 = (void**)t1049;
  void* v1059 = *((void**)v1058);
  char vcall1062 = (char)__VERIFIER_virtual_call_char_char(t1049, 6, t1057);
  __retval1048 = vcall1062;
  char t1063 = __retval1048;
  return t1063;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v1064, char v1065) {
bb1066:
  struct std__basic_ios_char__std__char_traits_char__* this1067;
  char __c1068;
  char __retval1069;
  this1067 = v1064;
  __c1068 = v1065;
  struct std__basic_ios_char__std__char_traits_char__* t1070 = this1067;
  struct std__ctype_char_* t1071 = t1070->_M_ctype;
  struct std__ctype_char_* r1072 = std__ctype_char__const__std____check_facet_std__ctype_char___(t1071);
  char t1073 = __c1068;
  char r1074 = std__ctype_char___widen_char__const(r1072, t1073);
  __retval1069 = r1074;
  char t1075 = __retval1069;
  return t1075;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1076) {
bb1077:
  struct std__basic_ostream_char__std__char_traits_char__* __os1078;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1079;
  __os1078 = v1076;
  struct std__basic_ostream_char__std__char_traits_char__* t1080 = __os1078;
  struct std__basic_ostream_char__std__char_traits_char__* t1081 = __os1078;
  void** v1082 = (void**)t1081;
  void* v1083 = *((void**)v1082);
  unsigned char* cast1084 = (unsigned char*)v1083;
  long c1085 = -24;
  unsigned char* ptr1086 = &(cast1084)[c1085];
  long* cast1087 = (long*)ptr1086;
  long t1088 = *cast1087;
  unsigned char* cast1089 = (unsigned char*)t1081;
  unsigned char* ptr1090 = &(cast1089)[t1088];
  struct std__basic_ostream_char__std__char_traits_char__* cast1091 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1090;
  struct std__basic_ios_char__std__char_traits_char__* cast1092 = (struct std__basic_ios_char__std__char_traits_char__*)cast1091;
  char c1093 = 10;
  char r1094 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast1092, c1093);
  struct std__basic_ostream_char__std__char_traits_char__* r1095 = std__ostream__put(t1080, r1094);
  struct std__basic_ostream_char__std__char_traits_char__* r1096 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r1095);
  __retval1079 = r1096;
  struct std__basic_ostream_char__std__char_traits_char__* t1097 = __retval1079;
  return t1097;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v1098) {
bb1099:
  struct std__vector_int__std__allocator_int__* this1100;
  this1100 = v1098;
  struct std__vector_int__std__allocator_int__* t1101 = this1100;
    struct std___Vector_base_int__std__allocator_int__* base1102 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1101 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1103 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1102->_M_impl) + 0);
    int* t1104 = base1103->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base1105 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1101 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1106 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1105->_M_impl) + 0);
    int* t1107 = base1106->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base1108 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1101 + 0);
    struct std__allocator_int_* r1109 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1108);
    void_std___Destroy_int___int_(t1104, t1107, r1109);
  {
    struct std___Vector_base_int__std__allocator_int__* base1110 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1101 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base1110);
  }
  return;
}

// function: main
int main() {
bb1111:
  int __retval1112;
  int SIZE1113;
  int a11114[5];
  int a21115[5];
  struct std__vector_int__std__allocator_int__ v11116;
  struct std__allocator_int_ ref_tmp01117;
  struct std__vector_int__std__allocator_int__ v21118;
  struct std__allocator_int_ ref_tmp11119;
  struct std__ostream_iterator_int__char__std__char_traits_char__ output1120;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01121;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11122;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp21123;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp31124;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp41125;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp51126;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp61127;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp71128;
  struct std__vector_int__std__allocator_int__ results1129;
  struct std__allocator_int_ ref_tmp21130;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp81131;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp91132;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp101133;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp111134;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp121135;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp131136;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp141137;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp151138;
  struct std__vector_int__std__allocator_int__ results21139;
  struct std__allocator_int_ ref_tmp31140;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp161141;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp171142;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp181143;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp191144;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp201145;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp211146;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp221147;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp231148;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp241149;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp251150;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ endLocation1151;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp41152;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp261153;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp271154;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp281155;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp291156;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp301157;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp311158;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp321159;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp331160;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp341161;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp351162;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp361163;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp371164;
  int c1165 = 0;
  __retval1112 = c1165;
  int c1166 = 5;
  SIZE1113 = c1166;
  // array copy
  __builtin_memcpy(a11114, __const_main_a1, (unsigned long)5 * sizeof(__const_main_a1[0]));
  // array copy
  __builtin_memcpy(a21115, __const_main_a2, (unsigned long)5 * sizeof(__const_main_a2[0]));
  int* cast1167 = (int*)&(a11114);
  int* cast1168 = (int*)&(a11114);
  int t1169 = SIZE1113;
  int* ptr1170 = &(cast1168)[t1169];
  std__allocator_int___allocator_2(&ref_tmp01117);
    std__vector_int__std__allocator_int_____vector_int___void_(&v11116, cast1167, ptr1170, &ref_tmp01117);
  {
    std__allocator_int____allocator(&ref_tmp01117);
  }
    int* cast1171 = (int*)&(a21115);
    int* cast1172 = (int*)&(a21115);
    int t1173 = SIZE1113;
    int* ptr1174 = &(cast1172)[t1173];
    std__allocator_int___allocator_2(&ref_tmp11119);
      std__vector_int__std__allocator_int_____vector_int___void_(&v21118, cast1171, ptr1174, &ref_tmp11119);
    {
      std__allocator_int____allocator(&ref_tmp11119);
    }
      char* cast1175 = (char*)&(_str);
      std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator_2(&output1120, &_ZSt4cout, cast1175);
      char* cast1176 = (char*)&(_str_1);
      struct std__basic_ostream_char__std__char_traits_char__* r1177 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1176);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1178 = std__vector_int__std__allocator_int_____begin(&v11116);
      agg_tmp01121 = r1178;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1179 = std__vector_int__std__allocator_int_____end(&v11116);
      agg_tmp11122 = r1179;
      std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp21123, &output1120);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1180 = agg_tmp01121;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1181 = agg_tmp11122;
      struct std__ostream_iterator_int__char__std__char_traits_char__ t1182 = agg_tmp21123;
      struct std__ostream_iterator_int__char__std__char_traits_char__ r1183 = std__ostream_iterator_int__char__std__char_traits_char____std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(t1180, t1181, t1182);
      agg_tmp31124 = r1183;
      char* cast1184 = (char*)&(_str_2);
      struct std__basic_ostream_char__std__char_traits_char__* r1185 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1184);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1186 = std__vector_int__std__allocator_int_____begin(&v21118);
      agg_tmp41125 = r1186;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1187 = std__vector_int__std__allocator_int_____end(&v21118);
      agg_tmp51126 = r1187;
      std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp61127, &output1120);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1188 = agg_tmp41125;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1189 = agg_tmp51126;
      struct std__ostream_iterator_int__char__std__char_traits_char__ t1190 = agg_tmp61127;
      struct std__ostream_iterator_int__char__std__char_traits_char__ r1191 = std__ostream_iterator_int__char__std__char_traits_char____std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(t1188, t1189, t1190);
      agg_tmp71128 = r1191;
      unsigned long r1192 = std__vector_int__std__allocator_int_____size___const(&v11116);
      std__allocator_int___allocator_2(&ref_tmp21130);
        std__vector_int__std__allocator_int_____vector(&results1129, r1192, &ref_tmp21130);
      {
        std__allocator_int____allocator(&ref_tmp21130);
      }
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1193 = std__vector_int__std__allocator_int_____begin(&v11116);
        agg_tmp81131 = r1193;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1194 = std__vector_int__std__allocator_int_____end(&v11116);
        agg_tmp91132 = r1194;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1195 = std__vector_int__std__allocator_int_____end(&results1129);
        agg_tmp101133 = r1195;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1196 = agg_tmp81131;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1197 = agg_tmp91132;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1198 = agg_tmp101133;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1199 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__copy_backward___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t1196, t1197, t1198);
        agg_tmp111134 = r1199;
        char* cast1200 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* r1201 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1200);
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1202 = std__vector_int__std__allocator_int_____begin(&results1129);
        agg_tmp121135 = r1202;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1203 = std__vector_int__std__allocator_int_____end(&results1129);
        agg_tmp131136 = r1203;
        std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp141137, &output1120);
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1204 = agg_tmp121135;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1205 = agg_tmp131136;
        struct std__ostream_iterator_int__char__std__char_traits_char__ t1206 = agg_tmp141137;
        struct std__ostream_iterator_int__char__std__char_traits_char__ r1207 = std__ostream_iterator_int__char__std__char_traits_char____std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(t1204, t1205, t1206);
        agg_tmp151138 = r1207;
        unsigned long r1208 = std__vector_int__std__allocator_int_____size___const(&v11116);
        unsigned long r1209 = std__vector_int__std__allocator_int_____size___const(&v21118);
        unsigned long b1210 = r1208 + r1209;
        std__allocator_int___allocator_2(&ref_tmp31140);
          std__vector_int__std__allocator_int_____vector(&results21139, b1210, &ref_tmp31140);
        {
          std__allocator_int____allocator(&ref_tmp31140);
        }
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1211 = std__vector_int__std__allocator_int_____begin(&v11116);
          agg_tmp161141 = r1211;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1212 = std__vector_int__std__allocator_int_____end(&v11116);
          agg_tmp171142 = r1212;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1213 = std__vector_int__std__allocator_int_____begin(&v21118);
          agg_tmp181143 = r1213;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1214 = std__vector_int__std__allocator_int_____end(&v21118);
          agg_tmp191144 = r1214;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1215 = std__vector_int__std__allocator_int_____begin(&results21139);
          agg_tmp201145 = r1215;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1216 = agg_tmp161141;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1217 = agg_tmp171142;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1218 = agg_tmp181143;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1219 = agg_tmp191144;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1220 = agg_tmp201145;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1221 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__merge___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t1216, t1217, t1218, t1219, t1220);
          agg_tmp211146 = r1221;
          char* cast1222 = (char*)&(_str_4);
          struct std__basic_ostream_char__std__char_traits_char__* r1223 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1222);
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1224 = std__vector_int__std__allocator_int_____begin(&results21139);
          agg_tmp221147 = r1224;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1225 = std__vector_int__std__allocator_int_____end(&results21139);
          agg_tmp231148 = r1225;
          std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp241149, &output1120);
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1226 = agg_tmp221147;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1227 = agg_tmp231148;
          struct std__ostream_iterator_int__char__std__char_traits_char__ t1228 = agg_tmp241149;
          struct std__ostream_iterator_int__char__std__char_traits_char__ r1229 = std__ostream_iterator_int__char__std__char_traits_char____std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(t1226, t1227, t1228);
          agg_tmp251150 = r1229;
          __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&endLocation1151);
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1230 = std__vector_int__std__allocator_int_____begin(&results21139);
          agg_tmp261153 = r1230;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1231 = std__vector_int__std__allocator_int_____end(&results21139);
          agg_tmp271154 = r1231;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1232 = agg_tmp261153;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1233 = agg_tmp271154;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1234 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__unique___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t1232, t1233);
          ref_tmp41152 = r1234;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1235 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&endLocation1151, &ref_tmp41152);
          char* cast1236 = (char*)&(_str_5);
          struct std__basic_ostream_char__std__char_traits_char__* r1237 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1236);
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1238 = std__vector_int__std__allocator_int_____begin(&results21139);
          agg_tmp281155 = r1238;
          agg_tmp291156 = endLocation1151; // copy
          std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp301157, &output1120);
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1239 = agg_tmp281155;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1240 = agg_tmp291156;
          struct std__ostream_iterator_int__char__std__char_traits_char__ t1241 = agg_tmp301157;
          struct std__ostream_iterator_int__char__std__char_traits_char__ r1242 = std__ostream_iterator_int__char__std__char_traits_char____std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(t1239, t1240, t1241);
          agg_tmp311158 = r1242;
          char* cast1243 = (char*)&(_str_6);
          struct std__basic_ostream_char__std__char_traits_char__* r1244 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1243);
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1245 = std__vector_int__std__allocator_int_____begin(&v11116);
          agg_tmp321159 = r1245;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1246 = std__vector_int__std__allocator_int_____end(&v11116);
          agg_tmp331160 = r1246;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1247 = agg_tmp321159;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1248 = agg_tmp331160;
          void_std__reverse___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t1247, t1248);
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1249 = std__vector_int__std__allocator_int_____begin(&v11116);
          agg_tmp341161 = r1249;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1250 = std__vector_int__std__allocator_int_____end(&v11116);
          agg_tmp351162 = r1250;
          std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp361163, &output1120);
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1251 = agg_tmp341161;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1252 = agg_tmp351162;
          struct std__ostream_iterator_int__char__std__char_traits_char__ t1253 = agg_tmp361163;
          struct std__ostream_iterator_int__char__std__char_traits_char__ r1254 = std__ostream_iterator_int__char__std__char_traits_char____std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(t1251, t1252, t1253);
          agg_tmp371164 = r1254;
          struct std__basic_ostream_char__std__char_traits_char__* r1255 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
          int c1256 = 0;
          __retval1112 = c1256;
          int t1257 = __retval1112;
          int ret_val1258 = t1257;
          {
            std__vector_int__std__allocator_int______vector(&results21139);
          }
          {
            std__vector_int__std__allocator_int______vector(&results1129);
          }
          {
            std__vector_int__std__allocator_int______vector(&v21118);
          }
          {
            std__vector_int__std__allocator_int______vector(&v11116);
          }
          return ret_val1258;
  int t1259 = __retval1112;
  return t1259;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v1260) {
bb1261:
  struct std____new_allocator_int_* this1262;
  this1262 = v1260;
  struct std____new_allocator_int_* t1263 = this1262;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1264, struct std__allocator_int_* v1265) {
bb1266:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1267;
  struct std__allocator_int_* __a1268;
  this1267 = v1264;
  __a1268 = v1265;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1269 = this1267;
  struct std__allocator_int_* base1270 = (struct std__allocator_int_*)((char *)t1269 + 0);
  struct std__allocator_int_* t1271 = __a1268;
  std__allocator_int___allocator(base1270, t1271);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1272 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t1269 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base1272);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1273) {
bb1274:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1275;
  this1275 = v1273;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1276 = this1275;
  {
    struct std__allocator_int_* base1277 = (struct std__allocator_int_*)((char *)t1276 + 0);
    std__allocator_int____allocator(base1277);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1278, struct std__allocator_int_* v1279) {
bb1280:
  struct std___Vector_base_int__std__allocator_int__* this1281;
  struct std__allocator_int_* __a1282;
  this1281 = v1278;
  __a1282 = v1279;
  struct std___Vector_base_int__std__allocator_int__* t1283 = this1281;
  struct std__allocator_int_* t1284 = __a1282;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t1283->_M_impl, t1284);
  return;
}

// function: _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_
long _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_(struct std__ranges____distance_fn* v1285, int** v1286, int* v1287) {
bb1288:
  struct std__ranges____distance_fn* this1289;
  int** __first1290;
  int* __last1291;
  long __retval1292;
  this1289 = v1285;
  __first1290 = v1286;
  __last1291 = v1287;
  struct std__ranges____distance_fn* t1293 = this1289;
  int* t1294 = __last1291;
  int** t1295 = __first1290;
  int* t1296 = *t1295;
  long diff1297 = t1294 - t1296;
  __retval1292 = diff1297;
  long t1298 = __retval1292;
  return t1298;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1299:
  _Bool __retval1300;
    _Bool c1301 = 0;
    __retval1300 = c1301;
    _Bool t1302 = __retval1300;
    return t1302;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v1303) {
bb1304:
  struct std____new_allocator_int_* this1305;
  unsigned long __retval1306;
  this1305 = v1303;
  struct std____new_allocator_int_* t1307 = this1305;
  unsigned long c1308 = 9223372036854775807;
  unsigned long c1309 = 4;
  unsigned long b1310 = c1308 / c1309;
  __retval1306 = b1310;
  unsigned long t1311 = __retval1306;
  return t1311;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v1312, unsigned long v1313, void* v1314) {
bb1315:
  struct std____new_allocator_int_* this1316;
  unsigned long __n1317;
  void* unnamed1318;
  int* __retval1319;
  this1316 = v1312;
  __n1317 = v1313;
  unnamed1318 = v1314;
  struct std____new_allocator_int_* t1320 = this1316;
    unsigned long t1321 = __n1317;
    unsigned long r1322 = std____new_allocator_int____M_max_size___const(t1320);
    _Bool c1323 = ((t1321 > r1322)) ? 1 : 0;
    if (c1323) {
        unsigned long t1324 = __n1317;
        unsigned long c1325 = -1;
        unsigned long c1326 = 4;
        unsigned long b1327 = c1325 / c1326;
        _Bool c1328 = ((t1324 > b1327)) ? 1 : 0;
        if (c1328) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c1329 = 4;
    unsigned long c1330 = 16;
    _Bool c1331 = ((c1329 > c1330)) ? 1 : 0;
    if (c1331) {
      unsigned long __al1332;
      unsigned long c1333 = 4;
      __al1332 = c1333;
      unsigned long t1334 = __n1317;
      unsigned long c1335 = 4;
      unsigned long b1336 = t1334 * c1335;
      unsigned long t1337 = __al1332;
      void* r1338 = operator_new_2(b1336, t1337);
      int* cast1339 = (int*)r1338;
      __retval1319 = cast1339;
      int* t1340 = __retval1319;
      return t1340;
    }
  unsigned long t1341 = __n1317;
  unsigned long c1342 = 4;
  unsigned long b1343 = t1341 * c1342;
  void* r1344 = operator_new(b1343);
  int* cast1345 = (int*)r1344;
  __retval1319 = cast1345;
  int* t1346 = __retval1319;
  return t1346;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v1347, unsigned long v1348) {
bb1349:
  struct std__allocator_int_* this1350;
  unsigned long __n1351;
  int* __retval1352;
  this1350 = v1347;
  __n1351 = v1348;
  struct std__allocator_int_* t1353 = this1350;
    _Bool r1354 = std____is_constant_evaluated();
    if (r1354) {
        unsigned long t1355 = __n1351;
        unsigned long c1356 = 4;
        unsigned long ovr1357;
        _Bool ovf1358 = __builtin_mul_overflow(t1355, c1356, &ovr1357);
        __n1351 = ovr1357;
        if (ovf1358) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1359 = __n1351;
      void* r1360 = operator_new(t1359);
      int* cast1361 = (int*)r1360;
      __retval1352 = cast1361;
      int* t1362 = __retval1352;
      return t1362;
    }
  struct std____new_allocator_int_* base1363 = (struct std____new_allocator_int_*)((char *)t1353 + 0);
  unsigned long t1364 = __n1351;
  void* c1365 = ((void*)0);
  int* r1366 = std____new_allocator_int___allocate(base1363, t1364, c1365);
  __retval1352 = r1366;
  int* t1367 = __retval1352;
  return t1367;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v1368, unsigned long v1369) {
bb1370:
  struct std__allocator_int_* __a1371;
  unsigned long __n1372;
  int* __retval1373;
  __a1371 = v1368;
  __n1372 = v1369;
  struct std__allocator_int_* t1374 = __a1371;
  unsigned long t1375 = __n1372;
  int* r1376 = std__allocator_int___allocate(t1374, t1375);
  __retval1373 = r1376;
  int* t1377 = __retval1373;
  return t1377;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v1378, unsigned long v1379) {
bb1380:
  struct std___Vector_base_int__std__allocator_int__* this1381;
  unsigned long __n1382;
  int* __retval1383;
  this1381 = v1378;
  __n1382 = v1379;
  struct std___Vector_base_int__std__allocator_int__* t1384 = this1381;
  unsigned long t1385 = __n1382;
  unsigned long c1386 = 0;
  _Bool c1387 = ((t1385 != c1386)) ? 1 : 0;
  int* ternary1388;
  if (c1387) {
    struct std__allocator_int_* base1389 = (struct std__allocator_int_*)((char *)&(t1384->_M_impl) + 0);
    unsigned long t1390 = __n1382;
    int* r1391 = std__allocator_traits_std__allocator_int_____allocate(base1389, t1390);
    ternary1388 = (int*)r1391;
  } else {
    int* c1392 = ((void*)0);
    ternary1388 = (int*)c1392;
  }
  __retval1383 = ternary1388;
  int* t1393 = __retval1383;
  return t1393;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v1394, unsigned long* v1395) {
bb1396:
  unsigned long* __a1397;
  unsigned long* __b1398;
  unsigned long* __retval1399;
  __a1397 = v1394;
  __b1398 = v1395;
    unsigned long* t1400 = __b1398;
    unsigned long t1401 = *t1400;
    unsigned long* t1402 = __a1397;
    unsigned long t1403 = *t1402;
    _Bool c1404 = ((t1401 < t1403)) ? 1 : 0;
    if (c1404) {
      unsigned long* t1405 = __b1398;
      __retval1399 = t1405;
      unsigned long* t1406 = __retval1399;
      return t1406;
    }
  unsigned long* t1407 = __a1397;
  __retval1399 = t1407;
  unsigned long* t1408 = __retval1399;
  return t1408;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v1409) {
bb1410:
  struct std__allocator_int_* __a1411;
  unsigned long __retval1412;
  unsigned long __diffmax1413;
  unsigned long __allocmax1414;
  __a1411 = v1409;
  unsigned long c1415 = 2305843009213693951;
  __diffmax1413 = c1415;
  unsigned long c1416 = 4611686018427387903;
  __allocmax1414 = c1416;
  unsigned long* r1417 = unsigned_long_const__std__min_unsigned_long_(&__diffmax1413, &__allocmax1414);
  unsigned long t1418 = *r1417;
  __retval1412 = t1418;
  unsigned long t1419 = __retval1412;
  return t1419;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v1420, struct std__allocator_int_* v1421) {
bb1422:
  struct std__allocator_int_* this1423;
  struct std__allocator_int_* __a1424;
  this1423 = v1420;
  __a1424 = v1421;
  struct std__allocator_int_* t1425 = this1423;
  struct std____new_allocator_int_* base1426 = (struct std____new_allocator_int_*)((char *)t1425 + 0);
  struct std__allocator_int_* t1427 = __a1424;
  struct std____new_allocator_int_* base1428 = (struct std____new_allocator_int_*)((char *)t1427 + 0);
  std____new_allocator_int_____new_allocator(base1426, base1428);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v1429, struct std__allocator_int_* v1430) {
bb1431:
  unsigned long __n1432;
  struct std__allocator_int_* __a1433;
  unsigned long __retval1434;
  __n1432 = v1429;
  __a1433 = v1430;
    struct std__allocator_int_ ref_tmp01435;
    _Bool tmp_exprcleanup1436;
    unsigned long t1437 = __n1432;
    struct std__allocator_int_* t1438 = __a1433;
    std__allocator_int___allocator(&ref_tmp01435, t1438);
      unsigned long r1439 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp01435);
      _Bool c1440 = ((t1437 > r1439)) ? 1 : 0;
      tmp_exprcleanup1436 = c1440;
    {
      std__allocator_int____allocator(&ref_tmp01435);
    }
    _Bool t1441 = tmp_exprcleanup1436;
    if (t1441) {
      char* cast1442 = (char*)&(_str_7);
      std____throw_length_error(cast1442);
    }
  unsigned long t1443 = __n1432;
  __retval1434 = t1443;
  unsigned long t1444 = __retval1434;
  return t1444;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v1445) {
bb1446:
  struct std___Vector_base_int__std__allocator_int__* this1447;
  struct std__allocator_int_* __retval1448;
  this1447 = v1445;
  struct std___Vector_base_int__std__allocator_int__* t1449 = this1447;
  struct std__allocator_int_* base1450 = (struct std__allocator_int_*)((char *)&(t1449->_M_impl) + 0);
  __retval1448 = base1450;
  struct std__allocator_int_* t1451 = __retval1448;
  return t1451;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1452:
  _Bool __retval1453;
    _Bool c1454 = 0;
    __retval1453 = c1454;
    _Bool t1455 = __retval1453;
    return t1455;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1456, int** v1457) {
bb1458:
  struct std___UninitDestroyGuard_int____void_* this1459;
  int** __first1460;
  this1459 = v1456;
  __first1460 = v1457;
  struct std___UninitDestroyGuard_int____void_* t1461 = this1459;
  int** t1462 = __first1460;
  int* t1463 = *t1462;
  t1461->_M_first = t1463;
  int** t1464 = __first1460;
  t1461->_M_cur = t1464;
  return;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v1465, int* v1466) {
bb1467:
  int* __location1468;
  int* __args1469;
  int* __retval1470;
  void* __loc1471;
  __location1468 = v1465;
  __args1469 = v1466;
  int* t1472 = __location1468;
  void* cast1473 = (void*)t1472;
  __loc1471 = cast1473;
    void* t1474 = __loc1471;
    int* cast1475 = (int*)t1474;
    int* t1476 = __args1469;
    int t1477 = *t1476;
    *cast1475 = t1477;
    __retval1470 = cast1475;
    int* t1478 = __retval1470;
    return t1478;
  abort();
}

// function: _ZSt10_ConstructIiJRiEEvPT_DpOT0_
void void_std___Construct_int__int__(int* v1479, int* v1480) {
bb1481:
  int* __p1482;
  int* __args1483;
  __p1482 = v1479;
  __args1483 = v1480;
    _Bool r1484 = std____is_constant_evaluated();
    if (r1484) {
      int* t1485 = __p1482;
      int* t1486 = __args1483;
      int* r1487 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t1485, t1486);
      return;
    }
  int* t1488 = __p1482;
  void* cast1489 = (void*)t1488;
  int* cast1490 = (int*)cast1489;
  int* t1491 = __args1483;
  int t1492 = *t1491;
  *cast1490 = t1492;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v1493) {
bb1494:
  struct std___UninitDestroyGuard_int____void_* this1495;
  this1495 = v1493;
  struct std___UninitDestroyGuard_int____void_* t1496 = this1495;
  int** c1497 = ((void*)0);
  t1496->_M_cur = c1497;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1498) {
bb1499:
  struct std___UninitDestroyGuard_int____void_* this1500;
  this1500 = v1498;
  struct std___UninitDestroyGuard_int____void_* t1501 = this1500;
    int** t1502 = t1501->_M_cur;
    int** c1503 = ((void*)0);
    _Bool c1504 = ((t1502 != c1503)) ? 1 : 0;
    if (c1504) {
      int* t1505 = t1501->_M_first;
      int** t1506 = t1501->_M_cur;
      int* t1507 = *t1506;
      void_std___Destroy_int__(t1505, t1507);
    }
  return;
}

// function: _ZSt16__do_uninit_copyIPiS0_S0_ET1_T_T0_S1_
int* int__std____do_uninit_copy_int___int___int__(int* v1508, int* v1509, int* v1510) {
bb1511:
  int* __first1512;
  int* __last1513;
  int* __result1514;
  int* __retval1515;
  struct std___UninitDestroyGuard_int____void_ __guard1516;
  __first1512 = v1508;
  __last1513 = v1509;
  __result1514 = v1510;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard1516, &__result1514);
      while (1) {
        int* t1518 = __first1512;
        int* t1519 = __last1513;
        _Bool c1520 = ((t1518 != t1519)) ? 1 : 0;
        if (!c1520) break;
        int* t1521 = __result1514;
        int* t1522 = __first1512;
        void_std___Construct_int__int__(t1521, t1522);
      for_step1517: ;
        int* t1523 = __first1512;
        int c1524 = 1;
        int* ptr1525 = &(t1523)[c1524];
        __first1512 = ptr1525;
        int* t1526 = __result1514;
        int c1527 = 1;
        int* ptr1528 = &(t1526)[c1527];
        __result1514 = ptr1528;
      }
    std___UninitDestroyGuard_int___void___release(&__guard1516);
    int* t1529 = __result1514;
    __retval1515 = t1529;
    int* t1530 = __retval1515;
    int* ret_val1531 = t1530;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1516);
    }
    return ret_val1531;
  abort();
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v1532) {
bb1533:
  int* __it1534;
  int* __retval1535;
  __it1534 = v1532;
  int* t1536 = __it1534;
  __retval1535 = t1536;
  int* t1537 = __retval1535;
  return t1537;
}

// function: _ZSt18uninitialized_copyIPiS0_ET0_T_S2_S1_
int* int__std__uninitialized_copy_int___int__(int* v1538, int* v1539, int* v1540) {
bb1541:
  int* __first1542;
  int* __last1543;
  int* __result1544;
  int* __retval1545;
  __first1542 = v1538;
  __last1543 = v1539;
  __result1544 = v1540;
      long __n1546;
      int* t1547 = __last1543;
      int* t1548 = __first1542;
      long diff1549 = t1547 - t1548;
      __n1546 = diff1549;
        long t1550 = __n1546;
        long c1551 = 0;
        _Bool c1552 = ((t1550 > c1551)) ? 1 : 0;
        if (c1552) {
          int* t1553 = __result1544;
          int* r1554 = int__std____niter_base_int__(t1553);
          void* cast1555 = (void*)r1554;
          int* t1556 = __first1542;
          int* r1557 = int__std____niter_base_int__(t1556);
          void* cast1558 = (void*)r1557;
          long t1559 = __n1546;
          unsigned long cast1560 = (unsigned long)t1559;
          unsigned long c1561 = 4;
          unsigned long b1562 = cast1560 * c1561;
          void* r1563 = memcpy(cast1555, cast1558, b1562);
          long t1564 = __n1546;
          int* t1565 = __result1544;
          int* ptr1566 = &(t1565)[t1564];
          __result1544 = ptr1566;
        }
      int* t1567 = __result1544;
      __retval1545 = t1567;
      int* t1568 = __retval1545;
      return t1568;
  abort();
}

// function: _ZSt22__uninitialized_copy_aIPiS0_S0_iET1_T_T0_S1_RSaIT2_E
int* int__std____uninitialized_copy_a_int___int___int___int_(int* v1569, int* v1570, int* v1571, struct std__allocator_int_* v1572) {
bb1573:
  int* __first1574;
  int* __last1575;
  int* __result1576;
  struct std__allocator_int_* unnamed1577;
  int* __retval1578;
  __first1574 = v1569;
  __last1575 = v1570;
  __result1576 = v1571;
  unnamed1577 = v1572;
    _Bool r1579 = std__is_constant_evaluated();
    if (r1579) {
      int* t1580 = __first1574;
      int* t1581 = __last1575;
      int* t1582 = __result1576;
      int* r1583 = int__std____do_uninit_copy_int___int___int__(t1580, t1581, t1582);
      __retval1578 = r1583;
      int* t1584 = __retval1578;
      return t1584;
    }
    int* t1585 = __first1574;
    int* t1586 = __last1575;
    int* t1587 = __result1576;
    int* r1588 = int__std__uninitialized_copy_int___int__(t1585, t1586, t1587);
    __retval1578 = r1588;
    int* t1589 = __retval1578;
    return t1589;
  abort();
}

// function: _ZNSt6vectorIiSaIiEE21_M_range_initialize_nIPiS3_EEvT_T0_m
void void_std__vector_int__std__allocator_int______M_range_initialize_n_int___int__(struct std__vector_int__std__allocator_int__* v1590, int* v1591, int* v1592, unsigned long v1593) {
bb1594:
  struct std__vector_int__std__allocator_int__* this1595;
  int* __first1596;
  int* __last1597;
  unsigned long __n1598;
  int* __start1599;
  this1595 = v1590;
  __first1596 = v1591;
  __last1597 = v1592;
  __n1598 = v1593;
  struct std__vector_int__std__allocator_int__* t1600 = this1595;
  struct std___Vector_base_int__std__allocator_int__* base1601 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1600 + 0);
  unsigned long t1602 = __n1598;
  struct std___Vector_base_int__std__allocator_int__* base1603 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1600 + 0);
  struct std__allocator_int_* r1604 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1603);
  unsigned long r1605 = std__vector_int__std__allocator_int______S_check_init_len(t1602, r1604);
  int* r1606 = std___Vector_base_int__std__allocator_int______M_allocate(base1601, r1605);
  __start1599 = r1606;
  int* t1607 = __start1599;
  struct std___Vector_base_int__std__allocator_int__* base1608 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1600 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1609 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1608->_M_impl) + 0);
  base1609->_M_finish = t1607;
  struct std___Vector_base_int__std__allocator_int__* base1610 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1600 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1611 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1610->_M_impl) + 0);
  base1611->_M_start = t1607;
  int* t1612 = __start1599;
  unsigned long t1613 = __n1598;
  int* ptr1614 = &(t1612)[t1613];
  struct std___Vector_base_int__std__allocator_int__* base1615 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1600 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1616 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1615->_M_impl) + 0);
  base1616->_M_end_of_storage = ptr1614;
  int* t1617 = __first1596;
  int* t1618 = __last1597;
  int* t1619 = __start1599;
  struct std___Vector_base_int__std__allocator_int__* base1620 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1600 + 0);
  struct std__allocator_int_* r1621 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1620);
  int* r1622 = int__std____uninitialized_copy_a_int___int___int___int_(t1617, t1618, t1619, r1621);
  struct std___Vector_base_int__std__allocator_int__* base1623 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1600 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1624 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1623->_M_impl) + 0);
  base1624->_M_finish = r1622;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1625, int* v1626, unsigned long v1627) {
bb1628:
  struct std____new_allocator_int_* this1629;
  int* __p1630;
  unsigned long __n1631;
  this1629 = v1625;
  __p1630 = v1626;
  __n1631 = v1627;
  struct std____new_allocator_int_* t1632 = this1629;
    unsigned long c1633 = 4;
    unsigned long c1634 = 16;
    _Bool c1635 = ((c1633 > c1634)) ? 1 : 0;
    if (c1635) {
      int* t1636 = __p1630;
      void* cast1637 = (void*)t1636;
      unsigned long t1638 = __n1631;
      unsigned long c1639 = 4;
      unsigned long b1640 = t1638 * c1639;
      unsigned long c1641 = 4;
      operator_delete_3(cast1637, b1640, c1641);
      return;
    }
  int* t1642 = __p1630;
  void* cast1643 = (void*)t1642;
  unsigned long t1644 = __n1631;
  unsigned long c1645 = 4;
  unsigned long b1646 = t1644 * c1645;
  operator_delete_2(cast1643, b1646);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1647, int* v1648, unsigned long v1649) {
bb1650:
  struct std__allocator_int_* this1651;
  int* __p1652;
  unsigned long __n1653;
  this1651 = v1647;
  __p1652 = v1648;
  __n1653 = v1649;
  struct std__allocator_int_* t1654 = this1651;
    _Bool r1655 = std____is_constant_evaluated();
    if (r1655) {
      int* t1656 = __p1652;
      void* cast1657 = (void*)t1656;
      operator_delete(cast1657);
      return;
    }
  struct std____new_allocator_int_* base1658 = (struct std____new_allocator_int_*)((char *)t1654 + 0);
  int* t1659 = __p1652;
  unsigned long t1660 = __n1653;
  std____new_allocator_int___deallocate(base1658, t1659, t1660);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1661, int* v1662, unsigned long v1663) {
bb1664:
  struct std__allocator_int_* __a1665;
  int* __p1666;
  unsigned long __n1667;
  __a1665 = v1661;
  __p1666 = v1662;
  __n1667 = v1663;
  struct std__allocator_int_* t1668 = __a1665;
  int* t1669 = __p1666;
  unsigned long t1670 = __n1667;
  std__allocator_int___deallocate(t1668, t1669, t1670);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v1671, int* v1672, unsigned long v1673) {
bb1674:
  struct std___Vector_base_int__std__allocator_int__* this1675;
  int* __p1676;
  unsigned long __n1677;
  this1675 = v1671;
  __p1676 = v1672;
  __n1677 = v1673;
  struct std___Vector_base_int__std__allocator_int__* t1678 = this1675;
    int* t1679 = __p1676;
    _Bool cast1680 = (_Bool)t1679;
    if (cast1680) {
      struct std__allocator_int_* base1681 = (struct std__allocator_int_*)((char *)&(t1678->_M_impl) + 0);
      int* t1682 = __p1676;
      unsigned long t1683 = __n1677;
      std__allocator_traits_std__allocator_int_____deallocate(base1681, t1682, t1683);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1684) {
bb1685:
  struct std___Vector_base_int__std__allocator_int__* this1686;
  this1686 = v1684;
  struct std___Vector_base_int__std__allocator_int__* t1687 = this1686;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1688 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1687->_M_impl) + 0);
    int* t1689 = base1688->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1690 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1687->_M_impl) + 0);
    int* t1691 = base1690->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1692 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1687->_M_impl) + 0);
    int* t1693 = base1692->_M_start;
    long diff1694 = t1691 - t1693;
    unsigned long cast1695 = (unsigned long)diff1694;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1687, t1689, cast1695);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1687->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1696, struct std____new_allocator_int_* v1697) {
bb1698:
  struct std____new_allocator_int_* this1699;
  struct std____new_allocator_int_* unnamed1700;
  this1699 = v1696;
  unnamed1700 = v1697;
  struct std____new_allocator_int_* t1701 = this1699;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1702) {
bb1703:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1704;
  this1704 = v1702;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1705 = this1704;
  int* c1706 = ((void*)0);
  t1705->_M_start = c1706;
  int* c1707 = ((void*)0);
  t1705->_M_finish = c1707;
  int* c1708 = ((void*)0);
  t1705->_M_end_of_storage = c1708;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1709) {
bb1710:
  int* __location1711;
  __location1711 = v1709;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1712, int* v1713) {
bb1714:
  int* __first1715;
  int* __last1716;
  __first1715 = v1712;
  __last1716 = v1713;
      _Bool r1717 = std____is_constant_evaluated();
      if (r1717) {
          while (1) {
            int* t1719 = __first1715;
            int* t1720 = __last1716;
            _Bool c1721 = ((t1719 != t1720)) ? 1 : 0;
            if (!c1721) break;
            int* t1722 = __first1715;
            void_std__destroy_at_int_(t1722);
          for_step1718: ;
            int* t1723 = __first1715;
            int c1724 = 1;
            int* ptr1725 = &(t1723)[c1724];
            __first1715 = ptr1725;
          }
      }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* v1726, unsigned long v1727) {
bb1728:
  struct std___Vector_base_int__std__allocator_int__* this1729;
  unsigned long __n1730;
  this1729 = v1726;
  __n1730 = v1727;
  struct std___Vector_base_int__std__allocator_int__* t1731 = this1729;
  unsigned long t1732 = __n1730;
  int* r1733 = std___Vector_base_int__std__allocator_int______M_allocate(t1731, t1732);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1734 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1731->_M_impl) + 0);
  base1734->_M_start = r1733;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1735 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1731->_M_impl) + 0);
  int* t1736 = base1735->_M_start;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1737 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1731->_M_impl) + 0);
  base1737->_M_finish = t1736;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1738 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1731->_M_impl) + 0);
  int* t1739 = base1738->_M_start;
  unsigned long t1740 = __n1730;
  int* ptr1741 = &(t1739)[t1740];
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1742 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1731->_M_impl) + 0);
  base1742->_M_end_of_storage = ptr1741;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_
void std___Vector_base_int__std__allocator_int______Vector_base_2(struct std___Vector_base_int__std__allocator_int__* v1743, unsigned long v1744, struct std__allocator_int_* v1745) {
bb1746:
  struct std___Vector_base_int__std__allocator_int__* this1747;
  unsigned long __n1748;
  struct std__allocator_int_* __a1749;
  this1747 = v1743;
  __n1748 = v1744;
  __a1749 = v1745;
  struct std___Vector_base_int__std__allocator_int__* t1750 = this1747;
  struct std__allocator_int_* t1751 = __a1749;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t1750->_M_impl, t1751);
    unsigned long t1752 = __n1748;
    std___Vector_base_int__std__allocator_int______M_create_storage(t1750, t1752);
  return;
}

// function: _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v1753) {
bb1754:
  int* __location1755;
  int* __retval1756;
  void* __loc1757;
  __location1755 = v1753;
  int* t1758 = __location1755;
  void* cast1759 = (void*)t1758;
  __loc1757 = cast1759;
    void* t1760 = __loc1757;
    int* cast1761 = (int*)t1760;
    int c1762 = 0;
    *cast1761 = c1762;
    __retval1756 = cast1761;
    int* t1763 = __retval1756;
    return t1763;
  abort();
}

// function: _ZSt10_ConstructIiJEEvPT_DpOT0_
void void_std___Construct_int_(int* v1764) {
bb1765:
  int* __p1766;
  __p1766 = v1764;
    _Bool r1767 = std____is_constant_evaluated();
    if (r1767) {
      int* t1768 = __p1766;
      int* r1769 = _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t1768);
      return;
    }
  int* t1770 = __p1766;
  void* cast1771 = (void*)t1770;
  int* cast1772 = (int*)cast1771;
  int c1773 = 0;
  *cast1772 = c1773;
  return;
}

// function: _ZNSt27__uninitialized_default_n_1ILb0EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(int* v1774, unsigned long v1775) {
bb1776:
  int* __first1777;
  unsigned long __n1778;
  int* __retval1779;
  struct std___UninitDestroyGuard_int____void_ __guard1780;
  __first1777 = v1774;
  __n1778 = v1775;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard1780, &__first1777);
      while (1) {
        unsigned long t1782 = __n1778;
        unsigned long c1783 = 0;
        _Bool c1784 = ((t1782 > c1783)) ? 1 : 0;
        if (!c1784) break;
        int* t1785 = __first1777;
        void_std___Construct_int_(t1785);
      for_step1781: ;
        unsigned long t1786 = __n1778;
        unsigned long u1787 = t1786 - 1;
        __n1778 = u1787;
        int* t1788 = __first1777;
        int c1789 = 1;
        int* ptr1790 = &(t1788)[c1789];
        __first1777 = ptr1790;
      }
    std___UninitDestroyGuard_int___void___release(&__guard1780);
    int* t1791 = __first1777;
    __retval1779 = t1791;
    int* t1792 = __retval1779;
    int* ret_val1793 = t1792;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1780);
    }
    return ret_val1793;
  abort();
}

// function: _ZSt9__fill_a1IPiiEvT_S1_RKT0_
void void_std____fill_a1_int___int_(int* v1794, int* v1795, int* v1796) {
bb1797:
  int* __first1798;
  int* __last1799;
  int* __value1800;
  _Bool __load_outside_loop1801;
  int __val1802;
  __first1798 = v1794;
  __last1799 = v1795;
  __value1800 = v1796;
  _Bool c1803 = 1;
  __load_outside_loop1801 = c1803;
  int* t1804 = __value1800;
  int t1805 = *t1804;
  __val1802 = t1805;
    while (1) {
      int* t1807 = __first1798;
      int* t1808 = __last1799;
      _Bool c1809 = ((t1807 != t1808)) ? 1 : 0;
      if (!c1809) break;
      int t1810 = __val1802;
      int* t1811 = __first1798;
      *t1811 = t1810;
    for_step1806: ;
      int* t1812 = __first1798;
      int c1813 = 1;
      int* ptr1814 = &(t1812)[c1813];
      __first1798 = ptr1814;
    }
  return;
}

// function: _ZSt8__fill_aIPiiEvT_S1_RKT0_
void void_std____fill_a_int___int_(int* v1815, int* v1816, int* v1817) {
bb1818:
  int* __first1819;
  int* __last1820;
  int* __value1821;
  __first1819 = v1815;
  __last1820 = v1816;
  __value1821 = v1817;
  int* t1822 = __first1819;
  int* t1823 = __last1820;
  int* t1824 = __value1821;
  void_std____fill_a1_int___int_(t1822, t1823, t1824);
  return;
}

// function: _ZSt10__fill_n_aIPimiET_S1_T0_RKT1_St26random_access_iterator_tag
int* int__std____fill_n_a_int___unsigned_long__int_(int* v1825, unsigned long v1826, int* v1827, struct std__random_access_iterator_tag v1828) {
bb1829:
  int* __first1830;
  unsigned long __n1831;
  int* __value1832;
  struct std__random_access_iterator_tag unnamed1833;
  int* __retval1834;
  __first1830 = v1825;
  __n1831 = v1826;
  __value1832 = v1827;
  unnamed1833 = v1828;
    unsigned long t1835 = __n1831;
    unsigned long c1836 = 0;
    _Bool c1837 = ((t1835 <= c1836)) ? 1 : 0;
    if (c1837) {
      int* t1838 = __first1830;
      __retval1834 = t1838;
      int* t1839 = __retval1834;
      return t1839;
    }
  int* t1840 = __first1830;
  int* t1841 = __first1830;
  unsigned long t1842 = __n1831;
  int* ptr1843 = &(t1841)[t1842];
  int* t1844 = __value1832;
  void_std____fill_a_int___int_(t1840, ptr1843, t1844);
  int* t1845 = __first1830;
  unsigned long t1846 = __n1831;
  int* ptr1847 = &(t1845)[t1846];
  __retval1834 = ptr1847;
  int* t1848 = __retval1834;
  return t1848;
}

// function: _ZSt17__size_to_integerm
unsigned long std____size_to_integer(unsigned long v1849) {
bb1850:
  unsigned long __n1851;
  unsigned long __retval1852;
  __n1851 = v1849;
  unsigned long t1853 = __n1851;
  __retval1852 = t1853;
  unsigned long t1854 = __retval1852;
  return t1854;
}

// function: _ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** v1855) {
bb1856:
  int** unnamed1857;
  struct std__random_access_iterator_tag __retval1858;
  unnamed1857 = v1855;
  struct std__random_access_iterator_tag t1859 = __retval1858;
  return t1859;
}

// function: _ZSt6fill_nIPimiET_S1_T0_RKT1_
int* int__std__fill_n_int___unsigned_long__int_(int* v1860, unsigned long v1861, int* v1862) {
bb1863:
  int* __first1864;
  unsigned long __n1865;
  int* __value1866;
  int* __retval1867;
  struct std__random_access_iterator_tag agg_tmp01868;
  __first1864 = v1860;
  __n1865 = v1861;
  __value1866 = v1862;
  int* t1869 = __first1864;
  unsigned long t1870 = __n1865;
  unsigned long r1871 = std____size_to_integer(t1870);
  int* t1872 = __value1866;
  struct std__random_access_iterator_tag r1873 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first1864);
  agg_tmp01868 = r1873;
  struct std__random_access_iterator_tag t1874 = agg_tmp01868;
  int* r1875 = int__std____fill_n_a_int___unsigned_long__int_(t1869, r1871, t1872, t1874);
  __retval1867 = r1875;
  int* t1876 = __retval1867;
  return t1876;
}

// function: _ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(int* v1877, unsigned long v1878) {
bb1879:
  int* __first1880;
  unsigned long __n1881;
  int* __retval1882;
  __first1880 = v1877;
  __n1881 = v1878;
    unsigned long t1883 = __n1881;
    unsigned long c1884 = 0;
    _Bool c1885 = ((t1883 > c1884)) ? 1 : 0;
    if (c1885) {
      int* __val1886;
      int* t1887 = __first1880;
      __val1886 = t1887;
      int* t1888 = __val1886;
      void_std___Construct_int_(t1888);
      int* t1889 = __first1880;
      int c1890 = 1;
      int* ptr1891 = &(t1889)[c1890];
      __first1880 = ptr1891;
      int* t1892 = __first1880;
      unsigned long t1893 = __n1881;
      unsigned long c1894 = 1;
      unsigned long b1895 = t1893 - c1894;
      int* t1896 = __val1886;
      int* r1897 = int__std__fill_n_int___unsigned_long__int_(t1892, b1895, t1896);
      __first1880 = r1897;
    }
  int* t1898 = __first1880;
  __retval1882 = t1898;
  int* t1899 = __retval1882;
  return t1899;
}

// function: _ZSt25__uninitialized_default_nIPimET_S1_T0_
int* int__std____uninitialized_default_n_int___unsigned_long_(int* v1900, unsigned long v1901) {
bb1902:
  int* __first1903;
  unsigned long __n1904;
  int* __retval1905;
  _Bool __can_fill1906;
  __first1903 = v1900;
  __n1904 = v1901;
    _Bool r1907 = std__is_constant_evaluated();
    if (r1907) {
      int* t1908 = __first1903;
      unsigned long t1909 = __n1904;
      int* r1910 = int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(t1908, t1909);
      __retval1905 = r1910;
      int* t1911 = __retval1905;
      return t1911;
    }
  _Bool c1912 = 1;
  __can_fill1906 = c1912;
  int* t1913 = __first1903;
  unsigned long t1914 = __n1904;
  int* r1915 = int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(t1913, t1914);
  __retval1905 = r1915;
  int* t1916 = __retval1905;
  return t1916;
}

// function: _ZSt27__uninitialized_default_n_aIPimiET_S1_T0_RSaIT1_E
int* int__std____uninitialized_default_n_a_int___unsigned_long__int_(int* v1917, unsigned long v1918, struct std__allocator_int_* v1919) {
bb1920:
  int* __first1921;
  unsigned long __n1922;
  struct std__allocator_int_* unnamed1923;
  int* __retval1924;
  __first1921 = v1917;
  __n1922 = v1918;
  unnamed1923 = v1919;
  int* t1925 = __first1921;
  unsigned long t1926 = __n1922;
  int* r1927 = int__std____uninitialized_default_n_int___unsigned_long_(t1925, t1926);
  __retval1924 = r1927;
  int* t1928 = __retval1924;
  return t1928;
}

// function: _ZNSt6vectorIiSaIiEE21_M_default_initializeEm
void std__vector_int__std__allocator_int______M_default_initialize(struct std__vector_int__std__allocator_int__* v1929, unsigned long v1930) {
bb1931:
  struct std__vector_int__std__allocator_int__* this1932;
  unsigned long __n1933;
  this1932 = v1929;
  __n1933 = v1930;
  struct std__vector_int__std__allocator_int__* t1934 = this1932;
  struct std___Vector_base_int__std__allocator_int__* base1935 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1934 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1936 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1935->_M_impl) + 0);
  int* t1937 = base1936->_M_start;
  unsigned long t1938 = __n1933;
  struct std___Vector_base_int__std__allocator_int__* base1939 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1934 + 0);
  struct std__allocator_int_* r1940 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1939);
  int* r1941 = int__std____uninitialized_default_n_a_int___unsigned_long__int_(t1937, t1938, r1940);
  struct std___Vector_base_int__std__allocator_int__* base1942 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1934 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1943 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1942->_M_impl) + 0);
  base1943->_M_finish = r1941;
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1944, int* v1945, struct std__allocator_int_* v1946) {
bb1947:
  int* __first1948;
  int* __last1949;
  struct std__allocator_int_* unnamed1950;
  __first1948 = v1944;
  __last1949 = v1945;
  unnamed1950 = v1946;
  int* t1951 = __first1948;
  int* t1952 = __last1949;
  void_std___Destroy_int__(t1951, t1952);
  return;
}

