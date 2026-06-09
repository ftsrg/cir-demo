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
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_ { unsigned char __field0; };
struct std__allocator_int_ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[6] = "v1 = ";
char _str_1[2] = " ";
char _str_2[6] = "v2 = ";
char _str_3[6] = "v3 = ";
char _str_4[26] = "vector::_M_realloc_append";
char _str_5[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv[35] = "reference std::vector<int>::back()";
char _str_6[15] = "!this->empty()";
char _str_7[49] = "cannot create std::vector larger than max_size()";
char _str_8[98] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_uninitialized.h";
char __PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_[140] = "_ForwardIterator std::__do_uninit_fill_n(_ForwardIterator, _Size _Tp &) [_ForwardIterator = int *, _Size = unsigned long, _Tp = int]";
char _str_9[9] = "__n >= 0";
void std__vector_int__std__allocator_int_____vector_2(struct std__vector_int__std__allocator_int__* p0);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* p0, int* p1, int* p2);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* p0);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* p0);
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* p0);
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
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
void void_std__destroy_at_int_(int* p0);
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
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* p0);
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* p0);
void void_std__vector_int__std__allocator_int______M_realloc_append_int_(struct std__vector_int__std__allocator_int__* p0, int* p1);
int** __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0);
_Bool _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p1);
void __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin___const(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end___const(struct std__vector_int__std__allocator_int__* p0);
_Bool std__vector_int__std__allocator_int_____empty___const(struct std__vector_int__std__allocator_int__* p0);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
int* std__vector_int__std__allocator_int_____back(struct std__vector_int__std__allocator_int__* p0);
int* int__std__vector_int__std__allocator_int_____emplace_back_int_(struct std__vector_int__std__allocator_int__* p0, int* p1);
void std__vector_int__std__allocator_int_____push_back(struct std__vector_int__std__allocator_int__* p0, int* p1);
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
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___3(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int p1);
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
long std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________difference_type_std____distance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct std__random_access_iterator_tag p2);
long std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________difference_type_std__distance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1);
unsigned long std__vector_int__std__allocator_int_____capacity___const(struct std__vector_int__std__allocator_int__* p0);
void std__allocator_int___allocator(struct std__allocator_int_* p0, struct std__allocator_int_* p1);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long p0, struct std__allocator_int_* p1);
int* std__vector_int__std__allocator_int______Guard_alloc___M_release(struct std__vector_int__std__allocator_int_____Guard_alloc* p0);
int* int__std__vector_int__std__allocator_int______M_allocate_and_copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p3);
void void_std___Destroy_int__(int* p0, int* p1);
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);
void std__vector_int__std__allocator_int______M_erase_at_end(struct std__vector_int__std__allocator_int__* p0, int* p1);
int* int__std____niter_wrap_int__(int** p0, int* p1);
long std__iterator_traits_int____difference_type_std____distance_int__(int* p0, int* p1, struct std__random_access_iterator_tag p2);
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** p0);
long std__iterator_traits_int____difference_type_std__distance_int__(int* p0, int* p1);
extern void* memmove(void* p0, void* p1, unsigned long p2);
void void_std____assign_one_false__int___int__(int** p0, int** p1);
int* int__std____copy_move_a2_false__int___int___int__(int* p0, int* p1, int* p2);
int* int__std____copy_move_a1_false__int___int__(int* p0, int* p1, int* p2);
int* int__std____niter_base_int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0);
int* int__std____copy_move_a_false____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0);
int* int__std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___4(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
void void_std____advance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1, struct std__random_access_iterator_tag p2);
void void_std__advance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______unsigned_long_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, unsigned long p1);
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* p0, int** p1);
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* p0, int* p1);
void void_std___Construct_int__int__(int* p0, int* p1);
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* p0);
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* p0);
int* int__std____do_uninit_copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2);
int* int__std__uninitialized_copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2);
int* int__std____uninitialized_copy_a___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2, struct std__allocator_int_* p3);
void void_std__vector_int__std__allocator_int______M_assign_aux___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct std__vector_int__std__allocator_int__* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, struct std__forward_iterator_tag p3);
struct std__random_access_iterator_tag std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
void void_std__vector_int__std__allocator_int_____assign___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______void_(struct std__vector_int__std__allocator_int__* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, int* p2, struct std__allocator_int_* p3);
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p0);
void std___Vector_base_int__std__allocator_int______Vector_impl_data___M_copy_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p0, struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p1);
void std___Vector_base_int__std__allocator_int______Vector_impl_data___M_swap_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p0, struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p1);
void void_std____fill_a1_int___int_(int* p0, int* p1, int* p2);
void void_std____fill_a1_int___std__vector_int__std__allocator_int_____int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2);
void void_std____fill_a___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2);
void void_std__fill___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2);
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* p0, int* p1);
void void_std___Construct_int__int_const__(int* p0, int* p1);
int* int__std____do_uninit_fill_n_int___unsigned_long__int_(int* p0, unsigned long p1, int* p2);
int* int__std__uninitialized_fill_n_int___unsigned_long__int_(int* p0, unsigned long p1, int* p2);
int* int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(int* p0, unsigned long p1, int* p2, struct std__allocator_int_* p3);
void void_std____fill_a_int___int_(int* p0, int* p1, int* p2);
int* int__std____fill_n_a_int___unsigned_long__int_(int* p0, unsigned long p1, int* p2, struct std__random_access_iterator_tag p3);
unsigned long std____size_to_integer(unsigned long p0);
int* int__std__fill_n_int___unsigned_long__int_(int* p0, unsigned long p1, int* p2);
void std__vector_int__std__allocator_int______M_fill_assign(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, int* p2);
void std__vector_int__std__allocator_int_____assign(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, int* p2);
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* p0);
int main();
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0);
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0);
void std___Vector_base_int__std__allocator_int______Vector_base_2(struct std___Vector_base_int__std__allocator_int__* p0);
_Bool std____is_constant_evaluated();
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_int___deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* p0, int* p1, unsigned long p2);
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* p0);
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* p0);
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* p0, struct std____new_allocator_int_* p1);
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0, struct std__allocator_int_* p1);
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* p0, unsigned long p1);
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* p0, unsigned long p1, struct std__allocator_int_* p2);
void std__vector_int__std__allocator_int______M_fill_initialize(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, int* p2);

// function: _ZNSt6vectorIiSaIiEEC2Ev
void std__vector_int__std__allocator_int_____vector_2(struct std__vector_int__std__allocator_int__* v0) {
bb1:
  struct std__vector_int__std__allocator_int__* this2;
  this2 = v0;
  struct std__vector_int__std__allocator_int__* t3 = this2;
  struct std___Vector_base_int__std__allocator_int__* base4 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t3 + 0);
  std___Vector_base_int__std__allocator_int______Vector_base_2(base4);
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2Ev
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v5) {
bb6:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this7;
  this7 = v5;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t8 = this7;
  int* c9 = ((void*)0);
  t8->_M_current = c9;
  return;
}

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v10, int* v11) {
bb12:
  int* __location13;
  int* __args14;
  int* __retval15;
  void* __loc16;
  __location13 = v10;
  __args14 = v11;
  int* t17 = __location13;
  void* cast18 = (void*)t17;
  __loc16 = cast18;
    void* t19 = __loc16;
    int* cast20 = (int*)t19;
    int* t21 = __args14;
    int t22 = *t21;
    *cast20 = t22;
    __retval15 = cast20;
    int* t23 = __retval15;
    return t23;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* v24, int* v25, int* v26) {
bb27:
  struct std__allocator_int_* __a28;
  int* __p29;
  int* __args30;
  __a28 = v24;
  __p29 = v25;
  __args30 = v26;
  int* t31 = __p29;
  int* t32 = __args30;
  int* r33 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t31, t32);
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v34, unsigned long* v35) {
bb36:
  unsigned long* __a37;
  unsigned long* __b38;
  unsigned long* __retval39;
  __a37 = v34;
  __b38 = v35;
    unsigned long* t40 = __b38;
    unsigned long t41 = *t40;
    unsigned long* t42 = __a37;
    unsigned long t43 = *t42;
    _Bool c44 = ((t41 < t43)) ? 1 : 0;
    if (c44) {
      unsigned long* t45 = __b38;
      __retval39 = t45;
      unsigned long* t46 = __retval39;
      return t46;
    }
  unsigned long* t47 = __a37;
  __retval39 = t47;
  unsigned long* t48 = __retval39;
  return t48;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v49) {
bb50:
  struct std__allocator_int_* __a51;
  unsigned long __retval52;
  unsigned long __diffmax53;
  unsigned long __allocmax54;
  __a51 = v49;
  unsigned long c55 = 2305843009213693951;
  __diffmax53 = c55;
  unsigned long c56 = 4611686018427387903;
  __allocmax54 = c56;
  unsigned long* r57 = unsigned_long_const__std__min_unsigned_long_(&__diffmax53, &__allocmax54);
  unsigned long t58 = *r57;
  __retval52 = t58;
  unsigned long t59 = __retval52;
  return t59;
}

// function: _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* v60) {
bb61:
  struct std___Vector_base_int__std__allocator_int__* this62;
  struct std__allocator_int_* __retval63;
  this62 = v60;
  struct std___Vector_base_int__std__allocator_int__* t64 = this62;
  struct std__allocator_int_* base65 = (struct std__allocator_int_*)((char *)&(t64->_M_impl) + 0);
  __retval63 = base65;
  struct std__allocator_int_* t66 = __retval63;
  return t66;
}

// function: _ZNKSt6vectorIiSaIiEE8max_sizeEv
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* v67) {
bb68:
  struct std__vector_int__std__allocator_int__* this69;
  unsigned long __retval70;
  this69 = v67;
  struct std__vector_int__std__allocator_int__* t71 = this69;
  struct std___Vector_base_int__std__allocator_int__* base72 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t71 + 0);
  struct std__allocator_int_* r73 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(base72);
  unsigned long r74 = std__vector_int__std__allocator_int______S_max_size(r73);
  __retval70 = r74;
  unsigned long t75 = __retval70;
  return t75;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v76) {
bb77:
  struct std__vector_int__std__allocator_int__* this78;
  unsigned long __retval79;
  long __dif80;
  this78 = v76;
  struct std__vector_int__std__allocator_int__* t81 = this78;
  struct std___Vector_base_int__std__allocator_int__* base82 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t81 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base83 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base82->_M_impl) + 0);
  int* t84 = base83->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base85 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t81 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base86 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base85->_M_impl) + 0);
  int* t87 = base86->_M_start;
  long diff88 = t84 - t87;
  __dif80 = diff88;
    long t89 = __dif80;
    long c90 = 0;
    _Bool c91 = ((t89 < c90)) ? 1 : 0;
    if (c91) {
      __builtin_unreachable();
    }
  long t92 = __dif80;
  unsigned long cast93 = (unsigned long)t92;
  __retval79 = cast93;
  unsigned long t94 = __retval79;
  return t94;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v95, unsigned long* v96) {
bb97:
  unsigned long* __a98;
  unsigned long* __b99;
  unsigned long* __retval100;
  __a98 = v95;
  __b99 = v96;
    unsigned long* t101 = __a98;
    unsigned long t102 = *t101;
    unsigned long* t103 = __b99;
    unsigned long t104 = *t103;
    _Bool c105 = ((t102 < t104)) ? 1 : 0;
    if (c105) {
      unsigned long* t106 = __b99;
      __retval100 = t106;
      unsigned long* t107 = __retval100;
      return t107;
    }
  unsigned long* t108 = __a98;
  __retval100 = t108;
  unsigned long* t109 = __retval100;
  return t109;
}

// function: _ZNKSt6vectorIiSaIiEE12_M_check_lenEmPKc
unsigned long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std__vector_int__std__allocator_int__* v110, unsigned long v111, char* v112) {
bb113:
  struct std__vector_int__std__allocator_int__* this114;
  unsigned long __n115;
  char* __s116;
  unsigned long __retval117;
  unsigned long __len118;
  unsigned long ref_tmp0119;
  this114 = v110;
  __n115 = v111;
  __s116 = v112;
  struct std__vector_int__std__allocator_int__* t120 = this114;
    unsigned long r121 = std__vector_int__std__allocator_int_____max_size___const(t120);
    unsigned long r122 = std__vector_int__std__allocator_int_____size___const(t120);
    unsigned long b123 = r121 - r122;
    unsigned long t124 = __n115;
    _Bool c125 = ((b123 < t124)) ? 1 : 0;
    if (c125) {
      char* t126 = __s116;
      std____throw_length_error(t126);
    }
  unsigned long r127 = std__vector_int__std__allocator_int_____size___const(t120);
  unsigned long r128 = std__vector_int__std__allocator_int_____size___const(t120);
  ref_tmp0119 = r128;
  unsigned long* r129 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp0119, &__n115);
  unsigned long t130 = *r129;
  unsigned long b131 = r127 + t130;
  __len118 = b131;
  unsigned long t132 = __len118;
  unsigned long r133 = std__vector_int__std__allocator_int_____size___const(t120);
  _Bool c134 = ((t132 < r133)) ? 1 : 0;
  _Bool ternary135;
  if (c134) {
    _Bool c136 = 1;
    ternary135 = (_Bool)c136;
  } else {
    unsigned long t137 = __len118;
    unsigned long r138 = std__vector_int__std__allocator_int_____max_size___const(t120);
    _Bool c139 = ((t137 > r138)) ? 1 : 0;
    ternary135 = (_Bool)c139;
  }
  unsigned long ternary140;
  if (ternary135) {
    unsigned long r141 = std__vector_int__std__allocator_int_____max_size___const(t120);
    ternary140 = (unsigned long)r141;
  } else {
    unsigned long t142 = __len118;
    ternary140 = (unsigned long)t142;
  }
  __retval117 = ternary140;
  unsigned long t143 = __retval117;
  return t143;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v144) {
bb145:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this146;
  int** __retval147;
  this146 = v144;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t148 = this146;
  __retval147 = &t148->_M_current;
  int** t149 = __retval147;
  return t149;
}

// function: _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v150, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v151) {
bb152:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs153;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs154;
  long __retval155;
  __lhs153 = v150;
  __rhs154 = v151;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t156 = __lhs153;
  int** r157 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t156);
  int* t158 = *r157;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t159 = __rhs154;
  int** r160 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t159);
  int* t161 = *r160;
  long diff162 = t158 - t161;
  __retval155 = diff162;
  long t163 = __retval155;
  return t163;
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v164) {
bb165:
  struct std____new_allocator_int_* this166;
  unsigned long __retval167;
  this166 = v164;
  struct std____new_allocator_int_* t168 = this166;
  unsigned long c169 = 9223372036854775807;
  unsigned long c170 = 4;
  unsigned long b171 = c169 / c170;
  __retval167 = b171;
  unsigned long t172 = __retval167;
  return t172;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v173, unsigned long v174, void* v175) {
bb176:
  struct std____new_allocator_int_* this177;
  unsigned long __n178;
  void* unnamed179;
  int* __retval180;
  this177 = v173;
  __n178 = v174;
  unnamed179 = v175;
  struct std____new_allocator_int_* t181 = this177;
    unsigned long t182 = __n178;
    unsigned long r183 = std____new_allocator_int____M_max_size___const(t181);
    _Bool c184 = ((t182 > r183)) ? 1 : 0;
    if (c184) {
        unsigned long t185 = __n178;
        unsigned long c186 = -1;
        unsigned long c187 = 4;
        unsigned long b188 = c186 / c187;
        _Bool c189 = ((t185 > b188)) ? 1 : 0;
        if (c189) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c190 = 4;
    unsigned long c191 = 16;
    _Bool c192 = ((c190 > c191)) ? 1 : 0;
    if (c192) {
      unsigned long __al193;
      unsigned long c194 = 4;
      __al193 = c194;
      unsigned long t195 = __n178;
      unsigned long c196 = 4;
      unsigned long b197 = t195 * c196;
      unsigned long t198 = __al193;
      void* r199 = operator_new_2(b197, t198);
      int* cast200 = (int*)r199;
      __retval180 = cast200;
      int* t201 = __retval180;
      return t201;
    }
  unsigned long t202 = __n178;
  unsigned long c203 = 4;
  unsigned long b204 = t202 * c203;
  void* r205 = operator_new(b204);
  int* cast206 = (int*)r205;
  __retval180 = cast206;
  int* t207 = __retval180;
  return t207;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v208, unsigned long v209) {
bb210:
  struct std__allocator_int_* this211;
  unsigned long __n212;
  int* __retval213;
  this211 = v208;
  __n212 = v209;
  struct std__allocator_int_* t214 = this211;
    _Bool r215 = std____is_constant_evaluated();
    if (r215) {
        unsigned long t216 = __n212;
        unsigned long c217 = 4;
        unsigned long ovr218;
        _Bool ovf219 = __builtin_mul_overflow(t216, c217, &ovr218);
        __n212 = ovr218;
        if (ovf219) {
          std____throw_bad_array_new_length();
        }
      unsigned long t220 = __n212;
      void* r221 = operator_new(t220);
      int* cast222 = (int*)r221;
      __retval213 = cast222;
      int* t223 = __retval213;
      return t223;
    }
  struct std____new_allocator_int_* base224 = (struct std____new_allocator_int_*)((char *)t214 + 0);
  unsigned long t225 = __n212;
  void* c226 = ((void*)0);
  int* r227 = std____new_allocator_int___allocate(base224, t225, c226);
  __retval213 = r227;
  int* t228 = __retval213;
  return t228;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v229, unsigned long v230) {
bb231:
  struct std__allocator_int_* __a232;
  unsigned long __n233;
  int* __retval234;
  __a232 = v229;
  __n233 = v230;
  struct std__allocator_int_* t235 = __a232;
  unsigned long t236 = __n233;
  int* r237 = std__allocator_int___allocate(t235, t236);
  __retval234 = r237;
  int* t238 = __retval234;
  return t238;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v239, unsigned long v240) {
bb241:
  struct std___Vector_base_int__std__allocator_int__* this242;
  unsigned long __n243;
  int* __retval244;
  this242 = v239;
  __n243 = v240;
  struct std___Vector_base_int__std__allocator_int__* t245 = this242;
  unsigned long t246 = __n243;
  unsigned long c247 = 0;
  _Bool c248 = ((t246 != c247)) ? 1 : 0;
  int* ternary249;
  if (c248) {
    struct std__allocator_int_* base250 = (struct std__allocator_int_*)((char *)&(t245->_M_impl) + 0);
    unsigned long t251 = __n243;
    int* r252 = std__allocator_traits_std__allocator_int_____allocate(base250, t251);
    ternary249 = (int*)r252;
  } else {
    int* c253 = ((void*)0);
    ternary249 = (int*)c253;
  }
  __retval244 = ternary249;
  int* t254 = __retval244;
  return t254;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocC2EPimRSt12_Vector_baseIiS0_E
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v255, int* v256, unsigned long v257, struct std___Vector_base_int__std__allocator_int__* v258) {
bb259:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this260;
  int* __s261;
  unsigned long __l262;
  struct std___Vector_base_int__std__allocator_int__* __vect263;
  this260 = v255;
  __s261 = v256;
  __l262 = v257;
  __vect263 = v258;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t264 = this260;
  int* t265 = __s261;
  t264->_M_storage = t265;
  unsigned long t266 = __l262;
  t264->_M_len = t266;
  struct std___Vector_base_int__std__allocator_int__* t267 = __vect263;
  t264->_M_vect = t267;
  return;
}

// function: _ZSt10to_addressIiEPT_S1_
int* int__std__to_address_int_(int* v268) {
bb269:
  int* __ptr270;
  int* __retval271;
  __ptr270 = v268;
  int* t272 = __ptr270;
  __retval271 = t272;
  int* t273 = __retval271;
  return t273;
}

// function: _ZSt12__to_addressIPiEDaRKT_
int* auto_std____to_address_int__(int** v274) {
bb275:
  int** __ptr276;
  int* __retval277;
  __ptr276 = v274;
  int** t278 = __ptr276;
  int* t279 = *t278;
  int* r280 = int__std__to_address_int_(t279);
  __retval277 = r280;
  int* t281 = __retval277;
  return t281;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb282:
  _Bool __retval283;
    _Bool c284 = 0;
    __retval283 = c284;
    _Bool t285 = __retval283;
    return t285;
  abort();
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEC2ERKS1_
void __gnu_cxx____normal_iterator_int___void_____normal_iterator(struct __gnu_cxx____normal_iterator_int____void_* v286, int** v287) {
bb288:
  struct __gnu_cxx____normal_iterator_int____void_* this289;
  int** __i290;
  this289 = v286;
  __i290 = v287;
  struct __gnu_cxx____normal_iterator_int____void_* t291 = this289;
  int** t292 = __i290;
  int* t293 = *t292;
  t291->_M_current = t293;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v294) {
bb295:
  int* __location296;
  __location296 = v294;
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE7destroyIiEEvRS0_PT_
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* v297, int* v298) {
bb299:
  struct std__allocator_int_* __a300;
  int* __p301;
  __a300 = v297;
  __p301 = v298;
  int* t302 = __p301;
  void_std__destroy_at_int_(t302);
  return;
}

// function: _ZSt19__relocate_object_aIiiSaIiEEvPT_PT0_RT1_
void void_std____relocate_object_a_int__int__std__allocator_int___(int* v303, int* v304, struct std__allocator_int_* v305) {
bb306:
  int* __dest307;
  int* __orig308;
  struct std__allocator_int_* __alloc309;
  __dest307 = v303;
  __orig308 = v304;
  __alloc309 = v305;
  struct std__allocator_int_* t310 = __alloc309;
  int* t311 = __dest307;
  int* t312 = __orig308;
  void_std__allocator_traits_std__allocator_int_____construct_int__int_(t310, t311, t312);
  struct std__allocator_int_* t313 = __alloc309;
  int* t314 = __orig308;
  void_std__allocator_traits_std__allocator_int_____destroy_int_(t313, t314);
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivEdeEv
int* __gnu_cxx____normal_iterator_int___void___operator____const(struct __gnu_cxx____normal_iterator_int____void_* v315) {
bb316:
  struct __gnu_cxx____normal_iterator_int____void_* this317;
  int* __retval318;
  this317 = v315;
  struct __gnu_cxx____normal_iterator_int____void_* t319 = this317;
  int* t320 = t319->_M_current;
  __retval318 = t320;
  int* t321 = __retval318;
  return t321;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEppEv
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator__(struct __gnu_cxx____normal_iterator_int____void_* v322) {
bb323:
  struct __gnu_cxx____normal_iterator_int____void_* this324;
  struct __gnu_cxx____normal_iterator_int____void_* __retval325;
  this324 = v322;
  struct __gnu_cxx____normal_iterator_int____void_* t326 = this324;
  int* t327 = t326->_M_current;
  int c328 = 1;
  int* ptr329 = &(t327)[c328];
  t326->_M_current = ptr329;
  __retval325 = t326;
  struct __gnu_cxx____normal_iterator_int____void_* t330 = __retval325;
  return t330;
}

// function: _ZSt14__relocate_a_1IPiN9__gnu_cxx17__normal_iteratorIS0_vEESaIiEET0_T_S6_S5_RT1_
struct __gnu_cxx____normal_iterator_int____void_ __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(int* v331, int* v332, struct __gnu_cxx____normal_iterator_int____void_ v333, struct std__allocator_int_* v334) {
bb335:
  int* __first336;
  int* __last337;
  struct __gnu_cxx____normal_iterator_int____void_ __result338;
  struct std__allocator_int_* __alloc339;
  struct __gnu_cxx____normal_iterator_int____void_ __retval340;
  __first336 = v331;
  __last337 = v332;
  __result338 = v333;
  __alloc339 = v334;
  __retval340 = __result338; // copy
    while (1) {
      int* t342 = __first336;
      int* t343 = __last337;
      _Bool c344 = ((t342 != t343)) ? 1 : 0;
      if (!c344) break;
      int* r345 = __gnu_cxx____normal_iterator_int___void___operator____const(&__retval340);
      int* t346 = __first336;
      struct std__allocator_int_* t347 = __alloc339;
      void_std____relocate_object_a_int__int__std__allocator_int___(r345, t346, t347);
    for_step341: ;
      int* t348 = __first336;
      int c349 = 1;
      int* ptr350 = &(t348)[c349];
      __first336 = ptr350;
      struct __gnu_cxx____normal_iterator_int____void_* r351 = __gnu_cxx____normal_iterator_int___void___operator__(&__retval340);
    }
  struct __gnu_cxx____normal_iterator_int____void_ t352 = __retval340;
  return t352;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEaSEOS2_
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator_(struct __gnu_cxx____normal_iterator_int____void_* v353, struct __gnu_cxx____normal_iterator_int____void_* v354) {
bb355:
  struct __gnu_cxx____normal_iterator_int____void_* this356;
  struct __gnu_cxx____normal_iterator_int____void_* unnamed357;
  struct __gnu_cxx____normal_iterator_int____void_* __retval358;
  this356 = v353;
  unnamed357 = v354;
  struct __gnu_cxx____normal_iterator_int____void_* t359 = this356;
  struct __gnu_cxx____normal_iterator_int____void_* t360 = unnamed357;
  int* t361 = t360->_M_current;
  t359->_M_current = t361;
  __retval358 = t359;
  struct __gnu_cxx____normal_iterator_int____void_* t362 = __retval358;
  return t362;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivE4baseEv
int** __gnu_cxx____normal_iterator_int___void___base___const(struct __gnu_cxx____normal_iterator_int____void_* v363) {
bb364:
  struct __gnu_cxx____normal_iterator_int____void_* this365;
  int** __retval366;
  this365 = v363;
  struct __gnu_cxx____normal_iterator_int____void_* t367 = this365;
  __retval366 = &t367->_M_current;
  int** t368 = __retval366;
  return t368;
}

// function: _ZSt14__relocate_a_1IiiENSt9enable_ifIXsr3std24__is_bitwise_relocatableIT_EE5valueEPS1_E4typeES2_S2_S2_RSaIT0_E
int* std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(int* v369, int* v370, int* v371, struct std__allocator_int_* v372) {
bb373:
  int* __first374;
  int* __last375;
  int* __result376;
  struct std__allocator_int_* __alloc377;
  int* __retval378;
  long __count379;
  __first374 = v369;
  __last375 = v370;
  __result376 = v371;
  __alloc377 = v372;
  int* t380 = __last375;
  int* t381 = __first374;
  long diff382 = t380 - t381;
  __count379 = diff382;
    long t383 = __count379;
    long c384 = 0;
    _Bool c385 = ((t383 > c384)) ? 1 : 0;
    if (c385) {
        _Bool r386 = std__is_constant_evaluated();
        if (r386) {
          struct __gnu_cxx____normal_iterator_int____void_ __out387;
          struct __gnu_cxx____normal_iterator_int____void_ ref_tmp0388;
          struct __gnu_cxx____normal_iterator_int____void_ agg_tmp0389;
          __gnu_cxx____normal_iterator_int___void_____normal_iterator(&__out387, &__result376);
          int* t390 = __first374;
          int* t391 = __last375;
          agg_tmp0389 = __out387; // copy
          struct std__allocator_int_* t392 = __alloc377;
          struct __gnu_cxx____normal_iterator_int____void_ t393 = agg_tmp0389;
          struct __gnu_cxx____normal_iterator_int____void_ r394 = __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(t390, t391, t393, t392);
          ref_tmp0388 = r394;
          struct __gnu_cxx____normal_iterator_int____void_* r395 = __gnu_cxx____normal_iterator_int___void___operator_(&__out387, &ref_tmp0388);
          int** r396 = __gnu_cxx____normal_iterator_int___void___base___const(&__out387);
          int* t397 = *r396;
          __retval378 = t397;
          int* t398 = __retval378;
          return t398;
        }
      int* t399 = __result376;
      void* cast400 = (void*)t399;
      int* t401 = __first374;
      void* cast402 = (void*)t401;
      long t403 = __count379;
      unsigned long cast404 = (unsigned long)t403;
      unsigned long c405 = 4;
      unsigned long b406 = cast404 * c405;
      void* r407 = memcpy(cast400, cast402, b406);
    }
  int* t408 = __result376;
  long t409 = __count379;
  int* ptr410 = &(t408)[t409];
  __retval378 = ptr410;
  int* t411 = __retval378;
  return t411;
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v412) {
bb413:
  int* __it414;
  int* __retval415;
  __it414 = v412;
  int* t416 = __it414;
  __retval415 = t416;
  int* t417 = __retval415;
  return t417;
}

// function: _ZSt12__relocate_aIPiS0_SaIiEET0_T_S3_S2_RT1_
int* int__std____relocate_a_int___int___std__allocator_int___(int* v418, int* v419, int* v420, struct std__allocator_int_* v421) {
bb422:
  int* __first423;
  int* __last424;
  int* __result425;
  struct std__allocator_int_* __alloc426;
  int* __retval427;
  __first423 = v418;
  __last424 = v419;
  __result425 = v420;
  __alloc426 = v421;
  int* t428 = __first423;
  int* r429 = int__std____niter_base_int__(t428);
  int* t430 = __last424;
  int* r431 = int__std____niter_base_int__(t430);
  int* t432 = __result425;
  int* r433 = int__std____niter_base_int__(t432);
  struct std__allocator_int_* t434 = __alloc426;
  int* r435 = std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(r429, r431, r433, t434);
  __retval427 = r435;
  int* t436 = __retval427;
  return t436;
}

// function: _ZNSt6vectorIiSaIiEE11_S_relocateEPiS2_S2_RS0_
int* std__vector_int__std__allocator_int______S_relocate(int* v437, int* v438, int* v439, struct std__allocator_int_* v440) {
bb441:
  int* __first442;
  int* __last443;
  int* __result444;
  struct std__allocator_int_* __alloc445;
  int* __retval446;
  __first442 = v437;
  __last443 = v438;
  __result444 = v439;
  __alloc445 = v440;
  int* t447 = __first442;
  int* t448 = __last443;
  int* t449 = __result444;
  struct std__allocator_int_* t450 = __alloc445;
  int* r451 = int__std____relocate_a_int___int___std__allocator_int___(t447, t448, t449, t450);
  __retval446 = r451;
  int* t452 = __retval446;
  return t452;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v453) {
bb454:
  struct std___Vector_base_int__std__allocator_int__* this455;
  struct std__allocator_int_* __retval456;
  this455 = v453;
  struct std___Vector_base_int__std__allocator_int__* t457 = this455;
  struct std__allocator_int_* base458 = (struct std__allocator_int_*)((char *)&(t457->_M_impl) + 0);
  __retval456 = base458;
  struct std__allocator_int_* t459 = __retval456;
  return t459;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocD2Ev
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v460) {
bb461:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this462;
  this462 = v460;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t463 = this462;
    int* t464 = t463->_M_storage;
    _Bool cast465 = (_Bool)t464;
    if (cast465) {
      struct std___Vector_base_int__std__allocator_int__* t466 = t463->_M_vect;
      int* t467 = t463->_M_storage;
      unsigned long t468 = t463->_M_len;
      std___Vector_base_int__std__allocator_int______M_deallocate(t466, t467, t468);
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_M_realloc_appendIJiEEEvDpOT_
void void_std__vector_int__std__allocator_int______M_realloc_append_int_(struct std__vector_int__std__allocator_int__* v469, int* v470) {
bb471:
  struct std__vector_int__std__allocator_int__* this472;
  int* __args473;
  unsigned long __len474;
  int* __old_start475;
  int* __old_finish476;
  unsigned long __elems477;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0478;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1479;
  int* __new_start480;
  int* __new_finish481;
  this472 = v469;
  __args473 = v470;
  struct std__vector_int__std__allocator_int__* t482 = this472;
  unsigned long c483 = 1;
  char* cast484 = (char*)&(_str_4);
  unsigned long r485 = std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(t482, c483, cast484);
  __len474 = r485;
    unsigned long t486 = __len474;
    unsigned long c487 = 0;
    _Bool c488 = ((t486 <= c487)) ? 1 : 0;
    if (c488) {
      __builtin_unreachable();
    }
  struct std___Vector_base_int__std__allocator_int__* base489 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t482 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base490 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base489->_M_impl) + 0);
  int* t491 = base490->_M_start;
  __old_start475 = t491;
  struct std___Vector_base_int__std__allocator_int__* base492 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t482 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base493 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base492->_M_impl) + 0);
  int* t494 = base493->_M_finish;
  __old_finish476 = t494;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r495 = std__vector_int__std__allocator_int_____end(t482);
  ref_tmp0478 = r495;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r496 = std__vector_int__std__allocator_int_____begin(t482);
  ref_tmp1479 = r496;
  long r497 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&ref_tmp0478, &ref_tmp1479);
  unsigned long cast498 = (unsigned long)r497;
  __elems477 = cast498;
  struct std___Vector_base_int__std__allocator_int__* base499 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t482 + 0);
  unsigned long t500 = __len474;
  int* r501 = std___Vector_base_int__std__allocator_int______M_allocate(base499, t500);
  __new_start480 = r501;
  int* t502 = __new_start480;
  __new_finish481 = t502;
    struct std__vector_int__std__allocator_int_____Guard_alloc __guard503;
    int* ref_tmp2504;
    int* t505 = __new_start480;
    unsigned long t506 = __len474;
    struct std___Vector_base_int__std__allocator_int__* base507 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t482 + 0);
    std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(&__guard503, t505, t506, base507);
      struct std___Vector_base_int__std__allocator_int__* base508 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t482 + 0);
      struct std__allocator_int_* base509 = (struct std__allocator_int_*)((char *)&(base508->_M_impl) + 0);
      int* t510 = __new_start480;
      unsigned long t511 = __elems477;
      int* ptr512 = &(t510)[t511];
      ref_tmp2504 = ptr512;
      int* r513 = auto_std____to_address_int__(&ref_tmp2504);
      int* t514 = __args473;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_(base509, r513, t514);
        int* t515 = __old_start475;
        int* t516 = __old_finish476;
        int* t517 = __new_start480;
        struct std___Vector_base_int__std__allocator_int__* base518 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t482 + 0);
        struct std__allocator_int_* r519 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base518);
        int* r520 = std__vector_int__std__allocator_int______S_relocate(t515, t516, t517, r519);
        __new_finish481 = r520;
        int* t521 = __new_finish481;
        int c522 = 1;
        int* ptr523 = &(t521)[c522];
        __new_finish481 = ptr523;
      int* t524 = __old_start475;
      __guard503._M_storage = t524;
      struct std___Vector_base_int__std__allocator_int__* base525 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t482 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base526 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base525->_M_impl) + 0);
      int* t527 = base526->_M_end_of_storage;
      int* t528 = __old_start475;
      long diff529 = t527 - t528;
      unsigned long cast530 = (unsigned long)diff529;
      __guard503._M_len = cast530;
    {
      std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(&__guard503);
    }
  int* t531 = __new_start480;
  struct std___Vector_base_int__std__allocator_int__* base532 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t482 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base533 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base532->_M_impl) + 0);
  base533->_M_start = t531;
  int* t534 = __new_finish481;
  struct std___Vector_base_int__std__allocator_int__* base535 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t482 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base536 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base535->_M_impl) + 0);
  base536->_M_finish = t534;
  int* t537 = __new_start480;
  unsigned long t538 = __len474;
  int* ptr539 = &(t537)[t538];
  struct std___Vector_base_int__std__allocator_int__* base540 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t482 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base541 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base540->_M_impl) + 0);
  base541->_M_end_of_storage = ptr539;
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v542) {
bb543:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this544;
  int** __retval545;
  this544 = v542;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t546 = this544;
  __retval545 = &t546->_M_current;
  int** t547 = __retval545;
  return t547;
}

// function: _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v548, struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v549) {
bb550:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __lhs551;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* __rhs552;
  _Bool __retval553;
  __lhs551 = v548;
  __rhs552 = v549;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t554 = __lhs551;
  int** r555 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t554);
  int* t556 = *r555;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t557 = __rhs552;
  int** r558 = __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_______base___const(t557);
  int* t559 = *r558;
  _Bool c560 = ((t556 == t559)) ? 1 : 0;
  __retval553 = c560;
  _Bool t561 = __retval553;
  return t561;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2ERKS2_
void __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* v562, int** v563) {
bb564:
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* this565;
  int** __i566;
  this565 = v562;
  __i566 = v563;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___* t567 = this565;
  int** t568 = __i566;
  int* t569 = *t568;
  t567->_M_current = t569;
  return;
}

// function: _ZNKSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin___const(struct std__vector_int__std__allocator_int__* v570) {
bb571:
  struct std__vector_int__std__allocator_int__* this572;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval573;
  this572 = v570;
  struct std__vector_int__std__allocator_int__* t574 = this572;
  struct std___Vector_base_int__std__allocator_int__* base575 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t574 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base576 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base575->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval573, &base576->_M_start);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t577 = __retval573;
  return t577;
}

// function: _ZNKSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end___const(struct std__vector_int__std__allocator_int__* v578) {
bb579:
  struct std__vector_int__std__allocator_int__* this580;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ __retval581;
  this580 = v578;
  struct std__vector_int__std__allocator_int__* t582 = this580;
  struct std___Vector_base_int__std__allocator_int__* base583 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t582 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base584 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base583->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int_const___std__vector_int__std__allocator_int_________normal_iterator(&__retval581, &base584->_M_finish);
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ t585 = __retval581;
  return t585;
}

// function: _ZNKSt6vectorIiSaIiEE5emptyEv
_Bool std__vector_int__std__allocator_int_____empty___const(struct std__vector_int__std__allocator_int__* v586) {
bb587:
  struct std__vector_int__std__allocator_int__* this588;
  _Bool __retval589;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp0590;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ ref_tmp1591;
  this588 = v586;
  struct std__vector_int__std__allocator_int__* t592 = this588;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r593 = std__vector_int__std__allocator_int_____begin___const(t592);
  ref_tmp0590 = r593;
  struct __gnu_cxx____normal_iterator_const_int____std__vector_int__std__allocator_int___ r594 = std__vector_int__std__allocator_int_____end___const(t592);
  ref_tmp1591 = r594;
  _Bool r595 = _ZN9__gnu_cxxeqIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&ref_tmp0590, &ref_tmp1591);
  __retval589 = r595;
  _Bool t596 = __retval589;
  return t596;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v597, int** v598) {
bb599:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this600;
  int** __i601;
  this600 = v597;
  __i601 = v598;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t602 = this600;
  int** t603 = __i601;
  int* t604 = *t603;
  t602->_M_current = t604;
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEmiEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v605, long v606) {
bb607:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this608;
  long __n609;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval610;
  int* ref_tmp0611;
  this608 = v605;
  __n609 = v606;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t612 = this608;
  int* t613 = t612->_M_current;
  long t614 = __n609;
  long u615 = -t614;
  int* ptr616 = &(t613)[u615];
  ref_tmp0611 = ptr616;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval610, &ref_tmp0611);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t617 = __retval610;
  return t617;
}

// function: _ZNSt6vectorIiSaIiEE4backEv
int* std__vector_int__std__allocator_int_____back(struct std__vector_int__std__allocator_int__* v618) {
bb619:
  struct std__vector_int__std__allocator_int__* this620;
  int* __retval621;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0622;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1623;
  this620 = v618;
  struct std__vector_int__std__allocator_int__* t624 = this620;
    do {
          _Bool r625 = std__vector_int__std__allocator_int_____empty___const(t624);
          if (r625) {
            char* cast626 = (char*)&(_str_5);
            int c627 = 1370;
            char* cast628 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv);
            char* cast629 = (char*)&(_str_6);
            std____glibcxx_assert_fail(cast626, c627, cast628, cast629);
          }
      _Bool c630 = 0;
      if (!c630) break;
    } while (1);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r631 = std__vector_int__std__allocator_int_____end(t624);
  ref_tmp1623 = r631;
  long c632 = 1;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r633 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&ref_tmp1623, c632);
  ref_tmp0622 = r633;
  int* r634 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0622);
  __retval621 = r634;
  int* t635 = __retval621;
  return t635;
}

// function: _ZNSt6vectorIiSaIiEE12emplace_backIJiEEERiDpOT_
int* int__std__vector_int__std__allocator_int_____emplace_back_int_(struct std__vector_int__std__allocator_int__* v636, int* v637) {
bb638:
  struct std__vector_int__std__allocator_int__* this639;
  int* __args640;
  int* __retval641;
  this639 = v636;
  __args640 = v637;
  struct std__vector_int__std__allocator_int__* t642 = this639;
    struct std___Vector_base_int__std__allocator_int__* base643 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t642 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base644 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base643->_M_impl) + 0);
    int* t645 = base644->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base646 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t642 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base647 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base646->_M_impl) + 0);
    int* t648 = base647->_M_end_of_storage;
    _Bool c649 = ((t645 != t648)) ? 1 : 0;
    if (c649) {
      struct std___Vector_base_int__std__allocator_int__* base650 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t642 + 0);
      struct std__allocator_int_* base651 = (struct std__allocator_int_*)((char *)&(base650->_M_impl) + 0);
      struct std___Vector_base_int__std__allocator_int__* base652 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t642 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base653 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base652->_M_impl) + 0);
      int* t654 = base653->_M_finish;
      int* t655 = __args640;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_(base651, t654, t655);
      struct std___Vector_base_int__std__allocator_int__* base656 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t642 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base657 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base656->_M_impl) + 0);
      int* t658 = base657->_M_finish;
      int c659 = 1;
      int* ptr660 = &(t658)[c659];
      base657->_M_finish = ptr660;
    } else {
      int* t661 = __args640;
      void_std__vector_int__std__allocator_int______M_realloc_append_int_(t642, t661);
    }
  int* r662 = std__vector_int__std__allocator_int_____back(t642);
  __retval641 = r662;
  int* t663 = __retval641;
  return t663;
}

// function: _ZNSt6vectorIiSaIiEE9push_backEOi
void std__vector_int__std__allocator_int_____push_back(struct std__vector_int__std__allocator_int__* v664, int* v665) {
bb666:
  struct std__vector_int__std__allocator_int__* this667;
  int* __x668;
  this667 = v664;
  __x668 = v665;
  struct std__vector_int__std__allocator_int__* t669 = this667;
  int* t670 = __x668;
  int* r671 = int__std__vector_int__std__allocator_int_____emplace_back_int_(t669, t670);
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v672, int v673) {
bb674:
  int __a675;
  int __b676;
  int __retval677;
  __a675 = v672;
  __b676 = v673;
  int t678 = __a675;
  int t679 = __b676;
  int b680 = t678 | t679;
  __retval677 = b680;
  int t681 = __retval677;
  return t681;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v682) {
bb683:
  struct std__basic_ios_char__std__char_traits_char__* this684;
  int __retval685;
  this684 = v682;
  struct std__basic_ios_char__std__char_traits_char__* t686 = this684;
  struct std__ios_base* base687 = (struct std__ios_base*)((char *)t686 + 0);
  int t688 = base687->_M_streambuf_state;
  __retval685 = t688;
  int t689 = __retval685;
  return t689;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v690, int v691) {
bb692:
  struct std__basic_ios_char__std__char_traits_char__* this693;
  int __state694;
  this693 = v690;
  __state694 = v691;
  struct std__basic_ios_char__std__char_traits_char__* t695 = this693;
  int r696 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t695);
  int t697 = __state694;
  int r698 = std__operator_(r696, t697);
  std__basic_ios_char__std__char_traits_char_____clear(t695, r698);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v699, char* v700) {
bb701:
  char* __c1702;
  char* __c2703;
  _Bool __retval704;
  __c1702 = v699;
  __c2703 = v700;
  char* t705 = __c1702;
  char t706 = *t705;
  int cast707 = (int)t706;
  char* t708 = __c2703;
  char t709 = *t708;
  int cast710 = (int)t709;
  _Bool c711 = ((cast707 == cast710)) ? 1 : 0;
  __retval704 = c711;
  _Bool t712 = __retval704;
  return t712;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v713) {
bb714:
  char* __p715;
  unsigned long __retval716;
  unsigned long __i717;
  __p715 = v713;
  unsigned long c718 = 0;
  __i717 = c718;
    char ref_tmp0719;
    while (1) {
      unsigned long t720 = __i717;
      char* t721 = __p715;
      char* ptr722 = &(t721)[t720];
      char c723 = 0;
      ref_tmp0719 = c723;
      _Bool r724 = __gnu_cxx__char_traits_char___eq(ptr722, &ref_tmp0719);
      _Bool u725 = !r724;
      if (!u725) break;
      unsigned long t726 = __i717;
      unsigned long u727 = t726 + 1;
      __i717 = u727;
    }
  unsigned long t728 = __i717;
  __retval716 = t728;
  unsigned long t729 = __retval716;
  return t729;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v730) {
bb731:
  char* __s732;
  unsigned long __retval733;
  __s732 = v730;
    _Bool r734 = std____is_constant_evaluated();
    if (r734) {
      char* t735 = __s732;
      unsigned long r736 = __gnu_cxx__char_traits_char___length(t735);
      __retval733 = r736;
      unsigned long t737 = __retval733;
      return t737;
    }
  char* t738 = __s732;
  unsigned long r739 = strlen(t738);
  __retval733 = r739;
  unsigned long t740 = __retval733;
  return t740;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v741, char* v742) {
bb743:
  struct std__basic_ostream_char__std__char_traits_char__* __out744;
  char* __s745;
  struct std__basic_ostream_char__std__char_traits_char__* __retval746;
  __out744 = v741;
  __s745 = v742;
    char* t747 = __s745;
    _Bool cast748 = (_Bool)t747;
    _Bool u749 = !cast748;
    if (u749) {
      struct std__basic_ostream_char__std__char_traits_char__* t750 = __out744;
      void** v751 = (void**)t750;
      void* v752 = *((void**)v751);
      unsigned char* cast753 = (unsigned char*)v752;
      long c754 = -24;
      unsigned char* ptr755 = &(cast753)[c754];
      long* cast756 = (long*)ptr755;
      long t757 = *cast756;
      unsigned char* cast758 = (unsigned char*)t750;
      unsigned char* ptr759 = &(cast758)[t757];
      struct std__basic_ostream_char__std__char_traits_char__* cast760 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr759;
      struct std__basic_ios_char__std__char_traits_char__* cast761 = (struct std__basic_ios_char__std__char_traits_char__*)cast760;
      int t762 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast761, t762);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t763 = __out744;
      char* t764 = __s745;
      char* t765 = __s745;
      unsigned long r766 = std__char_traits_char___length(t765);
      long cast767 = (long)r766;
      struct std__basic_ostream_char__std__char_traits_char__* r768 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t763, t764, cast767);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t769 = __out744;
  __retval746 = t769;
  struct std__basic_ostream_char__std__char_traits_char__* t770 = __retval746;
  return t770;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v771) {
bb772:
  struct std__vector_int__std__allocator_int__* this773;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval774;
  this773 = v771;
  struct std__vector_int__std__allocator_int__* t775 = this773;
  struct std___Vector_base_int__std__allocator_int__* base776 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t775 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base777 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base776->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval774, &base777->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t778 = __retval774;
  return t778;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSEOS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v779, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v780) {
bb781:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this782;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed783;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval784;
  this782 = v779;
  unnamed783 = v780;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t785 = this782;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t786 = unnamed783;
  int* t787 = t786->_M_current;
  t785->_M_current = t787;
  __retval784 = t785;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t788 = __retval784;
  return t788;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v789, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v790) {
bb791:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs792;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs793;
  _Bool __retval794;
  __lhs792 = v789;
  __rhs793 = v790;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t795 = __lhs792;
  int** r796 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t795);
  int* t797 = *r796;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t798 = __rhs793;
  int** r799 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t798);
  int* t800 = *r799;
  _Bool c801 = ((t797 == t800)) ? 1 : 0;
  __retval794 = c801;
  _Bool t802 = __retval794;
  return t802;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v803) {
bb804:
  struct std__vector_int__std__allocator_int__* this805;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval806;
  this805 = v803;
  struct std__vector_int__std__allocator_int__* t807 = this805;
  struct std___Vector_base_int__std__allocator_int__* base808 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t807 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base809 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base808->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval806, &base809->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t810 = __retval806;
  return t810;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v811) {
bb812:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this813;
  int* __retval814;
  this813 = v811;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t815 = this813;
  int* t816 = t815->_M_current;
  __retval814 = t816;
  int* t817 = __retval814;
  return t817;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEi
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___3(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v818, int v819) {
bb820:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this821;
  int unnamed822;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval823;
  int* ref_tmp0824;
  this821 = v818;
  unnamed822 = v819;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t825 = this821;
  int* t826 = t825->_M_current;
  int c827 = 1;
  int* ptr828 = &(t826)[c827];
  t825->_M_current = ptr828;
  ref_tmp0824 = t826;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval823, &ref_tmp0824);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t829 = __retval823;
  return t829;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v830, void* v831) {
bb832:
  struct std__basic_ostream_char__std__char_traits_char__* this833;
  void* __pf834;
  struct std__basic_ostream_char__std__char_traits_char__* __retval835;
  this833 = v830;
  __pf834 = v831;
  struct std__basic_ostream_char__std__char_traits_char__* t836 = this833;
  void* t837 = __pf834;
  struct std__basic_ostream_char__std__char_traits_char__* r838 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t837)(t836);
  __retval835 = r838;
  struct std__basic_ostream_char__std__char_traits_char__* t839 = __retval835;
  return t839;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v840) {
bb841:
  struct std__basic_ostream_char__std__char_traits_char__* __os842;
  struct std__basic_ostream_char__std__char_traits_char__* __retval843;
  __os842 = v840;
  struct std__basic_ostream_char__std__char_traits_char__* t844 = __os842;
  struct std__basic_ostream_char__std__char_traits_char__* r845 = std__ostream__flush(t844);
  __retval843 = r845;
  struct std__basic_ostream_char__std__char_traits_char__* t846 = __retval843;
  return t846;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v847) {
bb848:
  struct std__ctype_char_* __f849;
  struct std__ctype_char_* __retval850;
  __f849 = v847;
    struct std__ctype_char_* t851 = __f849;
    _Bool cast852 = (_Bool)t851;
    _Bool u853 = !cast852;
    if (u853) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t854 = __f849;
  __retval850 = t854;
  struct std__ctype_char_* t855 = __retval850;
  return t855;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v856, char v857) {
bb858:
  struct std__ctype_char_* this859;
  char __c860;
  char __retval861;
  this859 = v856;
  __c860 = v857;
  struct std__ctype_char_* t862 = this859;
    char t863 = t862->_M_widen_ok;
    _Bool cast864 = (_Bool)t863;
    if (cast864) {
      char t865 = __c860;
      unsigned char cast866 = (unsigned char)t865;
      unsigned long cast867 = (unsigned long)cast866;
      char t868 = t862->_M_widen[cast867];
      __retval861 = t868;
      char t869 = __retval861;
      return t869;
    }
  std__ctype_char____M_widen_init___const(t862);
  char t870 = __c860;
  void** v871 = (void**)t862;
  void* v872 = *((void**)v871);
  char vcall875 = (char)__VERIFIER_virtual_call_char_char(t862, 6, t870);
  __retval861 = vcall875;
  char t876 = __retval861;
  return t876;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v877, char v878) {
bb879:
  struct std__basic_ios_char__std__char_traits_char__* this880;
  char __c881;
  char __retval882;
  this880 = v877;
  __c881 = v878;
  struct std__basic_ios_char__std__char_traits_char__* t883 = this880;
  struct std__ctype_char_* t884 = t883->_M_ctype;
  struct std__ctype_char_* r885 = std__ctype_char__const__std____check_facet_std__ctype_char___(t884);
  char t886 = __c881;
  char r887 = std__ctype_char___widen_char__const(r885, t886);
  __retval882 = r887;
  char t888 = __retval882;
  return t888;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v889) {
bb890:
  struct std__basic_ostream_char__std__char_traits_char__* __os891;
  struct std__basic_ostream_char__std__char_traits_char__* __retval892;
  __os891 = v889;
  struct std__basic_ostream_char__std__char_traits_char__* t893 = __os891;
  struct std__basic_ostream_char__std__char_traits_char__* t894 = __os891;
  void** v895 = (void**)t894;
  void* v896 = *((void**)v895);
  unsigned char* cast897 = (unsigned char*)v896;
  long c898 = -24;
  unsigned char* ptr899 = &(cast897)[c898];
  long* cast900 = (long*)ptr899;
  long t901 = *cast900;
  unsigned char* cast902 = (unsigned char*)t894;
  unsigned char* ptr903 = &(cast902)[t901];
  struct std__basic_ostream_char__std__char_traits_char__* cast904 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr903;
  struct std__basic_ios_char__std__char_traits_char__* cast905 = (struct std__basic_ios_char__std__char_traits_char__*)cast904;
  char c906 = 10;
  char r907 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast905, c906);
  struct std__basic_ostream_char__std__char_traits_char__* r908 = std__ostream__put(t893, r907);
  struct std__basic_ostream_char__std__char_traits_char__* r909 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r908);
  __retval892 = r909;
  struct std__basic_ostream_char__std__char_traits_char__* t910 = __retval892;
  return t910;
}

// function: _ZSt10__distanceIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEENSt15iterator_traitsIT_E15difference_typeES8_S8_St26random_access_iterator_tag
long std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________difference_type_std____distance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v911, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v912, struct std__random_access_iterator_tag v913) {
bb914:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first915;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last916;
  struct std__random_access_iterator_tag unnamed917;
  long __retval918;
  __first915 = v911;
  __last916 = v912;
  unnamed917 = v913;
  long r919 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last916, &__first915);
  __retval918 = r919;
  long t920 = __retval918;
  return t920;
}

// function: _ZSt8distanceIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEENSt15iterator_traitsIT_E15difference_typeES8_S8_
long std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________difference_type_std__distance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v921, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v922) {
bb923:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first924;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last925;
  long __retval926;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0927;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1928;
  struct std__random_access_iterator_tag agg_tmp2929;
  __first924 = v921;
  __last925 = v922;
  agg_tmp0927 = __first924; // copy
  agg_tmp1928 = __last925; // copy
  struct std__random_access_iterator_tag r930 = std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__first924);
  agg_tmp2929 = r930;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t931 = agg_tmp0927;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t932 = agg_tmp1928;
  struct std__random_access_iterator_tag t933 = agg_tmp2929;
  long r934 = std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________difference_type_std____distance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t931, t932, t933);
  __retval926 = r934;
  long t935 = __retval926;
  return t935;
}

// function: _ZNKSt6vectorIiSaIiEE8capacityEv
unsigned long std__vector_int__std__allocator_int_____capacity___const(struct std__vector_int__std__allocator_int__* v936) {
bb937:
  struct std__vector_int__std__allocator_int__* this938;
  unsigned long __retval939;
  long __dif940;
  this938 = v936;
  struct std__vector_int__std__allocator_int__* t941 = this938;
  struct std___Vector_base_int__std__allocator_int__* base942 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t941 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base943 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base942->_M_impl) + 0);
  int* t944 = base943->_M_end_of_storage;
  struct std___Vector_base_int__std__allocator_int__* base945 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t941 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base946 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base945->_M_impl) + 0);
  int* t947 = base946->_M_start;
  long diff948 = t944 - t947;
  __dif940 = diff948;
    long t949 = __dif940;
    long c950 = 0;
    _Bool c951 = ((t949 < c950)) ? 1 : 0;
    if (c951) {
      __builtin_unreachable();
    }
  long t952 = __dif940;
  unsigned long cast953 = (unsigned long)t952;
  __retval939 = cast953;
  unsigned long t954 = __retval939;
  return t954;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v955, struct std__allocator_int_* v956) {
bb957:
  struct std__allocator_int_* this958;
  struct std__allocator_int_* __a959;
  this958 = v955;
  __a959 = v956;
  struct std__allocator_int_* t960 = this958;
  struct std____new_allocator_int_* base961 = (struct std____new_allocator_int_*)((char *)t960 + 0);
  struct std__allocator_int_* t962 = __a959;
  struct std____new_allocator_int_* base963 = (struct std____new_allocator_int_*)((char *)t962 + 0);
  std____new_allocator_int_____new_allocator(base961, base963);
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v964) {
bb965:
  struct std__allocator_int_* this966;
  this966 = v964;
  struct std__allocator_int_* t967 = this966;
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v968, struct std__allocator_int_* v969) {
bb970:
  unsigned long __n971;
  struct std__allocator_int_* __a972;
  unsigned long __retval973;
  __n971 = v968;
  __a972 = v969;
    struct std__allocator_int_ ref_tmp0974;
    _Bool tmp_exprcleanup975;
    unsigned long t976 = __n971;
    struct std__allocator_int_* t977 = __a972;
    std__allocator_int___allocator(&ref_tmp0974, t977);
      unsigned long r978 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp0974);
      _Bool c979 = ((t976 > r978)) ? 1 : 0;
      tmp_exprcleanup975 = c979;
    {
      std__allocator_int____allocator(&ref_tmp0974);
    }
    _Bool t980 = tmp_exprcleanup975;
    if (t980) {
      char* cast981 = (char*)&(_str_7);
      std____throw_length_error(cast981);
    }
  unsigned long t982 = __n971;
  __retval973 = t982;
  unsigned long t983 = __retval973;
  return t983;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_alloc10_M_releaseEv
int* std__vector_int__std__allocator_int______Guard_alloc___M_release(struct std__vector_int__std__allocator_int_____Guard_alloc* v984) {
bb985:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this986;
  int* __retval987;
  int* __res988;
  this986 = v984;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t989 = this986;
  int* t990 = t989->_M_storage;
  __res988 = t990;
  int* c991 = ((void*)0);
  t989->_M_storage = c991;
  int* t992 = __res988;
  __retval987 = t992;
  int* t993 = __retval987;
  return t993;
}

// function: _ZNSt6vectorIiSaIiEE20_M_allocate_and_copyIN9__gnu_cxx17__normal_iteratorIPiS1_EEEES5_mT_S7_
int* int__std__vector_int__std__allocator_int______M_allocate_and_copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct std__vector_int__std__allocator_int__* v994, unsigned long v995, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v996, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v997) {
bb998:
  struct std__vector_int__std__allocator_int__* this999;
  unsigned long __n1000;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1001;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1002;
  int* __retval1003;
  struct std__vector_int__std__allocator_int_____Guard_alloc __guard1004;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01005;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11006;
  this999 = v994;
  __n1000 = v995;
  __first1001 = v996;
  __last1002 = v997;
  struct std__vector_int__std__allocator_int__* t1007 = this999;
  struct std___Vector_base_int__std__allocator_int__* base1008 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1007 + 0);
  unsigned long t1009 = __n1000;
  int* r1010 = std___Vector_base_int__std__allocator_int______M_allocate(base1008, t1009);
  unsigned long t1011 = __n1000;
  struct std___Vector_base_int__std__allocator_int__* base1012 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1007 + 0);
  std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(&__guard1004, r1010, t1011, base1012);
    agg_tmp01005 = __first1001; // copy
    agg_tmp11006 = __last1002; // copy
    int* t1013 = __guard1004._M_storage;
    struct std___Vector_base_int__std__allocator_int__* base1014 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1007 + 0);
    struct std__allocator_int_* r1015 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1014);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1016 = agg_tmp01005;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1017 = agg_tmp11006;
    int* r1018 = int__std____uninitialized_copy_a___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___int_(t1016, t1017, t1013, r1015);
    int* r1019 = std__vector_int__std__allocator_int______Guard_alloc___M_release(&__guard1004);
    __retval1003 = r1019;
    int* t1020 = __retval1003;
    int* ret_val1021 = t1020;
    {
      std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(&__guard1004);
    }
    return ret_val1021;
  abort();
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1022, int* v1023) {
bb1024:
  int* __first1025;
  int* __last1026;
  __first1025 = v1022;
  __last1026 = v1023;
      _Bool r1027 = std____is_constant_evaluated();
      if (r1027) {
          while (1) {
            int* t1029 = __first1025;
            int* t1030 = __last1026;
            _Bool c1031 = ((t1029 != t1030)) ? 1 : 0;
            if (!c1031) break;
            int* t1032 = __first1025;
            void_std__destroy_at_int_(t1032);
          for_step1028: ;
            int* t1033 = __first1025;
            int c1034 = 1;
            int* ptr1035 = &(t1033)[c1034];
            __first1025 = ptr1035;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v1036, int* v1037, struct std__allocator_int_* v1038) {
bb1039:
  int* __first1040;
  int* __last1041;
  struct std__allocator_int_* unnamed1042;
  __first1040 = v1036;
  __last1041 = v1037;
  unnamed1042 = v1038;
  int* t1043 = __first1040;
  int* t1044 = __last1041;
  void_std___Destroy_int__(t1043, t1044);
  return;
}

// function: _ZNSt6vectorIiSaIiEE15_M_erase_at_endEPi
void std__vector_int__std__allocator_int______M_erase_at_end(struct std__vector_int__std__allocator_int__* v1045, int* v1046) {
bb1047:
  struct std__vector_int__std__allocator_int__* this1048;
  int* __pos1049;
  this1048 = v1045;
  __pos1049 = v1046;
  struct std__vector_int__std__allocator_int__* t1050 = this1048;
    unsigned long __n1051;
    struct std___Vector_base_int__std__allocator_int__* base1052 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1050 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1053 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1052->_M_impl) + 0);
    int* t1054 = base1053->_M_finish;
    int* t1055 = __pos1049;
    long diff1056 = t1054 - t1055;
    unsigned long cast1057 = (unsigned long)diff1056;
    __n1051 = cast1057;
    unsigned long t1058 = __n1051;
    _Bool cast1059 = (_Bool)t1058;
    if (cast1059) {
      int* t1060 = __pos1049;
      struct std___Vector_base_int__std__allocator_int__* base1061 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1050 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1062 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1061->_M_impl) + 0);
      int* t1063 = base1062->_M_finish;
      struct std___Vector_base_int__std__allocator_int__* base1064 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1050 + 0);
      struct std__allocator_int_* r1065 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1064);
      void_std___Destroy_int___int_(t1060, t1063, r1065);
      int* t1066 = __pos1049;
      struct std___Vector_base_int__std__allocator_int__* base1067 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1050 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1068 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1067->_M_impl) + 0);
      base1068->_M_finish = t1066;
    }
  return;
}

// function: _ZSt12__niter_wrapIPiET_RKS1_S1_
int* int__std____niter_wrap_int__(int** v1069, int* v1070) {
bb1071:
  int** unnamed1072;
  int* __res1073;
  int* __retval1074;
  unnamed1072 = v1069;
  __res1073 = v1070;
  int* t1075 = __res1073;
  __retval1074 = t1075;
  int* t1076 = __retval1074;
  return t1076;
}

// function: _ZSt10__distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_St26random_access_iterator_tag
long std__iterator_traits_int____difference_type_std____distance_int__(int* v1077, int* v1078, struct std__random_access_iterator_tag v1079) {
bb1080:
  int* __first1081;
  int* __last1082;
  struct std__random_access_iterator_tag unnamed1083;
  long __retval1084;
  __first1081 = v1077;
  __last1082 = v1078;
  unnamed1083 = v1079;
  int* t1085 = __last1082;
  int* t1086 = __first1081;
  long diff1087 = t1085 - t1086;
  __retval1084 = diff1087;
  long t1088 = __retval1084;
  return t1088;
}

// function: _ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** v1089) {
bb1090:
  int** unnamed1091;
  struct std__random_access_iterator_tag __retval1092;
  unnamed1091 = v1089;
  struct std__random_access_iterator_tag t1093 = __retval1092;
  return t1093;
}

// function: _ZSt8distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_
long std__iterator_traits_int____difference_type_std__distance_int__(int* v1094, int* v1095) {
bb1096:
  int* __first1097;
  int* __last1098;
  long __retval1099;
  struct std__random_access_iterator_tag agg_tmp01100;
  __first1097 = v1094;
  __last1098 = v1095;
  int* t1101 = __first1097;
  int* t1102 = __last1098;
  struct std__random_access_iterator_tag r1103 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first1097);
  agg_tmp01100 = r1103;
  struct std__random_access_iterator_tag t1104 = agg_tmp01100;
  long r1105 = std__iterator_traits_int____difference_type_std____distance_int__(t1101, t1102, t1104);
  __retval1099 = r1105;
  long t1106 = __retval1099;
  return t1106;
}

// function: _ZSt12__assign_oneILb0EPiS0_EvRT0_RT1_
void void_std____assign_one_false__int___int__(int** v1107, int** v1108) {
bb1109:
  int** __out1110;
  int** __in1111;
  __out1110 = v1107;
  __in1111 = v1108;
    int** t1112 = __in1111;
    int* t1113 = *t1112;
    int t1114 = *t1113;
    int** t1115 = __out1110;
    int* t1116 = *t1115;
    *t1116 = t1114;
  return;
}

// function: _ZSt14__copy_move_a2ILb0EPiS0_S0_ET2_T0_T1_S1_
int* int__std____copy_move_a2_false__int___int___int__(int* v1117, int* v1118, int* v1119) {
bb1120:
  int* __first1121;
  int* __last1122;
  int* __result1123;
  int* __retval1124;
  __first1121 = v1117;
  __last1122 = v1118;
  __result1123 = v1119;
      _Bool r1125 = std____is_constant_evaluated();
      if (r1125) {
      } else {
          long __n1126;
          int* t1127 = __first1121;
          int* t1128 = __last1122;
          long r1129 = std__iterator_traits_int____difference_type_std__distance_int__(t1127, t1128);
          __n1126 = r1129;
            long t1130 = __n1126;
            long c1131 = 1;
            _Bool c1132 = ((t1130 > c1131)) ? 1 : 0;
            if (c1132) {
              int* t1133 = __result1123;
              void* cast1134 = (void*)t1133;
              int* t1135 = __first1121;
              void* cast1136 = (void*)t1135;
              long t1137 = __n1126;
              unsigned long cast1138 = (unsigned long)t1137;
              unsigned long c1139 = 4;
              unsigned long b1140 = cast1138 * c1139;
              void* r1141 = memmove(cast1134, cast1136, b1140);
              long t1142 = __n1126;
              int* t1143 = __result1123;
              int* ptr1144 = &(t1143)[t1142];
              __result1123 = ptr1144;
            } else {
                long t1145 = __n1126;
                long c1146 = 1;
                _Bool c1147 = ((t1145 == c1146)) ? 1 : 0;
                if (c1147) {
                  void_std____assign_one_false__int___int__(&__result1123, &__first1121);
                  int* t1148 = __result1123;
                  int c1149 = 1;
                  int* ptr1150 = &(t1148)[c1149];
                  __result1123 = ptr1150;
                }
            }
          int* t1151 = __result1123;
          __retval1124 = t1151;
          int* t1152 = __retval1124;
          return t1152;
      }
    while (1) {
      int* t1154 = __first1121;
      int* t1155 = __last1122;
      _Bool c1156 = ((t1154 != t1155)) ? 1 : 0;
      if (!c1156) break;
      void_std____assign_one_false__int___int__(&__result1123, &__first1121);
    for_step1153: ;
      int* t1157 = __result1123;
      int c1158 = 1;
      int* ptr1159 = &(t1157)[c1158];
      __result1123 = ptr1159;
      int* t1160 = __first1121;
      int c1161 = 1;
      int* ptr1162 = &(t1160)[c1161];
      __first1121 = ptr1162;
    }
  int* t1163 = __result1123;
  __retval1124 = t1163;
  int* t1164 = __retval1124;
  return t1164;
}

// function: _ZSt14__copy_move_a1ILb0EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_a1_false__int___int__(int* v1165, int* v1166, int* v1167) {
bb1168:
  int* __first1169;
  int* __last1170;
  int* __result1171;
  int* __retval1172;
  __first1169 = v1165;
  __last1170 = v1166;
  __result1171 = v1167;
  int* t1173 = __first1169;
  int* t1174 = __last1170;
  int* t1175 = __result1171;
  int* r1176 = int__std____copy_move_a2_false__int___int___int__(t1173, t1174, t1175);
  __retval1172 = r1176;
  int* t1177 = __retval1172;
  return t1177;
}

// function: _ZSt12__niter_baseIPiSt6vectorIiSaIiEEET_N9__gnu_cxx17__normal_iteratorIS4_T0_EE
int* int__std____niter_base_int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1178) {
bb1179:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it1180;
  int* __retval1181;
  __it1180 = v1178;
  int** r1182 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__it1180);
  int* t1183 = *r1182;
  __retval1181 = t1183;
  int* t1184 = __retval1181;
  return t1184;
}

// function: _ZSt13__copy_move_aILb0EN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES2_ET1_T0_S8_S7_
int* int__std____copy_move_a_false____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1185, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1186, int* v1187) {
bb1188:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1189;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1190;
  int* __result1191;
  int* __retval1192;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01193;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11194;
  __first1189 = v1185;
  __last1190 = v1186;
  __result1191 = v1187;
  agg_tmp01193 = __first1189; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1195 = agg_tmp01193;
  int* r1196 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t1195);
  agg_tmp11194 = __last1190; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1197 = agg_tmp11194;
  int* r1198 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t1197);
  int* t1199 = __result1191;
  int* r1200 = int__std____niter_base_int__(t1199);
  int* r1201 = int__std____copy_move_a1_false__int___int__(r1196, r1198, r1200);
  int* r1202 = int__std____niter_wrap_int__(&__result1191, r1201);
  __retval1192 = r1202;
  int* t1203 = __retval1192;
  return t1203;
}

// function: _ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEET_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1204) {
bb1205:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it1206;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval1207;
  __it1206 = v1204;
  __retval1207 = __it1206; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1208 = __retval1207;
  return t1208;
}

// function: _ZSt4copyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES2_ET0_T_S8_S7_
int* int__std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1209, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1210, int* v1211) {
bb1212:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1213;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1214;
  int* __result1215;
  int* __retval1216;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01217;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11218;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp21219;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp31220;
  __first1213 = v1209;
  __last1214 = v1210;
  __result1215 = v1211;
  agg_tmp11218 = __first1213; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1221 = agg_tmp11218;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1222 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t1221);
  agg_tmp01217 = r1222;
  agg_tmp31220 = __last1214; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1223 = agg_tmp31220;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1224 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____miter_base___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t1223);
  agg_tmp21219 = r1224;
  int* t1225 = __result1215;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1226 = agg_tmp01217;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1227 = agg_tmp21219;
  int* r1228 = int__std____copy_move_a_false____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(t1226, t1227, t1225);
  __retval1216 = r1228;
  int* t1229 = __retval1216;
  return t1229;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___4(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1230) {
bb1231:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this1232;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval1233;
  this1232 = v1230;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1234 = this1232;
  int* t1235 = t1234->_M_current;
  int c1236 = 1;
  int* ptr1237 = &(t1235)[c1236];
  t1234->_M_current = ptr1237;
  __retval1233 = t1234;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1238 = __retval1233;
  return t1238;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEmmEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1239) {
bb1240:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this1241;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval1242;
  this1241 = v1239;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1243 = this1241;
  int* t1244 = t1243->_M_current;
  int c1245 = -1;
  int* ptr1246 = &(t1244)[c1245];
  t1243->_M_current = ptr1246;
  __retval1242 = t1243;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1247 = __retval1242;
  return t1247;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEpLEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1248, long v1249) {
bb1250:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this1251;
  long __n1252;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval1253;
  this1251 = v1248;
  __n1252 = v1249;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1254 = this1251;
  long t1255 = __n1252;
  int* t1256 = t1254->_M_current;
  int* ptr1257 = &(t1256)[t1255];
  t1254->_M_current = ptr1257;
  __retval1253 = t1254;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1258 = __retval1253;
  return t1258;
}

// function: _ZSt9__advanceIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEElEvRT_T0_St26random_access_iterator_tag
void void_std____advance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1259, long v1260, struct std__random_access_iterator_tag v1261) {
bb1262:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __i1263;
  long __n1264;
  struct std__random_access_iterator_tag unnamed1265;
  __i1263 = v1259;
  __n1264 = v1260;
  unnamed1265 = v1261;
    long t1266 = __n1264;
    _Bool isconst1267 = 0;
    _Bool ternary1268;
    if (isconst1267) {
      long t1269 = __n1264;
      long c1270 = 1;
      _Bool c1271 = ((t1269 == c1270)) ? 1 : 0;
      ternary1268 = (_Bool)c1271;
    } else {
      _Bool c1272 = 0;
      ternary1268 = (_Bool)c1272;
    }
    if (ternary1268) {
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1273 = __i1263;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1274 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___4(t1273);
    } else {
        long t1275 = __n1264;
        _Bool isconst1276 = 0;
        _Bool ternary1277;
        if (isconst1276) {
          long t1278 = __n1264;
          long c1279 = -1;
          _Bool c1280 = ((t1278 == c1279)) ? 1 : 0;
          ternary1277 = (_Bool)c1280;
        } else {
          _Bool c1281 = 0;
          ternary1277 = (_Bool)c1281;
        }
        if (ternary1277) {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1282 = __i1263;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1283 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(t1282);
        } else {
          long t1284 = __n1264;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1285 = __i1263;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1286 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___2(t1285, t1284);
        }
    }
  return;
}

// function: _ZSt7advanceIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEmEvRT_T0_
void void_std__advance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______unsigned_long_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1287, unsigned long v1288) {
bb1289:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __i1290;
  unsigned long __n1291;
  long __d1292;
  struct std__random_access_iterator_tag agg_tmp01293;
  __i1290 = v1287;
  __n1291 = v1288;
  unsigned long t1294 = __n1291;
  long cast1295 = (long)t1294;
  __d1292 = cast1295;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1296 = __i1290;
  long t1297 = __d1292;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t1298 = __i1290;
  struct std__random_access_iterator_tag r1299 = std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t1298);
  agg_tmp01293 = r1299;
  struct std__random_access_iterator_tag t1300 = agg_tmp01293;
  void_std____advance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______long_(t1296, t1297, t1300);
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1301, int** v1302) {
bb1303:
  struct std___UninitDestroyGuard_int____void_* this1304;
  int** __first1305;
  this1304 = v1301;
  __first1305 = v1302;
  struct std___UninitDestroyGuard_int____void_* t1306 = this1304;
  int** t1307 = __first1305;
  int* t1308 = *t1307;
  t1306->_M_first = t1308;
  int** t1309 = __first1305;
  t1306->_M_cur = t1309;
  return;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v1310, int* v1311) {
bb1312:
  int* __location1313;
  int* __args1314;
  int* __retval1315;
  void* __loc1316;
  __location1313 = v1310;
  __args1314 = v1311;
  int* t1317 = __location1313;
  void* cast1318 = (void*)t1317;
  __loc1316 = cast1318;
    void* t1319 = __loc1316;
    int* cast1320 = (int*)t1319;
    int* t1321 = __args1314;
    int t1322 = *t1321;
    *cast1320 = t1322;
    __retval1315 = cast1320;
    int* t1323 = __retval1315;
    return t1323;
  abort();
}

// function: _ZSt10_ConstructIiJRiEEvPT_DpOT0_
void void_std___Construct_int__int__(int* v1324, int* v1325) {
bb1326:
  int* __p1327;
  int* __args1328;
  __p1327 = v1324;
  __args1328 = v1325;
    _Bool r1329 = std____is_constant_evaluated();
    if (r1329) {
      int* t1330 = __p1327;
      int* t1331 = __args1328;
      int* r1332 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t1330, t1331);
      return;
    }
  int* t1333 = __p1327;
  void* cast1334 = (void*)t1333;
  int* cast1335 = (int*)cast1334;
  int* t1336 = __args1328;
  int t1337 = *t1336;
  *cast1335 = t1337;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v1338) {
bb1339:
  struct std___UninitDestroyGuard_int____void_* this1340;
  this1340 = v1338;
  struct std___UninitDestroyGuard_int____void_* t1341 = this1340;
  int** c1342 = ((void*)0);
  t1341->_M_cur = c1342;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1343) {
bb1344:
  struct std___UninitDestroyGuard_int____void_* this1345;
  this1345 = v1343;
  struct std___UninitDestroyGuard_int____void_* t1346 = this1345;
    int** t1347 = t1346->_M_cur;
    int** c1348 = ((void*)0);
    _Bool c1349 = ((t1347 != c1348)) ? 1 : 0;
    if (c1349) {
      int* t1350 = t1346->_M_first;
      int** t1351 = t1346->_M_cur;
      int* t1352 = *t1351;
      void_std___Destroy_int__(t1350, t1352);
    }
  return;
}

// function: _ZSt16__do_uninit_copyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_S2_ET1_T_T0_S7_
int* int__std____do_uninit_copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1353, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1354, int* v1355) {
bb1356:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1357;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1358;
  int* __result1359;
  int* __retval1360;
  struct std___UninitDestroyGuard_int____void_ __guard1361;
  __first1357 = v1353;
  __last1358 = v1354;
  __result1359 = v1355;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard1361, &__result1359);
      while (1) {
        _Bool r1363 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first1357, &__last1358);
        _Bool u1364 = !r1363;
        if (!u1364) break;
        int* t1365 = __result1359;
        int* r1366 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first1357);
        void_std___Construct_int__int__(t1365, r1366);
      for_step1362: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1367 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___4(&__first1357);
        int* t1368 = __result1359;
        int c1369 = 1;
        int* ptr1370 = &(t1368)[c1369];
        __result1359 = ptr1370;
      }
    std___UninitDestroyGuard_int___void___release(&__guard1361);
    int* t1371 = __result1359;
    __retval1360 = t1371;
    int* t1372 = __retval1360;
    int* ret_val1373 = t1372;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1361);
    }
    return ret_val1373;
  abort();
}

// function: _ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES2_ET0_T_S8_S7_
int* int__std__uninitialized_copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1374, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1375, int* v1376) {
bb1377:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1378;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1379;
  int* __result1380;
  int* __retval1381;
  __first1378 = v1374;
  __last1379 = v1375;
  __result1380 = v1376;
      long __n1382;
      long r1383 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(&__last1379, &__first1378);
      __n1382 = r1383;
        long t1384 = __n1382;
        long c1385 = 0;
        _Bool c1386 = ((t1384 > c1385)) ? 1 : 0;
        if (c1386) {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01387;
          int* t1388 = __result1380;
          int* r1389 = int__std____niter_base_int__(t1388);
          void* cast1390 = (void*)r1389;
          agg_tmp01387 = __first1378; // copy
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1391 = agg_tmp01387;
          int* r1392 = int__std____niter_base_int___std__vector_int__std__allocator_int_____(t1391);
          void* cast1393 = (void*)r1392;
          long t1394 = __n1382;
          unsigned long cast1395 = (unsigned long)t1394;
          unsigned long c1396 = 4;
          unsigned long b1397 = cast1395 * c1396;
          void* r1398 = memcpy(cast1390, cast1393, b1397);
          long t1399 = __n1382;
          int* t1400 = __result1380;
          int* ptr1401 = &(t1400)[t1399];
          __result1380 = ptr1401;
        }
      int* t1402 = __result1380;
      __retval1381 = t1402;
      int* t1403 = __retval1381;
      return t1403;
  abort();
}

// function: _ZSt22__uninitialized_copy_aIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_S2_iET1_T_T0_S7_RSaIT2_E
int* int__std____uninitialized_copy_a___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1404, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1405, int* v1406, struct std__allocator_int_* v1407) {
bb1408:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1409;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1410;
  int* __result1411;
  struct std__allocator_int_* unnamed1412;
  int* __retval1413;
  __first1409 = v1404;
  __last1410 = v1405;
  __result1411 = v1406;
  unnamed1412 = v1407;
    _Bool r1414 = std__is_constant_evaluated();
    if (r1414) {
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01415;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11416;
      agg_tmp01415 = __first1409; // copy
      agg_tmp11416 = __last1410; // copy
      int* t1417 = __result1411;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1418 = agg_tmp01415;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1419 = agg_tmp11416;
      int* r1420 = int__std____do_uninit_copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(t1418, t1419, t1417);
      __retval1413 = r1420;
      int* t1421 = __retval1413;
      return t1421;
    }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp21422;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp31423;
    agg_tmp21422 = __first1409; // copy
    agg_tmp31423 = __last1410; // copy
    int* t1424 = __result1411;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1425 = agg_tmp21422;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1426 = agg_tmp31423;
    int* r1427 = int__std__uninitialized_copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(t1425, t1426, t1424);
    __retval1413 = r1427;
    int* t1428 = __retval1413;
    return t1428;
  abort();
}

// function: _ZNSt6vectorIiSaIiEE13_M_assign_auxIN9__gnu_cxx17__normal_iteratorIPiS1_EEEEvT_S7_St20forward_iterator_tag
void void_std__vector_int__std__allocator_int______M_assign_aux___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct std__vector_int__std__allocator_int__* v1429, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1430, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1431, struct std__forward_iterator_tag v1432) {
bb1433:
  struct std__vector_int__std__allocator_int__* this1434;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1435;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1436;
  struct std__forward_iterator_tag unnamed1437;
  unsigned long __sz1438;
  unsigned long __len1439;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01440;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11441;
  this1434 = v1429;
  __first1435 = v1430;
  __last1436 = v1431;
  unnamed1437 = v1432;
  struct std__vector_int__std__allocator_int__* t1442 = this1434;
  unsigned long r1443 = std__vector_int__std__allocator_int_____size___const(t1442);
  __sz1438 = r1443;
  agg_tmp01440 = __first1435; // copy
  agg_tmp11441 = __last1436; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1444 = agg_tmp01440;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1445 = agg_tmp11441;
  long r1446 = std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________difference_type_std__distance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t1444, t1445);
  unsigned long cast1447 = (unsigned long)r1446;
  __len1439 = cast1447;
    unsigned long t1448 = __len1439;
    unsigned long r1449 = std__vector_int__std__allocator_int_____capacity___const(t1442);
    _Bool c1450 = ((t1448 > r1449)) ? 1 : 0;
    if (c1450) {
      int* __tmp1451;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp21452;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp31453;
        unsigned long t1454 = __len1439;
        unsigned long t1455 = __sz1438;
        _Bool c1456 = ((t1454 <= t1455)) ? 1 : 0;
        if (c1456) {
          __builtin_unreachable();
        }
      unsigned long t1457 = __len1439;
      struct std___Vector_base_int__std__allocator_int__* base1458 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1442 + 0);
      struct std__allocator_int_* r1459 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1458);
      unsigned long r1460 = std__vector_int__std__allocator_int______S_check_init_len(t1457, r1459);
      unsigned long t1461 = __len1439;
      agg_tmp21452 = __first1435; // copy
      agg_tmp31453 = __last1436; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1462 = agg_tmp21452;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1463 = agg_tmp31453;
      int* r1464 = int__std__vector_int__std__allocator_int______M_allocate_and_copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t1442, t1461, t1462, t1463);
      __tmp1451 = r1464;
      struct std___Vector_base_int__std__allocator_int__* base1465 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1442 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1466 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1465->_M_impl) + 0);
      int* t1467 = base1466->_M_start;
      struct std___Vector_base_int__std__allocator_int__* base1468 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1442 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1469 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1468->_M_impl) + 0);
      int* t1470 = base1469->_M_finish;
      struct std___Vector_base_int__std__allocator_int__* base1471 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1442 + 0);
      struct std__allocator_int_* r1472 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1471);
      void_std___Destroy_int___int_(t1467, t1470, r1472);
      struct std___Vector_base_int__std__allocator_int__* base1473 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1442 + 0);
      struct std___Vector_base_int__std__allocator_int__* base1474 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1442 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1475 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1474->_M_impl) + 0);
      int* t1476 = base1475->_M_start;
      struct std___Vector_base_int__std__allocator_int__* base1477 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1442 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1478 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1477->_M_impl) + 0);
      int* t1479 = base1478->_M_end_of_storage;
      struct std___Vector_base_int__std__allocator_int__* base1480 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1442 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1481 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1480->_M_impl) + 0);
      int* t1482 = base1481->_M_start;
      long diff1483 = t1479 - t1482;
      unsigned long cast1484 = (unsigned long)diff1483;
      std___Vector_base_int__std__allocator_int______M_deallocate(base1473, t1476, cast1484);
      int* t1485 = __tmp1451;
      struct std___Vector_base_int__std__allocator_int__* base1486 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1442 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1487 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1486->_M_impl) + 0);
      base1487->_M_start = t1485;
      struct std___Vector_base_int__std__allocator_int__* base1488 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1442 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1489 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1488->_M_impl) + 0);
      int* t1490 = base1489->_M_start;
      unsigned long t1491 = __len1439;
      int* ptr1492 = &(t1490)[t1491];
      struct std___Vector_base_int__std__allocator_int__* base1493 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1442 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1494 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1493->_M_impl) + 0);
      base1494->_M_finish = ptr1492;
      struct std___Vector_base_int__std__allocator_int__* base1495 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1442 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1496 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1495->_M_impl) + 0);
      int* t1497 = base1496->_M_finish;
      struct std___Vector_base_int__std__allocator_int__* base1498 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1442 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1499 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1498->_M_impl) + 0);
      base1499->_M_end_of_storage = t1497;
    } else {
        unsigned long t1500 = __sz1438;
        unsigned long t1501 = __len1439;
        _Bool c1502 = ((t1500 >= t1501)) ? 1 : 0;
        if (c1502) {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp41503;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp51504;
          agg_tmp41503 = __first1435; // copy
          agg_tmp51504 = __last1436; // copy
          struct std___Vector_base_int__std__allocator_int__* base1505 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1442 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1506 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1505->_M_impl) + 0);
          int* t1507 = base1506->_M_start;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1508 = agg_tmp41503;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1509 = agg_tmp51504;
          int* r1510 = int__std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(t1508, t1509, t1507);
          std__vector_int__std__allocator_int______M_erase_at_end(t1442, r1510);
        } else {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __mid1511;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp61512;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp71513;
          unsigned long __n1514;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp81515;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp91516;
          __mid1511 = __first1435; // copy
          unsigned long t1517 = __sz1438;
          void_std__advance___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______unsigned_long_(&__mid1511, t1517);
          agg_tmp61512 = __first1435; // copy
          agg_tmp71513 = __mid1511; // copy
          struct std___Vector_base_int__std__allocator_int__* base1518 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1442 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1519 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1518->_M_impl) + 0);
          int* t1520 = base1519->_M_start;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1521 = agg_tmp61512;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1522 = agg_tmp71513;
          int* r1523 = int__std__copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__(t1521, t1522, t1520);
          unsigned long t1524 = __len1439;
          unsigned long t1525 = __sz1438;
          unsigned long b1526 = t1524 - t1525;
          __n1514 = b1526;
          agg_tmp81515 = __mid1511; // copy
          agg_tmp91516 = __last1436; // copy
          struct std___Vector_base_int__std__allocator_int__* base1527 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1442 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1528 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1527->_M_impl) + 0);
          int* t1529 = base1528->_M_finish;
          struct std___Vector_base_int__std__allocator_int__* base1530 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1442 + 0);
          struct std__allocator_int_* r1531 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1530);
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1532 = agg_tmp81515;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1533 = agg_tmp91516;
          int* r1534 = int__std____uninitialized_copy_a___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___int_(t1532, t1533, t1529, r1531);
          struct std___Vector_base_int__std__allocator_int__* base1535 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1442 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1536 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1535->_M_impl) + 0);
          base1536->_M_finish = r1534;
        }
    }
  return;
}

// function: _ZSt19__iterator_categoryIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEENSt15iterator_traitsIT_E17iterator_categoryERKS8_
struct std__random_access_iterator_tag std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v1537) {
bb1538:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed1539;
  struct std__random_access_iterator_tag __retval1540;
  unnamed1539 = v1537;
  struct std__random_access_iterator_tag t1541 = __retval1540;
  return t1541;
}

// function: _ZNSt6vectorIiSaIiEE6assignIN9__gnu_cxx17__normal_iteratorIPiS1_EEvEEvT_S7_
void void_std__vector_int__std__allocator_int_____assign___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______void_(struct std__vector_int__std__allocator_int__* v1542, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1543, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1544) {
bb1545:
  struct std__vector_int__std__allocator_int__* this1546;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1547;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1548;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01549;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11550;
  struct std__forward_iterator_tag agg_tmp21551;
  struct std__random_access_iterator_tag ref_tmp01552;
  this1546 = v1542;
  __first1547 = v1543;
  __last1548 = v1544;
  struct std__vector_int__std__allocator_int__* t1553 = this1546;
  agg_tmp01549 = __first1547; // copy
  agg_tmp11550 = __last1548; // copy
  struct std__random_access_iterator_tag r1554 = std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__first1547);
  ref_tmp01552 = r1554;
  struct std__forward_iterator_tag* base1555 = (struct std__forward_iterator_tag*)((char *)&(ref_tmp01552) + 0);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1556 = agg_tmp01549;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1557 = agg_tmp11550;
  struct std__forward_iterator_tag t1558 = agg_tmp21551;
  void_std__vector_int__std__allocator_int______M_assign_aux___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t1553, t1556, t1557, t1558);
  return;
}

// function: _ZNSt6vectorIiSaIiEEC2EmRKiRKS0_
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* v1559, unsigned long v1560, int* v1561, struct std__allocator_int_* v1562) {
bb1563:
  struct std__vector_int__std__allocator_int__* this1564;
  unsigned long __n1565;
  int* __value1566;
  struct std__allocator_int_* __a1567;
  this1564 = v1559;
  __n1565 = v1560;
  __value1566 = v1561;
  __a1567 = v1562;
  struct std__vector_int__std__allocator_int__* t1568 = this1564;
  struct std___Vector_base_int__std__allocator_int__* base1569 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1568 + 0);
  unsigned long t1570 = __n1565;
  struct std__allocator_int_* t1571 = __a1567;
  unsigned long r1572 = std__vector_int__std__allocator_int______S_check_init_len(t1570, t1571);
  struct std__allocator_int_* t1573 = __a1567;
  std___Vector_base_int__std__allocator_int______Vector_base(base1569, r1572, t1573);
    unsigned long t1574 = __n1565;
    int* t1575 = __value1566;
    std__vector_int__std__allocator_int______M_fill_initialize(t1568, t1574, t1575);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1576) {
bb1577:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1578;
  this1578 = v1576;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1579 = this1578;
  int* c1580 = ((void*)0);
  t1579->_M_start = c1580;
  int* c1581 = ((void*)0);
  t1579->_M_finish = c1581;
  int* c1582 = ((void*)0);
  t1579->_M_end_of_storage = c1582;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_data12_M_copy_dataERKS2_
void std___Vector_base_int__std__allocator_int______Vector_impl_data___M_copy_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1583, struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1584) {
bb1585:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1586;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* __x1587;
  this1586 = v1583;
  __x1587 = v1584;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1588 = this1586;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1589 = __x1587;
  int* t1590 = t1589->_M_start;
  t1588->_M_start = t1590;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1591 = __x1587;
  int* t1592 = t1591->_M_finish;
  t1588->_M_finish = t1592;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1593 = __x1587;
  int* t1594 = t1593->_M_end_of_storage;
  t1588->_M_end_of_storage = t1594;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_data12_M_swap_dataERS2_
void std___Vector_base_int__std__allocator_int______Vector_impl_data___M_swap_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1595, struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1596) {
bb1597:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1598;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* __x1599;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __tmp1600;
  this1598 = v1595;
  __x1599 = v1596;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1601 = this1598;
  std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(&__tmp1600);
  std___Vector_base_int__std__allocator_int______Vector_impl_data___M_copy_data(&__tmp1600, t1601);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1602 = __x1599;
  std___Vector_base_int__std__allocator_int______Vector_impl_data___M_copy_data(t1601, t1602);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1603 = __x1599;
  std___Vector_base_int__std__allocator_int______Vector_impl_data___M_copy_data(t1603, &__tmp1600);
  return;
}

// function: _ZSt9__fill_a1IPiiEvT_S1_RKT0_
void void_std____fill_a1_int___int_(int* v1604, int* v1605, int* v1606) {
bb1607:
  int* __first1608;
  int* __last1609;
  int* __value1610;
  _Bool __load_outside_loop1611;
  int __val1612;
  __first1608 = v1604;
  __last1609 = v1605;
  __value1610 = v1606;
  _Bool c1613 = 1;
  __load_outside_loop1611 = c1613;
  int* t1614 = __value1610;
  int t1615 = *t1614;
  __val1612 = t1615;
    while (1) {
      int* t1617 = __first1608;
      int* t1618 = __last1609;
      _Bool c1619 = ((t1617 != t1618)) ? 1 : 0;
      if (!c1619) break;
      int t1620 = __val1612;
      int* t1621 = __first1608;
      *t1621 = t1620;
    for_step1616: ;
      int* t1622 = __first1608;
      int c1623 = 1;
      int* ptr1624 = &(t1622)[c1623];
      __first1608 = ptr1624;
    }
  return;
}

// function: _ZSt9__fill_a1IPiSt6vectorIiSaIiEEiEvN9__gnu_cxx17__normal_iteratorIT_T0_EES8_RKT1_
void void_std____fill_a1_int___std__vector_int__std__allocator_int_____int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1625, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1626, int* v1627) {
bb1628:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1629;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1630;
  int* __value1631;
  __first1629 = v1625;
  __last1630 = v1626;
  __value1631 = v1627;
  int** r1632 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__first1629);
  int* t1633 = *r1632;
  int** r1634 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(&__last1630);
  int* t1635 = *r1634;
  int* t1636 = __value1631;
  void_std____fill_a1_int___int_(t1633, t1635, t1636);
  return;
}

// function: _ZSt8__fill_aIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiEvT_S7_RKT0_
void void_std____fill_a___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1637, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1638, int* v1639) {
bb1640:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1641;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1642;
  int* __value1643;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01644;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11645;
  __first1641 = v1637;
  __last1642 = v1638;
  __value1643 = v1639;
  agg_tmp01644 = __first1641; // copy
  agg_tmp11645 = __last1642; // copy
  int* t1646 = __value1643;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1647 = agg_tmp01644;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1648 = agg_tmp11645;
  void_std____fill_a1_int___std__vector_int__std__allocator_int_____int_(t1647, t1648, t1646);
  return;
}

// function: _ZSt4fillIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiEvT_S7_RKT0_
void void_std__fill___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1649, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v1650, int* v1651) {
bb1652:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first1653;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last1654;
  int* __value1655;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01656;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11657;
  __first1653 = v1649;
  __last1654 = v1650;
  __value1655 = v1651;
  agg_tmp01656 = __first1653; // copy
  agg_tmp11657 = __last1654; // copy
  int* t1658 = __value1655;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1659 = agg_tmp01656;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1660 = agg_tmp11657;
  void_std____fill_a___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(t1659, t1660, t1658);
  return;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v1661, int* v1662) {
bb1663:
  int* __location1664;
  int* __args1665;
  int* __retval1666;
  void* __loc1667;
  __location1664 = v1661;
  __args1665 = v1662;
  int* t1668 = __location1664;
  void* cast1669 = (void*)t1668;
  __loc1667 = cast1669;
    void* t1670 = __loc1667;
    int* cast1671 = (int*)t1670;
    int* t1672 = __args1665;
    int t1673 = *t1672;
    *cast1671 = t1673;
    __retval1666 = cast1671;
    int* t1674 = __retval1666;
    return t1674;
  abort();
}

// function: _ZSt10_ConstructIiJRKiEEvPT_DpOT0_
void void_std___Construct_int__int_const__(int* v1675, int* v1676) {
bb1677:
  int* __p1678;
  int* __args1679;
  __p1678 = v1675;
  __args1679 = v1676;
    _Bool r1680 = std____is_constant_evaluated();
    if (r1680) {
      int* t1681 = __p1678;
      int* t1682 = __args1679;
      int* r1683 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1681, t1682);
      return;
    }
  int* t1684 = __p1678;
  void* cast1685 = (void*)t1684;
  int* cast1686 = (int*)cast1685;
  int* t1687 = __args1679;
  int t1688 = *t1687;
  *cast1686 = t1688;
  return;
}

// function: _ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_
int* int__std____do_uninit_fill_n_int___unsigned_long__int_(int* v1689, unsigned long v1690, int* v1691) {
bb1692:
  int* __first1693;
  unsigned long __n1694;
  int* __x1695;
  int* __retval1696;
  struct std___UninitDestroyGuard_int____void_ __guard1697;
  __first1693 = v1689;
  __n1694 = v1690;
  __x1695 = v1691;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard1697, &__first1693);
        do {
              unsigned long t1698 = __n1694;
              unsigned long c1699 = 0;
              _Bool c1700 = ((t1698 >= c1699)) ? 1 : 0;
              _Bool u1701 = !c1700;
              if (u1701) {
                char* cast1702 = (char*)&(_str_8);
                int c1703 = 463;
                char* cast1704 = (char*)&(__PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_);
                char* cast1705 = (char*)&(_str_9);
                std____glibcxx_assert_fail(cast1702, c1703, cast1704, cast1705);
              }
          _Bool c1706 = 0;
          if (!c1706) break;
        } while (1);
      while (1) {
        unsigned long t1708 = __n1694;
        unsigned long u1709 = t1708 - 1;
        __n1694 = u1709;
        _Bool cast1710 = (_Bool)t1708;
        if (!cast1710) break;
        int* t1711 = __first1693;
        int* t1712 = __x1695;
        void_std___Construct_int__int_const__(t1711, t1712);
      for_step1707: ;
        int* t1713 = __first1693;
        int c1714 = 1;
        int* ptr1715 = &(t1713)[c1714];
        __first1693 = ptr1715;
      }
    std___UninitDestroyGuard_int___void___release(&__guard1697);
    int* t1716 = __first1693;
    __retval1696 = t1716;
    int* t1717 = __retval1696;
    int* ret_val1718 = t1717;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1697);
    }
    return ret_val1718;
  abort();
}

// function: _ZSt20uninitialized_fill_nIPimiET_S1_T0_RKT1_
int* int__std__uninitialized_fill_n_int___unsigned_long__int_(int* v1719, unsigned long v1720, int* v1721) {
bb1722:
  int* __first1723;
  unsigned long __n1724;
  int* __x1725;
  int* __retval1726;
  __first1723 = v1719;
  __n1724 = v1720;
  __x1725 = v1721;
  int* t1727 = __first1723;
  unsigned long t1728 = __n1724;
  int* t1729 = __x1725;
  int* r1730 = int__std____do_uninit_fill_n_int___unsigned_long__int_(t1727, t1728, t1729);
  __retval1726 = r1730;
  int* t1731 = __retval1726;
  return t1731;
}

// function: _ZSt24__uninitialized_fill_n_aIPimiiET_S1_T0_RKT1_RSaIT2_E
int* int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(int* v1732, unsigned long v1733, int* v1734, struct std__allocator_int_* v1735) {
bb1736:
  int* __first1737;
  unsigned long __n1738;
  int* __x1739;
  struct std__allocator_int_* unnamed1740;
  int* __retval1741;
  __first1737 = v1732;
  __n1738 = v1733;
  __x1739 = v1734;
  unnamed1740 = v1735;
    _Bool r1742 = std__is_constant_evaluated();
    if (r1742) {
      int* t1743 = __first1737;
      unsigned long t1744 = __n1738;
      int* t1745 = __x1739;
      int* r1746 = int__std____do_uninit_fill_n_int___unsigned_long__int_(t1743, t1744, t1745);
      __retval1741 = r1746;
      int* t1747 = __retval1741;
      return t1747;
    }
  int* t1748 = __first1737;
  unsigned long t1749 = __n1738;
  int* t1750 = __x1739;
  int* r1751 = int__std__uninitialized_fill_n_int___unsigned_long__int_(t1748, t1749, t1750);
  __retval1741 = r1751;
  int* t1752 = __retval1741;
  return t1752;
}

// function: _ZSt8__fill_aIPiiEvT_S1_RKT0_
void void_std____fill_a_int___int_(int* v1753, int* v1754, int* v1755) {
bb1756:
  int* __first1757;
  int* __last1758;
  int* __value1759;
  __first1757 = v1753;
  __last1758 = v1754;
  __value1759 = v1755;
  int* t1760 = __first1757;
  int* t1761 = __last1758;
  int* t1762 = __value1759;
  void_std____fill_a1_int___int_(t1760, t1761, t1762);
  return;
}

// function: _ZSt10__fill_n_aIPimiET_S1_T0_RKT1_St26random_access_iterator_tag
int* int__std____fill_n_a_int___unsigned_long__int_(int* v1763, unsigned long v1764, int* v1765, struct std__random_access_iterator_tag v1766) {
bb1767:
  int* __first1768;
  unsigned long __n1769;
  int* __value1770;
  struct std__random_access_iterator_tag unnamed1771;
  int* __retval1772;
  __first1768 = v1763;
  __n1769 = v1764;
  __value1770 = v1765;
  unnamed1771 = v1766;
    unsigned long t1773 = __n1769;
    unsigned long c1774 = 0;
    _Bool c1775 = ((t1773 <= c1774)) ? 1 : 0;
    if (c1775) {
      int* t1776 = __first1768;
      __retval1772 = t1776;
      int* t1777 = __retval1772;
      return t1777;
    }
  int* t1778 = __first1768;
  int* t1779 = __first1768;
  unsigned long t1780 = __n1769;
  int* ptr1781 = &(t1779)[t1780];
  int* t1782 = __value1770;
  void_std____fill_a_int___int_(t1778, ptr1781, t1782);
  int* t1783 = __first1768;
  unsigned long t1784 = __n1769;
  int* ptr1785 = &(t1783)[t1784];
  __retval1772 = ptr1785;
  int* t1786 = __retval1772;
  return t1786;
}

// function: _ZSt17__size_to_integerm
unsigned long std____size_to_integer(unsigned long v1787) {
bb1788:
  unsigned long __n1789;
  unsigned long __retval1790;
  __n1789 = v1787;
  unsigned long t1791 = __n1789;
  __retval1790 = t1791;
  unsigned long t1792 = __retval1790;
  return t1792;
}

// function: _ZSt6fill_nIPimiET_S1_T0_RKT1_
int* int__std__fill_n_int___unsigned_long__int_(int* v1793, unsigned long v1794, int* v1795) {
bb1796:
  int* __first1797;
  unsigned long __n1798;
  int* __value1799;
  int* __retval1800;
  struct std__random_access_iterator_tag agg_tmp01801;
  __first1797 = v1793;
  __n1798 = v1794;
  __value1799 = v1795;
  int* t1802 = __first1797;
  unsigned long t1803 = __n1798;
  unsigned long r1804 = std____size_to_integer(t1803);
  int* t1805 = __value1799;
  struct std__random_access_iterator_tag r1806 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first1797);
  agg_tmp01801 = r1806;
  struct std__random_access_iterator_tag t1807 = agg_tmp01801;
  int* r1808 = int__std____fill_n_a_int___unsigned_long__int_(t1802, r1804, t1805, t1807);
  __retval1800 = r1808;
  int* t1809 = __retval1800;
  return t1809;
}

// function: _ZNSt6vectorIiSaIiEE14_M_fill_assignEmRKi
void std__vector_int__std__allocator_int______M_fill_assign(struct std__vector_int__std__allocator_int__* v1810, unsigned long v1811, int* v1812) {
bb1813:
  struct std__vector_int__std__allocator_int__* this1814;
  unsigned long __n1815;
  int* __val1816;
  unsigned long __sz1817;
  this1814 = v1810;
  __n1815 = v1811;
  __val1816 = v1812;
  struct std__vector_int__std__allocator_int__* t1818 = this1814;
  unsigned long r1819 = std__vector_int__std__allocator_int_____size___const(t1818);
  __sz1817 = r1819;
    unsigned long t1820 = __n1815;
    unsigned long r1821 = std__vector_int__std__allocator_int_____capacity___const(t1818);
    _Bool c1822 = ((t1820 > r1821)) ? 1 : 0;
    if (c1822) {
      struct std__vector_int__std__allocator_int__ __tmp1823;
        unsigned long t1824 = __n1815;
        unsigned long t1825 = __sz1817;
        _Bool c1826 = ((t1824 <= t1825)) ? 1 : 0;
        if (c1826) {
          __builtin_unreachable();
        }
      unsigned long t1827 = __n1815;
      int* t1828 = __val1816;
      struct std___Vector_base_int__std__allocator_int__* base1829 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1818 + 0);
      struct std__allocator_int_* r1830 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1829);
      std__vector_int__std__allocator_int_____vector(&__tmp1823, t1827, t1828, r1830);
        struct std___Vector_base_int__std__allocator_int__* base1831 = (struct std___Vector_base_int__std__allocator_int__*)((char *)&(__tmp1823) + 0);
        struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1832 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1831->_M_impl) + 0);
        struct std___Vector_base_int__std__allocator_int__* base1833 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1818 + 0);
        struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1834 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1833->_M_impl) + 0);
        std___Vector_base_int__std__allocator_int______Vector_impl_data___M_swap_data(base1832, base1834);
      {
        std__vector_int__std__allocator_int______vector(&__tmp1823);
      }
    } else {
        unsigned long t1835 = __n1815;
        unsigned long t1836 = __sz1817;
        _Bool c1837 = ((t1835 > t1836)) ? 1 : 0;
        if (c1837) {
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01838;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11839;
          unsigned long __add1840;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1841 = std__vector_int__std__allocator_int_____begin(t1818);
          agg_tmp01838 = r1841;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1842 = std__vector_int__std__allocator_int_____end(t1818);
          agg_tmp11839 = r1842;
          int* t1843 = __val1816;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1844 = agg_tmp01838;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1845 = agg_tmp11839;
          void_std__fill___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(t1844, t1845, t1843);
          unsigned long t1846 = __n1815;
          unsigned long t1847 = __sz1817;
          unsigned long b1848 = t1846 - t1847;
          __add1840 = b1848;
          struct std___Vector_base_int__std__allocator_int__* base1849 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1818 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1850 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1849->_M_impl) + 0);
          int* t1851 = base1850->_M_finish;
          unsigned long t1852 = __add1840;
          int* t1853 = __val1816;
          struct std___Vector_base_int__std__allocator_int__* base1854 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1818 + 0);
          struct std__allocator_int_* r1855 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1854);
          int* r1856 = int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(t1851, t1852, t1853, r1855);
          struct std___Vector_base_int__std__allocator_int__* base1857 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1818 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1858 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1857->_M_impl) + 0);
          base1858->_M_finish = r1856;
        } else {
          struct std___Vector_base_int__std__allocator_int__* base1859 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1818 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1860 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1859->_M_impl) + 0);
          int* t1861 = base1860->_M_start;
          unsigned long t1862 = __n1815;
          int* t1863 = __val1816;
          int* r1864 = int__std__fill_n_int___unsigned_long__int_(t1861, t1862, t1863);
          std__vector_int__std__allocator_int______M_erase_at_end(t1818, r1864);
        }
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE6assignEmRKi
void std__vector_int__std__allocator_int_____assign(struct std__vector_int__std__allocator_int__* v1865, unsigned long v1866, int* v1867) {
bb1868:
  struct std__vector_int__std__allocator_int__* this1869;
  unsigned long __n1870;
  int* __val1871;
  this1869 = v1865;
  __n1870 = v1866;
  __val1871 = v1867;
  struct std__vector_int__std__allocator_int__* t1872 = this1869;
  unsigned long t1873 = __n1870;
  int* t1874 = __val1871;
  std__vector_int__std__allocator_int______M_fill_assign(t1872, t1873, t1874);
  return;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v1875) {
bb1876:
  struct std__vector_int__std__allocator_int__* this1877;
  this1877 = v1875;
  struct std__vector_int__std__allocator_int__* t1878 = this1877;
    struct std___Vector_base_int__std__allocator_int__* base1879 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1878 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1880 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1879->_M_impl) + 0);
    int* t1881 = base1880->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base1882 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1878 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1883 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1882->_M_impl) + 0);
    int* t1884 = base1883->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base1885 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1878 + 0);
    struct std__allocator_int_* r1886 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1885);
    void_std___Destroy_int___int_(t1881, t1884, r1886);
  {
    struct std___Vector_base_int__std__allocator_int__* base1887 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1878 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base1887);
  }
  return;
}

// function: main
int main() {
bb1888:
  int __retval1889;
  struct std__vector_int__std__allocator_int__ v11890;
  struct std__vector_int__std__allocator_int__ v21891;
  struct std__vector_int__std__allocator_int__ v31892;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ iter1893;
  int ref_tmp01894;
  int ref_tmp11895;
  int ref_tmp21896;
  int ref_tmp31897;
  int ref_tmp41898;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp11899;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp21900;
  int ref_tmp91901;
  int c1902 = 0;
  __retval1889 = c1902;
  std__vector_int__std__allocator_int_____vector_2(&v11890);
    std__vector_int__std__allocator_int_____vector_2(&v21891);
      std__vector_int__std__allocator_int_____vector_2(&v31892);
        __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&iter1893);
        int c1903 = 10;
        ref_tmp01894 = c1903;
        std__vector_int__std__allocator_int_____push_back(&v11890, &ref_tmp01894);
        int c1904 = 20;
        ref_tmp11895 = c1904;
        std__vector_int__std__allocator_int_____push_back(&v11890, &ref_tmp11895);
        int c1905 = 30;
        ref_tmp21896 = c1905;
        std__vector_int__std__allocator_int_____push_back(&v11890, &ref_tmp21896);
        int c1906 = 40;
        ref_tmp31897 = c1906;
        std__vector_int__std__allocator_int_____push_back(&v11890, &ref_tmp31897);
        int c1907 = 50;
        ref_tmp41898 = c1907;
        std__vector_int__std__allocator_int_____push_back(&v11890, &ref_tmp41898);
        char* cast1908 = (char*)&(_str);
        struct std__basic_ostream_char__std__char_traits_char__* r1909 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1908);
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp51910;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp61911;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp01912;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1913 = std__vector_int__std__allocator_int_____begin(&v11890);
          ref_tmp51910 = r1913;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1914 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&iter1893, &ref_tmp51910);
          while (1) {
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1916 = std__vector_int__std__allocator_int_____end(&v11890);
            ref_tmp61911 = r1916;
            _Bool r1917 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&iter1893, &ref_tmp61911);
            _Bool u1918 = !r1917;
            if (!u1918) break;
            int* r1919 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&iter1893);
            int t1920 = *r1919;
            struct std__basic_ostream_char__std__char_traits_char__* r1921 = std__ostream__operator__(&_ZSt4cout, t1920);
            char* cast1922 = (char*)&(_str_1);
            struct std__basic_ostream_char__std__char_traits_char__* r1923 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1921, cast1922);
          for_step1915: ;
            int c1924 = 0;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1925 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___3(&iter1893, c1924);
            agg_tmp01912 = r1925;
          }
        struct std__basic_ostream_char__std__char_traits_char__* r1926 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1927 = std__vector_int__std__allocator_int_____begin(&v11890);
        agg_tmp11899 = r1927;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1928 = std__vector_int__std__allocator_int_____end(&v11890);
        agg_tmp21900 = r1928;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1929 = agg_tmp11899;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t1930 = agg_tmp21900;
        void_std__vector_int__std__allocator_int_____assign___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______void_(&v21891, t1929, t1930);
        char* cast1931 = (char*)&(_str_2);
        struct std__basic_ostream_char__std__char_traits_char__* r1932 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1931);
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp71933;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp81934;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp31935;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1936 = std__vector_int__std__allocator_int_____begin(&v21891);
          ref_tmp71933 = r1936;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1937 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&iter1893, &ref_tmp71933);
          while (1) {
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1939 = std__vector_int__std__allocator_int_____end(&v21891);
            ref_tmp81934 = r1939;
            _Bool r1940 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&iter1893, &ref_tmp81934);
            _Bool u1941 = !r1940;
            if (!u1941) break;
            int* r1942 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&iter1893);
            int t1943 = *r1942;
            struct std__basic_ostream_char__std__char_traits_char__* r1944 = std__ostream__operator__(&_ZSt4cout, t1943);
            char* cast1945 = (char*)&(_str_1);
            struct std__basic_ostream_char__std__char_traits_char__* r1946 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1944, cast1945);
          for_step1938: ;
            int c1947 = 0;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1948 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___3(&iter1893, c1947);
            agg_tmp31935 = r1948;
          }
        struct std__basic_ostream_char__std__char_traits_char__* r1949 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
        unsigned long c1950 = 7;
        int c1951 = 4;
        ref_tmp91901 = c1951;
        std__vector_int__std__allocator_int_____assign(&v31892, c1950, &ref_tmp91901);
        char* cast1952 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* r1953 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1952);
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp101954;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp111955;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp41956;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1957 = std__vector_int__std__allocator_int_____begin(&v31892);
          ref_tmp101954 = r1957;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r1958 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&iter1893, &ref_tmp101954);
          while (1) {
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1960 = std__vector_int__std__allocator_int_____end(&v31892);
            ref_tmp111955 = r1960;
            _Bool r1961 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&iter1893, &ref_tmp111955);
            _Bool u1962 = !r1961;
            if (!u1962) break;
            int* r1963 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&iter1893);
            int t1964 = *r1963;
            struct std__basic_ostream_char__std__char_traits_char__* r1965 = std__ostream__operator__(&_ZSt4cout, t1964);
            char* cast1966 = (char*)&(_str_1);
            struct std__basic_ostream_char__std__char_traits_char__* r1967 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1965, cast1966);
          for_step1959: ;
            int c1968 = 0;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r1969 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator___3(&iter1893, c1968);
            agg_tmp41956 = r1969;
          }
        struct std__basic_ostream_char__std__char_traits_char__* r1970 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      {
        std__vector_int__std__allocator_int______vector(&v31892);
      }
    {
      std__vector_int__std__allocator_int______vector(&v21891);
    }
  {
    std__vector_int__std__allocator_int______vector(&v11890);
  }
  int t1971 = __retval1889;
  return t1971;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1972) {
bb1973:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1974;
  this1974 = v1972;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1975 = this1974;
  struct std__allocator_int_* base1976 = (struct std__allocator_int_*)((char *)t1975 + 0);
  std__allocator_int___allocator_2(base1976);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1977 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t1975 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base1977);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1978) {
bb1979:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1980;
  this1980 = v1978;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1981 = this1980;
  {
    struct std__allocator_int_* base1982 = (struct std__allocator_int_*)((char *)t1981 + 0);
    std__allocator_int____allocator(base1982);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2Ev
void std___Vector_base_int__std__allocator_int______Vector_base_2(struct std___Vector_base_int__std__allocator_int__* v1983) {
bb1984:
  struct std___Vector_base_int__std__allocator_int__* this1985;
  this1985 = v1983;
  struct std___Vector_base_int__std__allocator_int__* t1986 = this1985;
  _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(&t1986->_M_impl);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1987:
  _Bool __retval1988;
    _Bool c1989 = 0;
    __retval1988 = c1989;
    _Bool t1990 = __retval1988;
    return t1990;
  abort();
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1991, int* v1992, unsigned long v1993) {
bb1994:
  struct std____new_allocator_int_* this1995;
  int* __p1996;
  unsigned long __n1997;
  this1995 = v1991;
  __p1996 = v1992;
  __n1997 = v1993;
  struct std____new_allocator_int_* t1998 = this1995;
    unsigned long c1999 = 4;
    unsigned long c2000 = 16;
    _Bool c2001 = ((c1999 > c2000)) ? 1 : 0;
    if (c2001) {
      int* t2002 = __p1996;
      void* cast2003 = (void*)t2002;
      unsigned long t2004 = __n1997;
      unsigned long c2005 = 4;
      unsigned long b2006 = t2004 * c2005;
      unsigned long c2007 = 4;
      operator_delete_3(cast2003, b2006, c2007);
      return;
    }
  int* t2008 = __p1996;
  void* cast2009 = (void*)t2008;
  unsigned long t2010 = __n1997;
  unsigned long c2011 = 4;
  unsigned long b2012 = t2010 * c2011;
  operator_delete_2(cast2009, b2012);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v2013, int* v2014, unsigned long v2015) {
bb2016:
  struct std__allocator_int_* this2017;
  int* __p2018;
  unsigned long __n2019;
  this2017 = v2013;
  __p2018 = v2014;
  __n2019 = v2015;
  struct std__allocator_int_* t2020 = this2017;
    _Bool r2021 = std____is_constant_evaluated();
    if (r2021) {
      int* t2022 = __p2018;
      void* cast2023 = (void*)t2022;
      operator_delete(cast2023);
      return;
    }
  struct std____new_allocator_int_* base2024 = (struct std____new_allocator_int_*)((char *)t2020 + 0);
  int* t2025 = __p2018;
  unsigned long t2026 = __n2019;
  std____new_allocator_int___deallocate(base2024, t2025, t2026);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v2027, int* v2028, unsigned long v2029) {
bb2030:
  struct std__allocator_int_* __a2031;
  int* __p2032;
  unsigned long __n2033;
  __a2031 = v2027;
  __p2032 = v2028;
  __n2033 = v2029;
  struct std__allocator_int_* t2034 = __a2031;
  int* t2035 = __p2032;
  unsigned long t2036 = __n2033;
  std__allocator_int___deallocate(t2034, t2035, t2036);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v2037, int* v2038, unsigned long v2039) {
bb2040:
  struct std___Vector_base_int__std__allocator_int__* this2041;
  int* __p2042;
  unsigned long __n2043;
  this2041 = v2037;
  __p2042 = v2038;
  __n2043 = v2039;
  struct std___Vector_base_int__std__allocator_int__* t2044 = this2041;
    int* t2045 = __p2042;
    _Bool cast2046 = (_Bool)t2045;
    if (cast2046) {
      struct std__allocator_int_* base2047 = (struct std__allocator_int_*)((char *)&(t2044->_M_impl) + 0);
      int* t2048 = __p2042;
      unsigned long t2049 = __n2043;
      std__allocator_traits_std__allocator_int_____deallocate(base2047, t2048, t2049);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v2050) {
bb2051:
  struct std___Vector_base_int__std__allocator_int__* this2052;
  this2052 = v2050;
  struct std___Vector_base_int__std__allocator_int__* t2053 = this2052;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2054 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t2053->_M_impl) + 0);
    int* t2055 = base2054->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2056 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t2053->_M_impl) + 0);
    int* t2057 = base2056->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2058 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t2053->_M_impl) + 0);
    int* t2059 = base2058->_M_start;
    long diff2060 = t2057 - t2059;
    unsigned long cast2061 = (unsigned long)diff2060;
    std___Vector_base_int__std__allocator_int______M_deallocate(t2053, t2055, cast2061);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t2053->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v2062) {
bb2063:
  struct std____new_allocator_int_* this2064;
  this2064 = v2062;
  struct std____new_allocator_int_* t2065 = this2064;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator_2(struct std__allocator_int_* v2066) {
bb2067:
  struct std__allocator_int_* this2068;
  this2068 = v2066;
  struct std__allocator_int_* t2069 = this2068;
  struct std____new_allocator_int_* base2070 = (struct std____new_allocator_int_*)((char *)t2069 + 0);
  std____new_allocator_int_____new_allocator_2(base2070);
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v2071, struct std____new_allocator_int_* v2072) {
bb2073:
  struct std____new_allocator_int_* this2074;
  struct std____new_allocator_int_* unnamed2075;
  this2074 = v2071;
  unnamed2075 = v2072;
  struct std____new_allocator_int_* t2076 = this2074;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v2077, struct std__allocator_int_* v2078) {
bb2079:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this2080;
  struct std__allocator_int_* __a2081;
  this2080 = v2077;
  __a2081 = v2078;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t2082 = this2080;
  struct std__allocator_int_* base2083 = (struct std__allocator_int_*)((char *)t2082 + 0);
  struct std__allocator_int_* t2084 = __a2081;
  std__allocator_int___allocator(base2083, t2084);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2085 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t2082 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base2085);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* v2086, unsigned long v2087) {
bb2088:
  struct std___Vector_base_int__std__allocator_int__* this2089;
  unsigned long __n2090;
  this2089 = v2086;
  __n2090 = v2087;
  struct std___Vector_base_int__std__allocator_int__* t2091 = this2089;
  unsigned long t2092 = __n2090;
  int* r2093 = std___Vector_base_int__std__allocator_int______M_allocate(t2091, t2092);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2094 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t2091->_M_impl) + 0);
  base2094->_M_start = r2093;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2095 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t2091->_M_impl) + 0);
  int* t2096 = base2095->_M_start;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2097 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t2091->_M_impl) + 0);
  base2097->_M_finish = t2096;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2098 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t2091->_M_impl) + 0);
  int* t2099 = base2098->_M_start;
  unsigned long t2100 = __n2090;
  int* ptr2101 = &(t2099)[t2100];
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2102 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t2091->_M_impl) + 0);
  base2102->_M_end_of_storage = ptr2101;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v2103, unsigned long v2104, struct std__allocator_int_* v2105) {
bb2106:
  struct std___Vector_base_int__std__allocator_int__* this2107;
  unsigned long __n2108;
  struct std__allocator_int_* __a2109;
  this2107 = v2103;
  __n2108 = v2104;
  __a2109 = v2105;
  struct std___Vector_base_int__std__allocator_int__* t2110 = this2107;
  struct std__allocator_int_* t2111 = __a2109;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t2110->_M_impl, t2111);
    unsigned long t2112 = __n2108;
    std___Vector_base_int__std__allocator_int______M_create_storage(t2110, t2112);
  return;
}

// function: _ZNSt6vectorIiSaIiEE18_M_fill_initializeEmRKi
void std__vector_int__std__allocator_int______M_fill_initialize(struct std__vector_int__std__allocator_int__* v2113, unsigned long v2114, int* v2115) {
bb2116:
  struct std__vector_int__std__allocator_int__* this2117;
  unsigned long __n2118;
  int* __value2119;
  this2117 = v2113;
  __n2118 = v2114;
  __value2119 = v2115;
  struct std__vector_int__std__allocator_int__* t2120 = this2117;
  struct std___Vector_base_int__std__allocator_int__* base2121 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2120 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2122 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base2121->_M_impl) + 0);
  int* t2123 = base2122->_M_start;
  unsigned long t2124 = __n2118;
  int* t2125 = __value2119;
  struct std___Vector_base_int__std__allocator_int__* base2126 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2120 + 0);
  struct std__allocator_int_* r2127 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base2126);
  int* r2128 = int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(t2123, t2124, t2125, r2127);
  struct std___Vector_base_int__std__allocator_int__* base2129 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t2120 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base2130 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base2129->_M_impl) + 0);
  base2130->_M_finish = r2128;
  return;
}

