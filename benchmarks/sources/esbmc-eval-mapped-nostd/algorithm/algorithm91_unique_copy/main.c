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
struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ { void* _M_comp; };
struct __locale_data { unsigned char __placeholder; };
struct __locale_struct { struct __locale_data* __field0[13]; unsigned short* __field1; int* __field2; int* __field3; char* __field4[13]; };
struct std___UninitDestroyGuard_int____void_ { int* _M_first; int** _M_cur; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl_data { int* _M_start; int* _M_finish; int* _M_end_of_storage; };
struct std____new_allocator_int_ { unsigned char __field0; };
struct std__allocator_int_ { unsigned char __field0; };
struct std__forward_iterator_tag { unsigned char __field0; };
struct std__input_iterator_tag { unsigned char __field0; };
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

int __const_main_myints1[9] = {10, 10, 20, 20, 30, 0, 0, 0, 0};
int __const_main_myints[9] = {10, 20, 20, 20, 30, 30, 20, 20, 10};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[10] = "*it != 20";
char _str_1[121] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm91_unique_copy/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[19] = "myvector contains:";
char _str_3[2] = " ";
char _str_4[49] = "cannot create std::vector larger than max_size()";
_Bool myfunction(int p0, int p1);
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, struct std__allocator_int_* p2);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* p0);
long std__iterator_traits_int____difference_type_std____distance_int__(int* p0, int* p1, struct std__random_access_iterator_tag p2);
long std__iterator_traits_int____difference_type_std__distance_int__(int* p0, int* p1);
unsigned long std__vector_int__std__allocator_int_____capacity___const(struct std__vector_int__std__allocator_int__* p0);
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* p0, int* p1, unsigned long p2, struct std___Vector_base_int__std__allocator_int__* p3);
int* std__vector_int__std__allocator_int______Guard_alloc___M_release(struct std__vector_int__std__allocator_int_____Guard_alloc* p0);
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* p0);
int* int__std__vector_int__std__allocator_int______M_allocate_and_copy_int__(struct std__vector_int__std__allocator_int__* p0, unsigned long p1, int* p2, int* p3);
void void_std___Destroy_int___int_(int* p0, int* p1, struct std__allocator_int_* p2);
void std__vector_int__std__allocator_int______M_erase_at_end(struct std__vector_int__std__allocator_int__* p0, int* p1);
int* int__std____niter_wrap_int__(int** p0, int* p1);
extern void* memmove(void* p0, void* p1, unsigned long p2);
void void_std____assign_one_false__int___int__(int** p0, int** p1);
int* int__std____copy_move_a2_false__int___int___int__(int* p0, int* p1, int* p2);
int* int__std____copy_move_a1_false__int___int__(int* p0, int* p1, int* p2);
int* int__std____niter_base_int__(int* p0);
int* int__std____copy_move_a_false__int___int__(int* p0, int* p1, int* p2);
int* int__std____miter_base_int__(int* p0);
int* int__std__copy_int___int__(int* p0, int* p1, int* p2);
void void_std____advance_int___long_(int** p0, long p1, struct std__random_access_iterator_tag p2);
void void_std__advance_int___unsigned_long_(int** p0, unsigned long p1);
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* p0, int* p1);
void void_std___Construct_int__int__(int* p0, int* p1);
int* int__std____do_uninit_copy_int___int___int__(int* p0, int* p1, int* p2);
extern void* memcpy(void* p0, void* p1, unsigned long p2);
int* int__std__uninitialized_copy_int___int__(int* p0, int* p1, int* p2);
int* int__std____uninitialized_copy_a_int___int___int___int_(int* p0, int* p1, int* p2, struct std__allocator_int_* p3);
void void_std__vector_int__std__allocator_int______M_assign_aux_int__(struct std__vector_int__std__allocator_int__* p0, int* p1, int* p2, struct std__forward_iterator_tag p3);
void void_std__vector_int__std__allocator_int_____assign_int___void_(struct std__vector_int__std__allocator_int__* p0, int* p1, int* p2);
_Bool bool___gnu_cxx____ops___Iter_comp_iter_bool_____int__int____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____unique_copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_bool_____int__int_______gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ p3, struct std__input_iterator_tag p4, struct std__forward_iterator_tag p5);
void __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____Iter_comp_iter_bool____(struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* p0, void* p1);
struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____gnu_cxx____ops____iter_comp_iter_bool_____int__int___bool____(void* p0);
struct std__random_access_iterator_tag std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__unique_copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool_____int__int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2, void* p3);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
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
  _Bool c8 = ((t6 == t7)) ? 1 : 0;
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

// function: _ZNSt6vectorIiSaIiEEC2EmRKS0_
void std__vector_int__std__allocator_int_____vector(struct std__vector_int__std__allocator_int__* v15, unsigned long v16, struct std__allocator_int_* v17) {
bb18:
  struct std__vector_int__std__allocator_int__* this19;
  unsigned long __n20;
  struct std__allocator_int_* __a21;
  this19 = v15;
  __n20 = v16;
  __a21 = v17;
  struct std__vector_int__std__allocator_int__* t22 = this19;
  struct std___Vector_base_int__std__allocator_int__* base23 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t22 + 0);
  unsigned long t24 = __n20;
  struct std__allocator_int_* t25 = __a21;
  unsigned long r26 = std__vector_int__std__allocator_int______S_check_init_len(t24, t25);
  struct std__allocator_int_* t27 = __a21;
  std___Vector_base_int__std__allocator_int______Vector_base(base23, r26, t27);
    unsigned long t28 = __n20;
    std__vector_int__std__allocator_int______M_default_initialize(t22, t28);
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v29) {
bb30:
  struct std__allocator_int_* this31;
  this31 = v29;
  struct std__allocator_int_* t32 = this31;
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2Ev
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v33) {
bb34:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this35;
  this35 = v33;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t36 = this35;
  int* c37 = ((void*)0);
  t36->_M_current = c37;
  return;
}

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v38) {
bb39:
  struct std__vector_int__std__allocator_int__* this40;
  unsigned long __retval41;
  long __dif42;
  this40 = v38;
  struct std__vector_int__std__allocator_int__* t43 = this40;
  struct std___Vector_base_int__std__allocator_int__* base44 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t43 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base45 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base44->_M_impl) + 0);
  int* t46 = base45->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base47 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t43 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base48 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base47->_M_impl) + 0);
  int* t49 = base48->_M_start;
  long diff50 = t46 - t49;
  __dif42 = diff50;
    long t51 = __dif42;
    long c52 = 0;
    _Bool c53 = ((t51 < c52)) ? 1 : 0;
    if (c53) {
      __builtin_unreachable();
    }
  long t54 = __dif42;
  unsigned long cast55 = (unsigned long)t54;
  __retval41 = cast55;
  unsigned long t56 = __retval41;
  return t56;
}

// function: _ZSt10__distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_St26random_access_iterator_tag
long std__iterator_traits_int____difference_type_std____distance_int__(int* v57, int* v58, struct std__random_access_iterator_tag v59) {
bb60:
  int* __first61;
  int* __last62;
  struct std__random_access_iterator_tag unnamed63;
  long __retval64;
  __first61 = v57;
  __last62 = v58;
  unnamed63 = v59;
  int* t65 = __last62;
  int* t66 = __first61;
  long diff67 = t65 - t66;
  __retval64 = diff67;
  long t68 = __retval64;
  return t68;
}

// function: _ZSt8distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_
long std__iterator_traits_int____difference_type_std__distance_int__(int* v69, int* v70) {
bb71:
  int* __first72;
  int* __last73;
  long __retval74;
  struct std__random_access_iterator_tag agg_tmp075;
  __first72 = v69;
  __last73 = v70;
  int* t76 = __first72;
  int* t77 = __last73;
  struct std__random_access_iterator_tag r78 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first72);
  agg_tmp075 = r78;
  struct std__random_access_iterator_tag t79 = agg_tmp075;
  long r80 = std__iterator_traits_int____difference_type_std____distance_int__(t76, t77, t79);
  __retval74 = r80;
  long t81 = __retval74;
  return t81;
}

// function: _ZNKSt6vectorIiSaIiEE8capacityEv
unsigned long std__vector_int__std__allocator_int_____capacity___const(struct std__vector_int__std__allocator_int__* v82) {
bb83:
  struct std__vector_int__std__allocator_int__* this84;
  unsigned long __retval85;
  long __dif86;
  this84 = v82;
  struct std__vector_int__std__allocator_int__* t87 = this84;
  struct std___Vector_base_int__std__allocator_int__* base88 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t87 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base89 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base88->_M_impl) + 0);
  int* t90 = base89->_M_end_of_storage;
  struct std___Vector_base_int__std__allocator_int__* base91 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t87 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base92 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base91->_M_impl) + 0);
  int* t93 = base92->_M_start;
  long diff94 = t90 - t93;
  __dif86 = diff94;
    long t95 = __dif86;
    long c96 = 0;
    _Bool c97 = ((t95 < c96)) ? 1 : 0;
    if (c97) {
      __builtin_unreachable();
    }
  long t98 = __dif86;
  unsigned long cast99 = (unsigned long)t98;
  __retval85 = cast99;
  unsigned long t100 = __retval85;
  return t100;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocC2EPimRSt12_Vector_baseIiS0_E
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v101, int* v102, unsigned long v103, struct std___Vector_base_int__std__allocator_int__* v104) {
bb105:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this106;
  int* __s107;
  unsigned long __l108;
  struct std___Vector_base_int__std__allocator_int__* __vect109;
  this106 = v101;
  __s107 = v102;
  __l108 = v103;
  __vect109 = v104;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t110 = this106;
  int* t111 = __s107;
  t110->_M_storage = t111;
  unsigned long t112 = __l108;
  t110->_M_len = t112;
  struct std___Vector_base_int__std__allocator_int__* t113 = __vect109;
  t110->_M_vect = t113;
  return;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_alloc10_M_releaseEv
int* std__vector_int__std__allocator_int______Guard_alloc___M_release(struct std__vector_int__std__allocator_int_____Guard_alloc* v114) {
bb115:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this116;
  int* __retval117;
  int* __res118;
  this116 = v114;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t119 = this116;
  int* t120 = t119->_M_storage;
  __res118 = t120;
  int* c121 = ((void*)0);
  t119->_M_storage = c121;
  int* t122 = __res118;
  __retval117 = t122;
  int* t123 = __retval117;
  return t123;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocD2Ev
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v124) {
bb125:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this126;
  this126 = v124;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t127 = this126;
    int* t128 = t127->_M_storage;
    _Bool cast129 = (_Bool)t128;
    if (cast129) {
      struct std___Vector_base_int__std__allocator_int__* t130 = t127->_M_vect;
      int* t131 = t127->_M_storage;
      unsigned long t132 = t127->_M_len;
      std___Vector_base_int__std__allocator_int______M_deallocate(t130, t131, t132);
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE20_M_allocate_and_copyIPiEES3_mT_S4_
int* int__std__vector_int__std__allocator_int______M_allocate_and_copy_int__(struct std__vector_int__std__allocator_int__* v133, unsigned long v134, int* v135, int* v136) {
bb137:
  struct std__vector_int__std__allocator_int__* this138;
  unsigned long __n139;
  int* __first140;
  int* __last141;
  int* __retval142;
  struct std__vector_int__std__allocator_int_____Guard_alloc __guard143;
  this138 = v133;
  __n139 = v134;
  __first140 = v135;
  __last141 = v136;
  struct std__vector_int__std__allocator_int__* t144 = this138;
  struct std___Vector_base_int__std__allocator_int__* base145 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t144 + 0);
  unsigned long t146 = __n139;
  int* r147 = std___Vector_base_int__std__allocator_int______M_allocate(base145, t146);
  unsigned long t148 = __n139;
  struct std___Vector_base_int__std__allocator_int__* base149 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t144 + 0);
  std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(&__guard143, r147, t148, base149);
    int* t150 = __first140;
    int* t151 = __last141;
    int* t152 = __guard143._M_storage;
    struct std___Vector_base_int__std__allocator_int__* base153 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t144 + 0);
    struct std__allocator_int_* r154 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base153);
    int* r155 = int__std____uninitialized_copy_a_int___int___int___int_(t150, t151, t152, r154);
    int* r156 = std__vector_int__std__allocator_int______Guard_alloc___M_release(&__guard143);
    __retval142 = r156;
    int* t157 = __retval142;
    int* ret_val158 = t157;
    {
      std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(&__guard143);
    }
    return ret_val158;
  abort();
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v159, int* v160, struct std__allocator_int_* v161) {
bb162:
  int* __first163;
  int* __last164;
  struct std__allocator_int_* unnamed165;
  __first163 = v159;
  __last164 = v160;
  unnamed165 = v161;
  int* t166 = __first163;
  int* t167 = __last164;
  void_std___Destroy_int__(t166, t167);
  return;
}

// function: _ZNSt6vectorIiSaIiEE15_M_erase_at_endEPi
void std__vector_int__std__allocator_int______M_erase_at_end(struct std__vector_int__std__allocator_int__* v168, int* v169) {
bb170:
  struct std__vector_int__std__allocator_int__* this171;
  int* __pos172;
  this171 = v168;
  __pos172 = v169;
  struct std__vector_int__std__allocator_int__* t173 = this171;
    unsigned long __n174;
    struct std___Vector_base_int__std__allocator_int__* base175 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t173 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base176 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base175->_M_impl) + 0);
    int* t177 = base176->_M_finish;
    int* t178 = __pos172;
    long diff179 = t177 - t178;
    unsigned long cast180 = (unsigned long)diff179;
    __n174 = cast180;
    unsigned long t181 = __n174;
    _Bool cast182 = (_Bool)t181;
    if (cast182) {
      int* t183 = __pos172;
      struct std___Vector_base_int__std__allocator_int__* base184 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t173 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base185 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base184->_M_impl) + 0);
      int* t186 = base185->_M_finish;
      struct std___Vector_base_int__std__allocator_int__* base187 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t173 + 0);
      struct std__allocator_int_* r188 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base187);
      void_std___Destroy_int___int_(t183, t186, r188);
      int* t189 = __pos172;
      struct std___Vector_base_int__std__allocator_int__* base190 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t173 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base191 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base190->_M_impl) + 0);
      base191->_M_finish = t189;
    }
  return;
}

// function: _ZSt12__niter_wrapIPiET_RKS1_S1_
int* int__std____niter_wrap_int__(int** v192, int* v193) {
bb194:
  int** unnamed195;
  int* __res196;
  int* __retval197;
  unnamed195 = v192;
  __res196 = v193;
  int* t198 = __res196;
  __retval197 = t198;
  int* t199 = __retval197;
  return t199;
}

// function: _ZSt12__assign_oneILb0EPiS0_EvRT0_RT1_
void void_std____assign_one_false__int___int__(int** v200, int** v201) {
bb202:
  int** __out203;
  int** __in204;
  __out203 = v200;
  __in204 = v201;
    int** t205 = __in204;
    int* t206 = *t205;
    int t207 = *t206;
    int** t208 = __out203;
    int* t209 = *t208;
    *t209 = t207;
  return;
}

// function: _ZSt14__copy_move_a2ILb0EPiS0_S0_ET2_T0_T1_S1_
int* int__std____copy_move_a2_false__int___int___int__(int* v210, int* v211, int* v212) {
bb213:
  int* __first214;
  int* __last215;
  int* __result216;
  int* __retval217;
  __first214 = v210;
  __last215 = v211;
  __result216 = v212;
      _Bool r218 = std____is_constant_evaluated();
      if (r218) {
      } else {
          long __n219;
          int* t220 = __first214;
          int* t221 = __last215;
          long r222 = std__iterator_traits_int____difference_type_std__distance_int__(t220, t221);
          __n219 = r222;
            long t223 = __n219;
            long c224 = 1;
            _Bool c225 = ((t223 > c224)) ? 1 : 0;
            if (c225) {
              int* t226 = __result216;
              void* cast227 = (void*)t226;
              int* t228 = __first214;
              void* cast229 = (void*)t228;
              long t230 = __n219;
              unsigned long cast231 = (unsigned long)t230;
              unsigned long c232 = 4;
              unsigned long b233 = cast231 * c232;
              void* r234 = memmove(cast227, cast229, b233);
              long t235 = __n219;
              int* t236 = __result216;
              int* ptr237 = &(t236)[t235];
              __result216 = ptr237;
            } else {
                long t238 = __n219;
                long c239 = 1;
                _Bool c240 = ((t238 == c239)) ? 1 : 0;
                if (c240) {
                  void_std____assign_one_false__int___int__(&__result216, &__first214);
                  int* t241 = __result216;
                  int c242 = 1;
                  int* ptr243 = &(t241)[c242];
                  __result216 = ptr243;
                }
            }
          int* t244 = __result216;
          __retval217 = t244;
          int* t245 = __retval217;
          return t245;
      }
    while (1) {
      int* t247 = __first214;
      int* t248 = __last215;
      _Bool c249 = ((t247 != t248)) ? 1 : 0;
      if (!c249) break;
      void_std____assign_one_false__int___int__(&__result216, &__first214);
    for_step246: ;
      int* t250 = __result216;
      int c251 = 1;
      int* ptr252 = &(t250)[c251];
      __result216 = ptr252;
      int* t253 = __first214;
      int c254 = 1;
      int* ptr255 = &(t253)[c254];
      __first214 = ptr255;
    }
  int* t256 = __result216;
  __retval217 = t256;
  int* t257 = __retval217;
  return t257;
}

// function: _ZSt14__copy_move_a1ILb0EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_a1_false__int___int__(int* v258, int* v259, int* v260) {
bb261:
  int* __first262;
  int* __last263;
  int* __result264;
  int* __retval265;
  __first262 = v258;
  __last263 = v259;
  __result264 = v260;
  int* t266 = __first262;
  int* t267 = __last263;
  int* t268 = __result264;
  int* r269 = int__std____copy_move_a2_false__int___int___int__(t266, t267, t268);
  __retval265 = r269;
  int* t270 = __retval265;
  return t270;
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v271) {
bb272:
  int* __it273;
  int* __retval274;
  __it273 = v271;
  int* t275 = __it273;
  __retval274 = t275;
  int* t276 = __retval274;
  return t276;
}

// function: _ZSt13__copy_move_aILb0EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_a_false__int___int__(int* v277, int* v278, int* v279) {
bb280:
  int* __first281;
  int* __last282;
  int* __result283;
  int* __retval284;
  __first281 = v277;
  __last282 = v278;
  __result283 = v279;
  int* t285 = __first281;
  int* r286 = int__std____niter_base_int__(t285);
  int* t287 = __last282;
  int* r288 = int__std____niter_base_int__(t287);
  int* t289 = __result283;
  int* r290 = int__std____niter_base_int__(t289);
  int* r291 = int__std____copy_move_a1_false__int___int__(r286, r288, r290);
  int* r292 = int__std____niter_wrap_int__(&__result283, r291);
  __retval284 = r292;
  int* t293 = __retval284;
  return t293;
}

// function: _ZSt12__miter_baseIPiET_S1_
int* int__std____miter_base_int__(int* v294) {
bb295:
  int* __it296;
  int* __retval297;
  __it296 = v294;
  int* t298 = __it296;
  __retval297 = t298;
  int* t299 = __retval297;
  return t299;
}

// function: _ZSt4copyIPiS0_ET0_T_S2_S1_
int* int__std__copy_int___int__(int* v300, int* v301, int* v302) {
bb303:
  int* __first304;
  int* __last305;
  int* __result306;
  int* __retval307;
  __first304 = v300;
  __last305 = v301;
  __result306 = v302;
  int* t308 = __first304;
  int* r309 = int__std____miter_base_int__(t308);
  int* t310 = __last305;
  int* r311 = int__std____miter_base_int__(t310);
  int* t312 = __result306;
  int* r313 = int__std____copy_move_a_false__int___int__(r309, r311, t312);
  __retval307 = r313;
  int* t314 = __retval307;
  return t314;
}

// function: _ZSt9__advanceIPilEvRT_T0_St26random_access_iterator_tag
void void_std____advance_int___long_(int** v315, long v316, struct std__random_access_iterator_tag v317) {
bb318:
  int** __i319;
  long __n320;
  struct std__random_access_iterator_tag unnamed321;
  __i319 = v315;
  __n320 = v316;
  unnamed321 = v317;
    long t322 = __n320;
    _Bool isconst323 = 0;
    _Bool ternary324;
    if (isconst323) {
      long t325 = __n320;
      long c326 = 1;
      _Bool c327 = ((t325 == c326)) ? 1 : 0;
      ternary324 = (_Bool)c327;
    } else {
      _Bool c328 = 0;
      ternary324 = (_Bool)c328;
    }
    if (ternary324) {
      int** t329 = __i319;
      int* t330 = *t329;
      int c331 = 1;
      int* ptr332 = &(t330)[c331];
      *t329 = ptr332;
    } else {
        long t333 = __n320;
        _Bool isconst334 = 0;
        _Bool ternary335;
        if (isconst334) {
          long t336 = __n320;
          long c337 = -1;
          _Bool c338 = ((t336 == c337)) ? 1 : 0;
          ternary335 = (_Bool)c338;
        } else {
          _Bool c339 = 0;
          ternary335 = (_Bool)c339;
        }
        if (ternary335) {
          int** t340 = __i319;
          int* t341 = *t340;
          int c342 = -1;
          int* ptr343 = &(t341)[c342];
          *t340 = ptr343;
        } else {
          long t344 = __n320;
          int** t345 = __i319;
          int* t346 = *t345;
          int* ptr347 = &(t346)[t344];
          *t345 = ptr347;
        }
    }
  return;
}

// function: _ZSt7advanceIPimEvRT_T0_
void void_std__advance_int___unsigned_long_(int** v348, unsigned long v349) {
bb350:
  int** __i351;
  unsigned long __n352;
  long __d353;
  struct std__random_access_iterator_tag agg_tmp0354;
  __i351 = v348;
  __n352 = v349;
  unsigned long t355 = __n352;
  long cast356 = (long)t355;
  __d353 = cast356;
  int** t357 = __i351;
  long t358 = __d353;
  int** t359 = __i351;
  struct std__random_access_iterator_tag r360 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(t359);
  agg_tmp0354 = r360;
  struct std__random_access_iterator_tag t361 = agg_tmp0354;
  void_std____advance_int___long_(t357, t358, t361);
  return;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v362, int* v363) {
bb364:
  int* __location365;
  int* __args366;
  int* __retval367;
  void* __loc368;
  __location365 = v362;
  __args366 = v363;
  int* t369 = __location365;
  void* cast370 = (void*)t369;
  __loc368 = cast370;
    void* t371 = __loc368;
    int* cast372 = (int*)t371;
    int* t373 = __args366;
    int t374 = *t373;
    *cast372 = t374;
    __retval367 = cast372;
    int* t375 = __retval367;
    return t375;
  abort();
}

// function: _ZSt10_ConstructIiJRiEEvPT_DpOT0_
void void_std___Construct_int__int__(int* v376, int* v377) {
bb378:
  int* __p379;
  int* __args380;
  __p379 = v376;
  __args380 = v377;
    _Bool r381 = std____is_constant_evaluated();
    if (r381) {
      int* t382 = __p379;
      int* t383 = __args380;
      int* r384 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t382, t383);
      return;
    }
  int* t385 = __p379;
  void* cast386 = (void*)t385;
  int* cast387 = (int*)cast386;
  int* t388 = __args380;
  int t389 = *t388;
  *cast387 = t389;
  return;
}

// function: _ZSt16__do_uninit_copyIPiS0_S0_ET1_T_T0_S1_
int* int__std____do_uninit_copy_int___int___int__(int* v390, int* v391, int* v392) {
bb393:
  int* __first394;
  int* __last395;
  int* __result396;
  int* __retval397;
  struct std___UninitDestroyGuard_int____void_ __guard398;
  __first394 = v390;
  __last395 = v391;
  __result396 = v392;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard398, &__result396);
      while (1) {
        int* t400 = __first394;
        int* t401 = __last395;
        _Bool c402 = ((t400 != t401)) ? 1 : 0;
        if (!c402) break;
        int* t403 = __result396;
        int* t404 = __first394;
        void_std___Construct_int__int__(t403, t404);
      for_step399: ;
        int* t405 = __first394;
        int c406 = 1;
        int* ptr407 = &(t405)[c406];
        __first394 = ptr407;
        int* t408 = __result396;
        int c409 = 1;
        int* ptr410 = &(t408)[c409];
        __result396 = ptr410;
      }
    std___UninitDestroyGuard_int___void___release(&__guard398);
    int* t411 = __result396;
    __retval397 = t411;
    int* t412 = __retval397;
    int* ret_val413 = t412;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard398);
    }
    return ret_val413;
  abort();
}

// function: _ZSt18uninitialized_copyIPiS0_ET0_T_S2_S1_
int* int__std__uninitialized_copy_int___int__(int* v414, int* v415, int* v416) {
bb417:
  int* __first418;
  int* __last419;
  int* __result420;
  int* __retval421;
  __first418 = v414;
  __last419 = v415;
  __result420 = v416;
      long __n422;
      int* t423 = __last419;
      int* t424 = __first418;
      long diff425 = t423 - t424;
      __n422 = diff425;
        long t426 = __n422;
        long c427 = 0;
        _Bool c428 = ((t426 > c427)) ? 1 : 0;
        if (c428) {
          int* t429 = __result420;
          int* r430 = int__std____niter_base_int__(t429);
          void* cast431 = (void*)r430;
          int* t432 = __first418;
          int* r433 = int__std____niter_base_int__(t432);
          void* cast434 = (void*)r433;
          long t435 = __n422;
          unsigned long cast436 = (unsigned long)t435;
          unsigned long c437 = 4;
          unsigned long b438 = cast436 * c437;
          void* r439 = memcpy(cast431, cast434, b438);
          long t440 = __n422;
          int* t441 = __result420;
          int* ptr442 = &(t441)[t440];
          __result420 = ptr442;
        }
      int* t443 = __result420;
      __retval421 = t443;
      int* t444 = __retval421;
      return t444;
  abort();
}

// function: _ZSt22__uninitialized_copy_aIPiS0_S0_iET1_T_T0_S1_RSaIT2_E
int* int__std____uninitialized_copy_a_int___int___int___int_(int* v445, int* v446, int* v447, struct std__allocator_int_* v448) {
bb449:
  int* __first450;
  int* __last451;
  int* __result452;
  struct std__allocator_int_* unnamed453;
  int* __retval454;
  __first450 = v445;
  __last451 = v446;
  __result452 = v447;
  unnamed453 = v448;
    _Bool r455 = std__is_constant_evaluated();
    if (r455) {
      int* t456 = __first450;
      int* t457 = __last451;
      int* t458 = __result452;
      int* r459 = int__std____do_uninit_copy_int___int___int__(t456, t457, t458);
      __retval454 = r459;
      int* t460 = __retval454;
      return t460;
    }
    int* t461 = __first450;
    int* t462 = __last451;
    int* t463 = __result452;
    int* r464 = int__std__uninitialized_copy_int___int__(t461, t462, t463);
    __retval454 = r464;
    int* t465 = __retval454;
    return t465;
  abort();
}

// function: _ZNSt6vectorIiSaIiEE13_M_assign_auxIPiEEvT_S4_St20forward_iterator_tag
void void_std__vector_int__std__allocator_int______M_assign_aux_int__(struct std__vector_int__std__allocator_int__* v466, int* v467, int* v468, struct std__forward_iterator_tag v469) {
bb470:
  struct std__vector_int__std__allocator_int__* this471;
  int* __first472;
  int* __last473;
  struct std__forward_iterator_tag unnamed474;
  unsigned long __sz475;
  unsigned long __len476;
  this471 = v466;
  __first472 = v467;
  __last473 = v468;
  unnamed474 = v469;
  struct std__vector_int__std__allocator_int__* t477 = this471;
  unsigned long r478 = std__vector_int__std__allocator_int_____size___const(t477);
  __sz475 = r478;
  int* t479 = __first472;
  int* t480 = __last473;
  long r481 = std__iterator_traits_int____difference_type_std__distance_int__(t479, t480);
  unsigned long cast482 = (unsigned long)r481;
  __len476 = cast482;
    unsigned long t483 = __len476;
    unsigned long r484 = std__vector_int__std__allocator_int_____capacity___const(t477);
    _Bool c485 = ((t483 > r484)) ? 1 : 0;
    if (c485) {
      int* __tmp486;
        unsigned long t487 = __len476;
        unsigned long t488 = __sz475;
        _Bool c489 = ((t487 <= t488)) ? 1 : 0;
        if (c489) {
          __builtin_unreachable();
        }
      unsigned long t490 = __len476;
      struct std___Vector_base_int__std__allocator_int__* base491 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t477 + 0);
      struct std__allocator_int_* r492 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base491);
      unsigned long r493 = std__vector_int__std__allocator_int______S_check_init_len(t490, r492);
      unsigned long t494 = __len476;
      int* t495 = __first472;
      int* t496 = __last473;
      int* r497 = int__std__vector_int__std__allocator_int______M_allocate_and_copy_int__(t477, t494, t495, t496);
      __tmp486 = r497;
      struct std___Vector_base_int__std__allocator_int__* base498 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t477 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base499 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base498->_M_impl) + 0);
      int* t500 = base499->_M_start;
      struct std___Vector_base_int__std__allocator_int__* base501 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t477 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base502 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base501->_M_impl) + 0);
      int* t503 = base502->_M_finish;
      struct std___Vector_base_int__std__allocator_int__* base504 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t477 + 0);
      struct std__allocator_int_* r505 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base504);
      void_std___Destroy_int___int_(t500, t503, r505);
      struct std___Vector_base_int__std__allocator_int__* base506 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t477 + 0);
      struct std___Vector_base_int__std__allocator_int__* base507 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t477 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base508 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base507->_M_impl) + 0);
      int* t509 = base508->_M_start;
      struct std___Vector_base_int__std__allocator_int__* base510 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t477 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base511 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base510->_M_impl) + 0);
      int* t512 = base511->_M_end_of_storage;
      struct std___Vector_base_int__std__allocator_int__* base513 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t477 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base514 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base513->_M_impl) + 0);
      int* t515 = base514->_M_start;
      long diff516 = t512 - t515;
      unsigned long cast517 = (unsigned long)diff516;
      std___Vector_base_int__std__allocator_int______M_deallocate(base506, t509, cast517);
      int* t518 = __tmp486;
      struct std___Vector_base_int__std__allocator_int__* base519 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t477 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base520 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base519->_M_impl) + 0);
      base520->_M_start = t518;
      struct std___Vector_base_int__std__allocator_int__* base521 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t477 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base522 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base521->_M_impl) + 0);
      int* t523 = base522->_M_start;
      unsigned long t524 = __len476;
      int* ptr525 = &(t523)[t524];
      struct std___Vector_base_int__std__allocator_int__* base526 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t477 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base527 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base526->_M_impl) + 0);
      base527->_M_finish = ptr525;
      struct std___Vector_base_int__std__allocator_int__* base528 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t477 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base529 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base528->_M_impl) + 0);
      int* t530 = base529->_M_finish;
      struct std___Vector_base_int__std__allocator_int__* base531 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t477 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base532 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base531->_M_impl) + 0);
      base532->_M_end_of_storage = t530;
    } else {
        unsigned long t533 = __sz475;
        unsigned long t534 = __len476;
        _Bool c535 = ((t533 >= t534)) ? 1 : 0;
        if (c535) {
          int* t536 = __first472;
          int* t537 = __last473;
          struct std___Vector_base_int__std__allocator_int__* base538 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t477 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base539 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base538->_M_impl) + 0);
          int* t540 = base539->_M_start;
          int* r541 = int__std__copy_int___int__(t536, t537, t540);
          std__vector_int__std__allocator_int______M_erase_at_end(t477, r541);
        } else {
          int* __mid542;
          unsigned long __n543;
          int* t544 = __first472;
          __mid542 = t544;
          unsigned long t545 = __sz475;
          void_std__advance_int___unsigned_long_(&__mid542, t545);
          int* t546 = __first472;
          int* t547 = __mid542;
          struct std___Vector_base_int__std__allocator_int__* base548 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t477 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base549 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base548->_M_impl) + 0);
          int* t550 = base549->_M_start;
          int* r551 = int__std__copy_int___int__(t546, t547, t550);
          unsigned long t552 = __len476;
          unsigned long t553 = __sz475;
          unsigned long b554 = t552 - t553;
          __n543 = b554;
          int* t555 = __mid542;
          int* t556 = __last473;
          struct std___Vector_base_int__std__allocator_int__* base557 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t477 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base558 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base557->_M_impl) + 0);
          int* t559 = base558->_M_finish;
          struct std___Vector_base_int__std__allocator_int__* base560 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t477 + 0);
          struct std__allocator_int_* r561 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base560);
          int* r562 = int__std____uninitialized_copy_a_int___int___int___int_(t555, t556, t559, r561);
          struct std___Vector_base_int__std__allocator_int__* base563 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t477 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base564 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base563->_M_impl) + 0);
          base564->_M_finish = r562;
        }
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE6assignIPivEEvT_S4_
void void_std__vector_int__std__allocator_int_____assign_int___void_(struct std__vector_int__std__allocator_int__* v565, int* v566, int* v567) {
bb568:
  struct std__vector_int__std__allocator_int__* this569;
  int* __first570;
  int* __last571;
  struct std__forward_iterator_tag agg_tmp0572;
  struct std__random_access_iterator_tag ref_tmp0573;
  this569 = v565;
  __first570 = v566;
  __last571 = v567;
  struct std__vector_int__std__allocator_int__* t574 = this569;
  int* t575 = __first570;
  int* t576 = __last571;
  struct std__random_access_iterator_tag r577 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first570);
  ref_tmp0573 = r577;
  struct std__forward_iterator_tag* base578 = (struct std__forward_iterator_tag*)((char *)&(ref_tmp0573) + 0);
  struct std__forward_iterator_tag t579 = agg_tmp0572;
  void_std__vector_int__std__allocator_int______M_assign_aux_int__(t574, t575, t576, t579);
  return;
}

// function: _ZN9__gnu_cxx5__ops15_Iter_comp_iterIPFbiiEEclINS_17__normal_iteratorIPiSt6vectorIiSaIiEEEESB_EEbT_T0_
_Bool bool___gnu_cxx____ops___Iter_comp_iter_bool_____int__int____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* v580, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v581, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v582) {
bb583:
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* this584;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it1585;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it2586;
  _Bool __retval587;
  this584 = v580;
  __it1585 = v581;
  __it2586 = v582;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* t588 = this584;
  void* t589 = t588->_M_comp;
  int* r590 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it1585);
  int t591 = *r590;
  int* r592 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it2586);
  int t593 = *r592;
  _Bool r594 = ((_Bool (*)(int, int))t589)(t591, t593);
  __retval587 = r594;
  _Bool t595 = __retval587;
  return t595;
}

// function: _ZSt13__unique_copyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_NS0_5__ops15_Iter_comp_iterIPFbiiEEEET0_T_SD_SC_T1_St18input_iterator_tagSt20forward_iterator_tag
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____unique_copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_bool_____int__int_______gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v596, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v597, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v598, struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ v599, struct std__input_iterator_tag v600, struct std__forward_iterator_tag v601) {
bb602:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first603;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last604;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result605;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ __binary_pred606;
  struct std__input_iterator_tag unnamed607;
  struct std__forward_iterator_tag unnamed608;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval609;
  __first603 = v596;
  __last604 = v597;
  __result605 = v598;
  __binary_pred606 = v599;
  unnamed607 = v600;
  unnamed608 = v601;
  int* r610 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first603);
  int t611 = *r610;
  int* r612 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__result605);
  *r612 = t611;
    while (1) {
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r613 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__first603);
      _Bool r614 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(r613, &__last604);
      _Bool u615 = !r614;
      if (!u615) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0616;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1617;
        agg_tmp0616 = __result605; // copy
        agg_tmp1617 = __first603; // copy
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t618 = agg_tmp0616;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t619 = agg_tmp1617;
        _Bool r620 = bool___gnu_cxx____ops___Iter_comp_iter_bool_____int__int____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__binary_pred606, t618, t619);
        _Bool u621 = !r620;
        if (u621) {
          int* r622 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first603);
          int t623 = *r622;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r624 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__result605);
          int* r625 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(r624);
          *r625 = t623;
        }
    }
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r626 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__result605);
  __retval609 = *r626; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t627 = __retval609;
  return t627;
}

// function: _ZN9__gnu_cxx5__ops15_Iter_comp_iterIPFbiiEEC2ES3_
void __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____Iter_comp_iter_bool____(struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* v628, void* v629) {
bb630:
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* this631;
  void* __comp632;
  this631 = v628;
  __comp632 = v629;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* t633 = this631;
  void* t634 = __comp632;
  t633->_M_comp = t634;
  return;
}

// function: _ZN9__gnu_cxx5__ops16__iter_comp_iterIPFbiiEEENS0_15_Iter_comp_iterIT_EES5_
struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____gnu_cxx____ops____iter_comp_iter_bool_____int__int___bool____(void* v635) {
bb636:
  void* __comp637;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ __retval638;
  __comp637 = v635;
  void* t639 = __comp637;
  __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____Iter_comp_iter_bool____(&__retval638, t639);
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ t640 = __retval638;
  return t640;
}

// function: _ZSt19__iterator_categoryIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEENSt15iterator_traitsIT_E17iterator_categoryERKS8_
struct std__random_access_iterator_tag std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v641) {
bb642:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed643;
  struct std__random_access_iterator_tag __retval644;
  unnamed643 = v641;
  struct std__random_access_iterator_tag t645 = __retval644;
  return t645;
}

// function: _ZSt11unique_copyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES6_PFbiiEET0_T_SA_S9_T1_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__unique_copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool_____int__int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v646, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v647, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v648, void* v649) {
bb650:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first651;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last652;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __result653;
  void* __binary_pred654;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval655;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0656;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1657;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2658;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ agg_tmp3659;
  struct std__input_iterator_tag agg_tmp4660;
  struct std__random_access_iterator_tag ref_tmp0661;
  struct std__forward_iterator_tag agg_tmp5662;
  struct std__random_access_iterator_tag ref_tmp1663;
  __first651 = v646;
  __last652 = v647;
  __result653 = v648;
  __binary_pred654 = v649;
    _Bool r664 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first651, &__last652);
    if (r664) {
      __retval655 = __result653; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t665 = __retval655;
      return t665;
    }
  agg_tmp0656 = __first651; // copy
  agg_tmp1657 = __last652; // copy
  agg_tmp2658 = __result653; // copy
  void* t666 = __binary_pred654;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ r667 = __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____gnu_cxx____ops____iter_comp_iter_bool_____int__int___bool____(t666);
  agg_tmp3659 = r667;
  struct std__random_access_iterator_tag r668 = std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__first651);
  ref_tmp0661 = r668;
  struct std__input_iterator_tag* base669 = (struct std__input_iterator_tag*)((char *)&(ref_tmp0661) + 0);
  struct std__random_access_iterator_tag r670 = std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________iterator_category_std____iterator_category___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__result653);
  ref_tmp1663 = r670;
  struct std__forward_iterator_tag* base671 = (struct std__forward_iterator_tag*)((char *)&(ref_tmp1663) + 0);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t672 = agg_tmp0656;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t673 = agg_tmp1657;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t674 = agg_tmp2658;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ t675 = agg_tmp3659;
  struct std__input_iterator_tag t676 = agg_tmp4660;
  struct std__forward_iterator_tag t677 = agg_tmp5662;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r678 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____unique_copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_bool_____int__int_______gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_bool____(t672, t673, t674, t675, t676, t677);
  __retval655 = r678;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t679 = __retval655;
  return t679;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v680, int** v681) {
bb682:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this683;
  int** __i684;
  this683 = v680;
  __i684 = v681;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t685 = this683;
  int** t686 = __i684;
  int* t687 = *t686;
  t685->_M_current = t687;
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v688) {
bb689:
  struct std__vector_int__std__allocator_int__* this690;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval691;
  this690 = v688;
  struct std__vector_int__std__allocator_int__* t692 = this690;
  struct std___Vector_base_int__std__allocator_int__* base693 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t692 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base694 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base693->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval691, &base694->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t695 = __retval691;
  return t695;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSEOS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v696, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v697) {
bb698:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this699;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed700;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval701;
  this699 = v696;
  unnamed700 = v697;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t702 = this699;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t703 = unnamed700;
  int* t704 = t703->_M_current;
  t702->_M_current = t704;
  __retval701 = t702;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t705 = __retval701;
  return t705;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v706) {
bb707:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this708;
  int* __retval709;
  this708 = v706;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t710 = this708;
  int* t711 = t710->_M_current;
  __retval709 = t711;
  int* t712 = __retval709;
  return t712;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v713, int v714) {
bb715:
  int __a716;
  int __b717;
  int __retval718;
  __a716 = v713;
  __b717 = v714;
  int t719 = __a716;
  int t720 = __b717;
  int b721 = t719 | t720;
  __retval718 = b721;
  int t722 = __retval718;
  return t722;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v723) {
bb724:
  struct std__basic_ios_char__std__char_traits_char__* this725;
  int __retval726;
  this725 = v723;
  struct std__basic_ios_char__std__char_traits_char__* t727 = this725;
  struct std__ios_base* base728 = (struct std__ios_base*)((char *)t727 + 0);
  int t729 = base728->_M_streambuf_state;
  __retval726 = t729;
  int t730 = __retval726;
  return t730;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v731, int v732) {
bb733:
  struct std__basic_ios_char__std__char_traits_char__* this734;
  int __state735;
  this734 = v731;
  __state735 = v732;
  struct std__basic_ios_char__std__char_traits_char__* t736 = this734;
  int r737 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t736);
  int t738 = __state735;
  int r739 = std__operator_(r737, t738);
  std__basic_ios_char__std__char_traits_char_____clear(t736, r739);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v740, char* v741) {
bb742:
  char* __c1743;
  char* __c2744;
  _Bool __retval745;
  __c1743 = v740;
  __c2744 = v741;
  char* t746 = __c1743;
  char t747 = *t746;
  int cast748 = (int)t747;
  char* t749 = __c2744;
  char t750 = *t749;
  int cast751 = (int)t750;
  _Bool c752 = ((cast748 == cast751)) ? 1 : 0;
  __retval745 = c752;
  _Bool t753 = __retval745;
  return t753;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v754) {
bb755:
  char* __p756;
  unsigned long __retval757;
  unsigned long __i758;
  __p756 = v754;
  unsigned long c759 = 0;
  __i758 = c759;
    char ref_tmp0760;
    while (1) {
      unsigned long t761 = __i758;
      char* t762 = __p756;
      char* ptr763 = &(t762)[t761];
      char c764 = 0;
      ref_tmp0760 = c764;
      _Bool r765 = __gnu_cxx__char_traits_char___eq(ptr763, &ref_tmp0760);
      _Bool u766 = !r765;
      if (!u766) break;
      unsigned long t767 = __i758;
      unsigned long u768 = t767 + 1;
      __i758 = u768;
    }
  unsigned long t769 = __i758;
  __retval757 = t769;
  unsigned long t770 = __retval757;
  return t770;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v771) {
bb772:
  char* __s773;
  unsigned long __retval774;
  __s773 = v771;
    _Bool r775 = std____is_constant_evaluated();
    if (r775) {
      char* t776 = __s773;
      unsigned long r777 = __gnu_cxx__char_traits_char___length(t776);
      __retval774 = r777;
      unsigned long t778 = __retval774;
      return t778;
    }
  char* t779 = __s773;
  unsigned long r780 = strlen(t779);
  __retval774 = r780;
  unsigned long t781 = __retval774;
  return t781;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v782, char* v783) {
bb784:
  struct std__basic_ostream_char__std__char_traits_char__* __out785;
  char* __s786;
  struct std__basic_ostream_char__std__char_traits_char__* __retval787;
  __out785 = v782;
  __s786 = v783;
    char* t788 = __s786;
    _Bool cast789 = (_Bool)t788;
    _Bool u790 = !cast789;
    if (u790) {
      struct std__basic_ostream_char__std__char_traits_char__* t791 = __out785;
      void** v792 = (void**)t791;
      void* v793 = *((void**)v792);
      unsigned char* cast794 = (unsigned char*)v793;
      long c795 = -24;
      unsigned char* ptr796 = &(cast794)[c795];
      long* cast797 = (long*)ptr796;
      long t798 = *cast797;
      unsigned char* cast799 = (unsigned char*)t791;
      unsigned char* ptr800 = &(cast799)[t798];
      struct std__basic_ostream_char__std__char_traits_char__* cast801 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr800;
      struct std__basic_ios_char__std__char_traits_char__* cast802 = (struct std__basic_ios_char__std__char_traits_char__*)cast801;
      int t803 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast802, t803);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t804 = __out785;
      char* t805 = __s786;
      char* t806 = __s786;
      unsigned long r807 = std__char_traits_char___length(t806);
      long cast808 = (long)r807;
      struct std__basic_ostream_char__std__char_traits_char__* r809 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t804, t805, cast808);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t810 = __out785;
  __retval787 = t810;
  struct std__basic_ostream_char__std__char_traits_char__* t811 = __retval787;
  return t811;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v812) {
bb813:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this814;
  int** __retval815;
  this814 = v812;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t816 = this814;
  __retval815 = &t816->_M_current;
  int** t817 = __retval815;
  return t817;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v818, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v819) {
bb820:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs821;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs822;
  _Bool __retval823;
  __lhs821 = v818;
  __rhs822 = v819;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t824 = __lhs821;
  int** r825 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t824);
  int* t826 = *r825;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t827 = __rhs822;
  int** r828 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t827);
  int* t829 = *r828;
  _Bool c830 = ((t826 == t829)) ? 1 : 0;
  __retval823 = c830;
  _Bool t831 = __retval823;
  return t831;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v832) {
bb833:
  struct std__vector_int__std__allocator_int__* this834;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval835;
  this834 = v832;
  struct std__vector_int__std__allocator_int__* t836 = this834;
  struct std___Vector_base_int__std__allocator_int__* base837 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t836 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base838 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base837->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval835, &base838->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t839 = __retval835;
  return t839;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v840) {
bb841:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this842;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval843;
  this842 = v840;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t844 = this842;
  int* t845 = t844->_M_current;
  int c846 = 1;
  int* ptr847 = &(t845)[c846];
  t844->_M_current = ptr847;
  __retval843 = t844;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t848 = __retval843;
  return t848;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v849, void* v850) {
bb851:
  struct std__basic_ostream_char__std__char_traits_char__* this852;
  void* __pf853;
  struct std__basic_ostream_char__std__char_traits_char__* __retval854;
  this852 = v849;
  __pf853 = v850;
  struct std__basic_ostream_char__std__char_traits_char__* t855 = this852;
  void* t856 = __pf853;
  struct std__basic_ostream_char__std__char_traits_char__* r857 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t856)(t855);
  __retval854 = r857;
  struct std__basic_ostream_char__std__char_traits_char__* t858 = __retval854;
  return t858;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v859) {
bb860:
  struct std__basic_ostream_char__std__char_traits_char__* __os861;
  struct std__basic_ostream_char__std__char_traits_char__* __retval862;
  __os861 = v859;
  struct std__basic_ostream_char__std__char_traits_char__* t863 = __os861;
  struct std__basic_ostream_char__std__char_traits_char__* r864 = std__ostream__flush(t863);
  __retval862 = r864;
  struct std__basic_ostream_char__std__char_traits_char__* t865 = __retval862;
  return t865;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v866) {
bb867:
  struct std__ctype_char_* __f868;
  struct std__ctype_char_* __retval869;
  __f868 = v866;
    struct std__ctype_char_* t870 = __f868;
    _Bool cast871 = (_Bool)t870;
    _Bool u872 = !cast871;
    if (u872) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t873 = __f868;
  __retval869 = t873;
  struct std__ctype_char_* t874 = __retval869;
  return t874;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v875, char v876) {
bb877:
  struct std__ctype_char_* this878;
  char __c879;
  char __retval880;
  this878 = v875;
  __c879 = v876;
  struct std__ctype_char_* t881 = this878;
    char t882 = t881->_M_widen_ok;
    _Bool cast883 = (_Bool)t882;
    if (cast883) {
      char t884 = __c879;
      unsigned char cast885 = (unsigned char)t884;
      unsigned long cast886 = (unsigned long)cast885;
      char t887 = t881->_M_widen[cast886];
      __retval880 = t887;
      char t888 = __retval880;
      return t888;
    }
  std__ctype_char____M_widen_init___const(t881);
  char t889 = __c879;
  void** v890 = (void**)t881;
  void* v891 = *((void**)v890);
  char vcall894 = (char)__VERIFIER_virtual_call_char_char(t881, 6, t889);
  __retval880 = vcall894;
  char t895 = __retval880;
  return t895;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v896, char v897) {
bb898:
  struct std__basic_ios_char__std__char_traits_char__* this899;
  char __c900;
  char __retval901;
  this899 = v896;
  __c900 = v897;
  struct std__basic_ios_char__std__char_traits_char__* t902 = this899;
  struct std__ctype_char_* t903 = t902->_M_ctype;
  struct std__ctype_char_* r904 = std__ctype_char__const__std____check_facet_std__ctype_char___(t903);
  char t905 = __c900;
  char r906 = std__ctype_char___widen_char__const(r904, t905);
  __retval901 = r906;
  char t907 = __retval901;
  return t907;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v908) {
bb909:
  struct std__basic_ostream_char__std__char_traits_char__* __os910;
  struct std__basic_ostream_char__std__char_traits_char__* __retval911;
  __os910 = v908;
  struct std__basic_ostream_char__std__char_traits_char__* t912 = __os910;
  struct std__basic_ostream_char__std__char_traits_char__* t913 = __os910;
  void** v914 = (void**)t913;
  void* v915 = *((void**)v914);
  unsigned char* cast916 = (unsigned char*)v915;
  long c917 = -24;
  unsigned char* ptr918 = &(cast916)[c917];
  long* cast919 = (long*)ptr918;
  long t920 = *cast919;
  unsigned char* cast921 = (unsigned char*)t913;
  unsigned char* ptr922 = &(cast921)[t920];
  struct std__basic_ostream_char__std__char_traits_char__* cast923 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr922;
  struct std__basic_ios_char__std__char_traits_char__* cast924 = (struct std__basic_ios_char__std__char_traits_char__*)cast923;
  char c925 = 10;
  char r926 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast924, c925);
  struct std__basic_ostream_char__std__char_traits_char__* r927 = std__ostream__put(t912, r926);
  struct std__basic_ostream_char__std__char_traits_char__* r928 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r927);
  __retval911 = r928;
  struct std__basic_ostream_char__std__char_traits_char__* t929 = __retval911;
  return t929;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v930) {
bb931:
  struct std__vector_int__std__allocator_int__* this932;
  this932 = v930;
  struct std__vector_int__std__allocator_int__* t933 = this932;
    struct std___Vector_base_int__std__allocator_int__* base934 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t933 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base935 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base934->_M_impl) + 0);
    int* t936 = base935->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base937 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t933 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base938 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base937->_M_impl) + 0);
    int* t939 = base938->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base940 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t933 + 0);
    struct std__allocator_int_* r941 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base940);
    void_std___Destroy_int___int_(t936, t939, r941);
  {
    struct std___Vector_base_int__std__allocator_int__* base942 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t933 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base942);
  }
  return;
}

// function: main
int main() {
bb943:
  int __retval944;
  int myints945[9];
  int myints1946[9];
  struct std__vector_int__std__allocator_int__ myvector947;
  struct std__allocator_int_ ref_tmp0948;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it949;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1950;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0951;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1952;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2953;
  int c954 = 0;
  __retval944 = c954;
  // array copy
  __builtin_memcpy(myints945, __const_main_myints, (unsigned long)9 * sizeof(__const_main_myints[0]));
  // array copy
  __builtin_memcpy(myints1946, __const_main_myints1, (unsigned long)9 * sizeof(__const_main_myints1[0]));
  unsigned long c955 = 9;
  std__allocator_int___allocator_2(&ref_tmp0948);
    std__vector_int__std__allocator_int_____vector(&myvector947, c955, &ref_tmp0948);
  {
    std__allocator_int____allocator(&ref_tmp0948);
  }
    __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&it949);
    int* cast956 = (int*)&(myints1946);
    int* cast957 = (int*)&(myints1946);
    int c958 = 9;
    int* ptr959 = &(cast957)[c958];
    void_std__vector_int__std__allocator_int_____assign_int___void_(&myvector947, cast956, ptr959);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r960 = std__vector_int__std__allocator_int_____begin(&myvector947);
    agg_tmp0951 = r960;
    agg_tmp1952 = it949; // copy
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r961 = std__vector_int__std__allocator_int_____begin(&myvector947);
    agg_tmp2953 = r961;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t962 = agg_tmp0951;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t963 = agg_tmp1952;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t964 = agg_tmp2953;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r965 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__unique_copy___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool_____int__int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool____(t962, t963, t964, &myfunction);
    ref_tmp1950 = r965;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r966 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it949, &ref_tmp1950);
    int* r967 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it949);
    int t968 = *r967;
    int c969 = 20;
    _Bool c970 = ((t968 != c969)) ? 1 : 0;
    if (c970) {
    } else {
      char* cast971 = (char*)&(_str);
      char* c972 = _str_1;
      unsigned int c973 = 37;
      char* cast974 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast971, c972, c973, cast974);
    }
    char* cast975 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r976 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast975);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp2977;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp3978;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r979 = std__vector_int__std__allocator_int_____begin(&myvector947);
      ref_tmp2977 = r979;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r980 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it949, &ref_tmp2977);
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r982 = std__vector_int__std__allocator_int_____end(&myvector947);
        ref_tmp3978 = r982;
        _Bool r983 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it949, &ref_tmp3978);
        _Bool u984 = !r983;
        if (!u984) break;
        char* cast985 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* r986 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast985);
        int* r987 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it949);
        int t988 = *r987;
        struct std__basic_ostream_char__std__char_traits_char__* r989 = std__ostream__operator__(r986, t988);
      for_step981: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r990 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&it949);
      }
    struct std__basic_ostream_char__std__char_traits_char__* r991 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c992 = 0;
    __retval944 = c992;
    int t993 = __retval944;
    int ret_val994 = t993;
    {
      std__vector_int__std__allocator_int______vector(&myvector947);
    }
    return ret_val994;
  int t995 = __retval944;
  return t995;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v996) {
bb997:
  struct std____new_allocator_int_* this998;
  this998 = v996;
  struct std____new_allocator_int_* t999 = this998;
  return;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v1000, unsigned long* v1001) {
bb1002:
  unsigned long* __a1003;
  unsigned long* __b1004;
  unsigned long* __retval1005;
  __a1003 = v1000;
  __b1004 = v1001;
    unsigned long* t1006 = __b1004;
    unsigned long t1007 = *t1006;
    unsigned long* t1008 = __a1003;
    unsigned long t1009 = *t1008;
    _Bool c1010 = ((t1007 < t1009)) ? 1 : 0;
    if (c1010) {
      unsigned long* t1011 = __b1004;
      __retval1005 = t1011;
      unsigned long* t1012 = __retval1005;
      return t1012;
    }
  unsigned long* t1013 = __a1003;
  __retval1005 = t1013;
  unsigned long* t1014 = __retval1005;
  return t1014;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v1015) {
bb1016:
  struct std__allocator_int_* __a1017;
  unsigned long __retval1018;
  unsigned long __diffmax1019;
  unsigned long __allocmax1020;
  __a1017 = v1015;
  unsigned long c1021 = 2305843009213693951;
  __diffmax1019 = c1021;
  unsigned long c1022 = 4611686018427387903;
  __allocmax1020 = c1022;
  unsigned long* r1023 = unsigned_long_const__std__min_unsigned_long_(&__diffmax1019, &__allocmax1020);
  unsigned long t1024 = *r1023;
  __retval1018 = t1024;
  unsigned long t1025 = __retval1018;
  return t1025;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v1026, struct std__allocator_int_* v1027) {
bb1028:
  struct std__allocator_int_* this1029;
  struct std__allocator_int_* __a1030;
  this1029 = v1026;
  __a1030 = v1027;
  struct std__allocator_int_* t1031 = this1029;
  struct std____new_allocator_int_* base1032 = (struct std____new_allocator_int_*)((char *)t1031 + 0);
  struct std__allocator_int_* t1033 = __a1030;
  struct std____new_allocator_int_* base1034 = (struct std____new_allocator_int_*)((char *)t1033 + 0);
  std____new_allocator_int_____new_allocator(base1032, base1034);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v1035, struct std__allocator_int_* v1036) {
bb1037:
  unsigned long __n1038;
  struct std__allocator_int_* __a1039;
  unsigned long __retval1040;
  __n1038 = v1035;
  __a1039 = v1036;
    struct std__allocator_int_ ref_tmp01041;
    _Bool tmp_exprcleanup1042;
    unsigned long t1043 = __n1038;
    struct std__allocator_int_* t1044 = __a1039;
    std__allocator_int___allocator(&ref_tmp01041, t1044);
      unsigned long r1045 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp01041);
      _Bool c1046 = ((t1043 > r1045)) ? 1 : 0;
      tmp_exprcleanup1042 = c1046;
    {
      std__allocator_int____allocator(&ref_tmp01041);
    }
    _Bool t1047 = tmp_exprcleanup1042;
    if (t1047) {
      char* cast1048 = (char*)&(_str_4);
      std____throw_length_error(cast1048);
    }
  unsigned long t1049 = __n1038;
  __retval1040 = t1049;
  unsigned long t1050 = __retval1040;
  return t1050;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1051, struct std__allocator_int_* v1052) {
bb1053:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1054;
  struct std__allocator_int_* __a1055;
  this1054 = v1051;
  __a1055 = v1052;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1056 = this1054;
  struct std__allocator_int_* base1057 = (struct std__allocator_int_*)((char *)t1056 + 0);
  struct std__allocator_int_* t1058 = __a1055;
  std__allocator_int___allocator(base1057, t1058);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1059 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t1056 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base1059);
  return;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb1060:
  _Bool __retval1061;
    _Bool c1062 = 0;
    __retval1061 = c1062;
    _Bool t1063 = __retval1061;
    return t1063;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v1064) {
bb1065:
  struct std____new_allocator_int_* this1066;
  unsigned long __retval1067;
  this1066 = v1064;
  struct std____new_allocator_int_* t1068 = this1066;
  unsigned long c1069 = 9223372036854775807;
  unsigned long c1070 = 4;
  unsigned long b1071 = c1069 / c1070;
  __retval1067 = b1071;
  unsigned long t1072 = __retval1067;
  return t1072;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v1073, unsigned long v1074, void* v1075) {
bb1076:
  struct std____new_allocator_int_* this1077;
  unsigned long __n1078;
  void* unnamed1079;
  int* __retval1080;
  this1077 = v1073;
  __n1078 = v1074;
  unnamed1079 = v1075;
  struct std____new_allocator_int_* t1081 = this1077;
    unsigned long t1082 = __n1078;
    unsigned long r1083 = std____new_allocator_int____M_max_size___const(t1081);
    _Bool c1084 = ((t1082 > r1083)) ? 1 : 0;
    if (c1084) {
        unsigned long t1085 = __n1078;
        unsigned long c1086 = -1;
        unsigned long c1087 = 4;
        unsigned long b1088 = c1086 / c1087;
        _Bool c1089 = ((t1085 > b1088)) ? 1 : 0;
        if (c1089) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c1090 = 4;
    unsigned long c1091 = 16;
    _Bool c1092 = ((c1090 > c1091)) ? 1 : 0;
    if (c1092) {
      unsigned long __al1093;
      unsigned long c1094 = 4;
      __al1093 = c1094;
      unsigned long t1095 = __n1078;
      unsigned long c1096 = 4;
      unsigned long b1097 = t1095 * c1096;
      unsigned long t1098 = __al1093;
      void* r1099 = operator_new_2(b1097, t1098);
      int* cast1100 = (int*)r1099;
      __retval1080 = cast1100;
      int* t1101 = __retval1080;
      return t1101;
    }
  unsigned long t1102 = __n1078;
  unsigned long c1103 = 4;
  unsigned long b1104 = t1102 * c1103;
  void* r1105 = operator_new(b1104);
  int* cast1106 = (int*)r1105;
  __retval1080 = cast1106;
  int* t1107 = __retval1080;
  return t1107;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v1108, unsigned long v1109) {
bb1110:
  struct std__allocator_int_* this1111;
  unsigned long __n1112;
  int* __retval1113;
  this1111 = v1108;
  __n1112 = v1109;
  struct std__allocator_int_* t1114 = this1111;
    _Bool r1115 = std____is_constant_evaluated();
    if (r1115) {
        unsigned long t1116 = __n1112;
        unsigned long c1117 = 4;
        unsigned long ovr1118;
        _Bool ovf1119 = __builtin_mul_overflow(t1116, c1117, &ovr1118);
        __n1112 = ovr1118;
        if (ovf1119) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1120 = __n1112;
      void* r1121 = operator_new(t1120);
      int* cast1122 = (int*)r1121;
      __retval1113 = cast1122;
      int* t1123 = __retval1113;
      return t1123;
    }
  struct std____new_allocator_int_* base1124 = (struct std____new_allocator_int_*)((char *)t1114 + 0);
  unsigned long t1125 = __n1112;
  void* c1126 = ((void*)0);
  int* r1127 = std____new_allocator_int___allocate(base1124, t1125, c1126);
  __retval1113 = r1127;
  int* t1128 = __retval1113;
  return t1128;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v1129, unsigned long v1130) {
bb1131:
  struct std__allocator_int_* __a1132;
  unsigned long __n1133;
  int* __retval1134;
  __a1132 = v1129;
  __n1133 = v1130;
  struct std__allocator_int_* t1135 = __a1132;
  unsigned long t1136 = __n1133;
  int* r1137 = std__allocator_int___allocate(t1135, t1136);
  __retval1134 = r1137;
  int* t1138 = __retval1134;
  return t1138;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v1139, unsigned long v1140) {
bb1141:
  struct std___Vector_base_int__std__allocator_int__* this1142;
  unsigned long __n1143;
  int* __retval1144;
  this1142 = v1139;
  __n1143 = v1140;
  struct std___Vector_base_int__std__allocator_int__* t1145 = this1142;
  unsigned long t1146 = __n1143;
  unsigned long c1147 = 0;
  _Bool c1148 = ((t1146 != c1147)) ? 1 : 0;
  int* ternary1149;
  if (c1148) {
    struct std__allocator_int_* base1150 = (struct std__allocator_int_*)((char *)&(t1145->_M_impl) + 0);
    unsigned long t1151 = __n1143;
    int* r1152 = std__allocator_traits_std__allocator_int_____allocate(base1150, t1151);
    ternary1149 = (int*)r1152;
  } else {
    int* c1153 = ((void*)0);
    ternary1149 = (int*)c1153;
  }
  __retval1144 = ternary1149;
  int* t1154 = __retval1144;
  return t1154;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm
void std___Vector_base_int__std__allocator_int______M_create_storage(struct std___Vector_base_int__std__allocator_int__* v1155, unsigned long v1156) {
bb1157:
  struct std___Vector_base_int__std__allocator_int__* this1158;
  unsigned long __n1159;
  this1158 = v1155;
  __n1159 = v1156;
  struct std___Vector_base_int__std__allocator_int__* t1160 = this1158;
  unsigned long t1161 = __n1159;
  int* r1162 = std___Vector_base_int__std__allocator_int______M_allocate(t1160, t1161);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1163 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1160->_M_impl) + 0);
  base1163->_M_start = r1162;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1164 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1160->_M_impl) + 0);
  int* t1165 = base1164->_M_start;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1166 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1160->_M_impl) + 0);
  base1166->_M_finish = t1165;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1167 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1160->_M_impl) + 0);
  int* t1168 = base1167->_M_start;
  unsigned long t1169 = __n1159;
  int* ptr1170 = &(t1168)[t1169];
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1171 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1160->_M_impl) + 0);
  base1171->_M_end_of_storage = ptr1170;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v1172) {
bb1173:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this1174;
  this1174 = v1172;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t1175 = this1174;
  {
    struct std__allocator_int_* base1176 = (struct std__allocator_int_*)((char *)t1175 + 0);
    std__allocator_int____allocator(base1176);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1177, unsigned long v1178, struct std__allocator_int_* v1179) {
bb1180:
  struct std___Vector_base_int__std__allocator_int__* this1181;
  unsigned long __n1182;
  struct std__allocator_int_* __a1183;
  this1181 = v1177;
  __n1182 = v1178;
  __a1183 = v1179;
  struct std___Vector_base_int__std__allocator_int__* t1184 = this1181;
  struct std__allocator_int_* t1185 = __a1183;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t1184->_M_impl, t1185);
    unsigned long t1186 = __n1182;
    std___Vector_base_int__std__allocator_int______M_create_storage(t1184, t1186);
  return;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1187:
  _Bool __retval1188;
    _Bool c1189 = 0;
    __retval1188 = c1189;
    _Bool t1190 = __retval1188;
    return t1190;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1191, int** v1192) {
bb1193:
  struct std___UninitDestroyGuard_int____void_* this1194;
  int** __first1195;
  this1194 = v1191;
  __first1195 = v1192;
  struct std___UninitDestroyGuard_int____void_* t1196 = this1194;
  int** t1197 = __first1195;
  int* t1198 = *t1197;
  t1196->_M_first = t1198;
  int** t1199 = __first1195;
  t1196->_M_cur = t1199;
  return;
}

// function: _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_
int* _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(int* v1200) {
bb1201:
  int* __location1202;
  int* __retval1203;
  void* __loc1204;
  __location1202 = v1200;
  int* t1205 = __location1202;
  void* cast1206 = (void*)t1205;
  __loc1204 = cast1206;
    void* t1207 = __loc1204;
    int* cast1208 = (int*)t1207;
    int c1209 = 0;
    *cast1208 = c1209;
    __retval1203 = cast1208;
    int* t1210 = __retval1203;
    return t1210;
  abort();
}

// function: _ZSt10_ConstructIiJEEvPT_DpOT0_
void void_std___Construct_int_(int* v1211) {
bb1212:
  int* __p1213;
  __p1213 = v1211;
    _Bool r1214 = std____is_constant_evaluated();
    if (r1214) {
      int* t1215 = __p1213;
      int* r1216 = _ZSt12construct_atIiJEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S0_pispclsr3stdE7declvalIT0_EEEEEPS0_S3_DpOS2_(t1215);
      return;
    }
  int* t1217 = __p1213;
  void* cast1218 = (void*)t1217;
  int* cast1219 = (int*)cast1218;
  int c1220 = 0;
  *cast1219 = c1220;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v1221) {
bb1222:
  struct std___UninitDestroyGuard_int____void_* this1223;
  this1223 = v1221;
  struct std___UninitDestroyGuard_int____void_* t1224 = this1223;
  int** c1225 = ((void*)0);
  t1224->_M_cur = c1225;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1226) {
bb1227:
  struct std___UninitDestroyGuard_int____void_* this1228;
  this1228 = v1226;
  struct std___UninitDestroyGuard_int____void_* t1229 = this1228;
    int** t1230 = t1229->_M_cur;
    int** c1231 = ((void*)0);
    _Bool c1232 = ((t1230 != c1231)) ? 1 : 0;
    if (c1232) {
      int* t1233 = t1229->_M_first;
      int** t1234 = t1229->_M_cur;
      int* t1235 = *t1234;
      void_std___Destroy_int__(t1233, t1235);
    }
  return;
}

// function: _ZNSt27__uninitialized_default_n_1ILb0EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(int* v1236, unsigned long v1237) {
bb1238:
  int* __first1239;
  unsigned long __n1240;
  int* __retval1241;
  struct std___UninitDestroyGuard_int____void_ __guard1242;
  __first1239 = v1236;
  __n1240 = v1237;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard1242, &__first1239);
      while (1) {
        unsigned long t1244 = __n1240;
        unsigned long c1245 = 0;
        _Bool c1246 = ((t1244 > c1245)) ? 1 : 0;
        if (!c1246) break;
        int* t1247 = __first1239;
        void_std___Construct_int_(t1247);
      for_step1243: ;
        unsigned long t1248 = __n1240;
        unsigned long u1249 = t1248 - 1;
        __n1240 = u1249;
        int* t1250 = __first1239;
        int c1251 = 1;
        int* ptr1252 = &(t1250)[c1251];
        __first1239 = ptr1252;
      }
    std___UninitDestroyGuard_int___void___release(&__guard1242);
    int* t1253 = __first1239;
    __retval1241 = t1253;
    int* t1254 = __retval1241;
    int* ret_val1255 = t1254;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1242);
    }
    return ret_val1255;
  abort();
}

// function: _ZSt9__fill_a1IPiiEvT_S1_RKT0_
void void_std____fill_a1_int___int_(int* v1256, int* v1257, int* v1258) {
bb1259:
  int* __first1260;
  int* __last1261;
  int* __value1262;
  _Bool __load_outside_loop1263;
  int __val1264;
  __first1260 = v1256;
  __last1261 = v1257;
  __value1262 = v1258;
  _Bool c1265 = 1;
  __load_outside_loop1263 = c1265;
  int* t1266 = __value1262;
  int t1267 = *t1266;
  __val1264 = t1267;
    while (1) {
      int* t1269 = __first1260;
      int* t1270 = __last1261;
      _Bool c1271 = ((t1269 != t1270)) ? 1 : 0;
      if (!c1271) break;
      int t1272 = __val1264;
      int* t1273 = __first1260;
      *t1273 = t1272;
    for_step1268: ;
      int* t1274 = __first1260;
      int c1275 = 1;
      int* ptr1276 = &(t1274)[c1275];
      __first1260 = ptr1276;
    }
  return;
}

// function: _ZSt8__fill_aIPiiEvT_S1_RKT0_
void void_std____fill_a_int___int_(int* v1277, int* v1278, int* v1279) {
bb1280:
  int* __first1281;
  int* __last1282;
  int* __value1283;
  __first1281 = v1277;
  __last1282 = v1278;
  __value1283 = v1279;
  int* t1284 = __first1281;
  int* t1285 = __last1282;
  int* t1286 = __value1283;
  void_std____fill_a1_int___int_(t1284, t1285, t1286);
  return;
}

// function: _ZSt10__fill_n_aIPimiET_S1_T0_RKT1_St26random_access_iterator_tag
int* int__std____fill_n_a_int___unsigned_long__int_(int* v1287, unsigned long v1288, int* v1289, struct std__random_access_iterator_tag v1290) {
bb1291:
  int* __first1292;
  unsigned long __n1293;
  int* __value1294;
  struct std__random_access_iterator_tag unnamed1295;
  int* __retval1296;
  __first1292 = v1287;
  __n1293 = v1288;
  __value1294 = v1289;
  unnamed1295 = v1290;
    unsigned long t1297 = __n1293;
    unsigned long c1298 = 0;
    _Bool c1299 = ((t1297 <= c1298)) ? 1 : 0;
    if (c1299) {
      int* t1300 = __first1292;
      __retval1296 = t1300;
      int* t1301 = __retval1296;
      return t1301;
    }
  int* t1302 = __first1292;
  int* t1303 = __first1292;
  unsigned long t1304 = __n1293;
  int* ptr1305 = &(t1303)[t1304];
  int* t1306 = __value1294;
  void_std____fill_a_int___int_(t1302, ptr1305, t1306);
  int* t1307 = __first1292;
  unsigned long t1308 = __n1293;
  int* ptr1309 = &(t1307)[t1308];
  __retval1296 = ptr1309;
  int* t1310 = __retval1296;
  return t1310;
}

// function: _ZSt17__size_to_integerm
unsigned long std____size_to_integer(unsigned long v1311) {
bb1312:
  unsigned long __n1313;
  unsigned long __retval1314;
  __n1313 = v1311;
  unsigned long t1315 = __n1313;
  __retval1314 = t1315;
  unsigned long t1316 = __retval1314;
  return t1316;
}

// function: _ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** v1317) {
bb1318:
  int** unnamed1319;
  struct std__random_access_iterator_tag __retval1320;
  unnamed1319 = v1317;
  struct std__random_access_iterator_tag t1321 = __retval1320;
  return t1321;
}

// function: _ZSt6fill_nIPimiET_S1_T0_RKT1_
int* int__std__fill_n_int___unsigned_long__int_(int* v1322, unsigned long v1323, int* v1324) {
bb1325:
  int* __first1326;
  unsigned long __n1327;
  int* __value1328;
  int* __retval1329;
  struct std__random_access_iterator_tag agg_tmp01330;
  __first1326 = v1322;
  __n1327 = v1323;
  __value1328 = v1324;
  int* t1331 = __first1326;
  unsigned long t1332 = __n1327;
  unsigned long r1333 = std____size_to_integer(t1332);
  int* t1334 = __value1328;
  struct std__random_access_iterator_tag r1335 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first1326);
  agg_tmp01330 = r1335;
  struct std__random_access_iterator_tag t1336 = agg_tmp01330;
  int* r1337 = int__std____fill_n_a_int___unsigned_long__int_(t1331, r1333, t1334, t1336);
  __retval1329 = r1337;
  int* t1338 = __retval1329;
  return t1338;
}

// function: _ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPimEET_S3_T0_
int* int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(int* v1339, unsigned long v1340) {
bb1341:
  int* __first1342;
  unsigned long __n1343;
  int* __retval1344;
  __first1342 = v1339;
  __n1343 = v1340;
    unsigned long t1345 = __n1343;
    unsigned long c1346 = 0;
    _Bool c1347 = ((t1345 > c1346)) ? 1 : 0;
    if (c1347) {
      int* __val1348;
      int* t1349 = __first1342;
      __val1348 = t1349;
      int* t1350 = __val1348;
      void_std___Construct_int_(t1350);
      int* t1351 = __first1342;
      int c1352 = 1;
      int* ptr1353 = &(t1351)[c1352];
      __first1342 = ptr1353;
      int* t1354 = __first1342;
      unsigned long t1355 = __n1343;
      unsigned long c1356 = 1;
      unsigned long b1357 = t1355 - c1356;
      int* t1358 = __val1348;
      int* r1359 = int__std__fill_n_int___unsigned_long__int_(t1354, b1357, t1358);
      __first1342 = r1359;
    }
  int* t1360 = __first1342;
  __retval1344 = t1360;
  int* t1361 = __retval1344;
  return t1361;
}

// function: _ZSt25__uninitialized_default_nIPimET_S1_T0_
int* int__std____uninitialized_default_n_int___unsigned_long_(int* v1362, unsigned long v1363) {
bb1364:
  int* __first1365;
  unsigned long __n1366;
  int* __retval1367;
  _Bool __can_fill1368;
  __first1365 = v1362;
  __n1366 = v1363;
    _Bool r1369 = std__is_constant_evaluated();
    if (r1369) {
      int* t1370 = __first1365;
      unsigned long t1371 = __n1366;
      int* r1372 = int__std____uninitialized_default_n_1_false_____uninit_default_n_int___unsigned_long_(t1370, t1371);
      __retval1367 = r1372;
      int* t1373 = __retval1367;
      return t1373;
    }
  _Bool c1374 = 1;
  __can_fill1368 = c1374;
  int* t1375 = __first1365;
  unsigned long t1376 = __n1366;
  int* r1377 = int__std____uninitialized_default_n_1_true_____uninit_default_n_int___unsigned_long_(t1375, t1376);
  __retval1367 = r1377;
  int* t1378 = __retval1367;
  return t1378;
}

// function: _ZSt27__uninitialized_default_n_aIPimiET_S1_T0_RSaIT1_E
int* int__std____uninitialized_default_n_a_int___unsigned_long__int_(int* v1379, unsigned long v1380, struct std__allocator_int_* v1381) {
bb1382:
  int* __first1383;
  unsigned long __n1384;
  struct std__allocator_int_* unnamed1385;
  int* __retval1386;
  __first1383 = v1379;
  __n1384 = v1380;
  unnamed1385 = v1381;
  int* t1387 = __first1383;
  unsigned long t1388 = __n1384;
  int* r1389 = int__std____uninitialized_default_n_int___unsigned_long_(t1387, t1388);
  __retval1386 = r1389;
  int* t1390 = __retval1386;
  return t1390;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v1391) {
bb1392:
  struct std___Vector_base_int__std__allocator_int__* this1393;
  struct std__allocator_int_* __retval1394;
  this1393 = v1391;
  struct std___Vector_base_int__std__allocator_int__* t1395 = this1393;
  struct std__allocator_int_* base1396 = (struct std__allocator_int_*)((char *)&(t1395->_M_impl) + 0);
  __retval1394 = base1396;
  struct std__allocator_int_* t1397 = __retval1394;
  return t1397;
}

// function: _ZNSt6vectorIiSaIiEE21_M_default_initializeEm
void std__vector_int__std__allocator_int______M_default_initialize(struct std__vector_int__std__allocator_int__* v1398, unsigned long v1399) {
bb1400:
  struct std__vector_int__std__allocator_int__* this1401;
  unsigned long __n1402;
  this1401 = v1398;
  __n1402 = v1399;
  struct std__vector_int__std__allocator_int__* t1403 = this1401;
  struct std___Vector_base_int__std__allocator_int__* base1404 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1403 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1405 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1404->_M_impl) + 0);
  int* t1406 = base1405->_M_start;
  unsigned long t1407 = __n1402;
  struct std___Vector_base_int__std__allocator_int__* base1408 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1403 + 0);
  struct std__allocator_int_* r1409 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1408);
  int* r1410 = int__std____uninitialized_default_n_a_int___unsigned_long__int_(t1406, t1407, r1409);
  struct std___Vector_base_int__std__allocator_int__* base1411 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1403 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1412 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1411->_M_impl) + 0);
  base1412->_M_finish = r1410;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1413, int* v1414, unsigned long v1415) {
bb1416:
  struct std____new_allocator_int_* this1417;
  int* __p1418;
  unsigned long __n1419;
  this1417 = v1413;
  __p1418 = v1414;
  __n1419 = v1415;
  struct std____new_allocator_int_* t1420 = this1417;
    unsigned long c1421 = 4;
    unsigned long c1422 = 16;
    _Bool c1423 = ((c1421 > c1422)) ? 1 : 0;
    if (c1423) {
      int* t1424 = __p1418;
      void* cast1425 = (void*)t1424;
      unsigned long t1426 = __n1419;
      unsigned long c1427 = 4;
      unsigned long b1428 = t1426 * c1427;
      unsigned long c1429 = 4;
      operator_delete_3(cast1425, b1428, c1429);
      return;
    }
  int* t1430 = __p1418;
  void* cast1431 = (void*)t1430;
  unsigned long t1432 = __n1419;
  unsigned long c1433 = 4;
  unsigned long b1434 = t1432 * c1433;
  operator_delete_2(cast1431, b1434);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1435, int* v1436, unsigned long v1437) {
bb1438:
  struct std__allocator_int_* this1439;
  int* __p1440;
  unsigned long __n1441;
  this1439 = v1435;
  __p1440 = v1436;
  __n1441 = v1437;
  struct std__allocator_int_* t1442 = this1439;
    _Bool r1443 = std____is_constant_evaluated();
    if (r1443) {
      int* t1444 = __p1440;
      void* cast1445 = (void*)t1444;
      operator_delete(cast1445);
      return;
    }
  struct std____new_allocator_int_* base1446 = (struct std____new_allocator_int_*)((char *)t1442 + 0);
  int* t1447 = __p1440;
  unsigned long t1448 = __n1441;
  std____new_allocator_int___deallocate(base1446, t1447, t1448);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1449, int* v1450, unsigned long v1451) {
bb1452:
  struct std__allocator_int_* __a1453;
  int* __p1454;
  unsigned long __n1455;
  __a1453 = v1449;
  __p1454 = v1450;
  __n1455 = v1451;
  struct std__allocator_int_* t1456 = __a1453;
  int* t1457 = __p1454;
  unsigned long t1458 = __n1455;
  std__allocator_int___deallocate(t1456, t1457, t1458);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v1459, int* v1460, unsigned long v1461) {
bb1462:
  struct std___Vector_base_int__std__allocator_int__* this1463;
  int* __p1464;
  unsigned long __n1465;
  this1463 = v1459;
  __p1464 = v1460;
  __n1465 = v1461;
  struct std___Vector_base_int__std__allocator_int__* t1466 = this1463;
    int* t1467 = __p1464;
    _Bool cast1468 = (_Bool)t1467;
    if (cast1468) {
      struct std__allocator_int_* base1469 = (struct std__allocator_int_*)((char *)&(t1466->_M_impl) + 0);
      int* t1470 = __p1464;
      unsigned long t1471 = __n1465;
      std__allocator_traits_std__allocator_int_____deallocate(base1469, t1470, t1471);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1472) {
bb1473:
  struct std___Vector_base_int__std__allocator_int__* this1474;
  this1474 = v1472;
  struct std___Vector_base_int__std__allocator_int__* t1475 = this1474;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1476 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1475->_M_impl) + 0);
    int* t1477 = base1476->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1478 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1475->_M_impl) + 0);
    int* t1479 = base1478->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1480 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1475->_M_impl) + 0);
    int* t1481 = base1480->_M_start;
    long diff1482 = t1479 - t1481;
    unsigned long cast1483 = (unsigned long)diff1482;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1475, t1477, cast1483);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1475->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1484, struct std____new_allocator_int_* v1485) {
bb1486:
  struct std____new_allocator_int_* this1487;
  struct std____new_allocator_int_* unnamed1488;
  this1487 = v1484;
  unnamed1488 = v1485;
  struct std____new_allocator_int_* t1489 = this1487;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1490) {
bb1491:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1492;
  this1492 = v1490;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1493 = this1492;
  int* c1494 = ((void*)0);
  t1493->_M_start = c1494;
  int* c1495 = ((void*)0);
  t1493->_M_finish = c1495;
  int* c1496 = ((void*)0);
  t1493->_M_end_of_storage = c1496;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1497) {
bb1498:
  int* __location1499;
  __location1499 = v1497;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1500, int* v1501) {
bb1502:
  int* __first1503;
  int* __last1504;
  __first1503 = v1500;
  __last1504 = v1501;
      _Bool r1505 = std____is_constant_evaluated();
      if (r1505) {
          while (1) {
            int* t1507 = __first1503;
            int* t1508 = __last1504;
            _Bool c1509 = ((t1507 != t1508)) ? 1 : 0;
            if (!c1509) break;
            int* t1510 = __first1503;
            void_std__destroy_at_int_(t1510);
          for_step1506: ;
            int* t1511 = __first1503;
            int c1512 = 1;
            int* ptr1513 = &(t1511)[c1512];
            __first1503 = ptr1513;
          }
      }
  return;
}

