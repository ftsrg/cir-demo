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
// Struct definitions (auto-parsed)
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ { int* _M_current; };
struct __gnu_cxx____ops___Iter_equals_val_const_int_ { int* _M_value; };
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
struct std__ctype_char_ { struct std__locale__facet __field0; unsigned char __field1[4]; struct __locale_struct* __field2; _Bool __field3; unsigned char __field4[7]; int* __field5; int* __field6; unsigned short* __field7; char __field8; char __field9[256]; char __field10[256]; char __field11; unsigned char __field12[6]; } __attribute__((packed));
struct std__ios_base { void* __field0; long __field1; long __field2; int __field3; int __field4; int _M_streambuf_state; struct std__ios_base___Callback_list* __field6; struct std__ios_base___Words __field7; struct std__ios_base___Words __field8[8]; int __field9; struct std__ios_base___Words* __field10; struct std__locale __field11; };
struct std___Vector_base_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int_____Vector_impl _M_impl; };
struct std__basic_ios_char__std__char_traits_char__ { struct std__ios_base __field0; struct std__basic_ostream_char__std__char_traits_char__* __field1; char __field2; _Bool __field3; struct std__basic_streambuf_char__std__char_traits_char__* __field4; struct std__ctype_char_* __field5; struct std__num_put_char__std__ostreambuf_iterator_char__std__char_traits_char___* __field6; struct std__num_get_char__std__istreambuf_iterator_char__std__char_traits_char___* __field7; };
struct std__basic_ostream_char__std__char_traits_char__ { void* __field0; struct std__basic_ios_char__std__char_traits_char__ __field1; };
struct std__vector_int__std__allocator_int__ { struct std___Vector_base_int__std__allocator_int__ __field0; };

int __const_main_myints[8] = {10, 20, 30, 30, 20, 10, 10, 20};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[12] = "10 appears ";
char _str_1[9] = " times.\n";
char _str_2[12] = "20 appears ";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_3[49] = "cannot create std::vector larger than max_size()";
_Bool bool___gnu_cxx____ops___Iter_equals_val_int_const___operator___int__(struct __gnu_cxx____ops___Iter_equals_val_const_int_* p0, int* p1);
long std__iterator_traits_int____difference_type_std____count_if_int_____gnu_cxx____ops___Iter_equals_val_int_const___(int* p0, int* p1, struct __gnu_cxx____ops___Iter_equals_val_const_int_ p2);
void __gnu_cxx____ops___Iter_equals_val_int_const____Iter_equals_val(struct __gnu_cxx____ops___Iter_equals_val_const_int_* p0, int* p1);
struct __gnu_cxx____ops___Iter_equals_val_const_int_ __gnu_cxx____ops___Iter_equals_val_int_const____gnu_cxx____ops____iter_equals_val_int_const_(int* p0);
long std__iterator_traits_int____difference_type_std__count_int___int_(int* p0, int* p1, int* p2);
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
void std__allocator_int___allocator_2(struct std__allocator_int_* p0);
void std__vector_int__std__allocator_int_____vector_int___void_(struct std__vector_int__std__allocator_int__* p0, int* p1, int* p2, struct std__allocator_int_* p3);
void std__allocator_int____allocator(struct std__allocator_int_* p0);
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p1);
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
_Bool bool___gnu_cxx____ops___Iter_equals_val_int_const___operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____ops___Iter_equals_val_const_int_* p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0);
long std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________difference_type_std____count_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_equals_val_int_const___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, struct __gnu_cxx____ops___Iter_equals_val_const_int_ p2);
long std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________difference_type_std__count___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p0, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ p1, int* p2);
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* p0, int** p1);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* p0);
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* p0);
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

// function: _ZN9__gnu_cxx5__ops16_Iter_equals_valIKiEclIPiEEbT_
_Bool bool___gnu_cxx____ops___Iter_equals_val_int_const___operator___int__(struct __gnu_cxx____ops___Iter_equals_val_const_int_* v0, int* v1) {
bb2:
  struct __gnu_cxx____ops___Iter_equals_val_const_int_* this3;
  int* __it4;
  _Bool __retval5;
  this3 = v0;
  __it4 = v1;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_* t6 = this3;
  int* t7 = __it4;
  int t8 = *t7;
  int* t9 = t6->_M_value;
  int t10 = *t9;
  _Bool c11 = ((t8 == t10)) ? 1 : 0;
  __retval5 = c11;
  _Bool t12 = __retval5;
  return t12;
}

// function: _ZSt10__count_ifIPiN9__gnu_cxx5__ops16_Iter_equals_valIKiEEENSt15iterator_traitsIT_E15difference_typeES7_S7_T0_
long std__iterator_traits_int____difference_type_std____count_if_int_____gnu_cxx____ops___Iter_equals_val_int_const___(int* v13, int* v14, struct __gnu_cxx____ops___Iter_equals_val_const_int_ v15) {
bb16:
  int* __first17;
  int* __last18;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ __pred19;
  long __retval20;
  long __n21;
  __first17 = v13;
  __last18 = v14;
  __pred19 = v15;
  long c22 = 0;
  __n21 = c22;
    while (1) {
      int* t24 = __first17;
      int* t25 = __last18;
      _Bool c26 = ((t24 != t25)) ? 1 : 0;
      if (!c26) break;
        int* t27 = __first17;
        _Bool r28 = bool___gnu_cxx____ops___Iter_equals_val_int_const___operator___int__(&__pred19, t27);
        if (r28) {
          long t29 = __n21;
          long u30 = t29 + 1;
          __n21 = u30;
        }
    for_step23: ;
      int* t31 = __first17;
      int c32 = 1;
      int* ptr33 = &(t31)[c32];
      __first17 = ptr33;
    }
  long t34 = __n21;
  __retval20 = t34;
  long t35 = __retval20;
  return t35;
}

// function: _ZN9__gnu_cxx5__ops16_Iter_equals_valIKiEC2ERS2_
void __gnu_cxx____ops___Iter_equals_val_int_const____Iter_equals_val(struct __gnu_cxx____ops___Iter_equals_val_const_int_* v36, int* v37) {
bb38:
  struct __gnu_cxx____ops___Iter_equals_val_const_int_* this39;
  int* __value40;
  this39 = v36;
  __value40 = v37;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_* t41 = this39;
  int* t42 = __value40;
  t41->_M_value = t42;
  return;
}

// function: _ZN9__gnu_cxx5__ops17__iter_equals_valIKiEENS0_16_Iter_equals_valIT_EERS4_
struct __gnu_cxx____ops___Iter_equals_val_const_int_ __gnu_cxx____ops___Iter_equals_val_int_const____gnu_cxx____ops____iter_equals_val_int_const_(int* v43) {
bb44:
  int* __val45;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ __retval46;
  __val45 = v43;
  int* t47 = __val45;
  __gnu_cxx____ops___Iter_equals_val_int_const____Iter_equals_val(&__retval46, t47);
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ t48 = __retval46;
  return t48;
}

// function: _ZSt5countIPiiENSt15iterator_traitsIT_E15difference_typeES2_S2_RKT0_
long std__iterator_traits_int____difference_type_std__count_int___int_(int* v49, int* v50, int* v51) {
bb52:
  int* __first53;
  int* __last54;
  int* __value55;
  long __retval56;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ agg_tmp057;
  __first53 = v49;
  __last54 = v50;
  __value55 = v51;
  int* t58 = __first53;
  int* t59 = __last54;
  int* t60 = __value55;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ r61 = __gnu_cxx____ops___Iter_equals_val_int_const____gnu_cxx____ops____iter_equals_val_int_const_(t60);
  agg_tmp057 = r61;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ t62 = agg_tmp057;
  long r63 = std__iterator_traits_int____difference_type_std____count_if_int_____gnu_cxx____ops___Iter_equals_val_int_const___(t58, t59, t62);
  __retval56 = r63;
  long t64 = __retval56;
  return t64;
}

// function: _ZStorSt12_Ios_IostateS_
int std__operator_(int v65, int v66) {
bb67:
  int __a68;
  int __b69;
  int __retval70;
  __a68 = v65;
  __b69 = v66;
  int t71 = __a68;
  int t72 = __b69;
  int b73 = t71 | t72;
  __retval70 = b73;
  int t74 = __retval70;
  return t74;
}

// function: _ZNKSt9basic_iosIcSt11char_traitsIcEE7rdstateEv
int std__basic_ios_char__std__char_traits_char_____rdstate___const(struct std__basic_ios_char__std__char_traits_char__* v75) {
bb76:
  struct std__basic_ios_char__std__char_traits_char__* this77;
  int __retval78;
  this77 = v75;
  struct std__basic_ios_char__std__char_traits_char__* t79 = this77;
  struct std__ios_base* base80 = (struct std__ios_base*)((char *)t79 + 0);
  int t81 = base80->_M_streambuf_state;
  __retval78 = t81;
  int t82 = __retval78;
  return t82;
}

// function: _ZNSt9basic_iosIcSt11char_traitsIcEE8setstateESt12_Ios_Iostate
void std__basic_ios_char__std__char_traits_char_____setstate(struct std__basic_ios_char__std__char_traits_char__* v83, int v84) {
bb85:
  struct std__basic_ios_char__std__char_traits_char__* this86;
  int __state87;
  this86 = v83;
  __state87 = v84;
  struct std__basic_ios_char__std__char_traits_char__* t88 = this86;
  int r89 = std__basic_ios_char__std__char_traits_char_____rdstate___const(t88);
  int t90 = __state87;
  int r91 = std__operator_(r89, t90);
  std__basic_ios_char__std__char_traits_char_____clear(t88, r91);
  return;
}

// function: _ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_Bool __gnu_cxx__char_traits_char___eq(char* v92, char* v93) {
bb94:
  char* __c195;
  char* __c296;
  _Bool __retval97;
  __c195 = v92;
  __c296 = v93;
  char* t98 = __c195;
  char t99 = *t98;
  int cast100 = (int)t99;
  char* t101 = __c296;
  char t102 = *t101;
  int cast103 = (int)t102;
  _Bool c104 = ((cast100 == cast103)) ? 1 : 0;
  __retval97 = c104;
  _Bool t105 = __retval97;
  return t105;
}

// function: _ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
unsigned long __gnu_cxx__char_traits_char___length(char* v106) {
bb107:
  char* __p108;
  unsigned long __retval109;
  unsigned long __i110;
  __p108 = v106;
  unsigned long c111 = 0;
  __i110 = c111;
    char ref_tmp0112;
    while (1) {
      unsigned long t113 = __i110;
      char* t114 = __p108;
      char* ptr115 = &(t114)[t113];
      char c116 = 0;
      ref_tmp0112 = c116;
      _Bool r117 = __gnu_cxx__char_traits_char___eq(ptr115, &ref_tmp0112);
      _Bool u118 = !r117;
      if (!u118) break;
      unsigned long t119 = __i110;
      unsigned long u120 = t119 + 1;
      __i110 = u120;
    }
  unsigned long t121 = __i110;
  __retval109 = t121;
  unsigned long t122 = __retval109;
  return t122;
}

// function: _ZNSt11char_traitsIcE6lengthEPKc
unsigned long std__char_traits_char___length(char* v123) {
bb124:
  char* __s125;
  unsigned long __retval126;
  __s125 = v123;
    _Bool r127 = std____is_constant_evaluated();
    if (r127) {
      char* t128 = __s125;
      unsigned long r129 = __gnu_cxx__char_traits_char___length(t128);
      __retval126 = r129;
      unsigned long t130 = __retval126;
      return t130;
    }
  char* t131 = __s125;
  unsigned long r132 = strlen(t131);
  __retval126 = r132;
  unsigned long t133 = __retval126;
  return t133;
}

// function: _ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
struct std__basic_ostream_char__std__char_traits_char__* std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(struct std__basic_ostream_char__std__char_traits_char__* v134, char* v135) {
bb136:
  struct std__basic_ostream_char__std__char_traits_char__* __out137;
  char* __s138;
  struct std__basic_ostream_char__std__char_traits_char__* __retval139;
  __out137 = v134;
  __s138 = v135;
    char* t140 = __s138;
    _Bool cast141 = (_Bool)t140;
    _Bool u142 = !cast141;
    if (u142) {
      struct std__basic_ostream_char__std__char_traits_char__* t143 = __out137;
      void** v144 = (void**)t143;
      void* v145 = *((void**)v144);
      unsigned char* cast146 = (unsigned char*)v145;
      long c147 = -24;
      unsigned char* ptr148 = &(cast146)[c147];
      long* cast149 = (long*)ptr148;
      long t150 = *cast149;
      unsigned char* cast151 = (unsigned char*)t143;
      unsigned char* ptr152 = &(cast151)[t150];
      struct std__basic_ostream_char__std__char_traits_char__* cast153 = (struct std__basic_ostream_char__std__char_traits_char__*)ptr152;
      struct std__basic_ios_char__std__char_traits_char__* cast154 = (struct std__basic_ios_char__std__char_traits_char__*)cast153;
      int t155 = _ZNSt8ios_base6badbitE_const;
      std__basic_ios_char__std__char_traits_char_____setstate(cast154, t155);
    } else {
      struct std__basic_ostream_char__std__char_traits_char__* t156 = __out137;
      char* t157 = __s138;
      char* t158 = __s138;
      unsigned long r159 = std__char_traits_char___length(t158);
      long cast160 = (long)r159;
      struct std__basic_ostream_char__std__char_traits_char__* r161 = std__basic_ostream_char__std__char_traits_char_____std____ostream_insert_char__std__char_traits_char___(t156, t157, cast160);
    }
  struct std__basic_ostream_char__std__char_traits_char__* t162 = __out137;
  __retval139 = t162;
  struct std__basic_ostream_char__std__char_traits_char__* t163 = __retval139;
  return t163;
}

// function: _ZNSaIiEC2Ev
void std__allocator_int___allocator_2(struct std__allocator_int_* v164) {
bb165:
  struct std__allocator_int_* this166;
  this166 = v164;
  struct std__allocator_int_* t167 = this166;
  struct std____new_allocator_int_* base168 = (struct std____new_allocator_int_*)((char *)t167 + 0);
  std____new_allocator_int_____new_allocator_2(base168);
  return;
}

// function: _ZNSt6vectorIiSaIiEEC2IPivEET_S4_RKS0_
void std__vector_int__std__allocator_int_____vector_int___void_(struct std__vector_int__std__allocator_int__* v169, int* v170, int* v171, struct std__allocator_int_* v172) {
bb173:
  struct std__vector_int__std__allocator_int__* this174;
  int* __first175;
  int* __last176;
  struct std__allocator_int_* __a177;
  this174 = v169;
  __first175 = v170;
  __last176 = v171;
  __a177 = v172;
  struct std__vector_int__std__allocator_int__* t178 = this174;
  struct std___Vector_base_int__std__allocator_int__* base179 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t178 + 0);
  struct std__allocator_int_* t180 = __a177;
  std___Vector_base_int__std__allocator_int______Vector_base(base179, t180);
      unsigned long __n181;
      int* t182 = __last176;
      long r183 = _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_(&_ZNSt6ranges8distanceE, &__first175, t182);
      unsigned long cast184 = (unsigned long)r183;
      __n181 = cast184;
      int* t185 = __first175;
      int* t186 = __last176;
      unsigned long t187 = __n181;
      void_std__vector_int__std__allocator_int______M_range_initialize_n_int___int__(t178, t185, t186, t187);
      {
        struct std___Vector_base_int__std__allocator_int__* base188 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t178 + 0);
        std___Vector_base_int__std__allocator_int_______Vector_base(base188);
      }
      return;
  return;
}

// function: _ZNSaIiED2Ev
void std__allocator_int____allocator(struct std__allocator_int_* v189) {
bb190:
  struct std__allocator_int_* this191;
  this191 = v189;
  struct std__allocator_int_* t192 = this191;
  return;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
int** __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v193) {
bb194:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this195;
  int** __retval196;
  this195 = v193;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t197 = this195;
  __retval196 = &t197->_M_current;
  int** t198 = __retval196;
  return t198;
}

// function: _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE
_Bool _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v199, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v200) {
bb201:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __lhs202;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __rhs203;
  _Bool __retval204;
  __lhs202 = v199;
  __rhs203 = v200;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t205 = __lhs202;
  int** r206 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t205);
  int* t207 = *r206;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t208 = __rhs203;
  int** r209 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______base___const(t208);
  int* t210 = *r209;
  _Bool c211 = ((t207 == t210)) ? 1 : 0;
  __retval204 = c211;
  _Bool t212 = __retval204;
  return t212;
}

// function: _ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv
int* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v213) {
bb214:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this215;
  int* __retval216;
  this215 = v213;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t217 = this215;
  int* t218 = t217->_M_current;
  __retval216 = t218;
  int* t219 = __retval216;
  return t219;
}

// function: _ZN9__gnu_cxx5__ops16_Iter_equals_valIKiEclINS_17__normal_iteratorIPiSt6vectorIiSaIiEEEEEEbT_
_Bool bool___gnu_cxx____ops___Iter_equals_val_int_const___operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(struct __gnu_cxx____ops___Iter_equals_val_const_int_* v220, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v221) {
bb222:
  struct __gnu_cxx____ops___Iter_equals_val_const_int_* this223;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __it224;
  _Bool __retval225;
  this223 = v220;
  __it224 = v221;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_* t226 = this223;
  int* r227 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator____const(&__it224);
  int t228 = *r227;
  int* t229 = t226->_M_value;
  int t230 = *t229;
  _Bool c231 = ((t228 == t230)) ? 1 : 0;
  __retval225 = c231;
  _Bool t232 = __retval225;
  return t232;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v233) {
bb234:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this235;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* __retval236;
  this235 = v233;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t237 = this235;
  int* t238 = t237->_M_current;
  int c239 = 1;
  int* ptr240 = &(t238)[c239];
  t237->_M_current = ptr240;
  __retval236 = t237;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t241 = __retval236;
  return t241;
}

// function: _ZSt10__count_ifIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEENS0_5__ops16_Iter_equals_valIKiEEENSt15iterator_traitsIT_E15difference_typeESC_SC_T0_
long std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________difference_type_std____count_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_equals_val_int_const___(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v242, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v243, struct __gnu_cxx____ops___Iter_equals_val_const_int_ v244) {
bb245:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first246;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last247;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ __pred248;
  long __retval249;
  long __n250;
  __first246 = v242;
  __last247 = v243;
  __pred248 = v244;
  long c251 = 0;
  __n250 = c251;
    while (1) {
      _Bool r253 = _ZN9__gnu_cxxeqIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_QrqXeqcldtfp_4baseEcldtfp0_4baseERSt14convertible_toIbEE(&__first246, &__last247);
      _Bool u254 = !r253;
      if (!u254) break;
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0255;
        agg_tmp0255 = __first246; // copy
        struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t256 = agg_tmp0255;
        _Bool r257 = bool___gnu_cxx____ops___Iter_equals_val_int_const___operator_____gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______(&__pred248, t256);
        if (r257) {
          long t258 = __n250;
          long u259 = t258 + 1;
          __n250 = u259;
        }
    for_step252: ;
      struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* r260 = __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______operator__(&__first246);
    }
  long t261 = __n250;
  __retval249 = t261;
  long t262 = __retval249;
  return t262;
}

// function: _ZSt5countIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiENSt15iterator_traitsIT_E15difference_typeES8_S8_RKT0_
long std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________difference_type_std__count___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v263, struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ v264, int* v265) {
bb266:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __first267;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __last268;
  int* __value269;
  long __retval270;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0271;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1272;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ agg_tmp2273;
  __first267 = v263;
  __last268 = v264;
  __value269 = v265;
  agg_tmp0271 = __first267; // copy
  agg_tmp1272 = __last268; // copy
  int* t274 = __value269;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ r275 = __gnu_cxx____ops___Iter_equals_val_int_const____gnu_cxx____ops____iter_equals_val_int_const_(t274);
  agg_tmp2273 = r275;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t276 = agg_tmp0271;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t277 = agg_tmp1272;
  struct __gnu_cxx____ops___Iter_equals_val_const_int_ t278 = agg_tmp2273;
  long r279 = std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________difference_type_std____count_if___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________gnu_cxx____ops___Iter_equals_val_int_const___(t276, t277, t278);
  __retval270 = r279;
  long t280 = __retval270;
  return t280;
}

// function: _ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
void __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* v281, int** v282) {
bb283:
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* this284;
  int** __i285;
  this284 = v281;
  __i285 = v282;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___* t286 = this284;
  int** t287 = __i285;
  int* t288 = *t287;
  t286->_M_current = t288;
  return;
}

// function: _ZNSt6vectorIiSaIiEE5beginEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____begin(struct std__vector_int__std__allocator_int__* v289) {
bb290:
  struct std__vector_int__std__allocator_int__* this291;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval292;
  this291 = v289;
  struct std__vector_int__std__allocator_int__* t293 = this291;
  struct std___Vector_base_int__std__allocator_int__* base294 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t293 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base295 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base294->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval292, &base295->_M_start);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t296 = __retval292;
  return t296;
}

// function: _ZNSt6vectorIiSaIiEE3endEv
struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ std__vector_int__std__allocator_int_____end(struct std__vector_int__std__allocator_int__* v297) {
bb298:
  struct std__vector_int__std__allocator_int__* this299;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ __retval300;
  this299 = v297;
  struct std__vector_int__std__allocator_int__* t301 = this299;
  struct std___Vector_base_int__std__allocator_int__* base302 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t301 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base303 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base302->_M_impl) + 0);
  __gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________normal_iterator(&__retval300, &base303->_M_finish);
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t304 = __retval300;
  return t304;
}

// function: _ZNSt6vectorIiSaIiEED2Ev
void std__vector_int__std__allocator_int______vector(struct std__vector_int__std__allocator_int__* v305) {
bb306:
  struct std__vector_int__std__allocator_int__* this307;
  this307 = v305;
  struct std__vector_int__std__allocator_int__* t308 = this307;
    struct std___Vector_base_int__std__allocator_int__* base309 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t308 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base310 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base309->_M_impl) + 0);
    int* t311 = base310->_M_start;
    struct std___Vector_base_int__std__allocator_int__* base312 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t308 + 0);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base313 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base312->_M_impl) + 0);
    int* t314 = base313->_M_finish;
    struct std___Vector_base_int__std__allocator_int__* base315 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t308 + 0);
    struct std__allocator_int_* r316 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base315);
    void_std___Destroy_int___int_(t311, t314, r316);
  {
    struct std___Vector_base_int__std__allocator_int__* base317 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t308 + 0);
    std___Vector_base_int__std__allocator_int_______Vector_base(base317);
  }
  return;
}

// function: main
int main() {
bb318:
  int __retval319;
  int mycount320;
  int myints321[8];
  int ref_tmp0322;
  struct std__vector_int__std__allocator_int__ myvector323;
  struct std__allocator_int_ ref_tmp1324;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0325;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1326;
  int ref_tmp2327;
  int c328 = 0;
  __retval319 = c328;
  // array copy
  __builtin_memcpy(myints321, __const_main_myints, (unsigned long)8 * sizeof(__const_main_myints[0]));
  int* cast329 = (int*)&(myints321);
  int* cast330 = (int*)&(myints321);
  int c331 = 8;
  int* ptr332 = &(cast330)[c331];
  int c333 = 10;
  ref_tmp0322 = c333;
  long r334 = std__iterator_traits_int____difference_type_std__count_int___int_(cast329, ptr332, &ref_tmp0322);
  int cast335 = (int)r334;
  mycount320 = cast335;
  char* cast336 = (char*)&(_str);
  struct std__basic_ostream_char__std__char_traits_char__* r337 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast336);
  int t338 = mycount320;
  struct std__basic_ostream_char__std__char_traits_char__* r339 = std__ostream__operator__(r337, t338);
  char* cast340 = (char*)&(_str_1);
  struct std__basic_ostream_char__std__char_traits_char__* r341 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r339, cast340);
  int* cast342 = (int*)&(myints321);
  int* cast343 = (int*)&(myints321);
  int c344 = 8;
  int* ptr345 = &(cast343)[c344];
  std__allocator_int___allocator_2(&ref_tmp1324);
    std__vector_int__std__allocator_int_____vector_int___void_(&myvector323, cast342, ptr345, &ref_tmp1324);
  {
    std__allocator_int____allocator(&ref_tmp1324);
  }
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r346 = std__vector_int__std__allocator_int_____begin(&myvector323);
    agg_tmp0325 = r346;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ r347 = std__vector_int__std__allocator_int_____end(&myvector323);
    agg_tmp1326 = r347;
    int c348 = 20;
    ref_tmp2327 = c348;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t349 = agg_tmp0325;
    struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ t350 = agg_tmp1326;
    long r351 = std__iterator_traits___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_________difference_type_std__count___gnu_cxx____normal_iterator_int___std__vector_int__std__allocator_int_______int_(t349, t350, &ref_tmp2327);
    int cast352 = (int)r351;
    mycount320 = cast352;
    char* cast353 = (char*)&(_str_2);
    struct std__basic_ostream_char__std__char_traits_char__* r354 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast353);
    int t355 = mycount320;
    struct std__basic_ostream_char__std__char_traits_char__* r356 = std__ostream__operator__(r354, t355);
    char* cast357 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* r358 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r356, cast357);
    int c359 = 0;
    __retval319 = c359;
    int t360 = __retval319;
    int ret_val361 = t360;
    {
      std__vector_int__std__allocator_int______vector(&myvector323);
    }
    return ret_val361;
  int t362 = __retval319;
  return t362;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v363) {
bb364:
  struct std____new_allocator_int_* this365;
  this365 = v363;
  struct std____new_allocator_int_* t366 = this365;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v367, struct std__allocator_int_* v368) {
bb369:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this370;
  struct std__allocator_int_* __a371;
  this370 = v367;
  __a371 = v368;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t372 = this370;
  struct std__allocator_int_* base373 = (struct std__allocator_int_*)((char *)t372 + 0);
  struct std__allocator_int_* t374 = __a371;
  std__allocator_int___allocator(base373, t374);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base375 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t372 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base375);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v376) {
bb377:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this378;
  this378 = v376;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t379 = this378;
  {
    struct std__allocator_int_* base380 = (struct std__allocator_int_*)((char *)t379 + 0);
    std__allocator_int____allocator(base380);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v381, struct std__allocator_int_* v382) {
bb383:
  struct std___Vector_base_int__std__allocator_int__* this384;
  struct std__allocator_int_* __a385;
  this384 = v381;
  __a385 = v382;
  struct std___Vector_base_int__std__allocator_int__* t386 = this384;
  struct std__allocator_int_* t387 = __a385;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t386->_M_impl, t387);
  return;
}

// function: _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_
long _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_(struct std__ranges____distance_fn* v388, int** v389, int* v390) {
bb391:
  struct std__ranges____distance_fn* this392;
  int** __first393;
  int* __last394;
  long __retval395;
  this392 = v388;
  __first393 = v389;
  __last394 = v390;
  struct std__ranges____distance_fn* t396 = this392;
  int* t397 = __last394;
  int** t398 = __first393;
  int* t399 = *t398;
  long diff400 = t397 - t399;
  __retval395 = diff400;
  long t401 = __retval395;
  return t401;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb402:
  _Bool __retval403;
    _Bool c404 = 0;
    __retval403 = c404;
    _Bool t405 = __retval403;
    return t405;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v406) {
bb407:
  struct std____new_allocator_int_* this408;
  unsigned long __retval409;
  this408 = v406;
  struct std____new_allocator_int_* t410 = this408;
  unsigned long c411 = 9223372036854775807;
  unsigned long c412 = 4;
  unsigned long b413 = c411 / c412;
  __retval409 = b413;
  unsigned long t414 = __retval409;
  return t414;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v415, unsigned long v416, void* v417) {
bb418:
  struct std____new_allocator_int_* this419;
  unsigned long __n420;
  void* unnamed421;
  int* __retval422;
  this419 = v415;
  __n420 = v416;
  unnamed421 = v417;
  struct std____new_allocator_int_* t423 = this419;
    unsigned long t424 = __n420;
    unsigned long r425 = std____new_allocator_int____M_max_size___const(t423);
    _Bool c426 = ((t424 > r425)) ? 1 : 0;
    if (c426) {
        unsigned long t427 = __n420;
        unsigned long c428 = -1;
        unsigned long c429 = 4;
        unsigned long b430 = c428 / c429;
        _Bool c431 = ((t427 > b430)) ? 1 : 0;
        if (c431) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c432 = 4;
    unsigned long c433 = 16;
    _Bool c434 = ((c432 > c433)) ? 1 : 0;
    if (c434) {
      unsigned long __al435;
      unsigned long c436 = 4;
      __al435 = c436;
      unsigned long t437 = __n420;
      unsigned long c438 = 4;
      unsigned long b439 = t437 * c438;
      unsigned long t440 = __al435;
      void* r441 = operator_new_2(b439, t440);
      int* cast442 = (int*)r441;
      __retval422 = cast442;
      int* t443 = __retval422;
      return t443;
    }
  unsigned long t444 = __n420;
  unsigned long c445 = 4;
  unsigned long b446 = t444 * c445;
  void* r447 = operator_new(b446);
  int* cast448 = (int*)r447;
  __retval422 = cast448;
  int* t449 = __retval422;
  return t449;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v450, unsigned long v451) {
bb452:
  struct std__allocator_int_* this453;
  unsigned long __n454;
  int* __retval455;
  this453 = v450;
  __n454 = v451;
  struct std__allocator_int_* t456 = this453;
    _Bool r457 = std____is_constant_evaluated();
    if (r457) {
        unsigned long t458 = __n454;
        unsigned long c459 = 4;
        unsigned long ovr460;
        _Bool ovf461 = __builtin_mul_overflow(t458, c459, &ovr460);
        __n454 = ovr460;
        if (ovf461) {
          std____throw_bad_array_new_length();
        }
      unsigned long t462 = __n454;
      void* r463 = operator_new(t462);
      int* cast464 = (int*)r463;
      __retval455 = cast464;
      int* t465 = __retval455;
      return t465;
    }
  struct std____new_allocator_int_* base466 = (struct std____new_allocator_int_*)((char *)t456 + 0);
  unsigned long t467 = __n454;
  void* c468 = ((void*)0);
  int* r469 = std____new_allocator_int___allocate(base466, t467, c468);
  __retval455 = r469;
  int* t470 = __retval455;
  return t470;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v471, unsigned long v472) {
bb473:
  struct std__allocator_int_* __a474;
  unsigned long __n475;
  int* __retval476;
  __a474 = v471;
  __n475 = v472;
  struct std__allocator_int_* t477 = __a474;
  unsigned long t478 = __n475;
  int* r479 = std__allocator_int___allocate(t477, t478);
  __retval476 = r479;
  int* t480 = __retval476;
  return t480;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v481, unsigned long v482) {
bb483:
  struct std___Vector_base_int__std__allocator_int__* this484;
  unsigned long __n485;
  int* __retval486;
  this484 = v481;
  __n485 = v482;
  struct std___Vector_base_int__std__allocator_int__* t487 = this484;
  unsigned long t488 = __n485;
  unsigned long c489 = 0;
  _Bool c490 = ((t488 != c489)) ? 1 : 0;
  int* ternary491;
  if (c490) {
    struct std__allocator_int_* base492 = (struct std__allocator_int_*)((char *)&(t487->_M_impl) + 0);
    unsigned long t493 = __n485;
    int* r494 = std__allocator_traits_std__allocator_int_____allocate(base492, t493);
    ternary491 = (int*)r494;
  } else {
    int* c495 = ((void*)0);
    ternary491 = (int*)c495;
  }
  __retval486 = ternary491;
  int* t496 = __retval486;
  return t496;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v497, unsigned long* v498) {
bb499:
  unsigned long* __a500;
  unsigned long* __b501;
  unsigned long* __retval502;
  __a500 = v497;
  __b501 = v498;
    unsigned long* t503 = __b501;
    unsigned long t504 = *t503;
    unsigned long* t505 = __a500;
    unsigned long t506 = *t505;
    _Bool c507 = ((t504 < t506)) ? 1 : 0;
    if (c507) {
      unsigned long* t508 = __b501;
      __retval502 = t508;
      unsigned long* t509 = __retval502;
      return t509;
    }
  unsigned long* t510 = __a500;
  __retval502 = t510;
  unsigned long* t511 = __retval502;
  return t511;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v512) {
bb513:
  struct std__allocator_int_* __a514;
  unsigned long __retval515;
  unsigned long __diffmax516;
  unsigned long __allocmax517;
  __a514 = v512;
  unsigned long c518 = 2305843009213693951;
  __diffmax516 = c518;
  unsigned long c519 = 4611686018427387903;
  __allocmax517 = c519;
  unsigned long* r520 = unsigned_long_const__std__min_unsigned_long_(&__diffmax516, &__allocmax517);
  unsigned long t521 = *r520;
  __retval515 = t521;
  unsigned long t522 = __retval515;
  return t522;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v523, struct std__allocator_int_* v524) {
bb525:
  struct std__allocator_int_* this526;
  struct std__allocator_int_* __a527;
  this526 = v523;
  __a527 = v524;
  struct std__allocator_int_* t528 = this526;
  struct std____new_allocator_int_* base529 = (struct std____new_allocator_int_*)((char *)t528 + 0);
  struct std__allocator_int_* t530 = __a527;
  struct std____new_allocator_int_* base531 = (struct std____new_allocator_int_*)((char *)t530 + 0);
  std____new_allocator_int_____new_allocator(base529, base531);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v532, struct std__allocator_int_* v533) {
bb534:
  unsigned long __n535;
  struct std__allocator_int_* __a536;
  unsigned long __retval537;
  __n535 = v532;
  __a536 = v533;
    struct std__allocator_int_ ref_tmp0538;
    _Bool tmp_exprcleanup539;
    unsigned long t540 = __n535;
    struct std__allocator_int_* t541 = __a536;
    std__allocator_int___allocator(&ref_tmp0538, t541);
      unsigned long r542 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp0538);
      _Bool c543 = ((t540 > r542)) ? 1 : 0;
      tmp_exprcleanup539 = c543;
    {
      std__allocator_int____allocator(&ref_tmp0538);
    }
    _Bool t544 = tmp_exprcleanup539;
    if (t544) {
      char* cast545 = (char*)&(_str_3);
      std____throw_length_error(cast545);
    }
  unsigned long t546 = __n535;
  __retval537 = t546;
  unsigned long t547 = __retval537;
  return t547;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v548) {
bb549:
  struct std___Vector_base_int__std__allocator_int__* this550;
  struct std__allocator_int_* __retval551;
  this550 = v548;
  struct std___Vector_base_int__std__allocator_int__* t552 = this550;
  struct std__allocator_int_* base553 = (struct std__allocator_int_*)((char *)&(t552->_M_impl) + 0);
  __retval551 = base553;
  struct std__allocator_int_* t554 = __retval551;
  return t554;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb555:
  _Bool __retval556;
    _Bool c557 = 0;
    __retval556 = c557;
    _Bool t558 = __retval556;
    return t558;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v559, int** v560) {
bb561:
  struct std___UninitDestroyGuard_int____void_* this562;
  int** __first563;
  this562 = v559;
  __first563 = v560;
  struct std___UninitDestroyGuard_int____void_* t564 = this562;
  int** t565 = __first563;
  int* t566 = *t565;
  t564->_M_first = t566;
  int** t567 = __first563;
  t564->_M_cur = t567;
  return;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v568, int* v569) {
bb570:
  int* __location571;
  int* __args572;
  int* __retval573;
  void* __loc574;
  __location571 = v568;
  __args572 = v569;
  int* t575 = __location571;
  void* cast576 = (void*)t575;
  __loc574 = cast576;
    void* t577 = __loc574;
    int* cast578 = (int*)t577;
    int* t579 = __args572;
    int t580 = *t579;
    *cast578 = t580;
    __retval573 = cast578;
    int* t581 = __retval573;
    return t581;
  abort();
}

// function: _ZSt10_ConstructIiJRiEEvPT_DpOT0_
void void_std___Construct_int__int__(int* v582, int* v583) {
bb584:
  int* __p585;
  int* __args586;
  __p585 = v582;
  __args586 = v583;
    _Bool r587 = std____is_constant_evaluated();
    if (r587) {
      int* t588 = __p585;
      int* t589 = __args586;
      int* r590 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t588, t589);
      return;
    }
  int* t591 = __p585;
  void* cast592 = (void*)t591;
  int* cast593 = (int*)cast592;
  int* t594 = __args586;
  int t595 = *t594;
  *cast593 = t595;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v596) {
bb597:
  struct std___UninitDestroyGuard_int____void_* this598;
  this598 = v596;
  struct std___UninitDestroyGuard_int____void_* t599 = this598;
  int** c600 = ((void*)0);
  t599->_M_cur = c600;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v601) {
bb602:
  struct std___UninitDestroyGuard_int____void_* this603;
  this603 = v601;
  struct std___UninitDestroyGuard_int____void_* t604 = this603;
    int** t605 = t604->_M_cur;
    int** c606 = ((void*)0);
    _Bool c607 = ((t605 != c606)) ? 1 : 0;
    if (c607) {
      int* t608 = t604->_M_first;
      int** t609 = t604->_M_cur;
      int* t610 = *t609;
      void_std___Destroy_int__(t608, t610);
    }
  return;
}

// function: _ZSt16__do_uninit_copyIPiS0_S0_ET1_T_T0_S1_
int* int__std____do_uninit_copy_int___int___int__(int* v611, int* v612, int* v613) {
bb614:
  int* __first615;
  int* __last616;
  int* __result617;
  int* __retval618;
  struct std___UninitDestroyGuard_int____void_ __guard619;
  __first615 = v611;
  __last616 = v612;
  __result617 = v613;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard619, &__result617);
      while (1) {
        int* t621 = __first615;
        int* t622 = __last616;
        _Bool c623 = ((t621 != t622)) ? 1 : 0;
        if (!c623) break;
        int* t624 = __result617;
        int* t625 = __first615;
        void_std___Construct_int__int__(t624, t625);
      for_step620: ;
        int* t626 = __first615;
        int c627 = 1;
        int* ptr628 = &(t626)[c627];
        __first615 = ptr628;
        int* t629 = __result617;
        int c630 = 1;
        int* ptr631 = &(t629)[c630];
        __result617 = ptr631;
      }
    std___UninitDestroyGuard_int___void___release(&__guard619);
    int* t632 = __result617;
    __retval618 = t632;
    int* t633 = __retval618;
    int* ret_val634 = t633;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard619);
    }
    return ret_val634;
  abort();
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v635) {
bb636:
  int* __it637;
  int* __retval638;
  __it637 = v635;
  int* t639 = __it637;
  __retval638 = t639;
  int* t640 = __retval638;
  return t640;
}

// function: _ZSt18uninitialized_copyIPiS0_ET0_T_S2_S1_
int* int__std__uninitialized_copy_int___int__(int* v641, int* v642, int* v643) {
bb644:
  int* __first645;
  int* __last646;
  int* __result647;
  int* __retval648;
  __first645 = v641;
  __last646 = v642;
  __result647 = v643;
      long __n649;
      int* t650 = __last646;
      int* t651 = __first645;
      long diff652 = t650 - t651;
      __n649 = diff652;
        long t653 = __n649;
        long c654 = 0;
        _Bool c655 = ((t653 > c654)) ? 1 : 0;
        if (c655) {
          int* t656 = __result647;
          int* r657 = int__std____niter_base_int__(t656);
          void* cast658 = (void*)r657;
          int* t659 = __first645;
          int* r660 = int__std____niter_base_int__(t659);
          void* cast661 = (void*)r660;
          long t662 = __n649;
          unsigned long cast663 = (unsigned long)t662;
          unsigned long c664 = 4;
          unsigned long b665 = cast663 * c664;
          void* r666 = memcpy(cast658, cast661, b665);
          long t667 = __n649;
          int* t668 = __result647;
          int* ptr669 = &(t668)[t667];
          __result647 = ptr669;
        }
      int* t670 = __result647;
      __retval648 = t670;
      int* t671 = __retval648;
      return t671;
  abort();
}

// function: _ZSt22__uninitialized_copy_aIPiS0_S0_iET1_T_T0_S1_RSaIT2_E
int* int__std____uninitialized_copy_a_int___int___int___int_(int* v672, int* v673, int* v674, struct std__allocator_int_* v675) {
bb676:
  int* __first677;
  int* __last678;
  int* __result679;
  struct std__allocator_int_* unnamed680;
  int* __retval681;
  __first677 = v672;
  __last678 = v673;
  __result679 = v674;
  unnamed680 = v675;
    _Bool r682 = std__is_constant_evaluated();
    if (r682) {
      int* t683 = __first677;
      int* t684 = __last678;
      int* t685 = __result679;
      int* r686 = int__std____do_uninit_copy_int___int___int__(t683, t684, t685);
      __retval681 = r686;
      int* t687 = __retval681;
      return t687;
    }
    int* t688 = __first677;
    int* t689 = __last678;
    int* t690 = __result679;
    int* r691 = int__std__uninitialized_copy_int___int__(t688, t689, t690);
    __retval681 = r691;
    int* t692 = __retval681;
    return t692;
  abort();
}

// function: _ZNSt6vectorIiSaIiEE21_M_range_initialize_nIPiS3_EEvT_T0_m
void void_std__vector_int__std__allocator_int______M_range_initialize_n_int___int__(struct std__vector_int__std__allocator_int__* v693, int* v694, int* v695, unsigned long v696) {
bb697:
  struct std__vector_int__std__allocator_int__* this698;
  int* __first699;
  int* __last700;
  unsigned long __n701;
  int* __start702;
  this698 = v693;
  __first699 = v694;
  __last700 = v695;
  __n701 = v696;
  struct std__vector_int__std__allocator_int__* t703 = this698;
  struct std___Vector_base_int__std__allocator_int__* base704 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t703 + 0);
  unsigned long t705 = __n701;
  struct std___Vector_base_int__std__allocator_int__* base706 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t703 + 0);
  struct std__allocator_int_* r707 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base706);
  unsigned long r708 = std__vector_int__std__allocator_int______S_check_init_len(t705, r707);
  int* r709 = std___Vector_base_int__std__allocator_int______M_allocate(base704, r708);
  __start702 = r709;
  int* t710 = __start702;
  struct std___Vector_base_int__std__allocator_int__* base711 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t703 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base712 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base711->_M_impl) + 0);
  base712->_M_finish = t710;
  struct std___Vector_base_int__std__allocator_int__* base713 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t703 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base714 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base713->_M_impl) + 0);
  base714->_M_start = t710;
  int* t715 = __start702;
  unsigned long t716 = __n701;
  int* ptr717 = &(t715)[t716];
  struct std___Vector_base_int__std__allocator_int__* base718 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t703 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base719 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base718->_M_impl) + 0);
  base719->_M_end_of_storage = ptr717;
  int* t720 = __first699;
  int* t721 = __last700;
  int* t722 = __start702;
  struct std___Vector_base_int__std__allocator_int__* base723 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t703 + 0);
  struct std__allocator_int_* r724 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base723);
  int* r725 = int__std____uninitialized_copy_a_int___int___int___int_(t720, t721, t722, r724);
  struct std___Vector_base_int__std__allocator_int__* base726 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t703 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base727 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base726->_M_impl) + 0);
  base727->_M_finish = r725;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v728, int* v729, unsigned long v730) {
bb731:
  struct std____new_allocator_int_* this732;
  int* __p733;
  unsigned long __n734;
  this732 = v728;
  __p733 = v729;
  __n734 = v730;
  struct std____new_allocator_int_* t735 = this732;
    unsigned long c736 = 4;
    unsigned long c737 = 16;
    _Bool c738 = ((c736 > c737)) ? 1 : 0;
    if (c738) {
      int* t739 = __p733;
      void* cast740 = (void*)t739;
      unsigned long t741 = __n734;
      unsigned long c742 = 4;
      unsigned long b743 = t741 * c742;
      unsigned long c744 = 4;
      operator_delete_3(cast740, b743, c744);
      return;
    }
  int* t745 = __p733;
  void* cast746 = (void*)t745;
  unsigned long t747 = __n734;
  unsigned long c748 = 4;
  unsigned long b749 = t747 * c748;
  operator_delete_2(cast746, b749);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v750, int* v751, unsigned long v752) {
bb753:
  struct std__allocator_int_* this754;
  int* __p755;
  unsigned long __n756;
  this754 = v750;
  __p755 = v751;
  __n756 = v752;
  struct std__allocator_int_* t757 = this754;
    _Bool r758 = std____is_constant_evaluated();
    if (r758) {
      int* t759 = __p755;
      void* cast760 = (void*)t759;
      operator_delete(cast760);
      return;
    }
  struct std____new_allocator_int_* base761 = (struct std____new_allocator_int_*)((char *)t757 + 0);
  int* t762 = __p755;
  unsigned long t763 = __n756;
  std____new_allocator_int___deallocate(base761, t762, t763);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v764, int* v765, unsigned long v766) {
bb767:
  struct std__allocator_int_* __a768;
  int* __p769;
  unsigned long __n770;
  __a768 = v764;
  __p769 = v765;
  __n770 = v766;
  struct std__allocator_int_* t771 = __a768;
  int* t772 = __p769;
  unsigned long t773 = __n770;
  std__allocator_int___deallocate(t771, t772, t773);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v774, int* v775, unsigned long v776) {
bb777:
  struct std___Vector_base_int__std__allocator_int__* this778;
  int* __p779;
  unsigned long __n780;
  this778 = v774;
  __p779 = v775;
  __n780 = v776;
  struct std___Vector_base_int__std__allocator_int__* t781 = this778;
    int* t782 = __p779;
    _Bool cast783 = (_Bool)t782;
    if (cast783) {
      struct std__allocator_int_* base784 = (struct std__allocator_int_*)((char *)&(t781->_M_impl) + 0);
      int* t785 = __p779;
      unsigned long t786 = __n780;
      std__allocator_traits_std__allocator_int_____deallocate(base784, t785, t786);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v787) {
bb788:
  struct std___Vector_base_int__std__allocator_int__* this789;
  this789 = v787;
  struct std___Vector_base_int__std__allocator_int__* t790 = this789;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base791 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t790->_M_impl) + 0);
    int* t792 = base791->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base793 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t790->_M_impl) + 0);
    int* t794 = base793->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base795 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t790->_M_impl) + 0);
    int* t796 = base795->_M_start;
    long diff797 = t794 - t796;
    unsigned long cast798 = (unsigned long)diff797;
    std___Vector_base_int__std__allocator_int______M_deallocate(t790, t792, cast798);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t790->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v799, struct std____new_allocator_int_* v800) {
bb801:
  struct std____new_allocator_int_* this802;
  struct std____new_allocator_int_* unnamed803;
  this802 = v799;
  unnamed803 = v800;
  struct std____new_allocator_int_* t804 = this802;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v805) {
bb806:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this807;
  this807 = v805;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t808 = this807;
  int* c809 = ((void*)0);
  t808->_M_start = c809;
  int* c810 = ((void*)0);
  t808->_M_finish = c810;
  int* c811 = ((void*)0);
  t808->_M_end_of_storage = c811;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v812) {
bb813:
  int* __location814;
  __location814 = v812;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v815, int* v816) {
bb817:
  int* __first818;
  int* __last819;
  __first818 = v815;
  __last819 = v816;
      _Bool r820 = std____is_constant_evaluated();
      if (r820) {
          while (1) {
            int* t822 = __first818;
            int* t823 = __last819;
            _Bool c824 = ((t822 != t823)) ? 1 : 0;
            if (!c824) break;
            int* t825 = __first818;
            void_std__destroy_at_int_(t825);
          for_step821: ;
            int* t826 = __first818;
            int c827 = 1;
            int* ptr828 = &(t826)[c827];
            __first818 = ptr828;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v829, int* v830, struct std__allocator_int_* v831) {
bb832:
  int* __first833;
  int* __last834;
  struct std__allocator_int_* unnamed835;
  __first833 = v829;
  __last834 = v830;
  unnamed835 = v831;
  int* t836 = __first833;
  int* t837 = __last834;
  void_std___Destroy_int__(t836, t837);
  return;
}

