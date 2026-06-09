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
struct __gnu_cxx____ops___Iter_comp_iter_myclass_ { unsigned char __field0; };
struct __gnu_cxx____ops___Iter_comp_val_myclass_ { unsigned char __field0; };
struct __gnu_cxx____ops___Val_comp_iter_myclass_ { unsigned char __field0; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct myclass { unsigned char __field0; };
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
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__ranges____distance_fn { unsigned char __field0; };
struct std__strong_ordering { char _M_value; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int __field5; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_myints1[3] = {12, 32, 71};
int __const_main_myints[3] = {32, 71, 12};
struct std____cmp_cat____unspec __const__ZSt21__unguarded_partitionIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_comp_iterI7myclassEEET_SB_SB_SB_T0__agg_tmp5;
struct std____cmp_cat____unspec __const__ZSt13__heap_selectIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_comp_iterI7myclassEEEvT_SB_SB_T0__agg_tmp3;
struct myclass myobject;
char _str[18] = "myvector[0] == 12";
char _str_1[121] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm40_sort2-c++03/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[18] = "myvector[1] == 32";
char _str_3[18] = "myvector[2] == 71";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_4[49] = "cannot create std::vector larger than max_size()";
struct std____detail___Synth3way _ZNSt8__detail11__synth3wayE;
char _str_5[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_6[19] = "__n < this->size()";
_Bool myfunction(int p0, int p1);
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector_int___void_(struct std__vector_int__std__allocator_int__* p0, int* p1, int* p2, struct std__allocator_int_* p3);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
void __gnu_cxx____ops___Iter_comp_val_myclass____Iter_comp_val(struct __gnu_cxx____ops___Iter_comp_val_myclass_* p0, struct __gnu_cxx____ops___Iter_comp_iter_myclass_* p1);
_Bool myclass__operator__(struct myclass* p0, int p1, int p2);
_Bool bool___gnu_cxx____ops___Iter_comp_val_myclass___operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____ops___Iter_comp_val_myclass_* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2);
void void_std____push_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_comp_val_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, long p1, long p2, int p3, struct __gnu_cxx____ops___Iter_comp_val_myclass_* p4);
void void_std____adjust_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, long p1, long p2, int p3, struct __gnu_cxx____ops___Iter_comp_iter_myclass_ p4);
void void_std____make_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____ops___Iter_comp_iter_myclass_* p2);
_Bool std__operator_(struct std__strong_ordering p0, struct std____cmp_cat____unspec p1);
struct std__strong_ordering _ZNKSt8__detail10_Synth3wayclIPiS2_EEDaRKT_RKT0_QrqXltfp_fp0_RNS_18__boolean_testableEXltfp0_fp_RNS_18__boolean_testableEE(struct std____detail___Synth3way* p0, int** p1, int** p2);
struct std__strong_ordering decltype__std____detail____synth3way__std__declval_int_________std__declval_int___________gnu_cxx__operator____int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
_Bool bool___gnu_cxx____ops___Iter_comp_iter_myclass___operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____ops___Iter_comp_iter_myclass_* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
void void_std____pop_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, struct __gnu_cxx____ops___Iter_comp_iter_myclass_* p3);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
void void_std____heap_select___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, struct __gnu_cxx____ops___Iter_comp_iter_myclass_ p3);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
void void_std____sort_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____ops___Iter_comp_iter_myclass_* p2);
void void_std____partial_sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, struct __gnu_cxx____ops___Iter_comp_iter_myclass_ p3);
void std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(int* p0, int* p1);
void void_std__iter_swap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1);
void void_std____move_median_to_first___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p3, struct __gnu_cxx____ops___Iter_comp_iter_myclass_ p4);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____unguarded_partition___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, struct __gnu_cxx____ops___Iter_comp_iter_myclass_ p3);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____unguarded_partition_pivot___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____ops___Iter_comp_iter_myclass_ p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
void void_std____introsort_loop___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long____gnu_cxx____ops___Iter_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, long p2, struct __gnu_cxx____ops___Iter_comp_iter_myclass_ p3);
int int_std____countl_zero_unsigned_long_(unsigned long p0);
int int_std____bit_width_unsigned_long_(unsigned long p0);
long long_std____lg_long_(long p0);
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____niter_wrap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, int* p1);
long std__iterator_traits_int____difference_type_std____distance_int__(int* p0, int* p1, struct std__random_access_iterator_tag p2);
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** p0);
long std__iterator_traits_int____difference_type_std__distance_int__(int* p0, int* p1);
void void_std____advance_int___long_(int** p0, long p1, struct std__random_access_iterator_tag p2);
void void_std__advance_int___long_(int** p0, long p1);
extern void* memmove(void* p0, void* p1, unsigned long p2);
void void_std____assign_one_true__int___int__(int** p0, int** p1);
int* int__std____copy_move_backward_a2_true__int___int__(int* p0, int* p1, int* p2);
int* int__std____copy_move_backward_a1_true__int___int__(int* p0, int* p1, int* p2);
int* int__std____niter_base_int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____copy_move_backward_a_true____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__move_backward___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
_Bool bool___gnu_cxx____ops___Val_comp_iter_myclass___operator___int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____ops___Val_comp_iter_myclass_* p0, int* p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
void void_std____unguarded_linear_insert___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Val_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____ops___Val_comp_iter_myclass_ p1);
void __gnu_cxx____ops___Val_comp_iter_myclass____Val_comp_iter(struct __gnu_cxx____ops___Val_comp_iter_myclass_* p0, struct __gnu_cxx____ops___Iter_comp_iter_myclass_* p1);
struct __gnu_cxx____ops___Val_comp_iter_myclass_ __gnu_cxx____ops___Val_comp_iter_myclass____gnu_cxx____ops____val_comp_iter_myclass_(struct __gnu_cxx____ops___Iter_comp_iter_myclass_ p0);
void void_std____insertion_sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____ops___Iter_comp_iter_myclass_ p2);
void void_std____unguarded_insertion_sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____ops___Iter_comp_iter_myclass_ p2);
void void_std____final_insertion_sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____ops___Iter_comp_iter_myclass_ p2);
void void_std____sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____ops___Iter_comp_iter_myclass_ p2);
void __gnu_cxx____ops___Iter_comp_iter_myclass____Iter_comp_iter(struct __gnu_cxx____ops___Iter_comp_iter_myclass_* p0, struct myclass p1);
struct __gnu_cxx____ops___Iter_comp_iter_myclass_ __gnu_cxx____ops___Iter_comp_iter_myclass____gnu_cxx____ops____iter_comp_iter_myclass_(struct myclass p0);
void void_std__sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______myclass_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct myclass p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
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

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v50, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v51) {
bb52:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs53;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs54;
  _Bool __retval55;
  __lhs53 = v50;
  __rhs54 = v51;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t56 = __lhs53;
  int** r57 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t56);
  int* t58 = *r57;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t59 = __rhs54;
  int** r60 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t59);
  int* t61 = *r60;
  _Bool c62 = ((t58 == t61)) ? 1 : 0;
  __retval55 = c62;
  _Bool t63 = __retval55;
  return t63;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v64, int** v65) {
bb66:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this67;
  int** __i68;
  this67 = v64;
  __i68 = v65;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t69 = this67;
  int** t70 = __i68;
  int* t71 = *t70;
  t69->_M_current = t71;
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEplEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v72, long v73) {
bb74:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this75;
  long __n76;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval77;
  int* ref_tmp078;
  this75 = v72;
  __n76 = v73;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t79 = this75;
  int* t80 = t79->_M_current;
  long t81 = __n76;
  int* ptr82 = &(t80)[t81];
  ref_tmp078 = ptr82;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval77, &ref_tmp078);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t83 = __retval77;
  return t83;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v84) {
bb85:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this86;
  int* __retval87;
  this86 = v84;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t88 = this86;
  int* t89 = t88->_M_current;
  __retval87 = t89;
  int* t90 = __retval87;
  return t90;
}

// function: _ZN9__gnu_cxx5__ops14_Iter_comp_valI7myclassEC2EONS0_15_Iter_comp_iterIS2_EE
void __gnu_cxx____ops___Iter_comp_val_myclass____Iter_comp_val(struct __gnu_cxx____ops___Iter_comp_val_myclass_* v91, struct __gnu_cxx____ops___Iter_comp_iter_myclass_* v92) {
bb93:
  struct __gnu_cxx____ops___Iter_comp_val_myclass_* this94;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_* __comp95;
  this94 = v91;
  __comp95 = v92;
  return;
}

// function: _ZN7myclassclEii
_Bool myclass__operator__(struct myclass* v96, int v97, int v98) {
bb99:
  struct myclass* this100;
  int i101;
  int j102;
  _Bool __retval103;
  this100 = v96;
  i101 = v97;
  j102 = v98;
  struct myclass* t104 = this100;
  int t105 = i101;
  int t106 = j102;
  _Bool c107 = ((t105 < t106)) ? 1 : 0;
  __retval103 = c107;
  _Bool t108 = __retval103;
  return t108;
}

// function: _ZN9__gnu_cxx5__ops14_Iter_comp_valI7myclassEclINS_17__normal_iteratorIPiSt6vectorIiSaIiEEEEiEEbT_RT0_
_Bool bool___gnu_cxx____ops___Iter_comp_val_myclass___operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____ops___Iter_comp_val_myclass_* v109, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v110, int* v111) {
bb112:
  struct __gnu_cxx____ops___Iter_comp_val_myclass_* this113;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it114;
  int* __val115;
  _Bool __retval116;
  this113 = v109;
  __it114 = v110;
  __val115 = v111;
  struct __gnu_cxx____ops___Iter_comp_val_myclass_* t117 = this113;
  struct myclass* cast118 = (struct myclass*)t117;
  int* r119 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it114);
  int t120 = *r119;
  int* t121 = __val115;
  int t122 = *t121;
  _Bool r123 = myclass__operator__(cast118, t120, t122);
  __retval116 = r123;
  _Bool t124 = __retval116;
  return t124;
}

// function: _ZSt11__push_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEliNS0_5__ops14_Iter_comp_valI7myclassEEEvT_T0_SC_T1_RT2_
void void_std____push_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_comp_val_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v125, long v126, long v127, int v128, struct __gnu_cxx____ops___Iter_comp_val_myclass_* v129) {
bb130:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first131;
  long __holeIndex132;
  long __topIndex133;
  int __value134;
  struct __gnu_cxx____ops___Iter_comp_val_myclass_* __comp135;
  long __parent136;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp2137;
  __first131 = v125;
  __holeIndex132 = v126;
  __topIndex133 = v127;
  __value134 = v128;
  __comp135 = v129;
  long t138 = __holeIndex132;
  long c139 = 1;
  long b140 = t138 - c139;
  long c141 = 2;
  long b142 = b140 / c141;
  __parent136 = b142;
    while (1) {
      long t143 = __holeIndex132;
      long t144 = __topIndex133;
      _Bool c145 = ((t143 > t144)) ? 1 : 0;
      _Bool ternary146;
      if (c145) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0147;
        struct __gnu_cxx____ops___Iter_comp_val_myclass_* t148 = __comp135;
        long t149 = __parent136;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r150 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first131, t149);
        agg_tmp0147 = r150;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t151 = agg_tmp0147;
        _Bool r152 = bool___gnu_cxx____ops___Iter_comp_val_myclass___operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(t148, t151, &__value134);
        ternary146 = (_Bool)r152;
      } else {
        _Bool c153 = 0;
        ternary146 = (_Bool)c153;
      }
      if (!ternary146) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0154;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1155;
        long t156 = __parent136;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r157 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first131, t156);
        ref_tmp0154 = r157;
        int* r158 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0154);
        int t159 = *r158;
        long t160 = __holeIndex132;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r161 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first131, t160);
        ref_tmp1155 = r161;
        int* r162 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp1155);
        *r162 = t159;
        long t163 = __parent136;
        __holeIndex132 = t163;
        long t164 = __holeIndex132;
        long c165 = 1;
        long b166 = t164 - c165;
        long c167 = 2;
        long b168 = b166 / c167;
        __parent136 = b168;
    }
  int t169 = __value134;
  long t170 = __holeIndex132;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r171 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first131, t170);
  ref_tmp2137 = r171;
  int* r172 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp2137);
  *r172 = t169;
  return;
}

// function: _ZSt13__adjust_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEliNS0_5__ops15_Iter_comp_iterI7myclassEEEvT_T0_SC_T1_T2_
void void_std____adjust_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v173, long v174, long v175, int v176, struct __gnu_cxx____ops___Iter_comp_iter_myclass_ v177) {
bb178:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first179;
  long __holeIndex180;
  long __len181;
  int __value182;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ __comp183;
  long __topIndex184;
  long __secondChild185;
  struct __gnu_cxx____ops___Iter_comp_val_myclass_ __cmp186;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2187;
  __first179 = v173;
  __holeIndex180 = v174;
  __len181 = v175;
  __value182 = v176;
  __comp183 = v177;
  long t188 = __holeIndex180;
  __topIndex184 = t188;
  long t189 = __holeIndex180;
  __secondChild185 = t189;
    while (1) {
      long t190 = __secondChild185;
      long t191 = __len181;
      long c192 = 1;
      long b193 = t191 - c192;
      long c194 = 2;
      long b195 = b193 / c194;
      _Bool c196 = ((t190 < b195)) ? 1 : 0;
      if (!c196) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0197;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1198;
        long c199 = 2;
        long t200 = __secondChild185;
        long c201 = 1;
        long b202 = t200 + c201;
        long b203 = c199 * b202;
        __secondChild185 = b203;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0204;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1205;
          long t206 = __secondChild185;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r207 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first179, t206);
          agg_tmp0204 = r207;
          long t208 = __secondChild185;
          long c209 = 1;
          long b210 = t208 - c209;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r211 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first179, b210);
          agg_tmp1205 = r211;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t212 = agg_tmp0204;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t213 = agg_tmp1205;
          _Bool r214 = bool___gnu_cxx____ops___Iter_comp_iter_myclass___operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__comp183, t212, t213);
          if (r214) {
            long t215 = __secondChild185;
            long u216 = t215 - 1;
            __secondChild185 = u216;
          }
        long t217 = __secondChild185;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r218 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first179, t217);
        ref_tmp0197 = r218;
        int* r219 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0197);
        int t220 = *r219;
        long t221 = __holeIndex180;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r222 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first179, t221);
        ref_tmp1198 = r222;
        int* r223 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp1198);
        *r223 = t220;
        long t224 = __secondChild185;
        __holeIndex180 = t224;
    }
    long t225 = __len181;
    long c226 = 1;
    long b227 = t225 & c226;
    long c228 = 0;
    _Bool c229 = ((b227 == c228)) ? 1 : 0;
    _Bool ternary230;
    if (c229) {
      long t231 = __secondChild185;
      long t232 = __len181;
      long c233 = 2;
      long b234 = t232 - c233;
      long c235 = 2;
      long b236 = b234 / c235;
      _Bool c237 = ((t231 == b236)) ? 1 : 0;
      ternary230 = (_Bool)c237;
    } else {
      _Bool c238 = 0;
      ternary230 = (_Bool)c238;
    }
    if (ternary230) {
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp2239;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp3240;
      long c241 = 2;
      long t242 = __secondChild185;
      long c243 = 1;
      long b244 = t242 + c243;
      long b245 = c241 * b244;
      __secondChild185 = b245;
      long t246 = __secondChild185;
      long c247 = 1;
      long b248 = t246 - c247;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r249 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first179, b248);
      ref_tmp2239 = r249;
      int* r250 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp2239);
      int t251 = *r250;
      long t252 = __holeIndex180;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r253 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first179, t252);
      ref_tmp3240 = r253;
      int* r254 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp3240);
      *r254 = t251;
      long t255 = __secondChild185;
      long c256 = 1;
      long b257 = t255 - c256;
      __holeIndex180 = b257;
    }
  __gnu_cxx____ops___Iter_comp_val_myclass____Iter_comp_val(&__cmp186, &__comp183);
  agg_tmp2187 = __first179; // copy
  long t258 = __holeIndex180;
  long t259 = __topIndex184;
  int t260 = __value182;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t261 = agg_tmp2187;
  void_std____push_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_comp_val_myclass___(t261, t258, t259, t260, &__cmp186);
  return;
}

// function: _ZSt11__make_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_comp_iterI7myclassEEEvT_SB_RT0_
void void_std____make_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v262, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v263, struct __gnu_cxx____ops___Iter_comp_iter_myclass_* v264) {
bb265:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first266;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last267;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_* __comp268;
  long __len269;
  long __parent270;
  __first266 = v262;
  __last267 = v263;
  __comp268 = v264;
    long r271 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last267, &__first266);
    long c272 = 2;
    _Bool c273 = ((r271 < c272)) ? 1 : 0;
    if (c273) {
      return;
    }
  long r274 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last267, &__first266);
  __len269 = r274;
  long t275 = __len269;
  long c276 = 2;
  long b277 = t275 - c276;
  long c278 = 2;
  long b279 = b277 / c278;
  __parent270 = b279;
    while (1) {
      _Bool c280 = 1;
      if (!c280) break;
        int __value281;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0282;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0283;
        struct __gnu_cxx____ops___Iter_comp_iter_myclass_ agg_tmp1284;
        long t285 = __parent270;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r286 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first266, t285);
        ref_tmp0282 = r286;
        int* r287 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0282);
        int t288 = *r287;
        __value281 = t288;
        agg_tmp0283 = __first266; // copy
        long t289 = __parent270;
        long t290 = __len269;
        int t291 = __value281;
        struct __gnu_cxx____ops___Iter_comp_iter_myclass_* t292 = __comp268;
        agg_tmp1284 = *t292; // copy
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t293 = agg_tmp0283;
        struct __gnu_cxx____ops___Iter_comp_iter_myclass_ t294 = agg_tmp1284;
        void_std____adjust_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_comp_iter_myclass___(t293, t289, t290, t291, t294);
          long t295 = __parent270;
          long c296 = 0;
          _Bool c297 = ((t295 == c296)) ? 1 : 0;
          if (c297) {
            return;
          }
        long t298 = __parent270;
        long u299 = t298 - 1;
        __parent270 = u299;
    }
  return;
}

// function: _ZStltSt15strong_orderingNSt9__cmp_cat8__unspecE
_Bool std__operator_(struct std__strong_ordering v300, struct std____cmp_cat____unspec v301) {
bb302:
  struct std__strong_ordering __v303;
  struct std____cmp_cat____unspec unnamed304;
  _Bool __retval305;
  __v303 = v300;
  unnamed304 = v301;
  char t306 = __v303._M_value;
  int cast307 = (int)t306;
  int c308 = 0;
  _Bool c309 = ((cast307 < c308)) ? 1 : 0;
  __retval305 = c309;
  _Bool t310 = __retval305;
  return t310;
}

// function: _ZNKSt8__detail10_Synth3wayclIPiS2_EEDaRKT_RKT0_QrqXltfp_fp0_RNS_18__boolean_testableEXltfp0_fp_RNS_18__boolean_testableEE
struct std__strong_ordering _ZNKSt8__detail10_Synth3wayclIPiS2_EEDaRKT_RKT0_QrqXltfp_fp0_RNS_18__boolean_testableEXltfp0_fp_RNS_18__boolean_testableEE(struct std____detail___Synth3way* v311, int** v312, int** v313) {
bb314:
  struct std____detail___Synth3way* this315;
  int** __t316;
  int** __u317;
  struct std__strong_ordering __retval318;
  this315 = v311;
  __t316 = v312;
  __u317 = v313;
  struct std____detail___Synth3way* t319 = this315;
    int** t320 = __t316;
    int* t321 = *t320;
    int** t322 = __u317;
    int* t323 = *t322;
    char c324 = -1;
    char c325 = 0;
    char c326 = 1;
    _Bool c327 = ((t321 < t323)) ? 1 : 0;
    char sel328 = c327 ? c324 : c326;
    _Bool c329 = ((t321 == t323)) ? 1 : 0;
    char sel330 = c329 ? c325 : sel328;
    __retval318._M_value = sel330;
    struct std__strong_ordering t331 = __retval318;
    return t331;
  abort();
}

// function: _ZN9__gnu_cxxssIPiSt6vectorIiSaIiEEEEDTclL_ZNSt8__detail11__synth3wayEEclsr3stdE7declvalIRT_EEclsr3stdE7declvalIS7_EEEERKNS_17__normal_iteratorIS6_T0_EESD_
struct std__strong_ordering decltype__std____detail____synth3way__std__declval_int_________std__declval_int___________gnu_cxx__operator____int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v332, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v333) {
bb334:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs335;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs336;
  struct std__strong_ordering __retval337;
  __lhs335 = v332;
  __rhs336 = v333;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t338 = __lhs335;
  int** r339 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t338);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t340 = __rhs336;
  int** r341 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t340);
  struct std__strong_ordering r342 = _ZNKSt8__detail10_Synth3wayclIPiS2_EEDaRKT_RKT0_QrqXltfp_fp0_RNS_18__boolean_testableEXltfp0_fp_RNS_18__boolean_testableEE(&_ZNSt8__detail11__synth3wayE, r339, r341);
  __retval337 = r342;
  struct std__strong_ordering t343 = __retval337;
  return t343;
}

// function: _ZN9__gnu_cxx5__ops15_Iter_comp_iterI7myclassEclINS_17__normal_iteratorIPiSt6vectorIiSaIiEEEESA_EEbT_T0_
_Bool bool___gnu_cxx____ops___Iter_comp_iter_myclass___operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____ops___Iter_comp_iter_myclass_* v344, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v345, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v346) {
bb347:
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_* this348;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it1349;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it2350;
  _Bool __retval351;
  this348 = v344;
  __it1349 = v345;
  __it2350 = v346;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_* t352 = this348;
  struct myclass* cast353 = (struct myclass*)t352;
  int* r354 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it1349);
  int t355 = *r354;
  int* r356 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it2350);
  int t357 = *r356;
  _Bool r358 = myclass__operator__(cast353, t355, t357);
  __retval351 = r358;
  _Bool t359 = __retval351;
  return t359;
}

// function: _ZSt10__pop_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_comp_iterI7myclassEEEvT_SB_SB_RT0_
void void_std____pop_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v360, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v361, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v362, struct __gnu_cxx____ops___Iter_comp_iter_myclass_* v363) {
bb364:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first365;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last366;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result367;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_* __comp368;
  int __value369;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0370;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ agg_tmp1371;
  __first365 = v360;
  __last366 = v361;
  __result367 = v362;
  __comp368 = v363;
  int* r372 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__result367);
  int t373 = *r372;
  __value369 = t373;
  int* r374 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first365);
  int t375 = *r374;
  int* r376 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__result367);
  *r376 = t375;
  agg_tmp0370 = __first365; // copy
  long c377 = 0;
  long r378 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last366, &__first365);
  int t379 = __value369;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_* t380 = __comp368;
  agg_tmp1371 = *t380; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t381 = agg_tmp0370;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ t382 = agg_tmp1371;
  void_std____adjust_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_comp_iter_myclass___(t381, c377, r378, t379, t382);
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v383) {
bb384:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this385;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval386;
  this385 = v383;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t387 = this385;
  int* t388 = t387->_M_current;
  int c389 = 1;
  int* ptr390 = &(t388)[c389];
  t387->_M_current = ptr390;
  __retval386 = t387;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t391 = __retval386;
  return t391;
}

// function: _ZSt13__heap_selectIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_comp_iterI7myclassEEEvT_SB_SB_T0_
void void_std____heap_select___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v392, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v393, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v394, struct __gnu_cxx____ops___Iter_comp_iter_myclass_ v395) {
bb396:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first397;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __middle398;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last399;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ __comp400;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0401;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1402;
  __first397 = v392;
  __middle398 = v393;
  __last399 = v394;
  __comp400 = v395;
  agg_tmp0401 = __first397; // copy
  agg_tmp1402 = __middle398; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t403 = agg_tmp0401;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t404 = agg_tmp1402;
  void_std____make_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(t403, t404, &__comp400);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __i405;
    struct std__strong_ordering agg_tmp2406;
    struct std____cmp_cat____unspec agg_tmp3407;
    __i405 = __middle398; // copy
    while (1) {
      struct std__strong_ordering r409 = decltype__std____detail____synth3way__std__declval_int_________std__declval_int___________gnu_cxx__operator____int___std__vector_int__std__allocator_int_____(&__i405, &__last399);
      agg_tmp2406 = r409;
      agg_tmp3407 = *&__const__ZSt13__heap_selectIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_comp_iterI7myclassEEEvT_SB_SB_T0__agg_tmp3; // copy
      struct std__strong_ordering t410 = agg_tmp2406;
      struct std____cmp_cat____unspec t411 = agg_tmp3407;
      _Bool r412 = std__operator_(t410, t411);
      if (!r412) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp4413;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp5414;
        agg_tmp4413 = __i405; // copy
        agg_tmp5414 = __first397; // copy
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t415 = agg_tmp4413;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t416 = agg_tmp5414;
        _Bool r417 = bool___gnu_cxx____ops___Iter_comp_iter_myclass___operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__comp400, t415, t416);
        if (r417) {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp6418;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp7419;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp8420;
          agg_tmp6418 = __first397; // copy
          agg_tmp7419 = __middle398; // copy
          agg_tmp8420 = __i405; // copy
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t421 = agg_tmp6418;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t422 = agg_tmp7419;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t423 = agg_tmp8420;
          void_std____pop_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(t421, t422, t423, &__comp400);
        }
    for_step408: ;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r424 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(&__i405);
    }
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEmmEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v425) {
bb426:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this427;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval428;
  this427 = v425;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t429 = this427;
  int* t430 = t429->_M_current;
  int c431 = -1;
  int* ptr432 = &(t430)[c431];
  t429->_M_current = ptr432;
  __retval428 = t429;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t433 = __retval428;
  return t433;
}

// function: _ZSt11__sort_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_comp_iterI7myclassEEEvT_SB_RT0_
void void_std____sort_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v434, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v435, struct __gnu_cxx____ops___Iter_comp_iter_myclass_* v436) {
bb437:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first438;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last439;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_* __comp440;
  __first438 = v434;
  __last439 = v435;
  __comp440 = v436;
    while (1) {
      long r441 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last439, &__first438);
      long c442 = 1;
      _Bool c443 = ((r441 > c442)) ? 1 : 0;
      if (!c443) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0444;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1445;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2446;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r447 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__last439);
        agg_tmp0444 = __first438; // copy
        agg_tmp1445 = __last439; // copy
        agg_tmp2446 = __last439; // copy
        struct __gnu_cxx____ops___Iter_comp_iter_myclass_* t448 = __comp440;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t449 = agg_tmp0444;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t450 = agg_tmp1445;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t451 = agg_tmp2446;
        void_std____pop_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(t449, t450, t451, t448);
    }
  return;
}

// function: _ZSt14__partial_sortIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_comp_iterI7myclassEEEvT_SB_SB_T0_
void void_std____partial_sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v452, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v453, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v454, struct __gnu_cxx____ops___Iter_comp_iter_myclass_ v455) {
bb456:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first457;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __middle458;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last459;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ __comp460;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0461;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1462;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2463;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ agg_tmp3464;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp4465;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp5466;
  __first457 = v452;
  __middle458 = v453;
  __last459 = v454;
  __comp460 = v455;
  agg_tmp0461 = __first457; // copy
  agg_tmp1462 = __middle458; // copy
  agg_tmp2463 = __last459; // copy
  agg_tmp3464 = __comp460; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t467 = agg_tmp0461;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t468 = agg_tmp1462;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t469 = agg_tmp2463;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ t470 = agg_tmp3464;
  void_std____heap_select___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(t467, t468, t469, t470);
  agg_tmp4465 = __first457; // copy
  agg_tmp5466 = __middle458; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t471 = agg_tmp4465;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t472 = agg_tmp5466;
  void_std____sort_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(t471, t472, &__comp460);
  return;
}

// function: _ZSt4swapIiENSt9enable_ifIXsr6__and_ISt6__not_ISt15__is_tuple_likeIT_EESt21is_move_constructibleIS3_ESt18is_move_assignableIS3_EEE5valueEvE4typeERS3_SC_
void std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(int* v473, int* v474) {
bb475:
  int* __a476;
  int* __b477;
  int __tmp478;
  __a476 = v473;
  __b477 = v474;
  int* t479 = __a476;
  int t480 = *t479;
  __tmp478 = t480;
  int* t481 = __b477;
  int t482 = *t481;
  int* t483 = __a476;
  *t483 = t482;
  int t484 = __tmp478;
  int* t485 = __b477;
  *t485 = t484;
  return;
}

// function: _ZSt9iter_swapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_EvT_T0_
void void_std__iter_swap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v486, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v487) {
bb488:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __a489;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __b490;
  __a489 = v486;
  __b490 = v487;
  int* r491 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__a489);
  int* r492 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__b490);
  std__enable_if___and__std____not__std____is_tuple_like_int_____std__is_move_constructible_int___std__is_move_assignable_int_____value__void___type_std__swap_int_(r491, r492);
  return;
}

// function: _ZSt22__move_median_to_firstIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_comp_iterI7myclassEEEvT_SB_SB_SB_T0_
void void_std____move_median_to_first___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v493, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v494, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v495, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v496, struct __gnu_cxx____ops___Iter_comp_iter_myclass_ v497) {
bb498:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result499;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __a500;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __b501;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __c502;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ __comp503;
  __result499 = v493;
  __a500 = v494;
  __b501 = v495;
  __c502 = v496;
  __comp503 = v497;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0504;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1505;
    agg_tmp0504 = __a500; // copy
    agg_tmp1505 = __b501; // copy
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t506 = agg_tmp0504;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t507 = agg_tmp1505;
    _Bool r508 = bool___gnu_cxx____ops___Iter_comp_iter_myclass___operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__comp503, t506, t507);
    if (r508) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2509;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3510;
        agg_tmp2509 = __b501; // copy
        agg_tmp3510 = __c502; // copy
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t511 = agg_tmp2509;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t512 = agg_tmp3510;
        _Bool r513 = bool___gnu_cxx____ops___Iter_comp_iter_myclass___operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__comp503, t511, t512);
        if (r513) {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp4514;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp5515;
          agg_tmp4514 = __result499; // copy
          agg_tmp5515 = __b501; // copy
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t516 = agg_tmp4514;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t517 = agg_tmp5515;
          void_std__iter_swap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t516, t517);
        } else {
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp6518;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp7519;
            agg_tmp6518 = __a500; // copy
            agg_tmp7519 = __c502; // copy
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t520 = agg_tmp6518;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t521 = agg_tmp7519;
            _Bool r522 = bool___gnu_cxx____ops___Iter_comp_iter_myclass___operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__comp503, t520, t521);
            if (r522) {
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp8523;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp9524;
              agg_tmp8523 = __result499; // copy
              agg_tmp9524 = __c502; // copy
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t525 = agg_tmp8523;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t526 = agg_tmp9524;
              void_std__iter_swap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t525, t526);
            } else {
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp10527;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11528;
              agg_tmp10527 = __result499; // copy
              agg_tmp11528 = __a500; // copy
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t529 = agg_tmp10527;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t530 = agg_tmp11528;
              void_std__iter_swap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t529, t530);
            }
        }
    } else {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp12531;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp13532;
        agg_tmp12531 = __a500; // copy
        agg_tmp13532 = __c502; // copy
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t533 = agg_tmp12531;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t534 = agg_tmp13532;
        _Bool r535 = bool___gnu_cxx____ops___Iter_comp_iter_myclass___operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__comp503, t533, t534);
        if (r535) {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp14536;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp15537;
          agg_tmp14536 = __result499; // copy
          agg_tmp15537 = __a500; // copy
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t538 = agg_tmp14536;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t539 = agg_tmp15537;
          void_std__iter_swap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t538, t539);
        } else {
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp16540;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp17541;
            agg_tmp16540 = __b501; // copy
            agg_tmp17541 = __c502; // copy
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t542 = agg_tmp16540;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t543 = agg_tmp17541;
            _Bool r544 = bool___gnu_cxx____ops___Iter_comp_iter_myclass___operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__comp503, t542, t543);
            if (r544) {
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp18545;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp19546;
              agg_tmp18545 = __result499; // copy
              agg_tmp19546 = __c502; // copy
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t547 = agg_tmp18545;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t548 = agg_tmp19546;
              void_std__iter_swap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t547, t548);
            } else {
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp20549;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp21550;
              agg_tmp20549 = __result499; // copy
              agg_tmp21550 = __b501; // copy
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t551 = agg_tmp20549;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t552 = agg_tmp21550;
              void_std__iter_swap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t551, t552);
            }
        }
    }
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEmiEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v553, long v554) {
bb555:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this556;
  long __n557;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval558;
  int* ref_tmp0559;
  this556 = v553;
  __n557 = v554;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t560 = this556;
  int* t561 = t560->_M_current;
  long t562 = __n557;
  long u563 = -t562;
  int* ptr564 = &(t561)[u563];
  ref_tmp0559 = ptr564;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval558, &ref_tmp0559);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t565 = __retval558;
  return t565;
}

// function: _ZSt21__unguarded_partitionIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_comp_iterI7myclassEEET_SB_SB_SB_T0_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____unguarded_partition___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v566, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v567, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v568, struct __gnu_cxx____ops___Iter_comp_iter_myclass_ v569) {
bb570:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first571;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last572;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __pivot573;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ __comp574;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval575;
  __first571 = v566;
  __last572 = v567;
  __pivot573 = v568;
  __comp574 = v569;
    while (1) {
      _Bool c576 = 1;
      if (!c576) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp6577;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp7578;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0579;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1580;
          while (1) {
            agg_tmp0579 = __first571; // copy
            agg_tmp1580 = __pivot573; // copy
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t581 = agg_tmp0579;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t582 = agg_tmp1580;
            _Bool r583 = bool___gnu_cxx____ops___Iter_comp_iter_myclass___operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__comp574, t581, t582);
            if (!r583) break;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r584 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(&__first571);
          }
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r585 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__last572);
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2586;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3587;
          while (1) {
            agg_tmp2586 = __pivot573; // copy
            agg_tmp3587 = __last572; // copy
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t588 = agg_tmp2586;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t589 = agg_tmp3587;
            _Bool r590 = bool___gnu_cxx____ops___Iter_comp_iter_myclass___operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__comp574, t588, t589);
            if (!r590) break;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r591 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__last572);
          }
          struct std__strong_ordering agg_tmp4592;
          struct std____cmp_cat____unspec agg_tmp5593;
          struct std__strong_ordering r594 = decltype__std____detail____synth3way__std__declval_int_________std__declval_int___________gnu_cxx__operator____int___std__vector_int__std__allocator_int_____(&__first571, &__last572);
          agg_tmp4592 = r594;
          agg_tmp5593 = *&__const__ZSt21__unguarded_partitionIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_comp_iterI7myclassEEET_SB_SB_SB_T0__agg_tmp5; // copy
          struct std__strong_ordering t595 = agg_tmp4592;
          struct std____cmp_cat____unspec t596 = agg_tmp5593;
          _Bool r597 = std__operator_(t595, t596);
          _Bool u598 = !r597;
          if (u598) {
            __retval575 = __first571; // copy
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t599 = __retval575;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ret_val600 = t599;
            return ret_val600;
          }
        agg_tmp6577 = __first571; // copy
        agg_tmp7578 = __last572; // copy
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t601 = agg_tmp6577;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t602 = agg_tmp7578;
        void_std__iter_swap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t601, t602);
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r603 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(&__first571);
    }
  abort();
}

// function: _ZSt27__unguarded_partition_pivotIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_comp_iterI7myclassEEET_SB_SB_T0_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____unguarded_partition_pivot___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v604, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v605, struct __gnu_cxx____ops___Iter_comp_iter_myclass_ v606) {
bb607:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first608;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last609;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ __comp610;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval611;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __mid612;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0613;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1614;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2615;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3616;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ agg_tmp4617;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp5618;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp6619;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp7620;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ agg_tmp8621;
  __first608 = v604;
  __last609 = v605;
  __comp610 = v606;
  long r622 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last609, &__first608);
  long c623 = 2;
  long b624 = r622 / c623;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r625 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first608, b624);
  __mid612 = r625;
  agg_tmp0613 = __first608; // copy
  long c626 = 1;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r627 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first608, c626);
  agg_tmp1614 = r627;
  agg_tmp2615 = __mid612; // copy
  long c628 = 1;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r629 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__last609, c628);
  agg_tmp3616 = r629;
  agg_tmp4617 = __comp610; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t630 = agg_tmp0613;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t631 = agg_tmp1614;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t632 = agg_tmp2615;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t633 = agg_tmp3616;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ t634 = agg_tmp4617;
  void_std____move_median_to_first___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(t630, t631, t632, t633, t634);
  long c635 = 1;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r636 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first608, c635);
  agg_tmp5618 = r636;
  agg_tmp6619 = __last609; // copy
  agg_tmp7620 = __first608; // copy
  agg_tmp8621 = __comp610; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t637 = agg_tmp5618;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t638 = agg_tmp6619;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t639 = agg_tmp7620;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ t640 = agg_tmp8621;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r641 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____unguarded_partition___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(t637, t638, t639, t640);
  __retval611 = r641;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t642 = __retval611;
  return t642;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSERKS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v643, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v644) {
bb645:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this646;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed647;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval648;
  this646 = v643;
  unnamed647 = v644;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t649 = this646;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t650 = unnamed647;
  int* t651 = t650->_M_current;
  t649->_M_current = t651;
  __retval648 = t649;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t652 = __retval648;
  return t652;
}

// function: _ZSt16__introsort_loopIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEElNS0_5__ops15_Iter_comp_iterI7myclassEEEvT_SB_T0_T1_
void void_std____introsort_loop___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long____gnu_cxx____ops___Iter_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v653, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v654, long v655, struct __gnu_cxx____ops___Iter_comp_iter_myclass_ v656) {
bb657:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first658;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last659;
  long __depth_limit660;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ __comp661;
  __first658 = v653;
  __last659 = v654;
  __depth_limit660 = v655;
  __comp661 = v656;
    while (1) {
      long r662 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last659, &__first658);
      long c663 = 16;
      _Bool c664 = ((r662 > c663)) ? 1 : 0;
      if (!c664) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __cut665;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp4666;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp5667;
        struct __gnu_cxx____ops___Iter_comp_iter_myclass_ agg_tmp6668;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp7669;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp8670;
        struct __gnu_cxx____ops___Iter_comp_iter_myclass_ agg_tmp9671;
          long t672 = __depth_limit660;
          long c673 = 0;
          _Bool c674 = ((t672 == c673)) ? 1 : 0;
          if (c674) {
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0675;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1676;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2677;
            struct __gnu_cxx____ops___Iter_comp_iter_myclass_ agg_tmp3678;
            agg_tmp0675 = __first658; // copy
            agg_tmp1676 = __last659; // copy
            agg_tmp2677 = __last659; // copy
            agg_tmp3678 = __comp661; // copy
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t679 = agg_tmp0675;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t680 = agg_tmp1676;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t681 = agg_tmp2677;
            struct __gnu_cxx____ops___Iter_comp_iter_myclass_ t682 = agg_tmp3678;
            void_std____partial_sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(t679, t680, t681, t682);
            return;
          }
        long t683 = __depth_limit660;
        long u684 = t683 - 1;
        __depth_limit660 = u684;
        agg_tmp4666 = __first658; // copy
        agg_tmp5667 = __last659; // copy
        agg_tmp6668 = __comp661; // copy
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t685 = agg_tmp4666;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t686 = agg_tmp5667;
        struct __gnu_cxx____ops___Iter_comp_iter_myclass_ t687 = agg_tmp6668;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r688 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____unguarded_partition_pivot___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(t685, t686, t687);
        __cut665 = r688;
        agg_tmp7669 = __cut665; // copy
        agg_tmp8670 = __last659; // copy
        long t689 = __depth_limit660;
        agg_tmp9671 = __comp661; // copy
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t690 = agg_tmp7669;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t691 = agg_tmp8670;
        struct __gnu_cxx____ops___Iter_comp_iter_myclass_ t692 = agg_tmp9671;
        void_std____introsort_loop___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long____gnu_cxx____ops___Iter_comp_iter_myclass___(t690, t691, t689, t692);
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r693 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&__last659, &__cut665);
    }
  return;
}

// function: _ZSt13__countl_zeroImEiT_
int int_std____countl_zero_unsigned_long_(unsigned long v694) {
bb695:
  unsigned long __x696;
  int __retval697;
  int _Nd698;
  __x696 = v694;
  int c699 = 64;
  _Nd698 = c699;
  unsigned long t700 = __x696;
  unsigned long clz701 = (unsigned long)__builtin_clzll((unsigned long)t700);
  int cast702 = (int)clz701;
  unsigned long c703 = 0;
  _Bool c704 = ((t700 == c703)) ? 1 : 0;
  int t705 = _Nd698;
  int sel706 = c704 ? t705 : cast702;
  __retval697 = sel706;
  int t707 = __retval697;
  return t707;
}

// function: _ZSt11__bit_widthImEiT_
int int_std____bit_width_unsigned_long_(unsigned long v708) {
bb709:
  unsigned long __x710;
  int __retval711;
  int _Nd712;
  __x710 = v708;
  int c713 = 64;
  _Nd712 = c713;
  int t714 = _Nd712;
  unsigned long t715 = __x710;
  int r716 = int_std____countl_zero_unsigned_long_(t715);
  int b717 = t714 - r716;
  __retval711 = b717;
  int t718 = __retval711;
  return t718;
}

// function: _ZSt4__lgIlET_S0_
long long_std____lg_long_(long v719) {
bb720:
  long __n721;
  long __retval722;
  __n721 = v719;
  long t723 = __n721;
  unsigned long cast724 = (unsigned long)t723;
  int r725 = int_std____bit_width_unsigned_long_(cast724);
  int c726 = 1;
  int b727 = r725 - c726;
  long cast728 = (long)b727;
  __retval722 = cast728;
  long t729 = __retval722;
  return t729;
}

// function: _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v730, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v731) {
bb732:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs733;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs734;
  long __retval735;
  __lhs733 = v730;
  __rhs734 = v731;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t736 = __lhs733;
  int** r737 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t736);
  int* t738 = *r737;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t739 = __rhs734;
  int** r740 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t739);
  int* t741 = *r740;
  long diff742 = t738 - t741;
  __retval735 = diff742;
  long t743 = __retval735;
  return t743;
}

// function: _ZSt12__niter_wrapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES2_ET_S7_T0_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____niter_wrap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v744, int* v745) {
bb746:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __from747;
  int* __res748;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval749;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0750;
  __from747 = v744;
  __res748 = v745;
  int* t751 = __res748;
  int* r752 = int__std____niter_base_int__(t751);
  agg_tmp0750 = __from747; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t753 = agg_tmp0750;
  int* r754 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t753);
  long diff755 = r752 - r754;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r756 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__from747, diff755);
  __retval749 = r756;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t757 = __retval749;
  return t757;
}

// function: _ZSt10__distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_St26random_access_iterator_tag
long std__iterator_traits_int____difference_type_std____distance_int__(int* v758, int* v759, struct std__random_access_iterator_tag v760) {
bb761:
  int* __first762;
  int* __last763;
  struct std__random_access_iterator_tag unnamed764;
  long __retval765;
  __first762 = v758;
  __last763 = v759;
  unnamed764 = v760;
  int* t766 = __last763;
  int* t767 = __first762;
  long diff768 = t766 - t767;
  __retval765 = diff768;
  long t769 = __retval765;
  return t769;
}

// function: _ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** v770) {
bb771:
  int** unnamed772;
  struct std__random_access_iterator_tag __retval773;
  unnamed772 = v770;
  struct std__random_access_iterator_tag t774 = __retval773;
  return t774;
}

// function: _ZSt8distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_
long std__iterator_traits_int____difference_type_std__distance_int__(int* v775, int* v776) {
bb777:
  int* __first778;
  int* __last779;
  long __retval780;
  struct std__random_access_iterator_tag agg_tmp0781;
  __first778 = v775;
  __last779 = v776;
  int* t782 = __first778;
  int* t783 = __last779;
  struct std__random_access_iterator_tag r784 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first778);
  agg_tmp0781 = r784;
  struct std__random_access_iterator_tag t785 = agg_tmp0781;
  long r786 = std__iterator_traits_int____difference_type_std____distance_int__(t782, t783, t785);
  __retval780 = r786;
  long t787 = __retval780;
  return t787;
}

// function: _ZSt9__advanceIPilEvRT_T0_St26random_access_iterator_tag
void void_std____advance_int___long_(int** v788, long v789, struct std__random_access_iterator_tag v790) {
bb791:
  int** __i792;
  long __n793;
  struct std__random_access_iterator_tag unnamed794;
  __i792 = v788;
  __n793 = v789;
  unnamed794 = v790;
    long t795 = __n793;
    _Bool isconst796 = 0;
    _Bool ternary797;
    if (isconst796) {
      long t798 = __n793;
      long c799 = 1;
      _Bool c800 = ((t798 == c799)) ? 1 : 0;
      ternary797 = (_Bool)c800;
    } else {
      _Bool c801 = 0;
      ternary797 = (_Bool)c801;
    }
    if (ternary797) {
      int** t802 = __i792;
      int* t803 = *t802;
      int c804 = 1;
      int* ptr805 = &(t803)[c804];
      *t802 = ptr805;
    } else {
        long t806 = __n793;
        _Bool isconst807 = 0;
        _Bool ternary808;
        if (isconst807) {
          long t809 = __n793;
          long c810 = -1;
          _Bool c811 = ((t809 == c810)) ? 1 : 0;
          ternary808 = (_Bool)c811;
        } else {
          _Bool c812 = 0;
          ternary808 = (_Bool)c812;
        }
        if (ternary808) {
          int** t813 = __i792;
          int* t814 = *t813;
          int c815 = -1;
          int* ptr816 = &(t814)[c815];
          *t813 = ptr816;
        } else {
          long t817 = __n793;
          int** t818 = __i792;
          int* t819 = *t818;
          int* ptr820 = &(t819)[t817];
          *t818 = ptr820;
        }
    }
  return;
}

// function: _ZSt7advanceIPilEvRT_T0_
void void_std__advance_int___long_(int** v821, long v822) {
bb823:
  int** __i824;
  long __n825;
  long __d826;
  struct std__random_access_iterator_tag agg_tmp0827;
  __i824 = v821;
  __n825 = v822;
  long t828 = __n825;
  __d826 = t828;
  int** t829 = __i824;
  long t830 = __d826;
  int** t831 = __i824;
  struct std__random_access_iterator_tag r832 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(t831);
  agg_tmp0827 = r832;
  struct std__random_access_iterator_tag t833 = agg_tmp0827;
  void_std____advance_int___long_(t829, t830, t833);
  return;
}

// function: _ZSt12__assign_oneILb1EPiS0_EvRT0_RT1_
void void_std____assign_one_true__int___int__(int** v834, int** v835) {
bb836:
  int** __out837;
  int** __in838;
  __out837 = v834;
  __in838 = v835;
    int** t839 = __in838;
    int* t840 = *t839;
    int t841 = *t840;
    int** t842 = __out837;
    int* t843 = *t842;
    *t843 = t841;
  return;
}

// function: _ZSt23__copy_move_backward_a2ILb1EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_backward_a2_true__int___int__(int* v844, int* v845, int* v846) {
bb847:
  int* __first848;
  int* __last849;
  int* __result850;
  int* __retval851;
  __first848 = v844;
  __last849 = v845;
  __result850 = v846;
      _Bool r852 = std__is_constant_evaluated();
      if (r852) {
      } else {
          long __n853;
          int* t854 = __first848;
          int* t855 = __last849;
          long r856 = std__iterator_traits_int____difference_type_std__distance_int__(t854, t855);
          __n853 = r856;
          long t857 = __n853;
          long u858 = -t857;
          void_std__advance_int___long_(&__result850, u858);
            long t859 = __n853;
            long c860 = 1;
            _Bool c861 = ((t859 > c860)) ? 1 : 0;
            if (c861) {
              int* t862 = __result850;
              void* cast863 = (void*)t862;
              int* t864 = __first848;
              void* cast865 = (void*)t864;
              long t866 = __n853;
              unsigned long cast867 = (unsigned long)t866;
              unsigned long c868 = 4;
              unsigned long b869 = cast867 * c868;
              void* r870 = memmove(cast863, cast865, b869);
            } else {
                long t871 = __n853;
                long c872 = 1;
                _Bool c873 = ((t871 == c872)) ? 1 : 0;
                if (c873) {
                  void_std____assign_one_true__int___int__(&__result850, &__first848);
                }
            }
          int* t874 = __result850;
          __retval851 = t874;
          int* t875 = __retval851;
          return t875;
      }
    while (1) {
      int* t876 = __first848;
      int* t877 = __last849;
      _Bool c878 = ((t876 != t877)) ? 1 : 0;
      if (!c878) break;
        int* t879 = __last849;
        int c880 = -1;
        int* ptr881 = &(t879)[c880];
        __last849 = ptr881;
        int* t882 = __result850;
        int c883 = -1;
        int* ptr884 = &(t882)[c883];
        __result850 = ptr884;
        void_std____assign_one_true__int___int__(&__result850, &__last849);
    }
  int* t885 = __result850;
  __retval851 = t885;
  int* t886 = __retval851;
  return t886;
}

// function: _ZSt23__copy_move_backward_a1ILb1EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_backward_a1_true__int___int__(int* v887, int* v888, int* v889) {
bb890:
  int* __first891;
  int* __last892;
  int* __result893;
  int* __retval894;
  __first891 = v887;
  __last892 = v888;
  __result893 = v889;
  int* t895 = __first891;
  int* t896 = __last892;
  int* t897 = __result893;
  int* r898 = int__std____copy_move_backward_a2_true__int___int__(t895, t896, t897);
  __retval894 = r898;
  int* t899 = __retval894;
  return t899;
}

// function: _ZSt12__niter_baseIPiSt6vectorIiSaIiEEET_N9__gnu_cxx17__normal_iteratorIS4_T0_EE
int* int__std____niter_base_int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v900) {
bb901:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it902;
  int* __retval903;
  __it902 = v900;
  int** r904 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__it902);
  int* t905 = *r904;
  __retval903 = t905;
  int* t906 = __retval903;
  return t906;
}

// function: _ZSt22__copy_move_backward_aILb1EN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_ET1_T0_S8_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____copy_move_backward_a_true____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v907, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v908, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v909) {
bb910:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first911;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last912;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result913;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval914;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0915;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1916;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2917;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3918;
  __first911 = v907;
  __last912 = v908;
  __result913 = v909;
  agg_tmp0915 = __result913; // copy
  agg_tmp1916 = __first911; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t919 = agg_tmp1916;
  int* r920 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t919);
  agg_tmp2917 = __last912; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t921 = agg_tmp2917;
  int* r922 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t921);
  agg_tmp3918 = __result913; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t923 = agg_tmp3918;
  int* r924 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t923);
  int* r925 = int__std____copy_move_backward_a1_true__int___int__(r920, r922, r924);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t926 = agg_tmp0915;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r927 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____niter_wrap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(t926, r925);
  __retval914 = r927;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t928 = __retval914;
  return t928;
}

// function: _ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEET_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v929) {
bb930:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it931;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval932;
  __it931 = v929;
  __retval932 = __it931; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t933 = __retval932;
  return t933;
}

// function: _ZSt13move_backwardIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_ET0_T_S8_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__move_backward___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v934, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v935, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v936) {
bb937:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first938;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last939;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result940;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval941;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0942;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1943;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2944;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3945;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp4946;
  __first938 = v934;
  __last939 = v935;
  __result940 = v936;
  agg_tmp1943 = __first938; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t947 = agg_tmp1943;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r948 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t947);
  agg_tmp0942 = r948;
  agg_tmp3945 = __last939; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t949 = agg_tmp3945;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r950 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t949);
  agg_tmp2944 = r950;
  agg_tmp4946 = __result940; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t951 = agg_tmp0942;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t952 = agg_tmp2944;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t953 = agg_tmp4946;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r954 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____copy_move_backward_a_true____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t951, t952, t953);
  __retval941 = r954;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t955 = __retval941;
  return t955;
}

// function: _ZN9__gnu_cxx5__ops14_Val_comp_iterI7myclassEclIiNS_17__normal_iteratorIPiSt6vectorIiSaIiEEEEEEbRT_T0_
_Bool bool___gnu_cxx____ops___Val_comp_iter_myclass___operator___int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____ops___Val_comp_iter_myclass_* v956, int* v957, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v958) {
bb959:
  struct __gnu_cxx____ops___Val_comp_iter_myclass_* this960;
  int* __val961;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it962;
  _Bool __retval963;
  this960 = v956;
  __val961 = v957;
  __it962 = v958;
  struct __gnu_cxx____ops___Val_comp_iter_myclass_* t964 = this960;
  struct myclass* cast965 = (struct myclass*)t964;
  int* t966 = __val961;
  int t967 = *t966;
  int* r968 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it962);
  int t969 = *r968;
  _Bool r970 = myclass__operator__(cast965, t967, t969);
  __retval963 = r970;
  _Bool t971 = __retval963;
  return t971;
}

// function: _ZSt25__unguarded_linear_insertIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops14_Val_comp_iterI7myclassEEEvT_T0_
void void_std____unguarded_linear_insert___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Val_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v972, struct __gnu_cxx____ops___Val_comp_iter_myclass_ v973) {
bb974:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last975;
  struct __gnu_cxx____ops___Val_comp_iter_myclass_ __comp976;
  int __val977;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __next978;
  __last975 = v972;
  __comp976 = v973;
  int* r979 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__last975);
  int t980 = *r979;
  __val977 = t980;
  __next978 = __last975; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r981 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__next978);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0982;
    while (1) {
      agg_tmp0982 = __next978; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t983 = agg_tmp0982;
      _Bool r984 = bool___gnu_cxx____ops___Val_comp_iter_myclass___operator___int____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__comp976, &__val977, t983);
      if (!r984) break;
        int* r985 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__next978);
        int t986 = *r985;
        int* r987 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__last975);
        *r987 = t986;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r988 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&__last975, &__next978);
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r989 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__next978);
    }
  int t990 = __val977;
  int* r991 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__last975);
  *r991 = t990;
  return;
}

// function: _ZN9__gnu_cxx5__ops14_Val_comp_iterI7myclassEC2EONS0_15_Iter_comp_iterIS2_EE
void __gnu_cxx____ops___Val_comp_iter_myclass____Val_comp_iter(struct __gnu_cxx____ops___Val_comp_iter_myclass_* v992, struct __gnu_cxx____ops___Iter_comp_iter_myclass_* v993) {
bb994:
  struct __gnu_cxx____ops___Val_comp_iter_myclass_* this995;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_* __comp996;
  this995 = v992;
  __comp996 = v993;
  return;
}

// function: _ZN9__gnu_cxx5__ops15__val_comp_iterI7myclassEENS0_14_Val_comp_iterIT_EENS0_15_Iter_comp_iterIS4_EE
struct __gnu_cxx____ops___Val_comp_iter_myclass_ __gnu_cxx____ops___Val_comp_iter_myclass____gnu_cxx____ops____val_comp_iter_myclass_(struct __gnu_cxx____ops___Iter_comp_iter_myclass_ v997) {
bb998:
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ __comp999;
  struct __gnu_cxx____ops___Val_comp_iter_myclass_ __retval1000;
  __comp999 = v997;
  __gnu_cxx____ops___Val_comp_iter_myclass____Val_comp_iter(&__retval1000, &__comp999);
  struct __gnu_cxx____ops___Val_comp_iter_myclass_ t1001 = __retval1000;
  return t1001;
}

// function: _ZSt16__insertion_sortIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_comp_iterI7myclassEEEvT_SB_T0_
void void_std____insertion_sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1002, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1003, struct __gnu_cxx____ops___Iter_comp_iter_myclass_ v1004) {
bb1005:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1006;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1007;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ __comp1008;
  __first1006 = v1002;
  __last1007 = v1003;
  __comp1008 = v1004;
    _Bool r1009 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first1006, &__last1007);
    if (r1009) {
      return;
    }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __i1010;
    long c1011 = 1;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1012 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first1006, c1011);
    __i1010 = r1012;
    while (1) {
      _Bool r1014 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__i1010, &__last1007);
      _Bool u1015 = !r1014;
      if (!u1015) break;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01016;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11017;
          agg_tmp01016 = __i1010; // copy
          agg_tmp11017 = __first1006; // copy
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1018 = agg_tmp01016;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1019 = agg_tmp11017;
          _Bool r1020 = bool___gnu_cxx____ops___Iter_comp_iter_myclass___operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__comp1008, t1018, t1019);
          if (r1020) {
            int __val1021;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp21022;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp31023;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp41024;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp51025;
            int* r1026 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__i1010);
            int t1027 = *r1026;
            __val1021 = t1027;
            agg_tmp21022 = __first1006; // copy
            agg_tmp31023 = __i1010; // copy
            long c1028 = 1;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1029 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__i1010, c1028);
            agg_tmp41024 = r1029;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1030 = agg_tmp21022;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1031 = agg_tmp31023;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1032 = agg_tmp41024;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1033 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__move_backward___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t1030, t1031, t1032);
            agg_tmp51025 = r1033;
            int t1034 = __val1021;
            int* r1035 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first1006);
            *r1035 = t1034;
          } else {
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp61036;
            struct __gnu_cxx____ops___Val_comp_iter_myclass_ agg_tmp71037;
            struct __gnu_cxx____ops___Iter_comp_iter_myclass_ agg_tmp81038;
            agg_tmp61036 = __i1010; // copy
            agg_tmp81038 = __comp1008; // copy
            struct __gnu_cxx____ops___Iter_comp_iter_myclass_ t1039 = agg_tmp81038;
            struct __gnu_cxx____ops___Val_comp_iter_myclass_ r1040 = __gnu_cxx____ops___Val_comp_iter_myclass____gnu_cxx____ops____val_comp_iter_myclass_(t1039);
            agg_tmp71037 = r1040;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1041 = agg_tmp61036;
            struct __gnu_cxx____ops___Val_comp_iter_myclass_ t1042 = agg_tmp71037;
            void_std____unguarded_linear_insert___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Val_comp_iter_myclass___(t1041, t1042);
          }
    for_step1013: ;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1043 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(&__i1010);
    }
  return;
}

// function: _ZSt26__unguarded_insertion_sortIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_comp_iterI7myclassEEEvT_SB_T0_
void void_std____unguarded_insertion_sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1044, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1045, struct __gnu_cxx____ops___Iter_comp_iter_myclass_ v1046) {
bb1047:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1048;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1049;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ __comp1050;
  __first1048 = v1044;
  __last1049 = v1045;
  __comp1050 = v1046;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __i1051;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01052;
    struct __gnu_cxx____ops___Val_comp_iter_myclass_ agg_tmp11053;
    struct __gnu_cxx____ops___Iter_comp_iter_myclass_ agg_tmp21054;
    __i1051 = __first1048; // copy
    while (1) {
      _Bool r1056 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__i1051, &__last1049);
      _Bool u1057 = !r1056;
      if (!u1057) break;
      agg_tmp01052 = __i1051; // copy
      agg_tmp21054 = __comp1050; // copy
      struct __gnu_cxx____ops___Iter_comp_iter_myclass_ t1058 = agg_tmp21054;
      struct __gnu_cxx____ops___Val_comp_iter_myclass_ r1059 = __gnu_cxx____ops___Val_comp_iter_myclass____gnu_cxx____ops____val_comp_iter_myclass_(t1058);
      agg_tmp11053 = r1059;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1060 = agg_tmp01052;
      struct __gnu_cxx____ops___Val_comp_iter_myclass_ t1061 = agg_tmp11053;
      void_std____unguarded_linear_insert___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Val_comp_iter_myclass___(t1060, t1061);
    for_step1055: ;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1062 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(&__i1051);
    }
  return;
}

// function: _ZSt22__final_insertion_sortIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_comp_iterI7myclassEEEvT_SB_T0_
void void_std____final_insertion_sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1063, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1064, struct __gnu_cxx____ops___Iter_comp_iter_myclass_ v1065) {
bb1066:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1067;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1068;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ __comp1069;
  __first1067 = v1063;
  __last1068 = v1064;
  __comp1069 = v1065;
    long r1070 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last1068, &__first1067);
    long c1071 = 16;
    _Bool c1072 = ((r1070 > c1071)) ? 1 : 0;
    if (c1072) {
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01073;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11074;
      struct __gnu_cxx____ops___Iter_comp_iter_myclass_ agg_tmp21075;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp31076;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp41077;
      struct __gnu_cxx____ops___Iter_comp_iter_myclass_ agg_tmp51078;
      agg_tmp01073 = __first1067; // copy
      long c1079 = 16;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1080 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first1067, c1079);
      agg_tmp11074 = r1080;
      agg_tmp21075 = __comp1069; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1081 = agg_tmp01073;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1082 = agg_tmp11074;
      struct __gnu_cxx____ops___Iter_comp_iter_myclass_ t1083 = agg_tmp21075;
      void_std____insertion_sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(t1081, t1082, t1083);
      long c1084 = 16;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1085 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first1067, c1084);
      agg_tmp31076 = r1085;
      agg_tmp41077 = __last1068; // copy
      agg_tmp51078 = __comp1069; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1086 = agg_tmp31076;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1087 = agg_tmp41077;
      struct __gnu_cxx____ops___Iter_comp_iter_myclass_ t1088 = agg_tmp51078;
      void_std____unguarded_insertion_sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(t1086, t1087, t1088);
    } else {
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp61089;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp71090;
      struct __gnu_cxx____ops___Iter_comp_iter_myclass_ agg_tmp81091;
      agg_tmp61089 = __first1067; // copy
      agg_tmp71090 = __last1068; // copy
      agg_tmp81091 = __comp1069; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1092 = agg_tmp61089;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1093 = agg_tmp71090;
      struct __gnu_cxx____ops___Iter_comp_iter_myclass_ t1094 = agg_tmp81091;
      void_std____insertion_sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(t1092, t1093, t1094);
    }
  return;
}

// function: _ZSt6__sortIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_comp_iterI7myclassEEEvT_SB_T0_
void void_std____sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1095, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1096, struct __gnu_cxx____ops___Iter_comp_iter_myclass_ v1097) {
bb1098:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1099;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1100;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ __comp1101;
  __first1099 = v1095;
  __last1100 = v1096;
  __comp1101 = v1097;
    _Bool r1102 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first1099, &__last1100);
    _Bool u1103 = !r1102;
    if (u1103) {
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01104;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11105;
      struct __gnu_cxx____ops___Iter_comp_iter_myclass_ agg_tmp21106;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp31107;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp41108;
      struct __gnu_cxx____ops___Iter_comp_iter_myclass_ agg_tmp51109;
      agg_tmp01104 = __first1099; // copy
      agg_tmp11105 = __last1100; // copy
      long r1110 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last1100, &__first1099);
      long r1111 = long_std____lg_long_(r1110);
      long c1112 = 2;
      long b1113 = r1111 * c1112;
      agg_tmp21106 = __comp1101; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1114 = agg_tmp01104;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1115 = agg_tmp11105;
      struct __gnu_cxx____ops___Iter_comp_iter_myclass_ t1116 = agg_tmp21106;
      void_std____introsort_loop___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long____gnu_cxx____ops___Iter_comp_iter_myclass___(t1114, t1115, b1113, t1116);
      agg_tmp31107 = __first1099; // copy
      agg_tmp41108 = __last1100; // copy
      agg_tmp51109 = __comp1101; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1117 = agg_tmp31107;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1118 = agg_tmp41108;
      struct __gnu_cxx____ops___Iter_comp_iter_myclass_ t1119 = agg_tmp51109;
      void_std____final_insertion_sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(t1117, t1118, t1119);
    }
  return;
}

// function: _ZN9__gnu_cxx5__ops15_Iter_comp_iterI7myclassEC2ES2_
void __gnu_cxx____ops___Iter_comp_iter_myclass____Iter_comp_iter(struct __gnu_cxx____ops___Iter_comp_iter_myclass_* v1120, struct myclass v1121) {
bb1122:
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_* this1123;
  struct myclass __comp1124;
  this1123 = v1120;
  __comp1124 = v1121;
  return;
}

// function: _ZN9__gnu_cxx5__ops16__iter_comp_iterI7myclassEENS0_15_Iter_comp_iterIT_EES4_
struct __gnu_cxx____ops___Iter_comp_iter_myclass_ __gnu_cxx____ops___Iter_comp_iter_myclass____gnu_cxx____ops____iter_comp_iter_myclass_(struct myclass v1125) {
bb1126:
  struct myclass __comp1127;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ __retval1128;
  struct myclass agg_tmp01129;
  __comp1127 = v1125;
  struct myclass t1130 = agg_tmp01129;
  __gnu_cxx____ops___Iter_comp_iter_myclass____Iter_comp_iter(&__retval1128, t1130);
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ t1131 = __retval1128;
  return t1131;
}

// function: _ZSt4sortIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEE7myclassEvT_S8_T0_
void void_std__sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______myclass_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1132, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1133, struct myclass v1134) {
bb1135:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1136;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1137;
  struct myclass __comp1138;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01139;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11140;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ agg_tmp21141;
  struct myclass agg_tmp31142;
  __first1136 = v1132;
  __last1137 = v1133;
  __comp1138 = v1134;
  agg_tmp01139 = __first1136; // copy
  agg_tmp11140 = __last1137; // copy
  struct myclass t1143 = agg_tmp31142;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ r1144 = __gnu_cxx____ops___Iter_comp_iter_myclass____gnu_cxx____ops____iter_comp_iter_myclass_(t1143);
  agg_tmp21141 = r1144;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1145 = agg_tmp01139;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1146 = agg_tmp11140;
  struct __gnu_cxx____ops___Iter_comp_iter_myclass_ t1147 = agg_tmp21141;
  void_std____sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_myclass___(t1145, t1146, t1147);
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v1148) {
bb1149:
  struct std__vector_int__std__allocator_int__* this1150;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1151;
  this1150 = v1148;
  struct std__vector_int__std__allocator_int__* t1152 = this1150;
  struct std___Vector_base_int__std__allocator_int__* base1153 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1152 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1154 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1153->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval1151, &base1154->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1155 = __retval1151;
  return t1155;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v1156) {
bb1157:
  struct std__vector_int__std__allocator_int__* this1158;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1159;
  this1158 = v1156;
  struct std__vector_int__std__allocator_int__* t1160 = this1158;
  struct std___Vector_base_int__std__allocator_int__* base1161 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1160 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1162 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1161->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval1159, &base1162->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1163 = __retval1159;
  return t1163;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v1164) {
bb1165:
  struct std__vector_int__std__allocator_int__* this1166;
  unsigned long __retval1167;
  long __dif1168;
  this1166 = v1164;
  struct std__vector_int__std__allocator_int__* t1169 = this1166;
  struct std___Vector_base_int__std__allocator_int__* base1170 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1169 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1171 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1170->_M_impl) + 0);
  int* t1172 = base1171->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base1173 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1169 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1174 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1173->_M_impl) + 0);
  int* t1175 = base1174->_M_start;
  long diff1176 = t1172 - t1175;
  __dif1168 = diff1176;
    long t1177 = __dif1168;
    long c1178 = 0;
    _Bool c1179 = ((t1177 < c1178)) ? 1 : 0;
    if (c1179) {
      __builtin_unreachable();
    }
  long t1180 = __dif1168;
  unsigned long cast1181 = (unsigned long)t1180;
  __retval1167 = cast1181;
  unsigned long t1182 = __retval1167;
  return t1182;
}

// function: _ZNSt6vectorIiSaIiEEixEm
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* v1183, unsigned long v1184) {
bb1185:
  struct std__vector_int__std__allocator_int__* this1186;
  unsigned long __n1187;
  int* __retval1188;
  this1186 = v1183;
  __n1187 = v1184;
  struct std__vector_int__std__allocator_int__* t1189 = this1186;
    do {
          unsigned long t1190 = __n1187;
          unsigned long r1191 = std__vector_int__std__allocator_int_____size___const(t1189);
          _Bool c1192 = ((t1190 < r1191)) ? 1 : 0;
          _Bool u1193 = !c1192;
          if (u1193) {
            char* cast1194 = (char*)&(_str_5);
            int c1195 = 1263;
            char* cast1196 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm);
            char* cast1197 = (char*)&(_str_6);
            std____glibcxx_assert_fail(cast1194, c1195, cast1196, cast1197);
          }
      _Bool c1198 = 0;
      if (!c1198) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base1199 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1189 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1200 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1199->_M_impl) + 0);
  int* t1201 = base1200->_M_start;
  unsigned long t1202 = __n1187;
  int* ptr1203 = &(t1201)[t1202];
  __retval1188 = ptr1203;
  int* t1204 = __retval1188;
  return t1204;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v1205, void* v1206) {
bb1207:
  struct std__basic_ostream_char__std__char_traits_char__* this1208;
  void* __pf1209;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1210;
  this1208 = v1205;
  __pf1209 = v1206;
  struct std__basic_ostream_char__std__char_traits_char__* t1211 = this1208;
  void* t1212 = __pf1209;
  struct std__basic_ostream_char__std__char_traits_char__* r1213 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t1212)(t1211);
  __retval1210 = r1213;
  struct std__basic_ostream_char__std__char_traits_char__* t1214 = __retval1210;
  return t1214;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1215) {
bb1216:
  struct std__basic_ostream_char__std__char_traits_char__* __os1217;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1218;
  __os1217 = v1215;
  struct std__basic_ostream_char__std__char_traits_char__* t1219 = __os1217;
  struct std__basic_ostream_char__std__char_traits_char__* r1220 = std__ostream__flush(t1219);
  __retval1218 = r1220;
  struct std__basic_ostream_char__std__char_traits_char__* t1221 = __retval1218;
  return t1221;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v1222) {
bb1223:
  struct std__ctype_char_* __f1224;
  struct std__ctype_char_* __retval1225;
  __f1224 = v1222;
    struct std__ctype_char_* t1226 = __f1224;
    _Bool cast1227 = (_Bool)t1226;
    _Bool u1228 = !cast1227;
    if (u1228) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t1229 = __f1224;
  __retval1225 = t1229;
  struct std__ctype_char_* t1230 = __retval1225;
  return t1230;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v1231, char v1232) {
bb1233:
  struct std__ctype_char_* this1234;
  char __c1235;
  char __retval1236;
  this1234 = v1231;
  __c1235 = v1232;
  struct std__ctype_char_* t1237 = this1234;
    char t1238 = t1237->_M_widen_ok;
    _Bool cast1239 = (_Bool)t1238;
    if (cast1239) {
      char t1240 = __c1235;
      unsigned char cast1241 = (unsigned char)t1240;
      unsigned long cast1242 = (unsigned long)cast1241;
      char t1243 = t1237->_M_widen[cast1242];
      __retval1236 = t1243;
      char t1244 = __retval1236;
      return t1244;
    }
  std__ctype_char____M_widen_init___const(t1237);
  char t1245 = __c1235;
  void** v1246 = (void**)t1237;
  void* v1247 = *((void**)v1246);
  char vcall1250 = (char)__VERIFIER_virtual_call_char_char(t1237, 6, t1245);
  __retval1236 = vcall1250;
  char t1251 = __retval1236;
  return t1251;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v1252, char v1253) {
bb1254:
  struct std__basic_ios_char__std__char_traits_char__* this1255;
  char __c1256;
  char __retval1257;
  this1255 = v1252;
  __c1256 = v1253;
  struct std__basic_ios_char__std__char_traits_char__* t1258 = this1255;
  struct std__ctype_char_* t1259 = t1258->_M_ctype;
  struct std__ctype_char_* r1260 = std__ctype_char__const__std____check_facet_std__ctype_char___(t1259);
  char t1261 = __c1256;
  char r1262 = std__ctype_char___widen_char__const(r1260, t1261);
  __retval1257 = r1262;
  char t1263 = __retval1257;
  return t1263;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1264) {
bb1265:
  struct std__basic_ostream_char__std__char_traits_char__* __os1266;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1267;
  __os1266 = v1264;
  struct std__basic_ostream_char__std__char_traits_char__* t1268 = __os1266;
  struct std__basic_ostream_char__std__char_traits_char__* t1269 = __os1266;
  void** v1270 = (void**)t1269;
  void* v1271 = *((void**)v1270);
  unsigned char* cast1272 = (unsigned char*)v1271;
  long c1273 = -24;
  unsigned char* ptr1274 = &(cast1272)[c1273];
  long* cast1275 = (long*)ptr1274;
  long t1276 = *cast1275;
  unsigned char* cast1277 = (unsigned char*)t1269;
  unsigned char* ptr1278 = &(cast1277)[t1276];
  struct std__basic_ostream_char__std__char_traits_char__* cast1279 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1278;
  struct std__basic_ios_char__std__char_traits_char__* cast1280 = (struct std__basic_ios_char__std__char_traits_char__*)cast1279;
  char c1281 = 10;
  char r1282 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast1280, c1281);
  struct std__basic_ostream_char__std__char_traits_char__* r1283 = std__ostream__put(t1268, r1282);
  struct std__basic_ostream_char__std__char_traits_char__* r1284 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r1283);
  __retval1267 = r1284;
  struct std__basic_ostream_char__std__char_traits_char__* t1285 = __retval1267;
  return t1285;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v1286) {
bb1287:
  struct std__vector_int__std__allocator_int__* this1288;
  this1288 = v1286;
  struct std__vector_int__std__allocator_int__* t1289 = this1288;
    struct std___Vector_base_int__std__allocator_int__* base1290 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1289 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1291 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1290->_M_impl) + 0);
    int* t1292 = base1291->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base1293 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1289 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1294 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1293->_M_impl) + 0);
    int* t1295 = base1294->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base1296 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1289 + 0);
    struct std__allocator_int_* r1297 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1296);
    void_std___Destroy_int___int_(t1292, t1295, r1297);
  {
    struct std___Vector_base_int__std__allocator_int__* base1298 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1289 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base1298);
  }
  return;
}

// function: main
int main() {
bb1299:
  int __retval1300;
  int myints1301[3];
  int myints11302[3];
  struct std__vector_int__std__allocator_int__ myvector1303;
  struct std__allocator_int_ ref_tmp01304;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it1305;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01306;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11307;
  struct myclass agg_tmp21308;
  int c1309 = 0;
  __retval1300 = c1309;
  // array copy
  __builtin_memcpy(myints1301, __const_main_myints, (unsigned long)3 * sizeof(__const_main_myints[0]));
  // array copy
  __builtin_memcpy(myints11302, __const_main_myints1, (unsigned long)3 * sizeof(__const_main_myints1[0]));
  int* cast1310 = (int*)&(myints1301);
  int* cast1311 = (int*)&(myints1301);
  int c1312 = 3;
  int* ptr1313 = &(cast1311)[c1312];
  std__allocator_int___allocator_2(&ref_tmp01304);
    std__vector_int__std__allocator_int_____vector_int___void_(&myvector1303, cast1310, ptr1313, &ref_tmp01304);
  {
    std__allocator_int____allocator(&ref_tmp01304);
  }
    __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&it1305);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1314 = std__vector_int__std__allocator_int_____begin(&myvector1303);
    agg_tmp01306 = r1314;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1315 = std__vector_int__std__allocator_int_____end(&myvector1303);
    agg_tmp11307 = r1315;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1316 = agg_tmp01306;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1317 = agg_tmp11307;
    struct myclass t1318 = agg_tmp21308;
    void_std__sort___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______myclass_(t1316, t1317, t1318);
    unsigned long c1319 = 0;
    int* r1320 = std__vector_int__std__allocator_int_____operator__(&myvector1303, c1319);
    int t1321 = *r1320;
    int c1322 = 12;
    _Bool c1323 = ((t1321 == c1322)) ? 1 : 0;
    if (c1323) {
    } else {
      char* cast1324 = (char*)&(_str);
      char* c1325 = _str_1;
      unsigned int c1326 = 36;
      char* cast1327 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1324, c1325, c1326, cast1327);
    }
    unsigned long c1328 = 1;
    int* r1329 = std__vector_int__std__allocator_int_____operator__(&myvector1303, c1328);
    int t1330 = *r1329;
    int c1331 = 32;
    _Bool c1332 = ((t1330 == c1331)) ? 1 : 0;
    if (c1332) {
    } else {
      char* cast1333 = (char*)&(_str_2);
      char* c1334 = _str_1;
      unsigned int c1335 = 37;
      char* cast1336 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1333, c1334, c1335, cast1336);
    }
    unsigned long c1337 = 2;
    int* r1338 = std__vector_int__std__allocator_int_____operator__(&myvector1303, c1337);
    int t1339 = *r1338;
    int c1340 = 71;
    _Bool c1341 = ((t1339 == c1340)) ? 1 : 0;
    if (c1341) {
    } else {
      char* cast1342 = (char*)&(_str_3);
      char* c1343 = _str_1;
      unsigned int c1344 = 38;
      char* cast1345 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1342, c1343, c1344, cast1345);
    }
    struct std__basic_ostream_char__std__char_traits_char__* r1346 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c1347 = 0;
    __retval1300 = c1347;
    int t1348 = __retval1300;
    int ret_val1349 = t1348;
    {
      std__vector_int__std__allocator_int______vector(&myvector1303);
    }
    return ret_val1349;
  int t1350 = __retval1300;
  return t1350;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v1351) {
bb1352:
  struct std____new_allocator_int_* this1353;
  this1353 = v1351;
  struct std____new_allocator_int_* t1354 = this1353;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1355, struct std__allocator_int_* v1356) {
bb1357:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1358;
  struct std__allocator_int_* __a1359;
  this1358 = v1355;
  __a1359 = v1356;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1360 = this1358;
  struct std__allocator_int_* base1361 = (struct std__allocator_int_*)((char *)t1360 + 0);
  struct std__allocator_int_* t1362 = __a1359;
  std__allocator_int___allocator(base1361, t1362);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1363 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t1360 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base1363);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1364) {
bb1365:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1366;
  this1366 = v1364;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1367 = this1366;
  {
    struct std__allocator_int_* base1368 = (struct std__allocator_int_*)((char *)t1367 + 0);
    std__allocator_int____allocator(base1368);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1369, struct std__allocator_int_* v1370) {
bb1371:
  struct std___Vector_base_int__std__allocator_int__* this1372;
  struct std__allocator_int_* __a1373;
  this1372 = v1369;
  __a1373 = v1370;
  struct std___Vector_base_int__std__allocator_int__* t1374 = this1372;
  struct std__allocator_int_* t1375 = __a1373;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t1374->_M_impl, t1375);
  return;
}

// function: _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_
long _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_(struct std__ranges____distance_fn* v1376, int** v1377, int* v1378) {
bb1379:
  struct std__ranges____distance_fn* this1380;
  int** __first1381;
  int* __last1382;
  long __retval1383;
  this1380 = v1376;
  __first1381 = v1377;
  __last1382 = v1378;
  struct std__ranges____distance_fn* t1384 = this1380;
  int* t1385 = __last1382;
  int** t1386 = __first1381;
  int* t1387 = *t1386;
  long diff1388 = t1385 - t1387;
  __retval1383 = diff1388;
  long t1389 = __retval1383;
  return t1389;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1390:
  _Bool __retval1391;
    _Bool c1392 = 0;
    __retval1391 = c1392;
    _Bool t1393 = __retval1391;
    return t1393;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v1394) {
bb1395:
  struct std____new_allocator_int_* this1396;
  unsigned long __retval1397;
  this1396 = v1394;
  struct std____new_allocator_int_* t1398 = this1396;
  unsigned long c1399 = 9223372036854775807;
  unsigned long c1400 = 4;
  unsigned long b1401 = c1399 / c1400;
  __retval1397 = b1401;
  unsigned long t1402 = __retval1397;
  return t1402;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v1403, unsigned long v1404, void* v1405) {
bb1406:
  struct std____new_allocator_int_* this1407;
  unsigned long __n1408;
  void* unnamed1409;
  int* __retval1410;
  this1407 = v1403;
  __n1408 = v1404;
  unnamed1409 = v1405;
  struct std____new_allocator_int_* t1411 = this1407;
    unsigned long t1412 = __n1408;
    unsigned long r1413 = std____new_allocator_int____M_max_size___const(t1411);
    _Bool c1414 = ((t1412 > r1413)) ? 1 : 0;
    if (c1414) {
        unsigned long t1415 = __n1408;
        unsigned long c1416 = -1;
        unsigned long c1417 = 4;
        unsigned long b1418 = c1416 / c1417;
        _Bool c1419 = ((t1415 > b1418)) ? 1 : 0;
        if (c1419) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c1420 = 4;
    unsigned long c1421 = 16;
    _Bool c1422 = ((c1420 > c1421)) ? 1 : 0;
    if (c1422) {
      unsigned long __al1423;
      unsigned long c1424 = 4;
      __al1423 = c1424;
      unsigned long t1425 = __n1408;
      unsigned long c1426 = 4;
      unsigned long b1427 = t1425 * c1426;
      unsigned long t1428 = __al1423;
      void* r1429 = operator_new_2(b1427, t1428);
      int* cast1430 = (int*)r1429;
      __retval1410 = cast1430;
      int* t1431 = __retval1410;
      return t1431;
    }
  unsigned long t1432 = __n1408;
  unsigned long c1433 = 4;
  unsigned long b1434 = t1432 * c1433;
  void* r1435 = operator_new(b1434);
  int* cast1436 = (int*)r1435;
  __retval1410 = cast1436;
  int* t1437 = __retval1410;
  return t1437;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v1438, unsigned long v1439) {
bb1440:
  struct std__allocator_int_* this1441;
  unsigned long __n1442;
  int* __retval1443;
  this1441 = v1438;
  __n1442 = v1439;
  struct std__allocator_int_* t1444 = this1441;
    _Bool r1445 = std____is_constant_evaluated();
    if (r1445) {
        unsigned long t1446 = __n1442;
        unsigned long c1447 = 4;
        unsigned long ovr1448;
        _Bool ovf1449 = __builtin_mul_overflow(t1446, c1447, &ovr1448);
        __n1442 = ovr1448;
        if (ovf1449) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1450 = __n1442;
      void* r1451 = operator_new(t1450);
      int* cast1452 = (int*)r1451;
      __retval1443 = cast1452;
      int* t1453 = __retval1443;
      return t1453;
    }
  struct std____new_allocator_int_* base1454 = (struct std____new_allocator_int_*)((char *)t1444 + 0);
  unsigned long t1455 = __n1442;
  void* c1456 = ((void*)0);
  int* r1457 = std____new_allocator_int___allocate(base1454, t1455, c1456);
  __retval1443 = r1457;
  int* t1458 = __retval1443;
  return t1458;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v1459, unsigned long v1460) {
bb1461:
  struct std__allocator_int_* __a1462;
  unsigned long __n1463;
  int* __retval1464;
  __a1462 = v1459;
  __n1463 = v1460;
  struct std__allocator_int_* t1465 = __a1462;
  unsigned long t1466 = __n1463;
  int* r1467 = std__allocator_int___allocate(t1465, t1466);
  __retval1464 = r1467;
  int* t1468 = __retval1464;
  return t1468;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v1469, unsigned long v1470) {
bb1471:
  struct std___Vector_base_int__std__allocator_int__* this1472;
  unsigned long __n1473;
  int* __retval1474;
  this1472 = v1469;
  __n1473 = v1470;
  struct std___Vector_base_int__std__allocator_int__* t1475 = this1472;
  unsigned long t1476 = __n1473;
  unsigned long c1477 = 0;
  _Bool c1478 = ((t1476 != c1477)) ? 1 : 0;
  int* ternary1479;
  if (c1478) {
    struct std__allocator_int_* base1480 = (struct std__allocator_int_*)((char *)&(t1475->_M_impl) + 0);
    unsigned long t1481 = __n1473;
    int* r1482 = std__allocator_traits_std__allocator_int_____allocate(base1480, t1481);
    ternary1479 = (int*)r1482;
  } else {
    int* c1483 = ((void*)0);
    ternary1479 = (int*)c1483;
  }
  __retval1474 = ternary1479;
  int* t1484 = __retval1474;
  return t1484;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v1485, unsigned long* v1486) {
bb1487:
  unsigned long* __a1488;
  unsigned long* __b1489;
  unsigned long* __retval1490;
  __a1488 = v1485;
  __b1489 = v1486;
    unsigned long* t1491 = __b1489;
    unsigned long t1492 = *t1491;
    unsigned long* t1493 = __a1488;
    unsigned long t1494 = *t1493;
    _Bool c1495 = ((t1492 < t1494)) ? 1 : 0;
    if (c1495) {
      unsigned long* t1496 = __b1489;
      __retval1490 = t1496;
      unsigned long* t1497 = __retval1490;
      return t1497;
    }
  unsigned long* t1498 = __a1488;
  __retval1490 = t1498;
  unsigned long* t1499 = __retval1490;
  return t1499;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v1500) {
bb1501:
  struct std__allocator_int_* __a1502;
  unsigned long __retval1503;
  unsigned long __diffmax1504;
  unsigned long __allocmax1505;
  __a1502 = v1500;
  unsigned long c1506 = 2305843009213693951;
  __diffmax1504 = c1506;
  unsigned long c1507 = 4611686018427387903;
  __allocmax1505 = c1507;
  unsigned long* r1508 = unsigned_long_const__std__min_unsigned_long_(&__diffmax1504, &__allocmax1505);
  unsigned long t1509 = *r1508;
  __retval1503 = t1509;
  unsigned long t1510 = __retval1503;
  return t1510;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v1511, struct std__allocator_int_* v1512) {
bb1513:
  struct std__allocator_int_* this1514;
  struct std__allocator_int_* __a1515;
  this1514 = v1511;
  __a1515 = v1512;
  struct std__allocator_int_* t1516 = this1514;
  struct std____new_allocator_int_* base1517 = (struct std____new_allocator_int_*)((char *)t1516 + 0);
  struct std__allocator_int_* t1518 = __a1515;
  struct std____new_allocator_int_* base1519 = (struct std____new_allocator_int_*)((char *)t1518 + 0);
  std____new_allocator_int_____new_allocator(base1517, base1519);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v1520, struct std__allocator_int_* v1521) {
bb1522:
  unsigned long __n1523;
  struct std__allocator_int_* __a1524;
  unsigned long __retval1525;
  __n1523 = v1520;
  __a1524 = v1521;
    struct std__allocator_int_ ref_tmp01526;
    _Bool tmp_exprcleanup1527;
    unsigned long t1528 = __n1523;
    struct std__allocator_int_* t1529 = __a1524;
    std__allocator_int___allocator(&ref_tmp01526, t1529);
      unsigned long r1530 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp01526);
      _Bool c1531 = ((t1528 > r1530)) ? 1 : 0;
      tmp_exprcleanup1527 = c1531;
    {
      std__allocator_int____allocator(&ref_tmp01526);
    }
    _Bool t1532 = tmp_exprcleanup1527;
    if (t1532) {
      char* cast1533 = (char*)&(_str_4);
      std____throw_length_error(cast1533);
    }
  unsigned long t1534 = __n1523;
  __retval1525 = t1534;
  unsigned long t1535 = __retval1525;
  return t1535;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v1536) {
bb1537:
  struct std___Vector_base_int__std__allocator_int__* this1538;
  struct std__allocator_int_* __retval1539;
  this1538 = v1536;
  struct std___Vector_base_int__std__allocator_int__* t1540 = this1538;
  struct std__allocator_int_* base1541 = (struct std__allocator_int_*)((char *)&(t1540->_M_impl) + 0);
  __retval1539 = base1541;
  struct std__allocator_int_* t1542 = __retval1539;
  return t1542;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1543:
  _Bool __retval1544;
    _Bool c1545 = 0;
    __retval1544 = c1545;
    _Bool t1546 = __retval1544;
    return t1546;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1547, int** v1548) {
bb1549:
  struct std___UninitDestroyGuard_int____void_* this1550;
  int** __first1551;
  this1550 = v1547;
  __first1551 = v1548;
  struct std___UninitDestroyGuard_int____void_* t1552 = this1550;
  int** t1553 = __first1551;
  int* t1554 = *t1553;
  t1552->_M_first = t1554;
  int** t1555 = __first1551;
  t1552->_M_cur = t1555;
  return;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v1556, int* v1557) {
bb1558:
  int* __location1559;
  int* __args1560;
  int* __retval1561;
  void* __loc1562;
  __location1559 = v1556;
  __args1560 = v1557;
  int* t1563 = __location1559;
  void* cast1564 = (void*)t1563;
  __loc1562 = cast1564;
    void* t1565 = __loc1562;
    int* cast1566 = (int*)t1565;
    int* t1567 = __args1560;
    int t1568 = *t1567;
    *cast1566 = t1568;
    __retval1561 = cast1566;
    int* t1569 = __retval1561;
    return t1569;
  abort();
}

// function: _ZSt10_ConstructIiJRiEEvPT_DpOT0_
void void_std___Construct_int__int__(int* v1570, int* v1571) {
bb1572:
  int* __p1573;
  int* __args1574;
  __p1573 = v1570;
  __args1574 = v1571;
    _Bool r1575 = std____is_constant_evaluated();
    if (r1575) {
      int* t1576 = __p1573;
      int* t1577 = __args1574;
      int* r1578 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t1576, t1577);
      return;
    }
  int* t1579 = __p1573;
  void* cast1580 = (void*)t1579;
  int* cast1581 = (int*)cast1580;
  int* t1582 = __args1574;
  int t1583 = *t1582;
  *cast1581 = t1583;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v1584) {
bb1585:
  struct std___UninitDestroyGuard_int____void_* this1586;
  this1586 = v1584;
  struct std___UninitDestroyGuard_int____void_* t1587 = this1586;
  int** c1588 = ((void*)0);
  t1587->_M_cur = c1588;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1589) {
bb1590:
  struct std___UninitDestroyGuard_int____void_* this1591;
  this1591 = v1589;
  struct std___UninitDestroyGuard_int____void_* t1592 = this1591;
    int** t1593 = t1592->_M_cur;
    int** c1594 = ((void*)0);
    _Bool c1595 = ((t1593 != c1594)) ? 1 : 0;
    if (c1595) {
      int* t1596 = t1592->_M_first;
      int** t1597 = t1592->_M_cur;
      int* t1598 = *t1597;
      void_std___Destroy_int__(t1596, t1598);
    }
  return;
}

// function: _ZSt16__do_uninit_copyIPiS0_S0_ET1_T_T0_S1_
int* int__std____do_uninit_copy_int___int___int__(int* v1599, int* v1600, int* v1601) {
bb1602:
  int* __first1603;
  int* __last1604;
  int* __result1605;
  int* __retval1606;
  struct std___UninitDestroyGuard_int____void_ __guard1607;
  __first1603 = v1599;
  __last1604 = v1600;
  __result1605 = v1601;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard1607, &__result1605);
      while (1) {
        int* t1609 = __first1603;
        int* t1610 = __last1604;
        _Bool c1611 = ((t1609 != t1610)) ? 1 : 0;
        if (!c1611) break;
        int* t1612 = __result1605;
        int* t1613 = __first1603;
        void_std___Construct_int__int__(t1612, t1613);
      for_step1608: ;
        int* t1614 = __first1603;
        int c1615 = 1;
        int* ptr1616 = &(t1614)[c1615];
        __first1603 = ptr1616;
        int* t1617 = __result1605;
        int c1618 = 1;
        int* ptr1619 = &(t1617)[c1618];
        __result1605 = ptr1619;
      }
    std___UninitDestroyGuard_int___void___release(&__guard1607);
    int* t1620 = __result1605;
    __retval1606 = t1620;
    int* t1621 = __retval1606;
    int* ret_val1622 = t1621;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1607);
    }
    return ret_val1622;
  abort();
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v1623) {
bb1624:
  int* __it1625;
  int* __retval1626;
  __it1625 = v1623;
  int* t1627 = __it1625;
  __retval1626 = t1627;
  int* t1628 = __retval1626;
  return t1628;
}

// function: _ZSt18uninitialized_copyIPiS0_ET0_T_S2_S1_
int* int__std__uninitialized_copy_int___int__(int* v1629, int* v1630, int* v1631) {
bb1632:
  int* __first1633;
  int* __last1634;
  int* __result1635;
  int* __retval1636;
  __first1633 = v1629;
  __last1634 = v1630;
  __result1635 = v1631;
      long __n1637;
      int* t1638 = __last1634;
      int* t1639 = __first1633;
      long diff1640 = t1638 - t1639;
      __n1637 = diff1640;
        long t1641 = __n1637;
        long c1642 = 0;
        _Bool c1643 = ((t1641 > c1642)) ? 1 : 0;
        if (c1643) {
          int* t1644 = __result1635;
          int* r1645 = int__std____niter_base_int__(t1644);
          void* cast1646 = (void*)r1645;
          int* t1647 = __first1633;
          int* r1648 = int__std____niter_base_int__(t1647);
          void* cast1649 = (void*)r1648;
          long t1650 = __n1637;
          unsigned long cast1651 = (unsigned long)t1650;
          unsigned long c1652 = 4;
          unsigned long b1653 = cast1651 * c1652;
          void* r1654 = memcpy(cast1646, cast1649, b1653);
          long t1655 = __n1637;
          int* t1656 = __result1635;
          int* ptr1657 = &(t1656)[t1655];
          __result1635 = ptr1657;
        }
      int* t1658 = __result1635;
      __retval1636 = t1658;
      int* t1659 = __retval1636;
      return t1659;
  abort();
}

// function: _ZSt22__uninitialized_copy_aIPiS0_S0_iET1_T_T0_S1_RSaIT2_E
int* int__std____uninitialized_copy_a_int___int___int___int_(int* v1660, int* v1661, int* v1662, struct std__allocator_int_* v1663) {
bb1664:
  int* __first1665;
  int* __last1666;
  int* __result1667;
  struct std__allocator_int_* unnamed1668;
  int* __retval1669;
  __first1665 = v1660;
  __last1666 = v1661;
  __result1667 = v1662;
  unnamed1668 = v1663;
    _Bool r1670 = std__is_constant_evaluated();
    if (r1670) {
      int* t1671 = __first1665;
      int* t1672 = __last1666;
      int* t1673 = __result1667;
      int* r1674 = int__std____do_uninit_copy_int___int___int__(t1671, t1672, t1673);
      __retval1669 = r1674;
      int* t1675 = __retval1669;
      return t1675;
    }
    int* t1676 = __first1665;
    int* t1677 = __last1666;
    int* t1678 = __result1667;
    int* r1679 = int__std__uninitialized_copy_int___int__(t1676, t1677, t1678);
    __retval1669 = r1679;
    int* t1680 = __retval1669;
    return t1680;
  abort();
}

// function: _ZNSt6vectorIiSaIiEE21_M_range_initialize_nIPiS3_EEvT_T0_m
void void_std__vector_int__std__allocator_int______M_range_initialize_n_int___int__(struct std__vector_int__std__allocator_int__* v1681, int* v1682, int* v1683, unsigned long v1684) {
bb1685:
  struct std__vector_int__std__allocator_int__* this1686;
  int* __first1687;
  int* __last1688;
  unsigned long __n1689;
  int* __start1690;
  this1686 = v1681;
  __first1687 = v1682;
  __last1688 = v1683;
  __n1689 = v1684;
  struct std__vector_int__std__allocator_int__* t1691 = this1686;
  struct std___Vector_base_int__std__allocator_int__* base1692 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1691 + 0);
  unsigned long t1693 = __n1689;
  struct std___Vector_base_int__std__allocator_int__* base1694 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1691 + 0);
  struct std__allocator_int_* r1695 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1694);
  unsigned long r1696 = std__vector_int__std__allocator_int______S_check_init_len(t1693, r1695);
  int* r1697 = std___Vector_base_int__std__allocator_int______M_allocate(base1692, r1696);
  __start1690 = r1697;
  int* t1698 = __start1690;
  struct std___Vector_base_int__std__allocator_int__* base1699 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1691 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1700 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1699->_M_impl) + 0);
  base1700->_M_finish = t1698;
  struct std___Vector_base_int__std__allocator_int__* base1701 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1691 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1702 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1701->_M_impl) + 0);
  base1702->_M_start = t1698;
  int* t1703 = __start1690;
  unsigned long t1704 = __n1689;
  int* ptr1705 = &(t1703)[t1704];
  struct std___Vector_base_int__std__allocator_int__* base1706 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1691 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1707 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1706->_M_impl) + 0);
  base1707->_M_end_of_storage = ptr1705;
  int* t1708 = __first1687;
  int* t1709 = __last1688;
  int* t1710 = __start1690;
  struct std___Vector_base_int__std__allocator_int__* base1711 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1691 + 0);
  struct std__allocator_int_* r1712 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1711);
  int* r1713 = int__std____uninitialized_copy_a_int___int___int___int_(t1708, t1709, t1710, r1712);
  struct std___Vector_base_int__std__allocator_int__* base1714 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1691 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1715 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1714->_M_impl) + 0);
  base1715->_M_finish = r1713;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1716, int* v1717, unsigned long v1718) {
bb1719:
  struct std____new_allocator_int_* this1720;
  int* __p1721;
  unsigned long __n1722;
  this1720 = v1716;
  __p1721 = v1717;
  __n1722 = v1718;
  struct std____new_allocator_int_* t1723 = this1720;
    unsigned long c1724 = 4;
    unsigned long c1725 = 16;
    _Bool c1726 = ((c1724 > c1725)) ? 1 : 0;
    if (c1726) {
      int* t1727 = __p1721;
      void* cast1728 = (void*)t1727;
      unsigned long t1729 = __n1722;
      unsigned long c1730 = 4;
      unsigned long b1731 = t1729 * c1730;
      unsigned long c1732 = 4;
      operator_delete_3(cast1728, b1731, c1732);
      return;
    }
  int* t1733 = __p1721;
  void* cast1734 = (void*)t1733;
  unsigned long t1735 = __n1722;
  unsigned long c1736 = 4;
  unsigned long b1737 = t1735 * c1736;
  operator_delete_2(cast1734, b1737);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1738, int* v1739, unsigned long v1740) {
bb1741:
  struct std__allocator_int_* this1742;
  int* __p1743;
  unsigned long __n1744;
  this1742 = v1738;
  __p1743 = v1739;
  __n1744 = v1740;
  struct std__allocator_int_* t1745 = this1742;
    _Bool r1746 = std____is_constant_evaluated();
    if (r1746) {
      int* t1747 = __p1743;
      void* cast1748 = (void*)t1747;
      operator_delete(cast1748);
      return;
    }
  struct std____new_allocator_int_* base1749 = (struct std____new_allocator_int_*)((char *)t1745 + 0);
  int* t1750 = __p1743;
  unsigned long t1751 = __n1744;
  std____new_allocator_int___deallocate(base1749, t1750, t1751);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1752, int* v1753, unsigned long v1754) {
bb1755:
  struct std__allocator_int_* __a1756;
  int* __p1757;
  unsigned long __n1758;
  __a1756 = v1752;
  __p1757 = v1753;
  __n1758 = v1754;
  struct std__allocator_int_* t1759 = __a1756;
  int* t1760 = __p1757;
  unsigned long t1761 = __n1758;
  std__allocator_int___deallocate(t1759, t1760, t1761);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v1762, int* v1763, unsigned long v1764) {
bb1765:
  struct std___Vector_base_int__std__allocator_int__* this1766;
  int* __p1767;
  unsigned long __n1768;
  this1766 = v1762;
  __p1767 = v1763;
  __n1768 = v1764;
  struct std___Vector_base_int__std__allocator_int__* t1769 = this1766;
    int* t1770 = __p1767;
    _Bool cast1771 = (_Bool)t1770;
    if (cast1771) {
      struct std__allocator_int_* base1772 = (struct std__allocator_int_*)((char *)&(t1769->_M_impl) + 0);
      int* t1773 = __p1767;
      unsigned long t1774 = __n1768;
      std__allocator_traits_std__allocator_int_____deallocate(base1772, t1773, t1774);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1775) {
bb1776:
  struct std___Vector_base_int__std__allocator_int__* this1777;
  this1777 = v1775;
  struct std___Vector_base_int__std__allocator_int__* t1778 = this1777;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1779 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1778->_M_impl) + 0);
    int* t1780 = base1779->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1781 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1778->_M_impl) + 0);
    int* t1782 = base1781->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1783 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1778->_M_impl) + 0);
    int* t1784 = base1783->_M_start;
    long diff1785 = t1782 - t1784;
    unsigned long cast1786 = (unsigned long)diff1785;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1778, t1780, cast1786);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1778->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1787, struct std____new_allocator_int_* v1788) {
bb1789:
  struct std____new_allocator_int_* this1790;
  struct std____new_allocator_int_* unnamed1791;
  this1790 = v1787;
  unnamed1791 = v1788;
  struct std____new_allocator_int_* t1792 = this1790;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1793) {
bb1794:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1795;
  this1795 = v1793;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1796 = this1795;
  int* c1797 = ((void*)0);
  t1796->_M_start = c1797;
  int* c1798 = ((void*)0);
  t1796->_M_finish = c1798;
  int* c1799 = ((void*)0);
  t1796->_M_end_of_storage = c1799;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1800) {
bb1801:
  int* __location1802;
  __location1802 = v1800;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1803, int* v1804) {
bb1805:
  int* __first1806;
  int* __last1807;
  __first1806 = v1803;
  __last1807 = v1804;
      _Bool r1808 = std____is_constant_evaluated();
      if (r1808) {
          while (1) {
            int* t1810 = __first1806;
            int* t1811 = __last1807;
            _Bool c1812 = ((t1810 != t1811)) ? 1 : 0;
            if (!c1812) break;
            int* t1813 = __first1806;
            void_std__destroy_at_int_(t1813);
          for_step1809: ;
            int* t1814 = __first1806;
            int c1815 = 1;
            int* ptr1816 = &(t1814)[c1815];
            __first1806 = ptr1816;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1817, int* v1818, struct std__allocator_int_* v1819) {
bb1820:
  int* __first1821;
  int* __last1822;
  struct std__allocator_int_* unnamed1823;
  __first1821 = v1817;
  __last1822 = v1818;
  unnamed1823 = v1819;
  int* t1824 = __first1821;
  int* t1825 = __last1822;
  void_std___Destroy_int__(t1824, t1825);
  return;
}

