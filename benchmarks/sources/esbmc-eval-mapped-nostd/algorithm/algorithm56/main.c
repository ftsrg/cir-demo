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
struct __gnu_cxx____ops___Iter_less_iter { unsigned char __field0; };
struct __gnu_cxx____ops___Iter_less_val { unsigned char __field0; };
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
struct std__ranges____distance_fn { unsigned char __field0; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_myints[5] = {10, 20, 30, 5, 15};
struct __gnu_cxx____ops___Iter_less_val __const__ZSt13__adjust_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEliNS0_5__ops15_Iter_less_iterEEvT_T0_SA_T1_T2____cmp;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[22] = "initial max heap   : ";
char _str_1[11] = "v[0] == 30";
char _str_2[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm56/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[11] = "v[1] == 20";
char _str_4[11] = "v[2] == 10";
char _str_5[10] = "v[3] == 5";
char _str_6[11] = "v[4] == 15";
char _str_7[21] = "final sorted range :";
char _str_8[2] = " ";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_9[49] = "cannot create std::vector larger than max_size()";
char _str_10[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE5frontEv[78] = "reference std::vector<int>::front() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_11[15] = "!this->empty()";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_12[19] = "__n < this->size()";
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector_int___void_(struct std__vector_int__std__allocator_int__* p0, int* p1, int* p2, struct std__allocator_int_* p3);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
_Bool bool___gnu_cxx____ops___Iter_less_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(struct __gnu_cxx____ops___Iter_less_iter* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
_Bool bool___gnu_cxx____ops___Iter_less_val__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___const(struct __gnu_cxx____ops___Iter_less_val* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2);
void void_std____push_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_less_val_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, long p1, long p2, int p3, struct __gnu_cxx____ops___Iter_less_val* p4);
void void_std____adjust_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, long p1, long p2, int p3, struct __gnu_cxx____ops___Iter_less_iter p4);
void void_std____make_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____ops___Iter_less_iter* p2);
void void_std__make_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
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
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
int** __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0);
_Bool _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p1);
void __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin___const(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end___const(struct std__vector_int__std__allocator_int__* p0);
_Bool std__vector_int__std__allocator_int_____empty___const(struct std__vector_int__std__allocator_int__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
int* std__vector_int__std__allocator_int_____front(struct std__vector_int__std__allocator_int__* p0);
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
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
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

// function: _ZNSt6vectorIiSaIiEEC2IPivEET_S4_RKS0_
void std__vector_int__std__allocator_int_____vector_int___void_(struct std__vector_int__std__allocator_int__* v5, int* v6, int* v7, struct std__allocator_int_* v8) {
bb9:
  struct std__vector_int__std__allocator_int__* this10;
  int* __first11;
  int* __last12;
  struct std__allocator_int_* __a13;
  this10 = v5;
  __first11 = v6;
  __last12 = v7;
  __a13 = v8;
  struct std__vector_int__std__allocator_int__* t14 = this10;
  struct std___Vector_base_int__std__allocator_int__* base15 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t14 + 0);
  struct std__allocator_int_* t16 = __a13;
  std___Vector_base_int__std__allocator_int______Vector_base(base15, t16);
      unsigned long __n17;
      int* t18 = __last12;
      long r19 = _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_(&_ZNSt6ranges8distanceE, &__first11, t18);
      unsigned long cast20 = (unsigned long)r19;
      __n17 = cast20;
      int* t21 = __first11;
      int* t22 = __last12;
      unsigned long t23 = __n17;
      void_std__vector_int__std__allocator_int______M_range_initialize_n_int___int__(t14, t21, t22, t23);
      {
        struct std___Vector_base_int__std__allocator_int__* base24 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t14 + 0);
        std___Vector_base_int__std__allocator_int_______Vector_base(base24);
      }
      return;
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v25) {
bb26:
  struct std__allocator_int_* this27;
  this27 = v25;
  struct std__allocator_int_* t28 = this27;
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2Ev
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v29) {
bb30:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this31;
  this31 = v29;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t32 = this31;
  int* c33 = ((void*)0);
  t32->_M_current = c33;
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v34) {
bb35:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this36;
  int** __retval37;
  this36 = v34;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t38 = this36;
  __retval37 = &t38->_M_current;
  int** t39 = __retval37;
  return t39;
}

// function: _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v40, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v41) {
bb42:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs43;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs44;
  long __retval45;
  __lhs43 = v40;
  __rhs44 = v41;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t46 = __lhs43;
  int** r47 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t46);
  int* t48 = *r47;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t49 = __rhs44;
  int** r50 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t49);
  int* t51 = *r50;
  long diff52 = t48 - t51;
  __retval45 = diff52;
  long t53 = __retval45;
  return t53;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v54, int** v55) {
bb56:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this57;
  int** __i58;
  this57 = v54;
  __i58 = v55;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t59 = this57;
  int** t60 = __i58;
  int* t61 = *t60;
  t59->_M_current = t61;
  return;
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

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v74) {
bb75:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this76;
  int* __retval77;
  this76 = v74;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t78 = this76;
  int* t79 = t78->_M_current;
  __retval77 = t79;
  int* t80 = __retval77;
  return t80;
}

// function: _ZNK9__gnu_cxx5__ops15_Iter_less_iterclINS_17__normal_iteratorIPiSt6vectorIiSaIiEEEES8_EEbT_T0_
_Bool bool___gnu_cxx____ops___Iter_less_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(struct __gnu_cxx____ops___Iter_less_iter* v81, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v82, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v83) {
bb84:
  struct __gnu_cxx____ops___Iter_less_iter* this85;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it186;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it287;
  _Bool __retval88;
  this85 = v81;
  __it186 = v82;
  __it287 = v83;
  struct __gnu_cxx____ops___Iter_less_iter* t89 = this85;
  int* r90 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it186);
  int t91 = *r90;
  int* r92 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it287);
  int t93 = *r92;
  _Bool c94 = ((t91 < t93)) ? 1 : 0;
  __retval88 = c94;
  _Bool t95 = __retval88;
  return t95;
}

// function: _ZNK9__gnu_cxx5__ops14_Iter_less_valclINS_17__normal_iteratorIPiSt6vectorIiSaIiEEEEiEEbT_RT0_
_Bool bool___gnu_cxx____ops___Iter_less_val__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___const(struct __gnu_cxx____ops___Iter_less_val* v96, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v97, int* v98) {
bb99:
  struct __gnu_cxx____ops___Iter_less_val* this100;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it101;
  int* __val102;
  _Bool __retval103;
  this100 = v96;
  __it101 = v97;
  __val102 = v98;
  struct __gnu_cxx____ops___Iter_less_val* t104 = this100;
  int* r105 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it101);
  int t106 = *r105;
  int* t107 = __val102;
  int t108 = *t107;
  _Bool c109 = ((t106 < t108)) ? 1 : 0;
  __retval103 = c109;
  _Bool t110 = __retval103;
  return t110;
}

// function: _ZSt11__push_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEliNS0_5__ops14_Iter_less_valEEvT_T0_SA_T1_RT2_
void void_std____push_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_less_val_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v111, long v112, long v113, int v114, struct __gnu_cxx____ops___Iter_less_val* v115) {
bb116:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first117;
  long __holeIndex118;
  long __topIndex119;
  int __value120;
  struct __gnu_cxx____ops___Iter_less_val* __comp121;
  long __parent122;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp2123;
  __first117 = v111;
  __holeIndex118 = v112;
  __topIndex119 = v113;
  __value120 = v114;
  __comp121 = v115;
  long t124 = __holeIndex118;
  long c125 = 1;
  long b126 = t124 - c125;
  long c127 = 2;
  long b128 = b126 / c127;
  __parent122 = b128;
    while (1) {
      long t129 = __holeIndex118;
      long t130 = __topIndex119;
      _Bool c131 = ((t129 > t130)) ? 1 : 0;
      _Bool ternary132;
      if (c131) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0133;
        struct __gnu_cxx____ops___Iter_less_val* t134 = __comp121;
        long t135 = __parent122;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r136 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first117, t135);
        agg_tmp0133 = r136;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t137 = agg_tmp0133;
        _Bool r138 = bool___gnu_cxx____ops___Iter_less_val__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___const(t134, t137, &__value120);
        ternary132 = (_Bool)r138;
      } else {
        _Bool c139 = 0;
        ternary132 = (_Bool)c139;
      }
      if (!ternary132) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0140;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1141;
        long t142 = __parent122;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r143 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first117, t142);
        ref_tmp0140 = r143;
        int* r144 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0140);
        int t145 = *r144;
        long t146 = __holeIndex118;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r147 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first117, t146);
        ref_tmp1141 = r147;
        int* r148 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp1141);
        *r148 = t145;
        long t149 = __parent122;
        __holeIndex118 = t149;
        long t150 = __holeIndex118;
        long c151 = 1;
        long b152 = t150 - c151;
        long c153 = 2;
        long b154 = b152 / c153;
        __parent122 = b154;
    }
  int t155 = __value120;
  long t156 = __holeIndex118;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r157 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first117, t156);
  ref_tmp2123 = r157;
  int* r158 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp2123);
  *r158 = t155;
  return;
}

// function: _ZSt13__adjust_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEliNS0_5__ops15_Iter_less_iterEEvT_T0_SA_T1_T2_
void void_std____adjust_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v159, long v160, long v161, int v162, struct __gnu_cxx____ops___Iter_less_iter v163) {
bb164:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first165;
  long __holeIndex166;
  long __len167;
  int __value168;
  struct __gnu_cxx____ops___Iter_less_iter __comp169;
  long __topIndex170;
  long __secondChild171;
  struct __gnu_cxx____ops___Iter_less_val __cmp172;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2173;
  __first165 = v159;
  __holeIndex166 = v160;
  __len167 = v161;
  __value168 = v162;
  __comp169 = v163;
  long t174 = __holeIndex166;
  __topIndex170 = t174;
  long t175 = __holeIndex166;
  __secondChild171 = t175;
    while (1) {
      long t176 = __secondChild171;
      long t177 = __len167;
      long c178 = 1;
      long b179 = t177 - c178;
      long c180 = 2;
      long b181 = b179 / c180;
      _Bool c182 = ((t176 < b181)) ? 1 : 0;
      if (!c182) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0183;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1184;
        long c185 = 2;
        long t186 = __secondChild171;
        long c187 = 1;
        long b188 = t186 + c187;
        long b189 = c185 * b188;
        __secondChild171 = b189;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0190;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1191;
          long t192 = __secondChild171;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r193 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first165, t192);
          agg_tmp0190 = r193;
          long t194 = __secondChild171;
          long c195 = 1;
          long b196 = t194 - c195;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r197 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first165, b196);
          agg_tmp1191 = r197;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t198 = agg_tmp0190;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t199 = agg_tmp1191;
          _Bool r200 = bool___gnu_cxx____ops___Iter_less_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(&__comp169, t198, t199);
          if (r200) {
            long t201 = __secondChild171;
            long u202 = t201 - 1;
            __secondChild171 = u202;
          }
        long t203 = __secondChild171;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r204 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first165, t203);
        ref_tmp0183 = r204;
        int* r205 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0183);
        int t206 = *r205;
        long t207 = __holeIndex166;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r208 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first165, t207);
        ref_tmp1184 = r208;
        int* r209 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp1184);
        *r209 = t206;
        long t210 = __secondChild171;
        __holeIndex166 = t210;
    }
    long t211 = __len167;
    long c212 = 1;
    long b213 = t211 & c212;
    long c214 = 0;
    _Bool c215 = ((b213 == c214)) ? 1 : 0;
    _Bool ternary216;
    if (c215) {
      long t217 = __secondChild171;
      long t218 = __len167;
      long c219 = 2;
      long b220 = t218 - c219;
      long c221 = 2;
      long b222 = b220 / c221;
      _Bool c223 = ((t217 == b222)) ? 1 : 0;
      ternary216 = (_Bool)c223;
    } else {
      _Bool c224 = 0;
      ternary216 = (_Bool)c224;
    }
    if (ternary216) {
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp2225;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp3226;
      long c227 = 2;
      long t228 = __secondChild171;
      long c229 = 1;
      long b230 = t228 + c229;
      long b231 = c227 * b230;
      __secondChild171 = b231;
      long t232 = __secondChild171;
      long c233 = 1;
      long b234 = t232 - c233;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r235 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first165, b234);
      ref_tmp2225 = r235;
      int* r236 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp2225);
      int t237 = *r236;
      long t238 = __holeIndex166;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r239 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first165, t238);
      ref_tmp3226 = r239;
      int* r240 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp3226);
      *r240 = t237;
      long t241 = __secondChild171;
      long c242 = 1;
      long b243 = t241 - c242;
      __holeIndex166 = b243;
    }
  __cmp172 = *&__const__ZSt13__adjust_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEliNS0_5__ops15_Iter_less_iterEEvT_T0_SA_T1_T2____cmp; // copy
  agg_tmp2173 = __first165; // copy
  long t244 = __holeIndex166;
  long t245 = __topIndex170;
  int t246 = __value168;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t247 = agg_tmp2173;
  void_std____push_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_less_val_(t247, t244, t245, t246, &__cmp172);
  return;
}

// function: _ZSt11__make_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_less_iterEEvT_S9_RT0_
void void_std____make_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v248, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v249, struct __gnu_cxx____ops___Iter_less_iter* v250) {
bb251:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first252;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last253;
  struct __gnu_cxx____ops___Iter_less_iter* __comp254;
  long __len255;
  long __parent256;
  __first252 = v248;
  __last253 = v249;
  __comp254 = v250;
    long r257 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last253, &__first252);
    long c258 = 2;
    _Bool c259 = ((r257 < c258)) ? 1 : 0;
    if (c259) {
      return;
    }
  long r260 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last253, &__first252);
  __len255 = r260;
  long t261 = __len255;
  long c262 = 2;
  long b263 = t261 - c262;
  long c264 = 2;
  long b265 = b263 / c264;
  __parent256 = b265;
    while (1) {
      _Bool c266 = 1;
      if (!c266) break;
        int __value267;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0268;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0269;
        struct __gnu_cxx____ops___Iter_less_iter agg_tmp1270;
        long t271 = __parent256;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r272 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first252, t271);
        ref_tmp0268 = r272;
        int* r273 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0268);
        int t274 = *r273;
        __value267 = t274;
        agg_tmp0269 = __first252; // copy
        long t275 = __parent256;
        long t276 = __len255;
        int t277 = __value267;
        struct __gnu_cxx____ops___Iter_less_iter* t278 = __comp254;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t279 = agg_tmp0269;
        struct __gnu_cxx____ops___Iter_less_iter t280 = agg_tmp1270;
        void_std____adjust_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_less_iter_(t279, t275, t276, t277, t280);
          long t281 = __parent256;
          long c282 = 0;
          _Bool c283 = ((t281 == c282)) ? 1 : 0;
          if (c283) {
            return;
          }
        long t284 = __parent256;
        long u285 = t284 - 1;
        __parent256 = u285;
    }
  return;
}

// function: _ZSt9make_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEvT_S7_
void void_std__make_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v286, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v287) {
bb288:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first289;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last290;
  struct __gnu_cxx____ops___Iter_less_iter __comp291;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0292;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1293;
  __first289 = v286;
  __last290 = v287;
  agg_tmp0292 = __first289; // copy
  agg_tmp1293 = __last290; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t294 = agg_tmp0292;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t295 = agg_tmp1293;
  void_std____make_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(t294, t295, &__comp291);
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v296) {
bb297:
  struct std__vector_int__std__allocator_int__* this298;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval299;
  this298 = v296;
  struct std__vector_int__std__allocator_int__* t300 = this298;
  struct std___Vector_base_int__std__allocator_int__* base301 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t300 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base302 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base301->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval299, &base302->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t303 = __retval299;
  return t303;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v304) {
bb305:
  struct std__vector_int__std__allocator_int__* this306;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval307;
  this306 = v304;
  struct std__vector_int__std__allocator_int__* t308 = this306;
  struct std___Vector_base_int__std__allocator_int__* base309 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t308 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base310 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base309->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval307, &base310->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t311 = __retval307;
  return t311;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v312, int v313) {
bb314:
  int __a315;
  int __b316;
  int __retval317;
  __a315 = v312;
  __b316 = v313;
  int t318 = __a315;
  int t319 = __b316;
  int b320 = t318 | t319;
  __retval317 = b320;
  int t321 = __retval317;
  return t321;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v322) {
bb323:
  struct std__basic_ios_char__std__char_traits_char__* this324;
  int __retval325;
  this324 = v322;
  struct std__basic_ios_char__std__char_traits_char__* t326 = this324;
  struct std__ios_base* base327 = (struct std__ios_base*)((char *)t326 + 0);
  int t328 = base327->_M_streambuf_state;
  __retval325 = t328;
  int t329 = __retval325;
  return t329;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v330, int v331) {
bb332:
  struct std__basic_ios_char__std__char_traits_char__* this333;
  int __state334;
  this333 = v330;
  __state334 = v331;
  struct std__basic_ios_char__std__char_traits_char__* t335 = this333;
  int r336 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t335);
  int t337 = __state334;
  int r338 = std__operator_(r336, t337);
  std__basic_ios_char__std__char_traits_char_____clear(t335, r338);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v339, char* v340) {
bb341:
  char* __c1342;
  char* __c2343;
  _Bool __retval344;
  __c1342 = v339;
  __c2343 = v340;
  char* t345 = __c1342;
  char t346 = *t345;
  int cast347 = (int)t346;
  char* t348 = __c2343;
  char t349 = *t348;
  int cast350 = (int)t349;
  _Bool c351 = ((cast347 == cast350)) ? 1 : 0;
  __retval344 = c351;
  _Bool t352 = __retval344;
  return t352;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v353) {
bb354:
  char* __p355;
  unsigned long __retval356;
  unsigned long __i357;
  __p355 = v353;
  unsigned long c358 = 0;
  __i357 = c358;
    char ref_tmp0359;
    while (1) {
      unsigned long t360 = __i357;
      char* t361 = __p355;
      char* ptr362 = &(t361)[t360];
      char c363 = 0;
      ref_tmp0359 = c363;
      _Bool r364 = __gnu_cxx__char_traits_char___eq(ptr362, &ref_tmp0359);
      _Bool u365 = !r364;
      if (!u365) break;
      unsigned long t366 = __i357;
      unsigned long u367 = t366 + 1;
      __i357 = u367;
    }
  unsigned long t368 = __i357;
  __retval356 = t368;
  unsigned long t369 = __retval356;
  return t369;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v370) {
bb371:
  char* __s372;
  unsigned long __retval373;
  __s372 = v370;
    _Bool r374 = std____is_constant_evaluated();
    if (r374) {
      char* t375 = __s372;
      unsigned long r376 = __gnu_cxx__char_traits_char___length(t375);
      __retval373 = r376;
      unsigned long t377 = __retval373;
      return t377;
    }
  char* t378 = __s372;
  unsigned long r379 = strlen(t378);
  __retval373 = r379;
  unsigned long t380 = __retval373;
  return t380;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v381, char* v382) {
bb383:
  struct std__basic_ostream_char__std__char_traits_char__* __out384;
  char* __s385;
  struct std__basic_ostream_char__std__char_traits_char__* __retval386;
  __out384 = v381;
  __s385 = v382;
    char* t387 = __s385;
    _Bool cast388 = (_Bool)t387;
    _Bool u389 = !cast388;
    if (u389) {
      struct std__basic_ostream_char__std__char_traits_char__* t390 = __out384;
      void** v391 = (void**)t390;
      void* v392 = *((void**)v391);
      unsigned char* cast393 = (unsigned char*)v392;
      long c394 = -24;
      unsigned char* ptr395 = &(cast393)[c394];
      long* cast396 = (long*)ptr395;
      long t397 = *cast396;
      unsigned char* cast398 = (unsigned char*)t390;
      unsigned char* ptr399 = &(cast398)[t397];
      struct std__basic_ostream_char__std__char_traits_char__* cast400 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr399;
      struct std__basic_ios_char__std__char_traits_char__* cast401 = (struct std__basic_ios_char__std__char_traits_char__*)cast400;
      int t402 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast401, t402);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t403 = __out384;
      char* t404 = __s385;
      char* t405 = __s385;
      unsigned long r406 = std__char_traits_char___length(t405);
      long cast407 = (long)r406;
      struct std__basic_ostream_char__std__char_traits_char__* r408 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t403, t404, cast407);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t409 = __out384;
  __retval386 = t409;
  struct std__basic_ostream_char__std__char_traits_char__* t410 = __retval386;
  return t410;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v411) {
bb412:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this413;
  int** __retval414;
  this413 = v411;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t415 = this413;
  __retval414 = &t415->_M_current;
  int** t416 = __retval414;
  return t416;
}

// function: _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v417, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v418) {
bb419:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __lhs420;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __rhs421;
  _Bool __retval422;
  __lhs420 = v417;
  __rhs421 = v418;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t423 = __lhs420;
  int** r424 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t423);
  int* t425 = *r424;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t426 = __rhs421;
  int** r427 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t426);
  int* t428 = *r427;
  _Bool c429 = ((t425 == t428)) ? 1 : 0;
  __retval422 = c429;
  _Bool t430 = __retval422;
  return t430;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2ERKS2_
void __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v431, int** v432) {
bb433:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this434;
  int** __i435;
  this434 = v431;
  __i435 = v432;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t436 = this434;
  int** t437 = __i435;
  int* t438 = *t437;
  t436->_M_current = t438;
  return;
}

// function: _ZNKSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin___const(struct std__vector_int__std__allocator_int__* v439) {
bb440:
  struct std__vector_int__std__allocator_int__* this441;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval442;
  this441 = v439;
  struct std__vector_int__std__allocator_int__* t443 = this441;
  struct std___Vector_base_int__std__allocator_int__* base444 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t443 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base445 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base444->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval442, &base445->_M_start);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t446 = __retval442;
  return t446;
}

// function: _ZNKSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end___const(struct std__vector_int__std__allocator_int__* v447) {
bb448:
  struct std__vector_int__std__allocator_int__* this449;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval450;
  this449 = v447;
  struct std__vector_int__std__allocator_int__* t451 = this449;
  struct std___Vector_base_int__std__allocator_int__* base452 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t451 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base453 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base452->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval450, &base453->_M_finish);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t454 = __retval450;
  return t454;
}

// function: _ZNKSt6vectorIiSaIiEE5emptyEv
_Bool std__vector_int__std__allocator_int_____empty___const(struct std__vector_int__std__allocator_int__* v455) {
bb456:
  struct std__vector_int__std__allocator_int__* this457;
  _Bool __retval458;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp0459;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp1460;
  this457 = v455;
  struct std__vector_int__std__allocator_int__* t461 = this457;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r462 = std__vector_int__std__allocator_int_____begin___const(t461);
  ref_tmp0459 = r462;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r463 = std__vector_int__std__allocator_int_____end___const(t461);
  ref_tmp1460 = r463;
  _Bool r464 = _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&ref_tmp0459, &ref_tmp1460);
  __retval458 = r464;
  _Bool t465 = __retval458;
  return t465;
}

// function: _ZNSt6vectorIiSaIiEE5frontEv
int* std__vector_int__std__allocator_int_____front(struct std__vector_int__std__allocator_int__* v466) {
bb467:
  struct std__vector_int__std__allocator_int__* this468;
  int* __retval469;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0470;
  this468 = v466;
  struct std__vector_int__std__allocator_int__* t471 = this468;
    do {
          _Bool r472 = std__vector_int__std__allocator_int_____empty___const(t471);
          if (r472) {
            char* cast473 = (char*)&(_str_10);
            int c474 = 1346;
            char* cast475 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE5frontEv);
            char* cast476 = (char*)&(_str_11);
            std____glibcxx_assert_fail(cast473, c474, cast475, cast476);
          }
      _Bool c477 = 0;
      if (!c477) break;
    } while (1);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r478 = std__vector_int__std__allocator_int_____begin(t471);
  ref_tmp0470 = r478;
  int* r479 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0470);
  __retval469 = r479;
  int* t480 = __retval469;
  return t480;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v481, void* v482) {
bb483:
  struct std__basic_ostream_char__std__char_traits_char__* this484;
  void* __pf485;
  struct std__basic_ostream_char__std__char_traits_char__* __retval486;
  this484 = v481;
  __pf485 = v482;
  struct std__basic_ostream_char__std__char_traits_char__* t487 = this484;
  void* t488 = __pf485;
  struct std__basic_ostream_char__std__char_traits_char__* r489 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t488)(t487);
  __retval486 = r489;
  struct std__basic_ostream_char__std__char_traits_char__* t490 = __retval486;
  return t490;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v491) {
bb492:
  struct std__basic_ostream_char__std__char_traits_char__* __os493;
  struct std__basic_ostream_char__std__char_traits_char__* __retval494;
  __os493 = v491;
  struct std__basic_ostream_char__std__char_traits_char__* t495 = __os493;
  struct std__basic_ostream_char__std__char_traits_char__* r496 = std__ostream__flush(t495);
  __retval494 = r496;
  struct std__basic_ostream_char__std__char_traits_char__* t497 = __retval494;
  return t497;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v498) {
bb499:
  struct std__ctype_char_* __f500;
  struct std__ctype_char_* __retval501;
  __f500 = v498;
    struct std__ctype_char_* t502 = __f500;
    _Bool cast503 = (_Bool)t502;
    _Bool u504 = !cast503;
    if (u504) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t505 = __f500;
  __retval501 = t505;
  struct std__ctype_char_* t506 = __retval501;
  return t506;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v507, char v508) {
bb509:
  struct std__ctype_char_* this510;
  char __c511;
  char __retval512;
  this510 = v507;
  __c511 = v508;
  struct std__ctype_char_* t513 = this510;
    char t514 = t513->_M_widen_ok;
    _Bool cast515 = (_Bool)t514;
    if (cast515) {
      char t516 = __c511;
      unsigned char cast517 = (unsigned char)t516;
      unsigned long cast518 = (unsigned long)cast517;
      char t519 = t513->_M_widen[cast518];
      __retval512 = t519;
      char t520 = __retval512;
      return t520;
    }
  std__ctype_char____M_widen_init___const(t513);
  char t521 = __c511;
  void** v522 = (void**)t513;
  void* v523 = *((void**)v522);
  char vcall526 = (char)__VERIFIER_virtual_call_char_char(t513, 6, t521);
  __retval512 = vcall526;
  char t527 = __retval512;
  return t527;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v528, char v529) {
bb530:
  struct std__basic_ios_char__std__char_traits_char__* this531;
  char __c532;
  char __retval533;
  this531 = v528;
  __c532 = v529;
  struct std__basic_ios_char__std__char_traits_char__* t534 = this531;
  struct std__ctype_char_* t535 = t534->_M_ctype;
  struct std__ctype_char_* r536 = std__ctype_char__const__std____check_facet_std__ctype_char___(t535);
  char t537 = __c532;
  char r538 = std__ctype_char___widen_char__const(r536, t537);
  __retval533 = r538;
  char t539 = __retval533;
  return t539;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v540) {
bb541:
  struct std__basic_ostream_char__std__char_traits_char__* __os542;
  struct std__basic_ostream_char__std__char_traits_char__* __retval543;
  __os542 = v540;
  struct std__basic_ostream_char__std__char_traits_char__* t544 = __os542;
  struct std__basic_ostream_char__std__char_traits_char__* t545 = __os542;
  void** v546 = (void**)t545;
  void* v547 = *((void**)v546);
  unsigned char* cast548 = (unsigned char*)v547;
  long c549 = -24;
  unsigned char* ptr550 = &(cast548)[c549];
  long* cast551 = (long*)ptr550;
  long t552 = *cast551;
  unsigned char* cast553 = (unsigned char*)t545;
  unsigned char* ptr554 = &(cast553)[t552];
  struct std__basic_ostream_char__std__char_traits_char__* cast555 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr554;
  struct std__basic_ios_char__std__char_traits_char__* cast556 = (struct std__basic_ios_char__std__char_traits_char__*)cast555;
  char c557 = 10;
  char r558 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast556, c557);
  struct std__basic_ostream_char__std__char_traits_char__* r559 = std__ostream__put(t544, r558);
  struct std__basic_ostream_char__std__char_traits_char__* r560 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r559);
  __retval543 = r560;
  struct std__basic_ostream_char__std__char_traits_char__* t561 = __retval543;
  return t561;
}

// function: _ZNSt6vectorIiSaIiEEixEm
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* v562, unsigned long v563) {
bb564:
  struct std__vector_int__std__allocator_int__* this565;
  unsigned long __n566;
  int* __retval567;
  this565 = v562;
  __n566 = v563;
  struct std__vector_int__std__allocator_int__* t568 = this565;
    do {
          unsigned long t569 = __n566;
          unsigned long r570 = std__vector_int__std__allocator_int_____size___const(t568);
          _Bool c571 = ((t569 < r570)) ? 1 : 0;
          _Bool u572 = !c571;
          if (u572) {
            char* cast573 = (char*)&(_str_10);
            int c574 = 1263;
            char* cast575 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm);
            char* cast576 = (char*)&(_str_12);
            std____glibcxx_assert_fail(cast573, c574, cast575, cast576);
          }
      _Bool c577 = 0;
      if (!c577) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base578 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t568 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base579 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base578->_M_impl) + 0);
  int* t580 = base579->_M_start;
  unsigned long t581 = __n566;
  int* ptr582 = &(t580)[t581];
  __retval567 = ptr582;
  int* t583 = __retval567;
  return t583;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v584) {
bb585:
  struct std__vector_int__std__allocator_int__* this586;
  unsigned long __retval587;
  long __dif588;
  this586 = v584;
  struct std__vector_int__std__allocator_int__* t589 = this586;
  struct std___Vector_base_int__std__allocator_int__* base590 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t589 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base591 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base590->_M_impl) + 0);
  int* t592 = base591->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base593 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t589 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base594 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base593->_M_impl) + 0);
  int* t595 = base594->_M_start;
  long diff596 = t592 - t595;
  __dif588 = diff596;
    long t597 = __dif588;
    long c598 = 0;
    _Bool c599 = ((t597 < c598)) ? 1 : 0;
    if (c599) {
      __builtin_unreachable();
    }
  long t600 = __dif588;
  unsigned long cast601 = (unsigned long)t600;
  __retval587 = cast601;
  unsigned long t602 = __retval587;
  return t602;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v603) {
bb604:
  struct std__vector_int__std__allocator_int__* this605;
  this605 = v603;
  struct std__vector_int__std__allocator_int__* t606 = this605;
    struct std___Vector_base_int__std__allocator_int__* base607 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t606 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base608 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base607->_M_impl) + 0);
    int* t609 = base608->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base610 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t606 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base611 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base610->_M_impl) + 0);
    int* t612 = base611->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base613 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t606 + 0);
    struct std__allocator_int_* r614 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base613);
    void_std___Destroy_int___int_(t609, t612, r614);
  {
    struct std___Vector_base_int__std__allocator_int__* base615 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t606 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base615);
  }
  return;
}

// function: main
int main() {
bb616:
  int __retval617;
  int myints618[5];
  struct std__vector_int__std__allocator_int__ v619;
  struct std__allocator_int_ ref_tmp0620;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it621;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0622;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1623;
  int c624 = 0;
  __retval617 = c624;
  // array copy
  __builtin_memcpy(myints618, __const_main_myints, (unsigned long)5 * sizeof(__const_main_myints[0]));
  int* cast625 = (int*)&(myints618);
  int* cast626 = (int*)&(myints618);
  int c627 = 5;
  int* ptr628 = &(cast626)[c627];
  std__allocator_int___allocator_2(&ref_tmp0620);
    std__vector_int__std__allocator_int_____vector_int___void_(&v619, cast625, ptr628, &ref_tmp0620);
  {
    std__allocator_int____allocator(&ref_tmp0620);
  }
    __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&it621);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r629 = std__vector_int__std__allocator_int_____begin(&v619);
    agg_tmp0622 = r629;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r630 = std__vector_int__std__allocator_int_____end(&v619);
    agg_tmp1623 = r630;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t631 = agg_tmp0622;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t632 = agg_tmp1623;
    void_std__make_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t631, t632);
    char* cast633 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r634 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast633);
    int* r635 = std__vector_int__std__allocator_int_____front(&v619);
    int t636 = *r635;
    struct std__basic_ostream_char__std__char_traits_char__* r637 = std__ostream__operator__(r634, t636);
    struct std__basic_ostream_char__std__char_traits_char__* r638 = std__ostream__operator___std__ostream_____(r637, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    unsigned long c639 = 0;
    int* r640 = std__vector_int__std__allocator_int_____operator__(&v619, c639);
    int t641 = *r640;
    int c642 = 30;
    _Bool c643 = ((t641 == c642)) ? 1 : 0;
    if (c643) {
    } else {
      char* cast644 = (char*)&(_str_1);
      char* c645 = _str_2;
      unsigned int c646 = 22;
      char* cast647 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast644, c645, c646, cast647);
    }
    unsigned long c648 = 1;
    int* r649 = std__vector_int__std__allocator_int_____operator__(&v619, c648);
    int t650 = *r649;
    int c651 = 20;
    _Bool c652 = ((t650 == c651)) ? 1 : 0;
    if (c652) {
    } else {
      char* cast653 = (char*)&(_str_3);
      char* c654 = _str_2;
      unsigned int c655 = 23;
      char* cast656 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast653, c654, c655, cast656);
    }
    unsigned long c657 = 2;
    int* r658 = std__vector_int__std__allocator_int_____operator__(&v619, c657);
    int t659 = *r658;
    int c660 = 10;
    _Bool c661 = ((t659 == c660)) ? 1 : 0;
    if (c661) {
    } else {
      char* cast662 = (char*)&(_str_4);
      char* c663 = _str_2;
      unsigned int c664 = 24;
      char* cast665 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast662, c663, c664, cast665);
    }
    unsigned long c666 = 3;
    int* r667 = std__vector_int__std__allocator_int_____operator__(&v619, c666);
    int t668 = *r667;
    int c669 = 5;
    _Bool c670 = ((t668 == c669)) ? 1 : 0;
    if (c670) {
    } else {
      char* cast671 = (char*)&(_str_5);
      char* c672 = _str_2;
      unsigned int c673 = 25;
      char* cast674 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast671, c672, c673, cast674);
    }
    unsigned long c675 = 4;
    int* r676 = std__vector_int__std__allocator_int_____operator__(&v619, c675);
    int t677 = *r676;
    int c678 = 15;
    _Bool c679 = ((t677 == c678)) ? 1 : 0;
    if (c679) {
    } else {
      char* cast680 = (char*)&(_str_6);
      char* c681 = _str_2;
      unsigned int c682 = 26;
      char* cast683 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast680, c681, c682, cast683);
    }
    char* cast684 = (char*)&(_str_7);
    struct std__basic_ostream_char__std__char_traits_char__* r685 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast684);
      unsigned int i686;
      unsigned int c687 = 0;
      i686 = c687;
      while (1) {
        unsigned int t689 = i686;
        unsigned long cast690 = (unsigned long)t689;
        unsigned long r691 = std__vector_int__std__allocator_int_____size___const(&v619);
        _Bool c692 = ((cast690 < r691)) ? 1 : 0;
        if (!c692) break;
        char* cast693 = (char*)&(_str_8);
        struct std__basic_ostream_char__std__char_traits_char__* r694 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast693);
        unsigned int t695 = i686;
        unsigned long cast696 = (unsigned long)t695;
        int* r697 = std__vector_int__std__allocator_int_____operator__(&v619, cast696);
        int t698 = *r697;
        struct std__basic_ostream_char__std__char_traits_char__* r699 = std__ostream__operator__(r694, t698);
      for_step688: ;
        unsigned int t700 = i686;
        unsigned int u701 = t700 + 1;
        i686 = u701;
      }
    struct std__basic_ostream_char__std__char_traits_char__* r702 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c703 = 0;
    __retval617 = c703;
    int t704 = __retval617;
    int ret_val705 = t704;
    {
      std__vector_int__std__allocator_int______vector(&v619);
    }
    return ret_val705;
  int t706 = __retval617;
  return t706;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v707) {
bb708:
  struct std____new_allocator_int_* this709;
  this709 = v707;
  struct std____new_allocator_int_* t710 = this709;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v711, struct std__allocator_int_* v712) {
bb713:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this714;
  struct std__allocator_int_* __a715;
  this714 = v711;
  __a715 = v712;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t716 = this714;
  struct std__allocator_int_* base717 = (struct std__allocator_int_*)((char *)t716 + 0);
  struct std__allocator_int_* t718 = __a715;
  std__allocator_int___allocator(base717, t718);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base719 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t716 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base719);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v720) {
bb721:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this722;
  this722 = v720;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t723 = this722;
  {
    struct std__allocator_int_* base724 = (struct std__allocator_int_*)((char *)t723 + 0);
    std__allocator_int____allocator(base724);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v725, struct std__allocator_int_* v726) {
bb727:
  struct std___Vector_base_int__std__allocator_int__* this728;
  struct std__allocator_int_* __a729;
  this728 = v725;
  __a729 = v726;
  struct std___Vector_base_int__std__allocator_int__* t730 = this728;
  struct std__allocator_int_* t731 = __a729;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t730->_M_impl, t731);
  return;
}

// function: _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_
long _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_(struct std__ranges____distance_fn* v732, int** v733, int* v734) {
bb735:
  struct std__ranges____distance_fn* this736;
  int** __first737;
  int* __last738;
  long __retval739;
  this736 = v732;
  __first737 = v733;
  __last738 = v734;
  struct std__ranges____distance_fn* t740 = this736;
  int* t741 = __last738;
  int** t742 = __first737;
  int* t743 = *t742;
  long diff744 = t741 - t743;
  __retval739 = diff744;
  long t745 = __retval739;
  return t745;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb746:
  _Bool __retval747;
    _Bool c748 = 0;
    __retval747 = c748;
    _Bool t749 = __retval747;
    return t749;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v750) {
bb751:
  struct std____new_allocator_int_* this752;
  unsigned long __retval753;
  this752 = v750;
  struct std____new_allocator_int_* t754 = this752;
  unsigned long c755 = 9223372036854775807;
  unsigned long c756 = 4;
  unsigned long b757 = c755 / c756;
  __retval753 = b757;
  unsigned long t758 = __retval753;
  return t758;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v759, unsigned long v760, void* v761) {
bb762:
  struct std____new_allocator_int_* this763;
  unsigned long __n764;
  void* unnamed765;
  int* __retval766;
  this763 = v759;
  __n764 = v760;
  unnamed765 = v761;
  struct std____new_allocator_int_* t767 = this763;
    unsigned long t768 = __n764;
    unsigned long r769 = std____new_allocator_int____M_max_size___const(t767);
    _Bool c770 = ((t768 > r769)) ? 1 : 0;
    if (c770) {
        unsigned long t771 = __n764;
        unsigned long c772 = -1;
        unsigned long c773 = 4;
        unsigned long b774 = c772 / c773;
        _Bool c775 = ((t771 > b774)) ? 1 : 0;
        if (c775) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c776 = 4;
    unsigned long c777 = 16;
    _Bool c778 = ((c776 > c777)) ? 1 : 0;
    if (c778) {
      unsigned long __al779;
      unsigned long c780 = 4;
      __al779 = c780;
      unsigned long t781 = __n764;
      unsigned long c782 = 4;
      unsigned long b783 = t781 * c782;
      unsigned long t784 = __al779;
      void* r785 = operator_new_2(b783, t784);
      int* cast786 = (int*)r785;
      __retval766 = cast786;
      int* t787 = __retval766;
      return t787;
    }
  unsigned long t788 = __n764;
  unsigned long c789 = 4;
  unsigned long b790 = t788 * c789;
  void* r791 = operator_new(b790);
  int* cast792 = (int*)r791;
  __retval766 = cast792;
  int* t793 = __retval766;
  return t793;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v794, unsigned long v795) {
bb796:
  struct std__allocator_int_* this797;
  unsigned long __n798;
  int* __retval799;
  this797 = v794;
  __n798 = v795;
  struct std__allocator_int_* t800 = this797;
    _Bool r801 = std____is_constant_evaluated();
    if (r801) {
        unsigned long t802 = __n798;
        unsigned long c803 = 4;
        unsigned long ovr804;
        _Bool ovf805 = __builtin_mul_overflow(t802, c803, &ovr804);
        __n798 = ovr804;
        if (ovf805) {
          std____throw_bad_array_new_length();
        }
      unsigned long t806 = __n798;
      void* r807 = operator_new(t806);
      int* cast808 = (int*)r807;
      __retval799 = cast808;
      int* t809 = __retval799;
      return t809;
    }
  struct std____new_allocator_int_* base810 = (struct std____new_allocator_int_*)((char *)t800 + 0);
  unsigned long t811 = __n798;
  void* c812 = ((void*)0);
  int* r813 = std____new_allocator_int___allocate(base810, t811, c812);
  __retval799 = r813;
  int* t814 = __retval799;
  return t814;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v815, unsigned long v816) {
bb817:
  struct std__allocator_int_* __a818;
  unsigned long __n819;
  int* __retval820;
  __a818 = v815;
  __n819 = v816;
  struct std__allocator_int_* t821 = __a818;
  unsigned long t822 = __n819;
  int* r823 = std__allocator_int___allocate(t821, t822);
  __retval820 = r823;
  int* t824 = __retval820;
  return t824;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v825, unsigned long v826) {
bb827:
  struct std___Vector_base_int__std__allocator_int__* this828;
  unsigned long __n829;
  int* __retval830;
  this828 = v825;
  __n829 = v826;
  struct std___Vector_base_int__std__allocator_int__* t831 = this828;
  unsigned long t832 = __n829;
  unsigned long c833 = 0;
  _Bool c834 = ((t832 != c833)) ? 1 : 0;
  int* ternary835;
  if (c834) {
    struct std__allocator_int_* base836 = (struct std__allocator_int_*)((char *)&(t831->_M_impl) + 0);
    unsigned long t837 = __n829;
    int* r838 = std__allocator_traits_std__allocator_int_____allocate(base836, t837);
    ternary835 = (int*)r838;
  } else {
    int* c839 = ((void*)0);
    ternary835 = (int*)c839;
  }
  __retval830 = ternary835;
  int* t840 = __retval830;
  return t840;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v841, unsigned long* v842) {
bb843:
  unsigned long* __a844;
  unsigned long* __b845;
  unsigned long* __retval846;
  __a844 = v841;
  __b845 = v842;
    unsigned long* t847 = __b845;
    unsigned long t848 = *t847;
    unsigned long* t849 = __a844;
    unsigned long t850 = *t849;
    _Bool c851 = ((t848 < t850)) ? 1 : 0;
    if (c851) {
      unsigned long* t852 = __b845;
      __retval846 = t852;
      unsigned long* t853 = __retval846;
      return t853;
    }
  unsigned long* t854 = __a844;
  __retval846 = t854;
  unsigned long* t855 = __retval846;
  return t855;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v856) {
bb857:
  struct std__allocator_int_* __a858;
  unsigned long __retval859;
  unsigned long __diffmax860;
  unsigned long __allocmax861;
  __a858 = v856;
  unsigned long c862 = 2305843009213693951;
  __diffmax860 = c862;
  unsigned long c863 = 4611686018427387903;
  __allocmax861 = c863;
  unsigned long* r864 = unsigned_long_const__std__min_unsigned_long_(&__diffmax860, &__allocmax861);
  unsigned long t865 = *r864;
  __retval859 = t865;
  unsigned long t866 = __retval859;
  return t866;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v867, struct std__allocator_int_* v868) {
bb869:
  struct std__allocator_int_* this870;
  struct std__allocator_int_* __a871;
  this870 = v867;
  __a871 = v868;
  struct std__allocator_int_* t872 = this870;
  struct std____new_allocator_int_* base873 = (struct std____new_allocator_int_*)((char *)t872 + 0);
  struct std__allocator_int_* t874 = __a871;
  struct std____new_allocator_int_* base875 = (struct std____new_allocator_int_*)((char *)t874 + 0);
  std____new_allocator_int_____new_allocator(base873, base875);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v876, struct std__allocator_int_* v877) {
bb878:
  unsigned long __n879;
  struct std__allocator_int_* __a880;
  unsigned long __retval881;
  __n879 = v876;
  __a880 = v877;
    struct std__allocator_int_ ref_tmp0882;
    _Bool tmp_exprcleanup883;
    unsigned long t884 = __n879;
    struct std__allocator_int_* t885 = __a880;
    std__allocator_int___allocator(&ref_tmp0882, t885);
      unsigned long r886 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp0882);
      _Bool c887 = ((t884 > r886)) ? 1 : 0;
      tmp_exprcleanup883 = c887;
    {
      std__allocator_int____allocator(&ref_tmp0882);
    }
    _Bool t888 = tmp_exprcleanup883;
    if (t888) {
      char* cast889 = (char*)&(_str_9);
      std____throw_length_error(cast889);
    }
  unsigned long t890 = __n879;
  __retval881 = t890;
  unsigned long t891 = __retval881;
  return t891;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v892) {
bb893:
  struct std___Vector_base_int__std__allocator_int__* this894;
  struct std__allocator_int_* __retval895;
  this894 = v892;
  struct std___Vector_base_int__std__allocator_int__* t896 = this894;
  struct std__allocator_int_* base897 = (struct std__allocator_int_*)((char *)&(t896->_M_impl) + 0);
  __retval895 = base897;
  struct std__allocator_int_* t898 = __retval895;
  return t898;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb899:
  _Bool __retval900;
    _Bool c901 = 0;
    __retval900 = c901;
    _Bool t902 = __retval900;
    return t902;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v903, int** v904) {
bb905:
  struct std___UninitDestroyGuard_int____void_* this906;
  int** __first907;
  this906 = v903;
  __first907 = v904;
  struct std___UninitDestroyGuard_int____void_* t908 = this906;
  int** t909 = __first907;
  int* t910 = *t909;
  t908->_M_first = t910;
  int** t911 = __first907;
  t908->_M_cur = t911;
  return;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v912, int* v913) {
bb914:
  int* __location915;
  int* __args916;
  int* __retval917;
  void* __loc918;
  __location915 = v912;
  __args916 = v913;
  int* t919 = __location915;
  void* cast920 = (void*)t919;
  __loc918 = cast920;
    void* t921 = __loc918;
    int* cast922 = (int*)t921;
    int* t923 = __args916;
    int t924 = *t923;
    *cast922 = t924;
    __retval917 = cast922;
    int* t925 = __retval917;
    return t925;
  abort();
}

// function: _ZSt10_ConstructIiJRiEEvPT_DpOT0_
void void_std___Construct_int__int__(int* v926, int* v927) {
bb928:
  int* __p929;
  int* __args930;
  __p929 = v926;
  __args930 = v927;
    _Bool r931 = std____is_constant_evaluated();
    if (r931) {
      int* t932 = __p929;
      int* t933 = __args930;
      int* r934 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t932, t933);
      return;
    }
  int* t935 = __p929;
  void* cast936 = (void*)t935;
  int* cast937 = (int*)cast936;
  int* t938 = __args930;
  int t939 = *t938;
  *cast937 = t939;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v940) {
bb941:
  struct std___UninitDestroyGuard_int____void_* this942;
  this942 = v940;
  struct std___UninitDestroyGuard_int____void_* t943 = this942;
  int** c944 = ((void*)0);
  t943->_M_cur = c944;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v945) {
bb946:
  struct std___UninitDestroyGuard_int____void_* this947;
  this947 = v945;
  struct std___UninitDestroyGuard_int____void_* t948 = this947;
    int** t949 = t948->_M_cur;
    int** c950 = ((void*)0);
    _Bool c951 = ((t949 != c950)) ? 1 : 0;
    if (c951) {
      int* t952 = t948->_M_first;
      int** t953 = t948->_M_cur;
      int* t954 = *t953;
      void_std___Destroy_int__(t952, t954);
    }
  return;
}

// function: _ZSt16__do_uninit_copyIPiS0_S0_ET1_T_T0_S1_
int* int__std____do_uninit_copy_int___int___int__(int* v955, int* v956, int* v957) {
bb958:
  int* __first959;
  int* __last960;
  int* __result961;
  int* __retval962;
  struct std___UninitDestroyGuard_int____void_ __guard963;
  __first959 = v955;
  __last960 = v956;
  __result961 = v957;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard963, &__result961);
      while (1) {
        int* t965 = __first959;
        int* t966 = __last960;
        _Bool c967 = ((t965 != t966)) ? 1 : 0;
        if (!c967) break;
        int* t968 = __result961;
        int* t969 = __first959;
        void_std___Construct_int__int__(t968, t969);
      for_step964: ;
        int* t970 = __first959;
        int c971 = 1;
        int* ptr972 = &(t970)[c971];
        __first959 = ptr972;
        int* t973 = __result961;
        int c974 = 1;
        int* ptr975 = &(t973)[c974];
        __result961 = ptr975;
      }
    std___UninitDestroyGuard_int___void___release(&__guard963);
    int* t976 = __result961;
    __retval962 = t976;
    int* t977 = __retval962;
    int* ret_val978 = t977;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard963);
    }
    return ret_val978;
  abort();
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v979) {
bb980:
  int* __it981;
  int* __retval982;
  __it981 = v979;
  int* t983 = __it981;
  __retval982 = t983;
  int* t984 = __retval982;
  return t984;
}

// function: _ZSt18uninitialized_copyIPiS0_ET0_T_S2_S1_
int* int__std__uninitialized_copy_int___int__(int* v985, int* v986, int* v987) {
bb988:
  int* __first989;
  int* __last990;
  int* __result991;
  int* __retval992;
  __first989 = v985;
  __last990 = v986;
  __result991 = v987;
      long __n993;
      int* t994 = __last990;
      int* t995 = __first989;
      long diff996 = t994 - t995;
      __n993 = diff996;
        long t997 = __n993;
        long c998 = 0;
        _Bool c999 = ((t997 > c998)) ? 1 : 0;
        if (c999) {
          int* t1000 = __result991;
          int* r1001 = int__std____niter_base_int__(t1000);
          void* cast1002 = (void*)r1001;
          int* t1003 = __first989;
          int* r1004 = int__std____niter_base_int__(t1003);
          void* cast1005 = (void*)r1004;
          long t1006 = __n993;
          unsigned long cast1007 = (unsigned long)t1006;
          unsigned long c1008 = 4;
          unsigned long b1009 = cast1007 * c1008;
          void* r1010 = memcpy(cast1002, cast1005, b1009);
          long t1011 = __n993;
          int* t1012 = __result991;
          int* ptr1013 = &(t1012)[t1011];
          __result991 = ptr1013;
        }
      int* t1014 = __result991;
      __retval992 = t1014;
      int* t1015 = __retval992;
      return t1015;
  abort();
}

// function: _ZSt22__uninitialized_copy_aIPiS0_S0_iET1_T_T0_S1_RSaIT2_E
int* int__std____uninitialized_copy_a_int___int___int___int_(int* v1016, int* v1017, int* v1018, struct std__allocator_int_* v1019) {
bb1020:
  int* __first1021;
  int* __last1022;
  int* __result1023;
  struct std__allocator_int_* unnamed1024;
  int* __retval1025;
  __first1021 = v1016;
  __last1022 = v1017;
  __result1023 = v1018;
  unnamed1024 = v1019;
    _Bool r1026 = std__is_constant_evaluated();
    if (r1026) {
      int* t1027 = __first1021;
      int* t1028 = __last1022;
      int* t1029 = __result1023;
      int* r1030 = int__std____do_uninit_copy_int___int___int__(t1027, t1028, t1029);
      __retval1025 = r1030;
      int* t1031 = __retval1025;
      return t1031;
    }
    int* t1032 = __first1021;
    int* t1033 = __last1022;
    int* t1034 = __result1023;
    int* r1035 = int__std__uninitialized_copy_int___int__(t1032, t1033, t1034);
    __retval1025 = r1035;
    int* t1036 = __retval1025;
    return t1036;
  abort();
}

// function: _ZNSt6vectorIiSaIiEE21_M_range_initialize_nIPiS3_EEvT_T0_m
void void_std__vector_int__std__allocator_int______M_range_initialize_n_int___int__(struct std__vector_int__std__allocator_int__* v1037, int* v1038, int* v1039, unsigned long v1040) {
bb1041:
  struct std__vector_int__std__allocator_int__* this1042;
  int* __first1043;
  int* __last1044;
  unsigned long __n1045;
  int* __start1046;
  this1042 = v1037;
  __first1043 = v1038;
  __last1044 = v1039;
  __n1045 = v1040;
  struct std__vector_int__std__allocator_int__* t1047 = this1042;
  struct std___Vector_base_int__std__allocator_int__* base1048 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1047 + 0);
  unsigned long t1049 = __n1045;
  struct std___Vector_base_int__std__allocator_int__* base1050 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1047 + 0);
  struct std__allocator_int_* r1051 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1050);
  unsigned long r1052 = std__vector_int__std__allocator_int______S_check_init_len(t1049, r1051);
  int* r1053 = std___Vector_base_int__std__allocator_int______M_allocate(base1048, r1052);
  __start1046 = r1053;
  int* t1054 = __start1046;
  struct std___Vector_base_int__std__allocator_int__* base1055 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1047 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1056 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1055->_M_impl) + 0);
  base1056->_M_finish = t1054;
  struct std___Vector_base_int__std__allocator_int__* base1057 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1047 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1058 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1057->_M_impl) + 0);
  base1058->_M_start = t1054;
  int* t1059 = __start1046;
  unsigned long t1060 = __n1045;
  int* ptr1061 = &(t1059)[t1060];
  struct std___Vector_base_int__std__allocator_int__* base1062 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1047 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1063 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1062->_M_impl) + 0);
  base1063->_M_end_of_storage = ptr1061;
  int* t1064 = __first1043;
  int* t1065 = __last1044;
  int* t1066 = __start1046;
  struct std___Vector_base_int__std__allocator_int__* base1067 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1047 + 0);
  struct std__allocator_int_* r1068 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1067);
  int* r1069 = int__std____uninitialized_copy_a_int___int___int___int_(t1064, t1065, t1066, r1068);
  struct std___Vector_base_int__std__allocator_int__* base1070 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1047 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1071 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1070->_M_impl) + 0);
  base1071->_M_finish = r1069;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1072, int* v1073, unsigned long v1074) {
bb1075:
  struct std____new_allocator_int_* this1076;
  int* __p1077;
  unsigned long __n1078;
  this1076 = v1072;
  __p1077 = v1073;
  __n1078 = v1074;
  struct std____new_allocator_int_* t1079 = this1076;
    unsigned long c1080 = 4;
    unsigned long c1081 = 16;
    _Bool c1082 = ((c1080 > c1081)) ? 1 : 0;
    if (c1082) {
      int* t1083 = __p1077;
      void* cast1084 = (void*)t1083;
      unsigned long t1085 = __n1078;
      unsigned long c1086 = 4;
      unsigned long b1087 = t1085 * c1086;
      unsigned long c1088 = 4;
      operator_delete_3(cast1084, b1087, c1088);
      return;
    }
  int* t1089 = __p1077;
  void* cast1090 = (void*)t1089;
  unsigned long t1091 = __n1078;
  unsigned long c1092 = 4;
  unsigned long b1093 = t1091 * c1092;
  operator_delete_2(cast1090, b1093);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1094, int* v1095, unsigned long v1096) {
bb1097:
  struct std__allocator_int_* this1098;
  int* __p1099;
  unsigned long __n1100;
  this1098 = v1094;
  __p1099 = v1095;
  __n1100 = v1096;
  struct std__allocator_int_* t1101 = this1098;
    _Bool r1102 = std____is_constant_evaluated();
    if (r1102) {
      int* t1103 = __p1099;
      void* cast1104 = (void*)t1103;
      operator_delete(cast1104);
      return;
    }
  struct std____new_allocator_int_* base1105 = (struct std____new_allocator_int_*)((char *)t1101 + 0);
  int* t1106 = __p1099;
  unsigned long t1107 = __n1100;
  std____new_allocator_int___deallocate(base1105, t1106, t1107);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1108, int* v1109, unsigned long v1110) {
bb1111:
  struct std__allocator_int_* __a1112;
  int* __p1113;
  unsigned long __n1114;
  __a1112 = v1108;
  __p1113 = v1109;
  __n1114 = v1110;
  struct std__allocator_int_* t1115 = __a1112;
  int* t1116 = __p1113;
  unsigned long t1117 = __n1114;
  std__allocator_int___deallocate(t1115, t1116, t1117);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v1118, int* v1119, unsigned long v1120) {
bb1121:
  struct std___Vector_base_int__std__allocator_int__* this1122;
  int* __p1123;
  unsigned long __n1124;
  this1122 = v1118;
  __p1123 = v1119;
  __n1124 = v1120;
  struct std___Vector_base_int__std__allocator_int__* t1125 = this1122;
    int* t1126 = __p1123;
    _Bool cast1127 = (_Bool)t1126;
    if (cast1127) {
      struct std__allocator_int_* base1128 = (struct std__allocator_int_*)((char *)&(t1125->_M_impl) + 0);
      int* t1129 = __p1123;
      unsigned long t1130 = __n1124;
      std__allocator_traits_std__allocator_int_____deallocate(base1128, t1129, t1130);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1131) {
bb1132:
  struct std___Vector_base_int__std__allocator_int__* this1133;
  this1133 = v1131;
  struct std___Vector_base_int__std__allocator_int__* t1134 = this1133;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1135 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1134->_M_impl) + 0);
    int* t1136 = base1135->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1137 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1134->_M_impl) + 0);
    int* t1138 = base1137->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1139 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1134->_M_impl) + 0);
    int* t1140 = base1139->_M_start;
    long diff1141 = t1138 - t1140;
    unsigned long cast1142 = (unsigned long)diff1141;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1134, t1136, cast1142);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1134->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1143, struct std____new_allocator_int_* v1144) {
bb1145:
  struct std____new_allocator_int_* this1146;
  struct std____new_allocator_int_* unnamed1147;
  this1146 = v1143;
  unnamed1147 = v1144;
  struct std____new_allocator_int_* t1148 = this1146;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1149) {
bb1150:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1151;
  this1151 = v1149;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1152 = this1151;
  int* c1153 = ((void*)0);
  t1152->_M_start = c1153;
  int* c1154 = ((void*)0);
  t1152->_M_finish = c1154;
  int* c1155 = ((void*)0);
  t1152->_M_end_of_storage = c1155;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1156) {
bb1157:
  int* __location1158;
  __location1158 = v1156;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1159, int* v1160) {
bb1161:
  int* __first1162;
  int* __last1163;
  __first1162 = v1159;
  __last1163 = v1160;
      _Bool r1164 = std____is_constant_evaluated();
      if (r1164) {
          while (1) {
            int* t1166 = __first1162;
            int* t1167 = __last1163;
            _Bool c1168 = ((t1166 != t1167)) ? 1 : 0;
            if (!c1168) break;
            int* t1169 = __first1162;
            void_std__destroy_at_int_(t1169);
          for_step1165: ;
            int* t1170 = __first1162;
            int c1171 = 1;
            int* ptr1172 = &(t1170)[c1171];
            __first1162 = ptr1172;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1173, int* v1174, struct std__allocator_int_* v1175) {
bb1176:
  int* __first1177;
  int* __last1178;
  struct std__allocator_int_* unnamed1179;
  __first1177 = v1173;
  __last1178 = v1174;
  unnamed1179 = v1175;
  int* t1180 = __first1177;
  int* t1181 = __last1178;
  void_std___Destroy_int__(t1180, t1181);
  return;
}

