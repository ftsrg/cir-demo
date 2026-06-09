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
struct __gnu_cxx____ops___Iter_equal_to_iter { unsigned char __field0; };
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

int __const_main_myints[8] = {10, 20, 30, 30, 20, 10, 10, 20};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[46] = "the first consecutive repeated elements are: ";
char _str_1[47] = "the second consecutive repeated elements are: ";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_2[49] = "cannot create std::vector larger than max_size()";
_Bool myfunction(int p0, int p1);
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector_int___void_(struct std__vector_int__std__allocator_int__* p0, int* p1, int* p2, struct std__allocator_int_* p3);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
_Bool bool___gnu_cxx____ops___Iter_equal_to_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(struct __gnu_cxx____ops___Iter_equal_to_iter* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____adjacent_find___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_equal_to_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____ops___Iter_equal_to_iter p2);
struct __gnu_cxx____ops___Iter_equal_to_iter __gnu_cxx____ops____iter_equal_to_iter();
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__adjacent_find___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
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
_Bool bool___gnu_cxx____ops___Iter_comp_iter_bool_____int__int____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____adjacent_find___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_bool_____int__int_______gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ p2);
void __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____Iter_comp_iter_bool____(struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* p0, void* p1);
struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____gnu_cxx____ops____iter_comp_iter_bool_____int__int___bool____(void* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__adjacent_find___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool_____int__int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, void* p2);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
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

// function: _ZNK9__gnu_cxx5__ops19_Iter_equal_to_iterclINS_17__normal_iteratorIPiSt6vectorIiSaIiEEEES8_EEbT_T0_
_Bool bool___gnu_cxx____ops___Iter_equal_to_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(struct __gnu_cxx____ops___Iter_equal_to_iter* v44, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v45, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v46) {
bb47:
  struct __gnu_cxx____ops___Iter_equal_to_iter* this48;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it149;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it250;
  _Bool __retval51;
  this48 = v44;
  __it149 = v45;
  __it250 = v46;
  struct __gnu_cxx____ops___Iter_equal_to_iter* t52 = this48;
  int* r53 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it149);
  int t54 = *r53;
  int* r55 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it250);
  int t56 = *r55;
  _Bool c57 = ((t54 == t56)) ? 1 : 0;
  __retval51 = c57;
  _Bool t58 = __retval51;
  return t58;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSERKS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v59, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v60) {
bb61:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this62;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed63;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval64;
  this62 = v59;
  unnamed63 = v60;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t65 = this62;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t66 = unnamed63;
  int* t67 = t66->_M_current;
  t65->_M_current = t67;
  __retval64 = t65;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t68 = __retval64;
  return t68;
}

// function: _ZSt15__adjacent_findIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops19_Iter_equal_to_iterEET_S9_S9_T0_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____adjacent_find___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_equal_to_iter_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v69, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v70, struct __gnu_cxx____ops___Iter_equal_to_iter v71) {
bb72:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first73;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last74;
  struct __gnu_cxx____ops___Iter_equal_to_iter __binary_pred75;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval76;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __next77;
  __first73 = v69;
  __last74 = v70;
  __binary_pred75 = v71;
    _Bool r78 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first73, &__last74);
    if (r78) {
      __retval76 = __last74; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t79 = __retval76;
      return t79;
    }
  __next77 = __first73; // copy
    while (1) {
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r80 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__next77);
      _Bool r81 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(r80, &__last74);
      _Bool u82 = !r81;
      if (!u82) break;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp083;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp184;
          agg_tmp083 = __first73; // copy
          agg_tmp184 = __next77; // copy
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t85 = agg_tmp083;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t86 = agg_tmp184;
          _Bool r87 = bool___gnu_cxx____ops___Iter_equal_to_iter__operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int__________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______const(&__binary_pred75, t85, t86);
          if (r87) {
            __retval76 = __first73; // copy
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t88 = __retval76;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ret_val89 = t88;
            return ret_val89;
          }
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r90 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__2(&__first73, &__next77);
    }
  __retval76 = __last74; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t91 = __retval76;
  return t91;
}

// function: _ZN9__gnu_cxx5__ops20__iter_equal_to_iterEv
struct __gnu_cxx____ops___Iter_equal_to_iter __gnu_cxx____ops____iter_equal_to_iter() {
bb92:
  struct __gnu_cxx____ops___Iter_equal_to_iter __retval93;
  struct __gnu_cxx____ops___Iter_equal_to_iter t94 = __retval93;
  return t94;
}

// function: _ZSt13adjacent_findIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEET_S7_S7_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__adjacent_find___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v95, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v96) {
bb97:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first98;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last99;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval100;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0101;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1102;
  struct __gnu_cxx____ops___Iter_equal_to_iter agg_tmp2103;
  __first98 = v95;
  __last99 = v96;
  agg_tmp0101 = __first98; // copy
  agg_tmp1102 = __last99; // copy
  struct __gnu_cxx____ops___Iter_equal_to_iter r104 = __gnu_cxx____ops____iter_equal_to_iter();
  agg_tmp2103 = r104;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t105 = agg_tmp0101;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t106 = agg_tmp1102;
  struct __gnu_cxx____ops___Iter_equal_to_iter t107 = agg_tmp2103;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r108 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____adjacent_find___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_equal_to_iter_(t105, t106, t107);
  __retval100 = r108;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t109 = __retval100;
  return t109;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v110, int** v111) {
bb112:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this113;
  int** __i114;
  this113 = v110;
  __i114 = v111;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t115 = this113;
  int** t116 = __i114;
  int* t117 = *t116;
  t115->_M_current = t117;
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v118) {
bb119:
  struct std__vector_int__std__allocator_int__* this120;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval121;
  this120 = v118;
  struct std__vector_int__std__allocator_int__* t122 = this120;
  struct std___Vector_base_int__std__allocator_int__* base123 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t122 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base124 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base123->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval121, &base124->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t125 = __retval121;
  return t125;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v126) {
bb127:
  struct std__vector_int__std__allocator_int__* this128;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval129;
  this128 = v126;
  struct std__vector_int__std__allocator_int__* t130 = this128;
  struct std___Vector_base_int__std__allocator_int__* base131 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t130 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base132 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base131->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval129, &base132->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t133 = __retval129;
  return t133;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSEOS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v134, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v135) {
bb136:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this137;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed138;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval139;
  this137 = v134;
  unnamed138 = v135;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t140 = this137;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t141 = unnamed138;
  int* t142 = t141->_M_current;
  t140->_M_current = t142;
  __retval139 = t140;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t143 = __retval139;
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

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v150, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v151) {
bb152:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs153;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs154;
  _Bool __retval155;
  __lhs153 = v150;
  __rhs154 = v151;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t156 = __lhs153;
  int** r157 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t156);
  int* t158 = *r157;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t159 = __rhs154;
  int** r160 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t159);
  int* t161 = *r160;
  _Bool c162 = ((t158 == t161)) ? 1 : 0;
  __retval155 = c162;
  _Bool t163 = __retval155;
  return t163;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v164, int v165) {
bb166:
  int __a167;
  int __b168;
  int __retval169;
  __a167 = v164;
  __b168 = v165;
  int t170 = __a167;
  int t171 = __b168;
  int b172 = t170 | t171;
  __retval169 = b172;
  int t173 = __retval169;
  return t173;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v174) {
bb175:
  struct std__basic_ios_char__std__char_traits_char__* this176;
  int __retval177;
  this176 = v174;
  struct std__basic_ios_char__std__char_traits_char__* t178 = this176;
  struct std__ios_base* base179 = (struct std__ios_base*)((char *)t178 + 0);
  int t180 = base179->_M_streambuf_state;
  __retval177 = t180;
  int t181 = __retval177;
  return t181;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v182, int v183) {
bb184:
  struct std__basic_ios_char__std__char_traits_char__* this185;
  int __state186;
  this185 = v182;
  __state186 = v183;
  struct std__basic_ios_char__std__char_traits_char__* t187 = this185;
  int r188 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t187);
  int t189 = __state186;
  int r190 = std__operator_(r188, t189);
  std__basic_ios_char__std__char_traits_char_____clear(t187, r190);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v191, char* v192) {
bb193:
  char* __c1194;
  char* __c2195;
  _Bool __retval196;
  __c1194 = v191;
  __c2195 = v192;
  char* t197 = __c1194;
  char t198 = *t197;
  int cast199 = (int)t198;
  char* t200 = __c2195;
  char t201 = *t200;
  int cast202 = (int)t201;
  _Bool c203 = ((cast199 == cast202)) ? 1 : 0;
  __retval196 = c203;
  _Bool t204 = __retval196;
  return t204;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v205) {
bb206:
  char* __p207;
  unsigned long __retval208;
  unsigned long __i209;
  __p207 = v205;
  unsigned long c210 = 0;
  __i209 = c210;
    char ref_tmp0211;
    while (1) {
      unsigned long t212 = __i209;
      char* t213 = __p207;
      char* ptr214 = &(t213)[t212];
      char c215 = 0;
      ref_tmp0211 = c215;
      _Bool r216 = __gnu_cxx__char_traits_char___eq(ptr214, &ref_tmp0211);
      _Bool u217 = !r216;
      if (!u217) break;
      unsigned long t218 = __i209;
      unsigned long u219 = t218 + 1;
      __i209 = u219;
    }
  unsigned long t220 = __i209;
  __retval208 = t220;
  unsigned long t221 = __retval208;
  return t221;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v222) {
bb223:
  char* __s224;
  unsigned long __retval225;
  __s224 = v222;
    _Bool r226 = std____is_constant_evaluated();
    if (r226) {
      char* t227 = __s224;
      unsigned long r228 = __gnu_cxx__char_traits_char___length(t227);
      __retval225 = r228;
      unsigned long t229 = __retval225;
      return t229;
    }
  char* t230 = __s224;
  unsigned long r231 = strlen(t230);
  __retval225 = r231;
  unsigned long t232 = __retval225;
  return t232;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v233, char* v234) {
bb235:
  struct std__basic_ostream_char__std__char_traits_char__* __out236;
  char* __s237;
  struct std__basic_ostream_char__std__char_traits_char__* __retval238;
  __out236 = v233;
  __s237 = v234;
    char* t239 = __s237;
    _Bool cast240 = (_Bool)t239;
    _Bool u241 = !cast240;
    if (u241) {
      struct std__basic_ostream_char__std__char_traits_char__* t242 = __out236;
      void** v243 = (void**)t242;
      void* v244 = *((void**)v243);
      unsigned char* cast245 = (unsigned char*)v244;
      long c246 = -24;
      unsigned char* ptr247 = &(cast245)[c246];
      long* cast248 = (long*)ptr247;
      long t249 = *cast248;
      unsigned char* cast250 = (unsigned char*)t242;
      unsigned char* ptr251 = &(cast250)[t249];
      struct std__basic_ostream_char__std__char_traits_char__* cast252 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr251;
      struct std__basic_ios_char__std__char_traits_char__* cast253 = (struct std__basic_ios_char__std__char_traits_char__*)cast252;
      int t254 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast253, t254);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t255 = __out236;
      char* t256 = __s237;
      char* t257 = __s237;
      unsigned long r258 = std__char_traits_char___length(t257);
      long cast259 = (long)r258;
      struct std__basic_ostream_char__std__char_traits_char__* r260 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t255, t256, cast259);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t261 = __out236;
  __retval238 = t261;
  struct std__basic_ostream_char__std__char_traits_char__* t262 = __retval238;
  return t262;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v263) {
bb264:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this265;
  int* __retval266;
  this265 = v263;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t267 = this265;
  int* t268 = t267->_M_current;
  __retval266 = t268;
  int* t269 = __retval266;
  return t269;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v270, void* v271) {
bb272:
  struct std__basic_ostream_char__std__char_traits_char__* this273;
  void* __pf274;
  struct std__basic_ostream_char__std__char_traits_char__* __retval275;
  this273 = v270;
  __pf274 = v271;
  struct std__basic_ostream_char__std__char_traits_char__* t276 = this273;
  void* t277 = __pf274;
  struct std__basic_ostream_char__std__char_traits_char__* r278 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t277)(t276);
  __retval275 = r278;
  struct std__basic_ostream_char__std__char_traits_char__* t279 = __retval275;
  return t279;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v280) {
bb281:
  struct std__basic_ostream_char__std__char_traits_char__* __os282;
  struct std__basic_ostream_char__std__char_traits_char__* __retval283;
  __os282 = v280;
  struct std__basic_ostream_char__std__char_traits_char__* t284 = __os282;
  struct std__basic_ostream_char__std__char_traits_char__* r285 = std__ostream__flush(t284);
  __retval283 = r285;
  struct std__basic_ostream_char__std__char_traits_char__* t286 = __retval283;
  return t286;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v287) {
bb288:
  struct std__ctype_char_* __f289;
  struct std__ctype_char_* __retval290;
  __f289 = v287;
    struct std__ctype_char_* t291 = __f289;
    _Bool cast292 = (_Bool)t291;
    _Bool u293 = !cast292;
    if (u293) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t294 = __f289;
  __retval290 = t294;
  struct std__ctype_char_* t295 = __retval290;
  return t295;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v296, char v297) {
bb298:
  struct std__ctype_char_* this299;
  char __c300;
  char __retval301;
  this299 = v296;
  __c300 = v297;
  struct std__ctype_char_* t302 = this299;
    char t303 = t302->_M_widen_ok;
    _Bool cast304 = (_Bool)t303;
    if (cast304) {
      char t305 = __c300;
      unsigned char cast306 = (unsigned char)t305;
      unsigned long cast307 = (unsigned long)cast306;
      char t308 = t302->_M_widen[cast307];
      __retval301 = t308;
      char t309 = __retval301;
      return t309;
    }
  std__ctype_char____M_widen_init___const(t302);
  char t310 = __c300;
  void** v311 = (void**)t302;
  void* v312 = *((void**)v311);
  char vcall315 = (char)__VERIFIER_virtual_call_char_char(t302, 6, t310);
  __retval301 = vcall315;
  char t316 = __retval301;
  return t316;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v317, char v318) {
bb319:
  struct std__basic_ios_char__std__char_traits_char__* this320;
  char __c321;
  char __retval322;
  this320 = v317;
  __c321 = v318;
  struct std__basic_ios_char__std__char_traits_char__* t323 = this320;
  struct std__ctype_char_* t324 = t323->_M_ctype;
  struct std__ctype_char_* r325 = std__ctype_char__const__std____check_facet_std__ctype_char___(t324);
  char t326 = __c321;
  char r327 = std__ctype_char___widen_char__const(r325, t326);
  __retval322 = r327;
  char t328 = __retval322;
  return t328;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v329) {
bb330:
  struct std__basic_ostream_char__std__char_traits_char__* __os331;
  struct std__basic_ostream_char__std__char_traits_char__* __retval332;
  __os331 = v329;
  struct std__basic_ostream_char__std__char_traits_char__* t333 = __os331;
  struct std__basic_ostream_char__std__char_traits_char__* t334 = __os331;
  void** v335 = (void**)t334;
  void* v336 = *((void**)v335);
  unsigned char* cast337 = (unsigned char*)v336;
  long c338 = -24;
  unsigned char* ptr339 = &(cast337)[c338];
  long* cast340 = (long*)ptr339;
  long t341 = *cast340;
  unsigned char* cast342 = (unsigned char*)t334;
  unsigned char* ptr343 = &(cast342)[t341];
  struct std__basic_ostream_char__std__char_traits_char__* cast344 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr343;
  struct std__basic_ios_char__std__char_traits_char__* cast345 = (struct std__basic_ios_char__std__char_traits_char__*)cast344;
  char c346 = 10;
  char r347 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast345, c346);
  struct std__basic_ostream_char__std__char_traits_char__* r348 = std__ostream__put(t333, r347);
  struct std__basic_ostream_char__std__char_traits_char__* r349 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r348);
  __retval332 = r349;
  struct std__basic_ostream_char__std__char_traits_char__* t350 = __retval332;
  return t350;
}

// function: _ZN9__gnu_cxx5__ops15_Iter_comp_iterIPFbiiEEclINS_17__normal_iteratorIPiSt6vectorIiSaIiEEEESB_EEbT_T0_
_Bool bool___gnu_cxx____ops___Iter_comp_iter_bool_____int__int____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* v351, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v352, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v353) {
bb354:
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* this355;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it1356;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it2357;
  _Bool __retval358;
  this355 = v351;
  __it1356 = v352;
  __it2357 = v353;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* t359 = this355;
  void* t360 = t359->_M_comp;
  int* r361 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it1356);
  int t362 = *r361;
  int* r363 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it2357);
  int t364 = *r363;
  _Bool r365 = ((_Bool (*)(int, int))t360)(t362, t364);
  __retval358 = r365;
  _Bool t366 = __retval358;
  return t366;
}

// function: _ZSt15__adjacent_findIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops15_Iter_comp_iterIPFbiiEEEET_SC_SC_T0_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____adjacent_find___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_bool_____int__int_______gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v367, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v368, struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ v369) {
bb370:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first371;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last372;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ __binary_pred373;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval374;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __next375;
  __first371 = v367;
  __last372 = v368;
  __binary_pred373 = v369;
    _Bool r376 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first371, &__last372);
    if (r376) {
      __retval374 = __last372; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t377 = __retval374;
      return t377;
    }
  __next375 = __first371; // copy
    while (1) {
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r378 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__next375);
      _Bool r379 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(r378, &__last372);
      _Bool u380 = !r379;
      if (!u380) break;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0381;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1382;
          agg_tmp0381 = __first371; // copy
          agg_tmp1382 = __next375; // copy
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t383 = agg_tmp0381;
          struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t384 = agg_tmp1382;
          _Bool r385 = bool___gnu_cxx____ops___Iter_comp_iter_bool_____int__int____operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__binary_pred373, t383, t384);
          if (r385) {
            __retval374 = __first371; // copy
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t386 = __retval374;
            struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ret_val387 = t386;
            return ret_val387;
          }
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r388 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__2(&__first371, &__next375);
    }
  __retval374 = __last372; // copy
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t389 = __retval374;
  return t389;
}

// function: _ZN9__gnu_cxx5__ops15_Iter_comp_iterIPFbiiEEC2ES3_
void __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____Iter_comp_iter_bool____(struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* v390, void* v391) {
bb392:
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* this393;
  void* __comp394;
  this393 = v390;
  __comp394 = v391;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__* t395 = this393;
  void* t396 = __comp394;
  t395->_M_comp = t396;
  return;
}

// function: _ZN9__gnu_cxx5__ops16__iter_comp_iterIPFbiiEEENS0_15_Iter_comp_iterIT_EES5_
struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____gnu_cxx____ops____iter_comp_iter_bool_____int__int___bool____(void* v397) {
bb398:
  void* __comp399;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ __retval400;
  __comp399 = v397;
  void* t401 = __comp399;
  __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____Iter_comp_iter_bool____(&__retval400, t401);
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ t402 = __retval400;
  return t402;
}

// function: _ZSt13adjacent_findIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEPFbiiEET_S9_S9_T0_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__adjacent_find___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool_____int__int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v403, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v404, void* v405) {
bb406:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first407;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last408;
  void* __binary_pred409;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval410;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0411;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1412;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ agg_tmp2413;
  __first407 = v403;
  __last408 = v404;
  __binary_pred409 = v405;
  agg_tmp0411 = __first407; // copy
  agg_tmp1412 = __last408; // copy
  void* t414 = __binary_pred409;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ r415 = __gnu_cxx____ops___Iter_comp_iter_bool_____int__int_____gnu_cxx____ops____iter_comp_iter_bool_____int__int___bool____(t414);
  agg_tmp2413 = r415;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t416 = agg_tmp0411;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t417 = agg_tmp1412;
  struct __gnu_cxx____ops___Iter_comp_iter_bool_____int__int__ t418 = agg_tmp2413;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r419 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std____adjacent_find___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_bool_____int__int_______gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_comp_iter_bool____(t416, t417, t418);
  __retval410 = r419;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t420 = __retval410;
  return t420;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v421) {
bb422:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this423;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval424;
  this423 = v421;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t425 = this423;
  int* t426 = t425->_M_current;
  int c427 = 1;
  int* ptr428 = &(t426)[c427];
  t425->_M_current = ptr428;
  __retval424 = t425;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t429 = __retval424;
  return t429;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v430) {
bb431:
  struct std__vector_int__std__allocator_int__* this432;
  this432 = v430;
  struct std__vector_int__std__allocator_int__* t433 = this432;
    struct std___Vector_base_int__std__allocator_int__* base434 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t433 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base435 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base434->_M_impl) + 0);
    int* t436 = base435->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base437 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t433 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base438 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base437->_M_impl) + 0);
    int* t439 = base438->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base440 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t433 + 0);
    struct std__allocator_int_* r441 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base440);
    void_std___Destroy_int___int_(t436, t439, r441);
  {
    struct std___Vector_base_int__std__allocator_int__* base442 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t433 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base442);
  }
  return;
}

// function: main
int main() {
bb443:
  int __retval444;
  int myints445[8];
  struct std__vector_int__std__allocator_int__ myvector446;
  struct std__allocator_int_ ref_tmp0447;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it448;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1449;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0450;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1451;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp3452;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2453;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3454;
  int c455 = 0;
  __retval444 = c455;
  // array copy
  __builtin_memcpy(myints445, __const_main_myints, (unsigned long)8 * sizeof(__const_main_myints[0]));
  int* cast456 = (int*)&(myints445);
  int* cast457 = (int*)&(myints445);
  int c458 = 8;
  int* ptr459 = &(cast457)[c458];
  std__allocator_int___allocator_2(&ref_tmp0447);
    std__vector_int__std__allocator_int_____vector_int___void_(&myvector446, cast456, ptr459, &ref_tmp0447);
  {
    std__allocator_int____allocator(&ref_tmp0447);
  }
    __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&it448);
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r460 = std__vector_int__std__allocator_int_____begin(&myvector446);
    agg_tmp0450 = r460;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r461 = std__vector_int__std__allocator_int_____end(&myvector446);
    agg_tmp1451 = r461;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t462 = agg_tmp0450;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t463 = agg_tmp1451;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r464 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__adjacent_find___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(t462, t463);
    ref_tmp1449 = r464;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r465 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it448, &ref_tmp1449);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp2466;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r467 = std__vector_int__std__allocator_int_____end(&myvector446);
      ref_tmp2466 = r467;
      _Bool r468 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it448, &ref_tmp2466);
      _Bool u469 = !r468;
      if (u469) {
        char* cast470 = (char*)&(_str);
        struct std__basic_ostream_char__std__char_traits_char__* r471 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast470);
        int* r472 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it448);
        int t473 = *r472;
        struct std__basic_ostream_char__std__char_traits_char__* r474 = std__ostream__operator__(r471, t473);
        struct std__basic_ostream_char__std__char_traits_char__* r475 = std__ostream__operator___std__ostream_____(r474, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r476 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&it448);
    agg_tmp2453 = *r476; // copy
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r477 = std__vector_int__std__allocator_int_____end(&myvector446);
    agg_tmp3454 = r477;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t478 = agg_tmp2453;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t479 = agg_tmp3454;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r480 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______std__adjacent_find___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool_____int__int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______bool____(t478, t479, &myfunction);
    ref_tmp3452 = r480;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r481 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it448, &ref_tmp3452);
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp4482;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r483 = std__vector_int__std__allocator_int_____end(&myvector446);
      ref_tmp4482 = r483;
      _Bool r484 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it448, &ref_tmp4482);
      _Bool u485 = !r484;
      if (u485) {
        char* cast486 = (char*)&(_str_1);
        struct std__basic_ostream_char__std__char_traits_char__* r487 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast486);
        int* r488 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it448);
        int t489 = *r488;
        struct std__basic_ostream_char__std__char_traits_char__* r490 = std__ostream__operator__(r487, t489);
        struct std__basic_ostream_char__std__char_traits_char__* r491 = std__ostream__operator___std__ostream_____(r490, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
      }
    int c492 = 0;
    __retval444 = c492;
    int t493 = __retval444;
    int ret_val494 = t493;
    {
      std__vector_int__std__allocator_int______vector(&myvector446);
    }
    return ret_val494;
  int t495 = __retval444;
  return t495;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v496) {
bb497:
  struct std____new_allocator_int_* this498;
  this498 = v496;
  struct std____new_allocator_int_* t499 = this498;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v500, struct std__allocator_int_* v501) {
bb502:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this503;
  struct std__allocator_int_* __a504;
  this503 = v500;
  __a504 = v501;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t505 = this503;
  struct std__allocator_int_* base506 = (struct std__allocator_int_*)((char *)t505 + 0);
  struct std__allocator_int_* t507 = __a504;
  std__allocator_int___allocator(base506, t507);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base508 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t505 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base508);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v509) {
bb510:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this511;
  this511 = v509;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t512 = this511;
  {
    struct std__allocator_int_* base513 = (struct std__allocator_int_*)((char *)t512 + 0);
    std__allocator_int____allocator(base513);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v514, struct std__allocator_int_* v515) {
bb516:
  struct std___Vector_base_int__std__allocator_int__* this517;
  struct std__allocator_int_* __a518;
  this517 = v514;
  __a518 = v515;
  struct std___Vector_base_int__std__allocator_int__* t519 = this517;
  struct std__allocator_int_* t520 = __a518;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t519->_M_impl, t520);
  return;
}

// function: _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_
long _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_(struct std__ranges____distance_fn* v521, int** v522, int* v523) {
bb524:
  struct std__ranges____distance_fn* this525;
  int** __first526;
  int* __last527;
  long __retval528;
  this525 = v521;
  __first526 = v522;
  __last527 = v523;
  struct std__ranges____distance_fn* t529 = this525;
  int* t530 = __last527;
  int** t531 = __first526;
  int* t532 = *t531;
  long diff533 = t530 - t532;
  __retval528 = diff533;
  long t534 = __retval528;
  return t534;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb535:
  _Bool __retval536;
    _Bool c537 = 0;
    __retval536 = c537;
    _Bool t538 = __retval536;
    return t538;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v539) {
bb540:
  struct std____new_allocator_int_* this541;
  unsigned long __retval542;
  this541 = v539;
  struct std____new_allocator_int_* t543 = this541;
  unsigned long c544 = 9223372036854775807;
  unsigned long c545 = 4;
  unsigned long b546 = c544 / c545;
  __retval542 = b546;
  unsigned long t547 = __retval542;
  return t547;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v548, unsigned long v549, void* v550) {
bb551:
  struct std____new_allocator_int_* this552;
  unsigned long __n553;
  void* unnamed554;
  int* __retval555;
  this552 = v548;
  __n553 = v549;
  unnamed554 = v550;
  struct std____new_allocator_int_* t556 = this552;
    unsigned long t557 = __n553;
    unsigned long r558 = std____new_allocator_int____M_max_size___const(t556);
    _Bool c559 = ((t557 > r558)) ? 1 : 0;
    if (c559) {
        unsigned long t560 = __n553;
        unsigned long c561 = -1;
        unsigned long c562 = 4;
        unsigned long b563 = c561 / c562;
        _Bool c564 = ((t560 > b563)) ? 1 : 0;
        if (c564) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c565 = 4;
    unsigned long c566 = 16;
    _Bool c567 = ((c565 > c566)) ? 1 : 0;
    if (c567) {
      unsigned long __al568;
      unsigned long c569 = 4;
      __al568 = c569;
      unsigned long t570 = __n553;
      unsigned long c571 = 4;
      unsigned long b572 = t570 * c571;
      unsigned long t573 = __al568;
      void* r574 = operator_new_2(b572, t573);
      int* cast575 = (int*)r574;
      __retval555 = cast575;
      int* t576 = __retval555;
      return t576;
    }
  unsigned long t577 = __n553;
  unsigned long c578 = 4;
  unsigned long b579 = t577 * c578;
  void* r580 = operator_new(b579);
  int* cast581 = (int*)r580;
  __retval555 = cast581;
  int* t582 = __retval555;
  return t582;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v583, unsigned long v584) {
bb585:
  struct std__allocator_int_* this586;
  unsigned long __n587;
  int* __retval588;
  this586 = v583;
  __n587 = v584;
  struct std__allocator_int_* t589 = this586;
    _Bool r590 = std____is_constant_evaluated();
    if (r590) {
        unsigned long t591 = __n587;
        unsigned long c592 = 4;
        unsigned long ovr593;
        _Bool ovf594 = __builtin_mul_overflow(t591, c592, &ovr593);
        __n587 = ovr593;
        if (ovf594) {
          std____throw_bad_array_new_length();
        }
      unsigned long t595 = __n587;
      void* r596 = operator_new(t595);
      int* cast597 = (int*)r596;
      __retval588 = cast597;
      int* t598 = __retval588;
      return t598;
    }
  struct std____new_allocator_int_* base599 = (struct std____new_allocator_int_*)((char *)t589 + 0);
  unsigned long t600 = __n587;
  void* c601 = ((void*)0);
  int* r602 = std____new_allocator_int___allocate(base599, t600, c601);
  __retval588 = r602;
  int* t603 = __retval588;
  return t603;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v604, unsigned long v605) {
bb606:
  struct std__allocator_int_* __a607;
  unsigned long __n608;
  int* __retval609;
  __a607 = v604;
  __n608 = v605;
  struct std__allocator_int_* t610 = __a607;
  unsigned long t611 = __n608;
  int* r612 = std__allocator_int___allocate(t610, t611);
  __retval609 = r612;
  int* t613 = __retval609;
  return t613;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v614, unsigned long v615) {
bb616:
  struct std___Vector_base_int__std__allocator_int__* this617;
  unsigned long __n618;
  int* __retval619;
  this617 = v614;
  __n618 = v615;
  struct std___Vector_base_int__std__allocator_int__* t620 = this617;
  unsigned long t621 = __n618;
  unsigned long c622 = 0;
  _Bool c623 = ((t621 != c622)) ? 1 : 0;
  int* ternary624;
  if (c623) {
    struct std__allocator_int_* base625 = (struct std__allocator_int_*)((char *)&(t620->_M_impl) + 0);
    unsigned long t626 = __n618;
    int* r627 = std__allocator_traits_std__allocator_int_____allocate(base625, t626);
    ternary624 = (int*)r627;
  } else {
    int* c628 = ((void*)0);
    ternary624 = (int*)c628;
  }
  __retval619 = ternary624;
  int* t629 = __retval619;
  return t629;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v630, unsigned long* v631) {
bb632:
  unsigned long* __a633;
  unsigned long* __b634;
  unsigned long* __retval635;
  __a633 = v630;
  __b634 = v631;
    unsigned long* t636 = __b634;
    unsigned long t637 = *t636;
    unsigned long* t638 = __a633;
    unsigned long t639 = *t638;
    _Bool c640 = ((t637 < t639)) ? 1 : 0;
    if (c640) {
      unsigned long* t641 = __b634;
      __retval635 = t641;
      unsigned long* t642 = __retval635;
      return t642;
    }
  unsigned long* t643 = __a633;
  __retval635 = t643;
  unsigned long* t644 = __retval635;
  return t644;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v645) {
bb646:
  struct std__allocator_int_* __a647;
  unsigned long __retval648;
  unsigned long __diffmax649;
  unsigned long __allocmax650;
  __a647 = v645;
  unsigned long c651 = 2305843009213693951;
  __diffmax649 = c651;
  unsigned long c652 = 4611686018427387903;
  __allocmax650 = c652;
  unsigned long* r653 = unsigned_long_const__std__min_unsigned_long_(&__diffmax649, &__allocmax650);
  unsigned long t654 = *r653;
  __retval648 = t654;
  unsigned long t655 = __retval648;
  return t655;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v656, struct std__allocator_int_* v657) {
bb658:
  struct std__allocator_int_* this659;
  struct std__allocator_int_* __a660;
  this659 = v656;
  __a660 = v657;
  struct std__allocator_int_* t661 = this659;
  struct std____new_allocator_int_* base662 = (struct std____new_allocator_int_*)((char *)t661 + 0);
  struct std__allocator_int_* t663 = __a660;
  struct std____new_allocator_int_* base664 = (struct std____new_allocator_int_*)((char *)t663 + 0);
  std____new_allocator_int_____new_allocator(base662, base664);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v665, struct std__allocator_int_* v666) {
bb667:
  unsigned long __n668;
  struct std__allocator_int_* __a669;
  unsigned long __retval670;
  __n668 = v665;
  __a669 = v666;
    struct std__allocator_int_ ref_tmp0671;
    _Bool tmp_exprcleanup672;
    unsigned long t673 = __n668;
    struct std__allocator_int_* t674 = __a669;
    std__allocator_int___allocator(&ref_tmp0671, t674);
      unsigned long r675 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp0671);
      _Bool c676 = ((t673 > r675)) ? 1 : 0;
      tmp_exprcleanup672 = c676;
    {
      std__allocator_int____allocator(&ref_tmp0671);
    }
    _Bool t677 = tmp_exprcleanup672;
    if (t677) {
      char* cast678 = (char*)&(_str_2);
      std____throw_length_error(cast678);
    }
  unsigned long t679 = __n668;
  __retval670 = t679;
  unsigned long t680 = __retval670;
  return t680;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v681) {
bb682:
  struct std___Vector_base_int__std__allocator_int__* this683;
  struct std__allocator_int_* __retval684;
  this683 = v681;
  struct std___Vector_base_int__std__allocator_int__* t685 = this683;
  struct std__allocator_int_* base686 = (struct std__allocator_int_*)((char *)&(t685->_M_impl) + 0);
  __retval684 = base686;
  struct std__allocator_int_* t687 = __retval684;
  return t687;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb688:
  _Bool __retval689;
    _Bool c690 = 0;
    __retval689 = c690;
    _Bool t691 = __retval689;
    return t691;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v692, int** v693) {
bb694:
  struct std___UninitDestroyGuard_int____void_* this695;
  int** __first696;
  this695 = v692;
  __first696 = v693;
  struct std___UninitDestroyGuard_int____void_* t697 = this695;
  int** t698 = __first696;
  int* t699 = *t698;
  t697->_M_first = t699;
  int** t700 = __first696;
  t697->_M_cur = t700;
  return;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v701, int* v702) {
bb703:
  int* __location704;
  int* __args705;
  int* __retval706;
  void* __loc707;
  __location704 = v701;
  __args705 = v702;
  int* t708 = __location704;
  void* cast709 = (void*)t708;
  __loc707 = cast709;
    void* t710 = __loc707;
    int* cast711 = (int*)t710;
    int* t712 = __args705;
    int t713 = *t712;
    *cast711 = t713;
    __retval706 = cast711;
    int* t714 = __retval706;
    return t714;
  abort();
}

// function: _ZSt10_ConstructIiJRiEEvPT_DpOT0_
void void_std___Construct_int__int__(int* v715, int* v716) {
bb717:
  int* __p718;
  int* __args719;
  __p718 = v715;
  __args719 = v716;
    _Bool r720 = std____is_constant_evaluated();
    if (r720) {
      int* t721 = __p718;
      int* t722 = __args719;
      int* r723 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t721, t722);
      return;
    }
  int* t724 = __p718;
  void* cast725 = (void*)t724;
  int* cast726 = (int*)cast725;
  int* t727 = __args719;
  int t728 = *t727;
  *cast726 = t728;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v729) {
bb730:
  struct std___UninitDestroyGuard_int____void_* this731;
  this731 = v729;
  struct std___UninitDestroyGuard_int____void_* t732 = this731;
  int** c733 = ((void*)0);
  t732->_M_cur = c733;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v734) {
bb735:
  struct std___UninitDestroyGuard_int____void_* this736;
  this736 = v734;
  struct std___UninitDestroyGuard_int____void_* t737 = this736;
    int** t738 = t737->_M_cur;
    int** c739 = ((void*)0);
    _Bool c740 = ((t738 != c739)) ? 1 : 0;
    if (c740) {
      int* t741 = t737->_M_first;
      int** t742 = t737->_M_cur;
      int* t743 = *t742;
      void_std___Destroy_int__(t741, t743);
    }
  return;
}

// function: _ZSt16__do_uninit_copyIPiS0_S0_ET1_T_T0_S1_
int* int__std____do_uninit_copy_int___int___int__(int* v744, int* v745, int* v746) {
bb747:
  int* __first748;
  int* __last749;
  int* __result750;
  int* __retval751;
  struct std___UninitDestroyGuard_int____void_ __guard752;
  __first748 = v744;
  __last749 = v745;
  __result750 = v746;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard752, &__result750);
      while (1) {
        int* t754 = __first748;
        int* t755 = __last749;
        _Bool c756 = ((t754 != t755)) ? 1 : 0;
        if (!c756) break;
        int* t757 = __result750;
        int* t758 = __first748;
        void_std___Construct_int__int__(t757, t758);
      for_step753: ;
        int* t759 = __first748;
        int c760 = 1;
        int* ptr761 = &(t759)[c760];
        __first748 = ptr761;
        int* t762 = __result750;
        int c763 = 1;
        int* ptr764 = &(t762)[c763];
        __result750 = ptr764;
      }
    std___UninitDestroyGuard_int___void___release(&__guard752);
    int* t765 = __result750;
    __retval751 = t765;
    int* t766 = __retval751;
    int* ret_val767 = t766;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard752);
    }
    return ret_val767;
  abort();
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v768) {
bb769:
  int* __it770;
  int* __retval771;
  __it770 = v768;
  int* t772 = __it770;
  __retval771 = t772;
  int* t773 = __retval771;
  return t773;
}

// function: _ZSt18uninitialized_copyIPiS0_ET0_T_S2_S1_
int* int__std__uninitialized_copy_int___int__(int* v774, int* v775, int* v776) {
bb777:
  int* __first778;
  int* __last779;
  int* __result780;
  int* __retval781;
  __first778 = v774;
  __last779 = v775;
  __result780 = v776;
      long __n782;
      int* t783 = __last779;
      int* t784 = __first778;
      long diff785 = t783 - t784;
      __n782 = diff785;
        long t786 = __n782;
        long c787 = 0;
        _Bool c788 = ((t786 > c787)) ? 1 : 0;
        if (c788) {
          int* t789 = __result780;
          int* r790 = int__std____niter_base_int__(t789);
          void* cast791 = (void*)r790;
          int* t792 = __first778;
          int* r793 = int__std____niter_base_int__(t792);
          void* cast794 = (void*)r793;
          long t795 = __n782;
          unsigned long cast796 = (unsigned long)t795;
          unsigned long c797 = 4;
          unsigned long b798 = cast796 * c797;
          void* r799 = memcpy(cast791, cast794, b798);
          long t800 = __n782;
          int* t801 = __result780;
          int* ptr802 = &(t801)[t800];
          __result780 = ptr802;
        }
      int* t803 = __result780;
      __retval781 = t803;
      int* t804 = __retval781;
      return t804;
  abort();
}

// function: _ZSt22__uninitialized_copy_aIPiS0_S0_iET1_T_T0_S1_RSaIT2_E
int* int__std____uninitialized_copy_a_int___int___int___int_(int* v805, int* v806, int* v807, struct std__allocator_int_* v808) {
bb809:
  int* __first810;
  int* __last811;
  int* __result812;
  struct std__allocator_int_* unnamed813;
  int* __retval814;
  __first810 = v805;
  __last811 = v806;
  __result812 = v807;
  unnamed813 = v808;
    _Bool r815 = std__is_constant_evaluated();
    if (r815) {
      int* t816 = __first810;
      int* t817 = __last811;
      int* t818 = __result812;
      int* r819 = int__std____do_uninit_copy_int___int___int__(t816, t817, t818);
      __retval814 = r819;
      int* t820 = __retval814;
      return t820;
    }
    int* t821 = __first810;
    int* t822 = __last811;
    int* t823 = __result812;
    int* r824 = int__std__uninitialized_copy_int___int__(t821, t822, t823);
    __retval814 = r824;
    int* t825 = __retval814;
    return t825;
  abort();
}

// function: _ZNSt6vectorIiSaIiEE21_M_range_initialize_nIPiS3_EEvT_T0_m
void void_std__vector_int__std__allocator_int______M_range_initialize_n_int___int__(struct std__vector_int__std__allocator_int__* v826, int* v827, int* v828, unsigned long v829) {
bb830:
  struct std__vector_int__std__allocator_int__* this831;
  int* __first832;
  int* __last833;
  unsigned long __n834;
  int* __start835;
  this831 = v826;
  __first832 = v827;
  __last833 = v828;
  __n834 = v829;
  struct std__vector_int__std__allocator_int__* t836 = this831;
  struct std___Vector_base_int__std__allocator_int__* base837 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t836 + 0);
  unsigned long t838 = __n834;
  struct std___Vector_base_int__std__allocator_int__* base839 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t836 + 0);
  struct std__allocator_int_* r840 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base839);
  unsigned long r841 = std__vector_int__std__allocator_int______S_check_init_len(t838, r840);
  int* r842 = std___Vector_base_int__std__allocator_int______M_allocate(base837, r841);
  __start835 = r842;
  int* t843 = __start835;
  struct std___Vector_base_int__std__allocator_int__* base844 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t836 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base845 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base844->_M_impl) + 0);
  base845->_M_finish = t843;
  struct std___Vector_base_int__std__allocator_int__* base846 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t836 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base847 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base846->_M_impl) + 0);
  base847->_M_start = t843;
  int* t848 = __start835;
  unsigned long t849 = __n834;
  int* ptr850 = &(t848)[t849];
  struct std___Vector_base_int__std__allocator_int__* base851 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t836 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base852 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base851->_M_impl) + 0);
  base852->_M_end_of_storage = ptr850;
  int* t853 = __first832;
  int* t854 = __last833;
  int* t855 = __start835;
  struct std___Vector_base_int__std__allocator_int__* base856 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t836 + 0);
  struct std__allocator_int_* r857 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base856);
  int* r858 = int__std____uninitialized_copy_a_int___int___int___int_(t853, t854, t855, r857);
  struct std___Vector_base_int__std__allocator_int__* base859 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t836 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base860 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base859->_M_impl) + 0);
  base860->_M_finish = r858;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v861, int* v862, unsigned long v863) {
bb864:
  struct std____new_allocator_int_* this865;
  int* __p866;
  unsigned long __n867;
  this865 = v861;
  __p866 = v862;
  __n867 = v863;
  struct std____new_allocator_int_* t868 = this865;
    unsigned long c869 = 4;
    unsigned long c870 = 16;
    _Bool c871 = ((c869 > c870)) ? 1 : 0;
    if (c871) {
      int* t872 = __p866;
      void* cast873 = (void*)t872;
      unsigned long t874 = __n867;
      unsigned long c875 = 4;
      unsigned long b876 = t874 * c875;
      unsigned long c877 = 4;
      operator_delete_3(cast873, b876, c877);
      return;
    }
  int* t878 = __p866;
  void* cast879 = (void*)t878;
  unsigned long t880 = __n867;
  unsigned long c881 = 4;
  unsigned long b882 = t880 * c881;
  operator_delete_2(cast879, b882);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v883, int* v884, unsigned long v885) {
bb886:
  struct std__allocator_int_* this887;
  int* __p888;
  unsigned long __n889;
  this887 = v883;
  __p888 = v884;
  __n889 = v885;
  struct std__allocator_int_* t890 = this887;
    _Bool r891 = std____is_constant_evaluated();
    if (r891) {
      int* t892 = __p888;
      void* cast893 = (void*)t892;
      operator_delete(cast893);
      return;
    }
  struct std____new_allocator_int_* base894 = (struct std____new_allocator_int_*)((char *)t890 + 0);
  int* t895 = __p888;
  unsigned long t896 = __n889;
  std____new_allocator_int___deallocate(base894, t895, t896);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v897, int* v898, unsigned long v899) {
bb900:
  struct std__allocator_int_* __a901;
  int* __p902;
  unsigned long __n903;
  __a901 = v897;
  __p902 = v898;
  __n903 = v899;
  struct std__allocator_int_* t904 = __a901;
  int* t905 = __p902;
  unsigned long t906 = __n903;
  std__allocator_int___deallocate(t904, t905, t906);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v907, int* v908, unsigned long v909) {
bb910:
  struct std___Vector_base_int__std__allocator_int__* this911;
  int* __p912;
  unsigned long __n913;
  this911 = v907;
  __p912 = v908;
  __n913 = v909;
  struct std___Vector_base_int__std__allocator_int__* t914 = this911;
    int* t915 = __p912;
    _Bool cast916 = (_Bool)t915;
    if (cast916) {
      struct std__allocator_int_* base917 = (struct std__allocator_int_*)((char *)&(t914->_M_impl) + 0);
      int* t918 = __p912;
      unsigned long t919 = __n913;
      std__allocator_traits_std__allocator_int_____deallocate(base917, t918, t919);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v920) {
bb921:
  struct std___Vector_base_int__std__allocator_int__* this922;
  this922 = v920;
  struct std___Vector_base_int__std__allocator_int__* t923 = this922;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base924 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t923->_M_impl) + 0);
    int* t925 = base924->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base926 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t923->_M_impl) + 0);
    int* t927 = base926->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base928 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t923->_M_impl) + 0);
    int* t929 = base928->_M_start;
    long diff930 = t927 - t929;
    unsigned long cast931 = (unsigned long)diff930;
    std___Vector_base_int__std__allocator_int______M_deallocate(t923, t925, cast931);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t923->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v932, struct std____new_allocator_int_* v933) {
bb934:
  struct std____new_allocator_int_* this935;
  struct std____new_allocator_int_* unnamed936;
  this935 = v932;
  unnamed936 = v933;
  struct std____new_allocator_int_* t937 = this935;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v938) {
bb939:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this940;
  this940 = v938;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t941 = this940;
  int* c942 = ((void*)0);
  t941->_M_start = c942;
  int* c943 = ((void*)0);
  t941->_M_finish = c943;
  int* c944 = ((void*)0);
  t941->_M_end_of_storage = c944;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v945) {
bb946:
  int* __location947;
  __location947 = v945;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v948, int* v949) {
bb950:
  int* __first951;
  int* __last952;
  __first951 = v948;
  __last952 = v949;
      _Bool r953 = std____is_constant_evaluated();
      if (r953) {
          while (1) {
            int* t955 = __first951;
            int* t956 = __last952;
            _Bool c957 = ((t955 != t956)) ? 1 : 0;
            if (!c957) break;
            int* t958 = __first951;
            void_std__destroy_at_int_(t958);
          for_step954: ;
            int* t959 = __first951;
            int c960 = 1;
            int* ptr961 = &(t959)[c960];
            __first951 = ptr961;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v962, int* v963, struct std__allocator_int_* v964) {
bb965:
  int* __first966;
  int* __last967;
  struct std__allocator_int_* unnamed968;
  __first966 = v962;
  __last967 = v963;
  unnamed968 = v964;
  int* t969 = __first966;
  int* t970 = __last967;
  void_std___Destroy_int__(t969, t970);
  return;
}

