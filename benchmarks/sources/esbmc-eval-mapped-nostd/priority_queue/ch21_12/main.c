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
struct __gnu_cxx____normal_iterator_const_double____std__vector_double__std__allocator_double___ { double* _M_current; };
struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ { double* _M_current; };
struct __gnu_cxx____normal_iterator_double____void_ { double* _M_current; };
struct __gnu_cxx____ops___Iter_comp_iter_std__less_double__ { unsigned char __field0; };
struct __gnu_cxx____ops___Iter_comp_val_std__less_double__ { unsigned char __field0; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___Vector_base_double__std__allocator_double_____Vector_impl_data { double* _M_start; double* _M_finish; double* _M_end_of_storage; };
struct std____new_allocator_double_ { unsigned char __field0; };
struct std__allocator_double_ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__less_double_ { unsigned char __field0; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__vector_double__std__allocator_double_____Guard_alloc { double* _M_storage; unsigned long _M_len; struct std___Vector_base_double__std__allocator_double__* _M_vect; };
struct std___Vector_base_double__std__allocator_double_____Vector_impl { struct std___Vector_base_double__std__allocator_double_____Vector_impl_data __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long _M_width; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_double__std__allocator_double__ { struct std___Vector_base_double__std__allocator_double_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_double__std__allocator_double__ { struct std___Vector_base_double__std__allocator_double__ __field0; };
struct std__priority_queue_double__std__vector_double__std__allocator_double____std__less_double__ { struct std__vector_double__std__allocator_double__ c; unsigned char __field1[8]; } __attribute__((packed));

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[26] = "Popping from priorities: ";
char _str_1[26] = "vector::_M_realloc_append";
char _str_2[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIdSaIdEE4backEv[86] = "reference std::vector<double>::back() [_Tp = double, _Alloc = std::allocator<double>]";
char _str_3[15] = "!this->empty()";
char _str_4[90] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_queue.h";
char __PRETTY_FUNCTION____ZNKSt14priority_queueIdSt6vectorIdSaIdEESt4lessIdEE3topEv[135] = "const_reference std::priority_queue<double>::top() const [_Tp = double, _Sequence = std::vector<double>, _Compare = std::less<double>]";
char __PRETTY_FUNCTION____ZNKSt6vectorIdSaIdEE5frontEv[99] = "const_reference std::vector<double>::front() const [_Tp = double, _Alloc = std::allocator<double>]";
char __PRETTY_FUNCTION____ZNSt14priority_queueIdSt6vectorIdSaIdEESt4lessIdEE3popEv[118] = "void std::priority_queue<double>::pop() [_Tp = double, _Sequence = std::vector<double>, _Compare = std::less<double>]";
char _str_5[89] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_heap.h";
char __PRETTY_FUNCTION____ZSt8pop_heapIN9__gnu_cxx17__normal_iteratorIPdSt6vectorIdSaIdEEEESt4lessIdEEvT_S9_T0_[191] = "void std::pop_heap(_RandomAccessIterator, _RandomAccessIterator, _Compare) [_RandomAccessIterator = __gnu_cxx::__normal_iterator<double *, std::vector<double>>, _Compare = std::less<double>]";
char _str_6[18] = "__first != __last";
char __PRETTY_FUNCTION____ZNSt6vectorIdSaIdEE8pop_backEv[85] = "void std::vector<double>::pop_back() [_Tp = double, _Alloc = std::allocator<double>]";
void std__priority_queue_double__std__vector_double__std__allocator_double_____std__less_double_____priority_queue_std__vector_double__std__allocator_double_____void_(struct std__priority_queue_double__std__vector_double__std__allocator_double____std__less_double__* p0);
double* _ZSt12construct_atIdJdEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(double* p0, double* p1);
void void_std__allocator_traits_std__allocator_double_____construct_double__double_(struct std__allocator_double_* p0, double* p1, double* p2);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_double__std__allocator_double______S_max_size(struct std__allocator_double_* p0);
struct std__allocator_double_* std___Vector_base_double__std__allocator_double______M_get_Tp_allocator___const(struct std___Vector_base_double__std__allocator_double__* p0);
unsigned long std__vector_double__std__allocator_double_____max_size___const(struct std__vector_double__std__allocator_double__* p0);
unsigned long std__vector_double__std__allocator_double_____size___const(struct std__vector_double__std__allocator_double__* p0);
extern void std____throw_length_error(char* p0);
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_double__std__allocator_double______M_check_len_unsigned_long__char_const___const(struct std__vector_double__std__allocator_double__* p0, unsigned long p1, char* p2);
double** __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______base___const(struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* p0);
long __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______difference_type___gnu_cxx__operator__double___std__vector_double__std__allocator_double_____(struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* p0, struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* p1);
extern void std____throw_bad_array_new_length();
extern void *malloc(unsigned long);
extern void free(void*);
void* operator_new(unsigned long p0) { return malloc(p0); }
unsigned long std____new_allocator_double____M_max_size___const(struct std____new_allocator_double_* p0);
extern void std____throw_bad_alloc();
void* operator_new_2(unsigned long p0, unsigned long p1) { return malloc(p0); }
double* std____new_allocator_double___allocate(struct std____new_allocator_double_* p0, unsigned long p1, void* p2);
double* std__allocator_double___allocate(struct std__allocator_double_* p0, unsigned long p1);
double* std__allocator_traits_std__allocator_double_____allocate(struct std__allocator_double_* p0, unsigned long p1);
double* std___Vector_base_double__std__allocator_double______M_allocate(struct std___Vector_base_double__std__allocator_double__* p0, unsigned long p1);
void std__vector_double__std__allocator_double______Guard_alloc___Guard_alloc(struct std__vector_double__std__allocator_double_____Guard_alloc* p0, double* p1, unsigned long p2, struct std___Vector_base_double__std__allocator_double__* p3);
double* double__std__to_address_double_(double* p0);
double* auto_std____to_address_double__(double** p0);
_Bool std__is_constant_evaluated();
void __gnu_cxx____normal_iterator_double___void_____normal_iterator(struct __gnu_cxx____normal_iterator_double____void_* p0, double** p1);
void void_std__allocator_traits_std__allocator_double_____destroy_double_(struct std__allocator_double_* p0, double* p1);
void void_std____relocate_object_a_double__double__std__allocator_double___(double* p0, double* p1, struct std__allocator_double_* p2);
double* __gnu_cxx____normal_iterator_double___void___operator____const(struct __gnu_cxx____normal_iterator_double____void_* p0);
struct __gnu_cxx____normal_iterator_double____void_* __gnu_cxx____normal_iterator_double___void___operator__(struct __gnu_cxx____normal_iterator_double____void_* p0);
struct __gnu_cxx____normal_iterator_double____void_ __gnu_cxx____normal_iterator_double___void__std____relocate_a_1_double_____gnu_cxx____normal_iterator_double___void___std__allocator_double___(double* p0, double* p1, struct __gnu_cxx____normal_iterator_double____void_ p2, struct std__allocator_double_* p3);
struct __gnu_cxx____normal_iterator_double____void_* __gnu_cxx____normal_iterator_double___void___operator_(struct __gnu_cxx____normal_iterator_double____void_* p0, struct __gnu_cxx____normal_iterator_double____void_* p1);
double** __gnu_cxx____normal_iterator_double___void___base___const(struct __gnu_cxx____normal_iterator_double____void_* p0);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
double* std__enable_if_std____is_bitwise_relocatable_double___value__double____type_std____relocate_a_1_double__double_(double* p0, double* p1, double* p2, struct std__allocator_double_* p3);
double* double__std____niter_base_double__(double* p0);
double* double__std____relocate_a_double___double___std__allocator_double___(double* p0, double* p1, double* p2, struct std__allocator_double_* p3);
double* std__vector_double__std__allocator_double______S_relocate(double* p0, double* p1, double* p2, struct std__allocator_double_* p3);
void std__vector_double__std__allocator_double______Guard_alloc____Guard_alloc(struct std__vector_double__std__allocator_double_____Guard_alloc* p0);
void void_std__vector_double__std__allocator_double______M_realloc_append_double_(struct std__vector_double__std__allocator_double__* p0, double* p1);
double** __gnu_cxx____normal_iterator_double_const___std__vector_double__std__allocator_double_______base___const(struct __gnu_cxx____normal_iterator_const_double____std__vector_double__std__allocator_double___* p0);
_Bool _ZN9__gnu_cxxeqIPKdSt6vectorIdSaIdEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_double____std__vector_double__std__allocator_double___* p0, struct __gnu_cxx____normal_iterator_const_double____std__vector_double__std__allocator_double___* p1);
void __gnu_cxx____normal_iterator_double_const___std__vector_double__std__allocator_double_________normal_iterator(struct __gnu_cxx____normal_iterator_const_double____std__vector_double__std__allocator_double___* p0, double** p1);
struct __gnu_cxx____normal_iterator_const_double____std__vector_double__std__allocator_double___ std__vector_double__std__allocator_double_____begin___const(struct std__vector_double__std__allocator_double__* p0);
struct __gnu_cxx____normal_iterator_const_double____std__vector_double__std__allocator_double___ std__vector_double__std__allocator_double_____end___const(struct std__vector_double__std__allocator_double__* p0);
_Bool std__vector_double__std__allocator_double_____empty___const(struct std__vector_double__std__allocator_double__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
void __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_________normal_iterator(struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* p0, double** p1);
struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______operator__long__const(struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* p0, long p1);
double* __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______operator____const(struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* p0);
double* std__vector_double__std__allocator_double_____back(struct std__vector_double__std__allocator_double__* p0);
double* double__std__vector_double__std__allocator_double_____emplace_back_double_(struct std__vector_double__std__allocator_double__* p0, double* p1);
void std__vector_double__std__allocator_double_____push_back(struct std__vector_double__std__allocator_double__* p0, double* p1);
void __gnu_cxx____ops___Iter_comp_val_std__less_double______Iter_comp_val_2(struct __gnu_cxx____ops___Iter_comp_val_std__less_double__* p0, struct std__less_double_ p1);
_Bool std__less_double___operator___double_const___double_const___const(struct std__less_double_* p0, double* p1, double* p2);
_Bool bool___gnu_cxx____ops___Iter_comp_val_std__less_double_____operator_____gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______double_(struct __gnu_cxx____ops___Iter_comp_val_std__less_double__* p0, struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ p1, double* p2);
struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______operator__long__const_2(struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* p0, long p1);
void void_std____push_heap___gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______long__double____gnu_cxx____ops___Iter_comp_val_std__less_double_____(struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ p0, long p1, long p2, double p3, struct __gnu_cxx____ops___Iter_comp_val_std__less_double__* p4);
void void_std__push_heap___gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______std__less_double___(struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ p0, struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ p1, struct std__less_double_ p2);
struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ std__vector_double__std__allocator_double_____begin(struct std__vector_double__std__allocator_double__* p0);
struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ std__vector_double__std__allocator_double_____end(struct std__vector_double__std__allocator_double__* p0);
void std__priority_queue_double__std__vector_double__std__allocator_double_____std__less_double_____push(struct std__priority_queue_double__std__vector_double__std__allocator_double____std__less_double__* p0, double* p1);
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
_Bool std__priority_queue_double__std__vector_double__std__allocator_double_____std__less_double_____empty___const(struct std__priority_queue_double__std__vector_double__std__allocator_double____std__less_double__* p0);
long std__ios_base__width___const(struct std__ios_base* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__put(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* p0, char p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_double_(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, double p1);
double* __gnu_cxx____normal_iterator_double_const___std__vector_double__std__allocator_double_______operator____const(struct __gnu_cxx____normal_iterator_const_double____std__vector_double__std__allocator_double___* p0);
double* std__vector_double__std__allocator_double_____front___const(struct std__vector_double__std__allocator_double__* p0);
double* std__priority_queue_double__std__vector_double__std__allocator_double_____std__less_double_____top___const(struct std__priority_queue_double__std__vector_double__std__allocator_double____std__less_double__* p0);
_Bool _ZN9__gnu_cxxeqIPdSt6vectorIdSaIdEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* p0, struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* p1);
void __gnu_cxx____ops___Iter_comp_iter_std__less_double______Iter_comp_iter(struct __gnu_cxx____ops___Iter_comp_iter_std__less_double__* p0, struct std__less_double_ p1);
struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______operator__(struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* p0);
_Bool bool___gnu_cxx____ops___Iter_comp_iter_std__less_double_____operator_____gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_________gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______(struct __gnu_cxx____ops___Iter_comp_iter_std__less_double__* p0, struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ p1, struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ p2);
void __gnu_cxx____ops___Iter_comp_val_std__less_double______Iter_comp_val(struct __gnu_cxx____ops___Iter_comp_val_std__less_double__* p0, struct __gnu_cxx____ops___Iter_comp_iter_std__less_double__* p1);
void void_std____adjust_heap___gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______long__double____gnu_cxx____ops___Iter_comp_iter_std__less_double_____(struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ p0, long p1, long p2, double p3, struct __gnu_cxx____ops___Iter_comp_iter_std__less_double__ p4);
void void_std____pop_heap___gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_________gnu_cxx____ops___Iter_comp_iter_std__less_double_____(struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ p0, struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ p1, struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ p2, struct __gnu_cxx____ops___Iter_comp_iter_std__less_double__* p3);
void void_std__pop_heap___gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______std__less_double___(struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ p0, struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ p1, struct std__less_double_ p2);
void std__vector_double__std__allocator_double_____pop_back(struct std__vector_double__std__allocator_double__* p0);
void std__priority_queue_double__std__vector_double__std__allocator_double_____std__less_double_____pop(struct std__priority_queue_double__std__vector_double__std__allocator_double____std__less_double__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* p0, void* p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__flush(struct std__basic_ostream_char__std__char_traits_char__* p0);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
extern void std____throw_bad_cast();
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* p0);
extern void std__ctype_char____M_widen_init___const(struct std__ctype_char_* p0);
char std__ctype_char___widen_char__const(struct std__ctype_char_* p0, char p1);
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* p0, char p1);
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* p0);
void std__priority_queue_double__std__vector_double__std__allocator_double_____std__less_double______priority_queue(struct std__priority_queue_double__std__vector_double__std__allocator_double____std__less_double__* p0);
int main();
void std__vector_double__std__allocator_double______vector(struct std__vector_double__std__allocator_double__* p0);
_Bool std____is_constant_evaluated();
void void_std__destroy_at_double_(double* p0);
void void_std___Destroy_double__(double* p0, double* p1);
void void_std___Destroy_double___double_(double* p0, double* p1, struct std__allocator_double_* p2);
struct std__allocator_double_* std___Vector_base_double__std__allocator_double______M_get_Tp_allocator(struct std___Vector_base_double__std__allocator_double__* p0);
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_double___deallocate(struct std____new_allocator_double_* p0, double* p1, unsigned long p2);
void std__allocator_double___deallocate(struct std__allocator_double_* p0, double* p1, unsigned long p2);
void std__allocator_traits_std__allocator_double_____deallocate(struct std__allocator_double_* p0, double* p1, unsigned long p2);
void std___Vector_base_double__std__allocator_double______M_deallocate(struct std___Vector_base_double__std__allocator_double__* p0, double* p1, unsigned long p2);
void std___Vector_base_double__std__allocator_double______Vector_impl____Vector_impl(struct std___Vector_base_double__std__allocator_double_____Vector_impl* p0);
void std___Vector_base_double__std__allocator_double_______Vector_base(struct std___Vector_base_double__std__allocator_double__* p0);
void std__allocator_double____allocator(struct std__allocator_double_* p0);
void std__vector_double__std__allocator_double_____vector(struct std__vector_double__std__allocator_double__* p0);
void _ZNSt12_Vector_baseIdSaIdEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_double__std__allocator_double_____Vector_impl* p0);
void std___Vector_base_double__std__allocator_double______Vector_base(struct std___Vector_base_double__std__allocator_double__* p0);
void std____new_allocator_double_____new_allocator(struct std____new_allocator_double_* p0);
void std__allocator_double___allocator(struct std__allocator_double_* p0);
void std___Vector_base_double__std__allocator_double______Vector_impl_data___Vector_impl_data(struct std___Vector_base_double__std__allocator_double_____Vector_impl_data* p0);

// function: _ZNSt14priority_queueIdSt6vectorIdSaIdEESt4lessIdEEC2IS2_vEEv
void std__priority_queue_double__std__vector_double__std__allocator_double_____std__less_double_____priority_queue_std__vector_double__std__allocator_double_____void_(struct std__priority_queue_double__std__vector_double__std__allocator_double____std__less_double__* v0) {
bb1:
  struct std__priority_queue_double__std__vector_double__std__allocator_double____std__less_double__* this2;
  this2 = v0;
  struct std__priority_queue_double__std__vector_double__std__allocator_double____std__less_double__* t3 = this2;
  struct std__vector_double__std__allocator_double__ c4 = {0};
  t3->c = c4;
  std__vector_double__std__allocator_double_____vector(&t3->c);
  return;
}

// function: _ZSt12construct_atIdJdEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
double* _ZSt12construct_atIdJdEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(double* v5, double* v6) {
bb7:
  double* __location8;
  double* __args9;
  double* __retval10;
  void* __loc11;
  __location8 = v5;
  __args9 = v6;
  double* t12 = __location8;
  void* cast13 = (void*)t12;
  __loc11 = cast13;
    void* t14 = __loc11;
    double* cast15 = (double*)t14;
    double* t16 = __args9;
    double t17 = *t16;
    *cast15 = t17;
    __retval10 = cast15;
    double* t18 = __retval10;
    return t18;
  abort();
}

// function: _ZNSt16allocator_traitsISaIdEE9constructIdJdEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_double_____construct_double__double_(struct std__allocator_double_* v19, double* v20, double* v21) {
bb22:
  struct std__allocator_double_* __a23;
  double* __p24;
  double* __args25;
  __a23 = v19;
  __p24 = v20;
  __args25 = v21;
  double* t26 = __p24;
  double* t27 = __args25;
  double* r28 = _ZSt12construct_atIdJdEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t26, t27);
  return;
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

// function: _ZNSt6vectorIdSaIdEE11_S_max_sizeERKS0_
unsigned long std__vector_double__std__allocator_double______S_max_size(struct std__allocator_double_* v44) {
bb45:
  struct std__allocator_double_* __a46;
  unsigned long __retval47;
  unsigned long __diffmax48;
  unsigned long __allocmax49;
  __a46 = v44;
  unsigned long c50 = 1152921504606846975;
  __diffmax48 = c50;
  unsigned long c51 = 2305843009213693951;
  __allocmax49 = c51;
  unsigned long* r52 = unsigned_long_const__std__min_unsigned_long_(&__diffmax48, &__allocmax49);
  unsigned long t53 = *r52;
  __retval47 = t53;
  unsigned long t54 = __retval47;
  return t54;
}

// function: _ZNKSt12_Vector_baseIdSaIdEE19_M_get_Tp_allocatorEv
struct std__allocator_double_* std___Vector_base_double__std__allocator_double______M_get_Tp_allocator___const(struct std___Vector_base_double__std__allocator_double__* v55) {
bb56:
  struct std___Vector_base_double__std__allocator_double__* this57;
  struct std__allocator_double_* __retval58;
  this57 = v55;
  struct std___Vector_base_double__std__allocator_double__* t59 = this57;
  struct std__allocator_double_* base60 = (struct std__allocator_double_*)((char *)&(t59->_M_impl) + 0);
  __retval58 = base60;
  struct std__allocator_double_* t61 = __retval58;
  return t61;
}

// function: _ZNKSt6vectorIdSaIdEE8max_sizeEv
unsigned long std__vector_double__std__allocator_double_____max_size___const(struct std__vector_double__std__allocator_double__* v62) {
bb63:
  struct std__vector_double__std__allocator_double__* this64;
  unsigned long __retval65;
  this64 = v62;
  struct std__vector_double__std__allocator_double__* t66 = this64;
  struct std___Vector_base_double__std__allocator_double__* base67 = (struct std___Vector_base_double__std__allocator_double__*)((char *)t66 + 0);
  struct std__allocator_double_* r68 = std___Vector_base_double__std__allocator_double______M_get_Tp_allocator___const(base67);
  unsigned long r69 = std__vector_double__std__allocator_double______S_max_size(r68);
  __retval65 = r69;
  unsigned long t70 = __retval65;
  return t70;
}

// function: _ZNKSt6vectorIdSaIdEE4sizeEv
unsigned long std__vector_double__std__allocator_double_____size___const(struct std__vector_double__std__allocator_double__* v71) {
bb72:
  struct std__vector_double__std__allocator_double__* this73;
  unsigned long __retval74;
  long __dif75;
  this73 = v71;
  struct std__vector_double__std__allocator_double__* t76 = this73;
  struct std___Vector_base_double__std__allocator_double__* base77 = (struct std___Vector_base_double__std__allocator_double__*)((char *)t76 + 0);
  struct std___Vector_base_double__std__allocator_double_____Vector_impl_data* base78 = (struct std___Vector_base_double__std__allocator_double_____Vector_impl_data*)((char *)&(base77->_M_impl) + 0);
  double* t79 = base78->_M_finish;
  struct std___Vector_base_double__std__allocator_double__* base80 = (struct std___Vector_base_double__std__allocator_double__*)((char *)t76 + 0);
  struct std___Vector_base_double__std__allocator_double_____Vector_impl_data* base81 = (struct std___Vector_base_double__std__allocator_double_____Vector_impl_data*)((char *)&(base80->_M_impl) + 0);
  double* t82 = base81->_M_start;
  long diff83 = t79 - t82;
  __dif75 = diff83;
    long t84 = __dif75;
    long c85 = 0;
    _Bool c86 = ((t84 < c85)) ? 1 : 0;
    if (c86) {
      __builtin_unreachable();
    }
  long t87 = __dif75;
  unsigned long cast88 = (unsigned long)t87;
  __retval74 = cast88;
  unsigned long t89 = __retval74;
  return t89;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v90, unsigned long* v91) {
bb92:
  unsigned long* __a93;
  unsigned long* __b94;
  unsigned long* __retval95;
  __a93 = v90;
  __b94 = v91;
    unsigned long* t96 = __a93;
    unsigned long t97 = *t96;
    unsigned long* t98 = __b94;
    unsigned long t99 = *t98;
    _Bool c100 = ((t97 < t99)) ? 1 : 0;
    if (c100) {
      unsigned long* t101 = __b94;
      __retval95 = t101;
      unsigned long* t102 = __retval95;
      return t102;
    }
  unsigned long* t103 = __a93;
  __retval95 = t103;
  unsigned long* t104 = __retval95;
  return t104;
}

// function: _ZNKSt6vectorIdSaIdEE12_M_check_lenEmPKc
unsigned long std__vector_double__std__allocator_double______M_check_len_unsigned_long__char_const___const(struct std__vector_double__std__allocator_double__* v105, unsigned long v106, char* v107) {
bb108:
  struct std__vector_double__std__allocator_double__* this109;
  unsigned long __n110;
  char* __s111;
  unsigned long __retval112;
  unsigned long __len113;
  unsigned long ref_tmp0114;
  this109 = v105;
  __n110 = v106;
  __s111 = v107;
  struct std__vector_double__std__allocator_double__* t115 = this109;
    unsigned long r116 = std__vector_double__std__allocator_double_____max_size___const(t115);
    unsigned long r117 = std__vector_double__std__allocator_double_____size___const(t115);
    unsigned long b118 = r116 - r117;
    unsigned long t119 = __n110;
    _Bool c120 = ((b118 < t119)) ? 1 : 0;
    if (c120) {
      char* t121 = __s111;
      std____throw_length_error(t121);
    }
  unsigned long r122 = std__vector_double__std__allocator_double_____size___const(t115);
  unsigned long r123 = std__vector_double__std__allocator_double_____size___const(t115);
  ref_tmp0114 = r123;
  unsigned long* r124 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp0114, &__n110);
  unsigned long t125 = *r124;
  unsigned long b126 = r122 + t125;
  __len113 = b126;
  unsigned long t127 = __len113;
  unsigned long r128 = std__vector_double__std__allocator_double_____size___const(t115);
  _Bool c129 = ((t127 < r128)) ? 1 : 0;
  _Bool ternary130;
  if (c129) {
    _Bool c131 = 1;
    ternary130 = (_Bool)c131;
  } else {
    unsigned long t132 = __len113;
    unsigned long r133 = std__vector_double__std__allocator_double_____max_size___const(t115);
    _Bool c134 = ((t132 > r133)) ? 1 : 0;
    ternary130 = (_Bool)c134;
  }
  unsigned long ternary135;
  if (ternary130) {
    unsigned long r136 = std__vector_double__std__allocator_double_____max_size___const(t115);
    ternary135 = (unsigned long)r136;
  } else {
    unsigned long t137 = __len113;
    ternary135 = (unsigned long)t137;
  }
  __retval112 = ternary135;
  unsigned long t138 = __retval112;
  return t138;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPdSt6vectorIdSaIdEEE4baseEv
double** __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______base___const(struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* v139) {
bb140:
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* this141;
  double** __retval142;
  this141 = v139;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* t143 = this141;
  __retval142 = &t143->_M_current;
  double** t144 = __retval142;
  return t144;
}

// function: _ZN9__gnu_cxxmiIPdSt6vectorIdSaIdEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
long __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______difference_type___gnu_cxx__operator__double___std__vector_double__std__allocator_double_____(struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* v145, struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* v146) {
bb147:
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* __lhs148;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* __rhs149;
  long __retval150;
  __lhs148 = v145;
  __rhs149 = v146;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* t151 = __lhs148;
  double** r152 = __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______base___const(t151);
  double* t153 = *r152;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* t154 = __rhs149;
  double** r155 = __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______base___const(t154);
  double* t156 = *r155;
  long diff157 = t153 - t156;
  __retval150 = diff157;
  long t158 = __retval150;
  return t158;
}

// function: _ZNKSt15__new_allocatorIdE11_M_max_sizeEv
unsigned long std____new_allocator_double____M_max_size___const(struct std____new_allocator_double_* v159) {
bb160:
  struct std____new_allocator_double_* this161;
  unsigned long __retval162;
  this161 = v159;
  struct std____new_allocator_double_* t163 = this161;
  unsigned long c164 = 9223372036854775807;
  unsigned long c165 = 8;
  unsigned long b166 = c164 / c165;
  __retval162 = b166;
  unsigned long t167 = __retval162;
  return t167;
}

// function: _ZNSt15__new_allocatorIdE8allocateEmPKv
double* std____new_allocator_double___allocate(struct std____new_allocator_double_* v168, unsigned long v169, void* v170) {
bb171:
  struct std____new_allocator_double_* this172;
  unsigned long __n173;
  void* unnamed174;
  double* __retval175;
  this172 = v168;
  __n173 = v169;
  unnamed174 = v170;
  struct std____new_allocator_double_* t176 = this172;
    unsigned long t177 = __n173;
    unsigned long r178 = std____new_allocator_double____M_max_size___const(t176);
    _Bool c179 = ((t177 > r178)) ? 1 : 0;
    if (c179) {
        unsigned long t180 = __n173;
        unsigned long c181 = -1;
        unsigned long c182 = 8;
        unsigned long b183 = c181 / c182;
        _Bool c184 = ((t180 > b183)) ? 1 : 0;
        if (c184) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c185 = 8;
    unsigned long c186 = 16;
    _Bool c187 = ((c185 > c186)) ? 1 : 0;
    if (c187) {
      unsigned long __al188;
      unsigned long c189 = 8;
      __al188 = c189;
      unsigned long t190 = __n173;
      unsigned long c191 = 8;
      unsigned long b192 = t190 * c191;
      unsigned long t193 = __al188;
      void* r194 = operator_new_2(b192, t193);
      double* cast195 = (double*)r194;
      __retval175 = cast195;
      double* t196 = __retval175;
      return t196;
    }
  unsigned long t197 = __n173;
  unsigned long c198 = 8;
  unsigned long b199 = t197 * c198;
  void* r200 = operator_new(b199);
  double* cast201 = (double*)r200;
  __retval175 = cast201;
  double* t202 = __retval175;
  return t202;
}

// function: _ZNSaIdE8allocateEm
double* std__allocator_double___allocate(struct std__allocator_double_* v203, unsigned long v204) {
bb205:
  struct std__allocator_double_* this206;
  unsigned long __n207;
  double* __retval208;
  this206 = v203;
  __n207 = v204;
  struct std__allocator_double_* t209 = this206;
    _Bool r210 = std____is_constant_evaluated();
    if (r210) {
        unsigned long t211 = __n207;
        unsigned long c212 = 8;
        unsigned long ovr213;
        _Bool ovf214 = __builtin_mul_overflow(t211, c212, &ovr213);
        __n207 = ovr213;
        if (ovf214) {
          std____throw_bad_array_new_length();
        }
      unsigned long t215 = __n207;
      void* r216 = operator_new(t215);
      double* cast217 = (double*)r216;
      __retval208 = cast217;
      double* t218 = __retval208;
      return t218;
    }
  struct std____new_allocator_double_* base219 = (struct std____new_allocator_double_*)((char *)t209 + 0);
  unsigned long t220 = __n207;
  void* c221 = ((void*)0);
  double* r222 = std____new_allocator_double___allocate(base219, t220, c221);
  __retval208 = r222;
  double* t223 = __retval208;
  return t223;
}

// function: _ZNSt16allocator_traitsISaIdEE8allocateERS0_m
double* std__allocator_traits_std__allocator_double_____allocate(struct std__allocator_double_* v224, unsigned long v225) {
bb226:
  struct std__allocator_double_* __a227;
  unsigned long __n228;
  double* __retval229;
  __a227 = v224;
  __n228 = v225;
  struct std__allocator_double_* t230 = __a227;
  unsigned long t231 = __n228;
  double* r232 = std__allocator_double___allocate(t230, t231);
  __retval229 = r232;
  double* t233 = __retval229;
  return t233;
}

// function: _ZNSt12_Vector_baseIdSaIdEE11_M_allocateEm
double* std___Vector_base_double__std__allocator_double______M_allocate(struct std___Vector_base_double__std__allocator_double__* v234, unsigned long v235) {
bb236:
  struct std___Vector_base_double__std__allocator_double__* this237;
  unsigned long __n238;
  double* __retval239;
  this237 = v234;
  __n238 = v235;
  struct std___Vector_base_double__std__allocator_double__* t240 = this237;
  unsigned long t241 = __n238;
  unsigned long c242 = 0;
  _Bool c243 = ((t241 != c242)) ? 1 : 0;
  double* ternary244;
  if (c243) {
    struct std__allocator_double_* base245 = (struct std__allocator_double_*)((char *)&(t240->_M_impl) + 0);
    unsigned long t246 = __n238;
    double* r247 = std__allocator_traits_std__allocator_double_____allocate(base245, t246);
    ternary244 = (double*)r247;
  } else {
    double* c248 = ((void*)0);
    ternary244 = (double*)c248;
  }
  __retval239 = ternary244;
  double* t249 = __retval239;
  return t249;
}

// function: _ZNSt6vectorIdSaIdEE12_Guard_allocC2EPdmRSt12_Vector_baseIdS0_E
void std__vector_double__std__allocator_double______Guard_alloc___Guard_alloc(struct std__vector_double__std__allocator_double_____Guard_alloc* v250, double* v251, unsigned long v252, struct std___Vector_base_double__std__allocator_double__* v253) {
bb254:
  struct std__vector_double__std__allocator_double_____Guard_alloc* this255;
  double* __s256;
  unsigned long __l257;
  struct std___Vector_base_double__std__allocator_double__* __vect258;
  this255 = v250;
  __s256 = v251;
  __l257 = v252;
  __vect258 = v253;
  struct std__vector_double__std__allocator_double_____Guard_alloc* t259 = this255;
  double* t260 = __s256;
  t259->_M_storage = t260;
  unsigned long t261 = __l257;
  t259->_M_len = t261;
  struct std___Vector_base_double__std__allocator_double__* t262 = __vect258;
  t259->_M_vect = t262;
  return;
}

// function: _ZSt10to_addressIdEPT_S1_
double* double__std__to_address_double_(double* v263) {
bb264:
  double* __ptr265;
  double* __retval266;
  __ptr265 = v263;
  double* t267 = __ptr265;
  __retval266 = t267;
  double* t268 = __retval266;
  return t268;
}

// function: _ZSt12__to_addressIPdEDaRKT_
double* auto_std____to_address_double__(double** v269) {
bb270:
  double** __ptr271;
  double* __retval272;
  __ptr271 = v269;
  double** t273 = __ptr271;
  double* t274 = *t273;
  double* r275 = double__std__to_address_double_(t274);
  __retval272 = r275;
  double* t276 = __retval272;
  return t276;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb277:
  _Bool __retval278;
    _Bool c279 = 0;
    __retval278 = c279;
    _Bool t280 = __retval278;
    return t280;
  abort();
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPdvEC2ERKS1_
void __gnu_cxx____normal_iterator_double___void_____normal_iterator(struct __gnu_cxx____normal_iterator_double____void_* v281, double** v282) {
bb283:
  struct __gnu_cxx____normal_iterator_double____void_* this284;
  double** __i285;
  this284 = v281;
  __i285 = v282;
  struct __gnu_cxx____normal_iterator_double____void_* t286 = this284;
  double** t287 = __i285;
  double* t288 = *t287;
  t286->_M_current = t288;
  return;
}

// function: _ZNSt16allocator_traitsISaIdEE7destroyIdEEvRS0_PT_
void void_std__allocator_traits_std__allocator_double_____destroy_double_(struct std__allocator_double_* v289, double* v290) {
bb291:
  struct std__allocator_double_* __a292;
  double* __p293;
  __a292 = v289;
  __p293 = v290;
  double* t294 = __p293;
  void_std__destroy_at_double_(t294);
  return;
}

// function: _ZSt19__relocate_object_aIddSaIdEEvPT_PT0_RT1_
void void_std____relocate_object_a_double__double__std__allocator_double___(double* v295, double* v296, struct std__allocator_double_* v297) {
bb298:
  double* __dest299;
  double* __orig300;
  struct std__allocator_double_* __alloc301;
  __dest299 = v295;
  __orig300 = v296;
  __alloc301 = v297;
  struct std__allocator_double_* t302 = __alloc301;
  double* t303 = __dest299;
  double* t304 = __orig300;
  void_std__allocator_traits_std__allocator_double_____construct_double__double_(t302, t303, t304);
  struct std__allocator_double_* t305 = __alloc301;
  double* t306 = __orig300;
  void_std__allocator_traits_std__allocator_double_____destroy_double_(t305, t306);
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPdvEdeEv
double* __gnu_cxx____normal_iterator_double___void___operator____const(struct __gnu_cxx____normal_iterator_double____void_* v307) {
bb308:
  struct __gnu_cxx____normal_iterator_double____void_* this309;
  double* __retval310;
  this309 = v307;
  struct __gnu_cxx____normal_iterator_double____void_* t311 = this309;
  double* t312 = t311->_M_current;
  __retval310 = t312;
  double* t313 = __retval310;
  return t313;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPdvEppEv
struct __gnu_cxx____normal_iterator_double____void_* __gnu_cxx____normal_iterator_double___void___operator__(struct __gnu_cxx____normal_iterator_double____void_* v314) {
bb315:
  struct __gnu_cxx____normal_iterator_double____void_* this316;
  struct __gnu_cxx____normal_iterator_double____void_* __retval317;
  this316 = v314;
  struct __gnu_cxx____normal_iterator_double____void_* t318 = this316;
  double* t319 = t318->_M_current;
  int c320 = 1;
  double* ptr321 = &(t319)[c320];
  t318->_M_current = ptr321;
  __retval317 = t318;
  struct __gnu_cxx____normal_iterator_double____void_* t322 = __retval317;
  return t322;
}

// function: _ZSt14__relocate_a_1IPdN9__gnu_cxx17__normal_iteratorIS0_vEESaIdEET0_T_S6_S5_RT1_
struct __gnu_cxx____normal_iterator_double____void_ __gnu_cxx____normal_iterator_double___void__std____relocate_a_1_double_____gnu_cxx____normal_iterator_double___void___std__allocator_double___(double* v323, double* v324, struct __gnu_cxx____normal_iterator_double____void_ v325, struct std__allocator_double_* v326) {
bb327:
  double* __first328;
  double* __last329;
  struct __gnu_cxx____normal_iterator_double____void_ __result330;
  struct std__allocator_double_* __alloc331;
  struct __gnu_cxx____normal_iterator_double____void_ __retval332;
  __first328 = v323;
  __last329 = v324;
  __result330 = v325;
  __alloc331 = v326;
  __retval332 = __result330; // copy
    while (1) {
      double* t334 = __first328;
      double* t335 = __last329;
      _Bool c336 = ((t334 != t335)) ? 1 : 0;
      if (!c336) break;
      double* r337 = __gnu_cxx____normal_iterator_double___void___operator____const(&__retval332);
      double* t338 = __first328;
      struct std__allocator_double_* t339 = __alloc331;
      void_std____relocate_object_a_double__double__std__allocator_double___(r337, t338, t339);
    for_step333: ;
      double* t340 = __first328;
      int c341 = 1;
      double* ptr342 = &(t340)[c341];
      __first328 = ptr342;
      struct __gnu_cxx____normal_iterator_double____void_* r343 = __gnu_cxx____normal_iterator_double___void___operator__(&__retval332);
    }
  struct __gnu_cxx____normal_iterator_double____void_ t344 = __retval332;
  return t344;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPdvEaSEOS2_
struct __gnu_cxx____normal_iterator_double____void_* __gnu_cxx____normal_iterator_double___void___operator_(struct __gnu_cxx____normal_iterator_double____void_* v345, struct __gnu_cxx____normal_iterator_double____void_* v346) {
bb347:
  struct __gnu_cxx____normal_iterator_double____void_* this348;
  struct __gnu_cxx____normal_iterator_double____void_* unnamed349;
  struct __gnu_cxx____normal_iterator_double____void_* __retval350;
  this348 = v345;
  unnamed349 = v346;
  struct __gnu_cxx____normal_iterator_double____void_* t351 = this348;
  struct __gnu_cxx____normal_iterator_double____void_* t352 = unnamed349;
  double* t353 = t352->_M_current;
  t351->_M_current = t353;
  __retval350 = t351;
  struct __gnu_cxx____normal_iterator_double____void_* t354 = __retval350;
  return t354;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPdvE4baseEv
double** __gnu_cxx____normal_iterator_double___void___base___const(struct __gnu_cxx____normal_iterator_double____void_* v355) {
bb356:
  struct __gnu_cxx____normal_iterator_double____void_* this357;
  double** __retval358;
  this357 = v355;
  struct __gnu_cxx____normal_iterator_double____void_* t359 = this357;
  __retval358 = &t359->_M_current;
  double** t360 = __retval358;
  return t360;
}

// function: _ZSt14__relocate_a_1IddENSt9enable_ifIXsr3std24__is_bitwise_relocatableIT_EE5valueEPS1_E4typeES2_S2_S2_RSaIT0_E
double* std__enable_if_std____is_bitwise_relocatable_double___value__double____type_std____relocate_a_1_double__double_(double* v361, double* v362, double* v363, struct std__allocator_double_* v364) {
bb365:
  double* __first366;
  double* __last367;
  double* __result368;
  struct std__allocator_double_* __alloc369;
  double* __retval370;
  long __count371;
  __first366 = v361;
  __last367 = v362;
  __result368 = v363;
  __alloc369 = v364;
  double* t372 = __last367;
  double* t373 = __first366;
  long diff374 = t372 - t373;
  __count371 = diff374;
    long t375 = __count371;
    long c376 = 0;
    _Bool c377 = ((t375 > c376)) ? 1 : 0;
    if (c377) {
        _Bool r378 = std__is_constant_evaluated();
        if (r378) {
          struct __gnu_cxx____normal_iterator_double____void_ __out379;
          struct __gnu_cxx____normal_iterator_double____void_ ref_tmp0380;
          struct __gnu_cxx____normal_iterator_double____void_ agg_tmp0381;
          __gnu_cxx____normal_iterator_double___void_____normal_iterator(&__out379, &__result368);
          double* t382 = __first366;
          double* t383 = __last367;
          agg_tmp0381 = __out379; // copy
          struct std__allocator_double_* t384 = __alloc369;
          struct __gnu_cxx____normal_iterator_double____void_ t385 = agg_tmp0381;
          struct __gnu_cxx____normal_iterator_double____void_ r386 = __gnu_cxx____normal_iterator_double___void__std____relocate_a_1_double_____gnu_cxx____normal_iterator_double___void___std__allocator_double___(t382, t383, t385, t384);
          ref_tmp0380 = r386;
          struct __gnu_cxx____normal_iterator_double____void_* r387 = __gnu_cxx____normal_iterator_double___void___operator_(&__out379, &ref_tmp0380);
          double** r388 = __gnu_cxx____normal_iterator_double___void___base___const(&__out379);
          double* t389 = *r388;
          __retval370 = t389;
          double* t390 = __retval370;
          return t390;
        }
      double* t391 = __result368;
      void* cast392 = (void*)t391;
      double* t393 = __first366;
      void* cast394 = (void*)t393;
      long t395 = __count371;
      unsigned long cast396 = (unsigned long)t395;
      unsigned long c397 = 8;
      unsigned long b398 = cast396 * c397;
      void* r399 = memcpy(cast392, cast394, b398);
    }
  double* t400 = __result368;
  long t401 = __count371;
  double* ptr402 = &(t400)[t401];
  __retval370 = ptr402;
  double* t403 = __retval370;
  return t403;
}

// function: _ZSt12__niter_baseIPdET_S1_
double* double__std____niter_base_double__(double* v404) {
bb405:
  double* __it406;
  double* __retval407;
  __it406 = v404;
  double* t408 = __it406;
  __retval407 = t408;
  double* t409 = __retval407;
  return t409;
}

// function: _ZSt12__relocate_aIPdS0_SaIdEET0_T_S3_S2_RT1_
double* double__std____relocate_a_double___double___std__allocator_double___(double* v410, double* v411, double* v412, struct std__allocator_double_* v413) {
bb414:
  double* __first415;
  double* __last416;
  double* __result417;
  struct std__allocator_double_* __alloc418;
  double* __retval419;
  __first415 = v410;
  __last416 = v411;
  __result417 = v412;
  __alloc418 = v413;
  double* t420 = __first415;
  double* r421 = double__std____niter_base_double__(t420);
  double* t422 = __last416;
  double* r423 = double__std____niter_base_double__(t422);
  double* t424 = __result417;
  double* r425 = double__std____niter_base_double__(t424);
  struct std__allocator_double_* t426 = __alloc418;
  double* r427 = std__enable_if_std____is_bitwise_relocatable_double___value__double____type_std____relocate_a_1_double__double_(r421, r423, r425, t426);
  __retval419 = r427;
  double* t428 = __retval419;
  return t428;
}

// function: _ZNSt6vectorIdSaIdEE11_S_relocateEPdS2_S2_RS0_
double* std__vector_double__std__allocator_double______S_relocate(double* v429, double* v430, double* v431, struct std__allocator_double_* v432) {
bb433:
  double* __first434;
  double* __last435;
  double* __result436;
  struct std__allocator_double_* __alloc437;
  double* __retval438;
  __first434 = v429;
  __last435 = v430;
  __result436 = v431;
  __alloc437 = v432;
  double* t439 = __first434;
  double* t440 = __last435;
  double* t441 = __result436;
  struct std__allocator_double_* t442 = __alloc437;
  double* r443 = double__std____relocate_a_double___double___std__allocator_double___(t439, t440, t441, t442);
  __retval438 = r443;
  double* t444 = __retval438;
  return t444;
}

// function: _ZNSt6vectorIdSaIdEE12_Guard_allocD2Ev
void std__vector_double__std__allocator_double______Guard_alloc____Guard_alloc(struct std__vector_double__std__allocator_double_____Guard_alloc* v445) {
bb446:
  struct std__vector_double__std__allocator_double_____Guard_alloc* this447;
  this447 = v445;
  struct std__vector_double__std__allocator_double_____Guard_alloc* t448 = this447;
    double* t449 = t448->_M_storage;
    _Bool cast450 = (_Bool)t449;
    if (cast450) {
      struct std___Vector_base_double__std__allocator_double__* t451 = t448->_M_vect;
      double* t452 = t448->_M_storage;
      unsigned long t453 = t448->_M_len;
      std___Vector_base_double__std__allocator_double______M_deallocate(t451, t452, t453);
    }
  return;
}

// function: _ZNSt6vectorIdSaIdEE17_M_realloc_appendIJdEEEvDpOT_
void void_std__vector_double__std__allocator_double______M_realloc_append_double_(struct std__vector_double__std__allocator_double__* v454, double* v455) {
bb456:
  struct std__vector_double__std__allocator_double__* this457;
  double* __args458;
  unsigned long __len459;
  double* __old_start460;
  double* __old_finish461;
  unsigned long __elems462;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ ref_tmp0463;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ ref_tmp1464;
  double* __new_start465;
  double* __new_finish466;
  this457 = v454;
  __args458 = v455;
  struct std__vector_double__std__allocator_double__* t467 = this457;
  unsigned long c468 = 1;
  char* cast469 = (char*)&(_str_1);
  unsigned long r470 = std__vector_double__std__allocator_double______M_check_len_unsigned_long__char_const___const(t467, c468, cast469);
  __len459 = r470;
    unsigned long t471 = __len459;
    unsigned long c472 = 0;
    _Bool c473 = ((t471 <= c472)) ? 1 : 0;
    if (c473) {
      __builtin_unreachable();
    }
  struct std___Vector_base_double__std__allocator_double__* base474 = (struct std___Vector_base_double__std__allocator_double__*)((char *)t467 + 0);
  struct std___Vector_base_double__std__allocator_double_____Vector_impl_data* base475 = (struct std___Vector_base_double__std__allocator_double_____Vector_impl_data*)((char *)&(base474->_M_impl) + 0);
  double* t476 = base475->_M_start;
  __old_start460 = t476;
  struct std___Vector_base_double__std__allocator_double__* base477 = (struct std___Vector_base_double__std__allocator_double__*)((char *)t467 + 0);
  struct std___Vector_base_double__std__allocator_double_____Vector_impl_data* base478 = (struct std___Vector_base_double__std__allocator_double_____Vector_impl_data*)((char *)&(base477->_M_impl) + 0);
  double* t479 = base478->_M_finish;
  __old_finish461 = t479;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ r480 = std__vector_double__std__allocator_double_____end(t467);
  ref_tmp0463 = r480;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ r481 = std__vector_double__std__allocator_double_____begin(t467);
  ref_tmp1464 = r481;
  long r482 = __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______difference_type___gnu_cxx__operator__double___std__vector_double__std__allocator_double_____(&ref_tmp0463, &ref_tmp1464);
  unsigned long cast483 = (unsigned long)r482;
  __elems462 = cast483;
  struct std___Vector_base_double__std__allocator_double__* base484 = (struct std___Vector_base_double__std__allocator_double__*)((char *)t467 + 0);
  unsigned long t485 = __len459;
  double* r486 = std___Vector_base_double__std__allocator_double______M_allocate(base484, t485);
  __new_start465 = r486;
  double* t487 = __new_start465;
  __new_finish466 = t487;
    struct std__vector_double__std__allocator_double_____Guard_alloc __guard488;
    double* ref_tmp2489;
    double* t490 = __new_start465;
    unsigned long t491 = __len459;
    struct std___Vector_base_double__std__allocator_double__* base492 = (struct std___Vector_base_double__std__allocator_double__*)((char *)t467 + 0);
    std__vector_double__std__allocator_double______Guard_alloc___Guard_alloc(&__guard488, t490, t491, base492);
      struct std___Vector_base_double__std__allocator_double__* base493 = (struct std___Vector_base_double__std__allocator_double__*)((char *)t467 + 0);
      struct std__allocator_double_* base494 = (struct std__allocator_double_*)((char *)&(base493->_M_impl) + 0);
      double* t495 = __new_start465;
      unsigned long t496 = __elems462;
      double* ptr497 = &(t495)[t496];
      ref_tmp2489 = ptr497;
      double* r498 = auto_std____to_address_double__(&ref_tmp2489);
      double* t499 = __args458;
      void_std__allocator_traits_std__allocator_double_____construct_double__double_(base494, r498, t499);
        double* t500 = __old_start460;
        double* t501 = __old_finish461;
        double* t502 = __new_start465;
        struct std___Vector_base_double__std__allocator_double__* base503 = (struct std___Vector_base_double__std__allocator_double__*)((char *)t467 + 0);
        struct std__allocator_double_* r504 = std___Vector_base_double__std__allocator_double______M_get_Tp_allocator(base503);
        double* r505 = std__vector_double__std__allocator_double______S_relocate(t500, t501, t502, r504);
        __new_finish466 = r505;
        double* t506 = __new_finish466;
        int c507 = 1;
        double* ptr508 = &(t506)[c507];
        __new_finish466 = ptr508;
      double* t509 = __old_start460;
      __guard488._M_storage = t509;
      struct std___Vector_base_double__std__allocator_double__* base510 = (struct std___Vector_base_double__std__allocator_double__*)((char *)t467 + 0);
      struct std___Vector_base_double__std__allocator_double_____Vector_impl_data* base511 = (struct std___Vector_base_double__std__allocator_double_____Vector_impl_data*)((char *)&(base510->_M_impl) + 0);
      double* t512 = base511->_M_end_of_storage;
      double* t513 = __old_start460;
      long diff514 = t512 - t513;
      unsigned long cast515 = (unsigned long)diff514;
      __guard488._M_len = cast515;
    {
      std__vector_double__std__allocator_double______Guard_alloc____Guard_alloc(&__guard488);
    }
  double* t516 = __new_start465;
  struct std___Vector_base_double__std__allocator_double__* base517 = (struct std___Vector_base_double__std__allocator_double__*)((char *)t467 + 0);
  struct std___Vector_base_double__std__allocator_double_____Vector_impl_data* base518 = (struct std___Vector_base_double__std__allocator_double_____Vector_impl_data*)((char *)&(base517->_M_impl) + 0);
  base518->_M_start = t516;
  double* t519 = __new_finish466;
  struct std___Vector_base_double__std__allocator_double__* base520 = (struct std___Vector_base_double__std__allocator_double__*)((char *)t467 + 0);
  struct std___Vector_base_double__std__allocator_double_____Vector_impl_data* base521 = (struct std___Vector_base_double__std__allocator_double_____Vector_impl_data*)((char *)&(base520->_M_impl) + 0);
  base521->_M_finish = t519;
  double* t522 = __new_start465;
  unsigned long t523 = __len459;
  double* ptr524 = &(t522)[t523];
  struct std___Vector_base_double__std__allocator_double__* base525 = (struct std___Vector_base_double__std__allocator_double__*)((char *)t467 + 0);
  struct std___Vector_base_double__std__allocator_double_____Vector_impl_data* base526 = (struct std___Vector_base_double__std__allocator_double_____Vector_impl_data*)((char *)&(base525->_M_impl) + 0);
  base526->_M_end_of_storage = ptr524;
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPKdSt6vectorIdSaIdEEE4baseEv
double** __gnu_cxx____normal_iterator_double_const___std__vector_double__std__allocator_double_______base___const(struct __gnu_cxx____normal_iterator_const_double____std__vector_double__std__allocator_double___* v527) {
bb528:
  struct __gnu_cxx____normal_iterator_const_double____std__vector_double__std__allocator_double___* this529;
  double** __retval530;
  this529 = v527;
  struct __gnu_cxx____normal_iterator_const_double____std__vector_double__std__allocator_double___* t531 = this529;
  __retval530 = &t531->_M_current;
  double** t532 = __retval530;
  return t532;
}

// function: _ZN9__gnu_cxxeqIPKdSt6vectorIdSaIdEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPKdSt6vectorIdSaIdEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_double____std__vector_double__std__allocator_double___* v533, struct __gnu_cxx____normal_iterator_const_double____std__vector_double__std__allocator_double___* v534) {
bb535:
  struct __gnu_cxx____normal_iterator_const_double____std__vector_double__std__allocator_double___* __lhs536;
  struct __gnu_cxx____normal_iterator_const_double____std__vector_double__std__allocator_double___* __rhs537;
  _Bool __retval538;
  __lhs536 = v533;
  __rhs537 = v534;
  struct __gnu_cxx____normal_iterator_const_double____std__vector_double__std__allocator_double___* t539 = __lhs536;
  double** r540 = __gnu_cxx____normal_iterator_double_const___std__vector_double__std__allocator_double_______base___const(t539);
  double* t541 = *r540;
  struct __gnu_cxx____normal_iterator_const_double____std__vector_double__std__allocator_double___* t542 = __rhs537;
  double** r543 = __gnu_cxx____normal_iterator_double_const___std__vector_double__std__allocator_double_______base___const(t542);
  double* t544 = *r543;
  _Bool c545 = ((t541 == t544)) ? 1 : 0;
  __retval538 = c545;
  _Bool t546 = __retval538;
  return t546;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKdSt6vectorIdSaIdEEEC2ERKS2_
void __gnu_cxx____normal_iterator_double_const___std__vector_double__std__allocator_double_________normal_iterator(struct __gnu_cxx____normal_iterator_const_double____std__vector_double__std__allocator_double___* v547, double** v548) {
bb549:
  struct __gnu_cxx____normal_iterator_const_double____std__vector_double__std__allocator_double___* this550;
  double** __i551;
  this550 = v547;
  __i551 = v548;
  struct __gnu_cxx____normal_iterator_const_double____std__vector_double__std__allocator_double___* t552 = this550;
  double** t553 = __i551;
  double* t554 = *t553;
  t552->_M_current = t554;
  return;
}

// function: _ZNKSt6vectorIdSaIdEE5beginEv
struct __gnu_cxx____normal_iterator_const_double____std__vector_double__std__allocator_double___ std__vector_double__std__allocator_double_____begin___const(struct std__vector_double__std__allocator_double__* v555) {
bb556:
  struct std__vector_double__std__allocator_double__* this557;
  struct __gnu_cxx____normal_iterator_const_double____std__vector_double__std__allocator_double___ __retval558;
  this557 = v555;
  struct std__vector_double__std__allocator_double__* t559 = this557;
  struct std___Vector_base_double__std__allocator_double__* base560 = (struct std___Vector_base_double__std__allocator_double__*)((char *)t559 + 0);
  struct std___Vector_base_double__std__allocator_double_____Vector_impl_data* base561 = (struct std___Vector_base_double__std__allocator_double_____Vector_impl_data*)((char *)&(base560->_M_impl) + 0);
  __gnu_cxx____normal_iterator_double_const___std__vector_double__std__allocator_double_________normal_iterator(&__retval558, &base561->_M_start);
  struct __gnu_cxx____normal_iterator_const_double____std__vector_double__std__allocator_double___ t562 = __retval558;
  return t562;
}

// function: _ZNKSt6vectorIdSaIdEE3endEv
struct __gnu_cxx____normal_iterator_const_double____std__vector_double__std__allocator_double___ std__vector_double__std__allocator_double_____end___const(struct std__vector_double__std__allocator_double__* v563) {
bb564:
  struct std__vector_double__std__allocator_double__* this565;
  struct __gnu_cxx____normal_iterator_const_double____std__vector_double__std__allocator_double___ __retval566;
  this565 = v563;
  struct std__vector_double__std__allocator_double__* t567 = this565;
  struct std___Vector_base_double__std__allocator_double__* base568 = (struct std___Vector_base_double__std__allocator_double__*)((char *)t567 + 0);
  struct std___Vector_base_double__std__allocator_double_____Vector_impl_data* base569 = (struct std___Vector_base_double__std__allocator_double_____Vector_impl_data*)((char *)&(base568->_M_impl) + 0);
  __gnu_cxx____normal_iterator_double_const___std__vector_double__std__allocator_double_________normal_iterator(&__retval566, &base569->_M_finish);
  struct __gnu_cxx____normal_iterator_const_double____std__vector_double__std__allocator_double___ t570 = __retval566;
  return t570;
}

// function: _ZNKSt6vectorIdSaIdEE5emptyEv
_Bool std__vector_double__std__allocator_double_____empty___const(struct std__vector_double__std__allocator_double__* v571) {
bb572:
  struct std__vector_double__std__allocator_double__* this573;
  _Bool __retval574;
  struct __gnu_cxx____normal_iterator_const_double____std__vector_double__std__allocator_double___ ref_tmp0575;
  struct __gnu_cxx____normal_iterator_const_double____std__vector_double__std__allocator_double___ ref_tmp1576;
  this573 = v571;
  struct std__vector_double__std__allocator_double__* t577 = this573;
  struct __gnu_cxx____normal_iterator_const_double____std__vector_double__std__allocator_double___ r578 = std__vector_double__std__allocator_double_____begin___const(t577);
  ref_tmp0575 = r578;
  struct __gnu_cxx____normal_iterator_const_double____std__vector_double__std__allocator_double___ r579 = std__vector_double__std__allocator_double_____end___const(t577);
  ref_tmp1576 = r579;
  _Bool r580 = _ZN9__gnu_cxxeqIPKdSt6vectorIdSaIdEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&ref_tmp0575, &ref_tmp1576);
  __retval574 = r580;
  _Bool t581 = __retval574;
  return t581;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPdSt6vectorIdSaIdEEEC2ERKS1_
void __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_________normal_iterator(struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* v582, double** v583) {
bb584:
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* this585;
  double** __i586;
  this585 = v582;
  __i586 = v583;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* t587 = this585;
  double** t588 = __i586;
  double* t589 = *t588;
  t587->_M_current = t589;
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPdSt6vectorIdSaIdEEEmiEl
struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______operator__long__const(struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* v590, long v591) {
bb592:
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* this593;
  long __n594;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ __retval595;
  double* ref_tmp0596;
  this593 = v590;
  __n594 = v591;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* t597 = this593;
  double* t598 = t597->_M_current;
  long t599 = __n594;
  long u600 = -t599;
  double* ptr601 = &(t598)[u600];
  ref_tmp0596 = ptr601;
  __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_________normal_iterator(&__retval595, &ref_tmp0596);
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ t602 = __retval595;
  return t602;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPdSt6vectorIdSaIdEEEdeEv
double* __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______operator____const(struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* v603) {
bb604:
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* this605;
  double* __retval606;
  this605 = v603;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* t607 = this605;
  double* t608 = t607->_M_current;
  __retval606 = t608;
  double* t609 = __retval606;
  return t609;
}

// function: _ZNSt6vectorIdSaIdEE4backEv
double* std__vector_double__std__allocator_double_____back(struct std__vector_double__std__allocator_double__* v610) {
bb611:
  struct std__vector_double__std__allocator_double__* this612;
  double* __retval613;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ ref_tmp0614;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ ref_tmp1615;
  this612 = v610;
  struct std__vector_double__std__allocator_double__* t616 = this612;
    do {
          _Bool r617 = std__vector_double__std__allocator_double_____empty___const(t616);
          if (r617) {
            char* cast618 = (char*)&(_str_2);
            int c619 = 1370;
            char* cast620 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIdSaIdEE4backEv);
            char* cast621 = (char*)&(_str_3);
            std____glibcxx_assert_fail(cast618, c619, cast620, cast621);
          }
      _Bool c622 = 0;
      if (!c622) break;
    } while (1);
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ r623 = std__vector_double__std__allocator_double_____end(t616);
  ref_tmp1615 = r623;
  long c624 = 1;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ r625 = __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______operator__long__const(&ref_tmp1615, c624);
  ref_tmp0614 = r625;
  double* r626 = __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______operator____const(&ref_tmp0614);
  __retval613 = r626;
  double* t627 = __retval613;
  return t627;
}

// function: _ZNSt6vectorIdSaIdEE12emplace_backIJdEEERdDpOT_
double* double__std__vector_double__std__allocator_double_____emplace_back_double_(struct std__vector_double__std__allocator_double__* v628, double* v629) {
bb630:
  struct std__vector_double__std__allocator_double__* this631;
  double* __args632;
  double* __retval633;
  this631 = v628;
  __args632 = v629;
  struct std__vector_double__std__allocator_double__* t634 = this631;
    struct std___Vector_base_double__std__allocator_double__* base635 = (struct std___Vector_base_double__std__allocator_double__*)((char *)t634 + 0);
    struct std___Vector_base_double__std__allocator_double_____Vector_impl_data* base636 = (struct std___Vector_base_double__std__allocator_double_____Vector_impl_data*)((char *)&(base635->_M_impl) + 0);
    double* t637 = base636->_M_finish;
    struct std___Vector_base_double__std__allocator_double__* base638 = (struct std___Vector_base_double__std__allocator_double__*)((char *)t634 + 0);
    struct std___Vector_base_double__std__allocator_double_____Vector_impl_data* base639 = (struct std___Vector_base_double__std__allocator_double_____Vector_impl_data*)((char *)&(base638->_M_impl) + 0);
    double* t640 = base639->_M_end_of_storage;
    _Bool c641 = ((t637 != t640)) ? 1 : 0;
    if (c641) {
      struct std___Vector_base_double__std__allocator_double__* base642 = (struct std___Vector_base_double__std__allocator_double__*)((char *)t634 + 0);
      struct std__allocator_double_* base643 = (struct std__allocator_double_*)((char *)&(base642->_M_impl) + 0);
      struct std___Vector_base_double__std__allocator_double__* base644 = (struct std___Vector_base_double__std__allocator_double__*)((char *)t634 + 0);
      struct std___Vector_base_double__std__allocator_double_____Vector_impl_data* base645 = (struct std___Vector_base_double__std__allocator_double_____Vector_impl_data*)((char *)&(base644->_M_impl) + 0);
      double* t646 = base645->_M_finish;
      double* t647 = __args632;
      void_std__allocator_traits_std__allocator_double_____construct_double__double_(base643, t646, t647);
      struct std___Vector_base_double__std__allocator_double__* base648 = (struct std___Vector_base_double__std__allocator_double__*)((char *)t634 + 0);
      struct std___Vector_base_double__std__allocator_double_____Vector_impl_data* base649 = (struct std___Vector_base_double__std__allocator_double_____Vector_impl_data*)((char *)&(base648->_M_impl) + 0);
      double* t650 = base649->_M_finish;
      int c651 = 1;
      double* ptr652 = &(t650)[c651];
      base649->_M_finish = ptr652;
    } else {
      double* t653 = __args632;
      void_std__vector_double__std__allocator_double______M_realloc_append_double_(t634, t653);
    }
  double* r654 = std__vector_double__std__allocator_double_____back(t634);
  __retval633 = r654;
  double* t655 = __retval633;
  return t655;
}

// function: _ZNSt6vectorIdSaIdEE9push_backEOd
void std__vector_double__std__allocator_double_____push_back(struct std__vector_double__std__allocator_double__* v656, double* v657) {
bb658:
  struct std__vector_double__std__allocator_double__* this659;
  double* __x660;
  this659 = v656;
  __x660 = v657;
  struct std__vector_double__std__allocator_double__* t661 = this659;
  double* t662 = __x660;
  double* r663 = double__std__vector_double__std__allocator_double_____emplace_back_double_(t661, t662);
  return;
}

// function: _ZN9__gnu_cxx5__ops14_Iter_comp_valISt4lessIdEEC2ES3_
void __gnu_cxx____ops___Iter_comp_val_std__less_double______Iter_comp_val_2(struct __gnu_cxx____ops___Iter_comp_val_std__less_double__* v664, struct std__less_double_ v665) {
bb666:
  struct __gnu_cxx____ops___Iter_comp_val_std__less_double__* this667;
  struct std__less_double_ __comp668;
  this667 = v664;
  __comp668 = v665;
  return;
}

// function: _ZNKSt4lessIdEclERKdS2_
_Bool std__less_double___operator___double_const___double_const___const(struct std__less_double_* v669, double* v670, double* v671) {
bb672:
  struct std__less_double_* this673;
  double* __x674;
  double* __y675;
  _Bool __retval676;
  this673 = v669;
  __x674 = v670;
  __y675 = v671;
  struct std__less_double_* t677 = this673;
  double* t678 = __x674;
  double t679 = *t678;
  double* t680 = __y675;
  double t681 = *t680;
  _Bool c682 = ((t679 < t681)) ? 1 : 0;
  __retval676 = c682;
  _Bool t683 = __retval676;
  return t683;
}

// function: _ZN9__gnu_cxx5__ops14_Iter_comp_valISt4lessIdEEclINS_17__normal_iteratorIPdSt6vectorIdSaIdEEEEdEEbT_RT0_
_Bool bool___gnu_cxx____ops___Iter_comp_val_std__less_double_____operator_____gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______double_(struct __gnu_cxx____ops___Iter_comp_val_std__less_double__* v684, struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ v685, double* v686) {
bb687:
  struct __gnu_cxx____ops___Iter_comp_val_std__less_double__* this688;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ __it689;
  double* __val690;
  _Bool __retval691;
  this688 = v684;
  __it689 = v685;
  __val690 = v686;
  struct __gnu_cxx____ops___Iter_comp_val_std__less_double__* t692 = this688;
  struct std__less_double_* cast693 = (struct std__less_double_*)t692;
  double* r694 = __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______operator____const(&__it689);
  double* t695 = __val690;
  _Bool r696 = std__less_double___operator___double_const___double_const___const(cast693, r694, t695);
  __retval691 = r696;
  _Bool t697 = __retval691;
  return t697;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPdSt6vectorIdSaIdEEEplEl
struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______operator__long__const_2(struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* v698, long v699) {
bb700:
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* this701;
  long __n702;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ __retval703;
  double* ref_tmp0704;
  this701 = v698;
  __n702 = v699;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* t705 = this701;
  double* t706 = t705->_M_current;
  long t707 = __n702;
  double* ptr708 = &(t706)[t707];
  ref_tmp0704 = ptr708;
  __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_________normal_iterator(&__retval703, &ref_tmp0704);
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ t709 = __retval703;
  return t709;
}

// function: _ZSt11__push_heapIN9__gnu_cxx17__normal_iteratorIPdSt6vectorIdSaIdEEEEldNS0_5__ops14_Iter_comp_valISt4lessIdEEEEvT_T0_SD_T1_RT2_
void void_std____push_heap___gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______long__double____gnu_cxx____ops___Iter_comp_val_std__less_double_____(struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ v710, long v711, long v712, double v713, struct __gnu_cxx____ops___Iter_comp_val_std__less_double__* v714) {
bb715:
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ __first716;
  long __holeIndex717;
  long __topIndex718;
  double __value719;
  struct __gnu_cxx____ops___Iter_comp_val_std__less_double__* __comp720;
  long __parent721;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ ref_tmp2722;
  __first716 = v710;
  __holeIndex717 = v711;
  __topIndex718 = v712;
  __value719 = v713;
  __comp720 = v714;
  long t723 = __holeIndex717;
  long c724 = 1;
  long b725 = t723 - c724;
  long c726 = 2;
  long b727 = b725 / c726;
  __parent721 = b727;
    while (1) {
      long t728 = __holeIndex717;
      long t729 = __topIndex718;
      _Bool c730 = ((t728 > t729)) ? 1 : 0;
      _Bool ternary731;
      if (c730) {
        struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ agg_tmp0732;
        struct __gnu_cxx____ops___Iter_comp_val_std__less_double__* t733 = __comp720;
        long t734 = __parent721;
        struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ r735 = __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______operator__long__const_2(&__first716, t734);
        agg_tmp0732 = r735;
        struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ t736 = agg_tmp0732;
        _Bool r737 = bool___gnu_cxx____ops___Iter_comp_val_std__less_double_____operator_____gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______double_(t733, t736, &__value719);
        ternary731 = (_Bool)r737;
      } else {
        _Bool c738 = 0;
        ternary731 = (_Bool)c738;
      }
      if (!ternary731) break;
        struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ ref_tmp0739;
        struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ ref_tmp1740;
        long t741 = __parent721;
        struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ r742 = __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______operator__long__const_2(&__first716, t741);
        ref_tmp0739 = r742;
        double* r743 = __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______operator____const(&ref_tmp0739);
        double t744 = *r743;
        long t745 = __holeIndex717;
        struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ r746 = __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______operator__long__const_2(&__first716, t745);
        ref_tmp1740 = r746;
        double* r747 = __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______operator____const(&ref_tmp1740);
        *r747 = t744;
        long t748 = __parent721;
        __holeIndex717 = t748;
        long t749 = __holeIndex717;
        long c750 = 1;
        long b751 = t749 - c750;
        long c752 = 2;
        long b753 = b751 / c752;
        __parent721 = b753;
    }
  double t754 = __value719;
  long t755 = __holeIndex717;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ r756 = __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______operator__long__const_2(&__first716, t755);
  ref_tmp2722 = r756;
  double* r757 = __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______operator____const(&ref_tmp2722);
  *r757 = t754;
  return;
}

// function: _ZSt9push_heapIN9__gnu_cxx17__normal_iteratorIPdSt6vectorIdSaIdEEEESt4lessIdEEvT_S9_T0_
void void_std__push_heap___gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______std__less_double___(struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ v758, struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ v759, struct std__less_double_ v760) {
bb761:
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ __first762;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ __last763;
  struct std__less_double_ __comp764;
  struct __gnu_cxx____ops___Iter_comp_val_std__less_double__ __cmp765;
  struct std__less_double_ agg_tmp0766;
  double __value767;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ ref_tmp0768;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ agg_tmp1769;
  __first762 = v758;
  __last763 = v759;
  __comp764 = v760;
  struct std__less_double_ t770 = agg_tmp0766;
  __gnu_cxx____ops___Iter_comp_val_std__less_double______Iter_comp_val_2(&__cmp765, t770);
  long c771 = 1;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ r772 = __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______operator__long__const(&__last763, c771);
  ref_tmp0768 = r772;
  double* r773 = __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______operator____const(&ref_tmp0768);
  double t774 = *r773;
  __value767 = t774;
  agg_tmp1769 = __first762; // copy
  long r775 = __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______difference_type___gnu_cxx__operator__double___std__vector_double__std__allocator_double_____(&__last763, &__first762);
  long c776 = 1;
  long b777 = r775 - c776;
  long c778 = 0;
  double t779 = __value767;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ t780 = agg_tmp1769;
  void_std____push_heap___gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______long__double____gnu_cxx____ops___Iter_comp_val_std__less_double_____(t780, b777, c778, t779, &__cmp765);
  return;
}

// function: _ZNSt6vectorIdSaIdEE5beginEv
struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ std__vector_double__std__allocator_double_____begin(struct std__vector_double__std__allocator_double__* v781) {
bb782:
  struct std__vector_double__std__allocator_double__* this783;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ __retval784;
  this783 = v781;
  struct std__vector_double__std__allocator_double__* t785 = this783;
  struct std___Vector_base_double__std__allocator_double__* base786 = (struct std___Vector_base_double__std__allocator_double__*)((char *)t785 + 0);
  struct std___Vector_base_double__std__allocator_double_____Vector_impl_data* base787 = (struct std___Vector_base_double__std__allocator_double_____Vector_impl_data*)((char *)&(base786->_M_impl) + 0);
  __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_________normal_iterator(&__retval784, &base787->_M_start);
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ t788 = __retval784;
  return t788;
}

// function: _ZNSt6vectorIdSaIdEE3endEv
struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ std__vector_double__std__allocator_double_____end(struct std__vector_double__std__allocator_double__* v789) {
bb790:
  struct std__vector_double__std__allocator_double__* this791;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ __retval792;
  this791 = v789;
  struct std__vector_double__std__allocator_double__* t793 = this791;
  struct std___Vector_base_double__std__allocator_double__* base794 = (struct std___Vector_base_double__std__allocator_double__*)((char *)t793 + 0);
  struct std___Vector_base_double__std__allocator_double_____Vector_impl_data* base795 = (struct std___Vector_base_double__std__allocator_double_____Vector_impl_data*)((char *)&(base794->_M_impl) + 0);
  __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_________normal_iterator(&__retval792, &base795->_M_finish);
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ t796 = __retval792;
  return t796;
}

// function: _ZNSt14priority_queueIdSt6vectorIdSaIdEESt4lessIdEE4pushEOd
void std__priority_queue_double__std__vector_double__std__allocator_double_____std__less_double_____push(struct std__priority_queue_double__std__vector_double__std__allocator_double____std__less_double__* v797, double* v798) {
bb799:
  struct std__priority_queue_double__std__vector_double__std__allocator_double____std__less_double__* this800;
  double* __x801;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ agg_tmp0802;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ agg_tmp1803;
  struct std__less_double_ agg_tmp2804;
  this800 = v797;
  __x801 = v798;
  struct std__priority_queue_double__std__vector_double__std__allocator_double____std__less_double__* t805 = this800;
  double* t806 = __x801;
  std__vector_double__std__allocator_double_____push_back(&t805->c, t806);
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ r807 = std__vector_double__std__allocator_double_____begin(&t805->c);
  agg_tmp0802 = r807;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ r808 = std__vector_double__std__allocator_double_____end(&t805->c);
  agg_tmp1803 = r808;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ t809 = agg_tmp0802;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ t810 = agg_tmp1803;
  struct std__less_double_ t811 = agg_tmp2804;
  void_std__push_heap___gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______std__less_double___(t809, t810, t811);
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v812, int v813) {
bb814:
  int __a815;
  int __b816;
  int __retval817;
  __a815 = v812;
  __b816 = v813;
  int t818 = __a815;
  int t819 = __b816;
  int b820 = t818 | t819;
  __retval817 = b820;
  int t821 = __retval817;
  return t821;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v822) {
bb823:
  struct std__basic_ios_char__std__char_traits_char__* this824;
  int __retval825;
  this824 = v822;
  struct std__basic_ios_char__std__char_traits_char__* t826 = this824;
  struct std__ios_base* base827 = (struct std__ios_base*)((char *)t826 + 0);
  int t828 = base827->_M_streambuf_state;
  __retval825 = t828;
  int t829 = __retval825;
  return t829;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v830, int v831) {
bb832:
  struct std__basic_ios_char__std__char_traits_char__* this833;
  int __state834;
  this833 = v830;
  __state834 = v831;
  struct std__basic_ios_char__std__char_traits_char__* t835 = this833;
  int r836 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t835);
  int t837 = __state834;
  int r838 = std__operator_(r836, t837);
  std__basic_ios_char__std__char_traits_char_____clear(t835, r838);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v839, char* v840) {
bb841:
  char* __c1842;
  char* __c2843;
  _Bool __retval844;
  __c1842 = v839;
  __c2843 = v840;
  char* t845 = __c1842;
  char t846 = *t845;
  int cast847 = (int)t846;
  char* t848 = __c2843;
  char t849 = *t848;
  int cast850 = (int)t849;
  _Bool c851 = ((cast847 == cast850)) ? 1 : 0;
  __retval844 = c851;
  _Bool t852 = __retval844;
  return t852;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v853) {
bb854:
  char* __p855;
  unsigned long __retval856;
  unsigned long __i857;
  __p855 = v853;
  unsigned long c858 = 0;
  __i857 = c858;
    char ref_tmp0859;
    while (1) {
      unsigned long t860 = __i857;
      char* t861 = __p855;
      char* ptr862 = &(t861)[t860];
      char c863 = 0;
      ref_tmp0859 = c863;
      _Bool r864 = __gnu_cxx__char_traits_char___eq(ptr862, &ref_tmp0859);
      _Bool u865 = !r864;
      if (!u865) break;
      unsigned long t866 = __i857;
      unsigned long u867 = t866 + 1;
      __i857 = u867;
    }
  unsigned long t868 = __i857;
  __retval856 = t868;
  unsigned long t869 = __retval856;
  return t869;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v870) {
bb871:
  char* __s872;
  unsigned long __retval873;
  __s872 = v870;
    _Bool r874 = std____is_constant_evaluated();
    if (r874) {
      char* t875 = __s872;
      unsigned long r876 = __gnu_cxx__char_traits_char___length(t875);
      __retval873 = r876;
      unsigned long t877 = __retval873;
      return t877;
    }
  char* t878 = __s872;
  unsigned long r879 = strlen(t878);
  __retval873 = r879;
  unsigned long t880 = __retval873;
  return t880;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v881, char* v882) {
bb883:
  struct std__basic_ostream_char__std__char_traits_char__* __out884;
  char* __s885;
  struct std__basic_ostream_char__std__char_traits_char__* __retval886;
  __out884 = v881;
  __s885 = v882;
    char* t887 = __s885;
    _Bool cast888 = (_Bool)t887;
    _Bool u889 = !cast888;
    if (u889) {
      struct std__basic_ostream_char__std__char_traits_char__* t890 = __out884;
      void** v891 = (void**)t890;
      void* v892 = *((void**)v891);
      unsigned char* cast893 = (unsigned char*)v892;
      long c894 = -24;
      unsigned char* ptr895 = &(cast893)[c894];
      long* cast896 = (long*)ptr895;
      long t897 = *cast896;
      unsigned char* cast898 = (unsigned char*)t890;
      unsigned char* ptr899 = &(cast898)[t897];
      struct std__basic_ostream_char__std__char_traits_char__* cast900 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr899;
      struct std__basic_ios_char__std__char_traits_char__* cast901 = (struct std__basic_ios_char__std__char_traits_char__*)cast900;
      int t902 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast901, t902);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t903 = __out884;
      char* t904 = __s885;
      char* t905 = __s885;
      unsigned long r906 = std__char_traits_char___length(t905);
      long cast907 = (long)r906;
      struct std__basic_ostream_char__std__char_traits_char__* r908 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t903, t904, cast907);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t909 = __out884;
  __retval886 = t909;
  struct std__basic_ostream_char__std__char_traits_char__* t910 = __retval886;
  return t910;
}

// function: _ZNKSt14priority_queueIdSt6vectorIdSaIdEESt4lessIdEE5emptyEv
_Bool std__priority_queue_double__std__vector_double__std__allocator_double_____std__less_double_____empty___const(struct std__priority_queue_double__std__vector_double__std__allocator_double____std__less_double__* v911) {
bb912:
  struct std__priority_queue_double__std__vector_double__std__allocator_double____std__less_double__* this913;
  _Bool __retval914;
  this913 = v911;
  struct std__priority_queue_double__std__vector_double__std__allocator_double____std__less_double__* t915 = this913;
  _Bool r916 = std__vector_double__std__allocator_double_____empty___const(&t915->c);
  __retval914 = r916;
  _Bool t917 = __retval914;
  return t917;
}

// function: _ZNKSt8ios_base5widthEv
long std__ios_base__width___const(struct std__ios_base* v918) {
bb919:
  struct std__ios_base* this920;
  long __retval921;
  this920 = v918;
  struct std__ios_base* t922 = this920;
  long t923 = t922->_M_width;
  __retval921 = t923;
  long t924 = __retval921;
  return t924;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(struct std__basic_ostream_char__std__char_traits_char__* v925, char v926) {
bb927:
  struct std__basic_ostream_char__std__char_traits_char__* __out928;
  char __c929;
  struct std__basic_ostream_char__std__char_traits_char__* __retval930;
  __out928 = v925;
  __c929 = v926;
    struct std__basic_ostream_char__std__char_traits_char__* t931 = __out928;
    void** v932 = (void**)t931;
    void* v933 = *((void**)v932);
    unsigned char* cast934 = (unsigned char*)v933;
    long c935 = -24;
    unsigned char* ptr936 = &(cast934)[c935];
    long* cast937 = (long*)ptr936;
    long t938 = *cast937;
    unsigned char* cast939 = (unsigned char*)t931;
    unsigned char* ptr940 = &(cast939)[t938];
    struct std__basic_ostream_char__std__char_traits_char__* cast941 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr940;
    struct std__ios_base* cast942 = (struct std__ios_base*)cast941;
    long r943 = std__ios_base__width___const(cast942);
    long c944 = 0;
    _Bool c945 = ((r943 != c944)) ? 1 : 0;
    if (c945) {
      struct std__basic_ostream_char__std__char_traits_char__* t946 = __out928;
      long c947 = 1;
      struct std__basic_ostream_char__std__char_traits_char__* r948 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t946, &__c929, c947);
      __retval930 = r948;
      struct std__basic_ostream_char__std__char_traits_char__* t949 = __retval930;
      return t949;
    }
  struct std__basic_ostream_char__std__char_traits_char__* t950 = __out928;
  char t951 = __c929;
  struct std__basic_ostream_char__std__char_traits_char__* r952 = std__ostream__put(t950, t951);
  struct std__basic_ostream_char__std__char_traits_char__* t953 = __out928;
  __retval930 = t953;
  struct std__basic_ostream_char__std__char_traits_char__* t954 = __retval930;
  return t954;
}

// function: _ZNSolsEd
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* v955, double v956) {
bb957:
  struct std__basic_ostream_char__std__char_traits_char__* this958;
  double __f959;
  struct std__basic_ostream_char__std__char_traits_char__* __retval960;
  this958 = v955;
  __f959 = v956;
  struct std__basic_ostream_char__std__char_traits_char__* t961 = this958;
  double t962 = __f959;
  struct std__basic_ostream_char__std__char_traits_char__* r963 = std__ostream__std__ostream___M_insert_double_(t961, t962);
  __retval960 = r963;
  struct std__basic_ostream_char__std__char_traits_char__* t964 = __retval960;
  return t964;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPKdSt6vectorIdSaIdEEEdeEv
double* __gnu_cxx____normal_iterator_double_const___std__vector_double__std__allocator_double_______operator____const(struct __gnu_cxx____normal_iterator_const_double____std__vector_double__std__allocator_double___* v965) {
bb966:
  struct __gnu_cxx____normal_iterator_const_double____std__vector_double__std__allocator_double___* this967;
  double* __retval968;
  this967 = v965;
  struct __gnu_cxx____normal_iterator_const_double____std__vector_double__std__allocator_double___* t969 = this967;
  double* t970 = t969->_M_current;
  __retval968 = t970;
  double* t971 = __retval968;
  return t971;
}

// function: _ZNKSt6vectorIdSaIdEE5frontEv
double* std__vector_double__std__allocator_double_____front___const(struct std__vector_double__std__allocator_double__* v972) {
bb973:
  struct std__vector_double__std__allocator_double__* this974;
  double* __retval975;
  struct __gnu_cxx____normal_iterator_const_double____std__vector_double__std__allocator_double___ ref_tmp0976;
  this974 = v972;
  struct std__vector_double__std__allocator_double__* t977 = this974;
    do {
          _Bool r978 = std__vector_double__std__allocator_double_____empty___const(t977);
          if (r978) {
            char* cast979 = (char*)&(_str_2);
            int c980 = 1358;
            char* cast981 = (char*)&(__PRETTY_FUNCTION____ZNKSt6vectorIdSaIdEE5frontEv);
            char* cast982 = (char*)&(_str_3);
            std____glibcxx_assert_fail(cast979, c980, cast981, cast982);
          }
      _Bool c983 = 0;
      if (!c983) break;
    } while (1);
  struct __gnu_cxx____normal_iterator_const_double____std__vector_double__std__allocator_double___ r984 = std__vector_double__std__allocator_double_____begin___const(t977);
  ref_tmp0976 = r984;
  double* r985 = __gnu_cxx____normal_iterator_double_const___std__vector_double__std__allocator_double_______operator____const(&ref_tmp0976);
  __retval975 = r985;
  double* t986 = __retval975;
  return t986;
}

// function: _ZNKSt14priority_queueIdSt6vectorIdSaIdEESt4lessIdEE3topEv
double* std__priority_queue_double__std__vector_double__std__allocator_double_____std__less_double_____top___const(struct std__priority_queue_double__std__vector_double__std__allocator_double____std__less_double__* v987) {
bb988:
  struct std__priority_queue_double__std__vector_double__std__allocator_double____std__less_double__* this989;
  double* __retval990;
  this989 = v987;
  struct std__priority_queue_double__std__vector_double__std__allocator_double____std__less_double__* t991 = this989;
    do {
          _Bool r992 = std__priority_queue_double__std__vector_double__std__allocator_double_____std__less_double_____empty___const(t991);
          if (r992) {
            char* cast993 = (char*)&(_str_4);
            int c994 = 825;
            char* cast995 = (char*)&(__PRETTY_FUNCTION____ZNKSt14priority_queueIdSt6vectorIdSaIdEESt4lessIdEE3topEv);
            char* cast996 = (char*)&(_str_3);
            std____glibcxx_assert_fail(cast993, c994, cast995, cast996);
          }
      _Bool c997 = 0;
      if (!c997) break;
    } while (1);
  double* r998 = std__vector_double__std__allocator_double_____front___const(&t991->c);
  __retval990 = r998;
  double* t999 = __retval990;
  return t999;
}

// function: _ZN9__gnu_cxxeqIPdSt6vectorIdSaIdEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPdSt6vectorIdSaIdEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* v1000, struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* v1001) {
bb1002:
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* __lhs1003;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* __rhs1004;
  _Bool __retval1005;
  __lhs1003 = v1000;
  __rhs1004 = v1001;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* t1006 = __lhs1003;
  double** r1007 = __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______base___const(t1006);
  double* t1008 = *r1007;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* t1009 = __rhs1004;
  double** r1010 = __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______base___const(t1009);
  double* t1011 = *r1010;
  _Bool c1012 = ((t1008 == t1011)) ? 1 : 0;
  __retval1005 = c1012;
  _Bool t1013 = __retval1005;
  return t1013;
}

// function: _ZN9__gnu_cxx5__ops15_Iter_comp_iterISt4lessIdEEC2ES3_
void __gnu_cxx____ops___Iter_comp_iter_std__less_double______Iter_comp_iter(struct __gnu_cxx____ops___Iter_comp_iter_std__less_double__* v1014, struct std__less_double_ v1015) {
bb1016:
  struct __gnu_cxx____ops___Iter_comp_iter_std__less_double__* this1017;
  struct std__less_double_ __comp1018;
  this1017 = v1014;
  __comp1018 = v1015;
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPdSt6vectorIdSaIdEEEmmEv
struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______operator__(struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* v1019) {
bb1020:
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* this1021;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* __retval1022;
  this1021 = v1019;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* t1023 = this1021;
  double* t1024 = t1023->_M_current;
  int c1025 = -1;
  double* ptr1026 = &(t1024)[c1025];
  t1023->_M_current = ptr1026;
  __retval1022 = t1023;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* t1027 = __retval1022;
  return t1027;
}

// function: _ZN9__gnu_cxx5__ops15_Iter_comp_iterISt4lessIdEEclINS_17__normal_iteratorIPdSt6vectorIdSaIdEEEESB_EEbT_T0_
_Bool bool___gnu_cxx____ops___Iter_comp_iter_std__less_double_____operator_____gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_________gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______(struct __gnu_cxx____ops___Iter_comp_iter_std__less_double__* v1028, struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ v1029, struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ v1030) {
bb1031:
  struct __gnu_cxx____ops___Iter_comp_iter_std__less_double__* this1032;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ __it11033;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ __it21034;
  _Bool __retval1035;
  this1032 = v1028;
  __it11033 = v1029;
  __it21034 = v1030;
  struct __gnu_cxx____ops___Iter_comp_iter_std__less_double__* t1036 = this1032;
  struct std__less_double_* cast1037 = (struct std__less_double_*)t1036;
  double* r1038 = __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______operator____const(&__it11033);
  double* r1039 = __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______operator____const(&__it21034);
  _Bool r1040 = std__less_double___operator___double_const___double_const___const(cast1037, r1038, r1039);
  __retval1035 = r1040;
  _Bool t1041 = __retval1035;
  return t1041;
}

// function: _ZN9__gnu_cxx5__ops14_Iter_comp_valISt4lessIdEEC2EONS0_15_Iter_comp_iterIS3_EE
void __gnu_cxx____ops___Iter_comp_val_std__less_double______Iter_comp_val(struct __gnu_cxx____ops___Iter_comp_val_std__less_double__* v1042, struct __gnu_cxx____ops___Iter_comp_iter_std__less_double__* v1043) {
bb1044:
  struct __gnu_cxx____ops___Iter_comp_val_std__less_double__* this1045;
  struct __gnu_cxx____ops___Iter_comp_iter_std__less_double__* __comp1046;
  this1045 = v1042;
  __comp1046 = v1043;
  return;
}

// function: _ZSt13__adjust_heapIN9__gnu_cxx17__normal_iteratorIPdSt6vectorIdSaIdEEEEldNS0_5__ops15_Iter_comp_iterISt4lessIdEEEEvT_T0_SD_T1_T2_
void void_std____adjust_heap___gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______long__double____gnu_cxx____ops___Iter_comp_iter_std__less_double_____(struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ v1047, long v1048, long v1049, double v1050, struct __gnu_cxx____ops___Iter_comp_iter_std__less_double__ v1051) {
bb1052:
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ __first1053;
  long __holeIndex1054;
  long __len1055;
  double __value1056;
  struct __gnu_cxx____ops___Iter_comp_iter_std__less_double__ __comp1057;
  long __topIndex1058;
  long __secondChild1059;
  struct __gnu_cxx____ops___Iter_comp_val_std__less_double__ __cmp1060;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ agg_tmp21061;
  __first1053 = v1047;
  __holeIndex1054 = v1048;
  __len1055 = v1049;
  __value1056 = v1050;
  __comp1057 = v1051;
  long t1062 = __holeIndex1054;
  __topIndex1058 = t1062;
  long t1063 = __holeIndex1054;
  __secondChild1059 = t1063;
    while (1) {
      long t1064 = __secondChild1059;
      long t1065 = __len1055;
      long c1066 = 1;
      long b1067 = t1065 - c1066;
      long c1068 = 2;
      long b1069 = b1067 / c1068;
      _Bool c1070 = ((t1064 < b1069)) ? 1 : 0;
      if (!c1070) break;
        struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ ref_tmp01071;
        struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ ref_tmp11072;
        long c1073 = 2;
        long t1074 = __secondChild1059;
        long c1075 = 1;
        long b1076 = t1074 + c1075;
        long b1077 = c1073 * b1076;
        __secondChild1059 = b1077;
          struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ agg_tmp01078;
          struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ agg_tmp11079;
          long t1080 = __secondChild1059;
          struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ r1081 = __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______operator__long__const_2(&__first1053, t1080);
          agg_tmp01078 = r1081;
          long t1082 = __secondChild1059;
          long c1083 = 1;
          long b1084 = t1082 - c1083;
          struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ r1085 = __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______operator__long__const_2(&__first1053, b1084);
          agg_tmp11079 = r1085;
          struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ t1086 = agg_tmp01078;
          struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ t1087 = agg_tmp11079;
          _Bool r1088 = bool___gnu_cxx____ops___Iter_comp_iter_std__less_double_____operator_____gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_________gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______(&__comp1057, t1086, t1087);
          if (r1088) {
            long t1089 = __secondChild1059;
            long u1090 = t1089 - 1;
            __secondChild1059 = u1090;
          }
        long t1091 = __secondChild1059;
        struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ r1092 = __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______operator__long__const_2(&__first1053, t1091);
        ref_tmp01071 = r1092;
        double* r1093 = __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______operator____const(&ref_tmp01071);
        double t1094 = *r1093;
        long t1095 = __holeIndex1054;
        struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ r1096 = __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______operator__long__const_2(&__first1053, t1095);
        ref_tmp11072 = r1096;
        double* r1097 = __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______operator____const(&ref_tmp11072);
        *r1097 = t1094;
        long t1098 = __secondChild1059;
        __holeIndex1054 = t1098;
    }
    long t1099 = __len1055;
    long c1100 = 1;
    long b1101 = t1099 & c1100;
    long c1102 = 0;
    _Bool c1103 = ((b1101 == c1102)) ? 1 : 0;
    _Bool ternary1104;
    if (c1103) {
      long t1105 = __secondChild1059;
      long t1106 = __len1055;
      long c1107 = 2;
      long b1108 = t1106 - c1107;
      long c1109 = 2;
      long b1110 = b1108 / c1109;
      _Bool c1111 = ((t1105 == b1110)) ? 1 : 0;
      ternary1104 = (_Bool)c1111;
    } else {
      _Bool c1112 = 0;
      ternary1104 = (_Bool)c1112;
    }
    if (ternary1104) {
      struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ ref_tmp21113;
      struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ ref_tmp31114;
      long c1115 = 2;
      long t1116 = __secondChild1059;
      long c1117 = 1;
      long b1118 = t1116 + c1117;
      long b1119 = c1115 * b1118;
      __secondChild1059 = b1119;
      long t1120 = __secondChild1059;
      long c1121 = 1;
      long b1122 = t1120 - c1121;
      struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ r1123 = __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______operator__long__const_2(&__first1053, b1122);
      ref_tmp21113 = r1123;
      double* r1124 = __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______operator____const(&ref_tmp21113);
      double t1125 = *r1124;
      long t1126 = __holeIndex1054;
      struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ r1127 = __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______operator__long__const_2(&__first1053, t1126);
      ref_tmp31114 = r1127;
      double* r1128 = __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______operator____const(&ref_tmp31114);
      *r1128 = t1125;
      long t1129 = __secondChild1059;
      long c1130 = 1;
      long b1131 = t1129 - c1130;
      __holeIndex1054 = b1131;
    }
  __gnu_cxx____ops___Iter_comp_val_std__less_double______Iter_comp_val(&__cmp1060, &__comp1057);
  agg_tmp21061 = __first1053; // copy
  long t1132 = __holeIndex1054;
  long t1133 = __topIndex1058;
  double t1134 = __value1056;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ t1135 = agg_tmp21061;
  void_std____push_heap___gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______long__double____gnu_cxx____ops___Iter_comp_val_std__less_double_____(t1135, t1132, t1133, t1134, &__cmp1060);
  return;
}

// function: _ZSt10__pop_heapIN9__gnu_cxx17__normal_iteratorIPdSt6vectorIdSaIdEEEENS0_5__ops15_Iter_comp_iterISt4lessIdEEEEvT_SC_SC_RT0_
void void_std____pop_heap___gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_________gnu_cxx____ops___Iter_comp_iter_std__less_double_____(struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ v1136, struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ v1137, struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ v1138, struct __gnu_cxx____ops___Iter_comp_iter_std__less_double__* v1139) {
bb1140:
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ __first1141;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ __last1142;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ __result1143;
  struct __gnu_cxx____ops___Iter_comp_iter_std__less_double__* __comp1144;
  double __value1145;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ agg_tmp01146;
  struct __gnu_cxx____ops___Iter_comp_iter_std__less_double__ agg_tmp11147;
  __first1141 = v1136;
  __last1142 = v1137;
  __result1143 = v1138;
  __comp1144 = v1139;
  double* r1148 = __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______operator____const(&__result1143);
  double t1149 = *r1148;
  __value1145 = t1149;
  double* r1150 = __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______operator____const(&__first1141);
  double t1151 = *r1150;
  double* r1152 = __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______operator____const(&__result1143);
  *r1152 = t1151;
  agg_tmp01146 = __first1141; // copy
  long c1153 = 0;
  long r1154 = __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______difference_type___gnu_cxx__operator__double___std__vector_double__std__allocator_double_____(&__last1142, &__first1141);
  double t1155 = __value1145;
  struct __gnu_cxx____ops___Iter_comp_iter_std__less_double__* t1156 = __comp1144;
  agg_tmp11147 = *t1156; // copy
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ t1157 = agg_tmp01146;
  struct __gnu_cxx____ops___Iter_comp_iter_std__less_double__ t1158 = agg_tmp11147;
  void_std____adjust_heap___gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______long__double____gnu_cxx____ops___Iter_comp_iter_std__less_double_____(t1157, c1153, r1154, t1155, t1158);
  return;
}

// function: _ZSt8pop_heapIN9__gnu_cxx17__normal_iteratorIPdSt6vectorIdSaIdEEEESt4lessIdEEvT_S9_T0_
void void_std__pop_heap___gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______std__less_double___(struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ v1159, struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ v1160, struct std__less_double_ v1161) {
bb1162:
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ __first1163;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ __last1164;
  struct std__less_double_ __comp1165;
  __first1163 = v1159;
  __last1164 = v1160;
  __comp1165 = v1161;
    do {
          _Bool r1166 = _ZN9__gnu_cxxeqIPdSt6vectorIdSaIdEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first1163, &__last1164);
          if (r1166) {
            char* cast1167 = (char*)&(_str_5);
            int c1168 = 325;
            char* cast1169 = (char*)&(__PRETTY_FUNCTION____ZSt8pop_heapIN9__gnu_cxx17__normal_iteratorIPdSt6vectorIdSaIdEEEESt4lessIdEEvT_S9_T0_);
            char* cast1170 = (char*)&(_str_6);
            std____glibcxx_assert_fail(cast1167, c1168, cast1169, cast1170);
          }
      _Bool c1171 = 0;
      if (!c1171) break;
    } while (1);
    long r1172 = __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______difference_type___gnu_cxx__operator__double___std__vector_double__std__allocator_double_____(&__last1164, &__first1163);
    long c1173 = 1;
    _Bool c1174 = ((r1172 > c1173)) ? 1 : 0;
    if (c1174) {
      struct __gnu_cxx____ops___Iter_comp_iter_std__less_double__ __cmp1175;
      struct std__less_double_ agg_tmp01176;
      struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ agg_tmp11177;
      struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ agg_tmp21178;
      struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ agg_tmp31179;
      struct std__less_double_ t1180 = agg_tmp01176;
      __gnu_cxx____ops___Iter_comp_iter_std__less_double______Iter_comp_iter(&__cmp1175, t1180);
      struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___* r1181 = __gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______operator__(&__last1164);
      agg_tmp11177 = __first1163; // copy
      agg_tmp21178 = __last1164; // copy
      agg_tmp31179 = __last1164; // copy
      struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ t1182 = agg_tmp11177;
      struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ t1183 = agg_tmp21178;
      struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ t1184 = agg_tmp31179;
      void_std____pop_heap___gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_________gnu_cxx____ops___Iter_comp_iter_std__less_double_____(t1182, t1183, t1184, &__cmp1175);
    }
  return;
}

// function: _ZNSt6vectorIdSaIdEE8pop_backEv
void std__vector_double__std__allocator_double_____pop_back(struct std__vector_double__std__allocator_double__* v1185) {
bb1186:
  struct std__vector_double__std__allocator_double__* this1187;
  this1187 = v1185;
  struct std__vector_double__std__allocator_double__* t1188 = this1187;
    do {
          _Bool r1189 = std__vector_double__std__allocator_double_____empty___const(t1188);
          if (r1189) {
            char* cast1190 = (char*)&(_str_2);
            int c1191 = 1459;
            char* cast1192 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIdSaIdEE8pop_backEv);
            char* cast1193 = (char*)&(_str_3);
            std____glibcxx_assert_fail(cast1190, c1191, cast1192, cast1193);
          }
      _Bool c1194 = 0;
      if (!c1194) break;
    } while (1);
  struct std___Vector_base_double__std__allocator_double__* base1195 = (struct std___Vector_base_double__std__allocator_double__*)((char *)t1188 + 0);
  struct std___Vector_base_double__std__allocator_double_____Vector_impl_data* base1196 = (struct std___Vector_base_double__std__allocator_double_____Vector_impl_data*)((char *)&(base1195->_M_impl) + 0);
  double* t1197 = base1196->_M_finish;
  int c1198 = -1;
  double* ptr1199 = &(t1197)[c1198];
  base1196->_M_finish = ptr1199;
  struct std___Vector_base_double__std__allocator_double__* base1200 = (struct std___Vector_base_double__std__allocator_double__*)((char *)t1188 + 0);
  struct std__allocator_double_* base1201 = (struct std__allocator_double_*)((char *)&(base1200->_M_impl) + 0);
  struct std___Vector_base_double__std__allocator_double__* base1202 = (struct std___Vector_base_double__std__allocator_double__*)((char *)t1188 + 0);
  struct std___Vector_base_double__std__allocator_double_____Vector_impl_data* base1203 = (struct std___Vector_base_double__std__allocator_double_____Vector_impl_data*)((char *)&(base1202->_M_impl) + 0);
  double* t1204 = base1203->_M_finish;
  void_std__allocator_traits_std__allocator_double_____destroy_double_(base1201, t1204);
  return;
}

// function: _ZNSt14priority_queueIdSt6vectorIdSaIdEESt4lessIdEE3popEv
void std__priority_queue_double__std__vector_double__std__allocator_double_____std__less_double_____pop(struct std__priority_queue_double__std__vector_double__std__allocator_double____std__less_double__* v1205) {
bb1206:
  struct std__priority_queue_double__std__vector_double__std__allocator_double____std__less_double__* this1207;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ agg_tmp01208;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ agg_tmp11209;
  struct std__less_double_ agg_tmp21210;
  this1207 = v1205;
  struct std__priority_queue_double__std__vector_double__std__allocator_double____std__less_double__* t1211 = this1207;
    do {
          _Bool r1212 = std__priority_queue_double__std__vector_double__std__allocator_double_____std__less_double_____empty___const(t1211);
          if (r1212) {
            char* cast1213 = (char*)&(_str_4);
            int c1214 = 888;
            char* cast1215 = (char*)&(__PRETTY_FUNCTION____ZNSt14priority_queueIdSt6vectorIdSaIdEESt4lessIdEE3popEv);
            char* cast1216 = (char*)&(_str_3);
            std____glibcxx_assert_fail(cast1213, c1214, cast1215, cast1216);
          }
      _Bool c1217 = 0;
      if (!c1217) break;
    } while (1);
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ r1218 = std__vector_double__std__allocator_double_____begin(&t1211->c);
  agg_tmp01208 = r1218;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ r1219 = std__vector_double__std__allocator_double_____end(&t1211->c);
  agg_tmp11209 = r1219;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ t1220 = agg_tmp01208;
  struct __gnu_cxx____normal_iterator_double____std__vector_double__std__allocator_double___ t1221 = agg_tmp11209;
  struct std__less_double_ t1222 = agg_tmp21210;
  void_std__pop_heap___gnu_cxx____normal_iterator_double___std__vector_double__std__allocator_double_______std__less_double___(t1220, t1221, t1222);
  std__vector_double__std__allocator_double_____pop_back(&t1211->c);
  return;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v1223, void* v1224) {
bb1225:
  struct std__basic_ostream_char__std__char_traits_char__* this1226;
  void* __pf1227;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1228;
  this1226 = v1223;
  __pf1227 = v1224;
  struct std__basic_ostream_char__std__char_traits_char__* t1229 = this1226;
  void* t1230 = __pf1227;
  struct std__basic_ostream_char__std__char_traits_char__* r1231 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t1230)(t1229);
  __retval1228 = r1231;
  struct std__basic_ostream_char__std__char_traits_char__* t1232 = __retval1228;
  return t1232;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1233) {
bb1234:
  struct std__basic_ostream_char__std__char_traits_char__* __os1235;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1236;
  __os1235 = v1233;
  struct std__basic_ostream_char__std__char_traits_char__* t1237 = __os1235;
  struct std__basic_ostream_char__std__char_traits_char__* r1238 = std__ostream__flush(t1237);
  __retval1236 = r1238;
  struct std__basic_ostream_char__std__char_traits_char__* t1239 = __retval1236;
  return t1239;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v1240) {
bb1241:
  struct std__ctype_char_* __f1242;
  struct std__ctype_char_* __retval1243;
  __f1242 = v1240;
    struct std__ctype_char_* t1244 = __f1242;
    _Bool cast1245 = (_Bool)t1244;
    _Bool u1246 = !cast1245;
    if (u1246) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t1247 = __f1242;
  __retval1243 = t1247;
  struct std__ctype_char_* t1248 = __retval1243;
  return t1248;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v1249, char v1250) {
bb1251:
  struct std__ctype_char_* this1252;
  char __c1253;
  char __retval1254;
  this1252 = v1249;
  __c1253 = v1250;
  struct std__ctype_char_* t1255 = this1252;
    char t1256 = t1255->_M_widen_ok;
    _Bool cast1257 = (_Bool)t1256;
    if (cast1257) {
      char t1258 = __c1253;
      unsigned char cast1259 = (unsigned char)t1258;
      unsigned long cast1260 = (unsigned long)cast1259;
      char t1261 = t1255->_M_widen[cast1260];
      __retval1254 = t1261;
      char t1262 = __retval1254;
      return t1262;
    }
  std__ctype_char____M_widen_init___const(t1255);
  char t1263 = __c1253;
  void** v1264 = (void**)t1255;
  void* v1265 = *((void**)v1264);
  char vcall1268 = (char)__VERIFIER_virtual_call_char_char(t1255, 6, t1263);
  __retval1254 = vcall1268;
  char t1269 = __retval1254;
  return t1269;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v1270, char v1271) {
bb1272:
  struct std__basic_ios_char__std__char_traits_char__* this1273;
  char __c1274;
  char __retval1275;
  this1273 = v1270;
  __c1274 = v1271;
  struct std__basic_ios_char__std__char_traits_char__* t1276 = this1273;
  struct std__ctype_char_* t1277 = t1276->_M_ctype;
  struct std__ctype_char_* r1278 = std__ctype_char__const__std____check_facet_std__ctype_char___(t1277);
  char t1279 = __c1274;
  char r1280 = std__ctype_char___widen_char__const(r1278, t1279);
  __retval1275 = r1280;
  char t1281 = __retval1275;
  return t1281;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1282) {
bb1283:
  struct std__basic_ostream_char__std__char_traits_char__* __os1284;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1285;
  __os1284 = v1282;
  struct std__basic_ostream_char__std__char_traits_char__* t1286 = __os1284;
  struct std__basic_ostream_char__std__char_traits_char__* t1287 = __os1284;
  void** v1288 = (void**)t1287;
  void* v1289 = *((void**)v1288);
  unsigned char* cast1290 = (unsigned char*)v1289;
  long c1291 = -24;
  unsigned char* ptr1292 = &(cast1290)[c1291];
  long* cast1293 = (long*)ptr1292;
  long t1294 = *cast1293;
  unsigned char* cast1295 = (unsigned char*)t1287;
  unsigned char* ptr1296 = &(cast1295)[t1294];
  struct std__basic_ostream_char__std__char_traits_char__* cast1297 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1296;
  struct std__basic_ios_char__std__char_traits_char__* cast1298 = (struct std__basic_ios_char__std__char_traits_char__*)cast1297;
  char c1299 = 10;
  char r1300 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast1298, c1299);
  struct std__basic_ostream_char__std__char_traits_char__* r1301 = std__ostream__put(t1286, r1300);
  struct std__basic_ostream_char__std__char_traits_char__* r1302 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r1301);
  __retval1285 = r1302;
  struct std__basic_ostream_char__std__char_traits_char__* t1303 = __retval1285;
  return t1303;
}

// function: _ZNSt14priority_queueIdSt6vectorIdSaIdEESt4lessIdEED2Ev
void std__priority_queue_double__std__vector_double__std__allocator_double_____std__less_double______priority_queue(struct std__priority_queue_double__std__vector_double__std__allocator_double____std__less_double__* v1304) {
bb1305:
  struct std__priority_queue_double__std__vector_double__std__allocator_double____std__less_double__* this1306;
  this1306 = v1304;
  struct std__priority_queue_double__std__vector_double__std__allocator_double____std__less_double__* t1307 = this1306;
  {
    std__vector_double__std__allocator_double______vector(&t1307->c);
  }
  return;
}

// function: main
int main() {
bb1308:
  int __retval1309;
  struct std__priority_queue_double__std__vector_double__std__allocator_double____std__less_double__ priorities1310;
  double ref_tmp01311;
  double ref_tmp11312;
  double ref_tmp21313;
  int c1314 = 0;
  __retval1309 = c1314;
  std__priority_queue_double__std__vector_double__std__allocator_double_____std__less_double_____priority_queue_std__vector_double__std__allocator_double_____void_(&priorities1310);
    double c1315 = 0x1.999999999999ap1;
    ref_tmp01311 = c1315;
    std__priority_queue_double__std__vector_double__std__allocator_double_____std__less_double_____push(&priorities1310, &ref_tmp01311);
    double c1316 = 0x1.399999999999ap3;
    ref_tmp11312 = c1316;
    std__priority_queue_double__std__vector_double__std__allocator_double_____std__less_double_____push(&priorities1310, &ref_tmp11312);
    double c1317 = 0x1.599999999999ap2;
    ref_tmp21313 = c1317;
    std__priority_queue_double__std__vector_double__std__allocator_double_____std__less_double_____push(&priorities1310, &ref_tmp21313);
    char* cast1318 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r1319 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1318);
      while (1) {
        _Bool r1320 = std__priority_queue_double__std__vector_double__std__allocator_double_____std__less_double_____empty___const(&priorities1310);
        _Bool u1321 = !r1320;
        if (!u1321) break;
          double* r1322 = std__priority_queue_double__std__vector_double__std__allocator_double_____std__less_double_____top___const(&priorities1310);
          double t1323 = *r1322;
          struct std__basic_ostream_char__std__char_traits_char__* r1324 = std__ostream__operator__(&_ZSt4cout, t1323);
          char c1325 = 32;
          struct std__basic_ostream_char__std__char_traits_char__* r1326 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char____2(r1324, c1325);
          std__priority_queue_double__std__vector_double__std__allocator_double_____std__less_double_____pop(&priorities1310);
      }
    struct std__basic_ostream_char__std__char_traits_char__* r1327 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c1328 = 0;
    __retval1309 = c1328;
    int t1329 = __retval1309;
    int ret_val1330 = t1329;
    {
      std__priority_queue_double__std__vector_double__std__allocator_double_____std__less_double______priority_queue(&priorities1310);
    }
    return ret_val1330;
  int t1331 = __retval1309;
  return t1331;
}

// function: _ZNSt6vectorIdSaIdEED2Ev
void std__vector_double__std__allocator_double______vector(struct std__vector_double__std__allocator_double__* v1332) {
bb1333:
  struct std__vector_double__std__allocator_double__* this1334;
  this1334 = v1332;
  struct std__vector_double__std__allocator_double__* t1335 = this1334;
    struct std___Vector_base_double__std__allocator_double__* base1336 = (struct std___Vector_base_double__std__allocator_double__*)((char *)t1335 + 0);
    struct std___Vector_base_double__std__allocator_double_____Vector_impl_data* base1337 = (struct std___Vector_base_double__std__allocator_double_____Vector_impl_data*)((char *)&(base1336->_M_impl) + 0);
    double* t1338 = base1337->_M_start;
    struct std___Vector_base_double__std__allocator_double__* base1339 = (struct std___Vector_base_double__std__allocator_double__*)((char *)t1335 + 0);
    struct std___Vector_base_double__std__allocator_double_____Vector_impl_data* base1340 = (struct std___Vector_base_double__std__allocator_double_____Vector_impl_data*)((char *)&(base1339->_M_impl) + 0);
    double* t1341 = base1340->_M_finish;
    struct std___Vector_base_double__std__allocator_double__* base1342 = (struct std___Vector_base_double__std__allocator_double__*)((char *)t1335 + 0);
    struct std__allocator_double_* r1343 = std___Vector_base_double__std__allocator_double______M_get_Tp_allocator(base1342);
    void_std___Destroy_double___double_(t1338, t1341, r1343);
  {
    struct std___Vector_base_double__std__allocator_double__* base1344 = (struct std___Vector_base_double__std__allocator_double__*)((char *)t1335 + 0);
    std___Vector_base_double__std__allocator_double_______Vector_base(base1344);
  }
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1345:
  _Bool __retval1346;
    _Bool c1347 = 0;
    __retval1346 = c1347;
    _Bool t1348 = __retval1346;
    return t1348;
  abort();
}

// function: _ZSt10destroy_atIdEvPT_
void void_std__destroy_at_double_(double* v1349) {
bb1350:
  double* __location1351;
  __location1351 = v1349;
  return;
}

// function: _ZSt8_DestroyIPdEvT_S1_
void void_std___Destroy_double__(double* v1352, double* v1353) {
bb1354:
  double* __first1355;
  double* __last1356;
  __first1355 = v1352;
  __last1356 = v1353;
      _Bool r1357 = std____is_constant_evaluated();
      if (r1357) {
          while (1) {
            double* t1359 = __first1355;
            double* t1360 = __last1356;
            _Bool c1361 = ((t1359 != t1360)) ? 1 : 0;
            if (!c1361) break;
            double* t1362 = __first1355;
            void_std__destroy_at_double_(t1362);
          for_step1358: ;
            double* t1363 = __first1355;
            int c1364 = 1;
            double* ptr1365 = &(t1363)[c1364];
            __first1355 = ptr1365;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPddEvT_S1_RSaIT0_E
void void_std___Destroy_double___double_(double* v1366, double* v1367, struct std__allocator_double_* v1368) {
bb1369:
  double* __first1370;
  double* __last1371;
  struct std__allocator_double_* unnamed1372;
  __first1370 = v1366;
  __last1371 = v1367;
  unnamed1372 = v1368;
  double* t1373 = __first1370;
  double* t1374 = __last1371;
  void_std___Destroy_double__(t1373, t1374);
  return;
}

// function: _ZNSt12_Vector_baseIdSaIdEE19_M_get_Tp_allocatorEv
struct std__allocator_double_* std___Vector_base_double__std__allocator_double______M_get_Tp_allocator(struct std___Vector_base_double__std__allocator_double__* v1375) {
bb1376:
  struct std___Vector_base_double__std__allocator_double__* this1377;
  struct std__allocator_double_* __retval1378;
  this1377 = v1375;
  struct std___Vector_base_double__std__allocator_double__* t1379 = this1377;
  struct std__allocator_double_* base1380 = (struct std__allocator_double_*)((char *)&(t1379->_M_impl) + 0);
  __retval1378 = base1380;
  struct std__allocator_double_* t1381 = __retval1378;
  return t1381;
}

// function: _ZNSt15__new_allocatorIdE10deallocateEPdm
void std____new_allocator_double___deallocate(struct std____new_allocator_double_* v1382, double* v1383, unsigned long v1384) {
bb1385:
  struct std____new_allocator_double_* this1386;
  double* __p1387;
  unsigned long __n1388;
  this1386 = v1382;
  __p1387 = v1383;
  __n1388 = v1384;
  struct std____new_allocator_double_* t1389 = this1386;
    unsigned long c1390 = 8;
    unsigned long c1391 = 16;
    _Bool c1392 = ((c1390 > c1391)) ? 1 : 0;
    if (c1392) {
      double* t1393 = __p1387;
      void* cast1394 = (void*)t1393;
      unsigned long t1395 = __n1388;
      unsigned long c1396 = 8;
      unsigned long b1397 = t1395 * c1396;
      unsigned long c1398 = 8;
      operator_delete_3(cast1394, b1397, c1398);
      return;
    }
  double* t1399 = __p1387;
  void* cast1400 = (void*)t1399;
  unsigned long t1401 = __n1388;
  unsigned long c1402 = 8;
  unsigned long b1403 = t1401 * c1402;
  operator_delete_2(cast1400, b1403);
  return;
}

// function: _ZNSaIdE10deallocateEPdm
void std__allocator_double___deallocate(struct std__allocator_double_* v1404, double* v1405, unsigned long v1406) {
bb1407:
  struct std__allocator_double_* this1408;
  double* __p1409;
  unsigned long __n1410;
  this1408 = v1404;
  __p1409 = v1405;
  __n1410 = v1406;
  struct std__allocator_double_* t1411 = this1408;
    _Bool r1412 = std____is_constant_evaluated();
    if (r1412) {
      double* t1413 = __p1409;
      void* cast1414 = (void*)t1413;
      operator_delete(cast1414);
      return;
    }
  struct std____new_allocator_double_* base1415 = (struct std____new_allocator_double_*)((char *)t1411 + 0);
  double* t1416 = __p1409;
  unsigned long t1417 = __n1410;
  std____new_allocator_double___deallocate(base1415, t1416, t1417);
  return;
}

// function: _ZNSt16allocator_traitsISaIdEE10deallocateERS0_Pdm
void std__allocator_traits_std__allocator_double_____deallocate(struct std__allocator_double_* v1418, double* v1419, unsigned long v1420) {
bb1421:
  struct std__allocator_double_* __a1422;
  double* __p1423;
  unsigned long __n1424;
  __a1422 = v1418;
  __p1423 = v1419;
  __n1424 = v1420;
  struct std__allocator_double_* t1425 = __a1422;
  double* t1426 = __p1423;
  unsigned long t1427 = __n1424;
  std__allocator_double___deallocate(t1425, t1426, t1427);
  return;
}

// function: _ZNSt12_Vector_baseIdSaIdEE13_M_deallocateEPdm
void std___Vector_base_double__std__allocator_double______M_deallocate(struct std___Vector_base_double__std__allocator_double__* v1428, double* v1429, unsigned long v1430) {
bb1431:
  struct std___Vector_base_double__std__allocator_double__* this1432;
  double* __p1433;
  unsigned long __n1434;
  this1432 = v1428;
  __p1433 = v1429;
  __n1434 = v1430;
  struct std___Vector_base_double__std__allocator_double__* t1435 = this1432;
    double* t1436 = __p1433;
    _Bool cast1437 = (_Bool)t1436;
    if (cast1437) {
      struct std__allocator_double_* base1438 = (struct std__allocator_double_*)((char *)&(t1435->_M_impl) + 0);
      double* t1439 = __p1433;
      unsigned long t1440 = __n1434;
      std__allocator_traits_std__allocator_double_____deallocate(base1438, t1439, t1440);
    }
  return;
}

// function: _ZNSt12_Vector_baseIdSaIdEE12_Vector_implD2Ev
void std___Vector_base_double__std__allocator_double______Vector_impl____Vector_impl(struct std___Vector_base_double__std__allocator_double_____Vector_impl* v1441) {
bb1442:
  struct std___Vector_base_double__std__allocator_double_____Vector_impl* this1443;
  this1443 = v1441;
  struct std___Vector_base_double__std__allocator_double_____Vector_impl* t1444 = this1443;
  {
    struct std__allocator_double_* base1445 = (struct std__allocator_double_*)((char *)t1444 + 0);
    std__allocator_double____allocator(base1445);
  }
  return;
}

// function: _ZNSt12_Vector_baseIdSaIdEED2Ev
void std___Vector_base_double__std__allocator_double_______Vector_base(struct std___Vector_base_double__std__allocator_double__* v1446) {
bb1447:
  struct std___Vector_base_double__std__allocator_double__* this1448;
  this1448 = v1446;
  struct std___Vector_base_double__std__allocator_double__* t1449 = this1448;
    struct std___Vector_base_double__std__allocator_double_____Vector_impl_data* base1450 = (struct std___Vector_base_double__std__allocator_double_____Vector_impl_data*)((char *)&(t1449->_M_impl) + 0);
    double* t1451 = base1450->_M_start;
    struct std___Vector_base_double__std__allocator_double_____Vector_impl_data* base1452 = (struct std___Vector_base_double__std__allocator_double_____Vector_impl_data*)((char *)&(t1449->_M_impl) + 0);
    double* t1453 = base1452->_M_end_of_storage;
    struct std___Vector_base_double__std__allocator_double_____Vector_impl_data* base1454 = (struct std___Vector_base_double__std__allocator_double_____Vector_impl_data*)((char *)&(t1449->_M_impl) + 0);
    double* t1455 = base1454->_M_start;
    long diff1456 = t1453 - t1455;
    unsigned long cast1457 = (unsigned long)diff1456;
    std___Vector_base_double__std__allocator_double______M_deallocate(t1449, t1451, cast1457);
  {
    std___Vector_base_double__std__allocator_double______Vector_impl____Vector_impl(&t1449->_M_impl);
  }
  return;
}

// function: _ZNSaIdED2Ev
void std__allocator_double____allocator(struct std__allocator_double_* v1458) {
bb1459:
  struct std__allocator_double_* this1460;
  this1460 = v1458;
  struct std__allocator_double_* t1461 = this1460;
  return;
}

// function: _ZNSt6vectorIdSaIdEEC2Ev
void std__vector_double__std__allocator_double_____vector(struct std__vector_double__std__allocator_double__* v1462) {
bb1463:
  struct std__vector_double__std__allocator_double__* this1464;
  this1464 = v1462;
  struct std__vector_double__std__allocator_double__* t1465 = this1464;
  struct std___Vector_base_double__std__allocator_double__* base1466 = (struct std___Vector_base_double__std__allocator_double__*)((char *)t1465 + 0);
  std___Vector_base_double__std__allocator_double______Vector_base(base1466);
  return;
}

// function: _ZNSt12_Vector_baseIdSaIdEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE
void _ZNSt12_Vector_baseIdSaIdEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_double__std__allocator_double_____Vector_impl* v1467) {
bb1468:
  struct std___Vector_base_double__std__allocator_double_____Vector_impl* this1469;
  this1469 = v1467;
  struct std___Vector_base_double__std__allocator_double_____Vector_impl* t1470 = this1469;
  struct std__allocator_double_* base1471 = (struct std__allocator_double_*)((char *)t1470 + 0);
  std__allocator_double___allocator(base1471);
    struct std___Vector_base_double__std__allocator_double_____Vector_impl_data* base1472 = (struct std___Vector_base_double__std__allocator_double_____Vector_impl_data*)((char *)t1470 + 0);
    std___Vector_base_double__std__allocator_double______Vector_impl_data___Vector_impl_data(base1472);
  return;
}

// function: _ZNSt12_Vector_baseIdSaIdEEC2Ev
void std___Vector_base_double__std__allocator_double______Vector_base(struct std___Vector_base_double__std__allocator_double__* v1473) {
bb1474:
  struct std___Vector_base_double__std__allocator_double__* this1475;
  this1475 = v1473;
  struct std___Vector_base_double__std__allocator_double__* t1476 = this1475;
  _ZNSt12_Vector_baseIdSaIdEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(&t1476->_M_impl);
  return;
}

// function: _ZNSt15__new_allocatorIdEC2Ev
void std____new_allocator_double_____new_allocator(struct std____new_allocator_double_* v1477) {
bb1478:
  struct std____new_allocator_double_* this1479;
  this1479 = v1477;
  struct std____new_allocator_double_* t1480 = this1479;
  return;
}

// function: _ZNSaIdEC2Ev
void std__allocator_double___allocator(struct std__allocator_double_* v1481) {
bb1482:
  struct std__allocator_double_* this1483;
  this1483 = v1481;
  struct std__allocator_double_* t1484 = this1483;
  struct std____new_allocator_double_* base1485 = (struct std____new_allocator_double_*)((char *)t1484 + 0);
  std____new_allocator_double_____new_allocator(base1485);
  return;
}

// function: _ZNSt12_Vector_baseIdSaIdEE17_Vector_impl_dataC2Ev
void std___Vector_base_double__std__allocator_double______Vector_impl_data___Vector_impl_data(struct std___Vector_base_double__std__allocator_double_____Vector_impl_data* v1486) {
bb1487:
  struct std___Vector_base_double__std__allocator_double_____Vector_impl_data* this1488;
  this1488 = v1486;
  struct std___Vector_base_double__std__allocator_double_____Vector_impl_data* t1489 = this1488;
  double* c1490 = ((void*)0);
  t1489->_M_start = c1490;
  double* c1491 = ((void*)0);
  t1489->_M_finish = c1491;
  double* c1492 = ((void*)0);
  t1489->_M_end_of_storage = c1492;
  return;
}

