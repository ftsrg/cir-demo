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
struct std___Setw { int _M_n; };
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
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long _M_width; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_istream_char__std__char_traits_char__ { void* __field0; long __field1; struct std__basic_ios_char__std__char_traits_char__ __field2; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[29] = "Size of vector integers1 is ";
char _str_1[31] = "\nvector after initialization:\n";
char _str_2[30] = "\nSize of vector integers2 is ";
char _str_3[21] = "\nInput 17 integers:\n";
char _str_4[36] = "\nAfter input, the vectors contain:\n";
char _str_5[12] = "integers1:\n";
char _str_6[12] = "integers2:\n";
char _str_7[37] = "\nEvaluating: integers1 != integers2\n";
char _str_8[39] = "integers1 and integers2 are not equal\n";
char _str_9[30] = "\nSize of vector integers3 is ";
char _str_10[36] = "\nAssigning integers2 to integers1:\n";
char _str_11[37] = "\nEvaluating: integers1 == integers2\n";
char _str_12[35] = "integers1 and integers2 are equal\n";
char _str_13[18] = "\nintegers1[5] is ";
char _str_14[34] = "\n\nAssigning 1000 to integers1[5]\n";
char _str_15[46] = "\nAttempt to assign 1000 to integers1.at( 15 )";
extern struct std__basic_istream_char__std__char_traits_char__ _ZSt3cin __attribute__((aligned(8)));
_Bool _ZNSt17integral_constantIbLb0EE5valueE;
_Bool _ZNSt17integral_constantIbLb1EE5valueE;
char _str_16[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_17[19] = "__n < this->size()";
char _str_18[74] = "vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)";
char __PRETTY_FUNCTION____ZNKSt6vectorIiSaIiEEixEm[104] = "const_reference std::vector<int>::operator[](size_type) const [_Tp = int, _Alloc = std::allocator<int>]";
void std__vector_int__std__allocator_int_____vector_2(struct std__vector_int__std__allocator_int__* p0);
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
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_unsigned_long_(struct std__basic_ostream_char__std__char_traits_char__* p0, unsigned long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___2(struct std__basic_ostream_char__std__char_traits_char__* p0, unsigned long p1);
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
long std__ios_base__width(struct std__ios_base* p0, long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0, struct std___Setw p1);
struct std___Setw std__setw(int p0);
int* std__vector_int__std__allocator_int_____operator___unsigned_long__const(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
void outputVector(struct std__vector_int__std__allocator_int__* p0);
extern struct std__basic_istream_char__std__char_traits_char__* std__istream__operator__(struct std__basic_istream_char__std__char_traits_char__* p0, int* p1);
void inputVector(struct std__vector_int__std__allocator_int__* p0);
_Bool std__is_constant_evaluated();
extern int memcmp(void* p0, void* p1, unsigned long p2);
int int_std____memcmp_int__int_(int* p0, int* p1, unsigned long p2);
_Bool bool_std____equal_true___equal_int_(int* p0, int* p1, int* p2);
_Bool bool_std____equal_aux1_int_const___int_const__(int* p0, int* p1, int* p2);
int** __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0);
int* int_const__std____niter_base_int_const___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p0);
_Bool bool_std____equal_aux___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p2);
_Bool bool_std__equal___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p2);
void __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin___const(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end___const(struct std__vector_int__std__allocator_int__* p0);
_Bool bool_std__operator___int__std__allocator_int___(struct std__vector_int__std__allocator_int__* p0, struct std__vector_int__std__allocator_int__* p1);
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0, struct std__vector_int__std__allocator_int__* p1);
_Bool __gnu_cxx____alloc_traits_std__allocator_int___int____S_propagate_on_copy_assign();
_Bool __gnu_cxx____alloc_traits_std__allocator_int___int____S_always_equal();
_Bool std__operator__(struct std__allocator_int_* p0, struct std__allocator_int_* p1);
void std__vector_int__std__allocator_int______M_erase_at_end(struct std__vector_int__std__allocator_int__* p0, int* p1);
void std__vector_int__std__allocator_int_____clear(struct std__vector_int__std__allocator_int__* p0);
void void_std____alloc_on_copy_std__allocator_int___(struct std__allocator_int_* p0, struct std__allocator_int_* p1);
unsigned long std__vector_int__std__allocator_int_____capacity___const(struct std__vector_int__std__allocator_int__* p0);
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* p0, int* p1, unsigned long p2, struct std___Vector_base_int__std__allocator_int__* p3);
int* std__vector_int__std__allocator_int______Guard_alloc___M_release(struct std__vector_int__std__allocator_int_____Guard_alloc* p0);
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* p0);
int* int__std__vector_int__std__allocator_int______M_allocate_and_copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p2, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p3);
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
struct std__vector_int__std__allocator_int__* std__vector_int__std__allocator_int_____operator_(struct std__vector_int__std__allocator_int__* p0, struct std__vector_int__std__allocator_int__* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
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
extern void std____throw_out_of_range_fmt(char* p0, ...);
void std__vector_int__std__allocator_int______M_range_check_unsigned_long__const(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
int* std__vector_int__std__allocator_int_____at(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* p0);
int main();
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0);
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0);
void std___Vector_base_int__std__allocator_int______Vector_base_2(struct std___Vector_base_int__std__allocator_int__* p0);
_Bool std____is_constant_evaluated();
extern void *malloc(unsigned long);
extern void free(void*);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_int___deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* p0, int* p1, unsigned long p2);
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* p0);
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* p0);
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p0);
void std__allocator_int___allocator(struct std__allocator_int_* p0, struct std__allocator_int_* p1);
struct std__allocator_int_ std__allocator_traits_std__allocator_int_____select_on_container_copy_construction(struct std__allocator_int_* p0);
struct std__allocator_int_ __gnu_cxx____alloc_traits_std__allocator_int___int____S_select_on_copy(struct std__allocator_int_* p0);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* p0);
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0, struct std__allocator_int_* p1);
extern void std____throw_bad_array_new_length();
void* operator_new(unsigned long p0) { return malloc(p0); }
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* p0);
extern void std____throw_bad_alloc();
void* operator_new_2(unsigned long p0, unsigned long p1) { return malloc(p0); }
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* p0, unsigned long p1, void* p2);
int* std__allocator_int___allocate(struct std__allocator_int_* p0, unsigned long p1);
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* p0, unsigned long p1);
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* p0, unsigned long p1);
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* p0, unsigned long p1);
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* p0, unsigned long p1, struct std__allocator_int_* p2);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* p0, int** p1);
_Bool _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p1);
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* p0, int* p1);
void void_std___Construct_int__int_const__(int* p0, int* p1);
int* __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0);
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* p0);
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* p0);
int* int__std____do_uninit_copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p1, int* p2);
long __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int_const___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p1);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
int* int__std____niter_base_int__(int* p0);
int* int__std__uninitialized_copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p1, int* p2);
int* int__std____uninitialized_copy_a___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______int___int_(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ p1, int* p2, struct std__allocator_int_* p3);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* p0);
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* p0, struct std____new_allocator_int_* p1);
void void_std__destroy_at_int_(int* p0);
void void_std___Destroy_int__(int* p0, int* p1);

// function: _ZNSt6vectorIiSaIiEEC2Ev
void std__vector_int__std__allocator_int_____vector_2(struct std__vector_int__std__allocator_int__* v0) {
bb1:
  struct std__vector_int__std__allocator_int__* this2;
  this2 = v0;
  struct std__vector_int__std__allocator_int__* t3 = this2;
  struct std___Vector_base_int__std__allocator_int__* base4 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t3 + 0);
  std___Vector_base_int__std__allocator_int______Vector_base_2(base4);
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v5, int v6) {
bb7:
  int __a8;
  int __b9;
  int __retval10;
  __a8 = v5;
  __b9 = v6;
  int t11 = __a8;
  int t12 = __b9;
  int b13 = t11 | t12;
  __retval10 = b13;
  int t14 = __retval10;
  return t14;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v15) {
bb16:
  struct std__basic_ios_char__std__char_traits_char__* this17;
  int __retval18;
  this17 = v15;
  struct std__basic_ios_char__std__char_traits_char__* t19 = this17;
  struct std__ios_base* base20 = (struct std__ios_base*)((char *)t19 + 0);
  int t21 = base20->_M_streambuf_state;
  __retval18 = t21;
  int t22 = __retval18;
  return t22;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v23, int v24) {
bb25:
  struct std__basic_ios_char__std__char_traits_char__* this26;
  int __state27;
  this26 = v23;
  __state27 = v24;
  struct std__basic_ios_char__std__char_traits_char__* t28 = this26;
  int r29 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t28);
  int t30 = __state27;
  int r31 = std__operator_(r29, t30);
  std__basic_ios_char__std__char_traits_char_____clear(t28, r31);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v32, char* v33) {
bb34:
  char* __c135;
  char* __c236;
  _Bool __retval37;
  __c135 = v32;
  __c236 = v33;
  char* t38 = __c135;
  char t39 = *t38;
  int cast40 = (int)t39;
  char* t41 = __c236;
  char t42 = *t41;
  int cast43 = (int)t42;
  _Bool c44 = ((cast40 == cast43)) ? 1 : 0;
  __retval37 = c44;
  _Bool t45 = __retval37;
  return t45;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v46) {
bb47:
  char* __p48;
  unsigned long __retval49;
  unsigned long __i50;
  __p48 = v46;
  unsigned long c51 = 0;
  __i50 = c51;
    char ref_tmp052;
    while (1) {
      unsigned long t53 = __i50;
      char* t54 = __p48;
      char* ptr55 = &(t54)[t53];
      char c56 = 0;
      ref_tmp052 = c56;
      _Bool r57 = __gnu_cxx__char_traits_char___eq(ptr55, &ref_tmp052);
      _Bool u58 = !r57;
      if (!u58) break;
      unsigned long t59 = __i50;
      unsigned long u60 = t59 + 1;
      __i50 = u60;
    }
  unsigned long t61 = __i50;
  __retval49 = t61;
  unsigned long t62 = __retval49;
  return t62;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v63) {
bb64:
  char* __s65;
  unsigned long __retval66;
  __s65 = v63;
    _Bool r67 = std____is_constant_evaluated();
    if (r67) {
      char* t68 = __s65;
      unsigned long r69 = __gnu_cxx__char_traits_char___length(t68);
      __retval66 = r69;
      unsigned long t70 = __retval66;
      return t70;
    }
  char* t71 = __s65;
  unsigned long r72 = strlen(t71);
  __retval66 = r72;
  unsigned long t73 = __retval66;
  return t73;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v74, char* v75) {
bb76:
  struct std__basic_ostream_char__std__char_traits_char__* __out77;
  char* __s78;
  struct std__basic_ostream_char__std__char_traits_char__* __retval79;
  __out77 = v74;
  __s78 = v75;
    char* t80 = __s78;
    _Bool cast81 = (_Bool)t80;
    _Bool u82 = !cast81;
    if (u82) {
      struct std__basic_ostream_char__std__char_traits_char__* t83 = __out77;
      void** v84 = (void**)t83;
      void* v85 = *((void**)v84);
      unsigned char* cast86 = (unsigned char*)v85;
      long c87 = -24;
      unsigned char* ptr88 = &(cast86)[c87];
      long* cast89 = (long*)ptr88;
      long t90 = *cast89;
      unsigned char* cast91 = (unsigned char*)t83;
      unsigned char* ptr92 = &(cast91)[t90];
      struct std__basic_ostream_char__std__char_traits_char__* cast93 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr92;
      struct std__basic_ios_char__std__char_traits_char__* cast94 = (struct std__basic_ios_char__std__char_traits_char__*)cast93;
      int t95 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast94, t95);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t96 = __out77;
      char* t97 = __s78;
      char* t98 = __s78;
      unsigned long r99 = std__char_traits_char___length(t98);
      long cast100 = (long)r99;
      struct std__basic_ostream_char__std__char_traits_char__* r101 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t96, t97, cast100);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t102 = __out77;
  __retval79 = t102;
  struct std__basic_ostream_char__std__char_traits_char__* t103 = __retval79;
  return t103;
}

// function: _ZNSolsEm
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___2(struct std__basic_ostream_char__std__char_traits_char__* v104, unsigned long v105) {
bb106:
  struct std__basic_ostream_char__std__char_traits_char__* this107;
  unsigned long __n108;
  struct std__basic_ostream_char__std__char_traits_char__* __retval109;
  this107 = v104;
  __n108 = v105;
  struct std__basic_ostream_char__std__char_traits_char__* t110 = this107;
  unsigned long t111 = __n108;
  struct std__basic_ostream_char__std__char_traits_char__* r112 = std__ostream__std__ostream___M_insert_unsigned_long_(t110, t111);
  __retval109 = r112;
  struct std__basic_ostream_char__std__char_traits_char__* t113 = __retval109;
  return t113;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v114) {
bb115:
  struct std__vector_int__std__allocator_int__* this116;
  unsigned long __retval117;
  long __dif118;
  this116 = v114;
  struct std__vector_int__std__allocator_int__* t119 = this116;
  struct std___Vector_base_int__std__allocator_int__* base120 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t119 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base121 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base120->_M_impl) + 0);
  int* t122 = base121->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base123 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t119 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base124 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base123->_M_impl) + 0);
  int* t125 = base124->_M_start;
  long diff126 = t122 - t125;
  __dif118 = diff126;
    long t127 = __dif118;
    long c128 = 0;
    _Bool c129 = ((t127 < c128)) ? 1 : 0;
    if (c129) {
      __builtin_unreachable();
    }
  long t130 = __dif118;
  unsigned long cast131 = (unsigned long)t130;
  __retval117 = cast131;
  unsigned long t132 = __retval117;
  return t132;
}

// function: _ZNSt8ios_base5widthEl
long std__ios_base__width(struct std__ios_base* v133, long v134) {
bb135:
  struct std__ios_base* this136;
  long __wide137;
  long __retval138;
  long __old139;
  this136 = v133;
  __wide137 = v134;
  struct std__ios_base* t140 = this136;
  long t141 = t140->_M_width;
  __old139 = t141;
  long t142 = __wide137;
  t140->_M_width = t142;
  long t143 = __old139;
  __retval138 = t143;
  long t144 = __retval138;
  return t144;
}

// function: _ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St5_Setw
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v145, struct std___Setw v146) {
bb147:
  struct std__basic_ostream_char__std__char_traits_char__* __os148;
  struct std___Setw __f149;
  struct std__basic_ostream_char__std__char_traits_char__* __retval150;
  __os148 = v145;
  __f149 = v146;
  struct std__basic_ostream_char__std__char_traits_char__* t151 = __os148;
  void** v152 = (void**)t151;
  void* v153 = *((void**)v152);
  unsigned char* cast154 = (unsigned char*)v153;
  long c155 = -24;
  unsigned char* ptr156 = &(cast154)[c155];
  long* cast157 = (long*)ptr156;
  long t158 = *cast157;
  unsigned char* cast159 = (unsigned char*)t151;
  unsigned char* ptr160 = &(cast159)[t158];
  struct std__basic_ostream_char__std__char_traits_char__* cast161 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr160;
  struct std__ios_base* cast162 = (struct std__ios_base*)cast161;
  int t163 = __f149._M_n;
  long cast164 = (long)t163;
  long r165 = std__ios_base__width(cast162, cast164);
  struct std__basic_ostream_char__std__char_traits_char__* t166 = __os148;
  __retval150 = t166;
  struct std__basic_ostream_char__std__char_traits_char__* t167 = __retval150;
  return t167;
}

// function: _ZSt4setwi
struct std___Setw std__setw(int v168) {
bb169:
  int __n170;
  struct std___Setw __retval171;
  __n170 = v168;
  int t172 = __n170;
  __retval171._M_n = t172;
  struct std___Setw t173 = __retval171;
  return t173;
}

// function: _ZNKSt6vectorIiSaIiEEixEm
int* std__vector_int__std__allocator_int_____operator___unsigned_long__const(struct std__vector_int__std__allocator_int__* v174, unsigned long v175) {
bb176:
  struct std__vector_int__std__allocator_int__* this177;
  unsigned long __n178;
  int* __retval179;
  this177 = v174;
  __n178 = v175;
  struct std__vector_int__std__allocator_int__* t180 = this177;
    do {
          unsigned long t181 = __n178;
          unsigned long r182 = std__vector_int__std__allocator_int_____size___const(t180);
          _Bool c183 = ((t181 < r182)) ? 1 : 0;
          _Bool u184 = !c183;
          if (u184) {
            char* cast185 = (char*)&(_str_16);
            int c186 = 1282;
            char* cast187 = (char*)&(__PRETTY_FUNCTION____ZNKSt6vectorIiSaIiEEixEm);
            char* cast188 = (char*)&(_str_17);
            std____glibcxx_assert_fail(cast185, c186, cast187, cast188);
          }
      _Bool c189 = 0;
      if (!c189) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base190 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t180 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base191 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base190->_M_impl) + 0);
  int* t192 = base191->_M_start;
  unsigned long t193 = __n178;
  int* ptr194 = &(t192)[t193];
  __retval179 = ptr194;
  int* t195 = __retval179;
  return t195;
}

// function: _Z12outputVectorRKSt6vectorIiSaIiEE
void outputVector(struct std__vector_int__std__allocator_int__* v196) {
bb197:
  struct std__vector_int__std__allocator_int__* array198;
  int i199;
  array198 = v196;
    int i200;
    int c201 = 0;
    i200 = c201;
    while (1) {
      int t203 = i200;
      unsigned long cast204 = (unsigned long)t203;
      struct std__vector_int__std__allocator_int__* t205 = array198;
      unsigned long r206 = std__vector_int__std__allocator_int_____size___const(t205);
      _Bool c207 = ((cast204 < r206)) ? 1 : 0;
      if (!c207) break;
        struct std___Setw agg_tmp0208;
        int c209 = 12;
        struct std___Setw r210 = std__setw(c209);
        agg_tmp0208 = r210;
        struct std___Setw t211 = agg_tmp0208;
        struct std__basic_ostream_char__std__char_traits_char__* r212 = std__basic_ostream_char__std__char_traits_char_____std__operator____char__std__char_traits_char___(&_ZSt4cout, t211);
        struct std__vector_int__std__allocator_int__* t213 = array198;
        int t214 = i200;
        unsigned long cast215 = (unsigned long)t214;
        int* r216 = std__vector_int__std__allocator_int_____operator___unsigned_long__const(t213, cast215);
        int t217 = *r216;
        struct std__basic_ostream_char__std__char_traits_char__* r218 = std__ostream__operator__(r212, t217);
          int t219 = i200;
          int c220 = 1;
          int b221 = t219 + c220;
          int c222 = 4;
          int b223 = b221 % c222;
          int c224 = 0;
          _Bool c225 = ((b223 == c224)) ? 1 : 0;
          if (c225) {
            struct std__basic_ostream_char__std__char_traits_char__* r226 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
          }
    for_step202: ;
      int t227 = i200;
      int u228 = t227 + 1;
      i200 = u228;
    }
    int t229 = i199;
    int c230 = 4;
    int b231 = t229 % c230;
    int c232 = 0;
    _Bool c233 = ((b231 != c232)) ? 1 : 0;
    if (c233) {
      struct std__basic_ostream_char__std__char_traits_char__* r234 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    }
  return;
}

// function: _Z11inputVectorRSt6vectorIiSaIiEE
void inputVector(struct std__vector_int__std__allocator_int__* v235) {
bb236:
  struct std__vector_int__std__allocator_int__* array237;
  array237 = v235;
    int i238;
    int c239 = 0;
    i238 = c239;
    while (1) {
      int t241 = i238;
      unsigned long cast242 = (unsigned long)t241;
      struct std__vector_int__std__allocator_int__* t243 = array237;
      unsigned long r244 = std__vector_int__std__allocator_int_____size___const(t243);
      _Bool c245 = ((cast242 < r244)) ? 1 : 0;
      if (!c245) break;
      struct std__vector_int__std__allocator_int__* t246 = array237;
      int t247 = i238;
      unsigned long cast248 = (unsigned long)t247;
      int* r249 = std__vector_int__std__allocator_int_____operator__(t246, cast248);
      struct std__basic_istream_char__std__char_traits_char__* r250 = std__istream__operator__(&_ZSt3cin, r249);
    for_step240: ;
      int t251 = i238;
      int u252 = t251 + 1;
      i238 = u252;
    }
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb253:
  _Bool __retval254;
    _Bool c255 = 0;
    __retval254 = c255;
    _Bool t256 = __retval254;
    return t256;
  abort();
}

// function: _ZSt8__memcmpIiiEiPKT_PKT0_m
int int_std____memcmp_int__int_(int* v257, int* v258, unsigned long v259) {
bb260:
  int* __first1261;
  int* __first2262;
  unsigned long __num263;
  int __retval264;
  __first1261 = v257;
  __first2262 = v258;
  __num263 = v259;
    _Bool r265 = std__is_constant_evaluated();
    if (r265) {
        while (1) {
          unsigned long t267 = __num263;
          unsigned long c268 = 0;
          _Bool c269 = ((t267 > c268)) ? 1 : 0;
          if (!c269) break;
            int* t270 = __first1261;
            int t271 = *t270;
            int* t272 = __first2262;
            int t273 = *t272;
            _Bool c274 = ((t271 != t273)) ? 1 : 0;
            if (c274) {
              int* t275 = __first1261;
              int t276 = *t275;
              int* t277 = __first2262;
              int t278 = *t277;
              _Bool c279 = ((t276 < t278)) ? 1 : 0;
              int c280 = -1;
              int c281 = 1;
              int sel282 = c279 ? c280 : c281;
              __retval264 = sel282;
              int t283 = __retval264;
              int ret_val284 = t283;
              return ret_val284;
            }
        for_step266: ;
          int* t285 = __first1261;
          int c286 = 1;
          int* ptr287 = &(t285)[c286];
          __first1261 = ptr287;
          int* t288 = __first2262;
          int c289 = 1;
          int* ptr290 = &(t288)[c289];
          __first2262 = ptr290;
          unsigned long t291 = __num263;
          unsigned long u292 = t291 - 1;
          __num263 = u292;
        }
      int c293 = 0;
      __retval264 = c293;
      int t294 = __retval264;
      return t294;
    } else {
      int* t295 = __first1261;
      void* cast296 = (void*)t295;
      int* t297 = __first2262;
      void* cast298 = (void*)t297;
      unsigned long c299 = 4;
      unsigned long t300 = __num263;
      unsigned long b301 = c299 * t300;
      int r302 = memcmp(cast296, cast298, b301);
      __retval264 = r302;
      int t303 = __retval264;
      return t303;
    }
  abort();
}

// function: _ZNSt7__equalILb1EE5equalIiEEbPKT_S4_S4_
_Bool bool_std____equal_true___equal_int_(int* v304, int* v305, int* v306) {
bb307:
  int* __first1308;
  int* __last1309;
  int* __first2310;
  _Bool __retval311;
  __first1308 = v304;
  __last1309 = v305;
  __first2310 = v306;
    unsigned long __len312;
    int* t313 = __last1309;
    int* t314 = __first1308;
    long diff315 = t313 - t314;
    unsigned long cast316 = (unsigned long)diff315;
    __len312 = cast316;
    unsigned long t317 = __len312;
    _Bool cast318 = (_Bool)t317;
    if (cast318) {
      int* t319 = __first1308;
      int* t320 = __first2310;
      unsigned long t321 = __len312;
      int r322 = int_std____memcmp_int__int_(t319, t320, t321);
      _Bool cast323 = (_Bool)r322;
      _Bool u324 = !cast323;
      __retval311 = u324;
      _Bool t325 = __retval311;
      return t325;
    }
  _Bool c326 = 1;
  __retval311 = c326;
  _Bool t327 = __retval311;
  return t327;
}

// function: _ZSt12__equal_aux1IPKiS1_EbT_S2_T0_
_Bool bool_std____equal_aux1_int_const___int_const__(int* v328, int* v329, int* v330) {
bb331:
  int* __first1332;
  int* __last1333;
  int* __first2334;
  _Bool __retval335;
  _Bool __simple336;
  __first1332 = v328;
  __last1333 = v329;
  __first2334 = v330;
  _Bool c337 = 1;
  __simple336 = c337;
  int* t338 = __first1332;
  int* t339 = __last1333;
  int* t340 = __first2334;
  _Bool r341 = bool_std____equal_true___equal_int_(t338, t339, t340);
  __retval335 = r341;
  _Bool t342 = __retval335;
  return t342;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v343) {
bb344:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this345;
  int** __retval346;
  this345 = v343;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t347 = this345;
  __retval346 = &t347->_M_current;
  int** t348 = __retval346;
  return t348;
}

// function: _ZSt12__niter_baseIPKiSt6vectorIiSaIiEEET_N9__gnu_cxx17__normal_iteratorIS5_T0_EE
int* int_const__std____niter_base_int_const___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v349) {
bb350:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __it351;
  int* __retval352;
  __it351 = v349;
  int** r353 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(&__it351);
  int* t354 = *r353;
  __retval352 = t354;
  int* t355 = __retval352;
  return t355;
}

// function: _ZSt11__equal_auxIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEES7_EbT_S8_T0_
_Bool bool_std____equal_aux___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v356, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v357, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v358) {
bb359:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __first1360;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __last1361;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __first2362;
  _Bool __retval363;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp0364;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp1365;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp2366;
  __first1360 = v356;
  __last1361 = v357;
  __first2362 = v358;
  agg_tmp0364 = __first1360; // copy
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t367 = agg_tmp0364;
  int* r368 = int_const__std____niter_base_int_const___std__vector_int__std__allocator_int_____(t367);
  agg_tmp1365 = __last1361; // copy
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t369 = agg_tmp1365;
  int* r370 = int_const__std____niter_base_int_const___std__vector_int__std__allocator_int_____(t369);
  agg_tmp2366 = __first2362; // copy
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t371 = agg_tmp2366;
  int* r372 = int_const__std____niter_base_int_const___std__vector_int__std__allocator_int_____(t371);
  _Bool r373 = bool_std____equal_aux1_int_const___int_const__(r368, r370, r372);
  __retval363 = r373;
  _Bool t374 = __retval363;
  return t374;
}

// function: _ZSt5equalIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEES7_EbT_S8_T0_
_Bool bool_std__equal___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v375, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v376, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v377) {
bb378:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __first1379;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __last1380;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __first2381;
  _Bool __retval382;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp0383;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp1384;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp2385;
  __first1379 = v375;
  __last1380 = v376;
  __first2381 = v377;
  agg_tmp0383 = __first1379; // copy
  agg_tmp1384 = __last1380; // copy
  agg_tmp2385 = __first2381; // copy
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t386 = agg_tmp0383;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t387 = agg_tmp1384;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t388 = agg_tmp2385;
  _Bool r389 = bool_std____equal_aux___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______(t386, t387, t388);
  __retval382 = r389;
  _Bool t390 = __retval382;
  return t390;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2ERKS2_
void __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v391, int** v392) {
bb393:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this394;
  int** __i395;
  this394 = v391;
  __i395 = v392;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t396 = this394;
  int** t397 = __i395;
  int* t398 = *t397;
  t396->_M_current = t398;
  return;
}

// function: _ZNKSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin___const(struct std__vector_int__std__allocator_int__* v399) {
bb400:
  struct std__vector_int__std__allocator_int__* this401;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval402;
  this401 = v399;
  struct std__vector_int__std__allocator_int__* t403 = this401;
  struct std___Vector_base_int__std__allocator_int__* base404 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t403 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base405 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base404->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval402, &base405->_M_start);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t406 = __retval402;
  return t406;
}

// function: _ZNKSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end___const(struct std__vector_int__std__allocator_int__* v407) {
bb408:
  struct std__vector_int__std__allocator_int__* this409;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval410;
  this409 = v407;
  struct std__vector_int__std__allocator_int__* t411 = this409;
  struct std___Vector_base_int__std__allocator_int__* base412 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t411 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base413 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base412->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval410, &base413->_M_finish);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t414 = __retval410;
  return t414;
}

// function: _ZSteqIiSaIiEEbRKSt6vectorIT_T0_ES6_
_Bool bool_std__operator___int__std__allocator_int___(struct std__vector_int__std__allocator_int__* v415, struct std__vector_int__std__allocator_int__* v416) {
bb417:
  struct std__vector_int__std__allocator_int__* __x418;
  struct std__vector_int__std__allocator_int__* __y419;
  _Bool __retval420;
  __x418 = v415;
  __y419 = v416;
  struct std__vector_int__std__allocator_int__* t421 = __x418;
  unsigned long r422 = std__vector_int__std__allocator_int_____size___const(t421);
  struct std__vector_int__std__allocator_int__* t423 = __y419;
  unsigned long r424 = std__vector_int__std__allocator_int_____size___const(t423);
  _Bool c425 = ((r422 == r424)) ? 1 : 0;
  _Bool ternary426;
  if (c425) {
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp0427;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp1428;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp2429;
    struct std__vector_int__std__allocator_int__* t430 = __x418;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r431 = std__vector_int__std__allocator_int_____begin___const(t430);
    agg_tmp0427 = r431;
    struct std__vector_int__std__allocator_int__* t432 = __x418;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r433 = std__vector_int__std__allocator_int_____end___const(t432);
    agg_tmp1428 = r433;
    struct std__vector_int__std__allocator_int__* t434 = __y419;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r435 = std__vector_int__std__allocator_int_____begin___const(t434);
    agg_tmp2429 = r435;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t436 = agg_tmp0427;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t437 = agg_tmp1428;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t438 = agg_tmp2429;
    _Bool r439 = bool_std__equal___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______(t436, t437, t438);
    ternary426 = (_Bool)r439;
  } else {
    _Bool c440 = 0;
    ternary426 = (_Bool)c440;
  }
  __retval420 = ternary426;
  _Bool t441 = __retval420;
  return t441;
}

// function: _ZNSt6vectorIiSaIiEEC2ERKS1_
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* v442, struct std__vector_int__std__allocator_int__* v443) {
bb444:
  struct std__vector_int__std__allocator_int__* this445;
  struct std__vector_int__std__allocator_int__* __x446;
  struct std__allocator_int_ ref_tmp0447;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp0448;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp1449;
  this445 = v442;
  __x446 = v443;
  struct std__vector_int__std__allocator_int__* t450 = this445;
  struct std___Vector_base_int__std__allocator_int__* base451 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t450 + 0);
  struct std__vector_int__std__allocator_int__* t452 = __x446;
  unsigned long r453 = std__vector_int__std__allocator_int_____size___const(t452);
  struct std__vector_int__std__allocator_int__* t454 = __x446;
  struct std___Vector_base_int__std__allocator_int__* base455 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t454 + 0);
  struct std__allocator_int_* r456 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(base455);
  struct std__allocator_int_ r457 = __gnu_cxx____alloc_traits_std__allocator_int___int____S_select_on_copy(r456);
  ref_tmp0447 = r457;
    std___Vector_base_int__std__allocator_int______Vector_base(base451, r453, &ref_tmp0447);
  {
    std__allocator_int____allocator(&ref_tmp0447);
  }
    struct std__vector_int__std__allocator_int__* t458 = __x446;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r459 = std__vector_int__std__allocator_int_____begin___const(t458);
    agg_tmp0448 = r459;
    struct std__vector_int__std__allocator_int__* t460 = __x446;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r461 = std__vector_int__std__allocator_int_____end___const(t460);
    agg_tmp1449 = r461;
    struct std___Vector_base_int__std__allocator_int__* base462 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t450 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base463 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base462->_M_impl) + 0);
    int* t464 = base463->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base465 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t450 + 0);
    struct std__allocator_int_* r466 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base465);
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t467 = agg_tmp0448;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t468 = agg_tmp1449;
    int* r469 = int__std____uninitialized_copy_a___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______int___int_(t467, t468, t464, r466);
    struct std___Vector_base_int__std__allocator_int__* base470 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t450 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base471 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base470->_M_impl) + 0);
    base471->_M_finish = r469;
  return;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIiEiE27_S_propagate_on_copy_assignEv
_Bool __gnu_cxx____alloc_traits_std__allocator_int___int____S_propagate_on_copy_assign() {
bb472:
  _Bool __retval473;
  _Bool t474 = _ZNSt17integral_constantIbLb0EE5valueE;
  __retval473 = t474;
  _Bool t475 = __retval473;
  return t475;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIiEiE15_S_always_equalEv
_Bool __gnu_cxx____alloc_traits_std__allocator_int___int____S_always_equal() {
bb476:
  _Bool __retval477;
  _Bool t478 = _ZNSt17integral_constantIbLb1EE5valueE;
  __retval477 = t478;
  _Bool t479 = __retval477;
  return t479;
}

// function: _ZSteqRKSaIiES1_
_Bool std__operator__(struct std__allocator_int_* v480, struct std__allocator_int_* v481) {
bb482:
  struct std__allocator_int_* unnamed483;
  struct std__allocator_int_* unnamed484;
  _Bool __retval485;
  unnamed483 = v480;
  unnamed484 = v481;
  _Bool c486 = 1;
  __retval485 = c486;
  _Bool t487 = __retval485;
  return t487;
}

// function: _ZNSt6vectorIiSaIiEE15_M_erase_at_endEPi
void std__vector_int__std__allocator_int______M_erase_at_end(struct std__vector_int__std__allocator_int__* v488, int* v489) {
bb490:
  struct std__vector_int__std__allocator_int__* this491;
  int* __pos492;
  this491 = v488;
  __pos492 = v489;
  struct std__vector_int__std__allocator_int__* t493 = this491;
    unsigned long __n494;
    struct std___Vector_base_int__std__allocator_int__* base495 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t493 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base496 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base495->_M_impl) + 0);
    int* t497 = base496->_M_finish;
    int* t498 = __pos492;
    long diff499 = t497 - t498;
    unsigned long cast500 = (unsigned long)diff499;
    __n494 = cast500;
    unsigned long t501 = __n494;
    _Bool cast502 = (_Bool)t501;
    if (cast502) {
      int* t503 = __pos492;
      struct std___Vector_base_int__std__allocator_int__* base504 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t493 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base505 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base504->_M_impl) + 0);
      int* t506 = base505->_M_finish;
      struct std___Vector_base_int__std__allocator_int__* base507 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t493 + 0);
      struct std__allocator_int_* r508 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base507);
      void_std___Destroy_int___int_(t503, t506, r508);
      int* t509 = __pos492;
      struct std___Vector_base_int__std__allocator_int__* base510 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t493 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base511 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base510->_M_impl) + 0);
      base511->_M_finish = t509;
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE5clearEv
void std__vector_int__std__allocator_int_____clear(struct std__vector_int__std__allocator_int__* v512) {
bb513:
  struct std__vector_int__std__allocator_int__* this514;
  this514 = v512;
  struct std__vector_int__std__allocator_int__* t515 = this514;
  struct std___Vector_base_int__std__allocator_int__* base516 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t515 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base517 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base516->_M_impl) + 0);
  int* t518 = base517->_M_start;
  std__vector_int__std__allocator_int______M_erase_at_end(t515, t518);
  return;
}

// function: _ZSt15__alloc_on_copyISaIiEEvRT_RKS1_
void void_std____alloc_on_copy_std__allocator_int___(struct std__allocator_int_* v519, struct std__allocator_int_* v520) {
bb521:
  struct std__allocator_int_* __one522;
  struct std__allocator_int_* __two523;
  __one522 = v519;
  __two523 = v520;
  return;
}

// function: _ZNKSt6vectorIiSaIiEE8capacityEv
unsigned long std__vector_int__std__allocator_int_____capacity___const(struct std__vector_int__std__allocator_int__* v524) {
bb525:
  struct std__vector_int__std__allocator_int__* this526;
  unsigned long __retval527;
  long __dif528;
  this526 = v524;
  struct std__vector_int__std__allocator_int__* t529 = this526;
  struct std___Vector_base_int__std__allocator_int__* base530 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t529 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base531 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base530->_M_impl) + 0);
  int* t532 = base531->_M_end_of_storage;
  struct std___Vector_base_int__std__allocator_int__* base533 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t529 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base534 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base533->_M_impl) + 0);
  int* t535 = base534->_M_start;
  long diff536 = t532 - t535;
  __dif528 = diff536;
    long t537 = __dif528;
    long c538 = 0;
    _Bool c539 = ((t537 < c538)) ? 1 : 0;
    if (c539) {
      __builtin_unreachable();
    }
  long t540 = __dif528;
  unsigned long cast541 = (unsigned long)t540;
  __retval527 = cast541;
  unsigned long t542 = __retval527;
  return t542;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocC2EPimRSt12_Vector_baseIiS0_E
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v543, int* v544, unsigned long v545, struct std___Vector_base_int__std__allocator_int__* v546) {
bb547:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this548;
  int* __s549;
  unsigned long __l550;
  struct std___Vector_base_int__std__allocator_int__* __vect551;
  this548 = v543;
  __s549 = v544;
  __l550 = v545;
  __vect551 = v546;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t552 = this548;
  int* t553 = __s549;
  t552->_M_storage = t553;
  unsigned long t554 = __l550;
  t552->_M_len = t554;
  struct std___Vector_base_int__std__allocator_int__* t555 = __vect551;
  t552->_M_vect = t555;
  return;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_alloc10_M_releaseEv
int* std__vector_int__std__allocator_int______Guard_alloc___M_release(struct std__vector_int__std__allocator_int_____Guard_alloc* v556) {
bb557:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this558;
  int* __retval559;
  int* __res560;
  this558 = v556;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t561 = this558;
  int* t562 = t561->_M_storage;
  __res560 = t562;
  int* c563 = ((void*)0);
  t561->_M_storage = c563;
  int* t564 = __res560;
  __retval559 = t564;
  int* t565 = __retval559;
  return t565;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocD2Ev
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v566) {
bb567:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this568;
  this568 = v566;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t569 = this568;
    int* t570 = t569->_M_storage;
    _Bool cast571 = (_Bool)t570;
    if (cast571) {
      struct std___Vector_base_int__std__allocator_int__* t572 = t569->_M_vect;
      int* t573 = t569->_M_storage;
      unsigned long t574 = t569->_M_len;
      std___Vector_base_int__std__allocator_int______M_deallocate(t572, t573, t574);
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE20_M_allocate_and_copyIN9__gnu_cxx17__normal_iteratorIPKiS1_EEEEPimT_S9_
int* int__std__vector_int__std__allocator_int______M_allocate_and_copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______(struct std__vector_int__std__allocator_int__* v575, unsigned long v576, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v577, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v578) {
bb579:
  struct std__vector_int__std__allocator_int__* this580;
  unsigned long __n581;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __first582;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __last583;
  int* __retval584;
  struct std__vector_int__std__allocator_int_____Guard_alloc __guard585;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp0586;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp1587;
  this580 = v575;
  __n581 = v576;
  __first582 = v577;
  __last583 = v578;
  struct std__vector_int__std__allocator_int__* t588 = this580;
  struct std___Vector_base_int__std__allocator_int__* base589 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t588 + 0);
  unsigned long t590 = __n581;
  int* r591 = std___Vector_base_int__std__allocator_int______M_allocate(base589, t590);
  unsigned long t592 = __n581;
  struct std___Vector_base_int__std__allocator_int__* base593 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t588 + 0);
  std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(&__guard585, r591, t592, base593);
    agg_tmp0586 = __first582; // copy
    agg_tmp1587 = __last583; // copy
    int* t594 = __guard585._M_storage;
    struct std___Vector_base_int__std__allocator_int__* base595 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t588 + 0);
    struct std__allocator_int_* r596 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base595);
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t597 = agg_tmp0586;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t598 = agg_tmp1587;
    int* r599 = int__std____uninitialized_copy_a___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______int___int_(t597, t598, t594, r596);
    int* r600 = std__vector_int__std__allocator_int______Guard_alloc___M_release(&__guard585);
    __retval584 = r600;
    int* t601 = __retval584;
    int* ret_val602 = t601;
    {
      std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(&__guard585);
    }
    return ret_val602;
  abort();
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v603, int* v604, struct std__allocator_int_* v605) {
bb606:
  int* __first607;
  int* __last608;
  struct std__allocator_int_* unnamed609;
  __first607 = v603;
  __last608 = v604;
  unnamed609 = v605;
  int* t610 = __first607;
  int* t611 = __last608;
  void_std___Destroy_int__(t610, t611);
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v612) {
bb613:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this614;
  int** __retval615;
  this614 = v612;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t616 = this614;
  __retval615 = &t616->_M_current;
  int** t617 = __retval615;
  return t617;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v618, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v619) {
bb620:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs621;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs622;
  _Bool __retval623;
  __lhs621 = v618;
  __rhs622 = v619;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t624 = __lhs621;
  int** r625 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t624);
  int* t626 = *r625;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t627 = __rhs622;
  int** r628 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t627);
  int* t629 = *r628;
  _Bool c630 = ((t626 == t629)) ? 1 : 0;
  __retval623 = c630;
  _Bool t631 = __retval623;
  return t631;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v632) {
bb633:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this634;
  int* __retval635;
  this634 = v632;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t636 = this634;
  int* t637 = t636->_M_current;
  __retval635 = t637;
  int* t638 = __retval635;
  return t638;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v639) {
bb640:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this641;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval642;
  this641 = v639;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t643 = this641;
  int* t644 = t643->_M_current;
  int c645 = 1;
  int* ptr646 = &(t644)[c645];
  t643->_M_current = ptr646;
  __retval642 = t643;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t647 = __retval642;
  return t647;
}

// function: _ZSt8_DestroyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEvT_S7_
void void_std___Destroy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v648, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v649) {
bb650:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first651;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last652;
  __first651 = v648;
  __last652 = v649;
      _Bool r653 = std____is_constant_evaluated();
      if (r653) {
          while (1) {
            _Bool r655 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first651, &__last652);
            _Bool u656 = !r655;
            if (!u656) break;
            int* r657 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first651);
            void_std__destroy_at_int_(r657);
          for_step654: ;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r658 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__first651);
          }
      }
  return;
}

// function: _ZSt8_DestroyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiEvT_S7_RSaIT0_E
void void_std___Destroy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v659, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v660, struct std__allocator_int_* v661) {
bb662:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first663;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last664;
  struct std__allocator_int_* unnamed665;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0666;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1667;
  __first663 = v659;
  __last664 = v660;
  unnamed665 = v661;
  agg_tmp0666 = __first663; // copy
  agg_tmp1667 = __last664; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t668 = agg_tmp0666;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t669 = agg_tmp1667;
  void_std___Destroy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t668, t669);
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v670, int** v671) {
bb672:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this673;
  int** __i674;
  this673 = v670;
  __i674 = v671;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t675 = this673;
  int** t676 = __i674;
  int* t677 = *t676;
  t675->_M_current = t677;
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEplEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v678, long v679) {
bb680:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this681;
  long __n682;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval683;
  int* ref_tmp0684;
  this681 = v678;
  __n682 = v679;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t685 = this681;
  int* t686 = t685->_M_current;
  long t687 = __n682;
  int* ptr688 = &(t686)[t687];
  ref_tmp0684 = ptr688;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval683, &ref_tmp0684);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t689 = __retval683;
  return t689;
}

// function: _ZSt12__niter_wrapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES2_ET_S7_T0_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____niter_wrap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v690, int* v691) {
bb692:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __from693;
  int* __res694;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval695;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0696;
  __from693 = v690;
  __res694 = v691;
  int* t697 = __res694;
  int* r698 = int__std____niter_base_int__(t697);
  agg_tmp0696 = __from693; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t699 = agg_tmp0696;
  int* r700 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t699);
  long diff701 = r698 - r700;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r702 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__from693, diff701);
  __retval695 = r702;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t703 = __retval695;
  return t703;
}

// function: _ZSt10__distanceIPKiENSt15iterator_traitsIT_E15difference_typeES3_S3_St26random_access_iterator_tag
long std__iterator_traits_int_const____difference_type_std____distance_int_const__(int* v704, int* v705, struct std__random_access_iterator_tag v706) {
bb707:
  int* __first708;
  int* __last709;
  struct std__random_access_iterator_tag unnamed710;
  long __retval711;
  __first708 = v704;
  __last709 = v705;
  unnamed710 = v706;
  int* t712 = __last709;
  int* t713 = __first708;
  long diff714 = t712 - t713;
  __retval711 = diff714;
  long t715 = __retval711;
  return t715;
}

// function: _ZSt19__iterator_categoryIPKiENSt15iterator_traitsIT_E17iterator_categoryERKS3_
struct std__random_access_iterator_tag std__iterator_traits_int_const____iterator_category_std____iterator_category_int_const__(int** v716) {
bb717:
  int** unnamed718;
  struct std__random_access_iterator_tag __retval719;
  unnamed718 = v716;
  struct std__random_access_iterator_tag t720 = __retval719;
  return t720;
}

// function: _ZSt8distanceIPKiENSt15iterator_traitsIT_E15difference_typeES3_S3_
long std__iterator_traits_int_const____difference_type_std__distance_int_const__(int* v721, int* v722) {
bb723:
  int* __first724;
  int* __last725;
  long __retval726;
  struct std__random_access_iterator_tag agg_tmp0727;
  __first724 = v721;
  __last725 = v722;
  int* t728 = __first724;
  int* t729 = __last725;
  struct std__random_access_iterator_tag r730 = std__iterator_traits_int_const____iterator_category_std____iterator_category_int_const__(&__first724);
  agg_tmp0727 = r730;
  struct std__random_access_iterator_tag t731 = agg_tmp0727;
  long r732 = std__iterator_traits_int_const____difference_type_std____distance_int_const__(t728, t729, t731);
  __retval726 = r732;
  long t733 = __retval726;
  return t733;
}

// function: _ZSt12__assign_oneILb0EPiPKiEvRT0_RT1_
void void_std____assign_one_false__int___int_const__(int** v734, int** v735) {
bb736:
  int** __out737;
  int** __in738;
  __out737 = v734;
  __in738 = v735;
    int** t739 = __in738;
    int* t740 = *t739;
    int t741 = *t740;
    int** t742 = __out737;
    int* t743 = *t742;
    *t743 = t741;
  return;
}

// function: _ZSt14__copy_move_a2ILb0EPKiS1_PiET2_T0_T1_S3_
int* int__std____copy_move_a2_false__int_const___int_const___int__(int* v744, int* v745, int* v746) {
bb747:
  int* __first748;
  int* __last749;
  int* __result750;
  int* __retval751;
  __first748 = v744;
  __last749 = v745;
  __result750 = v746;
      _Bool r752 = std____is_constant_evaluated();
      if (r752) {
      } else {
          long __n753;
          int* t754 = __first748;
          int* t755 = __last749;
          long r756 = std__iterator_traits_int_const____difference_type_std__distance_int_const__(t754, t755);
          __n753 = r756;
            long t757 = __n753;
            long c758 = 1;
            _Bool c759 = ((t757 > c758)) ? 1 : 0;
            if (c759) {
              int* t760 = __result750;
              void* cast761 = (void*)t760;
              int* t762 = __first748;
              void* cast763 = (void*)t762;
              long t764 = __n753;
              unsigned long cast765 = (unsigned long)t764;
              unsigned long c766 = 4;
              unsigned long b767 = cast765 * c766;
              void* r768 = memmove(cast761, cast763, b767);
              long t769 = __n753;
              int* t770 = __result750;
              int* ptr771 = &(t770)[t769];
              __result750 = ptr771;
            } else {
                long t772 = __n753;
                long c773 = 1;
                _Bool c774 = ((t772 == c773)) ? 1 : 0;
                if (c774) {
                  void_std____assign_one_false__int___int_const__(&__result750, &__first748);
                  int* t775 = __result750;
                  int c776 = 1;
                  int* ptr777 = &(t775)[c776];
                  __result750 = ptr777;
                }
            }
          int* t778 = __result750;
          __retval751 = t778;
          int* t779 = __retval751;
          return t779;
      }
    while (1) {
      int* t781 = __first748;
      int* t782 = __last749;
      _Bool c783 = ((t781 != t782)) ? 1 : 0;
      if (!c783) break;
      void_std____assign_one_false__int___int_const__(&__result750, &__first748);
    for_step780: ;
      int* t784 = __result750;
      int c785 = 1;
      int* ptr786 = &(t784)[c785];
      __result750 = ptr786;
      int* t787 = __first748;
      int c788 = 1;
      int* ptr789 = &(t787)[c788];
      __first748 = ptr789;
    }
  int* t790 = __result750;
  __retval751 = t790;
  int* t791 = __retval751;
  return t791;
}

// function: _ZSt14__copy_move_a1ILb0EPKiPiET1_T0_S4_S3_
int* int__std____copy_move_a1_false__int_const___int__(int* v792, int* v793, int* v794) {
bb795:
  int* __first796;
  int* __last797;
  int* __result798;
  int* __retval799;
  __first796 = v792;
  __last797 = v793;
  __result798 = v794;
  int* t800 = __first796;
  int* t801 = __last797;
  int* t802 = __result798;
  int* r803 = int__std____copy_move_a2_false__int_const___int_const___int__(t800, t801, t802);
  __retval799 = r803;
  int* t804 = __retval799;
  return t804;
}

// function: _ZSt12__niter_baseIPiSt6vectorIiSaIiEEET_N9__gnu_cxx17__normal_iteratorIS4_T0_EE
int* int__std____niter_base_int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v805) {
bb806:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it807;
  int* __retval808;
  __it807 = v805;
  int** r809 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__it807);
  int* t810 = *r809;
  __retval808 = t810;
  int* t811 = __retval808;
  return t811;
}

// function: _ZSt13__copy_move_aILb0EN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEENS1_IPiS6_EEET1_T0_SB_SA_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____copy_move_a_false____gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v812, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v813, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v814) {
bb815:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __first816;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __last817;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result818;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval819;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0820;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp1821;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp2822;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3823;
  __first816 = v812;
  __last817 = v813;
  __result818 = v814;
  agg_tmp0820 = __result818; // copy
  agg_tmp1821 = __first816; // copy
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t824 = agg_tmp1821;
  int* r825 = int_const__std____niter_base_int_const___std__vector_int__std__allocator_int_____(t824);
  agg_tmp2822 = __last817; // copy
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t826 = agg_tmp2822;
  int* r827 = int_const__std____niter_base_int_const___std__vector_int__std__allocator_int_____(t826);
  agg_tmp3823 = __result818; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t828 = agg_tmp3823;
  int* r829 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t828);
  int* r830 = int__std____copy_move_a1_false__int_const___int__(r825, r827, r829);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t831 = agg_tmp0820;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r832 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____niter_wrap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(t831, r830);
  __retval819 = r832;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t833 = __retval819;
  return t833;
}

// function: _ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEET_S8_
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v834) {
bb835:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __it836;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval837;
  __it836 = v834;
  __retval837 = __it836; // copy
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t838 = __retval837;
  return t838;
}

// function: _ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEENS1_IPiS6_EEET0_T_SB_SA_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v839, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v840, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v841) {
bb842:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __first843;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __last844;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result845;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval846;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp0847;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp1848;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp2849;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp3850;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp4851;
  __first843 = v839;
  __last844 = v840;
  __result845 = v841;
  agg_tmp1848 = __first843; // copy
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t852 = agg_tmp1848;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r853 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______(t852);
  agg_tmp0847 = r853;
  agg_tmp3850 = __last844; // copy
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t854 = agg_tmp3850;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r855 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______(t854);
  agg_tmp2849 = r855;
  agg_tmp4851 = __result845; // copy
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t856 = agg_tmp0847;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t857 = agg_tmp2849;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t858 = agg_tmp4851;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r859 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____copy_move_a_false____gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t856, t857, t858);
  __retval846 = r859;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t860 = __retval846;
  return t860;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v861) {
bb862:
  struct std__vector_int__std__allocator_int__* this863;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval864;
  this863 = v861;
  struct std__vector_int__std__allocator_int__* t865 = this863;
  struct std___Vector_base_int__std__allocator_int__* base866 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t865 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base867 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base866->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval864, &base867->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t868 = __retval864;
  return t868;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v869) {
bb870:
  struct std__vector_int__std__allocator_int__* this871;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval872;
  this871 = v869;
  struct std__vector_int__std__allocator_int__* t873 = this871;
  struct std___Vector_base_int__std__allocator_int__* base874 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t873 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base875 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base874->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval872, &base875->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t876 = __retval872;
  return t876;
}

// function: _ZSt12__niter_wrapIPiET_RKS1_S1_
int* int__std____niter_wrap_int__(int** v877, int* v878) {
bb879:
  int** unnamed880;
  int* __res881;
  int* __retval882;
  unnamed880 = v877;
  __res881 = v878;
  int* t883 = __res881;
  __retval882 = t883;
  int* t884 = __retval882;
  return t884;
}

// function: _ZSt10__distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_St26random_access_iterator_tag
long std__iterator_traits_int____difference_type_std____distance_int__(int* v885, int* v886, struct std__random_access_iterator_tag v887) {
bb888:
  int* __first889;
  int* __last890;
  struct std__random_access_iterator_tag unnamed891;
  long __retval892;
  __first889 = v885;
  __last890 = v886;
  unnamed891 = v887;
  int* t893 = __last890;
  int* t894 = __first889;
  long diff895 = t893 - t894;
  __retval892 = diff895;
  long t896 = __retval892;
  return t896;
}

// function: _ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** v897) {
bb898:
  int** unnamed899;
  struct std__random_access_iterator_tag __retval900;
  unnamed899 = v897;
  struct std__random_access_iterator_tag t901 = __retval900;
  return t901;
}

// function: _ZSt8distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_
long std__iterator_traits_int____difference_type_std__distance_int__(int* v902, int* v903) {
bb904:
  int* __first905;
  int* __last906;
  long __retval907;
  struct std__random_access_iterator_tag agg_tmp0908;
  __first905 = v902;
  __last906 = v903;
  int* t909 = __first905;
  int* t910 = __last906;
  struct std__random_access_iterator_tag r911 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first905);
  agg_tmp0908 = r911;
  struct std__random_access_iterator_tag t912 = agg_tmp0908;
  long r913 = std__iterator_traits_int____difference_type_std____distance_int__(t909, t910, t912);
  __retval907 = r913;
  long t914 = __retval907;
  return t914;
}

// function: _ZSt12__assign_oneILb0EPiS0_EvRT0_RT1_
void void_std____assign_one_false__int___int__(int** v915, int** v916) {
bb917:
  int** __out918;
  int** __in919;
  __out918 = v915;
  __in919 = v916;
    int** t920 = __in919;
    int* t921 = *t920;
    int t922 = *t921;
    int** t923 = __out918;
    int* t924 = *t923;
    *t924 = t922;
  return;
}

// function: _ZSt14__copy_move_a2ILb0EPiS0_S0_ET2_T0_T1_S1_
int* int__std____copy_move_a2_false__int___int___int__(int* v925, int* v926, int* v927) {
bb928:
  int* __first929;
  int* __last930;
  int* __result931;
  int* __retval932;
  __first929 = v925;
  __last930 = v926;
  __result931 = v927;
      _Bool r933 = std____is_constant_evaluated();
      if (r933) {
      } else {
          long __n934;
          int* t935 = __first929;
          int* t936 = __last930;
          long r937 = std__iterator_traits_int____difference_type_std__distance_int__(t935, t936);
          __n934 = r937;
            long t938 = __n934;
            long c939 = 1;
            _Bool c940 = ((t938 > c939)) ? 1 : 0;
            if (c940) {
              int* t941 = __result931;
              void* cast942 = (void*)t941;
              int* t943 = __first929;
              void* cast944 = (void*)t943;
              long t945 = __n934;
              unsigned long cast946 = (unsigned long)t945;
              unsigned long c947 = 4;
              unsigned long b948 = cast946 * c947;
              void* r949 = memmove(cast942, cast944, b948);
              long t950 = __n934;
              int* t951 = __result931;
              int* ptr952 = &(t951)[t950];
              __result931 = ptr952;
            } else {
                long t953 = __n934;
                long c954 = 1;
                _Bool c955 = ((t953 == c954)) ? 1 : 0;
                if (c955) {
                  void_std____assign_one_false__int___int__(&__result931, &__first929);
                  int* t956 = __result931;
                  int c957 = 1;
                  int* ptr958 = &(t956)[c957];
                  __result931 = ptr958;
                }
            }
          int* t959 = __result931;
          __retval932 = t959;
          int* t960 = __retval932;
          return t960;
      }
    while (1) {
      int* t962 = __first929;
      int* t963 = __last930;
      _Bool c964 = ((t962 != t963)) ? 1 : 0;
      if (!c964) break;
      void_std____assign_one_false__int___int__(&__result931, &__first929);
    for_step961: ;
      int* t965 = __result931;
      int c966 = 1;
      int* ptr967 = &(t965)[c966];
      __result931 = ptr967;
      int* t968 = __first929;
      int c969 = 1;
      int* ptr970 = &(t968)[c969];
      __first929 = ptr970;
    }
  int* t971 = __result931;
  __retval932 = t971;
  int* t972 = __retval932;
  return t972;
}

// function: _ZSt14__copy_move_a1ILb0EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_a1_false__int___int__(int* v973, int* v974, int* v975) {
bb976:
  int* __first977;
  int* __last978;
  int* __result979;
  int* __retval980;
  __first977 = v973;
  __last978 = v974;
  __result979 = v975;
  int* t981 = __first977;
  int* t982 = __last978;
  int* t983 = __result979;
  int* r984 = int__std____copy_move_a2_false__int___int___int__(t981, t982, t983);
  __retval980 = r984;
  int* t985 = __retval980;
  return t985;
}

// function: _ZSt13__copy_move_aILb0EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_a_false__int___int__(int* v986, int* v987, int* v988) {
bb989:
  int* __first990;
  int* __last991;
  int* __result992;
  int* __retval993;
  __first990 = v986;
  __last991 = v987;
  __result992 = v988;
  int* t994 = __first990;
  int* r995 = int__std____niter_base_int__(t994);
  int* t996 = __last991;
  int* r997 = int__std____niter_base_int__(t996);
  int* t998 = __result992;
  int* r999 = int__std____niter_base_int__(t998);
  int* r1000 = int__std____copy_move_a1_false__int___int__(r995, r997, r999);
  int* r1001 = int__std____niter_wrap_int__(&__result992, r1000);
  __retval993 = r1001;
  int* t1002 = __retval993;
  return t1002;
}

// function: _ZSt12__miter_baseIPiET_S1_
int* int__std____miter_base_int__(int* v1003) {
bb1004:
  int* __it1005;
  int* __retval1006;
  __it1005 = v1003;
  int* t1007 = __it1005;
  __retval1006 = t1007;
  int* t1008 = __retval1006;
  return t1008;
}

// function: _ZSt4copyIPiS0_ET0_T_S2_S1_
int* int__std__copy_int___int__(int* v1009, int* v1010, int* v1011) {
bb1012:
  int* __first1013;
  int* __last1014;
  int* __result1015;
  int* __retval1016;
  __first1013 = v1009;
  __last1014 = v1010;
  __result1015 = v1011;
  int* t1017 = __first1013;
  int* r1018 = int__std____miter_base_int__(t1017);
  int* t1019 = __last1014;
  int* r1020 = int__std____miter_base_int__(t1019);
  int* t1021 = __result1015;
  int* r1022 = int__std____copy_move_a_false__int___int__(r1018, r1020, t1021);
  __retval1016 = r1022;
  int* t1023 = __retval1016;
  return t1023;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v1024, int* v1025) {
bb1026:
  int* __location1027;
  int* __args1028;
  int* __retval1029;
  void* __loc1030;
  __location1027 = v1024;
  __args1028 = v1025;
  int* t1031 = __location1027;
  void* cast1032 = (void*)t1031;
  __loc1030 = cast1032;
    void* t1033 = __loc1030;
    int* cast1034 = (int*)t1033;
    int* t1035 = __args1028;
    int t1036 = *t1035;
    *cast1034 = t1036;
    __retval1029 = cast1034;
    int* t1037 = __retval1029;
    return t1037;
  abort();
}

// function: _ZSt10_ConstructIiJRiEEvPT_DpOT0_
void void_std___Construct_int__int__(int* v1038, int* v1039) {
bb1040:
  int* __p1041;
  int* __args1042;
  __p1041 = v1038;
  __args1042 = v1039;
    _Bool r1043 = std____is_constant_evaluated();
    if (r1043) {
      int* t1044 = __p1041;
      int* t1045 = __args1042;
      int* r1046 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t1044, t1045);
      return;
    }
  int* t1047 = __p1041;
  void* cast1048 = (void*)t1047;
  int* cast1049 = (int*)cast1048;
  int* t1050 = __args1042;
  int t1051 = *t1050;
  *cast1049 = t1051;
  return;
}

// function: _ZSt16__do_uninit_copyIPiS0_S0_ET1_T_T0_S1_
int* int__std____do_uninit_copy_int___int___int__(int* v1052, int* v1053, int* v1054) {
bb1055:
  int* __first1056;
  int* __last1057;
  int* __result1058;
  int* __retval1059;
  struct std___UninitDestroyGuard_int____void_ __guard1060;
  __first1056 = v1052;
  __last1057 = v1053;
  __result1058 = v1054;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard1060, &__result1058);
      while (1) {
        int* t1062 = __first1056;
        int* t1063 = __last1057;
        _Bool c1064 = ((t1062 != t1063)) ? 1 : 0;
        if (!c1064) break;
        int* t1065 = __result1058;
        int* t1066 = __first1056;
        void_std___Construct_int__int__(t1065, t1066);
      for_step1061: ;
        int* t1067 = __first1056;
        int c1068 = 1;
        int* ptr1069 = &(t1067)[c1068];
        __first1056 = ptr1069;
        int* t1070 = __result1058;
        int c1071 = 1;
        int* ptr1072 = &(t1070)[c1071];
        __result1058 = ptr1072;
      }
    std___UninitDestroyGuard_int___void___release(&__guard1060);
    int* t1073 = __result1058;
    __retval1059 = t1073;
    int* t1074 = __retval1059;
    int* ret_val1075 = t1074;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1060);
    }
    return ret_val1075;
  abort();
}

// function: _ZSt18uninitialized_copyIPiS0_ET0_T_S2_S1_
int* int__std__uninitialized_copy_int___int__(int* v1076, int* v1077, int* v1078) {
bb1079:
  int* __first1080;
  int* __last1081;
  int* __result1082;
  int* __retval1083;
  __first1080 = v1076;
  __last1081 = v1077;
  __result1082 = v1078;
      long __n1084;
      int* t1085 = __last1081;
      int* t1086 = __first1080;
      long diff1087 = t1085 - t1086;
      __n1084 = diff1087;
        long t1088 = __n1084;
        long c1089 = 0;
        _Bool c1090 = ((t1088 > c1089)) ? 1 : 0;
        if (c1090) {
          int* t1091 = __result1082;
          int* r1092 = int__std____niter_base_int__(t1091);
          void* cast1093 = (void*)r1092;
          int* t1094 = __first1080;
          int* r1095 = int__std____niter_base_int__(t1094);
          void* cast1096 = (void*)r1095;
          long t1097 = __n1084;
          unsigned long cast1098 = (unsigned long)t1097;
          unsigned long c1099 = 4;
          unsigned long b1100 = cast1098 * c1099;
          void* r1101 = memcpy(cast1093, cast1096, b1100);
          long t1102 = __n1084;
          int* t1103 = __result1082;
          int* ptr1104 = &(t1103)[t1102];
          __result1082 = ptr1104;
        }
      int* t1105 = __result1082;
      __retval1083 = t1105;
      int* t1106 = __retval1083;
      return t1106;
  abort();
}

// function: _ZSt22__uninitialized_copy_aIPiS0_S0_iET1_T_T0_S1_RSaIT2_E
int* int__std____uninitialized_copy_a_int___int___int___int_(int* v1107, int* v1108, int* v1109, struct std__allocator_int_* v1110) {
bb1111:
  int* __first1112;
  int* __last1113;
  int* __result1114;
  struct std__allocator_int_* unnamed1115;
  int* __retval1116;
  __first1112 = v1107;
  __last1113 = v1108;
  __result1114 = v1109;
  unnamed1115 = v1110;
    _Bool r1117 = std__is_constant_evaluated();
    if (r1117) {
      int* t1118 = __first1112;
      int* t1119 = __last1113;
      int* t1120 = __result1114;
      int* r1121 = int__std____do_uninit_copy_int___int___int__(t1118, t1119, t1120);
      __retval1116 = r1121;
      int* t1122 = __retval1116;
      return t1122;
    }
    int* t1123 = __first1112;
    int* t1124 = __last1113;
    int* t1125 = __result1114;
    int* r1126 = int__std__uninitialized_copy_int___int__(t1123, t1124, t1125);
    __retval1116 = r1126;
    int* t1127 = __retval1116;
    return t1127;
  abort();
}

// function: _ZNSt6vectorIiSaIiEEaSERKS1_
struct std__vector_int__std__allocator_int__* std__vector_int__std__allocator_int_____operator_(struct std__vector_int__std__allocator_int__* v1128, struct std__vector_int__std__allocator_int__* v1129) {
bb1130:
  struct std__vector_int__std__allocator_int__* this1131;
  struct std__vector_int__std__allocator_int__* __x1132;
  struct std__vector_int__std__allocator_int__* __retval1133;
  this1131 = v1128;
  __x1132 = v1129;
  struct std__vector_int__std__allocator_int__* t1134 = this1131;
    struct std__vector_int__std__allocator_int__* t1135 = __x1132;
    _Bool c1136 = ((t1135 != t1134)) ? 1 : 0;
    if (c1136) {
      unsigned long __xlen1137;
        _Bool r1138 = __gnu_cxx____alloc_traits_std__allocator_int___int____S_propagate_on_copy_assign();
        if (r1138) {
            _Bool r1139 = __gnu_cxx____alloc_traits_std__allocator_int___int____S_always_equal();
            _Bool u1140 = !r1139;
            _Bool ternary1141;
            if (u1140) {
              struct std___Vector_base_int__std__allocator_int__* base1142 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1134 + 0);
              struct std__allocator_int_* r1143 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1142);
              struct std__vector_int__std__allocator_int__* t1144 = __x1132;
              struct std___Vector_base_int__std__allocator_int__* base1145 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1144 + 0);
              struct std__allocator_int_* r1146 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(base1145);
              _Bool r1147 = std__operator__(r1143, r1146);
              _Bool u1148 = !r1147;
              ternary1141 = (_Bool)u1148;
            } else {
              _Bool c1149 = 0;
              ternary1141 = (_Bool)c1149;
            }
            if (ternary1141) {
              std__vector_int__std__allocator_int_____clear(t1134);
              struct std___Vector_base_int__std__allocator_int__* base1150 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1134 + 0);
              struct std___Vector_base_int__std__allocator_int__* base1151 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1134 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1152 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1151->_M_impl) + 0);
              int* t1153 = base1152->_M_start;
              struct std___Vector_base_int__std__allocator_int__* base1154 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1134 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1155 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1154->_M_impl) + 0);
              int* t1156 = base1155->_M_end_of_storage;
              struct std___Vector_base_int__std__allocator_int__* base1157 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1134 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1158 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1157->_M_impl) + 0);
              int* t1159 = base1158->_M_start;
              long diff1160 = t1156 - t1159;
              unsigned long cast1161 = (unsigned long)diff1160;
              std___Vector_base_int__std__allocator_int______M_deallocate(base1150, t1153, cast1161);
              int* c1162 = ((void*)0);
              struct std___Vector_base_int__std__allocator_int__* base1163 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1134 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1164 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1163->_M_impl) + 0);
              base1164->_M_start = c1162;
              int* c1165 = ((void*)0);
              struct std___Vector_base_int__std__allocator_int__* base1166 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1134 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1167 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1166->_M_impl) + 0);
              base1167->_M_finish = c1165;
              int* c1168 = ((void*)0);
              struct std___Vector_base_int__std__allocator_int__* base1169 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1134 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1170 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1169->_M_impl) + 0);
              base1170->_M_end_of_storage = c1168;
            }
          struct std___Vector_base_int__std__allocator_int__* base1171 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1134 + 0);
          struct std__allocator_int_* r1172 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1171);
          struct std__vector_int__std__allocator_int__* t1173 = __x1132;
          struct std___Vector_base_int__std__allocator_int__* base1174 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1173 + 0);
          struct std__allocator_int_* r1175 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(base1174);
          void_std____alloc_on_copy_std__allocator_int___(r1172, r1175);
        }
      struct std__vector_int__std__allocator_int__* t1176 = __x1132;
      unsigned long r1177 = std__vector_int__std__allocator_int_____size___const(t1176);
      __xlen1137 = r1177;
        unsigned long t1178 = __xlen1137;
        unsigned long r1179 = std__vector_int__std__allocator_int_____capacity___const(t1134);
        _Bool c1180 = ((t1178 > r1179)) ? 1 : 0;
        if (c1180) {
          int* __tmp1181;
          struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp01182;
          struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp11183;
          unsigned long t1184 = __xlen1137;
          struct std__vector_int__std__allocator_int__* t1185 = __x1132;
          struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r1186 = std__vector_int__std__allocator_int_____begin___const(t1185);
          agg_tmp01182 = r1186;
          struct std__vector_int__std__allocator_int__* t1187 = __x1132;
          struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r1188 = std__vector_int__std__allocator_int_____end___const(t1187);
          agg_tmp11183 = r1188;
          struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t1189 = agg_tmp01182;
          struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t1190 = agg_tmp11183;
          int* r1191 = int__std__vector_int__std__allocator_int______M_allocate_and_copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______(t1134, t1184, t1189, t1190);
          __tmp1181 = r1191;
          struct std___Vector_base_int__std__allocator_int__* base1192 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1134 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1193 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1192->_M_impl) + 0);
          int* t1194 = base1193->_M_start;
          struct std___Vector_base_int__std__allocator_int__* base1195 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1134 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1196 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1195->_M_impl) + 0);
          int* t1197 = base1196->_M_finish;
          struct std___Vector_base_int__std__allocator_int__* base1198 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1134 + 0);
          struct std__allocator_int_* r1199 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1198);
          void_std___Destroy_int___int_(t1194, t1197, r1199);
          struct std___Vector_base_int__std__allocator_int__* base1200 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1134 + 0);
          struct std___Vector_base_int__std__allocator_int__* base1201 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1134 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1202 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1201->_M_impl) + 0);
          int* t1203 = base1202->_M_start;
          struct std___Vector_base_int__std__allocator_int__* base1204 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1134 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1205 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1204->_M_impl) + 0);
          int* t1206 = base1205->_M_end_of_storage;
          struct std___Vector_base_int__std__allocator_int__* base1207 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1134 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1208 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1207->_M_impl) + 0);
          int* t1209 = base1208->_M_start;
          long diff1210 = t1206 - t1209;
          unsigned long cast1211 = (unsigned long)diff1210;
          std___Vector_base_int__std__allocator_int______M_deallocate(base1200, t1203, cast1211);
          int* t1212 = __tmp1181;
          struct std___Vector_base_int__std__allocator_int__* base1213 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1134 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1214 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1213->_M_impl) + 0);
          base1214->_M_start = t1212;
          struct std___Vector_base_int__std__allocator_int__* base1215 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1134 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1216 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1215->_M_impl) + 0);
          int* t1217 = base1216->_M_start;
          unsigned long t1218 = __xlen1137;
          int* ptr1219 = &(t1217)[t1218];
          struct std___Vector_base_int__std__allocator_int__* base1220 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1134 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1221 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1220->_M_impl) + 0);
          base1221->_M_end_of_storage = ptr1219;
        } else {
            unsigned long r1222 = std__vector_int__std__allocator_int_____size___const(t1134);
            unsigned long t1223 = __xlen1137;
            _Bool c1224 = ((r1222 >= t1223)) ? 1 : 0;
            if (c1224) {
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp21225;
              struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp31226;
              struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp41227;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp51228;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp61229;
              struct std__vector_int__std__allocator_int__* t1230 = __x1132;
              struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r1231 = std__vector_int__std__allocator_int_____begin___const(t1230);
              agg_tmp31226 = r1231;
              struct std__vector_int__std__allocator_int__* t1232 = __x1132;
              struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r1233 = std__vector_int__std__allocator_int_____end___const(t1232);
              agg_tmp41227 = r1233;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1234 = std__vector_int__std__allocator_int_____begin(t1134);
              agg_tmp51228 = r1234;
              struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t1235 = agg_tmp31226;
              struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t1236 = agg_tmp41227;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1237 = agg_tmp51228;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1238 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t1235, t1236, t1237);
              agg_tmp21225 = r1238;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1239 = std__vector_int__std__allocator_int_____end(t1134);
              agg_tmp61229 = r1239;
              struct std___Vector_base_int__std__allocator_int__* base1240 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1134 + 0);
              struct std__allocator_int_* r1241 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1240);
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1242 = agg_tmp21225;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1243 = agg_tmp61229;
              void_std___Destroy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(t1242, t1243, r1241);
            } else {
              struct std__vector_int__std__allocator_int__* t1244 = __x1132;
              struct std___Vector_base_int__std__allocator_int__* base1245 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1244 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1246 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1245->_M_impl) + 0);
              int* t1247 = base1246->_M_start;
              struct std__vector_int__std__allocator_int__* t1248 = __x1132;
              struct std___Vector_base_int__std__allocator_int__* base1249 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1248 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1250 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1249->_M_impl) + 0);
              int* t1251 = base1250->_M_start;
              unsigned long r1252 = std__vector_int__std__allocator_int_____size___const(t1134);
              int* ptr1253 = &(t1251)[r1252];
              struct std___Vector_base_int__std__allocator_int__* base1254 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1134 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1255 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1254->_M_impl) + 0);
              int* t1256 = base1255->_M_start;
              int* r1257 = int__std__copy_int___int__(t1247, ptr1253, t1256);
              struct std__vector_int__std__allocator_int__* t1258 = __x1132;
              struct std___Vector_base_int__std__allocator_int__* base1259 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1258 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1260 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1259->_M_impl) + 0);
              int* t1261 = base1260->_M_start;
              unsigned long r1262 = std__vector_int__std__allocator_int_____size___const(t1134);
              int* ptr1263 = &(t1261)[r1262];
              struct std__vector_int__std__allocator_int__* t1264 = __x1132;
              struct std___Vector_base_int__std__allocator_int__* base1265 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1264 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1266 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1265->_M_impl) + 0);
              int* t1267 = base1266->_M_finish;
              struct std___Vector_base_int__std__allocator_int__* base1268 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1134 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1269 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1268->_M_impl) + 0);
              int* t1270 = base1269->_M_finish;
              struct std___Vector_base_int__std__allocator_int__* base1271 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1134 + 0);
              struct std__allocator_int_* r1272 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1271);
              int* r1273 = int__std____uninitialized_copy_a_int___int___int___int_(ptr1263, t1267, t1270, r1272);
            }
        }
      struct std___Vector_base_int__std__allocator_int__* base1274 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1134 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1275 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1274->_M_impl) + 0);
      int* t1276 = base1275->_M_start;
      unsigned long t1277 = __xlen1137;
      int* ptr1278 = &(t1276)[t1277];
      struct std___Vector_base_int__std__allocator_int__* base1279 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1134 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1280 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1279->_M_impl) + 0);
      base1280->_M_finish = ptr1278;
    }
  __retval1133 = t1134;
  struct std__vector_int__std__allocator_int__* t1281 = __retval1133;
  return t1281;
}

// function: _ZNSt6vectorIiSaIiEEixEm
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* v1282, unsigned long v1283) {
bb1284:
  struct std__vector_int__std__allocator_int__* this1285;
  unsigned long __n1286;
  int* __retval1287;
  this1285 = v1282;
  __n1286 = v1283;
  struct std__vector_int__std__allocator_int__* t1288 = this1285;
    do {
          unsigned long t1289 = __n1286;
          unsigned long r1290 = std__vector_int__std__allocator_int_____size___const(t1288);
          _Bool c1291 = ((t1289 < r1290)) ? 1 : 0;
          _Bool u1292 = !c1291;
          if (u1292) {
            char* cast1293 = (char*)&(_str_16);
            int c1294 = 1263;
            char* cast1295 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm);
            char* cast1296 = (char*)&(_str_17);
            std____glibcxx_assert_fail(cast1293, c1294, cast1295, cast1296);
          }
      _Bool c1297 = 0;
      if (!c1297) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base1298 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1288 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1299 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1298->_M_impl) + 0);
  int* t1300 = base1299->_M_start;
  unsigned long t1301 = __n1286;
  int* ptr1302 = &(t1300)[t1301];
  __retval1287 = ptr1302;
  int* t1303 = __retval1287;
  return t1303;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v1304, void* v1305) {
bb1306:
  struct std__basic_ostream_char__std__char_traits_char__* this1307;
  void* __pf1308;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1309;
  this1307 = v1304;
  __pf1308 = v1305;
  struct std__basic_ostream_char__std__char_traits_char__* t1310 = this1307;
  void* t1311 = __pf1308;
  struct std__basic_ostream_char__std__char_traits_char__* r1312 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t1311)(t1310);
  __retval1309 = r1312;
  struct std__basic_ostream_char__std__char_traits_char__* t1313 = __retval1309;
  return t1313;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1314) {
bb1315:
  struct std__basic_ostream_char__std__char_traits_char__* __os1316;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1317;
  __os1316 = v1314;
  struct std__basic_ostream_char__std__char_traits_char__* t1318 = __os1316;
  struct std__basic_ostream_char__std__char_traits_char__* r1319 = std__ostream__flush(t1318);
  __retval1317 = r1319;
  struct std__basic_ostream_char__std__char_traits_char__* t1320 = __retval1317;
  return t1320;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v1321) {
bb1322:
  struct std__ctype_char_* __f1323;
  struct std__ctype_char_* __retval1324;
  __f1323 = v1321;
    struct std__ctype_char_* t1325 = __f1323;
    _Bool cast1326 = (_Bool)t1325;
    _Bool u1327 = !cast1326;
    if (u1327) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t1328 = __f1323;
  __retval1324 = t1328;
  struct std__ctype_char_* t1329 = __retval1324;
  return t1329;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v1330, char v1331) {
bb1332:
  struct std__ctype_char_* this1333;
  char __c1334;
  char __retval1335;
  this1333 = v1330;
  __c1334 = v1331;
  struct std__ctype_char_* t1336 = this1333;
    char t1337 = t1336->_M_widen_ok;
    _Bool cast1338 = (_Bool)t1337;
    if (cast1338) {
      char t1339 = __c1334;
      unsigned char cast1340 = (unsigned char)t1339;
      unsigned long cast1341 = (unsigned long)cast1340;
      char t1342 = t1336->_M_widen[cast1341];
      __retval1335 = t1342;
      char t1343 = __retval1335;
      return t1343;
    }
  std__ctype_char____M_widen_init___const(t1336);
  char t1344 = __c1334;
  void** v1345 = (void**)t1336;
  void* v1346 = *((void**)v1345);
  char vcall1349 = (char)__VERIFIER_virtual_call_char_char(t1336, 6, t1344);
  __retval1335 = vcall1349;
  char t1350 = __retval1335;
  return t1350;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v1351, char v1352) {
bb1353:
  struct std__basic_ios_char__std__char_traits_char__* this1354;
  char __c1355;
  char __retval1356;
  this1354 = v1351;
  __c1355 = v1352;
  struct std__basic_ios_char__std__char_traits_char__* t1357 = this1354;
  struct std__ctype_char_* t1358 = t1357->_M_ctype;
  struct std__ctype_char_* r1359 = std__ctype_char__const__std____check_facet_std__ctype_char___(t1358);
  char t1360 = __c1355;
  char r1361 = std__ctype_char___widen_char__const(r1359, t1360);
  __retval1356 = r1361;
  char t1362 = __retval1356;
  return t1362;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1363) {
bb1364:
  struct std__basic_ostream_char__std__char_traits_char__* __os1365;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1366;
  __os1365 = v1363;
  struct std__basic_ostream_char__std__char_traits_char__* t1367 = __os1365;
  struct std__basic_ostream_char__std__char_traits_char__* t1368 = __os1365;
  void** v1369 = (void**)t1368;
  void* v1370 = *((void**)v1369);
  unsigned char* cast1371 = (unsigned char*)v1370;
  long c1372 = -24;
  unsigned char* ptr1373 = &(cast1371)[c1372];
  long* cast1374 = (long*)ptr1373;
  long t1375 = *cast1374;
  unsigned char* cast1376 = (unsigned char*)t1368;
  unsigned char* ptr1377 = &(cast1376)[t1375];
  struct std__basic_ostream_char__std__char_traits_char__* cast1378 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1377;
  struct std__basic_ios_char__std__char_traits_char__* cast1379 = (struct std__basic_ios_char__std__char_traits_char__*)cast1378;
  char c1380 = 10;
  char r1381 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast1379, c1380);
  struct std__basic_ostream_char__std__char_traits_char__* r1382 = std__ostream__put(t1367, r1381);
  struct std__basic_ostream_char__std__char_traits_char__* r1383 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r1382);
  __retval1366 = r1383;
  struct std__basic_ostream_char__std__char_traits_char__* t1384 = __retval1366;
  return t1384;
}

// function: _ZNKSt6vectorIiSaIiEE14_M_range_checkEm
void std__vector_int__std__allocator_int______M_range_check_unsigned_long__const(struct std__vector_int__std__allocator_int__* v1385, unsigned long v1386) {
bb1387:
  struct std__vector_int__std__allocator_int__* this1388;
  unsigned long __n1389;
  this1388 = v1385;
  __n1389 = v1386;
  struct std__vector_int__std__allocator_int__* t1390 = this1388;
    unsigned long t1391 = __n1389;
    unsigned long r1392 = std__vector_int__std__allocator_int_____size___const(t1390);
    _Bool c1393 = ((t1391 >= r1392)) ? 1 : 0;
    if (c1393) {
      char* cast1394 = (char*)&(_str_18);
      unsigned long t1395 = __n1389;
      unsigned long r1396 = std__vector_int__std__allocator_int_____size___const(t1390);
      std____throw_out_of_range_fmt(cast1394, t1395, r1396);
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE2atEm
int* std__vector_int__std__allocator_int_____at(struct std__vector_int__std__allocator_int__* v1397, unsigned long v1398) {
bb1399:
  struct std__vector_int__std__allocator_int__* this1400;
  unsigned long __n1401;
  int* __retval1402;
  this1400 = v1397;
  __n1401 = v1398;
  struct std__vector_int__std__allocator_int__* t1403 = this1400;
  unsigned long t1404 = __n1401;
  std__vector_int__std__allocator_int______M_range_check_unsigned_long__const(t1403, t1404);
  unsigned long t1405 = __n1401;
  int* r1406 = std__vector_int__std__allocator_int_____operator__(t1403, t1405);
  __retval1402 = r1406;
  int* t1407 = __retval1402;
  return t1407;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v1408) {
bb1409:
  struct std__vector_int__std__allocator_int__* this1410;
  this1410 = v1408;
  struct std__vector_int__std__allocator_int__* t1411 = this1410;
    struct std___Vector_base_int__std__allocator_int__* base1412 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1411 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1413 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1412->_M_impl) + 0);
    int* t1414 = base1413->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base1415 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1411 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1416 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1415->_M_impl) + 0);
    int* t1417 = base1416->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base1418 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1411 + 0);
    struct std__allocator_int_* r1419 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1418);
    void_std___Destroy_int___int_(t1414, t1417, r1419);
  {
    struct std___Vector_base_int__std__allocator_int__* base1420 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1411 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base1420);
  }
  return;
}

// function: main
int main() {
bb1421:
  int __retval1422;
  struct std__vector_int__std__allocator_int__ integers11423;
  struct std__vector_int__std__allocator_int__ integers21424;
  struct std__vector_int__std__allocator_int__ integers31425;
  int c1426 = 0;
  __retval1422 = c1426;
  std__vector_int__std__allocator_int_____vector_2(&integers11423);
    std__vector_int__std__allocator_int_____vector_2(&integers21424);
      char* cast1427 = (char*)&(_str);
      struct std__basic_ostream_char__std__char_traits_char__* r1428 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1427);
      unsigned long r1429 = std__vector_int__std__allocator_int_____size___const(&integers11423);
      struct std__basic_ostream_char__std__char_traits_char__* r1430 = std__ostream__operator___2(r1428, r1429);
      char* cast1431 = (char*)&(_str_1);
      struct std__basic_ostream_char__std__char_traits_char__* r1432 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1430, cast1431);
      outputVector(&integers11423);
      char* cast1433 = (char*)&(_str_2);
      struct std__basic_ostream_char__std__char_traits_char__* r1434 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1433);
      unsigned long r1435 = std__vector_int__std__allocator_int_____size___const(&integers21424);
      struct std__basic_ostream_char__std__char_traits_char__* r1436 = std__ostream__operator___2(r1434, r1435);
      char* cast1437 = (char*)&(_str_1);
      struct std__basic_ostream_char__std__char_traits_char__* r1438 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1436, cast1437);
      outputVector(&integers21424);
      char* cast1439 = (char*)&(_str_3);
      struct std__basic_ostream_char__std__char_traits_char__* r1440 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1439);
      inputVector(&integers11423);
      inputVector(&integers21424);
      char* cast1441 = (char*)&(_str_4);
      struct std__basic_ostream_char__std__char_traits_char__* r1442 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1441);
      char* cast1443 = (char*)&(_str_5);
      struct std__basic_ostream_char__std__char_traits_char__* r1444 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1442, cast1443);
      outputVector(&integers11423);
      char* cast1445 = (char*)&(_str_6);
      struct std__basic_ostream_char__std__char_traits_char__* r1446 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1445);
      outputVector(&integers21424);
      char* cast1447 = (char*)&(_str_7);
      struct std__basic_ostream_char__std__char_traits_char__* r1448 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1447);
        _Bool r1449 = bool_std__operator___int__std__allocator_int___(&integers11423, &integers21424);
        _Bool u1450 = !r1449;
        if (u1450) {
          char* cast1451 = (char*)&(_str_8);
          struct std__basic_ostream_char__std__char_traits_char__* r1452 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1451);
        }
      std__vector_int__std__allocator_int_____vector(&integers31425, &integers11423);
        char* cast1453 = (char*)&(_str_9);
        struct std__basic_ostream_char__std__char_traits_char__* r1454 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1453);
        unsigned long r1455 = std__vector_int__std__allocator_int_____size___const(&integers31425);
        struct std__basic_ostream_char__std__char_traits_char__* r1456 = std__ostream__operator___2(r1454, r1455);
        char* cast1457 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* r1458 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1456, cast1457);
        outputVector(&integers31425);
        char* cast1459 = (char*)&(_str_10);
        struct std__basic_ostream_char__std__char_traits_char__* r1460 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1459);
        struct std__vector_int__std__allocator_int__* r1461 = std__vector_int__std__allocator_int_____operator_(&integers11423, &integers21424);
        char* cast1462 = (char*)&(_str_5);
        struct std__basic_ostream_char__std__char_traits_char__* r1463 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1462);
        outputVector(&integers11423);
        char* cast1464 = (char*)&(_str_6);
        struct std__basic_ostream_char__std__char_traits_char__* r1465 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1464);
        outputVector(&integers11423);
        char* cast1466 = (char*)&(_str_11);
        struct std__basic_ostream_char__std__char_traits_char__* r1467 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1466);
          _Bool r1468 = bool_std__operator___int__std__allocator_int___(&integers11423, &integers21424);
          if (r1468) {
            char* cast1469 = (char*)&(_str_12);
            struct std__basic_ostream_char__std__char_traits_char__* r1470 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1469);
          }
        char* cast1471 = (char*)&(_str_13);
        struct std__basic_ostream_char__std__char_traits_char__* r1472 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1471);
        unsigned long c1473 = 5;
        int* r1474 = std__vector_int__std__allocator_int_____operator__(&integers11423, c1473);
        int t1475 = *r1474;
        struct std__basic_ostream_char__std__char_traits_char__* r1476 = std__ostream__operator__(r1472, t1475);
        char* cast1477 = (char*)&(_str_14);
        struct std__basic_ostream_char__std__char_traits_char__* r1478 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1477);
        int c1479 = 1000;
        unsigned long c1480 = 5;
        int* r1481 = std__vector_int__std__allocator_int_____operator__(&integers11423, c1480);
        *r1481 = c1479;
        char* cast1482 = (char*)&(_str_5);
        struct std__basic_ostream_char__std__char_traits_char__* r1483 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1482);
        outputVector(&integers11423);
        char* cast1484 = (char*)&(_str_15);
        struct std__basic_ostream_char__std__char_traits_char__* r1485 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1484);
        struct std__basic_ostream_char__std__char_traits_char__* r1486 = std__ostream__operator___std__ostream_____(r1485, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        int c1487 = 1000;
        unsigned long c1488 = 15;
        int* r1489 = std__vector_int__std__allocator_int_____at(&integers11423, c1488);
        *r1489 = c1487;
        int c1490 = 0;
        __retval1422 = c1490;
        int t1491 = __retval1422;
        int ret_val1492 = t1491;
        {
          std__vector_int__std__allocator_int______vector(&integers31425);
        }
        {
          std__vector_int__std__allocator_int______vector(&integers21424);
        }
        {
          std__vector_int__std__allocator_int______vector(&integers11423);
        }
        return ret_val1492;
  int t1493 = __retval1422;
  return t1493;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1494) {
bb1495:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1496;
  this1496 = v1494;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1497 = this1496;
  struct std__allocator_int_* base1498 = (struct std__allocator_int_*)((char *)t1497 + 0);
  std__allocator_int___allocator_2(base1498);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1499 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t1497 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base1499);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1500) {
bb1501:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1502;
  this1502 = v1500;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1503 = this1502;
  {
    struct std__allocator_int_* base1504 = (struct std__allocator_int_*)((char *)t1503 + 0);
    std__allocator_int____allocator(base1504);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2Ev
void std___Vector_base_int__std__allocator_int______Vector_base_2(struct std___Vector_base_int__std__allocator_int__* v1505) {
bb1506:
  struct std___Vector_base_int__std__allocator_int__* this1507;
  this1507 = v1505;
  struct std___Vector_base_int__std__allocator_int__* t1508 = this1507;
  _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(&t1508->_M_impl);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1509:
  _Bool __retval1510;
    _Bool c1511 = 0;
    __retval1510 = c1511;
    _Bool t1512 = __retval1510;
    return t1512;
  abort();
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1513, int* v1514, unsigned long v1515) {
bb1516:
  struct std____new_allocator_int_* this1517;
  int* __p1518;
  unsigned long __n1519;
  this1517 = v1513;
  __p1518 = v1514;
  __n1519 = v1515;
  struct std____new_allocator_int_* t1520 = this1517;
    unsigned long c1521 = 4;
    unsigned long c1522 = 16;
    _Bool c1523 = ((c1521 > c1522)) ? 1 : 0;
    if (c1523) {
      int* t1524 = __p1518;
      void* cast1525 = (void*)t1524;
      unsigned long t1526 = __n1519;
      unsigned long c1527 = 4;
      unsigned long b1528 = t1526 * c1527;
      unsigned long c1529 = 4;
      operator_delete_3(cast1525, b1528, c1529);
      return;
    }
  int* t1530 = __p1518;
  void* cast1531 = (void*)t1530;
  unsigned long t1532 = __n1519;
  unsigned long c1533 = 4;
  unsigned long b1534 = t1532 * c1533;
  operator_delete_2(cast1531, b1534);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1535, int* v1536, unsigned long v1537) {
bb1538:
  struct std__allocator_int_* this1539;
  int* __p1540;
  unsigned long __n1541;
  this1539 = v1535;
  __p1540 = v1536;
  __n1541 = v1537;
  struct std__allocator_int_* t1542 = this1539;
    _Bool r1543 = std____is_constant_evaluated();
    if (r1543) {
      int* t1544 = __p1540;
      void* cast1545 = (void*)t1544;
      operator_delete(cast1545);
      return;
    }
  struct std____new_allocator_int_* base1546 = (struct std____new_allocator_int_*)((char *)t1542 + 0);
  int* t1547 = __p1540;
  unsigned long t1548 = __n1541;
  std____new_allocator_int___deallocate(base1546, t1547, t1548);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1549, int* v1550, unsigned long v1551) {
bb1552:
  struct std__allocator_int_* __a1553;
  int* __p1554;
  unsigned long __n1555;
  __a1553 = v1549;
  __p1554 = v1550;
  __n1555 = v1551;
  struct std__allocator_int_* t1556 = __a1553;
  int* t1557 = __p1554;
  unsigned long t1558 = __n1555;
  std__allocator_int___deallocate(t1556, t1557, t1558);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v1559, int* v1560, unsigned long v1561) {
bb1562:
  struct std___Vector_base_int__std__allocator_int__* this1563;
  int* __p1564;
  unsigned long __n1565;
  this1563 = v1559;
  __p1564 = v1560;
  __n1565 = v1561;
  struct std___Vector_base_int__std__allocator_int__* t1566 = this1563;
    int* t1567 = __p1564;
    _Bool cast1568 = (_Bool)t1567;
    if (cast1568) {
      struct std__allocator_int_* base1569 = (struct std__allocator_int_*)((char *)&(t1566->_M_impl) + 0);
      int* t1570 = __p1564;
      unsigned long t1571 = __n1565;
      std__allocator_traits_std__allocator_int_____deallocate(base1569, t1570, t1571);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1572) {
bb1573:
  struct std___Vector_base_int__std__allocator_int__* this1574;
  this1574 = v1572;
  struct std___Vector_base_int__std__allocator_int__* t1575 = this1574;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1576 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1575->_M_impl) + 0);
    int* t1577 = base1576->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1578 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1575->_M_impl) + 0);
    int* t1579 = base1578->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1580 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1575->_M_impl) + 0);
    int* t1581 = base1580->_M_start;
    long diff1582 = t1579 - t1581;
    unsigned long cast1583 = (unsigned long)diff1582;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1575, t1577, cast1583);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1575->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v1584) {
bb1585:
  struct std____new_allocator_int_* this1586;
  this1586 = v1584;
  struct std____new_allocator_int_* t1587 = this1586;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator_2(struct std__allocator_int_* v1588) {
bb1589:
  struct std__allocator_int_* this1590;
  this1590 = v1588;
  struct std__allocator_int_* t1591 = this1590;
  struct std____new_allocator_int_* base1592 = (struct std____new_allocator_int_*)((char *)t1591 + 0);
  std____new_allocator_int_____new_allocator_2(base1592);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1593) {
bb1594:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1595;
  this1595 = v1593;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1596 = this1595;
  int* c1597 = ((void*)0);
  t1596->_M_start = c1597;
  int* c1598 = ((void*)0);
  t1596->_M_finish = c1598;
  int* c1599 = ((void*)0);
  t1596->_M_end_of_storage = c1599;
  return;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v1600, struct std__allocator_int_* v1601) {
bb1602:
  struct std__allocator_int_* this1603;
  struct std__allocator_int_* __a1604;
  this1603 = v1600;
  __a1604 = v1601;
  struct std__allocator_int_* t1605 = this1603;
  struct std____new_allocator_int_* base1606 = (struct std____new_allocator_int_*)((char *)t1605 + 0);
  struct std__allocator_int_* t1607 = __a1604;
  struct std____new_allocator_int_* base1608 = (struct std____new_allocator_int_*)((char *)t1607 + 0);
  std____new_allocator_int_____new_allocator(base1606, base1608);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE37select_on_container_copy_constructionERKS0_
struct std__allocator_int_ std__allocator_traits_std__allocator_int_____select_on_container_copy_construction(struct std__allocator_int_* v1609) {
bb1610:
  struct std__allocator_int_* __rhs1611;
  struct std__allocator_int_ __retval1612;
  __rhs1611 = v1609;
  struct std__allocator_int_* t1613 = __rhs1611;
  std__allocator_int___allocator(&__retval1612, t1613);
  struct std__allocator_int_ t1614 = __retval1612;
  return t1614;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIiEiE17_S_select_on_copyERKS1_
struct std__allocator_int_ __gnu_cxx____alloc_traits_std__allocator_int___int____S_select_on_copy(struct std__allocator_int_* v1615) {
bb1616:
  struct std__allocator_int_* __a1617;
  struct std__allocator_int_ __retval1618;
  __a1617 = v1615;
  struct std__allocator_int_* t1619 = __a1617;
  struct std__allocator_int_ r1620 = std__allocator_traits_std__allocator_int_____select_on_container_copy_construction(t1619);
  __retval1618 = r1620;
  struct std__allocator_int_ t1621 = __retval1618;
  return t1621;
}

// function: _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* v1622) {
bb1623:
  struct std___Vector_base_int__std__allocator_int__* this1624;
  struct std__allocator_int_* __retval1625;
  this1624 = v1622;
  struct std___Vector_base_int__std__allocator_int__* t1626 = this1624;
  struct std__allocator_int_* base1627 = (struct std__allocator_int_*)((char *)&(t1626->_M_impl) + 0);
  __retval1625 = base1627;
  struct std__allocator_int_* t1628 = __retval1625;
  return t1628;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1629, struct std__allocator_int_* v1630) {
bb1631:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1632;
  struct std__allocator_int_* __a1633;
  this1632 = v1629;
  __a1633 = v1630;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1634 = this1632;
  struct std__allocator_int_* base1635 = (struct std__allocator_int_*)((char *)t1634 + 0);
  struct std__allocator_int_* t1636 = __a1633;
  std__allocator_int___allocator(base1635, t1636);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1637 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t1634 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base1637);
  return;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v1638) {
bb1639:
  struct std____new_allocator_int_* this1640;
  unsigned long __retval1641;
  this1640 = v1638;
  struct std____new_allocator_int_* t1642 = this1640;
  unsigned long c1643 = 9223372036854775807;
  unsigned long c1644 = 4;
  unsigned long b1645 = c1643 / c1644;
  __retval1641 = b1645;
  unsigned long t1646 = __retval1641;
  return t1646;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v1647, unsigned long v1648, void* v1649) {
bb1650:
  struct std____new_allocator_int_* this1651;
  unsigned long __n1652;
  void* unnamed1653;
  int* __retval1654;
  this1651 = v1647;
  __n1652 = v1648;
  unnamed1653 = v1649;
  struct std____new_allocator_int_* t1655 = this1651;
    unsigned long t1656 = __n1652;
    unsigned long r1657 = std____new_allocator_int____M_max_size___const(t1655);
    _Bool c1658 = ((t1656 > r1657)) ? 1 : 0;
    if (c1658) {
        unsigned long t1659 = __n1652;
        unsigned long c1660 = -1;
        unsigned long c1661 = 4;
        unsigned long b1662 = c1660 / c1661;
        _Bool c1663 = ((t1659 > b1662)) ? 1 : 0;
        if (c1663) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c1664 = 4;
    unsigned long c1665 = 16;
    _Bool c1666 = ((c1664 > c1665)) ? 1 : 0;
    if (c1666) {
      unsigned long __al1667;
      unsigned long c1668 = 4;
      __al1667 = c1668;
      unsigned long t1669 = __n1652;
      unsigned long c1670 = 4;
      unsigned long b1671 = t1669 * c1670;
      unsigned long t1672 = __al1667;
      void* r1673 = operator_new_2(b1671, t1672);
      int* cast1674 = (int*)r1673;
      __retval1654 = cast1674;
      int* t1675 = __retval1654;
      return t1675;
    }
  unsigned long t1676 = __n1652;
  unsigned long c1677 = 4;
  unsigned long b1678 = t1676 * c1677;
  void* r1679 = operator_new(b1678);
  int* cast1680 = (int*)r1679;
  __retval1654 = cast1680;
  int* t1681 = __retval1654;
  return t1681;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v1682, unsigned long v1683) {
bb1684:
  struct std__allocator_int_* this1685;
  unsigned long __n1686;
  int* __retval1687;
  this1685 = v1682;
  __n1686 = v1683;
  struct std__allocator_int_* t1688 = this1685;
    _Bool r1689 = std____is_constant_evaluated();
    if (r1689) {
        unsigned long t1690 = __n1686;
        unsigned long c1691 = 4;
        unsigned long ovr1692;
        _Bool ovf1693 = __builtin_mul_overflow(t1690, c1691, &ovr1692);
        __n1686 = ovr1692;
        if (ovf1693) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1694 = __n1686;
      void* r1695 = operator_new(t1694);
      int* cast1696 = (int*)r1695;
      __retval1687 = cast1696;
      int* t1697 = __retval1687;
      return t1697;
    }
  struct std____new_allocator_int_* base1698 = (struct std____new_allocator_int_*)((char *)t1688 + 0);
  unsigned long t1699 = __n1686;
  void* c1700 = ((void*)0);
  int* r1701 = std____new_allocator_int___allocate(base1698, t1699, c1700);
  __retval1687 = r1701;
  int* t1702 = __retval1687;
  return t1702;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v1703, unsigned long v1704) {
bb1705:
  struct std__allocator_int_* __a1706;
  unsigned long __n1707;
  int* __retval1708;
  __a1706 = v1703;
  __n1707 = v1704;
  struct std__allocator_int_* t1709 = __a1706;
  unsigned long t1710 = __n1707;
  int* r1711 = std__allocator_int___allocate(t1709, t1710);
  __retval1708 = r1711;
  int* t1712 = __retval1708;
  return t1712;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v1713, unsigned long v1714) {
bb1715:
  struct std___Vector_base_int__std__allocator_int__* this1716;
  unsigned long __n1717;
  int* __retval1718;
  this1716 = v1713;
  __n1717 = v1714;
  struct std___Vector_base_int__std__allocator_int__* t1719 = this1716;
  unsigned long t1720 = __n1717;
  unsigned long c1721 = 0;
  _Bool c1722 = ((t1720 != c1721)) ? 1 : 0;
  int* ternary1723;
  if (c1722) {
    struct std__allocator_int_* base1724 = (struct std__allocator_int_*)((char *)&(t1719->_M_impl) + 0);
    unsigned long t1725 = __n1717;
    int* r1726 = std__allocator_traits_std__allocator_int_____allocate(base1724, t1725);
    ternary1723 = (int*)r1726;
  } else {
    int* c1727 = ((void*)0);
    ternary1723 = (int*)c1727;
  }
  __retval1718 = ternary1723;
  int* t1728 = __retval1718;
  return t1728;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* v1729, unsigned long v1730) {
bb1731:
  struct std___Vector_base_int__std__allocator_int__* this1732;
  unsigned long __n1733;
  this1732 = v1729;
  __n1733 = v1730;
  struct std___Vector_base_int__std__allocator_int__* t1734 = this1732;
  unsigned long t1735 = __n1733;
  int* r1736 = std___Vector_base_int__std__allocator_int______M_allocate(t1734, t1735);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1737 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1734->_M_impl) + 0);
  base1737->_M_start = r1736;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1738 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1734->_M_impl) + 0);
  int* t1739 = base1738->_M_start;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1740 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1734->_M_impl) + 0);
  base1740->_M_finish = t1739;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1741 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1734->_M_impl) + 0);
  int* t1742 = base1741->_M_start;
  unsigned long t1743 = __n1733;
  int* ptr1744 = &(t1742)[t1743];
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1745 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1734->_M_impl) + 0);
  base1745->_M_end_of_storage = ptr1744;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1746, unsigned long v1747, struct std__allocator_int_* v1748) {
bb1749:
  struct std___Vector_base_int__std__allocator_int__* this1750;
  unsigned long __n1751;
  struct std__allocator_int_* __a1752;
  this1750 = v1746;
  __n1751 = v1747;
  __a1752 = v1748;
  struct std___Vector_base_int__std__allocator_int__* t1753 = this1750;
  struct std__allocator_int_* t1754 = __a1752;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t1753->_M_impl, t1754);
    unsigned long t1755 = __n1751;
    std___Vector_base_int__std__allocator_int______M_create_storage(t1753, t1755);
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v1756) {
bb1757:
  struct std__allocator_int_* this1758;
  this1758 = v1756;
  struct std__allocator_int_* t1759 = this1758;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1760, int** v1761) {
bb1762:
  struct std___UninitDestroyGuard_int____void_* this1763;
  int** __first1764;
  this1763 = v1760;
  __first1764 = v1761;
  struct std___UninitDestroyGuard_int____void_* t1765 = this1763;
  int** t1766 = __first1764;
  int* t1767 = *t1766;
  t1765->_M_first = t1767;
  int** t1768 = __first1764;
  t1765->_M_cur = t1768;
  return;
}

// function: _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v1769, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v1770) {
bb1771:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __lhs1772;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __rhs1773;
  _Bool __retval1774;
  __lhs1772 = v1769;
  __rhs1773 = v1770;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t1775 = __lhs1772;
  int** r1776 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t1775);
  int* t1777 = *r1776;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t1778 = __rhs1773;
  int** r1779 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t1778);
  int* t1780 = *r1779;
  _Bool c1781 = ((t1777 == t1780)) ? 1 : 0;
  __retval1774 = c1781;
  _Bool t1782 = __retval1774;
  return t1782;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v1783, int* v1784) {
bb1785:
  int* __location1786;
  int* __args1787;
  int* __retval1788;
  void* __loc1789;
  __location1786 = v1783;
  __args1787 = v1784;
  int* t1790 = __location1786;
  void* cast1791 = (void*)t1790;
  __loc1789 = cast1791;
    void* t1792 = __loc1789;
    int* cast1793 = (int*)t1792;
    int* t1794 = __args1787;
    int t1795 = *t1794;
    *cast1793 = t1795;
    __retval1788 = cast1793;
    int* t1796 = __retval1788;
    return t1796;
  abort();
}

// function: _ZSt10_ConstructIiJRKiEEvPT_DpOT0_
void void_std___Construct_int__int_const__(int* v1797, int* v1798) {
bb1799:
  int* __p1800;
  int* __args1801;
  __p1800 = v1797;
  __args1801 = v1798;
    _Bool r1802 = std____is_constant_evaluated();
    if (r1802) {
      int* t1803 = __p1800;
      int* t1804 = __args1801;
      int* r1805 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1803, t1804);
      return;
    }
  int* t1806 = __p1800;
  void* cast1807 = (void*)t1806;
  int* cast1808 = (int*)cast1807;
  int* t1809 = __args1801;
  int t1810 = *t1809;
  *cast1808 = t1810;
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v1811) {
bb1812:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this1813;
  int* __retval1814;
  this1813 = v1811;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t1815 = this1813;
  int* t1816 = t1815->_M_current;
  __retval1814 = t1816;
  int* t1817 = __retval1814;
  return t1817;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v1818) {
bb1819:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this1820;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __retval1821;
  this1820 = v1818;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t1822 = this1820;
  int* t1823 = t1822->_M_current;
  int c1824 = 1;
  int* ptr1825 = &(t1823)[c1824];
  t1822->_M_current = ptr1825;
  __retval1821 = t1822;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t1826 = __retval1821;
  return t1826;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v1827) {
bb1828:
  struct std___UninitDestroyGuard_int____void_* this1829;
  this1829 = v1827;
  struct std___UninitDestroyGuard_int____void_* t1830 = this1829;
  int** c1831 = ((void*)0);
  t1830->_M_cur = c1831;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1832) {
bb1833:
  struct std___UninitDestroyGuard_int____void_* this1834;
  this1834 = v1832;
  struct std___UninitDestroyGuard_int____void_* t1835 = this1834;
    int** t1836 = t1835->_M_cur;
    int** c1837 = ((void*)0);
    _Bool c1838 = ((t1836 != c1837)) ? 1 : 0;
    if (c1838) {
      int* t1839 = t1835->_M_first;
      int** t1840 = t1835->_M_cur;
      int* t1841 = *t1840;
      void_std___Destroy_int__(t1839, t1841);
    }
  return;
}

// function: _ZSt16__do_uninit_copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEES7_PiET1_T_T0_S9_
int* int__std____do_uninit_copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v1842, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v1843, int* v1844) {
bb1845:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __first1846;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __last1847;
  int* __result1848;
  int* __retval1849;
  struct std___UninitDestroyGuard_int____void_ __guard1850;
  __first1846 = v1842;
  __last1847 = v1843;
  __result1848 = v1844;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard1850, &__result1848);
      while (1) {
        _Bool r1852 = _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first1846, &__last1847);
        _Bool u1853 = !r1852;
        if (!u1853) break;
        int* t1854 = __result1848;
        int* r1855 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______operator____const(&__first1846);
        void_std___Construct_int__int_const__(t1854, r1855);
      for_step1851: ;
        struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* r1856 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______operator__(&__first1846);
        int* t1857 = __result1848;
        int c1858 = 1;
        int* ptr1859 = &(t1857)[c1858];
        __result1848 = ptr1859;
      }
    std___UninitDestroyGuard_int___void___release(&__guard1850);
    int* t1860 = __result1848;
    __retval1849 = t1860;
    int* t1861 = __retval1849;
    int* ret_val1862 = t1861;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1850);
    }
    return ret_val1862;
  abort();
}

// function: _ZN9__gnu_cxxmiIPKiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS9_SC_
long __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int_const___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v1863, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v1864) {
bb1865:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __lhs1866;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __rhs1867;
  long __retval1868;
  __lhs1866 = v1863;
  __rhs1867 = v1864;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t1869 = __lhs1866;
  int** r1870 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t1869);
  int* t1871 = *r1870;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t1872 = __rhs1867;
  int** r1873 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t1872);
  int* t1874 = *r1873;
  long diff1875 = t1871 - t1874;
  __retval1868 = diff1875;
  long t1876 = __retval1868;
  return t1876;
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v1877) {
bb1878:
  int* __it1879;
  int* __retval1880;
  __it1879 = v1877;
  int* t1881 = __it1879;
  __retval1880 = t1881;
  int* t1882 = __retval1880;
  return t1882;
}

// function: _ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET0_T_SA_S9_
int* int__std__uninitialized_copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v1883, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v1884, int* v1885) {
bb1886:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __first1887;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __last1888;
  int* __result1889;
  int* __retval1890;
  __first1887 = v1883;
  __last1888 = v1884;
  __result1889 = v1885;
      long __n1891;
      long r1892 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int_const___std__vector_int__std__allocator_int_____(&__last1888, &__first1887);
      __n1891 = r1892;
        long t1893 = __n1891;
        long c1894 = 0;
        _Bool c1895 = ((t1893 > c1894)) ? 1 : 0;
        if (c1895) {
          struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp01896;
          int* t1897 = __result1889;
          int* r1898 = int__std____niter_base_int__(t1897);
          void* cast1899 = (void*)r1898;
          agg_tmp01896 = __first1887; // copy
          struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t1900 = agg_tmp01896;
          int* r1901 = int_const__std____niter_base_int_const___std__vector_int__std__allocator_int_____(t1900);
          void* cast1902 = (void*)r1901;
          long t1903 = __n1891;
          unsigned long cast1904 = (unsigned long)t1903;
          unsigned long c1905 = 4;
          unsigned long b1906 = cast1904 * c1905;
          void* r1907 = memcpy(cast1899, cast1902, b1906);
          long t1908 = __n1891;
          int* t1909 = __result1889;
          int* ptr1910 = &(t1909)[t1908];
          __result1889 = ptr1910;
        }
      int* t1911 = __result1889;
      __retval1890 = t1911;
      int* t1912 = __retval1890;
      return t1912;
  abort();
}

// function: _ZSt22__uninitialized_copy_aIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEES7_PiiET1_T_T0_S9_RSaIT2_E
int* int__std____uninitialized_copy_a___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______int___int_(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v1913, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ v1914, int* v1915, struct std__allocator_int_* v1916) {
bb1917:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __first1918;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __last1919;
  int* __result1920;
  struct std__allocator_int_* unnamed1921;
  int* __retval1922;
  __first1918 = v1913;
  __last1919 = v1914;
  __result1920 = v1915;
  unnamed1921 = v1916;
    _Bool r1923 = std__is_constant_evaluated();
    if (r1923) {
      struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp01924;
      struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp11925;
      agg_tmp01924 = __first1918; // copy
      agg_tmp11925 = __last1919; // copy
      int* t1926 = __result1920;
      struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t1927 = agg_tmp01924;
      struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t1928 = agg_tmp11925;
      int* r1929 = int__std____do_uninit_copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______int__(t1927, t1928, t1926);
      __retval1922 = r1929;
      int* t1930 = __retval1922;
      return t1930;
    }
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp21931;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ agg_tmp31932;
    agg_tmp21931 = __first1918; // copy
    agg_tmp31932 = __last1919; // copy
    int* t1933 = __result1920;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t1934 = agg_tmp21931;
    struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t1935 = agg_tmp31932;
    int* r1936 = int__std__uninitialized_copy___gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______int__(t1934, t1935, t1933);
    __retval1922 = r1936;
    int* t1937 = __retval1922;
    return t1937;
  abort();
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v1938) {
bb1939:
  struct std___Vector_base_int__std__allocator_int__* this1940;
  struct std__allocator_int_* __retval1941;
  this1940 = v1938;
  struct std___Vector_base_int__std__allocator_int__* t1942 = this1940;
  struct std__allocator_int_* base1943 = (struct std__allocator_int_*)((char *)&(t1942->_M_impl) + 0);
  __retval1941 = base1943;
  struct std__allocator_int_* t1944 = __retval1941;
  return t1944;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1945, struct std____new_allocator_int_* v1946) {
bb1947:
  struct std____new_allocator_int_* this1948;
  struct std____new_allocator_int_* unnamed1949;
  this1948 = v1945;
  unnamed1949 = v1946;
  struct std____new_allocator_int_* t1950 = this1948;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1951) {
bb1952:
  int* __location1953;
  __location1953 = v1951;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1954, int* v1955) {
bb1956:
  int* __first1957;
  int* __last1958;
  __first1957 = v1954;
  __last1958 = v1955;
      _Bool r1959 = std____is_constant_evaluated();
      if (r1959) {
          while (1) {
            int* t1961 = __first1957;
            int* t1962 = __last1958;
            _Bool c1963 = ((t1961 != t1962)) ? 1 : 0;
            if (!c1963) break;
            int* t1964 = __first1957;
            void_std__destroy_at_int_(t1964);
          for_step1960: ;
            int* t1965 = __first1957;
            int c1966 = 1;
            int* ptr1967 = &(t1965)[c1966];
            __first1957 = ptr1967;
          }
      }
  return;
}

