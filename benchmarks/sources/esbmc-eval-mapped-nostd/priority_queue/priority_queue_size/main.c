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
struct __gnu_cxx____normal_iterator_int____void_ { int* _M_current; };
struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__ { unsigned char __field0; };
struct __gnu_cxx____ops___Iter_comp_val_std__less_int__ { unsigned char __field0; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_ { unsigned char __field0; };
struct std__allocator_int_ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__less_int_ { unsigned char __field0; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };
struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__ { struct std__vector_int__std__allocator_int__ c; unsigned char __field1[8]; } __attribute__((packed));

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[10] = "0. size: ";
char _str_1[19] = "myints.size() == 0";
char _str_2[122] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/priority_queue/priority_queue_size/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[10] = "1. size: ";
char _str_4[19] = "myints.size() == 5";
char _str_5[10] = "2. size: ";
char _str_6[19] = "myints.size() == 4";
char _str_7[26] = "vector::_M_realloc_append";
char _str_8[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_queue.h";
char __PRETTY_FUNCTION____ZNSt14priority_queueIiSt6vectorIiSaIiEESt4lessIiEE3popEv[106] = "void std::priority_queue<int>::pop() [_Tp = int, _Sequence = std::vector<int>, _Compare = std::less<int>]";
char _str_9[15] = "!this->empty()";
char _str_10[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_heap.h";
char __PRETTY_FUNCTION____ZSt8pop_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEESt4lessIiEEvT_S9_T0_[182] = "void std::pop_heap(_RandomAccessIterator, _RandomAccessIterator, _Compare) [_RandomAccessIterator = __gnu_cxx::__normal_iterator<int *, std::vector<int>>, _Compare = std::less<int>]";
char _str_11[18] = "__first != __last";
char _str_12[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE8pop_backEv[76] = "void std::vector<int>::pop_back() [_Tp = int, _Alloc = std::allocator<int>]";
void std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int_____priority_queue_std__vector_int__std__allocator_int_____void_(struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* p0);
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
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
unsigned long std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int_____size___const(struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* p0);
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
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(struct std__allocator_int_* p0, int* p1, int* p2);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* p0);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* p0);
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* p0);
extern void std____throw_length_error(char* p0);
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, char* p2);
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
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
int* int__std__to_address_int_(int* p0);
int* auto_std____to_address_int__(int** p0);
_Bool std__is_constant_evaluated();
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
void void_std__vector_int__std__allocator_int______M_realloc_append_int_const__(struct std__vector_int__std__allocator_int__* p0, int* p1);
void std__vector_int__std__allocator_int_____push_back(struct std__vector_int__std__allocator_int__* p0, int* p1);
void __gnu_cxx____ops___Iter_comp_val_std__less_int______Iter_comp_val_2(struct __gnu_cxx____ops___Iter_comp_val_std__less_int__* p0, struct std__less_int_ p1);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
_Bool std__less_int___operator___int_const___int_const___const(struct std__less_int_* p0, int* p1, int* p2);
_Bool bool___gnu_cxx____ops___Iter_comp_val_std__less_int_____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____ops___Iter_comp_val_std__less_int__* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
void void_std____push_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_comp_val_std__less_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, long p1, long p2, int p3, struct __gnu_cxx____ops___Iter_comp_val_std__less_int__* p4);
void void_std__push_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__less_int___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct std__less_int_ p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
void std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int_____push(struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* p0, int* p1);
int** __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0);
_Bool _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p1);
void __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin___const(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end___const(struct std__vector_int__std__allocator_int__* p0);
_Bool std__vector_int__std__allocator_int_____empty___const(struct std__vector_int__std__allocator_int__* p0);
_Bool std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int_____empty___const(struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
void __gnu_cxx____ops___Iter_comp_iter_std__less_int______Iter_comp_iter(struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__* p0, struct std__less_int_ p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
_Bool bool___gnu_cxx____ops___Iter_comp_iter_std__less_int_____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
void __gnu_cxx____ops___Iter_comp_val_std__less_int______Iter_comp_val(struct __gnu_cxx____ops___Iter_comp_val_std__less_int__* p0, struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__* p1);
void void_std____adjust_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_comp_iter_std__less_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, long p1, long p2, int p3, struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__ p4);
void void_std____pop_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_std__less_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__* p3);
void void_std__pop_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__less_int___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct std__less_int_ p2);
void std__vector_int__std__allocator_int_____pop_back(struct std__vector_int__std__allocator_int__* p0);
void std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int_____pop(struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* p0);
void std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int______priority_queue(struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* p0);
int main();
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* p0);
_Bool std____is_constant_evaluated();
void void_std__destroy_at_int_(int* p0);
void void_std___Destroy_int__(int* p0, int* p1);
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* p0);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_int___deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* p0, int* p1, unsigned long p2);
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0);
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* p0);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0);
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0);
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* p0);
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* p0);
void std__allocator_int___allocator(struct std__allocator_int_* p0);
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p0);

// function: _ZNSt14priority_queueIiSt6vectorIiSaIiEESt4lessIiEEC2IS2_vEEv
void std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int_____priority_queue_std__vector_int__std__allocator_int_____void_(struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* v0) {
bb1:
  struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* this2;
  this2 = v0;
  struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* t3 = this2;
  struct std__vector_int__std__allocator_int__ c4 = {0};
  t3->c = c4;
  std__vector_int__std__allocator_int_____vector(&t3->c);
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v5, int v6) {
bb7:
  int __a8;
  int __b9;
  int __retval10;
  __a8 = v5;
  __b9 = v6;
  int t11 = __a8;
  int t12 = __b9;
  int b13 = t11 | t12;
  __retval10 = b13;
  int t14 = __retval10;
  return t14;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v15) {
bb16:
  struct std__basic_ios_char__std__char_traits_char__* this17;
  int __retval18;
  this17 = v15;
  struct std__basic_ios_char__std__char_traits_char__* t19 = this17;
  struct std__ios_base* base20 = (struct std__ios_base*)((char *)t19 + 0);
  int t21 = base20->_M_streambuf_state;
  __retval18 = t21;
  int t22 = __retval18;
  return t22;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v23, int v24) {
bb25:
  struct std__basic_ios_char__std__char_traits_char__* this26;
  int __state27;
  this26 = v23;
  __state27 = v24;
  struct std__basic_ios_char__std__char_traits_char__* t28 = this26;
  int r29 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t28);
  int t30 = __state27;
  int r31 = std__operator_(r29, t30);
  std__basic_ios_char__std__char_traits_char_____clear(t28, r31);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v32, char* v33) {
bb34:
  char* __c135;
  char* __c236;
  _Bool __retval37;
  __c135 = v32;
  __c236 = v33;
  char* t38 = __c135;
  char t39 = *t38;
  int cast40 = (int)t39;
  char* t41 = __c236;
  char t42 = *t41;
  int cast43 = (int)t42;
  _Bool c44 = ((cast40 == cast43)) ? 1 : 0;
  __retval37 = c44;
  _Bool t45 = __retval37;
  return t45;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v46) {
bb47:
  char* __p48;
  unsigned long __retval49;
  unsigned long __i50;
  __p48 = v46;
  unsigned long c51 = 0;
  __i50 = c51;
    char ref_tmp052;
    while (1) {
      unsigned long t53 = __i50;
      char* t54 = __p48;
      char* ptr55 = &(t54)[t53];
      char c56 = 0;
      ref_tmp052 = c56;
      _Bool r57 = __gnu_cxx__char_traits_char___eq(ptr55, &ref_tmp052);
      _Bool u58 = !r57;
      if (!u58) break;
      unsigned long t59 = __i50;
      unsigned long u60 = t59 + 1;
      __i50 = u60;
    }
  unsigned long t61 = __i50;
  __retval49 = t61;
  unsigned long t62 = __retval49;
  return t62;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v63) {
bb64:
  char* __s65;
  unsigned long __retval66;
  __s65 = v63;
    _Bool r67 = std____is_constant_evaluated();
    if (r67) {
      char* t68 = __s65;
      unsigned long r69 = __gnu_cxx__char_traits_char___length(t68);
      __retval66 = r69;
      unsigned long t70 = __retval66;
      return t70;
    }
  char* t71 = __s65;
  unsigned long r72 = strlen(t71);
  __retval66 = r72;
  unsigned long t73 = __retval66;
  return t73;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v74, char* v75) {
bb76:
  struct std__basic_ostream_char__std__char_traits_char__* __out77;
  char* __s78;
  struct std__basic_ostream_char__std__char_traits_char__* __retval79;
  __out77 = v74;
  __s78 = v75;
    char* t80 = __s78;
    _Bool cast81 = (_Bool)t80;
    _Bool u82 = !cast81;
    if (u82) {
      struct std__basic_ostream_char__std__char_traits_char__* t83 = __out77;
      void** v84 = (void**)t83;
      void* v85 = *((void**)v84);
      unsigned char* cast86 = (unsigned char*)v85;
      long c87 = -24;
      unsigned char* ptr88 = &(cast86)[c87];
      long* cast89 = (long*)ptr88;
      long t90 = *cast89;
      unsigned char* cast91 = (unsigned char*)t83;
      unsigned char* ptr92 = &(cast91)[t90];
      struct std__basic_ostream_char__std__char_traits_char__* cast93 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr92;
      struct std__basic_ios_char__std__char_traits_char__* cast94 = (struct std__basic_ios_char__std__char_traits_char__*)cast93;
      int t95 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast94, t95);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t96 = __out77;
      char* t97 = __s78;
      char* t98 = __s78;
      unsigned long r99 = std__char_traits_char___length(t98);
      long cast100 = (long)r99;
      struct std__basic_ostream_char__std__char_traits_char__* r101 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t96, t97, cast100);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t102 = __out77;
  __retval79 = t102;
  struct std__basic_ostream_char__std__char_traits_char__* t103 = __retval79;
  return t103;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v104) {
bb105:
  struct std__vector_int__std__allocator_int__* this106;
  unsigned long __retval107;
  long __dif108;
  this106 = v104;
  struct std__vector_int__std__allocator_int__* t109 = this106;
  struct std___Vector_base_int__std__allocator_int__* base110 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t109 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base111 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base110->_M_impl) + 0);
  int* t112 = base111->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base113 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t109 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base114 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base113->_M_impl) + 0);
  int* t115 = base114->_M_start;
  long diff116 = t112 - t115;
  __dif108 = diff116;
    long t117 = __dif108;
    long c118 = 0;
    _Bool c119 = ((t117 < c118)) ? 1 : 0;
    if (c119) {
      __builtin_unreachable();
    }
  long t120 = __dif108;
  unsigned long cast121 = (unsigned long)t120;
  __retval107 = cast121;
  unsigned long t122 = __retval107;
  return t122;
}

// function: _ZNKSt14priority_queueIiSt6vectorIiSaIiEESt4lessIiEE4sizeEv
unsigned long std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int_____size___const(struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* v123) {
bb124:
  struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* this125;
  unsigned long __retval126;
  this125 = v123;
  struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* t127 = this125;
  unsigned long r128 = std__vector_int__std__allocator_int_____size___const(&t127->c);
  __retval126 = r128;
  unsigned long t129 = __retval126;
  return t129;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v130, void* v131) {
bb132:
  struct std__basic_ostream_char__std__char_traits_char__* this133;
  void* __pf134;
  struct std__basic_ostream_char__std__char_traits_char__* __retval135;
  this133 = v130;
  __pf134 = v131;
  struct std__basic_ostream_char__std__char_traits_char__* t136 = this133;
  void* t137 = __pf134;
  struct std__basic_ostream_char__std__char_traits_char__* r138 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t137)(t136);
  __retval135 = r138;
  struct std__basic_ostream_char__std__char_traits_char__* t139 = __retval135;
  return t139;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v140) {
bb141:
  struct std__basic_ostream_char__std__char_traits_char__* __os142;
  struct std__basic_ostream_char__std__char_traits_char__* __retval143;
  __os142 = v140;
  struct std__basic_ostream_char__std__char_traits_char__* t144 = __os142;
  struct std__basic_ostream_char__std__char_traits_char__* r145 = std__ostream__flush(t144);
  __retval143 = r145;
  struct std__basic_ostream_char__std__char_traits_char__* t146 = __retval143;
  return t146;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v147) {
bb148:
  struct std__ctype_char_* __f149;
  struct std__ctype_char_* __retval150;
  __f149 = v147;
    struct std__ctype_char_* t151 = __f149;
    _Bool cast152 = (_Bool)t151;
    _Bool u153 = !cast152;
    if (u153) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t154 = __f149;
  __retval150 = t154;
  struct std__ctype_char_* t155 = __retval150;
  return t155;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v156, char v157) {
bb158:
  struct std__ctype_char_* this159;
  char __c160;
  char __retval161;
  this159 = v156;
  __c160 = v157;
  struct std__ctype_char_* t162 = this159;
    char t163 = t162->_M_widen_ok;
    _Bool cast164 = (_Bool)t163;
    if (cast164) {
      char t165 = __c160;
      unsigned char cast166 = (unsigned char)t165;
      unsigned long cast167 = (unsigned long)cast166;
      char t168 = t162->_M_widen[cast167];
      __retval161 = t168;
      char t169 = __retval161;
      return t169;
    }
  std__ctype_char____M_widen_init___const(t162);
  char t170 = __c160;
  void** v171 = (void**)t162;
  void* v172 = *((void**)v171);
  char vcall175 = (char)__VERIFIER_virtual_call_char_char(t162, 6, t170);
  __retval161 = vcall175;
  char t176 = __retval161;
  return t176;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v177, char v178) {
bb179:
  struct std__basic_ios_char__std__char_traits_char__* this180;
  char __c181;
  char __retval182;
  this180 = v177;
  __c181 = v178;
  struct std__basic_ios_char__std__char_traits_char__* t183 = this180;
  struct std__ctype_char_* t184 = t183->_M_ctype;
  struct std__ctype_char_* r185 = std__ctype_char__const__std____check_facet_std__ctype_char___(t184);
  char t186 = __c181;
  char r187 = std__ctype_char___widen_char__const(r185, t186);
  __retval182 = r187;
  char t188 = __retval182;
  return t188;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v189) {
bb190:
  struct std__basic_ostream_char__std__char_traits_char__* __os191;
  struct std__basic_ostream_char__std__char_traits_char__* __retval192;
  __os191 = v189;
  struct std__basic_ostream_char__std__char_traits_char__* t193 = __os191;
  struct std__basic_ostream_char__std__char_traits_char__* t194 = __os191;
  void** v195 = (void**)t194;
  void* v196 = *((void**)v195);
  unsigned char* cast197 = (unsigned char*)v196;
  long c198 = -24;
  unsigned char* ptr199 = &(cast197)[c198];
  long* cast200 = (long*)ptr199;
  long t201 = *cast200;
  unsigned char* cast202 = (unsigned char*)t194;
  unsigned char* ptr203 = &(cast202)[t201];
  struct std__basic_ostream_char__std__char_traits_char__* cast204 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr203;
  struct std__basic_ios_char__std__char_traits_char__* cast205 = (struct std__basic_ios_char__std__char_traits_char__*)cast204;
  char c206 = 10;
  char r207 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast205, c206);
  struct std__basic_ostream_char__std__char_traits_char__* r208 = std__ostream__put(t193, r207);
  struct std__basic_ostream_char__std__char_traits_char__* r209 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r208);
  __retval192 = r209;
  struct std__basic_ostream_char__std__char_traits_char__* t210 = __retval192;
  return t210;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v211, int* v212) {
bb213:
  int* __location214;
  int* __args215;
  int* __retval216;
  void* __loc217;
  __location214 = v211;
  __args215 = v212;
  int* t218 = __location214;
  void* cast219 = (void*)t218;
  __loc217 = cast219;
    void* t220 = __loc217;
    int* cast221 = (int*)t220;
    int* t222 = __args215;
    int t223 = *t222;
    *cast221 = t223;
    __retval216 = cast221;
    int* t224 = __retval216;
    return t224;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJRKiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(struct std__allocator_int_* v225, int* v226, int* v227) {
bb228:
  struct std__allocator_int_* __a229;
  int* __p230;
  int* __args231;
  __a229 = v225;
  __p230 = v226;
  __args231 = v227;
  int* t232 = __p230;
  int* t233 = __args231;
  int* r234 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t232, t233);
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v235, unsigned long* v236) {
bb237:
  unsigned long* __a238;
  unsigned long* __b239;
  unsigned long* __retval240;
  __a238 = v235;
  __b239 = v236;
    unsigned long* t241 = __b239;
    unsigned long t242 = *t241;
    unsigned long* t243 = __a238;
    unsigned long t244 = *t243;
    _Bool c245 = ((t242 < t244)) ? 1 : 0;
    if (c245) {
      unsigned long* t246 = __b239;
      __retval240 = t246;
      unsigned long* t247 = __retval240;
      return t247;
    }
  unsigned long* t248 = __a238;
  __retval240 = t248;
  unsigned long* t249 = __retval240;
  return t249;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v250) {
bb251:
  struct std__allocator_int_* __a252;
  unsigned long __retval253;
  unsigned long __diffmax254;
  unsigned long __allocmax255;
  __a252 = v250;
  unsigned long c256 = 2305843009213693951;
  __diffmax254 = c256;
  unsigned long c257 = 4611686018427387903;
  __allocmax255 = c257;
  unsigned long* r258 = unsigned_long_const__std__min_unsigned_long_(&__diffmax254, &__allocmax255);
  unsigned long t259 = *r258;
  __retval253 = t259;
  unsigned long t260 = __retval253;
  return t260;
}

// function: _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* v261) {
bb262:
  struct std___Vector_base_int__std__allocator_int__* this263;
  struct std__allocator_int_* __retval264;
  this263 = v261;
  struct std___Vector_base_int__std__allocator_int__* t265 = this263;
  struct std__allocator_int_* base266 = (struct std__allocator_int_*)((char *)&(t265->_M_impl) + 0);
  __retval264 = base266;
  struct std__allocator_int_* t267 = __retval264;
  return t267;
}

// function: _ZNKSt6vectorIiSaIiEE8max_sizeEv
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* v268) {
bb269:
  struct std__vector_int__std__allocator_int__* this270;
  unsigned long __retval271;
  this270 = v268;
  struct std__vector_int__std__allocator_int__* t272 = this270;
  struct std___Vector_base_int__std__allocator_int__* base273 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t272 + 0);
  struct std__allocator_int_* r274 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(base273);
  unsigned long r275 = std__vector_int__std__allocator_int______S_max_size(r274);
  __retval271 = r275;
  unsigned long t276 = __retval271;
  return t276;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v277, unsigned long* v278) {
bb279:
  unsigned long* __a280;
  unsigned long* __b281;
  unsigned long* __retval282;
  __a280 = v277;
  __b281 = v278;
    unsigned long* t283 = __a280;
    unsigned long t284 = *t283;
    unsigned long* t285 = __b281;
    unsigned long t286 = *t285;
    _Bool c287 = ((t284 < t286)) ? 1 : 0;
    if (c287) {
      unsigned long* t288 = __b281;
      __retval282 = t288;
      unsigned long* t289 = __retval282;
      return t289;
    }
  unsigned long* t290 = __a280;
  __retval282 = t290;
  unsigned long* t291 = __retval282;
  return t291;
}

// function: _ZNKSt6vectorIiSaIiEE12_M_check_lenEmPKc
unsigned long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std__vector_int__std__allocator_int__* v292, unsigned long v293, char* v294) {
bb295:
  struct std__vector_int__std__allocator_int__* this296;
  unsigned long __n297;
  char* __s298;
  unsigned long __retval299;
  unsigned long __len300;
  unsigned long ref_tmp0301;
  this296 = v292;
  __n297 = v293;
  __s298 = v294;
  struct std__vector_int__std__allocator_int__* t302 = this296;
    unsigned long r303 = std__vector_int__std__allocator_int_____max_size___const(t302);
    unsigned long r304 = std__vector_int__std__allocator_int_____size___const(t302);
    unsigned long b305 = r303 - r304;
    unsigned long t306 = __n297;
    _Bool c307 = ((b305 < t306)) ? 1 : 0;
    if (c307) {
      char* t308 = __s298;
      std____throw_length_error(t308);
    }
  unsigned long r309 = std__vector_int__std__allocator_int_____size___const(t302);
  unsigned long r310 = std__vector_int__std__allocator_int_____size___const(t302);
  ref_tmp0301 = r310;
  unsigned long* r311 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp0301, &__n297);
  unsigned long t312 = *r311;
  unsigned long b313 = r309 + t312;
  __len300 = b313;
  unsigned long t314 = __len300;
  unsigned long r315 = std__vector_int__std__allocator_int_____size___const(t302);
  _Bool c316 = ((t314 < r315)) ? 1 : 0;
  _Bool ternary317;
  if (c316) {
    _Bool c318 = 1;
    ternary317 = (_Bool)c318;
  } else {
    unsigned long t319 = __len300;
    unsigned long r320 = std__vector_int__std__allocator_int_____max_size___const(t302);
    _Bool c321 = ((t319 > r320)) ? 1 : 0;
    ternary317 = (_Bool)c321;
  }
  unsigned long ternary322;
  if (ternary317) {
    unsigned long r323 = std__vector_int__std__allocator_int_____max_size___const(t302);
    ternary322 = (unsigned long)r323;
  } else {
    unsigned long t324 = __len300;
    ternary322 = (unsigned long)t324;
  }
  __retval299 = ternary322;
  unsigned long t325 = __retval299;
  return t325;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v326) {
bb327:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this328;
  int** __retval329;
  this328 = v326;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t330 = this328;
  __retval329 = &t330->_M_current;
  int** t331 = __retval329;
  return t331;
}

// function: _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v332, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v333) {
bb334:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs335;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs336;
  long __retval337;
  __lhs335 = v332;
  __rhs336 = v333;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t338 = __lhs335;
  int** r339 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t338);
  int* t340 = *r339;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t341 = __rhs336;
  int** r342 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t341);
  int* t343 = *r342;
  long diff344 = t340 - t343;
  __retval337 = diff344;
  long t345 = __retval337;
  return t345;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v346) {
bb347:
  struct std____new_allocator_int_* this348;
  unsigned long __retval349;
  this348 = v346;
  struct std____new_allocator_int_* t350 = this348;
  unsigned long c351 = 9223372036854775807;
  unsigned long c352 = 4;
  unsigned long b353 = c351 / c352;
  __retval349 = b353;
  unsigned long t354 = __retval349;
  return t354;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v355, unsigned long v356, void* v357) {
bb358:
  struct std____new_allocator_int_* this359;
  unsigned long __n360;
  void* unnamed361;
  int* __retval362;
  this359 = v355;
  __n360 = v356;
  unnamed361 = v357;
  struct std____new_allocator_int_* t363 = this359;
    unsigned long t364 = __n360;
    unsigned long r365 = std____new_allocator_int____M_max_size___const(t363);
    _Bool c366 = ((t364 > r365)) ? 1 : 0;
    if (c366) {
        unsigned long t367 = __n360;
        unsigned long c368 = -1;
        unsigned long c369 = 4;
        unsigned long b370 = c368 / c369;
        _Bool c371 = ((t367 > b370)) ? 1 : 0;
        if (c371) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c372 = 4;
    unsigned long c373 = 16;
    _Bool c374 = ((c372 > c373)) ? 1 : 0;
    if (c374) {
      unsigned long __al375;
      unsigned long c376 = 4;
      __al375 = c376;
      unsigned long t377 = __n360;
      unsigned long c378 = 4;
      unsigned long b379 = t377 * c378;
      unsigned long t380 = __al375;
      void* r381 = operator_new_2(b379, t380);
      int* cast382 = (int*)r381;
      __retval362 = cast382;
      int* t383 = __retval362;
      return t383;
    }
  unsigned long t384 = __n360;
  unsigned long c385 = 4;
  unsigned long b386 = t384 * c385;
  void* r387 = operator_new(b386);
  int* cast388 = (int*)r387;
  __retval362 = cast388;
  int* t389 = __retval362;
  return t389;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v390, unsigned long v391) {
bb392:
  struct std__allocator_int_* this393;
  unsigned long __n394;
  int* __retval395;
  this393 = v390;
  __n394 = v391;
  struct std__allocator_int_* t396 = this393;
    _Bool r397 = std____is_constant_evaluated();
    if (r397) {
        unsigned long t398 = __n394;
        unsigned long c399 = 4;
        unsigned long ovr400;
        _Bool ovf401 = __builtin_mul_overflow(t398, c399, &ovr400);
        __n394 = ovr400;
        if (ovf401) {
          std____throw_bad_array_new_length();
        }
      unsigned long t402 = __n394;
      void* r403 = operator_new(t402);
      int* cast404 = (int*)r403;
      __retval395 = cast404;
      int* t405 = __retval395;
      return t405;
    }
  struct std____new_allocator_int_* base406 = (struct std____new_allocator_int_*)((char *)t396 + 0);
  unsigned long t407 = __n394;
  void* c408 = ((void*)0);
  int* r409 = std____new_allocator_int___allocate(base406, t407, c408);
  __retval395 = r409;
  int* t410 = __retval395;
  return t410;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v411, unsigned long v412) {
bb413:
  struct std__allocator_int_* __a414;
  unsigned long __n415;
  int* __retval416;
  __a414 = v411;
  __n415 = v412;
  struct std__allocator_int_* t417 = __a414;
  unsigned long t418 = __n415;
  int* r419 = std__allocator_int___allocate(t417, t418);
  __retval416 = r419;
  int* t420 = __retval416;
  return t420;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v421, unsigned long v422) {
bb423:
  struct std___Vector_base_int__std__allocator_int__* this424;
  unsigned long __n425;
  int* __retval426;
  this424 = v421;
  __n425 = v422;
  struct std___Vector_base_int__std__allocator_int__* t427 = this424;
  unsigned long t428 = __n425;
  unsigned long c429 = 0;
  _Bool c430 = ((t428 != c429)) ? 1 : 0;
  int* ternary431;
  if (c430) {
    struct std__allocator_int_* base432 = (struct std__allocator_int_*)((char *)&(t427->_M_impl) + 0);
    unsigned long t433 = __n425;
    int* r434 = std__allocator_traits_std__allocator_int_____allocate(base432, t433);
    ternary431 = (int*)r434;
  } else {
    int* c435 = ((void*)0);
    ternary431 = (int*)c435;
  }
  __retval426 = ternary431;
  int* t436 = __retval426;
  return t436;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocC2EPimRSt12_Vector_baseIiS0_E
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v437, int* v438, unsigned long v439, struct std___Vector_base_int__std__allocator_int__* v440) {
bb441:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this442;
  int* __s443;
  unsigned long __l444;
  struct std___Vector_base_int__std__allocator_int__* __vect445;
  this442 = v437;
  __s443 = v438;
  __l444 = v439;
  __vect445 = v440;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t446 = this442;
  int* t447 = __s443;
  t446->_M_storage = t447;
  unsigned long t448 = __l444;
  t446->_M_len = t448;
  struct std___Vector_base_int__std__allocator_int__* t449 = __vect445;
  t446->_M_vect = t449;
  return;
}

// function: _ZSt10to_addressIiEPT_S1_
int* int__std__to_address_int_(int* v450) {
bb451:
  int* __ptr452;
  int* __retval453;
  __ptr452 = v450;
  int* t454 = __ptr452;
  __retval453 = t454;
  int* t455 = __retval453;
  return t455;
}

// function: _ZSt12__to_addressIPiEDaRKT_
int* auto_std____to_address_int__(int** v456) {
bb457:
  int** __ptr458;
  int* __retval459;
  __ptr458 = v456;
  int** t460 = __ptr458;
  int* t461 = *t460;
  int* r462 = int__std__to_address_int_(t461);
  __retval459 = r462;
  int* t463 = __retval459;
  return t463;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb464:
  _Bool __retval465;
    _Bool c466 = 0;
    __retval465 = c466;
    _Bool t467 = __retval465;
    return t467;
  abort();
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEC2ERKS1_
void __gnu_cxx____normal_iterator_int___void_____normal_iterator(struct __gnu_cxx____normal_iterator_int____void_* v468, int** v469) {
bb470:
  struct __gnu_cxx____normal_iterator_int____void_* this471;
  int** __i472;
  this471 = v468;
  __i472 = v469;
  struct __gnu_cxx____normal_iterator_int____void_* t473 = this471;
  int** t474 = __i472;
  int* t475 = *t474;
  t473->_M_current = t475;
  return;
}

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v476, int* v477) {
bb478:
  int* __location479;
  int* __args480;
  int* __retval481;
  void* __loc482;
  __location479 = v476;
  __args480 = v477;
  int* t483 = __location479;
  void* cast484 = (void*)t483;
  __loc482 = cast484;
    void* t485 = __loc482;
    int* cast486 = (int*)t485;
    int* t487 = __args480;
    int t488 = *t487;
    *cast486 = t488;
    __retval481 = cast486;
    int* t489 = __retval481;
    return t489;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* v490, int* v491, int* v492) {
bb493:
  struct std__allocator_int_* __a494;
  int* __p495;
  int* __args496;
  __a494 = v490;
  __p495 = v491;
  __args496 = v492;
  int* t497 = __p495;
  int* t498 = __args496;
  int* r499 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t497, t498);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE7destroyIiEEvRS0_PT_
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* v500, int* v501) {
bb502:
  struct std__allocator_int_* __a503;
  int* __p504;
  __a503 = v500;
  __p504 = v501;
  int* t505 = __p504;
  void_std__destroy_at_int_(t505);
  return;
}

// function: _ZSt19__relocate_object_aIiiSaIiEEvPT_PT0_RT1_
void void_std____relocate_object_a_int__int__std__allocator_int___(int* v506, int* v507, struct std__allocator_int_* v508) {
bb509:
  int* __dest510;
  int* __orig511;
  struct std__allocator_int_* __alloc512;
  __dest510 = v506;
  __orig511 = v507;
  __alloc512 = v508;
  struct std__allocator_int_* t513 = __alloc512;
  int* t514 = __dest510;
  int* t515 = __orig511;
  void_std__allocator_traits_std__allocator_int_____construct_int__int_(t513, t514, t515);
  struct std__allocator_int_* t516 = __alloc512;
  int* t517 = __orig511;
  void_std__allocator_traits_std__allocator_int_____destroy_int_(t516, t517);
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivEdeEv
int* __gnu_cxx____normal_iterator_int___void___operator____const(struct __gnu_cxx____normal_iterator_int____void_* v518) {
bb519:
  struct __gnu_cxx____normal_iterator_int____void_* this520;
  int* __retval521;
  this520 = v518;
  struct __gnu_cxx____normal_iterator_int____void_* t522 = this520;
  int* t523 = t522->_M_current;
  __retval521 = t523;
  int* t524 = __retval521;
  return t524;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEppEv
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator__(struct __gnu_cxx____normal_iterator_int____void_* v525) {
bb526:
  struct __gnu_cxx____normal_iterator_int____void_* this527;
  struct __gnu_cxx____normal_iterator_int____void_* __retval528;
  this527 = v525;
  struct __gnu_cxx____normal_iterator_int____void_* t529 = this527;
  int* t530 = t529->_M_current;
  int c531 = 1;
  int* ptr532 = &(t530)[c531];
  t529->_M_current = ptr532;
  __retval528 = t529;
  struct __gnu_cxx____normal_iterator_int____void_* t533 = __retval528;
  return t533;
}

// function: _ZSt14__relocate_a_1IPiN9__gnu_cxx17__normal_iteratorIS0_vEESaIiEET0_T_S6_S5_RT1_
struct __gnu_cxx____normal_iterator_int____void_ __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(int* v534, int* v535, struct __gnu_cxx____normal_iterator_int____void_ v536, struct std__allocator_int_* v537) {
bb538:
  int* __first539;
  int* __last540;
  struct __gnu_cxx____normal_iterator_int____void_ __result541;
  struct std__allocator_int_* __alloc542;
  struct __gnu_cxx____normal_iterator_int____void_ __retval543;
  __first539 = v534;
  __last540 = v535;
  __result541 = v536;
  __alloc542 = v537;
  __retval543 = __result541; // copy
    while (1) {
      int* t545 = __first539;
      int* t546 = __last540;
      _Bool c547 = ((t545 != t546)) ? 1 : 0;
      if (!c547) break;
      int* r548 = __gnu_cxx____normal_iterator_int___void___operator____const(&__retval543);
      int* t549 = __first539;
      struct std__allocator_int_* t550 = __alloc542;
      void_std____relocate_object_a_int__int__std__allocator_int___(r548, t549, t550);
    for_step544: ;
      int* t551 = __first539;
      int c552 = 1;
      int* ptr553 = &(t551)[c552];
      __first539 = ptr553;
      struct __gnu_cxx____normal_iterator_int____void_* r554 = __gnu_cxx____normal_iterator_int___void___operator__(&__retval543);
    }
  struct __gnu_cxx____normal_iterator_int____void_ t555 = __retval543;
  return t555;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEaSEOS2_
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator_(struct __gnu_cxx____normal_iterator_int____void_* v556, struct __gnu_cxx____normal_iterator_int____void_* v557) {
bb558:
  struct __gnu_cxx____normal_iterator_int____void_* this559;
  struct __gnu_cxx____normal_iterator_int____void_* unnamed560;
  struct __gnu_cxx____normal_iterator_int____void_* __retval561;
  this559 = v556;
  unnamed560 = v557;
  struct __gnu_cxx____normal_iterator_int____void_* t562 = this559;
  struct __gnu_cxx____normal_iterator_int____void_* t563 = unnamed560;
  int* t564 = t563->_M_current;
  t562->_M_current = t564;
  __retval561 = t562;
  struct __gnu_cxx____normal_iterator_int____void_* t565 = __retval561;
  return t565;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivE4baseEv
int** __gnu_cxx____normal_iterator_int___void___base___const(struct __gnu_cxx____normal_iterator_int____void_* v566) {
bb567:
  struct __gnu_cxx____normal_iterator_int____void_* this568;
  int** __retval569;
  this568 = v566;
  struct __gnu_cxx____normal_iterator_int____void_* t570 = this568;
  __retval569 = &t570->_M_current;
  int** t571 = __retval569;
  return t571;
}

// function: _ZSt14__relocate_a_1IiiENSt9enable_ifIXsr3std24__is_bitwise_relocatableIT_EE5valueEPS1_E4typeES2_S2_S2_RSaIT0_E
int* std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(int* v572, int* v573, int* v574, struct std__allocator_int_* v575) {
bb576:
  int* __first577;
  int* __last578;
  int* __result579;
  struct std__allocator_int_* __alloc580;
  int* __retval581;
  long __count582;
  __first577 = v572;
  __last578 = v573;
  __result579 = v574;
  __alloc580 = v575;
  int* t583 = __last578;
  int* t584 = __first577;
  long diff585 = t583 - t584;
  __count582 = diff585;
    long t586 = __count582;
    long c587 = 0;
    _Bool c588 = ((t586 > c587)) ? 1 : 0;
    if (c588) {
        _Bool r589 = std__is_constant_evaluated();
        if (r589) {
          struct __gnu_cxx____normal_iterator_int____void_ __out590;
          struct __gnu_cxx____normal_iterator_int____void_ ref_tmp0591;
          struct __gnu_cxx____normal_iterator_int____void_ agg_tmp0592;
          __gnu_cxx____normal_iterator_int___void_____normal_iterator(&__out590, &__result579);
          int* t593 = __first577;
          int* t594 = __last578;
          agg_tmp0592 = __out590; // copy
          struct std__allocator_int_* t595 = __alloc580;
          struct __gnu_cxx____normal_iterator_int____void_ t596 = agg_tmp0592;
          struct __gnu_cxx____normal_iterator_int____void_ r597 = __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(t593, t594, t596, t595);
          ref_tmp0591 = r597;
          struct __gnu_cxx____normal_iterator_int____void_* r598 = __gnu_cxx____normal_iterator_int___void___operator_(&__out590, &ref_tmp0591);
          int** r599 = __gnu_cxx____normal_iterator_int___void___base___const(&__out590);
          int* t600 = *r599;
          __retval581 = t600;
          int* t601 = __retval581;
          return t601;
        }
      int* t602 = __result579;
      void* cast603 = (void*)t602;
      int* t604 = __first577;
      void* cast605 = (void*)t604;
      long t606 = __count582;
      unsigned long cast607 = (unsigned long)t606;
      unsigned long c608 = 4;
      unsigned long b609 = cast607 * c608;
      void* r610 = memcpy(cast603, cast605, b609);
    }
  int* t611 = __result579;
  long t612 = __count582;
  int* ptr613 = &(t611)[t612];
  __retval581 = ptr613;
  int* t614 = __retval581;
  return t614;
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v615) {
bb616:
  int* __it617;
  int* __retval618;
  __it617 = v615;
  int* t619 = __it617;
  __retval618 = t619;
  int* t620 = __retval618;
  return t620;
}

// function: _ZSt12__relocate_aIPiS0_SaIiEET0_T_S3_S2_RT1_
int* int__std____relocate_a_int___int___std__allocator_int___(int* v621, int* v622, int* v623, struct std__allocator_int_* v624) {
bb625:
  int* __first626;
  int* __last627;
  int* __result628;
  struct std__allocator_int_* __alloc629;
  int* __retval630;
  __first626 = v621;
  __last627 = v622;
  __result628 = v623;
  __alloc629 = v624;
  int* t631 = __first626;
  int* r632 = int__std____niter_base_int__(t631);
  int* t633 = __last627;
  int* r634 = int__std____niter_base_int__(t633);
  int* t635 = __result628;
  int* r636 = int__std____niter_base_int__(t635);
  struct std__allocator_int_* t637 = __alloc629;
  int* r638 = std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(r632, r634, r636, t637);
  __retval630 = r638;
  int* t639 = __retval630;
  return t639;
}

// function: _ZNSt6vectorIiSaIiEE11_S_relocateEPiS2_S2_RS0_
int* std__vector_int__std__allocator_int______S_relocate(int* v640, int* v641, int* v642, struct std__allocator_int_* v643) {
bb644:
  int* __first645;
  int* __last646;
  int* __result647;
  struct std__allocator_int_* __alloc648;
  int* __retval649;
  __first645 = v640;
  __last646 = v641;
  __result647 = v642;
  __alloc648 = v643;
  int* t650 = __first645;
  int* t651 = __last646;
  int* t652 = __result647;
  struct std__allocator_int_* t653 = __alloc648;
  int* r654 = int__std____relocate_a_int___int___std__allocator_int___(t650, t651, t652, t653);
  __retval649 = r654;
  int* t655 = __retval649;
  return t655;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocD2Ev
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v656) {
bb657:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this658;
  this658 = v656;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t659 = this658;
    int* t660 = t659->_M_storage;
    _Bool cast661 = (_Bool)t660;
    if (cast661) {
      struct std___Vector_base_int__std__allocator_int__* t662 = t659->_M_vect;
      int* t663 = t659->_M_storage;
      unsigned long t664 = t659->_M_len;
      std___Vector_base_int__std__allocator_int______M_deallocate(t662, t663, t664);
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_M_realloc_appendIJRKiEEEvDpOT_
void void_std__vector_int__std__allocator_int______M_realloc_append_int_const__(struct std__vector_int__std__allocator_int__* v665, int* v666) {
bb667:
  struct std__vector_int__std__allocator_int__* this668;
  int* __args669;
  unsigned long __len670;
  int* __old_start671;
  int* __old_finish672;
  unsigned long __elems673;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0674;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1675;
  int* __new_start676;
  int* __new_finish677;
  this668 = v665;
  __args669 = v666;
  struct std__vector_int__std__allocator_int__* t678 = this668;
  unsigned long c679 = 1;
  char* cast680 = (char*)&(_str_7);
  unsigned long r681 = std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(t678, c679, cast680);
  __len670 = r681;
    unsigned long t682 = __len670;
    unsigned long c683 = 0;
    _Bool c684 = ((t682 <= c683)) ? 1 : 0;
    if (c684) {
      __builtin_unreachable();
    }
  struct std___Vector_base_int__std__allocator_int__* base685 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t678 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base686 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base685->_M_impl) + 0);
  int* t687 = base686->_M_start;
  __old_start671 = t687;
  struct std___Vector_base_int__std__allocator_int__* base688 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t678 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base689 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base688->_M_impl) + 0);
  int* t690 = base689->_M_finish;
  __old_finish672 = t690;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r691 = std__vector_int__std__allocator_int_____end(t678);
  ref_tmp0674 = r691;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r692 = std__vector_int__std__allocator_int_____begin(t678);
  ref_tmp1675 = r692;
  long r693 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&ref_tmp0674, &ref_tmp1675);
  unsigned long cast694 = (unsigned long)r693;
  __elems673 = cast694;
  struct std___Vector_base_int__std__allocator_int__* base695 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t678 + 0);
  unsigned long t696 = __len670;
  int* r697 = std___Vector_base_int__std__allocator_int______M_allocate(base695, t696);
  __new_start676 = r697;
  int* t698 = __new_start676;
  __new_finish677 = t698;
    struct std__vector_int__std__allocator_int_____Guard_alloc __guard699;
    int* ref_tmp2700;
    int* t701 = __new_start676;
    unsigned long t702 = __len670;
    struct std___Vector_base_int__std__allocator_int__* base703 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t678 + 0);
    std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(&__guard699, t701, t702, base703);
      struct std___Vector_base_int__std__allocator_int__* base704 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t678 + 0);
      struct std__allocator_int_* base705 = (struct std__allocator_int_*)((char *)&(base704->_M_impl) + 0);
      int* t706 = __new_start676;
      unsigned long t707 = __elems673;
      int* ptr708 = &(t706)[t707];
      ref_tmp2700 = ptr708;
      int* r709 = auto_std____to_address_int__(&ref_tmp2700);
      int* t710 = __args669;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(base705, r709, t710);
        int* t711 = __old_start671;
        int* t712 = __old_finish672;
        int* t713 = __new_start676;
        struct std___Vector_base_int__std__allocator_int__* base714 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t678 + 0);
        struct std__allocator_int_* r715 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base714);
        int* r716 = std__vector_int__std__allocator_int______S_relocate(t711, t712, t713, r715);
        __new_finish677 = r716;
        int* t717 = __new_finish677;
        int c718 = 1;
        int* ptr719 = &(t717)[c718];
        __new_finish677 = ptr719;
      int* t720 = __old_start671;
      __guard699._M_storage = t720;
      struct std___Vector_base_int__std__allocator_int__* base721 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t678 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base722 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base721->_M_impl) + 0);
      int* t723 = base722->_M_end_of_storage;
      int* t724 = __old_start671;
      long diff725 = t723 - t724;
      unsigned long cast726 = (unsigned long)diff725;
      __guard699._M_len = cast726;
    {
      std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(&__guard699);
    }
  int* t727 = __new_start676;
  struct std___Vector_base_int__std__allocator_int__* base728 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t678 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base729 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base728->_M_impl) + 0);
  base729->_M_start = t727;
  int* t730 = __new_finish677;
  struct std___Vector_base_int__std__allocator_int__* base731 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t678 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base732 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base731->_M_impl) + 0);
  base732->_M_finish = t730;
  int* t733 = __new_start676;
  unsigned long t734 = __len670;
  int* ptr735 = &(t733)[t734];
  struct std___Vector_base_int__std__allocator_int__* base736 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t678 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base737 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base736->_M_impl) + 0);
  base737->_M_end_of_storage = ptr735;
  return;
}

// function: _ZNSt6vectorIiSaIiEE9push_backERKi
void std__vector_int__std__allocator_int_____push_back(struct std__vector_int__std__allocator_int__* v738, int* v739) {
bb740:
  struct std__vector_int__std__allocator_int__* this741;
  int* __x742;
  this741 = v738;
  __x742 = v739;
  struct std__vector_int__std__allocator_int__* t743 = this741;
    struct std___Vector_base_int__std__allocator_int__* base744 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t743 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base745 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base744->_M_impl) + 0);
    int* t746 = base745->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base747 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t743 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base748 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base747->_M_impl) + 0);
    int* t749 = base748->_M_end_of_storage;
    _Bool c750 = ((t746 != t749)) ? 1 : 0;
    if (c750) {
      struct std___Vector_base_int__std__allocator_int__* base751 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t743 + 0);
      struct std__allocator_int_* base752 = (struct std__allocator_int_*)((char *)&(base751->_M_impl) + 0);
      struct std___Vector_base_int__std__allocator_int__* base753 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t743 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base754 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base753->_M_impl) + 0);
      int* t755 = base754->_M_finish;
      int* t756 = __x742;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_const__(base752, t755, t756);
      struct std___Vector_base_int__std__allocator_int__* base757 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t743 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base758 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base757->_M_impl) + 0);
      int* t759 = base758->_M_finish;
      int c760 = 1;
      int* ptr761 = &(t759)[c760];
      base758->_M_finish = ptr761;
    } else {
      int* t762 = __x742;
      void_std__vector_int__std__allocator_int______M_realloc_append_int_const__(t743, t762);
    }
  return;
}

// function: _ZN9__gnu_cxx5__ops14_Iter_comp_valISt4lessIiEEC2ES3_
void __gnu_cxx____ops___Iter_comp_val_std__less_int______Iter_comp_val_2(struct __gnu_cxx____ops___Iter_comp_val_std__less_int__* v763, struct std__less_int_ v764) {
bb765:
  struct __gnu_cxx____ops___Iter_comp_val_std__less_int__* this766;
  struct std__less_int_ __comp767;
  this766 = v763;
  __comp767 = v764;
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v768, int** v769) {
bb770:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this771;
  int** __i772;
  this771 = v768;
  __i772 = v769;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t773 = this771;
  int** t774 = __i772;
  int* t775 = *t774;
  t773->_M_current = t775;
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEmiEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v776, long v777) {
bb778:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this779;
  long __n780;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval781;
  int* ref_tmp0782;
  this779 = v776;
  __n780 = v777;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t783 = this779;
  int* t784 = t783->_M_current;
  long t785 = __n780;
  long u786 = -t785;
  int* ptr787 = &(t784)[u786];
  ref_tmp0782 = ptr787;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval781, &ref_tmp0782);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t788 = __retval781;
  return t788;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v789) {
bb790:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this791;
  int* __retval792;
  this791 = v789;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t793 = this791;
  int* t794 = t793->_M_current;
  __retval792 = t794;
  int* t795 = __retval792;
  return t795;
}

// function: _ZNKSt4lessIiEclERKiS2_
_Bool std__less_int___operator___int_const___int_const___const(struct std__less_int_* v796, int* v797, int* v798) {
bb799:
  struct std__less_int_* this800;
  int* __x801;
  int* __y802;
  _Bool __retval803;
  this800 = v796;
  __x801 = v797;
  __y802 = v798;
  struct std__less_int_* t804 = this800;
  int* t805 = __x801;
  int t806 = *t805;
  int* t807 = __y802;
  int t808 = *t807;
  _Bool c809 = ((t806 < t808)) ? 1 : 0;
  __retval803 = c809;
  _Bool t810 = __retval803;
  return t810;
}

// function: _ZN9__gnu_cxx5__ops14_Iter_comp_valISt4lessIiEEclINS_17__normal_iteratorIPiSt6vectorIiSaIiEEEEiEEbT_RT0_
_Bool bool___gnu_cxx____ops___Iter_comp_val_std__less_int_____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____ops___Iter_comp_val_std__less_int__* v811, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v812, int* v813) {
bb814:
  struct __gnu_cxx____ops___Iter_comp_val_std__less_int__* this815;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it816;
  int* __val817;
  _Bool __retval818;
  this815 = v811;
  __it816 = v812;
  __val817 = v813;
  struct __gnu_cxx____ops___Iter_comp_val_std__less_int__* t819 = this815;
  struct std__less_int_* cast820 = (struct std__less_int_*)t819;
  int* r821 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it816);
  int* t822 = __val817;
  _Bool r823 = std__less_int___operator___int_const___int_const___const(cast820, r821, t822);
  __retval818 = r823;
  _Bool t824 = __retval818;
  return t824;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEplEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v825, long v826) {
bb827:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this828;
  long __n829;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval830;
  int* ref_tmp0831;
  this828 = v825;
  __n829 = v826;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t832 = this828;
  int* t833 = t832->_M_current;
  long t834 = __n829;
  int* ptr835 = &(t833)[t834];
  ref_tmp0831 = ptr835;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval830, &ref_tmp0831);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t836 = __retval830;
  return t836;
}

// function: _ZSt11__push_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEliNS0_5__ops14_Iter_comp_valISt4lessIiEEEEvT_T0_SD_T1_RT2_
void void_std____push_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_comp_val_std__less_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v837, long v838, long v839, int v840, struct __gnu_cxx____ops___Iter_comp_val_std__less_int__* v841) {
bb842:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first843;
  long __holeIndex844;
  long __topIndex845;
  int __value846;
  struct __gnu_cxx____ops___Iter_comp_val_std__less_int__* __comp847;
  long __parent848;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp2849;
  __first843 = v837;
  __holeIndex844 = v838;
  __topIndex845 = v839;
  __value846 = v840;
  __comp847 = v841;
  long t850 = __holeIndex844;
  long c851 = 1;
  long b852 = t850 - c851;
  long c853 = 2;
  long b854 = b852 / c853;
  __parent848 = b854;
    while (1) {
      long t855 = __holeIndex844;
      long t856 = __topIndex845;
      _Bool c857 = ((t855 > t856)) ? 1 : 0;
      _Bool ternary858;
      if (c857) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0859;
        struct __gnu_cxx____ops___Iter_comp_val_std__less_int__* t860 = __comp847;
        long t861 = __parent848;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r862 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first843, t861);
        agg_tmp0859 = r862;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t863 = agg_tmp0859;
        _Bool r864 = bool___gnu_cxx____ops___Iter_comp_val_std__less_int_____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(t860, t863, &__value846);
        ternary858 = (_Bool)r864;
      } else {
        _Bool c865 = 0;
        ternary858 = (_Bool)c865;
      }
      if (!ternary858) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0866;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1867;
        long t868 = __parent848;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r869 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first843, t868);
        ref_tmp0866 = r869;
        int* r870 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0866);
        int t871 = *r870;
        long t872 = __holeIndex844;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r873 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first843, t872);
        ref_tmp1867 = r873;
        int* r874 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp1867);
        *r874 = t871;
        long t875 = __parent848;
        __holeIndex844 = t875;
        long t876 = __holeIndex844;
        long c877 = 1;
        long b878 = t876 - c877;
        long c879 = 2;
        long b880 = b878 / c879;
        __parent848 = b880;
    }
  int t881 = __value846;
  long t882 = __holeIndex844;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r883 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first843, t882);
  ref_tmp2849 = r883;
  int* r884 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp2849);
  *r884 = t881;
  return;
}

// function: _ZSt9push_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEESt4lessIiEEvT_S9_T0_
void void_std__push_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__less_int___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v885, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v886, struct std__less_int_ v887) {
bb888:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first889;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last890;
  struct std__less_int_ __comp891;
  struct __gnu_cxx____ops___Iter_comp_val_std__less_int__ __cmp892;
  struct std__less_int_ agg_tmp0893;
  int __value894;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0895;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1896;
  __first889 = v885;
  __last890 = v886;
  __comp891 = v887;
  struct std__less_int_ t897 = agg_tmp0893;
  __gnu_cxx____ops___Iter_comp_val_std__less_int______Iter_comp_val_2(&__cmp892, t897);
  long c898 = 1;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r899 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&__last890, c898);
  ref_tmp0895 = r899;
  int* r900 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0895);
  int t901 = *r900;
  __value894 = t901;
  agg_tmp1896 = __first889; // copy
  long r902 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last890, &__first889);
  long c903 = 1;
  long b904 = r902 - c903;
  long c905 = 0;
  int t906 = __value894;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t907 = agg_tmp1896;
  void_std____push_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_comp_val_std__less_int_____(t907, b904, c905, t906, &__cmp892);
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v908) {
bb909:
  struct std__vector_int__std__allocator_int__* this910;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval911;
  this910 = v908;
  struct std__vector_int__std__allocator_int__* t912 = this910;
  struct std___Vector_base_int__std__allocator_int__* base913 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t912 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base914 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base913->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval911, &base914->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t915 = __retval911;
  return t915;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v916) {
bb917:
  struct std__vector_int__std__allocator_int__* this918;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval919;
  this918 = v916;
  struct std__vector_int__std__allocator_int__* t920 = this918;
  struct std___Vector_base_int__std__allocator_int__* base921 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t920 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base922 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base921->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval919, &base922->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t923 = __retval919;
  return t923;
}

// function: _ZNSt14priority_queueIiSt6vectorIiSaIiEESt4lessIiEE4pushERKi
void std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int_____push(struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* v924, int* v925) {
bb926:
  struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* this927;
  int* __x928;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0929;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1930;
  struct std__less_int_ agg_tmp2931;
  this927 = v924;
  __x928 = v925;
  struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* t932 = this927;
  int* t933 = __x928;
  std__vector_int__std__allocator_int_____push_back(&t932->c, t933);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r934 = std__vector_int__std__allocator_int_____begin(&t932->c);
  agg_tmp0929 = r934;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r935 = std__vector_int__std__allocator_int_____end(&t932->c);
  agg_tmp1930 = r935;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t936 = agg_tmp0929;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t937 = agg_tmp1930;
  struct std__less_int_ t938 = agg_tmp2931;
  void_std__push_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__less_int___(t936, t937, t938);
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v939) {
bb940:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this941;
  int** __retval942;
  this941 = v939;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t943 = this941;
  __retval942 = &t943->_M_current;
  int** t944 = __retval942;
  return t944;
}

// function: _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v945, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v946) {
bb947:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __lhs948;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __rhs949;
  _Bool __retval950;
  __lhs948 = v945;
  __rhs949 = v946;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t951 = __lhs948;
  int** r952 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t951);
  int* t953 = *r952;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t954 = __rhs949;
  int** r955 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t954);
  int* t956 = *r955;
  _Bool c957 = ((t953 == t956)) ? 1 : 0;
  __retval950 = c957;
  _Bool t958 = __retval950;
  return t958;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2ERKS2_
void __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v959, int** v960) {
bb961:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this962;
  int** __i963;
  this962 = v959;
  __i963 = v960;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t964 = this962;
  int** t965 = __i963;
  int* t966 = *t965;
  t964->_M_current = t966;
  return;
}

// function: _ZNKSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin___const(struct std__vector_int__std__allocator_int__* v967) {
bb968:
  struct std__vector_int__std__allocator_int__* this969;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval970;
  this969 = v967;
  struct std__vector_int__std__allocator_int__* t971 = this969;
  struct std___Vector_base_int__std__allocator_int__* base972 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t971 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base973 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base972->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval970, &base973->_M_start);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t974 = __retval970;
  return t974;
}

// function: _ZNKSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end___const(struct std__vector_int__std__allocator_int__* v975) {
bb976:
  struct std__vector_int__std__allocator_int__* this977;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval978;
  this977 = v975;
  struct std__vector_int__std__allocator_int__* t979 = this977;
  struct std___Vector_base_int__std__allocator_int__* base980 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t979 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base981 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base980->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval978, &base981->_M_finish);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t982 = __retval978;
  return t982;
}

// function: _ZNKSt6vectorIiSaIiEE5emptyEv
_Bool std__vector_int__std__allocator_int_____empty___const(struct std__vector_int__std__allocator_int__* v983) {
bb984:
  struct std__vector_int__std__allocator_int__* this985;
  _Bool __retval986;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp0987;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp1988;
  this985 = v983;
  struct std__vector_int__std__allocator_int__* t989 = this985;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r990 = std__vector_int__std__allocator_int_____begin___const(t989);
  ref_tmp0987 = r990;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r991 = std__vector_int__std__allocator_int_____end___const(t989);
  ref_tmp1988 = r991;
  _Bool r992 = _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&ref_tmp0987, &ref_tmp1988);
  __retval986 = r992;
  _Bool t993 = __retval986;
  return t993;
}

// function: _ZNKSt14priority_queueIiSt6vectorIiSaIiEESt4lessIiEE5emptyEv
_Bool std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int_____empty___const(struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* v994) {
bb995:
  struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* this996;
  _Bool __retval997;
  this996 = v994;
  struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* t998 = this996;
  _Bool r999 = std__vector_int__std__allocator_int_____empty___const(&t998->c);
  __retval997 = r999;
  _Bool t1000 = __retval997;
  return t1000;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1001, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1002) {
bb1003:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs1004;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs1005;
  _Bool __retval1006;
  __lhs1004 = v1001;
  __rhs1005 = v1002;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1007 = __lhs1004;
  int** r1008 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t1007);
  int* t1009 = *r1008;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1010 = __rhs1005;
  int** r1011 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t1010);
  int* t1012 = *r1011;
  _Bool c1013 = ((t1009 == t1012)) ? 1 : 0;
  __retval1006 = c1013;
  _Bool t1014 = __retval1006;
  return t1014;
}

// function: _ZN9__gnu_cxx5__ops15_Iter_comp_iterISt4lessIiEEC2ES3_
void __gnu_cxx____ops___Iter_comp_iter_std__less_int______Iter_comp_iter(struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__* v1015, struct std__less_int_ v1016) {
bb1017:
  struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__* this1018;
  struct std__less_int_ __comp1019;
  this1018 = v1015;
  __comp1019 = v1016;
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEmmEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1020) {
bb1021:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this1022;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval1023;
  this1022 = v1020;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1024 = this1022;
  int* t1025 = t1024->_M_current;
  int c1026 = -1;
  int* ptr1027 = &(t1025)[c1026];
  t1024->_M_current = ptr1027;
  __retval1023 = t1024;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1028 = __retval1023;
  return t1028;
}

// function: _ZN9__gnu_cxx5__ops15_Iter_comp_iterISt4lessIiEEclINS_17__normal_iteratorIPiSt6vectorIiSaIiEEEESB_EEbT_T0_
_Bool bool___gnu_cxx____ops___Iter_comp_iter_std__less_int_____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__* v1029, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1030, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1031) {
bb1032:
  struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__* this1033;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it11034;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it21035;
  _Bool __retval1036;
  this1033 = v1029;
  __it11034 = v1030;
  __it21035 = v1031;
  struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__* t1037 = this1033;
  struct std__less_int_* cast1038 = (struct std__less_int_*)t1037;
  int* r1039 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it11034);
  int* r1040 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it21035);
  _Bool r1041 = std__less_int___operator___int_const___int_const___const(cast1038, r1039, r1040);
  __retval1036 = r1041;
  _Bool t1042 = __retval1036;
  return t1042;
}

// function: _ZN9__gnu_cxx5__ops14_Iter_comp_valISt4lessIiEEC2EONS0_15_Iter_comp_iterIS3_EE
void __gnu_cxx____ops___Iter_comp_val_std__less_int______Iter_comp_val(struct __gnu_cxx____ops___Iter_comp_val_std__less_int__* v1043, struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__* v1044) {
bb1045:
  struct __gnu_cxx____ops___Iter_comp_val_std__less_int__* this1046;
  struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__* __comp1047;
  this1046 = v1043;
  __comp1047 = v1044;
  return;
}

// function: _ZSt13__adjust_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEliNS0_5__ops15_Iter_comp_iterISt4lessIiEEEEvT_T0_SD_T1_T2_
void void_std____adjust_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_comp_iter_std__less_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1048, long v1049, long v1050, int v1051, struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__ v1052) {
bb1053:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1054;
  long __holeIndex1055;
  long __len1056;
  int __value1057;
  struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__ __comp1058;
  long __topIndex1059;
  long __secondChild1060;
  struct __gnu_cxx____ops___Iter_comp_val_std__less_int__ __cmp1061;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp21062;
  __first1054 = v1048;
  __holeIndex1055 = v1049;
  __len1056 = v1050;
  __value1057 = v1051;
  __comp1058 = v1052;
  long t1063 = __holeIndex1055;
  __topIndex1059 = t1063;
  long t1064 = __holeIndex1055;
  __secondChild1060 = t1064;
    while (1) {
      long t1065 = __secondChild1060;
      long t1066 = __len1056;
      long c1067 = 1;
      long b1068 = t1066 - c1067;
      long c1069 = 2;
      long b1070 = b1068 / c1069;
      _Bool c1071 = ((t1065 < b1070)) ? 1 : 0;
      if (!c1071) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp01072;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp11073;
        long c1074 = 2;
        long t1075 = __secondChild1060;
        long c1076 = 1;
        long b1077 = t1075 + c1076;
        long b1078 = c1074 * b1077;
        __secondChild1060 = b1078;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01079;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11080;
          long t1081 = __secondChild1060;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1082 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first1054, t1081);
          agg_tmp01079 = r1082;
          long t1083 = __secondChild1060;
          long c1084 = 1;
          long b1085 = t1083 - c1084;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1086 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first1054, b1085);
          agg_tmp11080 = r1086;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1087 = agg_tmp01079;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1088 = agg_tmp11080;
          _Bool r1089 = bool___gnu_cxx____ops___Iter_comp_iter_std__less_int_____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__comp1058, t1087, t1088);
          if (r1089) {
            long t1090 = __secondChild1060;
            long u1091 = t1090 - 1;
            __secondChild1060 = u1091;
          }
        long t1092 = __secondChild1060;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1093 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first1054, t1092);
        ref_tmp01072 = r1093;
        int* r1094 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp01072);
        int t1095 = *r1094;
        long t1096 = __holeIndex1055;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1097 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first1054, t1096);
        ref_tmp11073 = r1097;
        int* r1098 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp11073);
        *r1098 = t1095;
        long t1099 = __secondChild1060;
        __holeIndex1055 = t1099;
    }
    long t1100 = __len1056;
    long c1101 = 1;
    long b1102 = t1100 & c1101;
    long c1103 = 0;
    _Bool c1104 = ((b1102 == c1103)) ? 1 : 0;
    _Bool ternary1105;
    if (c1104) {
      long t1106 = __secondChild1060;
      long t1107 = __len1056;
      long c1108 = 2;
      long b1109 = t1107 - c1108;
      long c1110 = 2;
      long b1111 = b1109 / c1110;
      _Bool c1112 = ((t1106 == b1111)) ? 1 : 0;
      ternary1105 = (_Bool)c1112;
    } else {
      _Bool c1113 = 0;
      ternary1105 = (_Bool)c1113;
    }
    if (ternary1105) {
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp21114;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp31115;
      long c1116 = 2;
      long t1117 = __secondChild1060;
      long c1118 = 1;
      long b1119 = t1117 + c1118;
      long b1120 = c1116 * b1119;
      __secondChild1060 = b1120;
      long t1121 = __secondChild1060;
      long c1122 = 1;
      long b1123 = t1121 - c1122;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1124 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first1054, b1123);
      ref_tmp21114 = r1124;
      int* r1125 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp21114);
      int t1126 = *r1125;
      long t1127 = __holeIndex1055;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1128 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const_2(&__first1054, t1127);
      ref_tmp31115 = r1128;
      int* r1129 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp31115);
      *r1129 = t1126;
      long t1130 = __secondChild1060;
      long c1131 = 1;
      long b1132 = t1130 - c1131;
      __holeIndex1055 = b1132;
    }
  __gnu_cxx____ops___Iter_comp_val_std__less_int______Iter_comp_val(&__cmp1061, &__comp1058);
  agg_tmp21062 = __first1054; // copy
  long t1133 = __holeIndex1055;
  long t1134 = __topIndex1059;
  int t1135 = __value1057;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1136 = agg_tmp21062;
  void_std____push_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_comp_val_std__less_int_____(t1136, t1133, t1134, t1135, &__cmp1061);
  return;
}

// function: _ZSt10__pop_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_comp_iterISt4lessIiEEEEvT_SC_SC_RT0_
void void_std____pop_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_std__less_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1137, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1138, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1139, struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__* v1140) {
bb1141:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1142;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1143;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result1144;
  struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__* __comp1145;
  int __value1146;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01147;
  struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__ agg_tmp11148;
  __first1142 = v1137;
  __last1143 = v1138;
  __result1144 = v1139;
  __comp1145 = v1140;
  int* r1149 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__result1144);
  int t1150 = *r1149;
  __value1146 = t1150;
  int* r1151 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first1142);
  int t1152 = *r1151;
  int* r1153 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__result1144);
  *r1153 = t1152;
  agg_tmp01147 = __first1142; // copy
  long c1154 = 0;
  long r1155 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last1143, &__first1142);
  int t1156 = __value1146;
  struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__* t1157 = __comp1145;
  agg_tmp11148 = *t1157; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1158 = agg_tmp01147;
  struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__ t1159 = agg_tmp11148;
  void_std____adjust_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long__int____gnu_cxx____ops___Iter_comp_iter_std__less_int_____(t1158, c1154, r1155, t1156, t1159);
  return;
}

// function: _ZSt8pop_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEESt4lessIiEEvT_S9_T0_
void void_std__pop_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__less_int___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1160, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1161, struct std__less_int_ v1162) {
bb1163:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1164;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1165;
  struct std__less_int_ __comp1166;
  __first1164 = v1160;
  __last1165 = v1161;
  __comp1166 = v1162;
    do {
          _Bool r1167 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first1164, &__last1165);
          if (r1167) {
            char* cast1168 = (char*)&(_str_10);
            int c1169 = 325;
            char* cast1170 = (char*)&(__PRETTY_FUNCTION____ZSt8pop_heapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEESt4lessIiEEvT_S9_T0_);
            char* cast1171 = (char*)&(_str_11);
            std____glibcxx_assert_fail(cast1168, c1169, cast1170, cast1171);
          }
      _Bool c1172 = 0;
      if (!c1172) break;
    } while (1);
    long r1173 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last1165, &__first1164);
    long c1174 = 1;
    _Bool c1175 = ((r1173 > c1174)) ? 1 : 0;
    if (c1175) {
      struct __gnu_cxx____ops___Iter_comp_iter_std__less_int__ __cmp1176;
      struct std__less_int_ agg_tmp01177;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11178;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp21179;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp31180;
      struct std__less_int_ t1181 = agg_tmp01177;
      __gnu_cxx____ops___Iter_comp_iter_std__less_int______Iter_comp_iter(&__cmp1176, t1181);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1182 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__last1165);
      agg_tmp11178 = __first1164; // copy
      agg_tmp21179 = __last1165; // copy
      agg_tmp31180 = __last1165; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1183 = agg_tmp11178;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1184 = agg_tmp21179;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1185 = agg_tmp31180;
      void_std____pop_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_std__less_int_____(t1183, t1184, t1185, &__cmp1176);
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE8pop_backEv
void std__vector_int__std__allocator_int_____pop_back(struct std__vector_int__std__allocator_int__* v1186) {
bb1187:
  struct std__vector_int__std__allocator_int__* this1188;
  this1188 = v1186;
  struct std__vector_int__std__allocator_int__* t1189 = this1188;
    do {
          _Bool r1190 = std__vector_int__std__allocator_int_____empty___const(t1189);
          if (r1190) {
            char* cast1191 = (char*)&(_str_12);
            int c1192 = 1459;
            char* cast1193 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE8pop_backEv);
            char* cast1194 = (char*)&(_str_9);
            std____glibcxx_assert_fail(cast1191, c1192, cast1193, cast1194);
          }
      _Bool c1195 = 0;
      if (!c1195) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base1196 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1189 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1197 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1196->_M_impl) + 0);
  int* t1198 = base1197->_M_finish;
  int c1199 = -1;
  int* ptr1200 = &(t1198)[c1199];
  base1197->_M_finish = ptr1200;
  struct std___Vector_base_int__std__allocator_int__* base1201 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1189 + 0);
  struct std__allocator_int_* base1202 = (struct std__allocator_int_*)((char *)&(base1201->_M_impl) + 0);
  struct std___Vector_base_int__std__allocator_int__* base1203 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1189 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1204 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1203->_M_impl) + 0);
  int* t1205 = base1204->_M_finish;
  void_std__allocator_traits_std__allocator_int_____destroy_int_(base1202, t1205);
  return;
}

// function: _ZNSt14priority_queueIiSt6vectorIiSaIiEESt4lessIiEE3popEv
void std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int_____pop(struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* v1206) {
bb1207:
  struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* this1208;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01209;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11210;
  struct std__less_int_ agg_tmp21211;
  this1208 = v1206;
  struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* t1212 = this1208;
    do {
          _Bool r1213 = std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int_____empty___const(t1212);
          if (r1213) {
            char* cast1214 = (char*)&(_str_8);
            int c1215 = 888;
            char* cast1216 = (char*)&(__PRETTY_FUNCTION____ZNSt14priority_queueIiSt6vectorIiSaIiEESt4lessIiEE3popEv);
            char* cast1217 = (char*)&(_str_9);
            std____glibcxx_assert_fail(cast1214, c1215, cast1216, cast1217);
          }
      _Bool c1218 = 0;
      if (!c1218) break;
    } while (1);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1219 = std__vector_int__std__allocator_int_____begin(&t1212->c);
  agg_tmp01209 = r1219;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1220 = std__vector_int__std__allocator_int_____end(&t1212->c);
  agg_tmp11210 = r1220;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1221 = agg_tmp01209;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1222 = agg_tmp11210;
  struct std__less_int_ t1223 = agg_tmp21211;
  void_std__pop_heap___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______std__less_int___(t1221, t1222, t1223);
  std__vector_int__std__allocator_int_____pop_back(&t1212->c);
  return;
}

// function: _ZNSt14priority_queueIiSt6vectorIiSaIiEESt4lessIiEED2Ev
void std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int______priority_queue(struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* v1224) {
bb1225:
  struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* this1226;
  this1226 = v1224;
  struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__* t1227 = this1226;
  {
    std__vector_int__std__allocator_int______vector(&t1227->c);
  }
  return;
}

// function: main
int main() {
bb1228:
  int __retval1229;
  struct std__priority_queue_int__std__vector_int__std__allocator_int____std__less_int__ myints1230;
  int c1231 = 0;
  __retval1229 = c1231;
  std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int_____priority_queue_std__vector_int__std__allocator_int_____void_(&myints1230);
    char* cast1232 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r1233 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1232);
    unsigned long r1234 = std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int_____size___const(&myints1230);
    int cast1235 = (int)r1234;
    struct std__basic_ostream_char__std__char_traits_char__* r1236 = std__ostream__operator__(r1233, cast1235);
    struct std__basic_ostream_char__std__char_traits_char__* r1237 = std__ostream__operator___std__ostream_____(r1236, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    unsigned long r1238 = std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int_____size___const(&myints1230);
    unsigned long c1239 = 0;
    _Bool c1240 = ((r1238 == c1239)) ? 1 : 0;
    if (c1240) {
    } else {
      char* cast1241 = (char*)&(_str_1);
      char* c1242 = _str_2;
      unsigned int c1243 = 18;
      char* cast1244 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1241, c1242, c1243, cast1244);
    }
      int i1245;
      int c1246 = 0;
      i1245 = c1246;
      while (1) {
        int t1248 = i1245;
        int c1249 = 5;
        _Bool c1250 = ((t1248 < c1249)) ? 1 : 0;
        if (!c1250) break;
        std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int_____push(&myints1230, &i1245);
      for_step1247: ;
        int t1251 = i1245;
        int u1252 = t1251 + 1;
        i1245 = u1252;
      }
    char* cast1253 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r1254 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1253);
    unsigned long r1255 = std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int_____size___const(&myints1230);
    int cast1256 = (int)r1255;
    struct std__basic_ostream_char__std__char_traits_char__* r1257 = std__ostream__operator__(r1254, cast1256);
    struct std__basic_ostream_char__std__char_traits_char__* r1258 = std__ostream__operator___std__ostream_____(r1257, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    unsigned long r1259 = std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int_____size___const(&myints1230);
    unsigned long c1260 = 5;
    _Bool c1261 = ((r1259 == c1260)) ? 1 : 0;
    if (c1261) {
    } else {
      char* cast1262 = (char*)&(_str_4);
      char* c1263 = _str_2;
      unsigned int c1264 = 21;
      char* cast1265 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1262, c1263, c1264, cast1265);
    }
    std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int_____pop(&myints1230);
    char* cast1266 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* r1267 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1266);
    unsigned long r1268 = std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int_____size___const(&myints1230);
    int cast1269 = (int)r1268;
    struct std__basic_ostream_char__std__char_traits_char__* r1270 = std__ostream__operator__(r1267, cast1269);
    struct std__basic_ostream_char__std__char_traits_char__* r1271 = std__ostream__operator___std__ostream_____(r1270, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    unsigned long r1272 = std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int_____size___const(&myints1230);
    unsigned long c1273 = 4;
    _Bool c1274 = ((r1272 == c1273)) ? 1 : 0;
    if (c1274) {
    } else {
      char* cast1275 = (char*)&(_str_6);
      char* c1276 = _str_2;
      unsigned int c1277 = 24;
      char* cast1278 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1275, c1276, c1277, cast1278);
    }
    int c1279 = 0;
    __retval1229 = c1279;
    int t1280 = __retval1229;
    int ret_val1281 = t1280;
    {
      std__priority_queue_int__std__vector_int__std__allocator_int_____std__less_int______priority_queue(&myints1230);
    }
    return ret_val1281;
  int t1282 = __retval1229;
  return t1282;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v1283) {
bb1284:
  struct std__vector_int__std__allocator_int__* this1285;
  this1285 = v1283;
  struct std__vector_int__std__allocator_int__* t1286 = this1285;
    struct std___Vector_base_int__std__allocator_int__* base1287 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1286 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1288 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1287->_M_impl) + 0);
    int* t1289 = base1288->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base1290 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1286 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1291 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1290->_M_impl) + 0);
    int* t1292 = base1291->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base1293 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1286 + 0);
    struct std__allocator_int_* r1294 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1293);
    void_std___Destroy_int___int_(t1289, t1292, r1294);
  {
    struct std___Vector_base_int__std__allocator_int__* base1295 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1286 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base1295);
  }
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1296:
  _Bool __retval1297;
    _Bool c1298 = 0;
    __retval1297 = c1298;
    _Bool t1299 = __retval1297;
    return t1299;
  abort();
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1300) {
bb1301:
  int* __location1302;
  __location1302 = v1300;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1303, int* v1304) {
bb1305:
  int* __first1306;
  int* __last1307;
  __first1306 = v1303;
  __last1307 = v1304;
      _Bool r1308 = std____is_constant_evaluated();
      if (r1308) {
          while (1) {
            int* t1310 = __first1306;
            int* t1311 = __last1307;
            _Bool c1312 = ((t1310 != t1311)) ? 1 : 0;
            if (!c1312) break;
            int* t1313 = __first1306;
            void_std__destroy_at_int_(t1313);
          for_step1309: ;
            int* t1314 = __first1306;
            int c1315 = 1;
            int* ptr1316 = &(t1314)[c1315];
            __first1306 = ptr1316;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1317, int* v1318, struct std__allocator_int_* v1319) {
bb1320:
  int* __first1321;
  int* __last1322;
  struct std__allocator_int_* unnamed1323;
  __first1321 = v1317;
  __last1322 = v1318;
  unnamed1323 = v1319;
  int* t1324 = __first1321;
  int* t1325 = __last1322;
  void_std___Destroy_int__(t1324, t1325);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v1326) {
bb1327:
  struct std___Vector_base_int__std__allocator_int__* this1328;
  struct std__allocator_int_* __retval1329;
  this1328 = v1326;
  struct std___Vector_base_int__std__allocator_int__* t1330 = this1328;
  struct std__allocator_int_* base1331 = (struct std__allocator_int_*)((char *)&(t1330->_M_impl) + 0);
  __retval1329 = base1331;
  struct std__allocator_int_* t1332 = __retval1329;
  return t1332;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1333, int* v1334, unsigned long v1335) {
bb1336:
  struct std____new_allocator_int_* this1337;
  int* __p1338;
  unsigned long __n1339;
  this1337 = v1333;
  __p1338 = v1334;
  __n1339 = v1335;
  struct std____new_allocator_int_* t1340 = this1337;
    unsigned long c1341 = 4;
    unsigned long c1342 = 16;
    _Bool c1343 = ((c1341 > c1342)) ? 1 : 0;
    if (c1343) {
      int* t1344 = __p1338;
      void* cast1345 = (void*)t1344;
      unsigned long t1346 = __n1339;
      unsigned long c1347 = 4;
      unsigned long b1348 = t1346 * c1347;
      unsigned long c1349 = 4;
      operator_delete_3(cast1345, b1348, c1349);
      return;
    }
  int* t1350 = __p1338;
  void* cast1351 = (void*)t1350;
  unsigned long t1352 = __n1339;
  unsigned long c1353 = 4;
  unsigned long b1354 = t1352 * c1353;
  operator_delete_2(cast1351, b1354);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1355, int* v1356, unsigned long v1357) {
bb1358:
  struct std__allocator_int_* this1359;
  int* __p1360;
  unsigned long __n1361;
  this1359 = v1355;
  __p1360 = v1356;
  __n1361 = v1357;
  struct std__allocator_int_* t1362 = this1359;
    _Bool r1363 = std____is_constant_evaluated();
    if (r1363) {
      int* t1364 = __p1360;
      void* cast1365 = (void*)t1364;
      operator_delete(cast1365);
      return;
    }
  struct std____new_allocator_int_* base1366 = (struct std____new_allocator_int_*)((char *)t1362 + 0);
  int* t1367 = __p1360;
  unsigned long t1368 = __n1361;
  std____new_allocator_int___deallocate(base1366, t1367, t1368);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1369, int* v1370, unsigned long v1371) {
bb1372:
  struct std__allocator_int_* __a1373;
  int* __p1374;
  unsigned long __n1375;
  __a1373 = v1369;
  __p1374 = v1370;
  __n1375 = v1371;
  struct std__allocator_int_* t1376 = __a1373;
  int* t1377 = __p1374;
  unsigned long t1378 = __n1375;
  std__allocator_int___deallocate(t1376, t1377, t1378);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v1379, int* v1380, unsigned long v1381) {
bb1382:
  struct std___Vector_base_int__std__allocator_int__* this1383;
  int* __p1384;
  unsigned long __n1385;
  this1383 = v1379;
  __p1384 = v1380;
  __n1385 = v1381;
  struct std___Vector_base_int__std__allocator_int__* t1386 = this1383;
    int* t1387 = __p1384;
    _Bool cast1388 = (_Bool)t1387;
    if (cast1388) {
      struct std__allocator_int_* base1389 = (struct std__allocator_int_*)((char *)&(t1386->_M_impl) + 0);
      int* t1390 = __p1384;
      unsigned long t1391 = __n1385;
      std__allocator_traits_std__allocator_int_____deallocate(base1389, t1390, t1391);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1392) {
bb1393:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1394;
  this1394 = v1392;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1395 = this1394;
  {
    struct std__allocator_int_* base1396 = (struct std__allocator_int_*)((char *)t1395 + 0);
    std__allocator_int____allocator(base1396);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1397) {
bb1398:
  struct std___Vector_base_int__std__allocator_int__* this1399;
  this1399 = v1397;
  struct std___Vector_base_int__std__allocator_int__* t1400 = this1399;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1401 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1400->_M_impl) + 0);
    int* t1402 = base1401->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1403 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1400->_M_impl) + 0);
    int* t1404 = base1403->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1405 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1400->_M_impl) + 0);
    int* t1406 = base1405->_M_start;
    long diff1407 = t1404 - t1406;
    unsigned long cast1408 = (unsigned long)diff1407;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1400, t1402, cast1408);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1400->_M_impl);
  }
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v1409) {
bb1410:
  struct std__allocator_int_* this1411;
  this1411 = v1409;
  struct std__allocator_int_* t1412 = this1411;
  return;
}

// function: _ZNSt6vectorIiSaIiEEC2Ev
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* v1413) {
bb1414:
  struct std__vector_int__std__allocator_int__* this1415;
  this1415 = v1413;
  struct std__vector_int__std__allocator_int__* t1416 = this1415;
  struct std___Vector_base_int__std__allocator_int__* base1417 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1416 + 0);
  std___Vector_base_int__std__allocator_int______Vector_base(base1417);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1418) {
bb1419:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1420;
  this1420 = v1418;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1421 = this1420;
  struct std__allocator_int_* base1422 = (struct std__allocator_int_*)((char *)t1421 + 0);
  std__allocator_int___allocator(base1422);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1423 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t1421 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base1423);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2Ev
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1424) {
bb1425:
  struct std___Vector_base_int__std__allocator_int__* this1426;
  this1426 = v1424;
  struct std___Vector_base_int__std__allocator_int__* t1427 = this1426;
  _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(&t1427->_M_impl);
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1428) {
bb1429:
  struct std____new_allocator_int_* this1430;
  this1430 = v1428;
  struct std____new_allocator_int_* t1431 = this1430;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v1432) {
bb1433:
  struct std__allocator_int_* this1434;
  this1434 = v1432;
  struct std__allocator_int_* t1435 = this1434;
  struct std____new_allocator_int_* base1436 = (struct std____new_allocator_int_*)((char *)t1435 + 0);
  std____new_allocator_int_____new_allocator(base1436);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1437) {
bb1438:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1439;
  this1439 = v1437;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1440 = this1439;
  int* c1441 = ((void*)0);
  t1440->_M_start = c1441;
  int* c1442 = ((void*)0);
  t1440->_M_finish = c1442;
  int* c1443 = ((void*)0);
  t1440->_M_end_of_storage = c1443;
  return;
}

