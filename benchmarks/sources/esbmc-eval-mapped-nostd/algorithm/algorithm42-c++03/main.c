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
struct __gnu_cxx____ops___Iter_less_iter { unsigned char __field0; };
struct __gnu_cxx____ops___Iter_less_val { unsigned char __field0; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____cmp_cat____unspec { unsigned char __field0; };
struct std____detail___Synth3way { unsigned char __field0; };
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
struct std__strong_ordering { char _M_value; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_myints[9] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
struct std____cmp_cat____unspec __const__ZSt13__heap_selectIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_less_iterEEvT_S9_S9_T0__agg_tmp3;
struct __gnu_cxx____ops___Iter_less_val __const__ZSt13__adjust_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEliNS0_5__ops15_Iter_less_iterEEvT_T0_SA_T1_T2____cmp;
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[17] = "myvector[0] == 1";
char _str_1[115] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm42-c++03/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[17] = "myvector[1] == 2";
char _str_3[17] = "myvector[2] == 3";
char _str_4[17] = "myvector[3] == 4";
char _str_5[16] = "myvector[4] > 4";
char _str_6[16] = "myvector[5] > 4";
char _str_7[16] = "myvector[6] > 4";
char _str_8[16] = "myvector[7] > 4";
char _str_9[16] = "myvector[8] > 4";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_10[19] = "myvector contains:";
char _str_11[2] = " ";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_12[49] = "cannot create std::vector larger than max_size()";
struct std____detail___Synth3way _ZNSt8__detail11__synth3wayE;
char _str_13[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_14[19] = "__n < this->size()";
_Bool myfunction(int p0, int p1);
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector_int___void_(struct std__vector_int__std__allocator_int__* p0, int* p1, int* p2, struct std__allocator_int_* p3);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
_Bool bool___gnu_cxx____ops___Iter_less_val__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___const(struct __gnu_cxx____ops___Iter_less_val* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2);
void void_std____push_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_less_val_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, long p1, long p2, int p3, struct __gnu_cxx____ops___Iter_less_val* p4);
void void_std____adjust_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, long p1, long p2, int p3, struct __gnu_cxx____ops___Iter_less_iter p4);
void void_std____make_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____ops___Iter_less_iter* p2);
_Bool std__operator_(struct std__strong_ordering p0, struct std____cmp_cat____unspec p1);
struct std__strong_ordering _ZNKSt8__detail10_Synth3wayclIPiS2_EEDaRKT_RKT0_QrqXltfp_fp0_RNS_18__boolean_testableEXltfp0_fp_RNS_18__boolean_testableEE(struct std____detail___Synth3way* p0, int** p1, int** p2);
struct std__strong_ordering decltype__std____detail____synth3way__std__declval_int_________std__declval_int___________gnu_cxx__operator____int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
_Bool bool___gnu_cxx____ops___Iter_less_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(struct __gnu_cxx____ops___Iter_less_iter* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
void void_std____pop_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, struct __gnu_cxx____ops___Iter_less_iter* p3);
void void_std____heap_select___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, struct __gnu_cxx____ops___Iter_less_iter p3);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
void void_std____sort_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____ops___Iter_less_iter* p2);
void void_std____partial_sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, struct __gnu_cxx____ops___Iter_less_iter p3);
struct __gnu_cxx____ops___Iter_less_iter __gnu_cxx____ops____iter_less_iter();
void void_std__partial_sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
extern void std__basic_ios_char__std__char_traits_char_____clear(struct std__basic_ios_char__std__char_traits_char__* p0, int p1);
int std__operator__2(int p0, int p1);
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

// function: _Z10myfunctionii
_Bool myfunction(int v0, int v1) {
bb2:
  int i3;
  int j4;
  _Bool __retval5;
  i3 = v0;
  j4 = v1;
  int t6 = i3;
  int t7 = j4;
  _Bool c8 = ((t6 < t7)) ? 1 : 0;
  __retval5 = c8;
  _Bool t9 = __retval5;
  return t9;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator_2(struct std__allocator_int_* v10) {
bb11:
  struct std__allocator_int_* this12;
  this12 = v10;
  struct std__allocator_int_* t13 = this12;
  struct std____new_allocator_int_* base14 = (struct std____new_allocator_int_*)((char *)t13 + 0);
  std____new_allocator_int_____new_allocator_2(base14);
  return;
}

// function: _ZNSt6vectorIiSaIiEEC2IPivEET_S4_RKS0_
void std__vector_int__std__allocator_int_____vector_int___void_(struct std__vector_int__std__allocator_int__* v15, int* v16, int* v17, struct std__allocator_int_* v18) {
bb19:
  struct std__vector_int__std__allocator_int__* this20;
  int* __first21;
  int* __last22;
  struct std__allocator_int_* __a23;
  this20 = v15;
  __first21 = v16;
  __last22 = v17;
  __a23 = v18;
  struct std__vector_int__std__allocator_int__* t24 = this20;
  struct std___Vector_base_int__std__allocator_int__* base25 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t24 + 0);
  struct std__allocator_int_* t26 = __a23;
  std___Vector_base_int__std__allocator_int______Vector_base(base25, t26);
      unsigned long __n27;
      int* t28 = __last22;
      long r29 = _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_(&_ZNSt6ranges8distanceE, &__first21, t28);
      unsigned long cast30 = (unsigned long)r29;
      __n27 = cast30;
      int* t31 = __first21;
      int* t32 = __last22;
      unsigned long t33 = __n27;
      void_std__vector_int__std__allocator_int______M_range_initialize_n_int___int__(t24, t31, t32, t33);
      {
        struct std___Vector_base_int__std__allocator_int__* base34 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t24 + 0);
        std___Vector_base_int__std__allocator_int_______Vector_base(base34);
      }
      return;
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

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2Ev
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v39) {
bb40:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this41;
  this41 = v39;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t42 = this41;
  int* c43 = ((void*)0);
  t42->_M_current = c43;
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v44) {
bb45:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this46;
  int** __retval47;
  this46 = v44;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t48 = this46;
  __retval47 = &t48->_M_current;
  int** t49 = __retval47;
  return t49;
}

// function: _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v50, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v51) {
bb52:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs53;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs54;
  long __retval55;
  __lhs53 = v50;
  __rhs54 = v51;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t56 = __lhs53;
  int** r57 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t56);
  int* t58 = *r57;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t59 = __rhs54;
  int** r60 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t59);
  int* t61 = *r60;
  long diff62 = t58 - t61;
  __retval55 = diff62;
  long t63 = __retval55;
  return t63;
}

// function: _ZNK9__gnu_cxx5__ops14_Iter_less_valclINS_17__normal_iteratorIPiSt6vectorIiSaIiEEEEiEEbT_RT0_
_Bool bool___gnu_cxx____ops___Iter_less_val__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___const(struct __gnu_cxx____ops___Iter_less_val* v64, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v65, int* v66) {
bb67:
  struct __gnu_cxx____ops___Iter_less_val* this68;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it69;
  int* __val70;
  _Bool __retval71;
  this68 = v64;
  __it69 = v65;
  __val70 = v66;
  struct __gnu_cxx____ops___Iter_less_val* t72 = this68;
  int* r73 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it69);
  int t74 = *r73;
  int* t75 = __val70;
  int t76 = *t75;
  _Bool c77 = ((t74 < t76)) ? 1 : 0;
  __retval71 = c77;
  _Bool t78 = __retval71;
  return t78;
}

// function: _ZSt11__push_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEliNS0_5__ops14_Iter_less_valEEvT_T0_SA_T1_RT2_
void void_std____push_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_less_val_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v79, long v80, long v81, int v82, struct __gnu_cxx____ops___Iter_less_val* v83) {
bb84:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first85;
  long __holeIndex86;
  long __topIndex87;
  int __value88;
  struct __gnu_cxx____ops___Iter_less_val* __comp89;
  long __parent90;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp291;
  __first85 = v79;
  __holeIndex86 = v80;
  __topIndex87 = v81;
  __value88 = v82;
  __comp89 = v83;
  long t92 = __holeIndex86;
  long c93 = 1;
  long b94 = t92 - c93;
  long c95 = 2;
  long b96 = b94 / c95;
  __parent90 = b96;
    while (1) {
      long t97 = __holeIndex86;
      long t98 = __topIndex87;
      _Bool c99 = ((t97 > t98)) ? 1 : 0;
      _Bool ternary100;
      if (c99) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0101;
        struct __gnu_cxx____ops___Iter_less_val* t102 = __comp89;
        long t103 = __parent90;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r104 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first85, t103);
        agg_tmp0101 = r104;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t105 = agg_tmp0101;
        _Bool r106 = bool___gnu_cxx____ops___Iter_less_val__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___const(t102, t105, &__value88);
        ternary100 = (_Bool)r106;
      } else {
        _Bool c107 = 0;
        ternary100 = (_Bool)c107;
      }
      if (!ternary100) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0108;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1109;
        long t110 = __parent90;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r111 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first85, t110);
        ref_tmp0108 = r111;
        int* r112 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0108);
        int t113 = *r112;
        long t114 = __holeIndex86;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r115 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first85, t114);
        ref_tmp1109 = r115;
        int* r116 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp1109);
        *r116 = t113;
        long t117 = __parent90;
        __holeIndex86 = t117;
        long t118 = __holeIndex86;
        long c119 = 1;
        long b120 = t118 - c119;
        long c121 = 2;
        long b122 = b120 / c121;
        __parent90 = b122;
    }
  int t123 = __value88;
  long t124 = __holeIndex86;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r125 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first85, t124);
  ref_tmp291 = r125;
  int* r126 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp291);
  *r126 = t123;
  return;
}

// function: _ZSt13__adjust_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEliNS0_5__ops15_Iter_less_iterEEvT_T0_SA_T1_T2_
void void_std____adjust_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v127, long v128, long v129, int v130, struct __gnu_cxx____ops___Iter_less_iter v131) {
bb132:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first133;
  long __holeIndex134;
  long __len135;
  int __value136;
  struct __gnu_cxx____ops___Iter_less_iter __comp137;
  long __topIndex138;
  long __secondChild139;
  struct __gnu_cxx____ops___Iter_less_val __cmp140;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2141;
  __first133 = v127;
  __holeIndex134 = v128;
  __len135 = v129;
  __value136 = v130;
  __comp137 = v131;
  long t142 = __holeIndex134;
  __topIndex138 = t142;
  long t143 = __holeIndex134;
  __secondChild139 = t143;
    while (1) {
      long t144 = __secondChild139;
      long t145 = __len135;
      long c146 = 1;
      long b147 = t145 - c146;
      long c148 = 2;
      long b149 = b147 / c148;
      _Bool c150 = ((t144 < b149)) ? 1 : 0;
      if (!c150) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0151;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1152;
        long c153 = 2;
        long t154 = __secondChild139;
        long c155 = 1;
        long b156 = t154 + c155;
        long b157 = c153 * b156;
        __secondChild139 = b157;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0158;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1159;
          long t160 = __secondChild139;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r161 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first133, t160);
          agg_tmp0158 = r161;
          long t162 = __secondChild139;
          long c163 = 1;
          long b164 = t162 - c163;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r165 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first133, b164);
          agg_tmp1159 = r165;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t166 = agg_tmp0158;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t167 = agg_tmp1159;
          _Bool r168 = bool___gnu_cxx____ops___Iter_less_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(&__comp137, t166, t167);
          if (r168) {
            long t169 = __secondChild139;
            long u170 = t169 - 1;
            __secondChild139 = u170;
          }
        long t171 = __secondChild139;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r172 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first133, t171);
        ref_tmp0151 = r172;
        int* r173 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0151);
        int t174 = *r173;
        long t175 = __holeIndex134;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r176 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first133, t175);
        ref_tmp1152 = r176;
        int* r177 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp1152);
        *r177 = t174;
        long t178 = __secondChild139;
        __holeIndex134 = t178;
    }
    long t179 = __len135;
    long c180 = 1;
    long b181 = t179 & c180;
    long c182 = 0;
    _Bool c183 = ((b181 == c182)) ? 1 : 0;
    _Bool ternary184;
    if (c183) {
      long t185 = __secondChild139;
      long t186 = __len135;
      long c187 = 2;
      long b188 = t186 - c187;
      long c189 = 2;
      long b190 = b188 / c189;
      _Bool c191 = ((t185 == b190)) ? 1 : 0;
      ternary184 = (_Bool)c191;
    } else {
      _Bool c192 = 0;
      ternary184 = (_Bool)c192;
    }
    if (ternary184) {
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp2193;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp3194;
      long c195 = 2;
      long t196 = __secondChild139;
      long c197 = 1;
      long b198 = t196 + c197;
      long b199 = c195 * b198;
      __secondChild139 = b199;
      long t200 = __secondChild139;
      long c201 = 1;
      long b202 = t200 - c201;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r203 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first133, b202);
      ref_tmp2193 = r203;
      int* r204 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp2193);
      int t205 = *r204;
      long t206 = __holeIndex134;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r207 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first133, t206);
      ref_tmp3194 = r207;
      int* r208 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp3194);
      *r208 = t205;
      long t209 = __secondChild139;
      long c210 = 1;
      long b211 = t209 - c210;
      __holeIndex134 = b211;
    }
  __cmp140 = *&__const__ZSt13__adjust_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEliNS0_5__ops15_Iter_less_iterEEvT_T0_SA_T1_T2____cmp; // copy
  agg_tmp2141 = __first133; // copy
  long t212 = __holeIndex134;
  long t213 = __topIndex138;
  int t214 = __value136;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t215 = agg_tmp2141;
  void_std____push_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_less_val_(t215, t212, t213, t214, &__cmp140);
  return;
}

// function: _ZSt11__make_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_less_iterEEvT_S9_RT0_
void void_std____make_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v216, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v217, struct __gnu_cxx____ops___Iter_less_iter* v218) {
bb219:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first220;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last221;
  struct __gnu_cxx____ops___Iter_less_iter* __comp222;
  long __len223;
  long __parent224;
  __first220 = v216;
  __last221 = v217;
  __comp222 = v218;
    long r225 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last221, &__first220);
    long c226 = 2;
    _Bool c227 = ((r225 < c226)) ? 1 : 0;
    if (c227) {
      return;
    }
  long r228 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last221, &__first220);
  __len223 = r228;
  long t229 = __len223;
  long c230 = 2;
  long b231 = t229 - c230;
  long c232 = 2;
  long b233 = b231 / c232;
  __parent224 = b233;
    while (1) {
      _Bool c234 = 1;
      if (!c234) break;
        int __value235;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0236;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0237;
        struct __gnu_cxx____ops___Iter_less_iter agg_tmp1238;
        long t239 = __parent224;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r240 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__first220, t239);
        ref_tmp0236 = r240;
        int* r241 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0236);
        int t242 = *r241;
        __value235 = t242;
        agg_tmp0237 = __first220; // copy
        long t243 = __parent224;
        long t244 = __len223;
        int t245 = __value235;
        struct __gnu_cxx____ops___Iter_less_iter* t246 = __comp222;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t247 = agg_tmp0237;
        struct __gnu_cxx____ops___Iter_less_iter t248 = agg_tmp1238;
        void_std____adjust_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_less_iter_(t247, t243, t244, t245, t248);
          long t249 = __parent224;
          long c250 = 0;
          _Bool c251 = ((t249 == c250)) ? 1 : 0;
          if (c251) {
            return;
          }
        long t252 = __parent224;
        long u253 = t252 - 1;
        __parent224 = u253;
    }
  return;
}

// function: _ZStltSt15strong_orderingNSt9__cmp_cat8__unspecE
_Bool std__operator_(struct std__strong_ordering v254, struct std____cmp_cat____unspec v255) {
bb256:
  struct std__strong_ordering __v257;
  struct std____cmp_cat____unspec unnamed258;
  _Bool __retval259;
  __v257 = v254;
  unnamed258 = v255;
  char t260 = __v257._M_value;
  int cast261 = (int)t260;
  int c262 = 0;
  _Bool c263 = ((cast261 < c262)) ? 1 : 0;
  __retval259 = c263;
  _Bool t264 = __retval259;
  return t264;
}

// function: _ZNKSt8__detail10_Synth3wayclIPiS2_EEDaRKT_RKT0_QrqXltfp_fp0_RNS_18__boolean_testableEXltfp0_fp_RNS_18__boolean_testableEE
struct std__strong_ordering _ZNKSt8__detail10_Synth3wayclIPiS2_EEDaRKT_RKT0_QrqXltfp_fp0_RNS_18__boolean_testableEXltfp0_fp_RNS_18__boolean_testableEE(struct std____detail___Synth3way* v265, int** v266, int** v267) {
bb268:
  struct std____detail___Synth3way* this269;
  int** __t270;
  int** __u271;
  struct std__strong_ordering __retval272;
  this269 = v265;
  __t270 = v266;
  __u271 = v267;
  struct std____detail___Synth3way* t273 = this269;
    int** t274 = __t270;
    int* t275 = *t274;
    int** t276 = __u271;
    int* t277 = *t276;
    char c278 = -1;
    char c279 = 0;
    char c280 = 1;
    _Bool c281 = ((t275 < t277)) ? 1 : 0;
    char sel282 = c281 ? c278 : c280;
    _Bool c283 = ((t275 == t277)) ? 1 : 0;
    char sel284 = c283 ? c279 : sel282;
    __retval272._M_value = sel284;
    struct std__strong_ordering t285 = __retval272;
    return t285;
  abort();
}

// function: _ZN9__gnu_cxxssIPiSt6vectorIiSaIiEEEEDTclL_ZNSt8__detail11__synth3wayEEclsr3stdE7declvalIRT_EEclsr3stdE7declvalIS7_EEEERKNS_17__normal_iteratorIS6_T0_EESD_
struct std__strong_ordering decltype__std____detail____synth3way__std__declval_int_________std__declval_int___________gnu_cxx__operator____int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v286, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v287) {
bb288:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs289;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs290;
  struct std__strong_ordering __retval291;
  __lhs289 = v286;
  __rhs290 = v287;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t292 = __lhs289;
  int** r293 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t292);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t294 = __rhs290;
  int** r295 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t294);
  struct std__strong_ordering r296 = _ZNKSt8__detail10_Synth3wayclIPiS2_EEDaRKT_RKT0_QrqXltfp_fp0_RNS_18__boolean_testableEXltfp0_fp_RNS_18__boolean_testableEE(&_ZNSt8__detail11__synth3wayE, r293, r295);
  __retval291 = r296;
  struct std__strong_ordering t297 = __retval291;
  return t297;
}

// function: _ZNK9__gnu_cxx5__ops15_Iter_less_iterclINS_17__normal_iteratorIPiSt6vectorIiSaIiEEEES8_EEbT_T0_
_Bool bool___gnu_cxx____ops___Iter_less_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(struct __gnu_cxx____ops___Iter_less_iter* v298, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v299, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v300) {
bb301:
  struct __gnu_cxx____ops___Iter_less_iter* this302;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it1303;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it2304;
  _Bool __retval305;
  this302 = v298;
  __it1303 = v299;
  __it2304 = v300;
  struct __gnu_cxx____ops___Iter_less_iter* t306 = this302;
  int* r307 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it1303);
  int t308 = *r307;
  int* r309 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it2304);
  int t310 = *r309;
  _Bool c311 = ((t308 < t310)) ? 1 : 0;
  __retval305 = c311;
  _Bool t312 = __retval305;
  return t312;
}

// function: _ZSt10__pop_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_less_iterEEvT_S9_S9_RT0_
void void_std____pop_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v313, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v314, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v315, struct __gnu_cxx____ops___Iter_less_iter* v316) {
bb317:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first318;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last319;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result320;
  struct __gnu_cxx____ops___Iter_less_iter* __comp321;
  int __value322;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0323;
  struct __gnu_cxx____ops___Iter_less_iter agg_tmp1324;
  __first318 = v313;
  __last319 = v314;
  __result320 = v315;
  __comp321 = v316;
  int* r325 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__result320);
  int t326 = *r325;
  __value322 = t326;
  int* r327 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first318);
  int t328 = *r327;
  int* r329 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__result320);
  *r329 = t328;
  agg_tmp0323 = __first318; // copy
  long c330 = 0;
  long r331 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last319, &__first318);
  int t332 = __value322;
  struct __gnu_cxx____ops___Iter_less_iter* t333 = __comp321;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t334 = agg_tmp0323;
  struct __gnu_cxx____ops___Iter_less_iter t335 = agg_tmp1324;
  void_std____adjust_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_less_iter_(t334, c330, r331, t332, t335);
  return;
}

// function: _ZSt13__heap_selectIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_less_iterEEvT_S9_S9_T0_
void void_std____heap_select___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v336, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v337, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v338, struct __gnu_cxx____ops___Iter_less_iter v339) {
bb340:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first341;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __middle342;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last343;
  struct __gnu_cxx____ops___Iter_less_iter __comp344;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0345;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1346;
  __first341 = v336;
  __middle342 = v337;
  __last343 = v338;
  __comp344 = v339;
  agg_tmp0345 = __first341; // copy
  agg_tmp1346 = __middle342; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t347 = agg_tmp0345;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t348 = agg_tmp1346;
  void_std____make_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(t347, t348, &__comp344);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __i349;
    struct std__strong_ordering agg_tmp2350;
    struct std____cmp_cat____unspec agg_tmp3351;
    __i349 = __middle342; // copy
    while (1) {
      struct std__strong_ordering r353 = decltype__std____detail____synth3way__std__declval_int_________std__declval_int___________gnu_cxx__operator____int___std__vector_int__std__allocator_int_____(&__i349, &__last343);
      agg_tmp2350 = r353;
      agg_tmp3351 = *&__const__ZSt13__heap_selectIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_less_iterEEvT_S9_S9_T0__agg_tmp3; // copy
      struct std__strong_ordering t354 = agg_tmp2350;
      struct std____cmp_cat____unspec t355 = agg_tmp3351;
      _Bool r356 = std__operator_(t354, t355);
      if (!r356) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp4357;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp5358;
        agg_tmp4357 = __i349; // copy
        agg_tmp5358 = __first341; // copy
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t359 = agg_tmp4357;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t360 = agg_tmp5358;
        _Bool r361 = bool___gnu_cxx____ops___Iter_less_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(&__comp344, t359, t360);
        if (r361) {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp6362;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp7363;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp8364;
          agg_tmp6362 = __first341; // copy
          agg_tmp7363 = __middle342; // copy
          agg_tmp8364 = __i349; // copy
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t365 = agg_tmp6362;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t366 = agg_tmp7363;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t367 = agg_tmp8364;
          void_std____pop_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(t365, t366, t367, &__comp344);
        }
    for_step352: ;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r368 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(&__i349);
    }
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEmmEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v369) {
bb370:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this371;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval372;
  this371 = v369;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t373 = this371;
  int* t374 = t373->_M_current;
  int c375 = -1;
  int* ptr376 = &(t374)[c375];
  t373->_M_current = ptr376;
  __retval372 = t373;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t377 = __retval372;
  return t377;
}

// function: _ZSt11__sort_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_less_iterEEvT_S9_RT0_
void void_std____sort_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v378, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v379, struct __gnu_cxx____ops___Iter_less_iter* v380) {
bb381:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first382;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last383;
  struct __gnu_cxx____ops___Iter_less_iter* __comp384;
  __first382 = v378;
  __last383 = v379;
  __comp384 = v380;
    while (1) {
      long r385 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last383, &__first382);
      long c386 = 1;
      _Bool c387 = ((r385 > c386)) ? 1 : 0;
      if (!c387) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0388;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1389;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2390;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r391 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__last383);
        agg_tmp0388 = __first382; // copy
        agg_tmp1389 = __last383; // copy
        agg_tmp2390 = __last383; // copy
        struct __gnu_cxx____ops___Iter_less_iter* t392 = __comp384;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t393 = agg_tmp0388;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t394 = agg_tmp1389;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t395 = agg_tmp2390;
        void_std____pop_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(t393, t394, t395, t392);
    }
  return;
}

// function: _ZSt14__partial_sortIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_less_iterEEvT_S9_S9_T0_
void void_std____partial_sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v396, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v397, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v398, struct __gnu_cxx____ops___Iter_less_iter v399) {
bb400:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first401;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __middle402;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last403;
  struct __gnu_cxx____ops___Iter_less_iter __comp404;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0405;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1406;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2407;
  struct __gnu_cxx____ops___Iter_less_iter agg_tmp3408;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp4409;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp5410;
  __first401 = v396;
  __middle402 = v397;
  __last403 = v398;
  __comp404 = v399;
  agg_tmp0405 = __first401; // copy
  agg_tmp1406 = __middle402; // copy
  agg_tmp2407 = __last403; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t411 = agg_tmp0405;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t412 = agg_tmp1406;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t413 = agg_tmp2407;
  struct __gnu_cxx____ops___Iter_less_iter t414 = agg_tmp3408;
  void_std____heap_select___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(t411, t412, t413, t414);
  agg_tmp4409 = __first401; // copy
  agg_tmp5410 = __middle402; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t415 = agg_tmp4409;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t416 = agg_tmp5410;
  void_std____sort_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(t415, t416, &__comp404);
  return;
}

// function: _ZN9__gnu_cxx5__ops16__iter_less_iterEv
struct __gnu_cxx____ops___Iter_less_iter __gnu_cxx____ops____iter_less_iter() {
bb417:
  struct __gnu_cxx____ops___Iter_less_iter __retval418;
  struct __gnu_cxx____ops___Iter_less_iter t419 = __retval418;
  return t419;
}

// function: _ZSt12partial_sortIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEvT_S7_S7_
void void_std__partial_sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v420, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v421, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v422) {
bb423:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first424;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __middle425;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last426;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0427;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1428;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2429;
  struct __gnu_cxx____ops___Iter_less_iter agg_tmp3430;
  __first424 = v420;
  __middle425 = v421;
  __last426 = v422;
  agg_tmp0427 = __first424; // copy
  agg_tmp1428 = __middle425; // copy
  agg_tmp2429 = __last426; // copy
  struct __gnu_cxx____ops___Iter_less_iter r431 = __gnu_cxx____ops____iter_less_iter();
  agg_tmp3430 = r431;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t432 = agg_tmp0427;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t433 = agg_tmp1428;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t434 = agg_tmp2429;
  struct __gnu_cxx____ops___Iter_less_iter t435 = agg_tmp3430;
  void_std____partial_sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_less_iter_(t432, t433, t434, t435);
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v436, int** v437) {
bb438:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this439;
  int** __i440;
  this439 = v436;
  __i440 = v437;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t441 = this439;
  int** t442 = __i440;
  int* t443 = *t442;
  t441->_M_current = t443;
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v444) {
bb445:
  struct std__vector_int__std__allocator_int__* this446;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval447;
  this446 = v444;
  struct std__vector_int__std__allocator_int__* t448 = this446;
  struct std___Vector_base_int__std__allocator_int__* base449 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t448 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base450 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base449->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval447, &base450->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t451 = __retval447;
  return t451;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEplEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v452, long v453) {
bb454:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this455;
  long __n456;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval457;
  int* ref_tmp0458;
  this455 = v452;
  __n456 = v453;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t459 = this455;
  int* t460 = t459->_M_current;
  long t461 = __n456;
  int* ptr462 = &(t460)[t461];
  ref_tmp0458 = ptr462;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval457, &ref_tmp0458);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t463 = __retval457;
  return t463;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v464) {
bb465:
  struct std__vector_int__std__allocator_int__* this466;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval467;
  this466 = v464;
  struct std__vector_int__std__allocator_int__* t468 = this466;
  struct std___Vector_base_int__std__allocator_int__* base469 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t468 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base470 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base469->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval467, &base470->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t471 = __retval467;
  return t471;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v472) {
bb473:
  struct std__vector_int__std__allocator_int__* this474;
  unsigned long __retval475;
  long __dif476;
  this474 = v472;
  struct std__vector_int__std__allocator_int__* t477 = this474;
  struct std___Vector_base_int__std__allocator_int__* base478 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t477 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base479 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base478->_M_impl) + 0);
  int* t480 = base479->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base481 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t477 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base482 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base481->_M_impl) + 0);
  int* t483 = base482->_M_start;
  long diff484 = t480 - t483;
  __dif476 = diff484;
    long t485 = __dif476;
    long c486 = 0;
    _Bool c487 = ((t485 < c486)) ? 1 : 0;
    if (c487) {
      __builtin_unreachable();
    }
  long t488 = __dif476;
  unsigned long cast489 = (unsigned long)t488;
  __retval475 = cast489;
  unsigned long t490 = __retval475;
  return t490;
}

// function: _ZNSt6vectorIiSaIiEEixEm
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* v491, unsigned long v492) {
bb493:
  struct std__vector_int__std__allocator_int__* this494;
  unsigned long __n495;
  int* __retval496;
  this494 = v491;
  __n495 = v492;
  struct std__vector_int__std__allocator_int__* t497 = this494;
    do {
          unsigned long t498 = __n495;
          unsigned long r499 = std__vector_int__std__allocator_int_____size___const(t497);
          _Bool c500 = ((t498 < r499)) ? 1 : 0;
          _Bool u501 = !c500;
          if (u501) {
            char* cast502 = (char*)&(_str_13);
            int c503 = 1263;
            char* cast504 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm);
            char* cast505 = (char*)&(_str_14);
            std____glibcxx_assert_fail(cast502, c503, cast504, cast505);
          }
      _Bool c506 = 0;
      if (!c506) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base507 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t497 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base508 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base507->_M_impl) + 0);
  int* t509 = base508->_M_start;
  unsigned long t510 = __n495;
  int* ptr511 = &(t509)[t510];
  __retval496 = ptr511;
  int* t512 = __retval496;
  return t512;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator__2(int v513, int v514) {
bb515:
  int __a516;
  int __b517;
  int __retval518;
  __a516 = v513;
  __b517 = v514;
  int t519 = __a516;
  int t520 = __b517;
  int b521 = t519 | t520;
  __retval518 = b521;
  int t522 = __retval518;
  return t522;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v523) {
bb524:
  struct std__basic_ios_char__std__char_traits_char__* this525;
  int __retval526;
  this525 = v523;
  struct std__basic_ios_char__std__char_traits_char__* t527 = this525;
  struct std__ios_base* base528 = (struct std__ios_base*)((char *)t527 + 0);
  int t529 = base528->_M_streambuf_state;
  __retval526 = t529;
  int t530 = __retval526;
  return t530;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v531, int v532) {
bb533:
  struct std__basic_ios_char__std__char_traits_char__* this534;
  int __state535;
  this534 = v531;
  __state535 = v532;
  struct std__basic_ios_char__std__char_traits_char__* t536 = this534;
  int r537 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t536);
  int t538 = __state535;
  int r539 = std__operator__2(r537, t538);
  std__basic_ios_char__std__char_traits_char_____clear(t536, r539);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v540, char* v541) {
bb542:
  char* __c1543;
  char* __c2544;
  _Bool __retval545;
  __c1543 = v540;
  __c2544 = v541;
  char* t546 = __c1543;
  char t547 = *t546;
  int cast548 = (int)t547;
  char* t549 = __c2544;
  char t550 = *t549;
  int cast551 = (int)t550;
  _Bool c552 = ((cast548 == cast551)) ? 1 : 0;
  __retval545 = c552;
  _Bool t553 = __retval545;
  return t553;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v554) {
bb555:
  char* __p556;
  unsigned long __retval557;
  unsigned long __i558;
  __p556 = v554;
  unsigned long c559 = 0;
  __i558 = c559;
    char ref_tmp0560;
    while (1) {
      unsigned long t561 = __i558;
      char* t562 = __p556;
      char* ptr563 = &(t562)[t561];
      char c564 = 0;
      ref_tmp0560 = c564;
      _Bool r565 = __gnu_cxx__char_traits_char___eq(ptr563, &ref_tmp0560);
      _Bool u566 = !r565;
      if (!u566) break;
      unsigned long t567 = __i558;
      unsigned long u568 = t567 + 1;
      __i558 = u568;
    }
  unsigned long t569 = __i558;
  __retval557 = t569;
  unsigned long t570 = __retval557;
  return t570;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v571) {
bb572:
  char* __s573;
  unsigned long __retval574;
  __s573 = v571;
    _Bool r575 = std____is_constant_evaluated();
    if (r575) {
      char* t576 = __s573;
      unsigned long r577 = __gnu_cxx__char_traits_char___length(t576);
      __retval574 = r577;
      unsigned long t578 = __retval574;
      return t578;
    }
  char* t579 = __s573;
  unsigned long r580 = strlen(t579);
  __retval574 = r580;
  unsigned long t581 = __retval574;
  return t581;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v582, char* v583) {
bb584:
  struct std__basic_ostream_char__std__char_traits_char__* __out585;
  char* __s586;
  struct std__basic_ostream_char__std__char_traits_char__* __retval587;
  __out585 = v582;
  __s586 = v583;
    char* t588 = __s586;
    _Bool cast589 = (_Bool)t588;
    _Bool u590 = !cast589;
    if (u590) {
      struct std__basic_ostream_char__std__char_traits_char__* t591 = __out585;
      void** v592 = (void**)t591;
      void* v593 = *((void**)v592);
      unsigned char* cast594 = (unsigned char*)v593;
      long c595 = -24;
      unsigned char* ptr596 = &(cast594)[c595];
      long* cast597 = (long*)ptr596;
      long t598 = *cast597;
      unsigned char* cast599 = (unsigned char*)t591;
      unsigned char* ptr600 = &(cast599)[t598];
      struct std__basic_ostream_char__std__char_traits_char__* cast601 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr600;
      struct std__basic_ios_char__std__char_traits_char__* cast602 = (struct std__basic_ios_char__std__char_traits_char__*)cast601;
      int t603 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast602, t603);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t604 = __out585;
      char* t605 = __s586;
      char* t606 = __s586;
      unsigned long r607 = std__char_traits_char___length(t606);
      long cast608 = (long)r607;
      struct std__basic_ostream_char__std__char_traits_char__* r609 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t604, t605, cast608);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t610 = __out585;
  __retval587 = t610;
  struct std__basic_ostream_char__std__char_traits_char__* t611 = __retval587;
  return t611;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSEOS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v612, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v613) {
bb614:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this615;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed616;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval617;
  this615 = v612;
  unnamed616 = v613;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t618 = this615;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t619 = unnamed616;
  int* t620 = t619->_M_current;
  t618->_M_current = t620;
  __retval617 = t618;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t621 = __retval617;
  return t621;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v622, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v623) {
bb624:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs625;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs626;
  _Bool __retval627;
  __lhs625 = v622;
  __rhs626 = v623;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t628 = __lhs625;
  int** r629 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t628);
  int* t630 = *r629;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t631 = __rhs626;
  int** r632 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t631);
  int* t633 = *r632;
  _Bool c634 = ((t630 == t633)) ? 1 : 0;
  __retval627 = c634;
  _Bool t635 = __retval627;
  return t635;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v636) {
bb637:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this638;
  int* __retval639;
  this638 = v636;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t640 = this638;
  int* t641 = t640->_M_current;
  __retval639 = t641;
  int* t642 = __retval639;
  return t642;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v643) {
bb644:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this645;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval646;
  this645 = v643;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t647 = this645;
  int* t648 = t647->_M_current;
  int c649 = 1;
  int* ptr650 = &(t648)[c649];
  t647->_M_current = ptr650;
  __retval646 = t647;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t651 = __retval646;
  return t651;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v652, void* v653) {
bb654:
  struct std__basic_ostream_char__std__char_traits_char__* this655;
  void* __pf656;
  struct std__basic_ostream_char__std__char_traits_char__* __retval657;
  this655 = v652;
  __pf656 = v653;
  struct std__basic_ostream_char__std__char_traits_char__* t658 = this655;
  void* t659 = __pf656;
  struct std__basic_ostream_char__std__char_traits_char__* r660 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t659)(t658);
  __retval657 = r660;
  struct std__basic_ostream_char__std__char_traits_char__* t661 = __retval657;
  return t661;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v662) {
bb663:
  struct std__basic_ostream_char__std__char_traits_char__* __os664;
  struct std__basic_ostream_char__std__char_traits_char__* __retval665;
  __os664 = v662;
  struct std__basic_ostream_char__std__char_traits_char__* t666 = __os664;
  struct std__basic_ostream_char__std__char_traits_char__* r667 = std__ostream__flush(t666);
  __retval665 = r667;
  struct std__basic_ostream_char__std__char_traits_char__* t668 = __retval665;
  return t668;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v669) {
bb670:
  struct std__ctype_char_* __f671;
  struct std__ctype_char_* __retval672;
  __f671 = v669;
    struct std__ctype_char_* t673 = __f671;
    _Bool cast674 = (_Bool)t673;
    _Bool u675 = !cast674;
    if (u675) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t676 = __f671;
  __retval672 = t676;
  struct std__ctype_char_* t677 = __retval672;
  return t677;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v678, char v679) {
bb680:
  struct std__ctype_char_* this681;
  char __c682;
  char __retval683;
  this681 = v678;
  __c682 = v679;
  struct std__ctype_char_* t684 = this681;
    char t685 = t684->_M_widen_ok;
    _Bool cast686 = (_Bool)t685;
    if (cast686) {
      char t687 = __c682;
      unsigned char cast688 = (unsigned char)t687;
      unsigned long cast689 = (unsigned long)cast688;
      char t690 = t684->_M_widen[cast689];
      __retval683 = t690;
      char t691 = __retval683;
      return t691;
    }
  std__ctype_char____M_widen_init___const(t684);
  char t692 = __c682;
  void** v693 = (void**)t684;
  void* v694 = *((void**)v693);
  char vcall697 = (char)__VERIFIER_virtual_call_char_char(t684, 6, t692);
  __retval683 = vcall697;
  char t698 = __retval683;
  return t698;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v699, char v700) {
bb701:
  struct std__basic_ios_char__std__char_traits_char__* this702;
  char __c703;
  char __retval704;
  this702 = v699;
  __c703 = v700;
  struct std__basic_ios_char__std__char_traits_char__* t705 = this702;
  struct std__ctype_char_* t706 = t705->_M_ctype;
  struct std__ctype_char_* r707 = std__ctype_char__const__std____check_facet_std__ctype_char___(t706);
  char t708 = __c703;
  char r709 = std__ctype_char___widen_char__const(r707, t708);
  __retval704 = r709;
  char t710 = __retval704;
  return t710;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v711) {
bb712:
  struct std__basic_ostream_char__std__char_traits_char__* __os713;
  struct std__basic_ostream_char__std__char_traits_char__* __retval714;
  __os713 = v711;
  struct std__basic_ostream_char__std__char_traits_char__* t715 = __os713;
  struct std__basic_ostream_char__std__char_traits_char__* t716 = __os713;
  void** v717 = (void**)t716;
  void* v718 = *((void**)v717);
  unsigned char* cast719 = (unsigned char*)v718;
  long c720 = -24;
  unsigned char* ptr721 = &(cast719)[c720];
  long* cast722 = (long*)ptr721;
  long t723 = *cast722;
  unsigned char* cast724 = (unsigned char*)t716;
  unsigned char* ptr725 = &(cast724)[t723];
  struct std__basic_ostream_char__std__char_traits_char__* cast726 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr725;
  struct std__basic_ios_char__std__char_traits_char__* cast727 = (struct std__basic_ios_char__std__char_traits_char__*)cast726;
  char c728 = 10;
  char r729 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast727, c728);
  struct std__basic_ostream_char__std__char_traits_char__* r730 = std__ostream__put(t715, r729);
  struct std__basic_ostream_char__std__char_traits_char__* r731 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r730);
  __retval714 = r731;
  struct std__basic_ostream_char__std__char_traits_char__* t732 = __retval714;
  return t732;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v733) {
bb734:
  struct std__vector_int__std__allocator_int__* this735;
  this735 = v733;
  struct std__vector_int__std__allocator_int__* t736 = this735;
    struct std___Vector_base_int__std__allocator_int__* base737 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t736 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base738 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base737->_M_impl) + 0);
    int* t739 = base738->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base740 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t736 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base741 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base740->_M_impl) + 0);
    int* t742 = base741->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base743 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t736 + 0);
    struct std__allocator_int_* r744 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base743);
    void_std___Destroy_int___int_(t739, t742, r744);
  {
    struct std___Vector_base_int__std__allocator_int__* base745 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t736 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base745);
  }
  return;
}

// function: main
int main() {
bb746:
  int __retval747;
  int myints748[9];
  struct std__vector_int__std__allocator_int__ myvector749;
  struct std__allocator_int_ ref_tmp0750;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it751;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0752;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1753;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1754;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2755;
  int c756 = 0;
  __retval747 = c756;
  // array copy
  __builtin_memcpy(myints748, __const_main_myints, (unsigned long)9 * sizeof(__const_main_myints[0]));
  int* cast757 = (int*)&(myints748);
  int* cast758 = (int*)&(myints748);
  int c759 = 9;
  int* ptr760 = &(cast758)[c759];
  std__allocator_int___allocator_2(&ref_tmp0750);
    std__vector_int__std__allocator_int_____vector_int___void_(&myvector749, cast757, ptr760, &ref_tmp0750);
  {
    std__allocator_int____allocator(&ref_tmp0750);
  }
    __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&it751);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r761 = std__vector_int__std__allocator_int_____begin(&myvector749);
    agg_tmp0752 = r761;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r762 = std__vector_int__std__allocator_int_____begin(&myvector749);
    ref_tmp1754 = r762;
    long c763 = 5;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r764 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&ref_tmp1754, c763);
    agg_tmp1753 = r764;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r765 = std__vector_int__std__allocator_int_____end(&myvector749);
    agg_tmp2755 = r765;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t766 = agg_tmp0752;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t767 = agg_tmp1753;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t768 = agg_tmp2755;
    void_std__partial_sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t766, t767, t768);
    unsigned long c769 = 0;
    int* r770 = std__vector_int__std__allocator_int_____operator__(&myvector749, c769);
    int t771 = *r770;
    int c772 = 1;
    _Bool c773 = ((t771 == c772)) ? 1 : 0;
    if (c773) {
    } else {
      char* cast774 = (char*)&(_str);
      char* c775 = _str_1;
      unsigned int c776 = 29;
      char* cast777 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast774, c775, c776, cast777);
    }
    unsigned long c778 = 1;
    int* r779 = std__vector_int__std__allocator_int_____operator__(&myvector749, c778);
    int t780 = *r779;
    int c781 = 2;
    _Bool c782 = ((t780 == c781)) ? 1 : 0;
    if (c782) {
    } else {
      char* cast783 = (char*)&(_str_2);
      char* c784 = _str_1;
      unsigned int c785 = 30;
      char* cast786 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast783, c784, c785, cast786);
    }
    unsigned long c787 = 2;
    int* r788 = std__vector_int__std__allocator_int_____operator__(&myvector749, c787);
    int t789 = *r788;
    int c790 = 3;
    _Bool c791 = ((t789 == c790)) ? 1 : 0;
    if (c791) {
    } else {
      char* cast792 = (char*)&(_str_3);
      char* c793 = _str_1;
      unsigned int c794 = 31;
      char* cast795 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast792, c793, c794, cast795);
    }
    unsigned long c796 = 3;
    int* r797 = std__vector_int__std__allocator_int_____operator__(&myvector749, c796);
    int t798 = *r797;
    int c799 = 4;
    _Bool c800 = ((t798 == c799)) ? 1 : 0;
    if (c800) {
    } else {
      char* cast801 = (char*)&(_str_4);
      char* c802 = _str_1;
      unsigned int c803 = 32;
      char* cast804 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast801, c802, c803, cast804);
    }
    unsigned long c805 = 4;
    int* r806 = std__vector_int__std__allocator_int_____operator__(&myvector749, c805);
    int t807 = *r806;
    int c808 = 4;
    _Bool c809 = ((t807 > c808)) ? 1 : 0;
    if (c809) {
    } else {
      char* cast810 = (char*)&(_str_5);
      char* c811 = _str_1;
      unsigned int c812 = 33;
      char* cast813 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast810, c811, c812, cast813);
    }
    unsigned long c814 = 5;
    int* r815 = std__vector_int__std__allocator_int_____operator__(&myvector749, c814);
    int t816 = *r815;
    int c817 = 4;
    _Bool c818 = ((t816 > c817)) ? 1 : 0;
    if (c818) {
    } else {
      char* cast819 = (char*)&(_str_6);
      char* c820 = _str_1;
      unsigned int c821 = 34;
      char* cast822 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast819, c820, c821, cast822);
    }
    unsigned long c823 = 6;
    int* r824 = std__vector_int__std__allocator_int_____operator__(&myvector749, c823);
    int t825 = *r824;
    int c826 = 4;
    _Bool c827 = ((t825 > c826)) ? 1 : 0;
    if (c827) {
    } else {
      char* cast828 = (char*)&(_str_7);
      char* c829 = _str_1;
      unsigned int c830 = 35;
      char* cast831 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast828, c829, c830, cast831);
    }
    unsigned long c832 = 7;
    int* r833 = std__vector_int__std__allocator_int_____operator__(&myvector749, c832);
    int t834 = *r833;
    int c835 = 4;
    _Bool c836 = ((t834 > c835)) ? 1 : 0;
    if (c836) {
    } else {
      char* cast837 = (char*)&(_str_8);
      char* c838 = _str_1;
      unsigned int c839 = 36;
      char* cast840 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast837, c838, c839, cast840);
    }
    unsigned long c841 = 8;
    int* r842 = std__vector_int__std__allocator_int_____operator__(&myvector749, c841);
    int t843 = *r842;
    int c844 = 4;
    _Bool c845 = ((t843 > c844)) ? 1 : 0;
    if (c845) {
    } else {
      char* cast846 = (char*)&(_str_9);
      char* c847 = _str_1;
      unsigned int c848 = 37;
      char* cast849 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast846, c847, c848, cast849);
    }
    char* cast850 = (char*)&(_str_10);
    struct std__basic_ostream_char__std__char_traits_char__* r851 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast850);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp2852;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp3853;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r854 = std__vector_int__std__allocator_int_____begin(&myvector749);
      ref_tmp2852 = r854;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r855 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it751, &ref_tmp2852);
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r857 = std__vector_int__std__allocator_int_____end(&myvector749);
        ref_tmp3853 = r857;
        _Bool r858 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it751, &ref_tmp3853);
        _Bool u859 = !r858;
        if (!u859) break;
        char* cast860 = (char*)&(_str_11);
        struct std__basic_ostream_char__std__char_traits_char__* r861 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast860);
        int* r862 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it751);
        int t863 = *r862;
        struct std__basic_ostream_char__std__char_traits_char__* r864 = std__ostream__operator__(r861, t863);
      for_step856: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r865 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(&it751);
      }
    struct std__basic_ostream_char__std__char_traits_char__* r866 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c867 = 0;
    __retval747 = c867;
    int t868 = __retval747;
    int ret_val869 = t868;
    {
      std__vector_int__std__allocator_int______vector(&myvector749);
    }
    return ret_val869;
  int t870 = __retval747;
  return t870;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v871) {
bb872:
  struct std____new_allocator_int_* this873;
  this873 = v871;
  struct std____new_allocator_int_* t874 = this873;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v875, struct std__allocator_int_* v876) {
bb877:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this878;
  struct std__allocator_int_* __a879;
  this878 = v875;
  __a879 = v876;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t880 = this878;
  struct std__allocator_int_* base881 = (struct std__allocator_int_*)((char *)t880 + 0);
  struct std__allocator_int_* t882 = __a879;
  std__allocator_int___allocator(base881, t882);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base883 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t880 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base883);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v884) {
bb885:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this886;
  this886 = v884;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t887 = this886;
  {
    struct std__allocator_int_* base888 = (struct std__allocator_int_*)((char *)t887 + 0);
    std__allocator_int____allocator(base888);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v889, struct std__allocator_int_* v890) {
bb891:
  struct std___Vector_base_int__std__allocator_int__* this892;
  struct std__allocator_int_* __a893;
  this892 = v889;
  __a893 = v890;
  struct std___Vector_base_int__std__allocator_int__* t894 = this892;
  struct std__allocator_int_* t895 = __a893;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t894->_M_impl, t895);
  return;
}

// function: _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_
long _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_(struct std__ranges____distance_fn* v896, int** v897, int* v898) {
bb899:
  struct std__ranges____distance_fn* this900;
  int** __first901;
  int* __last902;
  long __retval903;
  this900 = v896;
  __first901 = v897;
  __last902 = v898;
  struct std__ranges____distance_fn* t904 = this900;
  int* t905 = __last902;
  int** t906 = __first901;
  int* t907 = *t906;
  long diff908 = t905 - t907;
  __retval903 = diff908;
  long t909 = __retval903;
  return t909;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb910:
  _Bool __retval911;
    _Bool c912 = 0;
    __retval911 = c912;
    _Bool t913 = __retval911;
    return t913;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v914) {
bb915:
  struct std____new_allocator_int_* this916;
  unsigned long __retval917;
  this916 = v914;
  struct std____new_allocator_int_* t918 = this916;
  unsigned long c919 = 9223372036854775807;
  unsigned long c920 = 4;
  unsigned long b921 = c919 / c920;
  __retval917 = b921;
  unsigned long t922 = __retval917;
  return t922;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v923, unsigned long v924, void* v925) {
bb926:
  struct std____new_allocator_int_* this927;
  unsigned long __n928;
  void* unnamed929;
  int* __retval930;
  this927 = v923;
  __n928 = v924;
  unnamed929 = v925;
  struct std____new_allocator_int_* t931 = this927;
    unsigned long t932 = __n928;
    unsigned long r933 = std____new_allocator_int____M_max_size___const(t931);
    _Bool c934 = ((t932 > r933)) ? 1 : 0;
    if (c934) {
        unsigned long t935 = __n928;
        unsigned long c936 = -1;
        unsigned long c937 = 4;
        unsigned long b938 = c936 / c937;
        _Bool c939 = ((t935 > b938)) ? 1 : 0;
        if (c939) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c940 = 4;
    unsigned long c941 = 16;
    _Bool c942 = ((c940 > c941)) ? 1 : 0;
    if (c942) {
      unsigned long __al943;
      unsigned long c944 = 4;
      __al943 = c944;
      unsigned long t945 = __n928;
      unsigned long c946 = 4;
      unsigned long b947 = t945 * c946;
      unsigned long t948 = __al943;
      void* r949 = operator_new_2(b947, t948);
      int* cast950 = (int*)r949;
      __retval930 = cast950;
      int* t951 = __retval930;
      return t951;
    }
  unsigned long t952 = __n928;
  unsigned long c953 = 4;
  unsigned long b954 = t952 * c953;
  void* r955 = operator_new(b954);
  int* cast956 = (int*)r955;
  __retval930 = cast956;
  int* t957 = __retval930;
  return t957;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v958, unsigned long v959) {
bb960:
  struct std__allocator_int_* this961;
  unsigned long __n962;
  int* __retval963;
  this961 = v958;
  __n962 = v959;
  struct std__allocator_int_* t964 = this961;
    _Bool r965 = std____is_constant_evaluated();
    if (r965) {
        unsigned long t966 = __n962;
        unsigned long c967 = 4;
        unsigned long ovr968;
        _Bool ovf969 = __builtin_mul_overflow(t966, c967, &ovr968);
        __n962 = ovr968;
        if (ovf969) {
          std____throw_bad_array_new_length();
        }
      unsigned long t970 = __n962;
      void* r971 = operator_new(t970);
      int* cast972 = (int*)r971;
      __retval963 = cast972;
      int* t973 = __retval963;
      return t973;
    }
  struct std____new_allocator_int_* base974 = (struct std____new_allocator_int_*)((char *)t964 + 0);
  unsigned long t975 = __n962;
  void* c976 = ((void*)0);
  int* r977 = std____new_allocator_int___allocate(base974, t975, c976);
  __retval963 = r977;
  int* t978 = __retval963;
  return t978;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v979, unsigned long v980) {
bb981:
  struct std__allocator_int_* __a982;
  unsigned long __n983;
  int* __retval984;
  __a982 = v979;
  __n983 = v980;
  struct std__allocator_int_* t985 = __a982;
  unsigned long t986 = __n983;
  int* r987 = std__allocator_int___allocate(t985, t986);
  __retval984 = r987;
  int* t988 = __retval984;
  return t988;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v989, unsigned long v990) {
bb991:
  struct std___Vector_base_int__std__allocator_int__* this992;
  unsigned long __n993;
  int* __retval994;
  this992 = v989;
  __n993 = v990;
  struct std___Vector_base_int__std__allocator_int__* t995 = this992;
  unsigned long t996 = __n993;
  unsigned long c997 = 0;
  _Bool c998 = ((t996 != c997)) ? 1 : 0;
  int* ternary999;
  if (c998) {
    struct std__allocator_int_* base1000 = (struct std__allocator_int_*)((char *)&(t995->_M_impl) + 0);
    unsigned long t1001 = __n993;
    int* r1002 = std__allocator_traits_std__allocator_int_____allocate(base1000, t1001);
    ternary999 = (int*)r1002;
  } else {
    int* c1003 = ((void*)0);
    ternary999 = (int*)c1003;
  }
  __retval994 = ternary999;
  int* t1004 = __retval994;
  return t1004;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v1005, unsigned long* v1006) {
bb1007:
  unsigned long* __a1008;
  unsigned long* __b1009;
  unsigned long* __retval1010;
  __a1008 = v1005;
  __b1009 = v1006;
    unsigned long* t1011 = __b1009;
    unsigned long t1012 = *t1011;
    unsigned long* t1013 = __a1008;
    unsigned long t1014 = *t1013;
    _Bool c1015 = ((t1012 < t1014)) ? 1 : 0;
    if (c1015) {
      unsigned long* t1016 = __b1009;
      __retval1010 = t1016;
      unsigned long* t1017 = __retval1010;
      return t1017;
    }
  unsigned long* t1018 = __a1008;
  __retval1010 = t1018;
  unsigned long* t1019 = __retval1010;
  return t1019;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v1020) {
bb1021:
  struct std__allocator_int_* __a1022;
  unsigned long __retval1023;
  unsigned long __diffmax1024;
  unsigned long __allocmax1025;
  __a1022 = v1020;
  unsigned long c1026 = 2305843009213693951;
  __diffmax1024 = c1026;
  unsigned long c1027 = 4611686018427387903;
  __allocmax1025 = c1027;
  unsigned long* r1028 = unsigned_long_const__std__min_unsigned_long_(&__diffmax1024, &__allocmax1025);
  unsigned long t1029 = *r1028;
  __retval1023 = t1029;
  unsigned long t1030 = __retval1023;
  return t1030;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v1031, struct std__allocator_int_* v1032) {
bb1033:
  struct std__allocator_int_* this1034;
  struct std__allocator_int_* __a1035;
  this1034 = v1031;
  __a1035 = v1032;
  struct std__allocator_int_* t1036 = this1034;
  struct std____new_allocator_int_* base1037 = (struct std____new_allocator_int_*)((char *)t1036 + 0);
  struct std__allocator_int_* t1038 = __a1035;
  struct std____new_allocator_int_* base1039 = (struct std____new_allocator_int_*)((char *)t1038 + 0);
  std____new_allocator_int_____new_allocator(base1037, base1039);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v1040, struct std__allocator_int_* v1041) {
bb1042:
  unsigned long __n1043;
  struct std__allocator_int_* __a1044;
  unsigned long __retval1045;
  __n1043 = v1040;
  __a1044 = v1041;
    struct std__allocator_int_ ref_tmp01046;
    _Bool tmp_exprcleanup1047;
    unsigned long t1048 = __n1043;
    struct std__allocator_int_* t1049 = __a1044;
    std__allocator_int___allocator(&ref_tmp01046, t1049);
      unsigned long r1050 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp01046);
      _Bool c1051 = ((t1048 > r1050)) ? 1 : 0;
      tmp_exprcleanup1047 = c1051;
    {
      std__allocator_int____allocator(&ref_tmp01046);
    }
    _Bool t1052 = tmp_exprcleanup1047;
    if (t1052) {
      char* cast1053 = (char*)&(_str_12);
      std____throw_length_error(cast1053);
    }
  unsigned long t1054 = __n1043;
  __retval1045 = t1054;
  unsigned long t1055 = __retval1045;
  return t1055;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v1056) {
bb1057:
  struct std___Vector_base_int__std__allocator_int__* this1058;
  struct std__allocator_int_* __retval1059;
  this1058 = v1056;
  struct std___Vector_base_int__std__allocator_int__* t1060 = this1058;
  struct std__allocator_int_* base1061 = (struct std__allocator_int_*)((char *)&(t1060->_M_impl) + 0);
  __retval1059 = base1061;
  struct std__allocator_int_* t1062 = __retval1059;
  return t1062;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1063:
  _Bool __retval1064;
    _Bool c1065 = 0;
    __retval1064 = c1065;
    _Bool t1066 = __retval1064;
    return t1066;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1067, int** v1068) {
bb1069:
  struct std___UninitDestroyGuard_int____void_* this1070;
  int** __first1071;
  this1070 = v1067;
  __first1071 = v1068;
  struct std___UninitDestroyGuard_int____void_* t1072 = this1070;
  int** t1073 = __first1071;
  int* t1074 = *t1073;
  t1072->_M_first = t1074;
  int** t1075 = __first1071;
  t1072->_M_cur = t1075;
  return;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v1076, int* v1077) {
bb1078:
  int* __location1079;
  int* __args1080;
  int* __retval1081;
  void* __loc1082;
  __location1079 = v1076;
  __args1080 = v1077;
  int* t1083 = __location1079;
  void* cast1084 = (void*)t1083;
  __loc1082 = cast1084;
    void* t1085 = __loc1082;
    int* cast1086 = (int*)t1085;
    int* t1087 = __args1080;
    int t1088 = *t1087;
    *cast1086 = t1088;
    __retval1081 = cast1086;
    int* t1089 = __retval1081;
    return t1089;
  abort();
}

// function: _ZSt10_ConstructIiJRiEEvPT_DpOT0_
void void_std___Construct_int__int__(int* v1090, int* v1091) {
bb1092:
  int* __p1093;
  int* __args1094;
  __p1093 = v1090;
  __args1094 = v1091;
    _Bool r1095 = std____is_constant_evaluated();
    if (r1095) {
      int* t1096 = __p1093;
      int* t1097 = __args1094;
      int* r1098 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t1096, t1097);
      return;
    }
  int* t1099 = __p1093;
  void* cast1100 = (void*)t1099;
  int* cast1101 = (int*)cast1100;
  int* t1102 = __args1094;
  int t1103 = *t1102;
  *cast1101 = t1103;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v1104) {
bb1105:
  struct std___UninitDestroyGuard_int____void_* this1106;
  this1106 = v1104;
  struct std___UninitDestroyGuard_int____void_* t1107 = this1106;
  int** c1108 = ((void*)0);
  t1107->_M_cur = c1108;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1109) {
bb1110:
  struct std___UninitDestroyGuard_int____void_* this1111;
  this1111 = v1109;
  struct std___UninitDestroyGuard_int____void_* t1112 = this1111;
    int** t1113 = t1112->_M_cur;
    int** c1114 = ((void*)0);
    _Bool c1115 = ((t1113 != c1114)) ? 1 : 0;
    if (c1115) {
      int* t1116 = t1112->_M_first;
      int** t1117 = t1112->_M_cur;
      int* t1118 = *t1117;
      void_std___Destroy_int__(t1116, t1118);
    }
  return;
}

// function: _ZSt16__do_uninit_copyIPiS0_S0_ET1_T_T0_S1_
int* int__std____do_uninit_copy_int___int___int__(int* v1119, int* v1120, int* v1121) {
bb1122:
  int* __first1123;
  int* __last1124;
  int* __result1125;
  int* __retval1126;
  struct std___UninitDestroyGuard_int____void_ __guard1127;
  __first1123 = v1119;
  __last1124 = v1120;
  __result1125 = v1121;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard1127, &__result1125);
      while (1) {
        int* t1129 = __first1123;
        int* t1130 = __last1124;
        _Bool c1131 = ((t1129 != t1130)) ? 1 : 0;
        if (!c1131) break;
        int* t1132 = __result1125;
        int* t1133 = __first1123;
        void_std___Construct_int__int__(t1132, t1133);
      for_step1128: ;
        int* t1134 = __first1123;
        int c1135 = 1;
        int* ptr1136 = &(t1134)[c1135];
        __first1123 = ptr1136;
        int* t1137 = __result1125;
        int c1138 = 1;
        int* ptr1139 = &(t1137)[c1138];
        __result1125 = ptr1139;
      }
    std___UninitDestroyGuard_int___void___release(&__guard1127);
    int* t1140 = __result1125;
    __retval1126 = t1140;
    int* t1141 = __retval1126;
    int* ret_val1142 = t1141;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1127);
    }
    return ret_val1142;
  abort();
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v1143) {
bb1144:
  int* __it1145;
  int* __retval1146;
  __it1145 = v1143;
  int* t1147 = __it1145;
  __retval1146 = t1147;
  int* t1148 = __retval1146;
  return t1148;
}

// function: _ZSt18uninitialized_copyIPiS0_ET0_T_S2_S1_
int* int__std__uninitialized_copy_int___int__(int* v1149, int* v1150, int* v1151) {
bb1152:
  int* __first1153;
  int* __last1154;
  int* __result1155;
  int* __retval1156;
  __first1153 = v1149;
  __last1154 = v1150;
  __result1155 = v1151;
      long __n1157;
      int* t1158 = __last1154;
      int* t1159 = __first1153;
      long diff1160 = t1158 - t1159;
      __n1157 = diff1160;
        long t1161 = __n1157;
        long c1162 = 0;
        _Bool c1163 = ((t1161 > c1162)) ? 1 : 0;
        if (c1163) {
          int* t1164 = __result1155;
          int* r1165 = int__std____niter_base_int__(t1164);
          void* cast1166 = (void*)r1165;
          int* t1167 = __first1153;
          int* r1168 = int__std____niter_base_int__(t1167);
          void* cast1169 = (void*)r1168;
          long t1170 = __n1157;
          unsigned long cast1171 = (unsigned long)t1170;
          unsigned long c1172 = 4;
          unsigned long b1173 = cast1171 * c1172;
          void* r1174 = memcpy(cast1166, cast1169, b1173);
          long t1175 = __n1157;
          int* t1176 = __result1155;
          int* ptr1177 = &(t1176)[t1175];
          __result1155 = ptr1177;
        }
      int* t1178 = __result1155;
      __retval1156 = t1178;
      int* t1179 = __retval1156;
      return t1179;
  abort();
}

// function: _ZSt22__uninitialized_copy_aIPiS0_S0_iET1_T_T0_S1_RSaIT2_E
int* int__std____uninitialized_copy_a_int___int___int___int_(int* v1180, int* v1181, int* v1182, struct std__allocator_int_* v1183) {
bb1184:
  int* __first1185;
  int* __last1186;
  int* __result1187;
  struct std__allocator_int_* unnamed1188;
  int* __retval1189;
  __first1185 = v1180;
  __last1186 = v1181;
  __result1187 = v1182;
  unnamed1188 = v1183;
    _Bool r1190 = std__is_constant_evaluated();
    if (r1190) {
      int* t1191 = __first1185;
      int* t1192 = __last1186;
      int* t1193 = __result1187;
      int* r1194 = int__std____do_uninit_copy_int___int___int__(t1191, t1192, t1193);
      __retval1189 = r1194;
      int* t1195 = __retval1189;
      return t1195;
    }
    int* t1196 = __first1185;
    int* t1197 = __last1186;
    int* t1198 = __result1187;
    int* r1199 = int__std__uninitialized_copy_int___int__(t1196, t1197, t1198);
    __retval1189 = r1199;
    int* t1200 = __retval1189;
    return t1200;
  abort();
}

// function: _ZNSt6vectorIiSaIiEE21_M_range_initialize_nIPiS3_EEvT_T0_m
void void_std__vector_int__std__allocator_int______M_range_initialize_n_int___int__(struct std__vector_int__std__allocator_int__* v1201, int* v1202, int* v1203, unsigned long v1204) {
bb1205:
  struct std__vector_int__std__allocator_int__* this1206;
  int* __first1207;
  int* __last1208;
  unsigned long __n1209;
  int* __start1210;
  this1206 = v1201;
  __first1207 = v1202;
  __last1208 = v1203;
  __n1209 = v1204;
  struct std__vector_int__std__allocator_int__* t1211 = this1206;
  struct std___Vector_base_int__std__allocator_int__* base1212 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1211 + 0);
  unsigned long t1213 = __n1209;
  struct std___Vector_base_int__std__allocator_int__* base1214 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1211 + 0);
  struct std__allocator_int_* r1215 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1214);
  unsigned long r1216 = std__vector_int__std__allocator_int______S_check_init_len(t1213, r1215);
  int* r1217 = std___Vector_base_int__std__allocator_int______M_allocate(base1212, r1216);
  __start1210 = r1217;
  int* t1218 = __start1210;
  struct std___Vector_base_int__std__allocator_int__* base1219 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1211 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1220 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1219->_M_impl) + 0);
  base1220->_M_finish = t1218;
  struct std___Vector_base_int__std__allocator_int__* base1221 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1211 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1222 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1221->_M_impl) + 0);
  base1222->_M_start = t1218;
  int* t1223 = __start1210;
  unsigned long t1224 = __n1209;
  int* ptr1225 = &(t1223)[t1224];
  struct std___Vector_base_int__std__allocator_int__* base1226 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1211 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1227 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1226->_M_impl) + 0);
  base1227->_M_end_of_storage = ptr1225;
  int* t1228 = __first1207;
  int* t1229 = __last1208;
  int* t1230 = __start1210;
  struct std___Vector_base_int__std__allocator_int__* base1231 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1211 + 0);
  struct std__allocator_int_* r1232 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1231);
  int* r1233 = int__std____uninitialized_copy_a_int___int___int___int_(t1228, t1229, t1230, r1232);
  struct std___Vector_base_int__std__allocator_int__* base1234 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1211 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1235 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1234->_M_impl) + 0);
  base1235->_M_finish = r1233;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1236, int* v1237, unsigned long v1238) {
bb1239:
  struct std____new_allocator_int_* this1240;
  int* __p1241;
  unsigned long __n1242;
  this1240 = v1236;
  __p1241 = v1237;
  __n1242 = v1238;
  struct std____new_allocator_int_* t1243 = this1240;
    unsigned long c1244 = 4;
    unsigned long c1245 = 16;
    _Bool c1246 = ((c1244 > c1245)) ? 1 : 0;
    if (c1246) {
      int* t1247 = __p1241;
      void* cast1248 = (void*)t1247;
      unsigned long t1249 = __n1242;
      unsigned long c1250 = 4;
      unsigned long b1251 = t1249 * c1250;
      unsigned long c1252 = 4;
      operator_delete_3(cast1248, b1251, c1252);
      return;
    }
  int* t1253 = __p1241;
  void* cast1254 = (void*)t1253;
  unsigned long t1255 = __n1242;
  unsigned long c1256 = 4;
  unsigned long b1257 = t1255 * c1256;
  operator_delete_2(cast1254, b1257);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1258, int* v1259, unsigned long v1260) {
bb1261:
  struct std__allocator_int_* this1262;
  int* __p1263;
  unsigned long __n1264;
  this1262 = v1258;
  __p1263 = v1259;
  __n1264 = v1260;
  struct std__allocator_int_* t1265 = this1262;
    _Bool r1266 = std____is_constant_evaluated();
    if (r1266) {
      int* t1267 = __p1263;
      void* cast1268 = (void*)t1267;
      operator_delete(cast1268);
      return;
    }
  struct std____new_allocator_int_* base1269 = (struct std____new_allocator_int_*)((char *)t1265 + 0);
  int* t1270 = __p1263;
  unsigned long t1271 = __n1264;
  std____new_allocator_int___deallocate(base1269, t1270, t1271);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1272, int* v1273, unsigned long v1274) {
bb1275:
  struct std__allocator_int_* __a1276;
  int* __p1277;
  unsigned long __n1278;
  __a1276 = v1272;
  __p1277 = v1273;
  __n1278 = v1274;
  struct std__allocator_int_* t1279 = __a1276;
  int* t1280 = __p1277;
  unsigned long t1281 = __n1278;
  std__allocator_int___deallocate(t1279, t1280, t1281);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v1282, int* v1283, unsigned long v1284) {
bb1285:
  struct std___Vector_base_int__std__allocator_int__* this1286;
  int* __p1287;
  unsigned long __n1288;
  this1286 = v1282;
  __p1287 = v1283;
  __n1288 = v1284;
  struct std___Vector_base_int__std__allocator_int__* t1289 = this1286;
    int* t1290 = __p1287;
    _Bool cast1291 = (_Bool)t1290;
    if (cast1291) {
      struct std__allocator_int_* base1292 = (struct std__allocator_int_*)((char *)&(t1289->_M_impl) + 0);
      int* t1293 = __p1287;
      unsigned long t1294 = __n1288;
      std__allocator_traits_std__allocator_int_____deallocate(base1292, t1293, t1294);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1295) {
bb1296:
  struct std___Vector_base_int__std__allocator_int__* this1297;
  this1297 = v1295;
  struct std___Vector_base_int__std__allocator_int__* t1298 = this1297;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1299 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1298->_M_impl) + 0);
    int* t1300 = base1299->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1301 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1298->_M_impl) + 0);
    int* t1302 = base1301->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1303 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1298->_M_impl) + 0);
    int* t1304 = base1303->_M_start;
    long diff1305 = t1302 - t1304;
    unsigned long cast1306 = (unsigned long)diff1305;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1298, t1300, cast1306);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1298->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1307, struct std____new_allocator_int_* v1308) {
bb1309:
  struct std____new_allocator_int_* this1310;
  struct std____new_allocator_int_* unnamed1311;
  this1310 = v1307;
  unnamed1311 = v1308;
  struct std____new_allocator_int_* t1312 = this1310;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1313) {
bb1314:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1315;
  this1315 = v1313;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1316 = this1315;
  int* c1317 = ((void*)0);
  t1316->_M_start = c1317;
  int* c1318 = ((void*)0);
  t1316->_M_finish = c1318;
  int* c1319 = ((void*)0);
  t1316->_M_end_of_storage = c1319;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1320) {
bb1321:
  int* __location1322;
  __location1322 = v1320;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1323, int* v1324) {
bb1325:
  int* __first1326;
  int* __last1327;
  __first1326 = v1323;
  __last1327 = v1324;
      _Bool r1328 = std____is_constant_evaluated();
      if (r1328) {
          while (1) {
            int* t1330 = __first1326;
            int* t1331 = __last1327;
            _Bool c1332 = ((t1330 != t1331)) ? 1 : 0;
            if (!c1332) break;
            int* t1333 = __first1326;
            void_std__destroy_at_int_(t1333);
          for_step1329: ;
            int* t1334 = __first1326;
            int c1335 = 1;
            int* ptr1336 = &(t1334)[c1335];
            __first1326 = ptr1336;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1337, int* v1338, struct std__allocator_int_* v1339) {
bb1340:
  int* __first1341;
  int* __last1342;
  struct std__allocator_int_* unnamed1343;
  __first1341 = v1337;
  __last1342 = v1338;
  unnamed1343 = v1339;
  int* t1344 = __first1341;
  int* t1345 = __last1342;
  void_std___Destroy_int__(t1344, t1345);
  return;
}

