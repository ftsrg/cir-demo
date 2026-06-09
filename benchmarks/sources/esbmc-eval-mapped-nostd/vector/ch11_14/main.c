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
// Exception handling state (modelled in plain C)
static void *__cir_exc_ptr;
static const void *__cir_exc_type;
static unsigned long __cir_exc_type_id;
static int __cir_exc_active;
static void *__cir_exc_dtor;

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
struct std____detail____move_iter_cat_int___ { unsigned char __field0; };
struct std____new_allocator_int_ { unsigned char __field0; };
struct std__allocator_int_ { unsigned char __field0; };
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__move_iterator_int___ { int* _M_current; };
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__ranges____imove___IterMove { unsigned char __field0; };
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
char _str[19] = "myvector contains:";
char _str_1[2] = " ";
char _str_2[26] = "vector::_M_realloc_append";
char _str_3[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv[77] = "reference std::vector<int>::back() [_Tp = int, _Alloc = std::allocator<int>]";
char _str_4[15] = "!this->empty()";
char _str_5[26] = "vector::_M_default_append";
char _str_6[23] = "vector::_M_fill_append";
char _str_7[98] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_uninitialized.h";
char __PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_[140] = "_ForwardIterator std::__do_uninit_fill_n(_ForwardIterator, _Size _Tp &) [_ForwardIterator = int *, _Size = unsigned long, _Tp = int]";
char _str_8[9] = "__n >= 0";
struct std__ranges____imove___IterMove _ZNSt6ranges4_Cpo9iter_moveE;
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_9[19] = "__n < this->size()";
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0);
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* p0, int* p1);
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* p0, int* p1, int* p2);
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* p0);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* p0);
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* p0);
extern void std____throw_length_error(char* p0);
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, char* p2);
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
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
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, long p1);
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
int* std__vector_int__std__allocator_int_____back(struct std__vector_int__std__allocator_int__* p0);
int* int__std__vector_int__std__allocator_int_____emplace_back_int_(struct std__vector_int__std__allocator_int__* p0, int* p1);
void std__vector_int__std__allocator_int_____push_back(struct std__vector_int__std__allocator_int__* p0, int* p1);
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* p0, int** p1);
int* _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* p0);
void void_std___Construct_int_(int* p0);
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* p0);
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* p0);
int* int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(int* p0, unsigned long p1);
void void_std____fill_a1_int___int_(int* p0, int* p1, int* p2);
void void_std____fill_a_int___int_(int* p0, int* p1, int* p2);
int* int__std____fill_n_a_int___unsigned_long__int_(int* p0, unsigned long p1, int* p2, struct std__random_access_iterator_tag p3);
unsigned long std____size_to_integer(unsigned long p0);
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** p0);
int* int__std__fill_n_int___unsigned_long__int_(int* p0, unsigned long p1, int* p2);
int* int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(int* p0, unsigned long p1);
int* int__std____uninitialized_default_n_int___unsigned_long_(int* p0, unsigned long p1);
int* int__std____uninitialized_default_n_a_int___unsigned_long__int_(int* p0, unsigned long p1, struct std__allocator_int_* p2);
void std__vector_int__std__allocator_int______M_default_append(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);
void std__vector_int__std__allocator_int______M_erase_at_end(struct std__vector_int__std__allocator_int__* p0, int* p1);
void std__vector_int__std__allocator_int_____resize(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* p0, int* p1);
void void_std___Construct_int__int_const__(int* p0, int* p1);
int* int__std____do_uninit_fill_n_int___unsigned_long__int_(int* p0, unsigned long p1, int* p2);
int* int__std__uninitialized_fill_n_int___unsigned_long__int_(int* p0, unsigned long p1, int* p2);
int* int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(int* p0, unsigned long p1, int* p2, struct std__allocator_int_* p3);
extern int __gxx_personality_v0();
int** std__move_iterator_int____base___const__(struct std__move_iterator_int___* p0);
_Bool bool_std__operator___int__(struct std__move_iterator_int___* p0, struct std__move_iterator_int___* p1);
void void_std___Construct_int__int_(int* p0, int* p1);
int* _ZNKSt6ranges7__imove9_IterMoveclIRKPiQoo11__adl_imoveIT_ErqTDTdeclsr3stdE7declvalIS6_EEEEEENS1_8__resultIS6_E4typeEOS6_(struct std__ranges____imove___IterMove* p0, int** p1);
int* std__move_iterator_int____operator____const(struct std__move_iterator_int___* p0);
struct std__move_iterator_int___* std__move_iterator_int____operator__(struct std__move_iterator_int___* p0);
int* int__std____do_uninit_copy_std__move_iterator_int____std__move_iterator_int____int__(struct std__move_iterator_int___ p0, struct std__move_iterator_int___ p1, int* p2);
int* int__std__uninitialized_copy_std__move_iterator_int____int__(struct std__move_iterator_int___ p0, struct std__move_iterator_int___ p1, int* p2);
int* int__std____uninitialized_copy_a_std__move_iterator_int____std__move_iterator_int____int___int_(struct std__move_iterator_int___ p0, struct std__move_iterator_int___ p1, int* p2, struct std__allocator_int_* p3);
void std__move_iterator_int____move_iterator(struct std__move_iterator_int___* p0, int* p1);
struct std__move_iterator_int___ std__move_iterator_int___std____make_move_if_noexcept_iterator_int__std__move_iterator_int____(int* p0);
int* int__std____uninitialized_move_if_noexcept_a_int___int___std__allocator_int___(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
void std__vector_int__std__allocator_int______M_fill_append(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, int* p2);
void std__vector_int__std__allocator_int_____resize_2(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, int* p2);
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
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
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
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0);
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* p0);
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* p0);
_Bool std____is_constant_evaluated();
void operator_delete(void* p0) { free(p0); }
void operator_delete_3(void* p0, unsigned long p1, unsigned long p2) { free(p0); }
void operator_delete_2(void* p0, unsigned long p1) { free(p0); }
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_int___deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* p0, int* p1, unsigned long p2);
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* p0, int* p1, unsigned long p2);
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* p0);
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* p0);
void std__allocator_int___allocator(struct std__allocator_int_* p0);
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* p0);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void void_std___Destroy_int__(int* p0, int* p1);

// function: _ZNSt6vectorIiSaIiEEC2Ev
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* v0) {
bb1:
  struct std__vector_int__std__allocator_int__* this2;
  this2 = v0;
  struct std__vector_int__std__allocator_int__* t3 = this2;
  struct std___Vector_base_int__std__allocator_int__* base4 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t3 + 0);
  std___Vector_base_int__std__allocator_int______Vector_base(base4);
  return;
}

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v5, int* v6) {
bb7:
  int* __location8;
  int* __args9;
  int* __retval10;
  void* __loc11;
  __location8 = v5;
  __args9 = v6;
  int* t12 = __location8;
  void* cast13 = (void*)t12;
  __loc11 = cast13;
    void* t14 = __loc11;
    int* cast15 = (int*)t14;
    int* t16 = __args9;
    int t17 = *t16;
    *cast15 = t17;
    __retval10 = cast15;
    int* t18 = __retval10;
    return t18;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* v19, int* v20, int* v21) {
bb22:
  struct std__allocator_int_* __a23;
  int* __p24;
  int* __args25;
  __a23 = v19;
  __p24 = v20;
  __args25 = v21;
  int* t26 = __p24;
  int* t27 = __args25;
  int* r28 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t26, t27);
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

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v44) {
bb45:
  struct std__allocator_int_* __a46;
  unsigned long __retval47;
  unsigned long __diffmax48;
  unsigned long __allocmax49;
  __a46 = v44;
  unsigned long c50 = 2305843009213693951;
  __diffmax48 = c50;
  unsigned long c51 = 4611686018427387903;
  __allocmax49 = c51;
  unsigned long* r52 = unsigned_long_const__std__min_unsigned_long_(&__diffmax48, &__allocmax49);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long t53 = *r52;
  __retval47 = t53;
  unsigned long t54 = __retval47;
  return t54;
}

// function: _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* v55) {
bb56:
  struct std___Vector_base_int__std__allocator_int__* this57;
  struct std__allocator_int_* __retval58;
  this57 = v55;
  struct std___Vector_base_int__std__allocator_int__* t59 = this57;
  struct std__allocator_int_* base60 = (struct std__allocator_int_*)((char *)&(t59->_M_impl) + 0);
  __retval58 = base60;
  struct std__allocator_int_* t61 = __retval58;
  return t61;
}

// function: _ZNKSt6vectorIiSaIiEE8max_sizeEv
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* v62) {
bb63:
  struct std__vector_int__std__allocator_int__* this64;
  unsigned long __retval65;
  this64 = v62;
  struct std__vector_int__std__allocator_int__* t66 = this64;
  struct std___Vector_base_int__std__allocator_int__* base67 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t66 + 0);
  struct std__allocator_int_* r68 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(base67);
  unsigned long r69 = std__vector_int__std__allocator_int______S_max_size(r68);
  __retval65 = r69;
  unsigned long t70 = __retval65;
  return t70;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v71, unsigned long* v72) {
bb73:
  unsigned long* __a74;
  unsigned long* __b75;
  unsigned long* __retval76;
  __a74 = v71;
  __b75 = v72;
    unsigned long* t77 = __a74;
    unsigned long t78 = *t77;
    unsigned long* t79 = __b75;
    unsigned long t80 = *t79;
    _Bool c81 = ((t78 < t80)) ? 1 : 0;
    if (c81) {
      unsigned long* t82 = __b75;
      __retval76 = t82;
      unsigned long* t83 = __retval76;
      return t83;
    }
  unsigned long* t84 = __a74;
  __retval76 = t84;
  unsigned long* t85 = __retval76;
  return t85;
}

// function: _ZNKSt6vectorIiSaIiEE12_M_check_lenEmPKc
unsigned long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std__vector_int__std__allocator_int__* v86, unsigned long v87, char* v88) {
bb89:
  struct std__vector_int__std__allocator_int__* this90;
  unsigned long __n91;
  char* __s92;
  unsigned long __retval93;
  unsigned long __len94;
  unsigned long ref_tmp095;
  this90 = v86;
  __n91 = v87;
  __s92 = v88;
  struct std__vector_int__std__allocator_int__* t96 = this90;
    unsigned long r97 = std__vector_int__std__allocator_int_____max_size___const(t96);
    unsigned long r98 = std__vector_int__std__allocator_int_____size___const(t96);
    unsigned long b99 = r97 - r98;
    unsigned long t100 = __n91;
    _Bool c101 = ((b99 < t100)) ? 1 : 0;
    if (c101) {
      char* t102 = __s92;
      std____throw_length_error(t102);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
    }
  unsigned long r103 = std__vector_int__std__allocator_int_____size___const(t96);
  unsigned long r104 = std__vector_int__std__allocator_int_____size___const(t96);
  ref_tmp095 = r104;
  unsigned long* r105 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp095, &__n91);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long t106 = *r105;
  unsigned long b107 = r103 + t106;
  __len94 = b107;
  unsigned long t108 = __len94;
  unsigned long r109 = std__vector_int__std__allocator_int_____size___const(t96);
  _Bool c110 = ((t108 < r109)) ? 1 : 0;
  _Bool ternary111;
  if (c110) {
    _Bool c112 = 1;
    ternary111 = (_Bool)c112;
  } else {
    unsigned long t113 = __len94;
    unsigned long r114 = std__vector_int__std__allocator_int_____max_size___const(t96);
    _Bool c115 = ((t113 > r114)) ? 1 : 0;
    ternary111 = (_Bool)c115;
  }
  unsigned long ternary116;
  if (ternary111) {
    unsigned long r117 = std__vector_int__std__allocator_int_____max_size___const(t96);
    ternary116 = (unsigned long)r117;
  } else {
    unsigned long t118 = __len94;
    ternary116 = (unsigned long)t118;
  }
  __retval93 = ternary116;
  unsigned long t119 = __retval93;
  return t119;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v120) {
bb121:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this122;
  int** __retval123;
  this122 = v120;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t124 = this122;
  __retval123 = &t124->_M_current;
  int** t125 = __retval123;
  return t125;
}

// function: _ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_
long __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______difference_type___gnu_cxx__operator__int___std__vector_int__std__allocator_int_____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v126, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v127) {
bb128:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs129;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs130;
  long __retval131;
  __lhs129 = v126;
  __rhs130 = v127;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t132 = __lhs129;
  int** r133 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t132);
  int* t134 = *r133;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t135 = __rhs130;
  int** r136 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t135);
  int* t137 = *r136;
  long diff138 = t134 - t137;
  __retval131 = diff138;
  long t139 = __retval131;
  return t139;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v140, int** v141) {
bb142:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this143;
  int** __i144;
  this143 = v140;
  __i144 = v141;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t145 = this143;
  int** t146 = __i144;
  int* t147 = *t146;
  t145->_M_current = t147;
  return;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v148) {
bb149:
  struct std__vector_int__std__allocator_int__* this150;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval151;
  this150 = v148;
  struct std__vector_int__std__allocator_int__* t152 = this150;
  struct std___Vector_base_int__std__allocator_int__* base153 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t152 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base154 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base153->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval151, &base154->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t155 = __retval151;
  return t155;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v156) {
bb157:
  struct std__vector_int__std__allocator_int__* this158;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval159;
  this158 = v156;
  struct std__vector_int__std__allocator_int__* t160 = this158;
  struct std___Vector_base_int__std__allocator_int__* base161 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t160 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base162 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base161->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval159, &base162->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t163 = __retval159;
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
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
        }
      std____throw_bad_alloc();
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
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
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast200 = (int*)r199;
      __retval180 = cast200;
      int* t201 = __retval180;
      return t201;
    }
  unsigned long t202 = __n178;
  unsigned long c203 = 4;
  unsigned long b204 = t202 * c203;
  void* r205 = operator_new(b204);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
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
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t220 = __n212;
      void* r221 = operator_new(t220);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast222 = (int*)r221;
      __retval213 = cast222;
      int* t223 = __retval213;
      return t223;
    }
  struct std____new_allocator_int_* base224 = (struct std____new_allocator_int_*)((char *)t214 + 0);
  unsigned long t225 = __n212;
  void* c226 = ((void*)0);
  int* r227 = std____new_allocator_int___allocate(base224, t225, c226);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
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
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
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
    if (__cir_exc_active) {
      int* __cir_eh_ret = (int*)0;
      return __cir_eh_ret;
    }
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
  if (__cir_exc_active) {
    return;
  }
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
      if (__cir_exc_active) {
        return;
      }
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
  char* cast484 = (char*)&(_str_2);
  unsigned long r485 = std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(t482, c483, cast484);
  if (__cir_exc_active) {
    return;
  }
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
  if (__cir_exc_active) {
    return;
  }
  __new_start480 = r501;
  int* t502 = __new_start480;
  __new_finish481 = t502;
    struct std__vector_int__std__allocator_int_____Guard_alloc __guard503;
    int* ref_tmp2504;
    int* t505 = __new_start480;
    unsigned long t506 = __len474;
    struct std___Vector_base_int__std__allocator_int__* base507 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t482 + 0);
    std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(&__guard503, t505, t506, base507);
    if (__cir_exc_active) {
      return;
    }
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

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEmiEl
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v597, long v598) {
bb599:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this600;
  long __n601;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval602;
  int* ref_tmp0603;
  this600 = v597;
  __n601 = v598;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t604 = this600;
  int* t605 = t604->_M_current;
  long t606 = __n601;
  long u607 = -t606;
  int* ptr608 = &(t605)[u607];
  ref_tmp0603 = ptr608;
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval602, &ref_tmp0603);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t609 = __retval602;
  return t609;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v610) {
bb611:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this612;
  int* __retval613;
  this612 = v610;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t614 = this612;
  int* t615 = t614->_M_current;
  __retval613 = t615;
  int* t616 = __retval613;
  return t616;
}

// function: _ZNSt6vectorIiSaIiEE4backEv
int* std__vector_int__std__allocator_int_____back(struct std__vector_int__std__allocator_int__* v617) {
bb618:
  struct std__vector_int__std__allocator_int__* this619;
  int* __retval620;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0621;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1622;
  this619 = v617;
  struct std__vector_int__std__allocator_int__* t623 = this619;
    do {
          _Bool r624 = std__vector_int__std__allocator_int_____empty___const(t623);
          if (r624) {
            char* cast625 = (char*)&(_str_3);
            int c626 = 1370;
            char* cast627 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEE4backEv);
            char* cast628 = (char*)&(_str_4);
            std____glibcxx_assert_fail(cast625, c626, cast627, cast628);
          }
      _Bool c629 = 0;
      if (!c629) break;
    } while (1);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r630 = std__vector_int__std__allocator_int_____end(t623);
  ref_tmp1622 = r630;
  long c631 = 1;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r632 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__long__const(&ref_tmp1622, c631);
  ref_tmp0621 = r632;
  int* r633 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&ref_tmp0621);
  __retval620 = r633;
  int* t634 = __retval620;
  return t634;
}

// function: _ZNSt6vectorIiSaIiEE12emplace_backIJiEEERiDpOT_
int* int__std__vector_int__std__allocator_int_____emplace_back_int_(struct std__vector_int__std__allocator_int__* v635, int* v636) {
bb637:
  struct std__vector_int__std__allocator_int__* this638;
  int* __args639;
  int* __retval640;
  this638 = v635;
  __args639 = v636;
  struct std__vector_int__std__allocator_int__* t641 = this638;
    struct std___Vector_base_int__std__allocator_int__* base642 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t641 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base643 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base642->_M_impl) + 0);
    int* t644 = base643->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base645 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t641 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base646 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base645->_M_impl) + 0);
    int* t647 = base646->_M_end_of_storage;
    _Bool c648 = ((t644 != t647)) ? 1 : 0;
    if (c648) {
      struct std___Vector_base_int__std__allocator_int__* base649 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t641 + 0);
      struct std__allocator_int_* base650 = (struct std__allocator_int_*)((char *)&(base649->_M_impl) + 0);
      struct std___Vector_base_int__std__allocator_int__* base651 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t641 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base652 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base651->_M_impl) + 0);
      int* t653 = base652->_M_finish;
      int* t654 = __args639;
      void_std__allocator_traits_std__allocator_int_____construct_int__int_(base650, t653, t654);
      struct std___Vector_base_int__std__allocator_int__* base655 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t641 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base656 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base655->_M_impl) + 0);
      int* t657 = base656->_M_finish;
      int c658 = 1;
      int* ptr659 = &(t657)[c658];
      base656->_M_finish = ptr659;
    } else {
      int* t660 = __args639;
      void_std__vector_int__std__allocator_int______M_realloc_append_int_(t641, t660);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
    }
  int* r661 = std__vector_int__std__allocator_int_____back(t641);
  __retval640 = r661;
  int* t662 = __retval640;
  return t662;
}

// function: _ZNSt6vectorIiSaIiEE9push_backEOi
void std__vector_int__std__allocator_int_____push_back(struct std__vector_int__std__allocator_int__* v663, int* v664) {
bb665:
  struct std__vector_int__std__allocator_int__* this666;
  int* __x667;
  this666 = v663;
  __x667 = v664;
  struct std__vector_int__std__allocator_int__* t668 = this666;
  int* t669 = __x667;
  int* r670 = int__std__vector_int__std__allocator_int_____emplace_back_int_(t668, t669);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v671, int** v672) {
bb673:
  struct std___UninitDestroyGuard_int____void_* this674;
  int** __first675;
  this674 = v671;
  __first675 = v672;
  struct std___UninitDestroyGuard_int____void_* t676 = this674;
  int** t677 = __first675;
  int* t678 = *t677;
  t676->_M_first = t678;
  int** t679 = __first675;
  t676->_M_cur = t679;
  return;
}

// function: _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v680) {
bb681:
  int* __location682;
  int* __retval683;
  void* __loc684;
  __location682 = v680;
  int* t685 = __location682;
  void* cast686 = (void*)t685;
  __loc684 = cast686;
    void* t687 = __loc684;
    int* cast688 = (int*)t687;
    int c689 = 0;
    *cast688 = c689;
    __retval683 = cast688;
    int* t690 = __retval683;
    return t690;
  abort();
}

// function: _ZSt10_ConstructIiJEEvPT_DpOT0_
void void_std___Construct_int_(int* v691) {
bb692:
  int* __p693;
  __p693 = v691;
    _Bool r694 = std____is_constant_evaluated();
    if (r694) {
      int* t695 = __p693;
      int* r696 = _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t695);
      return;
    }
  int* t697 = __p693;
  void* cast698 = (void*)t697;
  int* cast699 = (int*)cast698;
  int c700 = 0;
  *cast699 = c700;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v701) {
bb702:
  struct std___UninitDestroyGuard_int____void_* this703;
  this703 = v701;
  struct std___UninitDestroyGuard_int____void_* t704 = this703;
  int** c705 = ((void*)0);
  t704->_M_cur = c705;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v706) {
bb707:
  struct std___UninitDestroyGuard_int____void_* this708;
  this708 = v706;
  struct std___UninitDestroyGuard_int____void_* t709 = this708;
    int** t710 = t709->_M_cur;
    int** c711 = ((void*)0);
    _Bool c712 = ((t710 != c711)) ? 1 : 0;
    if (c712) {
      int* t713 = t709->_M_first;
      int** t714 = t709->_M_cur;
      int* t715 = *t714;
      void_std___Destroy_int__(t713, t715);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt27__uninitialized_default_n_1ILb0EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(int* v716, unsigned long v717) {
bb718:
  int* __first719;
  unsigned long __n720;
  int* __retval721;
  struct std___UninitDestroyGuard_int____void_ __guard722;
  __first719 = v716;
  __n720 = v717;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard722, &__first719);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
      while (1) {
        unsigned long t724 = __n720;
        unsigned long c725 = 0;
        _Bool c726 = ((t724 > c725)) ? 1 : 0;
        if (!c726) break;
        int* t727 = __first719;
        void_std___Construct_int_(t727);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard722);
          }
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
      for_step723: ;
        unsigned long t728 = __n720;
        unsigned long u729 = t728 - 1;
        __n720 = u729;
        int* t730 = __first719;
        int c731 = 1;
        int* ptr732 = &(t730)[c731];
        __first719 = ptr732;
      }
    std___UninitDestroyGuard_int___void___release(&__guard722);
    if (__cir_exc_active) {
      {
        std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard722);
      }
      int* __cir_eh_ret = (int*)0;
      return __cir_eh_ret;
    }
    int* t733 = __first719;
    __retval721 = t733;
    int* t734 = __retval721;
    int* ret_val735 = t734;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard722);
    }
    return ret_val735;
  abort();
}

// function: _ZSt9__fill_a1IPiiEvT_S1_RKT0_
void void_std____fill_a1_int___int_(int* v736, int* v737, int* v738) {
bb739:
  int* __first740;
  int* __last741;
  int* __value742;
  _Bool __load_outside_loop743;
  int __val744;
  __first740 = v736;
  __last741 = v737;
  __value742 = v738;
  _Bool c745 = 1;
  __load_outside_loop743 = c745;
  int* t746 = __value742;
  int t747 = *t746;
  __val744 = t747;
    while (1) {
      int* t749 = __first740;
      int* t750 = __last741;
      _Bool c751 = ((t749 != t750)) ? 1 : 0;
      if (!c751) break;
      int t752 = __val744;
      int* t753 = __first740;
      *t753 = t752;
    for_step748: ;
      int* t754 = __first740;
      int c755 = 1;
      int* ptr756 = &(t754)[c755];
      __first740 = ptr756;
    }
  return;
}

// function: _ZSt8__fill_aIPiiEvT_S1_RKT0_
void void_std____fill_a_int___int_(int* v757, int* v758, int* v759) {
bb760:
  int* __first761;
  int* __last762;
  int* __value763;
  __first761 = v757;
  __last762 = v758;
  __value763 = v759;
  int* t764 = __first761;
  int* t765 = __last762;
  int* t766 = __value763;
  void_std____fill_a1_int___int_(t764, t765, t766);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt10__fill_n_aIPimiET_S1_T0_RKT1_St26random_access_iterator_tag
int* int__std____fill_n_a_int___unsigned_long__int_(int* v767, unsigned long v768, int* v769, struct std__random_access_iterator_tag v770) {
bb771:
  int* __first772;
  unsigned long __n773;
  int* __value774;
  struct std__random_access_iterator_tag unnamed775;
  int* __retval776;
  __first772 = v767;
  __n773 = v768;
  __value774 = v769;
  unnamed775 = v770;
    unsigned long t777 = __n773;
    unsigned long c778 = 0;
    _Bool c779 = ((t777 <= c778)) ? 1 : 0;
    if (c779) {
      int* t780 = __first772;
      __retval776 = t780;
      int* t781 = __retval776;
      return t781;
    }
  int* t782 = __first772;
  int* t783 = __first772;
  unsigned long t784 = __n773;
  int* ptr785 = &(t783)[t784];
  int* t786 = __value774;
  void_std____fill_a_int___int_(t782, ptr785, t786);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* t787 = __first772;
  unsigned long t788 = __n773;
  int* ptr789 = &(t787)[t788];
  __retval776 = ptr789;
  int* t790 = __retval776;
  return t790;
}

// function: _ZSt17__size_to_integerm
unsigned long std____size_to_integer(unsigned long v791) {
bb792:
  unsigned long __n793;
  unsigned long __retval794;
  __n793 = v791;
  unsigned long t795 = __n793;
  __retval794 = t795;
  unsigned long t796 = __retval794;
  return t796;
}

// function: _ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** v797) {
bb798:
  int** unnamed799;
  struct std__random_access_iterator_tag __retval800;
  unnamed799 = v797;
  struct std__random_access_iterator_tag t801 = __retval800;
  return t801;
}

// function: _ZSt6fill_nIPimiET_S1_T0_RKT1_
int* int__std__fill_n_int___unsigned_long__int_(int* v802, unsigned long v803, int* v804) {
bb805:
  int* __first806;
  unsigned long __n807;
  int* __value808;
  int* __retval809;
  struct std__random_access_iterator_tag agg_tmp0810;
  __first806 = v802;
  __n807 = v803;
  __value808 = v804;
  int* t811 = __first806;
  unsigned long t812 = __n807;
  unsigned long r813 = std____size_to_integer(t812);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* t814 = __value808;
  struct std__random_access_iterator_tag r815 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first806);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  agg_tmp0810 = r815;
  struct std__random_access_iterator_tag t816 = agg_tmp0810;
  int* r817 = int__std____fill_n_a_int___unsigned_long__int_(t811, r813, t814, t816);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval809 = r817;
  int* t818 = __retval809;
  return t818;
}

// function: _ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(int* v819, unsigned long v820) {
bb821:
  int* __first822;
  unsigned long __n823;
  int* __retval824;
  __first822 = v819;
  __n823 = v820;
    unsigned long t825 = __n823;
    unsigned long c826 = 0;
    _Bool c827 = ((t825 > c826)) ? 1 : 0;
    if (c827) {
      int* __val828;
      int* t829 = __first822;
      __val828 = t829;
      int* t830 = __val828;
      void_std___Construct_int_(t830);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* t831 = __first822;
      int c832 = 1;
      int* ptr833 = &(t831)[c832];
      __first822 = ptr833;
      int* t834 = __first822;
      unsigned long t835 = __n823;
      unsigned long c836 = 1;
      unsigned long b837 = t835 - c836;
      int* t838 = __val828;
      int* r839 = int__std__fill_n_int___unsigned_long__int_(t834, b837, t838);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      __first822 = r839;
    }
  int* t840 = __first822;
  __retval824 = t840;
  int* t841 = __retval824;
  return t841;
}

// function: _ZSt25__uninitialized_default_nIPimET_S1_T0_
int* int__std____uninitialized_default_n_int___unsigned_long_(int* v842, unsigned long v843) {
bb844:
  int* __first845;
  unsigned long __n846;
  int* __retval847;
  _Bool __can_fill848;
  __first845 = v842;
  __n846 = v843;
    _Bool r849 = std__is_constant_evaluated();
    if (r849) {
      int* t850 = __first845;
      unsigned long t851 = __n846;
      int* r852 = int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(t850, t851);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      __retval847 = r852;
      int* t853 = __retval847;
      return t853;
    }
  _Bool c854 = 1;
  __can_fill848 = c854;
  int* t855 = __first845;
  unsigned long t856 = __n846;
  int* r857 = int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(t855, t856);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval847 = r857;
  int* t858 = __retval847;
  return t858;
}

// function: _ZSt27__uninitialized_default_n_aIPimiET_S1_T0_RSaIT1_E
int* int__std____uninitialized_default_n_a_int___unsigned_long__int_(int* v859, unsigned long v860, struct std__allocator_int_* v861) {
bb862:
  int* __first863;
  unsigned long __n864;
  struct std__allocator_int_* unnamed865;
  int* __retval866;
  __first863 = v859;
  __n864 = v860;
  unnamed865 = v861;
  int* t867 = __first863;
  unsigned long t868 = __n864;
  int* r869 = int__std____uninitialized_default_n_int___unsigned_long_(t867, t868);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval866 = r869;
  int* t870 = __retval866;
  return t870;
}

// function: _ZNSt6vectorIiSaIiEE17_M_default_appendEm
void std__vector_int__std__allocator_int______M_default_append(struct std__vector_int__std__allocator_int__* v871, unsigned long v872) {
bb873:
  struct std__vector_int__std__allocator_int__* this874;
  unsigned long __n875;
  this874 = v871;
  __n875 = v872;
  struct std__vector_int__std__allocator_int__* t876 = this874;
    unsigned long t877 = __n875;
    unsigned long c878 = 0;
    _Bool c879 = ((t877 != c878)) ? 1 : 0;
    if (c879) {
      unsigned long __size880;
      unsigned long __navail881;
      unsigned long r882 = std__vector_int__std__allocator_int_____size___const(t876);
      __size880 = r882;
      struct std___Vector_base_int__std__allocator_int__* base883 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t876 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base884 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base883->_M_impl) + 0);
      int* t885 = base884->_M_end_of_storage;
      struct std___Vector_base_int__std__allocator_int__* base886 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t876 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base887 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base886->_M_impl) + 0);
      int* t888 = base887->_M_finish;
      long diff889 = t885 - t888;
      unsigned long cast890 = (unsigned long)diff889;
      __navail881 = cast890;
        unsigned long t891 = __size880;
        unsigned long r892 = std__vector_int__std__allocator_int_____max_size___const(t876);
        _Bool c893 = ((t891 > r892)) ? 1 : 0;
        _Bool ternary894;
        if (c893) {
          _Bool c895 = 1;
          ternary894 = (_Bool)c895;
        } else {
          unsigned long t896 = __navail881;
          unsigned long r897 = std__vector_int__std__allocator_int_____max_size___const(t876);
          unsigned long t898 = __size880;
          unsigned long b899 = r897 - t898;
          _Bool c900 = ((t896 > b899)) ? 1 : 0;
          ternary894 = (_Bool)c900;
        }
        if (ternary894) {
          __builtin_unreachable();
        }
        unsigned long t901 = __navail881;
        unsigned long t902 = __n875;
        _Bool c903 = ((t901 >= t902)) ? 1 : 0;
        if (c903) {
            struct std___Vector_base_int__std__allocator_int__* base904 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t876 + 0);
            struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base905 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base904->_M_impl) + 0);
            int* t906 = base905->_M_finish;
            _Bool cast907 = (_Bool)t906;
            _Bool u908 = !cast907;
            if (u908) {
              __builtin_unreachable();
            }
          struct std___Vector_base_int__std__allocator_int__* base909 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t876 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base910 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base909->_M_impl) + 0);
          int* t911 = base910->_M_finish;
          unsigned long t912 = __n875;
          struct std___Vector_base_int__std__allocator_int__* base913 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t876 + 0);
          struct std__allocator_int_* r914 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base913);
          int* r915 = int__std____uninitialized_default_n_a_int___unsigned_long__int_(t911, t912, r914);
          if (__cir_exc_active) {
            return;
          }
          struct std___Vector_base_int__std__allocator_int__* base916 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t876 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base917 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base916->_M_impl) + 0);
          base917->_M_finish = r915;
        } else {
          int* __old_start918;
          int* __old_finish919;
          unsigned long __len920;
          int* __new_start921;
          struct std___Vector_base_int__std__allocator_int__* base922 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t876 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base923 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base922->_M_impl) + 0);
          int* t924 = base923->_M_start;
          __old_start918 = t924;
          struct std___Vector_base_int__std__allocator_int__* base925 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t876 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base926 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base925->_M_impl) + 0);
          int* t927 = base926->_M_finish;
          __old_finish919 = t927;
          unsigned long t928 = __n875;
          char* cast929 = (char*)&(_str_5);
          unsigned long r930 = std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(t876, t928, cast929);
          if (__cir_exc_active) {
            return;
          }
          __len920 = r930;
          struct std___Vector_base_int__std__allocator_int__* base931 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t876 + 0);
          unsigned long t932 = __len920;
          int* r933 = std___Vector_base_int__std__allocator_int______M_allocate(base931, t932);
          if (__cir_exc_active) {
            return;
          }
          __new_start921 = r933;
            struct std__vector_int__std__allocator_int_____Guard_alloc __guard934;
            int* t935 = __new_start921;
            unsigned long t936 = __len920;
            struct std___Vector_base_int__std__allocator_int__* base937 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t876 + 0);
            std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(&__guard934, t935, t936, base937);
            if (__cir_exc_active) {
              return;
            }
              int* t938 = __new_start921;
              unsigned long t939 = __size880;
              int* ptr940 = &(t938)[t939];
              unsigned long t941 = __n875;
              struct std___Vector_base_int__std__allocator_int__* base942 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t876 + 0);
              struct std__allocator_int_* r943 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base942);
              int* r944 = int__std____uninitialized_default_n_a_int___unsigned_long__int_(ptr940, t941, r943);
              if (__cir_exc_active) {
                {
                  std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(&__guard934);
                }
                return;
              }
                int* t945 = __old_start918;
                int* t946 = __old_finish919;
                int* t947 = __new_start921;
                struct std___Vector_base_int__std__allocator_int__* base948 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t876 + 0);
                struct std__allocator_int_* r949 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base948);
                int* r950 = std__vector_int__std__allocator_int______S_relocate(t945, t946, t947, r949);
              int* t951 = __old_start918;
              __guard934._M_storage = t951;
              struct std___Vector_base_int__std__allocator_int__* base952 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t876 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base953 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base952->_M_impl) + 0);
              int* t954 = base953->_M_end_of_storage;
              int* t955 = __old_start918;
              long diff956 = t954 - t955;
              unsigned long cast957 = (unsigned long)diff956;
              __guard934._M_len = cast957;
            {
              std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(&__guard934);
            }
          int* t958 = __new_start921;
          struct std___Vector_base_int__std__allocator_int__* base959 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t876 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base960 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base959->_M_impl) + 0);
          base960->_M_start = t958;
          int* t961 = __new_start921;
          unsigned long t962 = __size880;
          int* ptr963 = &(t961)[t962];
          unsigned long t964 = __n875;
          int* ptr965 = &(ptr963)[t964];
          struct std___Vector_base_int__std__allocator_int__* base966 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t876 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base967 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base966->_M_impl) + 0);
          base967->_M_finish = ptr965;
          int* t968 = __new_start921;
          unsigned long t969 = __len920;
          int* ptr970 = &(t968)[t969];
          struct std___Vector_base_int__std__allocator_int__* base971 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t876 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base972 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base971->_M_impl) + 0);
          base972->_M_end_of_storage = ptr970;
        }
    }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v973, int* v974, struct std__allocator_int_* v975) {
bb976:
  int* __first977;
  int* __last978;
  struct std__allocator_int_* unnamed979;
  __first977 = v973;
  __last978 = v974;
  unnamed979 = v975;
  int* t980 = __first977;
  int* t981 = __last978;
  void_std___Destroy_int__(t980, t981);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt6vectorIiSaIiEE15_M_erase_at_endEPi
void std__vector_int__std__allocator_int______M_erase_at_end(struct std__vector_int__std__allocator_int__* v982, int* v983) {
bb984:
  struct std__vector_int__std__allocator_int__* this985;
  int* __pos986;
  this985 = v982;
  __pos986 = v983;
  struct std__vector_int__std__allocator_int__* t987 = this985;
    unsigned long __n988;
    struct std___Vector_base_int__std__allocator_int__* base989 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t987 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base990 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base989->_M_impl) + 0);
    int* t991 = base990->_M_finish;
    int* t992 = __pos986;
    long diff993 = t991 - t992;
    unsigned long cast994 = (unsigned long)diff993;
    __n988 = cast994;
    unsigned long t995 = __n988;
    _Bool cast996 = (_Bool)t995;
    if (cast996) {
      int* t997 = __pos986;
      struct std___Vector_base_int__std__allocator_int__* base998 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t987 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base999 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base998->_M_impl) + 0);
      int* t1000 = base999->_M_finish;
      struct std___Vector_base_int__std__allocator_int__* base1001 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t987 + 0);
      struct std__allocator_int_* r1002 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1001);
      void_std___Destroy_int___int_(t997, t1000, r1002);
      if (__cir_exc_active) {
        return;
      }
      int* t1003 = __pos986;
      struct std___Vector_base_int__std__allocator_int__* base1004 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t987 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1005 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1004->_M_impl) + 0);
      base1005->_M_finish = t1003;
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE6resizeEm
void std__vector_int__std__allocator_int_____resize(struct std__vector_int__std__allocator_int__* v1006, unsigned long v1007) {
bb1008:
  struct std__vector_int__std__allocator_int__* this1009;
  unsigned long __new_size1010;
  this1009 = v1006;
  __new_size1010 = v1007;
  struct std__vector_int__std__allocator_int__* t1011 = this1009;
    unsigned long t1012 = __new_size1010;
    unsigned long r1013 = std__vector_int__std__allocator_int_____size___const(t1011);
    _Bool c1014 = ((t1012 > r1013)) ? 1 : 0;
    if (c1014) {
      unsigned long t1015 = __new_size1010;
      unsigned long r1016 = std__vector_int__std__allocator_int_____size___const(t1011);
      unsigned long b1017 = t1015 - r1016;
      std__vector_int__std__allocator_int______M_default_append(t1011, b1017);
      if (__cir_exc_active) {
        return;
      }
    } else {
        unsigned long t1018 = __new_size1010;
        unsigned long r1019 = std__vector_int__std__allocator_int_____size___const(t1011);
        _Bool c1020 = ((t1018 < r1019)) ? 1 : 0;
        if (c1020) {
          struct std___Vector_base_int__std__allocator_int__* base1021 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1011 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1022 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1021->_M_impl) + 0);
          int* t1023 = base1022->_M_start;
          unsigned long t1024 = __new_size1010;
          int* ptr1025 = &(t1023)[t1024];
          std__vector_int__std__allocator_int______M_erase_at_end(t1011, ptr1025);
        }
    }
  return;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v1026, int* v1027) {
bb1028:
  int* __location1029;
  int* __args1030;
  int* __retval1031;
  void* __loc1032;
  __location1029 = v1026;
  __args1030 = v1027;
  int* t1033 = __location1029;
  void* cast1034 = (void*)t1033;
  __loc1032 = cast1034;
    void* t1035 = __loc1032;
    int* cast1036 = (int*)t1035;
    int* t1037 = __args1030;
    int t1038 = *t1037;
    *cast1036 = t1038;
    __retval1031 = cast1036;
    int* t1039 = __retval1031;
    return t1039;
  abort();
}

// function: _ZSt10_ConstructIiJRKiEEvPT_DpOT0_
void void_std___Construct_int__int_const__(int* v1040, int* v1041) {
bb1042:
  int* __p1043;
  int* __args1044;
  __p1043 = v1040;
  __args1044 = v1041;
    _Bool r1045 = std____is_constant_evaluated();
    if (r1045) {
      int* t1046 = __p1043;
      int* t1047 = __args1044;
      int* r1048 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t1046, t1047);
      return;
    }
  int* t1049 = __p1043;
  void* cast1050 = (void*)t1049;
  int* cast1051 = (int*)cast1050;
  int* t1052 = __args1044;
  int t1053 = *t1052;
  *cast1051 = t1053;
  return;
}

// function: _ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_
int* int__std____do_uninit_fill_n_int___unsigned_long__int_(int* v1054, unsigned long v1055, int* v1056) {
bb1057:
  int* __first1058;
  unsigned long __n1059;
  int* __x1060;
  int* __retval1061;
  struct std___UninitDestroyGuard_int____void_ __guard1062;
  __first1058 = v1054;
  __n1059 = v1055;
  __x1060 = v1056;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard1062, &__first1058);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
        do {
              unsigned long t1063 = __n1059;
              unsigned long c1064 = 0;
              _Bool c1065 = ((t1063 >= c1064)) ? 1 : 0;
              _Bool u1066 = !c1065;
              if (u1066) {
                char* cast1067 = (char*)&(_str_7);
                int c1068 = 463;
                char* cast1069 = (char*)&(__PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_);
                char* cast1070 = (char*)&(_str_8);
                std____glibcxx_assert_fail(cast1067, c1068, cast1069, cast1070);
              }
          _Bool c1071 = 0;
          if (!c1071) break;
        } while (1);
      while (1) {
        unsigned long t1073 = __n1059;
        unsigned long u1074 = t1073 - 1;
        __n1059 = u1074;
        _Bool cast1075 = (_Bool)t1073;
        if (!cast1075) break;
        int* t1076 = __first1058;
        int* t1077 = __x1060;
        void_std___Construct_int__int_const__(t1076, t1077);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1062);
          }
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
      for_step1072: ;
        int* t1078 = __first1058;
        int c1079 = 1;
        int* ptr1080 = &(t1078)[c1079];
        __first1058 = ptr1080;
      }
    std___UninitDestroyGuard_int___void___release(&__guard1062);
    if (__cir_exc_active) {
      {
        std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1062);
      }
      int* __cir_eh_ret = (int*)0;
      return __cir_eh_ret;
    }
    int* t1081 = __first1058;
    __retval1061 = t1081;
    int* t1082 = __retval1061;
    int* ret_val1083 = t1082;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1062);
    }
    return ret_val1083;
  abort();
}

// function: _ZSt20uninitialized_fill_nIPimiET_S1_T0_RKT1_
int* int__std__uninitialized_fill_n_int___unsigned_long__int_(int* v1084, unsigned long v1085, int* v1086) {
bb1087:
  int* __first1088;
  unsigned long __n1089;
  int* __x1090;
  int* __retval1091;
  __first1088 = v1084;
  __n1089 = v1085;
  __x1090 = v1086;
  int* t1092 = __first1088;
  unsigned long t1093 = __n1089;
  int* t1094 = __x1090;
  int* r1095 = int__std____do_uninit_fill_n_int___unsigned_long__int_(t1092, t1093, t1094);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1091 = r1095;
  int* t1096 = __retval1091;
  return t1096;
}

// function: _ZSt24__uninitialized_fill_n_aIPimiiET_S1_T0_RKT1_RSaIT2_E
int* int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(int* v1097, unsigned long v1098, int* v1099, struct std__allocator_int_* v1100) {
bb1101:
  int* __first1102;
  unsigned long __n1103;
  int* __x1104;
  struct std__allocator_int_* unnamed1105;
  int* __retval1106;
  __first1102 = v1097;
  __n1103 = v1098;
  __x1104 = v1099;
  unnamed1105 = v1100;
    _Bool r1107 = std__is_constant_evaluated();
    if (r1107) {
      int* t1108 = __first1102;
      unsigned long t1109 = __n1103;
      int* t1110 = __x1104;
      int* r1111 = int__std____do_uninit_fill_n_int___unsigned_long__int_(t1108, t1109, t1110);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      __retval1106 = r1111;
      int* t1112 = __retval1106;
      return t1112;
    }
  int* t1113 = __first1102;
  unsigned long t1114 = __n1103;
  int* t1115 = __x1104;
  int* r1116 = int__std__uninitialized_fill_n_int___unsigned_long__int_(t1113, t1114, t1115);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1106 = r1116;
  int* t1117 = __retval1106;
  return t1117;
}

// function: _ZNKRSt13move_iteratorIPiE4baseEv
int** std__move_iterator_int____base___const__(struct std__move_iterator_int___* v1118) {
bb1119:
  struct std__move_iterator_int___* this1120;
  int** __retval1121;
  this1120 = v1118;
  struct std__move_iterator_int___* t1122 = this1120;
  __retval1121 = &t1122->_M_current;
  int** t1123 = __retval1121;
  return t1123;
}

// function: _ZSteqIPiEbRKSt13move_iteratorIT_ES5_
_Bool bool_std__operator___int__(struct std__move_iterator_int___* v1124, struct std__move_iterator_int___* v1125) {
bb1126:
  struct std__move_iterator_int___* __x1127;
  struct std__move_iterator_int___* __y1128;
  _Bool __retval1129;
  __x1127 = v1124;
  __y1128 = v1125;
  struct std__move_iterator_int___* t1130 = __x1127;
  int** r1131 = std__move_iterator_int____base___const__(t1130);
  int* t1132 = *r1131;
  struct std__move_iterator_int___* t1133 = __y1128;
  int** r1134 = std__move_iterator_int____base___const__(t1133);
  int* t1135 = *r1134;
  _Bool c1136 = ((t1132 == t1135)) ? 1 : 0;
  __retval1129 = c1136;
  _Bool t1137 = __retval1129;
  return t1137;
}

// function: _ZSt10_ConstructIiJiEEvPT_DpOT0_
void void_std___Construct_int__int_(int* v1138, int* v1139) {
bb1140:
  int* __p1141;
  int* __args1142;
  __p1141 = v1138;
  __args1142 = v1139;
    _Bool r1143 = std____is_constant_evaluated();
    if (r1143) {
      int* t1144 = __p1141;
      int* t1145 = __args1142;
      int* r1146 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t1144, t1145);
      return;
    }
  int* t1147 = __p1141;
  void* cast1148 = (void*)t1147;
  int* cast1149 = (int*)cast1148;
  int* t1150 = __args1142;
  int t1151 = *t1150;
  *cast1149 = t1151;
  return;
}

// function: _ZNKSt6ranges7__imove9_IterMoveclIRKPiQoo11__adl_imoveIT_ErqTDTdeclsr3stdE7declvalIS6_EEEEEENS1_8__resultIS6_E4typeEOS6_
int* _ZNKSt6ranges7__imove9_IterMoveclIRKPiQoo11__adl_imoveIT_ErqTDTdeclsr3stdE7declvalIS6_EEEEEENS1_8__resultIS6_E4typeEOS6_(struct std__ranges____imove___IterMove* v1152, int** v1153) {
bb1154:
  struct std__ranges____imove___IterMove* this1155;
  int** __e1156;
  int* __retval1157;
  this1155 = v1152;
  __e1156 = v1153;
  struct std__ranges____imove___IterMove* t1158 = this1155;
      int** t1159 = __e1156;
      int* t1160 = *t1159;
      __retval1157 = t1160;
      int* t1161 = __retval1157;
      return t1161;
  abort();
}

// function: _ZNKSt13move_iteratorIPiEdeEv
int* std__move_iterator_int____operator____const(struct std__move_iterator_int___* v1162) {
bb1163:
  struct std__move_iterator_int___* this1164;
  int* __retval1165;
  this1164 = v1162;
  struct std__move_iterator_int___* t1166 = this1164;
  int* r1167 = _ZNKSt6ranges7__imove9_IterMoveclIRKPiQoo11__adl_imoveIT_ErqTDTdeclsr3stdE7declvalIS6_EEEEEENS1_8__resultIS6_E4typeEOS6_(&_ZNSt6ranges4_Cpo9iter_moveE, &t1166->_M_current);
  __retval1165 = r1167;
  int* t1168 = __retval1165;
  return t1168;
}

// function: _ZNSt13move_iteratorIPiEppEv
struct std__move_iterator_int___* std__move_iterator_int____operator__(struct std__move_iterator_int___* v1169) {
bb1170:
  struct std__move_iterator_int___* this1171;
  struct std__move_iterator_int___* __retval1172;
  this1171 = v1169;
  struct std__move_iterator_int___* t1173 = this1171;
  int* t1174 = t1173->_M_current;
  int c1175 = 1;
  int* ptr1176 = &(t1174)[c1175];
  t1173->_M_current = ptr1176;
  __retval1172 = t1173;
  struct std__move_iterator_int___* t1177 = __retval1172;
  return t1177;
}

// function: _ZSt16__do_uninit_copyISt13move_iteratorIPiES2_S1_ET1_T_T0_S3_
int* int__std____do_uninit_copy_std__move_iterator_int____std__move_iterator_int____int__(struct std__move_iterator_int___ v1178, struct std__move_iterator_int___ v1179, int* v1180) {
bb1181:
  struct std__move_iterator_int___ __first1182;
  struct std__move_iterator_int___ __last1183;
  int* __result1184;
  int* __retval1185;
  struct std___UninitDestroyGuard_int____void_ __guard1186;
  __first1182 = v1178;
  __last1183 = v1179;
  __result1184 = v1180;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard1186, &__result1184);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
      while (1) {
        _Bool r1188 = bool_std__operator___int__(&__first1182, &__last1183);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1186);
          }
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
        _Bool u1189 = !r1188;
        if (!u1189) break;
        int* t1190 = __result1184;
        int* r1191 = std__move_iterator_int____operator____const(&__first1182);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1186);
          }
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
        void_std___Construct_int__int_(t1190, r1191);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1186);
          }
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
      for_step1187: ;
        struct std__move_iterator_int___* r1192 = std__move_iterator_int____operator__(&__first1182);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1186);
          }
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
        int* t1193 = __result1184;
        int c1194 = 1;
        int* ptr1195 = &(t1193)[c1194];
        __result1184 = ptr1195;
      }
    std___UninitDestroyGuard_int___void___release(&__guard1186);
    if (__cir_exc_active) {
      {
        std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1186);
      }
      int* __cir_eh_ret = (int*)0;
      return __cir_eh_ret;
    }
    int* t1196 = __result1184;
    __retval1185 = t1196;
    int* t1197 = __retval1185;
    int* ret_val1198 = t1197;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1186);
    }
    return ret_val1198;
  abort();
}

// function: _ZSt18uninitialized_copyISt13move_iteratorIPiES1_ET0_T_S4_S3_
int* int__std__uninitialized_copy_std__move_iterator_int____int__(struct std__move_iterator_int___ v1199, struct std__move_iterator_int___ v1200, int* v1201) {
bb1202:
  struct std__move_iterator_int___ __first1203;
  struct std__move_iterator_int___ __last1204;
  int* __result1205;
  int* __retval1206;
  __first1203 = v1199;
  __last1204 = v1200;
  __result1205 = v1201;
        struct std__move_iterator_int___ agg_tmp01207;
        struct std__move_iterator_int___ agg_tmp11208;
        agg_tmp01207 = __first1203; // copy
        agg_tmp11208 = __last1204; // copy
        int* t1209 = __result1205;
        struct std__move_iterator_int___ t1210 = agg_tmp01207;
        struct std__move_iterator_int___ t1211 = agg_tmp11208;
        int* r1212 = int__std____do_uninit_copy_std__move_iterator_int____std__move_iterator_int____int__(t1210, t1211, t1209);
        if (__cir_exc_active) {
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
        __retval1206 = r1212;
        int* t1213 = __retval1206;
        return t1213;
  abort();
}

// function: _ZSt22__uninitialized_copy_aISt13move_iteratorIPiES2_S1_iET1_T_T0_S3_RSaIT2_E
int* int__std____uninitialized_copy_a_std__move_iterator_int____std__move_iterator_int____int___int_(struct std__move_iterator_int___ v1214, struct std__move_iterator_int___ v1215, int* v1216, struct std__allocator_int_* v1217) {
bb1218:
  struct std__move_iterator_int___ __first1219;
  struct std__move_iterator_int___ __last1220;
  int* __result1221;
  struct std__allocator_int_* unnamed1222;
  int* __retval1223;
  __first1219 = v1214;
  __last1220 = v1215;
  __result1221 = v1216;
  unnamed1222 = v1217;
    _Bool r1224 = std__is_constant_evaluated();
    if (r1224) {
      struct std__move_iterator_int___ agg_tmp01225;
      struct std__move_iterator_int___ agg_tmp11226;
      agg_tmp01225 = __first1219; // copy
      agg_tmp11226 = __last1220; // copy
      int* t1227 = __result1221;
      struct std__move_iterator_int___ t1228 = agg_tmp01225;
      struct std__move_iterator_int___ t1229 = agg_tmp11226;
      int* r1230 = int__std____do_uninit_copy_std__move_iterator_int____std__move_iterator_int____int__(t1228, t1229, t1227);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      __retval1223 = r1230;
      int* t1231 = __retval1223;
      return t1231;
    }
    struct std__move_iterator_int___ agg_tmp21232;
    struct std__move_iterator_int___ agg_tmp31233;
    agg_tmp21232 = __first1219; // copy
    agg_tmp31233 = __last1220; // copy
    int* t1234 = __result1221;
    struct std__move_iterator_int___ t1235 = agg_tmp21232;
    struct std__move_iterator_int___ t1236 = agg_tmp31233;
    int* r1237 = int__std__uninitialized_copy_std__move_iterator_int____int__(t1235, t1236, t1234);
    if (__cir_exc_active) {
      int* __cir_eh_ret = (int*)0;
      return __cir_eh_ret;
    }
    __retval1223 = r1237;
    int* t1238 = __retval1223;
    return t1238;
  abort();
}

// function: _ZNSt13move_iteratorIPiEC2ES0_
void std__move_iterator_int____move_iterator(struct std__move_iterator_int___* v1239, int* v1240) {
bb1241:
  struct std__move_iterator_int___* this1242;
  int* __i1243;
  this1242 = v1239;
  __i1243 = v1240;
  struct std__move_iterator_int___* t1244 = this1242;
  struct std____detail____move_iter_cat_int___* base1245 = (struct std____detail____move_iter_cat_int___*)((char *)t1244 + 0);
  int* t1246 = __i1243;
  t1244->_M_current = t1246;
  return;
}

// function: _ZSt32__make_move_if_noexcept_iteratorIiSt13move_iteratorIPiEET0_PT_
struct std__move_iterator_int___ std__move_iterator_int___std____make_move_if_noexcept_iterator_int__std__move_iterator_int____(int* v1247) {
bb1248:
  int* __i1249;
  struct std__move_iterator_int___ __retval1250;
  __i1249 = v1247;
  int* t1251 = __i1249;
  std__move_iterator_int____move_iterator(&__retval1250, t1251);
  if (__cir_exc_active) {
    struct std__move_iterator_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std__move_iterator_int___ t1252 = __retval1250;
  return t1252;
}

// function: _ZSt34__uninitialized_move_if_noexcept_aIPiS0_SaIiEET0_T_S3_S2_RT1_
int* int__std____uninitialized_move_if_noexcept_a_int___int___std__allocator_int___(int* v1253, int* v1254, int* v1255, struct std__allocator_int_* v1256) {
bb1257:
  int* __first1258;
  int* __last1259;
  int* __result1260;
  struct std__allocator_int_* __alloc1261;
  int* __retval1262;
  struct std__move_iterator_int___ agg_tmp01263;
  struct std__move_iterator_int___ agg_tmp11264;
  __first1258 = v1253;
  __last1259 = v1254;
  __result1260 = v1255;
  __alloc1261 = v1256;
  int* t1265 = __first1258;
  struct std__move_iterator_int___ r1266 = std__move_iterator_int___std____make_move_if_noexcept_iterator_int__std__move_iterator_int____(t1265);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  agg_tmp01263 = r1266;
  int* t1267 = __last1259;
  struct std__move_iterator_int___ r1268 = std__move_iterator_int___std____make_move_if_noexcept_iterator_int__std__move_iterator_int____(t1267);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  agg_tmp11264 = r1268;
  int* t1269 = __result1260;
  struct std__allocator_int_* t1270 = __alloc1261;
  struct std__move_iterator_int___ t1271 = agg_tmp01263;
  struct std__move_iterator_int___ t1272 = agg_tmp11264;
  int* r1273 = int__std____uninitialized_copy_a_std__move_iterator_int____std__move_iterator_int____int___int_(t1271, t1272, t1269, t1270);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1262 = r1273;
  int* t1274 = __retval1262;
  return t1274;
}

// function: _ZNSt6vectorIiSaIiEE14_M_fill_appendEmRKi
void std__vector_int__std__allocator_int______M_fill_append(struct std__vector_int__std__allocator_int__* v1275, unsigned long v1276, int* v1277) {
bb1278:
  struct std__vector_int__std__allocator_int__* this1279;
  unsigned long __n1280;
  int* __x1281;
  this1279 = v1275;
  __n1280 = v1276;
  __x1281 = v1277;
  struct std__vector_int__std__allocator_int__* t1282 = this1279;
    struct std___Vector_base_int__std__allocator_int__* base1283 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1282 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1284 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1283->_M_impl) + 0);
    int* t1285 = base1284->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int__* base1286 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1282 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1287 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1286->_M_impl) + 0);
    int* t1288 = base1287->_M_finish;
    long diff1289 = t1285 - t1288;
    unsigned long cast1290 = (unsigned long)diff1289;
    unsigned long t1291 = __n1280;
    _Bool c1292 = ((cast1290 >= t1291)) ? 1 : 0;
    if (c1292) {
      struct std___Vector_base_int__std__allocator_int__* base1293 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1282 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1294 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1293->_M_impl) + 0);
      int* t1295 = base1294->_M_finish;
      unsigned long t1296 = __n1280;
      int* t1297 = __x1281;
      struct std___Vector_base_int__std__allocator_int__* base1298 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1282 + 0);
      struct std__allocator_int_* r1299 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1298);
      int* r1300 = int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(t1295, t1296, t1297, r1299);
      if (__cir_exc_active) {
        return;
      }
      struct std___Vector_base_int__std__allocator_int__* base1301 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1282 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1302 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1301->_M_impl) + 0);
      base1302->_M_finish = r1300;
    } else {
      int* __old_start1303;
      int* __old_finish1304;
      unsigned long __old_size1305;
      unsigned long __len1306;
      int* __new_start1307;
      int* __new_finish1308;
      struct std___Vector_base_int__std__allocator_int__* base1309 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1282 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1310 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1309->_M_impl) + 0);
      int* t1311 = base1310->_M_start;
      __old_start1303 = t1311;
      struct std___Vector_base_int__std__allocator_int__* base1312 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1282 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1313 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1312->_M_impl) + 0);
      int* t1314 = base1313->_M_finish;
      __old_finish1304 = t1314;
      int* t1315 = __old_finish1304;
      int* t1316 = __old_start1303;
      long diff1317 = t1315 - t1316;
      unsigned long cast1318 = (unsigned long)diff1317;
      __old_size1305 = cast1318;
      unsigned long t1319 = __n1280;
      char* cast1320 = (char*)&(_str_6);
      unsigned long r1321 = std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(t1282, t1319, cast1320);
      if (__cir_exc_active) {
        return;
      }
      __len1306 = r1321;
      struct std___Vector_base_int__std__allocator_int__* base1322 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1282 + 0);
      unsigned long t1323 = __len1306;
      int* r1324 = std___Vector_base_int__std__allocator_int______M_allocate(base1322, t1323);
      if (__cir_exc_active) {
        return;
      }
      __new_start1307 = r1324;
      int* t1325 = __new_start1307;
      unsigned long t1326 = __old_size1305;
      int* ptr1327 = &(t1325)[t1326];
      __new_finish1308 = ptr1327;
          int* t1329 = __new_finish1308;
          unsigned long t1330 = __n1280;
          int* t1331 = __x1281;
          struct std___Vector_base_int__std__allocator_int__* base1332 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1282 + 0);
          struct std__allocator_int_* r1333 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1332);
          int* r1334 = int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(t1329, t1330, t1331, r1333);
          if (__cir_exc_active) {
            goto cir_try_dispatch1328;
          }
          __new_finish1308 = r1334;
          int* t1335 = __old_start1303;
          int* t1336 = __old_finish1304;
          int* t1337 = __new_start1307;
          struct std___Vector_base_int__std__allocator_int__* base1338 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1282 + 0);
          struct std__allocator_int_* r1339 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1338);
          int* r1340 = int__std____uninitialized_move_if_noexcept_a_int___int___std__allocator_int___(t1335, t1336, t1337, r1339);
          if (__cir_exc_active) {
            goto cir_try_dispatch1328;
          }
        cir_try_dispatch1328: ;
        if (__cir_exc_active) {
        {
          int ca_tok1341 = 0;
          void* ca_exn1342 = (void*)__cir_exc_ptr;
          __cir_exc_active = 0;
            int* t1343 = __new_start1307;
            unsigned long t1344 = __old_size1305;
            int* ptr1345 = &(t1343)[t1344];
            int* t1346 = __new_finish1308;
            struct std___Vector_base_int__std__allocator_int__* base1347 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1282 + 0);
            struct std__allocator_int_* r1348 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1347);
            void_std___Destroy_int___int_(ptr1345, t1346, r1348);
            if (__cir_exc_active) {
              {
                if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
              }
              return;
            }
            struct std___Vector_base_int__std__allocator_int__* base1349 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1282 + 0);
            int* t1350 = __new_start1307;
            unsigned long t1351 = __len1306;
            std___Vector_base_int__std__allocator_int______M_deallocate(base1349, t1350, t1351);
            if (__cir_exc_active) {
              {
                if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
              }
              return;
            }
            __cir_exc_active = 1;
            {
              if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
            }
            return;
            __builtin_unreachable();
        }
        }
      int* t1352 = __old_start1303;
      int* t1353 = __old_finish1304;
      struct std___Vector_base_int__std__allocator_int__* base1354 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1282 + 0);
      struct std__allocator_int_* r1355 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1354);
      void_std___Destroy_int___int_(t1352, t1353, r1355);
      if (__cir_exc_active) {
        return;
      }
      struct std___Vector_base_int__std__allocator_int__* base1356 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1282 + 0);
      int* t1357 = __old_start1303;
      struct std___Vector_base_int__std__allocator_int__* base1358 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1282 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1359 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1358->_M_impl) + 0);
      int* t1360 = base1359->_M_end_of_storage;
      int* t1361 = __old_start1303;
      long diff1362 = t1360 - t1361;
      unsigned long cast1363 = (unsigned long)diff1362;
      std___Vector_base_int__std__allocator_int______M_deallocate(base1356, t1357, cast1363);
      if (__cir_exc_active) {
        return;
      }
      int* t1364 = __new_start1307;
      struct std___Vector_base_int__std__allocator_int__* base1365 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1282 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1366 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1365->_M_impl) + 0);
      base1366->_M_start = t1364;
      int* t1367 = __new_finish1308;
      struct std___Vector_base_int__std__allocator_int__* base1368 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1282 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1369 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1368->_M_impl) + 0);
      base1369->_M_finish = t1367;
      int* t1370 = __new_start1307;
      unsigned long t1371 = __len1306;
      int* ptr1372 = &(t1370)[t1371];
      struct std___Vector_base_int__std__allocator_int__* base1373 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1282 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1374 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1373->_M_impl) + 0);
      base1374->_M_end_of_storage = ptr1372;
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE6resizeEmRKi
void std__vector_int__std__allocator_int_____resize_2(struct std__vector_int__std__allocator_int__* v1375, unsigned long v1376, int* v1377) {
bb1378:
  struct std__vector_int__std__allocator_int__* this1379;
  unsigned long __new_size1380;
  int* __x1381;
  this1379 = v1375;
  __new_size1380 = v1376;
  __x1381 = v1377;
  struct std__vector_int__std__allocator_int__* t1382 = this1379;
    unsigned long t1383 = __new_size1380;
    unsigned long r1384 = std__vector_int__std__allocator_int_____size___const(t1382);
    _Bool c1385 = ((t1383 > r1384)) ? 1 : 0;
    if (c1385) {
      unsigned long t1386 = __new_size1380;
      unsigned long r1387 = std__vector_int__std__allocator_int_____size___const(t1382);
      unsigned long b1388 = t1386 - r1387;
      int* t1389 = __x1381;
      std__vector_int__std__allocator_int______M_fill_append(t1382, b1388, t1389);
      if (__cir_exc_active) {
        return;
      }
    } else {
        unsigned long t1390 = __new_size1380;
        unsigned long r1391 = std__vector_int__std__allocator_int_____size___const(t1382);
        _Bool c1392 = ((t1390 < r1391)) ? 1 : 0;
        if (c1392) {
          struct std___Vector_base_int__std__allocator_int__* base1393 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1382 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1394 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1393->_M_impl) + 0);
          int* t1395 = base1394->_M_start;
          unsigned long t1396 = __new_size1380;
          int* ptr1397 = &(t1395)[t1396];
          std__vector_int__std__allocator_int______M_erase_at_end(t1382, ptr1397);
        }
    }
  return;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v1398, int v1399) {
bb1400:
  int __a1401;
  int __b1402;
  int __retval1403;
  __a1401 = v1398;
  __b1402 = v1399;
  int t1404 = __a1401;
  int t1405 = __b1402;
  int b1406 = t1404 | t1405;
  __retval1403 = b1406;
  int t1407 = __retval1403;
  return t1407;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v1408) {
bb1409:
  struct std__basic_ios_char__std__char_traits_char__* this1410;
  int __retval1411;
  this1410 = v1408;
  struct std__basic_ios_char__std__char_traits_char__* t1412 = this1410;
  struct std__ios_base* base1413 = (struct std__ios_base*)((char *)t1412 + 0);
  int t1414 = base1413->_M_streambuf_state;
  __retval1411 = t1414;
  int t1415 = __retval1411;
  return t1415;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v1416, int v1417) {
bb1418:
  struct std__basic_ios_char__std__char_traits_char__* this1419;
  int __state1420;
  this1419 = v1416;
  __state1420 = v1417;
  struct std__basic_ios_char__std__char_traits_char__* t1421 = this1419;
  int r1422 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t1421);
  if (__cir_exc_active) {
    return;
  }
  int t1423 = __state1420;
  int r1424 = std__operator_(r1422, t1423);
  std__basic_ios_char__std__char_traits_char_____clear(t1421, r1424);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v1425, char* v1426) {
bb1427:
  char* __c11428;
  char* __c21429;
  _Bool __retval1430;
  __c11428 = v1425;
  __c21429 = v1426;
  char* t1431 = __c11428;
  char t1432 = *t1431;
  int cast1433 = (int)t1432;
  char* t1434 = __c21429;
  char t1435 = *t1434;
  int cast1436 = (int)t1435;
  _Bool c1437 = ((cast1433 == cast1436)) ? 1 : 0;
  __retval1430 = c1437;
  _Bool t1438 = __retval1430;
  return t1438;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v1439) {
bb1440:
  char* __p1441;
  unsigned long __retval1442;
  unsigned long __i1443;
  __p1441 = v1439;
  unsigned long c1444 = 0;
  __i1443 = c1444;
    char ref_tmp01445;
    while (1) {
      unsigned long t1446 = __i1443;
      char* t1447 = __p1441;
      char* ptr1448 = &(t1447)[t1446];
      char c1449 = 0;
      ref_tmp01445 = c1449;
      _Bool r1450 = __gnu_cxx__char_traits_char___eq(ptr1448, &ref_tmp01445);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u1451 = !r1450;
      if (!u1451) break;
      unsigned long t1452 = __i1443;
      unsigned long u1453 = t1452 + 1;
      __i1443 = u1453;
    }
  unsigned long t1454 = __i1443;
  __retval1442 = t1454;
  unsigned long t1455 = __retval1442;
  return t1455;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v1456) {
bb1457:
  char* __s1458;
  unsigned long __retval1459;
  __s1458 = v1456;
    _Bool r1460 = std____is_constant_evaluated();
    if (r1460) {
      char* t1461 = __s1458;
      unsigned long r1462 = __gnu_cxx__char_traits_char___length(t1461);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval1459 = r1462;
      unsigned long t1463 = __retval1459;
      return t1463;
    }
  char* t1464 = __s1458;
  unsigned long r1465 = strlen(t1464);
  __retval1459 = r1465;
  unsigned long t1466 = __retval1459;
  return t1466;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1467, char* v1468) {
bb1469:
  struct std__basic_ostream_char__std__char_traits_char__* __out1470;
  char* __s1471;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1472;
  __out1470 = v1467;
  __s1471 = v1468;
    char* t1473 = __s1471;
    _Bool cast1474 = (_Bool)t1473;
    _Bool u1475 = !cast1474;
    if (u1475) {
      struct std__basic_ostream_char__std__char_traits_char__* t1476 = __out1470;
      void** v1477 = (void**)t1476;
      void* v1478 = *((void**)v1477);
      unsigned char* cast1479 = (unsigned char*)v1478;
      long c1480 = -24;
      unsigned char* ptr1481 = &(cast1479)[c1480];
      long* cast1482 = (long*)ptr1481;
      long t1483 = *cast1482;
      unsigned char* cast1484 = (unsigned char*)t1476;
      unsigned char* ptr1485 = &(cast1484)[t1483];
      struct std__basic_ostream_char__std__char_traits_char__* cast1486 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1485;
      struct std__basic_ios_char__std__char_traits_char__* cast1487 = (struct std__basic_ios_char__std__char_traits_char__*)cast1486;
      int t1488 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast1487, t1488);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t1489 = __out1470;
      char* t1490 = __s1471;
      char* t1491 = __s1471;
      unsigned long r1492 = std__char_traits_char___length(t1491);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast1493 = (long)r1492;
      struct std__basic_ostream_char__std__char_traits_char__* r1494 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t1489, t1490, cast1493);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t1495 = __out1470;
  __retval1472 = t1495;
  struct std__basic_ostream_char__std__char_traits_char__* t1496 = __retval1472;
  return t1496;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v1497) {
bb1498:
  struct std__vector_int__std__allocator_int__* this1499;
  unsigned long __retval1500;
  long __dif1501;
  this1499 = v1497;
  struct std__vector_int__std__allocator_int__* t1502 = this1499;
  struct std___Vector_base_int__std__allocator_int__* base1503 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1502 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1504 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1503->_M_impl) + 0);
  int* t1505 = base1504->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base1506 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1502 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1507 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1506->_M_impl) + 0);
  int* t1508 = base1507->_M_start;
  long diff1509 = t1505 - t1508;
  __dif1501 = diff1509;
    long t1510 = __dif1501;
    long c1511 = 0;
    _Bool c1512 = ((t1510 < c1511)) ? 1 : 0;
    if (c1512) {
      __builtin_unreachable();
    }
  long t1513 = __dif1501;
  unsigned long cast1514 = (unsigned long)t1513;
  __retval1500 = cast1514;
  unsigned long t1515 = __retval1500;
  return t1515;
}

// function: _ZNSt6vectorIiSaIiEEixEm
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* v1516, unsigned long v1517) {
bb1518:
  struct std__vector_int__std__allocator_int__* this1519;
  unsigned long __n1520;
  int* __retval1521;
  this1519 = v1516;
  __n1520 = v1517;
  struct std__vector_int__std__allocator_int__* t1522 = this1519;
    do {
          unsigned long t1523 = __n1520;
          unsigned long r1524 = std__vector_int__std__allocator_int_____size___const(t1522);
          _Bool c1525 = ((t1523 < r1524)) ? 1 : 0;
          _Bool u1526 = !c1525;
          if (u1526) {
            char* cast1527 = (char*)&(_str_3);
            int c1528 = 1263;
            char* cast1529 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm);
            char* cast1530 = (char*)&(_str_9);
            std____glibcxx_assert_fail(cast1527, c1528, cast1529, cast1530);
          }
      _Bool c1531 = 0;
      if (!c1531) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base1532 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1522 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1533 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1532->_M_impl) + 0);
  int* t1534 = base1533->_M_start;
  unsigned long t1535 = __n1520;
  int* ptr1536 = &(t1534)[t1535];
  __retval1521 = ptr1536;
  int* t1537 = __retval1521;
  return t1537;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v1538, void* v1539) {
bb1540:
  struct std__basic_ostream_char__std__char_traits_char__* this1541;
  void* __pf1542;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1543;
  this1541 = v1538;
  __pf1542 = v1539;
  struct std__basic_ostream_char__std__char_traits_char__* t1544 = this1541;
  void* t1545 = __pf1542;
  struct std__basic_ostream_char__std__char_traits_char__* r1546 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t1545)(t1544);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval1543 = r1546;
  struct std__basic_ostream_char__std__char_traits_char__* t1547 = __retval1543;
  return t1547;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1548) {
bb1549:
  struct std__basic_ostream_char__std__char_traits_char__* __os1550;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1551;
  __os1550 = v1548;
  struct std__basic_ostream_char__std__char_traits_char__* t1552 = __os1550;
  struct std__basic_ostream_char__std__char_traits_char__* r1553 = std__ostream__flush(t1552);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval1551 = r1553;
  struct std__basic_ostream_char__std__char_traits_char__* t1554 = __retval1551;
  return t1554;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v1555) {
bb1556:
  struct std__ctype_char_* __f1557;
  struct std__ctype_char_* __retval1558;
  __f1557 = v1555;
    struct std__ctype_char_* t1559 = __f1557;
    _Bool cast1560 = (_Bool)t1559;
    _Bool u1561 = !cast1560;
    if (u1561) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t1562 = __f1557;
  __retval1558 = t1562;
  struct std__ctype_char_* t1563 = __retval1558;
  return t1563;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v1564, char v1565) {
bb1566:
  struct std__ctype_char_* this1567;
  char __c1568;
  char __retval1569;
  this1567 = v1564;
  __c1568 = v1565;
  struct std__ctype_char_* t1570 = this1567;
    char t1571 = t1570->_M_widen_ok;
    _Bool cast1572 = (_Bool)t1571;
    if (cast1572) {
      char t1573 = __c1568;
      unsigned char cast1574 = (unsigned char)t1573;
      unsigned long cast1575 = (unsigned long)cast1574;
      char t1576 = t1570->_M_widen[cast1575];
      __retval1569 = t1576;
      char t1577 = __retval1569;
      return t1577;
    }
  std__ctype_char____M_widen_init___const(t1570);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t1578 = __c1568;
  void** v1579 = (void**)t1570;
  void* v1580 = *((void**)v1579);
  char vcall1583 = (char)__VERIFIER_virtual_call_char_char(t1570, 6, t1578);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval1569 = vcall1583;
  char t1584 = __retval1569;
  return t1584;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v1585, char v1586) {
bb1587:
  struct std__basic_ios_char__std__char_traits_char__* this1588;
  char __c1589;
  char __retval1590;
  this1588 = v1585;
  __c1589 = v1586;
  struct std__basic_ios_char__std__char_traits_char__* t1591 = this1588;
  struct std__ctype_char_* t1592 = t1591->_M_ctype;
  struct std__ctype_char_* r1593 = std__ctype_char__const__std____check_facet_std__ctype_char___(t1592);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t1594 = __c1589;
  char r1595 = std__ctype_char___widen_char__const(r1593, t1594);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval1590 = r1595;
  char t1596 = __retval1590;
  return t1596;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v1597) {
bb1598:
  struct std__basic_ostream_char__std__char_traits_char__* __os1599;
  struct std__basic_ostream_char__std__char_traits_char__* __retval1600;
  __os1599 = v1597;
  struct std__basic_ostream_char__std__char_traits_char__* t1601 = __os1599;
  struct std__basic_ostream_char__std__char_traits_char__* t1602 = __os1599;
  void** v1603 = (void**)t1602;
  void* v1604 = *((void**)v1603);
  unsigned char* cast1605 = (unsigned char*)v1604;
  long c1606 = -24;
  unsigned char* ptr1607 = &(cast1605)[c1606];
  long* cast1608 = (long*)ptr1607;
  long t1609 = *cast1608;
  unsigned char* cast1610 = (unsigned char*)t1602;
  unsigned char* ptr1611 = &(cast1610)[t1609];
  struct std__basic_ostream_char__std__char_traits_char__* cast1612 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr1611;
  struct std__basic_ios_char__std__char_traits_char__* cast1613 = (struct std__basic_ios_char__std__char_traits_char__*)cast1612;
  char c1614 = 10;
  char r1615 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast1613, c1614);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r1616 = std__ostream__put(t1601, r1615);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r1617 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r1616);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval1600 = r1617;
  struct std__basic_ostream_char__std__char_traits_char__* t1618 = __retval1600;
  return t1618;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v1619) {
bb1620:
  struct std__vector_int__std__allocator_int__* this1621;
  this1621 = v1619;
  struct std__vector_int__std__allocator_int__* t1622 = this1621;
    struct std___Vector_base_int__std__allocator_int__* base1623 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1622 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1624 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1623->_M_impl) + 0);
    int* t1625 = base1624->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base1626 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1622 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1627 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1626->_M_impl) + 0);
    int* t1628 = base1627->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base1629 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1622 + 0);
    struct std__allocator_int_* r1630 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1629);
    void_std___Destroy_int___int_(t1625, t1628, r1630);
    if (__cir_exc_active) {
      {
        struct std___Vector_base_int__std__allocator_int__* base1631 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1622 + 0);
        std___Vector_base_int__std__allocator_int_______Vector_base(base1631);
      }
      return;
    }
  {
    struct std___Vector_base_int__std__allocator_int__* base1632 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1622 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base1632);
  }
  return;
}

// function: main
int main() {
bb1633:
  int __retval1634;
  struct std__vector_int__std__allocator_int__ myvector1635;
  unsigned int i1636;
  int ref_tmp11637;
  int c1638 = 0;
  __retval1634 = c1638;
  std__vector_int__std__allocator_int_____vector(&myvector1635);
      int ref_tmp01639;
      unsigned int c1640 = 1;
      i1636 = c1640;
      while (1) {
        unsigned int t1642 = i1636;
        unsigned int c1643 = 10;
        _Bool c1644 = ((t1642 < c1643)) ? 1 : 0;
        if (!c1644) break;
        unsigned int t1645 = i1636;
        int cast1646 = (int)t1645;
        ref_tmp01639 = cast1646;
        std__vector_int__std__allocator_int_____push_back(&myvector1635, &ref_tmp01639);
        if (__cir_exc_active) {
          {
            std__vector_int__std__allocator_int______vector(&myvector1635);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
      for_step1641: ;
        unsigned int t1647 = i1636;
        unsigned int u1648 = t1647 + 1;
        i1636 = u1648;
      }
    unsigned long c1649 = 5;
    std__vector_int__std__allocator_int_____resize(&myvector1635, c1649);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&myvector1635);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long c1650 = 8;
    int c1651 = 100;
    ref_tmp11637 = c1651;
    std__vector_int__std__allocator_int_____resize_2(&myvector1635, c1650, &ref_tmp11637);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&myvector1635);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long c1652 = 12;
    std__vector_int__std__allocator_int_____resize(&myvector1635, c1652);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&myvector1635);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    char* cast1653 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r1654 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1653);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&myvector1635);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      unsigned int c1655 = 0;
      i1636 = c1655;
      while (1) {
        unsigned int t1657 = i1636;
        unsigned long cast1658 = (unsigned long)t1657;
        unsigned long r1659 = std__vector_int__std__allocator_int_____size___const(&myvector1635);
        _Bool c1660 = ((cast1658 < r1659)) ? 1 : 0;
        if (!c1660) break;
        char* cast1661 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* r1662 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1661);
        if (__cir_exc_active) {
          {
            std__vector_int__std__allocator_int______vector(&myvector1635);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        unsigned int t1663 = i1636;
        unsigned long cast1664 = (unsigned long)t1663;
        int* r1665 = std__vector_int__std__allocator_int_____operator__(&myvector1635, cast1664);
        int t1666 = *r1665;
        struct std__basic_ostream_char__std__char_traits_char__* r1667 = std__ostream__operator__(r1662, t1666);
        if (__cir_exc_active) {
          {
            std__vector_int__std__allocator_int______vector(&myvector1635);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
      for_step1656: ;
        unsigned int t1668 = i1636;
        unsigned int u1669 = t1668 + 1;
        i1636 = u1669;
      }
    struct std__basic_ostream_char__std__char_traits_char__* r1670 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&myvector1635);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c1671 = 0;
    __retval1634 = c1671;
    int t1672 = __retval1634;
    int ret_val1673 = t1672;
    {
      std__vector_int__std__allocator_int______vector(&myvector1635);
    }
    return ret_val1673;
  int t1674 = __retval1634;
  return t1674;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE
void _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1675) {
bb1676:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1677;
  this1677 = v1675;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1678 = this1677;
  struct std__allocator_int_* base1679 = (struct std__allocator_int_*)((char *)t1678 + 0);
  std__allocator_int___allocator(base1679);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1680 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t1678 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base1680);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1681) {
bb1682:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1683;
  this1683 = v1681;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1684 = this1683;
  {
    struct std__allocator_int_* base1685 = (struct std__allocator_int_*)((char *)t1684 + 0);
    std__allocator_int____allocator(base1685);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2Ev
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1686) {
bb1687:
  struct std___Vector_base_int__std__allocator_int__* this1688;
  this1688 = v1686;
  struct std___Vector_base_int__std__allocator_int__* t1689 = this1688;
  _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2EvQ26is_default_constructible_vIN9__gnu_cxx14__alloc_traitsIT0_NS5_10value_typeEE6rebindIT_E5otherEE(&t1689->_M_impl);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1690:
  _Bool __retval1691;
    _Bool c1692 = 0;
    __retval1691 = c1692;
    _Bool t1693 = __retval1691;
    return t1693;
  abort();
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1694, int* v1695, unsigned long v1696) {
bb1697:
  struct std____new_allocator_int_* this1698;
  int* __p1699;
  unsigned long __n1700;
  this1698 = v1694;
  __p1699 = v1695;
  __n1700 = v1696;
  struct std____new_allocator_int_* t1701 = this1698;
    unsigned long c1702 = 4;
    unsigned long c1703 = 16;
    _Bool c1704 = ((c1702 > c1703)) ? 1 : 0;
    if (c1704) {
      int* t1705 = __p1699;
      void* cast1706 = (void*)t1705;
      unsigned long t1707 = __n1700;
      unsigned long c1708 = 4;
      unsigned long b1709 = t1707 * c1708;
      unsigned long c1710 = 4;
      operator_delete_3(cast1706, b1709, c1710);
      return;
    }
  int* t1711 = __p1699;
  void* cast1712 = (void*)t1711;
  unsigned long t1713 = __n1700;
  unsigned long c1714 = 4;
  unsigned long b1715 = t1713 * c1714;
  operator_delete_2(cast1712, b1715);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1716, int* v1717, unsigned long v1718) {
bb1719:
  struct std__allocator_int_* this1720;
  int* __p1721;
  unsigned long __n1722;
  this1720 = v1716;
  __p1721 = v1717;
  __n1722 = v1718;
  struct std__allocator_int_* t1723 = this1720;
    _Bool r1724 = std____is_constant_evaluated();
    if (r1724) {
      int* t1725 = __p1721;
      void* cast1726 = (void*)t1725;
      operator_delete(cast1726);
      return;
    }
  struct std____new_allocator_int_* base1727 = (struct std____new_allocator_int_*)((char *)t1723 + 0);
  int* t1728 = __p1721;
  unsigned long t1729 = __n1722;
  std____new_allocator_int___deallocate(base1727, t1728, t1729);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1730, int* v1731, unsigned long v1732) {
bb1733:
  struct std__allocator_int_* __a1734;
  int* __p1735;
  unsigned long __n1736;
  __a1734 = v1730;
  __p1735 = v1731;
  __n1736 = v1732;
  struct std__allocator_int_* t1737 = __a1734;
  int* t1738 = __p1735;
  unsigned long t1739 = __n1736;
  std__allocator_int___deallocate(t1737, t1738, t1739);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v1740, int* v1741, unsigned long v1742) {
bb1743:
  struct std___Vector_base_int__std__allocator_int__* this1744;
  int* __p1745;
  unsigned long __n1746;
  this1744 = v1740;
  __p1745 = v1741;
  __n1746 = v1742;
  struct std___Vector_base_int__std__allocator_int__* t1747 = this1744;
    int* t1748 = __p1745;
    _Bool cast1749 = (_Bool)t1748;
    if (cast1749) {
      struct std__allocator_int_* base1750 = (struct std__allocator_int_*)((char *)&(t1747->_M_impl) + 0);
      int* t1751 = __p1745;
      unsigned long t1752 = __n1746;
      std__allocator_traits_std__allocator_int_____deallocate(base1750, t1751, t1752);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1753) {
bb1754:
  struct std___Vector_base_int__std__allocator_int__* this1755;
  this1755 = v1753;
  struct std___Vector_base_int__std__allocator_int__* t1756 = this1755;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1757 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1756->_M_impl) + 0);
    int* t1758 = base1757->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1759 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1756->_M_impl) + 0);
    int* t1760 = base1759->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1761 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1756->_M_impl) + 0);
    int* t1762 = base1761->_M_start;
    long diff1763 = t1760 - t1762;
    unsigned long cast1764 = (unsigned long)diff1763;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1756, t1758, cast1764);
    if (__cir_exc_active) {
      {
        std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1756->_M_impl);
      }
      return;
    }
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1756->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1765) {
bb1766:
  struct std____new_allocator_int_* this1767;
  this1767 = v1765;
  struct std____new_allocator_int_* t1768 = this1767;
  return;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator(struct std__allocator_int_* v1769) {
bb1770:
  struct std__allocator_int_* this1771;
  this1771 = v1769;
  struct std__allocator_int_* t1772 = this1771;
  struct std____new_allocator_int_* base1773 = (struct std____new_allocator_int_*)((char *)t1772 + 0);
  std____new_allocator_int_____new_allocator(base1773);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1774) {
bb1775:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1776;
  this1776 = v1774;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1777 = this1776;
  int* c1778 = ((void*)0);
  t1777->_M_start = c1778;
  int* c1779 = ((void*)0);
  t1777->_M_finish = c1779;
  int* c1780 = ((void*)0);
  t1777->_M_end_of_storage = c1780;
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v1781) {
bb1782:
  struct std__allocator_int_* this1783;
  this1783 = v1781;
  struct std__allocator_int_* t1784 = this1783;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1785, int* v1786) {
bb1787:
  int* __first1788;
  int* __last1789;
  __first1788 = v1785;
  __last1789 = v1786;
      _Bool r1790 = std____is_constant_evaluated();
      if (r1790) {
          while (1) {
            int* t1792 = __first1788;
            int* t1793 = __last1789;
            _Bool c1794 = ((t1792 != t1793)) ? 1 : 0;
            if (!c1794) break;
            int* t1795 = __first1788;
            void_std__destroy_at_int_(t1795);
            if (__cir_exc_active) {
              return;
            }
          for_step1791: ;
            int* t1796 = __first1788;
            int c1797 = 1;
            int* ptr1798 = &(t1796)[c1797];
            __first1788 = ptr1798;
          }
      }
  return;
}

