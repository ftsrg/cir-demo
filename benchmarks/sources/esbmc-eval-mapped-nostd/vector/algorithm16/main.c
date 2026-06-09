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
char _str[15] = "first[2] == 33";
char _str_1[106] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/algorithm16/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[16] = "second[2] == 10";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[17] = " first contains:";
char _str_4[2] = " ";
char _str_5[18] = "\nsecond contains:";
char _str_6[49] = "cannot create std::vector larger than max_size()";
char _str_7[98] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_uninitialized.h";
char __PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_[140] = "_ForwardIterator std::__do_uninit_fill_n(_ForwardIterator, _Size _Tp &) [_ForwardIterator = int *, _Size = unsigned long, _Tp = int]";
char _str_8[9] = "__n >= 0";
char _str_9[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_10[19] = "__n < this->size()";
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, int* p2, struct std__allocator_int_* p3);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
void void_swap_esbmc_int_(int* p0, int* p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______swap_ranges_esbmc___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
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

// function: _Z10swap_esbmcIiEvRT_S1_
void void_swap_esbmc_int_(int* v31, int* v32) {
bb33:
  int* a34;
  int* b35;
  int c36;
  a34 = v31;
  b35 = v32;
  int* t37 = a34;
  int t38 = *t37;
  c36 = t38;
  int* t39 = b35;
  int t40 = *t39;
  int* t41 = a34;
  *t41 = t40;
  int t42 = c36;
  int* t43 = b35;
  *t43 = t42;
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEi
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v44, int v45) {
bb46:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this47;
  int unnamed48;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval49;
  int* ref_tmp050;
  this47 = v44;
  unnamed48 = v45;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t51 = this47;
  int* t52 = t51->_M_current;
  int c53 = 1;
  int* ptr54 = &(t52)[c53];
  t51->_M_current = ptr54;
  ref_tmp050 = t52;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval49, &ref_tmp050);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t55 = __retval49;
  return t55;
}

// function: _Z17swap_ranges_esbmcIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_ET0_T_S8_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______swap_ranges_esbmc___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v56, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v57, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v58) {
bb59:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ first160;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ last161;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ last262;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval63;
  first160 = v56;
  last161 = v57;
  last262 = v58;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp064;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp165;
    while (1) {
      _Bool r66 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&first160, &last161);
      _Bool u67 = !r66;
      if (!u67) break;
      int c68 = 0;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r69 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&first160, c68);
      ref_tmp064 = r69;
      int* r70 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp064);
      int c71 = 0;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r72 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&last262, c71);
      ref_tmp165 = r72;
      int* r73 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp165);
      void_swap_esbmc_int_(r70, r73);
    }
  __retval63 = last262; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t74 = __retval63;
  return t74;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v75, int** v76) {
bb77:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this78;
  int** __i79;
  this78 = v75;
  __i79 = v76;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t80 = this78;
  int** t81 = __i79;
  int* t82 = *t81;
  t80->_M_current = t82;
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v83) {
bb84:
  struct std__vector_int__std__allocator_int__* this85;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval86;
  this85 = v83;
  struct std__vector_int__std__allocator_int__* t87 = this85;
  struct std___Vector_base_int__std__allocator_int__* base88 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t87 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base89 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base88->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval86, &base89->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t90 = __retval86;
  return t90;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEplEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v91, long v92) {
bb93:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this94;
  long __n95;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval96;
  int* ref_tmp097;
  this94 = v91;
  __n95 = v92;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t98 = this94;
  int* t99 = t98->_M_current;
  long t100 = __n95;
  int* ptr101 = &(t99)[t100];
  ref_tmp097 = ptr101;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval96, &ref_tmp097);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t102 = __retval96;
  return t102;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v103) {
bb104:
  struct std__vector_int__std__allocator_int__* this105;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval106;
  this105 = v103;
  struct std__vector_int__std__allocator_int__* t107 = this105;
  struct std___Vector_base_int__std__allocator_int__* base108 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t107 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base109 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base108->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval106, &base109->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t110 = __retval106;
  return t110;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEmiEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v111, long v112) {
bb113:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this114;
  long __n115;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval116;
  int* ref_tmp0117;
  this114 = v111;
  __n115 = v112;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t118 = this114;
  int* t119 = t118->_M_current;
  long t120 = __n115;
  long u121 = -t120;
  int* ptr122 = &(t119)[u121];
  ref_tmp0117 = ptr122;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval116, &ref_tmp0117);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t123 = __retval116;
  return t123;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v124) {
bb125:
  struct std__vector_int__std__allocator_int__* this126;
  unsigned long __retval127;
  long __dif128;
  this126 = v124;
  struct std__vector_int__std__allocator_int__* t129 = this126;
  struct std___Vector_base_int__std__allocator_int__* base130 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t129 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base131 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base130->_M_impl) + 0);
  int* t132 = base131->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base133 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t129 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base134 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base133->_M_impl) + 0);
  int* t135 = base134->_M_start;
  long diff136 = t132 - t135;
  __dif128 = diff136;
    long t137 = __dif128;
    long c138 = 0;
    _Bool c139 = ((t137 < c138)) ? 1 : 0;
    if (c139) {
      __builtin_unreachable();
    }
  long t140 = __dif128;
  unsigned long cast141 = (unsigned long)t140;
  __retval127 = cast141;
  unsigned long t142 = __retval127;
  return t142;
}

// function: _ZNSt6vectorIiSaIiEEixEm
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* v143, unsigned long v144) {
bb145:
  struct std__vector_int__std__allocator_int__* this146;
  unsigned long __n147;
  int* __retval148;
  this146 = v143;
  __n147 = v144;
  struct std__vector_int__std__allocator_int__* t149 = this146;
    do {
          unsigned long t150 = __n147;
          unsigned long r151 = std__vector_int__std__allocator_int_____size___const(t149);
          _Bool c152 = ((t150 < r151)) ? 1 : 0;
          _Bool u153 = !c152;
          if (u153) {
            char* cast154 = (char*)&(_str_9);
            int c155 = 1263;
            char* cast156 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm);
            char* cast157 = (char*)&(_str_10);
            std____glibcxx_assert_fail(cast154, c155, cast156, cast157);
          }
      _Bool c158 = 0;
      if (!c158) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base159 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t149 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base160 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base159->_M_impl) + 0);
  int* t161 = base160->_M_start;
  unsigned long t162 = __n147;
  int* ptr163 = &(t161)[t162];
  __retval148 = ptr163;
  int* t164 = __retval148;
  return t164;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v165, int v166) {
bb167:
  int __a168;
  int __b169;
  int __retval170;
  __a168 = v165;
  __b169 = v166;
  int t171 = __a168;
  int t172 = __b169;
  int b173 = t171 | t172;
  __retval170 = b173;
  int t174 = __retval170;
  return t174;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v175) {
bb176:
  struct std__basic_ios_char__std__char_traits_char__* this177;
  int __retval178;
  this177 = v175;
  struct std__basic_ios_char__std__char_traits_char__* t179 = this177;
  struct std__ios_base* base180 = (struct std__ios_base*)((char *)t179 + 0);
  int t181 = base180->_M_streambuf_state;
  __retval178 = t181;
  int t182 = __retval178;
  return t182;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v183, int v184) {
bb185:
  struct std__basic_ios_char__std__char_traits_char__* this186;
  int __state187;
  this186 = v183;
  __state187 = v184;
  struct std__basic_ios_char__std__char_traits_char__* t188 = this186;
  int r189 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t188);
  int t190 = __state187;
  int r191 = std__operator_(r189, t190);
  std__basic_ios_char__std__char_traits_char_____clear(t188, r191);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v192, char* v193) {
bb194:
  char* __c1195;
  char* __c2196;
  _Bool __retval197;
  __c1195 = v192;
  __c2196 = v193;
  char* t198 = __c1195;
  char t199 = *t198;
  int cast200 = (int)t199;
  char* t201 = __c2196;
  char t202 = *t201;
  int cast203 = (int)t202;
  _Bool c204 = ((cast200 == cast203)) ? 1 : 0;
  __retval197 = c204;
  _Bool t205 = __retval197;
  return t205;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v206) {
bb207:
  char* __p208;
  unsigned long __retval209;
  unsigned long __i210;
  __p208 = v206;
  unsigned long c211 = 0;
  __i210 = c211;
    char ref_tmp0212;
    while (1) {
      unsigned long t213 = __i210;
      char* t214 = __p208;
      char* ptr215 = &(t214)[t213];
      char c216 = 0;
      ref_tmp0212 = c216;
      _Bool r217 = __gnu_cxx__char_traits_char___eq(ptr215, &ref_tmp0212);
      _Bool u218 = !r217;
      if (!u218) break;
      unsigned long t219 = __i210;
      unsigned long u220 = t219 + 1;
      __i210 = u220;
    }
  unsigned long t221 = __i210;
  __retval209 = t221;
  unsigned long t222 = __retval209;
  return t222;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v223) {
bb224:
  char* __s225;
  unsigned long __retval226;
  __s225 = v223;
    _Bool r227 = std____is_constant_evaluated();
    if (r227) {
      char* t228 = __s225;
      unsigned long r229 = __gnu_cxx__char_traits_char___length(t228);
      __retval226 = r229;
      unsigned long t230 = __retval226;
      return t230;
    }
  char* t231 = __s225;
  unsigned long r232 = strlen(t231);
  __retval226 = r232;
  unsigned long t233 = __retval226;
  return t233;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v234, char* v235) {
bb236:
  struct std__basic_ostream_char__std__char_traits_char__* __out237;
  char* __s238;
  struct std__basic_ostream_char__std__char_traits_char__* __retval239;
  __out237 = v234;
  __s238 = v235;
    char* t240 = __s238;
    _Bool cast241 = (_Bool)t240;
    _Bool u242 = !cast241;
    if (u242) {
      struct std__basic_ostream_char__std__char_traits_char__* t243 = __out237;
      void** v244 = (void**)t243;
      void* v245 = *((void**)v244);
      unsigned char* cast246 = (unsigned char*)v245;
      long c247 = -24;
      unsigned char* ptr248 = &(cast246)[c247];
      long* cast249 = (long*)ptr248;
      long t250 = *cast249;
      unsigned char* cast251 = (unsigned char*)t243;
      unsigned char* ptr252 = &(cast251)[t250];
      struct std__basic_ostream_char__std__char_traits_char__* cast253 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr252;
      struct std__basic_ios_char__std__char_traits_char__* cast254 = (struct std__basic_ios_char__std__char_traits_char__*)cast253;
      int t255 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast254, t255);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t256 = __out237;
      char* t257 = __s238;
      char* t258 = __s238;
      unsigned long r259 = std__char_traits_char___length(t258);
      long cast260 = (long)r259;
      struct std__basic_ostream_char__std__char_traits_char__* r261 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t256, t257, cast260);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t262 = __out237;
  __retval239 = t262;
  struct std__basic_ostream_char__std__char_traits_char__* t263 = __retval239;
  return t263;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSEOS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v264, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v265) {
bb266:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this267;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed268;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval269;
  this267 = v264;
  unnamed268 = v265;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t270 = this267;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t271 = unnamed268;
  int* t272 = t271->_M_current;
  t270->_M_current = t272;
  __retval269 = t270;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t273 = __retval269;
  return t273;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v274) {
bb275:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this276;
  int** __retval277;
  this276 = v274;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t278 = this276;
  __retval277 = &t278->_M_current;
  int** t279 = __retval277;
  return t279;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v280, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v281) {
bb282:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs283;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs284;
  _Bool __retval285;
  __lhs283 = v280;
  __rhs284 = v281;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t286 = __lhs283;
  int** r287 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t286);
  int* t288 = *r287;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t289 = __rhs284;
  int** r290 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t289);
  int* t291 = *r290;
  _Bool c292 = ((t288 == t291)) ? 1 : 0;
  __retval285 = c292;
  _Bool t293 = __retval285;
  return t293;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v294) {
bb295:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this296;
  int* __retval297;
  this296 = v294;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t298 = this296;
  int* t299 = t298->_M_current;
  __retval297 = t299;
  int* t300 = __retval297;
  return t300;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v301) {
bb302:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this303;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval304;
  this303 = v301;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t305 = this303;
  int* t306 = t305->_M_current;
  int c307 = 1;
  int* ptr308 = &(t306)[c307];
  t305->_M_current = ptr308;
  __retval304 = t305;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t309 = __retval304;
  return t309;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v310, void* v311) {
bb312:
  struct std__basic_ostream_char__std__char_traits_char__* this313;
  void* __pf314;
  struct std__basic_ostream_char__std__char_traits_char__* __retval315;
  this313 = v310;
  __pf314 = v311;
  struct std__basic_ostream_char__std__char_traits_char__* t316 = this313;
  void* t317 = __pf314;
  struct std__basic_ostream_char__std__char_traits_char__* r318 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t317)(t316);
  __retval315 = r318;
  struct std__basic_ostream_char__std__char_traits_char__* t319 = __retval315;
  return t319;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v320) {
bb321:
  struct std__basic_ostream_char__std__char_traits_char__* __os322;
  struct std__basic_ostream_char__std__char_traits_char__* __retval323;
  __os322 = v320;
  struct std__basic_ostream_char__std__char_traits_char__* t324 = __os322;
  struct std__basic_ostream_char__std__char_traits_char__* r325 = std__ostream__flush(t324);
  __retval323 = r325;
  struct std__basic_ostream_char__std__char_traits_char__* t326 = __retval323;
  return t326;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v327) {
bb328:
  struct std__ctype_char_* __f329;
  struct std__ctype_char_* __retval330;
  __f329 = v327;
    struct std__ctype_char_* t331 = __f329;
    _Bool cast332 = (_Bool)t331;
    _Bool u333 = !cast332;
    if (u333) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t334 = __f329;
  __retval330 = t334;
  struct std__ctype_char_* t335 = __retval330;
  return t335;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v336, char v337) {
bb338:
  struct std__ctype_char_* this339;
  char __c340;
  char __retval341;
  this339 = v336;
  __c340 = v337;
  struct std__ctype_char_* t342 = this339;
    char t343 = t342->_M_widen_ok;
    _Bool cast344 = (_Bool)t343;
    if (cast344) {
      char t345 = __c340;
      unsigned char cast346 = (unsigned char)t345;
      unsigned long cast347 = (unsigned long)cast346;
      char t348 = t342->_M_widen[cast347];
      __retval341 = t348;
      char t349 = __retval341;
      return t349;
    }
  std__ctype_char____M_widen_init___const(t342);
  char t350 = __c340;
  void** v351 = (void**)t342;
  void* v352 = *((void**)v351);
  char vcall355 = (char)__VERIFIER_virtual_call_char_char(t342, 6, t350);
  __retval341 = vcall355;
  char t356 = __retval341;
  return t356;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v357, char v358) {
bb359:
  struct std__basic_ios_char__std__char_traits_char__* this360;
  char __c361;
  char __retval362;
  this360 = v357;
  __c361 = v358;
  struct std__basic_ios_char__std__char_traits_char__* t363 = this360;
  struct std__ctype_char_* t364 = t363->_M_ctype;
  struct std__ctype_char_* r365 = std__ctype_char__const__std____check_facet_std__ctype_char___(t364);
  char t366 = __c361;
  char r367 = std__ctype_char___widen_char__const(r365, t366);
  __retval362 = r367;
  char t368 = __retval362;
  return t368;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v369) {
bb370:
  struct std__basic_ostream_char__std__char_traits_char__* __os371;
  struct std__basic_ostream_char__std__char_traits_char__* __retval372;
  __os371 = v369;
  struct std__basic_ostream_char__std__char_traits_char__* t373 = __os371;
  struct std__basic_ostream_char__std__char_traits_char__* t374 = __os371;
  void** v375 = (void**)t374;
  void* v376 = *((void**)v375);
  unsigned char* cast377 = (unsigned char*)v376;
  long c378 = -24;
  unsigned char* ptr379 = &(cast377)[c378];
  long* cast380 = (long*)ptr379;
  long t381 = *cast380;
  unsigned char* cast382 = (unsigned char*)t374;
  unsigned char* ptr383 = &(cast382)[t381];
  struct std__basic_ostream_char__std__char_traits_char__* cast384 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr383;
  struct std__basic_ios_char__std__char_traits_char__* cast385 = (struct std__basic_ios_char__std__char_traits_char__*)cast384;
  char c386 = 10;
  char r387 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast385, c386);
  struct std__basic_ostream_char__std__char_traits_char__* r388 = std__ostream__put(t373, r387);
  struct std__basic_ostream_char__std__char_traits_char__* r389 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r388);
  __retval372 = r389;
  struct std__basic_ostream_char__std__char_traits_char__* t390 = __retval372;
  return t390;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v391) {
bb392:
  struct std__vector_int__std__allocator_int__* this393;
  this393 = v391;
  struct std__vector_int__std__allocator_int__* t394 = this393;
    struct std___Vector_base_int__std__allocator_int__* base395 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t394 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base396 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base395->_M_impl) + 0);
    int* t397 = base396->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base398 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t394 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base399 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base398->_M_impl) + 0);
    int* t400 = base399->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base401 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t394 + 0);
    struct std__allocator_int_* r402 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base401);
    void_std___Destroy_int___int_(t397, t400, r402);
  {
    struct std___Vector_base_int__std__allocator_int__* base403 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t394 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base403);
  }
  return;
}

// function: main
int main() {
bb404:
  int __retval405;
  struct std__vector_int__std__allocator_int__ first406;
  int ref_tmp0407;
  struct std__allocator_int_ ref_tmp1408;
  struct std__vector_int__std__allocator_int__ second409;
  int ref_tmp2410;
  struct std__allocator_int_ ref_tmp3411;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it412;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0413;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp4414;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1415;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp5416;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2417;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3418;
  int c419 = 0;
  __retval405 = c419;
  unsigned long c420 = 5;
  int c421 = 10;
  ref_tmp0407 = c421;
  std__allocator_int___allocator_2(&ref_tmp1408);
    std__vector_int__std__allocator_int_____vector(&first406, c420, &ref_tmp0407, &ref_tmp1408);
  {
    std__allocator_int____allocator(&ref_tmp1408);
  }
    unsigned long c422 = 5;
    int c423 = 33;
    ref_tmp2410 = c423;
    std__allocator_int___allocator_2(&ref_tmp3411);
      std__vector_int__std__allocator_int_____vector(&second409, c422, &ref_tmp2410, &ref_tmp3411);
    {
      std__allocator_int____allocator(&ref_tmp3411);
    }
      __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&it412);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r424 = std__vector_int__std__allocator_int_____begin(&first406);
      ref_tmp4414 = r424;
      long c425 = 1;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r426 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&ref_tmp4414, c425);
      agg_tmp0413 = r426;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r427 = std__vector_int__std__allocator_int_____end(&first406);
      ref_tmp5416 = r427;
      long c428 = 1;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r429 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&ref_tmp5416, c428);
      agg_tmp1415 = r429;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r430 = std__vector_int__std__allocator_int_____begin(&second409);
      agg_tmp2417 = r430;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t431 = agg_tmp0413;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t432 = agg_tmp1415;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t433 = agg_tmp2417;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r434 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______swap_ranges_esbmc___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t431, t432, t433);
      agg_tmp3418 = r434;
      unsigned long c435 = 2;
      int* r436 = std__vector_int__std__allocator_int_____operator__(&first406, c435);
      int t437 = *r436;
      int c438 = 33;
      _Bool c439 = ((t437 == c438)) ? 1 : 0;
      if (c439) {
      } else {
        char* cast440 = (char*)&(_str);
        char* c441 = _str_1;
        unsigned int c442 = 34;
        char* cast443 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast440, c441, c442, cast443);
      }
      unsigned long c444 = 2;
      int* r445 = std__vector_int__std__allocator_int_____operator__(&second409, c444);
      int t446 = *r445;
      int c447 = 10;
      _Bool c448 = ((t446 == c447)) ? 1 : 0;
      if (c448) {
      } else {
        char* cast449 = (char*)&(_str_2);
        char* c450 = _str_1;
        unsigned int c451 = 35;
        char* cast452 = (char*)&(__PRETTY_FUNCTION___main);
        __assert_fail(cast449, c450, c451, cast452);
      }
      char* cast453 = (char*)&(_str_3);
      struct std__basic_ostream_char__std__char_traits_char__* r454 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast453);
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp6455;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp7456;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r457 = std__vector_int__std__allocator_int_____begin(&first406);
        ref_tmp6455 = r457;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r458 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it412, &ref_tmp6455);
        while (1) {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r460 = std__vector_int__std__allocator_int_____end(&first406);
          ref_tmp7456 = r460;
          _Bool r461 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it412, &ref_tmp7456);
          _Bool u462 = !r461;
          if (!u462) break;
          char* cast463 = (char*)&(_str_4);
          struct std__basic_ostream_char__std__char_traits_char__* r464 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast463);
          int* r465 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it412);
          int t466 = *r465;
          struct std__basic_ostream_char__std__char_traits_char__* r467 = std__ostream__operator__(r464, t466);
        for_step459: ;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r468 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(&it412);
        }
      char* cast469 = (char*)&(_str_5);
      struct std__basic_ostream_char__std__char_traits_char__* r470 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast469);
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp8471;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp9472;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r473 = std__vector_int__std__allocator_int_____begin(&second409);
        ref_tmp8471 = r473;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r474 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it412, &ref_tmp8471);
        while (1) {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r476 = std__vector_int__std__allocator_int_____end(&second409);
          ref_tmp9472 = r476;
          _Bool r477 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it412, &ref_tmp9472);
          _Bool u478 = !r477;
          if (!u478) break;
          char* cast479 = (char*)&(_str_4);
          struct std__basic_ostream_char__std__char_traits_char__* r480 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast479);
          int* r481 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it412);
          int t482 = *r481;
          struct std__basic_ostream_char__std__char_traits_char__* r483 = std__ostream__operator__(r480, t482);
        for_step475: ;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r484 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(&it412);
        }
      struct std__basic_ostream_char__std__char_traits_char__* r485 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      int c486 = 0;
      __retval405 = c486;
      int t487 = __retval405;
      int ret_val488 = t487;
      {
        std__vector_int__std__allocator_int______vector(&second409);
      }
      {
        std__vector_int__std__allocator_int______vector(&first406);
      }
      return ret_val488;
  int t489 = __retval405;
  return t489;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v490) {
bb491:
  struct std____new_allocator_int_* this492;
  this492 = v490;
  struct std____new_allocator_int_* t493 = this492;
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v494, unsigned long* v495) {
bb496:
  unsigned long* __a497;
  unsigned long* __b498;
  unsigned long* __retval499;
  __a497 = v494;
  __b498 = v495;
    unsigned long* t500 = __b498;
    unsigned long t501 = *t500;
    unsigned long* t502 = __a497;
    unsigned long t503 = *t502;
    _Bool c504 = ((t501 < t503)) ? 1 : 0;
    if (c504) {
      unsigned long* t505 = __b498;
      __retval499 = t505;
      unsigned long* t506 = __retval499;
      return t506;
    }
  unsigned long* t507 = __a497;
  __retval499 = t507;
  unsigned long* t508 = __retval499;
  return t508;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v509) {
bb510:
  struct std__allocator_int_* __a511;
  unsigned long __retval512;
  unsigned long __diffmax513;
  unsigned long __allocmax514;
  __a511 = v509;
  unsigned long c515 = 2305843009213693951;
  __diffmax513 = c515;
  unsigned long c516 = 4611686018427387903;
  __allocmax514 = c516;
  unsigned long* r517 = unsigned_long_const__std__min_unsigned_long_(&__diffmax513, &__allocmax514);
  unsigned long t518 = *r517;
  __retval512 = t518;
  unsigned long t519 = __retval512;
  return t519;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v520, struct std__allocator_int_* v521) {
bb522:
  struct std__allocator_int_* this523;
  struct std__allocator_int_* __a524;
  this523 = v520;
  __a524 = v521;
  struct std__allocator_int_* t525 = this523;
  struct std____new_allocator_int_* base526 = (struct std____new_allocator_int_*)((char *)t525 + 0);
  struct std__allocator_int_* t527 = __a524;
  struct std____new_allocator_int_* base528 = (struct std____new_allocator_int_*)((char *)t527 + 0);
  std____new_allocator_int_____new_allocator(base526, base528);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v529, struct std__allocator_int_* v530) {
bb531:
  unsigned long __n532;
  struct std__allocator_int_* __a533;
  unsigned long __retval534;
  __n532 = v529;
  __a533 = v530;
    struct std__allocator_int_ ref_tmp0535;
    _Bool tmp_exprcleanup536;
    unsigned long t537 = __n532;
    struct std__allocator_int_* t538 = __a533;
    std__allocator_int___allocator(&ref_tmp0535, t538);
      unsigned long r539 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp0535);
      _Bool c540 = ((t537 > r539)) ? 1 : 0;
      tmp_exprcleanup536 = c540;
    {
      std__allocator_int____allocator(&ref_tmp0535);
    }
    _Bool t541 = tmp_exprcleanup536;
    if (t541) {
      char* cast542 = (char*)&(_str_6);
      std____throw_length_error(cast542);
    }
  unsigned long t543 = __n532;
  __retval534 = t543;
  unsigned long t544 = __retval534;
  return t544;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v545, struct std__allocator_int_* v546) {
bb547:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this548;
  struct std__allocator_int_* __a549;
  this548 = v545;
  __a549 = v546;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t550 = this548;
  struct std__allocator_int_* base551 = (struct std__allocator_int_*)((char *)t550 + 0);
  struct std__allocator_int_* t552 = __a549;
  std__allocator_int___allocator(base551, t552);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base553 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t550 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base553);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb554:
  _Bool __retval555;
    _Bool c556 = 0;
    __retval555 = c556;
    _Bool t557 = __retval555;
    return t557;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v558) {
bb559:
  struct std____new_allocator_int_* this560;
  unsigned long __retval561;
  this560 = v558;
  struct std____new_allocator_int_* t562 = this560;
  unsigned long c563 = 9223372036854775807;
  unsigned long c564 = 4;
  unsigned long b565 = c563 / c564;
  __retval561 = b565;
  unsigned long t566 = __retval561;
  return t566;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v567, unsigned long v568, void* v569) {
bb570:
  struct std____new_allocator_int_* this571;
  unsigned long __n572;
  void* unnamed573;
  int* __retval574;
  this571 = v567;
  __n572 = v568;
  unnamed573 = v569;
  struct std____new_allocator_int_* t575 = this571;
    unsigned long t576 = __n572;
    unsigned long r577 = std____new_allocator_int____M_max_size___const(t575);
    _Bool c578 = ((t576 > r577)) ? 1 : 0;
    if (c578) {
        unsigned long t579 = __n572;
        unsigned long c580 = -1;
        unsigned long c581 = 4;
        unsigned long b582 = c580 / c581;
        _Bool c583 = ((t579 > b582)) ? 1 : 0;
        if (c583) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c584 = 4;
    unsigned long c585 = 16;
    _Bool c586 = ((c584 > c585)) ? 1 : 0;
    if (c586) {
      unsigned long __al587;
      unsigned long c588 = 4;
      __al587 = c588;
      unsigned long t589 = __n572;
      unsigned long c590 = 4;
      unsigned long b591 = t589 * c590;
      unsigned long t592 = __al587;
      void* r593 = operator_new_2(b591, t592);
      int* cast594 = (int*)r593;
      __retval574 = cast594;
      int* t595 = __retval574;
      return t595;
    }
  unsigned long t596 = __n572;
  unsigned long c597 = 4;
  unsigned long b598 = t596 * c597;
  void* r599 = operator_new(b598);
  int* cast600 = (int*)r599;
  __retval574 = cast600;
  int* t601 = __retval574;
  return t601;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v602, unsigned long v603) {
bb604:
  struct std__allocator_int_* this605;
  unsigned long __n606;
  int* __retval607;
  this605 = v602;
  __n606 = v603;
  struct std__allocator_int_* t608 = this605;
    _Bool r609 = std____is_constant_evaluated();
    if (r609) {
        unsigned long t610 = __n606;
        unsigned long c611 = 4;
        unsigned long ovr612;
        _Bool ovf613 = __builtin_mul_overflow(t610, c611, &ovr612);
        __n606 = ovr612;
        if (ovf613) {
          std____throw_bad_array_new_length();
        }
      unsigned long t614 = __n606;
      void* r615 = operator_new(t614);
      int* cast616 = (int*)r615;
      __retval607 = cast616;
      int* t617 = __retval607;
      return t617;
    }
  struct std____new_allocator_int_* base618 = (struct std____new_allocator_int_*)((char *)t608 + 0);
  unsigned long t619 = __n606;
  void* c620 = ((void*)0);
  int* r621 = std____new_allocator_int___allocate(base618, t619, c620);
  __retval607 = r621;
  int* t622 = __retval607;
  return t622;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v623, unsigned long v624) {
bb625:
  struct std__allocator_int_* __a626;
  unsigned long __n627;
  int* __retval628;
  __a626 = v623;
  __n627 = v624;
  struct std__allocator_int_* t629 = __a626;
  unsigned long t630 = __n627;
  int* r631 = std__allocator_int___allocate(t629, t630);
  __retval628 = r631;
  int* t632 = __retval628;
  return t632;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v633, unsigned long v634) {
bb635:
  struct std___Vector_base_int__std__allocator_int__* this636;
  unsigned long __n637;
  int* __retval638;
  this636 = v633;
  __n637 = v634;
  struct std___Vector_base_int__std__allocator_int__* t639 = this636;
  unsigned long t640 = __n637;
  unsigned long c641 = 0;
  _Bool c642 = ((t640 != c641)) ? 1 : 0;
  int* ternary643;
  if (c642) {
    struct std__allocator_int_* base644 = (struct std__allocator_int_*)((char *)&(t639->_M_impl) + 0);
    unsigned long t645 = __n637;
    int* r646 = std__allocator_traits_std__allocator_int_____allocate(base644, t645);
    ternary643 = (int*)r646;
  } else {
    int* c647 = ((void*)0);
    ternary643 = (int*)c647;
  }
  __retval638 = ternary643;
  int* t648 = __retval638;
  return t648;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* v649, unsigned long v650) {
bb651:
  struct std___Vector_base_int__std__allocator_int__* this652;
  unsigned long __n653;
  this652 = v649;
  __n653 = v650;
  struct std___Vector_base_int__std__allocator_int__* t654 = this652;
  unsigned long t655 = __n653;
  int* r656 = std___Vector_base_int__std__allocator_int______M_allocate(t654, t655);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base657 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t654->_M_impl) + 0);
  base657->_M_start = r656;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base658 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t654->_M_impl) + 0);
  int* t659 = base658->_M_start;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base660 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t654->_M_impl) + 0);
  base660->_M_finish = t659;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base661 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t654->_M_impl) + 0);
  int* t662 = base661->_M_start;
  unsigned long t663 = __n653;
  int* ptr664 = &(t662)[t663];
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base665 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t654->_M_impl) + 0);
  base665->_M_end_of_storage = ptr664;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v666) {
bb667:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this668;
  this668 = v666;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t669 = this668;
  {
    struct std__allocator_int_* base670 = (struct std__allocator_int_*)((char *)t669 + 0);
    std__allocator_int____allocator(base670);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v671, unsigned long v672, struct std__allocator_int_* v673) {
bb674:
  struct std___Vector_base_int__std__allocator_int__* this675;
  unsigned long __n676;
  struct std__allocator_int_* __a677;
  this675 = v671;
  __n676 = v672;
  __a677 = v673;
  struct std___Vector_base_int__std__allocator_int__* t678 = this675;
  struct std__allocator_int_* t679 = __a677;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t678->_M_impl, t679);
    unsigned long t680 = __n676;
    std___Vector_base_int__std__allocator_int______M_create_storage(t678, t680);
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb681:
  _Bool __retval682;
    _Bool c683 = 0;
    __retval682 = c683;
    _Bool t684 = __retval682;
    return t684;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v685, int** v686) {
bb687:
  struct std___UninitDestroyGuard_int____void_* this688;
  int** __first689;
  this688 = v685;
  __first689 = v686;
  struct std___UninitDestroyGuard_int____void_* t690 = this688;
  int** t691 = __first689;
  int* t692 = *t691;
  t690->_M_first = t692;
  int** t693 = __first689;
  t690->_M_cur = t693;
  return;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v694, int* v695) {
bb696:
  int* __location697;
  int* __args698;
  int* __retval699;
  void* __loc700;
  __location697 = v694;
  __args698 = v695;
  int* t701 = __location697;
  void* cast702 = (void*)t701;
  __loc700 = cast702;
    void* t703 = __loc700;
    int* cast704 = (int*)t703;
    int* t705 = __args698;
    int t706 = *t705;
    *cast704 = t706;
    __retval699 = cast704;
    int* t707 = __retval699;
    return t707;
  abort();
}

// function: _ZSt10_ConstructIiJRKiEEvPT_DpOT0_
void void_std___Construct_int__int_const__(int* v708, int* v709) {
bb710:
  int* __p711;
  int* __args712;
  __p711 = v708;
  __args712 = v709;
    _Bool r713 = std____is_constant_evaluated();
    if (r713) {
      int* t714 = __p711;
      int* t715 = __args712;
      int* r716 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t714, t715);
      return;
    }
  int* t717 = __p711;
  void* cast718 = (void*)t717;
  int* cast719 = (int*)cast718;
  int* t720 = __args712;
  int t721 = *t720;
  *cast719 = t721;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v722) {
bb723:
  struct std___UninitDestroyGuard_int____void_* this724;
  this724 = v722;
  struct std___UninitDestroyGuard_int____void_* t725 = this724;
  int** c726 = ((void*)0);
  t725->_M_cur = c726;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v727) {
bb728:
  struct std___UninitDestroyGuard_int____void_* this729;
  this729 = v727;
  struct std___UninitDestroyGuard_int____void_* t730 = this729;
    int** t731 = t730->_M_cur;
    int** c732 = ((void*)0);
    _Bool c733 = ((t731 != c732)) ? 1 : 0;
    if (c733) {
      int* t734 = t730->_M_first;
      int** t735 = t730->_M_cur;
      int* t736 = *t735;
      void_std___Destroy_int__(t734, t736);
    }
  return;
}

// function: _ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_
int* int__std____do_uninit_fill_n_int___unsigned_long__int_(int* v737, unsigned long v738, int* v739) {
bb740:
  int* __first741;
  unsigned long __n742;
  int* __x743;
  int* __retval744;
  struct std___UninitDestroyGuard_int____void_ __guard745;
  __first741 = v737;
  __n742 = v738;
  __x743 = v739;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard745, &__first741);
        do {
              unsigned long t746 = __n742;
              unsigned long c747 = 0;
              _Bool c748 = ((t746 >= c747)) ? 1 : 0;
              _Bool u749 = !c748;
              if (u749) {
                char* cast750 = (char*)&(_str_7);
                int c751 = 463;
                char* cast752 = (char*)&(__PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_);
                char* cast753 = (char*)&(_str_8);
                std____glibcxx_assert_fail(cast750, c751, cast752, cast753);
              }
          _Bool c754 = 0;
          if (!c754) break;
        } while (1);
      while (1) {
        unsigned long t756 = __n742;
        unsigned long u757 = t756 - 1;
        __n742 = u757;
        _Bool cast758 = (_Bool)t756;
        if (!cast758) break;
        int* t759 = __first741;
        int* t760 = __x743;
        void_std___Construct_int__int_const__(t759, t760);
      for_step755: ;
        int* t761 = __first741;
        int c762 = 1;
        int* ptr763 = &(t761)[c762];
        __first741 = ptr763;
      }
    std___UninitDestroyGuard_int___void___release(&__guard745);
    int* t764 = __first741;
    __retval744 = t764;
    int* t765 = __retval744;
    int* ret_val766 = t765;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard745);
    }
    return ret_val766;
  abort();
}

// function: _ZSt20uninitialized_fill_nIPimiET_S1_T0_RKT1_
int* int__std__uninitialized_fill_n_int___unsigned_long__int_(int* v767, unsigned long v768, int* v769) {
bb770:
  int* __first771;
  unsigned long __n772;
  int* __x773;
  int* __retval774;
  __first771 = v767;
  __n772 = v768;
  __x773 = v769;
  int* t775 = __first771;
  unsigned long t776 = __n772;
  int* t777 = __x773;
  int* r778 = int__std____do_uninit_fill_n_int___unsigned_long__int_(t775, t776, t777);
  __retval774 = r778;
  int* t779 = __retval774;
  return t779;
}

// function: _ZSt24__uninitialized_fill_n_aIPimiiET_S1_T0_RKT1_RSaIT2_E
int* int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(int* v780, unsigned long v781, int* v782, struct std__allocator_int_* v783) {
bb784:
  int* __first785;
  unsigned long __n786;
  int* __x787;
  struct std__allocator_int_* unnamed788;
  int* __retval789;
  __first785 = v780;
  __n786 = v781;
  __x787 = v782;
  unnamed788 = v783;
    _Bool r790 = std__is_constant_evaluated();
    if (r790) {
      int* t791 = __first785;
      unsigned long t792 = __n786;
      int* t793 = __x787;
      int* r794 = int__std____do_uninit_fill_n_int___unsigned_long__int_(t791, t792, t793);
      __retval789 = r794;
      int* t795 = __retval789;
      return t795;
    }
  int* t796 = __first785;
  unsigned long t797 = __n786;
  int* t798 = __x787;
  int* r799 = int__std__uninitialized_fill_n_int___unsigned_long__int_(t796, t797, t798);
  __retval789 = r799;
  int* t800 = __retval789;
  return t800;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v801) {
bb802:
  struct std___Vector_base_int__std__allocator_int__* this803;
  struct std__allocator_int_* __retval804;
  this803 = v801;
  struct std___Vector_base_int__std__allocator_int__* t805 = this803;
  struct std__allocator_int_* base806 = (struct std__allocator_int_*)((char *)&(t805->_M_impl) + 0);
  __retval804 = base806;
  struct std__allocator_int_* t807 = __retval804;
  return t807;
}

// function: _ZNSt6vectorIiSaIiEE18_M_fill_initializeEmRKi
void std__vector_int__std__allocator_int______M_fill_initialize(struct std__vector_int__std__allocator_int__* v808, unsigned long v809, int* v810) {
bb811:
  struct std__vector_int__std__allocator_int__* this812;
  unsigned long __n813;
  int* __value814;
  this812 = v808;
  __n813 = v809;
  __value814 = v810;
  struct std__vector_int__std__allocator_int__* t815 = this812;
  struct std___Vector_base_int__std__allocator_int__* base816 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t815 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base817 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base816->_M_impl) + 0);
  int* t818 = base817->_M_start;
  unsigned long t819 = __n813;
  int* t820 = __value814;
  struct std___Vector_base_int__std__allocator_int__* base821 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t815 + 0);
  struct std__allocator_int_* r822 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base821);
  int* r823 = int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(t818, t819, t820, r822);
  struct std___Vector_base_int__std__allocator_int__* base824 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t815 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base825 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base824->_M_impl) + 0);
  base825->_M_finish = r823;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v826, int* v827, unsigned long v828) {
bb829:
  struct std____new_allocator_int_* this830;
  int* __p831;
  unsigned long __n832;
  this830 = v826;
  __p831 = v827;
  __n832 = v828;
  struct std____new_allocator_int_* t833 = this830;
    unsigned long c834 = 4;
    unsigned long c835 = 16;
    _Bool c836 = ((c834 > c835)) ? 1 : 0;
    if (c836) {
      int* t837 = __p831;
      void* cast838 = (void*)t837;
      unsigned long t839 = __n832;
      unsigned long c840 = 4;
      unsigned long b841 = t839 * c840;
      unsigned long c842 = 4;
      operator_delete_3(cast838, b841, c842);
      return;
    }
  int* t843 = __p831;
  void* cast844 = (void*)t843;
  unsigned long t845 = __n832;
  unsigned long c846 = 4;
  unsigned long b847 = t845 * c846;
  operator_delete_2(cast844, b847);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v848, int* v849, unsigned long v850) {
bb851:
  struct std__allocator_int_* this852;
  int* __p853;
  unsigned long __n854;
  this852 = v848;
  __p853 = v849;
  __n854 = v850;
  struct std__allocator_int_* t855 = this852;
    _Bool r856 = std____is_constant_evaluated();
    if (r856) {
      int* t857 = __p853;
      void* cast858 = (void*)t857;
      operator_delete(cast858);
      return;
    }
  struct std____new_allocator_int_* base859 = (struct std____new_allocator_int_*)((char *)t855 + 0);
  int* t860 = __p853;
  unsigned long t861 = __n854;
  std____new_allocator_int___deallocate(base859, t860, t861);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v862, int* v863, unsigned long v864) {
bb865:
  struct std__allocator_int_* __a866;
  int* __p867;
  unsigned long __n868;
  __a866 = v862;
  __p867 = v863;
  __n868 = v864;
  struct std__allocator_int_* t869 = __a866;
  int* t870 = __p867;
  unsigned long t871 = __n868;
  std__allocator_int___deallocate(t869, t870, t871);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v872, int* v873, unsigned long v874) {
bb875:
  struct std___Vector_base_int__std__allocator_int__* this876;
  int* __p877;
  unsigned long __n878;
  this876 = v872;
  __p877 = v873;
  __n878 = v874;
  struct std___Vector_base_int__std__allocator_int__* t879 = this876;
    int* t880 = __p877;
    _Bool cast881 = (_Bool)t880;
    if (cast881) {
      struct std__allocator_int_* base882 = (struct std__allocator_int_*)((char *)&(t879->_M_impl) + 0);
      int* t883 = __p877;
      unsigned long t884 = __n878;
      std__allocator_traits_std__allocator_int_____deallocate(base882, t883, t884);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v885) {
bb886:
  struct std___Vector_base_int__std__allocator_int__* this887;
  this887 = v885;
  struct std___Vector_base_int__std__allocator_int__* t888 = this887;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base889 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t888->_M_impl) + 0);
    int* t890 = base889->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base891 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t888->_M_impl) + 0);
    int* t892 = base891->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base893 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t888->_M_impl) + 0);
    int* t894 = base893->_M_start;
    long diff895 = t892 - t894;
    unsigned long cast896 = (unsigned long)diff895;
    std___Vector_base_int__std__allocator_int______M_deallocate(t888, t890, cast896);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t888->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v897, struct std____new_allocator_int_* v898) {
bb899:
  struct std____new_allocator_int_* this900;
  struct std____new_allocator_int_* unnamed901;
  this900 = v897;
  unnamed901 = v898;
  struct std____new_allocator_int_* t902 = this900;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v903) {
bb904:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this905;
  this905 = v903;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t906 = this905;
  int* c907 = ((void*)0);
  t906->_M_start = c907;
  int* c908 = ((void*)0);
  t906->_M_finish = c908;
  int* c909 = ((void*)0);
  t906->_M_end_of_storage = c909;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v910) {
bb911:
  int* __location912;
  __location912 = v910;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v913, int* v914) {
bb915:
  int* __first916;
  int* __last917;
  __first916 = v913;
  __last917 = v914;
      _Bool r918 = std____is_constant_evaluated();
      if (r918) {
          while (1) {
            int* t920 = __first916;
            int* t921 = __last917;
            _Bool c922 = ((t920 != t921)) ? 1 : 0;
            if (!c922) break;
            int* t923 = __first916;
            void_std__destroy_at_int_(t923);
          for_step919: ;
            int* t924 = __first916;
            int c925 = 1;
            int* ptr926 = &(t924)[c925];
            __first916 = ptr926;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v927, int* v928, struct std__allocator_int_* v929) {
bb930:
  int* __first931;
  int* __last932;
  struct std__allocator_int_* unnamed933;
  __first931 = v927;
  __last932 = v928;
  unnamed933 = v929;
  int* t934 = __first931;
  int* t935 = __last932;
  void_std___Destroy_int__(t934, t935);
  return;
}

