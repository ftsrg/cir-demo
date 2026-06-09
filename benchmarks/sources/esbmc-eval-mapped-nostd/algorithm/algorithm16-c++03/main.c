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
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[15] = "first[0] == 10";
char _str_1[115] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm16-c++03/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[15] = "first[1] == 33";
char _str_3[15] = "first[2] == 33";
char _str_4[15] = "first[3] == 33";
char _str_5[15] = "first[4] == 10";
char _str_6[16] = "second[0] == 10";
char _str_7[16] = "second[1] == 10";
char _str_8[16] = "second[2] == 10";
char _str_9[16] = "second[3] == 33";
char _str_10[16] = "second[4] == 33";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_11[17] = " first contains:";
char _str_12[2] = " ";
char _str_13[18] = "\nsecond contains:";
char _str_14[49] = "cannot create std::vector larger than max_size()";
char _str_15[98] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_uninitialized.h";
char __PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_[140] = "_ForwardIterator std::__do_uninit_fill_n(_ForwardIterator, _Size _Tp &) [_ForwardIterator = int *, _Size = unsigned long, _Tp = int]";
char _str_16[9] = "__n >= 0";
char _str_17[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_18[19] = "__n < this->size()";
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, int* p2, struct std__allocator_int_* p3);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
void std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(int* p0, int* p1);
void void_std__iter_swap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__swap_ranges___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
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
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* p0);
void std__allocator_int___allocator(struct std__allocator_int_* p0, struct std__allocator_int_* p1);
extern void std____throw_length_error(char* p0);
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long p0, struct std__allocator_int_* p1);
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0, struct std__allocator_int_* p1);
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
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* p0, unsigned long p1);
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0);
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* p0, unsigned long p1, struct std__allocator_int_* p2);
_Bool std__is_constant_evaluated();
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* p0, int** p1);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* p0, int* p1);
void void_std___Construct_int__int_const__(int* p0, int* p1);
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* p0);
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* p0);
int* int__std____do_uninit_fill_n_int___unsigned_long__int_(int* p0, unsigned long p1, int* p2);
int* int__std__uninitialized_fill_n_int___unsigned_long__int_(int* p0, unsigned long p1, int* p2);
int* int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(int* p0, unsigned long p1, int* p2, struct std__allocator_int_* p3);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* p0);
void std__vector_int__std__allocator_int______M_fill_initialize(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, int* p2);
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

// function: _ZNSt6vectorIiSaIiEEC2EmRKiRKS0_
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* v5, unsigned long v6, int* v7, struct std__allocator_int_* v8) {
bb9:
  struct std__vector_int__std__allocator_int__* this10;
  unsigned long __n11;
  int* __value12;
  struct std__allocator_int_* __a13;
  this10 = v5;
  __n11 = v6;
  __value12 = v7;
  __a13 = v8;
  struct std__vector_int__std__allocator_int__* t14 = this10;
  struct std___Vector_base_int__std__allocator_int__* base15 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t14 + 0);
  unsigned long t16 = __n11;
  struct std__allocator_int_* t17 = __a13;
  unsigned long r18 = std__vector_int__std__allocator_int______S_check_init_len(t16, t17);
  struct std__allocator_int_* t19 = __a13;
  std___Vector_base_int__std__allocator_int______Vector_base(base15, r18, t19);
    unsigned long t20 = __n11;
    int* t21 = __value12;
    std__vector_int__std__allocator_int______M_fill_initialize(t14, t20, t21);
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v22) {
bb23:
  struct std__allocator_int_* this24;
  this24 = v22;
  struct std__allocator_int_* t25 = this24;
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2Ev
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v26) {
bb27:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this28;
  this28 = v26;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t29 = this28;
  int* c30 = ((void*)0);
  t29->_M_current = c30;
  return;
}

// function: _ZSt4swapIiENSt9enable_ifIXsr6__and_ISt6__not_ISt15__is_tuple_likeIT_EESt21is_move_constructibleIS3_ESt18is_move_assignableIS3_EEE5valueEvE4typeERS3_SC_
void std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(int* v31, int* v32) {
bb33:
  int* __a34;
  int* __b35;
  int __tmp36;
  __a34 = v31;
  __b35 = v32;
  int* t37 = __a34;
  int t38 = *t37;
  __tmp36 = t38;
  int* t39 = __b35;
  int t40 = *t39;
  int* t41 = __a34;
  *t41 = t40;
  int t42 = __tmp36;
  int* t43 = __b35;
  *t43 = t42;
  return;
}

// function: _ZSt9iter_swapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_EvT_T0_
void void_std__iter_swap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v44, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v45) {
bb46:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __a47;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __b48;
  __a47 = v44;
  __b48 = v45;
  int* r49 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__a47);
  int* r50 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__b48);
  std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(r49, r50);
  return;
}

// function: _ZSt11swap_rangesIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_ET0_T_S8_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__swap_ranges___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v51, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v52, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v53) {
bb54:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first155;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last156;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first257;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval58;
  __first155 = v51;
  __last156 = v52;
  __first257 = v53;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp059;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp160;
    while (1) {
      _Bool r62 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first155, &__last156);
      _Bool u63 = !r62;
      if (!u63) break;
      agg_tmp059 = __first155; // copy
      agg_tmp160 = __first257; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t64 = agg_tmp059;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t65 = agg_tmp160;
      void_std__iter_swap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t64, t65);
    for_step61: ;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r66 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__first155);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r67 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__first257);
    }
  __retval58 = __first257; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t68 = __retval58;
  return t68;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v69, int** v70) {
bb71:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this72;
  int** __i73;
  this72 = v69;
  __i73 = v70;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t74 = this72;
  int** t75 = __i73;
  int* t76 = *t75;
  t74->_M_current = t76;
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v77) {
bb78:
  struct std__vector_int__std__allocator_int__* this79;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval80;
  this79 = v77;
  struct std__vector_int__std__allocator_int__* t81 = this79;
  struct std___Vector_base_int__std__allocator_int__* base82 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t81 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base83 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base82->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval80, &base83->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t84 = __retval80;
  return t84;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEplEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v85, long v86) {
bb87:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this88;
  long __n89;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval90;
  int* ref_tmp091;
  this88 = v85;
  __n89 = v86;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t92 = this88;
  int* t93 = t92->_M_current;
  long t94 = __n89;
  int* ptr95 = &(t93)[t94];
  ref_tmp091 = ptr95;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval90, &ref_tmp091);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t96 = __retval90;
  return t96;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v97) {
bb98:
  struct std__vector_int__std__allocator_int__* this99;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval100;
  this99 = v97;
  struct std__vector_int__std__allocator_int__* t101 = this99;
  struct std___Vector_base_int__std__allocator_int__* base102 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t101 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base103 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base102->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval100, &base103->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t104 = __retval100;
  return t104;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEmiEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v105, long v106) {
bb107:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this108;
  long __n109;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval110;
  int* ref_tmp0111;
  this108 = v105;
  __n109 = v106;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t112 = this108;
  int* t113 = t112->_M_current;
  long t114 = __n109;
  long u115 = -t114;
  int* ptr116 = &(t113)[u115];
  ref_tmp0111 = ptr116;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval110, &ref_tmp0111);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t117 = __retval110;
  return t117;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v118) {
bb119:
  struct std__vector_int__std__allocator_int__* this120;
  unsigned long __retval121;
  long __dif122;
  this120 = v118;
  struct std__vector_int__std__allocator_int__* t123 = this120;
  struct std___Vector_base_int__std__allocator_int__* base124 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t123 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base125 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base124->_M_impl) + 0);
  int* t126 = base125->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base127 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t123 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base128 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base127->_M_impl) + 0);
  int* t129 = base128->_M_start;
  long diff130 = t126 - t129;
  __dif122 = diff130;
    long t131 = __dif122;
    long c132 = 0;
    _Bool c133 = ((t131 < c132)) ? 1 : 0;
    if (c133) {
      __builtin_unreachable();
    }
  long t134 = __dif122;
  unsigned long cast135 = (unsigned long)t134;
  __retval121 = cast135;
  unsigned long t136 = __retval121;
  return t136;
}

// function: _ZNSt6vectorIiSaIiEEixEm
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* v137, unsigned long v138) {
bb139:
  struct std__vector_int__std__allocator_int__* this140;
  unsigned long __n141;
  int* __retval142;
  this140 = v137;
  __n141 = v138;
  struct std__vector_int__std__allocator_int__* t143 = this140;
    do {
          unsigned long t144 = __n141;
          unsigned long r145 = std__vector_int__std__allocator_int_____size___const(t143);
          _Bool c146 = ((t144 < r145)) ? 1 : 0;
          _Bool u147 = !c146;
          if (u147) {
            char* cast148 = (char*)&(_str_17);
            int c149 = 1263;
            char* cast150 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm);
            char* cast151 = (char*)&(_str_18);
            std____glibcxx_assert_fail(cast148, c149, cast150, cast151);
          }
      _Bool c152 = 0;
      if (!c152) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base153 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t143 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base154 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base153->_M_impl) + 0);
  int* t155 = base154->_M_start;
  unsigned long t156 = __n141;
  int* ptr157 = &(t155)[t156];
  __retval142 = ptr157;
  int* t158 = __retval142;
  return t158;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v159, int v160) {
bb161:
  int __a162;
  int __b163;
  int __retval164;
  __a162 = v159;
  __b163 = v160;
  int t165 = __a162;
  int t166 = __b163;
  int b167 = t165 | t166;
  __retval164 = b167;
  int t168 = __retval164;
  return t168;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v169) {
bb170:
  struct std__basic_ios_char__std__char_traits_char__* this171;
  int __retval172;
  this171 = v169;
  struct std__basic_ios_char__std__char_traits_char__* t173 = this171;
  struct std__ios_base* base174 = (struct std__ios_base*)((char *)t173 + 0);
  int t175 = base174->_M_streambuf_state;
  __retval172 = t175;
  int t176 = __retval172;
  return t176;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v177, int v178) {
bb179:
  struct std__basic_ios_char__std__char_traits_char__* this180;
  int __state181;
  this180 = v177;
  __state181 = v178;
  struct std__basic_ios_char__std__char_traits_char__* t182 = this180;
  int r183 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t182);
  int t184 = __state181;
  int r185 = std__operator_(r183, t184);
  std__basic_ios_char__std__char_traits_char_____clear(t182, r185);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v186, char* v187) {
bb188:
  char* __c1189;
  char* __c2190;
  _Bool __retval191;
  __c1189 = v186;
  __c2190 = v187;
  char* t192 = __c1189;
  char t193 = *t192;
  int cast194 = (int)t193;
  char* t195 = __c2190;
  char t196 = *t195;
  int cast197 = (int)t196;
  _Bool c198 = ((cast194 == cast197)) ? 1 : 0;
  __retval191 = c198;
  _Bool t199 = __retval191;
  return t199;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v200) {
bb201:
  char* __p202;
  unsigned long __retval203;
  unsigned long __i204;
  __p202 = v200;
  unsigned long c205 = 0;
  __i204 = c205;
    char ref_tmp0206;
    while (1) {
      unsigned long t207 = __i204;
      char* t208 = __p202;
      char* ptr209 = &(t208)[t207];
      char c210 = 0;
      ref_tmp0206 = c210;
      _Bool r211 = __gnu_cxx__char_traits_char___eq(ptr209, &ref_tmp0206);
      _Bool u212 = !r211;
      if (!u212) break;
      unsigned long t213 = __i204;
      unsigned long u214 = t213 + 1;
      __i204 = u214;
    }
  unsigned long t215 = __i204;
  __retval203 = t215;
  unsigned long t216 = __retval203;
  return t216;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v217) {
bb218:
  char* __s219;
  unsigned long __retval220;
  __s219 = v217;
    _Bool r221 = std____is_constant_evaluated();
    if (r221) {
      char* t222 = __s219;
      unsigned long r223 = __gnu_cxx__char_traits_char___length(t222);
      __retval220 = r223;
      unsigned long t224 = __retval220;
      return t224;
    }
  char* t225 = __s219;
  unsigned long r226 = strlen(t225);
  __retval220 = r226;
  unsigned long t227 = __retval220;
  return t227;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v228, char* v229) {
bb230:
  struct std__basic_ostream_char__std__char_traits_char__* __out231;
  char* __s232;
  struct std__basic_ostream_char__std__char_traits_char__* __retval233;
  __out231 = v228;
  __s232 = v229;
    char* t234 = __s232;
    _Bool cast235 = (_Bool)t234;
    _Bool u236 = !cast235;
    if (u236) {
      struct std__basic_ostream_char__std__char_traits_char__* t237 = __out231;
      void** v238 = (void**)t237;
      void* v239 = *((void**)v238);
      unsigned char* cast240 = (unsigned char*)v239;
      long c241 = -24;
      unsigned char* ptr242 = &(cast240)[c241];
      long* cast243 = (long*)ptr242;
      long t244 = *cast243;
      unsigned char* cast245 = (unsigned char*)t237;
      unsigned char* ptr246 = &(cast245)[t244];
      struct std__basic_ostream_char__std__char_traits_char__* cast247 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr246;
      struct std__basic_ios_char__std__char_traits_char__* cast248 = (struct std__basic_ios_char__std__char_traits_char__*)cast247;
      int t249 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast248, t249);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t250 = __out231;
      char* t251 = __s232;
      char* t252 = __s232;
      unsigned long r253 = std__char_traits_char___length(t252);
      long cast254 = (long)r253;
      struct std__basic_ostream_char__std__char_traits_char__* r255 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t250, t251, cast254);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t256 = __out231;
  __retval233 = t256;
  struct std__basic_ostream_char__std__char_traits_char__* t257 = __retval233;
  return t257;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSEOS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v258, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v259) {
bb260:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this261;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed262;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval263;
  this261 = v258;
  unnamed262 = v259;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t264 = this261;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t265 = unnamed262;
  int* t266 = t265->_M_current;
  t264->_M_current = t266;
  __retval263 = t264;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t267 = __retval263;
  return t267;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v268) {
bb269:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this270;
  int** __retval271;
  this270 = v268;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t272 = this270;
  __retval271 = &t272->_M_current;
  int** t273 = __retval271;
  return t273;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v274, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v275) {
bb276:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs277;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs278;
  _Bool __retval279;
  __lhs277 = v274;
  __rhs278 = v275;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t280 = __lhs277;
  int** r281 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t280);
  int* t282 = *r281;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t283 = __rhs278;
  int** r284 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t283);
  int* t285 = *r284;
  _Bool c286 = ((t282 == t285)) ? 1 : 0;
  __retval279 = c286;
  _Bool t287 = __retval279;
  return t287;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v288) {
bb289:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this290;
  int* __retval291;
  this290 = v288;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t292 = this290;
  int* t293 = t292->_M_current;
  __retval291 = t293;
  int* t294 = __retval291;
  return t294;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v295) {
bb296:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this297;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval298;
  this297 = v295;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t299 = this297;
  int* t300 = t299->_M_current;
  int c301 = 1;
  int* ptr302 = &(t300)[c301];
  t299->_M_current = ptr302;
  __retval298 = t299;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t303 = __retval298;
  return t303;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v304, void* v305) {
bb306:
  struct std__basic_ostream_char__std__char_traits_char__* this307;
  void* __pf308;
  struct std__basic_ostream_char__std__char_traits_char__* __retval309;
  this307 = v304;
  __pf308 = v305;
  struct std__basic_ostream_char__std__char_traits_char__* t310 = this307;
  void* t311 = __pf308;
  struct std__basic_ostream_char__std__char_traits_char__* r312 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t311)(t310);
  __retval309 = r312;
  struct std__basic_ostream_char__std__char_traits_char__* t313 = __retval309;
  return t313;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v314) {
bb315:
  struct std__basic_ostream_char__std__char_traits_char__* __os316;
  struct std__basic_ostream_char__std__char_traits_char__* __retval317;
  __os316 = v314;
  struct std__basic_ostream_char__std__char_traits_char__* t318 = __os316;
  struct std__basic_ostream_char__std__char_traits_char__* r319 = std__ostream__flush(t318);
  __retval317 = r319;
  struct std__basic_ostream_char__std__char_traits_char__* t320 = __retval317;
  return t320;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v321) {
bb322:
  struct std__ctype_char_* __f323;
  struct std__ctype_char_* __retval324;
  __f323 = v321;
    struct std__ctype_char_* t325 = __f323;
    _Bool cast326 = (_Bool)t325;
    _Bool u327 = !cast326;
    if (u327) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t328 = __f323;
  __retval324 = t328;
  struct std__ctype_char_* t329 = __retval324;
  return t329;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v330, char v331) {
bb332:
  struct std__ctype_char_* this333;
  char __c334;
  char __retval335;
  this333 = v330;
  __c334 = v331;
  struct std__ctype_char_* t336 = this333;
    char t337 = t336->_M_widen_ok;
    _Bool cast338 = (_Bool)t337;
    if (cast338) {
      char t339 = __c334;
      unsigned char cast340 = (unsigned char)t339;
      unsigned long cast341 = (unsigned long)cast340;
      char t342 = t336->_M_widen[cast341];
      __retval335 = t342;
      char t343 = __retval335;
      return t343;
    }
  std__ctype_char____M_widen_init___const(t336);
  char t344 = __c334;
  void** v345 = (void**)t336;
  void* v346 = *((void**)v345);
  char vcall349 = (char)__VERIFIER_virtual_call_char_char(t336, 6, t344);
  __retval335 = vcall349;
  char t350 = __retval335;
  return t350;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v351, char v352) {
bb353:
  struct std__basic_ios_char__std__char_traits_char__* this354;
  char __c355;
  char __retval356;
  this354 = v351;
  __c355 = v352;
  struct std__basic_ios_char__std__char_traits_char__* t357 = this354;
  struct std__ctype_char_* t358 = t357->_M_ctype;
  struct std__ctype_char_* r359 = std__ctype_char__const__std____check_facet_std__ctype_char___(t358);
  char t360 = __c355;
  char r361 = std__ctype_char___widen_char__const(r359, t360);
  __retval356 = r361;
  char t362 = __retval356;
  return t362;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v363) {
bb364:
  struct std__basic_ostream_char__std__char_traits_char__* __os365;
  struct std__basic_ostream_char__std__char_traits_char__* __retval366;
  __os365 = v363;
  struct std__basic_ostream_char__std__char_traits_char__* t367 = __os365;
  struct std__basic_ostream_char__std__char_traits_char__* t368 = __os365;
  void** v369 = (void**)t368;
  void* v370 = *((void**)v369);
  unsigned char* cast371 = (unsigned char*)v370;
  long c372 = -24;
  unsigned char* ptr373 = &(cast371)[c372];
  long* cast374 = (long*)ptr373;
  long t375 = *cast374;
  unsigned char* cast376 = (unsigned char*)t368;
  unsigned char* ptr377 = &(cast376)[t375];
  struct std__basic_ostream_char__std__char_traits_char__* cast378 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr377;
  struct std__basic_ios_char__std__char_traits_char__* cast379 = (struct std__basic_ios_char__std__char_traits_char__*)cast378;
  char c380 = 10;
  char r381 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast379, c380);
  struct std__basic_ostream_char__std__char_traits_char__* r382 = std__ostream__put(t367, r381);
  struct std__basic_ostream_char__std__char_traits_char__* r383 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r382);
  __retval366 = r383;
  struct std__basic_ostream_char__std__char_traits_char__* t384 = __retval366;
  return t384;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v385) {
bb386:
  struct std__vector_int__std__allocator_int__* this387;
  this387 = v385;
  struct std__vector_int__std__allocator_int__* t388 = this387;
    struct std___Vector_base_int__std__allocator_int__* base389 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t388 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base390 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base389->_M_impl) + 0);
    int* t391 = base390->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base392 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t388 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base393 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base392->_M_impl) + 0);
    int* t394 = base393->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base395 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t388 + 0);
    struct std__allocator_int_* r396 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base395);
    void_std___Destroy_int___int_(t391, t394, r396);
  {
    struct std___Vector_base_int__std__allocator_int__* base397 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t388 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base397);
  }
  return;
}

// function: main
int main() {
bb398:
  int __retval399;
  struct std__vector_int__std__allocator_int__ first400;
  int ref_tmp0401;
  struct std__allocator_int_ ref_tmp1402;
  struct std__vector_int__std__allocator_int__ second403;
  int ref_tmp2404;
  struct std__allocator_int_ ref_tmp3405;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it406;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0407;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp4408;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1409;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp5410;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2411;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3412;
  int c413 = 0;
  __retval399 = c413;
  unsigned long c414 = 5;
  int c415 = 10;
  ref_tmp0401 = c415;
  std__allocator_int___allocator_2(&ref_tmp1402);
    std__vector_int__std__allocator_int_____vector(&first400, c414, &ref_tmp0401, &ref_tmp1402);
  {
    std__allocator_int____allocator(&ref_tmp1402);
  }
    unsigned long c416 = 5;
    int c417 = 33;
    ref_tmp2404 = c417;
    std__allocator_int___allocator_2(&ref_tmp3405);
      std__vector_int__std__allocator_int_____vector(&second403, c416, &ref_tmp2404, &ref_tmp3405);
    {
      std__allocator_int____allocator(&ref_tmp3405);
    }
      __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&it406);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r418 = std__vector_int__std__allocator_int_____begin(&first400);
      ref_tmp4408 = r418;
      long c419 = 1;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r420 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&ref_tmp4408, c419);
      agg_tmp0407 = r420;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r421 = std__vector_int__std__allocator_int_____end(&first400);
      ref_tmp5410 = r421;
      long c422 = 1;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r423 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&ref_tmp5410, c422);
      agg_tmp1409 = r423;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r424 = std__vector_int__std__allocator_int_____begin(&second403);
      agg_tmp2411 = r424;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t425 = agg_tmp0407;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t426 = agg_tmp1409;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t427 = agg_tmp2411;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r428 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__swap_ranges___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t425, t426, t427);
      agg_tmp3412 = r428;
      unsigned long c429 = 0;
      int* r430 = std__vector_int__std__allocator_int_____operator__(&first400, c429);
      int t431 = *r430;
      int c432 = 10;
      _Bool c433 = ((t431 == c432)) ? 1 : 0;
      if (c433) {
      } else {
        char* cast434 = (char*)&(_str);
        char* c435 = _str_1;
        unsigned int c436 = 24;
        char* cast437 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast434, c435, c436, cast437);
      }
      unsigned long c438 = 1;
      int* r439 = std__vector_int__std__allocator_int_____operator__(&first400, c438);
      int t440 = *r439;
      int c441 = 33;
      _Bool c442 = ((t440 == c441)) ? 1 : 0;
      if (c442) {
      } else {
        char* cast443 = (char*)&(_str_2);
        char* c444 = _str_1;
        unsigned int c445 = 25;
        char* cast446 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast443, c444, c445, cast446);
      }
      unsigned long c447 = 2;
      int* r448 = std__vector_int__std__allocator_int_____operator__(&first400, c447);
      int t449 = *r448;
      int c450 = 33;
      _Bool c451 = ((t449 == c450)) ? 1 : 0;
      if (c451) {
      } else {
        char* cast452 = (char*)&(_str_3);
        char* c453 = _str_1;
        unsigned int c454 = 26;
        char* cast455 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast452, c453, c454, cast455);
      }
      unsigned long c456 = 3;
      int* r457 = std__vector_int__std__allocator_int_____operator__(&first400, c456);
      int t458 = *r457;
      int c459 = 33;
      _Bool c460 = ((t458 == c459)) ? 1 : 0;
      if (c460) {
      } else {
        char* cast461 = (char*)&(_str_4);
        char* c462 = _str_1;
        unsigned int c463 = 27;
        char* cast464 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast461, c462, c463, cast464);
      }
      unsigned long c465 = 4;
      int* r466 = std__vector_int__std__allocator_int_____operator__(&first400, c465);
      int t467 = *r466;
      int c468 = 10;
      _Bool c469 = ((t467 == c468)) ? 1 : 0;
      if (c469) {
      } else {
        char* cast470 = (char*)&(_str_5);
        char* c471 = _str_1;
        unsigned int c472 = 28;
        char* cast473 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast470, c471, c472, cast473);
      }
      unsigned long c474 = 0;
      int* r475 = std__vector_int__std__allocator_int_____operator__(&second403, c474);
      int t476 = *r475;
      int c477 = 10;
      _Bool c478 = ((t476 == c477)) ? 1 : 0;
      if (c478) {
      } else {
        char* cast479 = (char*)&(_str_6);
        char* c480 = _str_1;
        unsigned int c481 = 30;
        char* cast482 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast479, c480, c481, cast482);
      }
      unsigned long c483 = 1;
      int* r484 = std__vector_int__std__allocator_int_____operator__(&second403, c483);
      int t485 = *r484;
      int c486 = 10;
      _Bool c487 = ((t485 == c486)) ? 1 : 0;
      if (c487) {
      } else {
        char* cast488 = (char*)&(_str_7);
        char* c489 = _str_1;
        unsigned int c490 = 31;
        char* cast491 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast488, c489, c490, cast491);
      }
      unsigned long c492 = 2;
      int* r493 = std__vector_int__std__allocator_int_____operator__(&second403, c492);
      int t494 = *r493;
      int c495 = 10;
      _Bool c496 = ((t494 == c495)) ? 1 : 0;
      if (c496) {
      } else {
        char* cast497 = (char*)&(_str_8);
        char* c498 = _str_1;
        unsigned int c499 = 32;
        char* cast500 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast497, c498, c499, cast500);
      }
      unsigned long c501 = 3;
      int* r502 = std__vector_int__std__allocator_int_____operator__(&second403, c501);
      int t503 = *r502;
      int c504 = 33;
      _Bool c505 = ((t503 == c504)) ? 1 : 0;
      if (c505) {
      } else {
        char* cast506 = (char*)&(_str_9);
        char* c507 = _str_1;
        unsigned int c508 = 33;
        char* cast509 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast506, c507, c508, cast509);
      }
      unsigned long c510 = 4;
      int* r511 = std__vector_int__std__allocator_int_____operator__(&second403, c510);
      int t512 = *r511;
      int c513 = 33;
      _Bool c514 = ((t512 == c513)) ? 1 : 0;
      if (c514) {
      } else {
        char* cast515 = (char*)&(_str_10);
        char* c516 = _str_1;
        unsigned int c517 = 34;
        char* cast518 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast515, c516, c517, cast518);
      }
      char* cast519 = (char*)&(_str_11);
      struct std__basic_ostream_char__std__char_traits_char__* r520 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast519);
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp6521;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp7522;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r523 = std__vector_int__std__allocator_int_____begin(&first400);
        ref_tmp6521 = r523;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r524 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it406, &ref_tmp6521);
        while (1) {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r526 = std__vector_int__std__allocator_int_____end(&first400);
          ref_tmp7522 = r526;
          _Bool r527 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it406, &ref_tmp7522);
          _Bool u528 = !r527;
          if (!u528) break;
          char* cast529 = (char*)&(_str_12);
          struct std__basic_ostream_char__std__char_traits_char__* r530 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast529);
          int* r531 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it406);
          int t532 = *r531;
          struct std__basic_ostream_char__std__char_traits_char__* r533 = std__ostream__operator__(r530, t532);
        for_step525: ;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r534 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&it406);
        }
      char* cast535 = (char*)&(_str_13);
      struct std__basic_ostream_char__std__char_traits_char__* r536 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast535);
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp8537;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp9538;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r539 = std__vector_int__std__allocator_int_____begin(&second403);
        ref_tmp8537 = r539;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r540 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it406, &ref_tmp8537);
        while (1) {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r542 = std__vector_int__std__allocator_int_____end(&second403);
          ref_tmp9538 = r542;
          _Bool r543 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it406, &ref_tmp9538);
          _Bool u544 = !r543;
          if (!u544) break;
          char* cast545 = (char*)&(_str_12);
          struct std__basic_ostream_char__std__char_traits_char__* r546 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast545);
          int* r547 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it406);
          int t548 = *r547;
          struct std__basic_ostream_char__std__char_traits_char__* r549 = std__ostream__operator__(r546, t548);
        for_step541: ;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r550 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&it406);
        }
      struct std__basic_ostream_char__std__char_traits_char__* r551 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      int c552 = 0;
      __retval399 = c552;
      int t553 = __retval399;
      int ret_val554 = t553;
      {
        std__vector_int__std__allocator_int______vector(&second403);
      }
      {
        std__vector_int__std__allocator_int______vector(&first400);
      }
      return ret_val554;
  int t555 = __retval399;
  return t555;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v556) {
bb557:
  struct std____new_allocator_int_* this558;
  this558 = v556;
  struct std____new_allocator_int_* t559 = this558;
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v560, unsigned long* v561) {
bb562:
  unsigned long* __a563;
  unsigned long* __b564;
  unsigned long* __retval565;
  __a563 = v560;
  __b564 = v561;
    unsigned long* t566 = __b564;
    unsigned long t567 = *t566;
    unsigned long* t568 = __a563;
    unsigned long t569 = *t568;
    _Bool c570 = ((t567 < t569)) ? 1 : 0;
    if (c570) {
      unsigned long* t571 = __b564;
      __retval565 = t571;
      unsigned long* t572 = __retval565;
      return t572;
    }
  unsigned long* t573 = __a563;
  __retval565 = t573;
  unsigned long* t574 = __retval565;
  return t574;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v575) {
bb576:
  struct std__allocator_int_* __a577;
  unsigned long __retval578;
  unsigned long __diffmax579;
  unsigned long __allocmax580;
  __a577 = v575;
  unsigned long c581 = 2305843009213693951;
  __diffmax579 = c581;
  unsigned long c582 = 4611686018427387903;
  __allocmax580 = c582;
  unsigned long* r583 = unsigned_long_const__std__min_unsigned_long_(&__diffmax579, &__allocmax580);
  unsigned long t584 = *r583;
  __retval578 = t584;
  unsigned long t585 = __retval578;
  return t585;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v586, struct std__allocator_int_* v587) {
bb588:
  struct std__allocator_int_* this589;
  struct std__allocator_int_* __a590;
  this589 = v586;
  __a590 = v587;
  struct std__allocator_int_* t591 = this589;
  struct std____new_allocator_int_* base592 = (struct std____new_allocator_int_*)((char *)t591 + 0);
  struct std__allocator_int_* t593 = __a590;
  struct std____new_allocator_int_* base594 = (struct std____new_allocator_int_*)((char *)t593 + 0);
  std____new_allocator_int_____new_allocator(base592, base594);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v595, struct std__allocator_int_* v596) {
bb597:
  unsigned long __n598;
  struct std__allocator_int_* __a599;
  unsigned long __retval600;
  __n598 = v595;
  __a599 = v596;
    struct std__allocator_int_ ref_tmp0601;
    _Bool tmp_exprcleanup602;
    unsigned long t603 = __n598;
    struct std__allocator_int_* t604 = __a599;
    std__allocator_int___allocator(&ref_tmp0601, t604);
      unsigned long r605 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp0601);
      _Bool c606 = ((t603 > r605)) ? 1 : 0;
      tmp_exprcleanup602 = c606;
    {
      std__allocator_int____allocator(&ref_tmp0601);
    }
    _Bool t607 = tmp_exprcleanup602;
    if (t607) {
      char* cast608 = (char*)&(_str_14);
      std____throw_length_error(cast608);
    }
  unsigned long t609 = __n598;
  __retval600 = t609;
  unsigned long t610 = __retval600;
  return t610;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v611, struct std__allocator_int_* v612) {
bb613:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this614;
  struct std__allocator_int_* __a615;
  this614 = v611;
  __a615 = v612;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t616 = this614;
  struct std__allocator_int_* base617 = (struct std__allocator_int_*)((char *)t616 + 0);
  struct std__allocator_int_* t618 = __a615;
  std__allocator_int___allocator(base617, t618);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base619 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t616 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base619);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb620:
  _Bool __retval621;
    _Bool c622 = 0;
    __retval621 = c622;
    _Bool t623 = __retval621;
    return t623;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v624) {
bb625:
  struct std____new_allocator_int_* this626;
  unsigned long __retval627;
  this626 = v624;
  struct std____new_allocator_int_* t628 = this626;
  unsigned long c629 = 9223372036854775807;
  unsigned long c630 = 4;
  unsigned long b631 = c629 / c630;
  __retval627 = b631;
  unsigned long t632 = __retval627;
  return t632;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v633, unsigned long v634, void* v635) {
bb636:
  struct std____new_allocator_int_* this637;
  unsigned long __n638;
  void* unnamed639;
  int* __retval640;
  this637 = v633;
  __n638 = v634;
  unnamed639 = v635;
  struct std____new_allocator_int_* t641 = this637;
    unsigned long t642 = __n638;
    unsigned long r643 = std____new_allocator_int____M_max_size___const(t641);
    _Bool c644 = ((t642 > r643)) ? 1 : 0;
    if (c644) {
        unsigned long t645 = __n638;
        unsigned long c646 = -1;
        unsigned long c647 = 4;
        unsigned long b648 = c646 / c647;
        _Bool c649 = ((t645 > b648)) ? 1 : 0;
        if (c649) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c650 = 4;
    unsigned long c651 = 16;
    _Bool c652 = ((c650 > c651)) ? 1 : 0;
    if (c652) {
      unsigned long __al653;
      unsigned long c654 = 4;
      __al653 = c654;
      unsigned long t655 = __n638;
      unsigned long c656 = 4;
      unsigned long b657 = t655 * c656;
      unsigned long t658 = __al653;
      void* r659 = operator_new_2(b657, t658);
      int* cast660 = (int*)r659;
      __retval640 = cast660;
      int* t661 = __retval640;
      return t661;
    }
  unsigned long t662 = __n638;
  unsigned long c663 = 4;
  unsigned long b664 = t662 * c663;
  void* r665 = operator_new(b664);
  int* cast666 = (int*)r665;
  __retval640 = cast666;
  int* t667 = __retval640;
  return t667;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v668, unsigned long v669) {
bb670:
  struct std__allocator_int_* this671;
  unsigned long __n672;
  int* __retval673;
  this671 = v668;
  __n672 = v669;
  struct std__allocator_int_* t674 = this671;
    _Bool r675 = std____is_constant_evaluated();
    if (r675) {
        unsigned long t676 = __n672;
        unsigned long c677 = 4;
        unsigned long ovr678;
        _Bool ovf679 = __builtin_mul_overflow(t676, c677, &ovr678);
        __n672 = ovr678;
        if (ovf679) {
          std____throw_bad_array_new_length();
        }
      unsigned long t680 = __n672;
      void* r681 = operator_new(t680);
      int* cast682 = (int*)r681;
      __retval673 = cast682;
      int* t683 = __retval673;
      return t683;
    }
  struct std____new_allocator_int_* base684 = (struct std____new_allocator_int_*)((char *)t674 + 0);
  unsigned long t685 = __n672;
  void* c686 = ((void*)0);
  int* r687 = std____new_allocator_int___allocate(base684, t685, c686);
  __retval673 = r687;
  int* t688 = __retval673;
  return t688;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v689, unsigned long v690) {
bb691:
  struct std__allocator_int_* __a692;
  unsigned long __n693;
  int* __retval694;
  __a692 = v689;
  __n693 = v690;
  struct std__allocator_int_* t695 = __a692;
  unsigned long t696 = __n693;
  int* r697 = std__allocator_int___allocate(t695, t696);
  __retval694 = r697;
  int* t698 = __retval694;
  return t698;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v699, unsigned long v700) {
bb701:
  struct std___Vector_base_int__std__allocator_int__* this702;
  unsigned long __n703;
  int* __retval704;
  this702 = v699;
  __n703 = v700;
  struct std___Vector_base_int__std__allocator_int__* t705 = this702;
  unsigned long t706 = __n703;
  unsigned long c707 = 0;
  _Bool c708 = ((t706 != c707)) ? 1 : 0;
  int* ternary709;
  if (c708) {
    struct std__allocator_int_* base710 = (struct std__allocator_int_*)((char *)&(t705->_M_impl) + 0);
    unsigned long t711 = __n703;
    int* r712 = std__allocator_traits_std__allocator_int_____allocate(base710, t711);
    ternary709 = (int*)r712;
  } else {
    int* c713 = ((void*)0);
    ternary709 = (int*)c713;
  }
  __retval704 = ternary709;
  int* t714 = __retval704;
  return t714;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* v715, unsigned long v716) {
bb717:
  struct std___Vector_base_int__std__allocator_int__* this718;
  unsigned long __n719;
  this718 = v715;
  __n719 = v716;
  struct std___Vector_base_int__std__allocator_int__* t720 = this718;
  unsigned long t721 = __n719;
  int* r722 = std___Vector_base_int__std__allocator_int______M_allocate(t720, t721);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base723 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t720->_M_impl) + 0);
  base723->_M_start = r722;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base724 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t720->_M_impl) + 0);
  int* t725 = base724->_M_start;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base726 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t720->_M_impl) + 0);
  base726->_M_finish = t725;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base727 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t720->_M_impl) + 0);
  int* t728 = base727->_M_start;
  unsigned long t729 = __n719;
  int* ptr730 = &(t728)[t729];
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base731 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t720->_M_impl) + 0);
  base731->_M_end_of_storage = ptr730;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v732) {
bb733:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this734;
  this734 = v732;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t735 = this734;
  {
    struct std__allocator_int_* base736 = (struct std__allocator_int_*)((char *)t735 + 0);
    std__allocator_int____allocator(base736);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v737, unsigned long v738, struct std__allocator_int_* v739) {
bb740:
  struct std___Vector_base_int__std__allocator_int__* this741;
  unsigned long __n742;
  struct std__allocator_int_* __a743;
  this741 = v737;
  __n742 = v738;
  __a743 = v739;
  struct std___Vector_base_int__std__allocator_int__* t744 = this741;
  struct std__allocator_int_* t745 = __a743;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t744->_M_impl, t745);
    unsigned long t746 = __n742;
    std___Vector_base_int__std__allocator_int______M_create_storage(t744, t746);
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb747:
  _Bool __retval748;
    _Bool c749 = 0;
    __retval748 = c749;
    _Bool t750 = __retval748;
    return t750;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v751, int** v752) {
bb753:
  struct std___UninitDestroyGuard_int____void_* this754;
  int** __first755;
  this754 = v751;
  __first755 = v752;
  struct std___UninitDestroyGuard_int____void_* t756 = this754;
  int** t757 = __first755;
  int* t758 = *t757;
  t756->_M_first = t758;
  int** t759 = __first755;
  t756->_M_cur = t759;
  return;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v760, int* v761) {
bb762:
  int* __location763;
  int* __args764;
  int* __retval765;
  void* __loc766;
  __location763 = v760;
  __args764 = v761;
  int* t767 = __location763;
  void* cast768 = (void*)t767;
  __loc766 = cast768;
    void* t769 = __loc766;
    int* cast770 = (int*)t769;
    int* t771 = __args764;
    int t772 = *t771;
    *cast770 = t772;
    __retval765 = cast770;
    int* t773 = __retval765;
    return t773;
  abort();
}

// function: _ZSt10_ConstructIiJRKiEEvPT_DpOT0_
void void_std___Construct_int__int_const__(int* v774, int* v775) {
bb776:
  int* __p777;
  int* __args778;
  __p777 = v774;
  __args778 = v775;
    _Bool r779 = std____is_constant_evaluated();
    if (r779) {
      int* t780 = __p777;
      int* t781 = __args778;
      int* r782 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t780, t781);
      return;
    }
  int* t783 = __p777;
  void* cast784 = (void*)t783;
  int* cast785 = (int*)cast784;
  int* t786 = __args778;
  int t787 = *t786;
  *cast785 = t787;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v788) {
bb789:
  struct std___UninitDestroyGuard_int____void_* this790;
  this790 = v788;
  struct std___UninitDestroyGuard_int____void_* t791 = this790;
  int** c792 = ((void*)0);
  t791->_M_cur = c792;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v793) {
bb794:
  struct std___UninitDestroyGuard_int____void_* this795;
  this795 = v793;
  struct std___UninitDestroyGuard_int____void_* t796 = this795;
    int** t797 = t796->_M_cur;
    int** c798 = ((void*)0);
    _Bool c799 = ((t797 != c798)) ? 1 : 0;
    if (c799) {
      int* t800 = t796->_M_first;
      int** t801 = t796->_M_cur;
      int* t802 = *t801;
      void_std___Destroy_int__(t800, t802);
    }
  return;
}

// function: _ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_
int* int__std____do_uninit_fill_n_int___unsigned_long__int_(int* v803, unsigned long v804, int* v805) {
bb806:
  int* __first807;
  unsigned long __n808;
  int* __x809;
  int* __retval810;
  struct std___UninitDestroyGuard_int____void_ __guard811;
  __first807 = v803;
  __n808 = v804;
  __x809 = v805;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard811, &__first807);
        do {
              unsigned long t812 = __n808;
              unsigned long c813 = 0;
              _Bool c814 = ((t812 >= c813)) ? 1 : 0;
              _Bool u815 = !c814;
              if (u815) {
                char* cast816 = (char*)&(_str_15);
                int c817 = 463;
                char* cast818 = (char*)&(__PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_);
                char* cast819 = (char*)&(_str_16);
                std____glibcxx_assert_fail(cast816, c817, cast818, cast819);
              }
          _Bool c820 = 0;
          if (!c820) break;
        } while (1);
      while (1) {
        unsigned long t822 = __n808;
        unsigned long u823 = t822 - 1;
        __n808 = u823;
        _Bool cast824 = (_Bool)t822;
        if (!cast824) break;
        int* t825 = __first807;
        int* t826 = __x809;
        void_std___Construct_int__int_const__(t825, t826);
      for_step821: ;
        int* t827 = __first807;
        int c828 = 1;
        int* ptr829 = &(t827)[c828];
        __first807 = ptr829;
      }
    std___UninitDestroyGuard_int___void___release(&__guard811);
    int* t830 = __first807;
    __retval810 = t830;
    int* t831 = __retval810;
    int* ret_val832 = t831;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard811);
    }
    return ret_val832;
  abort();
}

// function: _ZSt20uninitialized_fill_nIPimiET_S1_T0_RKT1_
int* int__std__uninitialized_fill_n_int___unsigned_long__int_(int* v833, unsigned long v834, int* v835) {
bb836:
  int* __first837;
  unsigned long __n838;
  int* __x839;
  int* __retval840;
  __first837 = v833;
  __n838 = v834;
  __x839 = v835;
  int* t841 = __first837;
  unsigned long t842 = __n838;
  int* t843 = __x839;
  int* r844 = int__std____do_uninit_fill_n_int___unsigned_long__int_(t841, t842, t843);
  __retval840 = r844;
  int* t845 = __retval840;
  return t845;
}

// function: _ZSt24__uninitialized_fill_n_aIPimiiET_S1_T0_RKT1_RSaIT2_E
int* int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(int* v846, unsigned long v847, int* v848, struct std__allocator_int_* v849) {
bb850:
  int* __first851;
  unsigned long __n852;
  int* __x853;
  struct std__allocator_int_* unnamed854;
  int* __retval855;
  __first851 = v846;
  __n852 = v847;
  __x853 = v848;
  unnamed854 = v849;
    _Bool r856 = std__is_constant_evaluated();
    if (r856) {
      int* t857 = __first851;
      unsigned long t858 = __n852;
      int* t859 = __x853;
      int* r860 = int__std____do_uninit_fill_n_int___unsigned_long__int_(t857, t858, t859);
      __retval855 = r860;
      int* t861 = __retval855;
      return t861;
    }
  int* t862 = __first851;
  unsigned long t863 = __n852;
  int* t864 = __x853;
  int* r865 = int__std__uninitialized_fill_n_int___unsigned_long__int_(t862, t863, t864);
  __retval855 = r865;
  int* t866 = __retval855;
  return t866;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v867) {
bb868:
  struct std___Vector_base_int__std__allocator_int__* this869;
  struct std__allocator_int_* __retval870;
  this869 = v867;
  struct std___Vector_base_int__std__allocator_int__* t871 = this869;
  struct std__allocator_int_* base872 = (struct std__allocator_int_*)((char *)&(t871->_M_impl) + 0);
  __retval870 = base872;
  struct std__allocator_int_* t873 = __retval870;
  return t873;
}

// function: _ZNSt6vectorIiSaIiEE18_M_fill_initializeEmRKi
void std__vector_int__std__allocator_int______M_fill_initialize(struct std__vector_int__std__allocator_int__* v874, unsigned long v875, int* v876) {
bb877:
  struct std__vector_int__std__allocator_int__* this878;
  unsigned long __n879;
  int* __value880;
  this878 = v874;
  __n879 = v875;
  __value880 = v876;
  struct std__vector_int__std__allocator_int__* t881 = this878;
  struct std___Vector_base_int__std__allocator_int__* base882 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t881 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base883 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base882->_M_impl) + 0);
  int* t884 = base883->_M_start;
  unsigned long t885 = __n879;
  int* t886 = __value880;
  struct std___Vector_base_int__std__allocator_int__* base887 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t881 + 0);
  struct std__allocator_int_* r888 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base887);
  int* r889 = int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(t884, t885, t886, r888);
  struct std___Vector_base_int__std__allocator_int__* base890 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t881 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base891 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base890->_M_impl) + 0);
  base891->_M_finish = r889;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v892, int* v893, unsigned long v894) {
bb895:
  struct std____new_allocator_int_* this896;
  int* __p897;
  unsigned long __n898;
  this896 = v892;
  __p897 = v893;
  __n898 = v894;
  struct std____new_allocator_int_* t899 = this896;
    unsigned long c900 = 4;
    unsigned long c901 = 16;
    _Bool c902 = ((c900 > c901)) ? 1 : 0;
    if (c902) {
      int* t903 = __p897;
      void* cast904 = (void*)t903;
      unsigned long t905 = __n898;
      unsigned long c906 = 4;
      unsigned long b907 = t905 * c906;
      unsigned long c908 = 4;
      operator_delete_3(cast904, b907, c908);
      return;
    }
  int* t909 = __p897;
  void* cast910 = (void*)t909;
  unsigned long t911 = __n898;
  unsigned long c912 = 4;
  unsigned long b913 = t911 * c912;
  operator_delete_2(cast910, b913);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v914, int* v915, unsigned long v916) {
bb917:
  struct std__allocator_int_* this918;
  int* __p919;
  unsigned long __n920;
  this918 = v914;
  __p919 = v915;
  __n920 = v916;
  struct std__allocator_int_* t921 = this918;
    _Bool r922 = std____is_constant_evaluated();
    if (r922) {
      int* t923 = __p919;
      void* cast924 = (void*)t923;
      operator_delete(cast924);
      return;
    }
  struct std____new_allocator_int_* base925 = (struct std____new_allocator_int_*)((char *)t921 + 0);
  int* t926 = __p919;
  unsigned long t927 = __n920;
  std____new_allocator_int___deallocate(base925, t926, t927);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v928, int* v929, unsigned long v930) {
bb931:
  struct std__allocator_int_* __a932;
  int* __p933;
  unsigned long __n934;
  __a932 = v928;
  __p933 = v929;
  __n934 = v930;
  struct std__allocator_int_* t935 = __a932;
  int* t936 = __p933;
  unsigned long t937 = __n934;
  std__allocator_int___deallocate(t935, t936, t937);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v938, int* v939, unsigned long v940) {
bb941:
  struct std___Vector_base_int__std__allocator_int__* this942;
  int* __p943;
  unsigned long __n944;
  this942 = v938;
  __p943 = v939;
  __n944 = v940;
  struct std___Vector_base_int__std__allocator_int__* t945 = this942;
    int* t946 = __p943;
    _Bool cast947 = (_Bool)t946;
    if (cast947) {
      struct std__allocator_int_* base948 = (struct std__allocator_int_*)((char *)&(t945->_M_impl) + 0);
      int* t949 = __p943;
      unsigned long t950 = __n944;
      std__allocator_traits_std__allocator_int_____deallocate(base948, t949, t950);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v951) {
bb952:
  struct std___Vector_base_int__std__allocator_int__* this953;
  this953 = v951;
  struct std___Vector_base_int__std__allocator_int__* t954 = this953;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base955 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t954->_M_impl) + 0);
    int* t956 = base955->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base957 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t954->_M_impl) + 0);
    int* t958 = base957->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base959 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t954->_M_impl) + 0);
    int* t960 = base959->_M_start;
    long diff961 = t958 - t960;
    unsigned long cast962 = (unsigned long)diff961;
    std___Vector_base_int__std__allocator_int______M_deallocate(t954, t956, cast962);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t954->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v963, struct std____new_allocator_int_* v964) {
bb965:
  struct std____new_allocator_int_* this966;
  struct std____new_allocator_int_* unnamed967;
  this966 = v963;
  unnamed967 = v964;
  struct std____new_allocator_int_* t968 = this966;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v969) {
bb970:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this971;
  this971 = v969;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t972 = this971;
  int* c973 = ((void*)0);
  t972->_M_start = c973;
  int* c974 = ((void*)0);
  t972->_M_finish = c974;
  int* c975 = ((void*)0);
  t972->_M_end_of_storage = c975;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v976) {
bb977:
  int* __location978;
  __location978 = v976;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v979, int* v980) {
bb981:
  int* __first982;
  int* __last983;
  __first982 = v979;
  __last983 = v980;
      _Bool r984 = std____is_constant_evaluated();
      if (r984) {
          while (1) {
            int* t986 = __first982;
            int* t987 = __last983;
            _Bool c988 = ((t986 != t987)) ? 1 : 0;
            if (!c988) break;
            int* t989 = __first982;
            void_std__destroy_at_int_(t989);
          for_step985: ;
            int* t990 = __first982;
            int c991 = 1;
            int* ptr992 = &(t990)[c991];
            __first982 = ptr992;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v993, int* v994, struct std__allocator_int_* v995) {
bb996:
  int* __first997;
  int* __last998;
  struct std__allocator_int_* unnamed999;
  __first997 = v993;
  __last998 = v994;
  unnamed999 = v995;
  int* t1000 = __first997;
  int* t1001 = __last998;
  void_std___Destroy_int__(t1000, t1001);
  return;
}

