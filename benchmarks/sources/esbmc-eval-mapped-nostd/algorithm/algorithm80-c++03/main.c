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
char _str[18] = "myvector[2] != 40";
char _str_1[115] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm80-c++03/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[19] = "myvector contains:";
char _str_3[2] = " ";
char _str_4[49] = "cannot create std::vector larger than max_size()";
char _str_5[98] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_uninitialized.h";
char __PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_[140] = "_ForwardIterator std::__do_uninit_fill_n(_ForwardIterator, _Size _Tp &) [_ForwardIterator = int *, _Size = unsigned long, _Tp = int]";
char _str_6[9] = "__n >= 0";
char _str_7[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_8[19] = "__n < this->size()";
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, int* p2, struct std__allocator_int_* p3);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(int* p0, int* p1);
void void_std__iter_swap_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(int* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
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
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
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

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEplEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v62, long v63) {
bb64:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this65;
  long __n66;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval67;
  int* ref_tmp068;
  this65 = v62;
  __n66 = v63;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t69 = this65;
  int* t70 = t69->_M_current;
  long t71 = __n66;
  int* ptr72 = &(t70)[t71];
  ref_tmp068 = ptr72;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval67, &ref_tmp068);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t73 = __retval67;
  return t73;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v74) {
bb75:
  struct std__vector_int__std__allocator_int__* this76;
  unsigned long __retval77;
  long __dif78;
  this76 = v74;
  struct std__vector_int__std__allocator_int__* t79 = this76;
  struct std___Vector_base_int__std__allocator_int__* base80 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t79 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base81 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base80->_M_impl) + 0);
  int* t82 = base81->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base83 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t79 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base84 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base83->_M_impl) + 0);
  int* t85 = base84->_M_start;
  long diff86 = t82 - t85;
  __dif78 = diff86;
    long t87 = __dif78;
    long c88 = 0;
    _Bool c89 = ((t87 < c88)) ? 1 : 0;
    if (c89) {
      __builtin_unreachable();
    }
  long t90 = __dif78;
  unsigned long cast91 = (unsigned long)t90;
  __retval77 = cast91;
  unsigned long t92 = __retval77;
  return t92;
}

// function: _ZNSt6vectorIiSaIiEEixEm
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* v93, unsigned long v94) {
bb95:
  struct std__vector_int__std__allocator_int__* this96;
  unsigned long __n97;
  int* __retval98;
  this96 = v93;
  __n97 = v94;
  struct std__vector_int__std__allocator_int__* t99 = this96;
    do {
          unsigned long t100 = __n97;
          unsigned long r101 = std__vector_int__std__allocator_int_____size___const(t99);
          _Bool c102 = ((t100 < r101)) ? 1 : 0;
          _Bool u103 = !c102;
          if (u103) {
            char* cast104 = (char*)&(_str_7);
            int c105 = 1263;
            char* cast106 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm);
            char* cast107 = (char*)&(_str_8);
            std____glibcxx_assert_fail(cast104, c105, cast106, cast107);
          }
      _Bool c108 = 0;
      if (!c108) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base109 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t99 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base110 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base109->_M_impl) + 0);
  int* t111 = base110->_M_start;
  unsigned long t112 = __n97;
  int* ptr113 = &(t111)[t112];
  __retval98 = ptr113;
  int* t114 = __retval98;
  return t114;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v115, int v116) {
bb117:
  int __a118;
  int __b119;
  int __retval120;
  __a118 = v115;
  __b119 = v116;
  int t121 = __a118;
  int t122 = __b119;
  int b123 = t121 | t122;
  __retval120 = b123;
  int t124 = __retval120;
  return t124;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v125) {
bb126:
  struct std__basic_ios_char__std__char_traits_char__* this127;
  int __retval128;
  this127 = v125;
  struct std__basic_ios_char__std__char_traits_char__* t129 = this127;
  struct std__ios_base* base130 = (struct std__ios_base*)((char *)t129 + 0);
  int t131 = base130->_M_streambuf_state;
  __retval128 = t131;
  int t132 = __retval128;
  return t132;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v133, int v134) {
bb135:
  struct std__basic_ios_char__std__char_traits_char__* this136;
  int __state137;
  this136 = v133;
  __state137 = v134;
  struct std__basic_ios_char__std__char_traits_char__* t138 = this136;
  int r139 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t138);
  int t140 = __state137;
  int r141 = std__operator_(r139, t140);
  std__basic_ios_char__std__char_traits_char_____clear(t138, r141);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v142, char* v143) {
bb144:
  char* __c1145;
  char* __c2146;
  _Bool __retval147;
  __c1145 = v142;
  __c2146 = v143;
  char* t148 = __c1145;
  char t149 = *t148;
  int cast150 = (int)t149;
  char* t151 = __c2146;
  char t152 = *t151;
  int cast153 = (int)t152;
  _Bool c154 = ((cast150 == cast153)) ? 1 : 0;
  __retval147 = c154;
  _Bool t155 = __retval147;
  return t155;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v156) {
bb157:
  char* __p158;
  unsigned long __retval159;
  unsigned long __i160;
  __p158 = v156;
  unsigned long c161 = 0;
  __i160 = c161;
    char ref_tmp0162;
    while (1) {
      unsigned long t163 = __i160;
      char* t164 = __p158;
      char* ptr165 = &(t164)[t163];
      char c166 = 0;
      ref_tmp0162 = c166;
      _Bool r167 = __gnu_cxx__char_traits_char___eq(ptr165, &ref_tmp0162);
      _Bool u168 = !r167;
      if (!u168) break;
      unsigned long t169 = __i160;
      unsigned long u170 = t169 + 1;
      __i160 = u170;
    }
  unsigned long t171 = __i160;
  __retval159 = t171;
  unsigned long t172 = __retval159;
  return t172;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v173) {
bb174:
  char* __s175;
  unsigned long __retval176;
  __s175 = v173;
    _Bool r177 = std____is_constant_evaluated();
    if (r177) {
      char* t178 = __s175;
      unsigned long r179 = __gnu_cxx__char_traits_char___length(t178);
      __retval176 = r179;
      unsigned long t180 = __retval176;
      return t180;
    }
  char* t181 = __s175;
  unsigned long r182 = strlen(t181);
  __retval176 = r182;
  unsigned long t183 = __retval176;
  return t183;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v184, char* v185) {
bb186:
  struct std__basic_ostream_char__std__char_traits_char__* __out187;
  char* __s188;
  struct std__basic_ostream_char__std__char_traits_char__* __retval189;
  __out187 = v184;
  __s188 = v185;
    char* t190 = __s188;
    _Bool cast191 = (_Bool)t190;
    _Bool u192 = !cast191;
    if (u192) {
      struct std__basic_ostream_char__std__char_traits_char__* t193 = __out187;
      void** v194 = (void**)t193;
      void* v195 = *((void**)v194);
      unsigned char* cast196 = (unsigned char*)v195;
      long c197 = -24;
      unsigned char* ptr198 = &(cast196)[c197];
      long* cast199 = (long*)ptr198;
      long t200 = *cast199;
      unsigned char* cast201 = (unsigned char*)t193;
      unsigned char* ptr202 = &(cast201)[t200];
      struct std__basic_ostream_char__std__char_traits_char__* cast203 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr202;
      struct std__basic_ios_char__std__char_traits_char__* cast204 = (struct std__basic_ios_char__std__char_traits_char__*)cast203;
      int t205 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast204, t205);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t206 = __out187;
      char* t207 = __s188;
      char* t208 = __s188;
      unsigned long r209 = std__char_traits_char___length(t208);
      long cast210 = (long)r209;
      struct std__basic_ostream_char__std__char_traits_char__* r211 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t206, t207, cast210);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t212 = __out187;
  __retval189 = t212;
  struct std__basic_ostream_char__std__char_traits_char__* t213 = __retval189;
  return t213;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v214) {
bb215:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this216;
  int** __retval217;
  this216 = v214;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t218 = this216;
  __retval217 = &t218->_M_current;
  int** t219 = __retval217;
  return t219;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v220, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v221) {
bb222:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs223;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs224;
  _Bool __retval225;
  __lhs223 = v220;
  __rhs224 = v221;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t226 = __lhs223;
  int** r227 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t226);
  int* t228 = *r227;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t229 = __rhs224;
  int** r230 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t229);
  int* t231 = *r230;
  _Bool c232 = ((t228 == t231)) ? 1 : 0;
  __retval225 = c232;
  _Bool t233 = __retval225;
  return t233;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v234) {
bb235:
  struct std__vector_int__std__allocator_int__* this236;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval237;
  this236 = v234;
  struct std__vector_int__std__allocator_int__* t238 = this236;
  struct std___Vector_base_int__std__allocator_int__* base239 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t238 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base240 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base239->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval237, &base240->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t241 = __retval237;
  return t241;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v242) {
bb243:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this244;
  int* __retval245;
  this244 = v242;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t246 = this244;
  int* t247 = t246->_M_current;
  __retval245 = t247;
  int* t248 = __retval245;
  return t248;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v249) {
bb250:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this251;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval252;
  this251 = v249;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t253 = this251;
  int* t254 = t253->_M_current;
  int c255 = 1;
  int* ptr256 = &(t254)[c255];
  t253->_M_current = ptr256;
  __retval252 = t253;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t257 = __retval252;
  return t257;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v258, void* v259) {
bb260:
  struct std__basic_ostream_char__std__char_traits_char__* this261;
  void* __pf262;
  struct std__basic_ostream_char__std__char_traits_char__* __retval263;
  this261 = v258;
  __pf262 = v259;
  struct std__basic_ostream_char__std__char_traits_char__* t264 = this261;
  void* t265 = __pf262;
  struct std__basic_ostream_char__std__char_traits_char__* r266 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t265)(t264);
  __retval263 = r266;
  struct std__basic_ostream_char__std__char_traits_char__* t267 = __retval263;
  return t267;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v268) {
bb269:
  struct std__basic_ostream_char__std__char_traits_char__* __os270;
  struct std__basic_ostream_char__std__char_traits_char__* __retval271;
  __os270 = v268;
  struct std__basic_ostream_char__std__char_traits_char__* t272 = __os270;
  struct std__basic_ostream_char__std__char_traits_char__* r273 = std__ostream__flush(t272);
  __retval271 = r273;
  struct std__basic_ostream_char__std__char_traits_char__* t274 = __retval271;
  return t274;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v275) {
bb276:
  struct std__ctype_char_* __f277;
  struct std__ctype_char_* __retval278;
  __f277 = v275;
    struct std__ctype_char_* t279 = __f277;
    _Bool cast280 = (_Bool)t279;
    _Bool u281 = !cast280;
    if (u281) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t282 = __f277;
  __retval278 = t282;
  struct std__ctype_char_* t283 = __retval278;
  return t283;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v284, char v285) {
bb286:
  struct std__ctype_char_* this287;
  char __c288;
  char __retval289;
  this287 = v284;
  __c288 = v285;
  struct std__ctype_char_* t290 = this287;
    char t291 = t290->_M_widen_ok;
    _Bool cast292 = (_Bool)t291;
    if (cast292) {
      char t293 = __c288;
      unsigned char cast294 = (unsigned char)t293;
      unsigned long cast295 = (unsigned long)cast294;
      char t296 = t290->_M_widen[cast295];
      __retval289 = t296;
      char t297 = __retval289;
      return t297;
    }
  std__ctype_char____M_widen_init___const(t290);
  char t298 = __c288;
  void** v299 = (void**)t290;
  void* v300 = *((void**)v299);
  char vcall303 = (char)__VERIFIER_virtual_call_char_char(t290, 6, t298);
  __retval289 = vcall303;
  char t304 = __retval289;
  return t304;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v305, char v306) {
bb307:
  struct std__basic_ios_char__std__char_traits_char__* this308;
  char __c309;
  char __retval310;
  this308 = v305;
  __c309 = v306;
  struct std__basic_ios_char__std__char_traits_char__* t311 = this308;
  struct std__ctype_char_* t312 = t311->_M_ctype;
  struct std__ctype_char_* r313 = std__ctype_char__const__std____check_facet_std__ctype_char___(t312);
  char t314 = __c309;
  char r315 = std__ctype_char___widen_char__const(r313, t314);
  __retval310 = r315;
  char t316 = __retval310;
  return t316;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v317) {
bb318:
  struct std__basic_ostream_char__std__char_traits_char__* __os319;
  struct std__basic_ostream_char__std__char_traits_char__* __retval320;
  __os319 = v317;
  struct std__basic_ostream_char__std__char_traits_char__* t321 = __os319;
  struct std__basic_ostream_char__std__char_traits_char__* t322 = __os319;
  void** v323 = (void**)t322;
  void* v324 = *((void**)v323);
  unsigned char* cast325 = (unsigned char*)v324;
  long c326 = -24;
  unsigned char* ptr327 = &(cast325)[c326];
  long* cast328 = (long*)ptr327;
  long t329 = *cast328;
  unsigned char* cast330 = (unsigned char*)t322;
  unsigned char* ptr331 = &(cast330)[t329];
  struct std__basic_ostream_char__std__char_traits_char__* cast332 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr331;
  struct std__basic_ios_char__std__char_traits_char__* cast333 = (struct std__basic_ios_char__std__char_traits_char__*)cast332;
  char c334 = 10;
  char r335 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast333, c334);
  struct std__basic_ostream_char__std__char_traits_char__* r336 = std__ostream__put(t321, r335);
  struct std__basic_ostream_char__std__char_traits_char__* r337 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r336);
  __retval320 = r337;
  struct std__basic_ostream_char__std__char_traits_char__* t338 = __retval320;
  return t338;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v339) {
bb340:
  struct std__vector_int__std__allocator_int__* this341;
  this341 = v339;
  struct std__vector_int__std__allocator_int__* t342 = this341;
    struct std___Vector_base_int__std__allocator_int__* base343 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t342 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base344 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base343->_M_impl) + 0);
    int* t345 = base344->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base346 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t342 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base347 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base346->_M_impl) + 0);
    int* t348 = base347->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base349 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t342 + 0);
    struct std__allocator_int_* r350 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base349);
    void_std___Destroy_int___int_(t345, t348, r350);
  {
    struct std___Vector_base_int__std__allocator_int__* base351 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t342 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base351);
  }
  return;
}

// function: main
int main() {
bb352:
  int __retval353;
  int myints354[5];
  struct std__vector_int__std__allocator_int__ myvector355;
  int ref_tmp0356;
  struct std__allocator_int_ ref_tmp1357;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0358;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1359;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp2360;
  int c361 = 0;
  __retval353 = c361;
  // array copy
  __builtin_memcpy(myints354, __const_main_myints, (unsigned long)5 * sizeof(__const_main_myints[0]));
  unsigned long c362 = 4;
  int c363 = 99;
  ref_tmp0356 = c363;
  std__allocator_int___allocator_2(&ref_tmp1357);
    std__vector_int__std__allocator_int_____vector(&myvector355, c362, &ref_tmp0356, &ref_tmp1357);
  {
    std__allocator_int____allocator(&ref_tmp1357);
  }
    int* cast364 = (int*)&(myints354);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r365 = std__vector_int__std__allocator_int_____begin(&myvector355);
    agg_tmp0358 = r365;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t366 = agg_tmp0358;
    void_std__iter_swap_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(cast364, t366);
    int* cast367 = (int*)&(myints354);
    int c368 = 3;
    int* ptr369 = &(cast367)[c368];
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r370 = std__vector_int__std__allocator_int_____begin(&myvector355);
    ref_tmp2360 = r370;
    long c371 = 2;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r372 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&ref_tmp2360, c371);
    agg_tmp1359 = r372;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t373 = agg_tmp1359;
    void_std__iter_swap_int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(ptr369, t373);
    unsigned long c374 = 2;
    int* r375 = std__vector_int__std__allocator_int_____operator__(&myvector355, c374);
    int t376 = *r375;
    int c377 = 40;
    _Bool c378 = ((t376 != c377)) ? 1 : 0;
    if (c378) {
    } else {
      char* cast379 = (char*)&(_str);
      char* c380 = _str_1;
      unsigned int c381 = 26;
      char* cast382 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast379, c380, c381, cast382);
    }
    char* cast383 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r384 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast383);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it385;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp3386;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r387 = std__vector_int__std__allocator_int_____begin(&myvector355);
      it385 = r387;
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r389 = std__vector_int__std__allocator_int_____end(&myvector355);
        ref_tmp3386 = r389;
        _Bool r390 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it385, &ref_tmp3386);
        _Bool u391 = !r390;
        if (!u391) break;
        char* cast392 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* r393 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast392);
        int* r394 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it385);
        int t395 = *r394;
        struct std__basic_ostream_char__std__char_traits_char__* r396 = std__ostream__operator__(r393, t395);
      for_step388: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r397 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&it385);
      }
    struct std__basic_ostream_char__std__char_traits_char__* r398 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c399 = 0;
    __retval353 = c399;
    int t400 = __retval353;
    int ret_val401 = t400;
    {
      std__vector_int__std__allocator_int______vector(&myvector355);
    }
    return ret_val401;
  int t402 = __retval353;
  return t402;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v403) {
bb404:
  struct std____new_allocator_int_* this405;
  this405 = v403;
  struct std____new_allocator_int_* t406 = this405;
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v407, unsigned long* v408) {
bb409:
  unsigned long* __a410;
  unsigned long* __b411;
  unsigned long* __retval412;
  __a410 = v407;
  __b411 = v408;
    unsigned long* t413 = __b411;
    unsigned long t414 = *t413;
    unsigned long* t415 = __a410;
    unsigned long t416 = *t415;
    _Bool c417 = ((t414 < t416)) ? 1 : 0;
    if (c417) {
      unsigned long* t418 = __b411;
      __retval412 = t418;
      unsigned long* t419 = __retval412;
      return t419;
    }
  unsigned long* t420 = __a410;
  __retval412 = t420;
  unsigned long* t421 = __retval412;
  return t421;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v422) {
bb423:
  struct std__allocator_int_* __a424;
  unsigned long __retval425;
  unsigned long __diffmax426;
  unsigned long __allocmax427;
  __a424 = v422;
  unsigned long c428 = 2305843009213693951;
  __diffmax426 = c428;
  unsigned long c429 = 4611686018427387903;
  __allocmax427 = c429;
  unsigned long* r430 = unsigned_long_const__std__min_unsigned_long_(&__diffmax426, &__allocmax427);
  unsigned long t431 = *r430;
  __retval425 = t431;
  unsigned long t432 = __retval425;
  return t432;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v433, struct std__allocator_int_* v434) {
bb435:
  struct std__allocator_int_* this436;
  struct std__allocator_int_* __a437;
  this436 = v433;
  __a437 = v434;
  struct std__allocator_int_* t438 = this436;
  struct std____new_allocator_int_* base439 = (struct std____new_allocator_int_*)((char *)t438 + 0);
  struct std__allocator_int_* t440 = __a437;
  struct std____new_allocator_int_* base441 = (struct std____new_allocator_int_*)((char *)t440 + 0);
  std____new_allocator_int_____new_allocator(base439, base441);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v442, struct std__allocator_int_* v443) {
bb444:
  unsigned long __n445;
  struct std__allocator_int_* __a446;
  unsigned long __retval447;
  __n445 = v442;
  __a446 = v443;
    struct std__allocator_int_ ref_tmp0448;
    _Bool tmp_exprcleanup449;
    unsigned long t450 = __n445;
    struct std__allocator_int_* t451 = __a446;
    std__allocator_int___allocator(&ref_tmp0448, t451);
      unsigned long r452 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp0448);
      _Bool c453 = ((t450 > r452)) ? 1 : 0;
      tmp_exprcleanup449 = c453;
    {
      std__allocator_int____allocator(&ref_tmp0448);
    }
    _Bool t454 = tmp_exprcleanup449;
    if (t454) {
      char* cast455 = (char*)&(_str_4);
      std____throw_length_error(cast455);
    }
  unsigned long t456 = __n445;
  __retval447 = t456;
  unsigned long t457 = __retval447;
  return t457;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v458, struct std__allocator_int_* v459) {
bb460:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this461;
  struct std__allocator_int_* __a462;
  this461 = v458;
  __a462 = v459;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t463 = this461;
  struct std__allocator_int_* base464 = (struct std__allocator_int_*)((char *)t463 + 0);
  struct std__allocator_int_* t465 = __a462;
  std__allocator_int___allocator(base464, t465);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base466 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t463 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base466);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb467:
  _Bool __retval468;
    _Bool c469 = 0;
    __retval468 = c469;
    _Bool t470 = __retval468;
    return t470;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v471) {
bb472:
  struct std____new_allocator_int_* this473;
  unsigned long __retval474;
  this473 = v471;
  struct std____new_allocator_int_* t475 = this473;
  unsigned long c476 = 9223372036854775807;
  unsigned long c477 = 4;
  unsigned long b478 = c476 / c477;
  __retval474 = b478;
  unsigned long t479 = __retval474;
  return t479;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v480, unsigned long v481, void* v482) {
bb483:
  struct std____new_allocator_int_* this484;
  unsigned long __n485;
  void* unnamed486;
  int* __retval487;
  this484 = v480;
  __n485 = v481;
  unnamed486 = v482;
  struct std____new_allocator_int_* t488 = this484;
    unsigned long t489 = __n485;
    unsigned long r490 = std____new_allocator_int____M_max_size___const(t488);
    _Bool c491 = ((t489 > r490)) ? 1 : 0;
    if (c491) {
        unsigned long t492 = __n485;
        unsigned long c493 = -1;
        unsigned long c494 = 4;
        unsigned long b495 = c493 / c494;
        _Bool c496 = ((t492 > b495)) ? 1 : 0;
        if (c496) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c497 = 4;
    unsigned long c498 = 16;
    _Bool c499 = ((c497 > c498)) ? 1 : 0;
    if (c499) {
      unsigned long __al500;
      unsigned long c501 = 4;
      __al500 = c501;
      unsigned long t502 = __n485;
      unsigned long c503 = 4;
      unsigned long b504 = t502 * c503;
      unsigned long t505 = __al500;
      void* r506 = operator_new_2(b504, t505);
      int* cast507 = (int*)r506;
      __retval487 = cast507;
      int* t508 = __retval487;
      return t508;
    }
  unsigned long t509 = __n485;
  unsigned long c510 = 4;
  unsigned long b511 = t509 * c510;
  void* r512 = operator_new(b511);
  int* cast513 = (int*)r512;
  __retval487 = cast513;
  int* t514 = __retval487;
  return t514;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v515, unsigned long v516) {
bb517:
  struct std__allocator_int_* this518;
  unsigned long __n519;
  int* __retval520;
  this518 = v515;
  __n519 = v516;
  struct std__allocator_int_* t521 = this518;
    _Bool r522 = std____is_constant_evaluated();
    if (r522) {
        unsigned long t523 = __n519;
        unsigned long c524 = 4;
        unsigned long ovr525;
        _Bool ovf526 = __builtin_mul_overflow(t523, c524, &ovr525);
        __n519 = ovr525;
        if (ovf526) {
          std____throw_bad_array_new_length();
        }
      unsigned long t527 = __n519;
      void* r528 = operator_new(t527);
      int* cast529 = (int*)r528;
      __retval520 = cast529;
      int* t530 = __retval520;
      return t530;
    }
  struct std____new_allocator_int_* base531 = (struct std____new_allocator_int_*)((char *)t521 + 0);
  unsigned long t532 = __n519;
  void* c533 = ((void*)0);
  int* r534 = std____new_allocator_int___allocate(base531, t532, c533);
  __retval520 = r534;
  int* t535 = __retval520;
  return t535;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v536, unsigned long v537) {
bb538:
  struct std__allocator_int_* __a539;
  unsigned long __n540;
  int* __retval541;
  __a539 = v536;
  __n540 = v537;
  struct std__allocator_int_* t542 = __a539;
  unsigned long t543 = __n540;
  int* r544 = std__allocator_int___allocate(t542, t543);
  __retval541 = r544;
  int* t545 = __retval541;
  return t545;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v546, unsigned long v547) {
bb548:
  struct std___Vector_base_int__std__allocator_int__* this549;
  unsigned long __n550;
  int* __retval551;
  this549 = v546;
  __n550 = v547;
  struct std___Vector_base_int__std__allocator_int__* t552 = this549;
  unsigned long t553 = __n550;
  unsigned long c554 = 0;
  _Bool c555 = ((t553 != c554)) ? 1 : 0;
  int* ternary556;
  if (c555) {
    struct std__allocator_int_* base557 = (struct std__allocator_int_*)((char *)&(t552->_M_impl) + 0);
    unsigned long t558 = __n550;
    int* r559 = std__allocator_traits_std__allocator_int_____allocate(base557, t558);
    ternary556 = (int*)r559;
  } else {
    int* c560 = ((void*)0);
    ternary556 = (int*)c560;
  }
  __retval551 = ternary556;
  int* t561 = __retval551;
  return t561;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* v562, unsigned long v563) {
bb564:
  struct std___Vector_base_int__std__allocator_int__* this565;
  unsigned long __n566;
  this565 = v562;
  __n566 = v563;
  struct std___Vector_base_int__std__allocator_int__* t567 = this565;
  unsigned long t568 = __n566;
  int* r569 = std___Vector_base_int__std__allocator_int______M_allocate(t567, t568);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base570 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t567->_M_impl) + 0);
  base570->_M_start = r569;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base571 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t567->_M_impl) + 0);
  int* t572 = base571->_M_start;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base573 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t567->_M_impl) + 0);
  base573->_M_finish = t572;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base574 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t567->_M_impl) + 0);
  int* t575 = base574->_M_start;
  unsigned long t576 = __n566;
  int* ptr577 = &(t575)[t576];
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base578 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t567->_M_impl) + 0);
  base578->_M_end_of_storage = ptr577;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v579) {
bb580:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this581;
  this581 = v579;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t582 = this581;
  {
    struct std__allocator_int_* base583 = (struct std__allocator_int_*)((char *)t582 + 0);
    std__allocator_int____allocator(base583);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v584, unsigned long v585, struct std__allocator_int_* v586) {
bb587:
  struct std___Vector_base_int__std__allocator_int__* this588;
  unsigned long __n589;
  struct std__allocator_int_* __a590;
  this588 = v584;
  __n589 = v585;
  __a590 = v586;
  struct std___Vector_base_int__std__allocator_int__* t591 = this588;
  struct std__allocator_int_* t592 = __a590;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t591->_M_impl, t592);
    unsigned long t593 = __n589;
    std___Vector_base_int__std__allocator_int______M_create_storage(t591, t593);
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb594:
  _Bool __retval595;
    _Bool c596 = 0;
    __retval595 = c596;
    _Bool t597 = __retval595;
    return t597;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v598, int** v599) {
bb600:
  struct std___UninitDestroyGuard_int____void_* this601;
  int** __first602;
  this601 = v598;
  __first602 = v599;
  struct std___UninitDestroyGuard_int____void_* t603 = this601;
  int** t604 = __first602;
  int* t605 = *t604;
  t603->_M_first = t605;
  int** t606 = __first602;
  t603->_M_cur = t606;
  return;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v607, int* v608) {
bb609:
  int* __location610;
  int* __args611;
  int* __retval612;
  void* __loc613;
  __location610 = v607;
  __args611 = v608;
  int* t614 = __location610;
  void* cast615 = (void*)t614;
  __loc613 = cast615;
    void* t616 = __loc613;
    int* cast617 = (int*)t616;
    int* t618 = __args611;
    int t619 = *t618;
    *cast617 = t619;
    __retval612 = cast617;
    int* t620 = __retval612;
    return t620;
  abort();
}

// function: _ZSt10_ConstructIiJRKiEEvPT_DpOT0_
void void_std___Construct_int__int_const__(int* v621, int* v622) {
bb623:
  int* __p624;
  int* __args625;
  __p624 = v621;
  __args625 = v622;
    _Bool r626 = std____is_constant_evaluated();
    if (r626) {
      int* t627 = __p624;
      int* t628 = __args625;
      int* r629 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t627, t628);
      return;
    }
  int* t630 = __p624;
  void* cast631 = (void*)t630;
  int* cast632 = (int*)cast631;
  int* t633 = __args625;
  int t634 = *t633;
  *cast632 = t634;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v635) {
bb636:
  struct std___UninitDestroyGuard_int____void_* this637;
  this637 = v635;
  struct std___UninitDestroyGuard_int____void_* t638 = this637;
  int** c639 = ((void*)0);
  t638->_M_cur = c639;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v640) {
bb641:
  struct std___UninitDestroyGuard_int____void_* this642;
  this642 = v640;
  struct std___UninitDestroyGuard_int____void_* t643 = this642;
    int** t644 = t643->_M_cur;
    int** c645 = ((void*)0);
    _Bool c646 = ((t644 != c645)) ? 1 : 0;
    if (c646) {
      int* t647 = t643->_M_first;
      int** t648 = t643->_M_cur;
      int* t649 = *t648;
      void_std___Destroy_int__(t647, t649);
    }
  return;
}

// function: _ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_
int* int__std____do_uninit_fill_n_int___unsigned_long__int_(int* v650, unsigned long v651, int* v652) {
bb653:
  int* __first654;
  unsigned long __n655;
  int* __x656;
  int* __retval657;
  struct std___UninitDestroyGuard_int____void_ __guard658;
  __first654 = v650;
  __n655 = v651;
  __x656 = v652;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard658, &__first654);
        do {
              unsigned long t659 = __n655;
              unsigned long c660 = 0;
              _Bool c661 = ((t659 >= c660)) ? 1 : 0;
              _Bool u662 = !c661;
              if (u662) {
                char* cast663 = (char*)&(_str_5);
                int c664 = 463;
                char* cast665 = (char*)&(__PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_);
                char* cast666 = (char*)&(_str_6);
                std____glibcxx_assert_fail(cast663, c664, cast665, cast666);
              }
          _Bool c667 = 0;
          if (!c667) break;
        } while (1);
      while (1) {
        unsigned long t669 = __n655;
        unsigned long u670 = t669 - 1;
        __n655 = u670;
        _Bool cast671 = (_Bool)t669;
        if (!cast671) break;
        int* t672 = __first654;
        int* t673 = __x656;
        void_std___Construct_int__int_const__(t672, t673);
      for_step668: ;
        int* t674 = __first654;
        int c675 = 1;
        int* ptr676 = &(t674)[c675];
        __first654 = ptr676;
      }
    std___UninitDestroyGuard_int___void___release(&__guard658);
    int* t677 = __first654;
    __retval657 = t677;
    int* t678 = __retval657;
    int* ret_val679 = t678;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard658);
    }
    return ret_val679;
  abort();
}

// function: _ZSt20uninitialized_fill_nIPimiET_S1_T0_RKT1_
int* int__std__uninitialized_fill_n_int___unsigned_long__int_(int* v680, unsigned long v681, int* v682) {
bb683:
  int* __first684;
  unsigned long __n685;
  int* __x686;
  int* __retval687;
  __first684 = v680;
  __n685 = v681;
  __x686 = v682;
  int* t688 = __first684;
  unsigned long t689 = __n685;
  int* t690 = __x686;
  int* r691 = int__std____do_uninit_fill_n_int___unsigned_long__int_(t688, t689, t690);
  __retval687 = r691;
  int* t692 = __retval687;
  return t692;
}

// function: _ZSt24__uninitialized_fill_n_aIPimiiET_S1_T0_RKT1_RSaIT2_E
int* int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(int* v693, unsigned long v694, int* v695, struct std__allocator_int_* v696) {
bb697:
  int* __first698;
  unsigned long __n699;
  int* __x700;
  struct std__allocator_int_* unnamed701;
  int* __retval702;
  __first698 = v693;
  __n699 = v694;
  __x700 = v695;
  unnamed701 = v696;
    _Bool r703 = std__is_constant_evaluated();
    if (r703) {
      int* t704 = __first698;
      unsigned long t705 = __n699;
      int* t706 = __x700;
      int* r707 = int__std____do_uninit_fill_n_int___unsigned_long__int_(t704, t705, t706);
      __retval702 = r707;
      int* t708 = __retval702;
      return t708;
    }
  int* t709 = __first698;
  unsigned long t710 = __n699;
  int* t711 = __x700;
  int* r712 = int__std__uninitialized_fill_n_int___unsigned_long__int_(t709, t710, t711);
  __retval702 = r712;
  int* t713 = __retval702;
  return t713;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v714) {
bb715:
  struct std___Vector_base_int__std__allocator_int__* this716;
  struct std__allocator_int_* __retval717;
  this716 = v714;
  struct std___Vector_base_int__std__allocator_int__* t718 = this716;
  struct std__allocator_int_* base719 = (struct std__allocator_int_*)((char *)&(t718->_M_impl) + 0);
  __retval717 = base719;
  struct std__allocator_int_* t720 = __retval717;
  return t720;
}

// function: _ZNSt6vectorIiSaIiEE18_M_fill_initializeEmRKi
void std__vector_int__std__allocator_int______M_fill_initialize(struct std__vector_int__std__allocator_int__* v721, unsigned long v722, int* v723) {
bb724:
  struct std__vector_int__std__allocator_int__* this725;
  unsigned long __n726;
  int* __value727;
  this725 = v721;
  __n726 = v722;
  __value727 = v723;
  struct std__vector_int__std__allocator_int__* t728 = this725;
  struct std___Vector_base_int__std__allocator_int__* base729 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t728 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base730 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base729->_M_impl) + 0);
  int* t731 = base730->_M_start;
  unsigned long t732 = __n726;
  int* t733 = __value727;
  struct std___Vector_base_int__std__allocator_int__* base734 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t728 + 0);
  struct std__allocator_int_* r735 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base734);
  int* r736 = int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(t731, t732, t733, r735);
  struct std___Vector_base_int__std__allocator_int__* base737 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t728 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base738 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base737->_M_impl) + 0);
  base738->_M_finish = r736;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v739, int* v740, unsigned long v741) {
bb742:
  struct std____new_allocator_int_* this743;
  int* __p744;
  unsigned long __n745;
  this743 = v739;
  __p744 = v740;
  __n745 = v741;
  struct std____new_allocator_int_* t746 = this743;
    unsigned long c747 = 4;
    unsigned long c748 = 16;
    _Bool c749 = ((c747 > c748)) ? 1 : 0;
    if (c749) {
      int* t750 = __p744;
      void* cast751 = (void*)t750;
      unsigned long t752 = __n745;
      unsigned long c753 = 4;
      unsigned long b754 = t752 * c753;
      unsigned long c755 = 4;
      operator_delete_3(cast751, b754, c755);
      return;
    }
  int* t756 = __p744;
  void* cast757 = (void*)t756;
  unsigned long t758 = __n745;
  unsigned long c759 = 4;
  unsigned long b760 = t758 * c759;
  operator_delete_2(cast757, b760);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v761, int* v762, unsigned long v763) {
bb764:
  struct std__allocator_int_* this765;
  int* __p766;
  unsigned long __n767;
  this765 = v761;
  __p766 = v762;
  __n767 = v763;
  struct std__allocator_int_* t768 = this765;
    _Bool r769 = std____is_constant_evaluated();
    if (r769) {
      int* t770 = __p766;
      void* cast771 = (void*)t770;
      operator_delete(cast771);
      return;
    }
  struct std____new_allocator_int_* base772 = (struct std____new_allocator_int_*)((char *)t768 + 0);
  int* t773 = __p766;
  unsigned long t774 = __n767;
  std____new_allocator_int___deallocate(base772, t773, t774);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v775, int* v776, unsigned long v777) {
bb778:
  struct std__allocator_int_* __a779;
  int* __p780;
  unsigned long __n781;
  __a779 = v775;
  __p780 = v776;
  __n781 = v777;
  struct std__allocator_int_* t782 = __a779;
  int* t783 = __p780;
  unsigned long t784 = __n781;
  std__allocator_int___deallocate(t782, t783, t784);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v785, int* v786, unsigned long v787) {
bb788:
  struct std___Vector_base_int__std__allocator_int__* this789;
  int* __p790;
  unsigned long __n791;
  this789 = v785;
  __p790 = v786;
  __n791 = v787;
  struct std___Vector_base_int__std__allocator_int__* t792 = this789;
    int* t793 = __p790;
    _Bool cast794 = (_Bool)t793;
    if (cast794) {
      struct std__allocator_int_* base795 = (struct std__allocator_int_*)((char *)&(t792->_M_impl) + 0);
      int* t796 = __p790;
      unsigned long t797 = __n791;
      std__allocator_traits_std__allocator_int_____deallocate(base795, t796, t797);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v798) {
bb799:
  struct std___Vector_base_int__std__allocator_int__* this800;
  this800 = v798;
  struct std___Vector_base_int__std__allocator_int__* t801 = this800;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base802 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t801->_M_impl) + 0);
    int* t803 = base802->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base804 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t801->_M_impl) + 0);
    int* t805 = base804->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base806 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t801->_M_impl) + 0);
    int* t807 = base806->_M_start;
    long diff808 = t805 - t807;
    unsigned long cast809 = (unsigned long)diff808;
    std___Vector_base_int__std__allocator_int______M_deallocate(t801, t803, cast809);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t801->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v810, struct std____new_allocator_int_* v811) {
bb812:
  struct std____new_allocator_int_* this813;
  struct std____new_allocator_int_* unnamed814;
  this813 = v810;
  unnamed814 = v811;
  struct std____new_allocator_int_* t815 = this813;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v816) {
bb817:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this818;
  this818 = v816;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t819 = this818;
  int* c820 = ((void*)0);
  t819->_M_start = c820;
  int* c821 = ((void*)0);
  t819->_M_finish = c821;
  int* c822 = ((void*)0);
  t819->_M_end_of_storage = c822;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v823) {
bb824:
  int* __location825;
  __location825 = v823;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v826, int* v827) {
bb828:
  int* __first829;
  int* __last830;
  __first829 = v826;
  __last830 = v827;
      _Bool r831 = std____is_constant_evaluated();
      if (r831) {
          while (1) {
            int* t833 = __first829;
            int* t834 = __last830;
            _Bool c835 = ((t833 != t834)) ? 1 : 0;
            if (!c835) break;
            int* t836 = __first829;
            void_std__destroy_at_int_(t836);
          for_step832: ;
            int* t837 = __first829;
            int c838 = 1;
            int* ptr839 = &(t837)[c838];
            __first829 = ptr839;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v840, int* v841, struct std__allocator_int_* v842) {
bb843:
  int* __first844;
  int* __last845;
  struct std__allocator_int_* unnamed846;
  __first844 = v840;
  __last845 = v841;
  unnamed846 = v842;
  int* t847 = __first844;
  int* t848 = __last845;
  void_std___Destroy_int__(t847, t848);
  return;
}

