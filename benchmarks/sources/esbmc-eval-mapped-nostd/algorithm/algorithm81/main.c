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
struct __gnu_cxx____normal_iterator_int____void_ { int* _M_current; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
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
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[15] = "first[3] != 80";
char _str_1[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm81/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[16] = "first contains:";
char _str_3[2] = " ";
char _str_4[26] = "vector::_M_realloc_append";
char _str_5[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv[77] = "reference std::vector<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_6[15] = "!this->empty()";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_7[19] = "__n < this->size()";
int op_increase(int p0);
int op_sum(int p0, int p1);
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
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__transform___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_____int__int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p3, void* p4);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
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
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
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
void void_std___Destroy_int__(int* p0, int* p1);
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);

// function: _Z11op_increasei
int op_increase(int v0) {
bb1:
  int i2;
  int __retval3;
  i2 = v0;
  int t4 = i2;
  int u5 = t4 + 1;
  i2 = u5;
  __retval3 = u5;
  int t6 = __retval3;
  return t6;
}

// function: _Z6op_sumii
int op_sum(int v7, int v8) {
bb9:
  int i10;
  int j11;
  int __retval12;
  i10 = v7;
  j11 = v8;
  int t13 = i10;
  int t14 = j11;
  int b15 = t13 + t14;
  __retval12 = b15;
  int t16 = __retval12;
  return t16;
}

// function: _ZNSt6vectorIiSaIiEEC2Ev
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* v17) {
bb18:
  struct std__vector_int__std__allocator_int__* this19;
  this19 = v17;
  struct std__vector_int__std__allocator_int__* t20 = this19;
  struct std___Vector_base_int__std__allocator_int__* base21 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t20 + 0);
  std___Vector_base_int__std__allocator_int______Vector_base(base21);
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2Ev
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v22) {
bb23:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this24;
  this24 = v22;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t25 = this24;
  int* c26 = ((void*)0);
  t25->_M_current = c26;
  return;
}

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v27, int* v28) {
bb29:
  int* __location30;
  int* __args31;
  int* __retval32;
  void* __loc33;
  __location30 = v27;
  __args31 = v28;
  int* t34 = __location30;
  void* cast35 = (void*)t34;
  __loc33 = cast35;
    void* t36 = __loc33;
    int* cast37 = (int*)t36;
    int* t38 = __args31;
    int t39 = *t38;
    *cast37 = t39;
    __retval32 = cast37;
    int* t40 = __retval32;
    return t40;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* v41, int* v42, int* v43) {
bb44:
  struct std__allocator_int_* __a45;
  int* __p46;
  int* __args47;
  __a45 = v41;
  __p46 = v42;
  __args47 = v43;
  int* t48 = __p46;
  int* t49 = __args47;
  int* r50 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t48, t49);
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v51, unsigned long* v52) {
bb53:
  unsigned long* __a54;
  unsigned long* __b55;
  unsigned long* __retval56;
  __a54 = v51;
  __b55 = v52;
    unsigned long* t57 = __b55;
    unsigned long t58 = *t57;
    unsigned long* t59 = __a54;
    unsigned long t60 = *t59;
    _Bool c61 = ((t58 < t60)) ? 1 : 0;
    if (c61) {
      unsigned long* t62 = __b55;
      __retval56 = t62;
      unsigned long* t63 = __retval56;
      return t63;
    }
  unsigned long* t64 = __a54;
  __retval56 = t64;
  unsigned long* t65 = __retval56;
  return t65;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v66) {
bb67:
  struct std__allocator_int_* __a68;
  unsigned long __retval69;
  unsigned long __diffmax70;
  unsigned long __allocmax71;
  __a68 = v66;
  unsigned long c72 = 2305843009213693951;
  __diffmax70 = c72;
  unsigned long c73 = 4611686018427387903;
  __allocmax71 = c73;
  unsigned long* r74 = unsigned_long_const__std__min_unsigned_long_(&__diffmax70, &__allocmax71);
  unsigned long t75 = *r74;
  __retval69 = t75;
  unsigned long t76 = __retval69;
  return t76;
}

// function: _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* v77) {
bb78:
  struct std___Vector_base_int__std__allocator_int__* this79;
  struct std__allocator_int_* __retval80;
  this79 = v77;
  struct std___Vector_base_int__std__allocator_int__* t81 = this79;
  struct std__allocator_int_* base82 = (struct std__allocator_int_*)((char *)&(t81->_M_impl) + 0);
  __retval80 = base82;
  struct std__allocator_int_* t83 = __retval80;
  return t83;
}

// function: _ZNKSt6vectorIiSaIiEE8max_sizeEv
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* v84) {
bb85:
  struct std__vector_int__std__allocator_int__* this86;
  unsigned long __retval87;
  this86 = v84;
  struct std__vector_int__std__allocator_int__* t88 = this86;
  struct std___Vector_base_int__std__allocator_int__* base89 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t88 + 0);
  struct std__allocator_int_* r90 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(base89);
  unsigned long r91 = std__vector_int__std__allocator_int______S_max_size(r90);
  __retval87 = r91;
  unsigned long t92 = __retval87;
  return t92;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v93) {
bb94:
  struct std__vector_int__std__allocator_int__* this95;
  unsigned long __retval96;
  long __dif97;
  this95 = v93;
  struct std__vector_int__std__allocator_int__* t98 = this95;
  struct std___Vector_base_int__std__allocator_int__* base99 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t98 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base100 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base99->_M_impl) + 0);
  int* t101 = base100->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base102 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t98 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base103 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base102->_M_impl) + 0);
  int* t104 = base103->_M_start;
  long diff105 = t101 - t104;
  __dif97 = diff105;
    long t106 = __dif97;
    long c107 = 0;
    _Bool c108 = ((t106 < c107)) ? 1 : 0;
    if (c108) {
      __builtin_unreachable();
    }
  long t109 = __dif97;
  unsigned long cast110 = (unsigned long)t109;
  __retval96 = cast110;
  unsigned long t111 = __retval96;
  return t111;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v112, unsigned long* v113) {
bb114:
  unsigned long* __a115;
  unsigned long* __b116;
  unsigned long* __retval117;
  __a115 = v112;
  __b116 = v113;
    unsigned long* t118 = __a115;
    unsigned long t119 = *t118;
    unsigned long* t120 = __b116;
    unsigned long t121 = *t120;
    _Bool c122 = ((t119 < t121)) ? 1 : 0;
    if (c122) {
      unsigned long* t123 = __b116;
      __retval117 = t123;
      unsigned long* t124 = __retval117;
      return t124;
    }
  unsigned long* t125 = __a115;
  __retval117 = t125;
  unsigned long* t126 = __retval117;
  return t126;
}

// function: _ZNKSt6vectorIiSaIiEE12_M_check_lenEmPKc
unsigned long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std__vector_int__std__allocator_int__* v127, unsigned long v128, char* v129) {
bb130:
  struct std__vector_int__std__allocator_int__* this131;
  unsigned long __n132;
  char* __s133;
  unsigned long __retval134;
  unsigned long __len135;
  unsigned long ref_tmp0136;
  this131 = v127;
  __n132 = v128;
  __s133 = v129;
  struct std__vector_int__std__allocator_int__* t137 = this131;
    unsigned long r138 = std__vector_int__std__allocator_int_____max_size___const(t137);
    unsigned long r139 = std__vector_int__std__allocator_int_____size___const(t137);
    unsigned long b140 = r138 - r139;
    unsigned long t141 = __n132;
    _Bool c142 = ((b140 < t141)) ? 1 : 0;
    if (c142) {
      char* t143 = __s133;
      std____throw_length_error(t143);
    }
  unsigned long r144 = std__vector_int__std__allocator_int_____size___const(t137);
  unsigned long r145 = std__vector_int__std__allocator_int_____size___const(t137);
  ref_tmp0136 = r145;
  unsigned long* r146 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp0136, &__n132);
  unsigned long t147 = *r146;
  unsigned long b148 = r144 + t147;
  __len135 = b148;
  unsigned long t149 = __len135;
  unsigned long r150 = std__vector_int__std__allocator_int_____size___const(t137);
  _Bool c151 = ((t149 < r150)) ? 1 : 0;
  _Bool ternary152;
  if (c151) {
    _Bool c153 = 1;
    ternary152 = (_Bool)c153;
  } else {
    unsigned long t154 = __len135;
    unsigned long r155 = std__vector_int__std__allocator_int_____max_size___const(t137);
    _Bool c156 = ((t154 > r155)) ? 1 : 0;
    ternary152 = (_Bool)c156;
  }
  unsigned long ternary157;
  if (ternary152) {
    unsigned long r158 = std__vector_int__std__allocator_int_____max_size___const(t137);
    ternary157 = (unsigned long)r158;
  } else {
    unsigned long t159 = __len135;
    ternary157 = (unsigned long)t159;
  }
  __retval134 = ternary157;
  unsigned long t160 = __retval134;
  return t160;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v161) {
bb162:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this163;
  int** __retval164;
  this163 = v161;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t165 = this163;
  __retval164 = &t165->_M_current;
  int** t166 = __retval164;
  return t166;
}

// function: _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v167, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v168) {
bb169:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs170;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs171;
  long __retval172;
  __lhs170 = v167;
  __rhs171 = v168;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t173 = __lhs170;
  int** r174 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t173);
  int* t175 = *r174;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t176 = __rhs171;
  int** r177 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t176);
  int* t178 = *r177;
  long diff179 = t175 - t178;
  __retval172 = diff179;
  long t180 = __retval172;
  return t180;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v181) {
bb182:
  struct std____new_allocator_int_* this183;
  unsigned long __retval184;
  this183 = v181;
  struct std____new_allocator_int_* t185 = this183;
  unsigned long c186 = 9223372036854775807;
  unsigned long c187 = 4;
  unsigned long b188 = c186 / c187;
  __retval184 = b188;
  unsigned long t189 = __retval184;
  return t189;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v190, unsigned long v191, void* v192) {
bb193:
  struct std____new_allocator_int_* this194;
  unsigned long __n195;
  void* unnamed196;
  int* __retval197;
  this194 = v190;
  __n195 = v191;
  unnamed196 = v192;
  struct std____new_allocator_int_* t198 = this194;
    unsigned long t199 = __n195;
    unsigned long r200 = std____new_allocator_int____M_max_size___const(t198);
    _Bool c201 = ((t199 > r200)) ? 1 : 0;
    if (c201) {
        unsigned long t202 = __n195;
        unsigned long c203 = -1;
        unsigned long c204 = 4;
        unsigned long b205 = c203 / c204;
        _Bool c206 = ((t202 > b205)) ? 1 : 0;
        if (c206) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c207 = 4;
    unsigned long c208 = 16;
    _Bool c209 = ((c207 > c208)) ? 1 : 0;
    if (c209) {
      unsigned long __al210;
      unsigned long c211 = 4;
      __al210 = c211;
      unsigned long t212 = __n195;
      unsigned long c213 = 4;
      unsigned long b214 = t212 * c213;
      unsigned long t215 = __al210;
      void* r216 = operator_new_2(b214, t215);
      int* cast217 = (int*)r216;
      __retval197 = cast217;
      int* t218 = __retval197;
      return t218;
    }
  unsigned long t219 = __n195;
  unsigned long c220 = 4;
  unsigned long b221 = t219 * c220;
  void* r222 = operator_new(b221);
  int* cast223 = (int*)r222;
  __retval197 = cast223;
  int* t224 = __retval197;
  return t224;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v225, unsigned long v226) {
bb227:
  struct std__allocator_int_* this228;
  unsigned long __n229;
  int* __retval230;
  this228 = v225;
  __n229 = v226;
  struct std__allocator_int_* t231 = this228;
    _Bool r232 = std____is_constant_evaluated();
    if (r232) {
        unsigned long t233 = __n229;
        unsigned long c234 = 4;
        unsigned long ovr235;
        _Bool ovf236 = __builtin_mul_overflow(t233, c234, &ovr235);
        __n229 = ovr235;
        if (ovf236) {
          std____throw_bad_array_new_length();
        }
      unsigned long t237 = __n229;
      void* r238 = operator_new(t237);
      int* cast239 = (int*)r238;
      __retval230 = cast239;
      int* t240 = __retval230;
      return t240;
    }
  struct std____new_allocator_int_* base241 = (struct std____new_allocator_int_*)((char *)t231 + 0);
  unsigned long t242 = __n229;
  void* c243 = ((void*)0);
  int* r244 = std____new_allocator_int___allocate(base241, t242, c243);
  __retval230 = r244;
  int* t245 = __retval230;
  return t245;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v246, unsigned long v247) {
bb248:
  struct std__allocator_int_* __a249;
  unsigned long __n250;
  int* __retval251;
  __a249 = v246;
  __n250 = v247;
  struct std__allocator_int_* t252 = __a249;
  unsigned long t253 = __n250;
  int* r254 = std__allocator_int___allocate(t252, t253);
  __retval251 = r254;
  int* t255 = __retval251;
  return t255;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v256, unsigned long v257) {
bb258:
  struct std___Vector_base_int__std__allocator_int__* this259;
  unsigned long __n260;
  int* __retval261;
  this259 = v256;
  __n260 = v257;
  struct std___Vector_base_int__std__allocator_int__* t262 = this259;
  unsigned long t263 = __n260;
  unsigned long c264 = 0;
  _Bool c265 = ((t263 != c264)) ? 1 : 0;
  int* ternary266;
  if (c265) {
    struct std__allocator_int_* base267 = (struct std__allocator_int_*)((char *)&(t262->_M_impl) + 0);
    unsigned long t268 = __n260;
    int* r269 = std__allocator_traits_std__allocator_int_____allocate(base267, t268);
    ternary266 = (int*)r269;
  } else {
    int* c270 = ((void*)0);
    ternary266 = (int*)c270;
  }
  __retval261 = ternary266;
  int* t271 = __retval261;
  return t271;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocC2EPimRSt12_Vector_baseIiS0_E
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v272, int* v273, unsigned long v274, struct std___Vector_base_int__std__allocator_int__* v275) {
bb276:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this277;
  int* __s278;
  unsigned long __l279;
  struct std___Vector_base_int__std__allocator_int__* __vect280;
  this277 = v272;
  __s278 = v273;
  __l279 = v274;
  __vect280 = v275;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t281 = this277;
  int* t282 = __s278;
  t281->_M_storage = t282;
  unsigned long t283 = __l279;
  t281->_M_len = t283;
  struct std___Vector_base_int__std__allocator_int__* t284 = __vect280;
  t281->_M_vect = t284;
  return;
}

// function: _ZSt10to_addressIiEPT_S1_
int* int__std__to_address_int_(int* v285) {
bb286:
  int* __ptr287;
  int* __retval288;
  __ptr287 = v285;
  int* t289 = __ptr287;
  __retval288 = t289;
  int* t290 = __retval288;
  return t290;
}

// function: _ZSt12__to_addressIPiEDaRKT_
int* auto_std____to_address_int__(int** v291) {
bb292:
  int** __ptr293;
  int* __retval294;
  __ptr293 = v291;
  int** t295 = __ptr293;
  int* t296 = *t295;
  int* r297 = int__std__to_address_int_(t296);
  __retval294 = r297;
  int* t298 = __retval294;
  return t298;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb299:
  _Bool __retval300;
    _Bool c301 = 0;
    __retval300 = c301;
    _Bool t302 = __retval300;
    return t302;
  abort();
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEC2ERKS1_
void __gnu_cxx____normal_iterator_int___void_____normal_iterator(struct __gnu_cxx____normal_iterator_int____void_* v303, int** v304) {
bb305:
  struct __gnu_cxx____normal_iterator_int____void_* this306;
  int** __i307;
  this306 = v303;
  __i307 = v304;
  struct __gnu_cxx____normal_iterator_int____void_* t308 = this306;
  int** t309 = __i307;
  int* t310 = *t309;
  t308->_M_current = t310;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v311) {
bb312:
  int* __location313;
  __location313 = v311;
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE7destroyIiEEvRS0_PT_
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* v314, int* v315) {
bb316:
  struct std__allocator_int_* __a317;
  int* __p318;
  __a317 = v314;
  __p318 = v315;
  int* t319 = __p318;
  void_std__destroy_at_int_(t319);
  return;
}

// function: _ZSt19__relocate_object_aIiiSaIiEEvPT_PT0_RT1_
void void_std____relocate_object_a_int__int__std__allocator_int___(int* v320, int* v321, struct std__allocator_int_* v322) {
bb323:
  int* __dest324;
  int* __orig325;
  struct std__allocator_int_* __alloc326;
  __dest324 = v320;
  __orig325 = v321;
  __alloc326 = v322;
  struct std__allocator_int_* t327 = __alloc326;
  int* t328 = __dest324;
  int* t329 = __orig325;
  void_std__allocator_traits_std__allocator_int_____construct_int__int_(t327, t328, t329);
  struct std__allocator_int_* t330 = __alloc326;
  int* t331 = __orig325;
  void_std__allocator_traits_std__allocator_int_____destroy_int_(t330, t331);
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivEdeEv
int* __gnu_cxx____normal_iterator_int___void___operator____const(struct __gnu_cxx____normal_iterator_int____void_* v332) {
bb333:
  struct __gnu_cxx____normal_iterator_int____void_* this334;
  int* __retval335;
  this334 = v332;
  struct __gnu_cxx____normal_iterator_int____void_* t336 = this334;
  int* t337 = t336->_M_current;
  __retval335 = t337;
  int* t338 = __retval335;
  return t338;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEppEv
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator__(struct __gnu_cxx____normal_iterator_int____void_* v339) {
bb340:
  struct __gnu_cxx____normal_iterator_int____void_* this341;
  struct __gnu_cxx____normal_iterator_int____void_* __retval342;
  this341 = v339;
  struct __gnu_cxx____normal_iterator_int____void_* t343 = this341;
  int* t344 = t343->_M_current;
  int c345 = 1;
  int* ptr346 = &(t344)[c345];
  t343->_M_current = ptr346;
  __retval342 = t343;
  struct __gnu_cxx____normal_iterator_int____void_* t347 = __retval342;
  return t347;
}

// function: _ZSt14__relocate_a_1IPiN9__gnu_cxx17__normal_iteratorIS0_vEESaIiEET0_T_S6_S5_RT1_
struct __gnu_cxx____normal_iterator_int____void_ __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(int* v348, int* v349, struct __gnu_cxx____normal_iterator_int____void_ v350, struct std__allocator_int_* v351) {
bb352:
  int* __first353;
  int* __last354;
  struct __gnu_cxx____normal_iterator_int____void_ __result355;
  struct std__allocator_int_* __alloc356;
  struct __gnu_cxx____normal_iterator_int____void_ __retval357;
  __first353 = v348;
  __last354 = v349;
  __result355 = v350;
  __alloc356 = v351;
  __retval357 = __result355; // copy
    while (1) {
      int* t359 = __first353;
      int* t360 = __last354;
      _Bool c361 = ((t359 != t360)) ? 1 : 0;
      if (!c361) break;
      int* r362 = __gnu_cxx____normal_iterator_int___void___operator____const(&__retval357);
      int* t363 = __first353;
      struct std__allocator_int_* t364 = __alloc356;
      void_std____relocate_object_a_int__int__std__allocator_int___(r362, t363, t364);
    for_step358: ;
      int* t365 = __first353;
      int c366 = 1;
      int* ptr367 = &(t365)[c366];
      __first353 = ptr367;
      struct __gnu_cxx____normal_iterator_int____void_* r368 = __gnu_cxx____normal_iterator_int___void___operator__(&__retval357);
    }
  struct __gnu_cxx____normal_iterator_int____void_ t369 = __retval357;
  return t369;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEaSEOS2_
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator_(struct __gnu_cxx____normal_iterator_int____void_* v370, struct __gnu_cxx____normal_iterator_int____void_* v371) {
bb372:
  struct __gnu_cxx____normal_iterator_int____void_* this373;
  struct __gnu_cxx____normal_iterator_int____void_* unnamed374;
  struct __gnu_cxx____normal_iterator_int____void_* __retval375;
  this373 = v370;
  unnamed374 = v371;
  struct __gnu_cxx____normal_iterator_int____void_* t376 = this373;
  struct __gnu_cxx____normal_iterator_int____void_* t377 = unnamed374;
  int* t378 = t377->_M_current;
  t376->_M_current = t378;
  __retval375 = t376;
  struct __gnu_cxx____normal_iterator_int____void_* t379 = __retval375;
  return t379;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivE4baseEv
int** __gnu_cxx____normal_iterator_int___void___base___const(struct __gnu_cxx____normal_iterator_int____void_* v380) {
bb381:
  struct __gnu_cxx____normal_iterator_int____void_* this382;
  int** __retval383;
  this382 = v380;
  struct __gnu_cxx____normal_iterator_int____void_* t384 = this382;
  __retval383 = &t384->_M_current;
  int** t385 = __retval383;
  return t385;
}

// function: _ZSt14__relocate_a_1IiiENSt9enable_ifIXsr3std24__is_bitwise_relocatableIT_EE5valueEPS1_E4typeES2_S2_S2_RSaIT0_E
int* std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(int* v386, int* v387, int* v388, struct std__allocator_int_* v389) {
bb390:
  int* __first391;
  int* __last392;
  int* __result393;
  struct std__allocator_int_* __alloc394;
  int* __retval395;
  long __count396;
  __first391 = v386;
  __last392 = v387;
  __result393 = v388;
  __alloc394 = v389;
  int* t397 = __last392;
  int* t398 = __first391;
  long diff399 = t397 - t398;
  __count396 = diff399;
    long t400 = __count396;
    long c401 = 0;
    _Bool c402 = ((t400 > c401)) ? 1 : 0;
    if (c402) {
        _Bool r403 = std__is_constant_evaluated();
        if (r403) {
          struct __gnu_cxx____normal_iterator_int____void_ __out404;
          struct __gnu_cxx____normal_iterator_int____void_ ref_tmp0405;
          struct __gnu_cxx____normal_iterator_int____void_ agg_tmp0406;
          __gnu_cxx____normal_iterator_int___void_____normal_iterator(&__out404, &__result393);
          int* t407 = __first391;
          int* t408 = __last392;
          agg_tmp0406 = __out404; // copy
          struct std__allocator_int_* t409 = __alloc394;
          struct __gnu_cxx____normal_iterator_int____void_ t410 = agg_tmp0406;
          struct __gnu_cxx____normal_iterator_int____void_ r411 = __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(t407, t408, t410, t409);
          ref_tmp0405 = r411;
          struct __gnu_cxx____normal_iterator_int____void_* r412 = __gnu_cxx____normal_iterator_int___void___operator_(&__out404, &ref_tmp0405);
          int** r413 = __gnu_cxx____normal_iterator_int___void___base___const(&__out404);
          int* t414 = *r413;
          __retval395 = t414;
          int* t415 = __retval395;
          return t415;
        }
      int* t416 = __result393;
      void* cast417 = (void*)t416;
      int* t418 = __first391;
      void* cast419 = (void*)t418;
      long t420 = __count396;
      unsigned long cast421 = (unsigned long)t420;
      unsigned long c422 = 4;
      unsigned long b423 = cast421 * c422;
      void* r424 = memcpy(cast417, cast419, b423);
    }
  int* t425 = __result393;
  long t426 = __count396;
  int* ptr427 = &(t425)[t426];
  __retval395 = ptr427;
  int* t428 = __retval395;
  return t428;
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v429) {
bb430:
  int* __it431;
  int* __retval432;
  __it431 = v429;
  int* t433 = __it431;
  __retval432 = t433;
  int* t434 = __retval432;
  return t434;
}

// function: _ZSt12__relocate_aIPiS0_SaIiEET0_T_S3_S2_RT1_
int* int__std____relocate_a_int___int___std__allocator_int___(int* v435, int* v436, int* v437, struct std__allocator_int_* v438) {
bb439:
  int* __first440;
  int* __last441;
  int* __result442;
  struct std__allocator_int_* __alloc443;
  int* __retval444;
  __first440 = v435;
  __last441 = v436;
  __result442 = v437;
  __alloc443 = v438;
  int* t445 = __first440;
  int* r446 = int__std____niter_base_int__(t445);
  int* t447 = __last441;
  int* r448 = int__std____niter_base_int__(t447);
  int* t449 = __result442;
  int* r450 = int__std____niter_base_int__(t449);
  struct std__allocator_int_* t451 = __alloc443;
  int* r452 = std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(r446, r448, r450, t451);
  __retval444 = r452;
  int* t453 = __retval444;
  return t453;
}

// function: _ZNSt6vectorIiSaIiEE11_S_relocateEPiS2_S2_RS0_
int* std__vector_int__std__allocator_int______S_relocate(int* v454, int* v455, int* v456, struct std__allocator_int_* v457) {
bb458:
  int* __first459;
  int* __last460;
  int* __result461;
  struct std__allocator_int_* __alloc462;
  int* __retval463;
  __first459 = v454;
  __last460 = v455;
  __result461 = v456;
  __alloc462 = v457;
  int* t464 = __first459;
  int* t465 = __last460;
  int* t466 = __result461;
  struct std__allocator_int_* t467 = __alloc462;
  int* r468 = int__std____relocate_a_int___int___std__allocator_int___(t464, t465, t466, t467);
  __retval463 = r468;
  int* t469 = __retval463;
  return t469;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v470) {
bb471:
  struct std___Vector_base_int__std__allocator_int__* this472;
  struct std__allocator_int_* __retval473;
  this472 = v470;
  struct std___Vector_base_int__std__allocator_int__* t474 = this472;
  struct std__allocator_int_* base475 = (struct std__allocator_int_*)((char *)&(t474->_M_impl) + 0);
  __retval473 = base475;
  struct std__allocator_int_* t476 = __retval473;
  return t476;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocD2Ev
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v477) {
bb478:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this479;
  this479 = v477;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t480 = this479;
    int* t481 = t480->_M_storage;
    _Bool cast482 = (_Bool)t481;
    if (cast482) {
      struct std___Vector_base_int__std__allocator_int__* t483 = t480->_M_vect;
      int* t484 = t480->_M_storage;
      unsigned long t485 = t480->_M_len;
      std___Vector_base_int__std__allocator_int______M_deallocate(t483, t484, t485);
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_M_realloc_appendIJiEEEvDpOT_
void void_std__vector_int__std__allocator_int______M_realloc_append_int_(struct std__vector_int__std__allocator_int__* v486, int* v487) {
bb488:
  struct std__vector_int__std__allocator_int__* this489;
  int* __args490;
  unsigned long __len491;
  int* __old_start492;
  int* __old_finish493;
  unsigned long __elems494;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0495;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1496;
  int* __new_start497;
  int* __new_finish498;
  this489 = v486;
  __args490 = v487;
  struct std__vector_int__std__allocator_int__* t499 = this489;
  unsigned long c500 = 1;
  char* cast501 = (char*)&(_str_4);
  unsigned long r502 = std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(t499, c500, cast501);
  __len491 = r502;
    unsigned long t503 = __len491;
    unsigned long c504 = 0;
    _Bool c505 = ((t503 <= c504)) ? 1 : 0;
    if (c505) {
      __builtin_unreachable();
    }
  struct std___Vector_base_int__std__allocator_int__* base506 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t499 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base507 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base506->_M_impl) + 0);
  int* t508 = base507->_M_start;
  __old_start492 = t508;
  struct std___Vector_base_int__std__allocator_int__* base509 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t499 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base510 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base509->_M_impl) + 0);
  int* t511 = base510->_M_finish;
  __old_finish493 = t511;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r512 = std__vector_int__std__allocator_int_____end(t499);
  ref_tmp0495 = r512;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r513 = std__vector_int__std__allocator_int_____begin(t499);
  ref_tmp1496 = r513;
  long r514 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&ref_tmp0495, &ref_tmp1496);
  unsigned long cast515 = (unsigned long)r514;
  __elems494 = cast515;
  struct std___Vector_base_int__std__allocator_int__* base516 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t499 + 0);
  unsigned long t517 = __len491;
  int* r518 = std___Vector_base_int__std__allocator_int______M_allocate(base516, t517);
  __new_start497 = r518;
  int* t519 = __new_start497;
  __new_finish498 = t519;
    struct std__vector_int__std__allocator_int_____Guard_alloc __guard520;
    int* ref_tmp2521;
    int* t522 = __new_start497;
    unsigned long t523 = __len491;
    struct std___Vector_base_int__std__allocator_int__* base524 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t499 + 0);
    std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(&__guard520, t522, t523, base524);
      struct std___Vector_base_int__std__allocator_int__* base525 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t499 + 0);
      struct std__allocator_int_* base526 = (struct std__allocator_int_*)((char *)&(base525->_M_impl) + 0);
      int* t527 = __new_start497;
      unsigned long t528 = __elems494;
      int* ptr529 = &(t527)[t528];
      ref_tmp2521 = ptr529;
      int* r530 = auto_std____to_address_int__(&ref_tmp2521);
      int* t531 = __args490;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_(base526, r530, t531);
        int* t532 = __old_start492;
        int* t533 = __old_finish493;
        int* t534 = __new_start497;
        struct std___Vector_base_int__std__allocator_int__* base535 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t499 + 0);
        struct std__allocator_int_* r536 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base535);
        int* r537 = std__vector_int__std__allocator_int______S_relocate(t532, t533, t534, r536);
        __new_finish498 = r537;
        int* t538 = __new_finish498;
        int c539 = 1;
        int* ptr540 = &(t538)[c539];
        __new_finish498 = ptr540;
      int* t541 = __old_start492;
      __guard520._M_storage = t541;
      struct std___Vector_base_int__std__allocator_int__* base542 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t499 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base543 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base542->_M_impl) + 0);
      int* t544 = base543->_M_end_of_storage;
      int* t545 = __old_start492;
      long diff546 = t544 - t545;
      unsigned long cast547 = (unsigned long)diff546;
      __guard520._M_len = cast547;
    {
      std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(&__guard520);
    }
  int* t548 = __new_start497;
  struct std___Vector_base_int__std__allocator_int__* base549 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t499 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base550 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base549->_M_impl) + 0);
  base550->_M_start = t548;
  int* t551 = __new_finish498;
  struct std___Vector_base_int__std__allocator_int__* base552 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t499 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base553 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base552->_M_impl) + 0);
  base553->_M_finish = t551;
  int* t554 = __new_start497;
  unsigned long t555 = __len491;
  int* ptr556 = &(t554)[t555];
  struct std___Vector_base_int__std__allocator_int__* base557 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t499 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base558 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base557->_M_impl) + 0);
  base558->_M_end_of_storage = ptr556;
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v559) {
bb560:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this561;
  int** __retval562;
  this561 = v559;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t563 = this561;
  __retval562 = &t563->_M_current;
  int** t564 = __retval562;
  return t564;
}

// function: _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v565, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v566) {
bb567:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __lhs568;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __rhs569;
  _Bool __retval570;
  __lhs568 = v565;
  __rhs569 = v566;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t571 = __lhs568;
  int** r572 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t571);
  int* t573 = *r572;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t574 = __rhs569;
  int** r575 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t574);
  int* t576 = *r575;
  _Bool c577 = ((t573 == t576)) ? 1 : 0;
  __retval570 = c577;
  _Bool t578 = __retval570;
  return t578;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2ERKS2_
void __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v579, int** v580) {
bb581:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this582;
  int** __i583;
  this582 = v579;
  __i583 = v580;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t584 = this582;
  int** t585 = __i583;
  int* t586 = *t585;
  t584->_M_current = t586;
  return;
}

// function: _ZNKSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin___const(struct std__vector_int__std__allocator_int__* v587) {
bb588:
  struct std__vector_int__std__allocator_int__* this589;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval590;
  this589 = v587;
  struct std__vector_int__std__allocator_int__* t591 = this589;
  struct std___Vector_base_int__std__allocator_int__* base592 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t591 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base593 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base592->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval590, &base593->_M_start);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t594 = __retval590;
  return t594;
}

// function: _ZNKSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end___const(struct std__vector_int__std__allocator_int__* v595) {
bb596:
  struct std__vector_int__std__allocator_int__* this597;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval598;
  this597 = v595;
  struct std__vector_int__std__allocator_int__* t599 = this597;
  struct std___Vector_base_int__std__allocator_int__* base600 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t599 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base601 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base600->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval598, &base601->_M_finish);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t602 = __retval598;
  return t602;
}

// function: _ZNKSt6vectorIiSaIiEE5emptyEv
_Bool std__vector_int__std__allocator_int_____empty___const(struct std__vector_int__std__allocator_int__* v603) {
bb604:
  struct std__vector_int__std__allocator_int__* this605;
  _Bool __retval606;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp0607;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp1608;
  this605 = v603;
  struct std__vector_int__std__allocator_int__* t609 = this605;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r610 = std__vector_int__std__allocator_int_____begin___const(t609);
  ref_tmp0607 = r610;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r611 = std__vector_int__std__allocator_int_____end___const(t609);
  ref_tmp1608 = r611;
  _Bool r612 = _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&ref_tmp0607, &ref_tmp1608);
  __retval606 = r612;
  _Bool t613 = __retval606;
  return t613;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v614, int** v615) {
bb616:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this617;
  int** __i618;
  this617 = v614;
  __i618 = v615;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t619 = this617;
  int** t620 = __i618;
  int* t621 = *t620;
  t619->_M_current = t621;
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEmiEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v622, long v623) {
bb624:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this625;
  long __n626;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval627;
  int* ref_tmp0628;
  this625 = v622;
  __n626 = v623;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t629 = this625;
  int* t630 = t629->_M_current;
  long t631 = __n626;
  long u632 = -t631;
  int* ptr633 = &(t630)[u632];
  ref_tmp0628 = ptr633;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval627, &ref_tmp0628);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t634 = __retval627;
  return t634;
}

// function: _ZNSt6vectorIiSaIiEE4backEv
int* std__vector_int__std__allocator_int_____back(struct std__vector_int__std__allocator_int__* v635) {
bb636:
  struct std__vector_int__std__allocator_int__* this637;
  int* __retval638;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0639;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1640;
  this637 = v635;
  struct std__vector_int__std__allocator_int__* t641 = this637;
    do {
          _Bool r642 = std__vector_int__std__allocator_int_____empty___const(t641);
          if (r642) {
            char* cast643 = (char*)&(_str_5);
            int c644 = 1370;
            char* cast645 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv);
            char* cast646 = (char*)&(_str_6);
            std____glibcxx_assert_fail(cast643, c644, cast645, cast646);
          }
      _Bool c647 = 0;
      if (!c647) break;
    } while (1);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r648 = std__vector_int__std__allocator_int_____end(t641);
  ref_tmp1640 = r648;
  long c649 = 1;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r650 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&ref_tmp1640, c649);
  ref_tmp0639 = r650;
  int* r651 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0639);
  __retval638 = r651;
  int* t652 = __retval638;
  return t652;
}

// function: _ZNSt6vectorIiSaIiEE12emplace_backIJiEEERiDpOT_
int* int__std__vector_int__std__allocator_int_____emplace_back_int_(struct std__vector_int__std__allocator_int__* v653, int* v654) {
bb655:
  struct std__vector_int__std__allocator_int__* this656;
  int* __args657;
  int* __retval658;
  this656 = v653;
  __args657 = v654;
  struct std__vector_int__std__allocator_int__* t659 = this656;
    struct std___Vector_base_int__std__allocator_int__* base660 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t659 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base661 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base660->_M_impl) + 0);
    int* t662 = base661->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base663 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t659 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base664 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base663->_M_impl) + 0);
    int* t665 = base664->_M_end_of_storage;
    _Bool c666 = ((t662 != t665)) ? 1 : 0;
    if (c666) {
      struct std___Vector_base_int__std__allocator_int__* base667 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t659 + 0);
      struct std__allocator_int_* base668 = (struct std__allocator_int_*)((char *)&(base667->_M_impl) + 0);
      struct std___Vector_base_int__std__allocator_int__* base669 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t659 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base670 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base669->_M_impl) + 0);
      int* t671 = base670->_M_finish;
      int* t672 = __args657;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_(base668, t671, t672);
      struct std___Vector_base_int__std__allocator_int__* base673 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t659 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base674 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base673->_M_impl) + 0);
      int* t675 = base674->_M_finish;
      int c676 = 1;
      int* ptr677 = &(t675)[c676];
      base674->_M_finish = ptr677;
    } else {
      int* t678 = __args657;
      void_std__vector_int__std__allocator_int______M_realloc_append_int_(t659, t678);
    }
  int* r679 = std__vector_int__std__allocator_int_____back(t659);
  __retval658 = r679;
  int* t680 = __retval658;
  return t680;
}

// function: _ZNSt6vectorIiSaIiEE9push_backEOi
void std__vector_int__std__allocator_int_____push_back(struct std__vector_int__std__allocator_int__* v681, int* v682) {
bb683:
  struct std__vector_int__std__allocator_int__* this684;
  int* __x685;
  this684 = v681;
  __x685 = v682;
  struct std__vector_int__std__allocator_int__* t686 = this684;
  int* t687 = __x685;
  int* r688 = int__std__vector_int__std__allocator_int_____emplace_back_int_(t686, t687);
  return;
}

// function: _ZSt9transformIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_S6_PFiiiEET1_T_SA_T0_S9_T2_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__transform___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_____int__int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v689, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v690, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v691, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v692, void* v693) {
bb694:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1695;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1696;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first2697;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result698;
  void* __binary_op699;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval700;
  __first1695 = v689;
  __last1696 = v690;
  __first2697 = v691;
  __result698 = v692;
  __binary_op699 = v693;
    while (1) {
      _Bool r702 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first1695, &__last1696);
      _Bool u703 = !r702;
      if (!u703) break;
      void* t704 = __binary_op699;
      int* r705 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first1695);
      int t706 = *r705;
      int* r707 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first2697);
      int t708 = *r707;
      int r709 = ((int (*)(int, int))t704)(t706, t708);
      int* r710 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__result698);
      *r710 = r709;
    for_step701: ;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r711 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__first1695);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r712 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__first2697);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r713 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__result698);
    }
  __retval700 = __result698; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t714 = __retval700;
  return t714;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v715) {
bb716:
  struct std__vector_int__std__allocator_int__* this717;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval718;
  this717 = v715;
  struct std__vector_int__std__allocator_int__* t719 = this717;
  struct std___Vector_base_int__std__allocator_int__* base720 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t719 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base721 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base720->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval718, &base721->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t722 = __retval718;
  return t722;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v723) {
bb724:
  struct std__vector_int__std__allocator_int__* this725;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval726;
  this725 = v723;
  struct std__vector_int__std__allocator_int__* t727 = this725;
  struct std___Vector_base_int__std__allocator_int__* base728 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t727 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base729 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base728->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval726, &base729->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t730 = __retval726;
  return t730;
}

// function: _ZNSt6vectorIiSaIiEEixEm
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* v731, unsigned long v732) {
bb733:
  struct std__vector_int__std__allocator_int__* this734;
  unsigned long __n735;
  int* __retval736;
  this734 = v731;
  __n735 = v732;
  struct std__vector_int__std__allocator_int__* t737 = this734;
    do {
          unsigned long t738 = __n735;
          unsigned long r739 = std__vector_int__std__allocator_int_____size___const(t737);
          _Bool c740 = ((t738 < r739)) ? 1 : 0;
          _Bool u741 = !c740;
          if (u741) {
            char* cast742 = (char*)&(_str_5);
            int c743 = 1263;
            char* cast744 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm);
            char* cast745 = (char*)&(_str_7);
            std____glibcxx_assert_fail(cast742, c743, cast744, cast745);
          }
      _Bool c746 = 0;
      if (!c746) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base747 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t737 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base748 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base747->_M_impl) + 0);
  int* t749 = base748->_M_start;
  unsigned long t750 = __n735;
  int* ptr751 = &(t749)[t750];
  __retval736 = ptr751;
  int* t752 = __retval736;
  return t752;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v753, int v754) {
bb755:
  int __a756;
  int __b757;
  int __retval758;
  __a756 = v753;
  __b757 = v754;
  int t759 = __a756;
  int t760 = __b757;
  int b761 = t759 | t760;
  __retval758 = b761;
  int t762 = __retval758;
  return t762;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v763) {
bb764:
  struct std__basic_ios_char__std__char_traits_char__* this765;
  int __retval766;
  this765 = v763;
  struct std__basic_ios_char__std__char_traits_char__* t767 = this765;
  struct std__ios_base* base768 = (struct std__ios_base*)((char *)t767 + 0);
  int t769 = base768->_M_streambuf_state;
  __retval766 = t769;
  int t770 = __retval766;
  return t770;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v771, int v772) {
bb773:
  struct std__basic_ios_char__std__char_traits_char__* this774;
  int __state775;
  this774 = v771;
  __state775 = v772;
  struct std__basic_ios_char__std__char_traits_char__* t776 = this774;
  int r777 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t776);
  int t778 = __state775;
  int r779 = std__operator_(r777, t778);
  std__basic_ios_char__std__char_traits_char_____clear(t776, r779);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v780, char* v781) {
bb782:
  char* __c1783;
  char* __c2784;
  _Bool __retval785;
  __c1783 = v780;
  __c2784 = v781;
  char* t786 = __c1783;
  char t787 = *t786;
  int cast788 = (int)t787;
  char* t789 = __c2784;
  char t790 = *t789;
  int cast791 = (int)t790;
  _Bool c792 = ((cast788 == cast791)) ? 1 : 0;
  __retval785 = c792;
  _Bool t793 = __retval785;
  return t793;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v794) {
bb795:
  char* __p796;
  unsigned long __retval797;
  unsigned long __i798;
  __p796 = v794;
  unsigned long c799 = 0;
  __i798 = c799;
    char ref_tmp0800;
    while (1) {
      unsigned long t801 = __i798;
      char* t802 = __p796;
      char* ptr803 = &(t802)[t801];
      char c804 = 0;
      ref_tmp0800 = c804;
      _Bool r805 = __gnu_cxx__char_traits_char___eq(ptr803, &ref_tmp0800);
      _Bool u806 = !r805;
      if (!u806) break;
      unsigned long t807 = __i798;
      unsigned long u808 = t807 + 1;
      __i798 = u808;
    }
  unsigned long t809 = __i798;
  __retval797 = t809;
  unsigned long t810 = __retval797;
  return t810;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v811) {
bb812:
  char* __s813;
  unsigned long __retval814;
  __s813 = v811;
    _Bool r815 = std____is_constant_evaluated();
    if (r815) {
      char* t816 = __s813;
      unsigned long r817 = __gnu_cxx__char_traits_char___length(t816);
      __retval814 = r817;
      unsigned long t818 = __retval814;
      return t818;
    }
  char* t819 = __s813;
  unsigned long r820 = strlen(t819);
  __retval814 = r820;
  unsigned long t821 = __retval814;
  return t821;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v822, char* v823) {
bb824:
  struct std__basic_ostream_char__std__char_traits_char__* __out825;
  char* __s826;
  struct std__basic_ostream_char__std__char_traits_char__* __retval827;
  __out825 = v822;
  __s826 = v823;
    char* t828 = __s826;
    _Bool cast829 = (_Bool)t828;
    _Bool u830 = !cast829;
    if (u830) {
      struct std__basic_ostream_char__std__char_traits_char__* t831 = __out825;
      void** v832 = (void**)t831;
      void* v833 = *((void**)v832);
      unsigned char* cast834 = (unsigned char*)v833;
      long c835 = -24;
      unsigned char* ptr836 = &(cast834)[c835];
      long* cast837 = (long*)ptr836;
      long t838 = *cast837;
      unsigned char* cast839 = (unsigned char*)t831;
      unsigned char* ptr840 = &(cast839)[t838];
      struct std__basic_ostream_char__std__char_traits_char__* cast841 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr840;
      struct std__basic_ios_char__std__char_traits_char__* cast842 = (struct std__basic_ios_char__std__char_traits_char__*)cast841;
      int t843 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast842, t843);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t844 = __out825;
      char* t845 = __s826;
      char* t846 = __s826;
      unsigned long r847 = std__char_traits_char___length(t846);
      long cast848 = (long)r847;
      struct std__basic_ostream_char__std__char_traits_char__* r849 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t844, t845, cast848);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t850 = __out825;
  __retval827 = t850;
  struct std__basic_ostream_char__std__char_traits_char__* t851 = __retval827;
  return t851;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSEOS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v852, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v853) {
bb854:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this855;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed856;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval857;
  this855 = v852;
  unnamed856 = v853;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t858 = this855;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t859 = unnamed856;
  int* t860 = t859->_M_current;
  t858->_M_current = t860;
  __retval857 = t858;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t861 = __retval857;
  return t861;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v862, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v863) {
bb864:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs865;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs866;
  _Bool __retval867;
  __lhs865 = v862;
  __rhs866 = v863;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t868 = __lhs865;
  int** r869 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t868);
  int* t870 = *r869;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t871 = __rhs866;
  int** r872 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t871);
  int* t873 = *r872;
  _Bool c874 = ((t870 == t873)) ? 1 : 0;
  __retval867 = c874;
  _Bool t875 = __retval867;
  return t875;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v876) {
bb877:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this878;
  int* __retval879;
  this878 = v876;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t880 = this878;
  int* t881 = t880->_M_current;
  __retval879 = t881;
  int* t882 = __retval879;
  return t882;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v883) {
bb884:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this885;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval886;
  this885 = v883;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t887 = this885;
  int* t888 = t887->_M_current;
  int c889 = 1;
  int* ptr890 = &(t888)[c889];
  t887->_M_current = ptr890;
  __retval886 = t887;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t891 = __retval886;
  return t891;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v892, void* v893) {
bb894:
  struct std__basic_ostream_char__std__char_traits_char__* this895;
  void* __pf896;
  struct std__basic_ostream_char__std__char_traits_char__* __retval897;
  this895 = v892;
  __pf896 = v893;
  struct std__basic_ostream_char__std__char_traits_char__* t898 = this895;
  void* t899 = __pf896;
  struct std__basic_ostream_char__std__char_traits_char__* r900 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t899)(t898);
  __retval897 = r900;
  struct std__basic_ostream_char__std__char_traits_char__* t901 = __retval897;
  return t901;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v902) {
bb903:
  struct std__basic_ostream_char__std__char_traits_char__* __os904;
  struct std__basic_ostream_char__std__char_traits_char__* __retval905;
  __os904 = v902;
  struct std__basic_ostream_char__std__char_traits_char__* t906 = __os904;
  struct std__basic_ostream_char__std__char_traits_char__* r907 = std__ostream__flush(t906);
  __retval905 = r907;
  struct std__basic_ostream_char__std__char_traits_char__* t908 = __retval905;
  return t908;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v909) {
bb910:
  struct std__ctype_char_* __f911;
  struct std__ctype_char_* __retval912;
  __f911 = v909;
    struct std__ctype_char_* t913 = __f911;
    _Bool cast914 = (_Bool)t913;
    _Bool u915 = !cast914;
    if (u915) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t916 = __f911;
  __retval912 = t916;
  struct std__ctype_char_* t917 = __retval912;
  return t917;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v918, char v919) {
bb920:
  struct std__ctype_char_* this921;
  char __c922;
  char __retval923;
  this921 = v918;
  __c922 = v919;
  struct std__ctype_char_* t924 = this921;
    char t925 = t924->_M_widen_ok;
    _Bool cast926 = (_Bool)t925;
    if (cast926) {
      char t927 = __c922;
      unsigned char cast928 = (unsigned char)t927;
      unsigned long cast929 = (unsigned long)cast928;
      char t930 = t924->_M_widen[cast929];
      __retval923 = t930;
      char t931 = __retval923;
      return t931;
    }
  std__ctype_char____M_widen_init___const(t924);
  char t932 = __c922;
  void** v933 = (void**)t924;
  void* v934 = *((void**)v933);
  char vcall937 = (char)__VERIFIER_virtual_call_char_char(t924, 6, t932);
  __retval923 = vcall937;
  char t938 = __retval923;
  return t938;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v939, char v940) {
bb941:
  struct std__basic_ios_char__std__char_traits_char__* this942;
  char __c943;
  char __retval944;
  this942 = v939;
  __c943 = v940;
  struct std__basic_ios_char__std__char_traits_char__* t945 = this942;
  struct std__ctype_char_* t946 = t945->_M_ctype;
  struct std__ctype_char_* r947 = std__ctype_char__const__std____check_facet_std__ctype_char___(t946);
  char t948 = __c943;
  char r949 = std__ctype_char___widen_char__const(r947, t948);
  __retval944 = r949;
  char t950 = __retval944;
  return t950;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v951) {
bb952:
  struct std__basic_ostream_char__std__char_traits_char__* __os953;
  struct std__basic_ostream_char__std__char_traits_char__* __retval954;
  __os953 = v951;
  struct std__basic_ostream_char__std__char_traits_char__* t955 = __os953;
  struct std__basic_ostream_char__std__char_traits_char__* t956 = __os953;
  void** v957 = (void**)t956;
  void* v958 = *((void**)v957);
  unsigned char* cast959 = (unsigned char*)v958;
  long c960 = -24;
  unsigned char* ptr961 = &(cast959)[c960];
  long* cast962 = (long*)ptr961;
  long t963 = *cast962;
  unsigned char* cast964 = (unsigned char*)t956;
  unsigned char* ptr965 = &(cast964)[t963];
  struct std__basic_ostream_char__std__char_traits_char__* cast966 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr965;
  struct std__basic_ios_char__std__char_traits_char__* cast967 = (struct std__basic_ios_char__std__char_traits_char__*)cast966;
  char c968 = 10;
  char r969 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast967, c968);
  struct std__basic_ostream_char__std__char_traits_char__* r970 = std__ostream__put(t955, r969);
  struct std__basic_ostream_char__std__char_traits_char__* r971 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r970);
  __retval954 = r971;
  struct std__basic_ostream_char__std__char_traits_char__* t972 = __retval954;
  return t972;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v973) {
bb974:
  struct std__vector_int__std__allocator_int__* this975;
  this975 = v973;
  struct std__vector_int__std__allocator_int__* t976 = this975;
    struct std___Vector_base_int__std__allocator_int__* base977 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t976 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base978 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base977->_M_impl) + 0);
    int* t979 = base978->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base980 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t976 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base981 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base980->_M_impl) + 0);
    int* t982 = base981->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base983 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t976 + 0);
    struct std__allocator_int_* r984 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base983);
    void_std___Destroy_int___int_(t979, t982, r984);
  {
    struct std___Vector_base_int__std__allocator_int__* base985 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t976 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base985);
  }
  return;
}

// function: main
int main() {
bb986:
  int __retval987;
  struct std__vector_int__std__allocator_int__ first988;
  struct std__vector_int__std__allocator_int__ second989;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it990;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0991;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1992;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2993;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3994;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp4995;
  int c996 = 0;
  __retval987 = c996;
  std__vector_int__std__allocator_int_____vector(&first988);
    std__vector_int__std__allocator_int_____vector(&second989);
      __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&it990);
        int i997;
        int ref_tmp0998;
        int c999 = 1;
        i997 = c999;
        while (1) {
          int t1001 = i997;
          int c1002 = 6;
          _Bool c1003 = ((t1001 < c1002)) ? 1 : 0;
          if (!c1003) break;
          int t1004 = i997;
          int c1005 = 10;
          int b1006 = t1004 * c1005;
          ref_tmp0998 = b1006;
          std__vector_int__std__allocator_int_____push_back(&first988, &ref_tmp0998);
        for_step1000: ;
          int t1007 = i997;
          int u1008 = t1007 + 1;
          i997 = u1008;
        }
        int i1009;
        int ref_tmp11010;
        int c1011 = 1;
        i1009 = c1011;
        while (1) {
          int t1013 = i1009;
          int c1014 = 6;
          _Bool c1015 = ((t1013 < c1014)) ? 1 : 0;
          if (!c1015) break;
          int t1016 = i1009;
          int c1017 = 10;
          int b1018 = t1016 * c1017;
          ref_tmp11010 = b1018;
          std__vector_int__std__allocator_int_____push_back(&second989, &ref_tmp11010);
        for_step1012: ;
          int t1019 = i1009;
          int u1020 = t1019 + 1;
          i1009 = u1020;
        }
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1021 = std__vector_int__std__allocator_int_____begin(&first988);
      agg_tmp0991 = r1021;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1022 = std__vector_int__std__allocator_int_____end(&first988);
      agg_tmp1992 = r1022;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1023 = std__vector_int__std__allocator_int_____begin(&second989);
      agg_tmp2993 = r1023;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1024 = std__vector_int__std__allocator_int_____begin(&first988);
      agg_tmp3994 = r1024;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1025 = agg_tmp0991;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1026 = agg_tmp1992;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1027 = agg_tmp2993;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1028 = agg_tmp3994;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1029 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__transform___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_____int__int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int____(t1025, t1026, t1027, t1028, &op_sum);
      agg_tmp4995 = r1029;
      unsigned long c1030 = 3;
      int* r1031 = std__vector_int__std__allocator_int_____operator__(&first988, c1030);
      int t1032 = *r1031;
      int c1033 = 80;
      _Bool c1034 = ((t1032 != c1033)) ? 1 : 0;
      if (c1034) {
      } else {
        char* cast1035 = (char*)&(_str);
        char* c1036 = _str_1;
        unsigned int c1037 = 35;
        char* cast1038 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast1035, c1036, c1037, cast1038);
      }
      char* cast1039 = (char*)&(_str_2);
      struct std__basic_ostream_char__std__char_traits_char__* r1040 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1039);
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp21041;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp31042;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1043 = std__vector_int__std__allocator_int_____begin(&first988);
        ref_tmp21041 = r1043;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1044 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it990, &ref_tmp21041);
        while (1) {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1046 = std__vector_int__std__allocator_int_____end(&first988);
          ref_tmp31042 = r1046;
          _Bool r1047 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it990, &ref_tmp31042);
          _Bool u1048 = !r1047;
          if (!u1048) break;
          char* cast1049 = (char*)&(_str_3);
          struct std__basic_ostream_char__std__char_traits_char__* r1050 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1049);
          int* r1051 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it990);
          int t1052 = *r1051;
          struct std__basic_ostream_char__std__char_traits_char__* r1053 = std__ostream__operator__(r1050, t1052);
        for_step1045: ;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1054 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&it990);
        }
      struct std__basic_ostream_char__std__char_traits_char__* r1055 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      int c1056 = 0;
      __retval987 = c1056;
      int t1057 = __retval987;
      int ret_val1058 = t1057;
      {
        std__vector_int__std__allocator_int______vector(&second989);
      }
      {
        std__vector_int__std__allocator_int______vector(&first988);
      }
      return ret_val1058;
  int t1059 = __retval987;
  return t1059;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1060) {
bb1061:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1062;
  this1062 = v1060;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1063 = this1062;
  struct std__allocator_int_* base1064 = (struct std__allocator_int_*)((char *)t1063 + 0);
  std__allocator_int___allocator(base1064);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1065 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t1063 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base1065);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1066) {
bb1067:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1068;
  this1068 = v1066;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1069 = this1068;
  {
    struct std__allocator_int_* base1070 = (struct std__allocator_int_*)((char *)t1069 + 0);
    std__allocator_int____allocator(base1070);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2Ev
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1071) {
bb1072:
  struct std___Vector_base_int__std__allocator_int__* this1073;
  this1073 = v1071;
  struct std___Vector_base_int__std__allocator_int__* t1074 = this1073;
  _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(&t1074->_M_impl);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1075:
  _Bool __retval1076;
    _Bool c1077 = 0;
    __retval1076 = c1077;
    _Bool t1078 = __retval1076;
    return t1078;
  abort();
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1079, int* v1080, unsigned long v1081) {
bb1082:
  struct std____new_allocator_int_* this1083;
  int* __p1084;
  unsigned long __n1085;
  this1083 = v1079;
  __p1084 = v1080;
  __n1085 = v1081;
  struct std____new_allocator_int_* t1086 = this1083;
    unsigned long c1087 = 4;
    unsigned long c1088 = 16;
    _Bool c1089 = ((c1087 > c1088)) ? 1 : 0;
    if (c1089) {
      int* t1090 = __p1084;
      void* cast1091 = (void*)t1090;
      unsigned long t1092 = __n1085;
      unsigned long c1093 = 4;
      unsigned long b1094 = t1092 * c1093;
      unsigned long c1095 = 4;
      operator_delete_3(cast1091, b1094, c1095);
      return;
    }
  int* t1096 = __p1084;
  void* cast1097 = (void*)t1096;
  unsigned long t1098 = __n1085;
  unsigned long c1099 = 4;
  unsigned long b1100 = t1098 * c1099;
  operator_delete_2(cast1097, b1100);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1101, int* v1102, unsigned long v1103) {
bb1104:
  struct std__allocator_int_* this1105;
  int* __p1106;
  unsigned long __n1107;
  this1105 = v1101;
  __p1106 = v1102;
  __n1107 = v1103;
  struct std__allocator_int_* t1108 = this1105;
    _Bool r1109 = std____is_constant_evaluated();
    if (r1109) {
      int* t1110 = __p1106;
      void* cast1111 = (void*)t1110;
      operator_delete(cast1111);
      return;
    }
  struct std____new_allocator_int_* base1112 = (struct std____new_allocator_int_*)((char *)t1108 + 0);
  int* t1113 = __p1106;
  unsigned long t1114 = __n1107;
  std____new_allocator_int___deallocate(base1112, t1113, t1114);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1115, int* v1116, unsigned long v1117) {
bb1118:
  struct std__allocator_int_* __a1119;
  int* __p1120;
  unsigned long __n1121;
  __a1119 = v1115;
  __p1120 = v1116;
  __n1121 = v1117;
  struct std__allocator_int_* t1122 = __a1119;
  int* t1123 = __p1120;
  unsigned long t1124 = __n1121;
  std__allocator_int___deallocate(t1122, t1123, t1124);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v1125, int* v1126, unsigned long v1127) {
bb1128:
  struct std___Vector_base_int__std__allocator_int__* this1129;
  int* __p1130;
  unsigned long __n1131;
  this1129 = v1125;
  __p1130 = v1126;
  __n1131 = v1127;
  struct std___Vector_base_int__std__allocator_int__* t1132 = this1129;
    int* t1133 = __p1130;
    _Bool cast1134 = (_Bool)t1133;
    if (cast1134) {
      struct std__allocator_int_* base1135 = (struct std__allocator_int_*)((char *)&(t1132->_M_impl) + 0);
      int* t1136 = __p1130;
      unsigned long t1137 = __n1131;
      std__allocator_traits_std__allocator_int_____deallocate(base1135, t1136, t1137);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1138) {
bb1139:
  struct std___Vector_base_int__std__allocator_int__* this1140;
  this1140 = v1138;
  struct std___Vector_base_int__std__allocator_int__* t1141 = this1140;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1142 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1141->_M_impl) + 0);
    int* t1143 = base1142->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1144 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1141->_M_impl) + 0);
    int* t1145 = base1144->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1146 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1141->_M_impl) + 0);
    int* t1147 = base1146->_M_start;
    long diff1148 = t1145 - t1147;
    unsigned long cast1149 = (unsigned long)diff1148;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1141, t1143, cast1149);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1141->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1150) {
bb1151:
  struct std____new_allocator_int_* this1152;
  this1152 = v1150;
  struct std____new_allocator_int_* t1153 = this1152;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v1154) {
bb1155:
  struct std__allocator_int_* this1156;
  this1156 = v1154;
  struct std__allocator_int_* t1157 = this1156;
  struct std____new_allocator_int_* base1158 = (struct std____new_allocator_int_*)((char *)t1157 + 0);
  std____new_allocator_int_____new_allocator(base1158);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1159) {
bb1160:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1161;
  this1161 = v1159;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1162 = this1161;
  int* c1163 = ((void*)0);
  t1162->_M_start = c1163;
  int* c1164 = ((void*)0);
  t1162->_M_finish = c1164;
  int* c1165 = ((void*)0);
  t1162->_M_end_of_storage = c1165;
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v1166) {
bb1167:
  struct std__allocator_int_* this1168;
  this1168 = v1166;
  struct std__allocator_int_* t1169 = this1168;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1170, int* v1171) {
bb1172:
  int* __first1173;
  int* __last1174;
  __first1173 = v1170;
  __last1174 = v1171;
      _Bool r1175 = std____is_constant_evaluated();
      if (r1175) {
          while (1) {
            int* t1177 = __first1173;
            int* t1178 = __last1174;
            _Bool c1179 = ((t1177 != t1178)) ? 1 : 0;
            if (!c1179) break;
            int* t1180 = __first1173;
            void_std__destroy_at_int_(t1180);
          for_step1176: ;
            int* t1181 = __first1173;
            int c1182 = 1;
            int* ptr1183 = &(t1181)[c1182];
            __first1173 = ptr1183;
          }
      }
  return;
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
  return;
}

