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
char _str_1[38] = "Vector v before removing all 10s:\n   ";
char _str_2[38] = "\nVector v after removing all 10s:\n   ";
char _str_3[37] = "\n\nVector v2 before removing all 10s ";
char _str_4[17] = "and copying:\n   ";
char _str_5[46] = "\nVector c after removing all 10s from v2:\n   ";
char _str_6[41] = "\n\nVector v3 before removing all elements";
char _str_7[21] = "\ngreater than 9:\n   ";
char _str_8[39] = "\nVector v3 after removing all elements";
char _str_9[41] = "\n\nVector v4 before removing all elements";
char _str_10[33] = "\ngreater than 9 and copying:\n   ";
char _str_11[39] = "\nVector c2 after removing all elements";
char _str_12[29] = "\ngreater than 9 from v4:\n   ";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_13[49] = "cannot create std::vector larger than max_size()";
char _str_14[98] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_uninitialized.h";
char __PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_[140] = "_ForwardIterator std::__do_uninit_fill_n(_ForwardIterator, _Size _Tp &) [_ForwardIterator = int *, _Size = unsigned long, _Tp = int]";
char _str_15[9] = "__n >= 0";
void std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator_2(struct std__ostream_iterator_int__char__std__char_traits_char__* p0, struct std__basic_ostream_char__std__char_traits_char__* p1, char* p2);
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector_int___void_(struct std__vector_int__std__allocator_int__* p0, int* p1, int* p2, struct std__allocator_int_* p3);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
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
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____find_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_equals_val_int_const___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____ops___Iter_equals_val_const_int_ p2);
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
_Bool bool___gnu_cxx____ops___Iter_equals_val_int_const___operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____ops___Iter_equals_val_const_int_* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1);
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____remove_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_equals_val_int_const___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____ops___Iter_equals_val_const_int_ p2);
void __gnu_cxx____ops___Iter_equals_val_int_const____Iter_equals_val(struct __gnu_cxx____ops___Iter_equals_val_const_int_* p0, int* p1);
struct __gnu_cxx____ops___Iter_equals_val_const_int_ __gnu_cxx____ops___Iter_equals_val_int_const____gnu_cxx____ops____iter_equals_val_int_const_(int* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__remove___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, int* p2, struct std__allocator_int_* p3);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____remove_copy_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_equals_val_int_const___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, struct __gnu_cxx____ops___Iter_equals_val_const_int_ p3);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__remove_copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, int* p3);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____find_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_pred_bool_____int_______gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_pred_bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____ops___Iter_pred_bool_____int__ p2);
_Bool bool___gnu_cxx____ops___Iter_pred_bool_____int____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____ops___Iter_pred_bool_____int__* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____remove_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_pred_bool_____int_______gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_pred_bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____ops___Iter_pred_bool_____int__ p2);
void __gnu_cxx____ops___Iter_pred_bool_____int_____Iter_pred_bool____(struct __gnu_cxx____ops___Iter_pred_bool_____int__* p0, void* p1);
struct __gnu_cxx____ops___Iter_pred_bool_____int__ __gnu_cxx____ops___Iter_pred_bool_____int_____gnu_cxx____ops____pred_iter_bool_____int___bool____(void* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__remove_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool_____int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, void* p2);
_Bool greater9(int p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____remove_copy_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_pred_bool_____int_______gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_pred_bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, struct __gnu_cxx____ops___Iter_pred_bool_____int__ p3);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__remove_copy_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool_____int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, void* p3);
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
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* p0, int* p1);
void void_std___Construct_int__int_const__(int* p0, int* p1);
int* int__std____do_uninit_fill_n_int___unsigned_long__int_(int* p0, unsigned long p1, int* p2);
int* int__std__uninitialized_fill_n_int___unsigned_long__int_(int* p0, unsigned long p1, int* p2);
int* int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(int* p0, unsigned long p1, int* p2, struct std__allocator_int_* p3);
void std__vector_int__std__allocator_int______M_fill_initialize(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, int* p2);
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

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2Ev
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v40) {
bb41:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this42;
  this42 = v40;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t43 = this42;
  int* c44 = ((void*)0);
  t43->_M_current = c44;
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v45, int v46) {
bb47:
  int __a48;
  int __b49;
  int __retval50;
  __a48 = v45;
  __b49 = v46;
  int t51 = __a48;
  int t52 = __b49;
  int b53 = t51 | t52;
  __retval50 = b53;
  int t54 = __retval50;
  return t54;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v55) {
bb56:
  struct std__basic_ios_char__std__char_traits_char__* this57;
  int __retval58;
  this57 = v55;
  struct std__basic_ios_char__std__char_traits_char__* t59 = this57;
  struct std__ios_base* base60 = (struct std__ios_base*)((char *)t59 + 0);
  int t61 = base60->_M_streambuf_state;
  __retval58 = t61;
  int t62 = __retval58;
  return t62;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v63, int v64) {
bb65:
  struct std__basic_ios_char__std__char_traits_char__* this66;
  int __state67;
  this66 = v63;
  __state67 = v64;
  struct std__basic_ios_char__std__char_traits_char__* t68 = this66;
  int r69 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t68);
  int t70 = __state67;
  int r71 = std__operator_(r69, t70);
  std__basic_ios_char__std__char_traits_char_____clear(t68, r71);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v72, char* v73) {
bb74:
  char* __c175;
  char* __c276;
  _Bool __retval77;
  __c175 = v72;
  __c276 = v73;
  char* t78 = __c175;
  char t79 = *t78;
  int cast80 = (int)t79;
  char* t81 = __c276;
  char t82 = *t81;
  int cast83 = (int)t82;
  _Bool c84 = ((cast80 == cast83)) ? 1 : 0;
  __retval77 = c84;
  _Bool t85 = __retval77;
  return t85;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v86) {
bb87:
  char* __p88;
  unsigned long __retval89;
  unsigned long __i90;
  __p88 = v86;
  unsigned long c91 = 0;
  __i90 = c91;
    char ref_tmp092;
    while (1) {
      unsigned long t93 = __i90;
      char* t94 = __p88;
      char* ptr95 = &(t94)[t93];
      char c96 = 0;
      ref_tmp092 = c96;
      _Bool r97 = __gnu_cxx__char_traits_char___eq(ptr95, &ref_tmp092);
      _Bool u98 = !r97;
      if (!u98) break;
      unsigned long t99 = __i90;
      unsigned long u100 = t99 + 1;
      __i90 = u100;
    }
  unsigned long t101 = __i90;
  __retval89 = t101;
  unsigned long t102 = __retval89;
  return t102;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v103) {
bb104:
  char* __s105;
  unsigned long __retval106;
  __s105 = v103;
    _Bool r107 = std____is_constant_evaluated();
    if (r107) {
      char* t108 = __s105;
      unsigned long r109 = __gnu_cxx__char_traits_char___length(t108);
      __retval106 = r109;
      unsigned long t110 = __retval106;
      return t110;
    }
  char* t111 = __s105;
  unsigned long r112 = strlen(t111);
  __retval106 = r112;
  unsigned long t113 = __retval106;
  return t113;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v114, char* v115) {
bb116:
  struct std__basic_ostream_char__std__char_traits_char__* __out117;
  char* __s118;
  struct std__basic_ostream_char__std__char_traits_char__* __retval119;
  __out117 = v114;
  __s118 = v115;
    char* t120 = __s118;
    _Bool cast121 = (_Bool)t120;
    _Bool u122 = !cast121;
    if (u122) {
      struct std__basic_ostream_char__std__char_traits_char__* t123 = __out117;
      void** v124 = (void**)t123;
      void* v125 = *((void**)v124);
      unsigned char* cast126 = (unsigned char*)v125;
      long c127 = -24;
      unsigned char* ptr128 = &(cast126)[c127];
      long* cast129 = (long*)ptr128;
      long t130 = *cast129;
      unsigned char* cast131 = (unsigned char*)t123;
      unsigned char* ptr132 = &(cast131)[t130];
      struct std__basic_ostream_char__std__char_traits_char__* cast133 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr132;
      struct std__basic_ios_char__std__char_traits_char__* cast134 = (struct std__basic_ios_char__std__char_traits_char__*)cast133;
      int t135 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast134, t135);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t136 = __out117;
      char* t137 = __s118;
      char* t138 = __s118;
      unsigned long r139 = std__char_traits_char___length(t138);
      long cast140 = (long)r139;
      struct std__basic_ostream_char__std__char_traits_char__* r141 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t136, t137, cast140);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t142 = __out117;
  __retval119 = t142;
  struct std__basic_ostream_char__std__char_traits_char__* t143 = __retval119;
  return t143;
}

// function: _ZSt12__niter_wrapISt16ostream_iteratorIicSt11char_traitsIcEEET_RKS4_S4_
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____niter_wrap_std__ostream_iterator_int__char__std__char_traits_char_____(struct std__ostream_iterator_int__char__std__char_traits_char__* v144, struct std__ostream_iterator_int__char__std__char_traits_char__ v145) {
bb146:
  struct std__ostream_iterator_int__char__std__char_traits_char__* unnamed147;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __res148;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __retval149;
  unnamed147 = v144;
  __res148 = v145;
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&__retval149, &__res148);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t150 = __retval149;
  return t150;
}

// function: _ZNSt16ostream_iteratorIicSt11char_traitsIcEEdeEv
struct std__ostream_iterator_int__char__std__char_traits_char__* std__ostream_iterator_int__char__std__char_traits_char_____operator__2(struct std__ostream_iterator_int__char__std__char_traits_char__* v151) {
bb152:
  struct std__ostream_iterator_int__char__std__char_traits_char__* this153;
  struct std__ostream_iterator_int__char__std__char_traits_char__* __retval154;
  this153 = v151;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t155 = this153;
  __retval154 = t155;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t156 = __retval154;
  return t156;
}

// function: _ZNSt16ostream_iteratorIicSt11char_traitsIcEEaSERKi
struct std__ostream_iterator_int__char__std__char_traits_char__* std__ostream_iterator_int__char__std__char_traits_char_____operator_(struct std__ostream_iterator_int__char__std__char_traits_char__* v157, int* v158) {
bb159:
  struct std__ostream_iterator_int__char__std__char_traits_char__* this160;
  int* __value161;
  struct std__ostream_iterator_int__char__std__char_traits_char__* __retval162;
  this160 = v157;
  __value161 = v158;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t163 = this160;
  struct std__basic_ostream_char__std__char_traits_char__* t164 = t163->_M_stream;
  int* t165 = __value161;
  int t166 = *t165;
  struct std__basic_ostream_char__std__char_traits_char__* r167 = std__ostream__operator__(t164, t166);
    char* t168 = t163->_M_string;
    _Bool cast169 = (_Bool)t168;
    if (cast169) {
      struct std__basic_ostream_char__std__char_traits_char__* t170 = t163->_M_stream;
      char* t171 = t163->_M_string;
      struct std__basic_ostream_char__std__char_traits_char__* r172 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(t170, t171);
    }
  __retval162 = t163;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t173 = __retval162;
  return t173;
}

// function: _ZSt12__assign_oneILb0ESt16ostream_iteratorIicSt11char_traitsIcEEPiEvRT0_RT1_
void void_std____assign_one_false__std__ostream_iterator_int__char__std__char_traits_char_____int__(struct std__ostream_iterator_int__char__std__char_traits_char__* v174, int** v175) {
bb176:
  struct std__ostream_iterator_int__char__std__char_traits_char__* __out177;
  int** __in178;
  __out177 = v174;
  __in178 = v175;
    int** t179 = __in178;
    int* t180 = *t179;
    struct std__ostream_iterator_int__char__std__char_traits_char__* t181 = __out177;
    struct std__ostream_iterator_int__char__std__char_traits_char__* r182 = std__ostream_iterator_int__char__std__char_traits_char_____operator__2(t181);
    struct std__ostream_iterator_int__char__std__char_traits_char__* r183 = std__ostream_iterator_int__char__std__char_traits_char_____operator_(r182, t180);
  return;
}

// function: _ZNSt16ostream_iteratorIicSt11char_traitsIcEEppEv
struct std__ostream_iterator_int__char__std__char_traits_char__* std__ostream_iterator_int__char__std__char_traits_char_____operator__(struct std__ostream_iterator_int__char__std__char_traits_char__* v184) {
bb185:
  struct std__ostream_iterator_int__char__std__char_traits_char__* this186;
  struct std__ostream_iterator_int__char__std__char_traits_char__* __retval187;
  this186 = v184;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t188 = this186;
  __retval187 = t188;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t189 = __retval187;
  return t189;
}

// function: _ZSt14__copy_move_a2ILb0EPiS0_St16ostream_iteratorIicSt11char_traitsIcEEET2_T0_T1_S5_
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a2_false__int___int___std__ostream_iterator_int__char__std__char_traits_char_____(int* v190, int* v191, struct std__ostream_iterator_int__char__std__char_traits_char__ v192) {
bb193:
  int* __first194;
  int* __last195;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __result196;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __retval197;
  __first194 = v190;
  __last195 = v191;
  __result196 = v192;
    while (1) {
      int* t199 = __first194;
      int* t200 = __last195;
      _Bool c201 = ((t199 != t200)) ? 1 : 0;
      if (!c201) break;
      void_std____assign_one_false__std__ostream_iterator_int__char__std__char_traits_char_____int__(&__result196, &__first194);
    for_step198: ;
      struct std__ostream_iterator_int__char__std__char_traits_char__* r202 = std__ostream_iterator_int__char__std__char_traits_char_____operator__(&__result196);
      int* t203 = __first194;
      int c204 = 1;
      int* ptr205 = &(t203)[c204];
      __first194 = ptr205;
    }
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&__retval197, &__result196);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t206 = __retval197;
  return t206;
}

// function: _ZSt14__copy_move_a1ILb0EPiSt16ostream_iteratorIicSt11char_traitsIcEEET1_T0_S6_S5_
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a1_false__int___std__ostream_iterator_int__char__std__char_traits_char_____(int* v207, int* v208, struct std__ostream_iterator_int__char__std__char_traits_char__ v209) {
bb210:
  int* __first211;
  int* __last212;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __result213;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __retval214;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp0215;
  __first211 = v207;
  __last212 = v208;
  __result213 = v209;
  int* t216 = __first211;
  int* t217 = __last212;
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp0215, &__result213);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t218 = agg_tmp0215;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r219 = std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a2_false__int___int___std__ostream_iterator_int__char__std__char_traits_char_____(t216, t217, t218);
  __retval214 = r219;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t220 = __retval214;
  return t220;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v221) {
bb222:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this223;
  int** __retval224;
  this223 = v221;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t225 = this223;
  __retval224 = &t225->_M_current;
  int** t226 = __retval224;
  return t226;
}

// function: _ZSt12__niter_baseIPiSt6vectorIiSaIiEEET_N9__gnu_cxx17__normal_iteratorIS4_T0_EE
int* int__std____niter_base_int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v227) {
bb228:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it229;
  int* __retval230;
  __it229 = v227;
  int** r231 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__it229);
  int* t232 = *r231;
  __retval230 = t232;
  int* t233 = __retval230;
  return t233;
}

// function: _ZSt12__niter_baseISt16ostream_iteratorIicSt11char_traitsIcEEET_S4_
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____niter_base_std__ostream_iterator_int__char__std__char_traits_char_____(struct std__ostream_iterator_int__char__std__char_traits_char__ v234) {
bb235:
  struct std__ostream_iterator_int__char__std__char_traits_char__ __it236;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __retval237;
  __it236 = v234;
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&__retval237, &__it236);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t238 = __retval237;
  return t238;
}

// function: _ZSt13__copy_move_aILb0EN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEESt16ostream_iteratorIicSt11char_traitsIcEEET1_T0_SC_SB_
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a_false____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v239, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v240, struct std__ostream_iterator_int__char__std__char_traits_char__ v241) {
bb242:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first243;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last244;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __result245;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __retval246;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp0247;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1248;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2249;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp3250;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp4251;
  __first243 = v239;
  __last244 = v240;
  __result245 = v241;
  agg_tmp1248 = __first243; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t252 = agg_tmp1248;
  int* r253 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t252);
  agg_tmp2249 = __last244; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t254 = agg_tmp2249;
  int* r255 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t254);
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp4251, &__result245);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t256 = agg_tmp4251;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r257 = std__ostream_iterator_int__char__std__char_traits_char____std____niter_base_std__ostream_iterator_int__char__std__char_traits_char_____(t256);
  agg_tmp3250 = r257;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t258 = agg_tmp3250;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r259 = std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a1_false__int___std__ostream_iterator_int__char__std__char_traits_char_____(r253, r255, t258);
  agg_tmp0247 = r259;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t260 = agg_tmp0247;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r261 = std__ostream_iterator_int__char__std__char_traits_char____std____niter_wrap_std__ostream_iterator_int__char__std__char_traits_char_____(&__result245, t260);
  __retval246 = r261;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t262 = __retval246;
  return t262;
}

// function: _ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEET_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v263) {
bb264:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it265;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval266;
  __it265 = v263;
  __retval266 = __it265; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t267 = __retval266;
  return t267;
}

// function: _ZSt4copyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEESt16ostream_iteratorIicSt11char_traitsIcEEET0_T_SC_SB_
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v268, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v269, struct std__ostream_iterator_int__char__std__char_traits_char__ v270) {
bb271:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first272;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last273;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __result274;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __retval275;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0276;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1277;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2278;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3279;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp4280;
  __first272 = v268;
  __last273 = v269;
  __result274 = v270;
  agg_tmp1277 = __first272; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t281 = agg_tmp1277;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r282 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t281);
  agg_tmp0276 = r282;
  agg_tmp3279 = __last273; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t283 = agg_tmp3279;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r284 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t283);
  agg_tmp2278 = r284;
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp4280, &__result274);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t285 = agg_tmp0276;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t286 = agg_tmp2278;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t287 = agg_tmp4280;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r288 = std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a_false____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(t285, t286, t287);
  __retval275 = r288;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t289 = __retval275;
  return t289;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v290, int** v291) {
bb292:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this293;
  int** __i294;
  this293 = v290;
  __i294 = v291;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t295 = this293;
  int** t296 = __i294;
  int* t297 = *t296;
  t295->_M_current = t297;
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v298) {
bb299:
  struct std__vector_int__std__allocator_int__* this300;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval301;
  this300 = v298;
  struct std__vector_int__std__allocator_int__* t302 = this300;
  struct std___Vector_base_int__std__allocator_int__* base303 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t302 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base304 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base303->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval301, &base304->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t305 = __retval301;
  return t305;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v306) {
bb307:
  struct std__vector_int__std__allocator_int__* this308;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval309;
  this308 = v306;
  struct std__vector_int__std__allocator_int__* t310 = this308;
  struct std___Vector_base_int__std__allocator_int__* base311 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t310 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base312 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base311->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval309, &base312->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t313 = __retval309;
  return t313;
}

// function: _ZNSt16ostream_iteratorIicSt11char_traitsIcEEC2ERKS2_
void std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(struct std__ostream_iterator_int__char__std__char_traits_char__* v314, struct std__ostream_iterator_int__char__std__char_traits_char__* v315) {
bb316:
  struct std__ostream_iterator_int__char__std__char_traits_char__* this317;
  struct std__ostream_iterator_int__char__std__char_traits_char__* __obj318;
  this317 = v314;
  __obj318 = v315;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t319 = this317;
  struct std__iterator_std__output_iterator_tag__void__void__void__void_* base320 = (struct std__iterator_std__output_iterator_tag__void__void__void__void_*)((char *)t319 + 0);
  struct std__ostream_iterator_int__char__std__char_traits_char__* t321 = __obj318;
  struct std__basic_ostream_char__std__char_traits_char__* t322 = t321->_M_stream;
  t319->_M_stream = t322;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t323 = __obj318;
  char* t324 = t323->_M_string;
  t319->_M_string = t324;
  return;
}

// function: _ZSt9__find_ifIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops16_Iter_equals_valIKiEEET_SB_SB_T0_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____find_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_equals_val_int_const___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v325, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v326, struct __gnu_cxx____ops___Iter_equals_val_const_int_ v327) {
bb328:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first329;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last330;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ __pred331;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval332;
  __first329 = v325;
  __last330 = v326;
  __pred331 = v327;
    while (1) {
      _Bool r333 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first329, &__last330);
      _Bool u334 = !r333;
      _Bool ternary335;
      if (u334) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0336;
        agg_tmp0336 = __first329; // copy
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t337 = agg_tmp0336;
        _Bool r338 = bool___gnu_cxx____ops___Iter_equals_val_int_const___operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__pred331, t337);
        _Bool u339 = !r338;
        ternary335 = (_Bool)u339;
      } else {
        _Bool c340 = 0;
        ternary335 = (_Bool)c340;
      }
      if (!ternary335) break;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r341 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__first329);
    }
  __retval332 = __first329; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t342 = __retval332;
  return t342;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v343, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v344) {
bb345:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs346;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs347;
  _Bool __retval348;
  __lhs346 = v343;
  __rhs347 = v344;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t349 = __lhs346;
  int** r350 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t349);
  int* t351 = *r350;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t352 = __rhs347;
  int** r353 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t352);
  int* t354 = *r353;
  _Bool c355 = ((t351 == t354)) ? 1 : 0;
  __retval348 = c355;
  _Bool t356 = __retval348;
  return t356;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v357) {
bb358:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this359;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval360;
  this359 = v357;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t361 = this359;
  int* t362 = t361->_M_current;
  int c363 = 1;
  int* ptr364 = &(t362)[c363];
  t361->_M_current = ptr364;
  __retval360 = t361;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t365 = __retval360;
  return t365;
}

// function: _ZN9__gnu_cxx5__ops16_Iter_equals_valIKiEclINS_17__normal_iteratorIPiSt6vectorIiSaIiEEEEEEbT_
_Bool bool___gnu_cxx____ops___Iter_equals_val_int_const___operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____ops___Iter_equals_val_const_int_* v366, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v367) {
bb368:
  struct __gnu_cxx____ops___Iter_equals_val_const_int_* this369;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it370;
  _Bool __retval371;
  this369 = v366;
  __it370 = v367;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_* t372 = this369;
  int* r373 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it370);
  int t374 = *r373;
  int* t375 = t372->_M_value;
  int t376 = *t375;
  _Bool c377 = ((t374 == t376)) ? 1 : 0;
  __retval371 = c377;
  _Bool t378 = __retval371;
  return t378;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v379) {
bb380:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this381;
  int* __retval382;
  this381 = v379;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t383 = this381;
  int* t384 = t383->_M_current;
  __retval382 = t384;
  int* t385 = __retval382;
  return t385;
}

// function: _ZSt11__remove_ifIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops16_Iter_equals_valIKiEEET_SB_SB_T0_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____remove_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_equals_val_int_const___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v386, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v387, struct __gnu_cxx____ops___Iter_equals_val_const_int_ v388) {
bb389:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first390;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last391;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ __pred392;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval393;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0394;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0395;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1396;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ agg_tmp2397;
  __first390 = v386;
  __last391 = v387;
  __pred392 = v388;
  agg_tmp0395 = __first390; // copy
  agg_tmp1396 = __last391; // copy
  agg_tmp2397 = __pred392; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t398 = agg_tmp0395;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t399 = agg_tmp1396;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ t400 = agg_tmp2397;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r401 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____find_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_equals_val_int_const___(t398, t399, t400);
  ref_tmp0394 = r401;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r402 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&__first390, &ref_tmp0394);
    _Bool r403 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first390, &__last391);
    if (r403) {
      __retval393 = __first390; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t404 = __retval393;
      return t404;
    }
  __retval393 = __first390; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r405 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__first390);
    while (1) {
      _Bool r407 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first390, &__last391);
      _Bool u408 = !r407;
      if (!u408) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3409;
        agg_tmp3409 = __first390; // copy
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t410 = agg_tmp3409;
        _Bool r411 = bool___gnu_cxx____ops___Iter_equals_val_int_const___operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__pred392, t410);
        _Bool u412 = !r411;
        if (u412) {
          int* r413 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first390);
          int t414 = *r413;
          int* r415 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__retval393);
          *r415 = t414;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r416 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__retval393);
        }
    for_step406: ;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r417 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__first390);
    }
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t418 = __retval393;
  return t418;
}

// function: _ZN9__gnu_cxx5__ops16_Iter_equals_valIKiEC2ERS2_
void __gnu_cxx____ops___Iter_equals_val_int_const____Iter_equals_val(struct __gnu_cxx____ops___Iter_equals_val_const_int_* v419, int* v420) {
bb421:
  struct __gnu_cxx____ops___Iter_equals_val_const_int_* this422;
  int* __value423;
  this422 = v419;
  __value423 = v420;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_* t424 = this422;
  int* t425 = __value423;
  t424->_M_value = t425;
  return;
}

// function: _ZN9__gnu_cxx5__ops17__iter_equals_valIKiEENS0_16_Iter_equals_valIT_EERS4_
struct __gnu_cxx____ops___Iter_equals_val_const_int_ __gnu_cxx____ops___Iter_equals_val_int_const____gnu_cxx____ops____iter_equals_val_int_const_(int* v426) {
bb427:
  int* __val428;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ __retval429;
  __val428 = v426;
  int* t430 = __val428;
  __gnu_cxx____ops___Iter_equals_val_int_const____Iter_equals_val(&__retval429, t430);
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ t431 = __retval429;
  return t431;
}

// function: _ZSt6removeIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiET_S7_S7_RKT0_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__remove___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v432, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v433, int* v434) {
bb435:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first436;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last437;
  int* __value438;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval439;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0440;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1441;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ agg_tmp2442;
  __first436 = v432;
  __last437 = v433;
  __value438 = v434;
  agg_tmp0440 = __first436; // copy
  agg_tmp1441 = __last437; // copy
  int* t443 = __value438;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ r444 = __gnu_cxx____ops___Iter_equals_val_int_const____gnu_cxx____ops____iter_equals_val_int_const_(t443);
  agg_tmp2442 = r444;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t445 = agg_tmp0440;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t446 = agg_tmp1441;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ t447 = agg_tmp2442;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r448 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____remove_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_equals_val_int_const___(t445, t446, t447);
  __retval439 = r448;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t449 = __retval439;
  return t449;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSEOS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v450, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v451) {
bb452:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this453;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed454;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval455;
  this453 = v450;
  unnamed454 = v451;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t456 = this453;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t457 = unnamed454;
  int* t458 = t457->_M_current;
  t456->_M_current = t458;
  __retval455 = t456;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t459 = __retval455;
  return t459;
}

// function: _ZNSt6vectorIiSaIiEEC2EmRKiRKS0_
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* v460, unsigned long v461, int* v462, struct std__allocator_int_* v463) {
bb464:
  struct std__vector_int__std__allocator_int__* this465;
  unsigned long __n466;
  int* __value467;
  struct std__allocator_int_* __a468;
  this465 = v460;
  __n466 = v461;
  __value467 = v462;
  __a468 = v463;
  struct std__vector_int__std__allocator_int__* t469 = this465;
  struct std___Vector_base_int__std__allocator_int__* base470 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t469 + 0);
  unsigned long t471 = __n466;
  struct std__allocator_int_* t472 = __a468;
  unsigned long r473 = std__vector_int__std__allocator_int______S_check_init_len(t471, t472);
  struct std__allocator_int_* t474 = __a468;
  std___Vector_base_int__std__allocator_int______Vector_base_2(base470, r473, t474);
    unsigned long t475 = __n466;
    int* t476 = __value467;
    std__vector_int__std__allocator_int______M_fill_initialize(t469, t475, t476);
  return;
}

// function: _ZSt16__remove_copy_ifIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_NS0_5__ops16_Iter_equals_valIKiEEET0_T_SC_SB_T1_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____remove_copy_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_equals_val_int_const___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v477, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v478, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v479, struct __gnu_cxx____ops___Iter_equals_val_const_int_ v480) {
bb481:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first482;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last483;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result484;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ __pred485;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval486;
  __first482 = v477;
  __last483 = v478;
  __result484 = v479;
  __pred485 = v480;
    while (1) {
      _Bool r488 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first482, &__last483);
      _Bool u489 = !r488;
      if (!u489) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0490;
        agg_tmp0490 = __first482; // copy
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t491 = agg_tmp0490;
        _Bool r492 = bool___gnu_cxx____ops___Iter_equals_val_int_const___operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__pred485, t491);
        _Bool u493 = !r492;
        if (u493) {
          int* r494 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first482);
          int t495 = *r494;
          int* r496 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__result484);
          *r496 = t495;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r497 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__result484);
        }
    for_step487: ;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r498 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__first482);
    }
  __retval486 = __result484; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t499 = __retval486;
  return t499;
}

// function: _ZSt11remove_copyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_iET0_T_S8_S7_RKT1_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__remove_copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v500, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v501, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v502, int* v503) {
bb504:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first505;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last506;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result507;
  int* __value508;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval509;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0510;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1511;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2512;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ agg_tmp3513;
  __first505 = v500;
  __last506 = v501;
  __result507 = v502;
  __value508 = v503;
  agg_tmp0510 = __first505; // copy
  agg_tmp1511 = __last506; // copy
  agg_tmp2512 = __result507; // copy
  int* t514 = __value508;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ r515 = __gnu_cxx____ops___Iter_equals_val_int_const____gnu_cxx____ops____iter_equals_val_int_const_(t514);
  agg_tmp3513 = r515;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t516 = agg_tmp0510;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t517 = agg_tmp1511;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t518 = agg_tmp2512;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ t519 = agg_tmp3513;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r520 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____remove_copy_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_equals_val_int_const___(t516, t517, t518, t519);
  __retval509 = r520;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t521 = __retval509;
  return t521;
}

// function: _ZSt9__find_ifIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops10_Iter_predIPFbiEEEET_SC_SC_T0_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____find_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_pred_bool_____int_______gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_pred_bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v522, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v523, struct __gnu_cxx____ops___Iter_pred_bool_____int__ v524) {
bb525:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first526;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last527;
  struct __gnu_cxx____ops___Iter_pred_bool_____int__ __pred528;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval529;
  __first526 = v522;
  __last527 = v523;
  __pred528 = v524;
    while (1) {
      _Bool r530 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first526, &__last527);
      _Bool u531 = !r530;
      _Bool ternary532;
      if (u531) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0533;
        agg_tmp0533 = __first526; // copy
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t534 = agg_tmp0533;
        _Bool r535 = bool___gnu_cxx____ops___Iter_pred_bool_____int____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__pred528, t534);
        _Bool u536 = !r535;
        ternary532 = (_Bool)u536;
      } else {
        _Bool c537 = 0;
        ternary532 = (_Bool)c537;
      }
      if (!ternary532) break;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r538 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__first526);
    }
  __retval529 = __first526; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t539 = __retval529;
  return t539;
}

// function: _ZN9__gnu_cxx5__ops10_Iter_predIPFbiEEclINS_17__normal_iteratorIPiSt6vectorIiSaIiEEEEEEbT_
_Bool bool___gnu_cxx____ops___Iter_pred_bool_____int____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____ops___Iter_pred_bool_____int__* v540, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v541) {
bb542:
  struct __gnu_cxx____ops___Iter_pred_bool_____int__* this543;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it544;
  _Bool __retval545;
  this543 = v540;
  __it544 = v541;
  struct __gnu_cxx____ops___Iter_pred_bool_____int__* t546 = this543;
  void* t547 = t546->_M_pred;
  int* r548 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it544);
  int t549 = *r548;
  _Bool r550 = ((_Bool (*)(int))t547)(t549);
  __retval545 = r550;
  _Bool t551 = __retval545;
  return t551;
}

// function: _ZSt11__remove_ifIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops10_Iter_predIPFbiEEEET_SC_SC_T0_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____remove_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_pred_bool_____int_______gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_pred_bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v552, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v553, struct __gnu_cxx____ops___Iter_pred_bool_____int__ v554) {
bb555:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first556;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last557;
  struct __gnu_cxx____ops___Iter_pred_bool_____int__ __pred558;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval559;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0560;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0561;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1562;
  struct __gnu_cxx____ops___Iter_pred_bool_____int__ agg_tmp2563;
  __first556 = v552;
  __last557 = v553;
  __pred558 = v554;
  agg_tmp0561 = __first556; // copy
  agg_tmp1562 = __last557; // copy
  agg_tmp2563 = __pred558; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t564 = agg_tmp0561;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t565 = agg_tmp1562;
  struct __gnu_cxx____ops___Iter_pred_bool_____int__ t566 = agg_tmp2563;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r567 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____find_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_pred_bool_____int_______gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_pred_bool____(t564, t565, t566);
  ref_tmp0560 = r567;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r568 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&__first556, &ref_tmp0560);
    _Bool r569 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first556, &__last557);
    if (r569) {
      __retval559 = __first556; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t570 = __retval559;
      return t570;
    }
  __retval559 = __first556; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r571 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__first556);
    while (1) {
      _Bool r573 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first556, &__last557);
      _Bool u574 = !r573;
      if (!u574) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3575;
        agg_tmp3575 = __first556; // copy
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t576 = agg_tmp3575;
        _Bool r577 = bool___gnu_cxx____ops___Iter_pred_bool_____int____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__pred558, t576);
        _Bool u578 = !r577;
        if (u578) {
          int* r579 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first556);
          int t580 = *r579;
          int* r581 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__retval559);
          *r581 = t580;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r582 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__retval559);
        }
    for_step572: ;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r583 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__first556);
    }
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t584 = __retval559;
  return t584;
}

// function: _ZN9__gnu_cxx5__ops10_Iter_predIPFbiEEC2ES3_
void __gnu_cxx____ops___Iter_pred_bool_____int_____Iter_pred_bool____(struct __gnu_cxx____ops___Iter_pred_bool_____int__* v585, void* v586) {
bb587:
  struct __gnu_cxx____ops___Iter_pred_bool_____int__* this588;
  void* __pred589;
  this588 = v585;
  __pred589 = v586;
  struct __gnu_cxx____ops___Iter_pred_bool_____int__* t590 = this588;
  void* t591 = __pred589;
  t590->_M_pred = t591;
  return;
}

// function: _ZN9__gnu_cxx5__ops11__pred_iterIPFbiEEENS0_10_Iter_predIT_EES5_
struct __gnu_cxx____ops___Iter_pred_bool_____int__ __gnu_cxx____ops___Iter_pred_bool_____int_____gnu_cxx____ops____pred_iter_bool_____int___bool____(void* v592) {
bb593:
  void* __pred594;
  struct __gnu_cxx____ops___Iter_pred_bool_____int__ __retval595;
  __pred594 = v592;
  void* t596 = __pred594;
  __gnu_cxx____ops___Iter_pred_bool_____int_____Iter_pred_bool____(&__retval595, t596);
  struct __gnu_cxx____ops___Iter_pred_bool_____int__ t597 = __retval595;
  return t597;
}

// function: _ZSt9remove_ifIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEPFbiEET_S9_S9_T0_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__remove_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool_____int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v598, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v599, void* v600) {
bb601:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first602;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last603;
  void* __pred604;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval605;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0606;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1607;
  struct __gnu_cxx____ops___Iter_pred_bool_____int__ agg_tmp2608;
  __first602 = v598;
  __last603 = v599;
  __pred604 = v600;
  agg_tmp0606 = __first602; // copy
  agg_tmp1607 = __last603; // copy
  void* t609 = __pred604;
  struct __gnu_cxx____ops___Iter_pred_bool_____int__ r610 = __gnu_cxx____ops___Iter_pred_bool_____int_____gnu_cxx____ops____pred_iter_bool_____int___bool____(t609);
  agg_tmp2608 = r610;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t611 = agg_tmp0606;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t612 = agg_tmp1607;
  struct __gnu_cxx____ops___Iter_pred_bool_____int__ t613 = agg_tmp2608;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r614 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____remove_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_pred_bool_____int_______gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_pred_bool____(t611, t612, t613);
  __retval605 = r614;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t615 = __retval605;
  return t615;
}

// function: _Z8greater9i
_Bool greater9(int v616) {
bb617:
  int x618;
  _Bool __retval619;
  x618 = v616;
  int t620 = x618;
  int c621 = 9;
  _Bool c622 = ((t620 > c621)) ? 1 : 0;
  __retval619 = c622;
  _Bool t623 = __retval619;
  return t623;
}

// function: _ZSt16__remove_copy_ifIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_NS0_5__ops10_Iter_predIPFbiEEEET0_T_SD_SC_T1_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____remove_copy_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_pred_bool_____int_______gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_pred_bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v624, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v625, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v626, struct __gnu_cxx____ops___Iter_pred_bool_____int__ v627) {
bb628:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first629;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last630;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result631;
  struct __gnu_cxx____ops___Iter_pred_bool_____int__ __pred632;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval633;
  __first629 = v624;
  __last630 = v625;
  __result631 = v626;
  __pred632 = v627;
    while (1) {
      _Bool r635 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first629, &__last630);
      _Bool u636 = !r635;
      if (!u636) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0637;
        agg_tmp0637 = __first629; // copy
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t638 = agg_tmp0637;
        _Bool r639 = bool___gnu_cxx____ops___Iter_pred_bool_____int____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__pred632, t638);
        _Bool u640 = !r639;
        if (u640) {
          int* r641 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first629);
          int t642 = *r641;
          int* r643 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__result631);
          *r643 = t642;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r644 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__result631);
        }
    for_step634: ;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r645 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__first629);
    }
  __retval633 = __result631; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t646 = __retval633;
  return t646;
}

// function: _ZSt14remove_copy_ifIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_PFbiEET0_T_SA_S9_T1_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__remove_copy_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool_____int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v647, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v648, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v649, void* v650) {
bb651:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first652;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last653;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result654;
  void* __pred655;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval656;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0657;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1658;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2659;
  struct __gnu_cxx____ops___Iter_pred_bool_____int__ agg_tmp3660;
  __first652 = v647;
  __last653 = v648;
  __result654 = v649;
  __pred655 = v650;
  agg_tmp0657 = __first652; // copy
  agg_tmp1658 = __last653; // copy
  agg_tmp2659 = __result654; // copy
  void* t661 = __pred655;
  struct __gnu_cxx____ops___Iter_pred_bool_____int__ r662 = __gnu_cxx____ops___Iter_pred_bool_____int_____gnu_cxx____ops____pred_iter_bool_____int___bool____(t661);
  agg_tmp3660 = r662;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t663 = agg_tmp0657;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t664 = agg_tmp1658;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t665 = agg_tmp2659;
  struct __gnu_cxx____ops___Iter_pred_bool_____int__ t666 = agg_tmp3660;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r667 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____remove_copy_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_pred_bool_____int_______gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_pred_bool____(t663, t664, t665, t666);
  __retval656 = r667;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t668 = __retval656;
  return t668;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v669, void* v670) {
bb671:
  struct std__basic_ostream_char__std__char_traits_char__* this672;
  void* __pf673;
  struct std__basic_ostream_char__std__char_traits_char__* __retval674;
  this672 = v669;
  __pf673 = v670;
  struct std__basic_ostream_char__std__char_traits_char__* t675 = this672;
  void* t676 = __pf673;
  struct std__basic_ostream_char__std__char_traits_char__* r677 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t676)(t675);
  __retval674 = r677;
  struct std__basic_ostream_char__std__char_traits_char__* t678 = __retval674;
  return t678;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v679) {
bb680:
  struct std__basic_ostream_char__std__char_traits_char__* __os681;
  struct std__basic_ostream_char__std__char_traits_char__* __retval682;
  __os681 = v679;
  struct std__basic_ostream_char__std__char_traits_char__* t683 = __os681;
  struct std__basic_ostream_char__std__char_traits_char__* r684 = std__ostream__flush(t683);
  __retval682 = r684;
  struct std__basic_ostream_char__std__char_traits_char__* t685 = __retval682;
  return t685;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v686) {
bb687:
  struct std__ctype_char_* __f688;
  struct std__ctype_char_* __retval689;
  __f688 = v686;
    struct std__ctype_char_* t690 = __f688;
    _Bool cast691 = (_Bool)t690;
    _Bool u692 = !cast691;
    if (u692) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t693 = __f688;
  __retval689 = t693;
  struct std__ctype_char_* t694 = __retval689;
  return t694;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v695, char v696) {
bb697:
  struct std__ctype_char_* this698;
  char __c699;
  char __retval700;
  this698 = v695;
  __c699 = v696;
  struct std__ctype_char_* t701 = this698;
    char t702 = t701->_M_widen_ok;
    _Bool cast703 = (_Bool)t702;
    if (cast703) {
      char t704 = __c699;
      unsigned char cast705 = (unsigned char)t704;
      unsigned long cast706 = (unsigned long)cast705;
      char t707 = t701->_M_widen[cast706];
      __retval700 = t707;
      char t708 = __retval700;
      return t708;
    }
  std__ctype_char____M_widen_init___const(t701);
  char t709 = __c699;
  void** v710 = (void**)t701;
  void* v711 = *((void**)v710);
  char vcall714 = (char)__VERIFIER_virtual_call_char_char(t701, 6, t709);
  __retval700 = vcall714;
  char t715 = __retval700;
  return t715;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v716, char v717) {
bb718:
  struct std__basic_ios_char__std__char_traits_char__* this719;
  char __c720;
  char __retval721;
  this719 = v716;
  __c720 = v717;
  struct std__basic_ios_char__std__char_traits_char__* t722 = this719;
  struct std__ctype_char_* t723 = t722->_M_ctype;
  struct std__ctype_char_* r724 = std__ctype_char__const__std____check_facet_std__ctype_char___(t723);
  char t725 = __c720;
  char r726 = std__ctype_char___widen_char__const(r724, t725);
  __retval721 = r726;
  char t727 = __retval721;
  return t727;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v728) {
bb729:
  struct std__basic_ostream_char__std__char_traits_char__* __os730;
  struct std__basic_ostream_char__std__char_traits_char__* __retval731;
  __os730 = v728;
  struct std__basic_ostream_char__std__char_traits_char__* t732 = __os730;
  struct std__basic_ostream_char__std__char_traits_char__* t733 = __os730;
  void** v734 = (void**)t733;
  void* v735 = *((void**)v734);
  unsigned char* cast736 = (unsigned char*)v735;
  long c737 = -24;
  unsigned char* ptr738 = &(cast736)[c737];
  long* cast739 = (long*)ptr738;
  long t740 = *cast739;
  unsigned char* cast741 = (unsigned char*)t733;
  unsigned char* ptr742 = &(cast741)[t740];
  struct std__basic_ostream_char__std__char_traits_char__* cast743 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr742;
  struct std__basic_ios_char__std__char_traits_char__* cast744 = (struct std__basic_ios_char__std__char_traits_char__*)cast743;
  char c745 = 10;
  char r746 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast744, c745);
  struct std__basic_ostream_char__std__char_traits_char__* r747 = std__ostream__put(t732, r746);
  struct std__basic_ostream_char__std__char_traits_char__* r748 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r747);
  __retval731 = r748;
  struct std__basic_ostream_char__std__char_traits_char__* t749 = __retval731;
  return t749;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v750) {
bb751:
  struct std__vector_int__std__allocator_int__* this752;
  this752 = v750;
  struct std__vector_int__std__allocator_int__* t753 = this752;
    struct std___Vector_base_int__std__allocator_int__* base754 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t753 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base755 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base754->_M_impl) + 0);
    int* t756 = base755->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base757 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t753 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base758 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base757->_M_impl) + 0);
    int* t759 = base758->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base760 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t753 + 0);
    struct std__allocator_int_* r761 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base760);
    void_std___Destroy_int___int_(t756, t759, r761);
  {
    struct std___Vector_base_int__std__allocator_int__* base762 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t753 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base762);
  }
  return;
}

// function: main
int main() {
bb763:
  int __retval764;
  int SIZE765;
  int a766[10];
  struct std__ostream_iterator_int__char__std__char_traits_char__ output767;
  struct std__vector_int__std__allocator_int__ v768;
  struct std__allocator_int_ ref_tmp0769;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ newLastElement770;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0771;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1772;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp2773;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp3774;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1775;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp4776;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp5777;
  int ref_tmp2778;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp6779;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp7780;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp8781;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp9782;
  struct std__vector_int__std__allocator_int__ v2783;
  struct std__allocator_int_ ref_tmp3784;
  struct std__vector_int__std__allocator_int__ c785;
  int ref_tmp4786;
  struct std__allocator_int_ ref_tmp5787;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp10788;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11789;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp12790;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp13791;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp14792;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp15793;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp16794;
  int ref_tmp6795;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp17796;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp18797;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp19798;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp20799;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp21800;
  struct std__vector_int__std__allocator_int__ v3801;
  struct std__allocator_int_ ref_tmp7802;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp22803;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp23804;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp24805;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp25806;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp8807;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp26808;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp27809;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp28810;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp29811;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp30812;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp31813;
  struct std__vector_int__std__allocator_int__ v4814;
  struct std__allocator_int_ ref_tmp9815;
  struct std__vector_int__std__allocator_int__ c2816;
  int ref_tmp10817;
  struct std__allocator_int_ ref_tmp11818;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp32819;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp33820;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp34821;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp35822;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp36823;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp37824;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp38825;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp39826;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp40827;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp41828;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp42829;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp43830;
  int c831 = 0;
  __retval764 = c831;
  int c832 = 10;
  SIZE765 = c832;
  // array copy
  __builtin_memcpy(a766, __const_main_a, (unsigned long)10 * sizeof(__const_main_a[0]));
  char* cast833 = (char*)&(_str);
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator_2(&output767, &_ZSt4cout, cast833);
  int* cast834 = (int*)&(a766);
  int* cast835 = (int*)&(a766);
  int t836 = SIZE765;
  int* ptr837 = &(cast835)[t836];
  std__allocator_int___allocator_2(&ref_tmp0769);
    std__vector_int__std__allocator_int_____vector_int___void_(&v768, cast834, ptr837, &ref_tmp0769);
  {
    std__allocator_int____allocator(&ref_tmp0769);
  }
    __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&newLastElement770);
    char* cast838 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* r839 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast838);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r840 = std__vector_int__std__allocator_int_____begin(&v768);
    agg_tmp0771 = r840;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r841 = std__vector_int__std__allocator_int_____end(&v768);
    agg_tmp1772 = r841;
    std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp2773, &output767);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t842 = agg_tmp0771;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t843 = agg_tmp1772;
    struct std__ostream_iterator_int__char__std__char_traits_char__ t844 = agg_tmp2773;
    struct std__ostream_iterator_int__char__std__char_traits_char__ r845 = std__ostream_iterator_int__char__std__char_traits_char____std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(t842, t843, t844);
    agg_tmp3774 = r845;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r846 = std__vector_int__std__allocator_int_____begin(&v768);
    agg_tmp4776 = r846;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r847 = std__vector_int__std__allocator_int_____end(&v768);
    agg_tmp5777 = r847;
    int c848 = 10;
    ref_tmp2778 = c848;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t849 = agg_tmp4776;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t850 = agg_tmp5777;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r851 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__remove___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(t849, t850, &ref_tmp2778);
    ref_tmp1775 = r851;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r852 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&newLastElement770, &ref_tmp1775);
    char* cast853 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r854 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast853);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r855 = std__vector_int__std__allocator_int_____begin(&v768);
    agg_tmp6779 = r855;
    agg_tmp7780 = newLastElement770; // copy
    std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp8781, &output767);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t856 = agg_tmp6779;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t857 = agg_tmp7780;
    struct std__ostream_iterator_int__char__std__char_traits_char__ t858 = agg_tmp8781;
    struct std__ostream_iterator_int__char__std__char_traits_char__ r859 = std__ostream_iterator_int__char__std__char_traits_char____std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(t856, t857, t858);
    agg_tmp9782 = r859;
    int* cast860 = (int*)&(a766);
    int* cast861 = (int*)&(a766);
    int t862 = SIZE765;
    int* ptr863 = &(cast861)[t862];
    std__allocator_int___allocator_2(&ref_tmp3784);
      std__vector_int__std__allocator_int_____vector_int___void_(&v2783, cast860, ptr863, &ref_tmp3784);
    {
      std__allocator_int____allocator(&ref_tmp3784);
    }
      int t864 = SIZE765;
      unsigned long cast865 = (unsigned long)t864;
      int c866 = 0;
      ref_tmp4786 = c866;
      std__allocator_int___allocator_2(&ref_tmp5787);
        std__vector_int__std__allocator_int_____vector(&c785, cast865, &ref_tmp4786, &ref_tmp5787);
      {
        std__allocator_int____allocator(&ref_tmp5787);
      }
        char* cast867 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* r868 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast867);
        char* cast869 = (char*)&(_str_4);
        struct std__basic_ostream_char__std__char_traits_char__* r870 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r868, cast869);
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r871 = std__vector_int__std__allocator_int_____begin(&v2783);
        agg_tmp10788 = r871;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r872 = std__vector_int__std__allocator_int_____end(&v2783);
        agg_tmp11789 = r872;
        std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp12790, &output767);
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t873 = agg_tmp10788;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t874 = agg_tmp11789;
        struct std__ostream_iterator_int__char__std__char_traits_char__ t875 = agg_tmp12790;
        struct std__ostream_iterator_int__char__std__char_traits_char__ r876 = std__ostream_iterator_int__char__std__char_traits_char____std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(t873, t874, t875);
        agg_tmp13791 = r876;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r877 = std__vector_int__std__allocator_int_____begin(&v2783);
        agg_tmp14792 = r877;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r878 = std__vector_int__std__allocator_int_____end(&v2783);
        agg_tmp15793 = r878;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r879 = std__vector_int__std__allocator_int_____begin(&c785);
        agg_tmp16794 = r879;
        int c880 = 10;
        ref_tmp6795 = c880;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t881 = agg_tmp14792;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t882 = agg_tmp15793;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t883 = agg_tmp16794;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r884 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__remove_copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(t881, t882, t883, &ref_tmp6795);
        agg_tmp17796 = r884;
        char* cast885 = (char*)&(_str_5);
        struct std__basic_ostream_char__std__char_traits_char__* r886 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast885);
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r887 = std__vector_int__std__allocator_int_____begin(&c785);
        agg_tmp18797 = r887;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r888 = std__vector_int__std__allocator_int_____end(&c785);
        agg_tmp19798 = r888;
        std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp20799, &output767);
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t889 = agg_tmp18797;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t890 = agg_tmp19798;
        struct std__ostream_iterator_int__char__std__char_traits_char__ t891 = agg_tmp20799;
        struct std__ostream_iterator_int__char__std__char_traits_char__ r892 = std__ostream_iterator_int__char__std__char_traits_char____std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(t889, t890, t891);
        agg_tmp21800 = r892;
        int* cast893 = (int*)&(a766);
        int* cast894 = (int*)&(a766);
        int t895 = SIZE765;
        int* ptr896 = &(cast894)[t895];
        std__allocator_int___allocator_2(&ref_tmp7802);
          std__vector_int__std__allocator_int_____vector_int___void_(&v3801, cast893, ptr896, &ref_tmp7802);
        {
          std__allocator_int____allocator(&ref_tmp7802);
        }
          char* cast897 = (char*)&(_str_6);
          struct std__basic_ostream_char__std__char_traits_char__* r898 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast897);
          char* cast899 = (char*)&(_str_7);
          struct std__basic_ostream_char__std__char_traits_char__* r900 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r898, cast899);
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r901 = std__vector_int__std__allocator_int_____begin(&v3801);
          agg_tmp22803 = r901;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r902 = std__vector_int__std__allocator_int_____end(&v3801);
          agg_tmp23804 = r902;
          std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp24805, &output767);
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t903 = agg_tmp22803;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t904 = agg_tmp23804;
          struct std__ostream_iterator_int__char__std__char_traits_char__ t905 = agg_tmp24805;
          struct std__ostream_iterator_int__char__std__char_traits_char__ r906 = std__ostream_iterator_int__char__std__char_traits_char____std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(t903, t904, t905);
          agg_tmp25806 = r906;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r907 = std__vector_int__std__allocator_int_____begin(&v3801);
          agg_tmp26808 = r907;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r908 = std__vector_int__std__allocator_int_____end(&v3801);
          agg_tmp27809 = r908;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t909 = agg_tmp26808;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t910 = agg_tmp27809;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r911 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__remove_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool_____int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool____(t909, t910, &greater9);
          ref_tmp8807 = r911;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r912 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&newLastElement770, &ref_tmp8807);
          char* cast913 = (char*)&(_str_8);
          struct std__basic_ostream_char__std__char_traits_char__* r914 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast913);
          char* cast915 = (char*)&(_str_7);
          struct std__basic_ostream_char__std__char_traits_char__* r916 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r914, cast915);
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r917 = std__vector_int__std__allocator_int_____begin(&v3801);
          agg_tmp28810 = r917;
          agg_tmp29811 = newLastElement770; // copy
          std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp30812, &output767);
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t918 = agg_tmp28810;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t919 = agg_tmp29811;
          struct std__ostream_iterator_int__char__std__char_traits_char__ t920 = agg_tmp30812;
          struct std__ostream_iterator_int__char__std__char_traits_char__ r921 = std__ostream_iterator_int__char__std__char_traits_char____std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(t918, t919, t920);
          agg_tmp31813 = r921;
          int* cast922 = (int*)&(a766);
          int* cast923 = (int*)&(a766);
          int t924 = SIZE765;
          int* ptr925 = &(cast923)[t924];
          std__allocator_int___allocator_2(&ref_tmp9815);
            std__vector_int__std__allocator_int_____vector_int___void_(&v4814, cast922, ptr925, &ref_tmp9815);
          {
            std__allocator_int____allocator(&ref_tmp9815);
          }
            int t926 = SIZE765;
            unsigned long cast927 = (unsigned long)t926;
            int c928 = 0;
            ref_tmp10817 = c928;
            std__allocator_int___allocator_2(&ref_tmp11818);
              std__vector_int__std__allocator_int_____vector(&c2816, cast927, &ref_tmp10817, &ref_tmp11818);
            {
              std__allocator_int____allocator(&ref_tmp11818);
            }
              char* cast929 = (char*)&(_str_9);
              struct std__basic_ostream_char__std__char_traits_char__* r930 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast929);
              char* cast931 = (char*)&(_str_10);
              struct std__basic_ostream_char__std__char_traits_char__* r932 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r930, cast931);
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r933 = std__vector_int__std__allocator_int_____begin(&v4814);
              agg_tmp32819 = r933;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r934 = std__vector_int__std__allocator_int_____end(&v4814);
              agg_tmp33820 = r934;
              std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp34821, &output767);
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t935 = agg_tmp32819;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t936 = agg_tmp33820;
              struct std__ostream_iterator_int__char__std__char_traits_char__ t937 = agg_tmp34821;
              struct std__ostream_iterator_int__char__std__char_traits_char__ r938 = std__ostream_iterator_int__char__std__char_traits_char____std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(t935, t936, t937);
              agg_tmp35822 = r938;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r939 = std__vector_int__std__allocator_int_____begin(&v4814);
              agg_tmp36823 = r939;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r940 = std__vector_int__std__allocator_int_____end(&v4814);
              agg_tmp37824 = r940;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r941 = std__vector_int__std__allocator_int_____begin(&c2816);
              agg_tmp38825 = r941;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t942 = agg_tmp36823;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t943 = agg_tmp37824;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t944 = agg_tmp38825;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r945 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__remove_copy_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool_____int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool____(t942, t943, t944, &greater9);
              agg_tmp39826 = r945;
              char* cast946 = (char*)&(_str_11);
              struct std__basic_ostream_char__std__char_traits_char__* r947 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast946);
              char* cast948 = (char*)&(_str_12);
              struct std__basic_ostream_char__std__char_traits_char__* r949 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r947, cast948);
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r950 = std__vector_int__std__allocator_int_____begin(&c2816);
              agg_tmp40827 = r950;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r951 = std__vector_int__std__allocator_int_____end(&c2816);
              agg_tmp41828 = r951;
              std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp42829, &output767);
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t952 = agg_tmp40827;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t953 = agg_tmp41828;
              struct std__ostream_iterator_int__char__std__char_traits_char__ t954 = agg_tmp42829;
              struct std__ostream_iterator_int__char__std__char_traits_char__ r955 = std__ostream_iterator_int__char__std__char_traits_char____std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(t952, t953, t954);
              agg_tmp43830 = r955;
              struct std__basic_ostream_char__std__char_traits_char__* r956 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
              int c957 = 0;
              __retval764 = c957;
              int t958 = __retval764;
              int ret_val959 = t958;
              {
                std__vector_int__std__allocator_int______vector(&c2816);
              }
              {
                std__vector_int__std__allocator_int______vector(&v4814);
              }
              {
                std__vector_int__std__allocator_int______vector(&v3801);
              }
              {
                std__vector_int__std__allocator_int______vector(&c785);
              }
              {
                std__vector_int__std__allocator_int______vector(&v2783);
              }
              {
                std__vector_int__std__allocator_int______vector(&v768);
              }
              return ret_val959;
  int t960 = __retval764;
  return t960;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v961) {
bb962:
  struct std____new_allocator_int_* this963;
  this963 = v961;
  struct std____new_allocator_int_* t964 = this963;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v965, struct std__allocator_int_* v966) {
bb967:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this968;
  struct std__allocator_int_* __a969;
  this968 = v965;
  __a969 = v966;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t970 = this968;
  struct std__allocator_int_* base971 = (struct std__allocator_int_*)((char *)t970 + 0);
  struct std__allocator_int_* t972 = __a969;
  std__allocator_int___allocator(base971, t972);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base973 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t970 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base973);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v974) {
bb975:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this976;
  this976 = v974;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t977 = this976;
  {
    struct std__allocator_int_* base978 = (struct std__allocator_int_*)((char *)t977 + 0);
    std__allocator_int____allocator(base978);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v979, struct std__allocator_int_* v980) {
bb981:
  struct std___Vector_base_int__std__allocator_int__* this982;
  struct std__allocator_int_* __a983;
  this982 = v979;
  __a983 = v980;
  struct std___Vector_base_int__std__allocator_int__* t984 = this982;
  struct std__allocator_int_* t985 = __a983;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t984->_M_impl, t985);
  return;
}

// function: _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_
long _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_(struct std__ranges____distance_fn* v986, int** v987, int* v988) {
bb989:
  struct std__ranges____distance_fn* this990;
  int** __first991;
  int* __last992;
  long __retval993;
  this990 = v986;
  __first991 = v987;
  __last992 = v988;
  struct std__ranges____distance_fn* t994 = this990;
  int* t995 = __last992;
  int** t996 = __first991;
  int* t997 = *t996;
  long diff998 = t995 - t997;
  __retval993 = diff998;
  long t999 = __retval993;
  return t999;
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

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v1004) {
bb1005:
  struct std____new_allocator_int_* this1006;
  unsigned long __retval1007;
  this1006 = v1004;
  struct std____new_allocator_int_* t1008 = this1006;
  unsigned long c1009 = 9223372036854775807;
  unsigned long c1010 = 4;
  unsigned long b1011 = c1009 / c1010;
  __retval1007 = b1011;
  unsigned long t1012 = __retval1007;
  return t1012;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v1013, unsigned long v1014, void* v1015) {
bb1016:
  struct std____new_allocator_int_* this1017;
  unsigned long __n1018;
  void* unnamed1019;
  int* __retval1020;
  this1017 = v1013;
  __n1018 = v1014;
  unnamed1019 = v1015;
  struct std____new_allocator_int_* t1021 = this1017;
    unsigned long t1022 = __n1018;
    unsigned long r1023 = std____new_allocator_int____M_max_size___const(t1021);
    _Bool c1024 = ((t1022 > r1023)) ? 1 : 0;
    if (c1024) {
        unsigned long t1025 = __n1018;
        unsigned long c1026 = -1;
        unsigned long c1027 = 4;
        unsigned long b1028 = c1026 / c1027;
        _Bool c1029 = ((t1025 > b1028)) ? 1 : 0;
        if (c1029) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c1030 = 4;
    unsigned long c1031 = 16;
    _Bool c1032 = ((c1030 > c1031)) ? 1 : 0;
    if (c1032) {
      unsigned long __al1033;
      unsigned long c1034 = 4;
      __al1033 = c1034;
      unsigned long t1035 = __n1018;
      unsigned long c1036 = 4;
      unsigned long b1037 = t1035 * c1036;
      unsigned long t1038 = __al1033;
      void* r1039 = operator_new_2(b1037, t1038);
      int* cast1040 = (int*)r1039;
      __retval1020 = cast1040;
      int* t1041 = __retval1020;
      return t1041;
    }
  unsigned long t1042 = __n1018;
  unsigned long c1043 = 4;
  unsigned long b1044 = t1042 * c1043;
  void* r1045 = operator_new(b1044);
  int* cast1046 = (int*)r1045;
  __retval1020 = cast1046;
  int* t1047 = __retval1020;
  return t1047;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v1048, unsigned long v1049) {
bb1050:
  struct std__allocator_int_* this1051;
  unsigned long __n1052;
  int* __retval1053;
  this1051 = v1048;
  __n1052 = v1049;
  struct std__allocator_int_* t1054 = this1051;
    _Bool r1055 = std____is_constant_evaluated();
    if (r1055) {
        unsigned long t1056 = __n1052;
        unsigned long c1057 = 4;
        unsigned long ovr1058;
        _Bool ovf1059 = __builtin_mul_overflow(t1056, c1057, &ovr1058);
        __n1052 = ovr1058;
        if (ovf1059) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1060 = __n1052;
      void* r1061 = operator_new(t1060);
      int* cast1062 = (int*)r1061;
      __retval1053 = cast1062;
      int* t1063 = __retval1053;
      return t1063;
    }
  struct std____new_allocator_int_* base1064 = (struct std____new_allocator_int_*)((char *)t1054 + 0);
  unsigned long t1065 = __n1052;
  void* c1066 = ((void*)0);
  int* r1067 = std____new_allocator_int___allocate(base1064, t1065, c1066);
  __retval1053 = r1067;
  int* t1068 = __retval1053;
  return t1068;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v1069, unsigned long v1070) {
bb1071:
  struct std__allocator_int_* __a1072;
  unsigned long __n1073;
  int* __retval1074;
  __a1072 = v1069;
  __n1073 = v1070;
  struct std__allocator_int_* t1075 = __a1072;
  unsigned long t1076 = __n1073;
  int* r1077 = std__allocator_int___allocate(t1075, t1076);
  __retval1074 = r1077;
  int* t1078 = __retval1074;
  return t1078;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v1079, unsigned long v1080) {
bb1081:
  struct std___Vector_base_int__std__allocator_int__* this1082;
  unsigned long __n1083;
  int* __retval1084;
  this1082 = v1079;
  __n1083 = v1080;
  struct std___Vector_base_int__std__allocator_int__* t1085 = this1082;
  unsigned long t1086 = __n1083;
  unsigned long c1087 = 0;
  _Bool c1088 = ((t1086 != c1087)) ? 1 : 0;
  int* ternary1089;
  if (c1088) {
    struct std__allocator_int_* base1090 = (struct std__allocator_int_*)((char *)&(t1085->_M_impl) + 0);
    unsigned long t1091 = __n1083;
    int* r1092 = std__allocator_traits_std__allocator_int_____allocate(base1090, t1091);
    ternary1089 = (int*)r1092;
  } else {
    int* c1093 = ((void*)0);
    ternary1089 = (int*)c1093;
  }
  __retval1084 = ternary1089;
  int* t1094 = __retval1084;
  return t1094;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v1095, unsigned long* v1096) {
bb1097:
  unsigned long* __a1098;
  unsigned long* __b1099;
  unsigned long* __retval1100;
  __a1098 = v1095;
  __b1099 = v1096;
    unsigned long* t1101 = __b1099;
    unsigned long t1102 = *t1101;
    unsigned long* t1103 = __a1098;
    unsigned long t1104 = *t1103;
    _Bool c1105 = ((t1102 < t1104)) ? 1 : 0;
    if (c1105) {
      unsigned long* t1106 = __b1099;
      __retval1100 = t1106;
      unsigned long* t1107 = __retval1100;
      return t1107;
    }
  unsigned long* t1108 = __a1098;
  __retval1100 = t1108;
  unsigned long* t1109 = __retval1100;
  return t1109;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v1110) {
bb1111:
  struct std__allocator_int_* __a1112;
  unsigned long __retval1113;
  unsigned long __diffmax1114;
  unsigned long __allocmax1115;
  __a1112 = v1110;
  unsigned long c1116 = 2305843009213693951;
  __diffmax1114 = c1116;
  unsigned long c1117 = 4611686018427387903;
  __allocmax1115 = c1117;
  unsigned long* r1118 = unsigned_long_const__std__min_unsigned_long_(&__diffmax1114, &__allocmax1115);
  unsigned long t1119 = *r1118;
  __retval1113 = t1119;
  unsigned long t1120 = __retval1113;
  return t1120;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v1121, struct std__allocator_int_* v1122) {
bb1123:
  struct std__allocator_int_* this1124;
  struct std__allocator_int_* __a1125;
  this1124 = v1121;
  __a1125 = v1122;
  struct std__allocator_int_* t1126 = this1124;
  struct std____new_allocator_int_* base1127 = (struct std____new_allocator_int_*)((char *)t1126 + 0);
  struct std__allocator_int_* t1128 = __a1125;
  struct std____new_allocator_int_* base1129 = (struct std____new_allocator_int_*)((char *)t1128 + 0);
  std____new_allocator_int_____new_allocator(base1127, base1129);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v1130, struct std__allocator_int_* v1131) {
bb1132:
  unsigned long __n1133;
  struct std__allocator_int_* __a1134;
  unsigned long __retval1135;
  __n1133 = v1130;
  __a1134 = v1131;
    struct std__allocator_int_ ref_tmp01136;
    _Bool tmp_exprcleanup1137;
    unsigned long t1138 = __n1133;
    struct std__allocator_int_* t1139 = __a1134;
    std__allocator_int___allocator(&ref_tmp01136, t1139);
      unsigned long r1140 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp01136);
      _Bool c1141 = ((t1138 > r1140)) ? 1 : 0;
      tmp_exprcleanup1137 = c1141;
    {
      std__allocator_int____allocator(&ref_tmp01136);
    }
    _Bool t1142 = tmp_exprcleanup1137;
    if (t1142) {
      char* cast1143 = (char*)&(_str_13);
      std____throw_length_error(cast1143);
    }
  unsigned long t1144 = __n1133;
  __retval1135 = t1144;
  unsigned long t1145 = __retval1135;
  return t1145;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v1146) {
bb1147:
  struct std___Vector_base_int__std__allocator_int__* this1148;
  struct std__allocator_int_* __retval1149;
  this1148 = v1146;
  struct std___Vector_base_int__std__allocator_int__* t1150 = this1148;
  struct std__allocator_int_* base1151 = (struct std__allocator_int_*)((char *)&(t1150->_M_impl) + 0);
  __retval1149 = base1151;
  struct std__allocator_int_* t1152 = __retval1149;
  return t1152;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1153:
  _Bool __retval1154;
    _Bool c1155 = 0;
    __retval1154 = c1155;
    _Bool t1156 = __retval1154;
    return t1156;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1157, int** v1158) {
bb1159:
  struct std___UninitDestroyGuard_int____void_* this1160;
  int** __first1161;
  this1160 = v1157;
  __first1161 = v1158;
  struct std___UninitDestroyGuard_int____void_* t1162 = this1160;
  int** t1163 = __first1161;
  int* t1164 = *t1163;
  t1162->_M_first = t1164;
  int** t1165 = __first1161;
  t1162->_M_cur = t1165;
  return;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v1166, int* v1167) {
bb1168:
  int* __location1169;
  int* __args1170;
  int* __retval1171;
  void* __loc1172;
  __location1169 = v1166;
  __args1170 = v1167;
  int* t1173 = __location1169;
  void* cast1174 = (void*)t1173;
  __loc1172 = cast1174;
    void* t1175 = __loc1172;
    int* cast1176 = (int*)t1175;
    int* t1177 = __args1170;
    int t1178 = *t1177;
    *cast1176 = t1178;
    __retval1171 = cast1176;
    int* t1179 = __retval1171;
    return t1179;
  abort();
}

// function: _ZSt10_ConstructIiJRiEEvPT_DpOT0_
void void_std___Construct_int__int__(int* v1180, int* v1181) {
bb1182:
  int* __p1183;
  int* __args1184;
  __p1183 = v1180;
  __args1184 = v1181;
    _Bool r1185 = std____is_constant_evaluated();
    if (r1185) {
      int* t1186 = __p1183;
      int* t1187 = __args1184;
      int* r1188 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t1186, t1187);
      return;
    }
  int* t1189 = __p1183;
  void* cast1190 = (void*)t1189;
  int* cast1191 = (int*)cast1190;
  int* t1192 = __args1184;
  int t1193 = *t1192;
  *cast1191 = t1193;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v1194) {
bb1195:
  struct std___UninitDestroyGuard_int____void_* this1196;
  this1196 = v1194;
  struct std___UninitDestroyGuard_int____void_* t1197 = this1196;
  int** c1198 = ((void*)0);
  t1197->_M_cur = c1198;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1199) {
bb1200:
  struct std___UninitDestroyGuard_int____void_* this1201;
  this1201 = v1199;
  struct std___UninitDestroyGuard_int____void_* t1202 = this1201;
    int** t1203 = t1202->_M_cur;
    int** c1204 = ((void*)0);
    _Bool c1205 = ((t1203 != c1204)) ? 1 : 0;
    if (c1205) {
      int* t1206 = t1202->_M_first;
      int** t1207 = t1202->_M_cur;
      int* t1208 = *t1207;
      void_std___Destroy_int__(t1206, t1208);
    }
  return;
}

// function: _ZSt16__do_uninit_copyIPiS0_S0_ET1_T_T0_S1_
int* int__std____do_uninit_copy_int___int___int__(int* v1209, int* v1210, int* v1211) {
bb1212:
  int* __first1213;
  int* __last1214;
  int* __result1215;
  int* __retval1216;
  struct std___UninitDestroyGuard_int____void_ __guard1217;
  __first1213 = v1209;
  __last1214 = v1210;
  __result1215 = v1211;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard1217, &__result1215);
      while (1) {
        int* t1219 = __first1213;
        int* t1220 = __last1214;
        _Bool c1221 = ((t1219 != t1220)) ? 1 : 0;
        if (!c1221) break;
        int* t1222 = __result1215;
        int* t1223 = __first1213;
        void_std___Construct_int__int__(t1222, t1223);
      for_step1218: ;
        int* t1224 = __first1213;
        int c1225 = 1;
        int* ptr1226 = &(t1224)[c1225];
        __first1213 = ptr1226;
        int* t1227 = __result1215;
        int c1228 = 1;
        int* ptr1229 = &(t1227)[c1228];
        __result1215 = ptr1229;
      }
    std___UninitDestroyGuard_int___void___release(&__guard1217);
    int* t1230 = __result1215;
    __retval1216 = t1230;
    int* t1231 = __retval1216;
    int* ret_val1232 = t1231;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1217);
    }
    return ret_val1232;
  abort();
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v1233) {
bb1234:
  int* __it1235;
  int* __retval1236;
  __it1235 = v1233;
  int* t1237 = __it1235;
  __retval1236 = t1237;
  int* t1238 = __retval1236;
  return t1238;
}

// function: _ZSt18uninitialized_copyIPiS0_ET0_T_S2_S1_
int* int__std__uninitialized_copy_int___int__(int* v1239, int* v1240, int* v1241) {
bb1242:
  int* __first1243;
  int* __last1244;
  int* __result1245;
  int* __retval1246;
  __first1243 = v1239;
  __last1244 = v1240;
  __result1245 = v1241;
      long __n1247;
      int* t1248 = __last1244;
      int* t1249 = __first1243;
      long diff1250 = t1248 - t1249;
      __n1247 = diff1250;
        long t1251 = __n1247;
        long c1252 = 0;
        _Bool c1253 = ((t1251 > c1252)) ? 1 : 0;
        if (c1253) {
          int* t1254 = __result1245;
          int* r1255 = int__std____niter_base_int__(t1254);
          void* cast1256 = (void*)r1255;
          int* t1257 = __first1243;
          int* r1258 = int__std____niter_base_int__(t1257);
          void* cast1259 = (void*)r1258;
          long t1260 = __n1247;
          unsigned long cast1261 = (unsigned long)t1260;
          unsigned long c1262 = 4;
          unsigned long b1263 = cast1261 * c1262;
          void* r1264 = memcpy(cast1256, cast1259, b1263);
          long t1265 = __n1247;
          int* t1266 = __result1245;
          int* ptr1267 = &(t1266)[t1265];
          __result1245 = ptr1267;
        }
      int* t1268 = __result1245;
      __retval1246 = t1268;
      int* t1269 = __retval1246;
      return t1269;
  abort();
}

// function: _ZSt22__uninitialized_copy_aIPiS0_S0_iET1_T_T0_S1_RSaIT2_E
int* int__std____uninitialized_copy_a_int___int___int___int_(int* v1270, int* v1271, int* v1272, struct std__allocator_int_* v1273) {
bb1274:
  int* __first1275;
  int* __last1276;
  int* __result1277;
  struct std__allocator_int_* unnamed1278;
  int* __retval1279;
  __first1275 = v1270;
  __last1276 = v1271;
  __result1277 = v1272;
  unnamed1278 = v1273;
    _Bool r1280 = std__is_constant_evaluated();
    if (r1280) {
      int* t1281 = __first1275;
      int* t1282 = __last1276;
      int* t1283 = __result1277;
      int* r1284 = int__std____do_uninit_copy_int___int___int__(t1281, t1282, t1283);
      __retval1279 = r1284;
      int* t1285 = __retval1279;
      return t1285;
    }
    int* t1286 = __first1275;
    int* t1287 = __last1276;
    int* t1288 = __result1277;
    int* r1289 = int__std__uninitialized_copy_int___int__(t1286, t1287, t1288);
    __retval1279 = r1289;
    int* t1290 = __retval1279;
    return t1290;
  abort();
}

// function: _ZNSt6vectorIiSaIiEE21_M_range_initialize_nIPiS3_EEvT_T0_m
void void_std__vector_int__std__allocator_int______M_range_initialize_n_int___int__(struct std__vector_int__std__allocator_int__* v1291, int* v1292, int* v1293, unsigned long v1294) {
bb1295:
  struct std__vector_int__std__allocator_int__* this1296;
  int* __first1297;
  int* __last1298;
  unsigned long __n1299;
  int* __start1300;
  this1296 = v1291;
  __first1297 = v1292;
  __last1298 = v1293;
  __n1299 = v1294;
  struct std__vector_int__std__allocator_int__* t1301 = this1296;
  struct std___Vector_base_int__std__allocator_int__* base1302 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1301 + 0);
  unsigned long t1303 = __n1299;
  struct std___Vector_base_int__std__allocator_int__* base1304 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1301 + 0);
  struct std__allocator_int_* r1305 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1304);
  unsigned long r1306 = std__vector_int__std__allocator_int______S_check_init_len(t1303, r1305);
  int* r1307 = std___Vector_base_int__std__allocator_int______M_allocate(base1302, r1306);
  __start1300 = r1307;
  int* t1308 = __start1300;
  struct std___Vector_base_int__std__allocator_int__* base1309 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1301 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1310 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1309->_M_impl) + 0);
  base1310->_M_finish = t1308;
  struct std___Vector_base_int__std__allocator_int__* base1311 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1301 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1312 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1311->_M_impl) + 0);
  base1312->_M_start = t1308;
  int* t1313 = __start1300;
  unsigned long t1314 = __n1299;
  int* ptr1315 = &(t1313)[t1314];
  struct std___Vector_base_int__std__allocator_int__* base1316 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1301 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1317 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1316->_M_impl) + 0);
  base1317->_M_end_of_storage = ptr1315;
  int* t1318 = __first1297;
  int* t1319 = __last1298;
  int* t1320 = __start1300;
  struct std___Vector_base_int__std__allocator_int__* base1321 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1301 + 0);
  struct std__allocator_int_* r1322 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1321);
  int* r1323 = int__std____uninitialized_copy_a_int___int___int___int_(t1318, t1319, t1320, r1322);
  struct std___Vector_base_int__std__allocator_int__* base1324 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1301 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1325 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1324->_M_impl) + 0);
  base1325->_M_finish = r1323;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1326, int* v1327, unsigned long v1328) {
bb1329:
  struct std____new_allocator_int_* this1330;
  int* __p1331;
  unsigned long __n1332;
  this1330 = v1326;
  __p1331 = v1327;
  __n1332 = v1328;
  struct std____new_allocator_int_* t1333 = this1330;
    unsigned long c1334 = 4;
    unsigned long c1335 = 16;
    _Bool c1336 = ((c1334 > c1335)) ? 1 : 0;
    if (c1336) {
      int* t1337 = __p1331;
      void* cast1338 = (void*)t1337;
      unsigned long t1339 = __n1332;
      unsigned long c1340 = 4;
      unsigned long b1341 = t1339 * c1340;
      unsigned long c1342 = 4;
      operator_delete_3(cast1338, b1341, c1342);
      return;
    }
  int* t1343 = __p1331;
  void* cast1344 = (void*)t1343;
  unsigned long t1345 = __n1332;
  unsigned long c1346 = 4;
  unsigned long b1347 = t1345 * c1346;
  operator_delete_2(cast1344, b1347);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1348, int* v1349, unsigned long v1350) {
bb1351:
  struct std__allocator_int_* this1352;
  int* __p1353;
  unsigned long __n1354;
  this1352 = v1348;
  __p1353 = v1349;
  __n1354 = v1350;
  struct std__allocator_int_* t1355 = this1352;
    _Bool r1356 = std____is_constant_evaluated();
    if (r1356) {
      int* t1357 = __p1353;
      void* cast1358 = (void*)t1357;
      operator_delete(cast1358);
      return;
    }
  struct std____new_allocator_int_* base1359 = (struct std____new_allocator_int_*)((char *)t1355 + 0);
  int* t1360 = __p1353;
  unsigned long t1361 = __n1354;
  std____new_allocator_int___deallocate(base1359, t1360, t1361);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1362, int* v1363, unsigned long v1364) {
bb1365:
  struct std__allocator_int_* __a1366;
  int* __p1367;
  unsigned long __n1368;
  __a1366 = v1362;
  __p1367 = v1363;
  __n1368 = v1364;
  struct std__allocator_int_* t1369 = __a1366;
  int* t1370 = __p1367;
  unsigned long t1371 = __n1368;
  std__allocator_int___deallocate(t1369, t1370, t1371);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v1372, int* v1373, unsigned long v1374) {
bb1375:
  struct std___Vector_base_int__std__allocator_int__* this1376;
  int* __p1377;
  unsigned long __n1378;
  this1376 = v1372;
  __p1377 = v1373;
  __n1378 = v1374;
  struct std___Vector_base_int__std__allocator_int__* t1379 = this1376;
    int* t1380 = __p1377;
    _Bool cast1381 = (_Bool)t1380;
    if (cast1381) {
      struct std__allocator_int_* base1382 = (struct std__allocator_int_*)((char *)&(t1379->_M_impl) + 0);
      int* t1383 = __p1377;
      unsigned long t1384 = __n1378;
      std__allocator_traits_std__allocator_int_____deallocate(base1382, t1383, t1384);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1385) {
bb1386:
  struct std___Vector_base_int__std__allocator_int__* this1387;
  this1387 = v1385;
  struct std___Vector_base_int__std__allocator_int__* t1388 = this1387;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1389 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1388->_M_impl) + 0);
    int* t1390 = base1389->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1391 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1388->_M_impl) + 0);
    int* t1392 = base1391->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1393 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1388->_M_impl) + 0);
    int* t1394 = base1393->_M_start;
    long diff1395 = t1392 - t1394;
    unsigned long cast1396 = (unsigned long)diff1395;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1388, t1390, cast1396);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1388->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1397, struct std____new_allocator_int_* v1398) {
bb1399:
  struct std____new_allocator_int_* this1400;
  struct std____new_allocator_int_* unnamed1401;
  this1400 = v1397;
  unnamed1401 = v1398;
  struct std____new_allocator_int_* t1402 = this1400;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1403) {
bb1404:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1405;
  this1405 = v1403;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1406 = this1405;
  int* c1407 = ((void*)0);
  t1406->_M_start = c1407;
  int* c1408 = ((void*)0);
  t1406->_M_finish = c1408;
  int* c1409 = ((void*)0);
  t1406->_M_end_of_storage = c1409;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1410) {
bb1411:
  int* __location1412;
  __location1412 = v1410;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1413, int* v1414) {
bb1415:
  int* __first1416;
  int* __last1417;
  __first1416 = v1413;
  __last1417 = v1414;
      _Bool r1418 = std____is_constant_evaluated();
      if (r1418) {
          while (1) {
            int* t1420 = __first1416;
            int* t1421 = __last1417;
            _Bool c1422 = ((t1420 != t1421)) ? 1 : 0;
            if (!c1422) break;
            int* t1423 = __first1416;
            void_std__destroy_at_int_(t1423);
          for_step1419: ;
            int* t1424 = __first1416;
            int c1425 = 1;
            int* ptr1426 = &(t1424)[c1425];
            __first1416 = ptr1426;
          }
      }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* v1427, unsigned long v1428) {
bb1429:
  struct std___Vector_base_int__std__allocator_int__* this1430;
  unsigned long __n1431;
  this1430 = v1427;
  __n1431 = v1428;
  struct std___Vector_base_int__std__allocator_int__* t1432 = this1430;
  unsigned long t1433 = __n1431;
  int* r1434 = std___Vector_base_int__std__allocator_int______M_allocate(t1432, t1433);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1435 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1432->_M_impl) + 0);
  base1435->_M_start = r1434;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1436 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1432->_M_impl) + 0);
  int* t1437 = base1436->_M_start;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1438 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1432->_M_impl) + 0);
  base1438->_M_finish = t1437;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1439 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1432->_M_impl) + 0);
  int* t1440 = base1439->_M_start;
  unsigned long t1441 = __n1431;
  int* ptr1442 = &(t1440)[t1441];
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1443 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1432->_M_impl) + 0);
  base1443->_M_end_of_storage = ptr1442;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_
void std___Vector_base_int__std__allocator_int______Vector_base_2(struct std___Vector_base_int__std__allocator_int__* v1444, unsigned long v1445, struct std__allocator_int_* v1446) {
bb1447:
  struct std___Vector_base_int__std__allocator_int__* this1448;
  unsigned long __n1449;
  struct std__allocator_int_* __a1450;
  this1448 = v1444;
  __n1449 = v1445;
  __a1450 = v1446;
  struct std___Vector_base_int__std__allocator_int__* t1451 = this1448;
  struct std__allocator_int_* t1452 = __a1450;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t1451->_M_impl, t1452);
    unsigned long t1453 = __n1449;
    std___Vector_base_int__std__allocator_int______M_create_storage(t1451, t1453);
  return;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v1454, int* v1455) {
bb1456:
  int* __location1457;
  int* __args1458;
  int* __retval1459;
  void* __loc1460;
  __location1457 = v1454;
  __args1458 = v1455;
  int* t1461 = __location1457;
  void* cast1462 = (void*)t1461;
  __loc1460 = cast1462;
    void* t1463 = __loc1460;
    int* cast1464 = (int*)t1463;
    int* t1465 = __args1458;
    int t1466 = *t1465;
    *cast1464 = t1466;
    __retval1459 = cast1464;
    int* t1467 = __retval1459;
    return t1467;
  abort();
}

// function: _ZSt10_ConstructIiJRKiEEvPT_DpOT0_
void void_std___Construct_int__int_const__(int* v1468, int* v1469) {
bb1470:
  int* __p1471;
  int* __args1472;
  __p1471 = v1468;
  __args1472 = v1469;
    _Bool r1473 = std____is_constant_evaluated();
    if (r1473) {
      int* t1474 = __p1471;
      int* t1475 = __args1472;
      int* r1476 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1474, t1475);
      return;
    }
  int* t1477 = __p1471;
  void* cast1478 = (void*)t1477;
  int* cast1479 = (int*)cast1478;
  int* t1480 = __args1472;
  int t1481 = *t1480;
  *cast1479 = t1481;
  return;
}

// function: _ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_
int* int__std____do_uninit_fill_n_int___unsigned_long__int_(int* v1482, unsigned long v1483, int* v1484) {
bb1485:
  int* __first1486;
  unsigned long __n1487;
  int* __x1488;
  int* __retval1489;
  struct std___UninitDestroyGuard_int____void_ __guard1490;
  __first1486 = v1482;
  __n1487 = v1483;
  __x1488 = v1484;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard1490, &__first1486);
        do {
              unsigned long t1491 = __n1487;
              unsigned long c1492 = 0;
              _Bool c1493 = ((t1491 >= c1492)) ? 1 : 0;
              _Bool u1494 = !c1493;
              if (u1494) {
                char* cast1495 = (char*)&(_str_14);
                int c1496 = 463;
                char* cast1497 = (char*)&(__PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_);
                char* cast1498 = (char*)&(_str_15);
                std____glibcxx_assert_fail(cast1495, c1496, cast1497, cast1498);
              }
          _Bool c1499 = 0;
          if (!c1499) break;
        } while (1);
      while (1) {
        unsigned long t1501 = __n1487;
        unsigned long u1502 = t1501 - 1;
        __n1487 = u1502;
        _Bool cast1503 = (_Bool)t1501;
        if (!cast1503) break;
        int* t1504 = __first1486;
        int* t1505 = __x1488;
        void_std___Construct_int__int_const__(t1504, t1505);
      for_step1500: ;
        int* t1506 = __first1486;
        int c1507 = 1;
        int* ptr1508 = &(t1506)[c1507];
        __first1486 = ptr1508;
      }
    std___UninitDestroyGuard_int___void___release(&__guard1490);
    int* t1509 = __first1486;
    __retval1489 = t1509;
    int* t1510 = __retval1489;
    int* ret_val1511 = t1510;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1490);
    }
    return ret_val1511;
  abort();
}

// function: _ZSt20uninitialized_fill_nIPimiET_S1_T0_RKT1_
int* int__std__uninitialized_fill_n_int___unsigned_long__int_(int* v1512, unsigned long v1513, int* v1514) {
bb1515:
  int* __first1516;
  unsigned long __n1517;
  int* __x1518;
  int* __retval1519;
  __first1516 = v1512;
  __n1517 = v1513;
  __x1518 = v1514;
  int* t1520 = __first1516;
  unsigned long t1521 = __n1517;
  int* t1522 = __x1518;
  int* r1523 = int__std____do_uninit_fill_n_int___unsigned_long__int_(t1520, t1521, t1522);
  __retval1519 = r1523;
  int* t1524 = __retval1519;
  return t1524;
}

// function: _ZSt24__uninitialized_fill_n_aIPimiiET_S1_T0_RKT1_RSaIT2_E
int* int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(int* v1525, unsigned long v1526, int* v1527, struct std__allocator_int_* v1528) {
bb1529:
  int* __first1530;
  unsigned long __n1531;
  int* __x1532;
  struct std__allocator_int_* unnamed1533;
  int* __retval1534;
  __first1530 = v1525;
  __n1531 = v1526;
  __x1532 = v1527;
  unnamed1533 = v1528;
    _Bool r1535 = std__is_constant_evaluated();
    if (r1535) {
      int* t1536 = __first1530;
      unsigned long t1537 = __n1531;
      int* t1538 = __x1532;
      int* r1539 = int__std____do_uninit_fill_n_int___unsigned_long__int_(t1536, t1537, t1538);
      __retval1534 = r1539;
      int* t1540 = __retval1534;
      return t1540;
    }
  int* t1541 = __first1530;
  unsigned long t1542 = __n1531;
  int* t1543 = __x1532;
  int* r1544 = int__std__uninitialized_fill_n_int___unsigned_long__int_(t1541, t1542, t1543);
  __retval1534 = r1544;
  int* t1545 = __retval1534;
  return t1545;
}

// function: _ZNSt6vectorIiSaIiEE18_M_fill_initializeEmRKi
void std__vector_int__std__allocator_int______M_fill_initialize(struct std__vector_int__std__allocator_int__* v1546, unsigned long v1547, int* v1548) {
bb1549:
  struct std__vector_int__std__allocator_int__* this1550;
  unsigned long __n1551;
  int* __value1552;
  this1550 = v1546;
  __n1551 = v1547;
  __value1552 = v1548;
  struct std__vector_int__std__allocator_int__* t1553 = this1550;
  struct std___Vector_base_int__std__allocator_int__* base1554 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1553 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1555 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1554->_M_impl) + 0);
  int* t1556 = base1555->_M_start;
  unsigned long t1557 = __n1551;
  int* t1558 = __value1552;
  struct std___Vector_base_int__std__allocator_int__* base1559 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1553 + 0);
  struct std__allocator_int_* r1560 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1559);
  int* r1561 = int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(t1556, t1557, t1558, r1560);
  struct std___Vector_base_int__std__allocator_int__* base1562 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1553 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1563 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1562->_M_impl) + 0);
  base1563->_M_finish = r1561;
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1564, int* v1565, struct std__allocator_int_* v1566) {
bb1567:
  int* __first1568;
  int* __last1569;
  struct std__allocator_int_* unnamed1570;
  __first1568 = v1564;
  __last1569 = v1565;
  unnamed1570 = v1566;
  int* t1571 = __first1568;
  int* t1572 = __last1569;
  void_std___Destroy_int__(t1571, t1572);
  return;
}

