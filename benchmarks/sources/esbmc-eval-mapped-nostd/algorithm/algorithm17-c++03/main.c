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

int __const_main_myints[5] = {10, 20, 30, 40, 50};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[14] = "*myints == 99";
char _str_1[115] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm17-c++03/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[26] = "*(myvector.begin()) == 10";
char _str_3[18] = "*(myints+3) == 99";
char _str_4[28] = "*(myvector.begin()+2) == 40";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_5[19] = "myvector contains:";
char _str_6[2] = " ";
char _str_7[49] = "cannot create std::vector larger than max_size()";
char _str_8[98] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_uninitialized.h";
char __PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_[140] = "_ForwardIterator std::__do_uninit_fill_n(_ForwardIterator, _Size _Tp &) [_ForwardIterator = int *, _Size = unsigned long, _Tp = int]";
char _str_9[9] = "__n >= 0";
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, int* p2, struct std__allocator_int_* p3);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(int* p0, int* p1);
void void_std__iter_swap_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(int* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
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
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
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

// function: _ZSt4swapIiENSt9enable_ifIXsr6__and_ISt6__not_ISt15__is_tuple_likeIT_EESt21is_move_constructibleIS3_ESt18is_move_assignableIS3_EEE5valueEvE4typeERS3_SC_
void std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(int* v26, int* v27) {
bb28:
  int* __a29;
  int* __b30;
  int __tmp31;
  __a29 = v26;
  __b30 = v27;
  int* t32 = __a29;
  int t33 = *t32;
  __tmp31 = t33;
  int* t34 = __b30;
  int t35 = *t34;
  int* t36 = __a29;
  *t36 = t35;
  int t37 = __tmp31;
  int* t38 = __b30;
  *t38 = t37;
  return;
}

// function: _ZSt9iter_swapIPiN9__gnu_cxx17__normal_iteratorIS0_St6vectorIiSaIiEEEEEvT_T0_
void void_std__iter_swap_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(int* v39, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v40) {
bb41:
  int* __a42;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __b43;
  __a42 = v39;
  __b43 = v40;
  int* t44 = __a42;
  int* r45 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__b43);
  std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(t44, r45);
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v46, int** v47) {
bb48:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this49;
  int** __i50;
  this49 = v46;
  __i50 = v47;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t51 = this49;
  int** t52 = __i50;
  int* t53 = *t52;
  t51->_M_current = t53;
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v54) {
bb55:
  struct std__vector_int__std__allocator_int__* this56;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval57;
  this56 = v54;
  struct std__vector_int__std__allocator_int__* t58 = this56;
  struct std___Vector_base_int__std__allocator_int__* base59 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t58 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base60 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base59->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval57, &base60->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t61 = __retval57;
  return t61;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v62) {
bb63:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this64;
  int* __retval65;
  this64 = v62;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t66 = this64;
  int* t67 = t66->_M_current;
  __retval65 = t67;
  int* t68 = __retval65;
  return t68;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEplEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v69, long v70) {
bb71:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this72;
  long __n73;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval74;
  int* ref_tmp075;
  this72 = v69;
  __n73 = v70;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t76 = this72;
  int* t77 = t76->_M_current;
  long t78 = __n73;
  int* ptr79 = &(t77)[t78];
  ref_tmp075 = ptr79;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval74, &ref_tmp075);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t80 = __retval74;
  return t80;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v81, int v82) {
bb83:
  int __a84;
  int __b85;
  int __retval86;
  __a84 = v81;
  __b85 = v82;
  int t87 = __a84;
  int t88 = __b85;
  int b89 = t87 | t88;
  __retval86 = b89;
  int t90 = __retval86;
  return t90;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v91) {
bb92:
  struct std__basic_ios_char__std__char_traits_char__* this93;
  int __retval94;
  this93 = v91;
  struct std__basic_ios_char__std__char_traits_char__* t95 = this93;
  struct std__ios_base* base96 = (struct std__ios_base*)((char *)t95 + 0);
  int t97 = base96->_M_streambuf_state;
  __retval94 = t97;
  int t98 = __retval94;
  return t98;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v99, int v100) {
bb101:
  struct std__basic_ios_char__std__char_traits_char__* this102;
  int __state103;
  this102 = v99;
  __state103 = v100;
  struct std__basic_ios_char__std__char_traits_char__* t104 = this102;
  int r105 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t104);
  int t106 = __state103;
  int r107 = std__operator_(r105, t106);
  std__basic_ios_char__std__char_traits_char_____clear(t104, r107);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v108, char* v109) {
bb110:
  char* __c1111;
  char* __c2112;
  _Bool __retval113;
  __c1111 = v108;
  __c2112 = v109;
  char* t114 = __c1111;
  char t115 = *t114;
  int cast116 = (int)t115;
  char* t117 = __c2112;
  char t118 = *t117;
  int cast119 = (int)t118;
  _Bool c120 = ((cast116 == cast119)) ? 1 : 0;
  __retval113 = c120;
  _Bool t121 = __retval113;
  return t121;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v122) {
bb123:
  char* __p124;
  unsigned long __retval125;
  unsigned long __i126;
  __p124 = v122;
  unsigned long c127 = 0;
  __i126 = c127;
    char ref_tmp0128;
    while (1) {
      unsigned long t129 = __i126;
      char* t130 = __p124;
      char* ptr131 = &(t130)[t129];
      char c132 = 0;
      ref_tmp0128 = c132;
      _Bool r133 = __gnu_cxx__char_traits_char___eq(ptr131, &ref_tmp0128);
      _Bool u134 = !r133;
      if (!u134) break;
      unsigned long t135 = __i126;
      unsigned long u136 = t135 + 1;
      __i126 = u136;
    }
  unsigned long t137 = __i126;
  __retval125 = t137;
  unsigned long t138 = __retval125;
  return t138;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v139) {
bb140:
  char* __s141;
  unsigned long __retval142;
  __s141 = v139;
    _Bool r143 = std____is_constant_evaluated();
    if (r143) {
      char* t144 = __s141;
      unsigned long r145 = __gnu_cxx__char_traits_char___length(t144);
      __retval142 = r145;
      unsigned long t146 = __retval142;
      return t146;
    }
  char* t147 = __s141;
  unsigned long r148 = strlen(t147);
  __retval142 = r148;
  unsigned long t149 = __retval142;
  return t149;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v150, char* v151) {
bb152:
  struct std__basic_ostream_char__std__char_traits_char__* __out153;
  char* __s154;
  struct std__basic_ostream_char__std__char_traits_char__* __retval155;
  __out153 = v150;
  __s154 = v151;
    char* t156 = __s154;
    _Bool cast157 = (_Bool)t156;
    _Bool u158 = !cast157;
    if (u158) {
      struct std__basic_ostream_char__std__char_traits_char__* t159 = __out153;
      void** v160 = (void**)t159;
      void* v161 = *((void**)v160);
      unsigned char* cast162 = (unsigned char*)v161;
      long c163 = -24;
      unsigned char* ptr164 = &(cast162)[c163];
      long* cast165 = (long*)ptr164;
      long t166 = *cast165;
      unsigned char* cast167 = (unsigned char*)t159;
      unsigned char* ptr168 = &(cast167)[t166];
      struct std__basic_ostream_char__std__char_traits_char__* cast169 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr168;
      struct std__basic_ios_char__std__char_traits_char__* cast170 = (struct std__basic_ios_char__std__char_traits_char__*)cast169;
      int t171 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast170, t171);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t172 = __out153;
      char* t173 = __s154;
      char* t174 = __s154;
      unsigned long r175 = std__char_traits_char___length(t174);
      long cast176 = (long)r175;
      struct std__basic_ostream_char__std__char_traits_char__* r177 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t172, t173, cast176);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t178 = __out153;
  __retval155 = t178;
  struct std__basic_ostream_char__std__char_traits_char__* t179 = __retval155;
  return t179;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v180) {
bb181:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this182;
  int** __retval183;
  this182 = v180;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t184 = this182;
  __retval183 = &t184->_M_current;
  int** t185 = __retval183;
  return t185;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v186, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v187) {
bb188:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs189;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs190;
  _Bool __retval191;
  __lhs189 = v186;
  __rhs190 = v187;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t192 = __lhs189;
  int** r193 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t192);
  int* t194 = *r193;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t195 = __rhs190;
  int** r196 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t195);
  int* t197 = *r196;
  _Bool c198 = ((t194 == t197)) ? 1 : 0;
  __retval191 = c198;
  _Bool t199 = __retval191;
  return t199;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v200) {
bb201:
  struct std__vector_int__std__allocator_int__* this202;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval203;
  this202 = v200;
  struct std__vector_int__std__allocator_int__* t204 = this202;
  struct std___Vector_base_int__std__allocator_int__* base205 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t204 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base206 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base205->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval203, &base206->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t207 = __retval203;
  return t207;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v208) {
bb209:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this210;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval211;
  this210 = v208;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t212 = this210;
  int* t213 = t212->_M_current;
  int c214 = 1;
  int* ptr215 = &(t213)[c214];
  t212->_M_current = ptr215;
  __retval211 = t212;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t216 = __retval211;
  return t216;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v217, void* v218) {
bb219:
  struct std__basic_ostream_char__std__char_traits_char__* this220;
  void* __pf221;
  struct std__basic_ostream_char__std__char_traits_char__* __retval222;
  this220 = v217;
  __pf221 = v218;
  struct std__basic_ostream_char__std__char_traits_char__* t223 = this220;
  void* t224 = __pf221;
  struct std__basic_ostream_char__std__char_traits_char__* r225 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t224)(t223);
  __retval222 = r225;
  struct std__basic_ostream_char__std__char_traits_char__* t226 = __retval222;
  return t226;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v227) {
bb228:
  struct std__basic_ostream_char__std__char_traits_char__* __os229;
  struct std__basic_ostream_char__std__char_traits_char__* __retval230;
  __os229 = v227;
  struct std__basic_ostream_char__std__char_traits_char__* t231 = __os229;
  struct std__basic_ostream_char__std__char_traits_char__* r232 = std__ostream__flush(t231);
  __retval230 = r232;
  struct std__basic_ostream_char__std__char_traits_char__* t233 = __retval230;
  return t233;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v234) {
bb235:
  struct std__ctype_char_* __f236;
  struct std__ctype_char_* __retval237;
  __f236 = v234;
    struct std__ctype_char_* t238 = __f236;
    _Bool cast239 = (_Bool)t238;
    _Bool u240 = !cast239;
    if (u240) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t241 = __f236;
  __retval237 = t241;
  struct std__ctype_char_* t242 = __retval237;
  return t242;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v243, char v244) {
bb245:
  struct std__ctype_char_* this246;
  char __c247;
  char __retval248;
  this246 = v243;
  __c247 = v244;
  struct std__ctype_char_* t249 = this246;
    char t250 = t249->_M_widen_ok;
    _Bool cast251 = (_Bool)t250;
    if (cast251) {
      char t252 = __c247;
      unsigned char cast253 = (unsigned char)t252;
      unsigned long cast254 = (unsigned long)cast253;
      char t255 = t249->_M_widen[cast254];
      __retval248 = t255;
      char t256 = __retval248;
      return t256;
    }
  std__ctype_char____M_widen_init___const(t249);
  char t257 = __c247;
  void** v258 = (void**)t249;
  void* v259 = *((void**)v258);
  char vcall262 = (char)__VERIFIER_virtual_call_char_char(t249, 6, t257);
  __retval248 = vcall262;
  char t263 = __retval248;
  return t263;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v264, char v265) {
bb266:
  struct std__basic_ios_char__std__char_traits_char__* this267;
  char __c268;
  char __retval269;
  this267 = v264;
  __c268 = v265;
  struct std__basic_ios_char__std__char_traits_char__* t270 = this267;
  struct std__ctype_char_* t271 = t270->_M_ctype;
  struct std__ctype_char_* r272 = std__ctype_char__const__std____check_facet_std__ctype_char___(t271);
  char t273 = __c268;
  char r274 = std__ctype_char___widen_char__const(r272, t273);
  __retval269 = r274;
  char t275 = __retval269;
  return t275;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v276) {
bb277:
  struct std__basic_ostream_char__std__char_traits_char__* __os278;
  struct std__basic_ostream_char__std__char_traits_char__* __retval279;
  __os278 = v276;
  struct std__basic_ostream_char__std__char_traits_char__* t280 = __os278;
  struct std__basic_ostream_char__std__char_traits_char__* t281 = __os278;
  void** v282 = (void**)t281;
  void* v283 = *((void**)v282);
  unsigned char* cast284 = (unsigned char*)v283;
  long c285 = -24;
  unsigned char* ptr286 = &(cast284)[c285];
  long* cast287 = (long*)ptr286;
  long t288 = *cast287;
  unsigned char* cast289 = (unsigned char*)t281;
  unsigned char* ptr290 = &(cast289)[t288];
  struct std__basic_ostream_char__std__char_traits_char__* cast291 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr290;
  struct std__basic_ios_char__std__char_traits_char__* cast292 = (struct std__basic_ios_char__std__char_traits_char__*)cast291;
  char c293 = 10;
  char r294 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast292, c293);
  struct std__basic_ostream_char__std__char_traits_char__* r295 = std__ostream__put(t280, r294);
  struct std__basic_ostream_char__std__char_traits_char__* r296 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r295);
  __retval279 = r296;
  struct std__basic_ostream_char__std__char_traits_char__* t297 = __retval279;
  return t297;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v298) {
bb299:
  struct std__vector_int__std__allocator_int__* this300;
  this300 = v298;
  struct std__vector_int__std__allocator_int__* t301 = this300;
    struct std___Vector_base_int__std__allocator_int__* base302 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t301 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base303 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base302->_M_impl) + 0);
    int* t304 = base303->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base305 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t301 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base306 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base305->_M_impl) + 0);
    int* t307 = base306->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base308 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t301 + 0);
    struct std__allocator_int_* r309 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base308);
    void_std___Destroy_int___int_(t304, t307, r309);
  {
    struct std___Vector_base_int__std__allocator_int__* base310 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t301 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base310);
  }
  return;
}

// function: main
int main() {
bb311:
  int __retval312;
  int myints313[5];
  struct std__vector_int__std__allocator_int__ myvector314;
  int ref_tmp0315;
  struct std__allocator_int_ ref_tmp1316;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0317;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp2318;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1319;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp3320;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp4321;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp5322;
  int c323 = 0;
  __retval312 = c323;
  // array copy
  __builtin_memcpy(myints313, __const_main_myints, (unsigned long)5 * sizeof(__const_main_myints[0]));
  unsigned long c324 = 4;
  int c325 = 99;
  ref_tmp0315 = c325;
  std__allocator_int___allocator_2(&ref_tmp1316);
    std__vector_int__std__allocator_int_____vector(&myvector314, c324, &ref_tmp0315, &ref_tmp1316);
  {
    std__allocator_int____allocator(&ref_tmp1316);
  }
    int* cast326 = (int*)&(myints313);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r327 = std__vector_int__std__allocator_int_____begin(&myvector314);
    agg_tmp0317 = r327;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t328 = agg_tmp0317;
    void_std__iter_swap_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(cast326, t328);
    int* cast329 = (int*)&(myints313);
    int t330 = *cast329;
    int c331 = 99;
    _Bool c332 = ((t330 == c331)) ? 1 : 0;
    if (c332) {
    } else {
      char* cast333 = (char*)&(_str);
      char* c334 = _str_1;
      unsigned int c335 = 22;
      char* cast336 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast333, c334, c335, cast336);
    }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r337 = std__vector_int__std__allocator_int_____begin(&myvector314);
    ref_tmp2318 = r337;
    int* r338 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp2318);
    int t339 = *r338;
    int c340 = 10;
    _Bool c341 = ((t339 == c340)) ? 1 : 0;
    if (c341) {
    } else {
      char* cast342 = (char*)&(_str_2);
      char* c343 = _str_1;
      unsigned int c344 = 23;
      char* cast345 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast342, c343, c344, cast345);
    }
    int* cast346 = (int*)&(myints313);
    int c347 = 3;
    int* ptr348 = &(cast346)[c347];
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r349 = std__vector_int__std__allocator_int_____begin(&myvector314);
    ref_tmp3320 = r349;
    long c350 = 2;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r351 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&ref_tmp3320, c350);
    agg_tmp1319 = r351;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t352 = agg_tmp1319;
    void_std__iter_swap_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(ptr348, t352);
    int* cast353 = (int*)&(myints313);
    int c354 = 3;
    int* ptr355 = &(cast353)[c354];
    int t356 = *ptr355;
    int c357 = 99;
    _Bool c358 = ((t356 == c357)) ? 1 : 0;
    if (c358) {
    } else {
      char* cast359 = (char*)&(_str_3);
      char* c360 = _str_1;
      unsigned int c361 = 27;
      char* cast362 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast359, c360, c361, cast362);
    }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r363 = std__vector_int__std__allocator_int_____begin(&myvector314);
    ref_tmp5322 = r363;
    long c364 = 2;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r365 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&ref_tmp5322, c364);
    ref_tmp4321 = r365;
    int* r366 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp4321);
    int t367 = *r366;
    int c368 = 40;
    _Bool c369 = ((t367 == c368)) ? 1 : 0;
    if (c369) {
    } else {
      char* cast370 = (char*)&(_str_4);
      char* c371 = _str_1;
      unsigned int c372 = 28;
      char* cast373 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast370, c371, c372, cast373);
    }
    char* cast374 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* r375 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast374);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it376;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp6377;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r378 = std__vector_int__std__allocator_int_____begin(&myvector314);
      it376 = r378;
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r380 = std__vector_int__std__allocator_int_____end(&myvector314);
        ref_tmp6377 = r380;
        _Bool r381 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it376, &ref_tmp6377);
        _Bool u382 = !r381;
        if (!u382) break;
        char* cast383 = (char*)&(_str_6);
        struct std__basic_ostream_char__std__char_traits_char__* r384 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast383);
        int* r385 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it376);
        int t386 = *r385;
        struct std__basic_ostream_char__std__char_traits_char__* r387 = std__ostream__operator__(r384, t386);
      for_step379: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r388 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&it376);
      }
    struct std__basic_ostream_char__std__char_traits_char__* r389 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c390 = 0;
    __retval312 = c390;
    int t391 = __retval312;
    int ret_val392 = t391;
    {
      std__vector_int__std__allocator_int______vector(&myvector314);
    }
    return ret_val392;
  int t393 = __retval312;
  return t393;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v394) {
bb395:
  struct std____new_allocator_int_* this396;
  this396 = v394;
  struct std____new_allocator_int_* t397 = this396;
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v398, unsigned long* v399) {
bb400:
  unsigned long* __a401;
  unsigned long* __b402;
  unsigned long* __retval403;
  __a401 = v398;
  __b402 = v399;
    unsigned long* t404 = __b402;
    unsigned long t405 = *t404;
    unsigned long* t406 = __a401;
    unsigned long t407 = *t406;
    _Bool c408 = ((t405 < t407)) ? 1 : 0;
    if (c408) {
      unsigned long* t409 = __b402;
      __retval403 = t409;
      unsigned long* t410 = __retval403;
      return t410;
    }
  unsigned long* t411 = __a401;
  __retval403 = t411;
  unsigned long* t412 = __retval403;
  return t412;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v413) {
bb414:
  struct std__allocator_int_* __a415;
  unsigned long __retval416;
  unsigned long __diffmax417;
  unsigned long __allocmax418;
  __a415 = v413;
  unsigned long c419 = 2305843009213693951;
  __diffmax417 = c419;
  unsigned long c420 = 4611686018427387903;
  __allocmax418 = c420;
  unsigned long* r421 = unsigned_long_const__std__min_unsigned_long_(&__diffmax417, &__allocmax418);
  unsigned long t422 = *r421;
  __retval416 = t422;
  unsigned long t423 = __retval416;
  return t423;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v424, struct std__allocator_int_* v425) {
bb426:
  struct std__allocator_int_* this427;
  struct std__allocator_int_* __a428;
  this427 = v424;
  __a428 = v425;
  struct std__allocator_int_* t429 = this427;
  struct std____new_allocator_int_* base430 = (struct std____new_allocator_int_*)((char *)t429 + 0);
  struct std__allocator_int_* t431 = __a428;
  struct std____new_allocator_int_* base432 = (struct std____new_allocator_int_*)((char *)t431 + 0);
  std____new_allocator_int_____new_allocator(base430, base432);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v433, struct std__allocator_int_* v434) {
bb435:
  unsigned long __n436;
  struct std__allocator_int_* __a437;
  unsigned long __retval438;
  __n436 = v433;
  __a437 = v434;
    struct std__allocator_int_ ref_tmp0439;
    _Bool tmp_exprcleanup440;
    unsigned long t441 = __n436;
    struct std__allocator_int_* t442 = __a437;
    std__allocator_int___allocator(&ref_tmp0439, t442);
      unsigned long r443 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp0439);
      _Bool c444 = ((t441 > r443)) ? 1 : 0;
      tmp_exprcleanup440 = c444;
    {
      std__allocator_int____allocator(&ref_tmp0439);
    }
    _Bool t445 = tmp_exprcleanup440;
    if (t445) {
      char* cast446 = (char*)&(_str_7);
      std____throw_length_error(cast446);
    }
  unsigned long t447 = __n436;
  __retval438 = t447;
  unsigned long t448 = __retval438;
  return t448;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v449, struct std__allocator_int_* v450) {
bb451:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this452;
  struct std__allocator_int_* __a453;
  this452 = v449;
  __a453 = v450;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t454 = this452;
  struct std__allocator_int_* base455 = (struct std__allocator_int_*)((char *)t454 + 0);
  struct std__allocator_int_* t456 = __a453;
  std__allocator_int___allocator(base455, t456);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base457 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t454 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base457);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb458:
  _Bool __retval459;
    _Bool c460 = 0;
    __retval459 = c460;
    _Bool t461 = __retval459;
    return t461;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v462) {
bb463:
  struct std____new_allocator_int_* this464;
  unsigned long __retval465;
  this464 = v462;
  struct std____new_allocator_int_* t466 = this464;
  unsigned long c467 = 9223372036854775807;
  unsigned long c468 = 4;
  unsigned long b469 = c467 / c468;
  __retval465 = b469;
  unsigned long t470 = __retval465;
  return t470;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v471, unsigned long v472, void* v473) {
bb474:
  struct std____new_allocator_int_* this475;
  unsigned long __n476;
  void* unnamed477;
  int* __retval478;
  this475 = v471;
  __n476 = v472;
  unnamed477 = v473;
  struct std____new_allocator_int_* t479 = this475;
    unsigned long t480 = __n476;
    unsigned long r481 = std____new_allocator_int____M_max_size___const(t479);
    _Bool c482 = ((t480 > r481)) ? 1 : 0;
    if (c482) {
        unsigned long t483 = __n476;
        unsigned long c484 = -1;
        unsigned long c485 = 4;
        unsigned long b486 = c484 / c485;
        _Bool c487 = ((t483 > b486)) ? 1 : 0;
        if (c487) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c488 = 4;
    unsigned long c489 = 16;
    _Bool c490 = ((c488 > c489)) ? 1 : 0;
    if (c490) {
      unsigned long __al491;
      unsigned long c492 = 4;
      __al491 = c492;
      unsigned long t493 = __n476;
      unsigned long c494 = 4;
      unsigned long b495 = t493 * c494;
      unsigned long t496 = __al491;
      void* r497 = operator_new_2(b495, t496);
      int* cast498 = (int*)r497;
      __retval478 = cast498;
      int* t499 = __retval478;
      return t499;
    }
  unsigned long t500 = __n476;
  unsigned long c501 = 4;
  unsigned long b502 = t500 * c501;
  void* r503 = operator_new(b502);
  int* cast504 = (int*)r503;
  __retval478 = cast504;
  int* t505 = __retval478;
  return t505;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v506, unsigned long v507) {
bb508:
  struct std__allocator_int_* this509;
  unsigned long __n510;
  int* __retval511;
  this509 = v506;
  __n510 = v507;
  struct std__allocator_int_* t512 = this509;
    _Bool r513 = std____is_constant_evaluated();
    if (r513) {
        unsigned long t514 = __n510;
        unsigned long c515 = 4;
        unsigned long ovr516;
        _Bool ovf517 = __builtin_mul_overflow(t514, c515, &ovr516);
        __n510 = ovr516;
        if (ovf517) {
          std____throw_bad_array_new_length();
        }
      unsigned long t518 = __n510;
      void* r519 = operator_new(t518);
      int* cast520 = (int*)r519;
      __retval511 = cast520;
      int* t521 = __retval511;
      return t521;
    }
  struct std____new_allocator_int_* base522 = (struct std____new_allocator_int_*)((char *)t512 + 0);
  unsigned long t523 = __n510;
  void* c524 = ((void*)0);
  int* r525 = std____new_allocator_int___allocate(base522, t523, c524);
  __retval511 = r525;
  int* t526 = __retval511;
  return t526;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v527, unsigned long v528) {
bb529:
  struct std__allocator_int_* __a530;
  unsigned long __n531;
  int* __retval532;
  __a530 = v527;
  __n531 = v528;
  struct std__allocator_int_* t533 = __a530;
  unsigned long t534 = __n531;
  int* r535 = std__allocator_int___allocate(t533, t534);
  __retval532 = r535;
  int* t536 = __retval532;
  return t536;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v537, unsigned long v538) {
bb539:
  struct std___Vector_base_int__std__allocator_int__* this540;
  unsigned long __n541;
  int* __retval542;
  this540 = v537;
  __n541 = v538;
  struct std___Vector_base_int__std__allocator_int__* t543 = this540;
  unsigned long t544 = __n541;
  unsigned long c545 = 0;
  _Bool c546 = ((t544 != c545)) ? 1 : 0;
  int* ternary547;
  if (c546) {
    struct std__allocator_int_* base548 = (struct std__allocator_int_*)((char *)&(t543->_M_impl) + 0);
    unsigned long t549 = __n541;
    int* r550 = std__allocator_traits_std__allocator_int_____allocate(base548, t549);
    ternary547 = (int*)r550;
  } else {
    int* c551 = ((void*)0);
    ternary547 = (int*)c551;
  }
  __retval542 = ternary547;
  int* t552 = __retval542;
  return t552;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* v553, unsigned long v554) {
bb555:
  struct std___Vector_base_int__std__allocator_int__* this556;
  unsigned long __n557;
  this556 = v553;
  __n557 = v554;
  struct std___Vector_base_int__std__allocator_int__* t558 = this556;
  unsigned long t559 = __n557;
  int* r560 = std___Vector_base_int__std__allocator_int______M_allocate(t558, t559);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base561 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t558->_M_impl) + 0);
  base561->_M_start = r560;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base562 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t558->_M_impl) + 0);
  int* t563 = base562->_M_start;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base564 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t558->_M_impl) + 0);
  base564->_M_finish = t563;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base565 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t558->_M_impl) + 0);
  int* t566 = base565->_M_start;
  unsigned long t567 = __n557;
  int* ptr568 = &(t566)[t567];
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base569 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t558->_M_impl) + 0);
  base569->_M_end_of_storage = ptr568;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v570) {
bb571:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this572;
  this572 = v570;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t573 = this572;
  {
    struct std__allocator_int_* base574 = (struct std__allocator_int_*)((char *)t573 + 0);
    std__allocator_int____allocator(base574);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v575, unsigned long v576, struct std__allocator_int_* v577) {
bb578:
  struct std___Vector_base_int__std__allocator_int__* this579;
  unsigned long __n580;
  struct std__allocator_int_* __a581;
  this579 = v575;
  __n580 = v576;
  __a581 = v577;
  struct std___Vector_base_int__std__allocator_int__* t582 = this579;
  struct std__allocator_int_* t583 = __a581;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t582->_M_impl, t583);
    unsigned long t584 = __n580;
    std___Vector_base_int__std__allocator_int______M_create_storage(t582, t584);
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb585:
  _Bool __retval586;
    _Bool c587 = 0;
    __retval586 = c587;
    _Bool t588 = __retval586;
    return t588;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v589, int** v590) {
bb591:
  struct std___UninitDestroyGuard_int____void_* this592;
  int** __first593;
  this592 = v589;
  __first593 = v590;
  struct std___UninitDestroyGuard_int____void_* t594 = this592;
  int** t595 = __first593;
  int* t596 = *t595;
  t594->_M_first = t596;
  int** t597 = __first593;
  t594->_M_cur = t597;
  return;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v598, int* v599) {
bb600:
  int* __location601;
  int* __args602;
  int* __retval603;
  void* __loc604;
  __location601 = v598;
  __args602 = v599;
  int* t605 = __location601;
  void* cast606 = (void*)t605;
  __loc604 = cast606;
    void* t607 = __loc604;
    int* cast608 = (int*)t607;
    int* t609 = __args602;
    int t610 = *t609;
    *cast608 = t610;
    __retval603 = cast608;
    int* t611 = __retval603;
    return t611;
  abort();
}

// function: _ZSt10_ConstructIiJRKiEEvPT_DpOT0_
void void_std___Construct_int__int_const__(int* v612, int* v613) {
bb614:
  int* __p615;
  int* __args616;
  __p615 = v612;
  __args616 = v613;
    _Bool r617 = std____is_constant_evaluated();
    if (r617) {
      int* t618 = __p615;
      int* t619 = __args616;
      int* r620 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t618, t619);
      return;
    }
  int* t621 = __p615;
  void* cast622 = (void*)t621;
  int* cast623 = (int*)cast622;
  int* t624 = __args616;
  int t625 = *t624;
  *cast623 = t625;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v626) {
bb627:
  struct std___UninitDestroyGuard_int____void_* this628;
  this628 = v626;
  struct std___UninitDestroyGuard_int____void_* t629 = this628;
  int** c630 = ((void*)0);
  t629->_M_cur = c630;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v631) {
bb632:
  struct std___UninitDestroyGuard_int____void_* this633;
  this633 = v631;
  struct std___UninitDestroyGuard_int____void_* t634 = this633;
    int** t635 = t634->_M_cur;
    int** c636 = ((void*)0);
    _Bool c637 = ((t635 != c636)) ? 1 : 0;
    if (c637) {
      int* t638 = t634->_M_first;
      int** t639 = t634->_M_cur;
      int* t640 = *t639;
      void_std___Destroy_int__(t638, t640);
    }
  return;
}

// function: _ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_
int* int__std____do_uninit_fill_n_int___unsigned_long__int_(int* v641, unsigned long v642, int* v643) {
bb644:
  int* __first645;
  unsigned long __n646;
  int* __x647;
  int* __retval648;
  struct std___UninitDestroyGuard_int____void_ __guard649;
  __first645 = v641;
  __n646 = v642;
  __x647 = v643;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard649, &__first645);
        do {
              unsigned long t650 = __n646;
              unsigned long c651 = 0;
              _Bool c652 = ((t650 >= c651)) ? 1 : 0;
              _Bool u653 = !c652;
              if (u653) {
                char* cast654 = (char*)&(_str_8);
                int c655 = 463;
                char* cast656 = (char*)&(__PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_);
                char* cast657 = (char*)&(_str_9);
                std____glibcxx_assert_fail(cast654, c655, cast656, cast657);
              }
          _Bool c658 = 0;
          if (!c658) break;
        } while (1);
      while (1) {
        unsigned long t660 = __n646;
        unsigned long u661 = t660 - 1;
        __n646 = u661;
        _Bool cast662 = (_Bool)t660;
        if (!cast662) break;
        int* t663 = __first645;
        int* t664 = __x647;
        void_std___Construct_int__int_const__(t663, t664);
      for_step659: ;
        int* t665 = __first645;
        int c666 = 1;
        int* ptr667 = &(t665)[c666];
        __first645 = ptr667;
      }
    std___UninitDestroyGuard_int___void___release(&__guard649);
    int* t668 = __first645;
    __retval648 = t668;
    int* t669 = __retval648;
    int* ret_val670 = t669;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard649);
    }
    return ret_val670;
  abort();
}

// function: _ZSt20uninitialized_fill_nIPimiET_S1_T0_RKT1_
int* int__std__uninitialized_fill_n_int___unsigned_long__int_(int* v671, unsigned long v672, int* v673) {
bb674:
  int* __first675;
  unsigned long __n676;
  int* __x677;
  int* __retval678;
  __first675 = v671;
  __n676 = v672;
  __x677 = v673;
  int* t679 = __first675;
  unsigned long t680 = __n676;
  int* t681 = __x677;
  int* r682 = int__std____do_uninit_fill_n_int___unsigned_long__int_(t679, t680, t681);
  __retval678 = r682;
  int* t683 = __retval678;
  return t683;
}

// function: _ZSt24__uninitialized_fill_n_aIPimiiET_S1_T0_RKT1_RSaIT2_E
int* int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(int* v684, unsigned long v685, int* v686, struct std__allocator_int_* v687) {
bb688:
  int* __first689;
  unsigned long __n690;
  int* __x691;
  struct std__allocator_int_* unnamed692;
  int* __retval693;
  __first689 = v684;
  __n690 = v685;
  __x691 = v686;
  unnamed692 = v687;
    _Bool r694 = std__is_constant_evaluated();
    if (r694) {
      int* t695 = __first689;
      unsigned long t696 = __n690;
      int* t697 = __x691;
      int* r698 = int__std____do_uninit_fill_n_int___unsigned_long__int_(t695, t696, t697);
      __retval693 = r698;
      int* t699 = __retval693;
      return t699;
    }
  int* t700 = __first689;
  unsigned long t701 = __n690;
  int* t702 = __x691;
  int* r703 = int__std__uninitialized_fill_n_int___unsigned_long__int_(t700, t701, t702);
  __retval693 = r703;
  int* t704 = __retval693;
  return t704;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v705) {
bb706:
  struct std___Vector_base_int__std__allocator_int__* this707;
  struct std__allocator_int_* __retval708;
  this707 = v705;
  struct std___Vector_base_int__std__allocator_int__* t709 = this707;
  struct std__allocator_int_* base710 = (struct std__allocator_int_*)((char *)&(t709->_M_impl) + 0);
  __retval708 = base710;
  struct std__allocator_int_* t711 = __retval708;
  return t711;
}

// function: _ZNSt6vectorIiSaIiEE18_M_fill_initializeEmRKi
void std__vector_int__std__allocator_int______M_fill_initialize(struct std__vector_int__std__allocator_int__* v712, unsigned long v713, int* v714) {
bb715:
  struct std__vector_int__std__allocator_int__* this716;
  unsigned long __n717;
  int* __value718;
  this716 = v712;
  __n717 = v713;
  __value718 = v714;
  struct std__vector_int__std__allocator_int__* t719 = this716;
  struct std___Vector_base_int__std__allocator_int__* base720 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t719 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base721 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base720->_M_impl) + 0);
  int* t722 = base721->_M_start;
  unsigned long t723 = __n717;
  int* t724 = __value718;
  struct std___Vector_base_int__std__allocator_int__* base725 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t719 + 0);
  struct std__allocator_int_* r726 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base725);
  int* r727 = int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(t722, t723, t724, r726);
  struct std___Vector_base_int__std__allocator_int__* base728 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t719 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base729 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base728->_M_impl) + 0);
  base729->_M_finish = r727;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v730, int* v731, unsigned long v732) {
bb733:
  struct std____new_allocator_int_* this734;
  int* __p735;
  unsigned long __n736;
  this734 = v730;
  __p735 = v731;
  __n736 = v732;
  struct std____new_allocator_int_* t737 = this734;
    unsigned long c738 = 4;
    unsigned long c739 = 16;
    _Bool c740 = ((c738 > c739)) ? 1 : 0;
    if (c740) {
      int* t741 = __p735;
      void* cast742 = (void*)t741;
      unsigned long t743 = __n736;
      unsigned long c744 = 4;
      unsigned long b745 = t743 * c744;
      unsigned long c746 = 4;
      operator_delete_3(cast742, b745, c746);
      return;
    }
  int* t747 = __p735;
  void* cast748 = (void*)t747;
  unsigned long t749 = __n736;
  unsigned long c750 = 4;
  unsigned long b751 = t749 * c750;
  operator_delete_2(cast748, b751);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v752, int* v753, unsigned long v754) {
bb755:
  struct std__allocator_int_* this756;
  int* __p757;
  unsigned long __n758;
  this756 = v752;
  __p757 = v753;
  __n758 = v754;
  struct std__allocator_int_* t759 = this756;
    _Bool r760 = std____is_constant_evaluated();
    if (r760) {
      int* t761 = __p757;
      void* cast762 = (void*)t761;
      operator_delete(cast762);
      return;
    }
  struct std____new_allocator_int_* base763 = (struct std____new_allocator_int_*)((char *)t759 + 0);
  int* t764 = __p757;
  unsigned long t765 = __n758;
  std____new_allocator_int___deallocate(base763, t764, t765);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v766, int* v767, unsigned long v768) {
bb769:
  struct std__allocator_int_* __a770;
  int* __p771;
  unsigned long __n772;
  __a770 = v766;
  __p771 = v767;
  __n772 = v768;
  struct std__allocator_int_* t773 = __a770;
  int* t774 = __p771;
  unsigned long t775 = __n772;
  std__allocator_int___deallocate(t773, t774, t775);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v776, int* v777, unsigned long v778) {
bb779:
  struct std___Vector_base_int__std__allocator_int__* this780;
  int* __p781;
  unsigned long __n782;
  this780 = v776;
  __p781 = v777;
  __n782 = v778;
  struct std___Vector_base_int__std__allocator_int__* t783 = this780;
    int* t784 = __p781;
    _Bool cast785 = (_Bool)t784;
    if (cast785) {
      struct std__allocator_int_* base786 = (struct std__allocator_int_*)((char *)&(t783->_M_impl) + 0);
      int* t787 = __p781;
      unsigned long t788 = __n782;
      std__allocator_traits_std__allocator_int_____deallocate(base786, t787, t788);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v789) {
bb790:
  struct std___Vector_base_int__std__allocator_int__* this791;
  this791 = v789;
  struct std___Vector_base_int__std__allocator_int__* t792 = this791;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base793 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t792->_M_impl) + 0);
    int* t794 = base793->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base795 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t792->_M_impl) + 0);
    int* t796 = base795->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base797 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t792->_M_impl) + 0);
    int* t798 = base797->_M_start;
    long diff799 = t796 - t798;
    unsigned long cast800 = (unsigned long)diff799;
    std___Vector_base_int__std__allocator_int______M_deallocate(t792, t794, cast800);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t792->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v801, struct std____new_allocator_int_* v802) {
bb803:
  struct std____new_allocator_int_* this804;
  struct std____new_allocator_int_* unnamed805;
  this804 = v801;
  unnamed805 = v802;
  struct std____new_allocator_int_* t806 = this804;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v807) {
bb808:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this809;
  this809 = v807;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t810 = this809;
  int* c811 = ((void*)0);
  t810->_M_start = c811;
  int* c812 = ((void*)0);
  t810->_M_finish = c812;
  int* c813 = ((void*)0);
  t810->_M_end_of_storage = c813;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v814) {
bb815:
  int* __location816;
  __location816 = v814;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v817, int* v818) {
bb819:
  int* __first820;
  int* __last821;
  __first820 = v817;
  __last821 = v818;
      _Bool r822 = std____is_constant_evaluated();
      if (r822) {
          while (1) {
            int* t824 = __first820;
            int* t825 = __last821;
            _Bool c826 = ((t824 != t825)) ? 1 : 0;
            if (!c826) break;
            int* t827 = __first820;
            void_std__destroy_at_int_(t827);
          for_step823: ;
            int* t828 = __first820;
            int c829 = 1;
            int* ptr830 = &(t828)[c829];
            __first820 = ptr830;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v831, int* v832, struct std__allocator_int_* v833) {
bb834:
  int* __first835;
  int* __last836;
  struct std__allocator_int_* unnamed837;
  __first835 = v831;
  __last836 = v832;
  unnamed837 = v833;
  int* t838 = __first835;
  int* t839 = __last836;
  void_std___Destroy_int__(t838, t839);
  return;
}

