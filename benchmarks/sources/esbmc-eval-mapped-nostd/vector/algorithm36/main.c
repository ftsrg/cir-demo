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

int __const_main_myints[7] = {10, 20, 30, 40, 50, 60, 70};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[18] = "myvector[0] == 40";
char _str_1[106] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/algorithm36/main.cpp";
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
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______copy_int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(int* p0, int* p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______rotate_copy_int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(int* p0, int* p1, int* p2, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p3);
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

// function: _Z4copyIiN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEET0_PT_S9_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______copy_int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(int* v799, int* v800, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v801) {
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
      int* t811 = first803;
      int c812 = 1;
      int* ptr813 = &(t811)[c812];
      first803 = ptr813;
      int t814 = *t811;
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

// function: _Z11rotate_copyIiN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEET0_PT_S9_S9_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______rotate_copy_int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(int* v819, int* v820, int* v821, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v822) {
bb823:
  int* first824;
  int* mid825;
  int* last826;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ dest827;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval828;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0829;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0830;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1831;
  first824 = v819;
  mid825 = v820;
  last826 = v821;
  dest827 = v822;
  int* t832 = mid825;
  int* t833 = last826;
  agg_tmp0830 = dest827; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t834 = agg_tmp0830;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r835 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______copy_int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t832, t833, t834);
  ref_tmp0829 = r835;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r836 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&dest827, &ref_tmp0829);
  int* t837 = first824;
  int* t838 = mid825;
  agg_tmp1831 = dest827; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t839 = agg_tmp1831;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r840 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______copy_int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t837, t838, t839);
  __retval828 = r840;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t841 = __retval828;
  return t841;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v842, int** v843) {
bb844:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this845;
  int** __i846;
  this845 = v842;
  __i846 = v843;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t847 = this845;
  int** t848 = __i846;
  int* t849 = *t848;
  t847->_M_current = t849;
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v850) {
bb851:
  struct std__vector_int__std__allocator_int__* this852;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval853;
  this852 = v850;
  struct std__vector_int__std__allocator_int__* t854 = this852;
  struct std___Vector_base_int__std__allocator_int__* base855 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t854 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base856 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base855->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval853, &base856->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t857 = __retval853;
  return t857;
}

// function: _ZNSt6vectorIiSaIiEEixEm
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* v858, unsigned long v859) {
bb860:
  struct std__vector_int__std__allocator_int__* this861;
  unsigned long __n862;
  int* __retval863;
  this861 = v858;
  __n862 = v859;
  struct std__vector_int__std__allocator_int__* t864 = this861;
    do {
          unsigned long t865 = __n862;
          unsigned long r866 = std__vector_int__std__allocator_int_____size___const(t864);
          _Bool c867 = ((t865 < r866)) ? 1 : 0;
          _Bool u868 = !c867;
          if (u868) {
            char* cast869 = (char*)&(_str_5);
            int c870 = 1263;
            char* cast871 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm);
            char* cast872 = (char*)&(_str_6);
            std____glibcxx_assert_fail(cast869, c870, cast871, cast872);
          }
      _Bool c873 = 0;
      if (!c873) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base874 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t864 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base875 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base874->_M_impl) + 0);
  int* t876 = base875->_M_start;
  unsigned long t877 = __n862;
  int* ptr878 = &(t876)[t877];
  __retval863 = ptr878;
  int* t879 = __retval863;
  return t879;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v880, int v881) {
bb882:
  int __a883;
  int __b884;
  int __retval885;
  __a883 = v880;
  __b884 = v881;
  int t886 = __a883;
  int t887 = __b884;
  int b888 = t886 | t887;
  __retval885 = b888;
  int t889 = __retval885;
  return t889;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v890) {
bb891:
  struct std__basic_ios_char__std__char_traits_char__* this892;
  int __retval893;
  this892 = v890;
  struct std__basic_ios_char__std__char_traits_char__* t894 = this892;
  struct std__ios_base* base895 = (struct std__ios_base*)((char *)t894 + 0);
  int t896 = base895->_M_streambuf_state;
  __retval893 = t896;
  int t897 = __retval893;
  return t897;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v898, int v899) {
bb900:
  struct std__basic_ios_char__std__char_traits_char__* this901;
  int __state902;
  this901 = v898;
  __state902 = v899;
  struct std__basic_ios_char__std__char_traits_char__* t903 = this901;
  int r904 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t903);
  int t905 = __state902;
  int r906 = std__operator_(r904, t905);
  std__basic_ios_char__std__char_traits_char_____clear(t903, r906);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v907, char* v908) {
bb909:
  char* __c1910;
  char* __c2911;
  _Bool __retval912;
  __c1910 = v907;
  __c2911 = v908;
  char* t913 = __c1910;
  char t914 = *t913;
  int cast915 = (int)t914;
  char* t916 = __c2911;
  char t917 = *t916;
  int cast918 = (int)t917;
  _Bool c919 = ((cast915 == cast918)) ? 1 : 0;
  __retval912 = c919;
  _Bool t920 = __retval912;
  return t920;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v921) {
bb922:
  char* __p923;
  unsigned long __retval924;
  unsigned long __i925;
  __p923 = v921;
  unsigned long c926 = 0;
  __i925 = c926;
    char ref_tmp0927;
    while (1) {
      unsigned long t928 = __i925;
      char* t929 = __p923;
      char* ptr930 = &(t929)[t928];
      char c931 = 0;
      ref_tmp0927 = c931;
      _Bool r932 = __gnu_cxx__char_traits_char___eq(ptr930, &ref_tmp0927);
      _Bool u933 = !r932;
      if (!u933) break;
      unsigned long t934 = __i925;
      unsigned long u935 = t934 + 1;
      __i925 = u935;
    }
  unsigned long t936 = __i925;
  __retval924 = t936;
  unsigned long t937 = __retval924;
  return t937;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v938) {
bb939:
  char* __s940;
  unsigned long __retval941;
  __s940 = v938;
    _Bool r942 = std____is_constant_evaluated();
    if (r942) {
      char* t943 = __s940;
      unsigned long r944 = __gnu_cxx__char_traits_char___length(t943);
      __retval941 = r944;
      unsigned long t945 = __retval941;
      return t945;
    }
  char* t946 = __s940;
  unsigned long r947 = strlen(t946);
  __retval941 = r947;
  unsigned long t948 = __retval941;
  return t948;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v949, char* v950) {
bb951:
  struct std__basic_ostream_char__std__char_traits_char__* __out952;
  char* __s953;
  struct std__basic_ostream_char__std__char_traits_char__* __retval954;
  __out952 = v949;
  __s953 = v950;
    char* t955 = __s953;
    _Bool cast956 = (_Bool)t955;
    _Bool u957 = !cast956;
    if (u957) {
      struct std__basic_ostream_char__std__char_traits_char__* t958 = __out952;
      void** v959 = (void**)t958;
      void* v960 = *((void**)v959);
      unsigned char* cast961 = (unsigned char*)v960;
      long c962 = -24;
      unsigned char* ptr963 = &(cast961)[c962];
      long* cast964 = (long*)ptr963;
      long t965 = *cast964;
      unsigned char* cast966 = (unsigned char*)t958;
      unsigned char* ptr967 = &(cast966)[t965];
      struct std__basic_ostream_char__std__char_traits_char__* cast968 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr967;
      struct std__basic_ios_char__std__char_traits_char__* cast969 = (struct std__basic_ios_char__std__char_traits_char__*)cast968;
      int t970 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast969, t970);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t971 = __out952;
      char* t972 = __s953;
      char* t973 = __s953;
      unsigned long r974 = std__char_traits_char___length(t973);
      long cast975 = (long)r974;
      struct std__basic_ostream_char__std__char_traits_char__* r976 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t971, t972, cast975);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t977 = __out952;
  __retval954 = t977;
  struct std__basic_ostream_char__std__char_traits_char__* t978 = __retval954;
  return t978;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSEOS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v979, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v980) {
bb981:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this982;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed983;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval984;
  this982 = v979;
  unnamed983 = v980;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t985 = this982;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t986 = unnamed983;
  int* t987 = t986->_M_current;
  t985->_M_current = t987;
  __retval984 = t985;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t988 = __retval984;
  return t988;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v989) {
bb990:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this991;
  int** __retval992;
  this991 = v989;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t993 = this991;
  __retval992 = &t993->_M_current;
  int** t994 = __retval992;
  return t994;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v995, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v996) {
bb997:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs998;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs999;
  _Bool __retval1000;
  __lhs998 = v995;
  __rhs999 = v996;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1001 = __lhs998;
  int** r1002 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t1001);
  int* t1003 = *r1002;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1004 = __rhs999;
  int** r1005 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t1004);
  int* t1006 = *r1005;
  _Bool c1007 = ((t1003 == t1006)) ? 1 : 0;
  __retval1000 = c1007;
  _Bool t1008 = __retval1000;
  return t1008;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v1009) {
bb1010:
  struct std__vector_int__std__allocator_int__* this1011;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1012;
  this1011 = v1009;
  struct std__vector_int__std__allocator_int__* t1013 = this1011;
  struct std___Vector_base_int__std__allocator_int__* base1014 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1013 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1015 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1014->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval1012, &base1015->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1016 = __retval1012;
  return t1016;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1017) {
bb1018:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this1019;
  int* __retval1020;
  this1019 = v1017;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1021 = this1019;
  int* t1022 = t1021->_M_current;
  __retval1020 = t1022;
  int* t1023 = __retval1020;
  return t1023;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1024) {
bb1025:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this1026;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval1027;
  this1026 = v1024;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1028 = this1026;
  int* t1029 = t1028->_M_current;
  int c1030 = 1;
  int* ptr1031 = &(t1029)[c1030];
  t1028->_M_current = ptr1031;
  __retval1027 = t1028;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1032 = __retval1027;
  return t1032;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v1033, void* v1034) {
bb1035:
  struct std__basic_ostream_char__std__char_traits_char__* this1036;
  void* __pf1037;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1038;
  this1036 = v1033;
  __pf1037 = v1034;
  struct std__basic_ostream_char__std__char_traits_char__* t1039 = this1036;
  void* t1040 = __pf1037;
  struct std__basic_ostream_char__std__char_traits_char__* r1041 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t1040)(t1039);
  __retval1038 = r1041;
  struct std__basic_ostream_char__std__char_traits_char__* t1042 = __retval1038;
  return t1042;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1043) {
bb1044:
  struct std__basic_ostream_char__std__char_traits_char__* __os1045;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1046;
  __os1045 = v1043;
  struct std__basic_ostream_char__std__char_traits_char__* t1047 = __os1045;
  struct std__basic_ostream_char__std__char_traits_char__* r1048 = std__ostream__flush(t1047);
  __retval1046 = r1048;
  struct std__basic_ostream_char__std__char_traits_char__* t1049 = __retval1046;
  return t1049;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v1050) {
bb1051:
  struct std__ctype_char_* __f1052;
  struct std__ctype_char_* __retval1053;
  __f1052 = v1050;
    struct std__ctype_char_* t1054 = __f1052;
    _Bool cast1055 = (_Bool)t1054;
    _Bool u1056 = !cast1055;
    if (u1056) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t1057 = __f1052;
  __retval1053 = t1057;
  struct std__ctype_char_* t1058 = __retval1053;
  return t1058;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v1059, char v1060) {
bb1061:
  struct std__ctype_char_* this1062;
  char __c1063;
  char __retval1064;
  this1062 = v1059;
  __c1063 = v1060;
  struct std__ctype_char_* t1065 = this1062;
    char t1066 = t1065->_M_widen_ok;
    _Bool cast1067 = (_Bool)t1066;
    if (cast1067) {
      char t1068 = __c1063;
      unsigned char cast1069 = (unsigned char)t1068;
      unsigned long cast1070 = (unsigned long)cast1069;
      char t1071 = t1065->_M_widen[cast1070];
      __retval1064 = t1071;
      char t1072 = __retval1064;
      return t1072;
    }
  std__ctype_char____M_widen_init___const(t1065);
  char t1073 = __c1063;
  void** v1074 = (void**)t1065;
  void* v1075 = *((void**)v1074);
  char vcall1078 = (char)__VERIFIER_virtual_call_char_char(t1065, 6, t1073);
  __retval1064 = vcall1078;
  char t1079 = __retval1064;
  return t1079;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v1080, char v1081) {
bb1082:
  struct std__basic_ios_char__std__char_traits_char__* this1083;
  char __c1084;
  char __retval1085;
  this1083 = v1080;
  __c1084 = v1081;
  struct std__basic_ios_char__std__char_traits_char__* t1086 = this1083;
  struct std__ctype_char_* t1087 = t1086->_M_ctype;
  struct std__ctype_char_* r1088 = std__ctype_char__const__std____check_facet_std__ctype_char___(t1087);
  char t1089 = __c1084;
  char r1090 = std__ctype_char___widen_char__const(r1088, t1089);
  __retval1085 = r1090;
  char t1091 = __retval1085;
  return t1091;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1092) {
bb1093:
  struct std__basic_ostream_char__std__char_traits_char__* __os1094;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1095;
  __os1094 = v1092;
  struct std__basic_ostream_char__std__char_traits_char__* t1096 = __os1094;
  struct std__basic_ostream_char__std__char_traits_char__* t1097 = __os1094;
  void** v1098 = (void**)t1097;
  void* v1099 = *((void**)v1098);
  unsigned char* cast1100 = (unsigned char*)v1099;
  long c1101 = -24;
  unsigned char* ptr1102 = &(cast1100)[c1101];
  long* cast1103 = (long*)ptr1102;
  long t1104 = *cast1103;
  unsigned char* cast1105 = (unsigned char*)t1097;
  unsigned char* ptr1106 = &(cast1105)[t1104];
  struct std__basic_ostream_char__std__char_traits_char__* cast1107 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1106;
  struct std__basic_ios_char__std__char_traits_char__* cast1108 = (struct std__basic_ios_char__std__char_traits_char__*)cast1107;
  char c1109 = 10;
  char r1110 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast1108, c1109);
  struct std__basic_ostream_char__std__char_traits_char__* r1111 = std__ostream__put(t1096, r1110);
  struct std__basic_ostream_char__std__char_traits_char__* r1112 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r1111);
  __retval1095 = r1112;
  struct std__basic_ostream_char__std__char_traits_char__* t1113 = __retval1095;
  return t1113;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v1114) {
bb1115:
  struct std__vector_int__std__allocator_int__* this1116;
  this1116 = v1114;
  struct std__vector_int__std__allocator_int__* t1117 = this1116;
    struct std___Vector_base_int__std__allocator_int__* base1118 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1117 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1119 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1118->_M_impl) + 0);
    int* t1120 = base1119->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base1121 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1117 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1122 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1121->_M_impl) + 0);
    int* t1123 = base1122->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base1124 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1117 + 0);
    struct std__allocator_int_* r1125 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1124);
    void_std___Destroy_int___int_(t1120, t1123, r1125);
  {
    struct std___Vector_base_int__std__allocator_int__* base1126 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1117 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base1126);
  }
  return;
}

// function: main
int main() {
bb1127:
  int __retval1128;
  int myints1129[7];
  struct std__vector_int__std__allocator_int__ myvector1130;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it1131;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01132;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11133;
  int c1134 = 0;
  __retval1128 = c1134;
  // array copy
  __builtin_memcpy(myints1129, __const_main_myints, (unsigned long)7 * sizeof(__const_main_myints[0]));
  std__vector_int__std__allocator_int_____vector(&myvector1130);
    __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&it1131);
    unsigned long c1135 = 7;
    std__vector_int__std__allocator_int_____resize(&myvector1130, c1135);
    int* cast1136 = (int*)&(myints1129);
    int* cast1137 = (int*)&(myints1129);
    int c1138 = 3;
    int* ptr1139 = &(cast1137)[c1138];
    int* cast1140 = (int*)&(myints1129);
    int c1141 = 7;
    int* ptr1142 = &(cast1140)[c1141];
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1143 = std__vector_int__std__allocator_int_____begin(&myvector1130);
    agg_tmp01132 = r1143;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1144 = agg_tmp01132;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1145 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______rotate_copy_int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(cast1136, ptr1139, ptr1142, t1144);
    agg_tmp11133 = r1145;
    unsigned long c1146 = 0;
    int* r1147 = std__vector_int__std__allocator_int_____operator__(&myvector1130, c1146);
    int t1148 = *r1147;
    int c1149 = 40;
    _Bool c1150 = ((t1148 == c1149)) ? 1 : 0;
    if (c1150) {
    } else {
      char* cast1151 = (char*)&(_str);
      char* c1152 = _str_1;
      unsigned int c1153 = 50;
      char* cast1154 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1151, c1152, c1153, cast1154);
    }
    char* cast1155 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r1156 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1155);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp01157;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp11158;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1159 = std__vector_int__std__allocator_int_____begin(&myvector1130);
      ref_tmp01157 = r1159;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1160 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it1131, &ref_tmp01157);
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1162 = std__vector_int__std__allocator_int_____end(&myvector1130);
        ref_tmp11158 = r1162;
        _Bool r1163 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it1131, &ref_tmp11158);
        _Bool u1164 = !r1163;
        if (!u1164) break;
        char* cast1165 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* r1166 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1165);
        int* r1167 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it1131);
        int t1168 = *r1167;
        struct std__basic_ostream_char__std__char_traits_char__* r1169 = std__ostream__operator__(r1166, t1168);
      for_step1161: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1170 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(&it1131);
      }
    struct std__basic_ostream_char__std__char_traits_char__* r1171 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c1172 = 0;
    __retval1128 = c1172;
    int t1173 = __retval1128;
    int ret_val1174 = t1173;
    {
      std__vector_int__std__allocator_int______vector(&myvector1130);
    }
    return ret_val1174;
  int t1175 = __retval1128;
  return t1175;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1176) {
bb1177:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1178;
  this1178 = v1176;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1179 = this1178;
  struct std__allocator_int_* base1180 = (struct std__allocator_int_*)((char *)t1179 + 0);
  std__allocator_int___allocator(base1180);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1181 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t1179 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base1181);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1182) {
bb1183:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1184;
  this1184 = v1182;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1185 = this1184;
  {
    struct std__allocator_int_* base1186 = (struct std__allocator_int_*)((char *)t1185 + 0);
    std__allocator_int____allocator(base1186);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2Ev
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1187) {
bb1188:
  struct std___Vector_base_int__std__allocator_int__* this1189;
  this1189 = v1187;
  struct std___Vector_base_int__std__allocator_int__* t1190 = this1189;
  _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(&t1190->_M_impl);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1191:
  _Bool __retval1192;
    _Bool c1193 = 0;
    __retval1192 = c1193;
    _Bool t1194 = __retval1192;
    return t1194;
  abort();
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1195, int* v1196, unsigned long v1197) {
bb1198:
  struct std____new_allocator_int_* this1199;
  int* __p1200;
  unsigned long __n1201;
  this1199 = v1195;
  __p1200 = v1196;
  __n1201 = v1197;
  struct std____new_allocator_int_* t1202 = this1199;
    unsigned long c1203 = 4;
    unsigned long c1204 = 16;
    _Bool c1205 = ((c1203 > c1204)) ? 1 : 0;
    if (c1205) {
      int* t1206 = __p1200;
      void* cast1207 = (void*)t1206;
      unsigned long t1208 = __n1201;
      unsigned long c1209 = 4;
      unsigned long b1210 = t1208 * c1209;
      unsigned long c1211 = 4;
      operator_delete_3(cast1207, b1210, c1211);
      return;
    }
  int* t1212 = __p1200;
  void* cast1213 = (void*)t1212;
  unsigned long t1214 = __n1201;
  unsigned long c1215 = 4;
  unsigned long b1216 = t1214 * c1215;
  operator_delete_2(cast1213, b1216);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1217, int* v1218, unsigned long v1219) {
bb1220:
  struct std__allocator_int_* this1221;
  int* __p1222;
  unsigned long __n1223;
  this1221 = v1217;
  __p1222 = v1218;
  __n1223 = v1219;
  struct std__allocator_int_* t1224 = this1221;
    _Bool r1225 = std____is_constant_evaluated();
    if (r1225) {
      int* t1226 = __p1222;
      void* cast1227 = (void*)t1226;
      operator_delete(cast1227);
      return;
    }
  struct std____new_allocator_int_* base1228 = (struct std____new_allocator_int_*)((char *)t1224 + 0);
  int* t1229 = __p1222;
  unsigned long t1230 = __n1223;
  std____new_allocator_int___deallocate(base1228, t1229, t1230);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1231, int* v1232, unsigned long v1233) {
bb1234:
  struct std__allocator_int_* __a1235;
  int* __p1236;
  unsigned long __n1237;
  __a1235 = v1231;
  __p1236 = v1232;
  __n1237 = v1233;
  struct std__allocator_int_* t1238 = __a1235;
  int* t1239 = __p1236;
  unsigned long t1240 = __n1237;
  std__allocator_int___deallocate(t1238, t1239, t1240);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v1241, int* v1242, unsigned long v1243) {
bb1244:
  struct std___Vector_base_int__std__allocator_int__* this1245;
  int* __p1246;
  unsigned long __n1247;
  this1245 = v1241;
  __p1246 = v1242;
  __n1247 = v1243;
  struct std___Vector_base_int__std__allocator_int__* t1248 = this1245;
    int* t1249 = __p1246;
    _Bool cast1250 = (_Bool)t1249;
    if (cast1250) {
      struct std__allocator_int_* base1251 = (struct std__allocator_int_*)((char *)&(t1248->_M_impl) + 0);
      int* t1252 = __p1246;
      unsigned long t1253 = __n1247;
      std__allocator_traits_std__allocator_int_____deallocate(base1251, t1252, t1253);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1254) {
bb1255:
  struct std___Vector_base_int__std__allocator_int__* this1256;
  this1256 = v1254;
  struct std___Vector_base_int__std__allocator_int__* t1257 = this1256;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1258 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1257->_M_impl) + 0);
    int* t1259 = base1258->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1260 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1257->_M_impl) + 0);
    int* t1261 = base1260->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1262 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1257->_M_impl) + 0);
    int* t1263 = base1262->_M_start;
    long diff1264 = t1261 - t1263;
    unsigned long cast1265 = (unsigned long)diff1264;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1257, t1259, cast1265);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1257->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1266) {
bb1267:
  struct std____new_allocator_int_* this1268;
  this1268 = v1266;
  struct std____new_allocator_int_* t1269 = this1268;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v1270) {
bb1271:
  struct std__allocator_int_* this1272;
  this1272 = v1270;
  struct std__allocator_int_* t1273 = this1272;
  struct std____new_allocator_int_* base1274 = (struct std____new_allocator_int_*)((char *)t1273 + 0);
  std____new_allocator_int_____new_allocator(base1274);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1275) {
bb1276:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1277;
  this1277 = v1275;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1278 = this1277;
  int* c1279 = ((void*)0);
  t1278->_M_start = c1279;
  int* c1280 = ((void*)0);
  t1278->_M_finish = c1280;
  int* c1281 = ((void*)0);
  t1278->_M_end_of_storage = c1281;
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v1282) {
bb1283:
  struct std__allocator_int_* this1284;
  this1284 = v1282;
  struct std__allocator_int_* t1285 = this1284;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1286) {
bb1287:
  int* __location1288;
  __location1288 = v1286;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1289, int* v1290) {
bb1291:
  int* __first1292;
  int* __last1293;
  __first1292 = v1289;
  __last1293 = v1290;
      _Bool r1294 = std____is_constant_evaluated();
      if (r1294) {
          while (1) {
            int* t1296 = __first1292;
            int* t1297 = __last1293;
            _Bool c1298 = ((t1296 != t1297)) ? 1 : 0;
            if (!c1298) break;
            int* t1299 = __first1292;
            void_std__destroy_at_int_(t1299);
          for_step1295: ;
            int* t1300 = __first1292;
            int c1301 = 1;
            int* ptr1302 = &(t1300)[c1301];
            __first1292 = ptr1302;
          }
      }
  return;
}

