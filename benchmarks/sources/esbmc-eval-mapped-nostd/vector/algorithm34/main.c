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
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_myints[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[17] = "myvector[i] == k";
char _str_1[106] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/algorithm34/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[19] = "myvector contains:";
char _str_3[2] = " ";
char _str_4[26] = "vector::_M_default_append";
char _str_5[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_6[19] = "__n < this->size()";
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* p0);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* p0);
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* p0);
_Bool std__is_constant_evaluated();
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* p0, int** p1);
int* _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* p0);
void void_std___Construct_int_(int* p0);
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* p0);
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* p0);
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
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* p0);
extern void std____throw_length_error(char* p0);
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, char* p2);
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
extern void* memcpy(void* p0, void* p1, unsigned long p2);
int* std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
int* int__std____niter_base_int__(int* p0);
int* int__std____relocate_a_int___int___std__allocator_int___(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
int* std__vector_int__std__allocator_int______S_relocate(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* p0);
void std__vector_int__std__allocator_int______M_default_append(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);
void std__vector_int__std__allocator_int______M_erase_at_end(struct std__vector_int__std__allocator_int__* p0, int* p1);
void std__vector_int__std__allocator_int_____resize(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______reverse_copy_int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(int* p0, int* p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
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
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
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
void void_std__destroy_at_int_(int* p0);
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

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v10) {
bb11:
  struct std__vector_int__std__allocator_int__* this12;
  unsigned long __retval13;
  long __dif14;
  this12 = v10;
  struct std__vector_int__std__allocator_int__* t15 = this12;
  struct std___Vector_base_int__std__allocator_int__* base16 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t15 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base17 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base16->_M_impl) + 0);
  int* t18 = base17->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base19 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t15 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base20 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base19->_M_impl) + 0);
  int* t21 = base20->_M_start;
  long diff22 = t18 - t21;
  __dif14 = diff22;
    long t23 = __dif14;
    long c24 = 0;
    _Bool c25 = ((t23 < c24)) ? 1 : 0;
    if (c25) {
      __builtin_unreachable();
    }
  long t26 = __dif14;
  unsigned long cast27 = (unsigned long)t26;
  __retval13 = cast27;
  unsigned long t28 = __retval13;
  return t28;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v29, unsigned long* v30) {
bb31:
  unsigned long* __a32;
  unsigned long* __b33;
  unsigned long* __retval34;
  __a32 = v29;
  __b33 = v30;
    unsigned long* t35 = __b33;
    unsigned long t36 = *t35;
    unsigned long* t37 = __a32;
    unsigned long t38 = *t37;
    _Bool c39 = ((t36 < t38)) ? 1 : 0;
    if (c39) {
      unsigned long* t40 = __b33;
      __retval34 = t40;
      unsigned long* t41 = __retval34;
      return t41;
    }
  unsigned long* t42 = __a32;
  __retval34 = t42;
  unsigned long* t43 = __retval34;
  return t43;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v44) {
bb45:
  struct std__allocator_int_* __a46;
  unsigned long __retval47;
  unsigned long __diffmax48;
  unsigned long __allocmax49;
  __a46 = v44;
  unsigned long c50 = 2305843009213693951;
  __diffmax48 = c50;
  unsigned long c51 = 4611686018427387903;
  __allocmax49 = c51;
  unsigned long* r52 = unsigned_long_const__std__min_unsigned_long_(&__diffmax48, &__allocmax49);
  unsigned long t53 = *r52;
  __retval47 = t53;
  unsigned long t54 = __retval47;
  return t54;
}

// function: _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* v55) {
bb56:
  struct std___Vector_base_int__std__allocator_int__* this57;
  struct std__allocator_int_* __retval58;
  this57 = v55;
  struct std___Vector_base_int__std__allocator_int__* t59 = this57;
  struct std__allocator_int_* base60 = (struct std__allocator_int_*)((char *)&(t59->_M_impl) + 0);
  __retval58 = base60;
  struct std__allocator_int_* t61 = __retval58;
  return t61;
}

// function: _ZNKSt6vectorIiSaIiEE8max_sizeEv
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* v62) {
bb63:
  struct std__vector_int__std__allocator_int__* this64;
  unsigned long __retval65;
  this64 = v62;
  struct std__vector_int__std__allocator_int__* t66 = this64;
  struct std___Vector_base_int__std__allocator_int__* base67 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t66 + 0);
  struct std__allocator_int_* r68 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(base67);
  unsigned long r69 = std__vector_int__std__allocator_int______S_max_size(r68);
  __retval65 = r69;
  unsigned long t70 = __retval65;
  return t70;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb71:
  _Bool __retval72;
    _Bool c73 = 0;
    __retval72 = c73;
    _Bool t74 = __retval72;
    return t74;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v75, int** v76) {
bb77:
  struct std___UninitDestroyGuard_int____void_* this78;
  int** __first79;
  this78 = v75;
  __first79 = v76;
  struct std___UninitDestroyGuard_int____void_* t80 = this78;
  int** t81 = __first79;
  int* t82 = *t81;
  t80->_M_first = t82;
  int** t83 = __first79;
  t80->_M_cur = t83;
  return;
}

// function: _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v84) {
bb85:
  int* __location86;
  int* __retval87;
  void* __loc88;
  __location86 = v84;
  int* t89 = __location86;
  void* cast90 = (void*)t89;
  __loc88 = cast90;
    void* t91 = __loc88;
    int* cast92 = (int*)t91;
    int c93 = 0;
    *cast92 = c93;
    __retval87 = cast92;
    int* t94 = __retval87;
    return t94;
  abort();
}

// function: _ZSt10_ConstructIiJEEvPT_DpOT0_
void void_std___Construct_int_(int* v95) {
bb96:
  int* __p97;
  __p97 = v95;
    _Bool r98 = std____is_constant_evaluated();
    if (r98) {
      int* t99 = __p97;
      int* r100 = _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t99);
      return;
    }
  int* t101 = __p97;
  void* cast102 = (void*)t101;
  int* cast103 = (int*)cast102;
  int c104 = 0;
  *cast103 = c104;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v105) {
bb106:
  struct std___UninitDestroyGuard_int____void_* this107;
  this107 = v105;
  struct std___UninitDestroyGuard_int____void_* t108 = this107;
  int** c109 = ((void*)0);
  t108->_M_cur = c109;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v110) {
bb111:
  struct std___UninitDestroyGuard_int____void_* this112;
  this112 = v110;
  struct std___UninitDestroyGuard_int____void_* t113 = this112;
    int** t114 = t113->_M_cur;
    int** c115 = ((void*)0);
    _Bool c116 = ((t114 != c115)) ? 1 : 0;
    if (c116) {
      int* t117 = t113->_M_first;
      int** t118 = t113->_M_cur;
      int* t119 = *t118;
      void_std___Destroy_int__(t117, t119);
    }
  return;
}

// function: _ZNSt27__uninitialized_default_n_1ILb0EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(int* v120, unsigned long v121) {
bb122:
  int* __first123;
  unsigned long __n124;
  int* __retval125;
  struct std___UninitDestroyGuard_int____void_ __guard126;
  __first123 = v120;
  __n124 = v121;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard126, &__first123);
      while (1) {
        unsigned long t128 = __n124;
        unsigned long c129 = 0;
        _Bool c130 = ((t128 > c129)) ? 1 : 0;
        if (!c130) break;
        int* t131 = __first123;
        void_std___Construct_int_(t131);
      for_step127: ;
        unsigned long t132 = __n124;
        unsigned long u133 = t132 - 1;
        __n124 = u133;
        int* t134 = __first123;
        int c135 = 1;
        int* ptr136 = &(t134)[c135];
        __first123 = ptr136;
      }
    std___UninitDestroyGuard_int___void___release(&__guard126);
    int* t137 = __first123;
    __retval125 = t137;
    int* t138 = __retval125;
    int* ret_val139 = t138;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard126);
    }
    return ret_val139;
  abort();
}

// function: _ZSt9__fill_a1IPiiEvT_S1_RKT0_
void void_std____fill_a1_int___int_(int* v140, int* v141, int* v142) {
bb143:
  int* __first144;
  int* __last145;
  int* __value146;
  _Bool __load_outside_loop147;
  int __val148;
  __first144 = v140;
  __last145 = v141;
  __value146 = v142;
  _Bool c149 = 1;
  __load_outside_loop147 = c149;
  int* t150 = __value146;
  int t151 = *t150;
  __val148 = t151;
    while (1) {
      int* t153 = __first144;
      int* t154 = __last145;
      _Bool c155 = ((t153 != t154)) ? 1 : 0;
      if (!c155) break;
      int t156 = __val148;
      int* t157 = __first144;
      *t157 = t156;
    for_step152: ;
      int* t158 = __first144;
      int c159 = 1;
      int* ptr160 = &(t158)[c159];
      __first144 = ptr160;
    }
  return;
}

// function: _ZSt8__fill_aIPiiEvT_S1_RKT0_
void void_std____fill_a_int___int_(int* v161, int* v162, int* v163) {
bb164:
  int* __first165;
  int* __last166;
  int* __value167;
  __first165 = v161;
  __last166 = v162;
  __value167 = v163;
  int* t168 = __first165;
  int* t169 = __last166;
  int* t170 = __value167;
  void_std____fill_a1_int___int_(t168, t169, t170);
  return;
}

// function: _ZSt10__fill_n_aIPimiET_S1_T0_RKT1_St26random_access_iterator_tag
int* int__std____fill_n_a_int___unsigned_long__int_(int* v171, unsigned long v172, int* v173, struct std__random_access_iterator_tag v174) {
bb175:
  int* __first176;
  unsigned long __n177;
  int* __value178;
  struct std__random_access_iterator_tag unnamed179;
  int* __retval180;
  __first176 = v171;
  __n177 = v172;
  __value178 = v173;
  unnamed179 = v174;
    unsigned long t181 = __n177;
    unsigned long c182 = 0;
    _Bool c183 = ((t181 <= c182)) ? 1 : 0;
    if (c183) {
      int* t184 = __first176;
      __retval180 = t184;
      int* t185 = __retval180;
      return t185;
    }
  int* t186 = __first176;
  int* t187 = __first176;
  unsigned long t188 = __n177;
  int* ptr189 = &(t187)[t188];
  int* t190 = __value178;
  void_std____fill_a_int___int_(t186, ptr189, t190);
  int* t191 = __first176;
  unsigned long t192 = __n177;
  int* ptr193 = &(t191)[t192];
  __retval180 = ptr193;
  int* t194 = __retval180;
  return t194;
}

// function: _ZSt17__size_to_integerm
unsigned long std____size_to_integer(unsigned long v195) {
bb196:
  unsigned long __n197;
  unsigned long __retval198;
  __n197 = v195;
  unsigned long t199 = __n197;
  __retval198 = t199;
  unsigned long t200 = __retval198;
  return t200;
}

// function: _ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** v201) {
bb202:
  int** unnamed203;
  struct std__random_access_iterator_tag __retval204;
  unnamed203 = v201;
  struct std__random_access_iterator_tag t205 = __retval204;
  return t205;
}

// function: _ZSt6fill_nIPimiET_S1_T0_RKT1_
int* int__std__fill_n_int___unsigned_long__int_(int* v206, unsigned long v207, int* v208) {
bb209:
  int* __first210;
  unsigned long __n211;
  int* __value212;
  int* __retval213;
  struct std__random_access_iterator_tag agg_tmp0214;
  __first210 = v206;
  __n211 = v207;
  __value212 = v208;
  int* t215 = __first210;
  unsigned long t216 = __n211;
  unsigned long r217 = std____size_to_integer(t216);
  int* t218 = __value212;
  struct std__random_access_iterator_tag r219 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first210);
  agg_tmp0214 = r219;
  struct std__random_access_iterator_tag t220 = agg_tmp0214;
  int* r221 = int__std____fill_n_a_int___unsigned_long__int_(t215, r217, t218, t220);
  __retval213 = r221;
  int* t222 = __retval213;
  return t222;
}

// function: _ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(int* v223, unsigned long v224) {
bb225:
  int* __first226;
  unsigned long __n227;
  int* __retval228;
  __first226 = v223;
  __n227 = v224;
    unsigned long t229 = __n227;
    unsigned long c230 = 0;
    _Bool c231 = ((t229 > c230)) ? 1 : 0;
    if (c231) {
      int* __val232;
      int* t233 = __first226;
      __val232 = t233;
      int* t234 = __val232;
      void_std___Construct_int_(t234);
      int* t235 = __first226;
      int c236 = 1;
      int* ptr237 = &(t235)[c236];
      __first226 = ptr237;
      int* t238 = __first226;
      unsigned long t239 = __n227;
      unsigned long c240 = 1;
      unsigned long b241 = t239 - c240;
      int* t242 = __val232;
      int* r243 = int__std__fill_n_int___unsigned_long__int_(t238, b241, t242);
      __first226 = r243;
    }
  int* t244 = __first226;
  __retval228 = t244;
  int* t245 = __retval228;
  return t245;
}

// function: _ZSt25__uninitialized_default_nIPimET_S1_T0_
int* int__std____uninitialized_default_n_int___unsigned_long_(int* v246, unsigned long v247) {
bb248:
  int* __first249;
  unsigned long __n250;
  int* __retval251;
  _Bool __can_fill252;
  __first249 = v246;
  __n250 = v247;
    _Bool r253 = std__is_constant_evaluated();
    if (r253) {
      int* t254 = __first249;
      unsigned long t255 = __n250;
      int* r256 = int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(t254, t255);
      __retval251 = r256;
      int* t257 = __retval251;
      return t257;
    }
  _Bool c258 = 1;
  __can_fill252 = c258;
  int* t259 = __first249;
  unsigned long t260 = __n250;
  int* r261 = int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(t259, t260);
  __retval251 = r261;
  int* t262 = __retval251;
  return t262;
}

// function: _ZSt27__uninitialized_default_n_aIPimiET_S1_T0_RSaIT1_E
int* int__std____uninitialized_default_n_a_int___unsigned_long__int_(int* v263, unsigned long v264, struct std__allocator_int_* v265) {
bb266:
  int* __first267;
  unsigned long __n268;
  struct std__allocator_int_* unnamed269;
  int* __retval270;
  __first267 = v263;
  __n268 = v264;
  unnamed269 = v265;
  int* t271 = __first267;
  unsigned long t272 = __n268;
  int* r273 = int__std____uninitialized_default_n_int___unsigned_long_(t271, t272);
  __retval270 = r273;
  int* t274 = __retval270;
  return t274;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v275) {
bb276:
  struct std___Vector_base_int__std__allocator_int__* this277;
  struct std__allocator_int_* __retval278;
  this277 = v275;
  struct std___Vector_base_int__std__allocator_int__* t279 = this277;
  struct std__allocator_int_* base280 = (struct std__allocator_int_*)((char *)&(t279->_M_impl) + 0);
  __retval278 = base280;
  struct std__allocator_int_* t281 = __retval278;
  return t281;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v282, unsigned long* v283) {
bb284:
  unsigned long* __a285;
  unsigned long* __b286;
  unsigned long* __retval287;
  __a285 = v282;
  __b286 = v283;
    unsigned long* t288 = __a285;
    unsigned long t289 = *t288;
    unsigned long* t290 = __b286;
    unsigned long t291 = *t290;
    _Bool c292 = ((t289 < t291)) ? 1 : 0;
    if (c292) {
      unsigned long* t293 = __b286;
      __retval287 = t293;
      unsigned long* t294 = __retval287;
      return t294;
    }
  unsigned long* t295 = __a285;
  __retval287 = t295;
  unsigned long* t296 = __retval287;
  return t296;
}

// function: _ZNKSt6vectorIiSaIiEE12_M_check_lenEmPKc
unsigned long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std__vector_int__std__allocator_int__* v297, unsigned long v298, char* v299) {
bb300:
  struct std__vector_int__std__allocator_int__* this301;
  unsigned long __n302;
  char* __s303;
  unsigned long __retval304;
  unsigned long __len305;
  unsigned long ref_tmp0306;
  this301 = v297;
  __n302 = v298;
  __s303 = v299;
  struct std__vector_int__std__allocator_int__* t307 = this301;
    unsigned long r308 = std__vector_int__std__allocator_int_____max_size___const(t307);
    unsigned long r309 = std__vector_int__std__allocator_int_____size___const(t307);
    unsigned long b310 = r308 - r309;
    unsigned long t311 = __n302;
    _Bool c312 = ((b310 < t311)) ? 1 : 0;
    if (c312) {
      char* t313 = __s303;
      std____throw_length_error(t313);
    }
  unsigned long r314 = std__vector_int__std__allocator_int_____size___const(t307);
  unsigned long r315 = std__vector_int__std__allocator_int_____size___const(t307);
  ref_tmp0306 = r315;
  unsigned long* r316 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp0306, &__n302);
  unsigned long t317 = *r316;
  unsigned long b318 = r314 + t317;
  __len305 = b318;
  unsigned long t319 = __len305;
  unsigned long r320 = std__vector_int__std__allocator_int_____size___const(t307);
  _Bool c321 = ((t319 < r320)) ? 1 : 0;
  _Bool ternary322;
  if (c321) {
    _Bool c323 = 1;
    ternary322 = (_Bool)c323;
  } else {
    unsigned long t324 = __len305;
    unsigned long r325 = std__vector_int__std__allocator_int_____max_size___const(t307);
    _Bool c326 = ((t324 > r325)) ? 1 : 0;
    ternary322 = (_Bool)c326;
  }
  unsigned long ternary327;
  if (ternary322) {
    unsigned long r328 = std__vector_int__std__allocator_int_____max_size___const(t307);
    ternary327 = (unsigned long)r328;
  } else {
    unsigned long t329 = __len305;
    ternary327 = (unsigned long)t329;
  }
  __retval304 = ternary327;
  unsigned long t330 = __retval304;
  return t330;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v331) {
bb332:
  struct std____new_allocator_int_* this333;
  unsigned long __retval334;
  this333 = v331;
  struct std____new_allocator_int_* t335 = this333;
  unsigned long c336 = 9223372036854775807;
  unsigned long c337 = 4;
  unsigned long b338 = c336 / c337;
  __retval334 = b338;
  unsigned long t339 = __retval334;
  return t339;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v340, unsigned long v341, void* v342) {
bb343:
  struct std____new_allocator_int_* this344;
  unsigned long __n345;
  void* unnamed346;
  int* __retval347;
  this344 = v340;
  __n345 = v341;
  unnamed346 = v342;
  struct std____new_allocator_int_* t348 = this344;
    unsigned long t349 = __n345;
    unsigned long r350 = std____new_allocator_int____M_max_size___const(t348);
    _Bool c351 = ((t349 > r350)) ? 1 : 0;
    if (c351) {
        unsigned long t352 = __n345;
        unsigned long c353 = -1;
        unsigned long c354 = 4;
        unsigned long b355 = c353 / c354;
        _Bool c356 = ((t352 > b355)) ? 1 : 0;
        if (c356) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c357 = 4;
    unsigned long c358 = 16;
    _Bool c359 = ((c357 > c358)) ? 1 : 0;
    if (c359) {
      unsigned long __al360;
      unsigned long c361 = 4;
      __al360 = c361;
      unsigned long t362 = __n345;
      unsigned long c363 = 4;
      unsigned long b364 = t362 * c363;
      unsigned long t365 = __al360;
      void* r366 = operator_new_2(b364, t365);
      int* cast367 = (int*)r366;
      __retval347 = cast367;
      int* t368 = __retval347;
      return t368;
    }
  unsigned long t369 = __n345;
  unsigned long c370 = 4;
  unsigned long b371 = t369 * c370;
  void* r372 = operator_new(b371);
  int* cast373 = (int*)r372;
  __retval347 = cast373;
  int* t374 = __retval347;
  return t374;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v375, unsigned long v376) {
bb377:
  struct std__allocator_int_* this378;
  unsigned long __n379;
  int* __retval380;
  this378 = v375;
  __n379 = v376;
  struct std__allocator_int_* t381 = this378;
    _Bool r382 = std____is_constant_evaluated();
    if (r382) {
        unsigned long t383 = __n379;
        unsigned long c384 = 4;
        unsigned long ovr385;
        _Bool ovf386 = __builtin_mul_overflow(t383, c384, &ovr385);
        __n379 = ovr385;
        if (ovf386) {
          std____throw_bad_array_new_length();
        }
      unsigned long t387 = __n379;
      void* r388 = operator_new(t387);
      int* cast389 = (int*)r388;
      __retval380 = cast389;
      int* t390 = __retval380;
      return t390;
    }
  struct std____new_allocator_int_* base391 = (struct std____new_allocator_int_*)((char *)t381 + 0);
  unsigned long t392 = __n379;
  void* c393 = ((void*)0);
  int* r394 = std____new_allocator_int___allocate(base391, t392, c393);
  __retval380 = r394;
  int* t395 = __retval380;
  return t395;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v396, unsigned long v397) {
bb398:
  struct std__allocator_int_* __a399;
  unsigned long __n400;
  int* __retval401;
  __a399 = v396;
  __n400 = v397;
  struct std__allocator_int_* t402 = __a399;
  unsigned long t403 = __n400;
  int* r404 = std__allocator_int___allocate(t402, t403);
  __retval401 = r404;
  int* t405 = __retval401;
  return t405;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v406, unsigned long v407) {
bb408:
  struct std___Vector_base_int__std__allocator_int__* this409;
  unsigned long __n410;
  int* __retval411;
  this409 = v406;
  __n410 = v407;
  struct std___Vector_base_int__std__allocator_int__* t412 = this409;
  unsigned long t413 = __n410;
  unsigned long c414 = 0;
  _Bool c415 = ((t413 != c414)) ? 1 : 0;
  int* ternary416;
  if (c415) {
    struct std__allocator_int_* base417 = (struct std__allocator_int_*)((char *)&(t412->_M_impl) + 0);
    unsigned long t418 = __n410;
    int* r419 = std__allocator_traits_std__allocator_int_____allocate(base417, t418);
    ternary416 = (int*)r419;
  } else {
    int* c420 = ((void*)0);
    ternary416 = (int*)c420;
  }
  __retval411 = ternary416;
  int* t421 = __retval411;
  return t421;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocC2EPimRSt12_Vector_baseIiS0_E
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v422, int* v423, unsigned long v424, struct std___Vector_base_int__std__allocator_int__* v425) {
bb426:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this427;
  int* __s428;
  unsigned long __l429;
  struct std___Vector_base_int__std__allocator_int__* __vect430;
  this427 = v422;
  __s428 = v423;
  __l429 = v424;
  __vect430 = v425;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t431 = this427;
  int* t432 = __s428;
  t431->_M_storage = t432;
  unsigned long t433 = __l429;
  t431->_M_len = t433;
  struct std___Vector_base_int__std__allocator_int__* t434 = __vect430;
  t431->_M_vect = t434;
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEC2ERKS1_
void __gnu_cxx____normal_iterator_int___void_____normal_iterator(struct __gnu_cxx____normal_iterator_int____void_* v435, int** v436) {
bb437:
  struct __gnu_cxx____normal_iterator_int____void_* this438;
  int** __i439;
  this438 = v435;
  __i439 = v436;
  struct __gnu_cxx____normal_iterator_int____void_* t440 = this438;
  int** t441 = __i439;
  int* t442 = *t441;
  t440->_M_current = t442;
  return;
}

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v443, int* v444) {
bb445:
  int* __location446;
  int* __args447;
  int* __retval448;
  void* __loc449;
  __location446 = v443;
  __args447 = v444;
  int* t450 = __location446;
  void* cast451 = (void*)t450;
  __loc449 = cast451;
    void* t452 = __loc449;
    int* cast453 = (int*)t452;
    int* t454 = __args447;
    int t455 = *t454;
    *cast453 = t455;
    __retval448 = cast453;
    int* t456 = __retval448;
    return t456;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* v457, int* v458, int* v459) {
bb460:
  struct std__allocator_int_* __a461;
  int* __p462;
  int* __args463;
  __a461 = v457;
  __p462 = v458;
  __args463 = v459;
  int* t464 = __p462;
  int* t465 = __args463;
  int* r466 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t464, t465);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE7destroyIiEEvRS0_PT_
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* v467, int* v468) {
bb469:
  struct std__allocator_int_* __a470;
  int* __p471;
  __a470 = v467;
  __p471 = v468;
  int* t472 = __p471;
  void_std__destroy_at_int_(t472);
  return;
}

// function: _ZSt19__relocate_object_aIiiSaIiEEvPT_PT0_RT1_
void void_std____relocate_object_a_int__int__std__allocator_int___(int* v473, int* v474, struct std__allocator_int_* v475) {
bb476:
  int* __dest477;
  int* __orig478;
  struct std__allocator_int_* __alloc479;
  __dest477 = v473;
  __orig478 = v474;
  __alloc479 = v475;
  struct std__allocator_int_* t480 = __alloc479;
  int* t481 = __dest477;
  int* t482 = __orig478;
  void_std__allocator_traits_std__allocator_int_____construct_int__int_(t480, t481, t482);
  struct std__allocator_int_* t483 = __alloc479;
  int* t484 = __orig478;
  void_std__allocator_traits_std__allocator_int_____destroy_int_(t483, t484);
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivEdeEv
int* __gnu_cxx____normal_iterator_int___void___operator____const(struct __gnu_cxx____normal_iterator_int____void_* v485) {
bb486:
  struct __gnu_cxx____normal_iterator_int____void_* this487;
  int* __retval488;
  this487 = v485;
  struct __gnu_cxx____normal_iterator_int____void_* t489 = this487;
  int* t490 = t489->_M_current;
  __retval488 = t490;
  int* t491 = __retval488;
  return t491;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEppEv
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator__(struct __gnu_cxx____normal_iterator_int____void_* v492) {
bb493:
  struct __gnu_cxx____normal_iterator_int____void_* this494;
  struct __gnu_cxx____normal_iterator_int____void_* __retval495;
  this494 = v492;
  struct __gnu_cxx____normal_iterator_int____void_* t496 = this494;
  int* t497 = t496->_M_current;
  int c498 = 1;
  int* ptr499 = &(t497)[c498];
  t496->_M_current = ptr499;
  __retval495 = t496;
  struct __gnu_cxx____normal_iterator_int____void_* t500 = __retval495;
  return t500;
}

// function: _ZSt14__relocate_a_1IPiN9__gnu_cxx17__normal_iteratorIS0_vEESaIiEET0_T_S6_S5_RT1_
struct __gnu_cxx____normal_iterator_int____void_ __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(int* v501, int* v502, struct __gnu_cxx____normal_iterator_int____void_ v503, struct std__allocator_int_* v504) {
bb505:
  int* __first506;
  int* __last507;
  struct __gnu_cxx____normal_iterator_int____void_ __result508;
  struct std__allocator_int_* __alloc509;
  struct __gnu_cxx____normal_iterator_int____void_ __retval510;
  __first506 = v501;
  __last507 = v502;
  __result508 = v503;
  __alloc509 = v504;
  __retval510 = __result508; // copy
    while (1) {
      int* t512 = __first506;
      int* t513 = __last507;
      _Bool c514 = ((t512 != t513)) ? 1 : 0;
      if (!c514) break;
      int* r515 = __gnu_cxx____normal_iterator_int___void___operator____const(&__retval510);
      int* t516 = __first506;
      struct std__allocator_int_* t517 = __alloc509;
      void_std____relocate_object_a_int__int__std__allocator_int___(r515, t516, t517);
    for_step511: ;
      int* t518 = __first506;
      int c519 = 1;
      int* ptr520 = &(t518)[c519];
      __first506 = ptr520;
      struct __gnu_cxx____normal_iterator_int____void_* r521 = __gnu_cxx____normal_iterator_int___void___operator__(&__retval510);
    }
  struct __gnu_cxx____normal_iterator_int____void_ t522 = __retval510;
  return t522;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEaSEOS2_
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator_(struct __gnu_cxx____normal_iterator_int____void_* v523, struct __gnu_cxx____normal_iterator_int____void_* v524) {
bb525:
  struct __gnu_cxx____normal_iterator_int____void_* this526;
  struct __gnu_cxx____normal_iterator_int____void_* unnamed527;
  struct __gnu_cxx____normal_iterator_int____void_* __retval528;
  this526 = v523;
  unnamed527 = v524;
  struct __gnu_cxx____normal_iterator_int____void_* t529 = this526;
  struct __gnu_cxx____normal_iterator_int____void_* t530 = unnamed527;
  int* t531 = t530->_M_current;
  t529->_M_current = t531;
  __retval528 = t529;
  struct __gnu_cxx____normal_iterator_int____void_* t532 = __retval528;
  return t532;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivE4baseEv
int** __gnu_cxx____normal_iterator_int___void___base___const(struct __gnu_cxx____normal_iterator_int____void_* v533) {
bb534:
  struct __gnu_cxx____normal_iterator_int____void_* this535;
  int** __retval536;
  this535 = v533;
  struct __gnu_cxx____normal_iterator_int____void_* t537 = this535;
  __retval536 = &t537->_M_current;
  int** t538 = __retval536;
  return t538;
}

// function: _ZSt14__relocate_a_1IiiENSt9enable_ifIXsr3std24__is_bitwise_relocatableIT_EE5valueEPS1_E4typeES2_S2_S2_RSaIT0_E
int* std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(int* v539, int* v540, int* v541, struct std__allocator_int_* v542) {
bb543:
  int* __first544;
  int* __last545;
  int* __result546;
  struct std__allocator_int_* __alloc547;
  int* __retval548;
  long __count549;
  __first544 = v539;
  __last545 = v540;
  __result546 = v541;
  __alloc547 = v542;
  int* t550 = __last545;
  int* t551 = __first544;
  long diff552 = t550 - t551;
  __count549 = diff552;
    long t553 = __count549;
    long c554 = 0;
    _Bool c555 = ((t553 > c554)) ? 1 : 0;
    if (c555) {
        _Bool r556 = std__is_constant_evaluated();
        if (r556) {
          struct __gnu_cxx____normal_iterator_int____void_ __out557;
          struct __gnu_cxx____normal_iterator_int____void_ ref_tmp0558;
          struct __gnu_cxx____normal_iterator_int____void_ agg_tmp0559;
          __gnu_cxx____normal_iterator_int___void_____normal_iterator(&__out557, &__result546);
          int* t560 = __first544;
          int* t561 = __last545;
          agg_tmp0559 = __out557; // copy
          struct std__allocator_int_* t562 = __alloc547;
          struct __gnu_cxx____normal_iterator_int____void_ t563 = agg_tmp0559;
          struct __gnu_cxx____normal_iterator_int____void_ r564 = __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(t560, t561, t563, t562);
          ref_tmp0558 = r564;
          struct __gnu_cxx____normal_iterator_int____void_* r565 = __gnu_cxx____normal_iterator_int___void___operator_(&__out557, &ref_tmp0558);
          int** r566 = __gnu_cxx____normal_iterator_int___void___base___const(&__out557);
          int* t567 = *r566;
          __retval548 = t567;
          int* t568 = __retval548;
          return t568;
        }
      int* t569 = __result546;
      void* cast570 = (void*)t569;
      int* t571 = __first544;
      void* cast572 = (void*)t571;
      long t573 = __count549;
      unsigned long cast574 = (unsigned long)t573;
      unsigned long c575 = 4;
      unsigned long b576 = cast574 * c575;
      void* r577 = memcpy(cast570, cast572, b576);
    }
  int* t578 = __result546;
  long t579 = __count549;
  int* ptr580 = &(t578)[t579];
  __retval548 = ptr580;
  int* t581 = __retval548;
  return t581;
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v582) {
bb583:
  int* __it584;
  int* __retval585;
  __it584 = v582;
  int* t586 = __it584;
  __retval585 = t586;
  int* t587 = __retval585;
  return t587;
}

// function: _ZSt12__relocate_aIPiS0_SaIiEET0_T_S3_S2_RT1_
int* int__std____relocate_a_int___int___std__allocator_int___(int* v588, int* v589, int* v590, struct std__allocator_int_* v591) {
bb592:
  int* __first593;
  int* __last594;
  int* __result595;
  struct std__allocator_int_* __alloc596;
  int* __retval597;
  __first593 = v588;
  __last594 = v589;
  __result595 = v590;
  __alloc596 = v591;
  int* t598 = __first593;
  int* r599 = int__std____niter_base_int__(t598);
  int* t600 = __last594;
  int* r601 = int__std____niter_base_int__(t600);
  int* t602 = __result595;
  int* r603 = int__std____niter_base_int__(t602);
  struct std__allocator_int_* t604 = __alloc596;
  int* r605 = std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(r599, r601, r603, t604);
  __retval597 = r605;
  int* t606 = __retval597;
  return t606;
}

// function: _ZNSt6vectorIiSaIiEE11_S_relocateEPiS2_S2_RS0_
int* std__vector_int__std__allocator_int______S_relocate(int* v607, int* v608, int* v609, struct std__allocator_int_* v610) {
bb611:
  int* __first612;
  int* __last613;
  int* __result614;
  struct std__allocator_int_* __alloc615;
  int* __retval616;
  __first612 = v607;
  __last613 = v608;
  __result614 = v609;
  __alloc615 = v610;
  int* t617 = __first612;
  int* t618 = __last613;
  int* t619 = __result614;
  struct std__allocator_int_* t620 = __alloc615;
  int* r621 = int__std____relocate_a_int___int___std__allocator_int___(t617, t618, t619, t620);
  __retval616 = r621;
  int* t622 = __retval616;
  return t622;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocD2Ev
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v623) {
bb624:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this625;
  this625 = v623;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t626 = this625;
    int* t627 = t626->_M_storage;
    _Bool cast628 = (_Bool)t627;
    if (cast628) {
      struct std___Vector_base_int__std__allocator_int__* t629 = t626->_M_vect;
      int* t630 = t626->_M_storage;
      unsigned long t631 = t626->_M_len;
      std___Vector_base_int__std__allocator_int______M_deallocate(t629, t630, t631);
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_M_default_appendEm
void std__vector_int__std__allocator_int______M_default_append(struct std__vector_int__std__allocator_int__* v632, unsigned long v633) {
bb634:
  struct std__vector_int__std__allocator_int__* this635;
  unsigned long __n636;
  this635 = v632;
  __n636 = v633;
  struct std__vector_int__std__allocator_int__* t637 = this635;
    unsigned long t638 = __n636;
    unsigned long c639 = 0;
    _Bool c640 = ((t638 != c639)) ? 1 : 0;
    if (c640) {
      unsigned long __size641;
      unsigned long __navail642;
      unsigned long r643 = std__vector_int__std__allocator_int_____size___const(t637);
      __size641 = r643;
      struct std___Vector_base_int__std__allocator_int__* base644 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t637 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base645 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base644->_M_impl) + 0);
      int* t646 = base645->_M_end_of_storage;
      struct std___Vector_base_int__std__allocator_int__* base647 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t637 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base648 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base647->_M_impl) + 0);
      int* t649 = base648->_M_finish;
      long diff650 = t646 - t649;
      unsigned long cast651 = (unsigned long)diff650;
      __navail642 = cast651;
        unsigned long t652 = __size641;
        unsigned long r653 = std__vector_int__std__allocator_int_____max_size___const(t637);
        _Bool c654 = ((t652 > r653)) ? 1 : 0;
        _Bool ternary655;
        if (c654) {
          _Bool c656 = 1;
          ternary655 = (_Bool)c656;
        } else {
          unsigned long t657 = __navail642;
          unsigned long r658 = std__vector_int__std__allocator_int_____max_size___const(t637);
          unsigned long t659 = __size641;
          unsigned long b660 = r658 - t659;
          _Bool c661 = ((t657 > b660)) ? 1 : 0;
          ternary655 = (_Bool)c661;
        }
        if (ternary655) {
          __builtin_unreachable();
        }
        unsigned long t662 = __navail642;
        unsigned long t663 = __n636;
        _Bool c664 = ((t662 >= t663)) ? 1 : 0;
        if (c664) {
            struct std___Vector_base_int__std__allocator_int__* base665 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t637 + 0);
            struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base666 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base665->_M_impl) + 0);
            int* t667 = base666->_M_finish;
            _Bool cast668 = (_Bool)t667;
            _Bool u669 = !cast668;
            if (u669) {
              __builtin_unreachable();
            }
          struct std___Vector_base_int__std__allocator_int__* base670 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t637 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base671 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base670->_M_impl) + 0);
          int* t672 = base671->_M_finish;
          unsigned long t673 = __n636;
          struct std___Vector_base_int__std__allocator_int__* base674 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t637 + 0);
          struct std__allocator_int_* r675 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base674);
          int* r676 = int__std____uninitialized_default_n_a_int___unsigned_long__int_(t672, t673, r675);
          struct std___Vector_base_int__std__allocator_int__* base677 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t637 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base678 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base677->_M_impl) + 0);
          base678->_M_finish = r676;
        } else {
          int* __old_start679;
          int* __old_finish680;
          unsigned long __len681;
          int* __new_start682;
          struct std___Vector_base_int__std__allocator_int__* base683 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t637 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base684 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base683->_M_impl) + 0);
          int* t685 = base684->_M_start;
          __old_start679 = t685;
          struct std___Vector_base_int__std__allocator_int__* base686 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t637 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base687 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base686->_M_impl) + 0);
          int* t688 = base687->_M_finish;
          __old_finish680 = t688;
          unsigned long t689 = __n636;
          char* cast690 = (char*)&(_str_4);
          unsigned long r691 = std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(t637, t689, cast690);
          __len681 = r691;
          struct std___Vector_base_int__std__allocator_int__* base692 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t637 + 0);
          unsigned long t693 = __len681;
          int* r694 = std___Vector_base_int__std__allocator_int______M_allocate(base692, t693);
          __new_start682 = r694;
            struct std__vector_int__std__allocator_int_____Guard_alloc __guard695;
            int* t696 = __new_start682;
            unsigned long t697 = __len681;
            struct std___Vector_base_int__std__allocator_int__* base698 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t637 + 0);
            std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(&__guard695, t696, t697, base698);
              int* t699 = __new_start682;
              unsigned long t700 = __size641;
              int* ptr701 = &(t699)[t700];
              unsigned long t702 = __n636;
              struct std___Vector_base_int__std__allocator_int__* base703 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t637 + 0);
              struct std__allocator_int_* r704 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base703);
              int* r705 = int__std____uninitialized_default_n_a_int___unsigned_long__int_(ptr701, t702, r704);
                int* t706 = __old_start679;
                int* t707 = __old_finish680;
                int* t708 = __new_start682;
                struct std___Vector_base_int__std__allocator_int__* base709 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t637 + 0);
                struct std__allocator_int_* r710 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base709);
                int* r711 = std__vector_int__std__allocator_int______S_relocate(t706, t707, t708, r710);
              int* t712 = __old_start679;
              __guard695._M_storage = t712;
              struct std___Vector_base_int__std__allocator_int__* base713 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t637 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base714 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base713->_M_impl) + 0);
              int* t715 = base714->_M_end_of_storage;
              int* t716 = __old_start679;
              long diff717 = t715 - t716;
              unsigned long cast718 = (unsigned long)diff717;
              __guard695._M_len = cast718;
            {
              std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(&__guard695);
            }
          int* t719 = __new_start682;
          struct std___Vector_base_int__std__allocator_int__* base720 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t637 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base721 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base720->_M_impl) + 0);
          base721->_M_start = t719;
          int* t722 = __new_start682;
          unsigned long t723 = __size641;
          int* ptr724 = &(t722)[t723];
          unsigned long t725 = __n636;
          int* ptr726 = &(ptr724)[t725];
          struct std___Vector_base_int__std__allocator_int__* base727 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t637 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base728 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base727->_M_impl) + 0);
          base728->_M_finish = ptr726;
          int* t729 = __new_start682;
          unsigned long t730 = __len681;
          int* ptr731 = &(t729)[t730];
          struct std___Vector_base_int__std__allocator_int__* base732 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t637 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base733 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base732->_M_impl) + 0);
          base733->_M_end_of_storage = ptr731;
        }
    }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v734, int* v735, struct std__allocator_int_* v736) {
bb737:
  int* __first738;
  int* __last739;
  struct std__allocator_int_* unnamed740;
  __first738 = v734;
  __last739 = v735;
  unnamed740 = v736;
  int* t741 = __first738;
  int* t742 = __last739;
  void_std___Destroy_int__(t741, t742);
  return;
}

// function: _ZNSt6vectorIiSaIiEE15_M_erase_at_endEPi
void std__vector_int__std__allocator_int______M_erase_at_end(struct std__vector_int__std__allocator_int__* v743, int* v744) {
bb745:
  struct std__vector_int__std__allocator_int__* this746;
  int* __pos747;
  this746 = v743;
  __pos747 = v744;
  struct std__vector_int__std__allocator_int__* t748 = this746;
    unsigned long __n749;
    struct std___Vector_base_int__std__allocator_int__* base750 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t748 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base751 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base750->_M_impl) + 0);
    int* t752 = base751->_M_finish;
    int* t753 = __pos747;
    long diff754 = t752 - t753;
    unsigned long cast755 = (unsigned long)diff754;
    __n749 = cast755;
    unsigned long t756 = __n749;
    _Bool cast757 = (_Bool)t756;
    if (cast757) {
      int* t758 = __pos747;
      struct std___Vector_base_int__std__allocator_int__* base759 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t748 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base760 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base759->_M_impl) + 0);
      int* t761 = base760->_M_finish;
      struct std___Vector_base_int__std__allocator_int__* base762 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t748 + 0);
      struct std__allocator_int_* r763 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base762);
      void_std___Destroy_int___int_(t758, t761, r763);
      int* t764 = __pos747;
      struct std___Vector_base_int__std__allocator_int__* base765 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t748 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base766 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base765->_M_impl) + 0);
      base766->_M_finish = t764;
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE6resizeEm
void std__vector_int__std__allocator_int_____resize(struct std__vector_int__std__allocator_int__* v767, unsigned long v768) {
bb769:
  struct std__vector_int__std__allocator_int__* this770;
  unsigned long __new_size771;
  this770 = v767;
  __new_size771 = v768;
  struct std__vector_int__std__allocator_int__* t772 = this770;
    unsigned long t773 = __new_size771;
    unsigned long r774 = std__vector_int__std__allocator_int_____size___const(t772);
    _Bool c775 = ((t773 > r774)) ? 1 : 0;
    if (c775) {
      unsigned long t776 = __new_size771;
      unsigned long r777 = std__vector_int__std__allocator_int_____size___const(t772);
      unsigned long b778 = t776 - r777;
      std__vector_int__std__allocator_int______M_default_append(t772, b778);
    } else {
        unsigned long t779 = __new_size771;
        unsigned long r780 = std__vector_int__std__allocator_int_____size___const(t772);
        _Bool c781 = ((t779 < r780)) ? 1 : 0;
        if (c781) {
          struct std___Vector_base_int__std__allocator_int__* base782 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t772 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base783 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base782->_M_impl) + 0);
          int* t784 = base783->_M_start;
          unsigned long t785 = __new_size771;
          int* ptr786 = &(t784)[t785];
          std__vector_int__std__allocator_int______M_erase_at_end(t772, ptr786);
        }
    }
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEi
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v787, int v788) {
bb789:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this790;
  int unnamed791;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval792;
  int* ref_tmp0793;
  this790 = v787;
  unnamed791 = v788;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t794 = this790;
  int* t795 = t794->_M_current;
  int c796 = 1;
  int* ptr797 = &(t795)[c796];
  t794->_M_current = ptr797;
  ref_tmp0793 = t795;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval792, &ref_tmp0793);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t798 = __retval792;
  return t798;
}

// function: _Z12reverse_copyIiN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEET0_PT_S9_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______reverse_copy_int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(int* v799, int* v800, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v801) {
bb802:
  int* first803;
  int* last804;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ dest805;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval806;
  first803 = v799;
  last804 = v800;
  dest805 = v801;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0807;
    while (1) {
      int* t808 = first803;
      int* t809 = last804;
      _Bool c810 = ((t808 != t809)) ? 1 : 0;
      if (!c810) break;
      int* t811 = last804;
      int c812 = -1;
      int* ptr813 = &(t811)[c812];
      last804 = ptr813;
      int t814 = *ptr813;
      int c815 = 0;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r816 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&dest805, c815);
      ref_tmp0807 = r816;
      int* r817 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0807);
      *r817 = t814;
    }
  __retval806 = dest805; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t818 = __retval806;
  return t818;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v819, int** v820) {
bb821:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this822;
  int** __i823;
  this822 = v819;
  __i823 = v820;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t824 = this822;
  int** t825 = __i823;
  int* t826 = *t825;
  t824->_M_current = t826;
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v827) {
bb828:
  struct std__vector_int__std__allocator_int__* this829;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval830;
  this829 = v827;
  struct std__vector_int__std__allocator_int__* t831 = this829;
  struct std___Vector_base_int__std__allocator_int__* base832 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t831 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base833 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base832->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval830, &base833->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t834 = __retval830;
  return t834;
}

// function: _ZNSt6vectorIiSaIiEEixEm
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* v835, unsigned long v836) {
bb837:
  struct std__vector_int__std__allocator_int__* this838;
  unsigned long __n839;
  int* __retval840;
  this838 = v835;
  __n839 = v836;
  struct std__vector_int__std__allocator_int__* t841 = this838;
    do {
          unsigned long t842 = __n839;
          unsigned long r843 = std__vector_int__std__allocator_int_____size___const(t841);
          _Bool c844 = ((t842 < r843)) ? 1 : 0;
          _Bool u845 = !c844;
          if (u845) {
            char* cast846 = (char*)&(_str_5);
            int c847 = 1263;
            char* cast848 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm);
            char* cast849 = (char*)&(_str_6);
            std____glibcxx_assert_fail(cast846, c847, cast848, cast849);
          }
      _Bool c850 = 0;
      if (!c850) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base851 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t841 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base852 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base851->_M_impl) + 0);
  int* t853 = base852->_M_start;
  unsigned long t854 = __n839;
  int* ptr855 = &(t853)[t854];
  __retval840 = ptr855;
  int* t856 = __retval840;
  return t856;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v857, int v858) {
bb859:
  int __a860;
  int __b861;
  int __retval862;
  __a860 = v857;
  __b861 = v858;
  int t863 = __a860;
  int t864 = __b861;
  int b865 = t863 | t864;
  __retval862 = b865;
  int t866 = __retval862;
  return t866;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v867) {
bb868:
  struct std__basic_ios_char__std__char_traits_char__* this869;
  int __retval870;
  this869 = v867;
  struct std__basic_ios_char__std__char_traits_char__* t871 = this869;
  struct std__ios_base* base872 = (struct std__ios_base*)((char *)t871 + 0);
  int t873 = base872->_M_streambuf_state;
  __retval870 = t873;
  int t874 = __retval870;
  return t874;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v875, int v876) {
bb877:
  struct std__basic_ios_char__std__char_traits_char__* this878;
  int __state879;
  this878 = v875;
  __state879 = v876;
  struct std__basic_ios_char__std__char_traits_char__* t880 = this878;
  int r881 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t880);
  int t882 = __state879;
  int r883 = std__operator_(r881, t882);
  std__basic_ios_char__std__char_traits_char_____clear(t880, r883);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v884, char* v885) {
bb886:
  char* __c1887;
  char* __c2888;
  _Bool __retval889;
  __c1887 = v884;
  __c2888 = v885;
  char* t890 = __c1887;
  char t891 = *t890;
  int cast892 = (int)t891;
  char* t893 = __c2888;
  char t894 = *t893;
  int cast895 = (int)t894;
  _Bool c896 = ((cast892 == cast895)) ? 1 : 0;
  __retval889 = c896;
  _Bool t897 = __retval889;
  return t897;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v898) {
bb899:
  char* __p900;
  unsigned long __retval901;
  unsigned long __i902;
  __p900 = v898;
  unsigned long c903 = 0;
  __i902 = c903;
    char ref_tmp0904;
    while (1) {
      unsigned long t905 = __i902;
      char* t906 = __p900;
      char* ptr907 = &(t906)[t905];
      char c908 = 0;
      ref_tmp0904 = c908;
      _Bool r909 = __gnu_cxx__char_traits_char___eq(ptr907, &ref_tmp0904);
      _Bool u910 = !r909;
      if (!u910) break;
      unsigned long t911 = __i902;
      unsigned long u912 = t911 + 1;
      __i902 = u912;
    }
  unsigned long t913 = __i902;
  __retval901 = t913;
  unsigned long t914 = __retval901;
  return t914;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v915) {
bb916:
  char* __s917;
  unsigned long __retval918;
  __s917 = v915;
    _Bool r919 = std____is_constant_evaluated();
    if (r919) {
      char* t920 = __s917;
      unsigned long r921 = __gnu_cxx__char_traits_char___length(t920);
      __retval918 = r921;
      unsigned long t922 = __retval918;
      return t922;
    }
  char* t923 = __s917;
  unsigned long r924 = strlen(t923);
  __retval918 = r924;
  unsigned long t925 = __retval918;
  return t925;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v926, char* v927) {
bb928:
  struct std__basic_ostream_char__std__char_traits_char__* __out929;
  char* __s930;
  struct std__basic_ostream_char__std__char_traits_char__* __retval931;
  __out929 = v926;
  __s930 = v927;
    char* t932 = __s930;
    _Bool cast933 = (_Bool)t932;
    _Bool u934 = !cast933;
    if (u934) {
      struct std__basic_ostream_char__std__char_traits_char__* t935 = __out929;
      void** v936 = (void**)t935;
      void* v937 = *((void**)v936);
      unsigned char* cast938 = (unsigned char*)v937;
      long c939 = -24;
      unsigned char* ptr940 = &(cast938)[c939];
      long* cast941 = (long*)ptr940;
      long t942 = *cast941;
      unsigned char* cast943 = (unsigned char*)t935;
      unsigned char* ptr944 = &(cast943)[t942];
      struct std__basic_ostream_char__std__char_traits_char__* cast945 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr944;
      struct std__basic_ios_char__std__char_traits_char__* cast946 = (struct std__basic_ios_char__std__char_traits_char__*)cast945;
      int t947 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast946, t947);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t948 = __out929;
      char* t949 = __s930;
      char* t950 = __s930;
      unsigned long r951 = std__char_traits_char___length(t950);
      long cast952 = (long)r951;
      struct std__basic_ostream_char__std__char_traits_char__* r953 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t948, t949, cast952);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t954 = __out929;
  __retval931 = t954;
  struct std__basic_ostream_char__std__char_traits_char__* t955 = __retval931;
  return t955;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSEOS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v956, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v957) {
bb958:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this959;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed960;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval961;
  this959 = v956;
  unnamed960 = v957;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t962 = this959;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t963 = unnamed960;
  int* t964 = t963->_M_current;
  t962->_M_current = t964;
  __retval961 = t962;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t965 = __retval961;
  return t965;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v966) {
bb967:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this968;
  int** __retval969;
  this968 = v966;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t970 = this968;
  __retval969 = &t970->_M_current;
  int** t971 = __retval969;
  return t971;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v972, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v973) {
bb974:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs975;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs976;
  _Bool __retval977;
  __lhs975 = v972;
  __rhs976 = v973;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t978 = __lhs975;
  int** r979 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t978);
  int* t980 = *r979;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t981 = __rhs976;
  int** r982 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t981);
  int* t983 = *r982;
  _Bool c984 = ((t980 == t983)) ? 1 : 0;
  __retval977 = c984;
  _Bool t985 = __retval977;
  return t985;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v986) {
bb987:
  struct std__vector_int__std__allocator_int__* this988;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval989;
  this988 = v986;
  struct std__vector_int__std__allocator_int__* t990 = this988;
  struct std___Vector_base_int__std__allocator_int__* base991 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t990 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base992 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base991->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval989, &base992->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t993 = __retval989;
  return t993;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v994) {
bb995:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this996;
  int* __retval997;
  this996 = v994;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t998 = this996;
  int* t999 = t998->_M_current;
  __retval997 = t999;
  int* t1000 = __retval997;
  return t1000;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1001) {
bb1002:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this1003;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval1004;
  this1003 = v1001;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1005 = this1003;
  int* t1006 = t1005->_M_current;
  int c1007 = 1;
  int* ptr1008 = &(t1006)[c1007];
  t1005->_M_current = ptr1008;
  __retval1004 = t1005;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1009 = __retval1004;
  return t1009;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v1010, void* v1011) {
bb1012:
  struct std__basic_ostream_char__std__char_traits_char__* this1013;
  void* __pf1014;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1015;
  this1013 = v1010;
  __pf1014 = v1011;
  struct std__basic_ostream_char__std__char_traits_char__* t1016 = this1013;
  void* t1017 = __pf1014;
  struct std__basic_ostream_char__std__char_traits_char__* r1018 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t1017)(t1016);
  __retval1015 = r1018;
  struct std__basic_ostream_char__std__char_traits_char__* t1019 = __retval1015;
  return t1019;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1020) {
bb1021:
  struct std__basic_ostream_char__std__char_traits_char__* __os1022;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1023;
  __os1022 = v1020;
  struct std__basic_ostream_char__std__char_traits_char__* t1024 = __os1022;
  struct std__basic_ostream_char__std__char_traits_char__* r1025 = std__ostream__flush(t1024);
  __retval1023 = r1025;
  struct std__basic_ostream_char__std__char_traits_char__* t1026 = __retval1023;
  return t1026;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v1027) {
bb1028:
  struct std__ctype_char_* __f1029;
  struct std__ctype_char_* __retval1030;
  __f1029 = v1027;
    struct std__ctype_char_* t1031 = __f1029;
    _Bool cast1032 = (_Bool)t1031;
    _Bool u1033 = !cast1032;
    if (u1033) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t1034 = __f1029;
  __retval1030 = t1034;
  struct std__ctype_char_* t1035 = __retval1030;
  return t1035;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v1036, char v1037) {
bb1038:
  struct std__ctype_char_* this1039;
  char __c1040;
  char __retval1041;
  this1039 = v1036;
  __c1040 = v1037;
  struct std__ctype_char_* t1042 = this1039;
    char t1043 = t1042->_M_widen_ok;
    _Bool cast1044 = (_Bool)t1043;
    if (cast1044) {
      char t1045 = __c1040;
      unsigned char cast1046 = (unsigned char)t1045;
      unsigned long cast1047 = (unsigned long)cast1046;
      char t1048 = t1042->_M_widen[cast1047];
      __retval1041 = t1048;
      char t1049 = __retval1041;
      return t1049;
    }
  std__ctype_char____M_widen_init___const(t1042);
  char t1050 = __c1040;
  void** v1051 = (void**)t1042;
  void* v1052 = *((void**)v1051);
  char vcall1055 = (char)__VERIFIER_virtual_call_char_char(t1042, 6, t1050);
  __retval1041 = vcall1055;
  char t1056 = __retval1041;
  return t1056;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v1057, char v1058) {
bb1059:
  struct std__basic_ios_char__std__char_traits_char__* this1060;
  char __c1061;
  char __retval1062;
  this1060 = v1057;
  __c1061 = v1058;
  struct std__basic_ios_char__std__char_traits_char__* t1063 = this1060;
  struct std__ctype_char_* t1064 = t1063->_M_ctype;
  struct std__ctype_char_* r1065 = std__ctype_char__const__std____check_facet_std__ctype_char___(t1064);
  char t1066 = __c1061;
  char r1067 = std__ctype_char___widen_char__const(r1065, t1066);
  __retval1062 = r1067;
  char t1068 = __retval1062;
  return t1068;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1069) {
bb1070:
  struct std__basic_ostream_char__std__char_traits_char__* __os1071;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1072;
  __os1071 = v1069;
  struct std__basic_ostream_char__std__char_traits_char__* t1073 = __os1071;
  struct std__basic_ostream_char__std__char_traits_char__* t1074 = __os1071;
  void** v1075 = (void**)t1074;
  void* v1076 = *((void**)v1075);
  unsigned char* cast1077 = (unsigned char*)v1076;
  long c1078 = -24;
  unsigned char* ptr1079 = &(cast1077)[c1078];
  long* cast1080 = (long*)ptr1079;
  long t1081 = *cast1080;
  unsigned char* cast1082 = (unsigned char*)t1074;
  unsigned char* ptr1083 = &(cast1082)[t1081];
  struct std__basic_ostream_char__std__char_traits_char__* cast1084 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1083;
  struct std__basic_ios_char__std__char_traits_char__* cast1085 = (struct std__basic_ios_char__std__char_traits_char__*)cast1084;
  char c1086 = 10;
  char r1087 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast1085, c1086);
  struct std__basic_ostream_char__std__char_traits_char__* r1088 = std__ostream__put(t1073, r1087);
  struct std__basic_ostream_char__std__char_traits_char__* r1089 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r1088);
  __retval1072 = r1089;
  struct std__basic_ostream_char__std__char_traits_char__* t1090 = __retval1072;
  return t1090;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v1091) {
bb1092:
  struct std__vector_int__std__allocator_int__* this1093;
  this1093 = v1091;
  struct std__vector_int__std__allocator_int__* t1094 = this1093;
    struct std___Vector_base_int__std__allocator_int__* base1095 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1094 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1096 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1095->_M_impl) + 0);
    int* t1097 = base1096->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base1098 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1094 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1099 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1098->_M_impl) + 0);
    int* t1100 = base1099->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base1101 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1094 + 0);
    struct std__allocator_int_* r1102 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1101);
    void_std___Destroy_int___int_(t1097, t1100, r1102);
  {
    struct std___Vector_base_int__std__allocator_int__* base1103 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1094 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base1103);
  }
  return;
}

// function: main
int main() {
bb1104:
  int __retval1105;
  int myints1106[9];
  struct std__vector_int__std__allocator_int__ myvector1107;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it1108;
  int i1109;
  int k1110;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01111;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11112;
  int c1113 = 0;
  __retval1105 = c1113;
  // array copy
  __builtin_memcpy(myints1106, __const_main_myints, (unsigned long)9 * sizeof(__const_main_myints[0]));
  std__vector_int__std__allocator_int_____vector(&myvector1107);
    __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&it1108);
    unsigned long c1114 = 9;
    std__vector_int__std__allocator_int_____resize(&myvector1107, c1114);
    int* cast1115 = (int*)&(myints1106);
    int* cast1116 = (int*)&(myints1106);
    int c1117 = 9;
    int* ptr1118 = &(cast1116)[c1117];
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1119 = std__vector_int__std__allocator_int_____begin(&myvector1107);
    agg_tmp01111 = r1119;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1120 = agg_tmp01111;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1121 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______reverse_copy_int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(cast1115, ptr1118, t1120);
    agg_tmp11112 = r1121;
      int c1122 = 0;
      i1109 = c1122;
      int c1123 = 9;
      k1110 = c1123;
      while (1) {
        int t1125 = i1109;
        int c1126 = 9;
        _Bool c1127 = ((t1125 < c1126)) ? 1 : 0;
        if (!c1127) break;
        int t1128 = i1109;
        unsigned long cast1129 = (unsigned long)t1128;
        int* r1130 = std__vector_int__std__allocator_int_____operator__(&myvector1107, cast1129);
        int t1131 = *r1130;
        int t1132 = k1110;
        _Bool c1133 = ((t1131 == t1132)) ? 1 : 0;
        if (c1133) {
        } else {
          char* cast1134 = (char*)&(_str);
          char* c1135 = _str_1;
          unsigned int c1136 = 37;
          char* cast1137 = (char*)&(__PRETTY_FUNCTION___main);
          __assert_fail(cast1134, c1135, c1136, cast1137);
        }
      for_step1124: ;
        int t1138 = i1109;
        int u1139 = t1138 + 1;
        i1109 = u1139;
        int t1140 = k1110;
        int u1141 = t1140 - 1;
        k1110 = u1141;
      }
    char* cast1142 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r1143 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1142);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp01144;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp11145;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1146 = std__vector_int__std__allocator_int_____begin(&myvector1107);
      ref_tmp01144 = r1146;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1147 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it1108, &ref_tmp01144);
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1149 = std__vector_int__std__allocator_int_____end(&myvector1107);
        ref_tmp11145 = r1149;
        _Bool r1150 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it1108, &ref_tmp11145);
        _Bool u1151 = !r1150;
        if (!u1151) break;
        char* cast1152 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* r1153 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1152);
        int* r1154 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it1108);
        int t1155 = *r1154;
        struct std__basic_ostream_char__std__char_traits_char__* r1156 = std__ostream__operator__(r1153, t1155);
      for_step1148: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1157 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(&it1108);
      }
    struct std__basic_ostream_char__std__char_traits_char__* r1158 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c1159 = 0;
    __retval1105 = c1159;
    int t1160 = __retval1105;
    int ret_val1161 = t1160;
    {
      std__vector_int__std__allocator_int______vector(&myvector1107);
    }
    return ret_val1161;
  int t1162 = __retval1105;
  return t1162;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1163) {
bb1164:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1165;
  this1165 = v1163;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1166 = this1165;
  struct std__allocator_int_* base1167 = (struct std__allocator_int_*)((char *)t1166 + 0);
  std__allocator_int___allocator(base1167);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1168 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t1166 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base1168);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1169) {
bb1170:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1171;
  this1171 = v1169;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1172 = this1171;
  {
    struct std__allocator_int_* base1173 = (struct std__allocator_int_*)((char *)t1172 + 0);
    std__allocator_int____allocator(base1173);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2Ev
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1174) {
bb1175:
  struct std___Vector_base_int__std__allocator_int__* this1176;
  this1176 = v1174;
  struct std___Vector_base_int__std__allocator_int__* t1177 = this1176;
  _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(&t1177->_M_impl);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1178:
  _Bool __retval1179;
    _Bool c1180 = 0;
    __retval1179 = c1180;
    _Bool t1181 = __retval1179;
    return t1181;
  abort();
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1182, int* v1183, unsigned long v1184) {
bb1185:
  struct std____new_allocator_int_* this1186;
  int* __p1187;
  unsigned long __n1188;
  this1186 = v1182;
  __p1187 = v1183;
  __n1188 = v1184;
  struct std____new_allocator_int_* t1189 = this1186;
    unsigned long c1190 = 4;
    unsigned long c1191 = 16;
    _Bool c1192 = ((c1190 > c1191)) ? 1 : 0;
    if (c1192) {
      int* t1193 = __p1187;
      void* cast1194 = (void*)t1193;
      unsigned long t1195 = __n1188;
      unsigned long c1196 = 4;
      unsigned long b1197 = t1195 * c1196;
      unsigned long c1198 = 4;
      operator_delete_3(cast1194, b1197, c1198);
      return;
    }
  int* t1199 = __p1187;
  void* cast1200 = (void*)t1199;
  unsigned long t1201 = __n1188;
  unsigned long c1202 = 4;
  unsigned long b1203 = t1201 * c1202;
  operator_delete_2(cast1200, b1203);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1204, int* v1205, unsigned long v1206) {
bb1207:
  struct std__allocator_int_* this1208;
  int* __p1209;
  unsigned long __n1210;
  this1208 = v1204;
  __p1209 = v1205;
  __n1210 = v1206;
  struct std__allocator_int_* t1211 = this1208;
    _Bool r1212 = std____is_constant_evaluated();
    if (r1212) {
      int* t1213 = __p1209;
      void* cast1214 = (void*)t1213;
      operator_delete(cast1214);
      return;
    }
  struct std____new_allocator_int_* base1215 = (struct std____new_allocator_int_*)((char *)t1211 + 0);
  int* t1216 = __p1209;
  unsigned long t1217 = __n1210;
  std____new_allocator_int___deallocate(base1215, t1216, t1217);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1218, int* v1219, unsigned long v1220) {
bb1221:
  struct std__allocator_int_* __a1222;
  int* __p1223;
  unsigned long __n1224;
  __a1222 = v1218;
  __p1223 = v1219;
  __n1224 = v1220;
  struct std__allocator_int_* t1225 = __a1222;
  int* t1226 = __p1223;
  unsigned long t1227 = __n1224;
  std__allocator_int___deallocate(t1225, t1226, t1227);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v1228, int* v1229, unsigned long v1230) {
bb1231:
  struct std___Vector_base_int__std__allocator_int__* this1232;
  int* __p1233;
  unsigned long __n1234;
  this1232 = v1228;
  __p1233 = v1229;
  __n1234 = v1230;
  struct std___Vector_base_int__std__allocator_int__* t1235 = this1232;
    int* t1236 = __p1233;
    _Bool cast1237 = (_Bool)t1236;
    if (cast1237) {
      struct std__allocator_int_* base1238 = (struct std__allocator_int_*)((char *)&(t1235->_M_impl) + 0);
      int* t1239 = __p1233;
      unsigned long t1240 = __n1234;
      std__allocator_traits_std__allocator_int_____deallocate(base1238, t1239, t1240);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1241) {
bb1242:
  struct std___Vector_base_int__std__allocator_int__* this1243;
  this1243 = v1241;
  struct std___Vector_base_int__std__allocator_int__* t1244 = this1243;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1245 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1244->_M_impl) + 0);
    int* t1246 = base1245->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1247 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1244->_M_impl) + 0);
    int* t1248 = base1247->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1249 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1244->_M_impl) + 0);
    int* t1250 = base1249->_M_start;
    long diff1251 = t1248 - t1250;
    unsigned long cast1252 = (unsigned long)diff1251;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1244, t1246, cast1252);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1244->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1253) {
bb1254:
  struct std____new_allocator_int_* this1255;
  this1255 = v1253;
  struct std____new_allocator_int_* t1256 = this1255;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v1257) {
bb1258:
  struct std__allocator_int_* this1259;
  this1259 = v1257;
  struct std__allocator_int_* t1260 = this1259;
  struct std____new_allocator_int_* base1261 = (struct std____new_allocator_int_*)((char *)t1260 + 0);
  std____new_allocator_int_____new_allocator(base1261);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1262) {
bb1263:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1264;
  this1264 = v1262;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1265 = this1264;
  int* c1266 = ((void*)0);
  t1265->_M_start = c1266;
  int* c1267 = ((void*)0);
  t1265->_M_finish = c1267;
  int* c1268 = ((void*)0);
  t1265->_M_end_of_storage = c1268;
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v1269) {
bb1270:
  struct std__allocator_int_* this1271;
  this1271 = v1269;
  struct std__allocator_int_* t1272 = this1271;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1273) {
bb1274:
  int* __location1275;
  __location1275 = v1273;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1276, int* v1277) {
bb1278:
  int* __first1279;
  int* __last1280;
  __first1279 = v1276;
  __last1280 = v1277;
      _Bool r1281 = std____is_constant_evaluated();
      if (r1281) {
          while (1) {
            int* t1283 = __first1279;
            int* t1284 = __last1280;
            _Bool c1285 = ((t1283 != t1284)) ? 1 : 0;
            if (!c1285) break;
            int* t1286 = __first1279;
            void_std__destroy_at_int_(t1286);
          for_step1282: ;
            int* t1287 = __first1279;
            int c1288 = 1;
            int* ptr1289 = &(t1287)[c1288];
            __first1279 = ptr1289;
          }
      }
  return;
}

