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
char _str[6] = "x==10";
char _str_1[118] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm_swap-c++03/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[6] = "y==20";
char _str_3[6] = "x==20";
char _str_4[6] = "y==10";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_5[16] = "first contains:";
char _str_6[2] = " ";
char _str_7[49] = "cannot create std::vector larger than max_size()";
char _str_8[98] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_uninitialized.h";
char __PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_[140] = "_ForwardIterator std::__do_uninit_fill_n(_ForwardIterator, _Size _Tp &) [_ForwardIterator = int *, _Size = unsigned long, _Tp = int]";
char _str_9[9] = "__n >= 0";
_Bool _ZNSt17integral_constantIbLb0EE5valueE;
char _str_10[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4swapERS1_[93] = "void std::vector<int>::swap(vector<_Tp, _Alloc> &) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_11[104] = "_Alloc_traits::propagate_on_container_swap::value || _M_get_Tp_allocator() == __x._M_get_Tp_allocator()";
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
void std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(int* p0, int* p1);
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, int* p2, struct std__allocator_int_* p3);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
_Bool std__operator__(struct std__allocator_int_* p0, struct std__allocator_int_* p1);
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p0);
void std___Vector_base_int__std__allocator_int______Vector_impl_data___M_copy_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p0, struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p1);
void std___Vector_base_int__std__allocator_int______Vector_impl_data___M_swap_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p0, struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p1);
void void_std____alloc_on_swap_std__allocator_int___(struct std__allocator_int_* p0, struct std__allocator_int_* p1);
void __gnu_cxx____alloc_traits_std__allocator_int___int____S_on_swap(struct std__allocator_int_* p0, struct std__allocator_int_* p1);
void std__vector_int__std__allocator_int_____swap(struct std__vector_int__std__allocator_int__* p0, struct std__vector_int__std__allocator_int__* p1);
void void_std__swap_int__std__allocator_int___(struct std__vector_int__std__allocator_int__* p0, struct std__vector_int__std__allocator_int__* p1);
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
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
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
void void_std__destroy_at_int_(int* p0);
void void_std___Destroy_int__(int* p0, int* p1);
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);

// function: _ZSt4swapIiENSt9enable_ifIXsr6__and_ISt6__not_ISt15__is_tuple_likeIT_EESt21is_move_constructibleIS3_ESt18is_move_assignableIS3_EEE5valueEvE4typeERS3_SC_
void std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(int* v0, int* v1) {
bb2:
  int* __a3;
  int* __b4;
  int __tmp5;
  __a3 = v0;
  __b4 = v1;
  int* t6 = __a3;
  int t7 = *t6;
  __tmp5 = t7;
  int* t8 = __b4;
  int t9 = *t8;
  int* t10 = __a3;
  *t10 = t9;
  int t11 = __tmp5;
  int* t12 = __b4;
  *t12 = t11;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator_2(struct std__allocator_int_* v13) {
bb14:
  struct std__allocator_int_* this15;
  this15 = v13;
  struct std__allocator_int_* t16 = this15;
  struct std____new_allocator_int_* base17 = (struct std____new_allocator_int_*)((char *)t16 + 0);
  std____new_allocator_int_____new_allocator_2(base17);
  return;
}

// function: _ZNSt6vectorIiSaIiEEC2EmRKiRKS0_
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* v18, unsigned long v19, int* v20, struct std__allocator_int_* v21) {
bb22:
  struct std__vector_int__std__allocator_int__* this23;
  unsigned long __n24;
  int* __value25;
  struct std__allocator_int_* __a26;
  this23 = v18;
  __n24 = v19;
  __value25 = v20;
  __a26 = v21;
  struct std__vector_int__std__allocator_int__* t27 = this23;
  struct std___Vector_base_int__std__allocator_int__* base28 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t27 + 0);
  unsigned long t29 = __n24;
  struct std__allocator_int_* t30 = __a26;
  unsigned long r31 = std__vector_int__std__allocator_int______S_check_init_len(t29, t30);
  struct std__allocator_int_* t32 = __a26;
  std___Vector_base_int__std__allocator_int______Vector_base(base28, r31, t32);
    unsigned long t33 = __n24;
    int* t34 = __value25;
    std__vector_int__std__allocator_int______M_fill_initialize(t27, t33, t34);
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

// function: _ZSteqRKSaIiES1_
_Bool std__operator__(struct std__allocator_int_* v39, struct std__allocator_int_* v40) {
bb41:
  struct std__allocator_int_* unnamed42;
  struct std__allocator_int_* unnamed43;
  _Bool __retval44;
  unnamed42 = v39;
  unnamed43 = v40;
  _Bool c45 = 1;
  __retval44 = c45;
  _Bool t46 = __retval44;
  return t46;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v47) {
bb48:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this49;
  this49 = v47;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t50 = this49;
  int* c51 = ((void*)0);
  t50->_M_start = c51;
  int* c52 = ((void*)0);
  t50->_M_finish = c52;
  int* c53 = ((void*)0);
  t50->_M_end_of_storage = c53;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_data12_M_copy_dataERKS2_
void std___Vector_base_int__std__allocator_int______Vector_impl_data___M_copy_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v54, struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v55) {
bb56:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this57;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* __x58;
  this57 = v54;
  __x58 = v55;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t59 = this57;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t60 = __x58;
  int* t61 = t60->_M_start;
  t59->_M_start = t61;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t62 = __x58;
  int* t63 = t62->_M_finish;
  t59->_M_finish = t63;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t64 = __x58;
  int* t65 = t64->_M_end_of_storage;
  t59->_M_end_of_storage = t65;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_data12_M_swap_dataERS2_
void std___Vector_base_int__std__allocator_int______Vector_impl_data___M_swap_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v66, struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v67) {
bb68:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this69;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* __x70;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __tmp71;
  this69 = v66;
  __x70 = v67;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t72 = this69;
  std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(&__tmp71);
  std___Vector_base_int__std__allocator_int______Vector_impl_data___M_copy_data(&__tmp71, t72);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t73 = __x70;
  std___Vector_base_int__std__allocator_int______Vector_impl_data___M_copy_data(t72, t73);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t74 = __x70;
  std___Vector_base_int__std__allocator_int______Vector_impl_data___M_copy_data(t74, &__tmp71);
  return;
}

// function: _ZSt15__alloc_on_swapISaIiEEvRT_S2_
void void_std____alloc_on_swap_std__allocator_int___(struct std__allocator_int_* v75, struct std__allocator_int_* v76) {
bb77:
  struct std__allocator_int_* __one78;
  struct std__allocator_int_* __two79;
  __one78 = v75;
  __two79 = v76;
  return;
}

// function: _ZN9__gnu_cxx14__alloc_traitsISaIiEiE10_S_on_swapERS1_S3_
void __gnu_cxx____alloc_traits_std__allocator_int___int____S_on_swap(struct std__allocator_int_* v80, struct std__allocator_int_* v81) {
bb82:
  struct std__allocator_int_* __a83;
  struct std__allocator_int_* __b84;
  __a83 = v80;
  __b84 = v81;
  struct std__allocator_int_* t85 = __a83;
  struct std__allocator_int_* t86 = __b84;
  void_std____alloc_on_swap_std__allocator_int___(t85, t86);
  return;
}

// function: _ZNSt6vectorIiSaIiEE4swapERS1_
void std__vector_int__std__allocator_int_____swap(struct std__vector_int__std__allocator_int__* v87, struct std__vector_int__std__allocator_int__* v88) {
bb89:
  struct std__vector_int__std__allocator_int__* this90;
  struct std__vector_int__std__allocator_int__* __x91;
  this90 = v87;
  __x91 = v88;
  struct std__vector_int__std__allocator_int__* t92 = this90;
    do {
          _Bool t93 = _ZNSt17integral_constantIbLb0EE5valueE;
          _Bool ternary94;
          if (t93) {
            _Bool c95 = 1;
            ternary94 = (_Bool)c95;
          } else {
            struct std___Vector_base_int__std__allocator_int__* base96 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t92 + 0);
            struct std__allocator_int_* r97 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base96);
            struct std__vector_int__std__allocator_int__* t98 = __x91;
            struct std___Vector_base_int__std__allocator_int__* base99 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t98 + 0);
            struct std__allocator_int_* r100 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base99);
            _Bool r101 = std__operator__(r97, r100);
            ternary94 = (_Bool)r101;
          }
          _Bool u102 = !ternary94;
          if (u102) {
            char* cast103 = (char*)&(_str_10);
            int c104 = 1848;
            char* cast105 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4swapERS1_);
            char* cast106 = (char*)&(_str_11);
            std____glibcxx_assert_fail(cast103, c104, cast105, cast106);
          }
      _Bool c107 = 0;
      if (!c107) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base108 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t92 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base109 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base108->_M_impl) + 0);
  struct std__vector_int__std__allocator_int__* t110 = __x91;
  struct std___Vector_base_int__std__allocator_int__* base111 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t110 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base112 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base111->_M_impl) + 0);
  std___Vector_base_int__std__allocator_int______Vector_impl_data___M_swap_data(base109, base112);
  struct std___Vector_base_int__std__allocator_int__* base113 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t92 + 0);
  struct std__allocator_int_* r114 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base113);
  struct std__vector_int__std__allocator_int__* t115 = __x91;
  struct std___Vector_base_int__std__allocator_int__* base116 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t115 + 0);
  struct std__allocator_int_* r117 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base116);
  __gnu_cxx____alloc_traits_std__allocator_int___int____S_on_swap(r114, r117);
  return;
}

// function: _ZSt4swapIiSaIiEEvRSt6vectorIT_T0_ES5_
void void_std__swap_int__std__allocator_int___(struct std__vector_int__std__allocator_int__* v118, struct std__vector_int__std__allocator_int__* v119) {
bb120:
  struct std__vector_int__std__allocator_int__* __x121;
  struct std__vector_int__std__allocator_int__* __y122;
  __x121 = v118;
  __y122 = v119;
  struct std__vector_int__std__allocator_int__* t123 = __x121;
  struct std__vector_int__std__allocator_int__* t124 = __y122;
  std__vector_int__std__allocator_int_____swap(t123, t124);
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v125, int v126) {
bb127:
  int __a128;
  int __b129;
  int __retval130;
  __a128 = v125;
  __b129 = v126;
  int t131 = __a128;
  int t132 = __b129;
  int b133 = t131 | t132;
  __retval130 = b133;
  int t134 = __retval130;
  return t134;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v135) {
bb136:
  struct std__basic_ios_char__std__char_traits_char__* this137;
  int __retval138;
  this137 = v135;
  struct std__basic_ios_char__std__char_traits_char__* t139 = this137;
  struct std__ios_base* base140 = (struct std__ios_base*)((char *)t139 + 0);
  int t141 = base140->_M_streambuf_state;
  __retval138 = t141;
  int t142 = __retval138;
  return t142;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v143, int v144) {
bb145:
  struct std__basic_ios_char__std__char_traits_char__* this146;
  int __state147;
  this146 = v143;
  __state147 = v144;
  struct std__basic_ios_char__std__char_traits_char__* t148 = this146;
  int r149 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t148);
  int t150 = __state147;
  int r151 = std__operator_(r149, t150);
  std__basic_ios_char__std__char_traits_char_____clear(t148, r151);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v152, char* v153) {
bb154:
  char* __c1155;
  char* __c2156;
  _Bool __retval157;
  __c1155 = v152;
  __c2156 = v153;
  char* t158 = __c1155;
  char t159 = *t158;
  int cast160 = (int)t159;
  char* t161 = __c2156;
  char t162 = *t161;
  int cast163 = (int)t162;
  _Bool c164 = ((cast160 == cast163)) ? 1 : 0;
  __retval157 = c164;
  _Bool t165 = __retval157;
  return t165;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v166) {
bb167:
  char* __p168;
  unsigned long __retval169;
  unsigned long __i170;
  __p168 = v166;
  unsigned long c171 = 0;
  __i170 = c171;
    char ref_tmp0172;
    while (1) {
      unsigned long t173 = __i170;
      char* t174 = __p168;
      char* ptr175 = &(t174)[t173];
      char c176 = 0;
      ref_tmp0172 = c176;
      _Bool r177 = __gnu_cxx__char_traits_char___eq(ptr175, &ref_tmp0172);
      _Bool u178 = !r177;
      if (!u178) break;
      unsigned long t179 = __i170;
      unsigned long u180 = t179 + 1;
      __i170 = u180;
    }
  unsigned long t181 = __i170;
  __retval169 = t181;
  unsigned long t182 = __retval169;
  return t182;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v183) {
bb184:
  char* __s185;
  unsigned long __retval186;
  __s185 = v183;
    _Bool r187 = std____is_constant_evaluated();
    if (r187) {
      char* t188 = __s185;
      unsigned long r189 = __gnu_cxx__char_traits_char___length(t188);
      __retval186 = r189;
      unsigned long t190 = __retval186;
      return t190;
    }
  char* t191 = __s185;
  unsigned long r192 = strlen(t191);
  __retval186 = r192;
  unsigned long t193 = __retval186;
  return t193;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v194, char* v195) {
bb196:
  struct std__basic_ostream_char__std__char_traits_char__* __out197;
  char* __s198;
  struct std__basic_ostream_char__std__char_traits_char__* __retval199;
  __out197 = v194;
  __s198 = v195;
    char* t200 = __s198;
    _Bool cast201 = (_Bool)t200;
    _Bool u202 = !cast201;
    if (u202) {
      struct std__basic_ostream_char__std__char_traits_char__* t203 = __out197;
      void** v204 = (void**)t203;
      void* v205 = *((void**)v204);
      unsigned char* cast206 = (unsigned char*)v205;
      long c207 = -24;
      unsigned char* ptr208 = &(cast206)[c207];
      long* cast209 = (long*)ptr208;
      long t210 = *cast209;
      unsigned char* cast211 = (unsigned char*)t203;
      unsigned char* ptr212 = &(cast211)[t210];
      struct std__basic_ostream_char__std__char_traits_char__* cast213 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr212;
      struct std__basic_ios_char__std__char_traits_char__* cast214 = (struct std__basic_ios_char__std__char_traits_char__*)cast213;
      int t215 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast214, t215);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t216 = __out197;
      char* t217 = __s198;
      char* t218 = __s198;
      unsigned long r219 = std__char_traits_char___length(t218);
      long cast220 = (long)r219;
      struct std__basic_ostream_char__std__char_traits_char__* r221 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t216, t217, cast220);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t222 = __out197;
  __retval199 = t222;
  struct std__basic_ostream_char__std__char_traits_char__* t223 = __retval199;
  return t223;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v224, int** v225) {
bb226:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this227;
  int** __i228;
  this227 = v224;
  __i228 = v225;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t229 = this227;
  int** t230 = __i228;
  int* t231 = *t230;
  t229->_M_current = t231;
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v232) {
bb233:
  struct std__vector_int__std__allocator_int__* this234;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval235;
  this234 = v232;
  struct std__vector_int__std__allocator_int__* t236 = this234;
  struct std___Vector_base_int__std__allocator_int__* base237 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t236 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base238 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base237->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval235, &base238->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t239 = __retval235;
  return t239;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v240) {
bb241:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this242;
  int** __retval243;
  this242 = v240;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t244 = this242;
  __retval243 = &t244->_M_current;
  int** t245 = __retval243;
  return t245;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v246, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v247) {
bb248:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs249;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs250;
  _Bool __retval251;
  __lhs249 = v246;
  __rhs250 = v247;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t252 = __lhs249;
  int** r253 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t252);
  int* t254 = *r253;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t255 = __rhs250;
  int** r256 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t255);
  int* t257 = *r256;
  _Bool c258 = ((t254 == t257)) ? 1 : 0;
  __retval251 = c258;
  _Bool t259 = __retval251;
  return t259;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v260) {
bb261:
  struct std__vector_int__std__allocator_int__* this262;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval263;
  this262 = v260;
  struct std__vector_int__std__allocator_int__* t264 = this262;
  struct std___Vector_base_int__std__allocator_int__* base265 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t264 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base266 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base265->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval263, &base266->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t267 = __retval263;
  return t267;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v268) {
bb269:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this270;
  int* __retval271;
  this270 = v268;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t272 = this270;
  int* t273 = t272->_M_current;
  __retval271 = t273;
  int* t274 = __retval271;
  return t274;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v275) {
bb276:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this277;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval278;
  this277 = v275;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t279 = this277;
  int* t280 = t279->_M_current;
  int c281 = 1;
  int* ptr282 = &(t280)[c281];
  t279->_M_current = ptr282;
  __retval278 = t279;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t283 = __retval278;
  return t283;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v284, void* v285) {
bb286:
  struct std__basic_ostream_char__std__char_traits_char__* this287;
  void* __pf288;
  struct std__basic_ostream_char__std__char_traits_char__* __retval289;
  this287 = v284;
  __pf288 = v285;
  struct std__basic_ostream_char__std__char_traits_char__* t290 = this287;
  void* t291 = __pf288;
  struct std__basic_ostream_char__std__char_traits_char__* r292 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t291)(t290);
  __retval289 = r292;
  struct std__basic_ostream_char__std__char_traits_char__* t293 = __retval289;
  return t293;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v294) {
bb295:
  struct std__basic_ostream_char__std__char_traits_char__* __os296;
  struct std__basic_ostream_char__std__char_traits_char__* __retval297;
  __os296 = v294;
  struct std__basic_ostream_char__std__char_traits_char__* t298 = __os296;
  struct std__basic_ostream_char__std__char_traits_char__* r299 = std__ostream__flush(t298);
  __retval297 = r299;
  struct std__basic_ostream_char__std__char_traits_char__* t300 = __retval297;
  return t300;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v301) {
bb302:
  struct std__ctype_char_* __f303;
  struct std__ctype_char_* __retval304;
  __f303 = v301;
    struct std__ctype_char_* t305 = __f303;
    _Bool cast306 = (_Bool)t305;
    _Bool u307 = !cast306;
    if (u307) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t308 = __f303;
  __retval304 = t308;
  struct std__ctype_char_* t309 = __retval304;
  return t309;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v310, char v311) {
bb312:
  struct std__ctype_char_* this313;
  char __c314;
  char __retval315;
  this313 = v310;
  __c314 = v311;
  struct std__ctype_char_* t316 = this313;
    char t317 = t316->_M_widen_ok;
    _Bool cast318 = (_Bool)t317;
    if (cast318) {
      char t319 = __c314;
      unsigned char cast320 = (unsigned char)t319;
      unsigned long cast321 = (unsigned long)cast320;
      char t322 = t316->_M_widen[cast321];
      __retval315 = t322;
      char t323 = __retval315;
      return t323;
    }
  std__ctype_char____M_widen_init___const(t316);
  char t324 = __c314;
  void** v325 = (void**)t316;
  void* v326 = *((void**)v325);
  char vcall329 = (char)__VERIFIER_virtual_call_char_char(t316, 6, t324);
  __retval315 = vcall329;
  char t330 = __retval315;
  return t330;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v331, char v332) {
bb333:
  struct std__basic_ios_char__std__char_traits_char__* this334;
  char __c335;
  char __retval336;
  this334 = v331;
  __c335 = v332;
  struct std__basic_ios_char__std__char_traits_char__* t337 = this334;
  struct std__ctype_char_* t338 = t337->_M_ctype;
  struct std__ctype_char_* r339 = std__ctype_char__const__std____check_facet_std__ctype_char___(t338);
  char t340 = __c335;
  char r341 = std__ctype_char___widen_char__const(r339, t340);
  __retval336 = r341;
  char t342 = __retval336;
  return t342;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v343) {
bb344:
  struct std__basic_ostream_char__std__char_traits_char__* __os345;
  struct std__basic_ostream_char__std__char_traits_char__* __retval346;
  __os345 = v343;
  struct std__basic_ostream_char__std__char_traits_char__* t347 = __os345;
  struct std__basic_ostream_char__std__char_traits_char__* t348 = __os345;
  void** v349 = (void**)t348;
  void* v350 = *((void**)v349);
  unsigned char* cast351 = (unsigned char*)v350;
  long c352 = -24;
  unsigned char* ptr353 = &(cast351)[c352];
  long* cast354 = (long*)ptr353;
  long t355 = *cast354;
  unsigned char* cast356 = (unsigned char*)t348;
  unsigned char* ptr357 = &(cast356)[t355];
  struct std__basic_ostream_char__std__char_traits_char__* cast358 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr357;
  struct std__basic_ios_char__std__char_traits_char__* cast359 = (struct std__basic_ios_char__std__char_traits_char__*)cast358;
  char c360 = 10;
  char r361 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast359, c360);
  struct std__basic_ostream_char__std__char_traits_char__* r362 = std__ostream__put(t347, r361);
  struct std__basic_ostream_char__std__char_traits_char__* r363 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r362);
  __retval346 = r363;
  struct std__basic_ostream_char__std__char_traits_char__* t364 = __retval346;
  return t364;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v365) {
bb366:
  struct std__vector_int__std__allocator_int__* this367;
  this367 = v365;
  struct std__vector_int__std__allocator_int__* t368 = this367;
    struct std___Vector_base_int__std__allocator_int__* base369 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t368 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base370 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base369->_M_impl) + 0);
    int* t371 = base370->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base372 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t368 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base373 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base372->_M_impl) + 0);
    int* t374 = base373->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base375 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t368 + 0);
    struct std__allocator_int_* r376 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base375);
    void_std___Destroy_int___int_(t371, t374, r376);
  {
    struct std___Vector_base_int__std__allocator_int__* base377 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t368 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base377);
  }
  return;
}

// function: main
int main() {
bb378:
  int __retval379;
  int x380;
  int y381;
  struct std__vector_int__std__allocator_int__ first382;
  struct std__allocator_int_ ref_tmp0383;
  struct std__vector_int__std__allocator_int__ second384;
  struct std__allocator_int_ ref_tmp1385;
  int c386 = 0;
  __retval379 = c386;
  int c387 = 10;
  x380 = c387;
  int c388 = 20;
  y381 = c388;
  int t389 = x380;
  int c390 = 10;
  _Bool c391 = ((t389 == c390)) ? 1 : 0;
  if (c391) {
  } else {
    char* cast392 = (char*)&(_str);
    char* c393 = _str_1;
    unsigned int c394 = 19;
    char* cast395 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast392, c393, c394, cast395);
  }
  int t396 = y381;
  int c397 = 20;
  _Bool c398 = ((t396 == c397)) ? 1 : 0;
  if (c398) {
  } else {
    char* cast399 = (char*)&(_str_2);
    char* c400 = _str_1;
    unsigned int c401 = 20;
    char* cast402 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast399, c400, c401, cast402);
  }
  std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(&x380, &y381);
  int t403 = x380;
  int c404 = 20;
  _Bool c405 = ((t403 == c404)) ? 1 : 0;
  if (c405) {
  } else {
    char* cast406 = (char*)&(_str_3);
    char* c407 = _str_1;
    unsigned int c408 = 23;
    char* cast409 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast406, c407, c408, cast409);
  }
  int t410 = y381;
  int c411 = 10;
  _Bool c412 = ((t410 == c411)) ? 1 : 0;
  if (c412) {
  } else {
    char* cast413 = (char*)&(_str_4);
    char* c414 = _str_1;
    unsigned int c415 = 24;
    char* cast416 = (char*)&(__PRETTY_FUNCTION___main);
    __assert_fail(cast413, c414, c415, cast416);
  }
  unsigned long c417 = 4;
  std__allocator_int___allocator_2(&ref_tmp0383);
    std__vector_int__std__allocator_int_____vector(&first382, c417, &x380, &ref_tmp0383);
  {
    std__allocator_int____allocator(&ref_tmp0383);
  }
    unsigned long c418 = 6;
    std__allocator_int___allocator_2(&ref_tmp1385);
      std__vector_int__std__allocator_int_____vector(&second384, c418, &y381, &ref_tmp1385);
    {
      std__allocator_int____allocator(&ref_tmp1385);
    }
      void_std__swap_int__std__allocator_int___(&first382, &second384);
      char* cast419 = (char*)&(_str_5);
      struct std__basic_ostream_char__std__char_traits_char__* r420 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast419);
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it421;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp2422;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r423 = std__vector_int__std__allocator_int_____begin(&first382);
        it421 = r423;
        while (1) {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r425 = std__vector_int__std__allocator_int_____end(&first382);
          ref_tmp2422 = r425;
          _Bool r426 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it421, &ref_tmp2422);
          _Bool u427 = !r426;
          if (!u427) break;
          char* cast428 = (char*)&(_str_6);
          struct std__basic_ostream_char__std__char_traits_char__* r429 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast428);
          int* r430 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it421);
          int t431 = *r430;
          struct std__basic_ostream_char__std__char_traits_char__* r432 = std__ostream__operator__(r429, t431);
        for_step424: ;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r433 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&it421);
        }
      struct std__basic_ostream_char__std__char_traits_char__* r434 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      int c435 = 0;
      __retval379 = c435;
      int t436 = __retval379;
      int ret_val437 = t436;
      {
        std__vector_int__std__allocator_int______vector(&second384);
      }
      {
        std__vector_int__std__allocator_int______vector(&first382);
      }
      return ret_val437;
  int t438 = __retval379;
  return t438;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v439) {
bb440:
  struct std____new_allocator_int_* this441;
  this441 = v439;
  struct std____new_allocator_int_* t442 = this441;
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v443, unsigned long* v444) {
bb445:
  unsigned long* __a446;
  unsigned long* __b447;
  unsigned long* __retval448;
  __a446 = v443;
  __b447 = v444;
    unsigned long* t449 = __b447;
    unsigned long t450 = *t449;
    unsigned long* t451 = __a446;
    unsigned long t452 = *t451;
    _Bool c453 = ((t450 < t452)) ? 1 : 0;
    if (c453) {
      unsigned long* t454 = __b447;
      __retval448 = t454;
      unsigned long* t455 = __retval448;
      return t455;
    }
  unsigned long* t456 = __a446;
  __retval448 = t456;
  unsigned long* t457 = __retval448;
  return t457;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v458) {
bb459:
  struct std__allocator_int_* __a460;
  unsigned long __retval461;
  unsigned long __diffmax462;
  unsigned long __allocmax463;
  __a460 = v458;
  unsigned long c464 = 2305843009213693951;
  __diffmax462 = c464;
  unsigned long c465 = 4611686018427387903;
  __allocmax463 = c465;
  unsigned long* r466 = unsigned_long_const__std__min_unsigned_long_(&__diffmax462, &__allocmax463);
  unsigned long t467 = *r466;
  __retval461 = t467;
  unsigned long t468 = __retval461;
  return t468;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v469, struct std__allocator_int_* v470) {
bb471:
  struct std__allocator_int_* this472;
  struct std__allocator_int_* __a473;
  this472 = v469;
  __a473 = v470;
  struct std__allocator_int_* t474 = this472;
  struct std____new_allocator_int_* base475 = (struct std____new_allocator_int_*)((char *)t474 + 0);
  struct std__allocator_int_* t476 = __a473;
  struct std____new_allocator_int_* base477 = (struct std____new_allocator_int_*)((char *)t476 + 0);
  std____new_allocator_int_____new_allocator(base475, base477);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v478, struct std__allocator_int_* v479) {
bb480:
  unsigned long __n481;
  struct std__allocator_int_* __a482;
  unsigned long __retval483;
  __n481 = v478;
  __a482 = v479;
    struct std__allocator_int_ ref_tmp0484;
    _Bool tmp_exprcleanup485;
    unsigned long t486 = __n481;
    struct std__allocator_int_* t487 = __a482;
    std__allocator_int___allocator(&ref_tmp0484, t487);
      unsigned long r488 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp0484);
      _Bool c489 = ((t486 > r488)) ? 1 : 0;
      tmp_exprcleanup485 = c489;
    {
      std__allocator_int____allocator(&ref_tmp0484);
    }
    _Bool t490 = tmp_exprcleanup485;
    if (t490) {
      char* cast491 = (char*)&(_str_7);
      std____throw_length_error(cast491);
    }
  unsigned long t492 = __n481;
  __retval483 = t492;
  unsigned long t493 = __retval483;
  return t493;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v494, struct std__allocator_int_* v495) {
bb496:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this497;
  struct std__allocator_int_* __a498;
  this497 = v494;
  __a498 = v495;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t499 = this497;
  struct std__allocator_int_* base500 = (struct std__allocator_int_*)((char *)t499 + 0);
  struct std__allocator_int_* t501 = __a498;
  std__allocator_int___allocator(base500, t501);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base502 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t499 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base502);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb503:
  _Bool __retval504;
    _Bool c505 = 0;
    __retval504 = c505;
    _Bool t506 = __retval504;
    return t506;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v507) {
bb508:
  struct std____new_allocator_int_* this509;
  unsigned long __retval510;
  this509 = v507;
  struct std____new_allocator_int_* t511 = this509;
  unsigned long c512 = 9223372036854775807;
  unsigned long c513 = 4;
  unsigned long b514 = c512 / c513;
  __retval510 = b514;
  unsigned long t515 = __retval510;
  return t515;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v516, unsigned long v517, void* v518) {
bb519:
  struct std____new_allocator_int_* this520;
  unsigned long __n521;
  void* unnamed522;
  int* __retval523;
  this520 = v516;
  __n521 = v517;
  unnamed522 = v518;
  struct std____new_allocator_int_* t524 = this520;
    unsigned long t525 = __n521;
    unsigned long r526 = std____new_allocator_int____M_max_size___const(t524);
    _Bool c527 = ((t525 > r526)) ? 1 : 0;
    if (c527) {
        unsigned long t528 = __n521;
        unsigned long c529 = -1;
        unsigned long c530 = 4;
        unsigned long b531 = c529 / c530;
        _Bool c532 = ((t528 > b531)) ? 1 : 0;
        if (c532) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c533 = 4;
    unsigned long c534 = 16;
    _Bool c535 = ((c533 > c534)) ? 1 : 0;
    if (c535) {
      unsigned long __al536;
      unsigned long c537 = 4;
      __al536 = c537;
      unsigned long t538 = __n521;
      unsigned long c539 = 4;
      unsigned long b540 = t538 * c539;
      unsigned long t541 = __al536;
      void* r542 = operator_new_2(b540, t541);
      int* cast543 = (int*)r542;
      __retval523 = cast543;
      int* t544 = __retval523;
      return t544;
    }
  unsigned long t545 = __n521;
  unsigned long c546 = 4;
  unsigned long b547 = t545 * c546;
  void* r548 = operator_new(b547);
  int* cast549 = (int*)r548;
  __retval523 = cast549;
  int* t550 = __retval523;
  return t550;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v551, unsigned long v552) {
bb553:
  struct std__allocator_int_* this554;
  unsigned long __n555;
  int* __retval556;
  this554 = v551;
  __n555 = v552;
  struct std__allocator_int_* t557 = this554;
    _Bool r558 = std____is_constant_evaluated();
    if (r558) {
        unsigned long t559 = __n555;
        unsigned long c560 = 4;
        unsigned long ovr561;
        _Bool ovf562 = __builtin_mul_overflow(t559, c560, &ovr561);
        __n555 = ovr561;
        if (ovf562) {
          std____throw_bad_array_new_length();
        }
      unsigned long t563 = __n555;
      void* r564 = operator_new(t563);
      int* cast565 = (int*)r564;
      __retval556 = cast565;
      int* t566 = __retval556;
      return t566;
    }
  struct std____new_allocator_int_* base567 = (struct std____new_allocator_int_*)((char *)t557 + 0);
  unsigned long t568 = __n555;
  void* c569 = ((void*)0);
  int* r570 = std____new_allocator_int___allocate(base567, t568, c569);
  __retval556 = r570;
  int* t571 = __retval556;
  return t571;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v572, unsigned long v573) {
bb574:
  struct std__allocator_int_* __a575;
  unsigned long __n576;
  int* __retval577;
  __a575 = v572;
  __n576 = v573;
  struct std__allocator_int_* t578 = __a575;
  unsigned long t579 = __n576;
  int* r580 = std__allocator_int___allocate(t578, t579);
  __retval577 = r580;
  int* t581 = __retval577;
  return t581;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v582, unsigned long v583) {
bb584:
  struct std___Vector_base_int__std__allocator_int__* this585;
  unsigned long __n586;
  int* __retval587;
  this585 = v582;
  __n586 = v583;
  struct std___Vector_base_int__std__allocator_int__* t588 = this585;
  unsigned long t589 = __n586;
  unsigned long c590 = 0;
  _Bool c591 = ((t589 != c590)) ? 1 : 0;
  int* ternary592;
  if (c591) {
    struct std__allocator_int_* base593 = (struct std__allocator_int_*)((char *)&(t588->_M_impl) + 0);
    unsigned long t594 = __n586;
    int* r595 = std__allocator_traits_std__allocator_int_____allocate(base593, t594);
    ternary592 = (int*)r595;
  } else {
    int* c596 = ((void*)0);
    ternary592 = (int*)c596;
  }
  __retval587 = ternary592;
  int* t597 = __retval587;
  return t597;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* v598, unsigned long v599) {
bb600:
  struct std___Vector_base_int__std__allocator_int__* this601;
  unsigned long __n602;
  this601 = v598;
  __n602 = v599;
  struct std___Vector_base_int__std__allocator_int__* t603 = this601;
  unsigned long t604 = __n602;
  int* r605 = std___Vector_base_int__std__allocator_int______M_allocate(t603, t604);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base606 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t603->_M_impl) + 0);
  base606->_M_start = r605;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base607 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t603->_M_impl) + 0);
  int* t608 = base607->_M_start;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base609 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t603->_M_impl) + 0);
  base609->_M_finish = t608;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base610 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t603->_M_impl) + 0);
  int* t611 = base610->_M_start;
  unsigned long t612 = __n602;
  int* ptr613 = &(t611)[t612];
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base614 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t603->_M_impl) + 0);
  base614->_M_end_of_storage = ptr613;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v615) {
bb616:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this617;
  this617 = v615;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t618 = this617;
  {
    struct std__allocator_int_* base619 = (struct std__allocator_int_*)((char *)t618 + 0);
    std__allocator_int____allocator(base619);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v620, unsigned long v621, struct std__allocator_int_* v622) {
bb623:
  struct std___Vector_base_int__std__allocator_int__* this624;
  unsigned long __n625;
  struct std__allocator_int_* __a626;
  this624 = v620;
  __n625 = v621;
  __a626 = v622;
  struct std___Vector_base_int__std__allocator_int__* t627 = this624;
  struct std__allocator_int_* t628 = __a626;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t627->_M_impl, t628);
    unsigned long t629 = __n625;
    std___Vector_base_int__std__allocator_int______M_create_storage(t627, t629);
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb630:
  _Bool __retval631;
    _Bool c632 = 0;
    __retval631 = c632;
    _Bool t633 = __retval631;
    return t633;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v634, int** v635) {
bb636:
  struct std___UninitDestroyGuard_int____void_* this637;
  int** __first638;
  this637 = v634;
  __first638 = v635;
  struct std___UninitDestroyGuard_int____void_* t639 = this637;
  int** t640 = __first638;
  int* t641 = *t640;
  t639->_M_first = t641;
  int** t642 = __first638;
  t639->_M_cur = t642;
  return;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v643, int* v644) {
bb645:
  int* __location646;
  int* __args647;
  int* __retval648;
  void* __loc649;
  __location646 = v643;
  __args647 = v644;
  int* t650 = __location646;
  void* cast651 = (void*)t650;
  __loc649 = cast651;
    void* t652 = __loc649;
    int* cast653 = (int*)t652;
    int* t654 = __args647;
    int t655 = *t654;
    *cast653 = t655;
    __retval648 = cast653;
    int* t656 = __retval648;
    return t656;
  abort();
}

// function: _ZSt10_ConstructIiJRKiEEvPT_DpOT0_
void void_std___Construct_int__int_const__(int* v657, int* v658) {
bb659:
  int* __p660;
  int* __args661;
  __p660 = v657;
  __args661 = v658;
    _Bool r662 = std____is_constant_evaluated();
    if (r662) {
      int* t663 = __p660;
      int* t664 = __args661;
      int* r665 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t663, t664);
      return;
    }
  int* t666 = __p660;
  void* cast667 = (void*)t666;
  int* cast668 = (int*)cast667;
  int* t669 = __args661;
  int t670 = *t669;
  *cast668 = t670;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v671) {
bb672:
  struct std___UninitDestroyGuard_int____void_* this673;
  this673 = v671;
  struct std___UninitDestroyGuard_int____void_* t674 = this673;
  int** c675 = ((void*)0);
  t674->_M_cur = c675;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v676) {
bb677:
  struct std___UninitDestroyGuard_int____void_* this678;
  this678 = v676;
  struct std___UninitDestroyGuard_int____void_* t679 = this678;
    int** t680 = t679->_M_cur;
    int** c681 = ((void*)0);
    _Bool c682 = ((t680 != c681)) ? 1 : 0;
    if (c682) {
      int* t683 = t679->_M_first;
      int** t684 = t679->_M_cur;
      int* t685 = *t684;
      void_std___Destroy_int__(t683, t685);
    }
  return;
}

// function: _ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_
int* int__std____do_uninit_fill_n_int___unsigned_long__int_(int* v686, unsigned long v687, int* v688) {
bb689:
  int* __first690;
  unsigned long __n691;
  int* __x692;
  int* __retval693;
  struct std___UninitDestroyGuard_int____void_ __guard694;
  __first690 = v686;
  __n691 = v687;
  __x692 = v688;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard694, &__first690);
        do {
              unsigned long t695 = __n691;
              unsigned long c696 = 0;
              _Bool c697 = ((t695 >= c696)) ? 1 : 0;
              _Bool u698 = !c697;
              if (u698) {
                char* cast699 = (char*)&(_str_8);
                int c700 = 463;
                char* cast701 = (char*)&(__PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_);
                char* cast702 = (char*)&(_str_9);
                std____glibcxx_assert_fail(cast699, c700, cast701, cast702);
              }
          _Bool c703 = 0;
          if (!c703) break;
        } while (1);
      while (1) {
        unsigned long t705 = __n691;
        unsigned long u706 = t705 - 1;
        __n691 = u706;
        _Bool cast707 = (_Bool)t705;
        if (!cast707) break;
        int* t708 = __first690;
        int* t709 = __x692;
        void_std___Construct_int__int_const__(t708, t709);
      for_step704: ;
        int* t710 = __first690;
        int c711 = 1;
        int* ptr712 = &(t710)[c711];
        __first690 = ptr712;
      }
    std___UninitDestroyGuard_int___void___release(&__guard694);
    int* t713 = __first690;
    __retval693 = t713;
    int* t714 = __retval693;
    int* ret_val715 = t714;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard694);
    }
    return ret_val715;
  abort();
}

// function: _ZSt20uninitialized_fill_nIPimiET_S1_T0_RKT1_
int* int__std__uninitialized_fill_n_int___unsigned_long__int_(int* v716, unsigned long v717, int* v718) {
bb719:
  int* __first720;
  unsigned long __n721;
  int* __x722;
  int* __retval723;
  __first720 = v716;
  __n721 = v717;
  __x722 = v718;
  int* t724 = __first720;
  unsigned long t725 = __n721;
  int* t726 = __x722;
  int* r727 = int__std____do_uninit_fill_n_int___unsigned_long__int_(t724, t725, t726);
  __retval723 = r727;
  int* t728 = __retval723;
  return t728;
}

// function: _ZSt24__uninitialized_fill_n_aIPimiiET_S1_T0_RKT1_RSaIT2_E
int* int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(int* v729, unsigned long v730, int* v731, struct std__allocator_int_* v732) {
bb733:
  int* __first734;
  unsigned long __n735;
  int* __x736;
  struct std__allocator_int_* unnamed737;
  int* __retval738;
  __first734 = v729;
  __n735 = v730;
  __x736 = v731;
  unnamed737 = v732;
    _Bool r739 = std__is_constant_evaluated();
    if (r739) {
      int* t740 = __first734;
      unsigned long t741 = __n735;
      int* t742 = __x736;
      int* r743 = int__std____do_uninit_fill_n_int___unsigned_long__int_(t740, t741, t742);
      __retval738 = r743;
      int* t744 = __retval738;
      return t744;
    }
  int* t745 = __first734;
  unsigned long t746 = __n735;
  int* t747 = __x736;
  int* r748 = int__std__uninitialized_fill_n_int___unsigned_long__int_(t745, t746, t747);
  __retval738 = r748;
  int* t749 = __retval738;
  return t749;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v750) {
bb751:
  struct std___Vector_base_int__std__allocator_int__* this752;
  struct std__allocator_int_* __retval753;
  this752 = v750;
  struct std___Vector_base_int__std__allocator_int__* t754 = this752;
  struct std__allocator_int_* base755 = (struct std__allocator_int_*)((char *)&(t754->_M_impl) + 0);
  __retval753 = base755;
  struct std__allocator_int_* t756 = __retval753;
  return t756;
}

// function: _ZNSt6vectorIiSaIiEE18_M_fill_initializeEmRKi
void std__vector_int__std__allocator_int______M_fill_initialize(struct std__vector_int__std__allocator_int__* v757, unsigned long v758, int* v759) {
bb760:
  struct std__vector_int__std__allocator_int__* this761;
  unsigned long __n762;
  int* __value763;
  this761 = v757;
  __n762 = v758;
  __value763 = v759;
  struct std__vector_int__std__allocator_int__* t764 = this761;
  struct std___Vector_base_int__std__allocator_int__* base765 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t764 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base766 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base765->_M_impl) + 0);
  int* t767 = base766->_M_start;
  unsigned long t768 = __n762;
  int* t769 = __value763;
  struct std___Vector_base_int__std__allocator_int__* base770 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t764 + 0);
  struct std__allocator_int_* r771 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base770);
  int* r772 = int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(t767, t768, t769, r771);
  struct std___Vector_base_int__std__allocator_int__* base773 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t764 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base774 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base773->_M_impl) + 0);
  base774->_M_finish = r772;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v775, int* v776, unsigned long v777) {
bb778:
  struct std____new_allocator_int_* this779;
  int* __p780;
  unsigned long __n781;
  this779 = v775;
  __p780 = v776;
  __n781 = v777;
  struct std____new_allocator_int_* t782 = this779;
    unsigned long c783 = 4;
    unsigned long c784 = 16;
    _Bool c785 = ((c783 > c784)) ? 1 : 0;
    if (c785) {
      int* t786 = __p780;
      void* cast787 = (void*)t786;
      unsigned long t788 = __n781;
      unsigned long c789 = 4;
      unsigned long b790 = t788 * c789;
      unsigned long c791 = 4;
      operator_delete_3(cast787, b790, c791);
      return;
    }
  int* t792 = __p780;
  void* cast793 = (void*)t792;
  unsigned long t794 = __n781;
  unsigned long c795 = 4;
  unsigned long b796 = t794 * c795;
  operator_delete_2(cast793, b796);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v797, int* v798, unsigned long v799) {
bb800:
  struct std__allocator_int_* this801;
  int* __p802;
  unsigned long __n803;
  this801 = v797;
  __p802 = v798;
  __n803 = v799;
  struct std__allocator_int_* t804 = this801;
    _Bool r805 = std____is_constant_evaluated();
    if (r805) {
      int* t806 = __p802;
      void* cast807 = (void*)t806;
      operator_delete(cast807);
      return;
    }
  struct std____new_allocator_int_* base808 = (struct std____new_allocator_int_*)((char *)t804 + 0);
  int* t809 = __p802;
  unsigned long t810 = __n803;
  std____new_allocator_int___deallocate(base808, t809, t810);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v811, int* v812, unsigned long v813) {
bb814:
  struct std__allocator_int_* __a815;
  int* __p816;
  unsigned long __n817;
  __a815 = v811;
  __p816 = v812;
  __n817 = v813;
  struct std__allocator_int_* t818 = __a815;
  int* t819 = __p816;
  unsigned long t820 = __n817;
  std__allocator_int___deallocate(t818, t819, t820);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v821, int* v822, unsigned long v823) {
bb824:
  struct std___Vector_base_int__std__allocator_int__* this825;
  int* __p826;
  unsigned long __n827;
  this825 = v821;
  __p826 = v822;
  __n827 = v823;
  struct std___Vector_base_int__std__allocator_int__* t828 = this825;
    int* t829 = __p826;
    _Bool cast830 = (_Bool)t829;
    if (cast830) {
      struct std__allocator_int_* base831 = (struct std__allocator_int_*)((char *)&(t828->_M_impl) + 0);
      int* t832 = __p826;
      unsigned long t833 = __n827;
      std__allocator_traits_std__allocator_int_____deallocate(base831, t832, t833);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v834) {
bb835:
  struct std___Vector_base_int__std__allocator_int__* this836;
  this836 = v834;
  struct std___Vector_base_int__std__allocator_int__* t837 = this836;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base838 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t837->_M_impl) + 0);
    int* t839 = base838->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base840 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t837->_M_impl) + 0);
    int* t841 = base840->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base842 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t837->_M_impl) + 0);
    int* t843 = base842->_M_start;
    long diff844 = t841 - t843;
    unsigned long cast845 = (unsigned long)diff844;
    std___Vector_base_int__std__allocator_int______M_deallocate(t837, t839, cast845);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t837->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v846, struct std____new_allocator_int_* v847) {
bb848:
  struct std____new_allocator_int_* this849;
  struct std____new_allocator_int_* unnamed850;
  this849 = v846;
  unnamed850 = v847;
  struct std____new_allocator_int_* t851 = this849;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v852) {
bb853:
  int* __location854;
  __location854 = v852;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v855, int* v856) {
bb857:
  int* __first858;
  int* __last859;
  __first858 = v855;
  __last859 = v856;
      _Bool r860 = std____is_constant_evaluated();
      if (r860) {
          while (1) {
            int* t862 = __first858;
            int* t863 = __last859;
            _Bool c864 = ((t862 != t863)) ? 1 : 0;
            if (!c864) break;
            int* t865 = __first858;
            void_std__destroy_at_int_(t865);
          for_step861: ;
            int* t866 = __first858;
            int c867 = 1;
            int* ptr868 = &(t866)[c867];
            __first858 = ptr868;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v869, int* v870, struct std__allocator_int_* v871) {
bb872:
  int* __first873;
  int* __last874;
  struct std__allocator_int_* unnamed875;
  __first873 = v869;
  __last874 = v870;
  unnamed875 = v871;
  int* t876 = __first873;
  int* t877 = __last874;
  void_std___Destroy_int__(t876, t877);
  return;
}

