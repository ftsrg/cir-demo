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
char _str[23] = "vectorOne.size() == 10";
char _str_1[102] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/vector6/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_2[27] = "vectorOne.capacity() == 10";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_3[23] = "Size of vectorOne is: ";
char _str_4[11] = " elements.";
char _str_5[27] = "Capacity of vectorOne is: ";
char _str_6[43] = "vectorOne contains the following elements:";
char _str_7[2] = " ";
char _str_8[75] = "Using reserve to reallocate vectorOne with enough storage for 40 elements.";
char _str_9[27] = "vectorOne.capacity() == 40";
char _str_10[84] = "Using resize to increase size of vector to 15 elements, with new elements set to 0.";
char _str_11[23] = "vectorOne.size() == 15";
char _str_12[55] = "Using resize to decrease size of vector to 5 elements.";
char _str_13[22] = "vectorOne.size() == 5";
char _str_14[49] = "cannot create std::vector larger than max_size()";
char _str_15[74] = "vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)";
char _str_16[91] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_vector.h";
char __PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm[92] = "reference std::vector<int>::operator[](size_type) [_Tp = int, _Alloc = std::allocator<int>]";
char _str_17[19] = "__n < this->size()";
char _str_18[16] = "vector::reserve";
char _str_19[23] = "vector::_M_fill_append";
char _str_20[98] = "/usr/lib64/gcc/x86_64-pc-linux-gnu/15.2.1/../../../../include/c++/15.2.1/bits/stl_uninitialized.h";
char __PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_[140] = "_ForwardIterator std::__do_uninit_fill_n(_ForwardIterator, _Size _Tp &) [_ForwardIterator = int *, _Size = unsigned long, _Tp = int]";
char _str_21[9] = "__n >= 0";
struct std__ranges____imove___IterMove _ZNSt6ranges4_Cpo9iter_moveE;
char _str_22[26] = "vector::_M_default_append";
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, struct std__allocator_int_* p2);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
unsigned long std__vector_int__std__allocator_int_____capacity___const(struct std__vector_int__std__allocator_int__* p0);
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
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__std__ostream___M_insert_unsigned_long_(struct std__basic_ostream_char__std__char_traits_char__* p0, unsigned long p1);
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___2(struct std__basic_ostream_char__std__char_traits_char__* p0, unsigned long p1);
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
extern int rand();
extern void std____throw_out_of_range_fmt(char* p0, ...);
void std__vector_int__std__allocator_int______M_range_check_unsigned_long__const(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
extern void std____glibcxx_assert_fail(char* p0, int p1, char* p2, char* p3);
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
int* std__vector_int__std__allocator_int_____at(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
extern struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator__(struct std__basic_ostream_char__std__char_traits_char__* p0, int p1);
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* p0);
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* p0);
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
void std__vector_int__std__allocator_int_____reserve(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* p0, int* p1);
void void_std___Construct_int__int_const__(int* p0, int* p1);
int* int__std____do_uninit_fill_n_int___unsigned_long__int_(int* p0, unsigned long p1, int* p2);
int* int__std__uninitialized_fill_n_int___unsigned_long__int_(int* p0, unsigned long p1, int* p2);
int* int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(int* p0, unsigned long p1, int* p2, struct std__allocator_int_* p3);
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* p0, unsigned long* p1);
unsigned long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, char* p2);
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
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);
void std__vector_int__std__allocator_int______M_fill_append(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, int* p2);
void std__vector_int__std__allocator_int______M_erase_at_end(struct std__vector_int__std__allocator_int__* p0, int* p1);
void std__vector_int__std__allocator_int_____resize_2(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, int* p2);
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* p0, int* p1, unsigned long p2, struct std___Vector_base_int__std__allocator_int__* p3);
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* p0);
void std__vector_int__std__allocator_int______M_default_append(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
void std__vector_int__std__allocator_int_____resize(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
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
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* p0);
void std__vector_int__std__allocator_int______M_default_initialize(struct std__vector_int__std__allocator_int__* p0, unsigned long p1);
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

// function: _ZNSt6vectorIiSaIiEEC2EmRKS0_
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* v5, unsigned long v6, struct std__allocator_int_* v7) {
bb8:
  struct std__vector_int__std__allocator_int__* this9;
  unsigned long __n10;
  struct std__allocator_int_* __a11;
  this9 = v5;
  __n10 = v6;
  __a11 = v7;
  struct std__vector_int__std__allocator_int__* t12 = this9;
  struct std___Vector_base_int__std__allocator_int__* base13 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t12 + 0);
  unsigned long t14 = __n10;
  struct std__allocator_int_* t15 = __a11;
  unsigned long r16 = std__vector_int__std__allocator_int______S_check_init_len(t14, t15);
  if (__cir_exc_active) {
    return;
  }
  struct std__allocator_int_* t17 = __a11;
  std___Vector_base_int__std__allocator_int______Vector_base(base13, r16, t17);
  if (__cir_exc_active) {
    return;
  }
    unsigned long t18 = __n10;
    std__vector_int__std__allocator_int______M_default_initialize(t12, t18);
    if (__cir_exc_active) {
      {
        struct std___Vector_base_int__std__allocator_int__* base19 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t12 + 0);
        std___Vector_base_int__std__allocator_int_______Vector_base(base19);
      }
      return;
    }
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v20) {
bb21:
  struct std__allocator_int_* this22;
  this22 = v20;
  struct std__allocator_int_* t23 = this22;
  return;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v24) {
bb25:
  struct std__vector_int__std__allocator_int__* this26;
  unsigned long __retval27;
  long __dif28;
  this26 = v24;
  struct std__vector_int__std__allocator_int__* t29 = this26;
  struct std___Vector_base_int__std__allocator_int__* base30 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t29 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base31 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base30->_M_impl) + 0);
  int* t32 = base31->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base33 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t29 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base34 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base33->_M_impl) + 0);
  int* t35 = base34->_M_start;
  long diff36 = t32 - t35;
  __dif28 = diff36;
    long t37 = __dif28;
    long c38 = 0;
    _Bool c39 = ((t37 < c38)) ? 1 : 0;
    if (c39) {
      __builtin_unreachable();
    }
  long t40 = __dif28;
  unsigned long cast41 = (unsigned long)t40;
  __retval27 = cast41;
  unsigned long t42 = __retval27;
  return t42;
}

// function: _ZNKSt6vectorIiSaIiEE8capacityEv
unsigned long std__vector_int__std__allocator_int_____capacity___const(struct std__vector_int__std__allocator_int__* v43) {
bb44:
  struct std__vector_int__std__allocator_int__* this45;
  unsigned long __retval46;
  long __dif47;
  this45 = v43;
  struct std__vector_int__std__allocator_int__* t48 = this45;
  struct std___Vector_base_int__std__allocator_int__* base49 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t48 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base50 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base49->_M_impl) + 0);
  int* t51 = base50->_M_end_of_storage;
  struct std___Vector_base_int__std__allocator_int__* base52 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t48 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base53 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base52->_M_impl) + 0);
  int* t54 = base53->_M_start;
  long diff55 = t51 - t54;
  __dif47 = diff55;
    long t56 = __dif47;
    long c57 = 0;
    _Bool c58 = ((t56 < c57)) ? 1 : 0;
    if (c58) {
      __builtin_unreachable();
    }
  long t59 = __dif47;
  unsigned long cast60 = (unsigned long)t59;
  __retval46 = cast60;
  unsigned long t61 = __retval46;
  return t61;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v62, int v63) {
bb64:
  int __a65;
  int __b66;
  int __retval67;
  __a65 = v62;
  __b66 = v63;
  int t68 = __a65;
  int t69 = __b66;
  int b70 = t68 | t69;
  __retval67 = b70;
  int t71 = __retval67;
  return t71;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v72) {
bb73:
  struct std__basic_ios_char__std__char_traits_char__* this74;
  int __retval75;
  this74 = v72;
  struct std__basic_ios_char__std__char_traits_char__* t76 = this74;
  struct std__ios_base* base77 = (struct std__ios_base*)((char *)t76 + 0);
  int t78 = base77->_M_streambuf_state;
  __retval75 = t78;
  int t79 = __retval75;
  return t79;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v80, int v81) {
bb82:
  struct std__basic_ios_char__std__char_traits_char__* this83;
  int __state84;
  this83 = v80;
  __state84 = v81;
  struct std__basic_ios_char__std__char_traits_char__* t85 = this83;
  int r86 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t85);
  if (__cir_exc_active) {
    return;
  }
  int t87 = __state84;
  int r88 = std__operator_(r86, t87);
  std__basic_ios_char__std__char_traits_char_____clear(t85, r88);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v89, char* v90) {
bb91:
  char* __c192;
  char* __c293;
  _Bool __retval94;
  __c192 = v89;
  __c293 = v90;
  char* t95 = __c192;
  char t96 = *t95;
  int cast97 = (int)t96;
  char* t98 = __c293;
  char t99 = *t98;
  int cast100 = (int)t99;
  _Bool c101 = ((cast97 == cast100)) ? 1 : 0;
  __retval94 = c101;
  _Bool t102 = __retval94;
  return t102;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v103) {
bb104:
  char* __p105;
  unsigned long __retval106;
  unsigned long __i107;
  __p105 = v103;
  unsigned long c108 = 0;
  __i107 = c108;
    char ref_tmp0109;
    while (1) {
      unsigned long t110 = __i107;
      char* t111 = __p105;
      char* ptr112 = &(t111)[t110];
      char c113 = 0;
      ref_tmp0109 = c113;
      _Bool r114 = __gnu_cxx__char_traits_char___eq(ptr112, &ref_tmp0109);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      _Bool u115 = !r114;
      if (!u115) break;
      unsigned long t116 = __i107;
      unsigned long u117 = t116 + 1;
      __i107 = u117;
    }
  unsigned long t118 = __i107;
  __retval106 = t118;
  unsigned long t119 = __retval106;
  return t119;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v120) {
bb121:
  char* __s122;
  unsigned long __retval123;
  __s122 = v120;
    _Bool r124 = std____is_constant_evaluated();
    if (r124) {
      char* t125 = __s122;
      unsigned long r126 = __gnu_cxx__char_traits_char___length(t125);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
      __retval123 = r126;
      unsigned long t127 = __retval123;
      return t127;
    }
  char* t128 = __s122;
  unsigned long r129 = strlen(t128);
  __retval123 = r129;
  unsigned long t130 = __retval123;
  return t130;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v131, char* v132) {
bb133:
  struct std__basic_ostream_char__std__char_traits_char__* __out134;
  char* __s135;
  struct std__basic_ostream_char__std__char_traits_char__* __retval136;
  __out134 = v131;
  __s135 = v132;
    char* t137 = __s135;
    _Bool cast138 = (_Bool)t137;
    _Bool u139 = !cast138;
    if (u139) {
      struct std__basic_ostream_char__std__char_traits_char__* t140 = __out134;
      void** v141 = (void**)t140;
      void* v142 = *((void**)v141);
      unsigned char* cast143 = (unsigned char*)v142;
      long c144 = -24;
      unsigned char* ptr145 = &(cast143)[c144];
      long* cast146 = (long*)ptr145;
      long t147 = *cast146;
      unsigned char* cast148 = (unsigned char*)t140;
      unsigned char* ptr149 = &(cast148)[t147];
      struct std__basic_ostream_char__std__char_traits_char__* cast150 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr149;
      struct std__basic_ios_char__std__char_traits_char__* cast151 = (struct std__basic_ios_char__std__char_traits_char__*)cast150;
      int t152 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast151, t152);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t153 = __out134;
      char* t154 = __s135;
      char* t155 = __s135;
      unsigned long r156 = std__char_traits_char___length(t155);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
      long cast157 = (long)r156;
      struct std__basic_ostream_char__std__char_traits_char__* r158 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t153, t154, cast157);
      if (__cir_exc_active) {
        struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
        return __cir_eh_ret;
      }
    }
  struct std__basic_ostream_char__std__char_traits_char__* t159 = __out134;
  __retval136 = t159;
  struct std__basic_ostream_char__std__char_traits_char__* t160 = __retval136;
  return t160;
}

// function: _ZNSolsEm
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___2(struct std__basic_ostream_char__std__char_traits_char__* v161, unsigned long v162) {
bb163:
  struct std__basic_ostream_char__std__char_traits_char__* this164;
  unsigned long __n165;
  struct std__basic_ostream_char__std__char_traits_char__* __retval166;
  this164 = v161;
  __n165 = v162;
  struct std__basic_ostream_char__std__char_traits_char__* t167 = this164;
  unsigned long t168 = __n165;
  struct std__basic_ostream_char__std__char_traits_char__* r169 = std__ostream__std__ostream___M_insert_unsigned_long_(t167, t168);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval166 = r169;
  struct std__basic_ostream_char__std__char_traits_char__* t170 = __retval166;
  return t170;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v171, void* v172) {
bb173:
  struct std__basic_ostream_char__std__char_traits_char__* this174;
  void* __pf175;
  struct std__basic_ostream_char__std__char_traits_char__* __retval176;
  this174 = v171;
  __pf175 = v172;
  struct std__basic_ostream_char__std__char_traits_char__* t177 = this174;
  void* t178 = __pf175;
  struct std__basic_ostream_char__std__char_traits_char__* r179 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t178)(t177);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval176 = r179;
  struct std__basic_ostream_char__std__char_traits_char__* t180 = __retval176;
  return t180;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v181) {
bb182:
  struct std__basic_ostream_char__std__char_traits_char__* __os183;
  struct std__basic_ostream_char__std__char_traits_char__* __retval184;
  __os183 = v181;
  struct std__basic_ostream_char__std__char_traits_char__* t185 = __os183;
  struct std__basic_ostream_char__std__char_traits_char__* r186 = std__ostream__flush(t185);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval184 = r186;
  struct std__basic_ostream_char__std__char_traits_char__* t187 = __retval184;
  return t187;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v188) {
bb189:
  struct std__ctype_char_* __f190;
  struct std__ctype_char_* __retval191;
  __f190 = v188;
    struct std__ctype_char_* t192 = __f190;
    _Bool cast193 = (_Bool)t192;
    _Bool u194 = !cast193;
    if (u194) {
      std____throw_bad_cast();
      if (__cir_exc_active) {
        struct std__ctype_char_* __cir_eh_ret = (struct std__ctype_char_*)0;
        return __cir_eh_ret;
      }
    }
  struct std__ctype_char_* t195 = __f190;
  __retval191 = t195;
  struct std__ctype_char_* t196 = __retval191;
  return t196;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v197, char v198) {
bb199:
  struct std__ctype_char_* this200;
  char __c201;
  char __retval202;
  this200 = v197;
  __c201 = v198;
  struct std__ctype_char_* t203 = this200;
    char t204 = t203->_M_widen_ok;
    _Bool cast205 = (_Bool)t204;
    if (cast205) {
      char t206 = __c201;
      unsigned char cast207 = (unsigned char)t206;
      unsigned long cast208 = (unsigned long)cast207;
      char t209 = t203->_M_widen[cast208];
      __retval202 = t209;
      char t210 = __retval202;
      return t210;
    }
  std__ctype_char____M_widen_init___const(t203);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t211 = __c201;
  void** v212 = (void**)t203;
  void* v213 = *((void**)v212);
  char vcall216 = (char)__VERIFIER_virtual_call_char_char(t203, 6, t211);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval202 = vcall216;
  char t217 = __retval202;
  return t217;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v218, char v219) {
bb220:
  struct std__basic_ios_char__std__char_traits_char__* this221;
  char __c222;
  char __retval223;
  this221 = v218;
  __c222 = v219;
  struct std__basic_ios_char__std__char_traits_char__* t224 = this221;
  struct std__ctype_char_* t225 = t224->_M_ctype;
  struct std__ctype_char_* r226 = std__ctype_char__const__std____check_facet_std__ctype_char___(t225);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  char t227 = __c222;
  char r228 = std__ctype_char___widen_char__const(r226, t227);
  if (__cir_exc_active) {
    char __cir_eh_ret = (char)0;
    return __cir_eh_ret;
  }
  __retval223 = r228;
  char t229 = __retval223;
  return t229;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v230) {
bb231:
  struct std__basic_ostream_char__std__char_traits_char__* __os232;
  struct std__basic_ostream_char__std__char_traits_char__* __retval233;
  __os232 = v230;
  struct std__basic_ostream_char__std__char_traits_char__* t234 = __os232;
  struct std__basic_ostream_char__std__char_traits_char__* t235 = __os232;
  void** v236 = (void**)t235;
  void* v237 = *((void**)v236);
  unsigned char* cast238 = (unsigned char*)v237;
  long c239 = -24;
  unsigned char* ptr240 = &(cast238)[c239];
  long* cast241 = (long*)ptr240;
  long t242 = *cast241;
  unsigned char* cast243 = (unsigned char*)t235;
  unsigned char* ptr244 = &(cast243)[t242];
  struct std__basic_ostream_char__std__char_traits_char__* cast245 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr244;
  struct std__basic_ios_char__std__char_traits_char__* cast246 = (struct std__basic_ios_char__std__char_traits_char__*)cast245;
  char c247 = 10;
  char r248 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast246, c247);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r249 = std__ostream__put(t234, r248);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  struct std__basic_ostream_char__std__char_traits_char__* r250 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r249);
  if (__cir_exc_active) {
    struct std__basic_ostream_char__std__char_traits_char__* __cir_eh_ret = (struct std__basic_ostream_char__std__char_traits_char__*)0;
    return __cir_eh_ret;
  }
  __retval233 = r250;
  struct std__basic_ostream_char__std__char_traits_char__* t251 = __retval233;
  return t251;
}

// function: _ZNKSt6vectorIiSaIiEE14_M_range_checkEm
void std__vector_int__std__allocator_int______M_range_check_unsigned_long__const(struct std__vector_int__std__allocator_int__* v252, unsigned long v253) {
bb254:
  struct std__vector_int__std__allocator_int__* this255;
  unsigned long __n256;
  this255 = v252;
  __n256 = v253;
  struct std__vector_int__std__allocator_int__* t257 = this255;
    unsigned long t258 = __n256;
    unsigned long r259 = std__vector_int__std__allocator_int_____size___const(t257);
    _Bool c260 = ((t258 >= r259)) ? 1 : 0;
    if (c260) {
      char* cast261 = (char*)&(_str_15);
      unsigned long t262 = __n256;
      unsigned long r263 = std__vector_int__std__allocator_int_____size___const(t257);
      std____throw_out_of_range_fmt(cast261, t262, r263);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEEixEm
int* std__vector_int__std__allocator_int_____operator__(struct std__vector_int__std__allocator_int__* v264, unsigned long v265) {
bb266:
  struct std__vector_int__std__allocator_int__* this267;
  unsigned long __n268;
  int* __retval269;
  this267 = v264;
  __n268 = v265;
  struct std__vector_int__std__allocator_int__* t270 = this267;
    do {
          unsigned long t271 = __n268;
          unsigned long r272 = std__vector_int__std__allocator_int_____size___const(t270);
          _Bool c273 = ((t271 < r272)) ? 1 : 0;
          _Bool u274 = !c273;
          if (u274) {
            char* cast275 = (char*)&(_str_16);
            int c276 = 1263;
            char* cast277 = (char*)&(__PRETTY_FUNCTION____ZNSt6vectorIiSaIiEEixEm);
            char* cast278 = (char*)&(_str_17);
            std____glibcxx_assert_fail(cast275, c276, cast277, cast278);
          }
      _Bool c279 = 0;
      if (!c279) break;
    } while (1);
  struct std___Vector_base_int__std__allocator_int__* base280 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t270 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base281 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base280->_M_impl) + 0);
  int* t282 = base281->_M_start;
  unsigned long t283 = __n268;
  int* ptr284 = &(t282)[t283];
  __retval269 = ptr284;
  int* t285 = __retval269;
  return t285;
}

// function: _ZNSt6vectorIiSaIiEE2atEm
int* std__vector_int__std__allocator_int_____at(struct std__vector_int__std__allocator_int__* v286, unsigned long v287) {
bb288:
  struct std__vector_int__std__allocator_int__* this289;
  unsigned long __n290;
  int* __retval291;
  this289 = v286;
  __n290 = v287;
  struct std__vector_int__std__allocator_int__* t292 = this289;
  unsigned long t293 = __n290;
  std__vector_int__std__allocator_int______M_range_check_unsigned_long__const(t292, t293);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  unsigned long t294 = __n290;
  int* r295 = std__vector_int__std__allocator_int_____operator__(t292, t294);
  __retval291 = r295;
  int* t296 = __retval291;
  return t296;
}

// function: _ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(struct std___Vector_base_int__std__allocator_int__* v297) {
bb298:
  struct std___Vector_base_int__std__allocator_int__* this299;
  struct std__allocator_int_* __retval300;
  this299 = v297;
  struct std___Vector_base_int__std__allocator_int__* t301 = this299;
  struct std__allocator_int_* base302 = (struct std__allocator_int_*)((char *)&(t301->_M_impl) + 0);
  __retval300 = base302;
  struct std__allocator_int_* t303 = __retval300;
  return t303;
}

// function: _ZNKSt6vectorIiSaIiEE8max_sizeEv
unsigned long std__vector_int__std__allocator_int_____max_size___const(struct std__vector_int__std__allocator_int__* v304) {
bb305:
  struct std__vector_int__std__allocator_int__* this306;
  unsigned long __retval307;
  this306 = v304;
  struct std__vector_int__std__allocator_int__* t308 = this306;
  struct std___Vector_base_int__std__allocator_int__* base309 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t308 + 0);
  struct std__allocator_int_* r310 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator___const(base309);
  unsigned long r311 = std__vector_int__std__allocator_int______S_max_size(r310);
  __retval307 = r311;
  unsigned long t312 = __retval307;
  return t312;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEC2ERKS1_
void __gnu_cxx____normal_iterator_int___void_____normal_iterator(struct __gnu_cxx____normal_iterator_int____void_* v313, int** v314) {
bb315:
  struct __gnu_cxx____normal_iterator_int____void_* this316;
  int** __i317;
  this316 = v313;
  __i317 = v314;
  struct __gnu_cxx____normal_iterator_int____void_* t318 = this316;
  int** t319 = __i317;
  int* t320 = *t319;
  t318->_M_current = t320;
  return;
}

// function: _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v321, int* v322) {
bb323:
  int* __location324;
  int* __args325;
  int* __retval326;
  void* __loc327;
  __location324 = v321;
  __args325 = v322;
  int* t328 = __location324;
  void* cast329 = (void*)t328;
  __loc327 = cast329;
    void* t330 = __loc327;
    int* cast331 = (int*)t330;
    int* t332 = __args325;
    int t333 = *t332;
    *cast331 = t333;
    __retval326 = cast331;
    int* t334 = __retval326;
    return t334;
  abort();
}

// function: _ZNSt16allocator_traitsISaIiEE9constructIiJiEEEvRS0_PT_DpOT0_
void void_std__allocator_traits_std__allocator_int_____construct_int__int_(struct std__allocator_int_* v335, int* v336, int* v337) {
bb338:
  struct std__allocator_int_* __a339;
  int* __p340;
  int* __args341;
  __a339 = v335;
  __p340 = v336;
  __args341 = v337;
  int* t342 = __p340;
  int* t343 = __args341;
  int* r344 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t342, t343);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE7destroyIiEEvRS0_PT_
void void_std__allocator_traits_std__allocator_int_____destroy_int_(struct std__allocator_int_* v345, int* v346) {
bb347:
  struct std__allocator_int_* __a348;
  int* __p349;
  __a348 = v345;
  __p349 = v346;
  int* t350 = __p349;
  void_std__destroy_at_int_(t350);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt19__relocate_object_aIiiSaIiEEvPT_PT0_RT1_
void void_std____relocate_object_a_int__int__std__allocator_int___(int* v351, int* v352, struct std__allocator_int_* v353) {
bb354:
  int* __dest355;
  int* __orig356;
  struct std__allocator_int_* __alloc357;
  __dest355 = v351;
  __orig356 = v352;
  __alloc357 = v353;
  struct std__allocator_int_* t358 = __alloc357;
  int* t359 = __dest355;
  int* t360 = __orig356;
  void_std__allocator_traits_std__allocator_int_____construct_int__int_(t358, t359, t360);
  struct std__allocator_int_* t361 = __alloc357;
  int* t362 = __orig356;
  void_std__allocator_traits_std__allocator_int_____destroy_int_(t361, t362);
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivEdeEv
int* __gnu_cxx____normal_iterator_int___void___operator____const(struct __gnu_cxx____normal_iterator_int____void_* v363) {
bb364:
  struct __gnu_cxx____normal_iterator_int____void_* this365;
  int* __retval366;
  this365 = v363;
  struct __gnu_cxx____normal_iterator_int____void_* t367 = this365;
  int* t368 = t367->_M_current;
  __retval366 = t368;
  int* t369 = __retval366;
  return t369;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEppEv
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator__(struct __gnu_cxx____normal_iterator_int____void_* v370) {
bb371:
  struct __gnu_cxx____normal_iterator_int____void_* this372;
  struct __gnu_cxx____normal_iterator_int____void_* __retval373;
  this372 = v370;
  struct __gnu_cxx____normal_iterator_int____void_* t374 = this372;
  int* t375 = t374->_M_current;
  int c376 = 1;
  int* ptr377 = &(t375)[c376];
  t374->_M_current = ptr377;
  __retval373 = t374;
  struct __gnu_cxx____normal_iterator_int____void_* t378 = __retval373;
  return t378;
}

// function: _ZSt14__relocate_a_1IPiN9__gnu_cxx17__normal_iteratorIS0_vEESaIiEET0_T_S6_S5_RT1_
struct __gnu_cxx____normal_iterator_int____void_ __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(int* v379, int* v380, struct __gnu_cxx____normal_iterator_int____void_ v381, struct std__allocator_int_* v382) {
bb383:
  int* __first384;
  int* __last385;
  struct __gnu_cxx____normal_iterator_int____void_ __result386;
  struct std__allocator_int_* __alloc387;
  struct __gnu_cxx____normal_iterator_int____void_ __retval388;
  __first384 = v379;
  __last385 = v380;
  __result386 = v381;
  __alloc387 = v382;
  __retval388 = __result386; // copy
    while (1) {
      int* t390 = __first384;
      int* t391 = __last385;
      _Bool c392 = ((t390 != t391)) ? 1 : 0;
      if (!c392) break;
      int* r393 = __gnu_cxx____normal_iterator_int___void___operator____const(&__retval388);
      int* t394 = __first384;
      struct std__allocator_int_* t395 = __alloc387;
      void_std____relocate_object_a_int__int__std__allocator_int___(r393, t394, t395);
    for_step389: ;
      int* t396 = __first384;
      int c397 = 1;
      int* ptr398 = &(t396)[c397];
      __first384 = ptr398;
      struct __gnu_cxx____normal_iterator_int____void_* r399 = __gnu_cxx____normal_iterator_int___void___operator__(&__retval388);
    }
  struct __gnu_cxx____normal_iterator_int____void_ t400 = __retval388;
  return t400;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPivEaSEOS2_
struct __gnu_cxx____normal_iterator_int____void_* __gnu_cxx____normal_iterator_int___void___operator_(struct __gnu_cxx____normal_iterator_int____void_* v401, struct __gnu_cxx____normal_iterator_int____void_* v402) {
bb403:
  struct __gnu_cxx____normal_iterator_int____void_* this404;
  struct __gnu_cxx____normal_iterator_int____void_* unnamed405;
  struct __gnu_cxx____normal_iterator_int____void_* __retval406;
  this404 = v401;
  unnamed405 = v402;
  struct __gnu_cxx____normal_iterator_int____void_* t407 = this404;
  struct __gnu_cxx____normal_iterator_int____void_* t408 = unnamed405;
  int* t409 = t408->_M_current;
  t407->_M_current = t409;
  __retval406 = t407;
  struct __gnu_cxx____normal_iterator_int____void_* t410 = __retval406;
  return t410;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPivE4baseEv
int** __gnu_cxx____normal_iterator_int___void___base___const(struct __gnu_cxx____normal_iterator_int____void_* v411) {
bb412:
  struct __gnu_cxx____normal_iterator_int____void_* this413;
  int** __retval414;
  this413 = v411;
  struct __gnu_cxx____normal_iterator_int____void_* t415 = this413;
  __retval414 = &t415->_M_current;
  int** t416 = __retval414;
  return t416;
}

// function: _ZSt14__relocate_a_1IiiENSt9enable_ifIXsr3std24__is_bitwise_relocatableIT_EE5valueEPS1_E4typeES2_S2_S2_RSaIT0_E
int* std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(int* v417, int* v418, int* v419, struct std__allocator_int_* v420) {
bb421:
  int* __first422;
  int* __last423;
  int* __result424;
  struct std__allocator_int_* __alloc425;
  int* __retval426;
  long __count427;
  __first422 = v417;
  __last423 = v418;
  __result424 = v419;
  __alloc425 = v420;
  int* t428 = __last423;
  int* t429 = __first422;
  long diff430 = t428 - t429;
  __count427 = diff430;
    long t431 = __count427;
    long c432 = 0;
    _Bool c433 = ((t431 > c432)) ? 1 : 0;
    if (c433) {
        _Bool r434 = std__is_constant_evaluated();
        if (r434) {
          struct __gnu_cxx____normal_iterator_int____void_ __out435;
          struct __gnu_cxx____normal_iterator_int____void_ ref_tmp0436;
          struct __gnu_cxx____normal_iterator_int____void_ agg_tmp0437;
          __gnu_cxx____normal_iterator_int___void_____normal_iterator(&__out435, &__result424);
          int* t438 = __first422;
          int* t439 = __last423;
          agg_tmp0437 = __out435; // copy
          struct std__allocator_int_* t440 = __alloc425;
          struct __gnu_cxx____normal_iterator_int____void_ t441 = agg_tmp0437;
          struct __gnu_cxx____normal_iterator_int____void_ r442 = __gnu_cxx____normal_iterator_int___void__std____relocate_a_1_int_____gnu_cxx____normal_iterator_int___void___std__allocator_int___(t438, t439, t441, t440);
          ref_tmp0436 = r442;
          struct __gnu_cxx____normal_iterator_int____void_* r443 = __gnu_cxx____normal_iterator_int___void___operator_(&__out435, &ref_tmp0436);
          int** r444 = __gnu_cxx____normal_iterator_int___void___base___const(&__out435);
          int* t445 = *r444;
          __retval426 = t445;
          int* t446 = __retval426;
          return t446;
        }
      int* t447 = __result424;
      void* cast448 = (void*)t447;
      int* t449 = __first422;
      void* cast450 = (void*)t449;
      long t451 = __count427;
      unsigned long cast452 = (unsigned long)t451;
      unsigned long c453 = 4;
      unsigned long b454 = cast452 * c453;
      void* r455 = memcpy(cast448, cast450, b454);
    }
  int* t456 = __result424;
  long t457 = __count427;
  int* ptr458 = &(t456)[t457];
  __retval426 = ptr458;
  int* t459 = __retval426;
  return t459;
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v460) {
bb461:
  int* __it462;
  int* __retval463;
  __it462 = v460;
  int* t464 = __it462;
  __retval463 = t464;
  int* t465 = __retval463;
  return t465;
}

// function: _ZSt12__relocate_aIPiS0_SaIiEET0_T_S3_S2_RT1_
int* int__std____relocate_a_int___int___std__allocator_int___(int* v466, int* v467, int* v468, struct std__allocator_int_* v469) {
bb470:
  int* __first471;
  int* __last472;
  int* __result473;
  struct std__allocator_int_* __alloc474;
  int* __retval475;
  __first471 = v466;
  __last472 = v467;
  __result473 = v468;
  __alloc474 = v469;
  int* t476 = __first471;
  int* r477 = int__std____niter_base_int__(t476);
  int* t478 = __last472;
  int* r479 = int__std____niter_base_int__(t478);
  int* t480 = __result473;
  int* r481 = int__std____niter_base_int__(t480);
  struct std__allocator_int_* t482 = __alloc474;
  int* r483 = std__enable_if_std____is_bitwise_relocatable_int___value__int____type_std____relocate_a_1_int__int_(r477, r479, r481, t482);
  __retval475 = r483;
  int* t484 = __retval475;
  return t484;
}

// function: _ZNSt6vectorIiSaIiEE11_S_relocateEPiS2_S2_RS0_
int* std__vector_int__std__allocator_int______S_relocate(int* v485, int* v486, int* v487, struct std__allocator_int_* v488) {
bb489:
  int* __first490;
  int* __last491;
  int* __result492;
  struct std__allocator_int_* __alloc493;
  int* __retval494;
  __first490 = v485;
  __last491 = v486;
  __result492 = v487;
  __alloc493 = v488;
  int* t495 = __first490;
  int* t496 = __last491;
  int* t497 = __result492;
  struct std__allocator_int_* t498 = __alloc493;
  int* r499 = int__std____relocate_a_int___int___std__allocator_int___(t495, t496, t497, t498);
  __retval494 = r499;
  int* t500 = __retval494;
  return t500;
}

// function: _ZNSt6vectorIiSaIiEE7reserveEm
void std__vector_int__std__allocator_int_____reserve(struct std__vector_int__std__allocator_int__* v501, unsigned long v502) {
bb503:
  struct std__vector_int__std__allocator_int__* this504;
  unsigned long __n505;
  this504 = v501;
  __n505 = v502;
  struct std__vector_int__std__allocator_int__* t506 = this504;
    unsigned long t507 = __n505;
    unsigned long r508 = std__vector_int__std__allocator_int_____max_size___const(t506);
    _Bool c509 = ((t507 > r508)) ? 1 : 0;
    if (c509) {
      char* cast510 = (char*)&(_str_18);
      std____throw_length_error(cast510);
      if (__cir_exc_active) {
        return;
      }
    }
    unsigned long r511 = std__vector_int__std__allocator_int_____capacity___const(t506);
    unsigned long t512 = __n505;
    _Bool c513 = ((r511 < t512)) ? 1 : 0;
    if (c513) {
      unsigned long __old_size514;
      int* __tmp515;
      unsigned long r516 = std__vector_int__std__allocator_int_____size___const(t506);
      __old_size514 = r516;
        struct std___Vector_base_int__std__allocator_int__* base517 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t506 + 0);
        unsigned long t518 = __n505;
        int* r519 = std___Vector_base_int__std__allocator_int______M_allocate(base517, t518);
        if (__cir_exc_active) {
          return;
        }
        __tmp515 = r519;
        struct std___Vector_base_int__std__allocator_int__* base520 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t506 + 0);
        struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base521 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base520->_M_impl) + 0);
        int* t522 = base521->_M_start;
        struct std___Vector_base_int__std__allocator_int__* base523 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t506 + 0);
        struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base524 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base523->_M_impl) + 0);
        int* t525 = base524->_M_finish;
        int* t526 = __tmp515;
        struct std___Vector_base_int__std__allocator_int__* base527 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t506 + 0);
        struct std__allocator_int_* r528 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base527);
        int* r529 = std__vector_int__std__allocator_int______S_relocate(t522, t525, t526, r528);
      struct std___Vector_base_int__std__allocator_int__* base530 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t506 + 0);
      struct std___Vector_base_int__std__allocator_int__* base531 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t506 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base532 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base531->_M_impl) + 0);
      int* t533 = base532->_M_start;
      struct std___Vector_base_int__std__allocator_int__* base534 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t506 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base535 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base534->_M_impl) + 0);
      int* t536 = base535->_M_end_of_storage;
      struct std___Vector_base_int__std__allocator_int__* base537 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t506 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base538 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base537->_M_impl) + 0);
      int* t539 = base538->_M_start;
      long diff540 = t536 - t539;
      unsigned long cast541 = (unsigned long)diff540;
      std___Vector_base_int__std__allocator_int______M_deallocate(base530, t533, cast541);
      if (__cir_exc_active) {
        return;
      }
      int* t542 = __tmp515;
      struct std___Vector_base_int__std__allocator_int__* base543 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t506 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base544 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base543->_M_impl) + 0);
      base544->_M_start = t542;
      int* t545 = __tmp515;
      unsigned long t546 = __old_size514;
      int* ptr547 = &(t545)[t546];
      struct std___Vector_base_int__std__allocator_int__* base548 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t506 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base549 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base548->_M_impl) + 0);
      base549->_M_finish = ptr547;
      struct std___Vector_base_int__std__allocator_int__* base550 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t506 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base551 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base550->_M_impl) + 0);
      int* t552 = base551->_M_start;
      unsigned long t553 = __n505;
      int* ptr554 = &(t552)[t553];
      struct std___Vector_base_int__std__allocator_int__* base555 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t506 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base556 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base555->_M_impl) + 0);
      base556->_M_end_of_storage = ptr554;
    }
  return;
}

// function: _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_
int* _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(int* v557, int* v558) {
bb559:
  int* __location560;
  int* __args561;
  int* __retval562;
  void* __loc563;
  __location560 = v557;
  __args561 = v558;
  int* t564 = __location560;
  void* cast565 = (void*)t564;
  __loc563 = cast565;
    void* t566 = __loc563;
    int* cast567 = (int*)t566;
    int* t568 = __args561;
    int t569 = *t568;
    *cast567 = t569;
    __retval562 = cast567;
    int* t570 = __retval562;
    return t570;
  abort();
}

// function: _ZSt10_ConstructIiJRKiEEvPT_DpOT0_
void void_std___Construct_int__int_const__(int* v571, int* v572) {
bb573:
  int* __p574;
  int* __args575;
  __p574 = v571;
  __args575 = v572;
    _Bool r576 = std____is_constant_evaluated();
    if (r576) {
      int* t577 = __p574;
      int* t578 = __args575;
      int* r579 = _ZSt12construct_atIiJRKiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S2_pispclsr3stdE7declvalIT0_EEEEEPS2_S5_DpOS4_(t577, t578);
      return;
    }
  int* t580 = __p574;
  void* cast581 = (void*)t580;
  int* cast582 = (int*)cast581;
  int* t583 = __args575;
  int t584 = *t583;
  *cast582 = t584;
  return;
}

// function: _ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_
int* int__std____do_uninit_fill_n_int___unsigned_long__int_(int* v585, unsigned long v586, int* v587) {
bb588:
  int* __first589;
  unsigned long __n590;
  int* __x591;
  int* __retval592;
  struct std___UninitDestroyGuard_int____void_ __guard593;
  __first589 = v585;
  __n590 = v586;
  __x591 = v587;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard593, &__first589);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
        do {
              unsigned long t594 = __n590;
              unsigned long c595 = 0;
              _Bool c596 = ((t594 >= c595)) ? 1 : 0;
              _Bool u597 = !c596;
              if (u597) {
                char* cast598 = (char*)&(_str_20);
                int c599 = 463;
                char* cast600 = (char*)&(__PRETTY_FUNCTION____ZSt18__do_uninit_fill_nIPimiET_S1_T0_RKT1_);
                char* cast601 = (char*)&(_str_21);
                std____glibcxx_assert_fail(cast598, c599, cast600, cast601);
              }
          _Bool c602 = 0;
          if (!c602) break;
        } while (1);
      while (1) {
        unsigned long t604 = __n590;
        unsigned long u605 = t604 - 1;
        __n590 = u605;
        _Bool cast606 = (_Bool)t604;
        if (!cast606) break;
        int* t607 = __first589;
        int* t608 = __x591;
        void_std___Construct_int__int_const__(t607, t608);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard593);
          }
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
      for_step603: ;
        int* t609 = __first589;
        int c610 = 1;
        int* ptr611 = &(t609)[c610];
        __first589 = ptr611;
      }
    std___UninitDestroyGuard_int___void___release(&__guard593);
    if (__cir_exc_active) {
      {
        std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard593);
      }
      int* __cir_eh_ret = (int*)0;
      return __cir_eh_ret;
    }
    int* t612 = __first589;
    __retval592 = t612;
    int* t613 = __retval592;
    int* ret_val614 = t613;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard593);
    }
    return ret_val614;
  abort();
}

// function: _ZSt20uninitialized_fill_nIPimiET_S1_T0_RKT1_
int* int__std__uninitialized_fill_n_int___unsigned_long__int_(int* v615, unsigned long v616, int* v617) {
bb618:
  int* __first619;
  unsigned long __n620;
  int* __x621;
  int* __retval622;
  __first619 = v615;
  __n620 = v616;
  __x621 = v617;
  int* t623 = __first619;
  unsigned long t624 = __n620;
  int* t625 = __x621;
  int* r626 = int__std____do_uninit_fill_n_int___unsigned_long__int_(t623, t624, t625);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval622 = r626;
  int* t627 = __retval622;
  return t627;
}

// function: _ZSt24__uninitialized_fill_n_aIPimiiET_S1_T0_RKT1_RSaIT2_E
int* int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(int* v628, unsigned long v629, int* v630, struct std__allocator_int_* v631) {
bb632:
  int* __first633;
  unsigned long __n634;
  int* __x635;
  struct std__allocator_int_* unnamed636;
  int* __retval637;
  __first633 = v628;
  __n634 = v629;
  __x635 = v630;
  unnamed636 = v631;
    _Bool r638 = std__is_constant_evaluated();
    if (r638) {
      int* t639 = __first633;
      unsigned long t640 = __n634;
      int* t641 = __x635;
      int* r642 = int__std____do_uninit_fill_n_int___unsigned_long__int_(t639, t640, t641);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      __retval637 = r642;
      int* t643 = __retval637;
      return t643;
    }
  int* t644 = __first633;
  unsigned long t645 = __n634;
  int* t646 = __x635;
  int* r647 = int__std__uninitialized_fill_n_int___unsigned_long__int_(t644, t645, t646);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval637 = r647;
  int* t648 = __retval637;
  return t648;
}

// function: _ZSt3maxImERKT_S2_S2_
unsigned long* unsigned_long_const__std__max_unsigned_long_(unsigned long* v649, unsigned long* v650) {
bb651:
  unsigned long* __a652;
  unsigned long* __b653;
  unsigned long* __retval654;
  __a652 = v649;
  __b653 = v650;
    unsigned long* t655 = __a652;
    unsigned long t656 = *t655;
    unsigned long* t657 = __b653;
    unsigned long t658 = *t657;
    _Bool c659 = ((t656 < t658)) ? 1 : 0;
    if (c659) {
      unsigned long* t660 = __b653;
      __retval654 = t660;
      unsigned long* t661 = __retval654;
      return t661;
    }
  unsigned long* t662 = __a652;
  __retval654 = t662;
  unsigned long* t663 = __retval654;
  return t663;
}

// function: _ZNKSt6vectorIiSaIiEE12_M_check_lenEmPKc
unsigned long std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(struct std__vector_int__std__allocator_int__* v664, unsigned long v665, char* v666) {
bb667:
  struct std__vector_int__std__allocator_int__* this668;
  unsigned long __n669;
  char* __s670;
  unsigned long __retval671;
  unsigned long __len672;
  unsigned long ref_tmp0673;
  this668 = v664;
  __n669 = v665;
  __s670 = v666;
  struct std__vector_int__std__allocator_int__* t674 = this668;
    unsigned long r675 = std__vector_int__std__allocator_int_____max_size___const(t674);
    unsigned long r676 = std__vector_int__std__allocator_int_____size___const(t674);
    unsigned long b677 = r675 - r676;
    unsigned long t678 = __n669;
    _Bool c679 = ((b677 < t678)) ? 1 : 0;
    if (c679) {
      char* t680 = __s670;
      std____throw_length_error(t680);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
    }
  unsigned long r681 = std__vector_int__std__allocator_int_____size___const(t674);
  unsigned long r682 = std__vector_int__std__allocator_int_____size___const(t674);
  ref_tmp0673 = r682;
  unsigned long* r683 = unsigned_long_const__std__max_unsigned_long_(&ref_tmp0673, &__n669);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long t684 = *r683;
  unsigned long b685 = r681 + t684;
  __len672 = b685;
  unsigned long t686 = __len672;
  unsigned long r687 = std__vector_int__std__allocator_int_____size___const(t674);
  _Bool c688 = ((t686 < r687)) ? 1 : 0;
  _Bool ternary689;
  if (c688) {
    _Bool c690 = 1;
    ternary689 = (_Bool)c690;
  } else {
    unsigned long t691 = __len672;
    unsigned long r692 = std__vector_int__std__allocator_int_____max_size___const(t674);
    _Bool c693 = ((t691 > r692)) ? 1 : 0;
    ternary689 = (_Bool)c693;
  }
  unsigned long ternary694;
  if (ternary689) {
    unsigned long r695 = std__vector_int__std__allocator_int_____max_size___const(t674);
    ternary694 = (unsigned long)r695;
  } else {
    unsigned long t696 = __len672;
    ternary694 = (unsigned long)t696;
  }
  __retval671 = ternary694;
  unsigned long t697 = __retval671;
  return t697;
}

// function: _ZNKRSt13move_iteratorIPiE4baseEv
int** std__move_iterator_int____base___const__(struct std__move_iterator_int___* v698) {
bb699:
  struct std__move_iterator_int___* this700;
  int** __retval701;
  this700 = v698;
  struct std__move_iterator_int___* t702 = this700;
  __retval701 = &t702->_M_current;
  int** t703 = __retval701;
  return t703;
}

// function: _ZSteqIPiEbRKSt13move_iteratorIT_ES5_
_Bool bool_std__operator___int__(struct std__move_iterator_int___* v704, struct std__move_iterator_int___* v705) {
bb706:
  struct std__move_iterator_int___* __x707;
  struct std__move_iterator_int___* __y708;
  _Bool __retval709;
  __x707 = v704;
  __y708 = v705;
  struct std__move_iterator_int___* t710 = __x707;
  int** r711 = std__move_iterator_int____base___const__(t710);
  int* t712 = *r711;
  struct std__move_iterator_int___* t713 = __y708;
  int** r714 = std__move_iterator_int____base___const__(t713);
  int* t715 = *r714;
  _Bool c716 = ((t712 == t715)) ? 1 : 0;
  __retval709 = c716;
  _Bool t717 = __retval709;
  return t717;
}

// function: _ZSt10_ConstructIiJiEEvPT_DpOT0_
void void_std___Construct_int__int_(int* v718, int* v719) {
bb720:
  int* __p721;
  int* __args722;
  __p721 = v718;
  __args722 = v719;
    _Bool r723 = std____is_constant_evaluated();
    if (r723) {
      int* t724 = __p721;
      int* t725 = __args722;
      int* r726 = _ZSt12construct_atIiJiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t724, t725);
      return;
    }
  int* t727 = __p721;
  void* cast728 = (void*)t727;
  int* cast729 = (int*)cast728;
  int* t730 = __args722;
  int t731 = *t730;
  *cast729 = t731;
  return;
}

// function: _ZNKSt6ranges7__imove9_IterMoveclIRKPiQoo11__adl_imoveIT_ErqTDTdeclsr3stdE7declvalIS6_EEEEEENS1_8__resultIS6_E4typeEOS6_
int* _ZNKSt6ranges7__imove9_IterMoveclIRKPiQoo11__adl_imoveIT_ErqTDTdeclsr3stdE7declvalIS6_EEEEEENS1_8__resultIS6_E4typeEOS6_(struct std__ranges____imove___IterMove* v732, int** v733) {
bb734:
  struct std__ranges____imove___IterMove* this735;
  int** __e736;
  int* __retval737;
  this735 = v732;
  __e736 = v733;
  struct std__ranges____imove___IterMove* t738 = this735;
      int** t739 = __e736;
      int* t740 = *t739;
      __retval737 = t740;
      int* t741 = __retval737;
      return t741;
  abort();
}

// function: _ZNKSt13move_iteratorIPiEdeEv
int* std__move_iterator_int____operator____const(struct std__move_iterator_int___* v742) {
bb743:
  struct std__move_iterator_int___* this744;
  int* __retval745;
  this744 = v742;
  struct std__move_iterator_int___* t746 = this744;
  int* r747 = _ZNKSt6ranges7__imove9_IterMoveclIRKPiQoo11__adl_imoveIT_ErqTDTdeclsr3stdE7declvalIS6_EEEEEENS1_8__resultIS6_E4typeEOS6_(&_ZNSt6ranges4_Cpo9iter_moveE, &t746->_M_current);
  __retval745 = r747;
  int* t748 = __retval745;
  return t748;
}

// function: _ZNSt13move_iteratorIPiEppEv
struct std__move_iterator_int___* std__move_iterator_int____operator__(struct std__move_iterator_int___* v749) {
bb750:
  struct std__move_iterator_int___* this751;
  struct std__move_iterator_int___* __retval752;
  this751 = v749;
  struct std__move_iterator_int___* t753 = this751;
  int* t754 = t753->_M_current;
  int c755 = 1;
  int* ptr756 = &(t754)[c755];
  t753->_M_current = ptr756;
  __retval752 = t753;
  struct std__move_iterator_int___* t757 = __retval752;
  return t757;
}

// function: _ZSt16__do_uninit_copyISt13move_iteratorIPiES2_S1_ET1_T_T0_S3_
int* int__std____do_uninit_copy_std__move_iterator_int____std__move_iterator_int____int__(struct std__move_iterator_int___ v758, struct std__move_iterator_int___ v759, int* v760) {
bb761:
  struct std__move_iterator_int___ __first762;
  struct std__move_iterator_int___ __last763;
  int* __result764;
  int* __retval765;
  struct std___UninitDestroyGuard_int____void_ __guard766;
  __first762 = v758;
  __last763 = v759;
  __result764 = v760;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard766, &__result764);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
      while (1) {
        _Bool r768 = bool_std__operator___int__(&__first762, &__last763);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard766);
          }
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
        _Bool u769 = !r768;
        if (!u769) break;
        int* t770 = __result764;
        int* r771 = std__move_iterator_int____operator____const(&__first762);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard766);
          }
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
        void_std___Construct_int__int_(t770, r771);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard766);
          }
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
      for_step767: ;
        struct std__move_iterator_int___* r772 = std__move_iterator_int____operator__(&__first762);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard766);
          }
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
        int* t773 = __result764;
        int c774 = 1;
        int* ptr775 = &(t773)[c774];
        __result764 = ptr775;
      }
    std___UninitDestroyGuard_int___void___release(&__guard766);
    if (__cir_exc_active) {
      {
        std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard766);
      }
      int* __cir_eh_ret = (int*)0;
      return __cir_eh_ret;
    }
    int* t776 = __result764;
    __retval765 = t776;
    int* t777 = __retval765;
    int* ret_val778 = t777;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard766);
    }
    return ret_val778;
  abort();
}

// function: _ZSt18uninitialized_copyISt13move_iteratorIPiES1_ET0_T_S4_S3_
int* int__std__uninitialized_copy_std__move_iterator_int____int__(struct std__move_iterator_int___ v779, struct std__move_iterator_int___ v780, int* v781) {
bb782:
  struct std__move_iterator_int___ __first783;
  struct std__move_iterator_int___ __last784;
  int* __result785;
  int* __retval786;
  __first783 = v779;
  __last784 = v780;
  __result785 = v781;
        struct std__move_iterator_int___ agg_tmp0787;
        struct std__move_iterator_int___ agg_tmp1788;
        agg_tmp0787 = __first783; // copy
        agg_tmp1788 = __last784; // copy
        int* t789 = __result785;
        struct std__move_iterator_int___ t790 = agg_tmp0787;
        struct std__move_iterator_int___ t791 = agg_tmp1788;
        int* r792 = int__std____do_uninit_copy_std__move_iterator_int____std__move_iterator_int____int__(t790, t791, t789);
        if (__cir_exc_active) {
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
        __retval786 = r792;
        int* t793 = __retval786;
        return t793;
  abort();
}

// function: _ZSt22__uninitialized_copy_aISt13move_iteratorIPiES2_S1_iET1_T_T0_S3_RSaIT2_E
int* int__std____uninitialized_copy_a_std__move_iterator_int____std__move_iterator_int____int___int_(struct std__move_iterator_int___ v794, struct std__move_iterator_int___ v795, int* v796, struct std__allocator_int_* v797) {
bb798:
  struct std__move_iterator_int___ __first799;
  struct std__move_iterator_int___ __last800;
  int* __result801;
  struct std__allocator_int_* unnamed802;
  int* __retval803;
  __first799 = v794;
  __last800 = v795;
  __result801 = v796;
  unnamed802 = v797;
    _Bool r804 = std__is_constant_evaluated();
    if (r804) {
      struct std__move_iterator_int___ agg_tmp0805;
      struct std__move_iterator_int___ agg_tmp1806;
      agg_tmp0805 = __first799; // copy
      agg_tmp1806 = __last800; // copy
      int* t807 = __result801;
      struct std__move_iterator_int___ t808 = agg_tmp0805;
      struct std__move_iterator_int___ t809 = agg_tmp1806;
      int* r810 = int__std____do_uninit_copy_std__move_iterator_int____std__move_iterator_int____int__(t808, t809, t807);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      __retval803 = r810;
      int* t811 = __retval803;
      return t811;
    }
    struct std__move_iterator_int___ agg_tmp2812;
    struct std__move_iterator_int___ agg_tmp3813;
    agg_tmp2812 = __first799; // copy
    agg_tmp3813 = __last800; // copy
    int* t814 = __result801;
    struct std__move_iterator_int___ t815 = agg_tmp2812;
    struct std__move_iterator_int___ t816 = agg_tmp3813;
    int* r817 = int__std__uninitialized_copy_std__move_iterator_int____int__(t815, t816, t814);
    if (__cir_exc_active) {
      int* __cir_eh_ret = (int*)0;
      return __cir_eh_ret;
    }
    __retval803 = r817;
    int* t818 = __retval803;
    return t818;
  abort();
}

// function: _ZNSt13move_iteratorIPiEC2ES0_
void std__move_iterator_int____move_iterator(struct std__move_iterator_int___* v819, int* v820) {
bb821:
  struct std__move_iterator_int___* this822;
  int* __i823;
  this822 = v819;
  __i823 = v820;
  struct std__move_iterator_int___* t824 = this822;
  struct std____detail____move_iter_cat_int___* base825 = (struct std____detail____move_iter_cat_int___*)((char *)t824 + 0);
  int* t826 = __i823;
  t824->_M_current = t826;
  return;
}

// function: _ZSt32__make_move_if_noexcept_iteratorIiSt13move_iteratorIPiEET0_PT_
struct std__move_iterator_int___ std__move_iterator_int___std____make_move_if_noexcept_iterator_int__std__move_iterator_int____(int* v827) {
bb828:
  int* __i829;
  struct std__move_iterator_int___ __retval830;
  __i829 = v827;
  int* t831 = __i829;
  std__move_iterator_int____move_iterator(&__retval830, t831);
  if (__cir_exc_active) {
    struct std__move_iterator_int___ __cir_eh_ret = {0};
    return __cir_eh_ret;
  }
  struct std__move_iterator_int___ t832 = __retval830;
  return t832;
}

// function: _ZSt34__uninitialized_move_if_noexcept_aIPiS0_SaIiEET0_T_S3_S2_RT1_
int* int__std____uninitialized_move_if_noexcept_a_int___int___std__allocator_int___(int* v833, int* v834, int* v835, struct std__allocator_int_* v836) {
bb837:
  int* __first838;
  int* __last839;
  int* __result840;
  struct std__allocator_int_* __alloc841;
  int* __retval842;
  struct std__move_iterator_int___ agg_tmp0843;
  struct std__move_iterator_int___ agg_tmp1844;
  __first838 = v833;
  __last839 = v834;
  __result840 = v835;
  __alloc841 = v836;
  int* t845 = __first838;
  struct std__move_iterator_int___ r846 = std__move_iterator_int___std____make_move_if_noexcept_iterator_int__std__move_iterator_int____(t845);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  agg_tmp0843 = r846;
  int* t847 = __last839;
  struct std__move_iterator_int___ r848 = std__move_iterator_int___std____make_move_if_noexcept_iterator_int__std__move_iterator_int____(t847);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  agg_tmp1844 = r848;
  int* t849 = __result840;
  struct std__allocator_int_* t850 = __alloc841;
  struct std__move_iterator_int___ t851 = agg_tmp0843;
  struct std__move_iterator_int___ t852 = agg_tmp1844;
  int* r853 = int__std____uninitialized_copy_a_std__move_iterator_int____std__move_iterator_int____int___int_(t851, t852, t849, t850);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval842 = r853;
  int* t854 = __retval842;
  return t854;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v855, int* v856, struct std__allocator_int_* v857) {
bb858:
  int* __first859;
  int* __last860;
  struct std__allocator_int_* unnamed861;
  __first859 = v855;
  __last860 = v856;
  unnamed861 = v857;
  int* t862 = __first859;
  int* t863 = __last860;
  void_std___Destroy_int__(t862, t863);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt6vectorIiSaIiEE14_M_fill_appendEmRKi
void std__vector_int__std__allocator_int______M_fill_append(struct std__vector_int__std__allocator_int__* v864, unsigned long v865, int* v866) {
bb867:
  struct std__vector_int__std__allocator_int__* this868;
  unsigned long __n869;
  int* __x870;
  this868 = v864;
  __n869 = v865;
  __x870 = v866;
  struct std__vector_int__std__allocator_int__* t871 = this868;
    struct std___Vector_base_int__std__allocator_int__* base872 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t871 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base873 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base872->_M_impl) + 0);
    int* t874 = base873->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int__* base875 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t871 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base876 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base875->_M_impl) + 0);
    int* t877 = base876->_M_finish;
    long diff878 = t874 - t877;
    unsigned long cast879 = (unsigned long)diff878;
    unsigned long t880 = __n869;
    _Bool c881 = ((cast879 >= t880)) ? 1 : 0;
    if (c881) {
      struct std___Vector_base_int__std__allocator_int__* base882 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t871 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base883 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base882->_M_impl) + 0);
      int* t884 = base883->_M_finish;
      unsigned long t885 = __n869;
      int* t886 = __x870;
      struct std___Vector_base_int__std__allocator_int__* base887 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t871 + 0);
      struct std__allocator_int_* r888 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base887);
      int* r889 = int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(t884, t885, t886, r888);
      if (__cir_exc_active) {
        return;
      }
      struct std___Vector_base_int__std__allocator_int__* base890 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t871 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base891 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base890->_M_impl) + 0);
      base891->_M_finish = r889;
    } else {
      int* __old_start892;
      int* __old_finish893;
      unsigned long __old_size894;
      unsigned long __len895;
      int* __new_start896;
      int* __new_finish897;
      struct std___Vector_base_int__std__allocator_int__* base898 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t871 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base899 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base898->_M_impl) + 0);
      int* t900 = base899->_M_start;
      __old_start892 = t900;
      struct std___Vector_base_int__std__allocator_int__* base901 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t871 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base902 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base901->_M_impl) + 0);
      int* t903 = base902->_M_finish;
      __old_finish893 = t903;
      int* t904 = __old_finish893;
      int* t905 = __old_start892;
      long diff906 = t904 - t905;
      unsigned long cast907 = (unsigned long)diff906;
      __old_size894 = cast907;
      unsigned long t908 = __n869;
      char* cast909 = (char*)&(_str_19);
      unsigned long r910 = std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(t871, t908, cast909);
      if (__cir_exc_active) {
        return;
      }
      __len895 = r910;
      struct std___Vector_base_int__std__allocator_int__* base911 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t871 + 0);
      unsigned long t912 = __len895;
      int* r913 = std___Vector_base_int__std__allocator_int______M_allocate(base911, t912);
      if (__cir_exc_active) {
        return;
      }
      __new_start896 = r913;
      int* t914 = __new_start896;
      unsigned long t915 = __old_size894;
      int* ptr916 = &(t914)[t915];
      __new_finish897 = ptr916;
          int* t918 = __new_finish897;
          unsigned long t919 = __n869;
          int* t920 = __x870;
          struct std___Vector_base_int__std__allocator_int__* base921 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t871 + 0);
          struct std__allocator_int_* r922 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base921);
          int* r923 = int__std____uninitialized_fill_n_a_int___unsigned_long__int__int_(t918, t919, t920, r922);
          if (__cir_exc_active) {
            goto cir_try_dispatch917;
          }
          __new_finish897 = r923;
          int* t924 = __old_start892;
          int* t925 = __old_finish893;
          int* t926 = __new_start896;
          struct std___Vector_base_int__std__allocator_int__* base927 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t871 + 0);
          struct std__allocator_int_* r928 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base927);
          int* r929 = int__std____uninitialized_move_if_noexcept_a_int___int___std__allocator_int___(t924, t925, t926, r928);
          if (__cir_exc_active) {
            goto cir_try_dispatch917;
          }
        cir_try_dispatch917: ;
        if (__cir_exc_active) {
        {
          int ca_tok930 = 0;
          void* ca_exn931 = (void*)__cir_exc_ptr;
          __cir_exc_active = 0;
            int* t932 = __new_start896;
            unsigned long t933 = __old_size894;
            int* ptr934 = &(t932)[t933];
            int* t935 = __new_finish897;
            struct std___Vector_base_int__std__allocator_int__* base936 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t871 + 0);
            struct std__allocator_int_* r937 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base936);
            void_std___Destroy_int___int_(ptr934, t935, r937);
            if (__cir_exc_active) {
              {
                if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); __cir_exc_dtor = (void*)0; }
              }
              return;
            }
            struct std___Vector_base_int__std__allocator_int__* base938 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t871 + 0);
            int* t939 = __new_start896;
            unsigned long t940 = __len895;
            std___Vector_base_int__std__allocator_int______M_deallocate(base938, t939, t940);
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
      int* t941 = __old_start892;
      int* t942 = __old_finish893;
      struct std___Vector_base_int__std__allocator_int__* base943 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t871 + 0);
      struct std__allocator_int_* r944 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base943);
      void_std___Destroy_int___int_(t941, t942, r944);
      if (__cir_exc_active) {
        return;
      }
      struct std___Vector_base_int__std__allocator_int__* base945 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t871 + 0);
      int* t946 = __old_start892;
      struct std___Vector_base_int__std__allocator_int__* base947 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t871 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base948 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base947->_M_impl) + 0);
      int* t949 = base948->_M_end_of_storage;
      int* t950 = __old_start892;
      long diff951 = t949 - t950;
      unsigned long cast952 = (unsigned long)diff951;
      std___Vector_base_int__std__allocator_int______M_deallocate(base945, t946, cast952);
      if (__cir_exc_active) {
        return;
      }
      int* t953 = __new_start896;
      struct std___Vector_base_int__std__allocator_int__* base954 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t871 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base955 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base954->_M_impl) + 0);
      base955->_M_start = t953;
      int* t956 = __new_finish897;
      struct std___Vector_base_int__std__allocator_int__* base957 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t871 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base958 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base957->_M_impl) + 0);
      base958->_M_finish = t956;
      int* t959 = __new_start896;
      unsigned long t960 = __len895;
      int* ptr961 = &(t959)[t960];
      struct std___Vector_base_int__std__allocator_int__* base962 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t871 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base963 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base962->_M_impl) + 0);
      base963->_M_end_of_storage = ptr961;
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE15_M_erase_at_endEPi
void std__vector_int__std__allocator_int______M_erase_at_end(struct std__vector_int__std__allocator_int__* v964, int* v965) {
bb966:
  struct std__vector_int__std__allocator_int__* this967;
  int* __pos968;
  this967 = v964;
  __pos968 = v965;
  struct std__vector_int__std__allocator_int__* t969 = this967;
    unsigned long __n970;
    struct std___Vector_base_int__std__allocator_int__* base971 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t969 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base972 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base971->_M_impl) + 0);
    int* t973 = base972->_M_finish;
    int* t974 = __pos968;
    long diff975 = t973 - t974;
    unsigned long cast976 = (unsigned long)diff975;
    __n970 = cast976;
    unsigned long t977 = __n970;
    _Bool cast978 = (_Bool)t977;
    if (cast978) {
      int* t979 = __pos968;
      struct std___Vector_base_int__std__allocator_int__* base980 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t969 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base981 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base980->_M_impl) + 0);
      int* t982 = base981->_M_finish;
      struct std___Vector_base_int__std__allocator_int__* base983 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t969 + 0);
      struct std__allocator_int_* r984 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base983);
      void_std___Destroy_int___int_(t979, t982, r984);
      if (__cir_exc_active) {
        return;
      }
      int* t985 = __pos968;
      struct std___Vector_base_int__std__allocator_int__* base986 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t969 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base987 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base986->_M_impl) + 0);
      base987->_M_finish = t985;
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE6resizeEmRKi
void std__vector_int__std__allocator_int_____resize_2(struct std__vector_int__std__allocator_int__* v988, unsigned long v989, int* v990) {
bb991:
  struct std__vector_int__std__allocator_int__* this992;
  unsigned long __new_size993;
  int* __x994;
  this992 = v988;
  __new_size993 = v989;
  __x994 = v990;
  struct std__vector_int__std__allocator_int__* t995 = this992;
    unsigned long t996 = __new_size993;
    unsigned long r997 = std__vector_int__std__allocator_int_____size___const(t995);
    _Bool c998 = ((t996 > r997)) ? 1 : 0;
    if (c998) {
      unsigned long t999 = __new_size993;
      unsigned long r1000 = std__vector_int__std__allocator_int_____size___const(t995);
      unsigned long b1001 = t999 - r1000;
      int* t1002 = __x994;
      std__vector_int__std__allocator_int______M_fill_append(t995, b1001, t1002);
      if (__cir_exc_active) {
        return;
      }
    } else {
        unsigned long t1003 = __new_size993;
        unsigned long r1004 = std__vector_int__std__allocator_int_____size___const(t995);
        _Bool c1005 = ((t1003 < r1004)) ? 1 : 0;
        if (c1005) {
          struct std___Vector_base_int__std__allocator_int__* base1006 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t995 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1007 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1006->_M_impl) + 0);
          int* t1008 = base1007->_M_start;
          unsigned long t1009 = __new_size993;
          int* ptr1010 = &(t1008)[t1009];
          std__vector_int__std__allocator_int______M_erase_at_end(t995, ptr1010);
        }
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocC2EPimRSt12_Vector_baseIiS0_E
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v1011, int* v1012, unsigned long v1013, struct std___Vector_base_int__std__allocator_int__* v1014) {
bb1015:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this1016;
  int* __s1017;
  unsigned long __l1018;
  struct std___Vector_base_int__std__allocator_int__* __vect1019;
  this1016 = v1011;
  __s1017 = v1012;
  __l1018 = v1013;
  __vect1019 = v1014;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t1020 = this1016;
  int* t1021 = __s1017;
  t1020->_M_storage = t1021;
  unsigned long t1022 = __l1018;
  t1020->_M_len = t1022;
  struct std___Vector_base_int__std__allocator_int__* t1023 = __vect1019;
  t1020->_M_vect = t1023;
  return;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocD2Ev
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v1024) {
bb1025:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this1026;
  this1026 = v1024;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t1027 = this1026;
    int* t1028 = t1027->_M_storage;
    _Bool cast1029 = (_Bool)t1028;
    if (cast1029) {
      struct std___Vector_base_int__std__allocator_int__* t1030 = t1027->_M_vect;
      int* t1031 = t1027->_M_storage;
      unsigned long t1032 = t1027->_M_len;
      std___Vector_base_int__std__allocator_int______M_deallocate(t1030, t1031, t1032);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_M_default_appendEm
void std__vector_int__std__allocator_int______M_default_append(struct std__vector_int__std__allocator_int__* v1033, unsigned long v1034) {
bb1035:
  struct std__vector_int__std__allocator_int__* this1036;
  unsigned long __n1037;
  this1036 = v1033;
  __n1037 = v1034;
  struct std__vector_int__std__allocator_int__* t1038 = this1036;
    unsigned long t1039 = __n1037;
    unsigned long c1040 = 0;
    _Bool c1041 = ((t1039 != c1040)) ? 1 : 0;
    if (c1041) {
      unsigned long __size1042;
      unsigned long __navail1043;
      unsigned long r1044 = std__vector_int__std__allocator_int_____size___const(t1038);
      __size1042 = r1044;
      struct std___Vector_base_int__std__allocator_int__* base1045 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1038 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1046 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1045->_M_impl) + 0);
      int* t1047 = base1046->_M_end_of_storage;
      struct std___Vector_base_int__std__allocator_int__* base1048 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1038 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1049 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1048->_M_impl) + 0);
      int* t1050 = base1049->_M_finish;
      long diff1051 = t1047 - t1050;
      unsigned long cast1052 = (unsigned long)diff1051;
      __navail1043 = cast1052;
        unsigned long t1053 = __size1042;
        unsigned long r1054 = std__vector_int__std__allocator_int_____max_size___const(t1038);
        _Bool c1055 = ((t1053 > r1054)) ? 1 : 0;
        _Bool ternary1056;
        if (c1055) {
          _Bool c1057 = 1;
          ternary1056 = (_Bool)c1057;
        } else {
          unsigned long t1058 = __navail1043;
          unsigned long r1059 = std__vector_int__std__allocator_int_____max_size___const(t1038);
          unsigned long t1060 = __size1042;
          unsigned long b1061 = r1059 - t1060;
          _Bool c1062 = ((t1058 > b1061)) ? 1 : 0;
          ternary1056 = (_Bool)c1062;
        }
        if (ternary1056) {
          __builtin_unreachable();
        }
        unsigned long t1063 = __navail1043;
        unsigned long t1064 = __n1037;
        _Bool c1065 = ((t1063 >= t1064)) ? 1 : 0;
        if (c1065) {
            struct std___Vector_base_int__std__allocator_int__* base1066 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1038 + 0);
            struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1067 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1066->_M_impl) + 0);
            int* t1068 = base1067->_M_finish;
            _Bool cast1069 = (_Bool)t1068;
            _Bool u1070 = !cast1069;
            if (u1070) {
              __builtin_unreachable();
            }
          struct std___Vector_base_int__std__allocator_int__* base1071 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1038 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1072 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1071->_M_impl) + 0);
          int* t1073 = base1072->_M_finish;
          unsigned long t1074 = __n1037;
          struct std___Vector_base_int__std__allocator_int__* base1075 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1038 + 0);
          struct std__allocator_int_* r1076 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1075);
          int* r1077 = int__std____uninitialized_default_n_a_int___unsigned_long__int_(t1073, t1074, r1076);
          if (__cir_exc_active) {
            return;
          }
          struct std___Vector_base_int__std__allocator_int__* base1078 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1038 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1079 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1078->_M_impl) + 0);
          base1079->_M_finish = r1077;
        } else {
          int* __old_start1080;
          int* __old_finish1081;
          unsigned long __len1082;
          int* __new_start1083;
          struct std___Vector_base_int__std__allocator_int__* base1084 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1038 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1085 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1084->_M_impl) + 0);
          int* t1086 = base1085->_M_start;
          __old_start1080 = t1086;
          struct std___Vector_base_int__std__allocator_int__* base1087 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1038 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1088 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1087->_M_impl) + 0);
          int* t1089 = base1088->_M_finish;
          __old_finish1081 = t1089;
          unsigned long t1090 = __n1037;
          char* cast1091 = (char*)&(_str_22);
          unsigned long r1092 = std__vector_int__std__allocator_int______M_check_len_unsigned_long__char_const___const(t1038, t1090, cast1091);
          if (__cir_exc_active) {
            return;
          }
          __len1082 = r1092;
          struct std___Vector_base_int__std__allocator_int__* base1093 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1038 + 0);
          unsigned long t1094 = __len1082;
          int* r1095 = std___Vector_base_int__std__allocator_int______M_allocate(base1093, t1094);
          if (__cir_exc_active) {
            return;
          }
          __new_start1083 = r1095;
            struct std__vector_int__std__allocator_int_____Guard_alloc __guard1096;
            int* t1097 = __new_start1083;
            unsigned long t1098 = __len1082;
            struct std___Vector_base_int__std__allocator_int__* base1099 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1038 + 0);
            std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(&__guard1096, t1097, t1098, base1099);
            if (__cir_exc_active) {
              return;
            }
              int* t1100 = __new_start1083;
              unsigned long t1101 = __size1042;
              int* ptr1102 = &(t1100)[t1101];
              unsigned long t1103 = __n1037;
              struct std___Vector_base_int__std__allocator_int__* base1104 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1038 + 0);
              struct std__allocator_int_* r1105 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1104);
              int* r1106 = int__std____uninitialized_default_n_a_int___unsigned_long__int_(ptr1102, t1103, r1105);
              if (__cir_exc_active) {
                {
                  std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(&__guard1096);
                }
                return;
              }
                int* t1107 = __old_start1080;
                int* t1108 = __old_finish1081;
                int* t1109 = __new_start1083;
                struct std___Vector_base_int__std__allocator_int__* base1110 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1038 + 0);
                struct std__allocator_int_* r1111 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1110);
                int* r1112 = std__vector_int__std__allocator_int______S_relocate(t1107, t1108, t1109, r1111);
              int* t1113 = __old_start1080;
              __guard1096._M_storage = t1113;
              struct std___Vector_base_int__std__allocator_int__* base1114 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1038 + 0);
              struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1115 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1114->_M_impl) + 0);
              int* t1116 = base1115->_M_end_of_storage;
              int* t1117 = __old_start1080;
              long diff1118 = t1116 - t1117;
              unsigned long cast1119 = (unsigned long)diff1118;
              __guard1096._M_len = cast1119;
            {
              std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(&__guard1096);
            }
          int* t1120 = __new_start1083;
          struct std___Vector_base_int__std__allocator_int__* base1121 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1038 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1122 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1121->_M_impl) + 0);
          base1122->_M_start = t1120;
          int* t1123 = __new_start1083;
          unsigned long t1124 = __size1042;
          int* ptr1125 = &(t1123)[t1124];
          unsigned long t1126 = __n1037;
          int* ptr1127 = &(ptr1125)[t1126];
          struct std___Vector_base_int__std__allocator_int__* base1128 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1038 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1129 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1128->_M_impl) + 0);
          base1129->_M_finish = ptr1127;
          int* t1130 = __new_start1083;
          unsigned long t1131 = __len1082;
          int* ptr1132 = &(t1130)[t1131];
          struct std___Vector_base_int__std__allocator_int__* base1133 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1038 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1134 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1133->_M_impl) + 0);
          base1134->_M_end_of_storage = ptr1132;
        }
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE6resizeEm
void std__vector_int__std__allocator_int_____resize(struct std__vector_int__std__allocator_int__* v1135, unsigned long v1136) {
bb1137:
  struct std__vector_int__std__allocator_int__* this1138;
  unsigned long __new_size1139;
  this1138 = v1135;
  __new_size1139 = v1136;
  struct std__vector_int__std__allocator_int__* t1140 = this1138;
    unsigned long t1141 = __new_size1139;
    unsigned long r1142 = std__vector_int__std__allocator_int_____size___const(t1140);
    _Bool c1143 = ((t1141 > r1142)) ? 1 : 0;
    if (c1143) {
      unsigned long t1144 = __new_size1139;
      unsigned long r1145 = std__vector_int__std__allocator_int_____size___const(t1140);
      unsigned long b1146 = t1144 - r1145;
      std__vector_int__std__allocator_int______M_default_append(t1140, b1146);
      if (__cir_exc_active) {
        return;
      }
    } else {
        unsigned long t1147 = __new_size1139;
        unsigned long r1148 = std__vector_int__std__allocator_int_____size___const(t1140);
        _Bool c1149 = ((t1147 < r1148)) ? 1 : 0;
        if (c1149) {
          struct std___Vector_base_int__std__allocator_int__* base1150 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1140 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1151 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1150->_M_impl) + 0);
          int* t1152 = base1151->_M_start;
          unsigned long t1153 = __new_size1139;
          int* ptr1154 = &(t1152)[t1153];
          std__vector_int__std__allocator_int______M_erase_at_end(t1140, ptr1154);
        }
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v1155) {
bb1156:
  struct std__vector_int__std__allocator_int__* this1157;
  this1157 = v1155;
  struct std__vector_int__std__allocator_int__* t1158 = this1157;
    struct std___Vector_base_int__std__allocator_int__* base1159 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1158 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1160 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1159->_M_impl) + 0);
    int* t1161 = base1160->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base1162 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1158 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1163 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1162->_M_impl) + 0);
    int* t1164 = base1163->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base1165 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1158 + 0);
    struct std__allocator_int_* r1166 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1165);
    void_std___Destroy_int___int_(t1161, t1164, r1166);
    if (__cir_exc_active) {
      {
        struct std___Vector_base_int__std__allocator_int__* base1167 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1158 + 0);
        std___Vector_base_int__std__allocator_int_______Vector_base(base1167);
      }
      return;
    }
  {
    struct std___Vector_base_int__std__allocator_int__* base1168 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1158 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base1168);
  }
  return;
}

// function: main
int main() {
bb1169:
  int __retval1170;
  struct std__vector_int__std__allocator_int__ vectorOne1171;
  struct std__allocator_int_ ref_tmp01172;
  int ref_tmp11173;
  int c1174 = 0;
  __retval1170 = c1174;
  unsigned long c1175 = 10;
  std__allocator_int___allocator_2(&ref_tmp01172);
    std__vector_int__std__allocator_int_____vector(&vectorOne1171, c1175, &ref_tmp01172);
    if (__cir_exc_active) {
      {
        std__allocator_int____allocator(&ref_tmp01172);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
  {
    std__allocator_int____allocator(&ref_tmp01172);
  }
    unsigned long r1176 = std__vector_int__std__allocator_int_____size___const(&vectorOne1171);
    unsigned long c1177 = 10;
    _Bool c1178 = ((r1176 == c1177)) ? 1 : 0;
    if (c1178) {
    } else {
      char* cast1179 = (char*)&(_str);
      char* c1180 = _str_1;
      unsigned int c1181 = 16;
      char* cast1182 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1179, c1180, c1181, cast1182);
    }
    unsigned long r1183 = std__vector_int__std__allocator_int_____capacity___const(&vectorOne1171);
    unsigned long c1184 = 10;
    _Bool c1185 = ((r1183 == c1184)) ? 1 : 0;
    if (c1185) {
    } else {
      char* cast1186 = (char*)&(_str_2);
      char* c1187 = _str_1;
      unsigned int c1188 = 17;
      char* cast1189 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1186, c1187, c1188, cast1189);
    }
    char* cast1190 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r1191 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1190);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r1192 = std__vector_int__std__allocator_int_____size___const(&vectorOne1171);
    struct std__basic_ostream_char__std__char_traits_char__* r1193 = std__ostream__operator___2(r1191, r1192);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    char* cast1194 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* r1195 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1193, cast1194);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r1196 = std__ostream__operator___std__ostream_____(r1195, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    char* cast1197 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* r1198 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1197);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r1199 = std__vector_int__std__allocator_int_____capacity___const(&vectorOne1171);
    struct std__basic_ostream_char__std__char_traits_char__* r1200 = std__ostream__operator___2(r1198, r1199);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    char* cast1201 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* r1202 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1200, cast1201);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r1203 = std__ostream__operator___std__ostream_____(r1202, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      long index1204;
      long c1205 = 0;
      index1204 = c1205;
      while (1) {
        long t1207 = index1204;
        unsigned long r1208 = std__vector_int__std__allocator_int_____size___const(&vectorOne1171);
        long cast1209 = (long)r1208;
        _Bool c1210 = ((t1207 < cast1209)) ? 1 : 0;
        if (!c1210) break;
        int r1211 = rand();
        long t1212 = index1204;
        unsigned long cast1213 = (unsigned long)t1212;
        int* r1214 = std__vector_int__std__allocator_int_____at(&vectorOne1171, cast1213);
        if (__cir_exc_active) {
          {
            std__vector_int__std__allocator_int______vector(&vectorOne1171);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        *r1214 = r1211;
      for_step1206: ;
        long t1215 = index1204;
        long u1216 = t1215 + 1;
        index1204 = u1216;
      }
    char* cast1217 = (char*)&(_str_6);
    struct std__basic_ostream_char__std__char_traits_char__* r1218 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1217);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r1219 = std__ostream__operator___std__ostream_____(r1218, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      long index1220;
      long c1221 = 0;
      index1220 = c1221;
      while (1) {
        long t1223 = index1220;
        unsigned long r1224 = std__vector_int__std__allocator_int_____size___const(&vectorOne1171);
        long cast1225 = (long)r1224;
        _Bool c1226 = ((t1223 < cast1225)) ? 1 : 0;
        if (!c1226) break;
          long t1227 = index1220;
          unsigned long cast1228 = (unsigned long)t1227;
          int* r1229 = std__vector_int__std__allocator_int_____at(&vectorOne1171, cast1228);
          if (__cir_exc_active) {
            {
              std__vector_int__std__allocator_int______vector(&vectorOne1171);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          int t1230 = *r1229;
          struct std__basic_ostream_char__std__char_traits_char__* r1231 = std__ostream__operator__(&_ZSt4cout, t1230);
          if (__cir_exc_active) {
            {
              std__vector_int__std__allocator_int______vector(&vectorOne1171);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          char* cast1232 = (char*)&(_str_7);
          struct std__basic_ostream_char__std__char_traits_char__* r1233 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1231, cast1232);
          if (__cir_exc_active) {
            {
              std__vector_int__std__allocator_int______vector(&vectorOne1171);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
      for_step1222: ;
        long t1234 = index1220;
        long u1235 = t1234 + 1;
        index1220 = u1235;
      }
    struct std__basic_ostream_char__std__char_traits_char__* r1236 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r1237 = std__ostream__operator___std__ostream_____(r1236, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    char* cast1238 = (char*)&(_str_8);
    struct std__basic_ostream_char__std__char_traits_char__* r1239 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1238);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r1240 = std__ostream__operator___std__ostream_____(r1239, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long c1241 = 40;
    std__vector_int__std__allocator_int_____reserve(&vectorOne1171, c1241);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r1242 = std__vector_int__std__allocator_int_____size___const(&vectorOne1171);
    unsigned long c1243 = 10;
    _Bool c1244 = ((r1242 == c1243)) ? 1 : 0;
    if (c1244) {
    } else {
      char* cast1245 = (char*)&(_str);
      char* c1246 = _str_1;
      unsigned int c1247 = 29;
      char* cast1248 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1245, c1246, c1247, cast1248);
    }
    unsigned long r1249 = std__vector_int__std__allocator_int_____capacity___const(&vectorOne1171);
    unsigned long c1250 = 40;
    _Bool c1251 = ((r1249 == c1250)) ? 1 : 0;
    if (c1251) {
    } else {
      char* cast1252 = (char*)&(_str_9);
      char* c1253 = _str_1;
      unsigned int c1254 = 30;
      char* cast1255 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1252, c1253, c1254, cast1255);
    }
    char* cast1256 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r1257 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1256);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r1258 = std__vector_int__std__allocator_int_____size___const(&vectorOne1171);
    struct std__basic_ostream_char__std__char_traits_char__* r1259 = std__ostream__operator___2(r1257, r1258);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    char* cast1260 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* r1261 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1259, cast1260);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r1262 = std__ostream__operator___std__ostream_____(r1261, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    char* cast1263 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* r1264 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1263);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r1265 = std__vector_int__std__allocator_int_____capacity___const(&vectorOne1171);
    struct std__basic_ostream_char__std__char_traits_char__* r1266 = std__ostream__operator___2(r1264, r1265);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    char* cast1267 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* r1268 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1266, cast1267);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r1269 = std__ostream__operator___std__ostream_____(r1268, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      long index1270;
      long c1271 = 0;
      index1270 = c1271;
      while (1) {
        long t1273 = index1270;
        unsigned long r1274 = std__vector_int__std__allocator_int_____size___const(&vectorOne1171);
        long cast1275 = (long)r1274;
        _Bool c1276 = ((t1273 < cast1275)) ? 1 : 0;
        if (!c1276) break;
        int r1277 = rand();
        long t1278 = index1270;
        unsigned long cast1279 = (unsigned long)t1278;
        int* r1280 = std__vector_int__std__allocator_int_____at(&vectorOne1171, cast1279);
        if (__cir_exc_active) {
          {
            std__vector_int__std__allocator_int______vector(&vectorOne1171);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        *r1280 = r1277;
      for_step1272: ;
        long t1281 = index1270;
        long u1282 = t1281 + 1;
        index1270 = u1282;
      }
    char* cast1283 = (char*)&(_str_6);
    struct std__basic_ostream_char__std__char_traits_char__* r1284 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1283);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r1285 = std__ostream__operator___std__ostream_____(r1284, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      long index1286;
      long c1287 = 0;
      index1286 = c1287;
      while (1) {
        long t1289 = index1286;
        unsigned long r1290 = std__vector_int__std__allocator_int_____size___const(&vectorOne1171);
        long cast1291 = (long)r1290;
        _Bool c1292 = ((t1289 < cast1291)) ? 1 : 0;
        if (!c1292) break;
          long t1293 = index1286;
          unsigned long cast1294 = (unsigned long)t1293;
          int* r1295 = std__vector_int__std__allocator_int_____at(&vectorOne1171, cast1294);
          if (__cir_exc_active) {
            {
              std__vector_int__std__allocator_int______vector(&vectorOne1171);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          int t1296 = *r1295;
          struct std__basic_ostream_char__std__char_traits_char__* r1297 = std__ostream__operator__(&_ZSt4cout, t1296);
          if (__cir_exc_active) {
            {
              std__vector_int__std__allocator_int______vector(&vectorOne1171);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          char* cast1298 = (char*)&(_str_7);
          struct std__basic_ostream_char__std__char_traits_char__* r1299 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1297, cast1298);
          if (__cir_exc_active) {
            {
              std__vector_int__std__allocator_int______vector(&vectorOne1171);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
      for_step1288: ;
        long t1300 = index1286;
        long u1301 = t1300 + 1;
        index1286 = u1301;
      }
    struct std__basic_ostream_char__std__char_traits_char__* r1302 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r1303 = std__ostream__operator___std__ostream_____(r1302, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    char* cast1304 = (char*)&(_str_10);
    struct std__basic_ostream_char__std__char_traits_char__* r1305 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1304);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r1306 = std__ostream__operator___std__ostream_____(r1305, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long c1307 = 15;
    int c1308 = 0;
    ref_tmp11173 = c1308;
    std__vector_int__std__allocator_int_____resize_2(&vectorOne1171, c1307, &ref_tmp11173);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r1309 = std__vector_int__std__allocator_int_____size___const(&vectorOne1171);
    unsigned long c1310 = 15;
    _Bool c1311 = ((r1309 == c1310)) ? 1 : 0;
    if (c1311) {
    } else {
      char* cast1312 = (char*)&(_str_11);
      char* c1313 = _str_1;
      unsigned int c1314 = 41;
      char* cast1315 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1312, c1313, c1314, cast1315);
    }
    unsigned long r1316 = std__vector_int__std__allocator_int_____capacity___const(&vectorOne1171);
    unsigned long c1317 = 40;
    _Bool c1318 = ((r1316 == c1317)) ? 1 : 0;
    if (c1318) {
    } else {
      char* cast1319 = (char*)&(_str_9);
      char* c1320 = _str_1;
      unsigned int c1321 = 42;
      char* cast1322 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1319, c1320, c1321, cast1322);
    }
    char* cast1323 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r1324 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1323);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r1325 = std__vector_int__std__allocator_int_____size___const(&vectorOne1171);
    struct std__basic_ostream_char__std__char_traits_char__* r1326 = std__ostream__operator___2(r1324, r1325);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    char* cast1327 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* r1328 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1326, cast1327);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r1329 = std__ostream__operator___std__ostream_____(r1328, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    char* cast1330 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* r1331 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1330);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r1332 = std__vector_int__std__allocator_int_____capacity___const(&vectorOne1171);
    struct std__basic_ostream_char__std__char_traits_char__* r1333 = std__ostream__operator___2(r1331, r1332);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    char* cast1334 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* r1335 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1333, cast1334);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r1336 = std__ostream__operator___std__ostream_____(r1335, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      long index1337;
      long c1338 = 0;
      index1337 = c1338;
      while (1) {
        long t1340 = index1337;
        unsigned long r1341 = std__vector_int__std__allocator_int_____size___const(&vectorOne1171);
        long cast1342 = (long)r1341;
        _Bool c1343 = ((t1340 < cast1342)) ? 1 : 0;
        if (!c1343) break;
        int r1344 = rand();
        long t1345 = index1337;
        unsigned long cast1346 = (unsigned long)t1345;
        int* r1347 = std__vector_int__std__allocator_int_____at(&vectorOne1171, cast1346);
        if (__cir_exc_active) {
          {
            std__vector_int__std__allocator_int______vector(&vectorOne1171);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        *r1347 = r1344;
      for_step1339: ;
        long t1348 = index1337;
        long u1349 = t1348 + 1;
        index1337 = u1349;
      }
    char* cast1350 = (char*)&(_str_6);
    struct std__basic_ostream_char__std__char_traits_char__* r1351 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1350);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r1352 = std__ostream__operator___std__ostream_____(r1351, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      long index1353;
      long c1354 = 0;
      index1353 = c1354;
      while (1) {
        long t1356 = index1353;
        unsigned long r1357 = std__vector_int__std__allocator_int_____size___const(&vectorOne1171);
        long cast1358 = (long)r1357;
        _Bool c1359 = ((t1356 < cast1358)) ? 1 : 0;
        if (!c1359) break;
          long t1360 = index1353;
          unsigned long cast1361 = (unsigned long)t1360;
          int* r1362 = std__vector_int__std__allocator_int_____at(&vectorOne1171, cast1361);
          if (__cir_exc_active) {
            {
              std__vector_int__std__allocator_int______vector(&vectorOne1171);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          int t1363 = *r1362;
          struct std__basic_ostream_char__std__char_traits_char__* r1364 = std__ostream__operator__(&_ZSt4cout, t1363);
          if (__cir_exc_active) {
            {
              std__vector_int__std__allocator_int______vector(&vectorOne1171);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          char* cast1365 = (char*)&(_str_7);
          struct std__basic_ostream_char__std__char_traits_char__* r1366 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1364, cast1365);
          if (__cir_exc_active) {
            {
              std__vector_int__std__allocator_int______vector(&vectorOne1171);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
      for_step1355: ;
        long t1367 = index1353;
        long u1368 = t1367 + 1;
        index1353 = u1368;
      }
    struct std__basic_ostream_char__std__char_traits_char__* r1369 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r1370 = std__ostream__operator___std__ostream_____(r1369, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    char* cast1371 = (char*)&(_str_12);
    struct std__basic_ostream_char__std__char_traits_char__* r1372 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1371);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r1373 = std__ostream__operator___std__ostream_____(r1372, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long c1374 = 5;
    std__vector_int__std__allocator_int_____resize(&vectorOne1171, c1374);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r1375 = std__vector_int__std__allocator_int_____size___const(&vectorOne1171);
    unsigned long c1376 = 5;
    _Bool c1377 = ((r1375 == c1376)) ? 1 : 0;
    if (c1377) {
    } else {
      char* cast1378 = (char*)&(_str_13);
      char* c1379 = _str_1;
      unsigned int c1380 = 53;
      char* cast1381 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1378, c1379, c1380, cast1381);
    }
    unsigned long r1382 = std__vector_int__std__allocator_int_____capacity___const(&vectorOne1171);
    unsigned long c1383 = 40;
    _Bool c1384 = ((r1382 == c1383)) ? 1 : 0;
    if (c1384) {
    } else {
      char* cast1385 = (char*)&(_str_9);
      char* c1386 = _str_1;
      unsigned int c1387 = 54;
      char* cast1388 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast1385, c1386, c1387, cast1388);
    }
    char* cast1389 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r1390 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1389);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r1391 = std__vector_int__std__allocator_int_____size___const(&vectorOne1171);
    struct std__basic_ostream_char__std__char_traits_char__* r1392 = std__ostream__operator___2(r1390, r1391);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    char* cast1393 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* r1394 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1392, cast1393);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r1395 = std__ostream__operator___std__ostream_____(r1394, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    char* cast1396 = (char*)&(_str_5);
    struct std__basic_ostream_char__std__char_traits_char__* r1397 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1396);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    unsigned long r1398 = std__vector_int__std__allocator_int_____capacity___const(&vectorOne1171);
    struct std__basic_ostream_char__std__char_traits_char__* r1399 = std__ostream__operator___2(r1397, r1398);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    char* cast1400 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* r1401 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1399, cast1400);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r1402 = std__ostream__operator___std__ostream_____(r1401, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      long index1403;
      long c1404 = 0;
      index1403 = c1404;
      while (1) {
        long t1406 = index1403;
        unsigned long r1407 = std__vector_int__std__allocator_int_____size___const(&vectorOne1171);
        long cast1408 = (long)r1407;
        _Bool c1409 = ((t1406 < cast1408)) ? 1 : 0;
        if (!c1409) break;
        int r1410 = rand();
        long t1411 = index1403;
        unsigned long cast1412 = (unsigned long)t1411;
        int* r1413 = std__vector_int__std__allocator_int_____at(&vectorOne1171, cast1412);
        if (__cir_exc_active) {
          {
            std__vector_int__std__allocator_int______vector(&vectorOne1171);
          }
          int __cir_eh_ret = (int)0;
          return __cir_eh_ret;
        }
        *r1413 = r1410;
      for_step1405: ;
        long t1414 = index1403;
        long u1415 = t1414 + 1;
        index1403 = u1415;
      }
    char* cast1416 = (char*)&(_str_6);
    struct std__basic_ostream_char__std__char_traits_char__* r1417 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast1416);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r1418 = std__ostream__operator___std__ostream_____(r1417, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
      long index1419;
      long c1420 = 0;
      index1419 = c1420;
      while (1) {
        long t1422 = index1419;
        unsigned long r1423 = std__vector_int__std__allocator_int_____size___const(&vectorOne1171);
        long cast1424 = (long)r1423;
        _Bool c1425 = ((t1422 < cast1424)) ? 1 : 0;
        if (!c1425) break;
          long t1426 = index1419;
          unsigned long cast1427 = (unsigned long)t1426;
          int* r1428 = std__vector_int__std__allocator_int_____at(&vectorOne1171, cast1427);
          if (__cir_exc_active) {
            {
              std__vector_int__std__allocator_int______vector(&vectorOne1171);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          int t1429 = *r1428;
          struct std__basic_ostream_char__std__char_traits_char__* r1430 = std__ostream__operator__(&_ZSt4cout, t1429);
          if (__cir_exc_active) {
            {
              std__vector_int__std__allocator_int______vector(&vectorOne1171);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
          char* cast1431 = (char*)&(_str_7);
          struct std__basic_ostream_char__std__char_traits_char__* r1432 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r1430, cast1431);
          if (__cir_exc_active) {
            {
              std__vector_int__std__allocator_int______vector(&vectorOne1171);
            }
            int __cir_eh_ret = (int)0;
            return __cir_eh_ret;
          }
      for_step1421: ;
        long t1433 = index1419;
        long u1434 = t1433 + 1;
        index1419 = u1434;
      }
    struct std__basic_ostream_char__std__char_traits_char__* r1435 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    struct std__basic_ostream_char__std__char_traits_char__* r1436 = std__ostream__operator___std__ostream_____(r1435, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    if (__cir_exc_active) {
      {
        std__vector_int__std__allocator_int______vector(&vectorOne1171);
      }
      int __cir_eh_ret = (int)0;
      return __cir_eh_ret;
    }
    int c1437 = 0;
    __retval1170 = c1437;
    int t1438 = __retval1170;
    int ret_val1439 = t1438;
    {
      std__vector_int__std__allocator_int______vector(&vectorOne1171);
    }
    return ret_val1439;
  int t1440 = __retval1170;
  return t1440;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v1441) {
bb1442:
  struct std____new_allocator_int_* this1443;
  this1443 = v1441;
  struct std____new_allocator_int_* t1444 = this1443;
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v1445, unsigned long* v1446) {
bb1447:
  unsigned long* __a1448;
  unsigned long* __b1449;
  unsigned long* __retval1450;
  __a1448 = v1445;
  __b1449 = v1446;
    unsigned long* t1451 = __b1449;
    unsigned long t1452 = *t1451;
    unsigned long* t1453 = __a1448;
    unsigned long t1454 = *t1453;
    _Bool c1455 = ((t1452 < t1454)) ? 1 : 0;
    if (c1455) {
      unsigned long* t1456 = __b1449;
      __retval1450 = t1456;
      unsigned long* t1457 = __retval1450;
      return t1457;
    }
  unsigned long* t1458 = __a1448;
  __retval1450 = t1458;
  unsigned long* t1459 = __retval1450;
  return t1459;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v1460) {
bb1461:
  struct std__allocator_int_* __a1462;
  unsigned long __retval1463;
  unsigned long __diffmax1464;
  unsigned long __allocmax1465;
  __a1462 = v1460;
  unsigned long c1466 = 2305843009213693951;
  __diffmax1464 = c1466;
  unsigned long c1467 = 4611686018427387903;
  __allocmax1465 = c1467;
  unsigned long* r1468 = unsigned_long_const__std__min_unsigned_long_(&__diffmax1464, &__allocmax1465);
  if (__cir_exc_active) {
    unsigned long __cir_eh_ret = (unsigned long)0;
    return __cir_eh_ret;
  }
  unsigned long t1469 = *r1468;
  __retval1463 = t1469;
  unsigned long t1470 = __retval1463;
  return t1470;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v1471, struct std__allocator_int_* v1472) {
bb1473:
  struct std__allocator_int_* this1474;
  struct std__allocator_int_* __a1475;
  this1474 = v1471;
  __a1475 = v1472;
  struct std__allocator_int_* t1476 = this1474;
  struct std____new_allocator_int_* base1477 = (struct std____new_allocator_int_*)((char *)t1476 + 0);
  struct std__allocator_int_* t1478 = __a1475;
  struct std____new_allocator_int_* base1479 = (struct std____new_allocator_int_*)((char *)t1478 + 0);
  std____new_allocator_int_____new_allocator(base1477, base1479);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v1480, struct std__allocator_int_* v1481) {
bb1482:
  unsigned long __n1483;
  struct std__allocator_int_* __a1484;
  unsigned long __retval1485;
  __n1483 = v1480;
  __a1484 = v1481;
    struct std__allocator_int_ ref_tmp01486;
    _Bool tmp_exprcleanup1487;
    unsigned long t1488 = __n1483;
    struct std__allocator_int_* t1489 = __a1484;
    std__allocator_int___allocator(&ref_tmp01486, t1489);
      unsigned long r1490 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp01486);
      _Bool c1491 = ((t1488 > r1490)) ? 1 : 0;
      tmp_exprcleanup1487 = c1491;
    {
      std__allocator_int____allocator(&ref_tmp01486);
    }
    _Bool t1492 = tmp_exprcleanup1487;
    if (t1492) {
      char* cast1493 = (char*)&(_str_14);
      std____throw_length_error(cast1493);
      if (__cir_exc_active) {
        unsigned long __cir_eh_ret = (unsigned long)0;
        return __cir_eh_ret;
      }
    }
  unsigned long t1494 = __n1483;
  __retval1485 = t1494;
  unsigned long t1495 = __retval1485;
  return t1495;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1496, struct std__allocator_int_* v1497) {
bb1498:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1499;
  struct std__allocator_int_* __a1500;
  this1499 = v1496;
  __a1500 = v1497;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1501 = this1499;
  struct std__allocator_int_* base1502 = (struct std__allocator_int_*)((char *)t1501 + 0);
  struct std__allocator_int_* t1503 = __a1500;
  std__allocator_int___allocator(base1502, t1503);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1504 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t1501 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base1504);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1505:
  _Bool __retval1506;
    _Bool c1507 = 0;
    __retval1506 = c1507;
    _Bool t1508 = __retval1506;
    return t1508;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v1509) {
bb1510:
  struct std____new_allocator_int_* this1511;
  unsigned long __retval1512;
  this1511 = v1509;
  struct std____new_allocator_int_* t1513 = this1511;
  unsigned long c1514 = 9223372036854775807;
  unsigned long c1515 = 4;
  unsigned long b1516 = c1514 / c1515;
  __retval1512 = b1516;
  unsigned long t1517 = __retval1512;
  return t1517;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v1518, unsigned long v1519, void* v1520) {
bb1521:
  struct std____new_allocator_int_* this1522;
  unsigned long __n1523;
  void* unnamed1524;
  int* __retval1525;
  this1522 = v1518;
  __n1523 = v1519;
  unnamed1524 = v1520;
  struct std____new_allocator_int_* t1526 = this1522;
    unsigned long t1527 = __n1523;
    unsigned long r1528 = std____new_allocator_int____M_max_size___const(t1526);
    _Bool c1529 = ((t1527 > r1528)) ? 1 : 0;
    if (c1529) {
        unsigned long t1530 = __n1523;
        unsigned long c1531 = -1;
        unsigned long c1532 = 4;
        unsigned long b1533 = c1531 / c1532;
        _Bool c1534 = ((t1530 > b1533)) ? 1 : 0;
        if (c1534) {
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
    unsigned long c1535 = 4;
    unsigned long c1536 = 16;
    _Bool c1537 = ((c1535 > c1536)) ? 1 : 0;
    if (c1537) {
      unsigned long __al1538;
      unsigned long c1539 = 4;
      __al1538 = c1539;
      unsigned long t1540 = __n1523;
      unsigned long c1541 = 4;
      unsigned long b1542 = t1540 * c1541;
      unsigned long t1543 = __al1538;
      void* r1544 = operator_new_2(b1542, t1543);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast1545 = (int*)r1544;
      __retval1525 = cast1545;
      int* t1546 = __retval1525;
      return t1546;
    }
  unsigned long t1547 = __n1523;
  unsigned long c1548 = 4;
  unsigned long b1549 = t1547 * c1548;
  void* r1550 = operator_new(b1549);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* cast1551 = (int*)r1550;
  __retval1525 = cast1551;
  int* t1552 = __retval1525;
  return t1552;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v1553, unsigned long v1554) {
bb1555:
  struct std__allocator_int_* this1556;
  unsigned long __n1557;
  int* __retval1558;
  this1556 = v1553;
  __n1557 = v1554;
  struct std__allocator_int_* t1559 = this1556;
    _Bool r1560 = std____is_constant_evaluated();
    if (r1560) {
        unsigned long t1561 = __n1557;
        unsigned long c1562 = 4;
        unsigned long ovr1563;
        _Bool ovf1564 = __builtin_mul_overflow(t1561, c1562, &ovr1563);
        __n1557 = ovr1563;
        if (ovf1564) {
          std____throw_bad_array_new_length();
          if (__cir_exc_active) {
            int* __cir_eh_ret = (int*)0;
            return __cir_eh_ret;
          }
        }
      unsigned long t1565 = __n1557;
      void* r1566 = operator_new(t1565);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* cast1567 = (int*)r1566;
      __retval1558 = cast1567;
      int* t1568 = __retval1558;
      return t1568;
    }
  struct std____new_allocator_int_* base1569 = (struct std____new_allocator_int_*)((char *)t1559 + 0);
  unsigned long t1570 = __n1557;
  void* c1571 = ((void*)0);
  int* r1572 = std____new_allocator_int___allocate(base1569, t1570, c1571);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1558 = r1572;
  int* t1573 = __retval1558;
  return t1573;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v1574, unsigned long v1575) {
bb1576:
  struct std__allocator_int_* __a1577;
  unsigned long __n1578;
  int* __retval1579;
  __a1577 = v1574;
  __n1578 = v1575;
  struct std__allocator_int_* t1580 = __a1577;
  unsigned long t1581 = __n1578;
  int* r1582 = std__allocator_int___allocate(t1580, t1581);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1579 = r1582;
  int* t1583 = __retval1579;
  return t1583;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v1584, unsigned long v1585) {
bb1586:
  struct std___Vector_base_int__std__allocator_int__* this1587;
  unsigned long __n1588;
  int* __retval1589;
  this1587 = v1584;
  __n1588 = v1585;
  struct std___Vector_base_int__std__allocator_int__* t1590 = this1587;
  unsigned long t1591 = __n1588;
  unsigned long c1592 = 0;
  _Bool c1593 = ((t1591 != c1592)) ? 1 : 0;
  int* ternary1594;
  if (c1593) {
    struct std__allocator_int_* base1595 = (struct std__allocator_int_*)((char *)&(t1590->_M_impl) + 0);
    unsigned long t1596 = __n1588;
    int* r1597 = std__allocator_traits_std__allocator_int_____allocate(base1595, t1596);
    if (__cir_exc_active) {
      int* __cir_eh_ret = (int*)0;
      return __cir_eh_ret;
    }
    ternary1594 = (int*)r1597;
  } else {
    int* c1598 = ((void*)0);
    ternary1594 = (int*)c1598;
  }
  __retval1589 = ternary1594;
  int* t1599 = __retval1589;
  return t1599;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* v1600, unsigned long v1601) {
bb1602:
  struct std___Vector_base_int__std__allocator_int__* this1603;
  unsigned long __n1604;
  this1603 = v1600;
  __n1604 = v1601;
  struct std___Vector_base_int__std__allocator_int__* t1605 = this1603;
  unsigned long t1606 = __n1604;
  int* r1607 = std___Vector_base_int__std__allocator_int______M_allocate(t1605, t1606);
  if (__cir_exc_active) {
    return;
  }
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1608 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1605->_M_impl) + 0);
  base1608->_M_start = r1607;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1609 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1605->_M_impl) + 0);
  int* t1610 = base1609->_M_start;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1611 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1605->_M_impl) + 0);
  base1611->_M_finish = t1610;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1612 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1605->_M_impl) + 0);
  int* t1613 = base1612->_M_start;
  unsigned long t1614 = __n1604;
  int* ptr1615 = &(t1613)[t1614];
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1616 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1605->_M_impl) + 0);
  base1616->_M_end_of_storage = ptr1615;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1617) {
bb1618:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1619;
  this1619 = v1617;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1620 = this1619;
  {
    struct std__allocator_int_* base1621 = (struct std__allocator_int_*)((char *)t1620 + 0);
    std__allocator_int____allocator(base1621);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1622, unsigned long v1623, struct std__allocator_int_* v1624) {
bb1625:
  struct std___Vector_base_int__std__allocator_int__* this1626;
  unsigned long __n1627;
  struct std__allocator_int_* __a1628;
  this1626 = v1622;
  __n1627 = v1623;
  __a1628 = v1624;
  struct std___Vector_base_int__std__allocator_int__* t1629 = this1626;
  struct std__allocator_int_* t1630 = __a1628;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t1629->_M_impl, t1630);
    unsigned long t1631 = __n1627;
    std___Vector_base_int__std__allocator_int______M_create_storage(t1629, t1631);
    if (__cir_exc_active) {
      {
        std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1629->_M_impl);
      }
      return;
    }
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1632:
  _Bool __retval1633;
    _Bool c1634 = 0;
    __retval1633 = c1634;
    _Bool t1635 = __retval1633;
    return t1635;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1636, int** v1637) {
bb1638:
  struct std___UninitDestroyGuard_int____void_* this1639;
  int** __first1640;
  this1639 = v1636;
  __first1640 = v1637;
  struct std___UninitDestroyGuard_int____void_* t1641 = this1639;
  int** t1642 = __first1640;
  int* t1643 = *t1642;
  t1641->_M_first = t1643;
  int** t1644 = __first1640;
  t1641->_M_cur = t1644;
  return;
}

// function: _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v1645) {
bb1646:
  int* __location1647;
  int* __retval1648;
  void* __loc1649;
  __location1647 = v1645;
  int* t1650 = __location1647;
  void* cast1651 = (void*)t1650;
  __loc1649 = cast1651;
    void* t1652 = __loc1649;
    int* cast1653 = (int*)t1652;
    int c1654 = 0;
    *cast1653 = c1654;
    __retval1648 = cast1653;
    int* t1655 = __retval1648;
    return t1655;
  abort();
}

// function: _ZSt10_ConstructIiJEEvPT_DpOT0_
void void_std___Construct_int_(int* v1656) {
bb1657:
  int* __p1658;
  __p1658 = v1656;
    _Bool r1659 = std____is_constant_evaluated();
    if (r1659) {
      int* t1660 = __p1658;
      int* r1661 = _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t1660);
      return;
    }
  int* t1662 = __p1658;
  void* cast1663 = (void*)t1662;
  int* cast1664 = (int*)cast1663;
  int c1665 = 0;
  *cast1664 = c1665;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v1666) {
bb1667:
  struct std___UninitDestroyGuard_int____void_* this1668;
  this1668 = v1666;
  struct std___UninitDestroyGuard_int____void_* t1669 = this1668;
  int** c1670 = ((void*)0);
  t1669->_M_cur = c1670;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1671) {
bb1672:
  struct std___UninitDestroyGuard_int____void_* this1673;
  this1673 = v1671;
  struct std___UninitDestroyGuard_int____void_* t1674 = this1673;
    int** t1675 = t1674->_M_cur;
    int** c1676 = ((void*)0);
    _Bool c1677 = ((t1675 != c1676)) ? 1 : 0;
    if (c1677) {
      int* t1678 = t1674->_M_first;
      int** t1679 = t1674->_M_cur;
      int* t1680 = *t1679;
      void_std___Destroy_int__(t1678, t1680);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt27__uninitialized_default_n_1ILb0EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(int* v1681, unsigned long v1682) {
bb1683:
  int* __first1684;
  unsigned long __n1685;
  int* __retval1686;
  struct std___UninitDestroyGuard_int____void_ __guard1687;
  __first1684 = v1681;
  __n1685 = v1682;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard1687, &__first1684);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
      while (1) {
        unsigned long t1689 = __n1685;
        unsigned long c1690 = 0;
        _Bool c1691 = ((t1689 > c1690)) ? 1 : 0;
        if (!c1691) break;
        int* t1692 = __first1684;
        void_std___Construct_int_(t1692);
        if (__cir_exc_active) {
          {
            std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1687);
          }
          int* __cir_eh_ret = (int*)0;
          return __cir_eh_ret;
        }
      for_step1688: ;
        unsigned long t1693 = __n1685;
        unsigned long u1694 = t1693 - 1;
        __n1685 = u1694;
        int* t1695 = __first1684;
        int c1696 = 1;
        int* ptr1697 = &(t1695)[c1696];
        __first1684 = ptr1697;
      }
    std___UninitDestroyGuard_int___void___release(&__guard1687);
    if (__cir_exc_active) {
      {
        std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1687);
      }
      int* __cir_eh_ret = (int*)0;
      return __cir_eh_ret;
    }
    int* t1698 = __first1684;
    __retval1686 = t1698;
    int* t1699 = __retval1686;
    int* ret_val1700 = t1699;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1687);
    }
    return ret_val1700;
  abort();
}

// function: _ZSt9__fill_a1IPiiEvT_S1_RKT0_
void void_std____fill_a1_int___int_(int* v1701, int* v1702, int* v1703) {
bb1704:
  int* __first1705;
  int* __last1706;
  int* __value1707;
  _Bool __load_outside_loop1708;
  int __val1709;
  __first1705 = v1701;
  __last1706 = v1702;
  __value1707 = v1703;
  _Bool c1710 = 1;
  __load_outside_loop1708 = c1710;
  int* t1711 = __value1707;
  int t1712 = *t1711;
  __val1709 = t1712;
    while (1) {
      int* t1714 = __first1705;
      int* t1715 = __last1706;
      _Bool c1716 = ((t1714 != t1715)) ? 1 : 0;
      if (!c1716) break;
      int t1717 = __val1709;
      int* t1718 = __first1705;
      *t1718 = t1717;
    for_step1713: ;
      int* t1719 = __first1705;
      int c1720 = 1;
      int* ptr1721 = &(t1719)[c1720];
      __first1705 = ptr1721;
    }
  return;
}

// function: _ZSt8__fill_aIPiiEvT_S1_RKT0_
void void_std____fill_a_int___int_(int* v1722, int* v1723, int* v1724) {
bb1725:
  int* __first1726;
  int* __last1727;
  int* __value1728;
  __first1726 = v1722;
  __last1727 = v1723;
  __value1728 = v1724;
  int* t1729 = __first1726;
  int* t1730 = __last1727;
  int* t1731 = __value1728;
  void_std____fill_a1_int___int_(t1729, t1730, t1731);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZSt10__fill_n_aIPimiET_S1_T0_RKT1_St26random_access_iterator_tag
int* int__std____fill_n_a_int___unsigned_long__int_(int* v1732, unsigned long v1733, int* v1734, struct std__random_access_iterator_tag v1735) {
bb1736:
  int* __first1737;
  unsigned long __n1738;
  int* __value1739;
  struct std__random_access_iterator_tag unnamed1740;
  int* __retval1741;
  __first1737 = v1732;
  __n1738 = v1733;
  __value1739 = v1734;
  unnamed1740 = v1735;
    unsigned long t1742 = __n1738;
    unsigned long c1743 = 0;
    _Bool c1744 = ((t1742 <= c1743)) ? 1 : 0;
    if (c1744) {
      int* t1745 = __first1737;
      __retval1741 = t1745;
      int* t1746 = __retval1741;
      return t1746;
    }
  int* t1747 = __first1737;
  int* t1748 = __first1737;
  unsigned long t1749 = __n1738;
  int* ptr1750 = &(t1748)[t1749];
  int* t1751 = __value1739;
  void_std____fill_a_int___int_(t1747, ptr1750, t1751);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* t1752 = __first1737;
  unsigned long t1753 = __n1738;
  int* ptr1754 = &(t1752)[t1753];
  __retval1741 = ptr1754;
  int* t1755 = __retval1741;
  return t1755;
}

// function: _ZSt17__size_to_integerm
unsigned long std____size_to_integer(unsigned long v1756) {
bb1757:
  unsigned long __n1758;
  unsigned long __retval1759;
  __n1758 = v1756;
  unsigned long t1760 = __n1758;
  __retval1759 = t1760;
  unsigned long t1761 = __retval1759;
  return t1761;
}

// function: _ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** v1762) {
bb1763:
  int** unnamed1764;
  struct std__random_access_iterator_tag __retval1765;
  unnamed1764 = v1762;
  struct std__random_access_iterator_tag t1766 = __retval1765;
  return t1766;
}

// function: _ZSt6fill_nIPimiET_S1_T0_RKT1_
int* int__std__fill_n_int___unsigned_long__int_(int* v1767, unsigned long v1768, int* v1769) {
bb1770:
  int* __first1771;
  unsigned long __n1772;
  int* __value1773;
  int* __retval1774;
  struct std__random_access_iterator_tag agg_tmp01775;
  __first1771 = v1767;
  __n1772 = v1768;
  __value1773 = v1769;
  int* t1776 = __first1771;
  unsigned long t1777 = __n1772;
  unsigned long r1778 = std____size_to_integer(t1777);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  int* t1779 = __value1773;
  struct std__random_access_iterator_tag r1780 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first1771);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  agg_tmp01775 = r1780;
  struct std__random_access_iterator_tag t1781 = agg_tmp01775;
  int* r1782 = int__std____fill_n_a_int___unsigned_long__int_(t1776, r1778, t1779, t1781);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1774 = r1782;
  int* t1783 = __retval1774;
  return t1783;
}

// function: _ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(int* v1784, unsigned long v1785) {
bb1786:
  int* __first1787;
  unsigned long __n1788;
  int* __retval1789;
  __first1787 = v1784;
  __n1788 = v1785;
    unsigned long t1790 = __n1788;
    unsigned long c1791 = 0;
    _Bool c1792 = ((t1790 > c1791)) ? 1 : 0;
    if (c1792) {
      int* __val1793;
      int* t1794 = __first1787;
      __val1793 = t1794;
      int* t1795 = __val1793;
      void_std___Construct_int_(t1795);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      int* t1796 = __first1787;
      int c1797 = 1;
      int* ptr1798 = &(t1796)[c1797];
      __first1787 = ptr1798;
      int* t1799 = __first1787;
      unsigned long t1800 = __n1788;
      unsigned long c1801 = 1;
      unsigned long b1802 = t1800 - c1801;
      int* t1803 = __val1793;
      int* r1804 = int__std__fill_n_int___unsigned_long__int_(t1799, b1802, t1803);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      __first1787 = r1804;
    }
  int* t1805 = __first1787;
  __retval1789 = t1805;
  int* t1806 = __retval1789;
  return t1806;
}

// function: _ZSt25__uninitialized_default_nIPimET_S1_T0_
int* int__std____uninitialized_default_n_int___unsigned_long_(int* v1807, unsigned long v1808) {
bb1809:
  int* __first1810;
  unsigned long __n1811;
  int* __retval1812;
  _Bool __can_fill1813;
  __first1810 = v1807;
  __n1811 = v1808;
    _Bool r1814 = std__is_constant_evaluated();
    if (r1814) {
      int* t1815 = __first1810;
      unsigned long t1816 = __n1811;
      int* r1817 = int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(t1815, t1816);
      if (__cir_exc_active) {
        int* __cir_eh_ret = (int*)0;
        return __cir_eh_ret;
      }
      __retval1812 = r1817;
      int* t1818 = __retval1812;
      return t1818;
    }
  _Bool c1819 = 1;
  __can_fill1813 = c1819;
  int* t1820 = __first1810;
  unsigned long t1821 = __n1811;
  int* r1822 = int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(t1820, t1821);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1812 = r1822;
  int* t1823 = __retval1812;
  return t1823;
}

// function: _ZSt27__uninitialized_default_n_aIPimiET_S1_T0_RSaIT1_E
int* int__std____uninitialized_default_n_a_int___unsigned_long__int_(int* v1824, unsigned long v1825, struct std__allocator_int_* v1826) {
bb1827:
  int* __first1828;
  unsigned long __n1829;
  struct std__allocator_int_* unnamed1830;
  int* __retval1831;
  __first1828 = v1824;
  __n1829 = v1825;
  unnamed1830 = v1826;
  int* t1832 = __first1828;
  unsigned long t1833 = __n1829;
  int* r1834 = int__std____uninitialized_default_n_int___unsigned_long_(t1832, t1833);
  if (__cir_exc_active) {
    int* __cir_eh_ret = (int*)0;
    return __cir_eh_ret;
  }
  __retval1831 = r1834;
  int* t1835 = __retval1831;
  return t1835;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v1836) {
bb1837:
  struct std___Vector_base_int__std__allocator_int__* this1838;
  struct std__allocator_int_* __retval1839;
  this1838 = v1836;
  struct std___Vector_base_int__std__allocator_int__* t1840 = this1838;
  struct std__allocator_int_* base1841 = (struct std__allocator_int_*)((char *)&(t1840->_M_impl) + 0);
  __retval1839 = base1841;
  struct std__allocator_int_* t1842 = __retval1839;
  return t1842;
}

// function: _ZNSt6vectorIiSaIiEE21_M_default_initializeEm
void std__vector_int__std__allocator_int______M_default_initialize(struct std__vector_int__std__allocator_int__* v1843, unsigned long v1844) {
bb1845:
  struct std__vector_int__std__allocator_int__* this1846;
  unsigned long __n1847;
  this1846 = v1843;
  __n1847 = v1844;
  struct std__vector_int__std__allocator_int__* t1848 = this1846;
  struct std___Vector_base_int__std__allocator_int__* base1849 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1848 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1850 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1849->_M_impl) + 0);
  int* t1851 = base1850->_M_start;
  unsigned long t1852 = __n1847;
  struct std___Vector_base_int__std__allocator_int__* base1853 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1848 + 0);
  struct std__allocator_int_* r1854 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1853);
  int* r1855 = int__std____uninitialized_default_n_a_int___unsigned_long__int_(t1851, t1852, r1854);
  if (__cir_exc_active) {
    return;
  }
  struct std___Vector_base_int__std__allocator_int__* base1856 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1848 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1857 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1856->_M_impl) + 0);
  base1857->_M_finish = r1855;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1858, int* v1859, unsigned long v1860) {
bb1861:
  struct std____new_allocator_int_* this1862;
  int* __p1863;
  unsigned long __n1864;
  this1862 = v1858;
  __p1863 = v1859;
  __n1864 = v1860;
  struct std____new_allocator_int_* t1865 = this1862;
    unsigned long c1866 = 4;
    unsigned long c1867 = 16;
    _Bool c1868 = ((c1866 > c1867)) ? 1 : 0;
    if (c1868) {
      int* t1869 = __p1863;
      void* cast1870 = (void*)t1869;
      unsigned long t1871 = __n1864;
      unsigned long c1872 = 4;
      unsigned long b1873 = t1871 * c1872;
      unsigned long c1874 = 4;
      operator_delete_3(cast1870, b1873, c1874);
      return;
    }
  int* t1875 = __p1863;
  void* cast1876 = (void*)t1875;
  unsigned long t1877 = __n1864;
  unsigned long c1878 = 4;
  unsigned long b1879 = t1877 * c1878;
  operator_delete_2(cast1876, b1879);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1880, int* v1881, unsigned long v1882) {
bb1883:
  struct std__allocator_int_* this1884;
  int* __p1885;
  unsigned long __n1886;
  this1884 = v1880;
  __p1885 = v1881;
  __n1886 = v1882;
  struct std__allocator_int_* t1887 = this1884;
    _Bool r1888 = std____is_constant_evaluated();
    if (r1888) {
      int* t1889 = __p1885;
      void* cast1890 = (void*)t1889;
      operator_delete(cast1890);
      return;
    }
  struct std____new_allocator_int_* base1891 = (struct std____new_allocator_int_*)((char *)t1887 + 0);
  int* t1892 = __p1885;
  unsigned long t1893 = __n1886;
  std____new_allocator_int___deallocate(base1891, t1892, t1893);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1894, int* v1895, unsigned long v1896) {
bb1897:
  struct std__allocator_int_* __a1898;
  int* __p1899;
  unsigned long __n1900;
  __a1898 = v1894;
  __p1899 = v1895;
  __n1900 = v1896;
  struct std__allocator_int_* t1901 = __a1898;
  int* t1902 = __p1899;
  unsigned long t1903 = __n1900;
  std__allocator_int___deallocate(t1901, t1902, t1903);
  if (__cir_exc_active) {
    return;
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v1904, int* v1905, unsigned long v1906) {
bb1907:
  struct std___Vector_base_int__std__allocator_int__* this1908;
  int* __p1909;
  unsigned long __n1910;
  this1908 = v1904;
  __p1909 = v1905;
  __n1910 = v1906;
  struct std___Vector_base_int__std__allocator_int__* t1911 = this1908;
    int* t1912 = __p1909;
    _Bool cast1913 = (_Bool)t1912;
    if (cast1913) {
      struct std__allocator_int_* base1914 = (struct std__allocator_int_*)((char *)&(t1911->_M_impl) + 0);
      int* t1915 = __p1909;
      unsigned long t1916 = __n1910;
      std__allocator_traits_std__allocator_int_____deallocate(base1914, t1915, t1916);
      if (__cir_exc_active) {
        return;
      }
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1917) {
bb1918:
  struct std___Vector_base_int__std__allocator_int__* this1919;
  this1919 = v1917;
  struct std___Vector_base_int__std__allocator_int__* t1920 = this1919;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1921 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1920->_M_impl) + 0);
    int* t1922 = base1921->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1923 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1920->_M_impl) + 0);
    int* t1924 = base1923->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1925 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1920->_M_impl) + 0);
    int* t1926 = base1925->_M_start;
    long diff1927 = t1924 - t1926;
    unsigned long cast1928 = (unsigned long)diff1927;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1920, t1922, cast1928);
    if (__cir_exc_active) {
      {
        std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1920->_M_impl);
      }
      return;
    }
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1920->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1929, struct std____new_allocator_int_* v1930) {
bb1931:
  struct std____new_allocator_int_* this1932;
  struct std____new_allocator_int_* unnamed1933;
  this1932 = v1929;
  unnamed1933 = v1930;
  struct std____new_allocator_int_* t1934 = this1932;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1935) {
bb1936:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1937;
  this1937 = v1935;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1938 = this1937;
  int* c1939 = ((void*)0);
  t1938->_M_start = c1939;
  int* c1940 = ((void*)0);
  t1938->_M_finish = c1940;
  int* c1941 = ((void*)0);
  t1938->_M_end_of_storage = c1941;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1942) {
bb1943:
  int* __location1944;
  __location1944 = v1942;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1945, int* v1946) {
bb1947:
  int* __first1948;
  int* __last1949;
  __first1948 = v1945;
  __last1949 = v1946;
      _Bool r1950 = std____is_constant_evaluated();
      if (r1950) {
          while (1) {
            int* t1952 = __first1948;
            int* t1953 = __last1949;
            _Bool c1954 = ((t1952 != t1953)) ? 1 : 0;
            if (!c1954) break;
            int* t1955 = __first1948;
            void_std__destroy_at_int_(t1955);
            if (__cir_exc_active) {
              return;
            }
          for_step1951: ;
            int* t1956 = __first1948;
            int c1957 = 1;
            int* ptr1958 = &(t1956)[c1957];
            __first1948 = ptr1958;
          }
      }
  return;
}

