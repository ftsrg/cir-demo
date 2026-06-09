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

int __const_main_myints[5] = {10, 20, 30, 30, 20};
int _ZNSt8ios_base6badbitE_const __attribute__((aligned(4))) = 1;
extern struct std__basic_ostream_char__std__char_traits_char__ _ZSt4cout __attribute__((aligned(8)));
char _str[12] = "10 appears ";
char _str_1[9] = " times.\n";
char _str_2[13] = "mycount != 2";
char _str_3[109] = "/home/levente/Documents/University/cir/cir-demo/benchmarks/sources/esbmc-eval/algorithm/algorithm70/main.cpp";
char __PRETTY_FUNCTION___main[11] = "int main()";
char _str_4[12] = "20 appears ";
struct std__ranges____distance_fn _ZNSt6ranges8distanceE;
char _str_5[49] = "cannot create std::vector larger than max_size()";
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
extern void __assert_fail(char* p0, char* p1, unsigned int p2, char* p3);
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
  int myints321[5];
  int ref_tmp0322;
  struct std__vector_int__std__allocator_int__ myvector323;
  struct std__allocator_int_ ref_tmp1324;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp0325;
  struct __gnu_cxx____normal_iterator_int____std__vector_int__std__allocator_int___ agg_tmp1326;
  int ref_tmp2327;
  int c328 = 0;
  __retval319 = c328;
  // array copy
  __builtin_memcpy(myints321, __const_main_myints, (unsigned long)5 * sizeof(__const_main_myints[0]));
  int* cast329 = (int*)&(myints321);
  int* cast330 = (int*)&(myints321);
  int c331 = 5;
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
    int t353 = mycount320;
    int c354 = 2;
    _Bool c355 = ((t353 != c354)) ? 1 : 0;
    if (c355) {
    } else {
      char* cast356 = (char*)&(_str_2);
      char* c357 = _str_3;
      unsigned int c358 = 26;
      char* cast359 = (char*)&(__PRETTY_FUNCTION___main);
      __assert_fail(cast356, c357, c358, cast359);
    }
    char* cast360 = (char*)&(_str_4);
    struct std__basic_ostream_char__std__char_traits_char__* r361 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(&_ZSt4cout, cast360);
    int t362 = mycount320;
    struct std__basic_ostream_char__std__char_traits_char__* r363 = std__ostream__operator__(r361, t362);
    char* cast364 = (char*)&(_str_1);
    struct std__basic_ostream_char__std__char_traits_char__* r365 = std__basic_ostream_char__std__char_traits_char_____std__operator____std__char_traits_char___(r363, cast364);
    int c366 = 0;
    __retval319 = c366;
    int t367 = __retval319;
    int ret_val368 = t367;
    {
      std__vector_int__std__allocator_int______vector(&myvector323);
    }
    return ret_val368;
  int t369 = __retval319;
  return t369;
}

// function: _ZNSt15__new_allocatorIiEC2Ev
void std____new_allocator_int_____new_allocator_2(struct std____new_allocator_int_* v370) {
bb371:
  struct std____new_allocator_int_* this372;
  this372 = v370;
  struct std____new_allocator_int_* t373 = this372;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v374, struct std__allocator_int_* v375) {
bb376:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this377;
  struct std__allocator_int_* __a378;
  this377 = v374;
  __a378 = v375;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t379 = this377;
  struct std__allocator_int_* base380 = (struct std__allocator_int_*)((char *)t379 + 0);
  struct std__allocator_int_* t381 = __a378;
  std__allocator_int___allocator(base380, t381);
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base382 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)t379 + 0);
    std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(base382);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(struct std___Vector_base_int__std__allocator_int_____Vector_impl* v383) {
bb384:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* this385;
  this385 = v383;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl* t386 = this385;
  {
    struct std__allocator_int_* base387 = (struct std__allocator_int_*)((char *)t386 + 0);
    std__allocator_int____allocator(base387);
  }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEEC2ERKS0_
void std___Vector_base_int__std__allocator_int______Vector_base(struct std___Vector_base_int__std__allocator_int__* v388, struct std__allocator_int_* v389) {
bb390:
  struct std___Vector_base_int__std__allocator_int__* this391;
  struct std__allocator_int_* __a392;
  this391 = v388;
  __a392 = v389;
  struct std___Vector_base_int__std__allocator_int__* t393 = this391;
  struct std__allocator_int_* t394 = __a392;
  std___Vector_base_int__std__allocator_int______Vector_impl___Vector_impl(&t393->_M_impl, t394);
  return;
}

// function: _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_
long _ZNKSt6ranges13__distance_fnclIRPiTkSt18sized_sentinel_forINSt5decayIT_E4typeEES2_EENSt8__detail18__iter_traits_implINSt12remove_cvrefIS8_E4typeESt20incrementable_traitsISD_EE4type15difference_typeEOS6_T0_(struct std__ranges____distance_fn* v395, int** v396, int* v397) {
bb398:
  struct std__ranges____distance_fn* this399;
  int** __first400;
  int* __last401;
  long __retval402;
  this399 = v395;
  __first400 = v396;
  __last401 = v397;
  struct std__ranges____distance_fn* t403 = this399;
  int* t404 = __last401;
  int** t405 = __first400;
  int* t406 = *t405;
  long diff407 = t404 - t406;
  __retval402 = diff407;
  long t408 = __retval402;
  return t408;
}

// function: _ZSt23__is_constant_evaluatedv
_Bool std____is_constant_evaluated() {
bb409:
  _Bool __retval410;
    _Bool c411 = 0;
    __retval410 = c411;
    _Bool t412 = __retval410;
    return t412;
  abort();
}

// function: _ZNKSt15__new_allocatorIiE11_M_max_sizeEv
unsigned long std____new_allocator_int____M_max_size___const(struct std____new_allocator_int_* v413) {
bb414:
  struct std____new_allocator_int_* this415;
  unsigned long __retval416;
  this415 = v413;
  struct std____new_allocator_int_* t417 = this415;
  unsigned long c418 = 9223372036854775807;
  unsigned long c419 = 4;
  unsigned long b420 = c418 / c419;
  __retval416 = b420;
  unsigned long t421 = __retval416;
  return t421;
}

// function: _ZNSt15__new_allocatorIiE8allocateEmPKv
int* std____new_allocator_int___allocate(struct std____new_allocator_int_* v422, unsigned long v423, void* v424) {
bb425:
  struct std____new_allocator_int_* this426;
  unsigned long __n427;
  void* unnamed428;
  int* __retval429;
  this426 = v422;
  __n427 = v423;
  unnamed428 = v424;
  struct std____new_allocator_int_* t430 = this426;
    unsigned long t431 = __n427;
    unsigned long r432 = std____new_allocator_int____M_max_size___const(t430);
    _Bool c433 = ((t431 > r432)) ? 1 : 0;
    if (c433) {
        unsigned long t434 = __n427;
        unsigned long c435 = -1;
        unsigned long c436 = 4;
        unsigned long b437 = c435 / c436;
        _Bool c438 = ((t434 > b437)) ? 1 : 0;
        if (c438) {
          std____throw_bad_array_new_length();
        }
      std____throw_bad_alloc();
    }
    unsigned long c439 = 4;
    unsigned long c440 = 16;
    _Bool c441 = ((c439 > c440)) ? 1 : 0;
    if (c441) {
      unsigned long __al442;
      unsigned long c443 = 4;
      __al442 = c443;
      unsigned long t444 = __n427;
      unsigned long c445 = 4;
      unsigned long b446 = t444 * c445;
      unsigned long t447 = __al442;
      void* r448 = operator_new_2(b446, t447);
      int* cast449 = (int*)r448;
      __retval429 = cast449;
      int* t450 = __retval429;
      return t450;
    }
  unsigned long t451 = __n427;
  unsigned long c452 = 4;
  unsigned long b453 = t451 * c452;
  void* r454 = operator_new(b453);
  int* cast455 = (int*)r454;
  __retval429 = cast455;
  int* t456 = __retval429;
  return t456;
}

// function: _ZNSaIiE8allocateEm
int* std__allocator_int___allocate(struct std__allocator_int_* v457, unsigned long v458) {
bb459:
  struct std__allocator_int_* this460;
  unsigned long __n461;
  int* __retval462;
  this460 = v457;
  __n461 = v458;
  struct std__allocator_int_* t463 = this460;
    _Bool r464 = std____is_constant_evaluated();
    if (r464) {
        unsigned long t465 = __n461;
        unsigned long c466 = 4;
        unsigned long ovr467;
        _Bool ovf468 = __builtin_mul_overflow(t465, c466, &ovr467);
        __n461 = ovr467;
        if (ovf468) {
          std____throw_bad_array_new_length();
        }
      unsigned long t469 = __n461;
      void* r470 = operator_new(t469);
      int* cast471 = (int*)r470;
      __retval462 = cast471;
      int* t472 = __retval462;
      return t472;
    }
  struct std____new_allocator_int_* base473 = (struct std____new_allocator_int_*)((char *)t463 + 0);
  unsigned long t474 = __n461;
  void* c475 = ((void*)0);
  int* r476 = std____new_allocator_int___allocate(base473, t474, c475);
  __retval462 = r476;
  int* t477 = __retval462;
  return t477;
}

// function: _ZNSt16allocator_traitsISaIiEE8allocateERS0_m
int* std__allocator_traits_std__allocator_int_____allocate(struct std__allocator_int_* v478, unsigned long v479) {
bb480:
  struct std__allocator_int_* __a481;
  unsigned long __n482;
  int* __retval483;
  __a481 = v478;
  __n482 = v479;
  struct std__allocator_int_* t484 = __a481;
  unsigned long t485 = __n482;
  int* r486 = std__allocator_int___allocate(t484, t485);
  __retval483 = r486;
  int* t487 = __retval483;
  return t487;
}

// function: _ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
int* std___Vector_base_int__std__allocator_int______M_allocate(struct std___Vector_base_int__std__allocator_int__* v488, unsigned long v489) {
bb490:
  struct std___Vector_base_int__std__allocator_int__* this491;
  unsigned long __n492;
  int* __retval493;
  this491 = v488;
  __n492 = v489;
  struct std___Vector_base_int__std__allocator_int__* t494 = this491;
  unsigned long t495 = __n492;
  unsigned long c496 = 0;
  _Bool c497 = ((t495 != c496)) ? 1 : 0;
  int* ternary498;
  if (c497) {
    struct std__allocator_int_* base499 = (struct std__allocator_int_*)((char *)&(t494->_M_impl) + 0);
    unsigned long t500 = __n492;
    int* r501 = std__allocator_traits_std__allocator_int_____allocate(base499, t500);
    ternary498 = (int*)r501;
  } else {
    int* c502 = ((void*)0);
    ternary498 = (int*)c502;
  }
  __retval493 = ternary498;
  int* t503 = __retval493;
  return t503;
}

// function: _ZSt3minImERKT_S2_S2_
unsigned long* unsigned_long_const__std__min_unsigned_long_(unsigned long* v504, unsigned long* v505) {
bb506:
  unsigned long* __a507;
  unsigned long* __b508;
  unsigned long* __retval509;
  __a507 = v504;
  __b508 = v505;
    unsigned long* t510 = __b508;
    unsigned long t511 = *t510;
    unsigned long* t512 = __a507;
    unsigned long t513 = *t512;
    _Bool c514 = ((t511 < t513)) ? 1 : 0;
    if (c514) {
      unsigned long* t515 = __b508;
      __retval509 = t515;
      unsigned long* t516 = __retval509;
      return t516;
    }
  unsigned long* t517 = __a507;
  __retval509 = t517;
  unsigned long* t518 = __retval509;
  return t518;
}

// function: _ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
unsigned long std__vector_int__std__allocator_int______S_max_size(struct std__allocator_int_* v519) {
bb520:
  struct std__allocator_int_* __a521;
  unsigned long __retval522;
  unsigned long __diffmax523;
  unsigned long __allocmax524;
  __a521 = v519;
  unsigned long c525 = 2305843009213693951;
  __diffmax523 = c525;
  unsigned long c526 = 4611686018427387903;
  __allocmax524 = c526;
  unsigned long* r527 = unsigned_long_const__std__min_unsigned_long_(&__diffmax523, &__allocmax524);
  unsigned long t528 = *r527;
  __retval522 = t528;
  unsigned long t529 = __retval522;
  return t529;
}

// function: _ZNSaIiEC2ERKS_
void std__allocator_int___allocator(struct std__allocator_int_* v530, struct std__allocator_int_* v531) {
bb532:
  struct std__allocator_int_* this533;
  struct std__allocator_int_* __a534;
  this533 = v530;
  __a534 = v531;
  struct std__allocator_int_* t535 = this533;
  struct std____new_allocator_int_* base536 = (struct std____new_allocator_int_*)((char *)t535 + 0);
  struct std__allocator_int_* t537 = __a534;
  struct std____new_allocator_int_* base538 = (struct std____new_allocator_int_*)((char *)t537 + 0);
  std____new_allocator_int_____new_allocator(base536, base538);
  return;
}

// function: _ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
unsigned long std__vector_int__std__allocator_int______S_check_init_len(unsigned long v539, struct std__allocator_int_* v540) {
bb541:
  unsigned long __n542;
  struct std__allocator_int_* __a543;
  unsigned long __retval544;
  __n542 = v539;
  __a543 = v540;
    struct std__allocator_int_ ref_tmp0545;
    _Bool tmp_exprcleanup546;
    unsigned long t547 = __n542;
    struct std__allocator_int_* t548 = __a543;
    std__allocator_int___allocator(&ref_tmp0545, t548);
      unsigned long r549 = std__vector_int__std__allocator_int______S_max_size(&ref_tmp0545);
      _Bool c550 = ((t547 > r549)) ? 1 : 0;
      tmp_exprcleanup546 = c550;
    {
      std__allocator_int____allocator(&ref_tmp0545);
    }
    _Bool t551 = tmp_exprcleanup546;
    if (t551) {
      char* cast552 = (char*)&(_str_5);
      std____throw_length_error(cast552);
    }
  unsigned long t553 = __n542;
  __retval544 = t553;
  unsigned long t554 = __retval544;
  return t554;
}

// function: _ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
struct std__allocator_int_* std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(struct std___Vector_base_int__std__allocator_int__* v555) {
bb556:
  struct std___Vector_base_int__std__allocator_int__* this557;
  struct std__allocator_int_* __retval558;
  this557 = v555;
  struct std___Vector_base_int__std__allocator_int__* t559 = this557;
  struct std__allocator_int_* base560 = (struct std__allocator_int_*)((char *)&(t559->_M_impl) + 0);
  __retval558 = base560;
  struct std__allocator_int_* t561 = __retval558;
  return t561;
}

// function: _ZSt21is_constant_evaluatedv
_Bool std__is_constant_evaluated() {
bb562:
  _Bool __retval563;
    _Bool c564 = 0;
    __retval563 = c564;
    _Bool t565 = __retval563;
    return t565;
  abort();
}

// function: _ZNSt19_UninitDestroyGuardIPivEC2ERS0_
void std___UninitDestroyGuard_int___void____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v566, int** v567) {
bb568:
  struct std___UninitDestroyGuard_int____void_* this569;
  int** __first570;
  this569 = v566;
  __first570 = v567;
  struct std___UninitDestroyGuard_int____void_* t571 = this569;
  int** t572 = __first570;
  int* t573 = *t572;
  t571->_M_first = t573;
  int** t574 = __first570;
  t571->_M_cur = t574;
  return;
}

// function: _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_
int* _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(int* v575, int* v576) {
bb577:
  int* __location578;
  int* __args579;
  int* __retval580;
  void* __loc581;
  __location578 = v575;
  __args579 = v576;
  int* t582 = __location578;
  void* cast583 = (void*)t582;
  __loc581 = cast583;
    void* t584 = __loc581;
    int* cast585 = (int*)t584;
    int* t586 = __args579;
    int t587 = *t586;
    *cast585 = t587;
    __retval580 = cast585;
    int* t588 = __retval580;
    return t588;
  abort();
}

// function: _ZSt10_ConstructIiJRiEEvPT_DpOT0_
void void_std___Construct_int__int__(int* v589, int* v590) {
bb591:
  int* __p592;
  int* __args593;
  __p592 = v589;
  __args593 = v590;
    _Bool r594 = std____is_constant_evaluated();
    if (r594) {
      int* t595 = __p592;
      int* t596 = __args593;
      int* r597 = _ZSt12construct_atIiJRiEQaant20is_unbounded_array_vIT_ErqXgsnwcvPvLi0E_S1_pispclsr3stdE7declvalIT0_EEEEEPS1_S4_DpOS3_(t595, t596);
      return;
    }
  int* t598 = __p592;
  void* cast599 = (void*)t598;
  int* cast600 = (int*)cast599;
  int* t601 = __args593;
  int t602 = *t601;
  *cast600 = t602;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivE7releaseEv
void std___UninitDestroyGuard_int___void___release(struct std___UninitDestroyGuard_int____void_* v603) {
bb604:
  struct std___UninitDestroyGuard_int____void_* this605;
  this605 = v603;
  struct std___UninitDestroyGuard_int____void_* t606 = this605;
  int** c607 = ((void*)0);
  t606->_M_cur = c607;
  return;
}

// function: _ZNSt19_UninitDestroyGuardIPivED2Ev
void std___UninitDestroyGuard_int___void_____UninitDestroyGuard(struct std___UninitDestroyGuard_int____void_* v608) {
bb609:
  struct std___UninitDestroyGuard_int____void_* this610;
  this610 = v608;
  struct std___UninitDestroyGuard_int____void_* t611 = this610;
    int** t612 = t611->_M_cur;
    int** c613 = ((void*)0);
    _Bool c614 = ((t612 != c613)) ? 1 : 0;
    if (c614) {
      int* t615 = t611->_M_first;
      int** t616 = t611->_M_cur;
      int* t617 = *t616;
      void_std___Destroy_int__(t615, t617);
    }
  return;
}

// function: _ZSt16__do_uninit_copyIPiS0_S0_ET1_T_T0_S1_
int* int__std____do_uninit_copy_int___int___int__(int* v618, int* v619, int* v620) {
bb621:
  int* __first622;
  int* __last623;
  int* __result624;
  int* __retval625;
  struct std___UninitDestroyGuard_int____void_ __guard626;
  __first622 = v618;
  __last623 = v619;
  __result624 = v620;
  std___UninitDestroyGuard_int___void____UninitDestroyGuard(&__guard626, &__result624);
      while (1) {
        int* t628 = __first622;
        int* t629 = __last623;
        _Bool c630 = ((t628 != t629)) ? 1 : 0;
        if (!c630) break;
        int* t631 = __result624;
        int* t632 = __first622;
        void_std___Construct_int__int__(t631, t632);
      for_step627: ;
        int* t633 = __first622;
        int c634 = 1;
        int* ptr635 = &(t633)[c634];
        __first622 = ptr635;
        int* t636 = __result624;
        int c637 = 1;
        int* ptr638 = &(t636)[c637];
        __result624 = ptr638;
      }
    std___UninitDestroyGuard_int___void___release(&__guard626);
    int* t639 = __result624;
    __retval625 = t639;
    int* t640 = __retval625;
    int* ret_val641 = t640;
    {
      std___UninitDestroyGuard_int___void_____UninitDestroyGuard(&__guard626);
    }
    return ret_val641;
  abort();
}

// function: _ZSt12__niter_baseIPiET_S1_
int* int__std____niter_base_int__(int* v642) {
bb643:
  int* __it644;
  int* __retval645;
  __it644 = v642;
  int* t646 = __it644;
  __retval645 = t646;
  int* t647 = __retval645;
  return t647;
}

// function: _ZSt18uninitialized_copyIPiS0_ET0_T_S2_S1_
int* int__std__uninitialized_copy_int___int__(int* v648, int* v649, int* v650) {
bb651:
  int* __first652;
  int* __last653;
  int* __result654;
  int* __retval655;
  __first652 = v648;
  __last653 = v649;
  __result654 = v650;
      long __n656;
      int* t657 = __last653;
      int* t658 = __first652;
      long diff659 = t657 - t658;
      __n656 = diff659;
        long t660 = __n656;
        long c661 = 0;
        _Bool c662 = ((t660 > c661)) ? 1 : 0;
        if (c662) {
          int* t663 = __result654;
          int* r664 = int__std____niter_base_int__(t663);
          void* cast665 = (void*)r664;
          int* t666 = __first652;
          int* r667 = int__std____niter_base_int__(t666);
          void* cast668 = (void*)r667;
          long t669 = __n656;
          unsigned long cast670 = (unsigned long)t669;
          unsigned long c671 = 4;
          unsigned long b672 = cast670 * c671;
          void* r673 = memcpy(cast665, cast668, b672);
          long t674 = __n656;
          int* t675 = __result654;
          int* ptr676 = &(t675)[t674];
          __result654 = ptr676;
        }
      int* t677 = __result654;
      __retval655 = t677;
      int* t678 = __retval655;
      return t678;
  abort();
}

// function: _ZSt22__uninitialized_copy_aIPiS0_S0_iET1_T_T0_S1_RSaIT2_E
int* int__std____uninitialized_copy_a_int___int___int___int_(int* v679, int* v680, int* v681, struct std__allocator_int_* v682) {
bb683:
  int* __first684;
  int* __last685;
  int* __result686;
  struct std__allocator_int_* unnamed687;
  int* __retval688;
  __first684 = v679;
  __last685 = v680;
  __result686 = v681;
  unnamed687 = v682;
    _Bool r689 = std__is_constant_evaluated();
    if (r689) {
      int* t690 = __first684;
      int* t691 = __last685;
      int* t692 = __result686;
      int* r693 = int__std____do_uninit_copy_int___int___int__(t690, t691, t692);
      __retval688 = r693;
      int* t694 = __retval688;
      return t694;
    }
    int* t695 = __first684;
    int* t696 = __last685;
    int* t697 = __result686;
    int* r698 = int__std__uninitialized_copy_int___int__(t695, t696, t697);
    __retval688 = r698;
    int* t699 = __retval688;
    return t699;
  abort();
}

// function: _ZNSt6vectorIiSaIiEE21_M_range_initialize_nIPiS3_EEvT_T0_m
void void_std__vector_int__std__allocator_int______M_range_initialize_n_int___int__(struct std__vector_int__std__allocator_int__* v700, int* v701, int* v702, unsigned long v703) {
bb704:
  struct std__vector_int__std__allocator_int__* this705;
  int* __first706;
  int* __last707;
  unsigned long __n708;
  int* __start709;
  this705 = v700;
  __first706 = v701;
  __last707 = v702;
  __n708 = v703;
  struct std__vector_int__std__allocator_int__* t710 = this705;
  struct std___Vector_base_int__std__allocator_int__* base711 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t710 + 0);
  unsigned long t712 = __n708;
  struct std___Vector_base_int__std__allocator_int__* base713 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t710 + 0);
  struct std__allocator_int_* r714 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base713);
  unsigned long r715 = std__vector_int__std__allocator_int______S_check_init_len(t712, r714);
  int* r716 = std___Vector_base_int__std__allocator_int______M_allocate(base711, r715);
  __start709 = r716;
  int* t717 = __start709;
  struct std___Vector_base_int__std__allocator_int__* base718 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t710 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base719 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base718->_M_impl) + 0);
  base719->_M_finish = t717;
  struct std___Vector_base_int__std__allocator_int__* base720 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t710 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base721 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base720->_M_impl) + 0);
  base721->_M_start = t717;
  int* t722 = __start709;
  unsigned long t723 = __n708;
  int* ptr724 = &(t722)[t723];
  struct std___Vector_base_int__std__allocator_int__* base725 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t710 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base726 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base725->_M_impl) + 0);
  base726->_M_end_of_storage = ptr724;
  int* t727 = __first706;
  int* t728 = __last707;
  int* t729 = __start709;
  struct std___Vector_base_int__std__allocator_int__* base730 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t710 + 0);
  struct std__allocator_int_* r731 = std___Vector_base_int__std__allocator_int______M_get_Tp_allocator(base730);
  int* r732 = int__std____uninitialized_copy_a_int___int___int___int_(t727, t728, t729, r731);
  struct std___Vector_base_int__std__allocator_int__* base733 = (struct std___Vector_base_int__std__allocator_int__*)((char *)t710 + 0);
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base734 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(base733->_M_impl) + 0);
  base734->_M_finish = r732;
  return;
}

// function: _ZNSt15__new_allocatorIiE10deallocateEPim
void std____new_allocator_int___deallocate(struct std____new_allocator_int_* v735, int* v736, unsigned long v737) {
bb738:
  struct std____new_allocator_int_* this739;
  int* __p740;
  unsigned long __n741;
  this739 = v735;
  __p740 = v736;
  __n741 = v737;
  struct std____new_allocator_int_* t742 = this739;
    unsigned long c743 = 4;
    unsigned long c744 = 16;
    _Bool c745 = ((c743 > c744)) ? 1 : 0;
    if (c745) {
      int* t746 = __p740;
      void* cast747 = (void*)t746;
      unsigned long t748 = __n741;
      unsigned long c749 = 4;
      unsigned long b750 = t748 * c749;
      unsigned long c751 = 4;
      operator_delete_3(cast747, b750, c751);
      return;
    }
  int* t752 = __p740;
  void* cast753 = (void*)t752;
  unsigned long t754 = __n741;
  unsigned long c755 = 4;
  unsigned long b756 = t754 * c755;
  operator_delete_2(cast753, b756);
  return;
}

// function: _ZNSaIiE10deallocateEPim
void std__allocator_int___deallocate(struct std__allocator_int_* v757, int* v758, unsigned long v759) {
bb760:
  struct std__allocator_int_* this761;
  int* __p762;
  unsigned long __n763;
  this761 = v757;
  __p762 = v758;
  __n763 = v759;
  struct std__allocator_int_* t764 = this761;
    _Bool r765 = std____is_constant_evaluated();
    if (r765) {
      int* t766 = __p762;
      void* cast767 = (void*)t766;
      operator_delete(cast767);
      return;
    }
  struct std____new_allocator_int_* base768 = (struct std____new_allocator_int_*)((char *)t764 + 0);
  int* t769 = __p762;
  unsigned long t770 = __n763;
  std____new_allocator_int___deallocate(base768, t769, t770);
  return;
}

// function: _ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
void std__allocator_traits_std__allocator_int_____deallocate(struct std__allocator_int_* v771, int* v772, unsigned long v773) {
bb774:
  struct std__allocator_int_* __a775;
  int* __p776;
  unsigned long __n777;
  __a775 = v771;
  __p776 = v772;
  __n777 = v773;
  struct std__allocator_int_* t778 = __a775;
  int* t779 = __p776;
  unsigned long t780 = __n777;
  std__allocator_int___deallocate(t778, t779, t780);
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
void std___Vector_base_int__std__allocator_int______M_deallocate(struct std___Vector_base_int__std__allocator_int__* v781, int* v782, unsigned long v783) {
bb784:
  struct std___Vector_base_int__std__allocator_int__* this785;
  int* __p786;
  unsigned long __n787;
  this785 = v781;
  __p786 = v782;
  __n787 = v783;
  struct std___Vector_base_int__std__allocator_int__* t788 = this785;
    int* t789 = __p786;
    _Bool cast790 = (_Bool)t789;
    if (cast790) {
      struct std__allocator_int_* base791 = (struct std__allocator_int_*)((char *)&(t788->_M_impl) + 0);
      int* t792 = __p786;
      unsigned long t793 = __n787;
      std__allocator_traits_std__allocator_int_____deallocate(base791, t792, t793);
    }
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEED2Ev
void std___Vector_base_int__std__allocator_int_______Vector_base(struct std___Vector_base_int__std__allocator_int__* v794) {
bb795:
  struct std___Vector_base_int__std__allocator_int__* this796;
  this796 = v794;
  struct std___Vector_base_int__std__allocator_int__* t797 = this796;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base798 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t797->_M_impl) + 0);
    int* t799 = base798->_M_start;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base800 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t797->_M_impl) + 0);
    int* t801 = base800->_M_end_of_storage;
    struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* base802 = (struct std___Vector_base_int__std__allocator_int_____Vector_impl_data*)((char *)&(t797->_M_impl) + 0);
    int* t803 = base802->_M_start;
    long diff804 = t801 - t803;
    unsigned long cast805 = (unsigned long)diff804;
    std___Vector_base_int__std__allocator_int______M_deallocate(t797, t799, cast805);
  {
    std___Vector_base_int__std__allocator_int______Vector_impl____Vector_impl(&t797->_M_impl);
  }
  return;
}

// function: _ZNSt15__new_allocatorIiEC2ERKS0_
void std____new_allocator_int_____new_allocator(struct std____new_allocator_int_* v806, struct std____new_allocator_int_* v807) {
bb808:
  struct std____new_allocator_int_* this809;
  struct std____new_allocator_int_* unnamed810;
  this809 = v806;
  unnamed810 = v807;
  struct std____new_allocator_int_* t811 = this809;
  return;
}

// function: _ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
void std___Vector_base_int__std__allocator_int______Vector_impl_data___Vector_impl_data(struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* v812) {
bb813:
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* this814;
  this814 = v812;
  struct std___Vector_base_int__std__allocator_int_____Vector_impl_data* t815 = this814;
  int* c816 = ((void*)0);
  t815->_M_start = c816;
  int* c817 = ((void*)0);
  t815->_M_finish = c817;
  int* c818 = ((void*)0);
  t815->_M_end_of_storage = c818;
  return;
}

// function: _ZSt10destroy_atIiEvPT_
void void_std__destroy_at_int_(int* v819) {
bb820:
  int* __location821;
  __location821 = v819;
  return;
}

// function: _ZSt8_DestroyIPiEvT_S1_
void void_std___Destroy_int__(int* v822, int* v823) {
bb824:
  int* __first825;
  int* __last826;
  __first825 = v822;
  __last826 = v823;
      _Bool r827 = std____is_constant_evaluated();
      if (r827) {
          while (1) {
            int* t829 = __first825;
            int* t830 = __last826;
            _Bool c831 = ((t829 != t830)) ? 1 : 0;
            if (!c831) break;
            int* t832 = __first825;
            void_std__destroy_at_int_(t832);
          for_step828: ;
            int* t833 = __first825;
            int c834 = 1;
            int* ptr835 = &(t833)[c834];
            __first825 = ptr835;
          }
      }
  return;
}

// function: _ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
void void_std___Destroy_int___int_(int* v836, int* v837, struct std__allocator_int_* v838) {
bb839:
  int* __first840;
  int* __last841;
  struct std__allocator_int_* unnamed842;
  __first840 = v836;
  __last841 = v837;
  unnamed842 = v838;
  int* t843 = __first840;
  int* t844 = __last841;
  void_std___Destroy_int__(t843, t844);
  return;
}

