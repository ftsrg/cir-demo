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
struct std__ios_base___Callback_list { struct std__ios_base___Callback_list* __field0; void* __field1; int __field2; int __field3; };
struct std__ios_base___Words { void* __field0; long __field1; };
struct std__locale { struct std__locale___Impl* __field0; };
struct std__locale___Impl { int __field0; struct std__locale__facet** __field1; unsigned long __field2; struct std__locale__facet** __field3; char** __field4; };
struct std__locale__facet { void* __field0; int __field1; unsigned char __field2[4]; } __attribute__((packed));
struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___ { struct std__locale__facet __field0; unsigned char __field1[4]; };
struct std__random_access_iterator_tag { unsigned char __field0; };
struct std__ranges____distance_fn { unsigned char __field0; };
struct std__vector_int__std__allocator_int_____Guard_alloc { int* _M_storage; unsigned long _M_len; struct std___Vector_base_int__std__allocator_int__* _M_vect; };
struct std___Vector_base_int__std__allocator_int_____Vector_impl { struct std___Vector_base_int__std__allocator_int_____Vector_impl_data __field0; };
struct std__basic_streambuf_char__std__char_traits_char__ { void* __field0; char* __field1; char* __field2; char* __field3; char* __field4; char* __field5; char* __field6; struct std__locale __field7; };
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char _M_widen_ok; char _M_widen[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* _M_ctype; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_myints1[5] = {10, 20, 30, 20, 10};
int __const_main_myints[9] = {10, 20, 20, 20, 30, 30, 20, 20, 10};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
char _str[21] = "it != myvector.end()";
char _str_1[116] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm90_unique/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str_2[19] = "myvector contains:";
char _str_3[2] = " ";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_4[49] = "cannot create std::vector larger than max_size()";
_Bool myfunction(int p0, int p1);
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector_int___void_(struct std__vector_int__std__allocator_int__* p0, int* p1, int* p2, struct std__allocator_int_* p3);
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
int* int__std____copy_move_a_false__int___int__(int* p0, int* p1, int* p2);
int* int__std____miter_base_int__(int* p0);
int* int__std__copy_int___int__(int* p0, int* p1, int* p2);
void void_std____advance_int___long_(int** p0, long p1, struct std__random_access_iterator_tag p2);
void void_std__advance_int___unsigned_long_(int** p0, unsigned long p1);
void void_std__vector_int__std__allocator_int______M_assign_aux_int__(struct std__vector_int__std__allocator_int__* p0, int* p1, int* p2, struct std__forward_iterator_tag p3);
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** p0);
void void_std__vector_int__std__allocator_int_____assign_int___void_(struct std__vector_int__std__allocator_int__* p0, int* p1, int* p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____adjacent_find___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_bool_____int__int_______gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ p2);
_Bool bool___gnu_cxx____ops___Iter_comp_iter_bool_____int__int____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____unique___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_bool_____int__int_______gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ p2);
void __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____Iter_comp_iter_bool____(struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* p0, void* p1);
struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____gnu_cxx____ops____iter_comp_iter_bool_____int__int___bool____(void* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__unique___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool_____int__int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, void* p2);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
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

// function: _ZNKSt6vectorIiSaIiEE4sizeEv
unsigned long std__vector_int__std__allocator_int_____size___const(struct std__vector_int__std__allocator_int__* v44) {
bb45:
  struct std__vector_int__std__allocator_int__* this46;
  unsigned long __retval47;
  long __dif48;
  this46 = v44;
  struct std__vector_int__std__allocator_int__* t49 = this46;
  struct std___Vector_base_int__std__allocator_int__* base50 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t49 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base51 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base50->_M_impl) + 0);
  int* t52 = base51->_M_finish;
  struct std___Vector_base_int__std__allocator_int__* base53 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t49 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base54 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base53->_M_impl) + 0);
  int* t55 = base54->_M_start;
  long diff56 = t52 - t55;
  __dif48 = diff56;
    long t57 = __dif48;
    long c58 = 0;
    _Bool c59 = ((t57 < c58)) ? 1 : 0;
    if (c59) {
      __builtin_unreachable();
    }
  long t60 = __dif48;
  unsigned long cast61 = (unsigned long)t60;
  __retval47 = cast61;
  unsigned long t62 = __retval47;
  return t62;
}

// function: _ZSt10__distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_St26random_access_iterator_tag
long std__iterator_traits_int____difference_type_std____distance_int__(int* v63, int* v64, struct std__random_access_iterator_tag v65) {
bb66:
  int* __first67;
  int* __last68;
  struct std__random_access_iterator_tag unnamed69;
  long __retval70;
  __first67 = v63;
  __last68 = v64;
  unnamed69 = v65;
  int* t71 = __last68;
  int* t72 = __first67;
  long diff73 = t71 - t72;
  __retval70 = diff73;
  long t74 = __retval70;
  return t74;
}

// function: _ZSt8distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_
long std__iterator_traits_int____difference_type_std__distance_int__(int* v75, int* v76) {
bb77:
  int* __first78;
  int* __last79;
  long __retval80;
  struct std__random_access_iterator_tag agg_tmp081;
  __first78 = v75;
  __last79 = v76;
  int* t82 = __first78;
  int* t83 = __last79;
  struct std__random_access_iterator_tag r84 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first78);
  agg_tmp081 = r84;
  struct std__random_access_iterator_tag t85 = agg_tmp081;
  long r86 = std__iterator_traits_int____difference_type_std____distance_int__(t82, t83, t85);
  __retval80 = r86;
  long t87 = __retval80;
  return t87;
}

// function: _ZNKSt6vectorIiSaIiEE8capacityEv
unsigned long std__vector_int__std__allocator_int_____capacity___const(struct std__vector_int__std__allocator_int__* v88) {
bb89:
  struct std__vector_int__std__allocator_int__* this90;
  unsigned long __retval91;
  long __dif92;
  this90 = v88;
  struct std__vector_int__std__allocator_int__* t93 = this90;
  struct std___Vector_base_int__std__allocator_int__* base94 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t93 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base95 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base94->_M_impl) + 0);
  int* t96 = base95->_M_end_of_storage;
  struct std___Vector_base_int__std__allocator_int__* base97 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t93 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base98 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base97->_M_impl) + 0);
  int* t99 = base98->_M_start;
  long diff100 = t96 - t99;
  __dif92 = diff100;
    long t101 = __dif92;
    long c102 = 0;
    _Bool c103 = ((t101 < c102)) ? 1 : 0;
    if (c103) {
      __builtin_unreachable();
    }
  long t104 = __dif92;
  unsigned long cast105 = (unsigned long)t104;
  __retval91 = cast105;
  unsigned long t106 = __retval91;
  return t106;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocC2EPimRSt12_Vector_baseIiS0_E
void std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v107, int* v108, unsigned long v109, struct std___Vector_base_int__std__allocator_int__* v110) {
bb111:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this112;
  int* __s113;
  unsigned long __l114;
  struct std___Vector_base_int__std__allocator_int__* __vect115;
  this112 = v107;
  __s113 = v108;
  __l114 = v109;
  __vect115 = v110;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t116 = this112;
  int* t117 = __s113;
  t116->_M_storage = t117;
  unsigned long t118 = __l114;
  t116->_M_len = t118;
  struct std___Vector_base_int__std__allocator_int__* t119 = __vect115;
  t116->_M_vect = t119;
  return;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_alloc10_M_releaseEv
int* std__vector_int__std__allocator_int______Guard_alloc___M_release(struct std__vector_int__std__allocator_int_____Guard_alloc* v120) {
bb121:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this122;
  int* __retval123;
  int* __res124;
  this122 = v120;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t125 = this122;
  int* t126 = t125->_M_storage;
  __res124 = t126;
  int* c127 = ((void*)0);
  t125->_M_storage = c127;
  int* t128 = __res124;
  __retval123 = t128;
  int* t129 = __retval123;
  return t129;
}

// function: _ZNSt6vectorIiSaIiEE12_Guard_allocD2Ev
void std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(struct std__vector_int__std__allocator_int_____Guard_alloc* v130) {
bb131:
  struct std__vector_int__std__allocator_int_____Guard_alloc* this132;
  this132 = v130;
  struct std__vector_int__std__allocator_int_____Guard_alloc* t133 = this132;
    int* t134 = t133->_M_storage;
    _Bool cast135 = (_Bool)t134;
    if (cast135) {
      struct std___Vector_base_int__std__allocator_int__* t136 = t133->_M_vect;
      int* t137 = t133->_M_storage;
      unsigned long t138 = t133->_M_len;
      std___Vector_base_int__std__allocator_int______M_deallocate(t136, t137, t138);
    }
  return;
}

// function: _ZNSt6vectorIiSaIiEE20_M_allocate_and_copyIPiEES3_mT_S4_
int* int__std__vector_int__std__allocator_int______M_allocate_and_copy_int__(struct std__vector_int__std__allocator_int__* v139, unsigned long v140, int* v141, int* v142) {
bb143:
  struct std__vector_int__std__allocator_int__* this144;
  unsigned long __n145;
  int* __first146;
  int* __last147;
  int* __retval148;
  struct std__vector_int__std__allocator_int_____Guard_alloc __guard149;
  this144 = v139;
  __n145 = v140;
  __first146 = v141;
  __last147 = v142;
  struct std__vector_int__std__allocator_int__* t150 = this144;
  struct std___Vector_base_int__std__allocator_int__* base151 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t150 + 0);
  unsigned long t152 = __n145;
  int* r153 = std___Vector_base_int__std__allocator_int______M_allocate(base151, t152);
  unsigned long t154 = __n145;
  struct std___Vector_base_int__std__allocator_int__* base155 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t150 + 0);
  std__vector_int__std__allocator_int______Guard_alloc___Guard_alloc(&__guard149, r153, t154, base155);
    int* t156 = __first146;
    int* t157 = __last147;
    int* t158 = __guard149._M_storage;
    struct std___Vector_base_int__std__allocator_int__* base159 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t150 + 0);
    struct std__allocator_int_* r160 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base159);
    int* r161 = int__std____uninitialized_copy_a_int___int___int___int_(t156, t157, t158, r160);
    int* r162 = std__vector_int__std__allocator_int______Guard_alloc___M_release(&__guard149);
    __retval148 = r162;
    int* t163 = __retval148;
    int* ret_val164 = t163;
    {
      std__vector_int__std__allocator_int______Guard_alloc____Guard_alloc(&__guard149);
    }
    return ret_val164;
  abort();
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v165, int* v166, struct std__allocator_int_* v167) {
bb168:
  int* __first169;
  int* __last170;
  struct std__allocator_int_* unnamed171;
  __first169 = v165;
  __last170 = v166;
  unnamed171 = v167;
  int* t172 = __first169;
  int* t173 = __last170;
  void_std___Destroy_int__(t172, t173);
  return;
}

// function: _ZNSt6vectorIiSaIiEE15_M_erase_at_endEPi
void std__vector_int__std__allocator_int______M_erase_at_end(struct std__vector_int__std__allocator_int__* v174, int* v175) {
bb176:
  struct std__vector_int__std__allocator_int__* this177;
  int* __pos178;
  this177 = v174;
  __pos178 = v175;
  struct std__vector_int__std__allocator_int__* t179 = this177;
    unsigned long __n180;
    struct std___Vector_base_int__std__allocator_int__* base181 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t179 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base182 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base181->_M_impl) + 0);
    int* t183 = base182->_M_finish;
    int* t184 = __pos178;
    long diff185 = t183 - t184;
    unsigned long cast186 = (unsigned long)diff185;
    __n180 = cast186;
    unsigned long t187 = __n180;
    _Bool cast188 = (_Bool)t187;
    if (cast188) {
      int* t189 = __pos178;
      struct std___Vector_base_int__std__allocator_int__* base190 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t179 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base191 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base190->_M_impl) + 0);
      int* t192 = base191->_M_finish;
      struct std___Vector_base_int__std__allocator_int__* base193 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t179 + 0);
      struct std__allocator_int_* r194 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base193);
      void_std___Destroy_int___int_(t189, t192, r194);
      int* t195 = __pos178;
      struct std___Vector_base_int__std__allocator_int__* base196 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t179 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base197 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base196->_M_impl) + 0);
      base197->_M_finish = t195;
    }
  return;
}

// function: _ZSt12__niter_wrapIPiET_RKS1_S1_
int* int__std____niter_wrap_int__(int** v198, int* v199) {
bb200:
  int** unnamed201;
  int* __res202;
  int* __retval203;
  unnamed201 = v198;
  __res202 = v199;
  int* t204 = __res202;
  __retval203 = t204;
  int* t205 = __retval203;
  return t205;
}

// function: _ZSt12__assign_oneILb0EPiS0_EvRT0_RT1_
void void_std____assign_one_false__int___int__(int** v206, int** v207) {
bb208:
  int** __out209;
  int** __in210;
  __out209 = v206;
  __in210 = v207;
    int** t211 = __in210;
    int* t212 = *t211;
    int t213 = *t212;
    int** t214 = __out209;
    int* t215 = *t214;
    *t215 = t213;
  return;
}

// function: _ZSt14__copy_move_a2ILb0EPiS0_S0_ET2_T0_T1_S1_
int* int__std____copy_move_a2_false__int___int___int__(int* v216, int* v217, int* v218) {
bb219:
  int* __first220;
  int* __last221;
  int* __result222;
  int* __retval223;
  __first220 = v216;
  __last221 = v217;
  __result222 = v218;
      _Bool r224 = std____is_constant_evaluated();
      if (r224) {
      } else {
          long __n225;
          int* t226 = __first220;
          int* t227 = __last221;
          long r228 = std__iterator_traits_int____difference_type_std__distance_int__(t226, t227);
          __n225 = r228;
            long t229 = __n225;
            long c230 = 1;
            _Bool c231 = ((t229 > c230)) ? 1 : 0;
            if (c231) {
              int* t232 = __result222;
              void* cast233 = (void*)t232;
              int* t234 = __first220;
              void* cast235 = (void*)t234;
              long t236 = __n225;
              unsigned long cast237 = (unsigned long)t236;
              unsigned long c238 = 4;
              unsigned long b239 = cast237 * c238;
              void* r240 = memmove(cast233, cast235, b239);
              long t241 = __n225;
              int* t242 = __result222;
              int* ptr243 = &(t242)[t241];
              __result222 = ptr243;
            } else {
                long t244 = __n225;
                long c245 = 1;
                _Bool c246 = ((t244 == c245)) ? 1 : 0;
                if (c246) {
                  void_std____assign_one_false__int___int__(&__result222, &__first220);
                  int* t247 = __result222;
                  int c248 = 1;
                  int* ptr249 = &(t247)[c248];
                  __result222 = ptr249;
                }
            }
          int* t250 = __result222;
          __retval223 = t250;
          int* t251 = __retval223;
          return t251;
      }
    while (1) {
      int* t253 = __first220;
      int* t254 = __last221;
      _Bool c255 = ((t253 != t254)) ? 1 : 0;
      if (!c255) break;
      void_std____assign_one_false__int___int__(&__result222, &__first220);
    for_step252: ;
      int* t256 = __result222;
      int c257 = 1;
      int* ptr258 = &(t256)[c257];
      __result222 = ptr258;
      int* t259 = __first220;
      int c260 = 1;
      int* ptr261 = &(t259)[c260];
      __first220 = ptr261;
    }
  int* t262 = __result222;
  __retval223 = t262;
  int* t263 = __retval223;
  return t263;
}

// function: _ZSt14__copy_move_a1ILb0EPiS0_ET1_T0_S2_S1_
int* int__std____copy_move_a1_false__int___int__(int* v264, int* v265, int* v266) {
bb267:
  int* __first268;
  int* __last269;
  int* __result270;
  int* __retval271;
  __first268 = v264;
  __last269 = v265;
  __result270 = v266;
  int* t272 = __first268;
  int* t273 = __last269;
  int* t274 = __result270;
  int* r275 = int__std____copy_move_a2_false__int___int___int__(t272, t273, t274);
  __retval271 = r275;
  int* t276 = __retval271;
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

// function: _ZNSt6vectorIiSaIiEE13_M_assign_auxIPiEEvT_S4_St20forward_iterator_tag
void void_std__vector_int__std__allocator_int______M_assign_aux_int__(struct std__vector_int__std__allocator_int__* v362, int* v363, int* v364, struct std__forward_iterator_tag v365) {
bb366:
  struct std__vector_int__std__allocator_int__* this367;
  int* __first368;
  int* __last369;
  struct std__forward_iterator_tag unnamed370;
  unsigned long __sz371;
  unsigned long __len372;
  this367 = v362;
  __first368 = v363;
  __last369 = v364;
  unnamed370 = v365;
  struct std__vector_int__std__allocator_int__* t373 = this367;
  unsigned long r374 = std__vector_int__std__allocator_int_____size___const(t373);
  __sz371 = r374;
  int* t375 = __first368;
  int* t376 = __last369;
  long r377 = std__iterator_traits_int____difference_type_std__distance_int__(t375, t376);
  unsigned long cast378 = (unsigned long)r377;
  __len372 = cast378;
    unsigned long t379 = __len372;
    unsigned long r380 = std__vector_int__std__allocator_int_____capacity___const(t373);
    _Bool c381 = ((t379 > r380)) ? 1 : 0;
    if (c381) {
      int* __tmp382;
        unsigned long t383 = __len372;
        unsigned long t384 = __sz371;
        _Bool c385 = ((t383 <= t384)) ? 1 : 0;
        if (c385) {
          __builtin_unreachable();
        }
      unsigned long t386 = __len372;
      struct std___Vector_base_int__std__allocator_int__* base387 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t373 + 0);
      struct std__allocator_int_* r388 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base387);
      unsigned long r389 = std__vector_int__std__allocator_int______S_check_init_len(t386, r388);
      unsigned long t390 = __len372;
      int* t391 = __first368;
      int* t392 = __last369;
      int* r393 = int__std__vector_int__std__allocator_int______M_allocate_and_copy_int__(t373, t390, t391, t392);
      __tmp382 = r393;
      struct std___Vector_base_int__std__allocator_int__* base394 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t373 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base395 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base394->_M_impl) + 0);
      int* t396 = base395->_M_start;
      struct std___Vector_base_int__std__allocator_int__* base397 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t373 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base398 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base397->_M_impl) + 0);
      int* t399 = base398->_M_finish;
      struct std___Vector_base_int__std__allocator_int__* base400 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t373 + 0);
      struct std__allocator_int_* r401 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base400);
      void_std___Destroy_int___int_(t396, t399, r401);
      struct std___Vector_base_int__std__allocator_int__* base402 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t373 + 0);
      struct std___Vector_base_int__std__allocator_int__* base403 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t373 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base404 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base403->_M_impl) + 0);
      int* t405 = base404->_M_start;
      struct std___Vector_base_int__std__allocator_int__* base406 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t373 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base407 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base406->_M_impl) + 0);
      int* t408 = base407->_M_end_of_storage;
      struct std___Vector_base_int__std__allocator_int__* base409 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t373 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base410 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base409->_M_impl) + 0);
      int* t411 = base410->_M_start;
      long diff412 = t408 - t411;
      unsigned long cast413 = (unsigned long)diff412;
      std___Vector_base_int__std__allocator_int______M_deallocate(base402, t405, cast413);
      int* t414 = __tmp382;
      struct std___Vector_base_int__std__allocator_int__* base415 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t373 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base416 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base415->_M_impl) + 0);
      base416->_M_start = t414;
      struct std___Vector_base_int__std__allocator_int__* base417 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t373 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base418 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base417->_M_impl) + 0);
      int* t419 = base418->_M_start;
      unsigned long t420 = __len372;
      int* ptr421 = &(t419)[t420];
      struct std___Vector_base_int__std__allocator_int__* base422 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t373 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base423 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base422->_M_impl) + 0);
      base423->_M_finish = ptr421;
      struct std___Vector_base_int__std__allocator_int__* base424 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t373 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base425 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base424->_M_impl) + 0);
      int* t426 = base425->_M_finish;
      struct std___Vector_base_int__std__allocator_int__* base427 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t373 + 0);
      struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base428 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base427->_M_impl) + 0);
      base428->_M_end_of_storage = t426;
    } else {
        unsigned long t429 = __sz371;
        unsigned long t430 = __len372;
        _Bool c431 = ((t429 >= t430)) ? 1 : 0;
        if (c431) {
          int* t432 = __first368;
          int* t433 = __last369;
          struct std___Vector_base_int__std__allocator_int__* base434 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t373 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base435 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base434->_M_impl) + 0);
          int* t436 = base435->_M_start;
          int* r437 = int__std__copy_int___int__(t432, t433, t436);
          std__vector_int__std__allocator_int______M_erase_at_end(t373, r437);
        } else {
          int* __mid438;
          unsigned long __n439;
          int* t440 = __first368;
          __mid438 = t440;
          unsigned long t441 = __sz371;
          void_std__advance_int___unsigned_long_(&__mid438, t441);
          int* t442 = __first368;
          int* t443 = __mid438;
          struct std___Vector_base_int__std__allocator_int__* base444 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t373 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base445 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base444->_M_impl) + 0);
          int* t446 = base445->_M_start;
          int* r447 = int__std__copy_int___int__(t442, t443, t446);
          unsigned long t448 = __len372;
          unsigned long t449 = __sz371;
          unsigned long b450 = t448 - t449;
          __n439 = b450;
          int* t451 = __mid438;
          int* t452 = __last369;
          struct std___Vector_base_int__std__allocator_int__* base453 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t373 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base454 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base453->_M_impl) + 0);
          int* t455 = base454->_M_finish;
          struct std___Vector_base_int__std__allocator_int__* base456 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t373 + 0);
          struct std__allocator_int_* r457 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base456);
          int* r458 = int__std____uninitialized_copy_a_int___int___int___int_(t451, t452, t455, r457);
          struct std___Vector_base_int__std__allocator_int__* base459 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t373 + 0);
          struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base460 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base459->_M_impl) + 0);
          base460->_M_finish = r458;
        }
    }
  return;
}

// function: _ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
struct std__random_access_iterator_tag std__iterator_traits_int____iterator_category_std____iterator_category_int__(int** v461) {
bb462:
  int** unnamed463;
  struct std__random_access_iterator_tag __retval464;
  unnamed463 = v461;
  struct std__random_access_iterator_tag t465 = __retval464;
  return t465;
}

// function: _ZNSt6vectorIiSaIiEE6assignIPivEEvT_S4_
void void_std__vector_int__std__allocator_int_____assign_int___void_(struct std__vector_int__std__allocator_int__* v466, int* v467, int* v468) {
bb469:
  struct std__vector_int__std__allocator_int__* this470;
  int* __first471;
  int* __last472;
  struct std__forward_iterator_tag agg_tmp0473;
  struct std__random_access_iterator_tag ref_tmp0474;
  this470 = v466;
  __first471 = v467;
  __last472 = v468;
  struct std__vector_int__std__allocator_int__* t475 = this470;
  int* t476 = __first471;
  int* t477 = __last472;
  struct std__random_access_iterator_tag r478 = std__iterator_traits_int____iterator_category_std____iterator_category_int__(&__first471);
  ref_tmp0474 = r478;
  struct std__forward_iterator_tag* base479 = (struct std__forward_iterator_tag*)((char *)&(ref_tmp0474) + 0);
  struct std__forward_iterator_tag t480 = agg_tmp0473;
  void_std__vector_int__std__allocator_int______M_assign_aux_int__(t475, t476, t477, t480);
  return;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSERKS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v481, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v482) {
bb483:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this484;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed485;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval486;
  this484 = v481;
  unnamed485 = v482;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t487 = this484;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t488 = unnamed485;
  int* t489 = t488->_M_current;
  t487->_M_current = t489;
  __retval486 = t487;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t490 = __retval486;
  return t490;
}

// function: _ZSt15__adjacent_findIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_comp_iterIPFbiiEEEET_SC_SC_T0_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____adjacent_find___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_bool_____int__int_______gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v491, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v492, struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ v493) {
bb494:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first495;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last496;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ __binary_pred497;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval498;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __next499;
  __first495 = v491;
  __last496 = v492;
  __binary_pred497 = v493;
    _Bool r500 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first495, &__last496);
    if (r500) {
      __retval498 = __last496; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t501 = __retval498;
      return t501;
    }
  __next499 = __first495; // copy
    while (1) {
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r502 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__next499);
      _Bool r503 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(r502, &__last496);
      _Bool u504 = !r503;
      if (!u504) break;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0505;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1506;
          agg_tmp0505 = __first495; // copy
          agg_tmp1506 = __next499; // copy
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t507 = agg_tmp0505;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t508 = agg_tmp1506;
          _Bool r509 = bool___gnu_cxx____ops___Iter_comp_iter_bool_____int__int____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__binary_pred497, t507, t508);
          if (r509) {
            __retval498 = __first495; // copy
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t510 = __retval498;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ret_val511 = t510;
            return ret_val511;
          }
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r512 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__2(&__first495, &__next499);
    }
  __retval498 = __last496; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t513 = __retval498;
  return t513;
}

// function: _ZN9__gnu_cxx5__ops15_Iter_comp_iterIPFbiiEEclINS_17__normal_iteratorIPiSt6vectorIiSaIiEEEESB_EEbT_T0_
_Bool bool___gnu_cxx____ops___Iter_comp_iter_bool_____int__int____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* v514, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v515, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v516) {
bb517:
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* this518;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it1519;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it2520;
  _Bool __retval521;
  this518 = v514;
  __it1519 = v515;
  __it2520 = v516;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* t522 = this518;
  void* t523 = t522->_M_comp;
  int* r524 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it1519);
  int t525 = *r524;
  int* r526 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it2520);
  int t527 = *r526;
  _Bool r528 = ((_Bool (*)(int, int))t523)(t525, t527);
  __retval521 = r528;
  _Bool t529 = __retval521;
  return t529;
}

// function: _ZSt8__uniqueIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_comp_iterIPFbiiEEEET_SC_SC_T0_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____unique___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_bool_____int__int_______gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v530, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v531, struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ v532) {
bb533:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first534;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last535;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ __binary_pred536;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval537;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp0538;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0539;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1540;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ agg_tmp2541;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __dest542;
  __first534 = v530;
  __last535 = v531;
  __binary_pred536 = v532;
  agg_tmp0539 = __first534; // copy
  agg_tmp1540 = __last535; // copy
  agg_tmp2541 = __binary_pred536; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t543 = agg_tmp0539;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t544 = agg_tmp1540;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ t545 = agg_tmp2541;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r546 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____adjacent_find___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_bool_____int__int_______gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_bool____(t543, t544, t545);
  ref_tmp0538 = r546;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r547 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&__first534, &ref_tmp0538);
    _Bool r548 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first534, &__last535);
    if (r548) {
      __retval537 = __last535; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t549 = __retval537;
      return t549;
    }
  __dest542 = __first534; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r550 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__first534);
    while (1) {
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r551 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__first534);
      _Bool r552 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(r551, &__last535);
      _Bool u553 = !r552;
      if (!u553) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3554;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp4555;
        agg_tmp3554 = __dest542; // copy
        agg_tmp4555 = __first534; // copy
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t556 = agg_tmp3554;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t557 = agg_tmp4555;
        _Bool r558 = bool___gnu_cxx____ops___Iter_comp_iter_bool_____int__int____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__binary_pred536, t556, t557);
        _Bool u559 = !r558;
        if (u559) {
          int* r560 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__first534);
          int t561 = *r560;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r562 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__dest542);
          int* r563 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(r562);
          *r563 = t561;
        }
    }
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r564 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__dest542);
  __retval537 = *r564; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t565 = __retval537;
  return t565;
}

// function: _ZN9__gnu_cxx5__ops15_Iter_comp_iterIPFbiiEEC2ES3_
void __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____Iter_comp_iter_bool____(struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* v566, void* v567) {
bb568:
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* this569;
  void* __comp570;
  this569 = v566;
  __comp570 = v567;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* t571 = this569;
  void* t572 = __comp570;
  t571->_M_comp = t572;
  return;
}

// function: _ZN9__gnu_cxx5__ops16__iter_comp_iterIPFbiiEEENS0_15_Iter_comp_iterIT_EES5_
struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____gnu_cxx____ops____iter_comp_iter_bool_____int__int___bool____(void* v573) {
bb574:
  void* __comp575;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ __retval576;
  __comp575 = v573;
  void* t577 = __comp575;
  __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____Iter_comp_iter_bool____(&__retval576, t577);
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ t578 = __retval576;
  return t578;
}

// function: _ZSt6uniqueIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEPFbiiEET_S9_S9_T0_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__unique___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool_____int__int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v579, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v580, void* v581) {
bb582:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first583;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last584;
  void* __binary_pred585;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval586;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0587;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1588;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ agg_tmp2589;
  __first583 = v579;
  __last584 = v580;
  __binary_pred585 = v581;
  agg_tmp0587 = __first583; // copy
  agg_tmp1588 = __last584; // copy
  void* t590 = __binary_pred585;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ r591 = __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____gnu_cxx____ops____iter_comp_iter_bool_____int__int___bool____(t590);
  agg_tmp2589 = r591;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t592 = agg_tmp0587;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t593 = agg_tmp1588;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ t594 = agg_tmp2589;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r595 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____unique___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_bool_____int__int_______gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_bool____(t592, t593, t594);
  __retval586 = r595;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t596 = __retval586;
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

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v605) {
bb606:
  struct std__vector_int__std__allocator_int__* this607;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval608;
  this607 = v605;
  struct std__vector_int__std__allocator_int__* t609 = this607;
  struct std___Vector_base_int__std__allocator_int__* base610 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t609 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base611 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base610->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval608, &base611->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t612 = __retval608;
  return t612;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v613) {
bb614:
  struct std__vector_int__std__allocator_int__* this615;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval616;
  this615 = v613;
  struct std__vector_int__std__allocator_int__* t617 = this615;
  struct std___Vector_base_int__std__allocator_int__* base618 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t617 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base619 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base618->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval616, &base619->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t620 = __retval616;
  return t620;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSEOS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v621, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v622) {
bb623:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this624;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed625;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval626;
  this624 = v621;
  unnamed625 = v622;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t627 = this624;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t628 = unnamed625;
  int* t629 = t628->_M_current;
  t627->_M_current = t629;
  __retval626 = t627;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t630 = __retval626;
  return t630;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v631) {
bb632:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this633;
  int** __retval634;
  this633 = v631;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t635 = this633;
  __retval634 = &t635->_M_current;
  int** t636 = __retval634;
  return t636;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v637, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v638) {
bb639:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs640;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs641;
  _Bool __retval642;
  __lhs640 = v637;
  __rhs641 = v638;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t643 = __lhs640;
  int** r644 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t643);
  int* t645 = *r644;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t646 = __rhs641;
  int** r647 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t646);
  int* t648 = *r647;
  _Bool c649 = ((t645 == t648)) ? 1 : 0;
  __retval642 = c649;
  _Bool t650 = __retval642;
  return t650;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v651, int v652) {
bb653:
  int __a654;
  int __b655;
  int __retval656;
  __a654 = v651;
  __b655 = v652;
  int t657 = __a654;
  int t658 = __b655;
  int b659 = t657 | t658;
  __retval656 = b659;
  int t660 = __retval656;
  return t660;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v661) {
bb662:
  struct std__basic_ios_char__std__char_traits_char__* this663;
  int __retval664;
  this663 = v661;
  struct std__basic_ios_char__std__char_traits_char__* t665 = this663;
  struct std__ios_base* base666 = (struct std__ios_base*)((char *)t665 + 0);
  int t667 = base666->_M_streambuf_state;
  __retval664 = t667;
  int t668 = __retval664;
  return t668;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v669, int v670) {
bb671:
  struct std__basic_ios_char__std__char_traits_char__* this672;
  int __state673;
  this672 = v669;
  __state673 = v670;
  struct std__basic_ios_char__std__char_traits_char__* t674 = this672;
  int r675 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t674);
  int t676 = __state673;
  int r677 = std__operator_(r675, t676);
  std__basic_ios_char__std__char_traits_char_____clear(t674, r677);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v678, char* v679) {
bb680:
  char* __c1681;
  char* __c2682;
  _Bool __retval683;
  __c1681 = v678;
  __c2682 = v679;
  char* t684 = __c1681;
  char t685 = *t684;
  int cast686 = (int)t685;
  char* t687 = __c2682;
  char t688 = *t687;
  int cast689 = (int)t688;
  _Bool c690 = ((cast686 == cast689)) ? 1 : 0;
  __retval683 = c690;
  _Bool t691 = __retval683;
  return t691;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v692) {
bb693:
  char* __p694;
  unsigned long __retval695;
  unsigned long __i696;
  __p694 = v692;
  unsigned long c697 = 0;
  __i696 = c697;
    char ref_tmp0698;
    while (1) {
      unsigned long t699 = __i696;
      char* t700 = __p694;
      char* ptr701 = &(t700)[t699];
      char c702 = 0;
      ref_tmp0698 = c702;
      _Bool r703 = __gnu_cxx__char_traits_char___eq(ptr701, &ref_tmp0698);
      _Bool u704 = !r703;
      if (!u704) break;
      unsigned long t705 = __i696;
      unsigned long u706 = t705 + 1;
      __i696 = u706;
    }
  unsigned long t707 = __i696;
  __retval695 = t707;
  unsigned long t708 = __retval695;
  return t708;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v709) {
bb710:
  char* __s711;
  unsigned long __retval712;
  __s711 = v709;
    _Bool r713 = std____is_constant_evaluated();
    if (r713) {
      char* t714 = __s711;
      unsigned long r715 = __gnu_cxx__char_traits_char___length(t714);
      __retval712 = r715;
      unsigned long t716 = __retval712;
      return t716;
    }
  char* t717 = __s711;
  unsigned long r718 = strlen(t717);
  __retval712 = r718;
  unsigned long t719 = __retval712;
  return t719;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v720, char* v721) {
bb722:
  struct std__basic_ostream_char__std__char_traits_char__* __out723;
  char* __s724;
  struct std__basic_ostream_char__std__char_traits_char__* __retval725;
  __out723 = v720;
  __s724 = v721;
    char* t726 = __s724;
    _Bool cast727 = (_Bool)t726;
    _Bool u728 = !cast727;
    if (u728) {
      struct std__basic_ostream_char__std__char_traits_char__* t729 = __out723;
      void** v730 = (void**)t729;
      void* v731 = *((void**)v730);
      unsigned char* cast732 = (unsigned char*)v731;
      long c733 = -24;
      unsigned char* ptr734 = &(cast732)[c733];
      long* cast735 = (long*)ptr734;
      long t736 = *cast735;
      unsigned char* cast737 = (unsigned char*)t729;
      unsigned char* ptr738 = &(cast737)[t736];
      struct std__basic_ostream_char__std__char_traits_char__* cast739 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr738;
      struct std__basic_ios_char__std__char_traits_char__* cast740 = (struct std__basic_ios_char__std__char_traits_char__*)cast739;
      int t741 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast740, t741);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t742 = __out723;
      char* t743 = __s724;
      char* t744 = __s724;
      unsigned long r745 = std__char_traits_char___length(t744);
      long cast746 = (long)r745;
      struct std__basic_ostream_char__std__char_traits_char__* r747 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t742, t743, cast746);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t748 = __out723;
  __retval725 = t748;
  struct std__basic_ostream_char__std__char_traits_char__* t749 = __retval725;
  return t749;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v750) {
bb751:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this752;
  int* __retval753;
  this752 = v750;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t754 = this752;
  int* t755 = t754->_M_current;
  __retval753 = t755;
  int* t756 = __retval753;
  return t756;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v757) {
bb758:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this759;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval760;
  this759 = v757;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t761 = this759;
  int* t762 = t761->_M_current;
  int c763 = 1;
  int* ptr764 = &(t762)[c763];
  t761->_M_current = ptr764;
  __retval760 = t761;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t765 = __retval760;
  return t765;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v766, void* v767) {
bb768:
  struct std__basic_ostream_char__std__char_traits_char__* this769;
  void* __pf770;
  struct std__basic_ostream_char__std__char_traits_char__* __retval771;
  this769 = v766;
  __pf770 = v767;
  struct std__basic_ostream_char__std__char_traits_char__* t772 = this769;
  void* t773 = __pf770;
  struct std__basic_ostream_char__std__char_traits_char__* r774 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t773)(t772);
  __retval771 = r774;
  struct std__basic_ostream_char__std__char_traits_char__* t775 = __retval771;
  return t775;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v776) {
bb777:
  struct std__basic_ostream_char__std__char_traits_char__* __os778;
  struct std__basic_ostream_char__std__char_traits_char__* __retval779;
  __os778 = v776;
  struct std__basic_ostream_char__std__char_traits_char__* t780 = __os778;
  struct std__basic_ostream_char__std__char_traits_char__* r781 = std__ostream__flush(t780);
  __retval779 = r781;
  struct std__basic_ostream_char__std__char_traits_char__* t782 = __retval779;
  return t782;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v783) {
bb784:
  struct std__ctype_char_* __f785;
  struct std__ctype_char_* __retval786;
  __f785 = v783;
    struct std__ctype_char_* t787 = __f785;
    _Bool cast788 = (_Bool)t787;
    _Bool u789 = !cast788;
    if (u789) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t790 = __f785;
  __retval786 = t790;
  struct std__ctype_char_* t791 = __retval786;
  return t791;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v792, char v793) {
bb794:
  struct std__ctype_char_* this795;
  char __c796;
  char __retval797;
  this795 = v792;
  __c796 = v793;
  struct std__ctype_char_* t798 = this795;
    char t799 = t798->_M_widen_ok;
    _Bool cast800 = (_Bool)t799;
    if (cast800) {
      char t801 = __c796;
      unsigned char cast802 = (unsigned char)t801;
      unsigned long cast803 = (unsigned long)cast802;
      char t804 = t798->_M_widen[cast803];
      __retval797 = t804;
      char t805 = __retval797;
      return t805;
    }
  std__ctype_char____M_widen_init___const(t798);
  char t806 = __c796;
  void** v807 = (void**)t798;
  void* v808 = *((void**)v807);
  char vcall811 = (char)__VERIFIER_virtual_call_char_char(t798, 6, t806);
  __retval797 = vcall811;
  char t812 = __retval797;
  return t812;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v813, char v814) {
bb815:
  struct std__basic_ios_char__std__char_traits_char__* this816;
  char __c817;
  char __retval818;
  this816 = v813;
  __c817 = v814;
  struct std__basic_ios_char__std__char_traits_char__* t819 = this816;
  struct std__ctype_char_* t820 = t819->_M_ctype;
  struct std__ctype_char_* r821 = std__ctype_char__const__std____check_facet_std__ctype_char___(t820);
  char t822 = __c817;
  char r823 = std__ctype_char___widen_char__const(r821, t822);
  __retval818 = r823;
  char t824 = __retval818;
  return t824;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v825) {
bb826:
  struct std__basic_ostream_char__std__char_traits_char__* __os827;
  struct std__basic_ostream_char__std__char_traits_char__* __retval828;
  __os827 = v825;
  struct std__basic_ostream_char__std__char_traits_char__* t829 = __os827;
  struct std__basic_ostream_char__std__char_traits_char__* t830 = __os827;
  void** v831 = (void**)t830;
  void* v832 = *((void**)v831);
  unsigned char* cast833 = (unsigned char*)v832;
  long c834 = -24;
  unsigned char* ptr835 = &(cast833)[c834];
  long* cast836 = (long*)ptr835;
  long t837 = *cast836;
  unsigned char* cast838 = (unsigned char*)t830;
  unsigned char* ptr839 = &(cast838)[t837];
  struct std__basic_ostream_char__std__char_traits_char__* cast840 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr839;
  struct std__basic_ios_char__std__char_traits_char__* cast841 = (struct std__basic_ios_char__std__char_traits_char__*)cast840;
  char c842 = 10;
  char r843 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast841, c842);
  struct std__basic_ostream_char__std__char_traits_char__* r844 = std__ostream__put(t829, r843);
  struct std__basic_ostream_char__std__char_traits_char__* r845 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r844);
  __retval828 = r845;
  struct std__basic_ostream_char__std__char_traits_char__* t846 = __retval828;
  return t846;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v847) {
bb848:
  struct std__vector_int__std__allocator_int__* this849;
  this849 = v847;
  struct std__vector_int__std__allocator_int__* t850 = this849;
    struct std___Vector_base_int__std__allocator_int__* base851 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t850 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base852 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base851->_M_impl) + 0);
    int* t853 = base852->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base854 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t850 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base855 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base854->_M_impl) + 0);
    int* t856 = base855->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base857 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t850 + 0);
    struct std__allocator_int_* r858 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base857);
    void_std___Destroy_int___int_(t853, t856, r858);
  {
    struct std___Vector_base_int__std__allocator_int__* base859 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t850 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base859);
  }
  return;
}

// function: main
int main() {
bb860:
  int __retval861;
  int myints862[9];
  int myints1863[5];
  struct std__vector_int__std__allocator_int__ myvector864;
  struct std__allocator_int_ ref_tmp0865;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it866;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it2867;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1868;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0869;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1870;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp2871;
  int c872 = 0;
  __retval861 = c872;
  // array copy
  __builtin_memcpy(myints862, __const_main_myints, (unsigned long)9 * sizeof(__const_main_myints[0]));
  // array copy
  __builtin_memcpy(myints1863, __const_main_myints1, (unsigned long)5 * sizeof(__const_main_myints1[0]));
  int* cast873 = (int*)&(myints862);
  int* cast874 = (int*)&(myints862);
  int c875 = 9;
  int* ptr876 = &(cast874)[c875];
  std__allocator_int___allocator_2(&ref_tmp0865);
    std__vector_int__std__allocator_int_____vector_int___void_(&myvector864, cast873, ptr876, &ref_tmp0865);
  {
    std__allocator_int____allocator(&ref_tmp0865);
  }
    __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&it866);
    __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&it2867);
    int* cast877 = (int*)&(myints1863);
    int* cast878 = (int*)&(myints1863);
    int c879 = 5;
    int* ptr880 = &(cast878)[c879];
    void_std__vector_int__std__allocator_int_____assign_int___void_(&myvector864, cast877, ptr880);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r881 = std__vector_int__std__allocator_int_____begin(&myvector864);
    agg_tmp0869 = r881;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r882 = std__vector_int__std__allocator_int_____end(&myvector864);
    agg_tmp1870 = r882;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t883 = agg_tmp0869;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t884 = agg_tmp1870;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r885 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__unique___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool_____int__int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool____(t883, t884, &myfunction);
    ref_tmp1868 = r885;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r886 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it866, &ref_tmp1868);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r887 = std__vector_int__std__allocator_int_____end(&myvector864);
    ref_tmp2871 = r887;
    _Bool r888 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it866, &ref_tmp2871);
    _Bool u889 = !r888;
    if (u889) {
    } else {
      char* cast890 = (char*)&(_str);
      char* c891 = _str_1;
      unsigned int c892 = 35;
      char* cast893 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast890, c891, c892, cast893);
    }
    char* cast894 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r895 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast894);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp3896;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp4897;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r898 = std__vector_int__std__allocator_int_____begin(&myvector864);
      ref_tmp3896 = r898;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r899 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it866, &ref_tmp3896);
      while (1) {
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r901 = std__vector_int__std__allocator_int_____end(&myvector864);
        ref_tmp4897 = r901;
        _Bool r902 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it866, &ref_tmp4897);
        _Bool u903 = !r902;
        if (!u903) break;
        char* cast904 = (char*)&(_str_3);
        struct std__basic_ostream_char__std__char_traits_char__* r905 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast904);
        int* r906 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it866);
        int t907 = *r906;
        struct std__basic_ostream_char__std__char_traits_char__* r908 = std__ostream__operator__(r905, t907);
      for_step900: ;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r909 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&it866);
      }
    struct std__basic_ostream_char__std__char_traits_char__* r910 = std__ostream__operator___std__ostream_____(&_ZSt4cout, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int c911 = 0;
    __retval861 = c911;
    int t912 = __retval861;
    int ret_val913 = t912;
    {
      std__vector_int__std__allocator_int______vector(&myvector864);
    }
    return ret_val913;
  int t914 = __retval861;
  return t914;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v915) {
bb916:
  struct std____new_allocator_int_* this917;
  this917 = v915;
  struct std____new_allocator_int_* t918 = this917;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v919, struct std__allocator_int_* v920) {
bb921:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this922;
  struct std__allocator_int_* __a923;
  this922 = v919;
  __a923 = v920;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t924 = this922;
  struct std__allocator_int_* base925 = (struct std__allocator_int_*)((char *)t924 + 0);
  struct std__allocator_int_* t926 = __a923;
  std__allocator_int___allocator(base925, t926);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base927 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t924 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base927);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v928) {
bb929:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this930;
  this930 = v928;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t931 = this930;
  {
    struct std__allocator_int_* base932 = (struct std__allocator_int_*)((char *)t931 + 0);
    std__allocator_int____allocator(base932);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v933, struct std__allocator_int_* v934) {
bb935:
  struct std___Vector_base_int__std__allocator_int__* this936;
  struct std__allocator_int_* __a937;
  this936 = v933;
  __a937 = v934;
  struct std___Vector_base_int__std__allocator_int__* t938 = this936;
  struct std__allocator_int_* t939 = __a937;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t938->_M_impl, t939);
  return;
}

// function: _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_
long _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_(struct std__ranges____distance_fn* v940, int** v941, int* v942) {
bb943:
  struct std__ranges____distance_fn* this944;
  int** __first945;
  int* __last946;
  long __retval947;
  this944 = v940;
  __first945 = v941;
  __last946 = v942;
  struct std__ranges____distance_fn* t948 = this944;
  int* t949 = __last946;
  int** t950 = __first945;
  int* t951 = *t950;
  long diff952 = t949 - t951;
  __retval947 = diff952;
  long t953 = __retval947;
  return t953;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb954:
  _Bool __retval955;
    _Bool c956 = 0;
    __retval955 = c956;
    _Bool t957 = __retval955;
    return t957;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v958) {
bb959:
  struct std____new_allocator_int_* this960;
  unsigned long __retval961;
  this960 = v958;
  struct std____new_allocator_int_* t962 = this960;
  unsigned long c963 = 9223372036854775807;
  unsigned long c964 = 4;
  unsigned long b965 = c963 / c964;
  __retval961 = b965;
  unsigned long t966 = __retval961;
  return t966;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v967, unsigned long v968, void* v969) {
bb970:
  struct std____new_allocator_int_* this971;
  unsigned long __n972;
  void* unnamed973;
  int* __retval974;
  this971 = v967;
  __n972 = v968;
  unnamed973 = v969;
  struct std____new_allocator_int_* t975 = this971;
    unsigned long t976 = __n972;
    unsigned long r977 = std____new_allocator_int____M_max_size___const(t975);
    _Bool c978 = ((t976 > r977)) ? 1 : 0;
    if (c978) {
        unsigned long t979 = __n972;
        unsigned long c980 = -1;
        unsigned long c981 = 4;
        unsigned long b982 = c980 / c981;
        _Bool c983 = ((t979 > b982)) ? 1 : 0;
        if (c983) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c984 = 4;
    unsigned long c985 = 16;
    _Bool c986 = ((c984 > c985)) ? 1 : 0;
    if (c986) {
      unsigned long __al987;
      unsigned long c988 = 4;
      __al987 = c988;
      unsigned long t989 = __n972;
      unsigned long c990 = 4;
      unsigned long b991 = t989 * c990;
      unsigned long t992 = __al987;
      void* r993 = operator_new_2(b991, t992);
      int* cast994 = (int*)r993;
      __retval974 = cast994;
      int* t995 = __retval974;
      return t995;
    }
  unsigned long t996 = __n972;
  unsigned long c997 = 4;
  unsigned long b998 = t996 * c997;
  void* r999 = operator_new(b998);
  int* cast1000 = (int*)r999;
  __retval974 = cast1000;
  int* t1001 = __retval974;
  return t1001;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v1002, unsigned long v1003) {
bb1004:
  struct std__allocator_int_* this1005;
  unsigned long __n1006;
  int* __retval1007;
  this1005 = v1002;
  __n1006 = v1003;
  struct std__allocator_int_* t1008 = this1005;
    _Bool r1009 = std____is_constant_evaluated();
    if (r1009) {
        unsigned long t1010 = __n1006;
        unsigned long c1011 = 4;
        unsigned long ovr1012;
        _Bool ovf1013 = __builtin_mul_overflow(t1010, c1011, &ovr1012);
        __n1006 = ovr1012;
        if (ovf1013) {
          std____throw_bad_array_new_length();
        }
      unsigned long t1014 = __n1006;
      void* r1015 = operator_new(t1014);
      int* cast1016 = (int*)r1015;
      __retval1007 = cast1016;
      int* t1017 = __retval1007;
      return t1017;
    }
  struct std____new_allocator_int_* base1018 = (struct std____new_allocator_int_*)((char *)t1008 + 0);
  unsigned long t1019 = __n1006;
  void* c1020 = ((void*)0);
  int* r1021 = std____new_allocator_int___allocate(base1018, t1019, c1020);
  __retval1007 = r1021;
  int* t1022 = __retval1007;
  return t1022;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v1023, unsigned long v1024) {
bb1025:
  struct std__allocator_int_* __a1026;
  unsigned long __n1027;
  int* __retval1028;
  __a1026 = v1023;
  __n1027 = v1024;
  struct std__allocator_int_* t1029 = __a1026;
  unsigned long t1030 = __n1027;
  int* r1031 = std__allocator_int___allocate(t1029, t1030);
  __retval1028 = r1031;
  int* t1032 = __retval1028;
  return t1032;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v1033, unsigned long v1034) {
bb1035:
  struct std___Vector_base_int__std__allocator_int__* this1036;
  unsigned long __n1037;
  int* __retval1038;
  this1036 = v1033;
  __n1037 = v1034;
  struct std___Vector_base_int__std__allocator_int__* t1039 = this1036;
  unsigned long t1040 = __n1037;
  unsigned long c1041 = 0;
  _Bool c1042 = ((t1040 != c1041)) ? 1 : 0;
  int* ternary1043;
  if (c1042) {
    struct std__allocator_int_* base1044 = (struct std__allocator_int_*)((char *)&(t1039->_M_impl) + 0);
    unsigned long t1045 = __n1037;
    int* r1046 = std__allocator_traits_std__allocator_int_____allocate(base1044, t1045);
    ternary1043 = (int*)r1046;
  } else {
    int* c1047 = ((void*)0);
    ternary1043 = (int*)c1047;
  }
  __retval1038 = ternary1043;
  int* t1048 = __retval1038;
  return t1048;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v1049, unsigned long* v1050) {
bb1051:
  unsigned long* __a1052;
  unsigned long* __b1053;
  unsigned long* __retval1054;
  __a1052 = v1049;
  __b1053 = v1050;
    unsigned long* t1055 = __b1053;
    unsigned long t1056 = *t1055;
    unsigned long* t1057 = __a1052;
    unsigned long t1058 = *t1057;
    _Bool c1059 = ((t1056 < t1058)) ? 1 : 0;
    if (c1059) {
      unsigned long* t1060 = __b1053;
      __retval1054 = t1060;
      unsigned long* t1061 = __retval1054;
      return t1061;
    }
  unsigned long* t1062 = __a1052;
  __retval1054 = t1062;
  unsigned long* t1063 = __retval1054;
  return t1063;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v1064) {
bb1065:
  struct std__allocator_int_* __a1066;
  unsigned long __retval1067;
  unsigned long __diffmax1068;
  unsigned long __allocmax1069;
  __a1066 = v1064;
  unsigned long c1070 = 2305843009213693951;
  __diffmax1068 = c1070;
  unsigned long c1071 = 4611686018427387903;
  __allocmax1069 = c1071;
  unsigned long* r1072 = unsigned_long_const__std__min_unsigned_long_(&__diffmax1068, &__allocmax1069);
  unsigned long t1073 = *r1072;
  __retval1067 = t1073;
  unsigned long t1074 = __retval1067;
  return t1074;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v1075, struct std__allocator_int_* v1076) {
bb1077:
  struct std__allocator_int_* this1078;
  struct std__allocator_int_* __a1079;
  this1078 = v1075;
  __a1079 = v1076;
  struct std__allocator_int_* t1080 = this1078;
  struct std____new_allocator_int_* base1081 = (struct std____new_allocator_int_*)((char *)t1080 + 0);
  struct std__allocator_int_* t1082 = __a1079;
  struct std____new_allocator_int_* base1083 = (struct std____new_allocator_int_*)((char *)t1082 + 0);
  std____new_allocator_int_____new_allocator(base1081, base1083);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v1084, struct std__allocator_int_* v1085) {
bb1086:
  unsigned long __n1087;
  struct std__allocator_int_* __a1088;
  unsigned long __retval1089;
  __n1087 = v1084;
  __a1088 = v1085;
    struct std__allocator_int_ ref_tmp01090;
    _Bool tmp_exprcleanup1091;
    unsigned long t1092 = __n1087;
    struct std__allocator_int_* t1093 = __a1088;
    std__allocator_int___allocator(&ref_tmp01090, t1093);
      unsigned long r1094 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp01090);
      _Bool c1095 = ((t1092 > r1094)) ? 1 : 0;
      tmp_exprcleanup1091 = c1095;
    {
      std__allocator_int____allocator(&ref_tmp01090);
    }
    _Bool t1096 = tmp_exprcleanup1091;
    if (t1096) {
      char* cast1097 = (char*)&(_str_4);
      std____throw_length_error(cast1097);
    }
  unsigned long t1098 = __n1087;
  __retval1089 = t1098;
  unsigned long t1099 = __retval1089;
  return t1099;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v1100) {
bb1101:
  struct std___Vector_base_int__std__allocator_int__* this1102;
  struct std__allocator_int_* __retval1103;
  this1102 = v1100;
  struct std___Vector_base_int__std__allocator_int__* t1104 = this1102;
  struct std__allocator_int_* base1105 = (struct std__allocator_int_*)((char *)&(t1104->_M_impl) + 0);
  __retval1103 = base1105;
  struct std__allocator_int_* t1106 = __retval1103;
  return t1106;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb1107:
  _Bool __retval1108;
    _Bool c1109 = 0;
    __retval1108 = c1109;
    _Bool t1110 = __retval1108;
    return t1110;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1111, int** v1112) {
bb1113:
  struct std___UninitDestroyGuard_int____void_* this1114;
  int** __first1115;
  this1114 = v1111;
  __first1115 = v1112;
  struct std___UninitDestroyGuard_int____void_* t1116 = this1114;
  int** t1117 = __first1115;
  int* t1118 = *t1117;
  t1116->_M_first = t1118;
  int** t1119 = __first1115;
  t1116->_M_cur = t1119;
  return;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v1120, int* v1121) {
bb1122:
  int* __location1123;
  int* __args1124;
  int* __retval1125;
  void* __loc1126;
  __location1123 = v1120;
  __args1124 = v1121;
  int* t1127 = __location1123;
  void* cast1128 = (void*)t1127;
  __loc1126 = cast1128;
    void* t1129 = __loc1126;
    int* cast1130 = (int*)t1129;
    int* t1131 = __args1124;
    int t1132 = *t1131;
    *cast1130 = t1132;
    __retval1125 = cast1130;
    int* t1133 = __retval1125;
    return t1133;
  abort();
}

// function: _ZSt10_ConstructIiJRiEEvPT_DpOT0_
void void_std___Construct_int__int__(int* v1134, int* v1135) {
bb1136:
  int* __p1137;
  int* __args1138;
  __p1137 = v1134;
  __args1138 = v1135;
    _Bool r1139 = std____is_constant_evaluated();
    if (r1139) {
      int* t1140 = __p1137;
      int* t1141 = __args1138;
      int* r1142 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t1140, t1141);
      return;
    }
  int* t1143 = __p1137;
  void* cast1144 = (void*)t1143;
  int* cast1145 = (int*)cast1144;
  int* t1146 = __args1138;
  int t1147 = *t1146;
  *cast1145 = t1147;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v1148) {
bb1149:
  struct std___UninitDestroyGuard_int____void_* this1150;
  this1150 = v1148;
  struct std___UninitDestroyGuard_int____void_* t1151 = this1150;
  int** c1152 = ((void*)0);
  t1151->_M_cur = c1152;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v1153) {
bb1154:
  struct std___UninitDestroyGuard_int____void_* this1155;
  this1155 = v1153;
  struct std___UninitDestroyGuard_int____void_* t1156 = this1155;
    int** t1157 = t1156->_M_cur;
    int** c1158 = ((void*)0);
    _Bool c1159 = ((t1157 != c1158)) ? 1 : 0;
    if (c1159) {
      int* t1160 = t1156->_M_first;
      int** t1161 = t1156->_M_cur;
      int* t1162 = *t1161;
      void_std___Destroy_int__(t1160, t1162);
    }
  return;
}

// function: _ZSt16__do_uninit_copyIPiS0_S0_ET1_T_T0_S1_
int* int__std____do_uninit_copy_int___int___int__(int* v1163, int* v1164, int* v1165) {
bb1166:
  int* __first1167;
  int* __last1168;
  int* __result1169;
  int* __retval1170;
  struct std___UninitDestroyGuard_int____void_ __guard1171;
  __first1167 = v1163;
  __last1168 = v1164;
  __result1169 = v1165;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard1171, &__result1169);
      while (1) {
        int* t1173 = __first1167;
        int* t1174 = __last1168;
        _Bool c1175 = ((t1173 != t1174)) ? 1 : 0;
        if (!c1175) break;
        int* t1176 = __result1169;
        int* t1177 = __first1167;
        void_std___Construct_int__int__(t1176, t1177);
      for_step1172: ;
        int* t1178 = __first1167;
        int c1179 = 1;
        int* ptr1180 = &(t1178)[c1179];
        __first1167 = ptr1180;
        int* t1181 = __result1169;
        int c1182 = 1;
        int* ptr1183 = &(t1181)[c1182];
        __result1169 = ptr1183;
      }
    std___UninitDestroyGuard_int___void___release(&__guard1171);
    int* t1184 = __result1169;
    __retval1170 = t1184;
    int* t1185 = __retval1170;
    int* ret_val1186 = t1185;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard1171);
    }
    return ret_val1186;
  abort();
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v1187) {
bb1188:
  int* __it1189;
  int* __retval1190;
  __it1189 = v1187;
  int* t1191 = __it1189;
  __retval1190 = t1191;
  int* t1192 = __retval1190;
  return t1192;
}

// function: _ZSt18uninitialized_copyIPiS0_ET0_T_S2_S1_
int* int__std__uninitialized_copy_int___int__(int* v1193, int* v1194, int* v1195) {
bb1196:
  int* __first1197;
  int* __last1198;
  int* __result1199;
  int* __retval1200;
  __first1197 = v1193;
  __last1198 = v1194;
  __result1199 = v1195;
      long __n1201;
      int* t1202 = __last1198;
      int* t1203 = __first1197;
      long diff1204 = t1202 - t1203;
      __n1201 = diff1204;
        long t1205 = __n1201;
        long c1206 = 0;
        _Bool c1207 = ((t1205 > c1206)) ? 1 : 0;
        if (c1207) {
          int* t1208 = __result1199;
          int* r1209 = int__std____niter_base_int__(t1208);
          void* cast1210 = (void*)r1209;
          int* t1211 = __first1197;
          int* r1212 = int__std____niter_base_int__(t1211);
          void* cast1213 = (void*)r1212;
          long t1214 = __n1201;
          unsigned long cast1215 = (unsigned long)t1214;
          unsigned long c1216 = 4;
          unsigned long b1217 = cast1215 * c1216;
          void* r1218 = memcpy(cast1210, cast1213, b1217);
          long t1219 = __n1201;
          int* t1220 = __result1199;
          int* ptr1221 = &(t1220)[t1219];
          __result1199 = ptr1221;
        }
      int* t1222 = __result1199;
      __retval1200 = t1222;
      int* t1223 = __retval1200;
      return t1223;
  abort();
}

// function: _ZSt22__uninitialized_copy_aIPiS0_S0_iET1_T_T0_S1_RSaIT2_E
int* int__std____uninitialized_copy_a_int___int___int___int_(int* v1224, int* v1225, int* v1226, struct std__allocator_int_* v1227) {
bb1228:
  int* __first1229;
  int* __last1230;
  int* __result1231;
  struct std__allocator_int_* unnamed1232;
  int* __retval1233;
  __first1229 = v1224;
  __last1230 = v1225;
  __result1231 = v1226;
  unnamed1232 = v1227;
    _Bool r1234 = std__is_constant_evaluated();
    if (r1234) {
      int* t1235 = __first1229;
      int* t1236 = __last1230;
      int* t1237 = __result1231;
      int* r1238 = int__std____do_uninit_copy_int___int___int__(t1235, t1236, t1237);
      __retval1233 = r1238;
      int* t1239 = __retval1233;
      return t1239;
    }
    int* t1240 = __first1229;
    int* t1241 = __last1230;
    int* t1242 = __result1231;
    int* r1243 = int__std__uninitialized_copy_int___int__(t1240, t1241, t1242);
    __retval1233 = r1243;
    int* t1244 = __retval1233;
    return t1244;
  abort();
}

// function: _ZNSt6vectorIiSaIiEE21_M_range_initialize_nIPiS3_EEvT_T0_m
void void_std__vector_int__std__allocator_int______M_range_initialize_n_int___int__(struct std__vector_int__std__allocator_int__* v1245, int* v1246, int* v1247, unsigned long v1248) {
bb1249:
  struct std__vector_int__std__allocator_int__* this1250;
  int* __first1251;
  int* __last1252;
  unsigned long __n1253;
  int* __start1254;
  this1250 = v1245;
  __first1251 = v1246;
  __last1252 = v1247;
  __n1253 = v1248;
  struct std__vector_int__std__allocator_int__* t1255 = this1250;
  struct std___Vector_base_int__std__allocator_int__* base1256 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1255 + 0);
  unsigned long t1257 = __n1253;
  struct std___Vector_base_int__std__allocator_int__* base1258 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1255 + 0);
  struct std__allocator_int_* r1259 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1258);
  unsigned long r1260 = std__vector_int__std__allocator_int______S_check_init_len(t1257, r1259);
  int* r1261 = std___Vector_base_int__std__allocator_int______M_allocate(base1256, r1260);
  __start1254 = r1261;
  int* t1262 = __start1254;
  struct std___Vector_base_int__std__allocator_int__* base1263 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1255 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1264 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1263->_M_impl) + 0);
  base1264->_M_finish = t1262;
  struct std___Vector_base_int__std__allocator_int__* base1265 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1255 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1266 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1265->_M_impl) + 0);
  base1266->_M_start = t1262;
  int* t1267 = __start1254;
  unsigned long t1268 = __n1253;
  int* ptr1269 = &(t1267)[t1268];
  struct std___Vector_base_int__std__allocator_int__* base1270 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1255 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1271 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1270->_M_impl) + 0);
  base1271->_M_end_of_storage = ptr1269;
  int* t1272 = __first1251;
  int* t1273 = __last1252;
  int* t1274 = __start1254;
  struct std___Vector_base_int__std__allocator_int__* base1275 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1255 + 0);
  struct std__allocator_int_* r1276 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base1275);
  int* r1277 = int__std____uninitialized_copy_a_int___int___int___int_(t1272, t1273, t1274, r1276);
  struct std___Vector_base_int__std__allocator_int__* base1278 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t1255 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1279 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base1278->_M_impl) + 0);
  base1279->_M_finish = r1277;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v1280, int* v1281, unsigned long v1282) {
bb1283:
  struct std____new_allocator_int_* this1284;
  int* __p1285;
  unsigned long __n1286;
  this1284 = v1280;
  __p1285 = v1281;
  __n1286 = v1282;
  struct std____new_allocator_int_* t1287 = this1284;
    unsigned long c1288 = 4;
    unsigned long c1289 = 16;
    _Bool c1290 = ((c1288 > c1289)) ? 1 : 0;
    if (c1290) {
      int* t1291 = __p1285;
      void* cast1292 = (void*)t1291;
      unsigned long t1293 = __n1286;
      unsigned long c1294 = 4;
      unsigned long b1295 = t1293 * c1294;
      unsigned long c1296 = 4;
      operator_delete_3(cast1292, b1295, c1296);
      return;
    }
  int* t1297 = __p1285;
  void* cast1298 = (void*)t1297;
  unsigned long t1299 = __n1286;
  unsigned long c1300 = 4;
  unsigned long b1301 = t1299 * c1300;
  operator_delete_2(cast1298, b1301);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v1302, int* v1303, unsigned long v1304) {
bb1305:
  struct std__allocator_int_* this1306;
  int* __p1307;
  unsigned long __n1308;
  this1306 = v1302;
  __p1307 = v1303;
  __n1308 = v1304;
  struct std__allocator_int_* t1309 = this1306;
    _Bool r1310 = std____is_constant_evaluated();
    if (r1310) {
      int* t1311 = __p1307;
      void* cast1312 = (void*)t1311;
      operator_delete(cast1312);
      return;
    }
  struct std____new_allocator_int_* base1313 = (struct std____new_allocator_int_*)((char *)t1309 + 0);
  int* t1314 = __p1307;
  unsigned long t1315 = __n1308;
  std____new_allocator_int___deallocate(base1313, t1314, t1315);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v1316, int* v1317, unsigned long v1318) {
bb1319:
  struct std__allocator_int_* __a1320;
  int* __p1321;
  unsigned long __n1322;
  __a1320 = v1316;
  __p1321 = v1317;
  __n1322 = v1318;
  struct std__allocator_int_* t1323 = __a1320;
  int* t1324 = __p1321;
  unsigned long t1325 = __n1322;
  std__allocator_int___deallocate(t1323, t1324, t1325);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v1326, int* v1327, unsigned long v1328) {
bb1329:
  struct std___Vector_base_int__std__allocator_int__* this1330;
  int* __p1331;
  unsigned long __n1332;
  this1330 = v1326;
  __p1331 = v1327;
  __n1332 = v1328;
  struct std___Vector_base_int__std__allocator_int__* t1333 = this1330;
    int* t1334 = __p1331;
    _Bool cast1335 = (_Bool)t1334;
    if (cast1335) {
      struct std__allocator_int_* base1336 = (struct std__allocator_int_*)((char *)&(t1333->_M_impl) + 0);
      int* t1337 = __p1331;
      unsigned long t1338 = __n1332;
      std__allocator_traits_std__allocator_int_____deallocate(base1336, t1337, t1338);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v1339) {
bb1340:
  struct std___Vector_base_int__std__allocator_int__* this1341;
  this1341 = v1339;
  struct std___Vector_base_int__std__allocator_int__* t1342 = this1341;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1343 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1342->_M_impl) + 0);
    int* t1344 = base1343->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1345 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1342->_M_impl) + 0);
    int* t1346 = base1345->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base1347 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t1342->_M_impl) + 0);
    int* t1348 = base1347->_M_start;
    long diff1349 = t1346 - t1348;
    unsigned long cast1350 = (unsigned long)diff1349;
    std___Vector_base_int__std__allocator_int______M_deallocate(t1342, t1344, cast1350);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t1342->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v1351, struct std____new_allocator_int_* v1352) {
bb1353:
  struct std____new_allocator_int_* this1354;
  struct std____new_allocator_int_* unnamed1355;
  this1354 = v1351;
  unnamed1355 = v1352;
  struct std____new_allocator_int_* t1356 = this1354;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v1357) {
bb1358:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this1359;
  this1359 = v1357;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t1360 = this1359;
  int* c1361 = ((void*)0);
  t1360->_M_start = c1361;
  int* c1362 = ((void*)0);
  t1360->_M_finish = c1362;
  int* c1363 = ((void*)0);
  t1360->_M_end_of_storage = c1363;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v1364) {
bb1365:
  int* __location1366;
  __location1366 = v1364;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v1367, int* v1368) {
bb1369:
  int* __first1370;
  int* __last1371;
  __first1370 = v1367;
  __last1371 = v1368;
      _Bool r1372 = std____is_constant_evaluated();
      if (r1372) {
          while (1) {
            int* t1374 = __first1370;
            int* t1375 = __last1371;
            _Bool c1376 = ((t1374 != t1375)) ? 1 : 0;
            if (!c1376) break;
            int* t1377 = __first1370;
            void_std__destroy_at_int_(t1377);
          for_step1373: ;
            int* t1378 = __first1370;
            int c1379 = 1;
            int* ptr1380 = &(t1378)[c1379];
            __first1370 = ptr1380;
          }
      }
  return;
}

