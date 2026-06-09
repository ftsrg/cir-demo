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

int __const_main_match2[3] = {4, 5, 1};
int __const_main_match1[3] = {1, 2, 3};
int __const_main_myints[10] = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[12] = "first *it: ";
char _str_1[7] = "*it==1";
char _str_2[105] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/vector/algorithm4/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_3[13] = "second *it: ";
char _str_4[7] = "*it!=4";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_5[49] = "cannot create std::vector larger than max_size()";
_Bool myfunction(int p0, int p1);
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector_int___void_(struct std__vector_int__std__allocator_int__* p0, int* p1, int* p2, struct std__allocator_int_* p3);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______find_end___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2, int* p3);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
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
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______find_end___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__bool_____int__int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___int___bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2, int* p3, void* p4);
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

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v64) {
bb65:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this66;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval67;
  this66 = v64;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t68 = this66;
  int* t69 = t68->_M_current;
  int c70 = 1;
  int* ptr71 = &(t69)[c70];
  t68->_M_current = ptr71;
  __retval67 = t68;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t72 = __retval67;
  return t72;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSERKS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__2(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v73, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v74) {
bb75:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this76;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed77;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval78;
  this76 = v73;
  unnamed77 = v74;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t79 = this76;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t80 = unnamed77;
  int* t81 = t80->_M_current;
  t79->_M_current = t81;
  __retval78 = t79;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t82 = __retval78;
  return t82;
}

// function: _Z8find_endIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiET_S7_S7_PT0_S9_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______find_end___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v83, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v84, int* v85, int* v86) {
bb87:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ first188;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ last189;
  int* first290;
  int* last291;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval92;
  first188 = v83;
  last189 = v84;
  first290 = v85;
  last291 = v86;
    int* t93 = first290;
    int* t94 = last291;
    _Bool c95 = ((t93 == t94)) ? 1 : 0;
    if (c95) {
      __retval92 = last189; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t96 = __retval92;
      return t96;
    }
  __retval92 = last189; // copy
    while (1) {
      _Bool r97 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&first188, &last189);
      _Bool u98 = !r97;
      if (!u98) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it199;
        int* it2100;
        it199 = first188; // copy
        int* t101 = first290;
        it2100 = t101;
          while (1) {
            int* r102 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it199);
            int t103 = *r102;
            int* t104 = it2100;
            int t105 = *t104;
            _Bool c106 = ((t103 == t105)) ? 1 : 0;
            if (!c106) break;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r107 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&it199);
              int* t108 = it2100;
              int c109 = 1;
              int* ptr110 = &(t108)[c109];
              it2100 = ptr110;
                int* t111 = it2100;
                int* t112 = last291;
                _Bool c113 = ((t111 == t112)) ? 1 : 0;
                if (c113) {
                  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r114 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__2(&__retval92, &first188);
                  break;
                }
                _Bool r115 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it199, &last189);
                if (r115) {
                  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t116 = __retval92;
                  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ret_val117 = t116;
                  return ret_val117;
                }
          }
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r118 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&first188);
    }
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t119 = __retval92;
  return t119;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v120, int** v121) {
bb122:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this123;
  int** __i124;
  this123 = v120;
  __i124 = v121;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t125 = this123;
  int** t126 = __i124;
  int* t127 = *t126;
  t125->_M_current = t127;
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v128) {
bb129:
  struct std__vector_int__std__allocator_int__* this130;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval131;
  this130 = v128;
  struct std__vector_int__std__allocator_int__* t132 = this130;
  struct std___Vector_base_int__std__allocator_int__* base133 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t132 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base134 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base133->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval131, &base134->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t135 = __retval131;
  return t135;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v136) {
bb137:
  struct std__vector_int__std__allocator_int__* this138;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval139;
  this138 = v136;
  struct std__vector_int__std__allocator_int__* t140 = this138;
  struct std___Vector_base_int__std__allocator_int__* base141 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t140 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base142 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base141->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval139, &base142->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t143 = __retval139;
  return t143;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEaSEOS5_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v144, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v145) {
bb146:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this147;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* unnamed148;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval149;
  this147 = v144;
  unnamed148 = v145;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t150 = this147;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t151 = unnamed148;
  int* t152 = t151->_M_current;
  t150->_M_current = t152;
  __retval149 = t150;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t153 = __retval149;
  return t153;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v154, int v155) {
bb156:
  int __a157;
  int __b158;
  int __retval159;
  __a157 = v154;
  __b158 = v155;
  int t160 = __a157;
  int t161 = __b158;
  int b162 = t160 | t161;
  __retval159 = b162;
  int t163 = __retval159;
  return t163;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v164) {
bb165:
  struct std__basic_ios_char__std__char_traits_char__* this166;
  int __retval167;
  this166 = v164;
  struct std__basic_ios_char__std__char_traits_char__* t168 = this166;
  struct std__ios_base* base169 = (struct std__ios_base*)((char *)t168 + 0);
  int t170 = base169->_M_streambuf_state;
  __retval167 = t170;
  int t171 = __retval167;
  return t171;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v172, int v173) {
bb174:
  struct std__basic_ios_char__std__char_traits_char__* this175;
  int __state176;
  this175 = v172;
  __state176 = v173;
  struct std__basic_ios_char__std__char_traits_char__* t177 = this175;
  int r178 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t177);
  int t179 = __state176;
  int r180 = std__operator_(r178, t179);
  std__basic_ios_char__std__char_traits_char_____clear(t177, r180);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v181, char* v182) {
bb183:
  char* __c1184;
  char* __c2185;
  _Bool __retval186;
  __c1184 = v181;
  __c2185 = v182;
  char* t187 = __c1184;
  char t188 = *t187;
  int cast189 = (int)t188;
  char* t190 = __c2185;
  char t191 = *t190;
  int cast192 = (int)t191;
  _Bool c193 = ((cast189 == cast192)) ? 1 : 0;
  __retval186 = c193;
  _Bool t194 = __retval186;
  return t194;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v195) {
bb196:
  char* __p197;
  unsigned long __retval198;
  unsigned long __i199;
  __p197 = v195;
  unsigned long c200 = 0;
  __i199 = c200;
    char ref_tmp0201;
    while (1) {
      unsigned long t202 = __i199;
      char* t203 = __p197;
      char* ptr204 = &(t203)[t202];
      char c205 = 0;
      ref_tmp0201 = c205;
      _Bool r206 = __gnu_cxx__char_traits_char___eq(ptr204, &ref_tmp0201);
      _Bool u207 = !r206;
      if (!u207) break;
      unsigned long t208 = __i199;
      unsigned long u209 = t208 + 1;
      __i199 = u209;
    }
  unsigned long t210 = __i199;
  __retval198 = t210;
  unsigned long t211 = __retval198;
  return t211;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v212) {
bb213:
  char* __s214;
  unsigned long __retval215;
  __s214 = v212;
    _Bool r216 = std____is_constant_evaluated();
    if (r216) {
      char* t217 = __s214;
      unsigned long r218 = __gnu_cxx__char_traits_char___length(t217);
      __retval215 = r218;
      unsigned long t219 = __retval215;
      return t219;
    }
  char* t220 = __s214;
  unsigned long r221 = strlen(t220);
  __retval215 = r221;
  unsigned long t222 = __retval215;
  return t222;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v223, char* v224) {
bb225:
  struct std__basic_ostream_char__std__char_traits_char__* __out226;
  char* __s227;
  struct std__basic_ostream_char__std__char_traits_char__* __retval228;
  __out226 = v223;
  __s227 = v224;
    char* t229 = __s227;
    _Bool cast230 = (_Bool)t229;
    _Bool u231 = !cast230;
    if (u231) {
      struct std__basic_ostream_char__std__char_traits_char__* t232 = __out226;
      void** v233 = (void**)t232;
      void* v234 = *((void**)v233);
      unsigned char* cast235 = (unsigned char*)v234;
      long c236 = -24;
      unsigned char* ptr237 = &(cast235)[c236];
      long* cast238 = (long*)ptr237;
      long t239 = *cast238;
      unsigned char* cast240 = (unsigned char*)t232;
      unsigned char* ptr241 = &(cast240)[t239];
      struct std__basic_ostream_char__std__char_traits_char__* cast242 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr241;
      struct std__basic_ios_char__std__char_traits_char__* cast243 = (struct std__basic_ios_char__std__char_traits_char__*)cast242;
      int t244 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast243, t244);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t245 = __out226;
      char* t246 = __s227;
      char* t247 = __s227;
      unsigned long r248 = std__char_traits_char___length(t247);
      long cast249 = (long)r248;
      struct std__basic_ostream_char__std__char_traits_char__* r250 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t245, t246, cast249);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t251 = __out226;
  __retval228 = t251;
  struct std__basic_ostream_char__std__char_traits_char__* t252 = __retval228;
  return t252;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v253) {
bb254:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this255;
  int* __retval256;
  this255 = v253;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t257 = this255;
  int* t258 = t257->_M_current;
  __retval256 = t258;
  int* t259 = __retval256;
  return t259;
}

// function: _ZNSolsEPFRSoS_E
struct std__basic_ostream_char__std__char_traits_char__* std__ostream__operator___std__ostream_____(struct std__basic_ostream_char__std__char_traits_char__* v260, void* v261) {
bb262:
  struct std__basic_ostream_char__std__char_traits_char__* this263;
  void* __pf264;
  struct std__basic_ostream_char__std__char_traits_char__* __retval265;
  this263 = v260;
  __pf264 = v261;
  struct std__basic_ostream_char__std__char_traits_char__* t266 = this263;
  void* t267 = __pf264;
  struct std__basic_ostream_char__std__char_traits_char__* r268 = ((struct std__basic_ostream_char__std__char_traits_char__* (*)(struct std__basic_ostream_char__std__char_traits_char__*))t267)(t266);
  __retval265 = r268;
  struct std__basic_ostream_char__std__char_traits_char__* t269 = __retval265;
  return t269;
}

// function: _ZSt5flushIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v270) {
bb271:
  struct std__basic_ostream_char__std__char_traits_char__* __os272;
  struct std__basic_ostream_char__std__char_traits_char__* __retval273;
  __os272 = v270;
  struct std__basic_ostream_char__std__char_traits_char__* t274 = __os272;
  struct std__basic_ostream_char__std__char_traits_char__* r275 = std__ostream__flush(t274);
  __retval273 = r275;
  struct std__basic_ostream_char__std__char_traits_char__* t276 = __retval273;
  return t276;
}

// function: _ZSt13__check_facetISt5ctypeIcEERKT_PS3_
struct std__ctype_char_* std__ctype_char__const__std____check_facet_std__ctype_char___(struct std__ctype_char_* v277) {
bb278:
  struct std__ctype_char_* __f279;
  struct std__ctype_char_* __retval280;
  __f279 = v277;
    struct std__ctype_char_* t281 = __f279;
    _Bool cast282 = (_Bool)t281;
    _Bool u283 = !cast282;
    if (u283) {
      std____throw_bad_cast();
    }
  struct std__ctype_char_* t284 = __f279;
  __retval280 = t284;
  struct std__ctype_char_* t285 = __retval280;
  return t285;
}

// function: _ZNKSt5ctypeIcE5widenEc
char std__ctype_char___widen_char__const(struct std__ctype_char_* v286, char v287) {
bb288:
  struct std__ctype_char_* this289;
  char __c290;
  char __retval291;
  this289 = v286;
  __c290 = v287;
  struct std__ctype_char_* t292 = this289;
    char t293 = t292->_M_widen_ok;
    _Bool cast294 = (_Bool)t293;
    if (cast294) {
      char t295 = __c290;
      unsigned char cast296 = (unsigned char)t295;
      unsigned long cast297 = (unsigned long)cast296;
      char t298 = t292->_M_widen[cast297];
      __retval291 = t298;
      char t299 = __retval291;
      return t299;
    }
  std__ctype_char____M_widen_init___const(t292);
  char t300 = __c290;
  void** v301 = (void**)t292;
  void* v302 = *((void**)v301);
  char vcall305 = (char)__VERIFIER_virtual_call_char_char(t292, 6, t300);
  __retval291 = vcall305;
  char t306 = __retval291;
  return t306;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE5widenEc
char std__basic_ios_char__std__char_traits_char_____widen_char__const(struct std__basic_ios_char__std__char_traits_char__* v307, char v308) {
bb309:
  struct std__basic_ios_char__std__char_traits_char__* this310;
  char __c311;
  char __retval312;
  this310 = v307;
  __c311 = v308;
  struct std__basic_ios_char__std__char_traits_char__* t313 = this310;
  struct std__ctype_char_* t314 = t313->_M_ctype;
  struct std__ctype_char_* r315 = std__ctype_char__const__std____check_facet_std__ctype_char___(t314);
  char t316 = __c311;
  char r317 = std__ctype_char___widen_char__const(r315, t316);
  __retval312 = r317;
  char t318 = __retval312;
  return t318;
}

// function: _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v319) {
bb320:
  struct std__basic_ostream_char__std__char_traits_char__* __os321;
  struct std__basic_ostream_char__std__char_traits_char__* __retval322;
  __os321 = v319;
  struct std__basic_ostream_char__std__char_traits_char__* t323 = __os321;
  struct std__basic_ostream_char__std__char_traits_char__* t324 = __os321;
  void** v325 = (void**)t324;
  void* v326 = *((void**)v325);
  unsigned char* cast327 = (unsigned char*)v326;
  long c328 = -24;
  unsigned char* ptr329 = &(cast327)[c328];
  long* cast330 = (long*)ptr329;
  long t331 = *cast330;
  unsigned char* cast332 = (unsigned char*)t324;
  unsigned char* ptr333 = &(cast332)[t331];
  struct std__basic_ostream_char__std__char_traits_char__* cast334 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr333;
  struct std__basic_ios_char__std__char_traits_char__* cast335 = (struct std__basic_ios_char__std__char_traits_char__*)cast334;
  char c336 = 10;
  char r337 = std__basic_ios_char__std__char_traits_char_____widen_char__const(cast335, c336);
  struct std__basic_ostream_char__std__char_traits_char__* r338 = std__ostream__put(t323, r337);
  struct std__basic_ostream_char__std__char_traits_char__* r339 = std__basic_ostream_char__std__char_traits_char_____std__flush_char__std__char_traits_char___(r338);
  __retval322 = r339;
  struct std__basic_ostream_char__std__char_traits_char__* t340 = __retval322;
  return t340;
}

// function: _Z8find_endIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiPFbiiEET_S9_S9_PT0_SB_T1_
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______find_end___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__bool_____int__int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___int___bool____(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v341, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v342, int* v343, int* v344, void* v345) {
bb346:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ first1347;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ last1348;
  int* first2349;
  int* last2350;
  void* pred351;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval352;
  first1347 = v341;
  last1348 = v342;
  first2349 = v343;
  last2350 = v344;
  pred351 = v345;
    int* t353 = first2349;
    int* t354 = last2350;
    _Bool c355 = ((t353 == t354)) ? 1 : 0;
    if (c355) {
      __retval352 = last1348; // copy
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t356 = __retval352;
      return t356;
    }
  __retval352 = last1348; // copy
    while (1) {
      _Bool r357 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&first1347, &last1348);
      _Bool u358 = !r357;
      if (!u358) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it1359;
        int* it2360;
        it1359 = first1347; // copy
        int* t361 = first2349;
        it2360 = t361;
          while (1) {
            void* t362 = pred351;
            int* r363 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it1359);
            int t364 = *r363;
            int* t365 = it2360;
            int t366 = *t365;
            _Bool r367 = ((_Bool (*)(int, int))t362)(t364, t366);
            if (!r367) break;
              struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r368 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&it1359);
              int* t369 = it2360;
              int c370 = 1;
              int* ptr371 = &(t369)[c370];
              it2360 = ptr371;
                int* t372 = it2360;
                int* t373 = last2350;
                _Bool c374 = ((t372 == t373)) ? 1 : 0;
                if (c374) {
                  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r375 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__2(&__retval352, &first1347);
                  break;
                }
                _Bool r376 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&it1359, &last1348);
                if (r376) {
                  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t377 = __retval352;
                  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ret_val378 = t377;
                  return ret_val378;
                }
          }
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r379 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&first1347);
    }
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t380 = __retval352;
  return t380;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v381) {
bb382:
  struct std__vector_int__std__allocator_int__* this383;
  this383 = v381;
  struct std__vector_int__std__allocator_int__* t384 = this383;
    struct std___Vector_base_int__std__allocator_int__* base385 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t384 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base386 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base385->_M_impl) + 0);
    int* t387 = base386->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base388 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t384 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base389 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base388->_M_impl) + 0);
    int* t390 = base389->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base391 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t384 + 0);
    struct std__allocator_int_* r392 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base391);
    void_std___Destroy_int___int_(t387, t390, r392);
  {
    struct std___Vector_base_int__std__allocator_int__* base393 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t384 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base393);
  }
  return;
}

// function: main
int main() {
bb394:
  int __retval395;
  int myints396[10];
  struct std__vector_int__std__allocator_int__ myvector397;
  struct std__allocator_int_ ref_tmp0398;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ it399;
  int match1400[3];
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp1401;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0402;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1403;
  int match2404[3];
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ ref_tmp2405;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp2406;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp3407;
  int c408 = 0;
  __retval395 = c408;
  // array copy
  __builtin_memcpy(myints396, __const_main_myints, (unsigned long)10 * sizeof(__const_main_myints[0]));
  int* cast409 = (int*)&(myints396);
  int* cast410 = (int*)&(myints396);
  int c411 = 10;
  int* ptr412 = &(cast410)[c411];
  std__allocator_int___allocator_2(&ref_tmp0398);
    std__vector_int__std__allocator_int_____vector_int___void_(&myvector397, cast409, ptr412, &ref_tmp0398);
  {
    std__allocator_int____allocator(&ref_tmp0398);
  }
    __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator_2(&it399);
    // array copy
    __builtin_memcpy(match1400, __const_main_match1, (unsigned long)3 * sizeof(__const_main_match1[0]));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r413 = std__vector_int__std__allocator_int_____begin(&myvector397);
    agg_tmp0402 = r413;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r414 = std__vector_int__std__allocator_int_____end(&myvector397);
    agg_tmp1403 = r414;
    int* cast415 = (int*)&(match1400);
    int* cast416 = (int*)&(match1400);
    int c417 = 3;
    int* ptr418 = &(cast416)[c417];
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t419 = agg_tmp0402;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t420 = agg_tmp1403;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r421 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______find_end___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(t419, t420, cast415, ptr418);
    ref_tmp1401 = r421;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r422 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it399, &ref_tmp1401);
    char* cast423 = (char*)&(_str);
    struct std__basic_ostream_char__std__char_traits_char__* r424 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast423);
    int* r425 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it399);
    int t426 = *r425;
    struct std__basic_ostream_char__std__char_traits_char__* r427 = std__ostream__operator__(r424, t426);
    struct std__basic_ostream_char__std__char_traits_char__* r428 = std__ostream__operator___std__ostream_____(r427, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int* r429 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it399);
    int t430 = *r429;
    int c431 = 1;
    _Bool c432 = ((t430 == c431)) ? 1 : 0;
    if (c432) {
    } else {
      char* cast433 = (char*)&(_str_1);
      char* c434 = _str_2;
      unsigned int c435 = 132;
      char* cast436 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast433, c434, c435, cast436);
    }
    // array copy
    __builtin_memcpy(match2404, __const_main_match2, (unsigned long)3 * sizeof(__const_main_match2[0]));
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r437 = std__vector_int__std__allocator_int_____begin(&myvector397);
    agg_tmp2406 = r437;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r438 = std__vector_int__std__allocator_int_____end(&myvector397);
    agg_tmp3407 = r438;
    int* cast439 = (int*)&(match2404);
    int* cast440 = (int*)&(match2404);
    int c441 = 3;
    int* ptr442 = &(cast440)[c441];
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t443 = agg_tmp2406;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t444 = agg_tmp3407;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r445 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int______find_end___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int__bool_____int__int_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int___int___bool____(t443, t444, cast439, ptr442, &myfunction);
    ref_tmp2405 = r445;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r446 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator_(&it399, &ref_tmp2405);
    char* cast447 = (char*)&(_str_3);
    struct std__basic_ostream_char__std__char_traits_char__* r448 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast447);
    int* r449 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it399);
    int t450 = *r449;
    struct std__basic_ostream_char__std__char_traits_char__* r451 = std__ostream__operator__(r448, t450);
    struct std__basic_ostream_char__std__char_traits_char__* r452 = std__ostream__operator___std__ostream_____(r451, &std__basic_ostream_char__std__char_traits_char_____std__endl_char__std__char_traits_char___);
    int* r453 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&it399);
    int t454 = *r453;
    int c455 = 4;
    _Bool c456 = ((t454 != c455)) ? 1 : 0;
    if (c456) {
    } else {
      char* cast457 = (char*)&(_str_4);
      char* c458 = _str_2;
      unsigned int c459 = 138;
      char* cast460 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast457, c458, c459, cast460);
    }
    int c461 = 0;
    __retval395 = c461;
    int t462 = __retval395;
    int ret_val463 = t462;
    {
      std__vector_int__std__allocator_int______vector(&myvector397);
    }
    return ret_val463;
  int t464 = __retval395;
  return t464;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v465) {
bb466:
  struct std____new_allocator_int_* this467;
  this467 = v465;
  struct std____new_allocator_int_* t468 = this467;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v469, struct std__allocator_int_* v470) {
bb471:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this472;
  struct std__allocator_int_* __a473;
  this472 = v469;
  __a473 = v470;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t474 = this472;
  struct std__allocator_int_* base475 = (struct std__allocator_int_*)((char *)t474 + 0);
  struct std__allocator_int_* t476 = __a473;
  std__allocator_int___allocator(base475, t476);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base477 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t474 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base477);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v478) {
bb479:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this480;
  this480 = v478;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t481 = this480;
  {
    struct std__allocator_int_* base482 = (struct std__allocator_int_*)((char *)t481 + 0);
    std__allocator_int____allocator(base482);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v483, struct std__allocator_int_* v484) {
bb485:
  struct std___Vector_base_int__std__allocator_int__* this486;
  struct std__allocator_int_* __a487;
  this486 = v483;
  __a487 = v484;
  struct std___Vector_base_int__std__allocator_int__* t488 = this486;
  struct std__allocator_int_* t489 = __a487;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t488->_M_impl, t489);
  return;
}

// function: _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_
long _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_(struct std__ranges____distance_fn* v490, int** v491, int* v492) {
bb493:
  struct std__ranges____distance_fn* this494;
  int** __first495;
  int* __last496;
  long __retval497;
  this494 = v490;
  __first495 = v491;
  __last496 = v492;
  struct std__ranges____distance_fn* t498 = this494;
  int* t499 = __last496;
  int** t500 = __first495;
  int* t501 = *t500;
  long diff502 = t499 - t501;
  __retval497 = diff502;
  long t503 = __retval497;
  return t503;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb504:
  _Bool __retval505;
    _Bool c506 = 0;
    __retval505 = c506;
    _Bool t507 = __retval505;
    return t507;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v508) {
bb509:
  struct std____new_allocator_int_* this510;
  unsigned long __retval511;
  this510 = v508;
  struct std____new_allocator_int_* t512 = this510;
  unsigned long c513 = 9223372036854775807;
  unsigned long c514 = 4;
  unsigned long b515 = c513 / c514;
  __retval511 = b515;
  unsigned long t516 = __retval511;
  return t516;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v517, unsigned long v518, void* v519) {
bb520:
  struct std____new_allocator_int_* this521;
  unsigned long __n522;
  void* unnamed523;
  int* __retval524;
  this521 = v517;
  __n522 = v518;
  unnamed523 = v519;
  struct std____new_allocator_int_* t525 = this521;
    unsigned long t526 = __n522;
    unsigned long r527 = std____new_allocator_int____M_max_size___const(t525);
    _Bool c528 = ((t526 > r527)) ? 1 : 0;
    if (c528) {
        unsigned long t529 = __n522;
        unsigned long c530 = -1;
        unsigned long c531 = 4;
        unsigned long b532 = c530 / c531;
        _Bool c533 = ((t529 > b532)) ? 1 : 0;
        if (c533) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c534 = 4;
    unsigned long c535 = 16;
    _Bool c536 = ((c534 > c535)) ? 1 : 0;
    if (c536) {
      unsigned long __al537;
      unsigned long c538 = 4;
      __al537 = c538;
      unsigned long t539 = __n522;
      unsigned long c540 = 4;
      unsigned long b541 = t539 * c540;
      unsigned long t542 = __al537;
      void* r543 = operator_new_2(b541, t542);
      int* cast544 = (int*)r543;
      __retval524 = cast544;
      int* t545 = __retval524;
      return t545;
    }
  unsigned long t546 = __n522;
  unsigned long c547 = 4;
  unsigned long b548 = t546 * c547;
  void* r549 = operator_new(b548);
  int* cast550 = (int*)r549;
  __retval524 = cast550;
  int* t551 = __retval524;
  return t551;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v552, unsigned long v553) {
bb554:
  struct std__allocator_int_* this555;
  unsigned long __n556;
  int* __retval557;
  this555 = v552;
  __n556 = v553;
  struct std__allocator_int_* t558 = this555;
    _Bool r559 = std____is_constant_evaluated();
    if (r559) {
        unsigned long t560 = __n556;
        unsigned long c561 = 4;
        unsigned long ovr562;
        _Bool ovf563 = __builtin_mul_overflow(t560, c561, &ovr562);
        __n556 = ovr562;
        if (ovf563) {
          std____throw_bad_array_new_length();
        }
      unsigned long t564 = __n556;
      void* r565 = operator_new(t564);
      int* cast566 = (int*)r565;
      __retval557 = cast566;
      int* t567 = __retval557;
      return t567;
    }
  struct std____new_allocator_int_* base568 = (struct std____new_allocator_int_*)((char *)t558 + 0);
  unsigned long t569 = __n556;
  void* c570 = ((void*)0);
  int* r571 = std____new_allocator_int___allocate(base568, t569, c570);
  __retval557 = r571;
  int* t572 = __retval557;
  return t572;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v573, unsigned long v574) {
bb575:
  struct std__allocator_int_* __a576;
  unsigned long __n577;
  int* __retval578;
  __a576 = v573;
  __n577 = v574;
  struct std__allocator_int_* t579 = __a576;
  unsigned long t580 = __n577;
  int* r581 = std__allocator_int___allocate(t579, t580);
  __retval578 = r581;
  int* t582 = __retval578;
  return t582;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v583, unsigned long v584) {
bb585:
  struct std___Vector_base_int__std__allocator_int__* this586;
  unsigned long __n587;
  int* __retval588;
  this586 = v583;
  __n587 = v584;
  struct std___Vector_base_int__std__allocator_int__* t589 = this586;
  unsigned long t590 = __n587;
  unsigned long c591 = 0;
  _Bool c592 = ((t590 != c591)) ? 1 : 0;
  int* ternary593;
  if (c592) {
    struct std__allocator_int_* base594 = (struct std__allocator_int_*)((char *)&(t589->_M_impl) + 0);
    unsigned long t595 = __n587;
    int* r596 = std__allocator_traits_std__allocator_int_____allocate(base594, t595);
    ternary593 = (int*)r596;
  } else {
    int* c597 = ((void*)0);
    ternary593 = (int*)c597;
  }
  __retval588 = ternary593;
  int* t598 = __retval588;
  return t598;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v599, unsigned long* v600) {
bb601:
  unsigned long* __a602;
  unsigned long* __b603;
  unsigned long* __retval604;
  __a602 = v599;
  __b603 = v600;
    unsigned long* t605 = __b603;
    unsigned long t606 = *t605;
    unsigned long* t607 = __a602;
    unsigned long t608 = *t607;
    _Bool c609 = ((t606 < t608)) ? 1 : 0;
    if (c609) {
      unsigned long* t610 = __b603;
      __retval604 = t610;
      unsigned long* t611 = __retval604;
      return t611;
    }
  unsigned long* t612 = __a602;
  __retval604 = t612;
  unsigned long* t613 = __retval604;
  return t613;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v614) {
bb615:
  struct std__allocator_int_* __a616;
  unsigned long __retval617;
  unsigned long __diffmax618;
  unsigned long __allocmax619;
  __a616 = v614;
  unsigned long c620 = 2305843009213693951;
  __diffmax618 = c620;
  unsigned long c621 = 4611686018427387903;
  __allocmax619 = c621;
  unsigned long* r622 = unsigned_long_const__std__min_unsigned_long_(&__diffmax618, &__allocmax619);
  unsigned long t623 = *r622;
  __retval617 = t623;
  unsigned long t624 = __retval617;
  return t624;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v625, struct std__allocator_int_* v626) {
bb627:
  struct std__allocator_int_* this628;
  struct std__allocator_int_* __a629;
  this628 = v625;
  __a629 = v626;
  struct std__allocator_int_* t630 = this628;
  struct std____new_allocator_int_* base631 = (struct std____new_allocator_int_*)((char *)t630 + 0);
  struct std__allocator_int_* t632 = __a629;
  struct std____new_allocator_int_* base633 = (struct std____new_allocator_int_*)((char *)t632 + 0);
  std____new_allocator_int_____new_allocator(base631, base633);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v634, struct std__allocator_int_* v635) {
bb636:
  unsigned long __n637;
  struct std__allocator_int_* __a638;
  unsigned long __retval639;
  __n637 = v634;
  __a638 = v635;
    struct std__allocator_int_ ref_tmp0640;
    _Bool tmp_exprcleanup641;
    unsigned long t642 = __n637;
    struct std__allocator_int_* t643 = __a638;
    std__allocator_int___allocator(&ref_tmp0640, t643);
      unsigned long r644 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp0640);
      _Bool c645 = ((t642 > r644)) ? 1 : 0;
      tmp_exprcleanup641 = c645;
    {
      std__allocator_int____allocator(&ref_tmp0640);
    }
    _Bool t646 = tmp_exprcleanup641;
    if (t646) {
      char* cast647 = (char*)&(_str_5);
      std____throw_length_error(cast647);
    }
  unsigned long t648 = __n637;
  __retval639 = t648;
  unsigned long t649 = __retval639;
  return t649;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v650) {
bb651:
  struct std___Vector_base_int__std__allocator_int__* this652;
  struct std__allocator_int_* __retval653;
  this652 = v650;
  struct std___Vector_base_int__std__allocator_int__* t654 = this652;
  struct std__allocator_int_* base655 = (struct std__allocator_int_*)((char *)&(t654->_M_impl) + 0);
  __retval653 = base655;
  struct std__allocator_int_* t656 = __retval653;
  return t656;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb657:
  _Bool __retval658;
    _Bool c659 = 0;
    __retval658 = c659;
    _Bool t660 = __retval658;
    return t660;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v661, int** v662) {
bb663:
  struct std___UninitDestroyGuard_int____void_* this664;
  int** __first665;
  this664 = v661;
  __first665 = v662;
  struct std___UninitDestroyGuard_int____void_* t666 = this664;
  int** t667 = __first665;
  int* t668 = *t667;
  t666->_M_first = t668;
  int** t669 = __first665;
  t666->_M_cur = t669;
  return;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v670, int* v671) {
bb672:
  int* __location673;
  int* __args674;
  int* __retval675;
  void* __loc676;
  __location673 = v670;
  __args674 = v671;
  int* t677 = __location673;
  void* cast678 = (void*)t677;
  __loc676 = cast678;
    void* t679 = __loc676;
    int* cast680 = (int*)t679;
    int* t681 = __args674;
    int t682 = *t681;
    *cast680 = t682;
    __retval675 = cast680;
    int* t683 = __retval675;
    return t683;
  abort();
}

// function: _ZSt10_ConstructIiJRiEEvPT_DpOT0_
void void_std___Construct_int__int__(int* v684, int* v685) {
bb686:
  int* __p687;
  int* __args688;
  __p687 = v684;
  __args688 = v685;
    _Bool r689 = std____is_constant_evaluated();
    if (r689) {
      int* t690 = __p687;
      int* t691 = __args688;
      int* r692 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t690, t691);
      return;
    }
  int* t693 = __p687;
  void* cast694 = (void*)t693;
  int* cast695 = (int*)cast694;
  int* t696 = __args688;
  int t697 = *t696;
  *cast695 = t697;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v698) {
bb699:
  struct std___UninitDestroyGuard_int____void_* this700;
  this700 = v698;
  struct std___UninitDestroyGuard_int____void_* t701 = this700;
  int** c702 = ((void*)0);
  t701->_M_cur = c702;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v703) {
bb704:
  struct std___UninitDestroyGuard_int____void_* this705;
  this705 = v703;
  struct std___UninitDestroyGuard_int____void_* t706 = this705;
    int** t707 = t706->_M_cur;
    int** c708 = ((void*)0);
    _Bool c709 = ((t707 != c708)) ? 1 : 0;
    if (c709) {
      int* t710 = t706->_M_first;
      int** t711 = t706->_M_cur;
      int* t712 = *t711;
      void_std___Destroy_int__(t710, t712);
    }
  return;
}

// function: _ZSt16__do_uninit_copyIPiS0_S0_ET1_T_T0_S1_
int* int__std____do_uninit_copy_int___int___int__(int* v713, int* v714, int* v715) {
bb716:
  int* __first717;
  int* __last718;
  int* __result719;
  int* __retval720;
  struct std___UninitDestroyGuard_int____void_ __guard721;
  __first717 = v713;
  __last718 = v714;
  __result719 = v715;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard721, &__result719);
      while (1) {
        int* t723 = __first717;
        int* t724 = __last718;
        _Bool c725 = ((t723 != t724)) ? 1 : 0;
        if (!c725) break;
        int* t726 = __result719;
        int* t727 = __first717;
        void_std___Construct_int__int__(t726, t727);
      for_step722: ;
        int* t728 = __first717;
        int c729 = 1;
        int* ptr730 = &(t728)[c729];
        __first717 = ptr730;
        int* t731 = __result719;
        int c732 = 1;
        int* ptr733 = &(t731)[c732];
        __result719 = ptr733;
      }
    std___UninitDestroyGuard_int___void___release(&__guard721);
    int* t734 = __result719;
    __retval720 = t734;
    int* t735 = __retval720;
    int* ret_val736 = t735;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard721);
    }
    return ret_val736;
  abort();
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v737) {
bb738:
  int* __it739;
  int* __retval740;
  __it739 = v737;
  int* t741 = __it739;
  __retval740 = t741;
  int* t742 = __retval740;
  return t742;
}

// function: _ZSt18uninitialized_copyIPiS0_ET0_T_S2_S1_
int* int__std__uninitialized_copy_int___int__(int* v743, int* v744, int* v745) {
bb746:
  int* __first747;
  int* __last748;
  int* __result749;
  int* __retval750;
  __first747 = v743;
  __last748 = v744;
  __result749 = v745;
      long __n751;
      int* t752 = __last748;
      int* t753 = __first747;
      long diff754 = t752 - t753;
      __n751 = diff754;
        long t755 = __n751;
        long c756 = 0;
        _Bool c757 = ((t755 > c756)) ? 1 : 0;
        if (c757) {
          int* t758 = __result749;
          int* r759 = int__std____niter_base_int__(t758);
          void* cast760 = (void*)r759;
          int* t761 = __first747;
          int* r762 = int__std____niter_base_int__(t761);
          void* cast763 = (void*)r762;
          long t764 = __n751;
          unsigned long cast765 = (unsigned long)t764;
          unsigned long c766 = 4;
          unsigned long b767 = cast765 * c766;
          void* r768 = memcpy(cast760, cast763, b767);
          long t769 = __n751;
          int* t770 = __result749;
          int* ptr771 = &(t770)[t769];
          __result749 = ptr771;
        }
      int* t772 = __result749;
      __retval750 = t772;
      int* t773 = __retval750;
      return t773;
  abort();
}

// function: _ZSt22__uninitialized_copy_aIPiS0_S0_iET1_T_T0_S1_RSaIT2_E
int* int__std____uninitialized_copy_a_int___int___int___int_(int* v774, int* v775, int* v776, struct std__allocator_int_* v777) {
bb778:
  int* __first779;
  int* __last780;
  int* __result781;
  struct std__allocator_int_* unnamed782;
  int* __retval783;
  __first779 = v774;
  __last780 = v775;
  __result781 = v776;
  unnamed782 = v777;
    _Bool r784 = std__is_constant_evaluated();
    if (r784) {
      int* t785 = __first779;
      int* t786 = __last780;
      int* t787 = __result781;
      int* r788 = int__std____do_uninit_copy_int___int___int__(t785, t786, t787);
      __retval783 = r788;
      int* t789 = __retval783;
      return t789;
    }
    int* t790 = __first779;
    int* t791 = __last780;
    int* t792 = __result781;
    int* r793 = int__std__uninitialized_copy_int___int__(t790, t791, t792);
    __retval783 = r793;
    int* t794 = __retval783;
    return t794;
  abort();
}

// function: _ZNSt6vectorIiSaIiEE21_M_range_initialize_nIPiS3_EEvT_T0_m
void void_std__vector_int__std__allocator_int______M_range_initialize_n_int___int__(struct std__vector_int__std__allocator_int__* v795, int* v796, int* v797, unsigned long v798) {
bb799:
  struct std__vector_int__std__allocator_int__* this800;
  int* __first801;
  int* __last802;
  unsigned long __n803;
  int* __start804;
  this800 = v795;
  __first801 = v796;
  __last802 = v797;
  __n803 = v798;
  struct std__vector_int__std__allocator_int__* t805 = this800;
  struct std___Vector_base_int__std__allocator_int__* base806 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t805 + 0);
  unsigned long t807 = __n803;
  struct std___Vector_base_int__std__allocator_int__* base808 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t805 + 0);
  struct std__allocator_int_* r809 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base808);
  unsigned long r810 = std__vector_int__std__allocator_int______S_check_init_len(t807, r809);
  int* r811 = std___Vector_base_int__std__allocator_int______M_allocate(base806, r810);
  __start804 = r811;
  int* t812 = __start804;
  struct std___Vector_base_int__std__allocator_int__* base813 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t805 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base814 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base813->_M_impl) + 0);
  base814->_M_finish = t812;
  struct std___Vector_base_int__std__allocator_int__* base815 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t805 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base816 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base815->_M_impl) + 0);
  base816->_M_start = t812;
  int* t817 = __start804;
  unsigned long t818 = __n803;
  int* ptr819 = &(t817)[t818];
  struct std___Vector_base_int__std__allocator_int__* base820 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t805 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base821 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base820->_M_impl) + 0);
  base821->_M_end_of_storage = ptr819;
  int* t822 = __first801;
  int* t823 = __last802;
  int* t824 = __start804;
  struct std___Vector_base_int__std__allocator_int__* base825 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t805 + 0);
  struct std__allocator_int_* r826 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base825);
  int* r827 = int__std____uninitialized_copy_a_int___int___int___int_(t822, t823, t824, r826);
  struct std___Vector_base_int__std__allocator_int__* base828 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t805 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base829 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base828->_M_impl) + 0);
  base829->_M_finish = r827;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v830, int* v831, unsigned long v832) {
bb833:
  struct std____new_allocator_int_* this834;
  int* __p835;
  unsigned long __n836;
  this834 = v830;
  __p835 = v831;
  __n836 = v832;
  struct std____new_allocator_int_* t837 = this834;
    unsigned long c838 = 4;
    unsigned long c839 = 16;
    _Bool c840 = ((c838 > c839)) ? 1 : 0;
    if (c840) {
      int* t841 = __p835;
      void* cast842 = (void*)t841;
      unsigned long t843 = __n836;
      unsigned long c844 = 4;
      unsigned long b845 = t843 * c844;
      unsigned long c846 = 4;
      operator_delete_3(cast842, b845, c846);
      return;
    }
  int* t847 = __p835;
  void* cast848 = (void*)t847;
  unsigned long t849 = __n836;
  unsigned long c850 = 4;
  unsigned long b851 = t849 * c850;
  operator_delete_2(cast848, b851);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v852, int* v853, unsigned long v854) {
bb855:
  struct std__allocator_int_* this856;
  int* __p857;
  unsigned long __n858;
  this856 = v852;
  __p857 = v853;
  __n858 = v854;
  struct std__allocator_int_* t859 = this856;
    _Bool r860 = std____is_constant_evaluated();
    if (r860) {
      int* t861 = __p857;
      void* cast862 = (void*)t861;
      operator_delete(cast862);
      return;
    }
  struct std____new_allocator_int_* base863 = (struct std____new_allocator_int_*)((char *)t859 + 0);
  int* t864 = __p857;
  unsigned long t865 = __n858;
  std____new_allocator_int___deallocate(base863, t864, t865);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v866, int* v867, unsigned long v868) {
bb869:
  struct std__allocator_int_* __a870;
  int* __p871;
  unsigned long __n872;
  __a870 = v866;
  __p871 = v867;
  __n872 = v868;
  struct std__allocator_int_* t873 = __a870;
  int* t874 = __p871;
  unsigned long t875 = __n872;
  std__allocator_int___deallocate(t873, t874, t875);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v876, int* v877, unsigned long v878) {
bb879:
  struct std___Vector_base_int__std__allocator_int__* this880;
  int* __p881;
  unsigned long __n882;
  this880 = v876;
  __p881 = v877;
  __n882 = v878;
  struct std___Vector_base_int__std__allocator_int__* t883 = this880;
    int* t884 = __p881;
    _Bool cast885 = (_Bool)t884;
    if (cast885) {
      struct std__allocator_int_* base886 = (struct std__allocator_int_*)((char *)&(t883->_M_impl) + 0);
      int* t887 = __p881;
      unsigned long t888 = __n882;
      std__allocator_traits_std__allocator_int_____deallocate(base886, t887, t888);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v889) {
bb890:
  struct std___Vector_base_int__std__allocator_int__* this891;
  this891 = v889;
  struct std___Vector_base_int__std__allocator_int__* t892 = this891;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base893 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t892->_M_impl) + 0);
    int* t894 = base893->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base895 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t892->_M_impl) + 0);
    int* t896 = base895->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base897 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t892->_M_impl) + 0);
    int* t898 = base897->_M_start;
    long diff899 = t896 - t898;
    unsigned long cast900 = (unsigned long)diff899;
    std___Vector_base_int__std__allocator_int______M_deallocate(t892, t894, cast900);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t892->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v901, struct std____new_allocator_int_* v902) {
bb903:
  struct std____new_allocator_int_* this904;
  struct std____new_allocator_int_* unnamed905;
  this904 = v901;
  unnamed905 = v902;
  struct std____new_allocator_int_* t906 = this904;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v907) {
bb908:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this909;
  this909 = v907;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t910 = this909;
  int* c911 = ((void*)0);
  t910->_M_start = c911;
  int* c912 = ((void*)0);
  t910->_M_finish = c912;
  int* c913 = ((void*)0);
  t910->_M_end_of_storage = c913;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v914) {
bb915:
  int* __location916;
  __location916 = v914;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v917, int* v918) {
bb919:
  int* __first920;
  int* __last921;
  __first920 = v917;
  __last921 = v918;
      _Bool r922 = std____is_constant_evaluated();
      if (r922) {
          while (1) {
            int* t924 = __first920;
            int* t925 = __last921;
            _Bool c926 = ((t924 != t925)) ? 1 : 0;
            if (!c926) break;
            int* t927 = __first920;
            void_std__destroy_at_int_(t927);
          for_step923: ;
            int* t928 = __first920;
            int c929 = 1;
            int* ptr930 = &(t928)[c929];
            __first920 = ptr930;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v931, int* v932, struct std__allocator_int_* v933) {
bb934:
  int* __first935;
  int* __last936;
  struct std__allocator_int_* unnamed937;
  __first935 = v931;
  __last936 = v932;
  unnamed937 = v933;
  int* t938 = __first935;
  int* t939 = __last936;
  void_std___Destroy_int__(t938, t939);
  return;
}

