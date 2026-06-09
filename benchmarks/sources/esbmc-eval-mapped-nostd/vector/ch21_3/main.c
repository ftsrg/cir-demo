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
// Per-RTTI address tags: each thrown/caught type symbol gets a
// distinct storage location so catch dispatch is a pointer compare.
static const char __cir_eh_type__ZTISt12out_of_range[] = "_ZTISt12out_of_range";

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
union anon_0 { char* __field0; char __field1[8]; };
struct anon_struct_0 { unsigned char* __field0[5]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____cow_string { union anon_0 __field0; };
struct std____detail____move_iter_cat_int___ { unsigned char __field0; };
struct std____new_allocator_int_ { unsigned char __field0; };
struct std__allocator_int_ { unsigned char __field0; };
struct std__exception { void* __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__iterator_std__output_iterator_tag__void__void__void__void_ { unsigned char __field0; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__logic_error { struct std__exception __field0; struct std____cow_string __field1; };
struct std__move_iterator_int___ { int* _M_current; };
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__ostream_iterator_int__char__std__char_traits_char__ { struct std__basic_ostream_char__std__char_traits_char__* _M_stream; char* _M_string; };
struct std__out_of_range { struct std__logic_error __field0; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__ranges____distance_fn { unsigned char __field0; };
struct std__ranges____imove___IterMove { unsigned char __field0; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

extern void *_ZTVSt12out_of_range[];
int __const_main_array[6] = {1, 2, 3, 4, 5, 6};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[2] = " ";
char _str_1[27] = "Vector integers contains: ";
char _str_2[29] = "\nFirst element of integers: ";
char _str_3[28] = "\nLast element of integers: ";
char _str_4[46] = "\n\nContents of vector integers after changes: ";
static const char _ZTISt12out_of_range__n_[] = "_ZTISt12out_of_range";
static void* _ZTISt12out_of_range[2] = {(void*)0, (void*)_ZTISt12out_of_range__n_};
char _str_5[14] = "\n\nException: ";
char _str_6[48] = "\n\nVector integers after erasing first element: ";
char _str_7[46] = "\nAfter erasing all elements, vector integers ";
char _str_8[3] = "is";
char _str_9[7] = "is not";
char _str_10[7] = " empty";
char _str_11[45] = "\n\nContents of vector integers before clear: ";
char _str_12[31] = "\nAfter clear, vector integers ";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_13[49] = "cannot create std::vector larger than max_size()";
char _str_14[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE5frontEv[78] = "reference std::vector<int>::front() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_15[15] = "!this->empty()";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv[77] = "reference std::vector<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_16[19] = "__n < this->size()";
char _str_17[74] = "vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)";
char _str_18[26] = "vector::_M_realloc_insert";
extern void *_ZTVSt12out_of_range[];
char _str_19[24] = "vector::_M_range_insert";
struct std__ranges____imove___IterMove _ZNSt6ranges4_Cpo9iter_moveE;
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
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
int* std__vector_int__std__allocator_int_____front(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
int* std__vector_int__std__allocator_int_____back(struct std__vector_int__std__allocator_int__* p0);
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
extern void std____throw_out_of_range_fmt(char* p0, ...);
void std__vector_int__std__allocator_int______M_range_check_unsigned_long__const(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
int* std__vector_int__std__allocator_int_____at(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
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
int* int__std____copy_move_backward_a_true__int___int__(int* p0, int* p1, int* p2);
int* int__std____miter_base_int__(int* p0);
int* int__std__move_backward_int___int__(int* p0, int* p1, int* p2);
void void_std__vector_int__std__allocator_int______M_insert_aux_int_(struct std__vector_int__std__allocator_int__* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* p0);
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* p0);
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
int* std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
int* int__std____relocate_a_int___int___std__allocator_int___(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
int* std__vector_int__std__allocator_int______S_relocate(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* p0);
void void_std__vector_int__std__allocator_int______M_realloc_insert_int_(struct std__vector_int__std__allocator_int__* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int______M_insert_rval(struct std__vector_int__std__allocator_int__* p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p1, int* p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____insert(struct std__vector_int__std__allocator_int__* p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p1, int* p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
void _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2IPiQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
extern int __gxx_personality_v0();
void std__out_of_range__out_of_range(struct std__out_of_range* p0, struct std__out_of_range* p1);
extern char* std__logic_error__what___const(struct std__logic_error* p0);
void std__out_of_range___out_of_range(struct std__out_of_range* p0) {}
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____niter_wrap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, int* p1);
int* int__std____copy_move_a2_true__int___int___int__(int* p0, int* p1, int* p2);
int* int__std____copy_move_a1_true__int___int__(int* p0, int* p1, int* p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____copy_move_a_true____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__move___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int______M_erase(struct std__vector_int__std__allocator_int__* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____erase(struct std__vector_int__std__allocator_int__* p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p1);
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);
void std__vector_int__std__allocator_int______M_erase_at_end(struct std__vector_int__std__allocator_int__* p0, int* p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int______M_erase_2(struct std__vector_int__std__allocator_int__* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____erase_2(struct std__vector_int__std__allocator_int__* p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p2);
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin___const(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end___const(struct std__vector_int__std__allocator_int__* p0);
_Bool std__vector_int__std__allocator_int_____empty___const(struct std__vector_int__std__allocator_int__* p0);
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
void void_std____assign_one_false__int___int__(int** p0, int** p1);
int* int__std____copy_move_a2_false__int___int___int__(int* p0, int* p1, int* p2);
int* int__std____copy_move_a1_false__int___int__(int* p0, int* p1, int* p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____copy_move_a_false__int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(int* p0, int* p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__copy_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(int* p0, int* p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
void void_std__advance_int___unsigned_long_(int** p0, unsigned long p1);
struct std__move_iterator_int___ std__move_iterator_int___std____make_move_if_noexcept_iterator_int__std__move_iterator_int____(int* p0);
int* int__std____uninitialized_move_if_noexcept_a_int___int___std__allocator_int___(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
void void_std__vector_int__std__allocator_int______M_range_insert_int__(struct std__vector_int__std__allocator_int__* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2, int* p3, struct std__forward_iterator_tag p4);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__vector_int__std__allocator_int_____insert_int___void_(struct std__vector_int__std__allocator_int__* p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p1, int* p2, int* p3);
void std__vector_int__std__allocator_int_____clear(struct std__vector_int__std__allocator_int__* p0);
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
void __clang_cir_catch_copy__ZTSSt12out_of_range(struct std__out_of_range* p0, struct std__out_of_range* p1);
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
extern void std__logic_error__logic_error(struct std__logic_error* p0, struct std__logic_error* p1);
void std__logic_error___logic_error(struct std__logic_error* p0) {}

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
      if (__cir_exc_active) {
        {
          struct std___Vector_base_int__std__allocator_int__* base20 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t14 + 0);
          std___Vector_base_int__std__allocator_int_______Vector_base(base20);
        }
        return;
      }
      unsigned long cast21 = (unsigned long)r19;
      __n17 = cast21;
      int* t22 = __first11;
      int* t23 = __last12;
      unsigned long t24 = __n17;
      void_std__vector_int__std__allocator_int______M_range_initialize_n_int___int__(t14, t22, t23, t24);
      if (__cir_exc_active) {
        {
          struct std___Vector_base_int__std__allocator_int__* base25 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t14 + 0);
          std___Vector_base_int__std__allocator_int_______Vector_base(base25);
        }
        return;
      }
      {
        struct std___Vector_base_int__std__allocator_int__* base26 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t14 + 0);
        std___Vector_base_int__std__allocator_int_______Vector_base(base26);
      }
      return;
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v27) {
bb28:
  struct std__allocator_int_* this29;
  this29 = v27;
  struct std__allocator_int_* t30 = this29;
  return;
}

// function: _ZNSt16ostream_iteratorIicSt11char_traitsIcEEC2ERSoPKc
void std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator_2(struct std__ostream_iterator_int__char__std__char_traits_char__* v31, struct std__basic_ostream_char__std__char_traits_char__* v32, char* v33) {
bb34:
  struct std__ostream_iterator_int__char__std__char_traits_char__* this35;
  struct std__basic_ostream_char__std__char_traits_char__* __s36;
  char* __c37;
  this35 = v31;
  __s36 = v32;
  __c37 = v33;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t38 = this35;
  struct std__iterator_std__output_iterator_tag__void__void__void__void_* base39 = (struct std__iterator_std__output_iterator_tag__void__void__void__void_*)((char *)t38 + 0);
  struct std__basic_ostream_char__std__char_traits_char__* t40 = __s36;
  t38->_M_stream = t40;
  char* t41 = __c37;
  t38->_M_string = t41;
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v42, int v43) {
bb44:
  int __a45;
  int __b46;
  int __retval47;
  __a45 = v42;
  __b46 = v43;
  int t48 = __a45;
  int t49 = __b46;
  int b50 = t48 | t49;
  __retval47 = b50;
  int t51 = __retval47;
  return t51;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v52) {
bb53:
  struct std__basic_ios_char__std__char_traits_char__* this54;
  int __retval55;
  this54 = v52;
  struct std__basic_ios_char__std__char_traits_char__* t56 = this54;
  struct std__ios_base* base57 = (struct std__ios_base*)((char *)t56 + 0);
  int t58 = base57->_M_streambuf_state;
  __retval55 = t58;
  int t59 = __retval55;
  return t59;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v60, int v61) {
bb62:
  struct std__basic_ios_char__std__char_traits_char__* this63;
  int __state64;
  this63 = v60;
  __state64 = v61;
  struct std__basic_ios_char__std__char_traits_char__* t65 = this63;
  int r66 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t65);
  if (__cir_exc_active) {
    return;
  }
  int t67 = __state64;
  int r68 = std__operator_(r66, t67);
  std__basic_ios_char__std__char_traits_char_____clear(t65, r68);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v69, char* v70) {
bb71:
  char* __c172;
  char* __c273;
  _Bool __retval74;
  __c172 = v69;
  __c273 = v70;
  char* t75 = __c172;
  char t76 = *t75;
  int cast77 = (int)t76;
  char* t78 = __c273;
  char t79 = *t78;
  int cast80 = (int)t79;
  _Bool c81 = ((cast77 == cast80)) ? 1 : 0;
  __retval74 = c81;
  _Bool t82 = __retval74;
  return t82;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v83) {
bb84:
  char* __p85;
  unsigned long __retval86;
  unsigned long __i87;
  __p85 = v83;
  unsigned long c88 = 0;
  __i87 = c88;
    char ref_tmp089;
    while (1) {
      unsigned long t90 = __i87;
      char* t91 = __p85;
      char* ptr92 = &(t91)[t90];
      char c93 = 0;
      ref_tmp089 = c93;
      _Bool r94 = __gnu_cxx__char_traits_char___eq(ptr92, &ref_tmp089);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u95 = !r94;
      if (!u95) break;
      unsigned long t96 = __i87;
      unsigned long u97 = t96 + 1;
      __i87 = u97;
    }
  unsigned long t98 = __i87;
  __retval86 = t98;
  unsigned long t99 = __retval86;
  return t99;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v100) {
bb101:
  char* __s102;
  unsigned long __retval103;
  __s102 = v100;
    _Bool r104 = std____is_constant_evaluated();
    if (r104) {
      char* t105 = __s102;
      unsigned long r106 = __gnu_cxx__char_traits_char___length(t105);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval103 = r106;
      unsigned long t107 = __retval103;
      return t107;
    }
  char* t108 = __s102;
  unsigned long r109 = strlen(t108);
  __retval103 = r109;
  unsigned long t110 = __retval103;
  return t110;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v111, char* v112) {
bb113:
  struct std__basic_ostream_char__std__char_traits_char__* __out114;
  char* __s115;
  struct std__basic_ostream_char__std__char_traits_char__* __retval116;
  __out114 = v111;
  __s115 = v112;
    char* t117 = __s115;
    _Bool cast118 = (_Bool)t117;
    _Bool u119 = !cast118;
    if (u119) {
      struct std__basic_ostream_char__std__char_traits_char__* t120 = __out114;
      void** v121 = (void**)t120;
      void* v122 = *((void**)v121);
      unsigned char* cast123 = (unsigned char*)v122;
      long c124 = -24;
      unsigned char* ptr125 = &(cast123)[c124];
      long* cast126 = (long*)ptr125;
      long t127 = *cast126;
      unsigned char* cast128 = (unsigned char*)t120;
      unsigned char* ptr129 = &(cast128)[t127];
      struct std__basic_ostream_char__std__char_traits_char__* cast130 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr129;
      struct std__basic_ios_char__std__char_traits_char__* cast131 = (struct std__basic_ios_char__std__char_traits_char__*)cast130;
      int t132 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast131, t132);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t133 = __out114;
      char* t134 = __s115;
      char* t135 = __s115;
      unsigned long r136 = std__char_traits_char___length(t135);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast137 = (long)r136;
      struct std__basic_ostream_char__std__char_traits_char__* r138 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t133, t134, cast137);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t139 = __out114;
  __retval116 = t139;
  struct std__basic_ostream_char__std__char_traits_char__* t140 = __retval116;
  return t140;
}

// function: _ZSt12__niter_wrapISt16ostream_iteratorIicSt11char_traitsIcEEET_RKS4_S4_
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____niter_wrap_std__ostream_iterator_int__char__std__char_traits_char_____(struct std__ostream_iterator_int__char__std__char_traits_char__* v141, struct std__ostream_iterator_int__char__std__char_traits_char__ v142) {
bb143:
  struct std__ostream_iterator_int__char__std__char_traits_char__* unnamed144;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __res145;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __retval146;
  unnamed144 = v141;
  __res145 = v142;
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&__retval146, &__res145);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t147 = __retval146;
  return t147;
}

// function: _ZNSt16ostream_iteratorIicSt11char_traitsIcEEdeEv
struct std__ostream_iterator_int__char__std__char_traits_char__* std__ostream_iterator_int__char__std__char_traits_char_____operator__2(struct std__ostream_iterator_int__char__std__char_traits_char__* v148) {
bb149:
  struct std__ostream_iterator_int__char__std__char_traits_char__* this150;
  struct std__ostream_iterator_int__char__std__char_traits_char__* __retval151;
  this150 = v148;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t152 = this150;
  __retval151 = t152;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t153 = __retval151;
  return t153;
}

// function: _ZNSt16ostream_iteratorIicSt11char_traitsIcEEaSERKi
struct std__ostream_iterator_int__char__std__char_traits_char__* std__ostream_iterator_int__char__std__char_traits_char_____operator_(struct std__ostream_iterator_int__char__std__char_traits_char__* v154, int* v155) {
bb156:
  struct std__ostream_iterator_int__char__std__char_traits_char__* this157;
  int* __value158;
  struct std__ostream_iterator_int__char__std__char_traits_char__* __retval159;
  this157 = v154;
  __value158 = v155;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t160 = this157;
  struct std__basic_ostream_char__std__char_traits_char__* t161 = t160->_M_stream;
  int* t162 = __value158;
  int t163 = *t162;
  struct std__basic_ostream_char__std__char_traits_char__* r164 = std__ostream__operator__(t161, t163);
  if (__cir_exc_active) {
    struct std__ostream_iterator_int__char__std__char_traits_char__* __cir_eh_ret = (struct std__ostream_iterator_int__char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
    char* t165 = t160->_M_string;
    _Bool cast166 = (_Bool)t165;
    if (cast166) {
      struct std__basic_ostream_char__std__char_traits_char__* t167 = t160->_M_stream;
      char* t168 = t160->_M_string;
      struct std__basic_ostream_char__std__char_traits_char__* r169 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(t167, t168);
      if (__cir_exc_active) {
        struct std__ostream_iterator_int__char__std__char_traits_char__* __cir_eh_ret = (struct std__ostream_iterator_int__char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  __retval159 = t160;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t170 = __retval159;
  return t170;
}

// function: _ZSt12__assign_oneILb0ESt16ostream_iteratorIicSt11char_traitsIcEEPiEvRT0_RT1_
void void_std____assign_one_false__std__ostream_iterator_int__char__std__char_traits_char_____int__(struct std__ostream_iterator_int__char__std__char_traits_char__* v171, int** v172) {
bb173:
  struct std__ostream_iterator_int__char__std__char_traits_char__* __out174;
  int** __in175;
  __out174 = v171;
  __in175 = v172;
    int** t176 = __in175;
    int* t177 = *t176;
    struct std__ostream_iterator_int__char__std__char_traits_char__* t178 = __out174;
    struct std__ostream_iterator_int__char__std__char_traits_char__* r179 = std__ostream_iterator_int__char__std__char_traits_char_____operator__2(t178);
    struct std__ostream_iterator_int__char__std__char_traits_char__* r180 = std__ostream_iterator_int__char__std__char_traits_char_____operator_(r179, t177);
    if (__cir_exc_active) {
      return;
    }
  return;
}

// function: _ZNSt16ostream_iteratorIicSt11char_traitsIcEEppEv
struct std__ostream_iterator_int__char__std__char_traits_char__* std__ostream_iterator_int__char__std__char_traits_char_____operator__(struct std__ostream_iterator_int__char__std__char_traits_char__* v181) {
bb182:
  struct std__ostream_iterator_int__char__std__char_traits_char__* this183;
  struct std__ostream_iterator_int__char__std__char_traits_char__* __retval184;
  this183 = v181;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t185 = this183;
  __retval184 = t185;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t186 = __retval184;
  return t186;
}

// function: _ZSt14__copy_move_a2ILb0EPiS0_St16ostream_iteratorIicSt11char_traitsIcEEET2_T0_T1_S5_
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a2_false__int___int___std__ostream_iterator_int__char__std__char_traits_char_____(int* v187, int* v188, struct std__ostream_iterator_int__char__std__char_traits_char__ v189) {
bb190:
  int* __first191;
  int* __last192;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __result193;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __retval194;
  __first191 = v187;
  __last192 = v188;
  __result193 = v189;
    while (1) {
      int* t196 = __first191;
      int* t197 = __last192;
      _Bool c198 = ((t196 != t197)) ? 1 : 0;
      if (!c198) break;
      void_std____assign_one_false__std__ostream_iterator_int__char__std__char_traits_char_____int__(&__result193, &__first191);
      if (__cir_exc_active) {
        struct std__ostream_iterator_int__char__std__char_traits_char__ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
    for_step195: ;
      struct std__ostream_iterator_int__char__std__char_traits_char__* r199 = std__ostream_iterator_int__char__std__char_traits_char_____operator__(&__result193);
      int* t200 = __first191;
      int c201 = 1;
      int* ptr202 = &(t200)[c201];
      __first191 = ptr202;
    }
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&__retval194, &__result193);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t203 = __retval194;
  return t203;
}

// function: _ZSt14__copy_move_a1ILb0EPiSt16ostream_iteratorIicSt11char_traitsIcEEET1_T0_S6_S5_
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a1_false__int___std__ostream_iterator_int__char__std__char_traits_char_____(int* v204, int* v205, struct std__ostream_iterator_int__char__std__char_traits_char__ v206) {
bb207:
  int* __first208;
  int* __last209;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __result210;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __retval211;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp0212;
  __first208 = v204;
  __last209 = v205;
  __result210 = v206;
  int* t213 = __first208;
  int* t214 = __last209;
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp0212, &__result210);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t215 = agg_tmp0212;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r216 = std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a2_false__int___int___std__ostream_iterator_int__char__std__char_traits_char_____(t213, t214, t215);
  if (__cir_exc_active) {
    struct std__ostream_iterator_int__char__std__char_traits_char__ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval211 = r216;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t217 = __retval211;
  return t217;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v218) {
bb219:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this220;
  int** __retval221;
  this220 = v218;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t222 = this220;
  __retval221 = &t222->_M_current;
  int** t223 = __retval221;
  return t223;
}

// function: _ZSt12__niter_baseIPiSt6vectorIiSaIiEEET_N9__gnu_cxx17__normal_iteratorIS4_T0_EE
int* int__std____niter_base_int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v224) {
bb225:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it226;
  int* __retval227;
  __it226 = v224;
  int** r228 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__it226);
  int* t229 = *r228;
  __retval227 = t229;
  int* t230 = __retval227;
  return t230;
}

// function: _ZSt12__niter_baseISt16ostream_iteratorIicSt11char_traitsIcEEET_S4_
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____niter_base_std__ostream_iterator_int__char__std__char_traits_char_____(struct std__ostream_iterator_int__char__std__char_traits_char__ v231) {
bb232:
  struct std__ostream_iterator_int__char__std__char_traits_char__ __it233;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __retval234;
  __it233 = v231;
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&__retval234, &__it233);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t235 = __retval234;
  return t235;
}

// function: _ZSt13__copy_move_aILb0EN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEESt16ostream_iteratorIicSt11char_traitsIcEEET1_T0_SC_SB_
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a_false____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v236, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v237, struct std__ostream_iterator_int__char__std__char_traits_char__ v238) {
bb239:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first240;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last241;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __result242;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __retval243;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp0244;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1245;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2246;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp3247;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp4248;
  __first240 = v236;
  __last241 = v237;
  __result242 = v238;
  agg_tmp1245 = __first240; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t249 = agg_tmp1245;
  int* r250 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t249);
  agg_tmp2246 = __last241; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t251 = agg_tmp2246;
  int* r252 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t251);
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp4248, &__result242);
  struct std__ostream_iterator_int__char__std__char_traits_char__ t253 = agg_tmp4248;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r254 = std__ostream_iterator_int__char__std__char_traits_char____std____niter_base_std__ostream_iterator_int__char__std__char_traits_char_____(t253);
  agg_tmp3247 = r254;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t255 = agg_tmp3247;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r256 = std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a1_false__int___std__ostream_iterator_int__char__std__char_traits_char_____(r250, r252, t255);
  if (__cir_exc_active) {
    struct std__ostream_iterator_int__char__std__char_traits_char__ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  agg_tmp0244 = r256;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t257 = agg_tmp0244;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r258 = std__ostream_iterator_int__char__std__char_traits_char____std____niter_wrap_std__ostream_iterator_int__char__std__char_traits_char_____(&__result242, t257);
  if (__cir_exc_active) {
    struct std__ostream_iterator_int__char__std__char_traits_char__ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval243 = r258;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t259 = __retval243;
  return t259;
}

// function: _ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEET_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v260) {
bb261:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it262;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval263;
  __it262 = v260;
  __retval263 = __it262; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t264 = __retval263;
  return t264;
}

// function: _ZSt4copyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEESt16ostream_iteratorIicSt11char_traitsIcEEET0_T_SC_SB_
struct std__ostream_iterator_int__char__std__char_traits_char__ std__ostream_iterator_int__char__std__char_traits_char____std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v265, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v266, struct std__ostream_iterator_int__char__std__char_traits_char__ v267) {
bb268:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first269;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last270;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __result271;
  struct std__ostream_iterator_int__char__std__char_traits_char__ __retval272;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0273;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1274;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2275;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3276;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp4277;
  __first269 = v265;
  __last270 = v266;
  __result271 = v267;
  agg_tmp1274 = __first269; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t278 = agg_tmp1274;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r279 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t278);
  if (__cir_exc_active) {
    struct std__ostream_iterator_int__char__std__char_traits_char__ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  agg_tmp0273 = r279;
  agg_tmp3276 = __last270; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t280 = agg_tmp3276;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r281 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t280);
  if (__cir_exc_active) {
    struct std__ostream_iterator_int__char__std__char_traits_char__ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  agg_tmp2275 = r281;
  std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp4277, &__result271);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t282 = agg_tmp0273;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t283 = agg_tmp2275;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t284 = agg_tmp4277;
  struct std__ostream_iterator_int__char__std__char_traits_char__ r285 = std__ostream_iterator_int__char__std__char_traits_char____std____copy_move_a_false____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(t282, t283, t284);
  if (__cir_exc_active) {
    struct std__ostream_iterator_int__char__std__char_traits_char__ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval272 = r285;
  struct std__ostream_iterator_int__char__std__char_traits_char__ t286 = __retval272;
  return t286;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v287, int** v288) {
bb289:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this290;
  int** __i291;
  this290 = v287;
  __i291 = v288;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t292 = this290;
  int** t293 = __i291;
  int* t294 = *t293;
  t292->_M_current = t294;
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v295) {
bb296:
  struct std__vector_int__std__allocator_int__* this297;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval298;
  this297 = v295;
  struct std__vector_int__std__allocator_int__* t299 = this297;
  struct std___Vector_base_int__std__allocator_int__* base300 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t299 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base301 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base300->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval298, &base301->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t302 = __retval298;
  return t302;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v303) {
bb304:
  struct std__vector_int__std__allocator_int__* this305;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval306;
  this305 = v303;
  struct std__vector_int__std__allocator_int__* t307 = this305;
  struct std___Vector_base_int__std__allocator_int__* base308 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t307 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base309 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base308->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval306, &base309->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t310 = __retval306;
  return t310;
}

// function: _ZNSt16ostream_iteratorIicSt11char_traitsIcEEC2ERKS2_
void std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(struct std__ostream_iterator_int__char__std__char_traits_char__* v311, struct std__ostream_iterator_int__char__std__char_traits_char__* v312) {
bb313:
  struct std__ostream_iterator_int__char__std__char_traits_char__* this314;
  struct std__ostream_iterator_int__char__std__char_traits_char__* __obj315;
  this314 = v311;
  __obj315 = v312;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t316 = this314;
  struct std__iterator_std__output_iterator_tag__void__void__void__void_* base317 = (struct std__iterator_std__output_iterator_tag__void__void__void__void_*)((char *)t316 + 0);
  struct std__ostream_iterator_int__char__std__char_traits_char__* t318 = __obj315;
  struct std__basic_ostream_char__std__char_traits_char__* t319 = t318->_M_stream;
  t316->_M_stream = t319;
  struct std__ostream_iterator_int__char__std__char_traits_char__* t320 = __obj315;
  char* t321 = t320->_M_string;
  t316->_M_string = t321;
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v322) {
bb323:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this324;
  int* __retval325;
  this324 = v322;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t326 = this324;
  int* t327 = t326->_M_current;
  __retval325 = t327;
  int* t328 = __retval325;
  return t328;
}

// function: _ZNSt6vectorIiSaIiEE5frontEv
int* std__vector_int__std__allocator_int_____front(struct std__vector_int__std__allocator_int__* v329) {
bb330:
  struct std__vector_int__std__allocator_int__* this331;
  int* __retval332;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0333;
  this331 = v329;
  struct std__vector_int__std__allocator_int__* t334 = this331;
    do {
          _Bool r335 = std__vector_int__std__allocator_int_____empty___const(t334);
          if (r335) {
            char* cast336 = (char*)&(_str_14);
            int c337 = 1346;
            char* cast338 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE5frontEv);
            char* cast339 = (char*)&(_str_15);
            std____glibcxx_assert_fail(cast336, c337, cast338, cast339);
          }
      _Bool c340 = 0;
      if (!c340) break;
    } while (1);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r341 = std__vector_int__std__allocator_int_____begin(t334);
  ref_tmp0333 = r341;
  int* r342 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0333);
  __retval332 = r342;
  int* t343 = __retval332;
  return t343;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEmiEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v344, long v345) {
bb346:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this347;
  long __n348;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval349;
  int* ref_tmp0350;
  this347 = v344;
  __n348 = v345;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t351 = this347;
  int* t352 = t351->_M_current;
  long t353 = __n348;
  long u354 = -t353;
  int* ptr355 = &(t352)[u354];
  ref_tmp0350 = ptr355;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval349, &ref_tmp0350);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t356 = __retval349;
  return t356;
}

// function: _ZNSt6vectorIiSaIiEE4backEv
int* std__vector_int__std__allocator_int_____back(struct std__vector_int__std__allocator_int__* v357) {
bb358:
  struct std__vector_int__std__allocator_int__* this359;
  int* __retval360;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0361;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1362;
  this359 = v357;
  struct std__vector_int__std__allocator_int__* t363 = this359;
    do {
          _Bool r364 = std__vector_int__std__allocator_int_____empty___const(t363);
          if (r364) {
            char* cast365 = (char*)&(_str_14);
            int c366 = 1370;
            char* cast367 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv);
            char* cast368 = (char*)&(_str_15);
            std____glibcxx_assert_fail(cast365, c366, cast367, cast368);
          }
      _Bool c369 = 0;
      if (!c369) break;
    } while (1);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r370 = std__vector_int__std__allocator_int_____end(t363);
  ref_tmp1362 = r370;
  long c371 = 1;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r372 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&ref_tmp1362, c371);
  ref_tmp0361 = r372;
  int* r373 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0361);
  __retval360 = r373;
  int* t374 = __retval360;
  return t374;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v375) {
bb376:
  struct std__vector_int__std__allocator_int__* this377;
  unsigned long __retval378;
  long __dif379;
  this377 = v375;
  struct std__vector_int__std__allocator_int__* t380 = this377;
  struct std___Vector_base_int__std__allocator_int__* base381 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t380 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base382 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base381->_M_impl) + 0);
  int* t383 = base382->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base384 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t380 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base385 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base384->_M_impl) + 0);
  int* t386 = base385->_M_start;
  long diff387 = t383 - t386;
  __dif379 = diff387;
    long t388 = __dif379;
    long c389 = 0;
    _Bool c390 = ((t388 < c389)) ? 1 : 0;
    if (c390) {
      __builtin_unreachable();
    }
  long t391 = __dif379;
  unsigned long cast392 = (unsigned long)t391;
  __retval378 = cast392;
  unsigned long t393 = __retval378;
  return t393;
}

// function: _ZNSt6vectorIiSaIiEEixEm
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* v394, unsigned long v395) {
bb396:
  struct std__vector_int__std__allocator_int__* this397;
  unsigned long __n398;
  int* __retval399;
  this397 = v394;
  __n398 = v395;
  struct std__vector_int__std__allocator_int__* t400 = this397;
    do {
          unsigned long t401 = __n398;
          unsigned long r402 = std__vector_int__std__allocator_int_____size___const(t400);
          _Bool c403 = ((t401 < r402)) ? 1 : 0;
          _Bool u404 = !c403;
          if (u404) {
            char* cast405 = (char*)&(_str_14);
            int c406 = 1263;
            char* cast407 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm);
            char* cast408 = (char*)&(_str_16);
            std____glibcxx_assert_fail(cast405, c406, cast407, cast408);
          }
      _Bool c409 = 0;
      if (!c409) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base410 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t400 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base411 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base410->_M_impl) + 0);
  int* t412 = base411->_M_start;
  unsigned long t413 = __n398;
  int* ptr414 = &(t412)[t413];
  __retval399 = ptr414;
  int* t415 = __retval399;
  return t415;
}

// function: _ZNKSt6vectorIiSaIiEE14_M_range_checkEm
void std__vector_int__std__allocator_int______M_range_check_unsigned_long__const(struct std__vector_int__std__allocator_int__* v416, unsigned long v417) {
bb418:
  struct std__vector_int__std__allocator_int__* this419;
  unsigned long __n420;
  this419 = v416;
  __n420 = v417;
  struct std__vector_int__std__allocator_int__* t421 = this419;
    unsigned long t422 = __n420;
    unsigned long r423 = std__vector_int__std__allocator_int_____size___const(t421);
    _Bool c424 = ((t422 >= r423)) ? 1 : 0;
    if (c424) {
      char* cast425 = (char*)&(_str_17);
      unsigned long t426 = __n420;
      unsigned long r427 = std__vector_int__std__allocator_int_____size___const(t421);
      std____throw_out_of_range_fmt(cast425, t426, r427);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE2atEm
int* std__vector_int__std__allocator_int_____at(struct std__vector_int__std__allocator_int__* v428, unsigned long v429) {
bb430:
  struct std__vector_int__std__allocator_int__* this431;
  unsigned long __n432;
  int* __retval433;
  this431 = v428;
  __n432 = v429;
  struct std__vector_int__std__allocator_int__* t434 = this431;
  unsigned long t435 = __n432;
  std__vector_int__std__allocator_int______M_range_check_unsigned_long__const(t434, t435);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  unsigned long t436 = __n432;
  int* r437 = std__vector_int__std__allocator_int_____operator__(t434, t436);
  __retval433 = r437;
  int* t438 = __retval433;
  return t438;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v439) {
bb440:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this441;
  int** __retval442;
  this441 = v439;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t443 = this441;
  __retval442 = &t443->_M_current;
  int** t444 = __retval442;
  return t444;
}

// function: _ZN9__gnu_cxxmiIPKiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS9_SC_
long __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int_const___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v445, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v446) {
bb447:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __lhs448;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __rhs449;
  long __retval450;
  __lhs448 = v445;
  __rhs449 = v446;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t451 = __lhs448;
  int** r452 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t451);
  int* t453 = *r452;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t454 = __rhs449;
  int** r455 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t454);
  int* t456 = *r455;
  long diff457 = t453 - t456;
  __retval450 = diff457;
  long t458 = __retval450;
  return t458;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2ERKS2_
void __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v459, int** v460) {
bb461:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this462;
  int** __i463;
  this462 = v459;
  __i463 = v460;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t464 = this462;
  int** t465 = __i463;
  int* t466 = *t465;
  t464->_M_current = t466;
  return;
}

// function: _ZNKSt6vectorIiSaIiEE6cbeginEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____cbegin___const(struct std__vector_int__std__allocator_int__* v467) {
bb468:
  struct std__vector_int__std__allocator_int__* this469;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval470;
  this469 = v467;
  struct std__vector_int__std__allocator_int__* t471 = this469;
  struct std___Vector_base_int__std__allocator_int__* base472 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t471 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base473 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base472->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval470, &base473->_M_start);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t474 = __retval470;
  return t474;
}

// function: _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v475, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v476) {
bb477:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __lhs478;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __rhs479;
  _Bool __retval480;
  __lhs478 = v475;
  __rhs479 = v476;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t481 = __lhs478;
  int** r482 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t481);
  int* t483 = *r482;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t484 = __rhs479;
  int** r485 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t484);
  int* t486 = *r485;
  _Bool c487 = ((t483 == t486)) ? 1 : 0;
  __retval480 = c487;
  _Bool t488 = __retval480;
  return t488;
}

// function: _ZNKSt6vectorIiSaIiEE4cendEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____cend___const(struct std__vector_int__std__allocator_int__* v489) {
bb490:
  struct std__vector_int__std__allocator_int__* this491;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval492;
  this491 = v489;
  struct std__vector_int__std__allocator_int__* t493 = this491;
  struct std___Vector_base_int__std__allocator_int__* base494 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t493 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base495 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base494->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval492, &base495->_M_finish);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t496 = __retval492;
  return t496;
}

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v497, int* v498) {
bb499:
  int* __location500;
  int* __args501;
  int* __retval502;
  void* __loc503;
  __location500 = v497;
  __args501 = v498;
  int* t504 = __location500;
  void* cast505 = (void*)t504;
  __loc503 = cast505;
    void* t506 = __loc503;
    int* cast507 = (int*)t506;
    int* t508 = __args501;
    int t509 = *t508;
    *cast507 = t509;
    __retval502 = cast507;
    int* t510 = __retval502;
    return t510;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* v511, int* v512, int* v513) {
bb514:
  struct std__allocator_int_* __a515;
  int* __p516;
  int* __args517;
  __a515 = v511;
  __p516 = v512;
  __args517 = v513;
  int* t518 = __p516;
  int* t519 = __args517;
  int* r520 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t518, t519);
  return;
}

// function: _ZSt12__niter_wrapIPiET_RKS1_S1_
int* int__std____niter_wrap_int__(int** v521, int* v522) {
bb523:
  int** unnamed524;
  int* __res525;
  int* __retval526;
  unnamed524 = v521;
  __res525 = v522;
  int* t527 = __res525;
  __retval526 = t527;
  int* t528 = __retval526;
  return t528;
}

// function: _ZSt10__distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_St26random_access_iterator_tag
long std__iterator_traits_int____difference_type_std____distance_int__(int* v529, int* v530, struct std__random_access_iterator_tag v531) {
bb532:
  int* __first533;
  int* __last534;
  struct std__random_access_iterator_tag unnamed535;
  long __retval536;
  __first533 = v529;
  __last534 = v530;
  unnamed535 = v531;
  int* t537 = __last534;
  int* t538 = __first533;
  long diff539 = t537 - t538;
  __retval536 = diff539;
  long t540 = __retval536;
  return t540;
}

// function: _ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** v541) {
bb542:
  int** unnamed543;
  struct std__random_access_iterator_tag __retval544;
  unnamed543 = v541;
  struct std__random_access_iterator_tag t545 = __retval544;
  return t545;
}

// function: _ZSt8distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_
long std__iterator_traits_int____difference_type_std__distance_int__(int* v546, int* v547) {
bb548:
  int* __first549;
  int* __last550;
  long __retval551;
  struct std__random_access_iterator_tag agg_tmp0552;
  __first549 = v546;
  __last550 = v547;
  int* t553 = __first549;
  int* t554 = __last550;
  struct std__random_access_iterator_tag r555 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first549);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  agg_tmp0552 = r555;
  struct std__random_access_iterator_tag t556 = agg_tmp0552;
  long r557 = std__iterator_traits_int____difference_type_std____distance_int__(t553, t554, t556);
  if (__cir_exc_active) {
    long __cir_eh_ret = (long)0;
    return __cir_eh_ret;
  }
  __retval551 = r557;
  long t558 = __retval551;
  return t558;
}

// function: _ZSt9__advanceIPilEvRT_T0_St26random_access_iterator_tag
void void_std____advance_int___long_(int** v559, long v560, struct std__random_access_iterator_tag v561) {
bb562:
  int** __i563;
  long __n564;
  struct std__random_access_iterator_tag unnamed565;
  __i563 = v559;
  __n564 = v560;
  unnamed565 = v561;
    long t566 = __n564;
    _Bool isconst567 = 0;
    _Bool ternary568;
    if (isconst567) {
      long t569 = __n564;
      long c570 = 1;
      _Bool c571 = ((t569 == c570)) ? 1 : 0;
      ternary568 = (_Bool)c571;
    } else {
      _Bool c572 = 0;
      ternary568 = (_Bool)c572;
    }
    if (ternary568) {
      int** t573 = __i563;
      int* t574 = *t573;
      int c575 = 1;
      int* ptr576 = &(t574)[c575];
      *t573 = ptr576;
    } else {
        long t577 = __n564;
        _Bool isconst578 = 0;
        _Bool ternary579;
        if (isconst578) {
          long t580 = __n564;
          long c581 = -1;
          _Bool c582 = ((t580 == c581)) ? 1 : 0;
          ternary579 = (_Bool)c582;
        } else {
          _Bool c583 = 0;
          ternary579 = (_Bool)c583;
        }
        if (ternary579) {
          int** t584 = __i563;
          int* t585 = *t584;
          int c586 = -1;
          int* ptr587 = &(t585)[c586];
          *t584 = ptr587;
        } else {
          long t588 = __n564;
          int** t589 = __i563;
          int* t590 = *t589;
          int* ptr591 = &(t590)[t588];
          *t589 = ptr591;
        }
    }
  return;
}

// function: _ZSt7advanceIPilEvRT_T0_
void void_std__advance_int___long_(int** v592, long v593) {
bb594:
  int** __i595;
  long __n596;
  long __d597;
  struct std__random_access_iterator_tag agg_tmp0598;
  __i595 = v592;
  __n596 = v593;
  long t599 = __n596;
  __d597 = t599;
  int** t600 = __i595;
  long t601 = __d597;
  int** t602 = __i595;
  struct std__random_access_iterator_tag r603 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(t602);
  if (__cir_exc_active) {
    return;
  }
  agg_tmp0598 = r603;
  struct std__random_access_iterator_tag t604 = agg_tmp0598;
  void_std____advance_int___long_(t600, t601, t604);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt12__assign_oneILb1EPiS0_EvRT0_RT1_
void void_std____assign_one_true__int___int__(int** v605, int** v606) {
bb607:
  int** __out608;
  int** __in609;
  __out608 = v605;
  __in609 = v606;
    int** t610 = __in609;
    int* t611 = *t610;
    int t612 = *t611;
    int** t613 = __out608;
    int* t614 = *t613;
    *t614 = t612;
  return;
}

// function: _ZSt23__copy_move_backward_a2ILb1EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_backward_a2_true__int___int__(int* v615, int* v616, int* v617) {
bb618:
  int* __first619;
  int* __last620;
  int* __result621;
  int* __retval622;
  __first619 = v615;
  __last620 = v616;
  __result621 = v617;
      _Bool r623 = std__is_constant_evaluated();
      if (r623) {
      } else {
          long __n624;
          int* t625 = __first619;
          int* t626 = __last620;
          long r627 = std__iterator_traits_int____difference_type_std__distance_int__(t625, t626);
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
          __n624 = r627;
          long t628 = __n624;
          long u629 = -t628;
          void_std__advance_int___long_(&__result621, u629);
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
            long t630 = __n624;
            long c631 = 1;
            _Bool c632 = ((t630 > c631)) ? 1 : 0;
            if (c632) {
              int* t633 = __result621;
              void* cast634 = (void*)t633;
              int* t635 = __first619;
              void* cast636 = (void*)t635;
              long t637 = __n624;
              unsigned long cast638 = (unsigned long)t637;
              unsigned long c639 = 4;
              unsigned long b640 = cast638 * c639;
              void* r641 = memmove(cast634, cast636, b640);
            } else {
                long t642 = __n624;
                long c643 = 1;
                _Bool c644 = ((t642 == c643)) ? 1 : 0;
                if (c644) {
                  void_std____assign_one_true__int___int__(&__result621, &__first619);
                  if (__cir_exc_active) {
                    int* __cir_eh_ret = (int*)0;
                    return __cir_eh_ret;
                  }
                }
            }
          int* t645 = __result621;
          __retval622 = t645;
          int* t646 = __retval622;
          return t646;
      }
    while (1) {
      int* t647 = __first619;
      int* t648 = __last620;
      _Bool c649 = ((t647 != t648)) ? 1 : 0;
      if (!c649) break;
        int* t650 = __last620;
        int c651 = -1;
        int* ptr652 = &(t650)[c651];
        __last620 = ptr652;
        int* t653 = __result621;
        int c654 = -1;
        int* ptr655 = &(t653)[c654];
        __result621 = ptr655;
        void_std____assign_one_true__int___int__(&__result621, &__last620);
        if (__cir_exc_active) {
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
    }
  int* t656 = __result621;
  __retval622 = t656;
  int* t657 = __retval622;
  return t657;
}

// function: _ZSt23__copy_move_backward_a1ILb1EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_backward_a1_true__int___int__(int* v658, int* v659, int* v660) {
bb661:
  int* __first662;
  int* __last663;
  int* __result664;
  int* __retval665;
  __first662 = v658;
  __last663 = v659;
  __result664 = v660;
  int* t666 = __first662;
  int* t667 = __last663;
  int* t668 = __result664;
  int* r669 = int__std____copy_move_backward_a2_true__int___int__(t666, t667, t668);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval665 = r669;
  int* t670 = __retval665;
  return t670;
}

// function: _ZSt22__copy_move_backward_aILb1EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_backward_a_true__int___int__(int* v671, int* v672, int* v673) {
bb674:
  int* __first675;
  int* __last676;
  int* __result677;
  int* __retval678;
  __first675 = v671;
  __last676 = v672;
  __result677 = v673;
  int* t679 = __first675;
  int* r680 = int__std____niter_base_int__(t679);
  int* t681 = __last676;
  int* r682 = int__std____niter_base_int__(t681);
  int* t683 = __result677;
  int* r684 = int__std____niter_base_int__(t683);
  int* r685 = int__std____copy_move_backward_a1_true__int___int__(r680, r682, r684);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* r686 = int__std____niter_wrap_int__(&__result677, r685);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval678 = r686;
  int* t687 = __retval678;
  return t687;
}

// function: _ZSt12__miter_baseIPiET_S1_
int* int__std____miter_base_int__(int* v688) {
bb689:
  int* __it690;
  int* __retval691;
  __it690 = v688;
  int* t692 = __it690;
  __retval691 = t692;
  int* t693 = __retval691;
  return t693;
}

// function: _ZSt13move_backwardIPiS0_ET0_T_S2_S1_
int* int__std__move_backward_int___int__(int* v694, int* v695, int* v696) {
bb697:
  int* __first698;
  int* __last699;
  int* __result700;
  int* __retval701;
  __first698 = v694;
  __last699 = v695;
  __result700 = v696;
  int* t702 = __first698;
  int* r703 = int__std____miter_base_int__(t702);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* t704 = __last699;
  int* r705 = int__std____miter_base_int__(t704);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* t706 = __result700;
  int* r707 = int__std____copy_move_backward_a_true__int___int__(r703, r705, t706);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval701 = r707;
  int* t708 = __retval701;
  return t708;
}

// function: _ZNSt6vectorIiSaIiEE13_M_insert_auxIiEEvN9__gnu_cxx17__normal_iteratorIPiS1_EEOT_
void void_std__vector_int__std__allocator_int______M_insert_aux_int_(struct std__vector_int__std__allocator_int__* v709, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v710, int* v711) {
bb712:
  struct std__vector_int__std__allocator_int__* this713;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __position714;
  int* __arg715;
  this713 = v709;
  __position714 = v710;
  __arg715 = v711;
  struct std__vector_int__std__allocator_int__* t716 = this713;
  struct std___Vector_base_int__std__allocator_int__* base717 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t716 + 0);
  struct std__allocator_int_* base718 = (struct std__allocator_int_*)((char *)&(base717->_M_impl) + 0);
  struct std___Vector_base_int__std__allocator_int__* base719 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t716 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base720 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base719->_M_impl) + 0);
  int* t721 = base720->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base722 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t716 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base723 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base722->_M_impl) + 0);
  int* t724 = base723->_M_finish;
  int c725 = -1;
  int* ptr726 = &(t724)[c725];
  void_std__allocator_traits_std__allocator_int_____construct_int__int_(base718, t721, ptr726);
  struct std___Vector_base_int__std__allocator_int__* base727 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t716 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base728 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base727->_M_impl) + 0);
  int* t729 = base728->_M_finish;
  int c730 = 1;
  int* ptr731 = &(t729)[c730];
  base728->_M_finish = ptr731;
  int** r732 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__position714);
  int* t733 = *r732;
  struct std___Vector_base_int__std__allocator_int__* base734 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t716 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base735 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base734->_M_impl) + 0);
  int* t736 = base735->_M_finish;
  int c737 = -2;
  int* ptr738 = &(t736)[c737];
  struct std___Vector_base_int__std__allocator_int__* base739 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t716 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base740 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base739->_M_impl) + 0);
  int* t741 = base740->_M_finish;
  int c742 = -1;
  int* ptr743 = &(t741)[c742];
  int* r744 = int__std__move_backward_int___int__(t733, ptr738, ptr743);
  if (__cir_exc_active) {
    return;
  }
  int* t745 = __arg715;
  int t746 = *t745;
  int* r747 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__position714);
  *r747 = t746;
  return;
}

// function: _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* v748) {
bb749:
  struct std___Vector_base_int__std__allocator_int__* this750;
  struct std__allocator_int_* __retval751;
  this750 = v748;
  struct std___Vector_base_int__std__allocator_int__* t752 = this750;
  struct std__allocator_int_* base753 = (struct std__allocator_int_*)((char *)&(t752->_M_impl) + 0);
  __retval751 = base753;
  struct std__allocator_int_* t754 = __retval751;
  return t754;
}

// function: _ZNKSt6vectorIiSaIiEE8max_sizeEv
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* v755) {
bb756:
  struct std__vector_int__std__allocator_int__* this757;
  unsigned long __retval758;
  this757 = v755;
  struct std__vector_int__std__allocator_int__* t759 = this757;
  struct std___Vector_base_int__std__allocator_int__* base760 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t759 + 0);
  struct std__allocator_int_* r761 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(base760);
  unsigned long r762 = std__vector_int__std__allocator_int______S_max_size(r761);
  __retval758 = r762;
  unsigned long t763 = __retval758;
  return t763;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v764, unsigned long* v765) {
bb766:
  unsigned long* __a767;
  unsigned long* __b768;
  unsigned long* __retval769;
  __a767 = v764;
  __b768 = v765;
    unsigned long* t770 = __a767;
    unsigned long t771 = *t770;
    unsigned long* t772 = __b768;
    unsigned long t773 = *t772;
    _Bool c774 = ((t771 < t773)) ? 1 : 0;
    if (c774) {
      unsigned long* t775 = __b768;
      __retval769 = t775;
      unsigned long* t776 = __retval769;
      return t776;
    }
  unsigned long* t777 = __a767;
  __retval769 = t777;
  unsigned long* t778 = __retval769;
  return t778;
}

// function: _ZNKSt6vectorIiSaIiEE12_M_check_lenEmPKc
unsigned long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std__vector_int__std__allocator_int__* v779, unsigned long v780, char* v781) {
bb782:
  struct std__vector_int__std__allocator_int__* this783;
  unsigned long __n784;
  char* __s785;
  unsigned long __retval786;
  unsigned long __len787;
  unsigned long ref_tmp0788;
  this783 = v779;
  __n784 = v780;
  __s785 = v781;
  struct std__vector_int__std__allocator_int__* t789 = this783;
    unsigned long r790 = std__vector_int__std__allocator_int_____max_size___const(t789);
    unsigned long r791 = std__vector_int__std__allocator_int_____size___const(t789);
    unsigned long b792 = r790 - r791;
    unsigned long t793 = __n784;
    _Bool c794 = ((b792 < t793)) ? 1 : 0;
    if (c794) {
      char* t795 = __s785;
      std____throw_length_error(t795);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
    }
  unsigned long r796 = std__vector_int__std__allocator_int_____size___const(t789);
  unsigned long r797 = std__vector_int__std__allocator_int_____size___const(t789);
  ref_tmp0788 = r797;
  unsigned long* r798 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp0788, &__n784);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long t799 = *r798;
  unsigned long b800 = r796 + t799;
  __len787 = b800;
  unsigned long t801 = __len787;
  unsigned long r802 = std__vector_int__std__allocator_int_____size___const(t789);
  _Bool c803 = ((t801 < r802)) ? 1 : 0;
  _Bool ternary804;
  if (c803) {
    _Bool c805 = 1;
    ternary804 = (_Bool)c805;
  } else {
    unsigned long t806 = __len787;
    unsigned long r807 = std__vector_int__std__allocator_int_____max_size___const(t789);
    _Bool c808 = ((t806 > r807)) ? 1 : 0;
    ternary804 = (_Bool)c808;
  }
  unsigned long ternary809;
  if (ternary804) {
    unsigned long r810 = std__vector_int__std__allocator_int_____max_size___const(t789);
    ternary809 = (unsigned long)r810;
  } else {
    unsigned long t811 = __len787;
    ternary809 = (unsigned long)t811;
  }
  __retval786 = ternary809;
  unsigned long t812 = __retval786;
  return t812;
}

// function: _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v813, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v814) {
bb815:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs816;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs817;
  long __retval818;
  __lhs816 = v813;
  __rhs817 = v814;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t819 = __lhs816;
  int** r820 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t819);
  int* t821 = *r820;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t822 = __rhs817;
  int** r823 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t822);
  int* t824 = *r823;
  long diff825 = t821 - t824;
  __retval818 = diff825;
  long t826 = __retval818;
  return t826;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocC2EPimRSt12_Vector_baseIiS0_E
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v827, int* v828, unsigned long v829, struct std___Vector_base_int__std__allocator_int__* v830) {
bb831:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this832;
  int* __s833;
  unsigned long __l834;
  struct std___Vector_base_int__std__allocator_int__* __vect835;
  this832 = v827;
  __s833 = v828;
  __l834 = v829;
  __vect835 = v830;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t836 = this832;
  int* t837 = __s833;
  t836->_M_storage = t837;
  unsigned long t838 = __l834;
  t836->_M_len = t838;
  struct std___Vector_base_int__std__allocator_int__* t839 = __vect835;
  t836->_M_vect = t839;
  return;
}

// function: _ZSt10to_addressIiEPT_S1_
int* int__std__to_address_int_(int* v840) {
bb841:
  int* __ptr842;
  int* __retval843;
  __ptr842 = v840;
  int* t844 = __ptr842;
  __retval843 = t844;
  int* t845 = __retval843;
  return t845;
}

// function: _ZSt12__to_addressIPiEDaRKT_
int* auto_std____to_address_int__(int** v846) {
bb847:
  int** __ptr848;
  int* __retval849;
  __ptr848 = v846;
  int** t850 = __ptr848;
  int* t851 = *t850;
  int* r852 = int__std__to_address_int_(t851);
  __retval849 = r852;
  int* t853 = __retval849;
  return t853;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEC2ERKS1_
void __gnu_cxx____normal_iterator_int___void_____normal_iterator(struct __gnu_cxx____normal_iterator_int____void_* v854, int** v855) {
bb856:
  struct __gnu_cxx____normal_iterator_int____void_* this857;
  int** __i858;
  this857 = v854;
  __i858 = v855;
  struct __gnu_cxx____normal_iterator_int____void_* t859 = this857;
  int** t860 = __i858;
  int* t861 = *t860;
  t859->_M_current = t861;
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE7destroyIiEEvRS0_PT_
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* v862, int* v863) {
bb864:
  struct std__allocator_int_* __a865;
  int* __p866;
  __a865 = v862;
  __p866 = v863;
  int* t867 = __p866;
  void_std__destroy_at_int_(t867);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt19__relocate_object_aIiiSaIiEEvPT_PT0_RT1_
void void_std____relocate_object_a_int__int__std__allocator_int___(int* v868, int* v869, struct std__allocator_int_* v870) {
bb871:
  int* __dest872;
  int* __orig873;
  struct std__allocator_int_* __alloc874;
  __dest872 = v868;
  __orig873 = v869;
  __alloc874 = v870;
  struct std__allocator_int_* t875 = __alloc874;
  int* t876 = __dest872;
  int* t877 = __orig873;
  void_std__allocator_traits_std__allocator_int_____construct_int__int_(t875, t876, t877);
  struct std__allocator_int_* t878 = __alloc874;
  int* t879 = __orig873;
  void_std__allocator_traits_std__allocator_int_____destroy_int_(t878, t879);
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivEdeEv
int* __gnu_cxx____normal_iterator_int___void___operator____const(struct __gnu_cxx____normal_iterator_int____void_* v880) {
bb881:
  struct __gnu_cxx____normal_iterator_int____void_* this882;
  int* __retval883;
  this882 = v880;
  struct __gnu_cxx____normal_iterator_int____void_* t884 = this882;
  int* t885 = t884->_M_current;
  __retval883 = t885;
  int* t886 = __retval883;
  return t886;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEppEv
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator__(struct __gnu_cxx____normal_iterator_int____void_* v887) {
bb888:
  struct __gnu_cxx____normal_iterator_int____void_* this889;
  struct __gnu_cxx____normal_iterator_int____void_* __retval890;
  this889 = v887;
  struct __gnu_cxx____normal_iterator_int____void_* t891 = this889;
  int* t892 = t891->_M_current;
  int c893 = 1;
  int* ptr894 = &(t892)[c893];
  t891->_M_current = ptr894;
  __retval890 = t891;
  struct __gnu_cxx____normal_iterator_int____void_* t895 = __retval890;
  return t895;
}

// function: _ZSt14__relocate_a_1IPiN9__gnu_cxx17__normal_iteratorIS0_vEESaIiEET0_T_S6_S5_RT1_
struct __gnu_cxx____normal_iterator_int____void_ __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(int* v896, int* v897, struct __gnu_cxx____normal_iterator_int____void_ v898, struct std__allocator_int_* v899) {
bb900:
  int* __first901;
  int* __last902;
  struct __gnu_cxx____normal_iterator_int____void_ __result903;
  struct std__allocator_int_* __alloc904;
  struct __gnu_cxx____normal_iterator_int____void_ __retval905;
  __first901 = v896;
  __last902 = v897;
  __result903 = v898;
  __alloc904 = v899;
  __retval905 = __result903; // copy
    while (1) {
      int* t907 = __first901;
      int* t908 = __last902;
      _Bool c909 = ((t907 != t908)) ? 1 : 0;
      if (!c909) break;
      int* r910 = __gnu_cxx____normal_iterator_int___void___operator____const(&__retval905);
      int* t911 = __first901;
      struct std__allocator_int_* t912 = __alloc904;
      void_std____relocate_object_a_int__int__std__allocator_int___(r910, t911, t912);
    for_step906: ;
      int* t913 = __first901;
      int c914 = 1;
      int* ptr915 = &(t913)[c914];
      __first901 = ptr915;
      struct __gnu_cxx____normal_iterator_int____void_* r916 = __gnu_cxx____normal_iterator_int___void___operator__(&__retval905);
    }
  struct __gnu_cxx____normal_iterator_int____void_ t917 = __retval905;
  return t917;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEaSEOS2_
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator_(struct __gnu_cxx____normal_iterator_int____void_* v918, struct __gnu_cxx____normal_iterator_int____void_* v919) {
bb920:
  struct __gnu_cxx____normal_iterator_int____void_* this921;
  struct __gnu_cxx____normal_iterator_int____void_* unnamed922;
  struct __gnu_cxx____normal_iterator_int____void_* __retval923;
  this921 = v918;
  unnamed922 = v919;
  struct __gnu_cxx____normal_iterator_int____void_* t924 = this921;
  struct __gnu_cxx____normal_iterator_int____void_* t925 = unnamed922;
  int* t926 = t925->_M_current;
  t924->_M_current = t926;
  __retval923 = t924;
  struct __gnu_cxx____normal_iterator_int____void_* t927 = __retval923;
  return t927;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivE4baseEv
int** __gnu_cxx____normal_iterator_int___void___base___const(struct __gnu_cxx____normal_iterator_int____void_* v928) {
bb929:
  struct __gnu_cxx____normal_iterator_int____void_* this930;
  int** __retval931;
  this930 = v928;
  struct __gnu_cxx____normal_iterator_int____void_* t932 = this930;
  __retval931 = &t932->_M_current;
  int** t933 = __retval931;
  return t933;
}

// function: _ZSt14__relocate_a_1IiiENSt9enable_ifIXsr3std24__is_bitwise_relocatableIT_EE5valueEPS1_E4typeES2_S2_S2_RSaIT0_E
int* std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(int* v934, int* v935, int* v936, struct std__allocator_int_* v937) {
bb938:
  int* __first939;
  int* __last940;
  int* __result941;
  struct std__allocator_int_* __alloc942;
  int* __retval943;
  long __count944;
  __first939 = v934;
  __last940 = v935;
  __result941 = v936;
  __alloc942 = v937;
  int* t945 = __last940;
  int* t946 = __first939;
  long diff947 = t945 - t946;
  __count944 = diff947;
    long t948 = __count944;
    long c949 = 0;
    _Bool c950 = ((t948 > c949)) ? 1 : 0;
    if (c950) {
        _Bool r951 = std__is_constant_evaluated();
        if (r951) {
          struct __gnu_cxx____normal_iterator_int____void_ __out952;
          struct __gnu_cxx____normal_iterator_int____void_ ref_tmp0953;
          struct __gnu_cxx____normal_iterator_int____void_ agg_tmp0954;
          __gnu_cxx____normal_iterator_int___void_____normal_iterator(&__out952, &__result941);
          int* t955 = __first939;
          int* t956 = __last940;
          agg_tmp0954 = __out952; // copy
          struct std__allocator_int_* t957 = __alloc942;
          struct __gnu_cxx____normal_iterator_int____void_ t958 = agg_tmp0954;
          struct __gnu_cxx____normal_iterator_int____void_ r959 = __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(t955, t956, t958, t957);
          ref_tmp0953 = r959;
          struct __gnu_cxx____normal_iterator_int____void_* r960 = __gnu_cxx____normal_iterator_int___void___operator_(&__out952, &ref_tmp0953);
          int** r961 = __gnu_cxx____normal_iterator_int___void___base___const(&__out952);
          int* t962 = *r961;
          __retval943 = t962;
          int* t963 = __retval943;
          return t963;
        }
      int* t964 = __result941;
      void* cast965 = (void*)t964;
      int* t966 = __first939;
      void* cast967 = (void*)t966;
      long t968 = __count944;
      unsigned long cast969 = (unsigned long)t968;
      unsigned long c970 = 4;
      unsigned long b971 = cast969 * c970;
      void* r972 = memcpy(cast965, cast967, b971);
    }
  int* t973 = __result941;
  long t974 = __count944;
  int* ptr975 = &(t973)[t974];
  __retval943 = ptr975;
  int* t976 = __retval943;
  return t976;
}

// function: _ZSt12__relocate_aIPiS0_SaIiEET0_T_S3_S2_RT1_
int* int__std____relocate_a_int___int___std__allocator_int___(int* v977, int* v978, int* v979, struct std__allocator_int_* v980) {
bb981:
  int* __first982;
  int* __last983;
  int* __result984;
  struct std__allocator_int_* __alloc985;
  int* __retval986;
  __first982 = v977;
  __last983 = v978;
  __result984 = v979;
  __alloc985 = v980;
  int* t987 = __first982;
  int* r988 = int__std____niter_base_int__(t987);
  int* t989 = __last983;
  int* r990 = int__std____niter_base_int__(t989);
  int* t991 = __result984;
  int* r992 = int__std____niter_base_int__(t991);
  struct std__allocator_int_* t993 = __alloc985;
  int* r994 = std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(r988, r990, r992, t993);
  __retval986 = r994;
  int* t995 = __retval986;
  return t995;
}

// function: _ZNSt6vectorIiSaIiEE11_S_relocateEPiS2_S2_RS0_
int* std__vector_int__std__allocator_int______S_relocate(int* v996, int* v997, int* v998, struct std__allocator_int_* v999) {
bb1000:
  int* __first1001;
  int* __last1002;
  int* __result1003;
  struct std__allocator_int_* __alloc1004;
  int* __retval1005;
  __first1001 = v996;
  __last1002 = v997;
  __result1003 = v998;
  __alloc1004 = v999;
  int* t1006 = __first1001;
  int* t1007 = __last1002;
  int* t1008 = __result1003;
  struct std__allocator_int_* t1009 = __alloc1004;
  int* r1010 = int__std____relocate_a_int___int___std__allocator_int___(t1006, t1007, t1008, t1009);
  __retval1005 = r1010;
  int* t1011 = __retval1005;
  return t1011;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocD2Ev
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v1012) {
bb1013:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this1014;
  this1014 = v1012;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t1015 = this1014;
    int* t1016 = t1015->_M_storage;
    _Bool cast1017 = (_Bool)t1016;
    if (cast1017) {
      struct std___Vector_base_int__std__allocator_int__* t1018 = t1015->_M_vect;
      int* t1019 = t1015->_M_storage;
      unsigned long t1020 = t1015->_M_len;
      std___Vector_base_int__std__allocator_int______M_deallocate(t1018, t1019, t1020);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_M_realloc_insertIJiEEEvN9__gnu_cxx17__normal_iteratorIPiS1_EEDpOT_
void void_std__vector_int__std__allocator_int______M_realloc_insert_int_(struct std__vector_int__std__allocator_int__* v1021, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1022, int* v1023) {
bb1024:
  struct std__vector_int__std__allocator_int__* this1025;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __position1026;
  int* __args1027;
  unsigned long __len1028;
  int* __old_start1029;
  int* __old_finish1030;
  unsigned long __elems_before1031;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp01032;
  int* __new_start1033;
  int* __new_finish1034;
  this1025 = v1021;
  __position1026 = v1022;
  __args1027 = v1023;
  struct std__vector_int__std__allocator_int__* t1035 = this1025;
  unsigned long c1036 = 1;
  char* cast1037 = (char*)&(_str_18);
  unsigned long r1038 = std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(t1035, c1036, cast1037);
  if (__cir_exc_active) {
    return;
  }
  __len1028 = r1038;
    unsigned long t1039 = __len1028;
    unsigned long c1040 = 0;
    _Bool c1041 = ((t1039 <= c1040)) ? 1 : 0;
    if (c1041) {
      __builtin_unreachable();
    }
  struct std___Vector_base_int__std__allocator_int__* base1042 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1035 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1043 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1042->_M_impl) + 0);
  int* t1044 = base1043->_M_start;
  __old_start1029 = t1044;
  struct std___Vector_base_int__std__allocator_int__* base1045 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1035 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1046 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1045->_M_impl) + 0);
  int* t1047 = base1046->_M_finish;
  __old_finish1030 = t1047;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1048 = std__vector_int__std__allocator_int_____begin(t1035);
  ref_tmp01032 = r1048;
  long r1049 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__position1026, &ref_tmp01032);
  unsigned long cast1050 = (unsigned long)r1049;
  __elems_before1031 = cast1050;
  struct std___Vector_base_int__std__allocator_int__* base1051 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1035 + 0);
  unsigned long t1052 = __len1028;
  int* r1053 = std___Vector_base_int__std__allocator_int______M_allocate(base1051, t1052);
  if (__cir_exc_active) {
    return;
  }
  __new_start1033 = r1053;
  int* t1054 = __new_start1033;
  __new_finish1034 = t1054;
    struct std__vector_int__std__allocator_int_____Guard_alloc __guard1055;
    int* ref_tmp11056;
    int* t1057 = __new_start1033;
    unsigned long t1058 = __len1028;
    struct std___Vector_base_int__std__allocator_int__* base1059 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1035 + 0);
    std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(&__guard1055, t1057, t1058, base1059);
    if (__cir_exc_active) {
      return;
    }
      struct std___Vector_base_int__std__allocator_int__* base1060 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1035 + 0);
      struct std__allocator_int_* base1061 = (struct std__allocator_int_*)((char *)&(base1060->_M_impl) + 0);
      int* t1062 = __new_start1033;
      unsigned long t1063 = __elems_before1031;
      int* ptr1064 = &(t1062)[t1063];
      ref_tmp11056 = ptr1064;
      int* r1065 = auto_std____to_address_int__(&ref_tmp11056);
      int* t1066 = __args1027;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_(base1061, r1065, t1066);
        int* t1067 = __old_start1029;
        int** r1068 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__position1026);
        int* t1069 = *r1068;
        int* t1070 = __new_start1033;
        struct std___Vector_base_int__std__allocator_int__* base1071 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1035 + 0);
        struct std__allocator_int_* r1072 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1071);
        int* r1073 = std__vector_int__std__allocator_int______S_relocate(t1067, t1069, t1070, r1072);
        __new_finish1034 = r1073;
        int* t1074 = __new_finish1034;
        int c1075 = 1;
        int* ptr1076 = &(t1074)[c1075];
        __new_finish1034 = ptr1076;
        int** r1077 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__position1026);
        int* t1078 = *r1077;
        int* t1079 = __old_finish1030;
        int* t1080 = __new_finish1034;
        struct std___Vector_base_int__std__allocator_int__* base1081 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1035 + 0);
        struct std__allocator_int_* r1082 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1081);
        int* r1083 = std__vector_int__std__allocator_int______S_relocate(t1078, t1079, t1080, r1082);
        __new_finish1034 = r1083;
      int* t1084 = __old_start1029;
      __guard1055._M_storage = t1084;
      struct std___Vector_base_int__std__allocator_int__* base1085 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1035 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1086 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1085->_M_impl) + 0);
      int* t1087 = base1086->_M_end_of_storage;
      int* t1088 = __old_start1029;
      long diff1089 = t1087 - t1088;
      unsigned long cast1090 = (unsigned long)diff1089;
      __guard1055._M_len = cast1090;
    {
      std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(&__guard1055);
    }
  int* t1091 = __new_start1033;
  struct std___Vector_base_int__std__allocator_int__* base1092 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1035 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1093 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1092->_M_impl) + 0);
  base1093->_M_start = t1091;
  int* t1094 = __new_finish1034;
  struct std___Vector_base_int__std__allocator_int__* base1095 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1035 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1096 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1095->_M_impl) + 0);
  base1096->_M_finish = t1094;
  int* t1097 = __new_start1033;
  unsigned long t1098 = __len1028;
  int* ptr1099 = &(t1097)[t1098];
  struct std___Vector_base_int__std__allocator_int__* base1100 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1035 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1101 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1100->_M_impl) + 0);
  base1101->_M_end_of_storage = ptr1099;
  return;
}

// function: _ZNSt6vectorIiSaIiEE14_M_insert_rvalEN9__gnu_cxx17__normal_iteratorIPKiS1_EEOi
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int______M_insert_rval(struct std__vector_int__std__allocator_int__* v1102, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v1103, int* v1104) {
bb1105:
  struct std__vector_int__std__allocator_int__* this1106;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __position1107;
  int* __v1108;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1109;
  long __n1110;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp01111;
  int* ref_tmp41112;
  this1106 = v1102;
  __position1107 = v1103;
  __v1108 = v1104;
  struct std__vector_int__std__allocator_int__* t1113 = this1106;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r1114 = std__vector_int__std__allocator_int_____cbegin___const(t1113);
  ref_tmp01111 = r1114;
  long r1115 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int_const___std__vector_int__std__allocator_int_____(&__position1107, &ref_tmp01111);
  __n1110 = r1115;
    struct std___Vector_base_int__std__allocator_int__* base1116 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1113 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1117 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1116->_M_impl) + 0);
    int* t1118 = base1117->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base1119 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1113 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1120 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1119->_M_impl) + 0);
    int* t1121 = base1120->_M_end_of_storage;
    _Bool c1122 = ((t1118 != t1121)) ? 1 : 0;
    if (c1122) {
        struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp11123;
        struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r1124 = std__vector_int__std__allocator_int_____cend___const(t1113);
        ref_tmp11123 = r1124;
        _Bool r1125 = _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__position1107, &ref_tmp11123);
        if (r1125) {
          struct std___Vector_base_int__std__allocator_int__* base1126 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1113 + 0);
          struct std__allocator_int_* base1127 = (struct std__allocator_int_*)((char *)&(base1126->_M_impl) + 0);
          struct std___Vector_base_int__std__allocator_int__* base1128 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1113 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1129 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1128->_M_impl) + 0);
          int* t1130 = base1129->_M_finish;
          int* t1131 = __v1108;
          void_std__allocator_traits_std__allocator_int_____construct_int__int_(base1127, t1130, t1131);
          struct std___Vector_base_int__std__allocator_int__* base1132 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1113 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1133 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1132->_M_impl) + 0);
          int* t1134 = base1133->_M_finish;
          int c1135 = 1;
          int* ptr1136 = &(t1134)[c1135];
          base1133->_M_finish = ptr1136;
        } else {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01137;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp21138;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1139 = std__vector_int__std__allocator_int_____begin(t1113);
          ref_tmp21138 = r1139;
          long t1140 = __n1110;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1141 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&ref_tmp21138, t1140);
          agg_tmp01137 = r1141;
          int* t1142 = __v1108;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1143 = agg_tmp01137;
          void_std__vector_int__std__allocator_int______M_insert_aux_int_(t1113, t1143, t1142);
          if (__cir_exc_active) {
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
        }
    } else {
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11144;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp31145;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1146 = std__vector_int__std__allocator_int_____begin(t1113);
      ref_tmp31145 = r1146;
      long t1147 = __n1110;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1148 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&ref_tmp31145, t1147);
      agg_tmp11144 = r1148;
      int* t1149 = __v1108;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1150 = agg_tmp11144;
      void_std__vector_int__std__allocator_int______M_realloc_insert_int_(t1113, t1150, t1149);
      if (__cir_exc_active) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
    }
  struct std___Vector_base_int__std__allocator_int__* base1151 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1113 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1152 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1151->_M_impl) + 0);
  int* t1153 = base1152->_M_start;
  long t1154 = __n1110;
  int* ptr1155 = &(t1153)[t1154];
  ref_tmp41112 = ptr1155;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval1109, &ref_tmp41112);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1156 = __retval1109;
  return t1156;
}

// function: _ZNSt6vectorIiSaIiEE6insertEN9__gnu_cxx17__normal_iteratorIPKiS1_EEOi
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____insert(struct std__vector_int__std__allocator_int__* v1157, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v1158, int* v1159) {
bb1160:
  struct std__vector_int__std__allocator_int__* this1161;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __position1162;
  int* __x1163;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1164;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp01165;
  this1161 = v1157;
  __position1162 = v1158;
  __x1163 = v1159;
  struct std__vector_int__std__allocator_int__* t1166 = this1161;
  agg_tmp01165 = __position1162; // copy
  int* t1167 = __x1163;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t1168 = agg_tmp01165;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1169 = std__vector_int__std__allocator_int______M_insert_rval(t1166, t1168, t1167);
  if (__cir_exc_active) {
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1164 = r1169;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1170 = __retval1164;
  return t1170;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEplEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1171, long v1172) {
bb1173:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this1174;
  long __n1175;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1176;
  int* ref_tmp01177;
  this1174 = v1171;
  __n1175 = v1172;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1178 = this1174;
  int* t1179 = t1178->_M_current;
  long t1180 = __n1175;
  int* ptr1181 = &(t1179)[t1180];
  ref_tmp01177 = ptr1181;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval1176, &ref_tmp01177);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1182 = __retval1176;
  return t1182;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2IPiQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE
void _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2IPiQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v1183, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1184) {
bb1185:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this1186;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __i1187;
  this1186 = v1183;
  __i1187 = v1184;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t1188 = this1186;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1189 = __i1187;
  int** r1190 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t1189);
  int* t1191 = *r1190;
  t1188->_M_current = t1191;
  return;
}

// function: _ZNSt12out_of_rangeC2ERKS_
void std__out_of_range__out_of_range(struct std__out_of_range* v1192, struct std__out_of_range* v1193) {
bb1194:
  struct std__out_of_range* this1195;
  struct std__out_of_range* unnamed1196;
  this1195 = v1192;
  unnamed1196 = v1193;
  struct std__out_of_range* t1197 = this1195;
  struct std__logic_error* base1198 = (struct std__logic_error*)((char *)t1197 + 0);
  struct std__out_of_range* t1199 = unnamed1196;
  struct std__logic_error* base1200 = (struct std__logic_error*)((char *)t1199 + 0);
  std__logic_error__logic_error(base1198, base1200);
    void* v1201 = (void*)&_ZTVSt12out_of_range[2];
    void** v1202 = (void**)t1197;
    *(void**)(v1202) = (void*)v1201;
  return;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1203, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1204) {
bb1205:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs1206;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs1207;
  _Bool __retval1208;
  __lhs1206 = v1203;
  __rhs1207 = v1204;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1209 = __lhs1206;
  int** r1210 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t1209);
  int* t1211 = *r1210;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1212 = __rhs1207;
  int** r1213 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t1212);
  int* t1214 = *r1213;
  _Bool c1215 = ((t1211 == t1214)) ? 1 : 0;
  __retval1208 = c1215;
  _Bool t1216 = __retval1208;
  return t1216;
}

// function: _ZSt12__niter_wrapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES2_ET_S7_T0_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____niter_wrap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1217, int* v1218) {
bb1219:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __from1220;
  int* __res1221;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1222;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01223;
  __from1220 = v1217;
  __res1221 = v1218;
  int* t1224 = __res1221;
  int* r1225 = int__std____niter_base_int__(t1224);
  agg_tmp01223 = __from1220; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1226 = agg_tmp01223;
  int* r1227 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t1226);
  long diff1228 = r1225 - r1227;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1229 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__from1220, diff1228);
  __retval1222 = r1229;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1230 = __retval1222;
  return t1230;
}

// function: _ZSt14__copy_move_a2ILb1EPiS0_S0_ET2_T0_T1_S1_
int* int__std____copy_move_a2_true__int___int___int__(int* v1231, int* v1232, int* v1233) {
bb1234:
  int* __first1235;
  int* __last1236;
  int* __result1237;
  int* __retval1238;
  __first1235 = v1231;
  __last1236 = v1232;
  __result1237 = v1233;
      _Bool r1239 = std____is_constant_evaluated();
      if (r1239) {
      } else {
          long __n1240;
          int* t1241 = __first1235;
          int* t1242 = __last1236;
          long r1243 = std__iterator_traits_int____difference_type_std__distance_int__(t1241, t1242);
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
          __n1240 = r1243;
            long t1244 = __n1240;
            long c1245 = 1;
            _Bool c1246 = ((t1244 > c1245)) ? 1 : 0;
            if (c1246) {
              int* t1247 = __result1237;
              void* cast1248 = (void*)t1247;
              int* t1249 = __first1235;
              void* cast1250 = (void*)t1249;
              long t1251 = __n1240;
              unsigned long cast1252 = (unsigned long)t1251;
              unsigned long c1253 = 4;
              unsigned long b1254 = cast1252 * c1253;
              void* r1255 = memmove(cast1248, cast1250, b1254);
              long t1256 = __n1240;
              int* t1257 = __result1237;
              int* ptr1258 = &(t1257)[t1256];
              __result1237 = ptr1258;
            } else {
                long t1259 = __n1240;
                long c1260 = 1;
                _Bool c1261 = ((t1259 == c1260)) ? 1 : 0;
                if (c1261) {
                  void_std____assign_one_true__int___int__(&__result1237, &__first1235);
                  if (__cir_exc_active) {
                    int* __cir_eh_ret = (int*)0;
                    return __cir_eh_ret;
                  }
                  int* t1262 = __result1237;
                  int c1263 = 1;
                  int* ptr1264 = &(t1262)[c1263];
                  __result1237 = ptr1264;
                }
            }
          int* t1265 = __result1237;
          __retval1238 = t1265;
          int* t1266 = __retval1238;
          return t1266;
      }
    while (1) {
      int* t1268 = __first1235;
      int* t1269 = __last1236;
      _Bool c1270 = ((t1268 != t1269)) ? 1 : 0;
      if (!c1270) break;
      void_std____assign_one_true__int___int__(&__result1237, &__first1235);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
    for_step1267: ;
      int* t1271 = __result1237;
      int c1272 = 1;
      int* ptr1273 = &(t1271)[c1272];
      __result1237 = ptr1273;
      int* t1274 = __first1235;
      int c1275 = 1;
      int* ptr1276 = &(t1274)[c1275];
      __first1235 = ptr1276;
    }
  int* t1277 = __result1237;
  __retval1238 = t1277;
  int* t1278 = __retval1238;
  return t1278;
}

// function: _ZSt14__copy_move_a1ILb1EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_a1_true__int___int__(int* v1279, int* v1280, int* v1281) {
bb1282:
  int* __first1283;
  int* __last1284;
  int* __result1285;
  int* __retval1286;
  __first1283 = v1279;
  __last1284 = v1280;
  __result1285 = v1281;
  int* t1287 = __first1283;
  int* t1288 = __last1284;
  int* t1289 = __result1285;
  int* r1290 = int__std____copy_move_a2_true__int___int___int__(t1287, t1288, t1289);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1286 = r1290;
  int* t1291 = __retval1286;
  return t1291;
}

// function: _ZSt13__copy_move_aILb1EN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_ET1_T0_S8_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____copy_move_a_true____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1292, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1293, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1294) {
bb1295:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1296;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1297;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result1298;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1299;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01300;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11301;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp21302;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp31303;
  __first1296 = v1292;
  __last1297 = v1293;
  __result1298 = v1294;
  agg_tmp01300 = __result1298; // copy
  agg_tmp11301 = __first1296; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1304 = agg_tmp11301;
  int* r1305 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t1304);
  agg_tmp21302 = __last1297; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1306 = agg_tmp21302;
  int* r1307 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t1306);
  agg_tmp31303 = __result1298; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1308 = agg_tmp31303;
  int* r1309 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t1308);
  int* r1310 = int__std____copy_move_a1_true__int___int__(r1305, r1307, r1309);
  if (__cir_exc_active) {
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1311 = agg_tmp01300;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1312 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____niter_wrap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(t1311, r1310);
  if (__cir_exc_active) {
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1299 = r1312;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1313 = __retval1299;
  return t1313;
}

// function: _ZSt4moveIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_ET0_T_S8_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__move___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1314, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1315, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1316) {
bb1317:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1318;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1319;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result1320;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1321;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01322;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11323;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp21324;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp31325;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp41326;
  __first1318 = v1314;
  __last1319 = v1315;
  __result1320 = v1316;
  agg_tmp11323 = __first1318; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1327 = agg_tmp11323;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1328 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t1327);
  if (__cir_exc_active) {
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  agg_tmp01322 = r1328;
  agg_tmp31325 = __last1319; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1329 = agg_tmp31325;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1330 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t1329);
  if (__cir_exc_active) {
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  agg_tmp21324 = r1330;
  agg_tmp41326 = __result1320; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1331 = agg_tmp01322;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1332 = agg_tmp21324;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1333 = agg_tmp41326;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1334 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____copy_move_a_true____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t1331, t1332, t1333);
  if (__cir_exc_active) {
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1321 = r1334;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1335 = __retval1321;
  return t1335;
}

// function: _ZNSt6vectorIiSaIiEE8_M_eraseEN9__gnu_cxx17__normal_iteratorIPiS1_EE
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int______M_erase(struct std__vector_int__std__allocator_int__* v1336, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1337) {
bb1338:
  struct std__vector_int__std__allocator_int__* this1339;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __position1340;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1341;
  this1339 = v1336;
  __position1340 = v1337;
  struct std__vector_int__std__allocator_int__* t1342 = this1339;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp01343;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp11344;
    long c1345 = 1;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1346 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__position1340, c1345);
    ref_tmp01343 = r1346;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1347 = std__vector_int__std__allocator_int_____end(t1342);
    ref_tmp11344 = r1347;
    _Bool r1348 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&ref_tmp01343, &ref_tmp11344);
    _Bool u1349 = !r1348;
    if (u1349) {
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01350;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11351;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp21352;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp31353;
      long c1354 = 1;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1355 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__position1340, c1354);
      agg_tmp01350 = r1355;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1356 = std__vector_int__std__allocator_int_____end(t1342);
      agg_tmp11351 = r1356;
      agg_tmp21352 = __position1340; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1357 = agg_tmp01350;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1358 = agg_tmp11351;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1359 = agg_tmp21352;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1360 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__move___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t1357, t1358, t1359);
      if (__cir_exc_active) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __cir_eh_ret = {0};
        return __cir_eh_ret;
      }
      agg_tmp31353 = r1360;
    }
  struct std___Vector_base_int__std__allocator_int__* base1361 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1342 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1362 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1361->_M_impl) + 0);
  int* t1363 = base1362->_M_finish;
  int c1364 = -1;
  int* ptr1365 = &(t1363)[c1364];
  base1362->_M_finish = ptr1365;
  struct std___Vector_base_int__std__allocator_int__* base1366 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1342 + 0);
  struct std__allocator_int_* base1367 = (struct std__allocator_int_*)((char *)&(base1366->_M_impl) + 0);
  struct std___Vector_base_int__std__allocator_int__* base1368 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1342 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1369 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1368->_M_impl) + 0);
  int* t1370 = base1369->_M_finish;
  void_std__allocator_traits_std__allocator_int_____destroy_int_(base1367, t1370);
  __retval1341 = __position1340; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1371 = __retval1341;
  return t1371;
}

// function: _ZNSt6vectorIiSaIiEE5eraseEN9__gnu_cxx17__normal_iteratorIPKiS1_EE
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____erase(struct std__vector_int__std__allocator_int__* v1372, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v1373) {
bb1374:
  struct std__vector_int__std__allocator_int__* this1375;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __position1376;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1377;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01378;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp01379;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp11380;
  this1375 = v1372;
  __position1376 = v1373;
  struct std__vector_int__std__allocator_int__* t1381 = this1375;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1382 = std__vector_int__std__allocator_int_____begin(t1381);
  ref_tmp01379 = r1382;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r1383 = std__vector_int__std__allocator_int_____cbegin___const(t1381);
  ref_tmp11380 = r1383;
  long r1384 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int_const___std__vector_int__std__allocator_int_____(&__position1376, &ref_tmp11380);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1385 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&ref_tmp01379, r1384);
  agg_tmp01378 = r1385;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1386 = agg_tmp01378;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1387 = std__vector_int__std__allocator_int______M_erase(t1381, t1386);
  if (__cir_exc_active) {
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1377 = r1387;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1388 = __retval1377;
  return t1388;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1389, int* v1390, struct std__allocator_int_* v1391) {
bb1392:
  int* __first1393;
  int* __last1394;
  struct std__allocator_int_* unnamed1395;
  __first1393 = v1389;
  __last1394 = v1390;
  unnamed1395 = v1391;
  int* t1396 = __first1393;
  int* t1397 = __last1394;
  void_std___Destroy_int__(t1396, t1397);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt6vectorIiSaIiEE15_M_erase_at_endEPi
void std__vector_int__std__allocator_int______M_erase_at_end(struct std__vector_int__std__allocator_int__* v1398, int* v1399) {
bb1400:
  struct std__vector_int__std__allocator_int__* this1401;
  int* __pos1402;
  this1401 = v1398;
  __pos1402 = v1399;
  struct std__vector_int__std__allocator_int__* t1403 = this1401;
    unsigned long __n1404;
    struct std___Vector_base_int__std__allocator_int__* base1405 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1403 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1406 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1405->_M_impl) + 0);
    int* t1407 = base1406->_M_finish;
    int* t1408 = __pos1402;
    long diff1409 = t1407 - t1408;
    unsigned long cast1410 = (unsigned long)diff1409;
    __n1404 = cast1410;
    unsigned long t1411 = __n1404;
    _Bool cast1412 = (_Bool)t1411;
    if (cast1412) {
      int* t1413 = __pos1402;
      struct std___Vector_base_int__std__allocator_int__* base1414 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1403 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1415 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1414->_M_impl) + 0);
      int* t1416 = base1415->_M_finish;
      struct std___Vector_base_int__std__allocator_int__* base1417 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1403 + 0);
      struct std__allocator_int_* r1418 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1417);
      void_std___Destroy_int___int_(t1413, t1416, r1418);
      if (__cir_exc_active) {
        return;
      }
      int* t1419 = __pos1402;
      struct std___Vector_base_int__std__allocator_int__* base1420 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1403 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1421 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1420->_M_impl) + 0);
      base1421->_M_finish = t1419;
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE8_M_eraseEN9__gnu_cxx17__normal_iteratorIPiS1_EES5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int______M_erase_2(struct std__vector_int__std__allocator_int__* v1422, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1423, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1424) {
bb1425:
  struct std__vector_int__std__allocator_int__* this1426;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1427;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1428;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1429;
  this1426 = v1422;
  __first1427 = v1423;
  __last1428 = v1424;
  struct std__vector_int__std__allocator_int__* t1430 = this1426;
    _Bool r1431 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first1427, &__last1428);
    _Bool u1432 = !r1431;
    if (u1432) {
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp11433;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp01434;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1435 = std__vector_int__std__allocator_int_____end(t1430);
        ref_tmp01434 = r1435;
        _Bool r1436 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__last1428, &ref_tmp01434);
        _Bool u1437 = !r1436;
        if (u1437) {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01438;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11439;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp21440;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp31441;
          agg_tmp01438 = __last1428; // copy
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1442 = std__vector_int__std__allocator_int_____end(t1430);
          agg_tmp11439 = r1442;
          agg_tmp21440 = __first1427; // copy
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1443 = agg_tmp01438;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1444 = agg_tmp11439;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1445 = agg_tmp21440;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1446 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__move___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t1443, t1444, t1445);
          if (__cir_exc_active) {
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __cir_eh_ret = {0};
            return __cir_eh_ret;
          }
          agg_tmp31441 = r1446;
        }
      int** r1447 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__first1427);
      int* t1448 = *r1447;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1449 = std__vector_int__std__allocator_int_____end(t1430);
      ref_tmp11433 = r1449;
      long r1450 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&ref_tmp11433, &__last1428);
      int* ptr1451 = &(t1448)[r1450];
      std__vector_int__std__allocator_int______M_erase_at_end(t1430, ptr1451);
    }
  __retval1429 = __first1427; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1452 = __retval1429;
  return t1452;
}

// function: _ZNSt6vectorIiSaIiEE5eraseEN9__gnu_cxx17__normal_iteratorIPKiS1_EES6_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____erase_2(struct std__vector_int__std__allocator_int__* v1453, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v1454, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v1455) {
bb1456:
  struct std__vector_int__std__allocator_int__* this1457;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __first1458;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __last1459;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1460;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __beg1461;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __cbeg1462;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01463;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11464;
  this1457 = v1453;
  __first1458 = v1454;
  __last1459 = v1455;
  struct std__vector_int__std__allocator_int__* t1465 = this1457;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1466 = std__vector_int__std__allocator_int_____begin(t1465);
  __beg1461 = r1466;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r1467 = std__vector_int__std__allocator_int_____cbegin___const(t1465);
  __cbeg1462 = r1467;
  long r1468 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int_const___std__vector_int__std__allocator_int_____(&__first1458, &__cbeg1462);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1469 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__beg1461, r1468);
  agg_tmp01463 = r1469;
  long r1470 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int_const___std__vector_int__std__allocator_int_____(&__last1459, &__cbeg1462);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1471 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__beg1461, r1470);
  agg_tmp11464 = r1471;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1472 = agg_tmp01463;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1473 = agg_tmp11464;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1474 = std__vector_int__std__allocator_int______M_erase_2(t1465, t1472, t1473);
  if (__cir_exc_active) {
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1460 = r1474;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1475 = __retval1460;
  return t1475;
}

// function: _ZNKSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin___const(struct std__vector_int__std__allocator_int__* v1476) {
bb1477:
  struct std__vector_int__std__allocator_int__* this1478;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval1479;
  this1478 = v1476;
  struct std__vector_int__std__allocator_int__* t1480 = this1478;
  struct std___Vector_base_int__std__allocator_int__* base1481 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1480 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1482 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1481->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval1479, &base1482->_M_start);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t1483 = __retval1479;
  return t1483;
}

// function: _ZNKSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end___const(struct std__vector_int__std__allocator_int__* v1484) {
bb1485:
  struct std__vector_int__std__allocator_int__* this1486;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval1487;
  this1486 = v1484;
  struct std__vector_int__std__allocator_int__* t1488 = this1486;
  struct std___Vector_base_int__std__allocator_int__* base1489 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1488 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1490 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1489->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval1487, &base1490->_M_finish);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t1491 = __retval1487;
  return t1491;
}

// function: _ZNKSt6vectorIiSaIiEE5emptyEv
_Bool std__vector_int__std__allocator_int_____empty___const(struct std__vector_int__std__allocator_int__* v1492) {
bb1493:
  struct std__vector_int__std__allocator_int__* this1494;
  _Bool __retval1495;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp01496;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp11497;
  this1494 = v1492;
  struct std__vector_int__std__allocator_int__* t1498 = this1494;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r1499 = std__vector_int__std__allocator_int_____begin___const(t1498);
  ref_tmp01496 = r1499;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r1500 = std__vector_int__std__allocator_int_____end___const(t1498);
  ref_tmp11497 = r1500;
  _Bool r1501 = _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&ref_tmp01496, &ref_tmp11497);
  __retval1495 = r1501;
  _Bool t1502 = __retval1495;
  return t1502;
}

// function: _ZNKRSt13move_iteratorIPiE4baseEv
int** std__move_iterator_int____base___const__(struct std__move_iterator_int___* v1503) {
bb1504:
  struct std__move_iterator_int___* this1505;
  int** __retval1506;
  this1505 = v1503;
  struct std__move_iterator_int___* t1507 = this1505;
  __retval1506 = &t1507->_M_current;
  int** t1508 = __retval1506;
  return t1508;
}

// function: _ZSteqIPiEbRKSt13move_iteratorIT_ES5_
_Bool bool_std__operator___int__(struct std__move_iterator_int___* v1509, struct std__move_iterator_int___* v1510) {
bb1511:
  struct std__move_iterator_int___* __x1512;
  struct std__move_iterator_int___* __y1513;
  _Bool __retval1514;
  __x1512 = v1509;
  __y1513 = v1510;
  struct std__move_iterator_int___* t1515 = __x1512;
  int** r1516 = std__move_iterator_int____base___const__(t1515);
  int* t1517 = *r1516;
  struct std__move_iterator_int___* t1518 = __y1513;
  int** r1519 = std__move_iterator_int____base___const__(t1518);
  int* t1520 = *r1519;
  _Bool c1521 = ((t1517 == t1520)) ? 1 : 0;
  __retval1514 = c1521;
  _Bool t1522 = __retval1514;
  return t1522;
}

// function: _ZSt10_ConstructIiJiEEvPT_DpOT0_
void void_std___Construct_int__int_(int* v1523, int* v1524) {
bb1525:
  int* __p1526;
  int* __args1527;
  __p1526 = v1523;
  __args1527 = v1524;
    _Bool r1528 = std____is_constant_evaluated();
    if (r1528) {
      int* t1529 = __p1526;
      int* t1530 = __args1527;
      int* r1531 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t1529, t1530);
      return;
    }
  int* t1532 = __p1526;
  void* cast1533 = (void*)t1532;
  int* cast1534 = (int*)cast1533;
  int* t1535 = __args1527;
  int t1536 = *t1535;
  *cast1534 = t1536;
  return;
}

// function: _ZNKSt6ranges7__imove9_IterMoveclIRKPiQoo11__adl_imoveIT_ErqTDTdeclsr3stdE7declvalIS6_EEEEEENS1_8__resultIS6_E4typeEOS6_
int* _ZNKSt6ranges7__imove9_IterMoveclIRKPiQoo11__adl_imoveIT_ErqTDTdeclsr3stdE7declvalIS6_EEEEEENS1_8__resultIS6_E4typeEOS6_(struct std__ranges____imove___IterMove* v1537, int** v1538) {
bb1539:
  struct std__ranges____imove___IterMove* this1540;
  int** __e1541;
  int* __retval1542;
  this1540 = v1537;
  __e1541 = v1538;
  struct std__ranges____imove___IterMove* t1543 = this1540;
      int** t1544 = __e1541;
      int* t1545 = *t1544;
      __retval1542 = t1545;
      int* t1546 = __retval1542;
      return t1546;
  abort();
}

// function: _ZNKSt13move_iteratorIPiEdeEv
int* std__move_iterator_int____operator____const(struct std__move_iterator_int___* v1547) {
bb1548:
  struct std__move_iterator_int___* this1549;
  int* __retval1550;
  this1549 = v1547;
  struct std__move_iterator_int___* t1551 = this1549;
  int* r1552 = _ZNKSt6ranges7__imove9_IterMoveclIRKPiQoo11__adl_imoveIT_ErqTDTdeclsr3stdE7declvalIS6_EEEEEENS1_8__resultIS6_E4typeEOS6_(&_ZNSt6ranges4_Cpo9iter_moveE, &t1551->_M_current);
  __retval1550 = r1552;
  int* t1553 = __retval1550;
  return t1553;
}

// function: _ZNSt13move_iteratorIPiEppEv
struct std__move_iterator_int___* std__move_iterator_int____operator__(struct std__move_iterator_int___* v1554) {
bb1555:
  struct std__move_iterator_int___* this1556;
  struct std__move_iterator_int___* __retval1557;
  this1556 = v1554;
  struct std__move_iterator_int___* t1558 = this1556;
  int* t1559 = t1558->_M_current;
  int c1560 = 1;
  int* ptr1561 = &(t1559)[c1560];
  t1558->_M_current = ptr1561;
  __retval1557 = t1558;
  struct std__move_iterator_int___* t1562 = __retval1557;
  return t1562;
}

// function: _ZSt16__do_uninit_copyISt13move_iteratorIPiES2_S1_ET1_T_T0_S3_
int* int__std____do_uninit_copy_std__move_iterator_int____std__move_iterator_int____int__(struct std__move_iterator_int___ v1563, struct std__move_iterator_int___ v1564, int* v1565) {
bb1566:
  struct std__move_iterator_int___ __first1567;
  struct std__move_iterator_int___ __last1568;
  int* __result1569;
  int* __retval1570;
  struct std___UninitDestroyGuard_int____void_ __guard1571;
  __first1567 = v1563;
  __last1568 = v1564;
  __result1569 = v1565;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard1571, &__result1569);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
      while (1) {
        _Bool r1573 = bool_std__operator___int__(&__first1567, &__last1568);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1571);
          }
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
        _Bool u1574 = !r1573;
        if (!u1574) break;
        int* t1575 = __result1569;
        int* r1576 = std__move_iterator_int____operator____const(&__first1567);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1571);
          }
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
        void_std___Construct_int__int_(t1575, r1576);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1571);
          }
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
      for_step1572: ;
        struct std__move_iterator_int___* r1577 = std__move_iterator_int____operator__(&__first1567);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1571);
          }
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
        int* t1578 = __result1569;
        int c1579 = 1;
        int* ptr1580 = &(t1578)[c1579];
        __result1569 = ptr1580;
      }
    std___UninitDestroyGuard_int___void___release(&__guard1571);
    if (__cir_exc_active) {
      {
        std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1571);
      }
      int* __cir_eh_ret = (int*)0;
      return __cir_eh_ret;
    }
    int* t1581 = __result1569;
    __retval1570 = t1581;
    int* t1582 = __retval1570;
    int* ret_val1583 = t1582;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1571);
    }
    return ret_val1583;
  abort();
}

// function: _ZSt18uninitialized_copyISt13move_iteratorIPiES1_ET0_T_S4_S3_
int* int__std__uninitialized_copy_std__move_iterator_int____int__(struct std__move_iterator_int___ v1584, struct std__move_iterator_int___ v1585, int* v1586) {
bb1587:
  struct std__move_iterator_int___ __first1588;
  struct std__move_iterator_int___ __last1589;
  int* __result1590;
  int* __retval1591;
  __first1588 = v1584;
  __last1589 = v1585;
  __result1590 = v1586;
        struct std__move_iterator_int___ agg_tmp01592;
        struct std__move_iterator_int___ agg_tmp11593;
        agg_tmp01592 = __first1588; // copy
        agg_tmp11593 = __last1589; // copy
        int* t1594 = __result1590;
        struct std__move_iterator_int___ t1595 = agg_tmp01592;
        struct std__move_iterator_int___ t1596 = agg_tmp11593;
        int* r1597 = int__std____do_uninit_copy_std__move_iterator_int____std__move_iterator_int____int__(t1595, t1596, t1594);
        if (__cir_exc_active) {
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
        __retval1591 = r1597;
        int* t1598 = __retval1591;
        return t1598;
  abort();
}

// function: _ZSt22__uninitialized_copy_aISt13move_iteratorIPiES2_S1_iET1_T_T0_S3_RSaIT2_E
int* int__std____uninitialized_copy_a_std__move_iterator_int____std__move_iterator_int____int___int_(struct std__move_iterator_int___ v1599, struct std__move_iterator_int___ v1600, int* v1601, struct std__allocator_int_* v1602) {
bb1603:
  struct std__move_iterator_int___ __first1604;
  struct std__move_iterator_int___ __last1605;
  int* __result1606;
  struct std__allocator_int_* unnamed1607;
  int* __retval1608;
  __first1604 = v1599;
  __last1605 = v1600;
  __result1606 = v1601;
  unnamed1607 = v1602;
    _Bool r1609 = std__is_constant_evaluated();
    if (r1609) {
      struct std__move_iterator_int___ agg_tmp01610;
      struct std__move_iterator_int___ agg_tmp11611;
      agg_tmp01610 = __first1604; // copy
      agg_tmp11611 = __last1605; // copy
      int* t1612 = __result1606;
      struct std__move_iterator_int___ t1613 = agg_tmp01610;
      struct std__move_iterator_int___ t1614 = agg_tmp11611;
      int* r1615 = int__std____do_uninit_copy_std__move_iterator_int____std__move_iterator_int____int__(t1613, t1614, t1612);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      __retval1608 = r1615;
      int* t1616 = __retval1608;
      return t1616;
    }
    struct std__move_iterator_int___ agg_tmp21617;
    struct std__move_iterator_int___ agg_tmp31618;
    agg_tmp21617 = __first1604; // copy
    agg_tmp31618 = __last1605; // copy
    int* t1619 = __result1606;
    struct std__move_iterator_int___ t1620 = agg_tmp21617;
    struct std__move_iterator_int___ t1621 = agg_tmp31618;
    int* r1622 = int__std__uninitialized_copy_std__move_iterator_int____int__(t1620, t1621, t1619);
    if (__cir_exc_active) {
      int* __cir_eh_ret = (int*)0;
      return __cir_eh_ret;
    }
    __retval1608 = r1622;
    int* t1623 = __retval1608;
    return t1623;
  abort();
}

// function: _ZNSt13move_iteratorIPiEC2ES0_
void std__move_iterator_int____move_iterator(struct std__move_iterator_int___* v1624, int* v1625) {
bb1626:
  struct std__move_iterator_int___* this1627;
  int* __i1628;
  this1627 = v1624;
  __i1628 = v1625;
  struct std__move_iterator_int___* t1629 = this1627;
  struct std____detail____move_iter_cat_int___* base1630 = (struct std____detail____move_iter_cat_int___*)((char *)t1629 + 0);
  int* t1631 = __i1628;
  t1629->_M_current = t1631;
  return;
}

// function: _ZSt18make_move_iteratorIPiESt13move_iteratorIT_ES2_
struct std__move_iterator_int___ std__move_iterator_int___std__make_move_iterator_int__(int* v1632) {
bb1633:
  int* __i1634;
  struct std__move_iterator_int___ __retval1635;
  __i1634 = v1632;
  int* t1636 = __i1634;
  std__move_iterator_int____move_iterator(&__retval1635, t1636);
  if (__cir_exc_active) {
    struct std__move_iterator_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std__move_iterator_int___ t1637 = __retval1635;
  return t1637;
}

// function: _ZSt22__uninitialized_move_aIPiS0_SaIiEET0_T_S3_S2_RT1_
int* int__std____uninitialized_move_a_int___int___std__allocator_int___(int* v1638, int* v1639, int* v1640, struct std__allocator_int_* v1641) {
bb1642:
  int* __first1643;
  int* __last1644;
  int* __result1645;
  struct std__allocator_int_* __alloc1646;
  int* __retval1647;
  struct std__move_iterator_int___ agg_tmp01648;
  struct std__move_iterator_int___ agg_tmp11649;
  __first1643 = v1638;
  __last1644 = v1639;
  __result1645 = v1640;
  __alloc1646 = v1641;
  int* t1650 = __first1643;
  struct std__move_iterator_int___ r1651 = std__move_iterator_int___std__make_move_iterator_int__(t1650);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  agg_tmp01648 = r1651;
  int* t1652 = __last1644;
  struct std__move_iterator_int___ r1653 = std__move_iterator_int___std__make_move_iterator_int__(t1652);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  agg_tmp11649 = r1653;
  int* t1654 = __result1645;
  struct std__allocator_int_* t1655 = __alloc1646;
  struct std__move_iterator_int___ t1656 = agg_tmp01648;
  struct std__move_iterator_int___ t1657 = agg_tmp11649;
  int* r1658 = int__std____uninitialized_copy_a_std__move_iterator_int____std__move_iterator_int____int___int_(t1656, t1657, t1654, t1655);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1647 = r1658;
  int* t1659 = __retval1647;
  return t1659;
}

// function: _ZSt12__assign_oneILb0EPiS0_EvRT0_RT1_
void void_std____assign_one_false__int___int__(int** v1660, int** v1661) {
bb1662:
  int** __out1663;
  int** __in1664;
  __out1663 = v1660;
  __in1664 = v1661;
    int** t1665 = __in1664;
    int* t1666 = *t1665;
    int t1667 = *t1666;
    int** t1668 = __out1663;
    int* t1669 = *t1668;
    *t1669 = t1667;
  return;
}

// function: _ZSt14__copy_move_a2ILb0EPiS0_S0_ET2_T0_T1_S1_
int* int__std____copy_move_a2_false__int___int___int__(int* v1670, int* v1671, int* v1672) {
bb1673:
  int* __first1674;
  int* __last1675;
  int* __result1676;
  int* __retval1677;
  __first1674 = v1670;
  __last1675 = v1671;
  __result1676 = v1672;
      _Bool r1678 = std____is_constant_evaluated();
      if (r1678) {
      } else {
          long __n1679;
          int* t1680 = __first1674;
          int* t1681 = __last1675;
          long r1682 = std__iterator_traits_int____difference_type_std__distance_int__(t1680, t1681);
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
          __n1679 = r1682;
            long t1683 = __n1679;
            long c1684 = 1;
            _Bool c1685 = ((t1683 > c1684)) ? 1 : 0;
            if (c1685) {
              int* t1686 = __result1676;
              void* cast1687 = (void*)t1686;
              int* t1688 = __first1674;
              void* cast1689 = (void*)t1688;
              long t1690 = __n1679;
              unsigned long cast1691 = (unsigned long)t1690;
              unsigned long c1692 = 4;
              unsigned long b1693 = cast1691 * c1692;
              void* r1694 = memmove(cast1687, cast1689, b1693);
              long t1695 = __n1679;
              int* t1696 = __result1676;
              int* ptr1697 = &(t1696)[t1695];
              __result1676 = ptr1697;
            } else {
                long t1698 = __n1679;
                long c1699 = 1;
                _Bool c1700 = ((t1698 == c1699)) ? 1 : 0;
                if (c1700) {
                  void_std____assign_one_false__int___int__(&__result1676, &__first1674);
                  if (__cir_exc_active) {
                    int* __cir_eh_ret = (int*)0;
                    return __cir_eh_ret;
                  }
                  int* t1701 = __result1676;
                  int c1702 = 1;
                  int* ptr1703 = &(t1701)[c1702];
                  __result1676 = ptr1703;
                }
            }
          int* t1704 = __result1676;
          __retval1677 = t1704;
          int* t1705 = __retval1677;
          return t1705;
      }
    while (1) {
      int* t1707 = __first1674;
      int* t1708 = __last1675;
      _Bool c1709 = ((t1707 != t1708)) ? 1 : 0;
      if (!c1709) break;
      void_std____assign_one_false__int___int__(&__result1676, &__first1674);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
    for_step1706: ;
      int* t1710 = __result1676;
      int c1711 = 1;
      int* ptr1712 = &(t1710)[c1711];
      __result1676 = ptr1712;
      int* t1713 = __first1674;
      int c1714 = 1;
      int* ptr1715 = &(t1713)[c1714];
      __first1674 = ptr1715;
    }
  int* t1716 = __result1676;
  __retval1677 = t1716;
  int* t1717 = __retval1677;
  return t1717;
}

// function: _ZSt14__copy_move_a1ILb0EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_a1_false__int___int__(int* v1718, int* v1719, int* v1720) {
bb1721:
  int* __first1722;
  int* __last1723;
  int* __result1724;
  int* __retval1725;
  __first1722 = v1718;
  __last1723 = v1719;
  __result1724 = v1720;
  int* t1726 = __first1722;
  int* t1727 = __last1723;
  int* t1728 = __result1724;
  int* r1729 = int__std____copy_move_a2_false__int___int___int__(t1726, t1727, t1728);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1725 = r1729;
  int* t1730 = __retval1725;
  return t1730;
}

// function: _ZSt13__copy_move_aILb0EPiN9__gnu_cxx17__normal_iteratorIS0_St6vectorIiSaIiEEEEET1_T0_S8_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____copy_move_a_false__int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(int* v1731, int* v1732, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1733) {
bb1734:
  int* __first1735;
  int* __last1736;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result1737;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1738;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01739;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11740;
  __first1735 = v1731;
  __last1736 = v1732;
  __result1737 = v1733;
  agg_tmp01739 = __result1737; // copy
  int* t1741 = __first1735;
  int* r1742 = int__std____niter_base_int__(t1741);
  int* t1743 = __last1736;
  int* r1744 = int__std____niter_base_int__(t1743);
  agg_tmp11740 = __result1737; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1745 = agg_tmp11740;
  int* r1746 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t1745);
  int* r1747 = int__std____copy_move_a1_false__int___int__(r1742, r1744, r1746);
  if (__cir_exc_active) {
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1748 = agg_tmp01739;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1749 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____niter_wrap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(t1748, r1747);
  if (__cir_exc_active) {
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1738 = r1749;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1750 = __retval1738;
  return t1750;
}

// function: _ZSt4copyIPiN9__gnu_cxx17__normal_iteratorIS0_St6vectorIiSaIiEEEEET0_T_S8_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__copy_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(int* v1751, int* v1752, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1753) {
bb1754:
  int* __first1755;
  int* __last1756;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result1757;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1758;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01759;
  __first1755 = v1751;
  __last1756 = v1752;
  __result1757 = v1753;
  int* t1760 = __first1755;
  int* r1761 = int__std____miter_base_int__(t1760);
  if (__cir_exc_active) {
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  int* t1762 = __last1756;
  int* r1763 = int__std____miter_base_int__(t1762);
  if (__cir_exc_active) {
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  agg_tmp01759 = __result1757; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1764 = agg_tmp01759;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1765 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____copy_move_a_false__int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(r1761, r1763, t1764);
  if (__cir_exc_active) {
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  __retval1758 = r1765;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1766 = __retval1758;
  return t1766;
}

// function: _ZSt7advanceIPimEvRT_T0_
void void_std__advance_int___unsigned_long_(int** v1767, unsigned long v1768) {
bb1769:
  int** __i1770;
  unsigned long __n1771;
  long __d1772;
  struct std__random_access_iterator_tag agg_tmp01773;
  __i1770 = v1767;
  __n1771 = v1768;
  unsigned long t1774 = __n1771;
  long cast1775 = (long)t1774;
  __d1772 = cast1775;
  int** t1776 = __i1770;
  long t1777 = __d1772;
  int** t1778 = __i1770;
  struct std__random_access_iterator_tag r1779 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(t1778);
  if (__cir_exc_active) {
    return;
  }
  agg_tmp01773 = r1779;
  struct std__random_access_iterator_tag t1780 = agg_tmp01773;
  void_std____advance_int___long_(t1776, t1777, t1780);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt32__make_move_if_noexcept_iteratorIiSt13move_iteratorIPiEET0_PT_
struct std__move_iterator_int___ std__move_iterator_int___std____make_move_if_noexcept_iterator_int__std__move_iterator_int____(int* v1781) {
bb1782:
  int* __i1783;
  struct std__move_iterator_int___ __retval1784;
  __i1783 = v1781;
  int* t1785 = __i1783;
  std__move_iterator_int____move_iterator(&__retval1784, t1785);
  if (__cir_exc_active) {
    struct std__move_iterator_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std__move_iterator_int___ t1786 = __retval1784;
  return t1786;
}

// function: _ZSt34__uninitialized_move_if_noexcept_aIPiS0_SaIiEET0_T_S3_S2_RT1_
int* int__std____uninitialized_move_if_noexcept_a_int___int___std__allocator_int___(int* v1787, int* v1788, int* v1789, struct std__allocator_int_* v1790) {
bb1791:
  int* __first1792;
  int* __last1793;
  int* __result1794;
  struct std__allocator_int_* __alloc1795;
  int* __retval1796;
  struct std__move_iterator_int___ agg_tmp01797;
  struct std__move_iterator_int___ agg_tmp11798;
  __first1792 = v1787;
  __last1793 = v1788;
  __result1794 = v1789;
  __alloc1795 = v1790;
  int* t1799 = __first1792;
  struct std__move_iterator_int___ r1800 = std__move_iterator_int___std____make_move_if_noexcept_iterator_int__std__move_iterator_int____(t1799);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  agg_tmp01797 = r1800;
  int* t1801 = __last1793;
  struct std__move_iterator_int___ r1802 = std__move_iterator_int___std____make_move_if_noexcept_iterator_int__std__move_iterator_int____(t1801);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  agg_tmp11798 = r1802;
  int* t1803 = __result1794;
  struct std__allocator_int_* t1804 = __alloc1795;
  struct std__move_iterator_int___ t1805 = agg_tmp01797;
  struct std__move_iterator_int___ t1806 = agg_tmp11798;
  int* r1807 = int__std____uninitialized_copy_a_std__move_iterator_int____std__move_iterator_int____int___int_(t1805, t1806, t1803, t1804);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1796 = r1807;
  int* t1808 = __retval1796;
  return t1808;
}

// function: _ZNSt6vectorIiSaIiEE15_M_range_insertIPiEEvN9__gnu_cxx17__normal_iteratorIS3_S1_EET_S7_St20forward_iterator_tag
void void_std__vector_int__std__allocator_int______M_range_insert_int__(struct std__vector_int__std__allocator_int__* v1809, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1810, int* v1811, int* v1812, struct std__forward_iterator_tag v1813) {
bb1814:
  struct std__vector_int__std__allocator_int__* this1815;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __position1816;
  int* __first1817;
  int* __last1818;
  struct std__forward_iterator_tag unnamed1819;
  this1815 = v1809;
  __position1816 = v1810;
  __first1817 = v1811;
  __last1818 = v1812;
  unnamed1819 = v1813;
  struct std__vector_int__std__allocator_int__* t1820 = this1815;
    int* t1821 = __first1817;
    int* t1822 = __last1818;
    _Bool c1823 = ((t1821 != t1822)) ? 1 : 0;
    if (c1823) {
      unsigned long __n1824;
      int* t1825 = __first1817;
      int* t1826 = __last1818;
      long r1827 = std__iterator_traits_int____difference_type_std__distance_int__(t1825, t1826);
      if (__cir_exc_active) {
        return;
      }
      unsigned long cast1828 = (unsigned long)r1827;
      __n1824 = cast1828;
        struct std___Vector_base_int__std__allocator_int__* base1829 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1820 + 0);
        struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1830 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1829->_M_impl) + 0);
        int* t1831 = base1830->_M_end_of_storage;
        struct std___Vector_base_int__std__allocator_int__* base1832 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1820 + 0);
        struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1833 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1832->_M_impl) + 0);
        int* t1834 = base1833->_M_finish;
        long diff1835 = t1831 - t1834;
        unsigned long cast1836 = (unsigned long)diff1835;
        unsigned long t1837 = __n1824;
        _Bool c1838 = ((cast1836 >= t1837)) ? 1 : 0;
        if (c1838) {
          unsigned long __elems_after1839;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp01840;
          int* __old_finish1841;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1842 = std__vector_int__std__allocator_int_____end(t1820);
          ref_tmp01840 = r1842;
          long r1843 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&ref_tmp01840, &__position1816);
          unsigned long cast1844 = (unsigned long)r1843;
          __elems_after1839 = cast1844;
          struct std___Vector_base_int__std__allocator_int__* base1845 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1820 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1846 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1845->_M_impl) + 0);
          int* t1847 = base1846->_M_finish;
          __old_finish1841 = t1847;
            unsigned long t1848 = __elems_after1839;
            unsigned long t1849 = __n1824;
            _Bool c1850 = ((t1848 > t1849)) ? 1 : 0;
            if (c1850) {
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01851;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11852;
              struct std___Vector_base_int__std__allocator_int__* base1853 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1820 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1854 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1853->_M_impl) + 0);
              int* t1855 = base1854->_M_finish;
              unsigned long t1856 = __n1824;
              long cast1857 = (long)t1856;
              long u1858 = -cast1857;
              int* ptr1859 = &(t1855)[u1858];
              struct std___Vector_base_int__std__allocator_int__* base1860 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1820 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1861 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1860->_M_impl) + 0);
              int* t1862 = base1861->_M_finish;
              struct std___Vector_base_int__std__allocator_int__* base1863 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1820 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1864 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1863->_M_impl) + 0);
              int* t1865 = base1864->_M_finish;
              struct std___Vector_base_int__std__allocator_int__* base1866 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1820 + 0);
              struct std__allocator_int_* r1867 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1866);
              int* r1868 = int__std____uninitialized_move_a_int___int___std__allocator_int___(ptr1859, t1862, t1865, r1867);
              if (__cir_exc_active) {
                return;
              }
              unsigned long t1869 = __n1824;
              struct std___Vector_base_int__std__allocator_int__* base1870 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1820 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1871 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1870->_M_impl) + 0);
              int* t1872 = base1871->_M_finish;
              int* ptr1873 = &(t1872)[t1869];
              base1871->_M_finish = ptr1873;
              int** r1874 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__position1816);
              int* t1875 = *r1874;
              int* t1876 = __old_finish1841;
              unsigned long t1877 = __n1824;
              long cast1878 = (long)t1877;
              long u1879 = -cast1878;
              int* ptr1880 = &(t1876)[u1879];
              int* t1881 = __old_finish1841;
              int* r1882 = int__std__move_backward_int___int__(t1875, ptr1880, t1881);
              if (__cir_exc_active) {
                return;
              }
              int* t1883 = __first1817;
              int* t1884 = __last1818;
              agg_tmp01851 = __position1816; // copy
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1885 = agg_tmp01851;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1886 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__copy_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t1883, t1884, t1885);
              if (__cir_exc_active) {
                return;
              }
              agg_tmp11852 = r1886;
            } else {
              int* __mid1887;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp21888;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp31889;
              int* t1890 = __first1817;
              __mid1887 = t1890;
              unsigned long t1891 = __elems_after1839;
              void_std__advance_int___unsigned_long_(&__mid1887, t1891);
              if (__cir_exc_active) {
                return;
              }
              int* t1892 = __mid1887;
              int* t1893 = __last1818;
              struct std___Vector_base_int__std__allocator_int__* base1894 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1820 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1895 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1894->_M_impl) + 0);
              int* t1896 = base1895->_M_finish;
              struct std___Vector_base_int__std__allocator_int__* base1897 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1820 + 0);
              struct std__allocator_int_* r1898 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1897);
              int* r1899 = int__std____uninitialized_copy_a_int___int___int___int_(t1892, t1893, t1896, r1898);
              if (__cir_exc_active) {
                return;
              }
              unsigned long t1900 = __n1824;
              unsigned long t1901 = __elems_after1839;
              unsigned long b1902 = t1900 - t1901;
              struct std___Vector_base_int__std__allocator_int__* base1903 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1820 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1904 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1903->_M_impl) + 0);
              int* t1905 = base1904->_M_finish;
              int* ptr1906 = &(t1905)[b1902];
              base1904->_M_finish = ptr1906;
              int** r1907 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__position1816);
              int* t1908 = *r1907;
              int* t1909 = __old_finish1841;
              struct std___Vector_base_int__std__allocator_int__* base1910 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1820 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1911 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1910->_M_impl) + 0);
              int* t1912 = base1911->_M_finish;
              struct std___Vector_base_int__std__allocator_int__* base1913 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1820 + 0);
              struct std__allocator_int_* r1914 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1913);
              int* r1915 = int__std____uninitialized_move_a_int___int___std__allocator_int___(t1908, t1909, t1912, r1914);
              if (__cir_exc_active) {
                return;
              }
              unsigned long t1916 = __elems_after1839;
              struct std___Vector_base_int__std__allocator_int__* base1917 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1820 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1918 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1917->_M_impl) + 0);
              int* t1919 = base1918->_M_finish;
              int* ptr1920 = &(t1919)[t1916];
              base1918->_M_finish = ptr1920;
              int* t1921 = __first1817;
              int* t1922 = __mid1887;
              agg_tmp21888 = __position1816; // copy
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1923 = agg_tmp21888;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1924 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__copy_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t1921, t1922, t1923);
              if (__cir_exc_active) {
                return;
              }
              agg_tmp31889 = r1924;
            }
        } else {
          int* __old_start1925;
          int* __old_finish1926;
          unsigned long __len1927;
          int* __new_start1928;
          int* __new_finish1929;
          struct std___Vector_base_int__std__allocator_int__* base1930 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1820 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1931 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1930->_M_impl) + 0);
          int* t1932 = base1931->_M_start;
          __old_start1925 = t1932;
          struct std___Vector_base_int__std__allocator_int__* base1933 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1820 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1934 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1933->_M_impl) + 0);
          int* t1935 = base1934->_M_finish;
          __old_finish1926 = t1935;
          unsigned long t1936 = __n1824;
          char* cast1937 = (char*)&(_str_19);
          unsigned long r1938 = std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(t1820, t1936, cast1937);
          if (__cir_exc_active) {
            return;
          }
          __len1927 = r1938;
          struct std___Vector_base_int__std__allocator_int__* base1939 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1820 + 0);
          unsigned long t1940 = __len1927;
          int* r1941 = std___Vector_base_int__std__allocator_int______M_allocate(base1939, t1940);
          if (__cir_exc_active) {
            return;
          }
          __new_start1928 = r1941;
          int* t1942 = __new_start1928;
          __new_finish1929 = t1942;
              int* t1944 = __old_start1925;
              int** r1945 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__position1816);
              int* t1946 = *r1945;
              int* t1947 = __new_start1928;
              struct std___Vector_base_int__std__allocator_int__* base1948 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1820 + 0);
              struct std__allocator_int_* r1949 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1948);
              int* r1950 = int__std____uninitialized_move_if_noexcept_a_int___int___std__allocator_int___(t1944, t1946, t1947, r1949);
              if (__cir_exc_active) {
                goto cir_try_dispatch1943;
              }
              __new_finish1929 = r1950;
              int* t1951 = __first1817;
              int* t1952 = __last1818;
              int* t1953 = __new_finish1929;
              struct std___Vector_base_int__std__allocator_int__* base1954 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1820 + 0);
              struct std__allocator_int_* r1955 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1954);
              int* r1956 = int__std____uninitialized_copy_a_int___int___int___int_(t1951, t1952, t1953, r1955);
              if (__cir_exc_active) {
                goto cir_try_dispatch1943;
              }
              __new_finish1929 = r1956;
              int** r1957 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__position1816);
              int* t1958 = *r1957;
              int* t1959 = __old_finish1926;
              int* t1960 = __new_finish1929;
              struct std___Vector_base_int__std__allocator_int__* base1961 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1820 + 0);
              struct std__allocator_int_* r1962 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1961);
              int* r1963 = int__std____uninitialized_move_if_noexcept_a_int___int___std__allocator_int___(t1958, t1959, t1960, r1962);
              if (__cir_exc_active) {
                goto cir_try_dispatch1943;
              }
              __new_finish1929 = r1963;
            cir_try_dispatch1943: ;
            if (__cir_exc_active) {
            {
              int ca_tok1964 = 0;
              void* ca_exn1965 = (void*)__cir_exc_ptr;
              __cir_exc_active = 0;
                int* t1966 = __new_start1928;
                int* t1967 = __new_finish1929;
                struct std___Vector_base_int__std__allocator_int__* base1968 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1820 + 0);
                struct std__allocator_int_* r1969 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1968);
                void_std___Destroy_int___int_(t1966, t1967, r1969);
                if (__cir_exc_active) {
                  {
                    if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
                  }
                  return;
                }
                struct std___Vector_base_int__std__allocator_int__* base1970 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1820 + 0);
                int* t1971 = __new_start1928;
                unsigned long t1972 = __len1927;
                std___Vector_base_int__std__allocator_int______M_deallocate(base1970, t1971, t1972);
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
          int* t1973 = __old_start1925;
          int* t1974 = __old_finish1926;
          struct std___Vector_base_int__std__allocator_int__* base1975 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1820 + 0);
          struct std__allocator_int_* r1976 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1975);
          void_std___Destroy_int___int_(t1973, t1974, r1976);
          if (__cir_exc_active) {
            return;
          }
          struct std___Vector_base_int__std__allocator_int__* base1977 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1820 + 0);
          int* t1978 = __old_start1925;
          struct std___Vector_base_int__std__allocator_int__* base1979 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1820 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1980 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1979->_M_impl) + 0);
          int* t1981 = base1980->_M_end_of_storage;
          int* t1982 = __old_start1925;
          long diff1983 = t1981 - t1982;
          unsigned long cast1984 = (unsigned long)diff1983;
          std___Vector_base_int__std__allocator_int______M_deallocate(base1977, t1978, cast1984);
          if (__cir_exc_active) {
            return;
          }
          int* t1985 = __new_start1928;
          struct std___Vector_base_int__std__allocator_int__* base1986 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1820 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1987 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1986->_M_impl) + 0);
          base1987->_M_start = t1985;
          int* t1988 = __new_finish1929;
          struct std___Vector_base_int__std__allocator_int__* base1989 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1820 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1990 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1989->_M_impl) + 0);
          base1990->_M_finish = t1988;
          int* t1991 = __new_start1928;
          unsigned long t1992 = __len1927;
          int* ptr1993 = &(t1991)[t1992];
          struct std___Vector_base_int__std__allocator_int__* base1994 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1820 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1995 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1994->_M_impl) + 0);
          base1995->_M_end_of_storage = ptr1993;
        }
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE6insertIPivEEN9__gnu_cxx17__normal_iteratorIS3_S1_EENS5_IPKiS1_EET_SA_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__vector_int__std__allocator_int_____insert_int___void_(struct std__vector_int__std__allocator_int__* v1996, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v1997, int* v1998, int* v1999) {
bb2000:
  struct std__vector_int__std__allocator_int__* this2001;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __position2002;
  int* __first2003;
  int* __last2004;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval2005;
  long __offset2006;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp02007;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp02008;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp12009;
  struct std__forward_iterator_tag agg_tmp12010;
  struct std__random_access_iterator_tag ref_tmp22011;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp32012;
  this2001 = v1996;
  __position2002 = v1997;
  __first2003 = v1998;
  __last2004 = v1999;
  struct std__vector_int__std__allocator_int__* t2013 = this2001;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r2014 = std__vector_int__std__allocator_int_____cbegin___const(t2013);
  ref_tmp02007 = r2014;
  long r2015 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int_const___std__vector_int__std__allocator_int_____(&__position2002, &ref_tmp02007);
  __offset2006 = r2015;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2016 = std__vector_int__std__allocator_int_____begin(t2013);
  ref_tmp12009 = r2016;
  long t2017 = __offset2006;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2018 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&ref_tmp12009, t2017);
  agg_tmp02008 = r2018;
  int* t2019 = __first2003;
  int* t2020 = __last2004;
  struct std__random_access_iterator_tag r2021 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first2003);
  if (__cir_exc_active) {
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  ref_tmp22011 = r2021;
  struct std__forward_iterator_tag* base2022 = (struct std__forward_iterator_tag*)((char *)&(ref_tmp22011) + 0);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2023 = agg_tmp02008;
  struct std__forward_iterator_tag t2024 = agg_tmp12010;
  void_std__vector_int__std__allocator_int______M_range_insert_int__(t2013, t2023, t2019, t2020, t2024);
  if (__cir_exc_active) {
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2025 = std__vector_int__std__allocator_int_____begin(t2013);
  ref_tmp32012 = r2025;
  long t2026 = __offset2006;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2027 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&ref_tmp32012, t2026);
  __retval2005 = r2027;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2028 = __retval2005;
  return t2028;
}

// function: _ZNSt6vectorIiSaIiEE5clearEv
void std__vector_int__std__allocator_int_____clear(struct std__vector_int__std__allocator_int__* v2029) {
bb2030:
  struct std__vector_int__std__allocator_int__* this2031;
  this2031 = v2029;
  struct std__vector_int__std__allocator_int__* t2032 = this2031;
  struct std___Vector_base_int__std__allocator_int__* base2033 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2032 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2034 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base2033->_M_impl) + 0);
  int* t2035 = base2034->_M_start;
  std__vector_int__std__allocator_int______M_erase_at_end(t2032, t2035);
  return;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v2036, void* v2037) {
bb2038:
  struct std__basic_ostream_char__std__char_traits_char__* this2039;
  void* __pf2040;
  struct std__basic_ostream_char__std__char_traits_char__* __retval2041;
  this2039 = v2036;
  __pf2040 = v2037;
  struct std__basic_ostream_char__std__char_traits_char__* t2042 = this2039;
  void* t2043 = __pf2040;
  struct std__basic_ostream_char__std__char_traits_char__* r2044 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t2043)(t2042);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval2041 = r2044;
  struct std__basic_ostream_char__std__char_traits_char__* t2045 = __retval2041;
  return t2045;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v2046) {
bb2047:
  struct std__basic_ostream_char__std__char_traits_char__* __os2048;
  struct std__basic_ostream_char__std__char_traits_char__* __retval2049;
  __os2048 = v2046;
  struct std__basic_ostream_char__std__char_traits_char__* t2050 = __os2048;
  struct std__basic_ostream_char__std__char_traits_char__* r2051 = std__ostream__flush(t2050);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval2049 = r2051;
  struct std__basic_ostream_char__std__char_traits_char__* t2052 = __retval2049;
  return t2052;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v2053) {
bb2054:
  struct std__ctype_char_* __f2055;
  struct std__ctype_char_* __retval2056;
  __f2055 = v2053;
    struct std__ctype_char_* t2057 = __f2055;
    _Bool cast2058 = (_Bool)t2057;
    _Bool u2059 = !cast2058;
    if (u2059) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t2060 = __f2055;
  __retval2056 = t2060;
  struct std__ctype_char_* t2061 = __retval2056;
  return t2061;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v2062, char v2063) {
bb2064:
  struct std__ctype_char_* this2065;
  char __c2066;
  char __retval2067;
  this2065 = v2062;
  __c2066 = v2063;
  struct std__ctype_char_* t2068 = this2065;
    char t2069 = t2068->_M_widen_ok;
    _Bool cast2070 = (_Bool)t2069;
    if (cast2070) {
      char t2071 = __c2066;
      unsigned char cast2072 = (unsigned char)t2071;
      unsigned long cast2073 = (unsigned long)cast2072;
      char t2074 = t2068->_M_widen[cast2073];
      __retval2067 = t2074;
      char t2075 = __retval2067;
      return t2075;
    }
  std__ctype_char____M_widen_init___const(t2068);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t2076 = __c2066;
  void** v2077 = (void**)t2068;
  void* v2078 = *((void**)v2077);
  char vcall2081 = (char)__VERIFIER_virtual_call_char_char(t2068, 6, t2076);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval2067 = vcall2081;
  char t2082 = __retval2067;
  return t2082;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v2083, char v2084) {
bb2085:
  struct std__basic_ios_char__std__char_traits_char__* this2086;
  char __c2087;
  char __retval2088;
  this2086 = v2083;
  __c2087 = v2084;
  struct std__basic_ios_char__std__char_traits_char__* t2089 = this2086;
  struct std__ctype_char_* t2090 = t2089->_M_ctype;
  struct std__ctype_char_* r2091 = std__ctype_char__const__std____check_facet_std__ctype_char___(t2090);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t2092 = __c2087;
  char r2093 = std__ctype_char___widen_char__const(r2091, t2092);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval2088 = r2093;
  char t2094 = __retval2088;
  return t2094;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v2095) {
bb2096:
  struct std__basic_ostream_char__std__char_traits_char__* __os2097;
  struct std__basic_ostream_char__std__char_traits_char__* __retval2098;
  __os2097 = v2095;
  struct std__basic_ostream_char__std__char_traits_char__* t2099 = __os2097;
  struct std__basic_ostream_char__std__char_traits_char__* t2100 = __os2097;
  void** v2101 = (void**)t2100;
  void* v2102 = *((void**)v2101);
  unsigned char* cast2103 = (unsigned char*)v2102;
  long c2104 = -24;
  unsigned char* ptr2105 = &(cast2103)[c2104];
  long* cast2106 = (long*)ptr2105;
  long t2107 = *cast2106;
  unsigned char* cast2108 = (unsigned char*)t2100;
  unsigned char* ptr2109 = &(cast2108)[t2107];
  struct std__basic_ostream_char__std__char_traits_char__* cast2110 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr2109;
  struct std__basic_ios_char__std__char_traits_char__* cast2111 = (struct std__basic_ios_char__std__char_traits_char__*)cast2110;
  char c2112 = 10;
  char r2113 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast2111, c2112);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r2114 = std__ostream__put(t2099, r2113);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r2115 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r2114);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval2098 = r2115;
  struct std__basic_ostream_char__std__char_traits_char__* t2116 = __retval2098;
  return t2116;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v2117) {
bb2118:
  struct std__vector_int__std__allocator_int__* this2119;
  this2119 = v2117;
  struct std__vector_int__std__allocator_int__* t2120 = this2119;
    struct std___Vector_base_int__std__allocator_int__* base2121 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2120 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2122 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base2121->_M_impl) + 0);
    int* t2123 = base2122->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base2124 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2120 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2125 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base2124->_M_impl) + 0);
    int* t2126 = base2125->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base2127 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2120 + 0);
    struct std__allocator_int_* r2128 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base2127);
    void_std___Destroy_int___int_(t2123, t2126, r2128);
    if (__cir_exc_active) {
      {
        struct std___Vector_base_int__std__allocator_int__* base2129 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2120 + 0);
        std___Vector_base_int__std__allocator_int_______Vector_base(base2129);
      }
      return;
    }
  {
    struct std___Vector_base_int__std__allocator_int__* base2130 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2120 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base2130);
  }
  return;
}

// function: main
int main() {
bb2131:
  int __retval2132;
  int SIZE2133;
  int array2134[6];
  struct std__vector_int__std__allocator_int__ integers2135;
  struct std__allocator_int_ ref_tmp02136;
  struct std__ostream_iterator_int__char__std__char_traits_char__ output2137;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp02138;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp12139;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp22140;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp32141;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp42142;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp12143;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp22144;
  int ref_tmp32145;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp52146;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp62147;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp72148;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp82149;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp92150;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp102151;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp42152;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp112153;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp122154;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp132155;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp142156;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp152157;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp162158;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp52159;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp172160;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp62161;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp182162;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp192163;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp72164;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp202165;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp212166;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp222167;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp232168;
  struct std__ostream_iterator_int__char__std__char_traits_char__ agg_tmp242169;
  int c2170 = 0;
  __retval2132 = c2170;
  int c2171 = 6;
  SIZE2133 = c2171;
  // array copy
  __builtin_memcpy(array2134, __const_main_array, (unsigned long)6 * sizeof(__const_main_array[0]));
  int* cast2172 = (int*)&(array2134);
  int* cast2173 = (int*)&(array2134);
  int t2174 = SIZE2133;
  int* ptr2175 = &(cast2173)[t2174];
  std__allocator_int___allocator_2(&ref_tmp02136);
    std__vector_int__std__allocator_int_____vector_int___void_(&integers2135, cast2172, ptr2175, &ref_tmp02136);
    if (__cir_exc_active) {
      {
        std__allocator_int____allocator(&ref_tmp02136);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
  {
    std__allocator_int____allocator(&ref_tmp02136);
  }
    char* cast2176 = (char*)&(_str);
    std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator_2(&output2137, &_ZSt4cout, cast2176);
    char* cast2177 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* r2178 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast2177);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&integers2135);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2179 = std__vector_int__std__allocator_int_____begin(&integers2135);
    agg_tmp02138 = r2179;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2180 = std__vector_int__std__allocator_int_____end(&integers2135);
    agg_tmp12139 = r2180;
    std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp22140, &output2137);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2181 = agg_tmp02138;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2182 = agg_tmp12139;
    struct std__ostream_iterator_int__char__std__char_traits_char__ t2183 = agg_tmp22140;
    struct std__ostream_iterator_int__char__std__char_traits_char__ r2184 = std__ostream_iterator_int__char__std__char_traits_char____std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(t2181, t2182, t2183);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&integers2135);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp32141 = r2184;
    char* cast2185 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r2186 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast2185);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&integers2135);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int* r2187 = std__vector_int__std__allocator_int_____front(&integers2135);
    int t2188 = *r2187;
    struct std__basic_ostream_char__std__char_traits_char__* r2189 = std__ostream__operator__(r2186, t2188);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&integers2135);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    char* cast2190 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r2191 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r2189, cast2190);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&integers2135);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int* r2192 = std__vector_int__std__allocator_int_____back(&integers2135);
    int t2193 = *r2192;
    struct std__basic_ostream_char__std__char_traits_char__* r2194 = std__ostream__operator__(r2191, t2193);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&integers2135);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c2195 = 7;
    unsigned long c2196 = 0;
    int* r2197 = std__vector_int__std__allocator_int_____operator__(&integers2135, c2196);
    *r2197 = c2195;
    int c2198 = 10;
    unsigned long c2199 = 2;
    int* r2200 = std__vector_int__std__allocator_int_____at(&integers2135, c2199);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&integers2135);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    *r2200 = c2198;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2201 = std__vector_int__std__allocator_int_____begin(&integers2135);
    ref_tmp22144 = r2201;
    long c2202 = 1;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2203 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&ref_tmp22144, c2202);
    ref_tmp12143 = r2203;
    _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2IPiQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE(&agg_tmp42142, &ref_tmp12143);
    int c2204 = 22;
    ref_tmp32145 = c2204;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t2205 = agg_tmp42142;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2206 = std__vector_int__std__allocator_int_____insert(&integers2135, t2205, &ref_tmp32145);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&integers2135);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp52146 = r2206;
    char* cast2207 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* r2208 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast2207);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&integers2135);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2209 = std__vector_int__std__allocator_int_____begin(&integers2135);
    agg_tmp62147 = r2209;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2210 = std__vector_int__std__allocator_int_____end(&integers2135);
    agg_tmp72148 = r2210;
    std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp82149, &output2137);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2211 = agg_tmp62147;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2212 = agg_tmp72148;
    struct std__ostream_iterator_int__char__std__char_traits_char__ t2213 = agg_tmp82149;
    struct std__ostream_iterator_int__char__std__char_traits_char__ r2214 = std__ostream_iterator_int__char__std__char_traits_char____std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(t2211, t2212, t2213);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&integers2135);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp92150 = r2214;
      struct std__out_of_range outOfRange2215;
        int c2217 = 777;
        unsigned long c2218 = 100;
        int* r2219 = std__vector_int__std__allocator_int_____at(&integers2135, c2218);
        if (__cir_exc_active) {
          {
            std__vector_int__std__allocator_int______vector(&integers2135);
          }
          goto cir_try_dispatch2216;
        }
        *r2219 = c2217;
      cir_try_dispatch2216: ;
      if (__cir_exc_active) {
      if (__cir_exc_type == (const void*)__cir_eh_type__ZTISt12out_of_range) {
        __clang_cir_catch_copy__ZTSSt12out_of_range(&outOfRange2215, (struct std__out_of_range*)__cir_exc_ptr);
        int ca_tok2220 = 0;
        void* ca_exn2221 = (void*)__cir_exc_ptr;
        __cir_exc_active = 0;
            char* cast2222 = (char*)&(_str_5);
            struct std__basic_ostream_char__std__char_traits_char__* r2223 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast2222);
            if (__cir_exc_active) {
              {
                std__out_of_range___out_of_range(&outOfRange2215);
              }
              {
                if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
              }
              {
                std__vector_int__std__allocator_int______vector(&integers2135);
              }
              int __cir_eh_ret = (int)0;
              return __cir_eh_ret;
            }
            struct std__logic_error* base2224 = (struct std__logic_error*)((char *)&(outOfRange2215) + 0);
            char* r2225 = std__logic_error__what___const(base2224);
            struct std__basic_ostream_char__std__char_traits_char__* r2226 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r2223, r2225);
            if (__cir_exc_active) {
              {
                std__out_of_range___out_of_range(&outOfRange2215);
              }
              {
                if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
              }
              {
                std__vector_int__std__allocator_int______vector(&integers2135);
              }
              int __cir_eh_ret = (int)0;
              return __cir_eh_ret;
            }
          {
            std__out_of_range___out_of_range(&outOfRange2215);
          }
        {
          if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
        }
      }
      else {
        __cir_exc_active = 1;
        { int __cir_eh_ret = (int)0; return __cir_eh_ret; }
      { int __cir_eh_ret = (int)0; return __cir_eh_ret; }
      }
      }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2227 = std__vector_int__std__allocator_int_____begin(&integers2135);
    ref_tmp42152 = r2227;
    _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2IPiQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE(&agg_tmp102151, &ref_tmp42152);
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t2228 = agg_tmp102151;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2229 = std__vector_int__std__allocator_int_____erase(&integers2135, t2228);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&integers2135);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp112153 = r2229;
    char* cast2230 = (char*)&(_str_6);
    struct std__basic_ostream_char__std__char_traits_char__* r2231 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast2230);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&integers2135);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2232 = std__vector_int__std__allocator_int_____begin(&integers2135);
    agg_tmp122154 = r2232;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2233 = std__vector_int__std__allocator_int_____end(&integers2135);
    agg_tmp132155 = r2233;
    std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp142156, &output2137);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2234 = agg_tmp122154;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2235 = agg_tmp132155;
    struct std__ostream_iterator_int__char__std__char_traits_char__ t2236 = agg_tmp142156;
    struct std__ostream_iterator_int__char__std__char_traits_char__ r2237 = std__ostream_iterator_int__char__std__char_traits_char____std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(t2234, t2235, t2236);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&integers2135);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp152157 = r2237;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2238 = std__vector_int__std__allocator_int_____begin(&integers2135);
    ref_tmp52159 = r2238;
    _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2IPiQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE(&agg_tmp162158, &ref_tmp52159);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2239 = std__vector_int__std__allocator_int_____end(&integers2135);
    ref_tmp62161 = r2239;
    _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2IPiQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE(&agg_tmp172160, &ref_tmp62161);
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t2240 = agg_tmp162158;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t2241 = agg_tmp172160;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2242 = std__vector_int__std__allocator_int_____erase_2(&integers2135, t2240, t2241);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&integers2135);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp182162 = r2242;
    char* cast2243 = (char*)&(_str_7);
    struct std__basic_ostream_char__std__char_traits_char__* r2244 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast2243);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&integers2135);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    _Bool r2245 = std__vector_int__std__allocator_int_____empty___const(&integers2135);
    char* cast2246 = (char*)&(_str_8);
    char* cast2247 = (char*)&(_str_9);
    char* sel2248 = r2245 ? cast2246 : cast2247;
    struct std__basic_ostream_char__std__char_traits_char__* r2249 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r2244, sel2248);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&integers2135);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    char* cast2250 = (char*)&(_str_10);
    struct std__basic_ostream_char__std__char_traits_char__* r2251 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r2249, cast2250);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&integers2135);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2252 = std__vector_int__std__allocator_int_____begin(&integers2135);
    ref_tmp72164 = r2252;
    _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2IPiQsr3stdE16is_convertible_vITL0__T_EEERKNS0_ISA_S5_EE(&agg_tmp192163, &ref_tmp72164);
    int* cast2253 = (int*)&(array2134);
    int* cast2254 = (int*)&(array2134);
    int t2255 = SIZE2133;
    int* ptr2256 = &(cast2254)[t2255];
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t2257 = agg_tmp192163;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2258 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__vector_int__std__allocator_int_____insert_int___void_(&integers2135, t2257, cast2253, ptr2256);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&integers2135);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp202165 = r2258;
    char* cast2259 = (char*)&(_str_11);
    struct std__basic_ostream_char__std__char_traits_char__* r2260 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast2259);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&integers2135);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2261 = std__vector_int__std__allocator_int_____begin(&integers2135);
    agg_tmp212166 = r2261;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r2262 = std__vector_int__std__allocator_int_____end(&integers2135);
    agg_tmp222167 = r2262;
    std__ostream_iterator_int__char__std__char_traits_char_____ostream_iterator(&agg_tmp232168, &output2137);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2263 = agg_tmp212166;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t2264 = agg_tmp222167;
    struct std__ostream_iterator_int__char__std__char_traits_char__ t2265 = agg_tmp232168;
    struct std__ostream_iterator_int__char__std__char_traits_char__ r2266 = std__ostream_iterator_int__char__std__char_traits_char____std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__ostream_iterator_int__char__std__char_traits_char_____(t2263, t2264, t2265);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&integers2135);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    agg_tmp242169 = r2266;
    std__vector_int__std__allocator_int_____clear(&integers2135);
    char* cast2267 = (char*)&(_str_12);
    struct std__basic_ostream_char__std__char_traits_char__* r2268 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast2267);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&integers2135);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    _Bool r2269 = std__vector_int__std__allocator_int_____empty___const(&integers2135);
    char* cast2270 = (char*)&(_str_8);
    char* cast2271 = (char*)&(_str_9);
    char* sel2272 = r2269 ? cast2270 : cast2271;
    struct std__basic_ostream_char__std__char_traits_char__* r2273 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r2268, sel2272);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&integers2135);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    char* cast2274 = (char*)&(_str_10);
    struct std__basic_ostream_char__std__char_traits_char__* r2275 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r2273, cast2274);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&integers2135);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r2276 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&integers2135);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c2277 = 0;
    __retval2132 = c2277;
    int t2278 = __retval2132;
    int ret_val2279 = t2278;
    {
      std__vector_int__std__allocator_int______vector(&integers2135);
    }
    return ret_val2279;
  int t2280 = __retval2132;
  return t2280;
}

// function: __clang_cir_catch_copy__ZTSSt12out_of_range
void __clang_cir_catch_copy__ZTSSt12out_of_range(struct std__out_of_range* v2281, struct std__out_of_range* v2282) {
bb2283:
  std__out_of_range__out_of_range(v2281, v2282);
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v2284) {
bb2285:
  struct std____new_allocator_int_* this2286;
  this2286 = v2284;
  struct std____new_allocator_int_* t2287 = this2286;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v2288, struct std__allocator_int_* v2289) {
bb2290:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this2291;
  struct std__allocator_int_* __a2292;
  this2291 = v2288;
  __a2292 = v2289;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t2293 = this2291;
  struct std__allocator_int_* base2294 = (struct std__allocator_int_*)((char *)t2293 + 0);
  struct std__allocator_int_* t2295 = __a2292;
  std__allocator_int___allocator(base2294, t2295);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2296 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t2293 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base2296);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v2297) {
bb2298:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this2299;
  this2299 = v2297;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t2300 = this2299;
  {
    struct std__allocator_int_* base2301 = (struct std__allocator_int_*)((char *)t2300 + 0);
    std__allocator_int____allocator(base2301);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v2302, struct std__allocator_int_* v2303) {
bb2304:
  struct std___Vector_base_int__std__allocator_int__* this2305;
  struct std__allocator_int_* __a2306;
  this2305 = v2302;
  __a2306 = v2303;
  struct std___Vector_base_int__std__allocator_int__* t2307 = this2305;
  struct std__allocator_int_* t2308 = __a2306;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t2307->_M_impl, t2308);
  return;
}

// function: _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_
long _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_(struct std__ranges____distance_fn* v2309, int** v2310, int* v2311) {
bb2312:
  struct std__ranges____distance_fn* this2313;
  int** __first2314;
  int* __last2315;
  long __retval2316;
  this2313 = v2309;
  __first2314 = v2310;
  __last2315 = v2311;
  struct std__ranges____distance_fn* t2317 = this2313;
  int* t2318 = __last2315;
  int** t2319 = __first2314;
  int* t2320 = *t2319;
  long diff2321 = t2318 - t2320;
  __retval2316 = diff2321;
  long t2322 = __retval2316;
  return t2322;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb2323:
  _Bool __retval2324;
    _Bool c2325 = 0;
    __retval2324 = c2325;
    _Bool t2326 = __retval2324;
    return t2326;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v2327) {
bb2328:
  struct std____new_allocator_int_* this2329;
  unsigned long __retval2330;
  this2329 = v2327;
  struct std____new_allocator_int_* t2331 = this2329;
  unsigned long c2332 = 9223372036854775807;
  unsigned long c2333 = 4;
  unsigned long b2334 = c2332 / c2333;
  __retval2330 = b2334;
  unsigned long t2335 = __retval2330;
  return t2335;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v2336, unsigned long v2337, void* v2338) {
bb2339:
  struct std____new_allocator_int_* this2340;
  unsigned long __n2341;
  void* unnamed2342;
  int* __retval2343;
  this2340 = v2336;
  __n2341 = v2337;
  unnamed2342 = v2338;
  struct std____new_allocator_int_* t2344 = this2340;
    unsigned long t2345 = __n2341;
    unsigned long r2346 = std____new_allocator_int____M_max_size___const(t2344);
    _Bool c2347 = ((t2345 > r2346)) ? 1 : 0;
    if (c2347) {
        unsigned long t2348 = __n2341;
        unsigned long c2349 = -1;
        unsigned long c2350 = 4;
        unsigned long b2351 = c2349 / c2350;
        _Bool c2352 = ((t2348 > b2351)) ? 1 : 0;
        if (c2352) {
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
    unsigned long c2353 = 4;
    unsigned long c2354 = 16;
    _Bool c2355 = ((c2353 > c2354)) ? 1 : 0;
    if (c2355) {
      unsigned long __al2356;
      unsigned long c2357 = 4;
      __al2356 = c2357;
      unsigned long t2358 = __n2341;
      unsigned long c2359 = 4;
      unsigned long b2360 = t2358 * c2359;
      unsigned long t2361 = __al2356;
      void* r2362 = operator_new_2(b2360, t2361);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast2363 = (int*)r2362;
      __retval2343 = cast2363;
      int* t2364 = __retval2343;
      return t2364;
    }
  unsigned long t2365 = __n2341;
  unsigned long c2366 = 4;
  unsigned long b2367 = t2365 * c2366;
  void* r2368 = operator_new(b2367);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* cast2369 = (int*)r2368;
  __retval2343 = cast2369;
  int* t2370 = __retval2343;
  return t2370;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v2371, unsigned long v2372) {
bb2373:
  struct std__allocator_int_* this2374;
  unsigned long __n2375;
  int* __retval2376;
  this2374 = v2371;
  __n2375 = v2372;
  struct std__allocator_int_* t2377 = this2374;
    _Bool r2378 = std____is_constant_evaluated();
    if (r2378) {
        unsigned long t2379 = __n2375;
        unsigned long c2380 = 4;
        unsigned long ovr2381;
        _Bool ovf2382 = __builtin_mul_overflow(t2379, c2380, &ovr2381);
        __n2375 = ovr2381;
        if (ovf2382) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t2383 = __n2375;
      void* r2384 = operator_new(t2383);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast2385 = (int*)r2384;
      __retval2376 = cast2385;
      int* t2386 = __retval2376;
      return t2386;
    }
  struct std____new_allocator_int_* base2387 = (struct std____new_allocator_int_*)((char *)t2377 + 0);
  unsigned long t2388 = __n2375;
  void* c2389 = ((void*)0);
  int* r2390 = std____new_allocator_int___allocate(base2387, t2388, c2389);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval2376 = r2390;
  int* t2391 = __retval2376;
  return t2391;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v2392, unsigned long v2393) {
bb2394:
  struct std__allocator_int_* __a2395;
  unsigned long __n2396;
  int* __retval2397;
  __a2395 = v2392;
  __n2396 = v2393;
  struct std__allocator_int_* t2398 = __a2395;
  unsigned long t2399 = __n2396;
  int* r2400 = std__allocator_int___allocate(t2398, t2399);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval2397 = r2400;
  int* t2401 = __retval2397;
  return t2401;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v2402, unsigned long v2403) {
bb2404:
  struct std___Vector_base_int__std__allocator_int__* this2405;
  unsigned long __n2406;
  int* __retval2407;
  this2405 = v2402;
  __n2406 = v2403;
  struct std___Vector_base_int__std__allocator_int__* t2408 = this2405;
  unsigned long t2409 = __n2406;
  unsigned long c2410 = 0;
  _Bool c2411 = ((t2409 != c2410)) ? 1 : 0;
  int* ternary2412;
  if (c2411) {
    struct std__allocator_int_* base2413 = (struct std__allocator_int_*)((char *)&(t2408->_M_impl) + 0);
    unsigned long t2414 = __n2406;
    int* r2415 = std__allocator_traits_std__allocator_int_____allocate(base2413, t2414);
    if (__cir_exc_active) {
      int* __cir_eh_ret = (int*)0;
      return __cir_eh_ret;
    }
    ternary2412 = (int*)r2415;
  } else {
    int* c2416 = ((void*)0);
    ternary2412 = (int*)c2416;
  }
  __retval2407 = ternary2412;
  int* t2417 = __retval2407;
  return t2417;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v2418, unsigned long* v2419) {
bb2420:
  unsigned long* __a2421;
  unsigned long* __b2422;
  unsigned long* __retval2423;
  __a2421 = v2418;
  __b2422 = v2419;
    unsigned long* t2424 = __b2422;
    unsigned long t2425 = *t2424;
    unsigned long* t2426 = __a2421;
    unsigned long t2427 = *t2426;
    _Bool c2428 = ((t2425 < t2427)) ? 1 : 0;
    if (c2428) {
      unsigned long* t2429 = __b2422;
      __retval2423 = t2429;
      unsigned long* t2430 = __retval2423;
      return t2430;
    }
  unsigned long* t2431 = __a2421;
  __retval2423 = t2431;
  unsigned long* t2432 = __retval2423;
  return t2432;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v2433) {
bb2434:
  struct std__allocator_int_* __a2435;
  unsigned long __retval2436;
  unsigned long __diffmax2437;
  unsigned long __allocmax2438;
  __a2435 = v2433;
  unsigned long c2439 = 2305843009213693951;
  __diffmax2437 = c2439;
  unsigned long c2440 = 4611686018427387903;
  __allocmax2438 = c2440;
  unsigned long* r2441 = unsigned_long_const__std__min_unsigned_long_(&__diffmax2437, &__allocmax2438);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long t2442 = *r2441;
  __retval2436 = t2442;
  unsigned long t2443 = __retval2436;
  return t2443;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v2444, struct std__allocator_int_* v2445) {
bb2446:
  struct std__allocator_int_* this2447;
  struct std__allocator_int_* __a2448;
  this2447 = v2444;
  __a2448 = v2445;
  struct std__allocator_int_* t2449 = this2447;
  struct std____new_allocator_int_* base2450 = (struct std____new_allocator_int_*)((char *)t2449 + 0);
  struct std__allocator_int_* t2451 = __a2448;
  struct std____new_allocator_int_* base2452 = (struct std____new_allocator_int_*)((char *)t2451 + 0);
  std____new_allocator_int_____new_allocator(base2450, base2452);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v2453, struct std__allocator_int_* v2454) {
bb2455:
  unsigned long __n2456;
  struct std__allocator_int_* __a2457;
  unsigned long __retval2458;
  __n2456 = v2453;
  __a2457 = v2454;
    struct std__allocator_int_ ref_tmp02459;
    _Bool tmp_exprcleanup2460;
    unsigned long t2461 = __n2456;
    struct std__allocator_int_* t2462 = __a2457;
    std__allocator_int___allocator(&ref_tmp02459, t2462);
      unsigned long r2463 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp02459);
      _Bool c2464 = ((t2461 > r2463)) ? 1 : 0;
      tmp_exprcleanup2460 = c2464;
    {
      std__allocator_int____allocator(&ref_tmp02459);
    }
    _Bool t2465 = tmp_exprcleanup2460;
    if (t2465) {
      char* cast2466 = (char*)&(_str_13);
      std____throw_length_error(cast2466);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
    }
  unsigned long t2467 = __n2456;
  __retval2458 = t2467;
  unsigned long t2468 = __retval2458;
  return t2468;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v2469) {
bb2470:
  struct std___Vector_base_int__std__allocator_int__* this2471;
  struct std__allocator_int_* __retval2472;
  this2471 = v2469;
  struct std___Vector_base_int__std__allocator_int__* t2473 = this2471;
  struct std__allocator_int_* base2474 = (struct std__allocator_int_*)((char *)&(t2473->_M_impl) + 0);
  __retval2472 = base2474;
  struct std__allocator_int_* t2475 = __retval2472;
  return t2475;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb2476:
  _Bool __retval2477;
    _Bool c2478 = 0;
    __retval2477 = c2478;
    _Bool t2479 = __retval2477;
    return t2479;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v2480, int** v2481) {
bb2482:
  struct std___UninitDestroyGuard_int____void_* this2483;
  int** __first2484;
  this2483 = v2480;
  __first2484 = v2481;
  struct std___UninitDestroyGuard_int____void_* t2485 = this2483;
  int** t2486 = __first2484;
  int* t2487 = *t2486;
  t2485->_M_first = t2487;
  int** t2488 = __first2484;
  t2485->_M_cur = t2488;
  return;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v2489, int* v2490) {
bb2491:
  int* __location2492;
  int* __args2493;
  int* __retval2494;
  void* __loc2495;
  __location2492 = v2489;
  __args2493 = v2490;
  int* t2496 = __location2492;
  void* cast2497 = (void*)t2496;
  __loc2495 = cast2497;
    void* t2498 = __loc2495;
    int* cast2499 = (int*)t2498;
    int* t2500 = __args2493;
    int t2501 = *t2500;
    *cast2499 = t2501;
    __retval2494 = cast2499;
    int* t2502 = __retval2494;
    return t2502;
  abort();
}

// function: _ZSt10_ConstructIiJRiEEvPT_DpOT0_
void void_std___Construct_int__int__(int* v2503, int* v2504) {
bb2505:
  int* __p2506;
  int* __args2507;
  __p2506 = v2503;
  __args2507 = v2504;
    _Bool r2508 = std____is_constant_evaluated();
    if (r2508) {
      int* t2509 = __p2506;
      int* t2510 = __args2507;
      int* r2511 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t2509, t2510);
      return;
    }
  int* t2512 = __p2506;
  void* cast2513 = (void*)t2512;
  int* cast2514 = (int*)cast2513;
  int* t2515 = __args2507;
  int t2516 = *t2515;
  *cast2514 = t2516;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v2517) {
bb2518:
  struct std___UninitDestroyGuard_int____void_* this2519;
  this2519 = v2517;
  struct std___UninitDestroyGuard_int____void_* t2520 = this2519;
  int** c2521 = ((void*)0);
  t2520->_M_cur = c2521;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v2522) {
bb2523:
  struct std___UninitDestroyGuard_int____void_* this2524;
  this2524 = v2522;
  struct std___UninitDestroyGuard_int____void_* t2525 = this2524;
    int** t2526 = t2525->_M_cur;
    int** c2527 = ((void*)0);
    _Bool c2528 = ((t2526 != c2527)) ? 1 : 0;
    if (c2528) {
      int* t2529 = t2525->_M_first;
      int** t2530 = t2525->_M_cur;
      int* t2531 = *t2530;
      void_std___Destroy_int__(t2529, t2531);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZSt16__do_uninit_copyIPiS0_S0_ET1_T_T0_S1_
int* int__std____do_uninit_copy_int___int___int__(int* v2532, int* v2533, int* v2534) {
bb2535:
  int* __first2536;
  int* __last2537;
  int* __result2538;
  int* __retval2539;
  struct std___UninitDestroyGuard_int____void_ __guard2540;
  __first2536 = v2532;
  __last2537 = v2533;
  __result2538 = v2534;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard2540, &__result2538);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
      while (1) {
        int* t2542 = __first2536;
        int* t2543 = __last2537;
        _Bool c2544 = ((t2542 != t2543)) ? 1 : 0;
        if (!c2544) break;
        int* t2545 = __result2538;
        int* t2546 = __first2536;
        void_std___Construct_int__int__(t2545, t2546);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard2540);
          }
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
      for_step2541: ;
        int* t2547 = __first2536;
        int c2548 = 1;
        int* ptr2549 = &(t2547)[c2548];
        __first2536 = ptr2549;
        int* t2550 = __result2538;
        int c2551 = 1;
        int* ptr2552 = &(t2550)[c2551];
        __result2538 = ptr2552;
      }
    std___UninitDestroyGuard_int___void___release(&__guard2540);
    if (__cir_exc_active) {
      {
        std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard2540);
      }
      int* __cir_eh_ret = (int*)0;
      return __cir_eh_ret;
    }
    int* t2553 = __result2538;
    __retval2539 = t2553;
    int* t2554 = __retval2539;
    int* ret_val2555 = t2554;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard2540);
    }
    return ret_val2555;
  abort();
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v2556) {
bb2557:
  int* __it2558;
  int* __retval2559;
  __it2558 = v2556;
  int* t2560 = __it2558;
  __retval2559 = t2560;
  int* t2561 = __retval2559;
  return t2561;
}

// function: _ZSt18uninitialized_copyIPiS0_ET0_T_S2_S1_
int* int__std__uninitialized_copy_int___int__(int* v2562, int* v2563, int* v2564) {
bb2565:
  int* __first2566;
  int* __last2567;
  int* __result2568;
  int* __retval2569;
  __first2566 = v2562;
  __last2567 = v2563;
  __result2568 = v2564;
      long __n2570;
      int* t2571 = __last2567;
      int* t2572 = __first2566;
      long diff2573 = t2571 - t2572;
      __n2570 = diff2573;
        long t2574 = __n2570;
        long c2575 = 0;
        _Bool c2576 = ((t2574 > c2575)) ? 1 : 0;
        if (c2576) {
          int* t2577 = __result2568;
          int* r2578 = int__std____niter_base_int__(t2577);
          void* cast2579 = (void*)r2578;
          int* t2580 = __first2566;
          int* r2581 = int__std____niter_base_int__(t2580);
          void* cast2582 = (void*)r2581;
          long t2583 = __n2570;
          unsigned long cast2584 = (unsigned long)t2583;
          unsigned long c2585 = 4;
          unsigned long b2586 = cast2584 * c2585;
          void* r2587 = memcpy(cast2579, cast2582, b2586);
          long t2588 = __n2570;
          int* t2589 = __result2568;
          int* ptr2590 = &(t2589)[t2588];
          __result2568 = ptr2590;
        }
      int* t2591 = __result2568;
      __retval2569 = t2591;
      int* t2592 = __retval2569;
      return t2592;
  abort();
}

// function: _ZSt22__uninitialized_copy_aIPiS0_S0_iET1_T_T0_S1_RSaIT2_E
int* int__std____uninitialized_copy_a_int___int___int___int_(int* v2593, int* v2594, int* v2595, struct std__allocator_int_* v2596) {
bb2597:
  int* __first2598;
  int* __last2599;
  int* __result2600;
  struct std__allocator_int_* unnamed2601;
  int* __retval2602;
  __first2598 = v2593;
  __last2599 = v2594;
  __result2600 = v2595;
  unnamed2601 = v2596;
    _Bool r2603 = std__is_constant_evaluated();
    if (r2603) {
      int* t2604 = __first2598;
      int* t2605 = __last2599;
      int* t2606 = __result2600;
      int* r2607 = int__std____do_uninit_copy_int___int___int__(t2604, t2605, t2606);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      __retval2602 = r2607;
      int* t2608 = __retval2602;
      return t2608;
    }
    int* t2609 = __first2598;
    int* t2610 = __last2599;
    int* t2611 = __result2600;
    int* r2612 = int__std__uninitialized_copy_int___int__(t2609, t2610, t2611);
    if (__cir_exc_active) {
      int* __cir_eh_ret = (int*)0;
      return __cir_eh_ret;
    }
    __retval2602 = r2612;
    int* t2613 = __retval2602;
    return t2613;
  abort();
}

// function: _ZNSt6vectorIiSaIiEE21_M_range_initialize_nIPiS3_EEvT_T0_m
void void_std__vector_int__std__allocator_int______M_range_initialize_n_int___int__(struct std__vector_int__std__allocator_int__* v2614, int* v2615, int* v2616, unsigned long v2617) {
bb2618:
  struct std__vector_int__std__allocator_int__* this2619;
  int* __first2620;
  int* __last2621;
  unsigned long __n2622;
  int* __start2623;
  this2619 = v2614;
  __first2620 = v2615;
  __last2621 = v2616;
  __n2622 = v2617;
  struct std__vector_int__std__allocator_int__* t2624 = this2619;
  struct std___Vector_base_int__std__allocator_int__* base2625 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2624 + 0);
  unsigned long t2626 = __n2622;
  struct std___Vector_base_int__std__allocator_int__* base2627 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2624 + 0);
  struct std__allocator_int_* r2628 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base2627);
  unsigned long r2629 = std__vector_int__std__allocator_int______S_check_init_len(t2626, r2628);
  if (__cir_exc_active) {
    return;
  }
  int* r2630 = std___Vector_base_int__std__allocator_int______M_allocate(base2625, r2629);
  if (__cir_exc_active) {
    return;
  }
  __start2623 = r2630;
  int* t2631 = __start2623;
  struct std___Vector_base_int__std__allocator_int__* base2632 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2624 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2633 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base2632->_M_impl) + 0);
  base2633->_M_finish = t2631;
  struct std___Vector_base_int__std__allocator_int__* base2634 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2624 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2635 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base2634->_M_impl) + 0);
  base2635->_M_start = t2631;
  int* t2636 = __start2623;
  unsigned long t2637 = __n2622;
  int* ptr2638 = &(t2636)[t2637];
  struct std___Vector_base_int__std__allocator_int__* base2639 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2624 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2640 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base2639->_M_impl) + 0);
  base2640->_M_end_of_storage = ptr2638;
  int* t2641 = __first2620;
  int* t2642 = __last2621;
  int* t2643 = __start2623;
  struct std___Vector_base_int__std__allocator_int__* base2644 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2624 + 0);
  struct std__allocator_int_* r2645 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base2644);
  int* r2646 = int__std____uninitialized_copy_a_int___int___int___int_(t2641, t2642, t2643, r2645);
  if (__cir_exc_active) {
    return;
  }
  struct std___Vector_base_int__std__allocator_int__* base2647 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2624 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2648 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base2647->_M_impl) + 0);
  base2648->_M_finish = r2646;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v2649, int* v2650, unsigned long v2651) {
bb2652:
  struct std____new_allocator_int_* this2653;
  int* __p2654;
  unsigned long __n2655;
  this2653 = v2649;
  __p2654 = v2650;
  __n2655 = v2651;
  struct std____new_allocator_int_* t2656 = this2653;
    unsigned long c2657 = 4;
    unsigned long c2658 = 16;
    _Bool c2659 = ((c2657 > c2658)) ? 1 : 0;
    if (c2659) {
      int* t2660 = __p2654;
      void* cast2661 = (void*)t2660;
      unsigned long t2662 = __n2655;
      unsigned long c2663 = 4;
      unsigned long b2664 = t2662 * c2663;
      unsigned long c2665 = 4;
      operator_delete_3(cast2661, b2664, c2665);
      return;
    }
  int* t2666 = __p2654;
  void* cast2667 = (void*)t2666;
  unsigned long t2668 = __n2655;
  unsigned long c2669 = 4;
  unsigned long b2670 = t2668 * c2669;
  operator_delete_2(cast2667, b2670);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v2671, int* v2672, unsigned long v2673) {
bb2674:
  struct std__allocator_int_* this2675;
  int* __p2676;
  unsigned long __n2677;
  this2675 = v2671;
  __p2676 = v2672;
  __n2677 = v2673;
  struct std__allocator_int_* t2678 = this2675;
    _Bool r2679 = std____is_constant_evaluated();
    if (r2679) {
      int* t2680 = __p2676;
      void* cast2681 = (void*)t2680;
      operator_delete(cast2681);
      return;
    }
  struct std____new_allocator_int_* base2682 = (struct std____new_allocator_int_*)((char *)t2678 + 0);
  int* t2683 = __p2676;
  unsigned long t2684 = __n2677;
  std____new_allocator_int___deallocate(base2682, t2683, t2684);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v2685, int* v2686, unsigned long v2687) {
bb2688:
  struct std__allocator_int_* __a2689;
  int* __p2690;
  unsigned long __n2691;
  __a2689 = v2685;
  __p2690 = v2686;
  __n2691 = v2687;
  struct std__allocator_int_* t2692 = __a2689;
  int* t2693 = __p2690;
  unsigned long t2694 = __n2691;
  std__allocator_int___deallocate(t2692, t2693, t2694);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v2695, int* v2696, unsigned long v2697) {
bb2698:
  struct std___Vector_base_int__std__allocator_int__* this2699;
  int* __p2700;
  unsigned long __n2701;
  this2699 = v2695;
  __p2700 = v2696;
  __n2701 = v2697;
  struct std___Vector_base_int__std__allocator_int__* t2702 = this2699;
    int* t2703 = __p2700;
    _Bool cast2704 = (_Bool)t2703;
    if (cast2704) {
      struct std__allocator_int_* base2705 = (struct std__allocator_int_*)((char *)&(t2702->_M_impl) + 0);
      int* t2706 = __p2700;
      unsigned long t2707 = __n2701;
      std__allocator_traits_std__allocator_int_____deallocate(base2705, t2706, t2707);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v2708) {
bb2709:
  struct std___Vector_base_int__std__allocator_int__* this2710;
  this2710 = v2708;
  struct std___Vector_base_int__std__allocator_int__* t2711 = this2710;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2712 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t2711->_M_impl) + 0);
    int* t2713 = base2712->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2714 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t2711->_M_impl) + 0);
    int* t2715 = base2714->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2716 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t2711->_M_impl) + 0);
    int* t2717 = base2716->_M_start;
    long diff2718 = t2715 - t2717;
    unsigned long cast2719 = (unsigned long)diff2718;
    std___Vector_base_int__std__allocator_int______M_deallocate(t2711, t2713, cast2719);
    if (__cir_exc_active) {
      {
        std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t2711->_M_impl);
      }
      return;
    }
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t2711->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v2720, struct std____new_allocator_int_* v2721) {
bb2722:
  struct std____new_allocator_int_* this2723;
  struct std____new_allocator_int_* unnamed2724;
  this2723 = v2720;
  unnamed2724 = v2721;
  struct std____new_allocator_int_* t2725 = this2723;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v2726) {
bb2727:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this2728;
  this2728 = v2726;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t2729 = this2728;
  int* c2730 = ((void*)0);
  t2729->_M_start = c2730;
  int* c2731 = ((void*)0);
  t2729->_M_finish = c2731;
  int* c2732 = ((void*)0);
  t2729->_M_end_of_storage = c2732;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v2733) {
bb2734:
  int* __location2735;
  __location2735 = v2733;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v2736, int* v2737) {
bb2738:
  int* __first2739;
  int* __last2740;
  __first2739 = v2736;
  __last2740 = v2737;
      _Bool r2741 = std____is_constant_evaluated();
      if (r2741) {
          while (1) {
            int* t2743 = __first2739;
            int* t2744 = __last2740;
            _Bool c2745 = ((t2743 != t2744)) ? 1 : 0;
            if (!c2745) break;
            int* t2746 = __first2739;
            void_std__destroy_at_int_(t2746);
            if (__cir_exc_active) {
              return;
            }
          for_step2742: ;
            int* t2747 = __first2739;
            int c2748 = 1;
            int* ptr2749 = &(t2747)[c2748];
            __first2739 = ptr2749;
          }
      }
  return;
}

