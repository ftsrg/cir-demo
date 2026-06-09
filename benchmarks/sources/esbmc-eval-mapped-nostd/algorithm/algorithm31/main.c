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
struct __gnu_cxx____normal_iterator_int____void_ { int* _M_current; };
struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ { void* _M_comp; };
struct __gnu_cxx____ops___Iter_equal_to_iter { unsigned char __field0; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_ { unsigned char __field0; };
struct std__allocator_int_ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__ranges____distance_fn { unsigned char __field0; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_myints[9] = {10, 20, 20, 20, 30, 30, 20, 20, 10};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[18] = "myvector[0] == 10";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm31/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[18] = "myvector[1] == 20";
char _str_3[18] = "myvector[2] == 30";
char _str_4[18] = "myvector[3] == 20";
char _str_5[18] = "myvector[4] == 10";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_6[19] = "myvector contains:";
char _str_7[2] = " ";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_8[49] = "cannot create std::vector larger than max_size()";
char _str_9[26] = "vector::_M_default_append";
char _str_10[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_11[19] = "__n < this->size()";
_Bool myfunction(int p0, int p1);
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector_int___void_(struct std__vector_int__std__allocator_int__* p0, int* p1, int* p2, struct std__allocator_int_* p3);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____adjacent_find___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_equal_to_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____ops___Iter_equal_to_iter p2);
_Bool bool___gnu_cxx____ops___Iter_equal_to_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(struct __gnu_cxx____ops___Iter_equal_to_iter* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____unique___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_equal_to_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____ops___Iter_equal_to_iter p2);
struct __gnu_cxx____ops___Iter_equal_to_iter __gnu_cxx____ops____iter_equal_to_iter();
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__unique___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* p0);
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* p0);
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
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, char* p2);
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* p0, int* p1, unsigned long p2, struct std___Vector_base_int__std__allocator_int__* p3);
void __gnu_cxx____normal_iterator_int___void_____normal_iterator(struct __gnu_cxx____normal_iterator_int____void_* p0, int** p1);
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* p0, int* p1, int* p2);
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
void std__vector_int__std__allocator_int______M_default_append(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);
void std__vector_int__std__allocator_int______M_erase_at_end(struct std__vector_int__std__allocator_int__* p0, int* p1);
void std__vector_int__std__allocator_int_____resize(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____adjacent_find___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_bool_____int__int_______gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ p2);
_Bool bool___gnu_cxx____ops___Iter_comp_iter_bool_____int__int____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____unique___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_bool_____int__int_______gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ p2);
void __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____Iter_comp_iter_bool____(struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* p0, void* p1);
struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____gnu_cxx____ops____iter_comp_iter_bool_____int__int___bool____(void* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__unique___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool_____int__int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, void* p2);
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
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
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

// function: _Z10myfunctionii
_Bool myfunction(int v0, int v1) {
bb2:
  int i3;
  int j4;
  _Bool __retval5;
  i3 = v0;
  j4 = v1;
  int t6 = i3;
  int t7 = j4;
  _Bool c8 = ((t6 == t7)) ? 1 : 0;
  __retval5 = c8;
  _Bool t9 = __retval5;
  return t9;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator_2(struct std__allocator_int_* v10) {
bb11:
  struct std__allocator_int_* this12;
  this12 = v10;
  struct std__allocator_int_* t13 = this12;
  struct std____new_allocator_int_* base14 = (struct std____new_allocator_int_*)((char *)t13 + 0);
  std____new_allocator_int_____new_allocator_2(base14);
  return;
}

// function: _ZNSt6vectorIiSaIiEEC2IPivEET_S4_RKS0_
void std__vector_int__std__allocator_int_____vector_int___void_(struct std__vector_int__std__allocator_int__* v15, int* v16, int* v17, struct std__allocator_int_* v18) {
bb19:
  struct std__vector_int__std__allocator_int__* this20;
  int* __first21;
  int* __last22;
  struct std__allocator_int_* __a23;
  this20 = v15;
  __first21 = v16;
  __last22 = v17;
  __a23 = v18;
  struct std__vector_int__std__allocator_int__* t24 = this20;
  struct std___Vector_base_int__std__allocator_int__* base25 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t24 + 0);
  struct std__allocator_int_* t26 = __a23;
  std___Vector_base_int__std__allocator_int______Vector_base(base25, t26);
      unsigned long __n27;
      int* t28 = __last22;
      long r29 = _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_(&_ZNSt6ranges8distanceE, &__first21, t28);
      unsigned long cast30 = (unsigned long)r29;
      __n27 = cast30;
      int* t31 = __first21;
      int* t32 = __last22;
      unsigned long t33 = __n27;
      void_std__vector_int__std__allocator_int______M_range_initialize_n_int___int__(t24, t31, t32, t33);
      {
        struct std___Vector_base_int__std__allocator_int__* base34 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t24 + 0);
        std___Vector_base_int__std__allocator_int_______Vector_base(base34);
      }
      return;
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v35) {
bb36:
  struct std__allocator_int_* this37;
  this37 = v35;
  struct std__allocator_int_* t38 = this37;
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2Ev
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v39) {
bb40:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this41;
  this41 = v39;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t42 = this41;
  int* c43 = ((void*)0);
  t42->_M_current = c43;
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSERKS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v44, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v45) {
bb46:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this47;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed48;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval49;
  this47 = v44;
  unnamed48 = v45;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t50 = this47;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t51 = unnamed48;
  int* t52 = t51->_M_current;
  t50->_M_current = t52;
  __retval49 = t50;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t53 = __retval49;
  return t53;
}

// function: _ZSt15__adjacent_findIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops19_Iter_equal_to_iterEET_S9_S9_T0_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____adjacent_find___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_equal_to_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v54, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v55, struct __gnu_cxx____ops___Iter_equal_to_iter v56) {
bb57:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first58;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last59;
  struct __gnu_cxx____ops___Iter_equal_to_iter __binary_pred60;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval61;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __next62;
  __first58 = v54;
  __last59 = v55;
  __binary_pred60 = v56;
    _Bool r63 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first58, &__last59);
    if (r63) {
      __retval61 = __last59; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t64 = __retval61;
      return t64;
    }
  __next62 = __first58; // copy
    while (1) {
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r65 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__next62);
      _Bool r66 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(r65, &__last59);
      _Bool u67 = !r66;
      if (!u67) break;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp068;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp169;
          agg_tmp068 = __first58; // copy
          agg_tmp169 = __next62; // copy
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t70 = agg_tmp068;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t71 = agg_tmp169;
          _Bool r72 = bool___gnu_cxx____ops___Iter_equal_to_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(&__binary_pred60, t70, t71);
          if (r72) {
            __retval61 = __first58; // copy
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t73 = __retval61;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ret_val74 = t73;
            return ret_val74;
          }
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r75 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__2(&__first58, &__next62);
    }
  __retval61 = __last59; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t76 = __retval61;
  return t76;
}

// function: _ZNK9__gnu_cxx5__ops19_Iter_equal_to_iterclINS_17__normal_iteratorIPiSt6vectorIiSaIiEEEES8_EEbT_T0_
_Bool bool___gnu_cxx____ops___Iter_equal_to_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(struct __gnu_cxx____ops___Iter_equal_to_iter* v77, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v78, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v79) {
bb80:
  struct __gnu_cxx____ops___Iter_equal_to_iter* this81;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it182;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it283;
  _Bool __retval84;
  this81 = v77;
  __it182 = v78;
  __it283 = v79;
  struct __gnu_cxx____ops___Iter_equal_to_iter* t85 = this81;
  int* r86 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it182);
  int t87 = *r86;
  int* r88 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it283);
  int t89 = *r88;
  _Bool c90 = ((t87 == t89)) ? 1 : 0;
  __retval84 = c90;
  _Bool t91 = __retval84;
  return t91;
}

// function: _ZSt8__uniqueIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops19_Iter_equal_to_iterEET_S9_S9_T0_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____unique___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_equal_to_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v92, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v93, struct __gnu_cxx____ops___Iter_equal_to_iter v94) {
bb95:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first96;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last97;
  struct __gnu_cxx____ops___Iter_equal_to_iter __binary_pred98;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval99;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0100;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0101;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1102;
  struct __gnu_cxx____ops___Iter_equal_to_iter agg_tmp2103;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __dest104;
  __first96 = v92;
  __last97 = v93;
  __binary_pred98 = v94;
  agg_tmp0101 = __first96; // copy
  agg_tmp1102 = __last97; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t105 = agg_tmp0101;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t106 = agg_tmp1102;
  struct __gnu_cxx____ops___Iter_equal_to_iter t107 = agg_tmp2103;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r108 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____adjacent_find___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_equal_to_iter_(t105, t106, t107);
  ref_tmp0100 = r108;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r109 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&__first96, &ref_tmp0100);
    _Bool r110 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first96, &__last97);
    if (r110) {
      __retval99 = __last97; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t111 = __retval99;
      return t111;
    }
  __dest104 = __first96; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r112 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__first96);
    while (1) {
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r113 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__first96);
      _Bool r114 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(r113, &__last97);
      _Bool u115 = !r114;
      if (!u115) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3116;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp4117;
        agg_tmp3116 = __dest104; // copy
        agg_tmp4117 = __first96; // copy
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t118 = agg_tmp3116;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t119 = agg_tmp4117;
        _Bool r120 = bool___gnu_cxx____ops___Iter_equal_to_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(&__binary_pred98, t118, t119);
        _Bool u121 = !r120;
        if (u121) {
          int* r122 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first96);
          int t123 = *r122;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r124 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__dest104);
          int* r125 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(r124);
          *r125 = t123;
        }
    }
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r126 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__dest104);
  __retval99 = *r126; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t127 = __retval99;
  return t127;
}

// function: _ZN9__gnu_cxx5__ops20__iter_equal_to_iterEv
struct __gnu_cxx____ops___Iter_equal_to_iter __gnu_cxx____ops____iter_equal_to_iter() {
bb128:
  struct __gnu_cxx____ops___Iter_equal_to_iter __retval129;
  struct __gnu_cxx____ops___Iter_equal_to_iter t130 = __retval129;
  return t130;
}

// function: _ZSt6uniqueIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEET_S7_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__unique___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v131, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v132) {
bb133:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first134;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last135;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval136;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0137;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1138;
  struct __gnu_cxx____ops___Iter_equal_to_iter agg_tmp2139;
  __first134 = v131;
  __last135 = v132;
  agg_tmp0137 = __first134; // copy
  agg_tmp1138 = __last135; // copy
  struct __gnu_cxx____ops___Iter_equal_to_iter r140 = __gnu_cxx____ops____iter_equal_to_iter();
  agg_tmp2139 = r140;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t141 = agg_tmp0137;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t142 = agg_tmp1138;
  struct __gnu_cxx____ops___Iter_equal_to_iter t143 = agg_tmp2139;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r144 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____unique___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_equal_to_iter_(t141, t142, t143);
  __retval136 = r144;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t145 = __retval136;
  return t145;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v146, int** v147) {
bb148:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this149;
  int** __i150;
  this149 = v146;
  __i150 = v147;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t151 = this149;
  int** t152 = __i150;
  int* t153 = *t152;
  t151->_M_current = t153;
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v154) {
bb155:
  struct std__vector_int__std__allocator_int__* this156;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval157;
  this156 = v154;
  struct std__vector_int__std__allocator_int__* t158 = this156;
  struct std___Vector_base_int__std__allocator_int__* base159 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t158 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base160 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base159->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval157, &base160->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t161 = __retval157;
  return t161;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v162) {
bb163:
  struct std__vector_int__std__allocator_int__* this164;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval165;
  this164 = v162;
  struct std__vector_int__std__allocator_int__* t166 = this164;
  struct std___Vector_base_int__std__allocator_int__* base167 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t166 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base168 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base167->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval165, &base168->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t169 = __retval165;
  return t169;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSEOS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v170, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v171) {
bb172:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this173;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed174;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval175;
  this173 = v170;
  unnamed174 = v171;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t176 = this173;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t177 = unnamed174;
  int* t178 = t177->_M_current;
  t176->_M_current = t178;
  __retval175 = t176;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t179 = __retval175;
  return t179;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v180) {
bb181:
  struct std__vector_int__std__allocator_int__* this182;
  unsigned long __retval183;
  long __dif184;
  this182 = v180;
  struct std__vector_int__std__allocator_int__* t185 = this182;
  struct std___Vector_base_int__std__allocator_int__* base186 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t185 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base187 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base186->_M_impl) + 0);
  int* t188 = base187->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base189 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t185 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base190 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base189->_M_impl) + 0);
  int* t191 = base190->_M_start;
  long diff192 = t188 - t191;
  __dif184 = diff192;
    long t193 = __dif184;
    long c194 = 0;
    _Bool c195 = ((t193 < c194)) ? 1 : 0;
    if (c195) {
      __builtin_unreachable();
    }
  long t196 = __dif184;
  unsigned long cast197 = (unsigned long)t196;
  __retval183 = cast197;
  unsigned long t198 = __retval183;
  return t198;
}

// function: _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* v199) {
bb200:
  struct std___Vector_base_int__std__allocator_int__* this201;
  struct std__allocator_int_* __retval202;
  this201 = v199;
  struct std___Vector_base_int__std__allocator_int__* t203 = this201;
  struct std__allocator_int_* base204 = (struct std__allocator_int_*)((char *)&(t203->_M_impl) + 0);
  __retval202 = base204;
  struct std__allocator_int_* t205 = __retval202;
  return t205;
}

// function: _ZNKSt6vectorIiSaIiEE8max_sizeEv
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* v206) {
bb207:
  struct std__vector_int__std__allocator_int__* this208;
  unsigned long __retval209;
  this208 = v206;
  struct std__vector_int__std__allocator_int__* t210 = this208;
  struct std___Vector_base_int__std__allocator_int__* base211 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t210 + 0);
  struct std__allocator_int_* r212 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(base211);
  unsigned long r213 = std__vector_int__std__allocator_int______S_max_size(r212);
  __retval209 = r213;
  unsigned long t214 = __retval209;
  return t214;
}

// function: _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v215) {
bb216:
  int* __location217;
  int* __retval218;
  void* __loc219;
  __location217 = v215;
  int* t220 = __location217;
  void* cast221 = (void*)t220;
  __loc219 = cast221;
    void* t222 = __loc219;
    int* cast223 = (int*)t222;
    int c224 = 0;
    *cast223 = c224;
    __retval218 = cast223;
    int* t225 = __retval218;
    return t225;
  abort();
}

// function: _ZSt10_ConstructIiJEEvPT_DpOT0_
void void_std___Construct_int_(int* v226) {
bb227:
  int* __p228;
  __p228 = v226;
    _Bool r229 = std____is_constant_evaluated();
    if (r229) {
      int* t230 = __p228;
      int* r231 = _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t230);
      return;
    }
  int* t232 = __p228;
  void* cast233 = (void*)t232;
  int* cast234 = (int*)cast233;
  int c235 = 0;
  *cast234 = c235;
  return;
}

// function: _ZNSt27__uninitialized_default_n_1ILb0EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(int* v236, unsigned long v237) {
bb238:
  int* __first239;
  unsigned long __n240;
  int* __retval241;
  struct std___UninitDestroyGuard_int____void_ __guard242;
  __first239 = v236;
  __n240 = v237;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard242, &__first239);
      while (1) {
        unsigned long t244 = __n240;
        unsigned long c245 = 0;
        _Bool c246 = ((t244 > c245)) ? 1 : 0;
        if (!c246) break;
        int* t247 = __first239;
        void_std___Construct_int_(t247);
      for_step243: ;
        unsigned long t248 = __n240;
        unsigned long u249 = t248 - 1;
        __n240 = u249;
        int* t250 = __first239;
        int c251 = 1;
        int* ptr252 = &(t250)[c251];
        __first239 = ptr252;
      }
    std___UninitDestroyGuard_int___void___release(&__guard242);
    int* t253 = __first239;
    __retval241 = t253;
    int* t254 = __retval241;
    int* ret_val255 = t254;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard242);
    }
    return ret_val255;
  abort();
}

// function: _ZSt9__fill_a1IPiiEvT_S1_RKT0_
void void_std____fill_a1_int___int_(int* v256, int* v257, int* v258) {
bb259:
  int* __first260;
  int* __last261;
  int* __value262;
  _Bool __load_outside_loop263;
  int __val264;
  __first260 = v256;
  __last261 = v257;
  __value262 = v258;
  _Bool c265 = 1;
  __load_outside_loop263 = c265;
  int* t266 = __value262;
  int t267 = *t266;
  __val264 = t267;
    while (1) {
      int* t269 = __first260;
      int* t270 = __last261;
      _Bool c271 = ((t269 != t270)) ? 1 : 0;
      if (!c271) break;
      int t272 = __val264;
      int* t273 = __first260;
      *t273 = t272;
    for_step268: ;
      int* t274 = __first260;
      int c275 = 1;
      int* ptr276 = &(t274)[c275];
      __first260 = ptr276;
    }
  return;
}

// function: _ZSt8__fill_aIPiiEvT_S1_RKT0_
void void_std____fill_a_int___int_(int* v277, int* v278, int* v279) {
bb280:
  int* __first281;
  int* __last282;
  int* __value283;
  __first281 = v277;
  __last282 = v278;
  __value283 = v279;
  int* t284 = __first281;
  int* t285 = __last282;
  int* t286 = __value283;
  void_std____fill_a1_int___int_(t284, t285, t286);
  return;
}

// function: _ZSt10__fill_n_aIPimiET_S1_T0_RKT1_St26random_access_iterator_tag
int* int__std____fill_n_a_int___unsigned_long__int_(int* v287, unsigned long v288, int* v289, struct std__random_access_iterator_tag v290) {
bb291:
  int* __first292;
  unsigned long __n293;
  int* __value294;
  struct std__random_access_iterator_tag unnamed295;
  int* __retval296;
  __first292 = v287;
  __n293 = v288;
  __value294 = v289;
  unnamed295 = v290;
    unsigned long t297 = __n293;
    unsigned long c298 = 0;
    _Bool c299 = ((t297 <= c298)) ? 1 : 0;
    if (c299) {
      int* t300 = __first292;
      __retval296 = t300;
      int* t301 = __retval296;
      return t301;
    }
  int* t302 = __first292;
  int* t303 = __first292;
  unsigned long t304 = __n293;
  int* ptr305 = &(t303)[t304];
  int* t306 = __value294;
  void_std____fill_a_int___int_(t302, ptr305, t306);
  int* t307 = __first292;
  unsigned long t308 = __n293;
  int* ptr309 = &(t307)[t308];
  __retval296 = ptr309;
  int* t310 = __retval296;
  return t310;
}

// function: _ZSt17__size_to_integerm
unsigned long std____size_to_integer(unsigned long v311) {
bb312:
  unsigned long __n313;
  unsigned long __retval314;
  __n313 = v311;
  unsigned long t315 = __n313;
  __retval314 = t315;
  unsigned long t316 = __retval314;
  return t316;
}

// function: _ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** v317) {
bb318:
  int** unnamed319;
  struct std__random_access_iterator_tag __retval320;
  unnamed319 = v317;
  struct std__random_access_iterator_tag t321 = __retval320;
  return t321;
}

// function: _ZSt6fill_nIPimiET_S1_T0_RKT1_
int* int__std__fill_n_int___unsigned_long__int_(int* v322, unsigned long v323, int* v324) {
bb325:
  int* __first326;
  unsigned long __n327;
  int* __value328;
  int* __retval329;
  struct std__random_access_iterator_tag agg_tmp0330;
  __first326 = v322;
  __n327 = v323;
  __value328 = v324;
  int* t331 = __first326;
  unsigned long t332 = __n327;
  unsigned long r333 = std____size_to_integer(t332);
  int* t334 = __value328;
  struct std__random_access_iterator_tag r335 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first326);
  agg_tmp0330 = r335;
  struct std__random_access_iterator_tag t336 = agg_tmp0330;
  int* r337 = int__std____fill_n_a_int___unsigned_long__int_(t331, r333, t334, t336);
  __retval329 = r337;
  int* t338 = __retval329;
  return t338;
}

// function: _ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(int* v339, unsigned long v340) {
bb341:
  int* __first342;
  unsigned long __n343;
  int* __retval344;
  __first342 = v339;
  __n343 = v340;
    unsigned long t345 = __n343;
    unsigned long c346 = 0;
    _Bool c347 = ((t345 > c346)) ? 1 : 0;
    if (c347) {
      int* __val348;
      int* t349 = __first342;
      __val348 = t349;
      int* t350 = __val348;
      void_std___Construct_int_(t350);
      int* t351 = __first342;
      int c352 = 1;
      int* ptr353 = &(t351)[c352];
      __first342 = ptr353;
      int* t354 = __first342;
      unsigned long t355 = __n343;
      unsigned long c356 = 1;
      unsigned long b357 = t355 - c356;
      int* t358 = __val348;
      int* r359 = int__std__fill_n_int___unsigned_long__int_(t354, b357, t358);
      __first342 = r359;
    }
  int* t360 = __first342;
  __retval344 = t360;
  int* t361 = __retval344;
  return t361;
}

// function: _ZSt25__uninitialized_default_nIPimET_S1_T0_
int* int__std____uninitialized_default_n_int___unsigned_long_(int* v362, unsigned long v363) {
bb364:
  int* __first365;
  unsigned long __n366;
  int* __retval367;
  _Bool __can_fill368;
  __first365 = v362;
  __n366 = v363;
    _Bool r369 = std__is_constant_evaluated();
    if (r369) {
      int* t370 = __first365;
      unsigned long t371 = __n366;
      int* r372 = int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(t370, t371);
      __retval367 = r372;
      int* t373 = __retval367;
      return t373;
    }
  _Bool c374 = 1;
  __can_fill368 = c374;
  int* t375 = __first365;
  unsigned long t376 = __n366;
  int* r377 = int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(t375, t376);
  __retval367 = r377;
  int* t378 = __retval367;
  return t378;
}

// function: _ZSt27__uninitialized_default_n_aIPimiET_S1_T0_RSaIT1_E
int* int__std____uninitialized_default_n_a_int___unsigned_long__int_(int* v379, unsigned long v380, struct std__allocator_int_* v381) {
bb382:
  int* __first383;
  unsigned long __n384;
  struct std__allocator_int_* unnamed385;
  int* __retval386;
  __first383 = v379;
  __n384 = v380;
  unnamed385 = v381;
  int* t387 = __first383;
  unsigned long t388 = __n384;
  int* r389 = int__std____uninitialized_default_n_int___unsigned_long_(t387, t388);
  __retval386 = r389;
  int* t390 = __retval386;
  return t390;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v391, unsigned long* v392) {
bb393:
  unsigned long* __a394;
  unsigned long* __b395;
  unsigned long* __retval396;
  __a394 = v391;
  __b395 = v392;
    unsigned long* t397 = __a394;
    unsigned long t398 = *t397;
    unsigned long* t399 = __b395;
    unsigned long t400 = *t399;
    _Bool c401 = ((t398 < t400)) ? 1 : 0;
    if (c401) {
      unsigned long* t402 = __b395;
      __retval396 = t402;
      unsigned long* t403 = __retval396;
      return t403;
    }
  unsigned long* t404 = __a394;
  __retval396 = t404;
  unsigned long* t405 = __retval396;
  return t405;
}

// function: _ZNKSt6vectorIiSaIiEE12_M_check_lenEmPKc
unsigned long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std__vector_int__std__allocator_int__* v406, unsigned long v407, char* v408) {
bb409:
  struct std__vector_int__std__allocator_int__* this410;
  unsigned long __n411;
  char* __s412;
  unsigned long __retval413;
  unsigned long __len414;
  unsigned long ref_tmp0415;
  this410 = v406;
  __n411 = v407;
  __s412 = v408;
  struct std__vector_int__std__allocator_int__* t416 = this410;
    unsigned long r417 = std__vector_int__std__allocator_int_____max_size___const(t416);
    unsigned long r418 = std__vector_int__std__allocator_int_____size___const(t416);
    unsigned long b419 = r417 - r418;
    unsigned long t420 = __n411;
    _Bool c421 = ((b419 < t420)) ? 1 : 0;
    if (c421) {
      char* t422 = __s412;
      std____throw_length_error(t422);
    }
  unsigned long r423 = std__vector_int__std__allocator_int_____size___const(t416);
  unsigned long r424 = std__vector_int__std__allocator_int_____size___const(t416);
  ref_tmp0415 = r424;
  unsigned long* r425 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp0415, &__n411);
  unsigned long t426 = *r425;
  unsigned long b427 = r423 + t426;
  __len414 = b427;
  unsigned long t428 = __len414;
  unsigned long r429 = std__vector_int__std__allocator_int_____size___const(t416);
  _Bool c430 = ((t428 < r429)) ? 1 : 0;
  _Bool ternary431;
  if (c430) {
    _Bool c432 = 1;
    ternary431 = (_Bool)c432;
  } else {
    unsigned long t433 = __len414;
    unsigned long r434 = std__vector_int__std__allocator_int_____max_size___const(t416);
    _Bool c435 = ((t433 > r434)) ? 1 : 0;
    ternary431 = (_Bool)c435;
  }
  unsigned long ternary436;
  if (ternary431) {
    unsigned long r437 = std__vector_int__std__allocator_int_____max_size___const(t416);
    ternary436 = (unsigned long)r437;
  } else {
    unsigned long t438 = __len414;
    ternary436 = (unsigned long)t438;
  }
  __retval413 = ternary436;
  unsigned long t439 = __retval413;
  return t439;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocC2EPimRSt12_Vector_baseIiS0_E
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v440, int* v441, unsigned long v442, struct std___Vector_base_int__std__allocator_int__* v443) {
bb444:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this445;
  int* __s446;
  unsigned long __l447;
  struct std___Vector_base_int__std__allocator_int__* __vect448;
  this445 = v440;
  __s446 = v441;
  __l447 = v442;
  __vect448 = v443;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t449 = this445;
  int* t450 = __s446;
  t449->_M_storage = t450;
  unsigned long t451 = __l447;
  t449->_M_len = t451;
  struct std___Vector_base_int__std__allocator_int__* t452 = __vect448;
  t449->_M_vect = t452;
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEC2ERKS1_
void __gnu_cxx____normal_iterator_int___void_____normal_iterator(struct __gnu_cxx____normal_iterator_int____void_* v453, int** v454) {
bb455:
  struct __gnu_cxx____normal_iterator_int____void_* this456;
  int** __i457;
  this456 = v453;
  __i457 = v454;
  struct __gnu_cxx____normal_iterator_int____void_* t458 = this456;
  int** t459 = __i457;
  int* t460 = *t459;
  t458->_M_current = t460;
  return;
}

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v461, int* v462) {
bb463:
  int* __location464;
  int* __args465;
  int* __retval466;
  void* __loc467;
  __location464 = v461;
  __args465 = v462;
  int* t468 = __location464;
  void* cast469 = (void*)t468;
  __loc467 = cast469;
    void* t470 = __loc467;
    int* cast471 = (int*)t470;
    int* t472 = __args465;
    int t473 = *t472;
    *cast471 = t473;
    __retval466 = cast471;
    int* t474 = __retval466;
    return t474;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* v475, int* v476, int* v477) {
bb478:
  struct std__allocator_int_* __a479;
  int* __p480;
  int* __args481;
  __a479 = v475;
  __p480 = v476;
  __args481 = v477;
  int* t482 = __p480;
  int* t483 = __args481;
  int* r484 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t482, t483);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE7destroyIiEEvRS0_PT_
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* v485, int* v486) {
bb487:
  struct std__allocator_int_* __a488;
  int* __p489;
  __a488 = v485;
  __p489 = v486;
  int* t490 = __p489;
  void_std__destroy_at_int_(t490);
  return;
}

// function: _ZSt19__relocate_object_aIiiSaIiEEvPT_PT0_RT1_
void void_std____relocate_object_a_int__int__std__allocator_int___(int* v491, int* v492, struct std__allocator_int_* v493) {
bb494:
  int* __dest495;
  int* __orig496;
  struct std__allocator_int_* __alloc497;
  __dest495 = v491;
  __orig496 = v492;
  __alloc497 = v493;
  struct std__allocator_int_* t498 = __alloc497;
  int* t499 = __dest495;
  int* t500 = __orig496;
  void_std__allocator_traits_std__allocator_int_____construct_int__int_(t498, t499, t500);
  struct std__allocator_int_* t501 = __alloc497;
  int* t502 = __orig496;
  void_std__allocator_traits_std__allocator_int_____destroy_int_(t501, t502);
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivEdeEv
int* __gnu_cxx____normal_iterator_int___void___operator____const(struct __gnu_cxx____normal_iterator_int____void_* v503) {
bb504:
  struct __gnu_cxx____normal_iterator_int____void_* this505;
  int* __retval506;
  this505 = v503;
  struct __gnu_cxx____normal_iterator_int____void_* t507 = this505;
  int* t508 = t507->_M_current;
  __retval506 = t508;
  int* t509 = __retval506;
  return t509;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEppEv
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator__(struct __gnu_cxx____normal_iterator_int____void_* v510) {
bb511:
  struct __gnu_cxx____normal_iterator_int____void_* this512;
  struct __gnu_cxx____normal_iterator_int____void_* __retval513;
  this512 = v510;
  struct __gnu_cxx____normal_iterator_int____void_* t514 = this512;
  int* t515 = t514->_M_current;
  int c516 = 1;
  int* ptr517 = &(t515)[c516];
  t514->_M_current = ptr517;
  __retval513 = t514;
  struct __gnu_cxx____normal_iterator_int____void_* t518 = __retval513;
  return t518;
}

// function: _ZSt14__relocate_a_1IPiN9__gnu_cxx17__normal_iteratorIS0_vEESaIiEET0_T_S6_S5_RT1_
struct __gnu_cxx____normal_iterator_int____void_ __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(int* v519, int* v520, struct __gnu_cxx____normal_iterator_int____void_ v521, struct std__allocator_int_* v522) {
bb523:
  int* __first524;
  int* __last525;
  struct __gnu_cxx____normal_iterator_int____void_ __result526;
  struct std__allocator_int_* __alloc527;
  struct __gnu_cxx____normal_iterator_int____void_ __retval528;
  __first524 = v519;
  __last525 = v520;
  __result526 = v521;
  __alloc527 = v522;
  __retval528 = __result526; // copy
    while (1) {
      int* t530 = __first524;
      int* t531 = __last525;
      _Bool c532 = ((t530 != t531)) ? 1 : 0;
      if (!c532) break;
      int* r533 = __gnu_cxx____normal_iterator_int___void___operator____const(&__retval528);
      int* t534 = __first524;
      struct std__allocator_int_* t535 = __alloc527;
      void_std____relocate_object_a_int__int__std__allocator_int___(r533, t534, t535);
    for_step529: ;
      int* t536 = __first524;
      int c537 = 1;
      int* ptr538 = &(t536)[c537];
      __first524 = ptr538;
      struct __gnu_cxx____normal_iterator_int____void_* r539 = __gnu_cxx____normal_iterator_int___void___operator__(&__retval528);
    }
  struct __gnu_cxx____normal_iterator_int____void_ t540 = __retval528;
  return t540;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEaSEOS2_
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator_(struct __gnu_cxx____normal_iterator_int____void_* v541, struct __gnu_cxx____normal_iterator_int____void_* v542) {
bb543:
  struct __gnu_cxx____normal_iterator_int____void_* this544;
  struct __gnu_cxx____normal_iterator_int____void_* unnamed545;
  struct __gnu_cxx____normal_iterator_int____void_* __retval546;
  this544 = v541;
  unnamed545 = v542;
  struct __gnu_cxx____normal_iterator_int____void_* t547 = this544;
  struct __gnu_cxx____normal_iterator_int____void_* t548 = unnamed545;
  int* t549 = t548->_M_current;
  t547->_M_current = t549;
  __retval546 = t547;
  struct __gnu_cxx____normal_iterator_int____void_* t550 = __retval546;
  return t550;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivE4baseEv
int** __gnu_cxx____normal_iterator_int___void___base___const(struct __gnu_cxx____normal_iterator_int____void_* v551) {
bb552:
  struct __gnu_cxx____normal_iterator_int____void_* this553;
  int** __retval554;
  this553 = v551;
  struct __gnu_cxx____normal_iterator_int____void_* t555 = this553;
  __retval554 = &t555->_M_current;
  int** t556 = __retval554;
  return t556;
}

// function: _ZSt14__relocate_a_1IiiENSt9enable_ifIXsr3std24__is_bitwise_relocatableIT_EE5valueEPS1_E4typeES2_S2_S2_RSaIT0_E
int* std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(int* v557, int* v558, int* v559, struct std__allocator_int_* v560) {
bb561:
  int* __first562;
  int* __last563;
  int* __result564;
  struct std__allocator_int_* __alloc565;
  int* __retval566;
  long __count567;
  __first562 = v557;
  __last563 = v558;
  __result564 = v559;
  __alloc565 = v560;
  int* t568 = __last563;
  int* t569 = __first562;
  long diff570 = t568 - t569;
  __count567 = diff570;
    long t571 = __count567;
    long c572 = 0;
    _Bool c573 = ((t571 > c572)) ? 1 : 0;
    if (c573) {
        _Bool r574 = std__is_constant_evaluated();
        if (r574) {
          struct __gnu_cxx____normal_iterator_int____void_ __out575;
          struct __gnu_cxx____normal_iterator_int____void_ ref_tmp0576;
          struct __gnu_cxx____normal_iterator_int____void_ agg_tmp0577;
          __gnu_cxx____normal_iterator_int___void_____normal_iterator(&__out575, &__result564);
          int* t578 = __first562;
          int* t579 = __last563;
          agg_tmp0577 = __out575; // copy
          struct std__allocator_int_* t580 = __alloc565;
          struct __gnu_cxx____normal_iterator_int____void_ t581 = agg_tmp0577;
          struct __gnu_cxx____normal_iterator_int____void_ r582 = __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(t578, t579, t581, t580);
          ref_tmp0576 = r582;
          struct __gnu_cxx____normal_iterator_int____void_* r583 = __gnu_cxx____normal_iterator_int___void___operator_(&__out575, &ref_tmp0576);
          int** r584 = __gnu_cxx____normal_iterator_int___void___base___const(&__out575);
          int* t585 = *r584;
          __retval566 = t585;
          int* t586 = __retval566;
          return t586;
        }
      int* t587 = __result564;
      void* cast588 = (void*)t587;
      int* t589 = __first562;
      void* cast590 = (void*)t589;
      long t591 = __count567;
      unsigned long cast592 = (unsigned long)t591;
      unsigned long c593 = 4;
      unsigned long b594 = cast592 * c593;
      void* r595 = memcpy(cast588, cast590, b594);
    }
  int* t596 = __result564;
  long t597 = __count567;
  int* ptr598 = &(t596)[t597];
  __retval566 = ptr598;
  int* t599 = __retval566;
  return t599;
}

// function: _ZSt12__relocate_aIPiS0_SaIiEET0_T_S3_S2_RT1_
int* int__std____relocate_a_int___int___std__allocator_int___(int* v600, int* v601, int* v602, struct std__allocator_int_* v603) {
bb604:
  int* __first605;
  int* __last606;
  int* __result607;
  struct std__allocator_int_* __alloc608;
  int* __retval609;
  __first605 = v600;
  __last606 = v601;
  __result607 = v602;
  __alloc608 = v603;
  int* t610 = __first605;
  int* r611 = int__std____niter_base_int__(t610);
  int* t612 = __last606;
  int* r613 = int__std____niter_base_int__(t612);
  int* t614 = __result607;
  int* r615 = int__std____niter_base_int__(t614);
  struct std__allocator_int_* t616 = __alloc608;
  int* r617 = std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(r611, r613, r615, t616);
  __retval609 = r617;
  int* t618 = __retval609;
  return t618;
}

// function: _ZNSt6vectorIiSaIiEE11_S_relocateEPiS2_S2_RS0_
int* std__vector_int__std__allocator_int______S_relocate(int* v619, int* v620, int* v621, struct std__allocator_int_* v622) {
bb623:
  int* __first624;
  int* __last625;
  int* __result626;
  struct std__allocator_int_* __alloc627;
  int* __retval628;
  __first624 = v619;
  __last625 = v620;
  __result626 = v621;
  __alloc627 = v622;
  int* t629 = __first624;
  int* t630 = __last625;
  int* t631 = __result626;
  struct std__allocator_int_* t632 = __alloc627;
  int* r633 = int__std____relocate_a_int___int___std__allocator_int___(t629, t630, t631, t632);
  __retval628 = r633;
  int* t634 = __retval628;
  return t634;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocD2Ev
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v635) {
bb636:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this637;
  this637 = v635;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t638 = this637;
    int* t639 = t638->_M_storage;
    _Bool cast640 = (_Bool)t639;
    if (cast640) {
      struct std___Vector_base_int__std__allocator_int__* t641 = t638->_M_vect;
      int* t642 = t638->_M_storage;
      unsigned long t643 = t638->_M_len;
      std___Vector_base_int__std__allocator_int______M_deallocate(t641, t642, t643);
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_M_default_appendEm
void std__vector_int__std__allocator_int______M_default_append(struct std__vector_int__std__allocator_int__* v644, unsigned long v645) {
bb646:
  struct std__vector_int__std__allocator_int__* this647;
  unsigned long __n648;
  this647 = v644;
  __n648 = v645;
  struct std__vector_int__std__allocator_int__* t649 = this647;
    unsigned long t650 = __n648;
    unsigned long c651 = 0;
    _Bool c652 = ((t650 != c651)) ? 1 : 0;
    if (c652) {
      unsigned long __size653;
      unsigned long __navail654;
      unsigned long r655 = std__vector_int__std__allocator_int_____size___const(t649);
      __size653 = r655;
      struct std___Vector_base_int__std__allocator_int__* base656 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t649 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base657 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base656->_M_impl) + 0);
      int* t658 = base657->_M_end_of_storage;
      struct std___Vector_base_int__std__allocator_int__* base659 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t649 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base660 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base659->_M_impl) + 0);
      int* t661 = base660->_M_finish;
      long diff662 = t658 - t661;
      unsigned long cast663 = (unsigned long)diff662;
      __navail654 = cast663;
        unsigned long t664 = __size653;
        unsigned long r665 = std__vector_int__std__allocator_int_____max_size___const(t649);
        _Bool c666 = ((t664 > r665)) ? 1 : 0;
        _Bool ternary667;
        if (c666) {
          _Bool c668 = 1;
          ternary667 = (_Bool)c668;
        } else {
          unsigned long t669 = __navail654;
          unsigned long r670 = std__vector_int__std__allocator_int_____max_size___const(t649);
          unsigned long t671 = __size653;
          unsigned long b672 = r670 - t671;
          _Bool c673 = ((t669 > b672)) ? 1 : 0;
          ternary667 = (_Bool)c673;
        }
        if (ternary667) {
          __builtin_unreachable();
        }
        unsigned long t674 = __navail654;
        unsigned long t675 = __n648;
        _Bool c676 = ((t674 >= t675)) ? 1 : 0;
        if (c676) {
            struct std___Vector_base_int__std__allocator_int__* base677 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t649 + 0);
            struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base678 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base677->_M_impl) + 0);
            int* t679 = base678->_M_finish;
            _Bool cast680 = (_Bool)t679;
            _Bool u681 = !cast680;
            if (u681) {
              __builtin_unreachable();
            }
          struct std___Vector_base_int__std__allocator_int__* base682 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t649 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base683 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base682->_M_impl) + 0);
          int* t684 = base683->_M_finish;
          unsigned long t685 = __n648;
          struct std___Vector_base_int__std__allocator_int__* base686 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t649 + 0);
          struct std__allocator_int_* r687 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base686);
          int* r688 = int__std____uninitialized_default_n_a_int___unsigned_long__int_(t684, t685, r687);
          struct std___Vector_base_int__std__allocator_int__* base689 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t649 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base690 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base689->_M_impl) + 0);
          base690->_M_finish = r688;
        } else {
          int* __old_start691;
          int* __old_finish692;
          unsigned long __len693;
          int* __new_start694;
          struct std___Vector_base_int__std__allocator_int__* base695 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t649 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base696 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base695->_M_impl) + 0);
          int* t697 = base696->_M_start;
          __old_start691 = t697;
          struct std___Vector_base_int__std__allocator_int__* base698 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t649 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base699 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base698->_M_impl) + 0);
          int* t700 = base699->_M_finish;
          __old_finish692 = t700;
          unsigned long t701 = __n648;
          char* cast702 = (char*)&(_str_9);
          unsigned long r703 = std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(t649, t701, cast702);
          __len693 = r703;
          struct std___Vector_base_int__std__allocator_int__* base704 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t649 + 0);
          unsigned long t705 = __len693;
          int* r706 = std___Vector_base_int__std__allocator_int______M_allocate(base704, t705);
          __new_start694 = r706;
            struct std__vector_int__std__allocator_int_____Guard_alloc __guard707;
            int* t708 = __new_start694;
            unsigned long t709 = __len693;
            struct std___Vector_base_int__std__allocator_int__* base710 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t649 + 0);
            std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(&__guard707, t708, t709, base710);
              int* t711 = __new_start694;
              unsigned long t712 = __size653;
              int* ptr713 = &(t711)[t712];
              unsigned long t714 = __n648;
              struct std___Vector_base_int__std__allocator_int__* base715 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t649 + 0);
              struct std__allocator_int_* r716 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base715);
              int* r717 = int__std____uninitialized_default_n_a_int___unsigned_long__int_(ptr713, t714, r716);
                int* t718 = __old_start691;
                int* t719 = __old_finish692;
                int* t720 = __new_start694;
                struct std___Vector_base_int__std__allocator_int__* base721 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t649 + 0);
                struct std__allocator_int_* r722 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base721);
                int* r723 = std__vector_int__std__allocator_int______S_relocate(t718, t719, t720, r722);
              int* t724 = __old_start691;
              __guard707._M_storage = t724;
              struct std___Vector_base_int__std__allocator_int__* base725 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t649 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base726 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base725->_M_impl) + 0);
              int* t727 = base726->_M_end_of_storage;
              int* t728 = __old_start691;
              long diff729 = t727 - t728;
              unsigned long cast730 = (unsigned long)diff729;
              __guard707._M_len = cast730;
            {
              std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(&__guard707);
            }
          int* t731 = __new_start694;
          struct std___Vector_base_int__std__allocator_int__* base732 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t649 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base733 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base732->_M_impl) + 0);
          base733->_M_start = t731;
          int* t734 = __new_start694;
          unsigned long t735 = __size653;
          int* ptr736 = &(t734)[t735];
          unsigned long t737 = __n648;
          int* ptr738 = &(ptr736)[t737];
          struct std___Vector_base_int__std__allocator_int__* base739 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t649 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base740 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base739->_M_impl) + 0);
          base740->_M_finish = ptr738;
          int* t741 = __new_start694;
          unsigned long t742 = __len693;
          int* ptr743 = &(t741)[t742];
          struct std___Vector_base_int__std__allocator_int__* base744 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t649 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base745 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base744->_M_impl) + 0);
          base745->_M_end_of_storage = ptr743;
        }
    }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v746, int* v747, struct std__allocator_int_* v748) {
bb749:
  int* __first750;
  int* __last751;
  struct std__allocator_int_* unnamed752;
  __first750 = v746;
  __last751 = v747;
  unnamed752 = v748;
  int* t753 = __first750;
  int* t754 = __last751;
  void_std___Destroy_int__(t753, t754);
  return;
}

// function: _ZNSt6vectorIiSaIiEE15_M_erase_at_endEPi
void std__vector_int__std__allocator_int______M_erase_at_end(struct std__vector_int__std__allocator_int__* v755, int* v756) {
bb757:
  struct std__vector_int__std__allocator_int__* this758;
  int* __pos759;
  this758 = v755;
  __pos759 = v756;
  struct std__vector_int__std__allocator_int__* t760 = this758;
    unsigned long __n761;
    struct std___Vector_base_int__std__allocator_int__* base762 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t760 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base763 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base762->_M_impl) + 0);
    int* t764 = base763->_M_finish;
    int* t765 = __pos759;
    long diff766 = t764 - t765;
    unsigned long cast767 = (unsigned long)diff766;
    __n761 = cast767;
    unsigned long t768 = __n761;
    _Bool cast769 = (_Bool)t768;
    if (cast769) {
      int* t770 = __pos759;
      struct std___Vector_base_int__std__allocator_int__* base771 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t760 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base772 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base771->_M_impl) + 0);
      int* t773 = base772->_M_finish;
      struct std___Vector_base_int__std__allocator_int__* base774 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t760 + 0);
      struct std__allocator_int_* r775 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base774);
      void_std___Destroy_int___int_(t770, t773, r775);
      int* t776 = __pos759;
      struct std___Vector_base_int__std__allocator_int__* base777 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t760 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base778 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base777->_M_impl) + 0);
      base778->_M_finish = t776;
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE6resizeEm
void std__vector_int__std__allocator_int_____resize(struct std__vector_int__std__allocator_int__* v779, unsigned long v780) {
bb781:
  struct std__vector_int__std__allocator_int__* this782;
  unsigned long __new_size783;
  this782 = v779;
  __new_size783 = v780;
  struct std__vector_int__std__allocator_int__* t784 = this782;
    unsigned long t785 = __new_size783;
    unsigned long r786 = std__vector_int__std__allocator_int_____size___const(t784);
    _Bool c787 = ((t785 > r786)) ? 1 : 0;
    if (c787) {
      unsigned long t788 = __new_size783;
      unsigned long r789 = std__vector_int__std__allocator_int_____size___const(t784);
      unsigned long b790 = t788 - r789;
      std__vector_int__std__allocator_int______M_default_append(t784, b790);
    } else {
        unsigned long t791 = __new_size783;
        unsigned long r792 = std__vector_int__std__allocator_int_____size___const(t784);
        _Bool c793 = ((t791 < r792)) ? 1 : 0;
        if (c793) {
          struct std___Vector_base_int__std__allocator_int__* base794 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t784 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base795 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base794->_M_impl) + 0);
          int* t796 = base795->_M_start;
          unsigned long t797 = __new_size783;
          int* ptr798 = &(t796)[t797];
          std__vector_int__std__allocator_int______M_erase_at_end(t784, ptr798);
        }
    }
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v799) {
bb800:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this801;
  int** __retval802;
  this801 = v799;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t803 = this801;
  __retval802 = &t803->_M_current;
  int** t804 = __retval802;
  return t804;
}

// function: _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v805, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v806) {
bb807:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs808;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs809;
  long __retval810;
  __lhs808 = v805;
  __rhs809 = v806;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t811 = __lhs808;
  int** r812 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t811);
  int* t813 = *r812;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t814 = __rhs809;
  int** r815 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t814);
  int* t816 = *r815;
  long diff817 = t813 - t816;
  __retval810 = diff817;
  long t818 = __retval810;
  return t818;
}

// function: _ZNSt6vectorIiSaIiEEixEm
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* v819, unsigned long v820) {
bb821:
  struct std__vector_int__std__allocator_int__* this822;
  unsigned long __n823;
  int* __retval824;
  this822 = v819;
  __n823 = v820;
  struct std__vector_int__std__allocator_int__* t825 = this822;
    do {
          unsigned long t826 = __n823;
          unsigned long r827 = std__vector_int__std__allocator_int_____size___const(t825);
          _Bool c828 = ((t826 < r827)) ? 1 : 0;
          _Bool u829 = !c828;
          if (u829) {
            char* cast830 = (char*)&(_str_10);
            int c831 = 1263;
            char* cast832 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm);
            char* cast833 = (char*)&(_str_11);
            std____glibcxx_assert_fail(cast830, c831, cast832, cast833);
          }
      _Bool c834 = 0;
      if (!c834) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base835 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t825 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base836 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base835->_M_impl) + 0);
  int* t837 = base836->_M_start;
  unsigned long t838 = __n823;
  int* ptr839 = &(t837)[t838];
  __retval824 = ptr839;
  int* t840 = __retval824;
  return t840;
}

// function: _ZSt15__adjacent_findIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_comp_iterIPFbiiEEEET_SC_SC_T0_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____adjacent_find___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_bool_____int__int_______gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v841, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v842, struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ v843) {
bb844:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first845;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last846;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ __binary_pred847;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval848;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __next849;
  __first845 = v841;
  __last846 = v842;
  __binary_pred847 = v843;
    _Bool r850 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first845, &__last846);
    if (r850) {
      __retval848 = __last846; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t851 = __retval848;
      return t851;
    }
  __next849 = __first845; // copy
    while (1) {
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r852 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__next849);
      _Bool r853 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(r852, &__last846);
      _Bool u854 = !r853;
      if (!u854) break;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0855;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1856;
          agg_tmp0855 = __first845; // copy
          agg_tmp1856 = __next849; // copy
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t857 = agg_tmp0855;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t858 = agg_tmp1856;
          _Bool r859 = bool___gnu_cxx____ops___Iter_comp_iter_bool_____int__int____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__binary_pred847, t857, t858);
          if (r859) {
            __retval848 = __first845; // copy
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t860 = __retval848;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ret_val861 = t860;
            return ret_val861;
          }
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r862 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__2(&__first845, &__next849);
    }
  __retval848 = __last846; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t863 = __retval848;
  return t863;
}

// function: _ZN9__gnu_cxx5__ops15_Iter_comp_iterIPFbiiEEclINS_17__normal_iteratorIPiSt6vectorIiSaIiEEEESB_EEbT_T0_
_Bool bool___gnu_cxx____ops___Iter_comp_iter_bool_____int__int____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* v864, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v865, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v866) {
bb867:
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* this868;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it1869;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it2870;
  _Bool __retval871;
  this868 = v864;
  __it1869 = v865;
  __it2870 = v866;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* t872 = this868;
  void* t873 = t872->_M_comp;
  int* r874 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it1869);
  int t875 = *r874;
  int* r876 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it2870);
  int t877 = *r876;
  _Bool r878 = ((_Bool (*)(int, int))t873)(t875, t877);
  __retval871 = r878;
  _Bool t879 = __retval871;
  return t879;
}

// function: _ZSt8__uniqueIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_comp_iterIPFbiiEEEET_SC_SC_T0_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____unique___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_bool_____int__int_______gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v880, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v881, struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ v882) {
bb883:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first884;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last885;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ __binary_pred886;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval887;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0888;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0889;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1890;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ agg_tmp2891;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __dest892;
  __first884 = v880;
  __last885 = v881;
  __binary_pred886 = v882;
  agg_tmp0889 = __first884; // copy
  agg_tmp1890 = __last885; // copy
  agg_tmp2891 = __binary_pred886; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t893 = agg_tmp0889;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t894 = agg_tmp1890;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ t895 = agg_tmp2891;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r896 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____adjacent_find___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_bool_____int__int_______gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_bool____(t893, t894, t895);
  ref_tmp0888 = r896;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r897 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&__first884, &ref_tmp0888);
    _Bool r898 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first884, &__last885);
    if (r898) {
      __retval887 = __last885; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t899 = __retval887;
      return t899;
    }
  __dest892 = __first884; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r900 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__first884);
    while (1) {
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r901 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__first884);
      _Bool r902 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(r901, &__last885);
      _Bool u903 = !r902;
      if (!u903) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3904;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp4905;
        agg_tmp3904 = __dest892; // copy
        agg_tmp4905 = __first884; // copy
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t906 = agg_tmp3904;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t907 = agg_tmp4905;
        _Bool r908 = bool___gnu_cxx____ops___Iter_comp_iter_bool_____int__int____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__binary_pred886, t906, t907);
        _Bool u909 = !r908;
        if (u909) {
          int* r910 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first884);
          int t911 = *r910;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r912 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__dest892);
          int* r913 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(r912);
          *r913 = t911;
        }
    }
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r914 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__dest892);
  __retval887 = *r914; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t915 = __retval887;
  return t915;
}

// function: _ZN9__gnu_cxx5__ops15_Iter_comp_iterIPFbiiEEC2ES3_
void __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____Iter_comp_iter_bool____(struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* v916, void* v917) {
bb918:
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* this919;
  void* __comp920;
  this919 = v916;
  __comp920 = v917;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* t921 = this919;
  void* t922 = __comp920;
  t921->_M_comp = t922;
  return;
}

// function: _ZN9__gnu_cxx5__ops16__iter_comp_iterIPFbiiEEENS0_15_Iter_comp_iterIT_EES5_
struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____gnu_cxx____ops____iter_comp_iter_bool_____int__int___bool____(void* v923) {
bb924:
  void* __comp925;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ __retval926;
  __comp925 = v923;
  void* t927 = __comp925;
  __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____Iter_comp_iter_bool____(&__retval926, t927);
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ t928 = __retval926;
  return t928;
}

// function: _ZSt6uniqueIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEPFbiiEET_S9_S9_T0_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__unique___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool_____int__int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v929, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v930, void* v931) {
bb932:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first933;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last934;
  void* __binary_pred935;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval936;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0937;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1938;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ agg_tmp2939;
  __first933 = v929;
  __last934 = v930;
  __binary_pred935 = v931;
  agg_tmp0937 = __first933; // copy
  agg_tmp1938 = __last934; // copy
  void* t940 = __binary_pred935;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ r941 = __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____gnu_cxx____ops____iter_comp_iter_bool_____int__int___bool____(t940);
  agg_tmp2939 = r941;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t942 = agg_tmp0937;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t943 = agg_tmp1938;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ t944 = agg_tmp2939;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r945 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____unique___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_bool_____int__int_______gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_bool____(t942, t943, t944);
  __retval936 = r945;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t946 = __retval936;
  return t946;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v947, int v948) {
bb949:
  int __a950;
  int __b951;
  int __retval952;
  __a950 = v947;
  __b951 = v948;
  int t953 = __a950;
  int t954 = __b951;
  int b955 = t953 | t954;
  __retval952 = b955;
  int t956 = __retval952;
  return t956;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v957) {
bb958:
  struct std__basic_ios_char__std__char_traits_char__* this959;
  int __retval960;
  this959 = v957;
  struct std__basic_ios_char__std__char_traits_char__* t961 = this959;
  struct std__ios_base* base962 = (struct std__ios_base*)((char *)t961 + 0);
  int t963 = base962->_M_streambuf_state;
  __retval960 = t963;
  int t964 = __retval960;
  return t964;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v965, int v966) {
bb967:
  struct std__basic_ios_char__std__char_traits_char__* this968;
  int __state969;
  this968 = v965;
  __state969 = v966;
  struct std__basic_ios_char__std__char_traits_char__* t970 = this968;
  int r971 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t970);
  int t972 = __state969;
  int r973 = std__operator_(r971, t972);
  std__basic_ios_char__std__char_traits_char_____clear(t970, r973);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v974, char* v975) {
bb976:
  char* __c1977;
  char* __c2978;
  _Bool __retval979;
  __c1977 = v974;
  __c2978 = v975;
  char* t980 = __c1977;
  char t981 = *t980;
  int cast982 = (int)t981;
  char* t983 = __c2978;
  char t984 = *t983;
  int cast985 = (int)t984;
  _Bool c986 = ((cast982 == cast985)) ? 1 : 0;
  __retval979 = c986;
  _Bool t987 = __retval979;
  return t987;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v988) {
bb989:
  char* __p990;
  unsigned long __retval991;
  unsigned long __i992;
  __p990 = v988;
  unsigned long c993 = 0;
  __i992 = c993;
    char ref_tmp0994;
    while (1) {
      unsigned long t995 = __i992;
      char* t996 = __p990;
      char* ptr997 = &(t996)[t995];
      char c998 = 0;
      ref_tmp0994 = c998;
      _Bool r999 = __gnu_cxx__char_traits_char___eq(ptr997, &ref_tmp0994);
      _Bool u1000 = !r999;
      if (!u1000) break;
      unsigned long t1001 = __i992;
      unsigned long u1002 = t1001 + 1;
      __i992 = u1002;
    }
  unsigned long t1003 = __i992;
  __retval991 = t1003;
  unsigned long t1004 = __retval991;
  return t1004;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v1005) {
bb1006:
  char* __s1007;
  unsigned long __retval1008;
  __s1007 = v1005;
    _Bool r1009 = std____is_constant_evaluated();
    if (r1009) {
      char* t1010 = __s1007;
      unsigned long r1011 = __gnu_cxx__char_traits_char___length(t1010);
      __retval1008 = r1011;
      unsigned long t1012 = __retval1008;
      return t1012;
    }
  char* t1013 = __s1007;
  unsigned long r1014 = strlen(t1013);
  __retval1008 = r1014;
  unsigned long t1015 = __retval1008;
  return t1015;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1016, char* v1017) {
bb1018:
  struct std__basic_ostream_char__std__char_traits_char__* __out1019;
  char* __s1020;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1021;
  __out1019 = v1016;
  __s1020 = v1017;
    char* t1022 = __s1020;
    _Bool cast1023 = (_Bool)t1022;
    _Bool u1024 = !cast1023;
    if (u1024) {
      struct std__basic_ostream_char__std__char_traits_char__* t1025 = __out1019;
      void** v1026 = (void**)t1025;
      void* v1027 = *((void**)v1026);
      unsigned char* cast1028 = (unsigned char*)v1027;
      long c1029 = -24;
      unsigned char* ptr1030 = &(cast1028)[c1029];
      long* cast1031 = (long*)ptr1030;
      long t1032 = *cast1031;
      unsigned char* cast1033 = (unsigned char*)t1025;
      unsigned char* ptr1034 = &(cast1033)[t1032];
      struct std__basic_ostream_char__std__char_traits_char__* cast1035 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1034;
      struct std__basic_ios_char__std__char_traits_char__* cast1036 = (struct std__basic_ios_char__std__char_traits_char__*)cast1035;
      int t1037 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast1036, t1037);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t1038 = __out1019;
      char* t1039 = __s1020;
      char* t1040 = __s1020;
      unsigned long r1041 = std__char_traits_char___length(t1040);
      long cast1042 = (long)r1041;
      struct std__basic_ostream_char__std__char_traits_char__* r1043 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t1038, t1039, cast1042);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t1044 = __out1019;
  __retval1021 = t1044;
  struct std__basic_ostream_char__std__char_traits_char__* t1045 = __retval1021;
  return t1045;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1046, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1047) {
bb1048:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs1049;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs1050;
  _Bool __retval1051;
  __lhs1049 = v1046;
  __rhs1050 = v1047;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1052 = __lhs1049;
  int** r1053 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t1052);
  int* t1054 = *r1053;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1055 = __rhs1050;
  int** r1056 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t1055);
  int* t1057 = *r1056;
  _Bool c1058 = ((t1054 == t1057)) ? 1 : 0;
  __retval1051 = c1058;
  _Bool t1059 = __retval1051;
  return t1059;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1060) {
bb1061:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this1062;
  int* __retval1063;
  this1062 = v1060;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1064 = this1062;
  int* t1065 = t1064->_M_current;
  __retval1063 = t1065;
  int* t1066 = __retval1063;
  return t1066;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1067) {
bb1068:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this1069;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval1070;
  this1069 = v1067;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1071 = this1069;
  int* t1072 = t1071->_M_current;
  int c1073 = 1;
  int* ptr1074 = &(t1072)[c1073];
  t1071->_M_current = ptr1074;
  __retval1070 = t1071;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1075 = __retval1070;
  return t1075;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v1076, void* v1077) {
bb1078:
  struct std__basic_ostream_char__std__char_traits_char__* this1079;
  void* __pf1080;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1081;
  this1079 = v1076;
  __pf1080 = v1077;
  struct std__basic_ostream_char__std__char_traits_char__* t1082 = this1079;
  void* t1083 = __pf1080;
  struct std__basic_ostream_char__std__char_traits_char__* r1084 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t1083)(t1082);
  __retval1081 = r1084;
  struct std__basic_ostream_char__std__char_traits_char__* t1085 = __retval1081;
  return t1085;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1086) {
bb1087:
  struct std__basic_ostream_char__std__char_traits_char__* __os1088;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1089;
  __os1088 = v1086;
  struct std__basic_ostream_char__std__char_traits_char__* t1090 = __os1088;
  struct std__basic_ostream_char__std__char_traits_char__* r1091 = std__ostream__flush(t1090);
  __retval1089 = r1091;
  struct std__basic_ostream_char__std__char_traits_char__* t1092 = __retval1089;
  return t1092;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v1093) {
bb1094:
  struct std__ctype_char_* __f1095;
  struct std__ctype_char_* __retval1096;
  __f1095 = v1093;
    struct std__ctype_char_* t1097 = __f1095;
    _Bool cast1098 = (_Bool)t1097;
    _Bool u1099 = !cast1098;
    if (u1099) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t1100 = __f1095;
  __retval1096 = t1100;
  struct std__ctype_char_* t1101 = __retval1096;
  return t1101;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v1102, char v1103) {
bb1104:
  struct std__ctype_char_* this1105;
  char __c1106;
  char __retval1107;
  this1105 = v1102;
  __c1106 = v1103;
  struct std__ctype_char_* t1108 = this1105;
    char t1109 = t1108->_M_widen_ok;
    _Bool cast1110 = (_Bool)t1109;
    if (cast1110) {
      char t1111 = __c1106;
      unsigned char cast1112 = (unsigned char)t1111;
      unsigned long cast1113 = (unsigned long)cast1112;
      char t1114 = t1108->_M_widen[cast1113];
      __retval1107 = t1114;
      char t1115 = __retval1107;
      return t1115;
    }
  std__ctype_char____M_widen_init___const(t1108);
  char t1116 = __c1106;
  void** v1117 = (void**)t1108;
  void* v1118 = *((void**)v1117);
  char vcall1121 = (char)__VERIFIER_virtual_call_char_char(t1108, 6, t1116);
  __retval1107 = vcall1121;
  char t1122 = __retval1107;
  return t1122;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v1123, char v1124) {
bb1125:
  struct std__basic_ios_char__std__char_traits_char__* this1126;
  char __c1127;
  char __retval1128;
  this1126 = v1123;
  __c1127 = v1124;
  struct std__basic_ios_char__std__char_traits_char__* t1129 = this1126;
  struct std__ctype_char_* t1130 = t1129->_M_ctype;
  struct std__ctype_char_* r1131 = std__ctype_char__const__std____check_facet_std__ctype_char___(t1130);
  char t1132 = __c1127;
  char r1133 = std__ctype_char___widen_char__const(r1131, t1132);
  __retval1128 = r1133;
  char t1134 = __retval1128;
  return t1134;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1135) {
bb1136:
  struct std__basic_ostream_char__std__char_traits_char__* __os1137;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1138;
  __os1137 = v1135;
  struct std__basic_ostream_char__std__char_traits_char__* t1139 = __os1137;
  struct std__basic_ostream_char__std__char_traits_char__* t1140 = __os1137;
  void** v1141 = (void**)t1140;
  void* v1142 = *((void**)v1141);
  unsigned char* cast1143 = (unsigned char*)v1142;
  long c1144 = -24;
  unsigned char* ptr1145 = &(cast1143)[c1144];
  long* cast1146 = (long*)ptr1145;
  long t1147 = *cast1146;
  unsigned char* cast1148 = (unsigned char*)t1140;
  unsigned char* ptr1149 = &(cast1148)[t1147];
  struct std__basic_ostream_char__std__char_traits_char__* cast1150 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1149;
  struct std__basic_ios_char__std__char_traits_char__* cast1151 = (struct std__basic_ios_char__std__char_traits_char__*)cast1150;
  char c1152 = 10;
  char r1153 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast1151, c1152);
  struct std__basic_ostream_char__std__char_traits_char__* r1154 = std__ostream__put(t1139, r1153);
  struct std__basic_ostream_char__std__char_traits_char__* r1155 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r1154);
  __retval1138 = r1155;
  struct std__basic_ostream_char__std__char_traits_char__* t1156 = __retval1138;
  return t1156;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v1157) {
bb1158:
  struct std__vector_int__std__allocator_int__* this1159;
  this1159 = v1157;
  struct std__vector_int__std__allocator_int__* t1160 = this1159;
    struct std___Vector_base_int__std__allocator_int__* base1161 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1160 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1162 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1161->_M_impl) + 0);
    int* t1163 = base1162->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base1164 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1160 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1165 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1164->_M_impl) + 0);
    int* t1166 = base1165->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base1167 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1160 + 0);
    struct std__allocator_int_* r1168 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1167);
    void_std___Destroy_int___int_(t1163, t1166, r1168);
  {
    struct std___Vector_base_int__std__allocator_int__* base1169 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1160 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base1169);
  }
  return;
}

// function: main
int main() {
bb1170:
  int __retval1171;
  int myints1172[9];
  struct std__vector_int__std__allocator_int__ myvector1173;
  struct std__allocator_int_ ref_tmp01174;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it1175;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp11176;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01177;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11178;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp21179;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp21180;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp31181;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp41182;
  int c1183 = 0;
  __retval1171 = c1183;
  // array copy
  __builtin_memcpy(myints1172, __const_main_myints, (unsigned long)9 * sizeof(__const_main_myints[0]));
  int* cast1184 = (int*)&(myints1172);
  int* cast1185 = (int*)&(myints1172);
  int c1186 = 9;
  int* ptr1187 = &(cast1185)[c1186];
  std__allocator_int___allocator_2(&ref_tmp01174);
    std__vector_int__std__allocator_int_____vector_int___void_(&myvector1173, cast1184, ptr1187, &ref_tmp01174);
  {
    std__allocator_int____allocator(&ref_tmp01174);
  }
    __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&it1175);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1188 = std__vector_int__std__allocator_int_____begin(&myvector1173);
    agg_tmp01177 = r1188;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1189 = std__vector_int__std__allocator_int_____end(&myvector1173);
    agg_tmp11178 = r1189;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1190 = agg_tmp01177;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1191 = agg_tmp11178;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1192 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__unique___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t1190, t1191);
    ref_tmp11176 = r1192;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1193 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it1175, &ref_tmp11176);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1194 = std__vector_int__std__allocator_int_____begin(&myvector1173);
    ref_tmp21179 = r1194;
    long r1195 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&it1175, &ref_tmp21179);
    unsigned long cast1196 = (unsigned long)r1195;
    std__vector_int__std__allocator_int_____resize(&myvector1173, cast1196);
    unsigned long c1197 = 0;
    int* r1198 = std__vector_int__std__allocator_int_____operator__(&myvector1173, c1197);
    int t1199 = *r1198;
    int c1200 = 10;
    _Bool c1201 = ((t1199 == c1200)) ? 1 : 0;
    if (c1201) {
    } else {
      char* cast1202 = (char*)&(_str);
      char* c1203 = _str_1;
      unsigned int c1204 = 30;
      char* cast1205 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1202, c1203, c1204, cast1205);
    }
    unsigned long c1206 = 1;
    int* r1207 = std__vector_int__std__allocator_int_____operator__(&myvector1173, c1206);
    int t1208 = *r1207;
    int c1209 = 20;
    _Bool c1210 = ((t1208 == c1209)) ? 1 : 0;
    if (c1210) {
    } else {
      char* cast1211 = (char*)&(_str_2);
      char* c1212 = _str_1;
      unsigned int c1213 = 31;
      char* cast1214 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1211, c1212, c1213, cast1214);
    }
    unsigned long c1215 = 2;
    int* r1216 = std__vector_int__std__allocator_int_____operator__(&myvector1173, c1215);
    int t1217 = *r1216;
    int c1218 = 30;
    _Bool c1219 = ((t1217 == c1218)) ? 1 : 0;
    if (c1219) {
    } else {
      char* cast1220 = (char*)&(_str_3);
      char* c1221 = _str_1;
      unsigned int c1222 = 32;
      char* cast1223 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1220, c1221, c1222, cast1223);
    }
    unsigned long c1224 = 3;
    int* r1225 = std__vector_int__std__allocator_int_____operator__(&myvector1173, c1224);
    int t1226 = *r1225;
    int c1227 = 20;
    _Bool c1228 = ((t1226 == c1227)) ? 1 : 0;
    if (c1228) {
    } else {
      char* cast1229 = (char*)&(_str_4);
      char* c1230 = _str_1;
      unsigned int c1231 = 33;
      char* cast1232 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1229, c1230, c1231, cast1232);
    }
    unsigned long c1233 = 4;
    int* r1234 = std__vector_int__std__allocator_int_____operator__(&myvector1173, c1233);
    int t1235 = *r1234;
    int c1236 = 10;
    _Bool c1237 = ((t1235 == c1236)) ? 1 : 0;
    if (c1237) {
    } else {
      char* cast1238 = (char*)&(_str_5);
      char* c1239 = _str_1;
      unsigned int c1240 = 34;
      char* cast1241 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1238, c1239, c1240, cast1241);
    }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1242 = std__vector_int__std__allocator_int_____begin(&myvector1173);
    agg_tmp21180 = r1242;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1243 = std__vector_int__std__allocator_int_____end(&myvector1173);
    agg_tmp31181 = r1243;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1244 = agg_tmp21180;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1245 = agg_tmp31181;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1246 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__unique___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool_____int__int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool____(t1244, t1245, &myfunction);
    agg_tmp41182 = r1246;
    char* cast1247 = (char*)&(_str_6);
    struct std__basic_ostream_char__std__char_traits_char__* r1248 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1247);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp31249;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp41250;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1251 = std__vector_int__std__allocator_int_____begin(&myvector1173);
      ref_tmp31249 = r1251;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1252 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it1175, &ref_tmp31249);
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1254 = std__vector_int__std__allocator_int_____end(&myvector1173);
        ref_tmp41250 = r1254;
        _Bool r1255 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it1175, &ref_tmp41250);
        _Bool u1256 = !r1255;
        if (!u1256) break;
        char* cast1257 = (char*)&(_str_7);
        struct std__basic_ostream_char__std__char_traits_char__* r1258 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1257);
        int* r1259 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it1175);
        int t1260 = *r1259;
        struct std__basic_ostream_char__std__char_traits_char__* r1261 = std__ostream__operator__(r1258, t1260);
      for_step1253: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1262 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&it1175);
      }
    struct std__basic_ostream_char__std__char_traits_char__* r1263 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c1264 = 0;
    __retval1171 = c1264;
    int t1265 = __retval1171;
    int ret_val1266 = t1265;
    {
      std__vector_int__std__allocator_int______vector(&myvector1173);
    }
    return ret_val1266;
  int t1267 = __retval1171;
  return t1267;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v1268) {
bb1269:
  struct std____new_allocator_int_* this1270;
  this1270 = v1268;
  struct std____new_allocator_int_* t1271 = this1270;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1272, struct std__allocator_int_* v1273) {
bb1274:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1275;
  struct std__allocator_int_* __a1276;
  this1275 = v1272;
  __a1276 = v1273;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1277 = this1275;
  struct std__allocator_int_* base1278 = (struct std__allocator_int_*)((char *)t1277 + 0);
  struct std__allocator_int_* t1279 = __a1276;
  std__allocator_int___allocator(base1278, t1279);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1280 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t1277 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base1280);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1281) {
bb1282:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1283;
  this1283 = v1281;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1284 = this1283;
  {
    struct std__allocator_int_* base1285 = (struct std__allocator_int_*)((char *)t1284 + 0);
    std__allocator_int____allocator(base1285);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1286, struct std__allocator_int_* v1287) {
bb1288:
  struct std___Vector_base_int__std__allocator_int__* this1289;
  struct std__allocator_int_* __a1290;
  this1289 = v1286;
  __a1290 = v1287;
  struct std___Vector_base_int__std__allocator_int__* t1291 = this1289;
  struct std__allocator_int_* t1292 = __a1290;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t1291->_M_impl, t1292);
  return;
}

// function: _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_
long _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_(struct std__ranges____distance_fn* v1293, int** v1294, int* v1295) {
bb1296:
  struct std__ranges____distance_fn* this1297;
  int** __first1298;
  int* __last1299;
  long __retval1300;
  this1297 = v1293;
  __first1298 = v1294;
  __last1299 = v1295;
  struct std__ranges____distance_fn* t1301 = this1297;
  int* t1302 = __last1299;
  int** t1303 = __first1298;
  int* t1304 = *t1303;
  long diff1305 = t1302 - t1304;
  __retval1300 = diff1305;
  long t1306 = __retval1300;
  return t1306;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1307:
  _Bool __retval1308;
    _Bool c1309 = 0;
    __retval1308 = c1309;
    _Bool t1310 = __retval1308;
    return t1310;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v1311) {
bb1312:
  struct std____new_allocator_int_* this1313;
  unsigned long __retval1314;
  this1313 = v1311;
  struct std____new_allocator_int_* t1315 = this1313;
  unsigned long c1316 = 9223372036854775807;
  unsigned long c1317 = 4;
  unsigned long b1318 = c1316 / c1317;
  __retval1314 = b1318;
  unsigned long t1319 = __retval1314;
  return t1319;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v1320, unsigned long v1321, void* v1322) {
bb1323:
  struct std____new_allocator_int_* this1324;
  unsigned long __n1325;
  void* unnamed1326;
  int* __retval1327;
  this1324 = v1320;
  __n1325 = v1321;
  unnamed1326 = v1322;
  struct std____new_allocator_int_* t1328 = this1324;
    unsigned long t1329 = __n1325;
    unsigned long r1330 = std____new_allocator_int____M_max_size___const(t1328);
    _Bool c1331 = ((t1329 > r1330)) ? 1 : 0;
    if (c1331) {
        unsigned long t1332 = __n1325;
        unsigned long c1333 = -1;
        unsigned long c1334 = 4;
        unsigned long b1335 = c1333 / c1334;
        _Bool c1336 = ((t1332 > b1335)) ? 1 : 0;
        if (c1336) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c1337 = 4;
    unsigned long c1338 = 16;
    _Bool c1339 = ((c1337 > c1338)) ? 1 : 0;
    if (c1339) {
      unsigned long __al1340;
      unsigned long c1341 = 4;
      __al1340 = c1341;
      unsigned long t1342 = __n1325;
      unsigned long c1343 = 4;
      unsigned long b1344 = t1342 * c1343;
      unsigned long t1345 = __al1340;
      void* r1346 = operator_new_2(b1344, t1345);
      int* cast1347 = (int*)r1346;
      __retval1327 = cast1347;
      int* t1348 = __retval1327;
      return t1348;
    }
  unsigned long t1349 = __n1325;
  unsigned long c1350 = 4;
  unsigned long b1351 = t1349 * c1350;
  void* r1352 = operator_new(b1351);
  int* cast1353 = (int*)r1352;
  __retval1327 = cast1353;
  int* t1354 = __retval1327;
  return t1354;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v1355, unsigned long v1356) {
bb1357:
  struct std__allocator_int_* this1358;
  unsigned long __n1359;
  int* __retval1360;
  this1358 = v1355;
  __n1359 = v1356;
  struct std__allocator_int_* t1361 = this1358;
    _Bool r1362 = std____is_constant_evaluated();
    if (r1362) {
        unsigned long t1363 = __n1359;
        unsigned long c1364 = 4;
        unsigned long ovr1365;
        _Bool ovf1366 = __builtin_mul_overflow(t1363, c1364, &ovr1365);
        __n1359 = ovr1365;
        if (ovf1366) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1367 = __n1359;
      void* r1368 = operator_new(t1367);
      int* cast1369 = (int*)r1368;
      __retval1360 = cast1369;
      int* t1370 = __retval1360;
      return t1370;
    }
  struct std____new_allocator_int_* base1371 = (struct std____new_allocator_int_*)((char *)t1361 + 0);
  unsigned long t1372 = __n1359;
  void* c1373 = ((void*)0);
  int* r1374 = std____new_allocator_int___allocate(base1371, t1372, c1373);
  __retval1360 = r1374;
  int* t1375 = __retval1360;
  return t1375;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v1376, unsigned long v1377) {
bb1378:
  struct std__allocator_int_* __a1379;
  unsigned long __n1380;
  int* __retval1381;
  __a1379 = v1376;
  __n1380 = v1377;
  struct std__allocator_int_* t1382 = __a1379;
  unsigned long t1383 = __n1380;
  int* r1384 = std__allocator_int___allocate(t1382, t1383);
  __retval1381 = r1384;
  int* t1385 = __retval1381;
  return t1385;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v1386, unsigned long v1387) {
bb1388:
  struct std___Vector_base_int__std__allocator_int__* this1389;
  unsigned long __n1390;
  int* __retval1391;
  this1389 = v1386;
  __n1390 = v1387;
  struct std___Vector_base_int__std__allocator_int__* t1392 = this1389;
  unsigned long t1393 = __n1390;
  unsigned long c1394 = 0;
  _Bool c1395 = ((t1393 != c1394)) ? 1 : 0;
  int* ternary1396;
  if (c1395) {
    struct std__allocator_int_* base1397 = (struct std__allocator_int_*)((char *)&(t1392->_M_impl) + 0);
    unsigned long t1398 = __n1390;
    int* r1399 = std__allocator_traits_std__allocator_int_____allocate(base1397, t1398);
    ternary1396 = (int*)r1399;
  } else {
    int* c1400 = ((void*)0);
    ternary1396 = (int*)c1400;
  }
  __retval1391 = ternary1396;
  int* t1401 = __retval1391;
  return t1401;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v1402, unsigned long* v1403) {
bb1404:
  unsigned long* __a1405;
  unsigned long* __b1406;
  unsigned long* __retval1407;
  __a1405 = v1402;
  __b1406 = v1403;
    unsigned long* t1408 = __b1406;
    unsigned long t1409 = *t1408;
    unsigned long* t1410 = __a1405;
    unsigned long t1411 = *t1410;
    _Bool c1412 = ((t1409 < t1411)) ? 1 : 0;
    if (c1412) {
      unsigned long* t1413 = __b1406;
      __retval1407 = t1413;
      unsigned long* t1414 = __retval1407;
      return t1414;
    }
  unsigned long* t1415 = __a1405;
  __retval1407 = t1415;
  unsigned long* t1416 = __retval1407;
  return t1416;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v1417) {
bb1418:
  struct std__allocator_int_* __a1419;
  unsigned long __retval1420;
  unsigned long __diffmax1421;
  unsigned long __allocmax1422;
  __a1419 = v1417;
  unsigned long c1423 = 2305843009213693951;
  __diffmax1421 = c1423;
  unsigned long c1424 = 4611686018427387903;
  __allocmax1422 = c1424;
  unsigned long* r1425 = unsigned_long_const__std__min_unsigned_long_(&__diffmax1421, &__allocmax1422);
  unsigned long t1426 = *r1425;
  __retval1420 = t1426;
  unsigned long t1427 = __retval1420;
  return t1427;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v1428, struct std__allocator_int_* v1429) {
bb1430:
  struct std__allocator_int_* this1431;
  struct std__allocator_int_* __a1432;
  this1431 = v1428;
  __a1432 = v1429;
  struct std__allocator_int_* t1433 = this1431;
  struct std____new_allocator_int_* base1434 = (struct std____new_allocator_int_*)((char *)t1433 + 0);
  struct std__allocator_int_* t1435 = __a1432;
  struct std____new_allocator_int_* base1436 = (struct std____new_allocator_int_*)((char *)t1435 + 0);
  std____new_allocator_int_____new_allocator(base1434, base1436);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v1437, struct std__allocator_int_* v1438) {
bb1439:
  unsigned long __n1440;
  struct std__allocator_int_* __a1441;
  unsigned long __retval1442;
  __n1440 = v1437;
  __a1441 = v1438;
    struct std__allocator_int_ ref_tmp01443;
    _Bool tmp_exprcleanup1444;
    unsigned long t1445 = __n1440;
    struct std__allocator_int_* t1446 = __a1441;
    std__allocator_int___allocator(&ref_tmp01443, t1446);
      unsigned long r1447 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp01443);
      _Bool c1448 = ((t1445 > r1447)) ? 1 : 0;
      tmp_exprcleanup1444 = c1448;
    {
      std__allocator_int____allocator(&ref_tmp01443);
    }
    _Bool t1449 = tmp_exprcleanup1444;
    if (t1449) {
      char* cast1450 = (char*)&(_str_8);
      std____throw_length_error(cast1450);
    }
  unsigned long t1451 = __n1440;
  __retval1442 = t1451;
  unsigned long t1452 = __retval1442;
  return t1452;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v1453) {
bb1454:
  struct std___Vector_base_int__std__allocator_int__* this1455;
  struct std__allocator_int_* __retval1456;
  this1455 = v1453;
  struct std___Vector_base_int__std__allocator_int__* t1457 = this1455;
  struct std__allocator_int_* base1458 = (struct std__allocator_int_*)((char *)&(t1457->_M_impl) + 0);
  __retval1456 = base1458;
  struct std__allocator_int_* t1459 = __retval1456;
  return t1459;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1460:
  _Bool __retval1461;
    _Bool c1462 = 0;
    __retval1461 = c1462;
    _Bool t1463 = __retval1461;
    return t1463;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1464, int** v1465) {
bb1466:
  struct std___UninitDestroyGuard_int____void_* this1467;
  int** __first1468;
  this1467 = v1464;
  __first1468 = v1465;
  struct std___UninitDestroyGuard_int____void_* t1469 = this1467;
  int** t1470 = __first1468;
  int* t1471 = *t1470;
  t1469->_M_first = t1471;
  int** t1472 = __first1468;
  t1469->_M_cur = t1472;
  return;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v1473, int* v1474) {
bb1475:
  int* __location1476;
  int* __args1477;
  int* __retval1478;
  void* __loc1479;
  __location1476 = v1473;
  __args1477 = v1474;
  int* t1480 = __location1476;
  void* cast1481 = (void*)t1480;
  __loc1479 = cast1481;
    void* t1482 = __loc1479;
    int* cast1483 = (int*)t1482;
    int* t1484 = __args1477;
    int t1485 = *t1484;
    *cast1483 = t1485;
    __retval1478 = cast1483;
    int* t1486 = __retval1478;
    return t1486;
  abort();
}

// function: _ZSt10_ConstructIiJRiEEvPT_DpOT0_
void void_std___Construct_int__int__(int* v1487, int* v1488) {
bb1489:
  int* __p1490;
  int* __args1491;
  __p1490 = v1487;
  __args1491 = v1488;
    _Bool r1492 = std____is_constant_evaluated();
    if (r1492) {
      int* t1493 = __p1490;
      int* t1494 = __args1491;
      int* r1495 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t1493, t1494);
      return;
    }
  int* t1496 = __p1490;
  void* cast1497 = (void*)t1496;
  int* cast1498 = (int*)cast1497;
  int* t1499 = __args1491;
  int t1500 = *t1499;
  *cast1498 = t1500;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v1501) {
bb1502:
  struct std___UninitDestroyGuard_int____void_* this1503;
  this1503 = v1501;
  struct std___UninitDestroyGuard_int____void_* t1504 = this1503;
  int** c1505 = ((void*)0);
  t1504->_M_cur = c1505;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1506) {
bb1507:
  struct std___UninitDestroyGuard_int____void_* this1508;
  this1508 = v1506;
  struct std___UninitDestroyGuard_int____void_* t1509 = this1508;
    int** t1510 = t1509->_M_cur;
    int** c1511 = ((void*)0);
    _Bool c1512 = ((t1510 != c1511)) ? 1 : 0;
    if (c1512) {
      int* t1513 = t1509->_M_first;
      int** t1514 = t1509->_M_cur;
      int* t1515 = *t1514;
      void_std___Destroy_int__(t1513, t1515);
    }
  return;
}

// function: _ZSt16__do_uninit_copyIPiS0_S0_ET1_T_T0_S1_
int* int__std____do_uninit_copy_int___int___int__(int* v1516, int* v1517, int* v1518) {
bb1519:
  int* __first1520;
  int* __last1521;
  int* __result1522;
  int* __retval1523;
  struct std___UninitDestroyGuard_int____void_ __guard1524;
  __first1520 = v1516;
  __last1521 = v1517;
  __result1522 = v1518;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard1524, &__result1522);
      while (1) {
        int* t1526 = __first1520;
        int* t1527 = __last1521;
        _Bool c1528 = ((t1526 != t1527)) ? 1 : 0;
        if (!c1528) break;
        int* t1529 = __result1522;
        int* t1530 = __first1520;
        void_std___Construct_int__int__(t1529, t1530);
      for_step1525: ;
        int* t1531 = __first1520;
        int c1532 = 1;
        int* ptr1533 = &(t1531)[c1532];
        __first1520 = ptr1533;
        int* t1534 = __result1522;
        int c1535 = 1;
        int* ptr1536 = &(t1534)[c1535];
        __result1522 = ptr1536;
      }
    std___UninitDestroyGuard_int___void___release(&__guard1524);
    int* t1537 = __result1522;
    __retval1523 = t1537;
    int* t1538 = __retval1523;
    int* ret_val1539 = t1538;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1524);
    }
    return ret_val1539;
  abort();
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v1540) {
bb1541:
  int* __it1542;
  int* __retval1543;
  __it1542 = v1540;
  int* t1544 = __it1542;
  __retval1543 = t1544;
  int* t1545 = __retval1543;
  return t1545;
}

// function: _ZSt18uninitialized_copyIPiS0_ET0_T_S2_S1_
int* int__std__uninitialized_copy_int___int__(int* v1546, int* v1547, int* v1548) {
bb1549:
  int* __first1550;
  int* __last1551;
  int* __result1552;
  int* __retval1553;
  __first1550 = v1546;
  __last1551 = v1547;
  __result1552 = v1548;
      long __n1554;
      int* t1555 = __last1551;
      int* t1556 = __first1550;
      long diff1557 = t1555 - t1556;
      __n1554 = diff1557;
        long t1558 = __n1554;
        long c1559 = 0;
        _Bool c1560 = ((t1558 > c1559)) ? 1 : 0;
        if (c1560) {
          int* t1561 = __result1552;
          int* r1562 = int__std____niter_base_int__(t1561);
          void* cast1563 = (void*)r1562;
          int* t1564 = __first1550;
          int* r1565 = int__std____niter_base_int__(t1564);
          void* cast1566 = (void*)r1565;
          long t1567 = __n1554;
          unsigned long cast1568 = (unsigned long)t1567;
          unsigned long c1569 = 4;
          unsigned long b1570 = cast1568 * c1569;
          void* r1571 = memcpy(cast1563, cast1566, b1570);
          long t1572 = __n1554;
          int* t1573 = __result1552;
          int* ptr1574 = &(t1573)[t1572];
          __result1552 = ptr1574;
        }
      int* t1575 = __result1552;
      __retval1553 = t1575;
      int* t1576 = __retval1553;
      return t1576;
  abort();
}

// function: _ZSt22__uninitialized_copy_aIPiS0_S0_iET1_T_T0_S1_RSaIT2_E
int* int__std____uninitialized_copy_a_int___int___int___int_(int* v1577, int* v1578, int* v1579, struct std__allocator_int_* v1580) {
bb1581:
  int* __first1582;
  int* __last1583;
  int* __result1584;
  struct std__allocator_int_* unnamed1585;
  int* __retval1586;
  __first1582 = v1577;
  __last1583 = v1578;
  __result1584 = v1579;
  unnamed1585 = v1580;
    _Bool r1587 = std__is_constant_evaluated();
    if (r1587) {
      int* t1588 = __first1582;
      int* t1589 = __last1583;
      int* t1590 = __result1584;
      int* r1591 = int__std____do_uninit_copy_int___int___int__(t1588, t1589, t1590);
      __retval1586 = r1591;
      int* t1592 = __retval1586;
      return t1592;
    }
    int* t1593 = __first1582;
    int* t1594 = __last1583;
    int* t1595 = __result1584;
    int* r1596 = int__std__uninitialized_copy_int___int__(t1593, t1594, t1595);
    __retval1586 = r1596;
    int* t1597 = __retval1586;
    return t1597;
  abort();
}

// function: _ZNSt6vectorIiSaIiEE21_M_range_initialize_nIPiS3_EEvT_T0_m
void void_std__vector_int__std__allocator_int______M_range_initialize_n_int___int__(struct std__vector_int__std__allocator_int__* v1598, int* v1599, int* v1600, unsigned long v1601) {
bb1602:
  struct std__vector_int__std__allocator_int__* this1603;
  int* __first1604;
  int* __last1605;
  unsigned long __n1606;
  int* __start1607;
  this1603 = v1598;
  __first1604 = v1599;
  __last1605 = v1600;
  __n1606 = v1601;
  struct std__vector_int__std__allocator_int__* t1608 = this1603;
  struct std___Vector_base_int__std__allocator_int__* base1609 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1608 + 0);
  unsigned long t1610 = __n1606;
  struct std___Vector_base_int__std__allocator_int__* base1611 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1608 + 0);
  struct std__allocator_int_* r1612 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1611);
  unsigned long r1613 = std__vector_int__std__allocator_int______S_check_init_len(t1610, r1612);
  int* r1614 = std___Vector_base_int__std__allocator_int______M_allocate(base1609, r1613);
  __start1607 = r1614;
  int* t1615 = __start1607;
  struct std___Vector_base_int__std__allocator_int__* base1616 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1608 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1617 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1616->_M_impl) + 0);
  base1617->_M_finish = t1615;
  struct std___Vector_base_int__std__allocator_int__* base1618 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1608 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1619 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1618->_M_impl) + 0);
  base1619->_M_start = t1615;
  int* t1620 = __start1607;
  unsigned long t1621 = __n1606;
  int* ptr1622 = &(t1620)[t1621];
  struct std___Vector_base_int__std__allocator_int__* base1623 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1608 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1624 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1623->_M_impl) + 0);
  base1624->_M_end_of_storage = ptr1622;
  int* t1625 = __first1604;
  int* t1626 = __last1605;
  int* t1627 = __start1607;
  struct std___Vector_base_int__std__allocator_int__* base1628 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1608 + 0);
  struct std__allocator_int_* r1629 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1628);
  int* r1630 = int__std____uninitialized_copy_a_int___int___int___int_(t1625, t1626, t1627, r1629);
  struct std___Vector_base_int__std__allocator_int__* base1631 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1608 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1632 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1631->_M_impl) + 0);
  base1632->_M_finish = r1630;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1633, int* v1634, unsigned long v1635) {
bb1636:
  struct std____new_allocator_int_* this1637;
  int* __p1638;
  unsigned long __n1639;
  this1637 = v1633;
  __p1638 = v1634;
  __n1639 = v1635;
  struct std____new_allocator_int_* t1640 = this1637;
    unsigned long c1641 = 4;
    unsigned long c1642 = 16;
    _Bool c1643 = ((c1641 > c1642)) ? 1 : 0;
    if (c1643) {
      int* t1644 = __p1638;
      void* cast1645 = (void*)t1644;
      unsigned long t1646 = __n1639;
      unsigned long c1647 = 4;
      unsigned long b1648 = t1646 * c1647;
      unsigned long c1649 = 4;
      operator_delete_3(cast1645, b1648, c1649);
      return;
    }
  int* t1650 = __p1638;
  void* cast1651 = (void*)t1650;
  unsigned long t1652 = __n1639;
  unsigned long c1653 = 4;
  unsigned long b1654 = t1652 * c1653;
  operator_delete_2(cast1651, b1654);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1655, int* v1656, unsigned long v1657) {
bb1658:
  struct std__allocator_int_* this1659;
  int* __p1660;
  unsigned long __n1661;
  this1659 = v1655;
  __p1660 = v1656;
  __n1661 = v1657;
  struct std__allocator_int_* t1662 = this1659;
    _Bool r1663 = std____is_constant_evaluated();
    if (r1663) {
      int* t1664 = __p1660;
      void* cast1665 = (void*)t1664;
      operator_delete(cast1665);
      return;
    }
  struct std____new_allocator_int_* base1666 = (struct std____new_allocator_int_*)((char *)t1662 + 0);
  int* t1667 = __p1660;
  unsigned long t1668 = __n1661;
  std____new_allocator_int___deallocate(base1666, t1667, t1668);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1669, int* v1670, unsigned long v1671) {
bb1672:
  struct std__allocator_int_* __a1673;
  int* __p1674;
  unsigned long __n1675;
  __a1673 = v1669;
  __p1674 = v1670;
  __n1675 = v1671;
  struct std__allocator_int_* t1676 = __a1673;
  int* t1677 = __p1674;
  unsigned long t1678 = __n1675;
  std__allocator_int___deallocate(t1676, t1677, t1678);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v1679, int* v1680, unsigned long v1681) {
bb1682:
  struct std___Vector_base_int__std__allocator_int__* this1683;
  int* __p1684;
  unsigned long __n1685;
  this1683 = v1679;
  __p1684 = v1680;
  __n1685 = v1681;
  struct std___Vector_base_int__std__allocator_int__* t1686 = this1683;
    int* t1687 = __p1684;
    _Bool cast1688 = (_Bool)t1687;
    if (cast1688) {
      struct std__allocator_int_* base1689 = (struct std__allocator_int_*)((char *)&(t1686->_M_impl) + 0);
      int* t1690 = __p1684;
      unsigned long t1691 = __n1685;
      std__allocator_traits_std__allocator_int_____deallocate(base1689, t1690, t1691);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1692) {
bb1693:
  struct std___Vector_base_int__std__allocator_int__* this1694;
  this1694 = v1692;
  struct std___Vector_base_int__std__allocator_int__* t1695 = this1694;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1696 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1695->_M_impl) + 0);
    int* t1697 = base1696->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1698 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1695->_M_impl) + 0);
    int* t1699 = base1698->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1700 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1695->_M_impl) + 0);
    int* t1701 = base1700->_M_start;
    long diff1702 = t1699 - t1701;
    unsigned long cast1703 = (unsigned long)diff1702;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1695, t1697, cast1703);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1695->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1704, struct std____new_allocator_int_* v1705) {
bb1706:
  struct std____new_allocator_int_* this1707;
  struct std____new_allocator_int_* unnamed1708;
  this1707 = v1704;
  unnamed1708 = v1705;
  struct std____new_allocator_int_* t1709 = this1707;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1710) {
bb1711:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1712;
  this1712 = v1710;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1713 = this1712;
  int* c1714 = ((void*)0);
  t1713->_M_start = c1714;
  int* c1715 = ((void*)0);
  t1713->_M_finish = c1715;
  int* c1716 = ((void*)0);
  t1713->_M_end_of_storage = c1716;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1717) {
bb1718:
  int* __location1719;
  __location1719 = v1717;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1720, int* v1721) {
bb1722:
  int* __first1723;
  int* __last1724;
  __first1723 = v1720;
  __last1724 = v1721;
      _Bool r1725 = std____is_constant_evaluated();
      if (r1725) {
          while (1) {
            int* t1727 = __first1723;
            int* t1728 = __last1724;
            _Bool c1729 = ((t1727 != t1728)) ? 1 : 0;
            if (!c1729) break;
            int* t1730 = __first1723;
            void_std__destroy_at_int_(t1730);
          for_step1726: ;
            int* t1731 = __first1723;
            int c1732 = 1;
            int* ptr1733 = &(t1731)[c1732];
            __first1723 = ptr1733;
          }
      }
  return;
}

